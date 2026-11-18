// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 707

// PositionCurve'' @ 1411a6960

void __cdecl `dynamic_initializer_for_'FSpline::PositionCurve__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSpline::PositionCurve__);
  return;
}

// RotationCurve'' @ 1411a6980

void __cdecl `dynamic_initializer_for_'FSpline::RotationCurve__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSpline::RotationCurve__);
  return;
}

// ScaleCurve'' @ 1411a69a0

void __cdecl `dynamic_initializer_for_'FSpline::ScaleCurve__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSpline::ScaleCurve__);
  return;
}

// `dynamic_initializer_for_'ActorReferenceAttribute'' @ 1411a69c0

void __cdecl PCGPointDataConstants::_dynamic_initializer_for__ActorReferenceAttribute__(void)

{
  ::FName::FName(&ActorReferenceAttribute,L"ActorReference");
  return;
}

// `dynamic_initializer_for_'AddDataLayersAttribute'' @ 1411a69e0

void __cdecl
PCGDataLayerHelpers::Constants::_dynamic_initializer_for__AddDataLayersAttribute__(void)

{
  ::FName::FName(&AddDataLayersAttribute,L"AddDataLayers");
  return;
}

// `dynamic_initializer_for_'AlphaAttributeName'' @ 1411a6a00

void __cdecl PCGSplineSamplerConstants::_dynamic_initializer_for__AlphaAttributeName__(void)

{
  ::FName::FName(&AlphaAttributeName,L"Alpha");
  return;
}

// `dynamic_initializer_for_'ArriveTangentAttributeName'' @ 1411a6a20

void __cdecl PCGSplineSamplerConstants::_dynamic_initializer_for__ArriveTangentAttributeName__(void)

{
  ::FName::FName(&ArriveTangentAttributeName,L"ArriveTangent");
  return;
}

// `dynamic_initializer_for_'BoundingShape'' @ 1411a6a40

void __cdecl
PCGWorldRaycastElement::Constants::Labels::_dynamic_initializer_for__BoundingShape__(void)

{
  ::FName::FName(&BoundingShape,L"Bounding Shape");
  return;
}

// `dynamic_initializer_for_'BoundingShapeLabel'' @ 1411a6a60

void __cdecl PCGSplineSamplerConstants::_dynamic_initializer_for__BoundingShapeLabel__(void)

{
  ::FName::FName(&BoundingShapeLabel,L"Bounding Shape");
  return;
}

// `dynamic_initializer_for_'BoundingShapeLabel'' @ 1411a6a80

void __cdecl PCGSurfaceSamplerConstants::_dynamic_initializer_for__BoundingShapeLabel__(void)

{
  ::FName::FName(&BoundingShapeLabel,L"Bounding Shape");
  return;
}

// `dynamic_initializer_for_'BoundingShapeLabel'' @ 1411a6aa0

void __cdecl PCGVolumeSamplerConstants::_dynamic_initializer_for__BoundingShapeLabel__(void)

{
  ::FName::FName(&BoundingShapeLabel,L"Bounding Shape");
  return;
}

// `dynamic_initializer_for_'BoxSweep'' @ 1411a6ac0

void __cdecl PCGWorldRaycastElement::Constants::Labels::_dynamic_initializer_for__BoxSweep__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&BoxSweep,L"PCGWorldRaycastElement",L"BoxSweepLabel",L"Box Sweep");
  atexit(_dynamic_atexit_destructor_for__BoxSweep__);
  return;
}

// `dynamic_initializer_for_'BoxSweep'' @ 1411a6b00

void __cdecl PCGWorldRaycastElement::Constants::Tooltips::_dynamic_initializer_for__BoxSweep__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&BoxSweep,L"PCGWorldRaycastElement",L"BoxSweepTooltip",
             L"Casts a box sweep along a given ray.");
  atexit(_dynamic_atexit_destructor_for__BoxSweep__);
  return;
}

// `dynamic_initializer_for_'CVarAllowActorReuse'' @ 1411a6b40

void __cdecl _dynamic_initializer_for__CVarAllowActorReuse__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarAllowActorReuse,L"pcg.Actor.AllowReuse",local_res8,
             L"Controls whether PCG spawned actors can be reused and skipped when re-executing",0);
  atexit(_dynamic_atexit_destructor_for__CVarAllowActorReuse__);
  return;
}

// `dynamic_initializer_for_'CVarAllowISMReuse'' @ 1411a6b90

void __cdecl _dynamic_initializer_for__CVarAllowISMReuse__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarAllowISMReuse,L"pcg.ISM.AllowReuse",local_res8,
             L"Controls whether ISMs can be reused and skipped when re-executing",0);
  atexit(_dynamic_atexit_destructor_for__CVarAllowISMReuse__);
  return;
}

// `dynamic_initializer_for_'CapsuleSweep'' @ 1411a6be0

void __cdecl
PCGWorldRaycastElement::Constants::Labels::_dynamic_initializer_for__CapsuleSweep__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&CapsuleSweep,L"PCGWorldRaycastElement",L"CapsuleSweepLabel",L"Capsule Sweep");
  atexit(_dynamic_atexit_destructor_for__CapsuleSweep__);
  return;
}

// `dynamic_initializer_for_'CapsuleSweep'' @ 1411a6c20

void __cdecl
PCGWorldRaycastElement::Constants::Tooltips::_dynamic_initializer_for__CapsuleSweep__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&CapsuleSweep,L"PCGWorldRaycastElement",L"CapsuleSweepTooltip",
             L"Casts a capsule sweep along a given ray.");
  atexit(_dynamic_atexit_destructor_for__CapsuleSweep__);
  return;
}

// `dynamic_initializer_for_'CategoryMetadataName'' @ 1411a6c60

void __cdecl PCGPropertyHelpers::Constants::_dynamic_initializer_for__CategoryMetadataName__(void)

{
  ::FName::FName(&CategoryMetadataName,"Category");
  return;
}

// `dynamic_initializer_for_'CompactNodeConvert'' @ 1411a6c80

void __cdecl PCGNodeConstants::Icons::_dynamic_initializer_for__CompactNodeConvert__(void)

{
  ::FName::FName(&CompactNodeConvert,L"PCG.Node.Compact.Convert");
  return;
}

// `dynamic_initializer_for_'CompactNodeFilter'' @ 1411a6ca0

void __cdecl PCGNodeConstants::Icons::_dynamic_initializer_for__CompactNodeFilter__(void)

{
  ::FName::FName(&CompactNodeFilter,L"PCG.Node.Compact.Filter");
  return;
}

// `dynamic_initializer_for_'ComponentReferenceAttribute'' @ 1411a6cc0

void __cdecl PCGAddComponentConstants::_dynamic_initializer_for__ComponentReferenceAttribute__(void)

{
  ::FName::FName(&ComponentReferenceAttribute,L"ComponentReference");
  return;
}

// `dynamic_initializer_for_'ControlPointDomainName'' @ 1411a6ce0

void __cdecl PCGSplineData::_dynamic_initializer_for__ControlPointDomainName__(void)

{
  ::FName::FName(&ControlPointDomainName,"ControlPoints");
  return;
}

// `dynamic_initializer_for_'CurvatureAttributeName'' @ 1411a6d00

void __cdecl PCGSplineSamplerConstants::_dynamic_initializer_for__CurvatureAttributeName__(void)

{
  ::FName::FName(&CurvatureAttributeName,L"Curvature");
  return;
}

// `dynamic_initializer_for_'Data'' @ 1411a6d20

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

// `dynamic_initializer_for_'DataDomainName'' @ 1411a6d60

void __cdecl PCGDataConstants::_dynamic_initializer_for__DataDomainName__(void)

{
  ::FName::FName(&DataDomainName,"Data");
  return;
}

// `dynamic_initializer_for_'DataLayerReferenceAttribute'' @ 1411a6d80

void __cdecl
PCGDataLayerHelpers::Constants::_dynamic_initializer_for__DataLayerReferenceAttribute__(void)

{
  ::FName::FName(&DataLayerReferenceAttribute,L"DataLayerReference");
  return;
}

// `dynamic_initializer_for_'Default'' @ 1411a6da0

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

// `dynamic_initializer_for_'DefaultDependencyOnlyLabel'' @ 1411a6de0

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultDependencyOnlyLabel__(void)

{
  ::FName::FName(&DefaultDependencyOnlyLabel,L"Dependency Only");
  return;
}

// `dynamic_initializer_for_'DefaultDomainName'' @ 1411a6e00

void __cdecl PCGDataConstants::_dynamic_initializer_for__DefaultDomainName__(void)

{
  ::FName::FName(&DefaultDomainName,"Default");
  return;
}

// `dynamic_initializer_for_'DefaultExecutionDependencyLabel'' @ 1411a6e20

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultExecutionDependencyLabel__(void)

{
  ::FName::FName(&DefaultExecutionDependencyLabel,L"Execution Dependency");
  return;
}

// `dynamic_initializer_for_'DefaultInFilterLabel'' @ 1411a6e40

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultInFilterLabel__(void)

{
  ::FName::FName(&DefaultInFilterLabel,L"InsideFilter");
  return;
}

// `dynamic_initializer_for_'DefaultInputLabel'' @ 1411a6e60

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultInputLabel__(void)

{
  ::FName::FName(&DefaultInputLabel,L"In");
  return;
}

// `dynamic_initializer_for_'DefaultNodeTitle'' @ 1411a6e80

void __cdecl PCGWorldRaycastElement::Constants::_dynamic_initializer_for__DefaultNodeTitle__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&DefaultNodeTitle,L"PCGWorldRaycastElement",L"NodeTitle",L"World Raycast");
  atexit(_dynamic_atexit_destructor_for__DefaultNodeTitle__);
  return;
}

// `dynamic_initializer_for_'DefaultOutFilterLabel'' @ 1411a6ec0

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultOutFilterLabel__(void)

{
  ::FName::FName(&DefaultOutFilterLabel,L"OutsideFilter");
  return;
}

// `dynamic_initializer_for_'DefaultOutputLabel'' @ 1411a6ee0

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultOutputLabel__(void)

{
  ::FName::FName(&DefaultOutputLabel,L"Out");
  return;
}

// `dynamic_initializer_for_'DefaultPCGActorTag'' @ 1411a6f00

void __cdecl PCGHelpers::_dynamic_initializer_for__DefaultPCGActorTag__(void)

{
  ::FName::FName(&DefaultPCGActorTag,L"PCG Generated Actor");
  return;
}

// `dynamic_initializer_for_'DefaultPCGDebugTag'' @ 1411a6f20

void __cdecl PCGHelpers::_dynamic_initializer_for__DefaultPCGDebugTag__(void)

{
  ::FName::FName(&DefaultPCGDebugTag,L"PCG Generated Debug Component");
  return;
}

// `dynamic_initializer_for_'DefaultPCGTag'' @ 1411a6f40

void __cdecl PCGHelpers::_dynamic_initializer_for__DefaultPCGTag__(void)

{
  ::FName::FName(&DefaultPCGTag,L"PCG Generated Component");
  return;
}

// `dynamic_initializer_for_'DefaultParamsLabel'' @ 1411a6f60

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultParamsLabel__(void)

{
  ::FName::FName(&DefaultParamsLabel,L"Overrides");
  return;
}

// `dynamic_initializer_for_'DistanceAttributeName'' @ 1411a6f80

void __cdecl PCGSplineSamplerConstants::_dynamic_initializer_for__DistanceAttributeName__(void)

{
  ::FName::FName(&DistanceAttributeName,L"Distance");
  return;
}

// `dynamic_initializer_for_'ElementIndexAttribute'' @ 1411a6fa0

void __cdecl PCGWorldQueryConstants::_dynamic_initializer_for__ElementIndexAttribute__(void)

{
  ::FName::FName(&ElementIndexAttribute,L"ImpactElementIndex");
  return;
}

// `dynamic_initializer_for_'Elements'' @ 1411a6fc0

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

// `dynamic_initializer_for_'ElementsDomainName'' @ 1411a7000

void __cdecl PCGParamDataConstants::_dynamic_initializer_for__ElementsDomainName__(void)

{
  ::FName::FName(&ElementsDomainName,"Elements");
  return;
}

// `dynamic_initializer_for_'ElementsDomainName'' @ 1411a7020

void __cdecl PCGPointDataConstants::_dynamic_initializer_for__ElementsDomainName__(void)

{
  ::FName::FName(&ElementsDomainName,"Points");
  return;
}

// `dynamic_initializer_for_'EnableCategoriesMetadataName'' @ 1411a7040

void __cdecl
PCGPropertyHelpers::Constants::_dynamic_initializer_for__EnableCategoriesMetadataName__(void)

{
  ::FName::FName(&EnableCategoriesMetadataName,"EnableCategories");
  return;
}

// `dynamic_initializer_for_'EndPointsInput'' @ 1411a7060

void __cdecl
PCGWorldRaycastElement::Constants::Labels::_dynamic_initializer_for__EndPointsInput__(void)

{
  ::FName::FName(&EndPointsInput,L"End Points");
  return;
}

// `dynamic_initializer_for_'ExcludedDataLayersAttribute'' @ 1411a7080

void __cdecl
PCGDataLayerHelpers::Constants::_dynamic_initializer_for__ExcludedDataLayersAttribute__(void)

{
  ::FName::FName(&ExcludedDataLayersAttribute,L"ExcludedDataLayers");
  return;
}

// `dynamic_initializer_for_'ExtentsName'' @ 1411a70a0

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__ExtentsName__(void)

{
  ::FName::FName(&ExtentsName,L"Extents");
  return;
}

// `dynamic_initializer_for_'FaceIndexAttribute'' @ 1411a70c0

void __cdecl PCGWorldQueryConstants::_dynamic_initializer_for__FaceIndexAttribute__(void)

{
  ::FName::FName(&FaceIndexAttribute,L"ImpactFaceIndex");
  return;
}

// `dynamic_initializer_for_'FeedbackPinIcon'' @ 1411a70e0

void __cdecl PCGPinConstants::Icons::_dynamic_initializer_for__FeedbackPinIcon__(void)

{
  ::FName::FName(&FeedbackPinIcon,L"GraphEditor.GetSequenceBinding");
  return;
}

// `dynamic_initializer_for_'FilterActorPinLabel'' @ 1411a7100

void __cdecl PCGWorldRayHitConstants::_dynamic_initializer_for__FilterActorPinLabel__(void)

{
  ::FName::FName(&FilterActorPinLabel,L"FilterActors");
  return;
}

// `dynamic_initializer_for_'GenericGetUserParameterNodeTitle'' @ 1411a7120

void __cdecl
PCGUserParameterGet::Constants::Conversion::
_dynamic_initializer_for__GenericGetUserParameterNodeTitle__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&GenericGetUserParameterNodeTitle,L"PCGUserParameterGetElement",
             L"GenericGetUserParameterNodeTitle",L"Get Graph Parameter (Generic)");
  atexit(_dynamic_atexit_destructor_for__GenericGetUserParameterNodeTitle__);
  return;
}

// `dynamic_initializer_for_'GenericToSpecificTooltip'' @ 1411a7160

void __cdecl
PCGUserParameterGet::Constants::Conversion::_dynamic_initializer_for__GenericToSpecificTooltip__
          (void)

{
  FText::AsLocalizable_Advanced_LocText
            (&GenericToSpecificTooltip,L"PCGUserParameterGetElement",L"GenericToSpecificTooltip",
             L"Convert to a specified Get User Parameter node.");
  atexit(_dynamic_atexit_destructor_for__GenericToSpecificTooltip__);
  return;
}

// `dynamic_initializer_for_'HLODLayerAttribute'' @ 1411a71a0

void __cdecl PCGHLODHelpers::Constants::_dynamic_initializer_for__HLODLayerAttribute__(void)

{
  ::FName::FName(&HLODLayerAttribute,L"HLODLayer");
  return;
}

// `dynamic_initializer_for_'ImpactAttribute'' @ 1411a71c0

void __cdecl PCGWorldQueryConstants::_dynamic_initializer_for__ImpactAttribute__(void)

{
  ::FName::FName(&ImpactAttribute,L"ImpactResult");
  return;
}

// `dynamic_initializer_for_'ImpactDistanceAttribute'' @ 1411a71e0

void __cdecl PCGWorldQueryConstants::_dynamic_initializer_for__ImpactDistanceAttribute__(void)

{
  ::FName::FName(&ImpactDistanceAttribute,L"ImpactDistance");
  return;
}

// `dynamic_initializer_for_'ImpactNormalAttribute'' @ 1411a7200

void __cdecl PCGWorldQueryConstants::_dynamic_initializer_for__ImpactNormalAttribute__(void)

{
  ::FName::FName(&ImpactNormalAttribute,L"ImpactNormal");
  return;
}

// `dynamic_initializer_for_'ImpactPointAttribute'' @ 1411a7220

void __cdecl PCGWorldQueryConstants::_dynamic_initializer_for__ImpactPointAttribute__(void)

{
  ::FName::FName(&ImpactPointAttribute,L"ImpactPoint");
  return;
}

// `dynamic_initializer_for_'ImpactReflectionAttribute'' @ 1411a7240

void __cdecl PCGWorldQueryConstants::_dynamic_initializer_for__ImpactReflectionAttribute__(void)

{
  ::FName::FName(&ImpactReflectionAttribute,L"ImpactReflection");
  return;
}

// `dynamic_initializer_for_'IncludedDataLayersAttribute'' @ 1411a7260

void __cdecl
PCGDataLayerHelpers::Constants::_dynamic_initializer_for__IncludedDataLayersAttribute__(void)

{
  ::FName::FName(&IncludedDataLayersAttribute,L"IncludedDataLayers");
  return;
}

// `dynamic_initializer_for_'InputKeyAttributeName'' @ 1411a7280

void __cdecl PCGSplineSamplerConstants::_dynamic_initializer_for__InputKeyAttributeName__(void)

{
  ::FName::FName(&InputKeyAttributeName,L"InputKey");
  return;
}

// `dynamic_initializer_for_'InstanceCountsPinLabel'' @ 1411a72a0

void __cdecl
PCGStaticMeshSpawnerKernelConstants::_dynamic_initializer_for__InstanceCountsPinLabel__(void)

{
  ::FName::FName(&InstanceCountsPinLabel,L"InstanceCounts");
  return;
}

// `dynamic_initializer_for_'IntersectingSplineIndexAttributeName'' @ 1411a72c0

void __cdecl
PCGSplineIntersection::Constants::_dynamic_initializer_for__IntersectingSplineIndexAttributeName__
          (void)

{
  ::FName::FName(&IntersectingSplineIndexAttributeName,L"IntersectingSplineIndex");
  return;
}

// `dynamic_initializer_for_'Invalid'' @ 1411a72e0

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

// `dynamic_initializer_for_'InvalidHoleIndex'' @ 1411a7320

void __cdecl PCGGetSegment::Log::_dynamic_initializer_for__InvalidHoleIndex__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&InvalidHoleIndex,L"PCGGetSegmentElement",L"InvalidHoleIndex",
             L"Invalid hole index; got \'{0}\', expected a value under \'{1}\'.");
  atexit(_dynamic_atexit_destructor_for__InvalidHoleIndex__);
  return;
}

// `dynamic_initializer_for_'InvalidSegmentIndex'' @ 1411a7360

void __cdecl PCGGetSegment::Log::_dynamic_initializer_for__InvalidSegmentIndex__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&InvalidSegmentIndex,L"PCGGetSegmentElement",L"InvalidSegmentIndex",
             L"Invalid segment index; got \'{0}\', expected a value between \'{1}\' and \'{2}\'.");
  atexit(_dynamic_atexit_destructor_for__InvalidSegmentIndex__);
  return;
}

// `dynamic_initializer_for_'LastAttributeName'' @ 1411a73a0

void __cdecl PCGMetadataAttributeConstants::_dynamic_initializer_for__LastAttributeName__(void)

{
  ::FName::FName(&LastAttributeName,L"@Last");
  return;
}

// `dynamic_initializer_for_'LastCreatedAttributeName'' @ 1411a73c0

void __cdecl
PCGMetadataAttributeConstants::_dynamic_initializer_for__LastCreatedAttributeName__(void)

{
  ::FName::FName(&LastCreatedAttributeName,L"@LastCreated");
  return;
}

// `dynamic_initializer_for_'LeaveTangentAttributeName'' @ 1411a73e0

void __cdecl PCGSplineSamplerConstants::_dynamic_initializer_for__LeaveTangentAttributeName__(void)

{
  ::FName::FName(&LeaveTangentAttributeName,L"LeaveTangent");
  return;
}

// `dynamic_initializer_for_'LineTrace'' @ 1411a7400

void __cdecl PCGWorldRaycastElement::Constants::Labels::_dynamic_initializer_for__LineTrace__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&LineTrace,L"PCGWorldRaycastElement",L"LineTraceLabel",L"Line Trace");
  atexit(_dynamic_atexit_destructor_for__LineTrace__);
  return;
}

// `dynamic_initializer_for_'LineTrace'' @ 1411a7440

void __cdecl
PCGWorldRaycastElement::Constants::Tooltips::_dynamic_initializer_for__LineTrace__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&LineTrace,L"PCGWorldRaycastElement",L"LineTraceTooltip",
             L"Conduct a trace along a given ray.");
  atexit(_dynamic_atexit_destructor_for__LineTrace__);
  return;
}

// `dynamic_initializer_for_'LocalCenterName'' @ 1411a7480

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__LocalCenterName__(void)

{
  ::FName::FName(&LocalCenterName,L"LocalCenter");
  return;
}

// `dynamic_initializer_for_'LocalImpactPointAttribute'' @ 1411a74a0

void __cdecl PCGWorldQueryConstants::_dynamic_initializer_for__LocalImpactPointAttribute__(void)

{
  ::FName::FName(&LocalImpactPointAttribute,L"ImpactLocalPoint");
  return;
}

// `dynamic_initializer_for_'LocalSizeName'' @ 1411a74c0

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__LocalSizeName__(void)

{
  ::FName::FName(&LocalSizeName,L"LocalSize");
  return;
}

// `dynamic_initializer_for_'LogSpline'' @ 1411a74e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::Geometry::Spline::_dynamic_initializer_for__LogSpline__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogSpline,L"LogSpline",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogSpline__);
  return;
}

// `dynamic_initializer_for_'LoopPinIcon'' @ 1411a7520

void __cdecl PCGPinConstants::Icons::_dynamic_initializer_for__LoopPinIcon__(void)

{
  ::FName::FName(&LoopPinIcon,L"GraphEditor.Macro.Loop_16x");
  return;
}

// `dynamic_initializer_for_'MarkedForCleanupPCGTag'' @ 1411a7540

void __cdecl PCGHelpers::_dynamic_initializer_for__MarkedForCleanupPCGTag__(void)

{
  ::FName::FName(&MarkedForCleanupPCGTag,L"PCG Marked For Cleanup");
  return;
}

// `dynamic_initializer_for_'NextDirectionDeltaAttributeName'' @ 1411a7560

void __cdecl
PCGSplineSamplerConstants::_dynamic_initializer_for__NextDirectionDeltaAttributeName__(void)

{
  ::FName::FName(&NextDirectionDeltaAttributeName,L"NextDirectionDelta");
  return;
}

// `dynamic_initializer_for_'NoMeshEntriesFormat'' @ 1411a7580

void __cdecl PCGStaticMeshSpawnerKernel::_dynamic_initializer_for__NoMeshEntriesFormat__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&NoMeshEntriesFormat,L"PCGStaticMeshSpawnerKernel",L"NoMeshEntries",
             L"No mesh entries provided in weighted mesh selector.");
  atexit(_dynamic_atexit_destructor_for__NoMeshEntriesFormat__);
  return;
}

// `dynamic_initializer_for_'OldDefaultParamsLabel'' @ 1411a75c0

void __cdecl PCGPinConstants::Private::_dynamic_initializer_for__OldDefaultParamsLabel__(void)

{
  ::FName::FName(&OldDefaultParamsLabel,L"Params");
  return;
}

// `dynamic_initializer_for_'OriginatingSplineIndexAttributeName'' @ 1411a75e0

void __cdecl
PCGSplineIntersection::Constants::_dynamic_initializer_for__OriginatingSplineIndexAttributeName__
          (void)

{
  ::FName::FName(&OriginatingSplineIndexAttributeName,L"OriginatingSplineIndex");
  return;
}

// `dynamic_initializer_for_'OriginsInput'' @ 1411a7600

void __cdecl
PCGWorldRaycastElement::Constants::Labels::_dynamic_initializer_for__OriginsInput__(void)

{
  ::FName::FName(&OriginsInput,L"Origins");
  return;
}

// `dynamic_initializer_for_'OutputALabel'' @ 1411a7620

void __cdecl PCGSplitPointsConstants::_dynamic_initializer_for__OutputALabel__(void)

{
  ::FName::FName(&OutputALabel,L"Before Split");
  return;
}

// `dynamic_initializer_for_'OutputBLabel'' @ 1411a7640

void __cdecl PCGSplitPointsConstants::_dynamic_initializer_for__OutputBLabel__(void)

{
  ::FName::FName(&OutputBLabel,L"After Split");
  return;
}

// `dynamic_initializer_for_'PhysicalMaterialReferenceAttribute'' @ 1411a7660

void __cdecl
PCGWorldQueryConstants::_dynamic_initializer_for__PhysicalMaterialReferenceAttribute__(void)

{
  ::FName::FName(&PhysicalMaterialReferenceAttribute,L"PhysicalMaterial");
  return;
}

// `dynamic_initializer_for_'PhysicalMaterialReferenceAttribute'' @ 1411a7680

void __cdecl
PCGWorldRayHitConstants::_dynamic_initializer_for__PhysicalMaterialReferenceAttribute__(void)

{
  PhysicalMaterialReferenceAttribute = PCGWorldQueryConstants::PhysicalMaterialReferenceAttribute;
  return;
}

// `dynamic_initializer_for_'PinLabelCinematic'' @ 1411a76a0

void __cdecl PCGQualityHelpers::_dynamic_initializer_for__PinLabelCinematic__(void)

{
  ::FName::FName(&PinLabelCinematic,L"Cinematic");
  return;
}

// `dynamic_initializer_for_'PinLabelDefault'' @ 1411a76c0

void __cdecl PCGQualityHelpers::_dynamic_initializer_for__PinLabelDefault__(void)

{
  ::FName::FName(&PinLabelDefault,L"Default");
  return;
}

// `dynamic_initializer_for_'PinLabelEpic'' @ 1411a76e0

void __cdecl PCGQualityHelpers::_dynamic_initializer_for__PinLabelEpic__(void)

{
  ::FName::FName(&PinLabelEpic,L"Epic");
  return;
}

// `dynamic_initializer_for_'PinLabelHigh'' @ 1411a7700

void __cdecl PCGQualityHelpers::_dynamic_initializer_for__PinLabelHigh__(void)

{
  ::FName::FName(&PinLabelHigh,L"High");
  return;
}

// `dynamic_initializer_for_'PinLabelLow'' @ 1411a7720

void __cdecl PCGQualityHelpers::_dynamic_initializer_for__PinLabelLow__(void)

{
  ::FName::FName(&PinLabelLow,L"Low");
  return;
}

// `dynamic_initializer_for_'PinLabelMedium'' @ 1411a7740

void __cdecl PCGQualityHelpers::_dynamic_initializer_for__PinLabelMedium__(void)

{
  ::FName::FName(&PinLabelMedium,L"Medium");
  return;
}

// `dynamic_initializer_for_'PositionName'' @ 1411a7760

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__PositionName__(void)

{
  ::FName::FName(&PositionName,L"Position");
  return;
}

// `dynamic_initializer_for_'RenderMaterialIndexAttribute'' @ 1411a7780

void __cdecl PCGWorldQueryConstants::_dynamic_initializer_for__RenderMaterialIndexAttribute__(void)

{
  ::FName::FName(&RenderMaterialIndexAttribute,L"ImpactRenderMaterialIndex");
  return;
}

// `dynamic_initializer_for_'RenderMaterialReferenceAttribute'' @ 1411a77a0

void __cdecl
PCGWorldQueryConstants::_dynamic_initializer_for__RenderMaterialReferenceAttribute__(void)

{
  ::FName::FName(&RenderMaterialReferenceAttribute,L"ImpactRenderMaterial");
  return;
}

// `dynamic_initializer_for_'RotationName'' @ 1411a77c0

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__RotationName__(void)

{
  ::FName::FName(&RotationName,L"Rotation");
  return;
}

// `dynamic_initializer_for_'ScaleName'' @ 1411a77e0

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__ScaleName__(void)

{
  ::FName::FName(&ScaleName,L"Scale");
  return;
}

// `dynamic_initializer_for_'ScaledLocalSizeName'' @ 1411a7800

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__ScaledLocalSizeName__(void)

{
  ::FName::FName(&ScaledLocalSizeName,L"ScaledLocalSize");
  return;
}

// `dynamic_initializer_for_'SectionIndexAttribute'' @ 1411a7820

void __cdecl PCGWorldQueryConstants::_dynamic_initializer_for__SectionIndexAttribute__(void)

{
  ::FName::FName(&SectionIndexAttribute,L"ImpactSectionIndex");
  return;
}

// `dynamic_initializer_for_'SegmentIndexAttributeName'' @ 1411a7840

void __cdecl PCGSplineSamplerConstants::_dynamic_initializer_for__SegmentIndexAttributeName__(void)

{
  ::FName::FName(&SegmentIndexAttributeName,L"SegmentIndex");
  return;
}

// `dynamic_initializer_for_'SourceAttributeName'' @ 1411a7860

void __cdecl PCGMetadataAttributeConstants::_dynamic_initializer_for__SourceAttributeName__(void)

{
  ::FName::FName(&SourceAttributeName,L"@Source");
  return;
}

// `dynamic_initializer_for_'SourceNameAttributeName'' @ 1411a7880

void __cdecl
PCGMetadataAttributeConstants::_dynamic_initializer_for__SourceNameAttributeName__(void)

{
  ::FName::FName(&SourceNameAttributeName,L"@SourceName");
  return;
}

// `dynamic_initializer_for_'SpecificGetUserParameterNodeTitle'' @ 1411a78a0

void __cdecl
PCGUserParameterGet::Constants::Conversion::
_dynamic_initializer_for__SpecificGetUserParameterNodeTitle__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&SpecificGetUserParameterNodeTitle,L"PCGUserParameterGetElement",
             L"SpecificGetUserParameterNodeTitle",L"Get Graph Parameter");
  atexit(_dynamic_atexit_destructor_for__SpecificGetUserParameterNodeTitle__);
  return;
}

// `dynamic_initializer_for_'SpecificToGenericTooltip'' @ 1411a78e0

void __cdecl
PCGUserParameterGet::Constants::Conversion::_dynamic_initializer_for__SpecificToGenericTooltip__
          (void)

{
  FText::AsLocalizable_Advanced_LocText
            (&SpecificToGenericTooltip,L"PCGUserParameterGetElement",L"SpecificToGenericTooltip",
             L"Convert to a Get User Parameter (Generic) node.");
  atexit(_dynamic_atexit_destructor_for__SpecificToGenericTooltip__);
  return;
}

// `dynamic_initializer_for_'SphereSweep'' @ 1411a7920

void __cdecl
PCGWorldRaycastElement::Constants::Labels::_dynamic_initializer_for__SphereSweep__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&SphereSweep,L"PCGWorldRaycastElement",L"SphereSweepLabel",L"Sphere Sweep");
  atexit(_dynamic_atexit_destructor_for__SphereSweep__);
  return;
}

// `dynamic_initializer_for_'SphereSweep'' @ 1411a7960

void __cdecl
PCGWorldRaycastElement::Constants::Tooltips::_dynamic_initializer_for__SphereSweep__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&SphereSweep,L"PCGWorldRaycastElement",L"SphereSweepTooltip",
             L"Casts a sphere sweep along a given ray.");
  atexit(_dynamic_atexit_destructor_for__SphereSweep__);
  return;
}

// `dynamic_initializer_for_'SplineLabel'' @ 1411a79a0

void __cdecl PCGSplineSamplerConstants::_dynamic_initializer_for__SplineLabel__(void)

{
  ::FName::FName(&SplineLabel,L"Spline");
  return;
}

// `dynamic_initializer_for_'SplitInfoLabel'' @ 1411a79c0

void __cdecl PCGSplitSplineConstants::_dynamic_initializer_for__SplitInfoLabel__(void)

{
  ::FName::FName(&SplitInfoLabel,L"SplitInfo");
  return;
}

// `dynamic_initializer_for_'StaticMeshReferenceAttribute'' @ 1411a79e0

void __cdecl PCGWorldQueryConstants::_dynamic_initializer_for__StaticMeshReferenceAttribute__(void)

{
  ::FName::FName(&StaticMeshReferenceAttribute,L"ImpactStaticMesh");
  return;
}

// `dynamic_initializer_for_'SubsegmentIndexAttributeName'' @ 1411a7a00

void __cdecl
PCGSplineSamplerConstants::_dynamic_initializer_for__SubsegmentIndexAttributeName__(void)

{
  ::FName::FName(&SubsegmentIndexAttributeName,L"SubsegmentIndex");
  return;
}

// `dynamic_initializer_for_'SurfaceLabel'' @ 1411a7a20

void __cdecl PCGSurfaceSamplerConstants::_dynamic_initializer_for__SurfaceLabel__(void)

{
  ::FName::FName(&SurfaceLabel,L"Surface");
  return;
}

// `dynamic_initializer_for_'TargetActorPinLabel'' @ 1411a7a40

void __cdecl PCGAddComponentConstants::_dynamic_initializer_for__TargetActorPinLabel__(void)

{
  ::FName::FName(&TargetActorPinLabel,L"TargetActor");
  return;
}

// `dynamic_initializer_for_'ToCreateConstantTooltip'' @ 1411a7a60

void __cdecl
PCGUserParameterGet::Constants::Conversion::_dynamic_initializer_for__ToCreateConstantTooltip__
          (void)

{
  FText::AsLocalizable_Advanced_LocText
            (&ToCreateConstantTooltip,L"PCGUserParameterGetElement",L"ToConstantTooltip",
             L"Convert to a Create Constant node.");
  atexit(_dynamic_atexit_destructor_for__ToCreateConstantTooltip__);
  return;
}

// `dynamic_initializer_for_'UVCoordAttribute'' @ 1411a7aa0

void __cdecl PCGWorldQueryConstants::_dynamic_initializer_for__UVCoordAttribute__(void)

{
  ::FName::FName(&UVCoordAttribute,L"ImpactUVCoords");
  return;
}

// `dynamic_initializer_for_'UserParameterTagData'' @ 1411a7ac0

void __cdecl PCGBaseSubgraphConstants::_dynamic_initializer_for__UserParameterTagData__(void)

{
  ::FString::FString(&UserParameterTagData,L"PCGUserParametersTagData");
  atexit(_dynamic_atexit_destructor_for__UserParameterTagData__);
  return;
}

// `dynamic_initializer_for_'ValueAttributeName'' @ 1411a7af0

void __cdecl
PCGCountUniqueAttributeValuesConstants::_dynamic_initializer_for__ValueAttributeName__(void)

{
  ::FName::FName(&ValueAttributeName,L"UniqueValue");
  return;
}

// `dynamic_initializer_for_'ValueCountAttributeName'' @ 1411a7b10

void __cdecl
PCGCountUniqueAttributeValuesConstants::_dynamic_initializer_for__ValueCountAttributeName__(void)

{
  ::FName::FName(&ValueCountAttributeName,L"UniqueValueCount");
  return;
}

// `dynamic_initializer_for_'VertexDomainName'' @ 1411a7b30

void __cdecl PCGPolygon2DData::_dynamic_initializer_for__VertexDomainName__(void)

{
  ::FName::FName(&VertexDomainName,"Vertices");
  return;
}

// `dynamic_initializer_for_'VolumeLabel'' @ 1411a7b50

void __cdecl PCGVolumeSamplerConstants::_dynamic_initializer_for__VolumeLabel__(void)

{
  ::FName::FName(&VolumeLabel,L"Volume");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSpawnActor_h__Script_PCG_2225488084'' @ 1411a7b70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSpawnActor_h__Script_PCG_2225488084__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSpawnActor_h__Script_PCG_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSpawnActor_h__Script_PCG_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSpawnSplineMesh_h__Script_PCG_1896025429'' @ 1411a7bc0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSpawnSplineMesh_h__Script_PCG_1896025429__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSpawnSplineMesh_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSpawnSpline_h__Script_PCG_2216988903'' @ 1411a7c00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSpawnSpline_h__Script_PCG_2216988903__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSpawnSpline_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplineDirection_h__Script_PCG_3475958827'' @ 1411a7c40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplineDirection_h__Script_PCG_3475958827__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplineDirection_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplineDirection_h__Script_PCG_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplineIntersection_h__Script_PCG_1173121117'' @ 1411a7c90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplineIntersection_h__Script_PCG_1173121117__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplineIntersection_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplineIntersection_h__Script_PCG_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplineMeshParams_h__Script_PCG_1740418931'' @ 1411a7ce0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplineMeshParams_h__Script_PCG_1740418931__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplineMeshParams_h__Script_PCG_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplineMeshParams_h__Script_PCG_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplineSampler_h__Script_PCG_2432256088'' @ 1411a7d30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplineSampler_h__Script_PCG_2432256088__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplineSampler_h__Script_PCG_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplineSampler_h__Script_PCG_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplineSampler_h__Script_PCG_Statics
             ::EnumInfo,5);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplitPoints_h__Script_PCG_365179740'' @ 1411a7d80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplitPoints_h__Script_PCG_365179740__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplitPoints_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplitPoints_h__Script_PCG_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplitSplines_h__Script_PCG_1183140310'' @ 1411a7dd0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplitSplines_h__Script_PCG_1183140310__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplitSplines_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplitSplines_h__Script_PCG_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGStaticMeshSpawnerContext_h__Script_PCG_639528738'' @ 1411a7e20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGStaticMeshSpawnerContext_h__Script_PCG_639528738__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGStaticMeshSpawnerContext_h__Script_PCG_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGStaticMeshSpawnerKernel_h__Script_PCG_3297224668'' @ 1411a7e60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGStaticMeshSpawnerKernel_h__Script_PCG_3297224668__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGStaticMeshSpawnerKernel_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGStaticMeshSpawner_h__Script_PCG_4145510716'' @ 1411a7ea0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGStaticMeshSpawner_h__Script_PCG_4145510716__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGStaticMeshSpawner_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSurfaceSampler_h__Script_PCG_3220707467'' @ 1411a7ee0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSurfaceSampler_h__Script_PCG_3220707467__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSurfaceSampler_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGTextureSampler_h__Script_PCG_2988507126'' @ 1411a7f20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGTextureSampler_h__Script_PCG_2988507126__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGTextureSampler_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGTransformPoints_h__Script_PCG_2492136168'' @ 1411a7f60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGTransformPoints_h__Script_PCG_2492136168__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGTransformPoints_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGTypedGetter_h__Script_PCG_4116335356'' @ 1411a7fa0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGTypedGetter_h__Script_PCG_4116335356__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGTypedGetter_h__Script_PCG_Statics
             ::ClassInfo,6,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGUnionElement_h__Script_PCG_846820717'' @ 1411a7fe0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGUnionElement_h__Script_PCG_846820717__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGUnionElement_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGUserParameterGet_h__Script_PCG_2723092778'' @ 1411a8020

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGUserParameterGet_h__Script_PCG_2723092778__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGUserParameterGet_h__Script_PCG_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGUserParameterGet_h__Script_PCG_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGVisualizeAttribute_h__Script_PCG_2040445160'' @ 1411a8070

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGVisualizeAttribute_h__Script_PCG_2040445160__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGVisualizeAttribute_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGVolumeSampler_h__Script_PCG_4031904493'' @ 1411a80b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGVolumeSampler_h__Script_PCG_4031904493__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGVolumeSampler_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGWorldQuery_h__Script_PCG_1997337738'' @ 1411a80f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGWorldQuery_h__Script_PCG_1997337738__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGWorldQuery_h__Script_PCG_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGWorldRaycast_h__Script_PCG_3422721683'' @ 1411a8130

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGWorldRaycast_h__Script_PCG_3422721683__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGWorldRaycast_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGClipPaths_h__Script_PCG_2270760611'' @ 1411a8170

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGClipPaths_h__Script_PCG_2270760611__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGClipPaths_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGClipPaths_h__Script_PCG_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGCreatePolygon2D_h__Script_PCG_1045719506'' @ 1411a81c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGCreatePolygon2D_h__Script_PCG_1045719506__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGCreatePolygon2D_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGCreatePolygon2D_h__Script_PCG_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGGetSegment_h__Script_PCG_2220921189'' @ 1411a8210

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGGetSegment_h__Script_PCG_2220921189__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGGetSegment_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// Z_Construct_UClass_UPCGClipPathsSettings @ 149c38d30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGClipPathsSettings(void)

{
  if (Z_Registration_Info_UClass_UPCGClipPathsSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGClipPathsSettings.OuterSingleton,
               &Z_Construct_UClass_UPCGClipPathsSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGClipPathsSettings.OuterSingleton;
}

// Z_Construct_UEnum_PCG_EPCGClipPathOperation @ 149c38d70

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGClipPathOperation(void)

{
  if (Z_Registration_Info_UEnum_EPCGClipPathOperation.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGClipPathOperation.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGClipPathOperation_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGClipPathOperation.InnerSingleton;
}

// EPCGClipPathOperation_StaticEnum @ 149c38db0

UEnum * __cdecl EPCGClipPathOperation_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGClipPathOperation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGClipPathOperation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGClipPathOperation,(UObject *)pUVar1,
                       L"EPCGClipPathOperation");
  }
  return Z_Registration_Info_UEnum_EPCGClipPathOperation.OuterSingleton;
}

// Z_Construct_UClass_UPCGSpawnActorNode @ 149c39030

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGSpawnActorNode(void)

{
  if (Z_Registration_Info_UClass_UPCGSpawnActorNode.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGSpawnActorNode.OuterSingleton,
               &Z_Construct_UClass_UPCGSpawnActorNode_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGSpawnActorNode.OuterSingleton;
}

// Z_Construct_UClass_UPCGSpawnActorSettings @ 149c39070

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGSpawnActorSettings(void)

{
  if (Z_Registration_Info_UClass_UPCGSpawnActorSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGSpawnActorSettings.OuterSingleton,
               &Z_Construct_UClass_UPCGSpawnActorSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGSpawnActorSettings.OuterSingleton;
}

// Z_Construct_UEnum_PCG_EPCGSpawnActorGenerationTrigger @ 149c390b0

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGSpawnActorGenerationTrigger(void)

{
  if (Z_Registration_Info_UEnum_EPCGSpawnActorGenerationTrigger.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGSpawnActorGenerationTrigger.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGSpawnActorGenerationTrigger_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGSpawnActorGenerationTrigger.InnerSingleton;
}

// Z_Construct_UEnum_PCG_EPCGSpawnActorOption @ 149c390f0

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGSpawnActorOption(void)

{
  if (Z_Registration_Info_UEnum_EPCGSpawnActorOption.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGSpawnActorOption.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGSpawnActorOption_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGSpawnActorOption.InnerSingleton;
}

// EPCGSpawnActorOption_StaticEnum @ 149c392b0

UEnum * __cdecl EPCGSpawnActorOption_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGSpawnActorOption.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGSpawnActorOption.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGSpawnActorOption,(UObject *)pUVar1,
                       L"EPCGSpawnActorOption");
  }
  return Z_Registration_Info_UEnum_EPCGSpawnActorOption.OuterSingleton;
}

// EPCGSpawnActorGenerationTrigger_StaticEnum @ 149c393b0

UEnum * __cdecl EPCGSpawnActorGenerationTrigger_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGSpawnActorGenerationTrigger.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGSpawnActorGenerationTrigger.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGSpawnActorGenerationTrigger,(UObject *)pUVar1,
                       L"EPCGSpawnActorGenerationTrigger");
  }
  return Z_Registration_Info_UEnum_EPCGSpawnActorGenerationTrigger.OuterSingleton;
}

// Z_Construct_UEnum_PCG_EPCGSplineMeshForwardAxis @ 149c393f0

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGSplineMeshForwardAxis(void)

{
  if (Z_Registration_Info_UEnum_EPCGSplineMeshForwardAxis.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGSplineMeshForwardAxis.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGSplineMeshForwardAxis_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGSplineMeshForwardAxis.InnerSingleton;
}

// EPCGSplineMeshForwardAxis_StaticEnum @ 149c39430

UEnum * __cdecl EPCGSplineMeshForwardAxis_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGSplineMeshForwardAxis.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGSplineMeshForwardAxis.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGSplineMeshForwardAxis,(UObject *)pUVar1,
                       L"EPCGSplineMeshForwardAxis");
  }
  return Z_Registration_Info_UEnum_EPCGSplineMeshForwardAxis.OuterSingleton;
}

// NewProp_bScaleMeshToBounds_SetBit @ 149c39530

void __cdecl
Z_Construct_UScriptStruct_FPCGSplineMeshParams_Statics::NewProp_bScaleMeshToBounds_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// NewProp_bScaleMeshToLandscapeSplineFullWidth_SetBit @ 149c39540

void __cdecl
Z_Construct_UScriptStruct_FPCGSplineMeshParams_Statics::
NewProp_bScaleMeshToLandscapeSplineFullWidth_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 5) = 1;
  return;
}

// NewProp_bSmoothInterpRollScale_SetBit @ 149c39550

void __cdecl
Z_Construct_UScriptStruct_FPCGSplineMeshParams_Statics::NewProp_bSmoothInterpRollScale_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  return;
}

// NewProp_bForceDisableActorParsing_SetBit @ 149c39560

void __cdecl
Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_bForceDisableActorParsing_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd9) = 1;
  return;
}

// NewProp_bInheritActorTags_SetBit @ 149c39570

void __cdecl
Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_bInheritActorTags_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xdb) = 1;
  return;
}

// NewStructOps @ 149c39580

void * __cdecl Z_Construct_UScriptStruct_FPCGSplineMeshParams_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xe8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGSplineMeshParams,&UE::CoreUObject::Private::Construct<FPCGSplineMeshParams>,&UE::CoreUObject::Private::ConstructForTests<FPCGSplineMeshParams>,&UE::CoreUObject::Private::Destruct<FPCGSplineMeshParams>,&UE::CoreUObject::Private::Copy<FPCGSplineMeshParams>,&UE::CoreUObject::Private::GetStructTypeHash<FPCGSplineMeshParams>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bSpawnByAttribute_SetBit @ 149c395c0

void __cdecl
Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_bSpawnByAttribute_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x134) = 1;
  return;
}

// NewProp_bWarnOnIdenticalSpawn_SetBit @ 149c395d0

void __cdecl
Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_bWarnOnIdenticalSpawn_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x140) = 1;
  return;
}

// NewProp_bDeleteActorsBeforeGeneration_SetBit @ 149c395e0

void __cdecl
Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_bDeleteActorsBeforeGeneration_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x141) = 1;
  return;
}

// NewProp_bAllowTemplateActorEditing_SetBit @ 149c395f0

void __cdecl
Z_Construct_UClass_UPCGSpawnActorSettings_Statics::NewProp_bAllowTemplateActorEditing_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2b0) = 1;
  return;
}

// Z_Construct_UClass_UPCGSpawnSplineMeshSettings @ 149c39600

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGSpawnSplineMeshSettings(void)

{
  if (Z_Registration_Info_UClass_UPCGSpawnSplineMeshSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGSpawnSplineMeshSettings.OuterSingleton,
               &Z_Construct_UClass_UPCGSpawnSplineMeshSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGSpawnSplineMeshSettings.OuterSingleton;
}

// Z_Construct_UScriptStruct_FPCGSplineMeshParams @ 149c39640

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGSplineMeshParams(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGSplineMeshParams.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGSplineMeshParams.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGSplineMeshParams_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGSplineMeshParams.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FPCGSplineMeshParams.InnerSingleton;
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

// NewProp_bSynchronousLoad_SetBit @ 149c396c0

void __cdecl
Z_Construct_UClass_UPCGSpawnSplineMeshSettings_Statics::NewProp_bSynchronousLoad_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x430) = 1;
  return;
}

// NewStructOps @ 149c39910

void * __cdecl Z_Construct_UScriptStruct_FPCGStaticMeshSpawnerContext_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x460;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGStaticMeshSpawnerContext,&UE::CoreUObject::Private::Construct<FPCGStaticMeshSpawnerContext>,&UE::CoreUObject::Private::ConstructForTests<FPCGStaticMeshSpawnerContext>,&UE::CoreUObject::Private::Destruct<FPCGStaticMeshSpawnerContext>,&UE::CoreUObject::Private::Copy<FPCGStaticMeshSpawnerContext>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UPCGVisualizeAttributeSettings @ 149c39ad0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGVisualizeAttributeSettings(void)

{
  if (Z_Registration_Info_UClass_UPCGVisualizeAttributeSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGVisualizeAttributeSettings.OuterSingleton,
               &Z_Construct_UClass_UPCGVisualizeAttributeSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGVisualizeAttributeSettings.OuterSingleton;
}

// NewProp_bPrefixWithIndex_SetBit @ 149c39b10

void __cdecl
Z_Construct_UClass_UPCGVisualizeAttributeSettings_Statics::NewProp_bPrefixWithIndex_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x118) = 1;
  return;
}

// NewProp_bPrefixWithAttributeName_SetBit @ 149c39b20

void __cdecl
Z_Construct_UClass_UPCGVisualizeAttributeSettings_Statics::NewProp_bPrefixWithAttributeName_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x119) = 1;
  return;
}

// NewProp_bVisualizeEnabled_SetBit @ 149c39b30

void __cdecl
Z_Construct_UClass_UPCGVisualizeAttributeSettings_Statics::NewProp_bVisualizeEnabled_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14c) = 1;
  return;
}

// Z_Construct_UClass_UPCGStaticMeshSpawnerKernel @ 149c39dc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGStaticMeshSpawnerKernel(void)

{
  if (Z_Registration_Info_UClass_UPCGStaticMeshSpawnerKernel.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGStaticMeshSpawnerKernel.OuterSingleton,
               &Z_Construct_UClass_UPCGStaticMeshSpawnerKernel_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGStaticMeshSpawnerKernel.OuterSingleton;
}

// NewProp_bUseRawInstanceCountsBuffer_SetBit @ 149c39e00

void __cdecl
Z_Construct_UClass_UPCGStaticMeshSpawnerKernel_Statics::NewProp_bUseRawInstanceCountsBuffer_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x98) = 1;
  return;
}

// Z_Construct_UClass_UPCGTextureSamplerSettings @ 149c39ed0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGTextureSamplerSettings(void)

{
  if (Z_Registration_Info_UClass_UPCGTextureSamplerSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGTextureSamplerSettings.OuterSingleton,
               &Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGTextureSamplerSettings.OuterSingleton;
}

// Z_Construct_UFunction_UPCGTextureSamplerSettings_GetDensityFunctionEquivalent @ 149c39f10

UFunction * __cdecl
Z_Construct_UFunction_UPCGTextureSamplerSettings_GetDensityFunctionEquivalent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGTextureSamplerSettings_GetDensityFunctionEquivalent_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGTextureSamplerSettings_SetDensityFunctionEquivalent @ 149c39f90

UFunction * __cdecl
Z_Construct_UFunction_UPCGTextureSamplerSettings_SetDensityFunctionEquivalent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGTextureSamplerSettings_SetDensityFunctionEquivalent_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bUseAbsoluteTransform_SetBit @ 149c39fd0

void __cdecl
Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_bUseAbsoluteTransform_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x130) = 1;
  return;
}

// NewProp_bUseDensitySourceChannel_SetBit @ 149c39fe0

void __cdecl
Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_bUseDensitySourceChannel_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x138) = 1;
  return;
}

// NewProp_bUseAdvancedTiling_SetBit @ 149c39ff0

void __cdecl
Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_bUseAdvancedTiling_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x140) = 1;
  return;
}

// NewProp_bUseTileBounds_SetBit @ 149c3a000

void __cdecl
Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_bUseTileBounds_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x16c) = 1;
  return;
}

// NewProp_bSynchronousLoad_SetBit @ 149c3a010

void __cdecl
Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_bSynchronousLoad_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 400) = 1;
  return;
}

// NewProp_bSkipReadbackToCPU_SetBit @ 149c3a020

void __cdecl
Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::NewProp_bSkipReadbackToCPU_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x191) = 1;
  return;
}

// Z_Construct_UClass_UPCGGetLandscapeSettings @ 149c3a030

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGGetLandscapeSettings(void)

{
  if (Z_Registration_Info_UClass_UPCGGetLandscapeSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGGetLandscapeSettings.OuterSingleton,
               &Z_Construct_UClass_UPCGGetLandscapeSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGGetLandscapeSettings.OuterSingleton;
}

// Z_Construct_UClass_UPCGGetPCGComponentSettings @ 149c3a070

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGGetPCGComponentSettings(void)

{
  if (Z_Registration_Info_UClass_UPCGGetPCGComponentSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGGetPCGComponentSettings.OuterSingleton,
               &Z_Construct_UClass_UPCGGetPCGComponentSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGGetPCGComponentSettings.OuterSingleton;
}

// Z_Construct_UClass_UPCGGetPrimitiveSettings @ 149c3a0b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGGetPrimitiveSettings(void)

{
  if (Z_Registration_Info_UClass_UPCGGetPrimitiveSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGGetPrimitiveSettings.OuterSingleton,
               &Z_Construct_UClass_UPCGGetPrimitiveSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGGetPrimitiveSettings.OuterSingleton;
}

// Z_Construct_UClass_UPCGGetSplineSettings @ 149c3a0f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGGetSplineSettings(void)

{
  if (Z_Registration_Info_UClass_UPCGGetSplineSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGGetSplineSettings.OuterSingleton,
               &Z_Construct_UClass_UPCGGetSplineSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGGetSplineSettings.OuterSingleton;
}

// Z_Construct_UClass_UPCGGetVirtualTextureSettings @ 149c3a130

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGGetVirtualTextureSettings(void)

{
  if (Z_Registration_Info_UClass_UPCGGetVirtualTextureSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGGetVirtualTextureSettings.OuterSingleton,
               &Z_Construct_UClass_UPCGGetVirtualTextureSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGGetVirtualTextureSettings.OuterSingleton;
}

// Z_Construct_UClass_UPCGGetVolumeSettings @ 149c3a170

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGGetVolumeSettings(void)

{
  if (Z_Registration_Info_UClass_UPCGGetVolumeSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGGetVolumeSettings.OuterSingleton,
               &Z_Construct_UClass_UPCGGetVolumeSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGGetVolumeSettings.OuterSingleton;
}

// Z_Construct_UClass_UPCGSpawnSplineSettings @ 149c3a1b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGSpawnSplineSettings(void)

{
  if (Z_Registration_Info_UClass_UPCGSpawnSplineSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGSpawnSplineSettings.OuterSingleton,
               &Z_Construct_UClass_UPCGSpawnSplineSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGSpawnSplineSettings.OuterSingleton;
}

// NewProp_bSpawnComponentFromAttribute_SetBit @ 149c3a1f0

void __cdecl
Z_Construct_UClass_UPCGSpawnSplineSettings_Statics::NewProp_bSpawnComponentFromAttribute_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd0) = 1;
  return;
}

// NewProp_bOutputSplineComponentReference_SetBit @ 149c3a200

void __cdecl
Z_Construct_UClass_UPCGSpawnSplineSettings_Statics::NewProp_bOutputSplineComponentReference_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x160) = 1;
  return;
}

// Z_Construct_UClass_UPCGCreatePolygon2DSettings @ 149c3a2d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGCreatePolygon2DSettings(void)

{
  if (Z_Registration_Info_UClass_UPCGCreatePolygon2DSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGCreatePolygon2DSettings.OuterSingleton,
               &Z_Construct_UClass_UPCGCreatePolygon2DSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGCreatePolygon2DSettings.OuterSingleton;
}

// Z_Construct_UEnum_PCG_EPCGCreatePolygonInputType @ 149c3a310

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGCreatePolygonInputType(void)

{
  if (Z_Registration_Info_UEnum_EPCGCreatePolygonInputType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGCreatePolygonInputType.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGCreatePolygonInputType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGCreatePolygonInputType.InnerSingleton;
}

// EPCGCreatePolygonInputType_StaticEnum @ 149c3a350

UEnum * __cdecl EPCGCreatePolygonInputType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGCreatePolygonInputType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGCreatePolygonInputType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGCreatePolygonInputType,(UObject *)pUVar1,
                       L"EPCGCreatePolygonInputType");
  }
  return Z_Registration_Info_UEnum_EPCGCreatePolygonInputType.OuterSingleton;
}

// NewProp_bUseHoleAttribute_SetBit @ 149c3a500

void __cdecl
Z_Construct_UClass_UPCGCreatePolygon2DSettings_Statics::NewProp_bUseHoleAttribute_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc9) = 1;
  return;
}

// NewProp_bUsePolygonWidthAttribute_SetBit @ 149c3a820

void __cdecl
Z_Construct_UClass_UPCGCreatePolygon2DSettings_Statics::NewProp_bUsePolygonWidthAttribute_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x110) = 1;
  return;
}

// Z_Construct_UClass_UPCGReverseSplineSettings @ 149c3a9b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGReverseSplineSettings(void)

{
  if (Z_Registration_Info_UClass_UPCGReverseSplineSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGReverseSplineSettings.OuterSingleton,
               &Z_Construct_UClass_UPCGReverseSplineSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGReverseSplineSettings.OuterSingleton;
}

// Z_Construct_UEnum_PCG_EPCGReverseSplineOperation @ 149c3a9f0

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGReverseSplineOperation(void)

{
  if (Z_Registration_Info_UEnum_EPCGReverseSplineOperation.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGReverseSplineOperation.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGReverseSplineOperation_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGReverseSplineOperation.InnerSingleton;
}

// EPCGReverseSplineOperation_StaticEnum @ 149c3aa30

UEnum * __cdecl EPCGReverseSplineOperation_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGReverseSplineOperation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGReverseSplineOperation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGReverseSplineOperation,(UObject *)pUVar1,
                       L"EPCGReverseSplineOperation");
  }
  return Z_Registration_Info_UEnum_EPCGReverseSplineOperation.OuterSingleton;
}

// NewProp_bFlipClockwiseComputationResult_SetBit @ 149c3aa70

void __cdecl
Z_Construct_UClass_UPCGReverseSplineSettings_Statics::NewProp_bFlipClockwiseComputationResult_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xcc) = 1;
  return;
}

// Z_Construct_UClass_UPCGGenericUserParameterGetSettings @ 149c3ae20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGGenericUserParameterGetSettings(void)

{
  if (Z_Registration_Info_UClass_UPCGGenericUserParameterGetSettings.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGGenericUserParameterGetSettings.OuterSingleton,
               &Z_Construct_UClass_UPCGGenericUserParameterGetSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGGenericUserParameterGetSettings.OuterSingleton;
}

// Z_Construct_UClass_UPCGUserParameterGetSettings @ 149c3af20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGUserParameterGetSettings(void)

{
  if (Z_Registration_Info_UClass_UPCGUserParameterGetSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGUserParameterGetSettings.OuterSingleton,
               &Z_Construct_UClass_UPCGUserParameterGetSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGUserParameterGetSettings.OuterSingleton;
}

// Z_Construct_UEnum_PCG_EPCGUserParameterSource @ 149c3af60

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGUserParameterSource(void)

{
  if (Z_Registration_Info_UEnum_EPCGUserParameterSource.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGUserParameterSource.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGUserParameterSource_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGUserParameterSource.InnerSingleton;
}

// EPCGUserParameterSource_StaticEnum @ 149c3afa0

UEnum * __cdecl EPCGUserParameterSource_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGUserParameterSource.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGUserParameterSource.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGUserParameterSource,(UObject *)pUVar1,
                       L"EPCGUserParameterSource");
  }
  return Z_Registration_Info_UEnum_EPCGUserParameterSource.OuterSingleton;
}

// Z_Construct_UClass_UPCGSplitPointsSettings @ 149c3afe0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGSplitPointsSettings(void)

{
  if (Z_Registration_Info_UClass_UPCGSplitPointsSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGSplitPointsSettings.OuterSingleton,
               &Z_Construct_UClass_UPCGSplitPointsSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGSplitPointsSettings.OuterSingleton;
}

// Z_Construct_UEnum_PCG_EPCGSplitAxis @ 149c3b020

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGSplitAxis(void)

{
  if (Z_Registration_Info_UEnum_EPCGSplitAxis.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGSplitAxis.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGSplitAxis_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGSplitAxis.InnerSingleton;
}

// EPCGSplitAxis_StaticEnum @ 149c3b060

UEnum * __cdecl EPCGSplitAxis_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGSplitAxis.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGSplitAxis.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGSplitAxis,(UObject *)pUVar1,L"EPCGSplitAxis");
  }
  return Z_Registration_Info_UEnum_EPCGSplitAxis.OuterSingleton;
}

// NewProp_bForceObjectAndStructExtraction_SetBit @ 149c3b0a0

void __cdecl
Z_Construct_UClass_UPCGUserParameterGetSettings_Statics::
NewProp_bForceObjectAndStructExtraction_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xe0) = 1;
  return;
}

// NewProp_bSanitizeOutputAttributeName_SetBit @ 149c3b0b0

void __cdecl
Z_Construct_UClass_UPCGUserParameterGetSettings_Statics::NewProp_bSanitizeOutputAttributeName_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xe1) = 1;
  return;
}

// Z_Construct_UClass_UPCGVolumeSamplerSettings @ 149c3b0c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGVolumeSamplerSettings(void)

{
  if (Z_Registration_Info_UClass_UPCGVolumeSamplerSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGVolumeSamplerSettings.OuterSingleton,
               &Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGVolumeSamplerSettings.OuterSingleton;
}

// NewProp_bUnbounded_SetBit @ 149c3b100

void __cdecl
Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics::NewProp_bUnbounded_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xe0) = 1;
  return;
}

// NewProp_bForceObjectAndStructExtraction_SetBit @ 149c3b110

void __cdecl
Z_Construct_UClass_UPCGGenericUserParameterGetSettings_Statics::
NewProp_bForceObjectAndStructExtraction_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd8) = 1;
  return;
}

// NewProp_bSanitizeOutputAttributeName_SetBit @ 149c3b120

void __cdecl
Z_Construct_UClass_UPCGGenericUserParameterGetSettings_Statics::
NewProp_bSanitizeOutputAttributeName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd9) = 1;
  return;
}

// NewProp_bQuiet_SetBit @ 149c3b130

void __cdecl
Z_Construct_UClass_UPCGGenericUserParameterGetSettings_Statics::NewProp_bQuiet_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xe5) = 1;
  return;
}

// Z_Construct_UClass_UPCGGetSegmentSettings @ 149c3b140

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGGetSegmentSettings(void)

{
  if (Z_Registration_Info_UClass_UPCGGetSegmentSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGGetSegmentSettings.OuterSingleton,
               &Z_Construct_UClass_UPCGGetSegmentSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGGetSegmentSettings.OuterSingleton;
}

// Z_Construct_UClass_UPCGSurfaceSamplerSettings @ 149c3b180

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGSurfaceSamplerSettings(void)

{
  if (Z_Registration_Info_UClass_UPCGSurfaceSamplerSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGSurfaceSamplerSettings.OuterSingleton,
               &Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGSurfaceSamplerSettings.OuterSingleton;
}

// NewProp_bUseInputSegmentData_SetBit @ 149c3b1c0

void __cdecl
Z_Construct_UClass_UPCGGetSegmentSettings_Statics::NewProp_bUseInputSegmentData_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 200) = 1;
  return;
}

// NewProp_bUseInputHoleData_SetBit @ 149c3b1d0

void __cdecl
Z_Construct_UClass_UPCGGetSegmentSettings_Statics::NewProp_bUseInputHoleData_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc9) = 1;
  return;
}

// NewProp_bOutputSplineData_SetBit @ 149c3b1e0

void __cdecl
Z_Construct_UClass_UPCGGetSegmentSettings_Statics::NewProp_bOutputSplineData_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xca) = 1;
  return;
}

// NewProp_bUnbounded_SetBit @ 149c3b1f0

void __cdecl
Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::NewProp_bUnbounded_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xec) = 1;
  return;
}

// NewProp_bApplyDensityToPoints_SetBit @ 149c3b200

void __cdecl
Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::NewProp_bApplyDensityToPoints_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xed) = 1;
  return;
}

// NewProp_bUseLegacyGridCreationMethod_SetBit @ 149c3b210

void __cdecl
Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::NewProp_bUseLegacyGridCreationMethod_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xf4) = 1;
  return;
}

// Z_Construct_UClass_UPCGWorldQuerySettings @ 149c3b2e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGWorldQuerySettings(void)

{
  if (Z_Registration_Info_UClass_UPCGWorldQuerySettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGWorldQuerySettings.OuterSingleton,
               &Z_Construct_UClass_UPCGWorldQuerySettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGWorldQuerySettings.OuterSingleton;
}

// Z_Construct_UClass_UPCGWorldRayHitSettings @ 149c3b320

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGWorldRayHitSettings(void)

{
  if (Z_Registration_Info_UClass_UPCGWorldRayHitSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGWorldRayHitSettings.OuterSingleton,
               &Z_Construct_UClass_UPCGWorldRayHitSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGWorldRayHitSettings.OuterSingleton;
}

// Z_Construct_UClass_UPCGSplineIntersectionSettings @ 149c3b360

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGSplineIntersectionSettings(void)

{
  if (Z_Registration_Info_UClass_UPCGSplineIntersectionSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGSplineIntersectionSettings.OuterSingleton,
               &Z_Construct_UClass_UPCGSplineIntersectionSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGSplineIntersectionSettings.OuterSingleton;
}

// Z_Construct_UEnum_PCG_EPCGSplineIntersectionOutput @ 149c3b3a0

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGSplineIntersectionOutput(void)

{
  if (Z_Registration_Info_UEnum_EPCGSplineIntersectionOutput.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGSplineIntersectionOutput.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGSplineIntersectionOutput_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGSplineIntersectionOutput.InnerSingleton;
}

// Z_Construct_UEnum_PCG_EPCGSplineIntersectionType @ 149c3b3e0

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGSplineIntersectionType(void)

{
  if (Z_Registration_Info_UEnum_EPCGSplineIntersectionType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGSplineIntersectionType.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGSplineIntersectionType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGSplineIntersectionType.InnerSingleton;
}

// EPCGSplineIntersectionType_StaticEnum @ 149c3b420

UEnum * __cdecl EPCGSplineIntersectionType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGSplineIntersectionType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGSplineIntersectionType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGSplineIntersectionType,(UObject *)pUVar1,
                       L"EPCGSplineIntersectionType");
  }
  return Z_Registration_Info_UEnum_EPCGSplineIntersectionType.OuterSingleton;
}

// EPCGSplineIntersectionOutput_StaticEnum @ 149c3b460

UEnum * __cdecl EPCGSplineIntersectionOutput_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGSplineIntersectionOutput.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGSplineIntersectionOutput.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGSplineIntersectionOutput,(UObject *)pUVar1,
                       L"EPCGSplineIntersectionOutput");
  }
  return Z_Registration_Info_UEnum_EPCGSplineIntersectionOutput.OuterSingleton;
}

// NewProp_bOutputSplineIndices_SetBit @ 149c3b560

void __cdecl
Z_Construct_UClass_UPCGSplineIntersectionSettings_Statics::NewProp_bOutputSplineIndices_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xca) = 1;
  return;
}

// Z_Construct_UClass_UPCGSplitSplinesSettings @ 149c3b570

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGSplitSplinesSettings(void)

{
  if (Z_Registration_Info_UClass_UPCGSplitSplinesSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGSplitSplinesSettings.OuterSingleton,
               &Z_Construct_UClass_UPCGSplitSplinesSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGSplitSplinesSettings.OuterSingleton;
}

// Z_Construct_UEnum_PCG_EPCGSplitSplineMode @ 149c3b5b0

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGSplitSplineMode(void)

{
  if (Z_Registration_Info_UEnum_EPCGSplitSplineMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGSplitSplineMode.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGSplitSplineMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGSplitSplineMode.InnerSingleton;
}

// EPCGSplitSplineMode_StaticEnum @ 149c3b5f0

UEnum * __cdecl EPCGSplitSplineMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGSplitSplineMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGSplitSplineMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGSplitSplineMode,(UObject *)pUVar1,
                       L"EPCGSplitSplineMode");
  }
  return Z_Registration_Info_UEnum_EPCGSplitSplineMode.OuterSingleton;
}

// NewProp_bUseConstant_SetBit @ 149c3b6f0

void __cdecl
Z_Construct_UClass_UPCGSplitSplinesSettings_Statics::NewProp_bUseConstant_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xcc) = 1;
  return;
}

// NewProp_bShouldOutputOriginatingSplineIndex_SetBit @ 149c3b700

void __cdecl
Z_Construct_UClass_UPCGSplitSplinesSettings_Statics::
NewProp_bShouldOutputOriginatingSplineIndex_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x118) = 1;
  return;
}

// Z_Construct_UClass_UPCGSplineSamplerSettings @ 149c3b710

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGSplineSamplerSettings(void)

{
  if (Z_Registration_Info_UClass_UPCGSplineSamplerSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGSplineSamplerSettings.OuterSingleton,
               &Z_Construct_UClass_UPCGSplineSamplerSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGSplineSamplerSettings.OuterSingleton;
}

// Z_Construct_UEnum_PCG_EPCGSplineSamplingDimension @ 149c3b750

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGSplineSamplingDimension(void)

{
  if (Z_Registration_Info_UEnum_EPCGSplineSamplingDimension.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGSplineSamplingDimension.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGSplineSamplingDimension_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGSplineSamplingDimension.InnerSingleton;
}

// Z_Construct_UEnum_PCG_EPCGSplineSamplingFill @ 149c3b790

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGSplineSamplingFill(void)

{
  if (Z_Registration_Info_UEnum_EPCGSplineSamplingFill.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGSplineSamplingFill.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGSplineSamplingFill_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGSplineSamplingFill.InnerSingleton;
}

// Z_Construct_UEnum_PCG_EPCGSplineSamplingInteriorOrientation @ 149c3b7d0

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGSplineSamplingInteriorOrientation(void)

{
  if (Z_Registration_Info_UEnum_EPCGSplineSamplingInteriorOrientation.InnerSingleton == (UEnum *)0x0
     ) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGSplineSamplingInteriorOrientation.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGSplineSamplingInteriorOrientation_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGSplineSamplingInteriorOrientation.InnerSingleton;
}

// Z_Construct_UEnum_PCG_EPCGSplineSamplingMode @ 149c3b810

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGSplineSamplingMode(void)

{
  if (Z_Registration_Info_UEnum_EPCGSplineSamplingMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGSplineSamplingMode.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGSplineSamplingMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGSplineSamplingMode.InnerSingleton;
}

// Z_Construct_UEnum_PCG_EPCGSplineSamplingSeedingMode @ 149c3b850

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGSplineSamplingSeedingMode(void)

{
  if (Z_Registration_Info_UEnum_EPCGSplineSamplingSeedingMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGSplineSamplingSeedingMode.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGSplineSamplingSeedingMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGSplineSamplingSeedingMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FPCGSplineSamplerParams @ 149c3b890

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGSplineSamplerParams(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGSplineSamplerParams.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGSplineSamplerParams.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGSplineSamplerParams.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGSplineSamplerParams.InnerSingleton;
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

// EPCGSplineSamplingMode_StaticEnum @ 149c3b910

UEnum * __cdecl EPCGSplineSamplingMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGSplineSamplingMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGSplineSamplingMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGSplineSamplingMode,(UObject *)pUVar1,
                       L"EPCGSplineSamplingMode");
  }
  return Z_Registration_Info_UEnum_EPCGSplineSamplingMode.OuterSingleton;
}

// Z_Construct_UClass_UPCGUnionSettings @ 149c3b950

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGUnionSettings(void)

{
  if (Z_Registration_Info_UClass_UPCGUnionSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGUnionSettings.OuterSingleton,
               &Z_Construct_UClass_UPCGUnionSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGUnionSettings.OuterSingleton;
}

// EPCGSplineSamplingDimension_StaticEnum @ 149c3b990

UEnum * __cdecl EPCGSplineSamplingDimension_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGSplineSamplingDimension.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGSplineSamplingDimension.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGSplineSamplingDimension,(UObject *)pUVar1,
                       L"EPCGSplineSamplingDimension");
  }
  return Z_Registration_Info_UEnum_EPCGSplineSamplingDimension.OuterSingleton;
}

// EPCGSplineSamplingFill_StaticEnum @ 149c3b9d0

UEnum * __cdecl EPCGSplineSamplingFill_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGSplineSamplingFill.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGSplineSamplingFill.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGSplineSamplingFill,(UObject *)pUVar1,
                       L"EPCGSplineSamplingFill");
  }
  return Z_Registration_Info_UEnum_EPCGSplineSamplingFill.OuterSingleton;
}

// EPCGSplineSamplingInteriorOrientation_StaticEnum @ 149c3ba10

UEnum * __cdecl EPCGSplineSamplingInteriorOrientation_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGSplineSamplingInteriorOrientation.OuterSingleton == (UEnum *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGSplineSamplingInteriorOrientation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGSplineSamplingInteriorOrientation,(UObject *)pUVar1
                       ,L"EPCGSplineSamplingInteriorOrientation");
  }
  return Z_Registration_Info_UEnum_EPCGSplineSamplingInteriorOrientation.OuterSingleton;
}

// EPCGSplineSamplingSeedingMode_StaticEnum @ 149c3bb10

UEnum * __cdecl EPCGSplineSamplingSeedingMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGSplineSamplingSeedingMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGSplineSamplingSeedingMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGSplineSamplingSeedingMode,(UObject *)pUVar1,
                       L"EPCGSplineSamplingSeedingMode");
  }
  return Z_Registration_Info_UEnum_EPCGSplineSamplingSeedingMode.OuterSingleton;
}

// NewProp_bFitToCurve_SetBit @ 149c3bb50

void __cdecl
Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_bFitToCurve_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x24) = 1;
  return;
}

// NewProp_bTreatSplineAsPolyline_SetBit @ 149c3bb60

void __cdecl
Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_bTreatSplineAsPolyline_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewProp_bProjectOntoSurface_SetBit @ 149c3bb70

void __cdecl
Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_bProjectOntoSurface_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x32) = 1;
  return;
}

// NewProp_bComputeDirectionDelta_SetBit @ 149c3bb80

void __cdecl
Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_bComputeDirectionDelta_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc0) = 1;
  return;
}

// NewProp_bComputeCurvature_SetBit @ 149c3bb90

void __cdecl
Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_bComputeCurvature_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xcc) = 1;
  return;
}

// NewProp_bComputeSegmentIndex_SetBit @ 149c3bba0

void __cdecl
Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_bComputeSegmentIndex_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd8) = 1;
  return;
}

// NewProp_bComputeSubsegmentIndex_SetBit @ 149c3bbb0

void __cdecl
Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_bComputeSubsegmentIndex_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xe4) = 1;
  return;
}

// NewProp_bComputeTangents_SetBit @ 149c3bbc0

void __cdecl
Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_bComputeTangents_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xf0) = 1;
  return;
}

// NewProp_bComputeAlpha_SetBit @ 149c3bbd0

void __cdecl
Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_bComputeAlpha_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x104) = 1;
  return;
}

// NewProp_bComputeDistance_SetBit @ 149c3bbe0

void __cdecl
Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_bComputeDistance_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x110) = 1;
  return;
}

// Z_Construct_UClass_UPCGTransformPointsSettings @ 149c3bbf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGTransformPointsSettings(void)

{
  if (Z_Registration_Info_UClass_UPCGTransformPointsSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGTransformPointsSettings.OuterSingleton,
               &Z_Construct_UClass_UPCGTransformPointsSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGTransformPointsSettings.OuterSingleton;
}

// NewProp_bComputeInputKey_SetBit @ 149c3bc30

void __cdecl
Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_bComputeInputKey_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11c) = 1;
  return;
}

// NewProp_bUnbounded_SetBit @ 149c3bc40

void __cdecl
Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_bUnbounded_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x128) = 1;
  return;
}

// NewProp_bSeedFromLocalPosition_SetBit @ 149c3bc50

void __cdecl
Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_bSeedFromLocalPosition_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x131) = 1;
  return;
}

// NewProp_bSeedFrom2DPosition_SetBit @ 149c3bc60

void __cdecl
Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewProp_bSeedFrom2DPosition_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x132) = 1;
  return;
}

// NewStructOps @ 149c3bc70

void * __cdecl Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x138;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGSplineSamplerParams,&UE::CoreUObject::Private::Construct<FPCGSplineSamplerParams>,&UE::CoreUObject::Private::ConstructForTests<FPCGSplineSamplerParams>,&UE::CoreUObject::Private::Destruct<FPCGSplineSamplerParams>,&UE::CoreUObject::Private::Copy<FPCGSplineSamplerParams>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bApplyToAttribute_SetBit @ 149c3bcb0

void __cdecl
Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_bApplyToAttribute_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 200) = 1;
  return;
}

// NewProp_bAbsoluteOffset_SetBit @ 149c3bcc0

void __cdecl
Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_bAbsoluteOffset_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x108) = 1;
  return;
}

// NewProp_bAbsoluteRotation_SetBit @ 149c3bcd0

void __cdecl
Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_bAbsoluteRotation_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x140) = 1;
  return;
}

// NewProp_bAbsoluteScale_SetBit @ 149c3bce0

void __cdecl
Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_bAbsoluteScale_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x178) = 1;
  return;
}

// NewProp_bUniformScale_SetBit @ 149c3bcf0

void __cdecl
Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_bUniformScale_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x179) = 1;
  return;
}

// NewProp_bRecomputeSeed_SetBit @ 149c3bd00

void __cdecl
Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_bRecomputeSeed_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x17a) = 1;
  return;
}

// Z_Construct_UClass_UPCGWorldRaycastElementSettings @ 149c3be90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGWorldRaycastElementSettings(void)

{
  if (Z_Registration_Info_UClass_UPCGWorldRaycastElementSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGWorldRaycastElementSettings.OuterSingleton,
               &Z_Construct_UClass_UPCGWorldRaycastElementSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGWorldRaycastElementSettings.OuterSingleton;
}

// NewProp_bOverrideRayDirections_SetBit @ 149c3bed0

void __cdecl
Z_Construct_UClass_UPCGWorldRaycastElementSettings_Statics::NewProp_bOverrideRayDirections_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x158) = 1;
  return;
}

// NewProp_bOverrideRayLengths_SetBit @ 149c3bee0

void __cdecl
Z_Construct_UClass_UPCGWorldRaycastElementSettings_Statics::NewProp_bOverrideRayLengths_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1f8) = 1;
  return;
}

// NewProp_bKeepOriginalPointOnMiss_SetBit @ 149c3bef0

void __cdecl
Z_Construct_UClass_UPCGWorldRaycastElementSettings_Statics::NewProp_bKeepOriginalPointOnMiss_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 800) = 1;
  return;
}

// NewProp_bUnbounded_SetBit @ 149c3bf00

void __cdecl
Z_Construct_UClass_UPCGWorldRaycastElementSettings_Statics::NewProp_bUnbounded_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x321) = 1;
  return;
}

// Z_Construct_UClass_UPCGStaticMeshSpawnerSettings @ 149c3c130

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGStaticMeshSpawnerSettings(void)

{
  if (Z_Registration_Info_UClass_UPCGStaticMeshSpawnerSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGStaticMeshSpawnerSettings.OuterSingleton,
               &Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGStaticMeshSpawnerSettings.OuterSingleton;
}

// Z_Construct_UFunction_UPCGStaticMeshSpawnerSettings_SetInstancePackerType @ 149c3c170

UFunction * __cdecl Z_Construct_UFunction_UPCGStaticMeshSpawnerSettings_SetInstancePackerType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGStaticMeshSpawnerSettings_SetInstancePackerType_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGStaticMeshSpawnerSettings_SetMeshSelectorType @ 149c3c1b0

UFunction * __cdecl Z_Construct_UFunction_UPCGStaticMeshSpawnerSettings_SetMeshSelectorType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGStaticMeshSpawnerSettings_SetMeshSelectorType_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bAllowDescriptorChanges_SetBit @ 149c3c1f0

void __cdecl
Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::NewProp_bAllowDescriptorChanges_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd8) = 1;
  return;
}

// NewProp_bApplyMeshBoundsToPoints_SetBit @ 149c3c200

void __cdecl
Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::NewProp_bApplyMeshBoundsToPoints_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x108) = 1;
  return;
}

// NewProp_bSynchronousLoad_SetBit @ 149c3c210

void __cdecl
Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::NewProp_bSynchronousLoad_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x148) = 1;
  return;
}

// NewProp_bAllowMergeDifferentDataInSameInstancedComponents_SetBit @ 149c3c220

void __cdecl
Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::
NewProp_bAllowMergeDifferentDataInSameInstancedComponents_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x149) = 1;
  return;
}

// NewProp_bSilenceOverrideAttributeNotFoundErrors_SetBit @ 149c3c230

void __cdecl
Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::
NewProp_bSilenceOverrideAttributeNotFoundErrors_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14a) = 1;
  return;
}

// NewProp_bWarnOnIdenticalSpawn_SetBit @ 149c3c240

void __cdecl
Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::NewProp_bWarnOnIdenticalSpawn_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14b) = 1;
  return;
}

// AsyncProcessingOneToOneRangeEx<`FPCGSplitPointsElement::ExecuteInternal'::__l18::<lambda_2>,`FPCGSplitPointsElement::ExecuteInternal'::__l18::<lambda_1>_&> @ 149c3ccd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
FPCGAsync::
AsyncProcessingOneToOneRangeEx<_FPCGSplitPointsElement::ExecuteInternal_::__l18::<lambda_2>,_FPCGSplitPointsElement::ExecuteInternal_::__l18::<lambda_1>_&>
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
               TFunctionRefCaller<`FPCGAsync::AsyncProcessingOneToOneRangeEx<`FPCGSplitPointsElement::ExecuteInternal'::__l18::<lambda_2>,`FPCGSplitPointsElement::ExecuteInternal'::__l18::<lambda_1>_&>'::__l2::<lambda_2>,void,int>
               ::Call;
    local_c8 = (<lambda_1> *)local_f8;
    local_a8._12_4_ = 0;
    local_a8._16_4_ = 0;
    local_d0 = UE::Core::Private::Function::
               TFunctionRefCaller<`FPCGAsync::AsyncProcessingOneToOneRangeEx<`FPCGSplitPointsElement::ExecuteInternal'::__l18::<lambda_2>,`FPCGSplitPointsElement::ExecuteInternal'::__l18::<lambda_1>_&>'::__l2::<lambda_1>,void,int,int,int>
               ::Call;
    local_e0 = UE::Core::Private::Function::
               TFunctionRefCaller<`FPCGSplitPointsElement::ExecuteInternal'::__l18::<lambda_1>,int,int,int,int>
               ::Call;
    local_f0 = UE::Core::Private::Function::
               TFunctionRefCaller<`FPCGSplitPointsElement::ExecuteInternal'::__l18::<lambda_2>,void>
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
               TFunctionRefCaller<`FPCGAsync::AsyncProcessingOneToOneRangeEx<`FPCGSplitPointsElement::ExecuteInternal'::__l18::<lambda_2>,`FPCGSplitPointsElement::ExecuteInternal'::__l18::<lambda_1>_&>'::__l2::<lambda_2>,void,int>
               ::Call;
    local_d8 = (<lambda_1> *)local_f8;
    param_1->bIsRunningAsyncCall = true;
    local_e0 = UE::Core::Private::Function::
               TFunctionRefCaller<`FPCGAsync::AsyncProcessingOneToOneRangeEx<`FPCGSplitPointsElement::ExecuteInternal'::__l18::<lambda_2>,`FPCGSplitPointsElement::ExecuteInternal'::__l18::<lambda_1>_&>'::__l2::<lambda_1>,void,int,int,int>
               ::Call;
    local_d0 = UE::Core::Private::Function::
               TFunctionRefCaller<`FPCGSplitPointsElement::ExecuteInternal'::__l18::<lambda_1>,int,int,int,int>
               ::Call;
    local_c0 = UE::Core::Private::Function::
               TFunctionRefCaller<`FPCGSplitPointsElement::ExecuteInternal'::__l18::<lambda_2>,void>
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

// AsyncProcessingOneToOneRangeEx<`FPCGTransformPointsElement::ExecuteInternal'::__l13::<lambda_2>,`FPCGTransformPointsElement::ExecuteInternal'::__l13::<lambda_1>_&> @ 149c3cf50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
FPCGAsync::
AsyncProcessingOneToOneRangeEx<_FPCGTransformPointsElement::ExecuteInternal_::__l13::<lambda_2>,_FPCGTransformPointsElement::ExecuteInternal_::__l13::<lambda_1>_&>
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
               TFunctionRefCaller<`FPCGAsync::AsyncProcessingOneToOneRangeEx<`FPCGTransformPointsElement::ExecuteInternal'::__l13::<lambda_2>,`FPCGTransformPointsElement::ExecuteInternal'::__l13::<lambda_1>_&>'::__l2::<lambda_2>,void,int>
               ::Call;
    local_c8 = (<lambda_1> *)local_f8;
    local_a8._12_4_ = 0;
    local_a8._16_4_ = 0;
    local_d0 = UE::Core::Private::Function::
               TFunctionRefCaller<`FPCGAsync::AsyncProcessingOneToOneRangeEx<`FPCGTransformPointsElement::ExecuteInternal'::__l13::<lambda_2>,`FPCGTransformPointsElement::ExecuteInternal'::__l13::<lambda_1>_&>'::__l2::<lambda_1>,void,int,int,int>
               ::Call;
    local_e0 = UE::Core::Private::Function::
               TFunctionRefCaller<`FPCGTransformPointsElement::ExecuteInternal'::__l13::<lambda_1>,int,int,int,int>
               ::Call;
    local_f0 = UE::Core::Private::Function::
               TFunctionRefCaller<`FPCGTransformPointsElement::ExecuteInternal'::__l13::<lambda_2>,void>
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
               TFunctionRefCaller<`FPCGAsync::AsyncProcessingOneToOneRangeEx<`FPCGTransformPointsElement::ExecuteInternal'::__l13::<lambda_2>,`FPCGTransformPointsElement::ExecuteInternal'::__l13::<lambda_1>_&>'::__l2::<lambda_2>,void,int>
               ::Call;
    local_d8 = (<lambda_1> *)local_f8;
    param_1->bIsRunningAsyncCall = true;
    local_e0 = UE::Core::Private::Function::
               TFunctionRefCaller<`FPCGAsync::AsyncProcessingOneToOneRangeEx<`FPCGTransformPointsElement::ExecuteInternal'::__l13::<lambda_2>,`FPCGTransformPointsElement::ExecuteInternal'::__l13::<lambda_1>_&>'::__l2::<lambda_1>,void,int,int,int>
               ::Call;
    local_d0 = UE::Core::Private::Function::
               TFunctionRefCaller<`FPCGTransformPointsElement::ExecuteInternal'::__l13::<lambda_1>,int,int,int,int>
               ::Call;
    local_c0 = UE::Core::Private::Function::
               TFunctionRefCaller<`FPCGTransformPointsElement::ExecuteInternal'::__l13::<lambda_2>,void>
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

// AsyncProcessingRangeEx<`PCGSurfaceSampler::SampleSurface'::__l2::<lambda_1>_&,`PCGSurfaceSampler::SampleSurface'::__l2::<lambda_2>_&,`PCGSurfaceSampler::SampleSurface'::__l2::<lambda_3>_&,`PCGSurfaceSampler::SampleSurface'::__l2::<lambda_4>_&> @ 149c3d1d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
FPCGAsync::
AsyncProcessingRangeEx<_PCGSurfaceSampler::SampleSurface_::__l2::<lambda_1>_&,_PCGSurfaceSampler::SampleSurface_::__l2::<lambda_2>_&,_PCGSurfaceSampler::SampleSurface_::__l2::<lambda_3>_&,_PCGSurfaceSampler::SampleSurface_::__l2::<lambda_4>_&>
          (FPCGAsyncState *param_1,int param_2,<lambda_1> *param_3,<lambda_2> *param_4,
          <lambda_3> *param_5,<lambda_4> *param_6,bool param_7,int param_8,bool param_9)

{
  ulonglong uVar1;
  int iVar2;
  bool bVar3;
  undefined1 auStackY_138 [32];
  code *local_e8;
  <lambda_1> *local_e0;
  code *local_d8;
  <lambda_2> *local_d0;
  code *local_c8;
  <lambda_2> *local_c0;
  code *local_b8;
  <lambda_1> *local_b0;
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
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_138;
  if ((param_1 == (FPCGAsyncState *)0x0) || (param_1->bIsRunningAsyncCall != false)) {
    local_b0 = (<lambda_1> *)param_6;
    local_a8._0_8_ = 0.0;
    local_b8 = UE::Core::Private::Function::
               TFunctionRefCaller<`PCGSurfaceSampler::SampleSurface'::__l2::<lambda_4>,void,int>::
               Call;
    local_c0 = (<lambda_2> *)param_5;
    local_c8 = UE::Core::Private::Function::
               TFunctionRefCaller<`PCGSurfaceSampler::SampleSurface'::__l2::<lambda_3>,void,int,int,int>
               ::Call;
    local_d8 = UE::Core::Private::Function::
               TFunctionRefCaller<`PCGSurfaceSampler::SampleSurface'::__l2::<lambda_2>,int,int,int,int>
               ::Call;
    local_e8 = UE::Core::Private::Function::
               TFunctionRefCaller<`PCGSurfaceSampler::SampleSurface'::__l2::<lambda_1>,void>::Call;
    local_a8._12_4_ = 0;
    local_a8._16_4_ = 0;
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
    local_e0 = param_3;
    local_d0 = param_4;
    bVar3 = Private::AsyncProcessing
                      ((FPCGAsyncState *)local_a8,param_2,
                       (TFunctionRef<void___cdecl(void)> *)&local_e8,
                       (TFunctionRef<int___cdecl(int,int,int)> *)&local_d8,
                       (TFunctionRef<void___cdecl(int,int,int)> *)&local_c8,
                       (TFunctionRef<void___cdecl(int)> *)&local_b8,false,param_8,param_9);
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
    local_e0 = (<lambda_1> *)param_6;
    local_e8 = UE::Core::Private::Function::
               TFunctionRefCaller<`PCGSurfaceSampler::SampleSurface'::__l2::<lambda_4>,void,int>::
               Call;
    local_d0 = (<lambda_2> *)param_5;
    local_d8 = UE::Core::Private::Function::
               TFunctionRefCaller<`PCGSurfaceSampler::SampleSurface'::__l2::<lambda_3>,void,int,int,int>
               ::Call;
    local_c8 = UE::Core::Private::Function::
               TFunctionRefCaller<`PCGSurfaceSampler::SampleSurface'::__l2::<lambda_2>,int,int,int,int>
               ::Call;
    local_b8 = UE::Core::Private::Function::
               TFunctionRefCaller<`PCGSurfaceSampler::SampleSurface'::__l2::<lambda_1>,void>::Call;
    param_1->bIsRunningAsyncCall = true;
    local_c0 = param_4;
    local_b0 = param_3;
    bVar3 = Private::AsyncProcessing
                      (param_1,param_2,(TFunctionRef<void___cdecl(void)> *)&local_b8,
                       (TFunctionRef<int___cdecl(int,int,int)> *)&local_c8,
                       (TFunctionRef<void___cdecl(int,int,int)> *)&local_d8,
                       (TFunctionRef<void___cdecl(int)> *)&local_e8,param_7,param_8,param_9);
    param_1->bIsRunningAsyncCall = false;
  }
  return bVar3;
}

// AsyncProcessingRangeEx<`PCGVolumeSampler::SampleVolume'::__l2::<lambda_1>_&,`PCGVolumeSampler::SampleVolume'::__l2::<lambda_4>_&,`PCGVolumeSampler::SampleVolume'::__l2::<lambda_2>_&,`PCGVolumeSampler::SampleVolume'::__l2::<lambda_3>_&> @ 149c3d440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
FPCGAsync::
AsyncProcessingRangeEx<_PCGVolumeSampler::SampleVolume_::__l2::<lambda_1>_&,_PCGVolumeSampler::SampleVolume_::__l2::<lambda_4>_&,_PCGVolumeSampler::SampleVolume_::__l2::<lambda_2>_&,_PCGVolumeSampler::SampleVolume_::__l2::<lambda_3>_&>
          (FPCGAsyncState *param_1,int param_2,<lambda_1> *param_3,<lambda_4> *param_4,
          <lambda_2> *param_5,<lambda_3> *param_6,bool param_7,int param_8,bool param_9)

{
  ulonglong uVar1;
  int iVar2;
  bool bVar3;
  undefined1 auStackY_138 [32];
  code *local_e8;
  <lambda_1> *local_e0;
  code *local_d8;
  <lambda_4> *local_d0;
  code *local_c8;
  <lambda_4> *local_c0;
  code *local_b8;
  <lambda_1> *local_b0;
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
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_138;
  if ((param_1 == (FPCGAsyncState *)0x0) || (param_1->bIsRunningAsyncCall != false)) {
    local_b0 = (<lambda_1> *)param_6;
    local_a8._0_8_ = 0.0;
    local_b8 = UE::Core::Private::Function::
               TFunctionRefCaller<`PCGVolumeSampler::SampleVolume'::__l2::<lambda_3>,void,int>::Call
    ;
    local_c0 = (<lambda_4> *)param_5;
    local_c8 = UE::Core::Private::Function::
               TFunctionRefCaller<`PCGVolumeSampler::SampleVolume'::__l2::<lambda_2>,void,int,int,int>
               ::Call;
    local_d8 = UE::Core::Private::Function::
               TFunctionRefCaller<`PCGVolumeSampler::SampleVolume'::__l2::<lambda_4>,int,int,int,int>
               ::Call;
    local_e8 = UE::Core::Private::Function::
               TFunctionRefCaller<`PCGVolumeSampler::SampleVolume'::__l2::<lambda_1>,void>::Call;
    local_a8._12_4_ = 0;
    local_a8._16_4_ = 0;
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
    local_e0 = param_3;
    local_d0 = param_4;
    bVar3 = Private::AsyncProcessing
                      ((FPCGAsyncState *)local_a8,param_2,
                       (TFunctionRef<void___cdecl(void)> *)&local_e8,
                       (TFunctionRef<int___cdecl(int,int,int)> *)&local_d8,
                       (TFunctionRef<void___cdecl(int,int,int)> *)&local_c8,
                       (TFunctionRef<void___cdecl(int)> *)&local_b8,false,param_8,param_9);
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
    local_e0 = (<lambda_1> *)param_6;
    local_e8 = UE::Core::Private::Function::
               TFunctionRefCaller<`PCGVolumeSampler::SampleVolume'::__l2::<lambda_3>,void,int>::Call
    ;
    local_d0 = (<lambda_4> *)param_5;
    local_d8 = UE::Core::Private::Function::
               TFunctionRefCaller<`PCGVolumeSampler::SampleVolume'::__l2::<lambda_2>,void,int,int,int>
               ::Call;
    local_c8 = UE::Core::Private::Function::
               TFunctionRefCaller<`PCGVolumeSampler::SampleVolume'::__l2::<lambda_4>,int,int,int,int>
               ::Call;
    local_b8 = UE::Core::Private::Function::
               TFunctionRefCaller<`PCGVolumeSampler::SampleVolume'::__l2::<lambda_1>,void>::Call;
    param_1->bIsRunningAsyncCall = true;
    local_c0 = param_4;
    local_b0 = param_3;
    bVar3 = Private::AsyncProcessing
                      (param_1,param_2,(TFunctionRef<void___cdecl(void)> *)&local_b8,
                       (TFunctionRef<int___cdecl(int,int,int)> *)&local_c8,
                       (TFunctionRef<void___cdecl(int,int,int)> *)&local_d8,
                       (TFunctionRef<void___cdecl(int)> *)&local_e8,param_7,param_8,param_9);
    param_1->bIsRunningAsyncCall = false;
  }
  return bVar3;
}

// Cast<UPCGClipPathsSettings_const_> @ 149c3d6b0

UPCGClipPathsSettings * __cdecl Cast<UPCGClipPathsSettings_const_>(FPCGDataPtrWrapper *param_1)

{
  bool bVar1;
  UClass *pUVar2;
  FObjectPtr_u_0 local_res8 [4];
  
  local_res8[0] = (FObjectPtr_u_0)(param_1->Data).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if ((UPCGClipPathsSettings *)local_res8[0].Handle == (UPCGClipPathsSettings *)0x0) {
      return (UPCGClipPathsSettings *)0x0;
    }
    UE::GC::MarkAsReachable(local_res8[0].Handle);
  }
  if ((UPCGClipPathsSettings *)local_res8[0].Handle != (UPCGClipPathsSettings *)0x0) {
    pUVar2 = UPCGClipPathsSettings::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar2);
    if (bVar1) {
      return (UPCGClipPathsSettings *)local_res8[0].Handle;
    }
  }
  return (UPCGClipPathsSettings *)0x0;
}

// Cast<UPCGCreatePolygon2DSettings_const_> @ 149c3d710

UPCGCreatePolygon2DSettings * __cdecl
Cast<UPCGCreatePolygon2DSettings_const_>(FPCGDataPtrWrapper *param_1)

{
  bool bVar1;
  UClass *pUVar2;
  FObjectPtr_u_0 local_res8 [4];
  
  local_res8[0] = (FObjectPtr_u_0)(param_1->Data).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if ((UPCGCreatePolygon2DSettings *)local_res8[0].Handle == (UPCGCreatePolygon2DSettings *)0x0) {
      return (UPCGCreatePolygon2DSettings *)0x0;
    }
    UE::GC::MarkAsReachable(local_res8[0].Handle);
  }
  if ((UPCGCreatePolygon2DSettings *)local_res8[0].Handle != (UPCGCreatePolygon2DSettings *)0x0) {
    pUVar2 = UPCGCreatePolygon2DSettings::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar2);
    if (bVar1) {
      return (UPCGCreatePolygon2DSettings *)local_res8[0].Handle;
    }
  }
  return (UPCGCreatePolygon2DSettings *)0x0;
}

// Cast<UPCGSplineIntersectionSettings_const_> @ 149c3d770

UPCGSplineIntersectionSettings * __cdecl
Cast<UPCGSplineIntersectionSettings_const_>(FPCGDataPtrWrapper *param_1)

{
  bool bVar1;
  UClass *pUVar2;
  FObjectPtr_u_0 local_res8 [4];
  
  local_res8[0] = (FObjectPtr_u_0)(param_1->Data).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if ((UPCGSplineIntersectionSettings *)local_res8[0].Handle ==
        (UPCGSplineIntersectionSettings *)0x0) {
      return (UPCGSplineIntersectionSettings *)0x0;
    }
    UE::GC::MarkAsReachable(local_res8[0].Handle);
  }
  if ((UPCGSplineIntersectionSettings *)local_res8[0].Handle !=
      (UPCGSplineIntersectionSettings *)0x0) {
    pUVar2 = UPCGSplineIntersectionSettings::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar2);
    if (bVar1) {
      return (UPCGSplineIntersectionSettings *)local_res8[0].Handle;
    }
  }
  return (UPCGSplineIntersectionSettings *)0x0;
}

// Cast<AActor,UObject> @ 149c3d7d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __cdecl Cast<AActor,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      return (AActor *)param_1;
    }
  }
  return (AActor *)0x0;
}

// CastChecked<UPCGComponent,UActorComponent_const_> @ 149c3d820

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPCGComponent * __cdecl CastChecked<UPCGComponent,UActorComponent_const_>(UActorComponent *param_1)

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
  pUVar2 = Z_Construct_UClass_UPCGComponent_NoRegister();
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
  pFVar3 = GetFullNameForCastLogError<UActorComponent_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UPCGCreateAttributeSetSettings,UPCGSettings> @ 149c3d8e0

UPCGCreateAttributeSetSettings * __cdecl
CastChecked<UPCGCreateAttributeSetSettings,UPCGSettings>(UPCGSettings *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UPCGSettings *)0x0) {
    pFVar3 = GetTypeName<UPCGCreateAttributeSetSettings>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UPCGCreateAttributeSetSettings_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UPCGCreateAttributeSetSettings *)param_1;
  }
  pFVar3 = GetTypeName<UPCGCreateAttributeSetSettings>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UPCGSettings>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UPCGGetLandscapeSettings,UPCGDataFromActorSettings_const_> @ 149c3d9a0

UPCGGetLandscapeSettings * __cdecl
CastChecked<UPCGGetLandscapeSettings,UPCGDataFromActorSettings_const_>
          (UPCGDataFromActorSettings *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UPCGDataFromActorSettings *)0x0) {
    pFVar3 = GetTypeName<UPCGGetLandscapeSettings>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UPCGGetLandscapeSettings::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UPCGGetLandscapeSettings *)param_1;
  }
  pFVar3 = GetTypeName<UPCGGetLandscapeSettings>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UPCGDataFromActorSettings_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UPCGPointData,UPCGBasePointData> @ 149c3da60

UPCGPointData * __cdecl CastChecked<UPCGPointData,UPCGBasePointData>(UPCGBasePointData *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UPCGBasePointData *)0x0) {
    pFVar3 = GetTypeName<UPCGPointData>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UPCGPointData_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UPCGPointData *)param_1;
  }
  pFVar3 = GetTypeName<UPCGPointData>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UPCGBasePointData>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UPCGSplineData,UPCGSpatialData> @ 149c3db20

UPCGSplineData * __cdecl CastChecked<UPCGSplineData,UPCGSpatialData>(UPCGSpatialData *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UPCGSpatialData *)0x0) {
    pFVar3 = GetTypeName<UPCGSplineData>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UPCGSplineData_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UPCGSplineData *)param_1;
  }
  pFVar3 = GetTypeName<UPCGSplineData>(&local_28);
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

// CastChecked<UStaticMeshComponent,UActorComponent_const_> @ 149c3dbe0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UStaticMeshComponent * __cdecl
CastChecked<UStaticMeshComponent,UActorComponent_const_>(UActorComponent *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UActorComponent *)0x0) {
    pFVar3 = GetTypeName<UStaticMeshComponent>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UStaticMeshComponent *)param_1;
  }
  pFVar3 = GetTypeName<UStaticMeshComponent>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UActorComponent_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// ClearOrCreateAttribute<FSoftObjectPath> @ 149c3dca0

/* WARNING: Enum "Type": Some values do not have unique names */

FPCGMetadataAttribute<FSoftObjectPath> * __cdecl
PCGMetadataElementCommon::ClearOrCreateAttribute<FSoftObjectPath>
          (UPCGMetadata *param_1,FName *param_2,FSoftObjectPath *param_3)

{
  FScriptContainerElement *pFVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  FPCGMetadataDomain *this;
  FPCGMetadataAttribute<FSoftObjectPath> *pFVar4;
  bool bVar5;
  FString local_48;
  FSoftObjectPath local_38;
  
  if (param_1 == (UPCGMetadata *)0x0) {
    pFVar1 = (param_3->SubPathString).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    return (FPCGMetadataAttribute<FSoftObjectPath> *)0x0;
  }
  local_38.AssetPath.PackageName = (param_3->AssetPath).PackageName;
  local_38.AssetPath.AssetName = (param_3->AssetPath).AssetName;
  FVar2.Data = (param_3->SubPathString).Data.AllocatorInstance.Data;
  pFVar4 = (FPCGMetadataAttribute<FSoftObjectPath> *)0x0;
  (param_3->SubPathString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.SubPathString.Data.ArrayNum = (param_3->SubPathString).Data.ArrayNum;
  local_38.SubPathString.Data.ArrayMax = (param_3->SubPathString).Data.ArrayMax;
  (param_3->SubPathString).Data.ArrayNum = 0;
  (param_3->SubPathString).Data.ArrayMax = 0;
  local_38.SubPathString.Data.AllocatorInstance.Data = FVar2.Data;
  this = UPCGMetadata::GetMetadataDomain(param_1,&PCGMetadataDomainID::Default);
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`class_FPCGMetadataAttribute<FSoftObjectPath>*___ptr64___cdecl_PCGMetadataElementCommon::ClearOrCreateAttribute<FSoftObjectPath>(FPCGMetadataDomain*___ptr64,FName_const&___ptr64,FSoftObjectPath)'
                ::__l2::__CpuProfilerEventSpecId35,
               "PCGMetadataElementCommon::ClearOrCreateAttribute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\Metadata\\PCGMetadataElementCommon.h"
               ,0x23);
    FCpuProfilerTrace::OutputBeginEvent
              (`class_FPCGMetadataAttribute<FSoftObjectPath>*___ptr64___cdecl_PCGMetadataElementCommon::ClearOrCreateAttribute<FSoftObjectPath>(FPCGMetadataDomain*___ptr64,FName_const&___ptr64,FSoftObjectPath)'
               ::__l2::__CpuProfilerEventSpecId35);
  }
  if (this == (FPCGMetadataDomain *)0x0) {
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  else {
    bVar3 = FPCGMetadataDomain::HasAttribute(this,*param_2);
    if (bVar3) {
      if (5 < (byte)LogPCG._0_1_) {
        ::FName::ToString(param_2,&local_48);
        UE::Logging::Private::BasicLog<6>
                  (&`class_FPCGMetadataAttribute<FSoftObjectPath>*___ptr64___cdecl_PCGMetadataElementCommon::ClearOrCreateAttribute<FSoftObjectPath>(FPCGMetadataDomain*___ptr64,FName_const&___ptr64,FSoftObjectPath)'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      FPCGMetadataDomain::DeleteAttribute(this,*param_2);
    }
    FPCGMetadataDomain::CreateAttribute<FSoftObjectPath>(this,*param_2,&local_38,true,false);
    pFVar4 = (FPCGMetadataAttribute<FSoftObjectPath> *)
             FPCGMetadataDomain::GetMutableAttribute(this,*param_2);
    FVar2.Data = local_38.SubPathString.Data.AllocatorInstance.Data;
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
      FVar2.Data = local_38.SubPathString.Data.AllocatorInstance.Data;
    }
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  pFVar1 = (param_3->SubPathString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return pFVar4;
}

// ConstructItems<FPCGMeshInstanceList,FPCGMeshInstanceList,int> @ 149c3de60

void __cdecl
ConstructItems<FPCGMeshInstanceList,FPCGMeshInstanceList,int>
          (void *param_1,FPCGMeshInstanceList *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  void *_Src;
  FScriptContainerElement *_Src_00;
  int *piVar3;
  int *piVar4;
  
  if (param_3 != 0) {
    piVar3 = (int *)((longlong)param_1 + 0x28c);
    piVar4 = &(param_2->InstancesIndices).ArrayNum;
    do {
      FPCGSoftISMComponentDescriptor::FPCGSoftISMComponentDescriptor
                ((FPCGSoftISMComponentDescriptor *)
                 ((longlong)param_1 + (-0x2a8 - (longlong)param_2) + (longlong)piVar4),
                 (FPCGSoftISMComponentDescriptor *)(piVar4 + -0xaa));
      piVar3[-3] = 0;
      piVar3[-2] = 0;
      iVar2 = piVar4[-8];
      _Src = *(void **)(piVar4 + -10);
      piVar3[-1] = iVar2;
      if (iVar2 == 0) {
        *piVar3 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,iVar2,0,(ForAnyElementType *)(piVar3 + -3),iVar2,piVar3);
        memcpy(((ForAnyElementType *)(piVar3 + -3))->Data,_Src,(longlong)iVar2 * 0x60);
      }
      pFVar1 = (ForAnyElementType *)(piVar3 + 5);
      *(undefined8 *)(piVar3 + 1) = *(undefined8 *)(piVar4 + -6);
      *(undefined8 *)(piVar3 + 3) = *(undefined8 *)(piVar4 + -4);
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar2 = *piVar4;
      _Src_00 = (((TArray<int,TSizedDefaultAllocator<32>_> *)(piVar4 + -2))->AllocatorInstance).Data
      ;
      piVar3[7] = iVar2;
      if (iVar2 == 0) {
        piVar3[8] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar2,0,pFVar1,iVar2,piVar3 + 8);
        memcpy(pFVar1->Data,_Src_00,(longlong)iVar2 << 2);
      }
      piVar3 = piVar3 + 0xac;
      piVar4 = piVar4 + 0xac;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FPCGPackedCustomData,FPCGPackedCustomData,int> @ 149c3dfc0

void __cdecl
ConstructItems<FPCGPackedCustomData,FPCGPackedCustomData,int>
          (void *param_1,FPCGPackedCustomData *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  FPCGPackedCustomData *pFVar3;
  ForAnyElementType *pFVar4;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar5;
  
  if (param_3 != 0) {
    pFVar4 = (ForAnyElementType *)((longlong)param_1 + 8);
    pFVar3 = param_2;
    do {
      pTVar5 = &pFVar3->CustomData;
      *(undefined4 *)((longlong)param_1 + (-8 - (longlong)param_2) + (longlong)pTVar5) =
           *(undefined4 *)((longlong)(pTVar5 + -1) + 8);
      piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
      pFVar4->Data = (FScriptContainerElement *)0x0;
      iVar2 = pTVar5->ArrayNum;
      _Src = (pTVar5->AllocatorInstance).Data;
      *(int *)&pFVar4[1].Data = iVar2;
      if (iVar2 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar2,0,pFVar4,iVar2,piVar1);
        memcpy(pFVar4->Data,_Src,(longlong)iVar2 << 2);
      }
      pFVar3 = (FPCGPackedCustomData *)(pTVar5 + 1);
      pFVar4 = pFVar4 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FPCGSoftISMComponentDescriptor,FPCGSoftISMComponentDescriptor,int> @ 149c3e090

void __cdecl
ConstructItems<FPCGSoftISMComponentDescriptor,FPCGSoftISMComponentDescriptor,int>
          (void *param_1,FPCGSoftISMComponentDescriptor *param_2,int param_3)

{
  int *piVar1;
  FSoftISMComponentDescriptor *this;
  int iVar2;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar3;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar4;
  
  if (param_3 != 0) {
    pFVar3 = (ForAnyElementType *)((longlong)param_1 + 0x260);
    pTVar4 = &param_2->ComponentTags;
    do {
      this = (FSoftISMComponentDescriptor *)
             ((longlong)param_1 + (-0x260 - (longlong)param_2) + (longlong)pTVar4);
      FSoftISMComponentDescriptor::FSoftISMComponentDescriptor
                (this,(FSoftISMComponentDescriptor *)(pTVar4 + -0x26));
      this->_padding_ = (longlong)&___7FPCGSoftISMComponentDescriptor__6B_;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      pFVar3->Data = (FScriptContainerElement *)0x0;
      iVar2 = pTVar4->ArrayNum;
      _Src = (pTVar4->AllocatorInstance).Data;
      *(int *)&pFVar3[1].Data = iVar2;
      if (iVar2 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,iVar2,0,pFVar3,iVar2,piVar1);
        memcpy(pFVar3->Data,_Src,(longlong)iVar2 << 3);
      }
      FString::FString((FString *)(pFVar3 + 2),(FString *)(pTVar4 + 1));
      pFVar3 = pFVar3 + 0x50;
      pTVar4 = pTVar4 + 0x28;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FPCGStaticMeshSpawnerContext::FPackedInstanceListData,FPCGStaticMeshSpawnerContext::FPackedInstanceListData,int> @ 149c3e1b0

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
ConstructItems<FPCGStaticMeshSpawnerContext::FPackedInstanceListData,FPCGStaticMeshSpawnerContext::FPackedInstanceListData,int>
          (void *param_1,FPackedInstanceListData *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FPCGMeshInstanceList *pFVar4;
  FPCGPackedCustomData *pFVar5;
  int *piVar6;
  int *piVar7;
  
  if (param_3 != 0) {
    piVar6 = (int *)((longlong)param_1 + 0x28);
    piVar7 = &(param_2->PackedCustomData).ArrayNum;
    do {
      pFVar1 = (ForAnyElementType *)(piVar6 + -6);
      *(undefined8 *)((longlong)piVar7 + (longlong)param_1 + (-0x28 - (longlong)param_2)) =
           *(undefined8 *)(piVar7 + -10);
      *(undefined8 *)(piVar6 + -8) = *(undefined8 *)(piVar7 + -8);
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar3 = piVar7[-4];
      pFVar4 = *(FPCGMeshInstanceList **)(piVar7 + -6);
      piVar6[-4] = iVar3;
      if (iVar3 == 0) {
        piVar6[-3] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x2b0,8,iVar3,0,pFVar1,iVar3,piVar6 + -3);
        ConstructItems<FPCGMeshInstanceList,FPCGMeshInstanceList,int>(pFVar1->Data,pFVar4,iVar3);
      }
      piVar6[-2] = 0;
      piVar6[-1] = 0;
      iVar3 = *piVar7;
      pFVar5 = (FPCGPackedCustomData *)
               (((TArray<FPCGPackedCustomData,TSizedDefaultAllocator<32>_> *)(piVar7 + -2))->
               AllocatorInstance).Data;
      *piVar6 = iVar3;
      if (iVar3 == 0) {
        piVar6[1] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,iVar3,0,(ForAnyElementType *)(piVar6 + -2),iVar3,piVar6 + 1);
        ConstructItems<FPCGPackedCustomData,FPCGPackedCustomData,int>
                  (((ForAnyElementType *)(piVar6 + -2))->Data,pFVar5,iVar3);
      }
      *(undefined8 *)(piVar6 + 2) = *(undefined8 *)(piVar7 + 2);
      piVar2 = piVar7 + 4;
      piVar7 = piVar7 + 0x10;
      *(char *)(piVar6 + 4) = (char)*piVar2;
      piVar6 = piVar6 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TArray<FPCGMeshInstanceList,TSizedDefaultAllocator<32>_>,TArray<FPCGMeshInstanceList,TSizedDefaultAllocator<32>_>,int> @ 149c3e2f0

void __cdecl
ConstructItems<TArray<FPCGMeshInstanceList,TSizedDefaultAllocator<32>_>,TArray<FPCGMeshInstanceList,TSizedDefaultAllocator<32>_>,int>
          (void *param_1,TArray<FPCGMeshInstanceList,TSizedDefaultAllocator<32>_> *param_2,
          int param_3)

{
  int *piVar1;
  int iVar2;
  FPCGMeshInstanceList *pFVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = (longlong)param_2 - (longlong)param_1;
    do {
      ((ForAnyElementType *)param_1)->Data = (FScriptContainerElement *)0x0;
      piVar1 = (int *)((longlong)&((ForAnyElementType *)((longlong)param_1 + 8))->Data + 4);
      iVar2 = *(int *)(lVar4 + 8 + (longlong)param_1);
      pFVar3 = *(FPCGMeshInstanceList **)(lVar4 + (longlong)param_1);
      *(int *)&((ForAnyElementType *)((longlong)param_1 + 8))->Data = iVar2;
      if (iVar2 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x2b0,8,iVar2,0,param_1,iVar2,piVar1);
        ConstructItems<FPCGMeshInstanceList,FPCGMeshInstanceList,int>
                  (((ForAnyElementType *)param_1)->Data,pFVar3,iVar2);
      }
      param_1 = (void *)((longlong)param_1 + 0x10);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TMap<int,TSoftObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSoftObjectPtr<UMaterialInterface>,0>_>,TMap<int,TSoftObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSoftObjectPtr<UMaterialInterface>,0>_>,int> @ 149c3e3a0

void __cdecl
ConstructItems<TMap<int,TSoftObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSoftObjectPtr<UMaterialInterface>,0>_>,TMap<int,TSoftObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSoftObjectPtr<UMaterialInterface>,0>_>,int>
          (void *param_1,
          TMap<int,TSoftObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSoftObjectPtr<UMaterialInterface>,0>_>
          *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined4 *)(lVar1 + 0x1c) = 0;
      *(undefined4 *)(lVar1 + 0x20) = 0x80;
      *(undefined4 *)(lVar1 + 0x24) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0x28) = 0;
      *(undefined8 *)(lVar1 + 0x34) = 0;
      *(undefined4 *)(lVar1 + 0x3c) = 0;
      TSet<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TDefaultMapHashableKeyFuncs<int,TSoftObjectPtr<UMaterialInterface>,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TDefaultMapHashableKeyFuncs<int,TSoftObjectPtr<UMaterialInterface>,0>,FDefaultSetAllocator>
                   *)(lVar1 + -0xc),
                  (TSet<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TDefaultMapHashableKeyFuncs<int,TSoftObjectPtr<UMaterialInterface>,0>,FDefaultSetAllocator>
                   *)param_2);
      param_2 = param_2 + 1;
      lVar1 = lVar1 + 0x50;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,int> @ 149c3e430

void __cdecl
ConstructItems<TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,int>
          (void *param_1,
          TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
          *param_2,int param_3)

{
  UObjectBase *this;
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = 0;
      this = *(UObjectBase **)(lVar1 + (longlong)param_1);
      if (this != (UObjectBase *)0x0) {
        UObjectBase::AddRef(this);
        *(UObjectBase **)param_1 = this;
      }
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<TTuple<__int64,__int64>,int> @ 149c3e4b0

void __cdecl DefaultConstructItems<TTuple<__int64,__int64>,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<FConstStructView,int> @ 149c3e4e0

void __cdecl DefaultConstructItems<FConstStructView,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<FPCGPackedCustomData,int> @ 149c3e510

void __cdecl DefaultConstructItems<FPCGPackedCustomData,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      *(undefined4 *)(puVar1 + -2) = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FPCGWorldRaycast::FIterationState,int> @ 149c3e540

void __cdecl
DestructItems<FPCGWorldRaycast::FIterationState,int>(FIterationState *param_1,int param_2)

{
  ForElementType<FSetElementId> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->CachedFilterActors).Hash.SecondaryData;
    do {
      *(undefined4 *)(pFVar1 + 1) = 0;
      if (*pFVar1 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      TSparseArray<TSparseSetElement<TObjectKey<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TObjectKey<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TObjectKey<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(pFVar1 + -8));
      if (pFVar1[-10] != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)pFVar1[-10]);
      }
      if (pFVar1[-0xc] != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)pFVar1[-0xc]);
      }
      if (pFVar1[-0xe] != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)pFVar1[-0xe]);
      }
      pFVar1 = pFVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FPCGMeshInstanceList,int> @ 149c3e5d0

void __cdecl DestructItems<FPCGMeshInstanceList,int>(FPCGMeshInstanceList *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Instances;
    do {
      pFVar1 = (((TArray<int,TSizedDefaultAllocator<32>_> *)(pTVar2 + 2))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FString *)(pTVar2 + -1))->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<FName,TSizedDefaultAllocator<32>_> *)(pTVar2 + -2))->AllocatorInstance).
               Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      FSoftISMComponentDescriptor::~FSoftISMComponentDescriptor
                ((FSoftISMComponentDescriptor *)(pTVar2 + -0x28));
      pTVar2 = pTVar2 + 0x2b;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FPCGObjectSingleOverride,int> @ 149c3e650

void __cdecl
DestructItems<FPCGObjectSingleOverride,int>(FPCGObjectSingleOverride *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if (param_2 != 0) {
    pTVar3 = &(param_1->ObjectOverrideInputSelector).ExtraNames;
    do {
      DestructItems<FString,int>((FString *)(pTVar3->AllocatorInstance).Data,pTVar3->ArrayNum);
      pFVar1 = (pTVar3->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      puVar2 = *(undefined8 **)(pTVar3 + -3);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      puVar2 = *(undefined8 **)((longlong)(pTVar3 + -4) + 8);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      puVar2 = *(undefined8 **)(pTVar3 + -4);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      pTVar3 = (TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar3 + 6) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FPCGPackedCustomData,int> @ 149c3e6d0

void __cdecl DestructItems<FPCGPackedCustomData,int>(FPCGPackedCustomData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->CustomData).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = (FPCGPackedCustomData *)(&param_1->CustomData + 1);
  }
  return;
}

// DestructItems<FPCGSoftISMComponentDescriptor,int> @ 149c3e710

void __cdecl
DestructItems<FPCGSoftISMComponentDescriptor,int>
          (FPCGSoftISMComponentDescriptor *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->ComponentTags;
    do {
      pFVar1 = (((FString *)(pTVar2 + 1))->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      FSoftISMComponentDescriptor::~FSoftISMComponentDescriptor
                ((FSoftISMComponentDescriptor *)(pTVar2 + -0x26));
      pTVar2 = pTVar2 + 0x28;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FPCGSpawnSplineMeshPerIterationState,int> @ 149c3e770

void __cdecl
DestructItems<FPCGSpawnSplineMeshPerIterationState,int>
          (FPCGSpawnSplineMeshPerIterationState *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FPCGObjectSingleOverride,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &(param_1->ComponentOverrides).ObjectSingleOverrides;
    do {
      DestructItems<FPCGObjectSingleOverride,int>
                ((FPCGObjectSingleOverride *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<FPCGObjectSingleOverride,int>
                (*(FPCGObjectSingleOverride **)(pTVar2 + -4),*(int *)((longlong)(pTVar2 + -4) + 8));
      if (*(void **)(pTVar2 + -4) != (void *)0x0) {
        FMemory::Free(*(void **)(pTVar2 + -4));
      }
      DestructItems<FPCGObjectSingleOverride,int>
                (*(FPCGObjectSingleOverride **)(pTVar2 + -8),*(int *)((longlong)(pTVar2 + -8) + 8));
      if (*(void **)(pTVar2 + -8) != (void *)0x0) {
        FMemory::Free(*(void **)(pTVar2 + -8));
      }
      FSplineMeshComponentDescriptor::~FSplineMeshComponentDescriptor
                ((FSplineMeshComponentDescriptor *)(pTVar2 + -0x3a));
      pTVar2 = pTVar2 + 0x3d;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FPCGStaticMeshSpawnerContext::FPackedInstanceListData,int> @ 149c3e810

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
DestructItems<FPCGStaticMeshSpawnerContext::FPackedInstanceListData,int>
          (FPackedInstanceListData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FPCGPackedCustomData,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->PackedCustomData;
    do {
      DestructItems<FPCGPackedCustomData,int>
                ((FPCGPackedCustomData *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<FPCGMeshInstanceList,int>
                ((FPCGMeshInstanceList *)
                 (((TArray<FPCGMeshInstanceList,TSizedDefaultAllocator<32>_> *)(pTVar2 + -1))->
                 AllocatorInstance).Data,
                 ((TArray<FPCGMeshInstanceList,TSizedDefaultAllocator<32>_> *)(pTVar2 + -1))->
                 ArrayNum);
      pFVar1 = (((TArray<FPCGMeshInstanceList,TSizedDefaultAllocator<32>_> *)(pTVar2 + -1))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<PCGSplineIntersection::InputData,int> @ 149c3e870

void __cdecl DestructItems<PCGSplineIntersection::InputData,int>(InputData *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->RoughSampling).field_0x40;
    do {
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<int,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      if ((void *)puVar1[-10] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-10]);
      }
      puVar1 = puVar1 + 0x16;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TArray<TTuple<UE::Math::TTransform<double>,UE::Math::TVector<double>,float>,TSizedDefaultAllocator<32>_>,int> @ 149c3e8e0

void __cdecl
DestructItems<TArray<TTuple<UE::Math::TTransform<double>,UE::Math::TVector<double>,float>,TSizedDefaultAllocator<32>_>,int>
          (TArray<TTuple<UE::Math::TTransform<double>,UE::Math::TVector<double>,float>,TSizedDefaultAllocator<32>_>
           *param_1,int param_2)

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

// DestructItems<TArray<FPCGMeshInstanceList,TSizedDefaultAllocator<32>_>,int> @ 149c3e920

void __cdecl
DestructItems<TArray<FPCGMeshInstanceList,TSizedDefaultAllocator<32>_>,int>
          (TArray<FPCGMeshInstanceList,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    DestructItems<FPCGMeshInstanceList,int>
              ((FPCGMeshInstanceList *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// Dispatcher<`PCGUserParameterGet::Helpers::Conversion::AssignValue'::__l2::<lambda_1>_> @ 149c3e970

bool __thiscall
FPCGMetadataTypesConstantStruct::
Dispatcher<_PCGUserParameterGet::Helpers::Conversion::AssignValue_::__l2::<lambda_1>_>
          (FPCGMetadataTypesConstantStruct *this,<lambda_1> *param_1)

{
  bool bVar1;
  FText *pFVar2;
  TArrayView<UE::Math::TTransform<double>,int> local_38;
  IPCGAttributeAccessorKeys local_28;
  uchar *local_18;
  
  switch(this->Type) {
  case Float:
    local_38.ArrayNum = 1;
    local_18 = (param_1->UserParametersStruct->Value).StructMemory;
    local_28._padding_ = (longlong)&___7__FPCGAttributeAccessorKeysSingleObjectPtr_EX__6B_;
    local_38.DataPtr = (TTransform<double> *)&this->FloatValue;
    local_28.bIsReadOnly = true;
    bVar1 = IPCGAttributeAccessor::GetRange<float>
                      (param_1->PropertyAccessor->Ptr,(TArrayView<float,int> *)&local_38,0,&local_28
                       ,AllowBroadcastAndConstructible);
    break;
  case Double:
    local_38.ArrayNum = 1;
    local_18 = (param_1->UserParametersStruct->Value).StructMemory;
    local_28._padding_ = (longlong)&___7__FPCGAttributeAccessorKeysSingleObjectPtr_EX__6B_;
    local_38.DataPtr = (TTransform<double> *)&this->DoubleValue;
    local_28.bIsReadOnly = true;
    bVar1 = IPCGAttributeAccessor::GetRange<double>
                      (param_1->PropertyAccessor->Ptr,(TArrayView<double,int> *)&local_38,0,
                       &local_28,AllowBroadcastAndConstructible);
    break;
  case Integer32:
    local_38.ArrayNum = 1;
    local_18 = (param_1->UserParametersStruct->Value).StructMemory;
    local_28._padding_ = (longlong)&___7__FPCGAttributeAccessorKeysSingleObjectPtr_EX__6B_;
    local_38.DataPtr = (TTransform<double> *)&this->Int32Value;
    local_28.bIsReadOnly = true;
    bVar1 = IPCGAttributeAccessor::GetRange<int>
                      (param_1->PropertyAccessor->Ptr,(TArrayView<int,int> *)&local_38,0,&local_28,
                       AllowBroadcastAndConstructible);
    break;
  case Integer64:
    local_38.ArrayNum = 1;
    local_18 = (param_1->UserParametersStruct->Value).StructMemory;
    local_28._padding_ = (longlong)&___7__FPCGAttributeAccessorKeysSingleObjectPtr_EX__6B_;
    local_38.DataPtr = (TTransform<double> *)&this->IntValue;
    local_28.bIsReadOnly = true;
    bVar1 = IPCGAttributeAccessor::GetRange<__int64>
                      (param_1->PropertyAccessor->Ptr,(TArrayView<__int64,int> *)&local_38,0,
                       &local_28,AllowBroadcastAndConstructible);
    break;
  case Vector2:
    local_38.ArrayNum = 1;
    local_18 = (param_1->UserParametersStruct->Value).StructMemory;
    local_28._padding_ = (longlong)&___7__FPCGAttributeAccessorKeysSingleObjectPtr_EX__6B_;
    local_38.DataPtr = (TTransform<double> *)&this->Vector2Value;
    local_28.bIsReadOnly = true;
    bVar1 = IPCGAttributeAccessor::GetRange<UE::Math::TVector2<double>_>
                      (param_1->PropertyAccessor->Ptr,
                       (TArrayView<UE::Math::TVector2<double>,int> *)&local_38,0,&local_28,
                       AllowBroadcastAndConstructible);
    break;
  case Vector:
    local_38.ArrayNum = 1;
    local_18 = (param_1->UserParametersStruct->Value).StructMemory;
    local_28._padding_ = (longlong)&___7__FPCGAttributeAccessorKeysSingleObjectPtr_EX__6B_;
    local_38.DataPtr = (TTransform<double> *)&this->VectorValue;
    local_28.bIsReadOnly = true;
    bVar1 = IPCGAttributeAccessor::GetRange<UE::Math::TVector<double>_>
                      (param_1->PropertyAccessor->Ptr,
                       (TArrayView<UE::Math::TVector<double>,int> *)&local_38,0,&local_28,
                       AllowBroadcastAndConstructible);
    break;
  case Vector4:
    local_38.ArrayNum = 1;
    local_18 = (param_1->UserParametersStruct->Value).StructMemory;
    local_28._padding_ = (longlong)&___7__FPCGAttributeAccessorKeysSingleObjectPtr_EX__6B_;
    local_38.DataPtr = (TTransform<double> *)&this->Vector4Value;
    local_28.bIsReadOnly = true;
    bVar1 = IPCGAttributeAccessor::GetRange<UE::Math::TVector4<double>_>
                      (param_1->PropertyAccessor->Ptr,
                       (TArrayView<UE::Math::TVector4<double>,int> *)&local_38,0,&local_28,
                       AllowBroadcastAndConstructible);
    break;
  case Quaternion:
    local_38.ArrayNum = 1;
    local_18 = (param_1->UserParametersStruct->Value).StructMemory;
    local_28._padding_ = (longlong)&___7__FPCGAttributeAccessorKeysSingleObjectPtr_EX__6B_;
    local_38.DataPtr = (TTransform<double> *)&this->QuatValue;
    local_28.bIsReadOnly = true;
    bVar1 = IPCGAttributeAccessor::GetRange<UE::Math::TQuat<double>_>
                      (param_1->PropertyAccessor->Ptr,
                       (TArrayView<UE::Math::TQuat<double>,int> *)&local_38,0,&local_28,
                       AllowBroadcastAndConstructible);
    break;
  case Transform:
    local_38.ArrayNum = 1;
    local_18 = (param_1->UserParametersStruct->Value).StructMemory;
    local_28._padding_ = (longlong)&___7__FPCGAttributeAccessorKeysSingleObjectPtr_EX__6B_;
    local_38.DataPtr = &this->TransformValue;
    local_28.bIsReadOnly = true;
    bVar1 = IPCGAttributeAccessor::GetRange<UE::Math::TTransform<double>_>
                      (param_1->PropertyAccessor->Ptr,&local_38,0,&local_28,
                       AllowBroadcastAndConstructible);
    break;
  case String:
    local_38.ArrayNum = 1;
    local_18 = (param_1->UserParametersStruct->Value).StructMemory;
    local_28._padding_ = (longlong)&___7__FPCGAttributeAccessorKeysSingleObjectPtr_EX__6B_;
    local_38.DataPtr = (TTransform<double> *)&this->StringValue;
    local_28.bIsReadOnly = true;
    bVar1 = IPCGAttributeAccessor::GetRange<FString>
                      (param_1->PropertyAccessor->Ptr,(TArrayView<FString,int> *)&local_38,0,
                       &local_28,AllowBroadcastAndConstructible);
    break;
  case Boolean:
    local_38.ArrayNum = 1;
    local_18 = (param_1->UserParametersStruct->Value).StructMemory;
    local_28._padding_ = (longlong)&___7__FPCGAttributeAccessorKeysSingleObjectPtr_EX__6B_;
    local_38.DataPtr = (TTransform<double> *)&this->BoolValue;
    local_28.bIsReadOnly = true;
    bVar1 = IPCGAttributeAccessor::GetRange<bool>
                      (param_1->PropertyAccessor->Ptr,(TArrayView<bool,int> *)&local_38,0,&local_28,
                       AllowBroadcastAndConstructible);
    break;
  case Rotator:
    local_38.ArrayNum = 1;
    local_18 = (param_1->UserParametersStruct->Value).StructMemory;
    local_28._padding_ = (longlong)&___7__FPCGAttributeAccessorKeysSingleObjectPtr_EX__6B_;
    local_38.DataPtr = (TTransform<double> *)&this->RotatorValue;
    local_28.bIsReadOnly = true;
    bVar1 = IPCGAttributeAccessor::GetRange<UE::Math::TRotator<double>_>
                      (param_1->PropertyAccessor->Ptr,
                       (TArrayView<UE::Math::TRotator<double>,int> *)&local_38,0,&local_28,
                       AllowBroadcastAndConstructible);
    break;
  case Name:
    local_38.ArrayNum = 1;
    local_18 = (param_1->UserParametersStruct->Value).StructMemory;
    local_28._padding_ = (longlong)&___7__FPCGAttributeAccessorKeysSingleObjectPtr_EX__6B_;
    local_38.DataPtr = (TTransform<double> *)&this->NameValue;
    local_28.bIsReadOnly = true;
    bVar1 = IPCGAttributeAccessor::GetRange<FName>
                      (param_1->PropertyAccessor->Ptr,(TArrayView<FName,int> *)&local_38,0,&local_28
                       ,AllowBroadcastAndConstructible);
    break;
  case SoftObjectPath:
    local_38.ArrayNum = 1;
    local_18 = (param_1->UserParametersStruct->Value).StructMemory;
    local_28._padding_ = (longlong)&___7__FPCGAttributeAccessorKeysSingleObjectPtr_EX__6B_;
    local_38.DataPtr = (TTransform<double> *)&this->SoftObjectPathValue;
    local_28.bIsReadOnly = true;
    bVar1 = IPCGAttributeAccessor::GetRange<FSoftObjectPath>
                      (param_1->PropertyAccessor->Ptr,(TArrayView<FSoftObjectPath,int> *)&local_38,0
                       ,&local_28,AllowBroadcastAndConstructible);
    break;
  case SoftClassPath:
    local_38.ArrayNum = 1;
    local_18 = (param_1->UserParametersStruct->Value).StructMemory;
    local_28._padding_ = (longlong)&___7__FPCGAttributeAccessorKeysSingleObjectPtr_EX__6B_;
    local_38.DataPtr = (TTransform<double> *)&this->SoftClassPathValue;
    local_28.bIsReadOnly = true;
    bVar1 = IPCGAttributeAccessor::GetRange<FSoftClassPath>
                      (param_1->PropertyAccessor->Ptr,(TArrayView<FSoftClassPath,int> *)&local_38,0,
                       &local_28,AllowBroadcastAndConstructible);
    break;
  default:
    return false;
  }
  if (bVar1 == false) {
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_38,L"PCGUserParameterGetElement",
                        L"ConversionAssignValueCouldNotReadAccessor",
                        L"Could not read value from user parameter accessor.");
    FText::operator=(param_1->OutFailReason,pFVar2);
    if (local_38.DataPtr != (TTransform<double> *)0x0) {
      (**(code **)((longlong)(((TVector4<double>_u_0 *)&(local_38.DataPtr)->Rotation)->_s_0).X +
                  0x10))();
    }
  }
  return bVar1;
}

// DuplicateObject<AActor> @ 149c3ef70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __cdecl DuplicateObject<AActor>(AActor *param_1,UObject *param_2,FName param_3)

{
  UClass *pUVar1;
  AActor *pAVar2;
  
  pUVar1 = Z_Construct_UClass_AActor_NoRegister();
  pAVar2 = (AActor *)DuplicateObject_Internal(pUVar1,(UObject *)param_1,param_2,param_3);
  return pAVar2;
}

// ExtractActorFiltersIfNeeded<UPCGWorldRayHitData> @ 149c3f4a0

/* WARNING: Enum "EPCGWorldQueryFilter": Some values do not have unique names */
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
PCGWorldQuery::ExtractActorFiltersIfNeeded<UPCGWorldRayHitData>
          (FPCGWorldCommonQueryParams *param_1,FPCGContext *param_2,UPCGWorldRayHitData *param_3)

{
  UPCGData *pUVar1;
  code *pcVar2;
  bool bVar3;
  FPCGDataPtrWrapper *pFVar4;
  FText *pFVar5;
  FPCGDataPtrWrapper *this;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_48;
  FPCGDataPtrWrapper local_38;
  FPCGDataPtrWrapper local_28;
  FText local_18;
  
  if (param_3 == (UPCGWorldRayHitData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("WorldQueryData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGWorldQuery.cpp"
                       ,0x18,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_1->ActorFilterFromInput != NoTagFilter) {
    FPCGDataCollection::GetInputsByPin
              (&param_2->InputData,&local_48,&PCGWorldRayHitConstants::FilterActorPinLabel);
    if (1 < local_48.ArrayNum) {
      PCGLog::InputOutput::LogFirstInputOnlyWarning
                (PCGWorldRayHitConstants::FilterActorPinLabel,param_2);
    }
    if (local_48.ArrayNum == 0) {
      pFVar4 = FPCGDataPtrWrapper::FPCGDataPtrWrapper(&local_38,(UPCGData *)0x0);
      this = &local_38;
    }
    else {
      if (local_48.ArrayNum < 1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pFVar4 = FPCGDataPtrWrapper::FPCGDataPtrWrapper
                         (&local_28,(FPCGDataPtrWrapper *)local_48.AllocatorInstance.Data);
      this = &local_28;
    }
    pUVar1 = (pFVar4->Data).field0_0x0.DebugPtr;
    FPCGDataPtrWrapper::~FPCGDataPtrWrapper(this);
    if (pUVar1 != (UPCGData *)0x0) {
      (param_3->ActorFilter).CachedFilterActorsDirty = true;
      bVar3 = FPCGWorldCommonQueryParams::ExtractActorFiltersIfNeeded
                        (param_1,pUVar1,&(param_3->ActorFilter).FilterActors,param_2);
      if (!bVar3) {
        pFVar5 = FText::AsLocalizable_Advanced_LocText
                           (&local_18,L"PCGWorldQuery",L"FailExtractActorFilters",
                            L"Failed to extract actor filters.");
        PCGLog::LogWarningOnGraph(pFVar5,(FPCGContext *)0x0);
        if (local_18.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
        }
      }
    }
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
    if ((FPCGTaggedData *)local_48.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  return;
}

// ExtractActorFiltersIfNeeded<UPCGWorldVolumetricData> @ 149c3f630

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPCGWorldQueryFilter": Some values do not have unique names */

void __cdecl
PCGWorldQuery::ExtractActorFiltersIfNeeded<UPCGWorldVolumetricData>
          (FPCGWorldCommonQueryParams *param_1,FPCGContext *param_2,UPCGWorldVolumetricData *param_3
          )

{
  UPCGData *pUVar1;
  code *pcVar2;
  bool bVar3;
  FPCGDataPtrWrapper *pFVar4;
  FText *pFVar5;
  FPCGDataPtrWrapper *this;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_48;
  FPCGDataPtrWrapper local_38;
  FPCGDataPtrWrapper local_28;
  FText local_18;
  
  if (param_3 == (UPCGWorldVolumetricData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("WorldQueryData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGWorldQuery.cpp"
                       ,0x18,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_1->ActorFilterFromInput != NoTagFilter) {
    FPCGDataCollection::GetInputsByPin
              (&param_2->InputData,&local_48,&PCGWorldRayHitConstants::FilterActorPinLabel);
    if (1 < local_48.ArrayNum) {
      PCGLog::InputOutput::LogFirstInputOnlyWarning
                (PCGWorldRayHitConstants::FilterActorPinLabel,param_2);
    }
    if (local_48.ArrayNum == 0) {
      pFVar4 = FPCGDataPtrWrapper::FPCGDataPtrWrapper(&local_38,(UPCGData *)0x0);
      this = &local_38;
    }
    else {
      if (local_48.ArrayNum < 1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pFVar4 = FPCGDataPtrWrapper::FPCGDataPtrWrapper
                         (&local_28,(FPCGDataPtrWrapper *)local_48.AllocatorInstance.Data);
      this = &local_28;
    }
    pUVar1 = (pFVar4->Data).field0_0x0.DebugPtr;
    FPCGDataPtrWrapper::~FPCGDataPtrWrapper(this);
    if (pUVar1 != (UPCGData *)0x0) {
      (param_3->ActorFilter).CachedFilterActorsDirty = true;
      bVar3 = FPCGWorldCommonQueryParams::ExtractActorFiltersIfNeeded
                        (param_1,pUVar1,&(param_3->ActorFilter).FilterActors,param_2);
      if (!bVar3) {
        pFVar5 = FText::AsLocalizable_Advanced_LocText
                           (&local_18,L"PCGWorldQuery",L"FailExtractActorFilters",
                            L"Failed to extract actor filters.");
        PCGLog::LogWarningOnGraph(pFVar5,(FPCGContext *)0x0);
        if (local_18.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
        }
      }
    }
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
    if ((FPCGTaggedData *)local_48.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  return;
}

// ExtractAllValues<int,TSizedDefaultAllocator<32>_> @ 149c3f7c0

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
PCGAttributeAccessorHelpers::ExtractAllValues<int,TSizedDefaultAllocator<32>_>
          (UPCGData *param_1,FPCGAttributePropertyInputSelector *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,FPCGContext *param_4,
          EPCGAttributeAccessorFlags param_5,bool param_6)

{
  bool bVar1;
  undefined1 local_58 [16];
  FPCGAttributePropertySelector local_48;
  
  FPCGAttributePropertyInputSelector::CopyAndFixLast
            (param_2,(FPCGAttributePropertyInputSelector *)&local_48,param_1);
  CreateConstAccessor((UPCGData *)local_58,(FPCGAttributePropertySelector *)param_1,
                      SUB81(&local_48,0));
  CreateConstKeys((UPCGData *)(local_58 + 8),(FPCGAttributePropertySelector *)param_1);
  if ((IPCGAttributeAccessor *)local_58._0_8_ == (IPCGAttributeAccessor *)0x0) {
    if (param_6) {
      bVar1 = false;
      goto LAB_149c3f881;
    }
  }
  else if ((IPCGAttributeAccessorKeys *)local_58._8_8_ != (IPCGAttributeAccessorKeys *)0x0) {
    bVar1 = ExtractAllValues<int,TSizedDefaultAllocator<32>_>
                      ((IPCGAttributeAccessor *)local_58._0_8_,
                       (IPCGAttributeAccessorKeys *)local_58._8_8_,param_3,param_5);
    if ((!bVar1) && (!param_6)) {
      PCGLog::Metadata::LogFailToGetAttributeError(&local_48,param_4);
    }
    goto LAB_149c3f881;
  }
  PCGLog::Metadata::LogFailToCreateAccessorError(&local_48,param_4);
  bVar1 = false;
LAB_149c3f881:
  if ((IPCGAttributeAccessorKeys *)local_58._8_8_ != (IPCGAttributeAccessorKeys *)0x0) {
    (**(code **)*(longlong *)local_58._8_8_)(local_58._8_8_,1);
  }
  if ((IPCGAttributeAccessor *)local_58._0_8_ != (IPCGAttributeAccessor *)0x0) {
    (**(code **)((IPCGAttributeAccessor *)local_58._0_8_)->_padding_)(local_58._0_8_,1);
  }
  DestructItems<FString,int>
            ((FString *)local_48.ExtraNames.AllocatorInstance.Data,local_48.ExtraNames.ArrayNum);
  if (local_48.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.ExtraNames.AllocatorInstance.Data);
  }
  return bVar1;
}

// ExtractAllValues<double,TSizedDefaultAllocator<32>_> @ 149c3f8f0

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
PCGAttributeAccessorHelpers::ExtractAllValues<double,TSizedDefaultAllocator<32>_>
          (UPCGData *param_1,FPCGAttributePropertyInputSelector *param_2,
          TArray<double,TSizedDefaultAllocator<32>_> *param_3,FPCGContext *param_4,
          EPCGAttributeAccessorFlags param_5,bool param_6)

{
  bool bVar1;
  undefined1 local_58 [16];
  FPCGAttributePropertySelector local_48;
  
  FPCGAttributePropertyInputSelector::CopyAndFixLast
            (param_2,(FPCGAttributePropertyInputSelector *)&local_48,param_1);
  CreateConstAccessor((UPCGData *)local_58,(FPCGAttributePropertySelector *)param_1,
                      SUB81(&local_48,0));
  CreateConstKeys((UPCGData *)(local_58 + 8),(FPCGAttributePropertySelector *)param_1);
  if ((IPCGAttributeAccessor *)local_58._0_8_ == (IPCGAttributeAccessor *)0x0) {
    if (param_6) {
      bVar1 = false;
      goto LAB_149c3f9b1;
    }
  }
  else if ((IPCGAttributeAccessorKeys *)local_58._8_8_ != (IPCGAttributeAccessorKeys *)0x0) {
    bVar1 = ExtractAllValues<double,TSizedDefaultAllocator<32>_>
                      ((IPCGAttributeAccessor *)local_58._0_8_,
                       (IPCGAttributeAccessorKeys *)local_58._8_8_,param_3,param_5);
    if ((!bVar1) && (!param_6)) {
      PCGLog::Metadata::LogFailToGetAttributeError(&local_48,param_4);
    }
    goto LAB_149c3f9b1;
  }
  PCGLog::Metadata::LogFailToCreateAccessorError(&local_48,param_4);
  bVar1 = false;
LAB_149c3f9b1:
  if ((IPCGAttributeAccessorKeys *)local_58._8_8_ != (IPCGAttributeAccessorKeys *)0x0) {
    (**(code **)*(longlong *)local_58._8_8_)(local_58._8_8_,1);
  }
  if ((IPCGAttributeAccessor *)local_58._0_8_ != (IPCGAttributeAccessor *)0x0) {
    (**(code **)((IPCGAttributeAccessor *)local_58._0_8_)->_padding_)(local_58._0_8_,1);
  }
  DestructItems<FString,int>
            ((FString *)local_48.ExtraNames.AllocatorInstance.Data,local_48.ExtraNames.ArrayNum);
  if (local_48.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.ExtraNames.AllocatorInstance.Data);
  }
  return bVar1;
}

// ExtractAllValues<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> @ 149c3fa20

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
PCGAttributeAccessorHelpers::ExtractAllValues<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>
          (UPCGData *param_1,FPCGAttributePropertyInputSelector *param_2,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_3,
          FPCGContext *param_4,EPCGAttributeAccessorFlags param_5,bool param_6)

{
  code *pcVar1;
  undefined8 this;
  undefined8 uVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  undefined1 local_78 [16];
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TArrayView<UE::Math::TVector<double>,int> local_58;
  FPCGAttributePropertySelector local_48;
  
  FPCGAttributePropertyInputSelector::CopyAndFixLast
            (param_2,(FPCGAttributePropertyInputSelector *)&local_48,param_1);
  CreateConstAccessor((UPCGData *)local_78,(FPCGAttributePropertySelector *)param_1,
                      SUB81(&local_48,0));
  CreateConstKeys((UPCGData *)(local_78 + 8),(FPCGAttributePropertySelector *)param_1);
  uVar2 = local_78._8_8_;
  this = local_78._0_8_;
  if ((IPCGAttributeAccessor *)local_78._0_8_ == (IPCGAttributeAccessor *)0x0) {
    if (param_6) {
      bVar3 = false;
      goto LAB_149c3fb71;
    }
  }
  else if ((IPCGAttributeAccessorKeys *)local_78._8_8_ != (IPCGAttributeAccessorKeys *)0x0) {
    iVar5 = (**(code **)(*(longlong *)local_78._8_8_ + 0x10))(local_78._8_8_);
    if (iVar5 < 1) {
      bVar3 = true;
    }
    else {
      iVar5 = (**(code **)(*(longlong *)uVar2 + 0x10))(uVar2);
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (param_3,iVar5,Default);
      local_68 = (param_3->AllocatorInstance).Data;
      iStack_60 = param_3->ArrayNum;
      if ((iStack_60 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      local_58._8_8_ = CONCAT44(uStack_5c,iStack_60);
      local_58.DataPtr = (TVector<double> *)local_68;
      bVar3 = IPCGAttributeAccessor::GetRange<UE::Math::TVector<double>_>
                        ((IPCGAttributeAccessor *)this,&local_58,0,
                         (IPCGAttributeAccessorKeys *)uVar2,param_5);
      if ((!bVar3) && (!param_6)) {
        PCGLog::Metadata::LogFailToGetAttributeError(&local_48,param_4);
      }
    }
    goto LAB_149c3fb71;
  }
  PCGLog::Metadata::LogFailToCreateAccessorError(&local_48,param_4);
  bVar3 = false;
LAB_149c3fb71:
  if ((IPCGAttributeAccessorKeys *)local_78._8_8_ != (IPCGAttributeAccessorKeys *)0x0) {
    (**(code **)*(longlong *)local_78._8_8_)(local_78._8_8_,1);
  }
  if ((IPCGAttributeAccessor *)local_78._0_8_ != (IPCGAttributeAccessor *)0x0) {
    (**(code **)((IPCGAttributeAccessor *)local_78._0_8_)->_padding_)(local_78._0_8_,1);
  }
  DestructItems<FString,int>
            ((FString *)local_48.ExtraNames.AllocatorInstance.Data,local_48.ExtraNames.ArrayNum);
  if (local_48.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.ExtraNames.AllocatorInstance.Data);
  }
  return bVar3;
}

// ExtractAllValues<bool,TSizedDefaultAllocator<32>_> @ 149c3fbf0

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
PCGAttributeAccessorHelpers::ExtractAllValues<bool,TSizedDefaultAllocator<32>_>
          (UPCGData *param_1,FPCGAttributePropertyInputSelector *param_2,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_3,FPCGContext *param_4,
          EPCGAttributeAccessorFlags param_5,bool param_6)

{
  bool bVar1;
  undefined1 local_58 [16];
  FPCGAttributePropertySelector local_48;
  
  FPCGAttributePropertyInputSelector::CopyAndFixLast
            (param_2,(FPCGAttributePropertyInputSelector *)&local_48,param_1);
  CreateConstAccessor((UPCGData *)local_58,(FPCGAttributePropertySelector *)param_1,
                      SUB81(&local_48,0));
  CreateConstKeys((UPCGData *)(local_58 + 8),(FPCGAttributePropertySelector *)param_1);
  if ((IPCGAttributeAccessor *)local_58._0_8_ == (IPCGAttributeAccessor *)0x0) {
    if (param_6) {
      bVar1 = false;
      goto LAB_149c3fcb1;
    }
  }
  else if ((IPCGAttributeAccessorKeys *)local_58._8_8_ != (IPCGAttributeAccessorKeys *)0x0) {
    bVar1 = ExtractAllValues<bool,TSizedDefaultAllocator<32>_>
                      ((IPCGAttributeAccessor *)local_58._0_8_,
                       (IPCGAttributeAccessorKeys *)local_58._8_8_,param_3,param_5);
    if ((!bVar1) && (!param_6)) {
      PCGLog::Metadata::LogFailToGetAttributeError(&local_48,param_4);
    }
    goto LAB_149c3fcb1;
  }
  PCGLog::Metadata::LogFailToCreateAccessorError(&local_48,param_4);
  bVar1 = false;
LAB_149c3fcb1:
  if ((IPCGAttributeAccessorKeys *)local_58._8_8_ != (IPCGAttributeAccessorKeys *)0x0) {
    (**(code **)*(longlong *)local_58._8_8_)(local_58._8_8_,1);
  }
  if ((IPCGAttributeAccessor *)local_58._0_8_ != (IPCGAttributeAccessor *)0x0) {
    (**(code **)((IPCGAttributeAccessor *)local_58._0_8_)->_padding_)(local_58._0_8_,1);
  }
  DestructItems<FString,int>
            ((FString *)local_48.ExtraNames.AllocatorInstance.Data,local_48.ExtraNames.ArrayNum);
  if (local_48.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.ExtraNames.AllocatorInstance.Data);
  }
  return bVar1;
}

// ExtractParamValue<int> @ 149c3fd20

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
PCGAttributeAccessorHelpers::ExtractParamValue<int>
          (UPCGData *param_1,FPCGAttributePropertyInputSelector *param_2,int *param_3,
          FPCGContext *param_4,EPCGAttributeAccessorFlags param_5,bool param_6)

{
  bool bVar1;
  undefined1 local_98 [24];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  FPCGAttributePropertySelector local_78;
  FPCGAttributeAccessorKeysEntries local_38;
  
  FPCGAttributePropertyInputSelector::CopyAndFixLast
            (param_2,(FPCGAttributePropertyInputSelector *)&local_78,param_1);
  CreateConstAccessor((UPCGData *)local_98,(FPCGAttributePropertySelector *)param_1,
                      SUB81(&local_78,0));
  if ((IPCGAttributeAccessor *)local_98._0_8_ == (IPCGAttributeAccessor *)0x0) {
    if (!param_6) {
      PCGLog::Metadata::LogFailToCreateAccessorError(&local_78,param_4);
    }
    bVar1 = false;
  }
  else {
    FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(&local_38,0);
    _uStack_80 = CONCAT44(uStack_7c,1);
    local_98._16_8_ = param_3;
    bVar1 = IPCGAttributeAccessor::GetRange<int>
                      ((IPCGAttributeAccessor *)local_98._0_8_,
                       (TArrayView<int,int> *)(local_98 + 0x10),0,
                       (IPCGAttributeAccessorKeys *)&local_38,param_5);
    if ((!bVar1) && (!param_6)) {
      PCGLog::Metadata::LogFailToGetAttributeError(&local_78,param_4);
    }
    if (local_38.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.ExtractedEntries.AllocatorInstance.Data);
    }
  }
  if ((IPCGAttributeAccessor *)local_98._0_8_ != (IPCGAttributeAccessor *)0x0) {
    (**(code **)((IPCGAttributeAccessor *)local_98._0_8_)->_padding_)(local_98._0_8_,1);
  }
  DestructItems<FString,int>
            ((FString *)local_78.ExtraNames.AllocatorInstance.Data,local_78.ExtraNames.ArrayNum);
  if (local_78.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.ExtraNames.AllocatorInstance.Data);
  }
  return bVar1;
}

// ExtractParamValue<double> @ 149c3fe70

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
PCGAttributeAccessorHelpers::ExtractParamValue<double>
          (UPCGData *param_1,FPCGAttributePropertyInputSelector *param_2,double *param_3,
          FPCGContext *param_4,EPCGAttributeAccessorFlags param_5,bool param_6)

{
  bool bVar1;
  undefined1 local_98 [24];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  FPCGAttributePropertySelector local_78;
  FPCGAttributeAccessorKeysEntries local_38;
  
  FPCGAttributePropertyInputSelector::CopyAndFixLast
            (param_2,(FPCGAttributePropertyInputSelector *)&local_78,param_1);
  CreateConstAccessor((UPCGData *)local_98,(FPCGAttributePropertySelector *)param_1,
                      SUB81(&local_78,0));
  if ((IPCGAttributeAccessor *)local_98._0_8_ == (IPCGAttributeAccessor *)0x0) {
    if (!param_6) {
      PCGLog::Metadata::LogFailToCreateAccessorError(&local_78,param_4);
    }
    bVar1 = false;
  }
  else {
    FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(&local_38,0);
    _uStack_80 = CONCAT44(uStack_7c,1);
    local_98._16_8_ = param_3;
    bVar1 = IPCGAttributeAccessor::GetRange<double>
                      ((IPCGAttributeAccessor *)local_98._0_8_,
                       (TArrayView<double,int> *)(local_98 + 0x10),0,
                       (IPCGAttributeAccessorKeys *)&local_38,param_5);
    if ((!bVar1) && (!param_6)) {
      PCGLog::Metadata::LogFailToGetAttributeError(&local_78,param_4);
    }
    if (local_38.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.ExtractedEntries.AllocatorInstance.Data);
    }
  }
  if ((IPCGAttributeAccessor *)local_98._0_8_ != (IPCGAttributeAccessor *)0x0) {
    (**(code **)((IPCGAttributeAccessor *)local_98._0_8_)->_padding_)(local_98._0_8_,1);
  }
  DestructItems<FString,int>
            ((FString *)local_78.ExtraNames.AllocatorInstance.Data,local_78.ExtraNames.ArrayNum);
  if (local_78.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.ExtraNames.AllocatorInstance.Data);
  }
  return bVar1;
}

// FindByPredicate<`FPCGDataCollection::GetSettings<UPCGClipPathsSettings>'::__l2::<lambda_1>_> @ 149c3ffc0

FPCGTaggedData * __thiscall
TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FPCGDataCollection::GetSettings<UPCGClipPathsSettings>_::__l2::<lambda_1>_>
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
LAB_149c40003:
      if (local_res8.Handle != (UObject *)0x0) {
        pUVar2 = UPCGClipPathsSettings::StaticClass();
        bVar1 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar2);
        if ((bVar1) && (local_res8.Handle != (UObject *)0x0)) {
          return (FPCGTaggedData *)pFVar3;
        }
      }
    }
    else if (local_res8.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res8.Handle);
      goto LAB_149c40003;
    }
    pFVar3 = pFVar3 + 0xf;
  } while( true );
}

// FindByPredicate<`FPCGDataCollection::GetSettings<UPCGCreatePolygon2DSettings>'::__l2::<lambda_1>_> @ 149c40050

FPCGTaggedData * __thiscall
TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FPCGDataCollection::GetSettings<UPCGCreatePolygon2DSettings>_::__l2::<lambda_1>_>
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
LAB_149c40093:
      if (local_res8.Handle != (UObject *)0x0) {
        pUVar2 = UPCGCreatePolygon2DSettings::StaticClass();
        bVar1 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar2);
        if ((bVar1) && (local_res8.Handle != (UObject *)0x0)) {
          return (FPCGTaggedData *)pFVar3;
        }
      }
    }
    else if (local_res8.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res8.Handle);
      goto LAB_149c40093;
    }
    pFVar3 = pFVar3 + 0xf;
  } while( true );
}

// FindByPredicate<`FPCGDataCollection::GetSettings<UPCGGenericUserParameterGetSettings>'::__l2::<lambda_1>_> @ 149c400e0

FPCGTaggedData * __thiscall
TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FPCGDataCollection::GetSettings<UPCGGenericUserParameterGetSettings>_::__l2::<lambda_1>_>
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
LAB_149c40123:
      if (local_res8.Handle != (UObject *)0x0) {
        pUVar2 = UPCGGenericUserParameterGetSettings::StaticClass();
        bVar1 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar2);
        if ((bVar1) && (local_res8.Handle != (UObject *)0x0)) {
          return (FPCGTaggedData *)pFVar3;
        }
      }
    }
    else if (local_res8.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res8.Handle);
      goto LAB_149c40123;
    }
    pFVar3 = pFVar3 + 0xf;
  } while( true );
}

// FindByPredicate<`FPCGDataCollection::GetSettings<UPCGGetSegmentSettings>'::__l2::<lambda_1>_> @ 149c40170

FPCGTaggedData * __thiscall
TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FPCGDataCollection::GetSettings<UPCGGetSegmentSettings>_::__l2::<lambda_1>_>
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
LAB_149c401b3:
      if (local_res8.Handle != (UObject *)0x0) {
        pUVar2 = UPCGGetSegmentSettings::StaticClass();
        bVar1 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar2);
        if ((bVar1) && (local_res8.Handle != (UObject *)0x0)) {
          return (FPCGTaggedData *)pFVar3;
        }
      }
    }
    else if (local_res8.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res8.Handle);
      goto LAB_149c401b3;
    }
    pFVar3 = pFVar3 + 0xf;
  } while( true );
}

// FindByPredicate<`FPCGDataCollection::GetSettings<UPCGReverseSplineSettings>'::__l2::<lambda_1>_> @ 149c40200

FPCGTaggedData * __thiscall
TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FPCGDataCollection::GetSettings<UPCGReverseSplineSettings>_::__l2::<lambda_1>_>
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
LAB_149c40243:
      if (local_res8.Handle != (UObject *)0x0) {
        pUVar2 = UPCGReverseSplineSettings::StaticClass();
        bVar1 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar2);
        if ((bVar1) && (local_res8.Handle != (UObject *)0x0)) {
          return (FPCGTaggedData *)pFVar3;
        }
      }
    }
    else if (local_res8.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res8.Handle);
      goto LAB_149c40243;
    }
    pFVar3 = pFVar3 + 0xf;
  } while( true );
}

// FindByPredicate<`FPCGDataCollection::GetSettings<UPCGSpawnActorSettings>'::__l2::<lambda_1>_> @ 149c40290

FPCGTaggedData * __thiscall
TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSpawnActorSettings>_::__l2::<lambda_1>_>
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
LAB_149c402d3:
      if (local_res8.Handle != (UObject *)0x0) {
        pUVar2 = UPCGSpawnActorSettings::StaticClass();
        bVar1 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar2);
        if ((bVar1) && (local_res8.Handle != (UObject *)0x0)) {
          return (FPCGTaggedData *)pFVar3;
        }
      }
    }
    else if (local_res8.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res8.Handle);
      goto LAB_149c402d3;
    }
    pFVar3 = pFVar3 + 0xf;
  } while( true );
}

// FindByPredicate<`FPCGDataCollection::GetSettings<UPCGSpawnSplineMeshSettings>'::__l2::<lambda_1>_> @ 149c40320

FPCGTaggedData * __thiscall
TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSpawnSplineMeshSettings>_::__l2::<lambda_1>_>
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
LAB_149c40363:
      if (local_res8.Handle != (UObject *)0x0) {
        pUVar2 = UPCGSpawnSplineMeshSettings::StaticClass();
        bVar1 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar2);
        if ((bVar1) && (local_res8.Handle != (UObject *)0x0)) {
          return (FPCGTaggedData *)pFVar3;
        }
      }
    }
    else if (local_res8.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res8.Handle);
      goto LAB_149c40363;
    }
    pFVar3 = pFVar3 + 0xf;
  } while( true );
}

// FindByPredicate<`FPCGDataCollection::GetSettings<UPCGSpawnSplineSettings>'::__l2::<lambda_1>_> @ 149c403b0

FPCGTaggedData * __thiscall
TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSpawnSplineSettings>_::__l2::<lambda_1>_>
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
LAB_149c403f3:
      if (local_res8.Handle != (UObject *)0x0) {
        pUVar2 = UPCGSpawnSplineSettings::StaticClass();
        bVar1 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar2);
        if ((bVar1) && (local_res8.Handle != (UObject *)0x0)) {
          return (FPCGTaggedData *)pFVar3;
        }
      }
    }
    else if (local_res8.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res8.Handle);
      goto LAB_149c403f3;
    }
    pFVar3 = pFVar3 + 0xf;
  } while( true );
}

// FindByPredicate<`FPCGDataCollection::GetSettings<UPCGSplineIntersectionSettings>'::__l2::<lambda_1>_> @ 149c40440

FPCGTaggedData * __thiscall
TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSplineIntersectionSettings>_::__l2::<lambda_1>_>
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
LAB_149c40483:
      if (local_res8.Handle != (UObject *)0x0) {
        pUVar2 = UPCGSplineIntersectionSettings::StaticClass();
        bVar1 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar2);
        if ((bVar1) && (local_res8.Handle != (UObject *)0x0)) {
          return (FPCGTaggedData *)pFVar3;
        }
      }
    }
    else if (local_res8.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res8.Handle);
      goto LAB_149c40483;
    }
    pFVar3 = pFVar3 + 0xf;
  } while( true );
}

// FindByPredicate<`FPCGDataCollection::GetSettings<UPCGSplineSamplerSettings>'::__l2::<lambda_1>_> @ 149c404d0

FPCGTaggedData * __thiscall
TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSplineSamplerSettings>_::__l2::<lambda_1>_>
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
LAB_149c40513:
      if (local_res8.Handle != (UObject *)0x0) {
        pUVar2 = UPCGSplineSamplerSettings::StaticClass();
        bVar1 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar2);
        if ((bVar1) && (local_res8.Handle != (UObject *)0x0)) {
          return (FPCGTaggedData *)pFVar3;
        }
      }
    }
    else if (local_res8.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res8.Handle);
      goto LAB_149c40513;
    }
    pFVar3 = pFVar3 + 0xf;
  } while( true );
}

// FindByPredicate<`FPCGDataCollection::GetSettings<UPCGSplitPointsSettings>'::__l2::<lambda_1>_> @ 149c40560

FPCGTaggedData * __thiscall
TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSplitPointsSettings>_::__l2::<lambda_1>_>
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
LAB_149c405a3:
      if (local_res8.Handle != (UObject *)0x0) {
        pUVar2 = UPCGSplitPointsSettings::StaticClass();
        bVar1 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar2);
        if ((bVar1) && (local_res8.Handle != (UObject *)0x0)) {
          return (FPCGTaggedData *)pFVar3;
        }
      }
    }
    else if (local_res8.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res8.Handle);
      goto LAB_149c405a3;
    }
    pFVar3 = pFVar3 + 0xf;
  } while( true );
}

// FindByPredicate<`FPCGDataCollection::GetSettings<UPCGSplitSplinesSettings>'::__l2::<lambda_1>_> @ 149c405f0

FPCGTaggedData * __thiscall
TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSplitSplinesSettings>_::__l2::<lambda_1>_>
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
LAB_149c40633:
      if (local_res8.Handle != (UObject *)0x0) {
        pUVar2 = UPCGSplitSplinesSettings::StaticClass();
        bVar1 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar2);
        if ((bVar1) && (local_res8.Handle != (UObject *)0x0)) {
          return (FPCGTaggedData *)pFVar3;
        }
      }
    }
    else if (local_res8.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res8.Handle);
      goto LAB_149c40633;
    }
    pFVar3 = pFVar3 + 0xf;
  } while( true );
}

// FindByPredicate<`FPCGDataCollection::GetSettings<UPCGStaticMeshSpawnerSettings>'::__l2::<lambda_1>_> @ 149c40680

FPCGTaggedData * __thiscall
TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FPCGDataCollection::GetSettings<UPCGStaticMeshSpawnerSettings>_::__l2::<lambda_1>_>
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
LAB_149c406c3:
      if (local_res8.Handle != (UObject *)0x0) {
        pUVar2 = UPCGStaticMeshSpawnerSettings::StaticClass();
        bVar1 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar2);
        if ((bVar1) && (local_res8.Handle != (UObject *)0x0)) {
          return (FPCGTaggedData *)pFVar3;
        }
      }
    }
    else if (local_res8.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res8.Handle);
      goto LAB_149c406c3;
    }
    pFVar3 = pFVar3 + 0xf;
  } while( true );
}

// FindByPredicate<`FPCGDataCollection::GetSettings<UPCGSurfaceSamplerSettings>'::__l2::<lambda_1>_> @ 149c40710

FPCGTaggedData * __thiscall
TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSurfaceSamplerSettings>_::__l2::<lambda_1>_>
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
LAB_149c40753:
      if (local_res8.Handle != (UObject *)0x0) {
        pUVar2 = UPCGSurfaceSamplerSettings::StaticClass();
        bVar1 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar2);
        if ((bVar1) && (local_res8.Handle != (UObject *)0x0)) {
          return (FPCGTaggedData *)pFVar3;
        }
      }
    }
    else if (local_res8.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res8.Handle);
      goto LAB_149c40753;
    }
    pFVar3 = pFVar3 + 0xf;
  } while( true );
}

// FindByPredicate<`FPCGDataCollection::GetSettings<UPCGTextureSamplerSettings>'::__l2::<lambda_1>_> @ 149c407a0

FPCGTaggedData * __thiscall
TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FPCGDataCollection::GetSettings<UPCGTextureSamplerSettings>_::__l2::<lambda_1>_>
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
LAB_149c407e3:
      if (local_res8.Handle != (UObject *)0x0) {
        pUVar2 = UPCGTextureSamplerSettings::StaticClass();
        bVar1 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar2);
        if ((bVar1) && (local_res8.Handle != (UObject *)0x0)) {
          return (FPCGTaggedData *)pFVar3;
        }
      }
    }
    else if (local_res8.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res8.Handle);
      goto LAB_149c407e3;
    }
    pFVar3 = pFVar3 + 0xf;
  } while( true );
}

// FindByPredicate<`FPCGDataCollection::GetSettings<UPCGTransformPointsSettings>'::__l2::<lambda_1>_> @ 149c40830

FPCGTaggedData * __thiscall
TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FPCGDataCollection::GetSettings<UPCGTransformPointsSettings>_::__l2::<lambda_1>_>
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
LAB_149c40873:
      if (local_res8.Handle != (UObject *)0x0) {
        pUVar2 = UPCGTransformPointsSettings::StaticClass();
        bVar1 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar2);
        if ((bVar1) && (local_res8.Handle != (UObject *)0x0)) {
          return (FPCGTaggedData *)pFVar3;
        }
      }
    }
    else if (local_res8.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res8.Handle);
      goto LAB_149c40873;
    }
    pFVar3 = pFVar3 + 0xf;
  } while( true );
}

// FindByPredicate<`FPCGDataCollection::GetSettings<UPCGUnionSettings>'::__l2::<lambda_1>_> @ 149c408c0

FPCGTaggedData * __thiscall
TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FPCGDataCollection::GetSettings<UPCGUnionSettings>_::__l2::<lambda_1>_>
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
LAB_149c40903:
      if (local_res8.Handle != (UObject *)0x0) {
        pUVar2 = UPCGUnionSettings::StaticClass();
        bVar1 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar2);
        if ((bVar1) && (local_res8.Handle != (UObject *)0x0)) {
          return (FPCGTaggedData *)pFVar3;
        }
      }
    }
    else if (local_res8.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res8.Handle);
      goto LAB_149c40903;
    }
    pFVar3 = pFVar3 + 0xf;
  } while( true );
}

// FindByPredicate<`FPCGDataCollection::GetSettings<UPCGUserParameterGetSettings>'::__l2::<lambda_1>_> @ 149c40950

FPCGTaggedData * __thiscall
TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FPCGDataCollection::GetSettings<UPCGUserParameterGetSettings>_::__l2::<lambda_1>_>
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
LAB_149c40993:
      if (local_res8.Handle != (UObject *)0x0) {
        pUVar2 = UPCGUserParameterGetSettings::StaticClass();
        bVar1 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar2);
        if ((bVar1) && (local_res8.Handle != (UObject *)0x0)) {
          return (FPCGTaggedData *)pFVar3;
        }
      }
    }
    else if (local_res8.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res8.Handle);
      goto LAB_149c40993;
    }
    pFVar3 = pFVar3 + 0xf;
  } while( true );
}

// FindByPredicate<`FPCGDataCollection::GetSettings<UPCGVisualizeAttributeSettings>'::__l2::<lambda_1>_> @ 149c409e0

FPCGTaggedData * __thiscall
TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FPCGDataCollection::GetSettings<UPCGVisualizeAttributeSettings>_::__l2::<lambda_1>_>
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
LAB_149c40a23:
      if (local_res8.Handle != (UObject *)0x0) {
        pUVar2 = UPCGVisualizeAttributeSettings::StaticClass();
        bVar1 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar2);
        if ((bVar1) && (local_res8.Handle != (UObject *)0x0)) {
          return (FPCGTaggedData *)pFVar3;
        }
      }
    }
    else if (local_res8.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res8.Handle);
      goto LAB_149c40a23;
    }
    pFVar3 = pFVar3 + 0xf;
  } while( true );
}

// FindByPredicate<`FPCGDataCollection::GetSettings<UPCGVolumeSamplerSettings>'::__l2::<lambda_1>_> @ 149c40a70

FPCGTaggedData * __thiscall
TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FPCGDataCollection::GetSettings<UPCGVolumeSamplerSettings>_::__l2::<lambda_1>_>
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
LAB_149c40ab3:
      if (local_res8.Handle != (UObject *)0x0) {
        pUVar2 = UPCGVolumeSamplerSettings::StaticClass();
        bVar1 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar2);
        if ((bVar1) && (local_res8.Handle != (UObject *)0x0)) {
          return (FPCGTaggedData *)pFVar3;
        }
      }
    }
    else if (local_res8.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res8.Handle);
      goto LAB_149c40ab3;
    }
    pFVar3 = pFVar3 + 0xf;
  } while( true );
}

// FindByPredicate<`FPCGDataCollection::GetSettings<UPCGWorldQuerySettings>'::__l2::<lambda_1>_> @ 149c40b00

FPCGTaggedData * __thiscall
TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FPCGDataCollection::GetSettings<UPCGWorldQuerySettings>_::__l2::<lambda_1>_>
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
LAB_149c40b43:
      if (local_res8.Handle != (UObject *)0x0) {
        pUVar2 = UPCGWorldQuerySettings::StaticClass();
        bVar1 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar2);
        if ((bVar1) && (local_res8.Handle != (UObject *)0x0)) {
          return (FPCGTaggedData *)pFVar3;
        }
      }
    }
    else if (local_res8.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res8.Handle);
      goto LAB_149c40b43;
    }
    pFVar3 = pFVar3 + 0xf;
  } while( true );
}

// FindByPredicate<`FPCGDataCollection::GetSettings<UPCGWorldRayHitSettings>'::__l2::<lambda_1>_> @ 149c40b90

FPCGTaggedData * __thiscall
TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FPCGDataCollection::GetSettings<UPCGWorldRayHitSettings>_::__l2::<lambda_1>_>
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
LAB_149c40bd3:
      if (local_res8.Handle != (UObject *)0x0) {
        pUVar2 = UPCGWorldRayHitSettings::StaticClass();
        bVar1 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar2);
        if ((bVar1) && (local_res8.Handle != (UObject *)0x0)) {
          return (FPCGTaggedData *)pFVar3;
        }
      }
    }
    else if (local_res8.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res8.Handle);
      goto LAB_149c40bd3;
    }
    pFVar3 = pFVar3 + 0xf;
  } while( true );
}

// FindByPredicate<`FPCGDataCollection::GetSettings<UPCGWorldRaycastElementSettings>'::__l2::<lambda_1>_> @ 149c40c20

FPCGTaggedData * __thiscall
TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FPCGDataCollection::GetSettings<UPCGWorldRaycastElementSettings>_::__l2::<lambda_1>_>
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
LAB_149c40c63:
      if (local_res8.Handle != (UObject *)0x0) {
        pUVar2 = UPCGWorldRaycastElementSettings::StaticClass();
        bVar1 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar2);
        if ((bVar1) && (local_res8.Handle != (UObject *)0x0)) {
          return (FPCGTaggedData *)pFVar3;
        }
      }
    }
    else if (local_res8.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res8.Handle);
      goto LAB_149c40c63;
    }
    pFVar3 = pFVar3 + 0xf;
  } while( true );
}

// FindByPredicate<``FPCGSpawnSplineMeshElement::ExecuteInternal'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_> @ 149c40cb0

FPCGObjectPropertyOverrideDescription * __thiscall
TArray<FPCGObjectPropertyOverrideDescription,TSizedDefaultAllocator<32>_>::
FindByPredicate<__FPCGSpawnSplineMeshElement::ExecuteInternal_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
          (TArray<FPCGObjectPropertyOverrideDescription,TSizedDefaultAllocator<32>_> *this,
          <lambda_1> param_1)

{
  int iVar1;
  FName FVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  FName *pFVar5;
  FString *pFVar6;
  int iVar7;
  FPCGObjectPropertyOverrideDescription *pFVar8;
  FPCGObjectPropertyOverrideDescription *pFVar9;
  FName local_res8;
  undefined4 uStack_3c;
  TStringView<wchar_t> local_38;
  FString local_28;
  
  pFVar9 = (FPCGObjectPropertyOverrideDescription *)(this->AllocatorInstance).Data;
  pFVar8 = pFVar9 + this->ArrayNum;
  while( true ) {
    if (pFVar9 == pFVar8) {
      return (FPCGObjectPropertyOverrideDescription *)0x0;
    }
    pFVar5 = ::FName::FName(&local_res8,0x10,L"StartRollDegrees",FNAME_Add);
    FVar2 = *pFVar5;
    pFVar6 = ::FString::FString(&local_28,&pFVar9->PropertyTarget);
    local_38.DataPtr = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    iVar1 = (pFVar6->Data).ArrayNum;
    iVar7 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar7 = 0;
    }
    local_38._12_4_ = uStack_3c;
    local_38.Size = iVar7;
    bVar4 = ::FName::Equals(FVar2,&local_38);
    pFVar3 = (pFVar6->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    if (bVar4) break;
    pFVar9 = pFVar9 + 1;
  }
  return pFVar9;
}

// FindByPredicate<``FPCGSpawnSplineMeshElement::ExecuteInternal'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>_> @ 149c40d80

FPCGObjectPropertyOverrideDescription * __thiscall
TArray<FPCGObjectPropertyOverrideDescription,TSizedDefaultAllocator<32>_>::
FindByPredicate<__FPCGSpawnSplineMeshElement::ExecuteInternal_::__l2::<lambda_1>::operator()_::__l2::<lambda_2>_>
          (TArray<FPCGObjectPropertyOverrideDescription,TSizedDefaultAllocator<32>_> *this,
          <lambda_2> param_1)

{
  int iVar1;
  FName FVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  FName *pFVar5;
  FString *pFVar6;
  int iVar7;
  FPCGObjectPropertyOverrideDescription *pFVar8;
  FPCGObjectPropertyOverrideDescription *pFVar9;
  FName local_res8;
  undefined4 uStack_3c;
  TStringView<wchar_t> local_38;
  FString local_28;
  
  pFVar9 = (FPCGObjectPropertyOverrideDescription *)(this->AllocatorInstance).Data;
  pFVar8 = pFVar9 + this->ArrayNum;
  while( true ) {
    if (pFVar9 == pFVar8) {
      return (FPCGObjectPropertyOverrideDescription *)0x0;
    }
    pFVar5 = ::FName::FName(&local_res8,0xe,L"EndRollDegrees",FNAME_Add);
    FVar2 = *pFVar5;
    pFVar6 = ::FString::FString(&local_28,&pFVar9->PropertyTarget);
    local_38.DataPtr = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    iVar1 = (pFVar6->Data).ArrayNum;
    iVar7 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar7 = 0;
    }
    local_38._12_4_ = uStack_3c;
    local_38.Size = iVar7;
    bVar4 = ::FName::Equals(FVar2,&local_38);
    pFVar3 = (pFVar6->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    if (bVar4) break;
    pFVar9 = pFVar9 + 1;
  }
  return pFVar9;
}

// GetFullNameForCastLogError<UActorComponent_const_> @ 149c416c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __cdecl
GetFullNameForCastLogError<UActorComponent_const_>
          (FString *__return_storage_ptr__,UActorComponent *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetFullNameForCastLogError<UPCGDataFromActorSettings_const_> @ 149c416f0

FString * __cdecl
GetFullNameForCastLogError<UPCGDataFromActorSettings_const_>
          (FString *__return_storage_ptr__,UPCGDataFromActorSettings *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetInputSettings<UPCGClipPathsSettings> @ 149c41720

UPCGClipPathsSettings * __cdecl
PCGContextHelpers::GetInputSettings<UPCGClipPathsSettings>
          (UPCGNode *param_1,FPCGDataCollection *param_2)

{
  int iVar1;
  bool bVar2;
  UPCGSettings *pUVar3;
  UPCGClipPathsSettings *pUVar4;
  UClass *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  if ((param_1 == (UPCGNode *)0x0) ||
     (pUVar3 = UPCGNode::GetSettings(param_1), pUVar3 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGClipPathsSettings>_::__l2::<lambda_1>_>
                       (&param_2->TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGClipPathsSettings *)local_res8.Handle == (UPCGClipPathsSettings *)0x0) {
          return (UPCGClipPathsSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGClipPathsSettings *)local_res8.Handle != (UPCGClipPathsSettings *)0x0) {
        pUVar5 = UPCGClipPathsSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar5);
        if (bVar2) {
          return (UPCGClipPathsSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar3 = UPCGNode::GetSettings(param_1);
    pUVar4 = (UPCGClipPathsSettings *)FPCGDataCollection::GetSettings(param_2,pUVar3);
    if (pUVar4 != (UPCGClipPathsSettings *)0x0) {
      pUVar5 = UPCGClipPathsSettings::StaticClass();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        return pUVar4;
      }
    }
  }
  return (UPCGClipPathsSettings *)0x0;
}

// GetInputSettings<UPCGCreatePolygon2DSettings> @ 149c41800

UPCGCreatePolygon2DSettings * __cdecl
PCGContextHelpers::GetInputSettings<UPCGCreatePolygon2DSettings>
          (UPCGNode *param_1,FPCGDataCollection *param_2)

{
  int iVar1;
  bool bVar2;
  UPCGSettings *pUVar3;
  UPCGCreatePolygon2DSettings *pUVar4;
  UClass *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  if ((param_1 == (UPCGNode *)0x0) ||
     (pUVar3 = UPCGNode::GetSettings(param_1), pUVar3 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGCreatePolygon2DSettings>_::__l2::<lambda_1>_>
                       (&param_2->TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGCreatePolygon2DSettings *)local_res8.Handle == (UPCGCreatePolygon2DSettings *)0x0)
        {
          return (UPCGCreatePolygon2DSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGCreatePolygon2DSettings *)local_res8.Handle != (UPCGCreatePolygon2DSettings *)0x0) {
        pUVar5 = UPCGCreatePolygon2DSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar5);
        if (bVar2) {
          return (UPCGCreatePolygon2DSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar3 = UPCGNode::GetSettings(param_1);
    pUVar4 = (UPCGCreatePolygon2DSettings *)FPCGDataCollection::GetSettings(param_2,pUVar3);
    if (pUVar4 != (UPCGCreatePolygon2DSettings *)0x0) {
      pUVar5 = UPCGCreatePolygon2DSettings::StaticClass();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        return pUVar4;
      }
    }
  }
  return (UPCGCreatePolygon2DSettings *)0x0;
}

// GetInputSettings<UPCGGenericUserParameterGetSettings> @ 149c418e0

UPCGGenericUserParameterGetSettings * __cdecl
PCGContextHelpers::GetInputSettings<UPCGGenericUserParameterGetSettings>
          (UPCGNode *param_1,FPCGDataCollection *param_2)

{
  int iVar1;
  bool bVar2;
  UPCGSettings *pUVar3;
  UPCGGenericUserParameterGetSettings *pUVar4;
  UClass *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  if ((param_1 == (UPCGNode *)0x0) ||
     (pUVar3 = UPCGNode::GetSettings(param_1), pUVar3 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGGenericUserParameterGetSettings>_::__l2::<lambda_1>_>
                       (&param_2->TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGGenericUserParameterGetSettings *)local_res8.Handle ==
            (UPCGGenericUserParameterGetSettings *)0x0) {
          return (UPCGGenericUserParameterGetSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGGenericUserParameterGetSettings *)local_res8.Handle !=
          (UPCGGenericUserParameterGetSettings *)0x0) {
        pUVar5 = UPCGGenericUserParameterGetSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar5);
        if (bVar2) {
          return (UPCGGenericUserParameterGetSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar3 = UPCGNode::GetSettings(param_1);
    pUVar4 = (UPCGGenericUserParameterGetSettings *)FPCGDataCollection::GetSettings(param_2,pUVar3);
    if (pUVar4 != (UPCGGenericUserParameterGetSettings *)0x0) {
      pUVar5 = UPCGGenericUserParameterGetSettings::StaticClass();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        return pUVar4;
      }
    }
  }
  return (UPCGGenericUserParameterGetSettings *)0x0;
}

// GetInputSettings<UPCGGetSegmentSettings> @ 149c419c0

UPCGGetSegmentSettings * __cdecl
PCGContextHelpers::GetInputSettings<UPCGGetSegmentSettings>
          (UPCGNode *param_1,FPCGDataCollection *param_2)

{
  int iVar1;
  bool bVar2;
  UPCGSettings *pUVar3;
  UPCGGetSegmentSettings *pUVar4;
  UClass *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  if ((param_1 == (UPCGNode *)0x0) ||
     (pUVar3 = UPCGNode::GetSettings(param_1), pUVar3 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGGetSegmentSettings>_::__l2::<lambda_1>_>
                       (&param_2->TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGGetSegmentSettings *)local_res8.Handle == (UPCGGetSegmentSettings *)0x0) {
          return (UPCGGetSegmentSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGGetSegmentSettings *)local_res8.Handle != (UPCGGetSegmentSettings *)0x0) {
        pUVar5 = UPCGGetSegmentSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar5);
        if (bVar2) {
          return (UPCGGetSegmentSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar3 = UPCGNode::GetSettings(param_1);
    pUVar4 = (UPCGGetSegmentSettings *)FPCGDataCollection::GetSettings(param_2,pUVar3);
    if (pUVar4 != (UPCGGetSegmentSettings *)0x0) {
      pUVar5 = UPCGGetSegmentSettings::StaticClass();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        return pUVar4;
      }
    }
  }
  return (UPCGGetSegmentSettings *)0x0;
}

// GetInputSettings<UPCGReverseSplineSettings> @ 149c41aa0

UPCGReverseSplineSettings * __cdecl
PCGContextHelpers::GetInputSettings<UPCGReverseSplineSettings>
          (UPCGNode *param_1,FPCGDataCollection *param_2)

{
  int iVar1;
  bool bVar2;
  UPCGSettings *pUVar3;
  UPCGReverseSplineSettings *pUVar4;
  UClass *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  if ((param_1 == (UPCGNode *)0x0) ||
     (pUVar3 = UPCGNode::GetSettings(param_1), pUVar3 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGReverseSplineSettings>_::__l2::<lambda_1>_>
                       (&param_2->TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGReverseSplineSettings *)local_res8.Handle == (UPCGReverseSplineSettings *)0x0) {
          return (UPCGReverseSplineSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGReverseSplineSettings *)local_res8.Handle != (UPCGReverseSplineSettings *)0x0) {
        pUVar5 = UPCGReverseSplineSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar5);
        if (bVar2) {
          return (UPCGReverseSplineSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar3 = UPCGNode::GetSettings(param_1);
    pUVar4 = (UPCGReverseSplineSettings *)FPCGDataCollection::GetSettings(param_2,pUVar3);
    if (pUVar4 != (UPCGReverseSplineSettings *)0x0) {
      pUVar5 = UPCGReverseSplineSettings::StaticClass();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        return pUVar4;
      }
    }
  }
  return (UPCGReverseSplineSettings *)0x0;
}

// GetInputSettings<UPCGSpawnActorSettings> @ 149c41ca0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPCGSpawnActorSettings * __cdecl
PCGContextHelpers::GetInputSettings<UPCGSpawnActorSettings>
          (UPCGNode *param_1,FPCGDataCollection *param_2)

{
  int iVar1;
  bool bVar2;
  UPCGSettings *pUVar3;
  UPCGSpawnActorSettings *pUVar4;
  UClass *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  if ((param_1 == (UPCGNode *)0x0) ||
     (pUVar3 = UPCGNode::GetSettings(param_1), pUVar3 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSpawnActorSettings>_::__l2::<lambda_1>_>
                       (&param_2->TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGSpawnActorSettings *)local_res8.Handle == (UPCGSpawnActorSettings *)0x0) {
          return (UPCGSpawnActorSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGSpawnActorSettings *)local_res8.Handle != (UPCGSpawnActorSettings *)0x0) {
        pUVar5 = UPCGSpawnActorSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar5);
        if (bVar2) {
          return (UPCGSpawnActorSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar3 = UPCGNode::GetSettings(param_1);
    pUVar4 = (UPCGSpawnActorSettings *)FPCGDataCollection::GetSettings(param_2,pUVar3);
    if (pUVar4 != (UPCGSpawnActorSettings *)0x0) {
      pUVar5 = UPCGSpawnActorSettings::StaticClass();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        return pUVar4;
      }
    }
  }
  return (UPCGSpawnActorSettings *)0x0;
}

// GetInputSettings<UPCGSpawnSplineMeshSettings> @ 149c41ea0

UPCGSpawnSplineMeshSettings * __cdecl
PCGContextHelpers::GetInputSettings<UPCGSpawnSplineMeshSettings>
          (UPCGNode *param_1,FPCGDataCollection *param_2)

{
  int iVar1;
  bool bVar2;
  UPCGSettings *pUVar3;
  UPCGSpawnSplineMeshSettings *pUVar4;
  UClass *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  if ((param_1 == (UPCGNode *)0x0) ||
     (pUVar3 = UPCGNode::GetSettings(param_1), pUVar3 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSpawnSplineMeshSettings>_::__l2::<lambda_1>_>
                       (&param_2->TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGSpawnSplineMeshSettings *)local_res8.Handle == (UPCGSpawnSplineMeshSettings *)0x0)
        {
          return (UPCGSpawnSplineMeshSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGSpawnSplineMeshSettings *)local_res8.Handle != (UPCGSpawnSplineMeshSettings *)0x0) {
        pUVar5 = UPCGSpawnSplineMeshSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar5);
        if (bVar2) {
          return (UPCGSpawnSplineMeshSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar3 = UPCGNode::GetSettings(param_1);
    pUVar4 = (UPCGSpawnSplineMeshSettings *)FPCGDataCollection::GetSettings(param_2,pUVar3);
    if (pUVar4 != (UPCGSpawnSplineMeshSettings *)0x0) {
      pUVar5 = UPCGSpawnSplineMeshSettings::StaticClass();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        return pUVar4;
      }
    }
  }
  return (UPCGSpawnSplineMeshSettings *)0x0;
}

// GetInputSettings<UPCGSpawnSplineSettings> @ 149c41f80

UPCGSpawnSplineSettings * __cdecl
PCGContextHelpers::GetInputSettings<UPCGSpawnSplineSettings>
          (UPCGNode *param_1,FPCGDataCollection *param_2)

{
  int iVar1;
  bool bVar2;
  UPCGSettings *pUVar3;
  UPCGSpawnSplineSettings *pUVar4;
  UClass *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  if ((param_1 == (UPCGNode *)0x0) ||
     (pUVar3 = UPCGNode::GetSettings(param_1), pUVar3 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSpawnSplineSettings>_::__l2::<lambda_1>_>
                       (&param_2->TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGSpawnSplineSettings *)local_res8.Handle == (UPCGSpawnSplineSettings *)0x0) {
          return (UPCGSpawnSplineSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGSpawnSplineSettings *)local_res8.Handle != (UPCGSpawnSplineSettings *)0x0) {
        pUVar5 = UPCGSpawnSplineSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar5);
        if (bVar2) {
          return (UPCGSpawnSplineSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar3 = UPCGNode::GetSettings(param_1);
    pUVar4 = (UPCGSpawnSplineSettings *)FPCGDataCollection::GetSettings(param_2,pUVar3);
    if (pUVar4 != (UPCGSpawnSplineSettings *)0x0) {
      pUVar5 = UPCGSpawnSplineSettings::StaticClass();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        return pUVar4;
      }
    }
  }
  return (UPCGSpawnSplineSettings *)0x0;
}

// GetInputSettings<UPCGSplineIntersectionSettings> @ 149c42060

UPCGSplineIntersectionSettings * __cdecl
PCGContextHelpers::GetInputSettings<UPCGSplineIntersectionSettings>
          (UPCGNode *param_1,FPCGDataCollection *param_2)

{
  int iVar1;
  bool bVar2;
  UPCGSettings *pUVar3;
  UPCGSplineIntersectionSettings *pUVar4;
  UClass *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  if ((param_1 == (UPCGNode *)0x0) ||
     (pUVar3 = UPCGNode::GetSettings(param_1), pUVar3 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSplineIntersectionSettings>_::__l2::<lambda_1>_>
                       (&param_2->TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGSplineIntersectionSettings *)local_res8.Handle ==
            (UPCGSplineIntersectionSettings *)0x0) {
          return (UPCGSplineIntersectionSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGSplineIntersectionSettings *)local_res8.Handle !=
          (UPCGSplineIntersectionSettings *)0x0) {
        pUVar5 = UPCGSplineIntersectionSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar5);
        if (bVar2) {
          return (UPCGSplineIntersectionSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar3 = UPCGNode::GetSettings(param_1);
    pUVar4 = (UPCGSplineIntersectionSettings *)FPCGDataCollection::GetSettings(param_2,pUVar3);
    if (pUVar4 != (UPCGSplineIntersectionSettings *)0x0) {
      pUVar5 = UPCGSplineIntersectionSettings::StaticClass();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        return pUVar4;
      }
    }
  }
  return (UPCGSplineIntersectionSettings *)0x0;
}

// GetInputSettings<UPCGSplineSamplerSettings> @ 149c42140

UPCGSplineSamplerSettings * __cdecl
PCGContextHelpers::GetInputSettings<UPCGSplineSamplerSettings>
          (UPCGNode *param_1,FPCGDataCollection *param_2)

{
  int iVar1;
  bool bVar2;
  UPCGSettings *pUVar3;
  UPCGSplineSamplerSettings *pUVar4;
  UClass *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  if ((param_1 == (UPCGNode *)0x0) ||
     (pUVar3 = UPCGNode::GetSettings(param_1), pUVar3 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSplineSamplerSettings>_::__l2::<lambda_1>_>
                       (&param_2->TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGSplineSamplerSettings *)local_res8.Handle == (UPCGSplineSamplerSettings *)0x0) {
          return (UPCGSplineSamplerSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGSplineSamplerSettings *)local_res8.Handle != (UPCGSplineSamplerSettings *)0x0) {
        pUVar5 = UPCGSplineSamplerSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar5);
        if (bVar2) {
          return (UPCGSplineSamplerSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar3 = UPCGNode::GetSettings(param_1);
    pUVar4 = (UPCGSplineSamplerSettings *)FPCGDataCollection::GetSettings(param_2,pUVar3);
    if (pUVar4 != (UPCGSplineSamplerSettings *)0x0) {
      pUVar5 = UPCGSplineSamplerSettings::StaticClass();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        return pUVar4;
      }
    }
  }
  return (UPCGSplineSamplerSettings *)0x0;
}

// GetInputSettings<UPCGSplitPointsSettings> @ 149c42220

UPCGSplitPointsSettings * __cdecl
PCGContextHelpers::GetInputSettings<UPCGSplitPointsSettings>
          (UPCGNode *param_1,FPCGDataCollection *param_2)

{
  int iVar1;
  bool bVar2;
  UPCGSettings *pUVar3;
  UPCGSplitPointsSettings *pUVar4;
  UClass *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  if ((param_1 == (UPCGNode *)0x0) ||
     (pUVar3 = UPCGNode::GetSettings(param_1), pUVar3 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSplitPointsSettings>_::__l2::<lambda_1>_>
                       (&param_2->TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGSplitPointsSettings *)local_res8.Handle == (UPCGSplitPointsSettings *)0x0) {
          return (UPCGSplitPointsSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGSplitPointsSettings *)local_res8.Handle != (UPCGSplitPointsSettings *)0x0) {
        pUVar5 = UPCGSplitPointsSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar5);
        if (bVar2) {
          return (UPCGSplitPointsSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar3 = UPCGNode::GetSettings(param_1);
    pUVar4 = (UPCGSplitPointsSettings *)FPCGDataCollection::GetSettings(param_2,pUVar3);
    if (pUVar4 != (UPCGSplitPointsSettings *)0x0) {
      pUVar5 = UPCGSplitPointsSettings::StaticClass();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        return pUVar4;
      }
    }
  }
  return (UPCGSplitPointsSettings *)0x0;
}

// GetInputSettings<UPCGSplitSplinesSettings> @ 149c42300

UPCGSplitSplinesSettings * __cdecl
PCGContextHelpers::GetInputSettings<UPCGSplitSplinesSettings>
          (UPCGNode *param_1,FPCGDataCollection *param_2)

{
  int iVar1;
  bool bVar2;
  UPCGSettings *pUVar3;
  UPCGSplitSplinesSettings *pUVar4;
  UClass *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  if ((param_1 == (UPCGNode *)0x0) ||
     (pUVar3 = UPCGNode::GetSettings(param_1), pUVar3 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSplitSplinesSettings>_::__l2::<lambda_1>_>
                       (&param_2->TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGSplitSplinesSettings *)local_res8.Handle == (UPCGSplitSplinesSettings *)0x0) {
          return (UPCGSplitSplinesSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGSplitSplinesSettings *)local_res8.Handle != (UPCGSplitSplinesSettings *)0x0) {
        pUVar5 = UPCGSplitSplinesSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar5);
        if (bVar2) {
          return (UPCGSplitSplinesSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar3 = UPCGNode::GetSettings(param_1);
    pUVar4 = (UPCGSplitSplinesSettings *)FPCGDataCollection::GetSettings(param_2,pUVar3);
    if (pUVar4 != (UPCGSplitSplinesSettings *)0x0) {
      pUVar5 = UPCGSplitSplinesSettings::StaticClass();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        return pUVar4;
      }
    }
  }
  return (UPCGSplitSplinesSettings *)0x0;
}

// GetInputSettings<UPCGStaticMeshSpawnerSettings> @ 149c42500

UPCGStaticMeshSpawnerSettings * __cdecl
PCGContextHelpers::GetInputSettings<UPCGStaticMeshSpawnerSettings>
          (UPCGNode *param_1,FPCGDataCollection *param_2)

{
  int iVar1;
  bool bVar2;
  UPCGSettings *pUVar3;
  UPCGStaticMeshSpawnerSettings *pUVar4;
  UClass *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  if ((param_1 == (UPCGNode *)0x0) ||
     (pUVar3 = UPCGNode::GetSettings(param_1), pUVar3 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGStaticMeshSpawnerSettings>_::__l2::<lambda_1>_>
                       (&param_2->TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGStaticMeshSpawnerSettings *)local_res8.Handle ==
            (UPCGStaticMeshSpawnerSettings *)0x0) {
          return (UPCGStaticMeshSpawnerSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGStaticMeshSpawnerSettings *)local_res8.Handle != (UPCGStaticMeshSpawnerSettings *)0x0
         ) {
        pUVar5 = UPCGStaticMeshSpawnerSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar5);
        if (bVar2) {
          return (UPCGStaticMeshSpawnerSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar3 = UPCGNode::GetSettings(param_1);
    pUVar4 = (UPCGStaticMeshSpawnerSettings *)FPCGDataCollection::GetSettings(param_2,pUVar3);
    if (pUVar4 != (UPCGStaticMeshSpawnerSettings *)0x0) {
      pUVar5 = UPCGStaticMeshSpawnerSettings::StaticClass();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        return pUVar4;
      }
    }
  }
  return (UPCGStaticMeshSpawnerSettings *)0x0;
}

// GetInputSettings<UPCGSurfaceSamplerSettings> @ 149c42700

UPCGSurfaceSamplerSettings * __cdecl
PCGContextHelpers::GetInputSettings<UPCGSurfaceSamplerSettings>
          (UPCGNode *param_1,FPCGDataCollection *param_2)

{
  int iVar1;
  bool bVar2;
  UPCGSettings *pUVar3;
  UPCGSurfaceSamplerSettings *pUVar4;
  UClass *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  if ((param_1 == (UPCGNode *)0x0) ||
     (pUVar3 = UPCGNode::GetSettings(param_1), pUVar3 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSurfaceSamplerSettings>_::__l2::<lambda_1>_>
                       (&param_2->TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGSurfaceSamplerSettings *)local_res8.Handle == (UPCGSurfaceSamplerSettings *)0x0) {
          return (UPCGSurfaceSamplerSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGSurfaceSamplerSettings *)local_res8.Handle != (UPCGSurfaceSamplerSettings *)0x0) {
        pUVar5 = UPCGSurfaceSamplerSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar5);
        if (bVar2) {
          return (UPCGSurfaceSamplerSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar3 = UPCGNode::GetSettings(param_1);
    pUVar4 = (UPCGSurfaceSamplerSettings *)FPCGDataCollection::GetSettings(param_2,pUVar3);
    if (pUVar4 != (UPCGSurfaceSamplerSettings *)0x0) {
      pUVar5 = UPCGSurfaceSamplerSettings::StaticClass();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        return pUVar4;
      }
    }
  }
  return (UPCGSurfaceSamplerSettings *)0x0;
}

// GetInputSettings<UPCGTextureSamplerSettings> @ 149c42900

UPCGTextureSamplerSettings * __cdecl
PCGContextHelpers::GetInputSettings<UPCGTextureSamplerSettings>
          (UPCGNode *param_1,FPCGDataCollection *param_2)

{
  int iVar1;
  bool bVar2;
  UPCGSettings *pUVar3;
  UPCGTextureSamplerSettings *pUVar4;
  UClass *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  if ((param_1 == (UPCGNode *)0x0) ||
     (pUVar3 = UPCGNode::GetSettings(param_1), pUVar3 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGTextureSamplerSettings>_::__l2::<lambda_1>_>
                       (&param_2->TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGTextureSamplerSettings *)local_res8.Handle == (UPCGTextureSamplerSettings *)0x0) {
          return (UPCGTextureSamplerSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGTextureSamplerSettings *)local_res8.Handle != (UPCGTextureSamplerSettings *)0x0) {
        pUVar5 = UPCGTextureSamplerSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar5);
        if (bVar2) {
          return (UPCGTextureSamplerSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar3 = UPCGNode::GetSettings(param_1);
    pUVar4 = (UPCGTextureSamplerSettings *)FPCGDataCollection::GetSettings(param_2,pUVar3);
    if (pUVar4 != (UPCGTextureSamplerSettings *)0x0) {
      pUVar5 = UPCGTextureSamplerSettings::StaticClass();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        return pUVar4;
      }
    }
  }
  return (UPCGTextureSamplerSettings *)0x0;
}

// GetInputSettings<UPCGTransformPointsSettings> @ 149c429e0

UPCGTransformPointsSettings * __cdecl
PCGContextHelpers::GetInputSettings<UPCGTransformPointsSettings>
          (UPCGNode *param_1,FPCGDataCollection *param_2)

{
  int iVar1;
  bool bVar2;
  UPCGSettings *pUVar3;
  UPCGTransformPointsSettings *pUVar4;
  UClass *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  if ((param_1 == (UPCGNode *)0x0) ||
     (pUVar3 = UPCGNode::GetSettings(param_1), pUVar3 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGTransformPointsSettings>_::__l2::<lambda_1>_>
                       (&param_2->TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGTransformPointsSettings *)local_res8.Handle == (UPCGTransformPointsSettings *)0x0)
        {
          return (UPCGTransformPointsSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGTransformPointsSettings *)local_res8.Handle != (UPCGTransformPointsSettings *)0x0) {
        pUVar5 = UPCGTransformPointsSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar5);
        if (bVar2) {
          return (UPCGTransformPointsSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar3 = UPCGNode::GetSettings(param_1);
    pUVar4 = (UPCGTransformPointsSettings *)FPCGDataCollection::GetSettings(param_2,pUVar3);
    if (pUVar4 != (UPCGTransformPointsSettings *)0x0) {
      pUVar5 = UPCGTransformPointsSettings::StaticClass();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        return pUVar4;
      }
    }
  }
  return (UPCGTransformPointsSettings *)0x0;
}

// GetInputSettings<UPCGUnionSettings> @ 149c42ac0

UPCGUnionSettings * __cdecl
PCGContextHelpers::GetInputSettings<UPCGUnionSettings>
          (UPCGNode *param_1,FPCGDataCollection *param_2)

{
  int iVar1;
  bool bVar2;
  UPCGSettings *pUVar3;
  UPCGUnionSettings *pUVar4;
  UClass *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  if ((param_1 == (UPCGNode *)0x0) ||
     (pUVar3 = UPCGNode::GetSettings(param_1), pUVar3 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGUnionSettings>_::__l2::<lambda_1>_>
                       (&param_2->TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGUnionSettings *)local_res8.Handle == (UPCGUnionSettings *)0x0) {
          return (UPCGUnionSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGUnionSettings *)local_res8.Handle != (UPCGUnionSettings *)0x0) {
        pUVar5 = UPCGUnionSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar5);
        if (bVar2) {
          return (UPCGUnionSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar3 = UPCGNode::GetSettings(param_1);
    pUVar4 = (UPCGUnionSettings *)FPCGDataCollection::GetSettings(param_2,pUVar3);
    if (pUVar4 != (UPCGUnionSettings *)0x0) {
      pUVar5 = UPCGUnionSettings::StaticClass();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        return pUVar4;
      }
    }
  }
  return (UPCGUnionSettings *)0x0;
}

// GetInputSettings<UPCGUserParameterGetSettings> @ 149c42ba0

UPCGUserParameterGetSettings * __cdecl
PCGContextHelpers::GetInputSettings<UPCGUserParameterGetSettings>
          (UPCGNode *param_1,FPCGDataCollection *param_2)

{
  int iVar1;
  bool bVar2;
  UPCGSettings *pUVar3;
  UPCGUserParameterGetSettings *pUVar4;
  UClass *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  if ((param_1 == (UPCGNode *)0x0) ||
     (pUVar3 = UPCGNode::GetSettings(param_1), pUVar3 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGUserParameterGetSettings>_::__l2::<lambda_1>_>
                       (&param_2->TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGUserParameterGetSettings *)local_res8.Handle == (UPCGUserParameterGetSettings *)0x0
           ) {
          return (UPCGUserParameterGetSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGUserParameterGetSettings *)local_res8.Handle != (UPCGUserParameterGetSettings *)0x0)
      {
        pUVar5 = UPCGUserParameterGetSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar5);
        if (bVar2) {
          return (UPCGUserParameterGetSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar3 = UPCGNode::GetSettings(param_1);
    pUVar4 = (UPCGUserParameterGetSettings *)FPCGDataCollection::GetSettings(param_2,pUVar3);
    if (pUVar4 != (UPCGUserParameterGetSettings *)0x0) {
      pUVar5 = UPCGUserParameterGetSettings::StaticClass();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        return pUVar4;
      }
    }
  }
  return (UPCGUserParameterGetSettings *)0x0;
}

// GetInputSettings<UPCGVisualizeAttributeSettings> @ 149c42c80

UPCGVisualizeAttributeSettings * __cdecl
PCGContextHelpers::GetInputSettings<UPCGVisualizeAttributeSettings>
          (UPCGNode *param_1,FPCGDataCollection *param_2)

{
  int iVar1;
  bool bVar2;
  UPCGSettings *pUVar3;
  UPCGVisualizeAttributeSettings *pUVar4;
  UClass *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  if ((param_1 == (UPCGNode *)0x0) ||
     (pUVar3 = UPCGNode::GetSettings(param_1), pUVar3 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGVisualizeAttributeSettings>_::__l2::<lambda_1>_>
                       (&param_2->TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGVisualizeAttributeSettings *)local_res8.Handle ==
            (UPCGVisualizeAttributeSettings *)0x0) {
          return (UPCGVisualizeAttributeSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGVisualizeAttributeSettings *)local_res8.Handle !=
          (UPCGVisualizeAttributeSettings *)0x0) {
        pUVar5 = UPCGVisualizeAttributeSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar5);
        if (bVar2) {
          return (UPCGVisualizeAttributeSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar3 = UPCGNode::GetSettings(param_1);
    pUVar4 = (UPCGVisualizeAttributeSettings *)FPCGDataCollection::GetSettings(param_2,pUVar3);
    if (pUVar4 != (UPCGVisualizeAttributeSettings *)0x0) {
      pUVar5 = UPCGVisualizeAttributeSettings::StaticClass();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        return pUVar4;
      }
    }
  }
  return (UPCGVisualizeAttributeSettings *)0x0;
}

// GetInputSettings<UPCGVolumeSamplerSettings> @ 149c42e80

UPCGVolumeSamplerSettings * __cdecl
PCGContextHelpers::GetInputSettings<UPCGVolumeSamplerSettings>
          (UPCGNode *param_1,FPCGDataCollection *param_2)

{
  int iVar1;
  bool bVar2;
  UPCGSettings *pUVar3;
  UPCGVolumeSamplerSettings *pUVar4;
  UClass *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  if ((param_1 == (UPCGNode *)0x0) ||
     (pUVar3 = UPCGNode::GetSettings(param_1), pUVar3 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGVolumeSamplerSettings>_::__l2::<lambda_1>_>
                       (&param_2->TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGVolumeSamplerSettings *)local_res8.Handle == (UPCGVolumeSamplerSettings *)0x0) {
          return (UPCGVolumeSamplerSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGVolumeSamplerSettings *)local_res8.Handle != (UPCGVolumeSamplerSettings *)0x0) {
        pUVar5 = UPCGVolumeSamplerSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar5);
        if (bVar2) {
          return (UPCGVolumeSamplerSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar3 = UPCGNode::GetSettings(param_1);
    pUVar4 = (UPCGVolumeSamplerSettings *)FPCGDataCollection::GetSettings(param_2,pUVar3);
    if (pUVar4 != (UPCGVolumeSamplerSettings *)0x0) {
      pUVar5 = UPCGVolumeSamplerSettings::StaticClass();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        return pUVar4;
      }
    }
  }
  return (UPCGVolumeSamplerSettings *)0x0;
}

// GetInputSettings<UPCGWorldQuerySettings> @ 149c42f60

UPCGWorldQuerySettings * __cdecl
PCGContextHelpers::GetInputSettings<UPCGWorldQuerySettings>
          (UPCGNode *param_1,FPCGDataCollection *param_2)

{
  int iVar1;
  bool bVar2;
  UPCGSettings *pUVar3;
  UPCGWorldQuerySettings *pUVar4;
  UClass *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  if ((param_1 == (UPCGNode *)0x0) ||
     (pUVar3 = UPCGNode::GetSettings(param_1), pUVar3 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGWorldQuerySettings>_::__l2::<lambda_1>_>
                       (&param_2->TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGWorldQuerySettings *)local_res8.Handle == (UPCGWorldQuerySettings *)0x0) {
          return (UPCGWorldQuerySettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGWorldQuerySettings *)local_res8.Handle != (UPCGWorldQuerySettings *)0x0) {
        pUVar5 = UPCGWorldQuerySettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar5);
        if (bVar2) {
          return (UPCGWorldQuerySettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar3 = UPCGNode::GetSettings(param_1);
    pUVar4 = (UPCGWorldQuerySettings *)FPCGDataCollection::GetSettings(param_2,pUVar3);
    if (pUVar4 != (UPCGWorldQuerySettings *)0x0) {
      pUVar5 = UPCGWorldQuerySettings::StaticClass();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        return pUVar4;
      }
    }
  }
  return (UPCGWorldQuerySettings *)0x0;
}

// GetInputSettings<UPCGWorldRayHitSettings> @ 149c43160

UPCGWorldRayHitSettings * __cdecl
PCGContextHelpers::GetInputSettings<UPCGWorldRayHitSettings>
          (UPCGNode *param_1,FPCGDataCollection *param_2)

{
  int iVar1;
  bool bVar2;
  UPCGSettings *pUVar3;
  UPCGWorldRayHitSettings *pUVar4;
  UClass *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  if ((param_1 == (UPCGNode *)0x0) ||
     (pUVar3 = UPCGNode::GetSettings(param_1), pUVar3 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGWorldRayHitSettings>_::__l2::<lambda_1>_>
                       (&param_2->TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGWorldRayHitSettings *)local_res8.Handle == (UPCGWorldRayHitSettings *)0x0) {
          return (UPCGWorldRayHitSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGWorldRayHitSettings *)local_res8.Handle != (UPCGWorldRayHitSettings *)0x0) {
        pUVar5 = UPCGWorldRayHitSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar5);
        if (bVar2) {
          return (UPCGWorldRayHitSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar3 = UPCGNode::GetSettings(param_1);
    pUVar4 = (UPCGWorldRayHitSettings *)FPCGDataCollection::GetSettings(param_2,pUVar3);
    if (pUVar4 != (UPCGWorldRayHitSettings *)0x0) {
      pUVar5 = UPCGWorldRayHitSettings::StaticClass();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        return pUVar4;
      }
    }
  }
  return (UPCGWorldRayHitSettings *)0x0;
}

// GetInputSettings<UPCGWorldRaycastElementSettings> @ 149c43360

UPCGWorldRaycastElementSettings * __cdecl
PCGContextHelpers::GetInputSettings<UPCGWorldRaycastElementSettings>
          (UPCGNode *param_1,FPCGDataCollection *param_2)

{
  int iVar1;
  bool bVar2;
  UPCGSettings *pUVar3;
  UPCGWorldRaycastElementSettings *pUVar4;
  UClass *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  if ((param_1 == (UPCGNode *)0x0) ||
     (pUVar3 = UPCGNode::GetSettings(param_1), pUVar3 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGWorldRaycastElementSettings>_::__l2::<lambda_1>_>
                       (&param_2->TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGWorldRaycastElementSettings *)local_res8.Handle ==
            (UPCGWorldRaycastElementSettings *)0x0) {
          return (UPCGWorldRaycastElementSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGWorldRaycastElementSettings *)local_res8.Handle !=
          (UPCGWorldRaycastElementSettings *)0x0) {
        pUVar5 = UPCGWorldRaycastElementSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar5);
        if (bVar2) {
          return (UPCGWorldRaycastElementSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar3 = UPCGNode::GetSettings(param_1);
    pUVar4 = (UPCGWorldRaycastElementSettings *)FPCGDataCollection::GetSettings(param_2,pUVar3);
    if (pUVar4 != (UPCGWorldRaycastElementSettings *)0x0) {
      pUVar5 = UPCGWorldRaycastElementSettings::StaticClass();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        return pUVar4;
      }
    }
  }
  return (UPCGWorldRaycastElementSettings *)0x0;
}

// GetTypeName<UPCGCreateAttributeSetSettings> @ 149c43fa0

FString * __cdecl GetTypeName<UPCGCreateAttributeSetSettings>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UPCGCreateAttributeSetSettings_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UPCGGetLandscapeSettings> @ 149c43fe0

FString * __cdecl GetTypeName<UPCGGetLandscapeSettings>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UPCGGetLandscapeSettings::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UPCGUserParametersData> @ 149c44020

FString * __cdecl GetTypeName<UPCGUserParametersData>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UPCGUserParametersData_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSortInternal<double,int,FIdentityFunctor,TDereferenceWrapper<double,`FPCGSplitSplineElement::ExecuteInternal'::__l17::<lambda_3>_>_> @ 149c44060

void __cdecl
AlgoImpl::
HeapSortInternal<double,int,FIdentityFunctor,TDereferenceWrapper<double,_FPCGSplitSplineElement::ExecuteInternal_::__l17::<lambda_3>_>_>
          (double *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<double,_public:_virtual_bool___cdecl_FPCGSplitSplineElement::ExecuteInternal(FPCGContext_*)const_::_17_::<lambda_3>_>
          param_4)

{
  double dVar1;
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
  iVar7 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_149c44144:
      if (iVar7 == 0) {
        iVar5 = param_2 + -1;
        lVar9 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            dVar1 = *param_1;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = dVar1;
            iVar8 = 0;
            if (1 < iVar5) {
              do {
                iVar4 = iVar8 * 2;
                iVar7 = iVar4 + 1;
                if (iVar4 + 2 < iVar5) {
                  if (param_1[(longlong)iVar4 + 2] <= param_1[iVar7] &&
                      param_1[iVar7] != param_1[(longlong)iVar4 + 2]) {
                    iVar7 = iVar4;
                  }
                  iVar7 = iVar7 + 1;
                }
                dVar1 = param_1[iVar8];
                if (param_1[iVar7] <= dVar1) break;
                param_1[iVar8] = param_1[iVar7];
                param_1[iVar7] = dVar1;
                iVar8 = iVar7;
              } while (iVar7 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar9 = lVar9 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar4 = iVar7 + -1;
      iVar5 = iVar8 + -2;
      iVar8 = iVar5;
      iVar7 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar6 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      if (param_1[(longlong)iVar5 + 2] <= param_1[iVar6] &&
          param_1[iVar6] != param_1[(longlong)iVar5 + 2]) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    dVar1 = param_1[iVar4];
    if (param_1[iVar6] <= dVar1) goto LAB_149c44144;
    param_1[iVar4] = param_1[iVar6];
    param_1[iVar6] = dVar1;
    iVar5 = iVar6 * 2 + 1;
    iVar4 = iVar6;
  } while( true );
}

// HeapSortInternal<UE::Math::TVector2<double>,int,FIdentityFunctor,TDereferenceWrapper<UE::Math::TVector2<double>,``PCGSplineSamplerHelpers::SampleInteriorData'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>_>_> @ 149c44200

void __cdecl
AlgoImpl::
HeapSortInternal<UE::Math::TVector2<double>,int,FIdentityFunctor,TDereferenceWrapper<UE::Math::TVector2<double>,__PCGSplineSamplerHelpers::SampleInteriorData_::__l2::<lambda_1>::operator()_::__l5::<lambda_1>_>_>
          (TVector2<double> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UE::Math::TVector2<double>,_public:___cdecl__void___cdecl_PCGSplineSamplerHelpers::SampleInteriorData(FPCGContext_*,UPCGPolyLineData_const_*,UPCGSpatialData_const_*,UPCGSpatialData_const_*,FPCGProjectionParams_const_&,FPCGSplineSamplerParams_const_&,UPCGBasePointData_*)_::_2_::<lambda_1>::operator()(int)const_::_5_::<lambda_1>_>
          param_4)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  TVector2<double> *pTVar12;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar7 = iVar6 * 2 + 1;
  iVar10 = iVar7;
  iVar11 = iVar6;
  do {
    while (param_2 <= iVar7) {
LAB_149c442f5:
      if (iVar11 == 0) {
        iVar7 = param_2 + -1;
        lVar9 = (longlong)iVar7;
        if (0 < iVar7) {
          pTVar12 = param_1 + lVar9;
          do {
            dVar1 = (pTVar12->field0_0x0)._s_0.Y;
            iVar10 = 0;
            dVar3 = (param_1->field0_0x0)._s_0.X;
            dVar4 = (param_1->field0_0x0)._s_0.Y;
            (param_1->field0_0x0)._s_0.X = (pTVar12->field0_0x0)._s_0.X;
            (param_1->field0_0x0)._s_0.Y = dVar1;
            (pTVar12->field0_0x0)._s_0.X = dVar3;
            (pTVar12->field0_0x0)._s_0.Y = dVar4;
            if (1 < iVar7) {
              do {
                iVar11 = iVar10 * 2;
                iVar6 = iVar11 + 1;
                if (iVar11 + 2 < iVar7) {
                  dVar1 = param_1[iVar6].field0_0x0._s_0.X;
                  if (param_1[(longlong)iVar11 + 2].field0_0x0._s_0.X <= dVar1 &&
                      dVar1 != param_1[(longlong)iVar11 + 2].field0_0x0._s_0.X) {
                    iVar6 = iVar11;
                  }
                  iVar6 = iVar6 + 1;
                }
                dVar1 = param_1[iVar6].field0_0x0._s_0.X;
                if (dVar1 < param_1[iVar10].field0_0x0._s_0.X ||
                    dVar1 == param_1[iVar10].field0_0x0._s_0.X) break;
                dVar1 = param_1[iVar10].field0_0x0._s_0.X;
                dVar3 = param_1[iVar10].field0_0x0._s_0.Y;
                dVar4 = param_1[iVar6].field0_0x0._s_0.Y;
                param_1[iVar10].field0_0x0._s_0.X = param_1[iVar6].field0_0x0._s_0.X;
                param_1[iVar10].field0_0x0._s_0.Y = dVar4;
                param_1[iVar6].field0_0x0._s_0.X = dVar1;
                param_1[iVar6].field0_0x0._s_0.Y = dVar3;
                iVar10 = iVar6;
              } while (iVar6 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar9 = lVar9 + -1;
            pTVar12 = pTVar12 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar6 = iVar11 + -1;
      iVar7 = iVar10 + -2;
      iVar10 = iVar7;
      iVar11 = iVar6;
    }
    iVar7 = iVar6 * 2;
    iVar8 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      dVar1 = param_1[iVar8].field0_0x0._s_0.X;
      if (param_1[(longlong)iVar7 + 2].field0_0x0._s_0.X <= dVar1 &&
          dVar1 != param_1[(longlong)iVar7 + 2].field0_0x0._s_0.X) {
        iVar8 = iVar7;
      }
      iVar8 = iVar8 + 1;
    }
    dVar1 = param_1[iVar8].field0_0x0._s_0.X;
    if (dVar1 < param_1[iVar6].field0_0x0._s_0.X || dVar1 == param_1[iVar6].field0_0x0._s_0.X)
    goto LAB_149c442f5;
    dVar1 = param_1[iVar6].field0_0x0._s_0.X;
    dVar3 = param_1[iVar6].field0_0x0._s_0.Y;
    dVar4 = param_1[iVar8].field0_0x0._s_0.Y;
    param_1[iVar6].field0_0x0._s_0.X = param_1[iVar8].field0_0x0._s_0.X;
    param_1[iVar6].field0_0x0._s_0.Y = dVar4;
    iVar7 = iVar8 * 2 + 1;
    param_1[iVar8].field0_0x0._s_0.X = dVar1;
    param_1[iVar8].field0_0x0._s_0.Y = dVar3;
    iVar6 = iVar8;
  } while( true );
}

// HeapSortInternal<PCGSplineIntersection::IntersectionPoint,int,FIdentityFunctor,TDereferenceWrapper<PCGSplineIntersection::IntersectionPoint,`FPCGSplineIntersectionElement::ExecuteInternal'::__l75::<lambda_3>_>_> @ 149c443d0

void __cdecl
AlgoImpl::
HeapSortInternal<PCGSplineIntersection::IntersectionPoint,int,FIdentityFunctor,TDereferenceWrapper<PCGSplineIntersection::IntersectionPoint,_FPCGSplineIntersectionElement::ExecuteInternal_::__l75::<lambda_3>_>_>
          (IntersectionPoint *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<PCGSplineIntersection::IntersectionPoint,_public:_virtual_bool___cdecl_FPCGSplineIntersectionElement::ExecuteInternal(FPCGContext_*)const_::_75_::<lambda_3>_>
          param_4)

{
  code *pcVar1;
  InputData *pIVar2;
  UPCGSplineData *pUVar3;
  InputData *pIVar4;
  UPCGSplineData *pUVar5;
  InputData *pIVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  bool bVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  longlong lVar26;
  IntersectionPoint *pIVar27;
  int iVar28;
  IntersectionPoint *pIVar29;
  IntersectionPoint *pIVar30;
  
  if (param_2 < 0) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar21) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar21) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar22 = (param_2 + -2) / 2;
  iVar23 = iVar22 * 2 + 1;
  iVar28 = iVar23;
  iVar25 = iVar22;
  do {
    while (param_2 <= iVar23) {
LAB_149c4457c:
      if (iVar25 == 0) {
        iVar23 = param_2 + -1;
        lVar26 = (longlong)iVar23;
        if (0 < iVar23) {
          pIVar27 = param_1 + lVar26;
          do {
            pIVar2 = pIVar27->InputA;
            iVar28 = 0;
            pUVar3 = param_1->A;
            pIVar4 = param_1->InputA;
            pUVar5 = param_1->B;
            pIVar6 = param_1->InputB;
            dVar7 = (param_1->AveragePosition).field0_0x0._s_0.X;
            dVar8 = (param_1->AveragePosition).field0_0x0._s_0.Y;
            dVar9 = (param_1->AveragePosition).field0_0x0._s_0.Z;
            dVar10 = (param_1->PositionA).field0_0x0._s_0.X;
            dVar11 = (param_1->PositionA).field0_0x0._s_0.Y;
            dVar12 = (param_1->PositionA).field0_0x0._s_0.Z;
            dVar13 = (param_1->PositionB).field0_0x0._s_0.X;
            dVar14 = (param_1->PositionB).field0_0x0._s_0.Y;
            dVar15 = (param_1->PositionB).field0_0x0._s_0.Z;
            fVar19 = param_1->InputKeyA;
            fVar20 = param_1->InputKeyB;
            param_1->A = pIVar27->A;
            param_1->InputA = pIVar2;
            pIVar2 = pIVar27->InputB;
            param_1->B = pIVar27->B;
            param_1->InputB = pIVar2;
            dVar16 = (pIVar27->AveragePosition).field0_0x0._s_0.Y;
            (param_1->AveragePosition).field0_0x0._s_0.X =
                 (pIVar27->AveragePosition).field0_0x0._s_0.X;
            (param_1->AveragePosition).field0_0x0._s_0.Y = dVar16;
            dVar16 = (pIVar27->PositionA).field0_0x0._s_0.X;
            (param_1->AveragePosition).field0_0x0._s_0.Z =
                 (pIVar27->AveragePosition).field0_0x0._s_0.Z;
            (param_1->PositionA).field0_0x0._s_0.X = dVar16;
            dVar16 = (pIVar27->PositionA).field0_0x0._s_0.Z;
            (param_1->PositionA).field0_0x0._s_0.Y = (pIVar27->PositionA).field0_0x0._s_0.Y;
            (param_1->PositionA).field0_0x0._s_0.Z = dVar16;
            dVar16 = (pIVar27->PositionB).field0_0x0._s_0.Y;
            (param_1->PositionB).field0_0x0._s_0.X = (pIVar27->PositionB).field0_0x0._s_0.X;
            (param_1->PositionB).field0_0x0._s_0.Y = dVar16;
            fVar17 = pIVar27->InputKeyA;
            fVar18 = pIVar27->InputKeyB;
            (param_1->PositionB).field0_0x0._s_0.Z = (pIVar27->PositionB).field0_0x0._s_0.Z;
            param_1->InputKeyA = fVar17;
            param_1->InputKeyB = fVar18;
            pIVar27->A = pUVar3;
            pIVar27->InputA = pIVar4;
            pIVar27->B = pUVar5;
            pIVar27->InputB = pIVar6;
            (pIVar27->AveragePosition).field0_0x0._s_0.X = dVar7;
            (pIVar27->AveragePosition).field0_0x0._s_0.Y = dVar8;
            (pIVar27->AveragePosition).field0_0x0._s_0.Z = dVar9;
            (pIVar27->PositionA).field0_0x0._s_0.X = dVar10;
            (pIVar27->PositionA).field0_0x0._s_0.Y = dVar11;
            (pIVar27->PositionA).field0_0x0._s_0.Z = dVar12;
            (pIVar27->PositionB).field0_0x0._s_0.X = dVar13;
            (pIVar27->PositionB).field0_0x0._s_0.Y = dVar14;
            (pIVar27->PositionB).field0_0x0._s_0.Z = dVar15;
            pIVar27->InputKeyA = fVar19;
            pIVar27->InputKeyB = fVar20;
            if (1 < iVar23) {
              do {
                iVar25 = iVar28 * 2;
                iVar22 = iVar25 + 1;
                if (iVar25 + 2 < iVar23) {
                  bVar21 = `FPCGSplineIntersectionElement::ExecuteInternal'::__l75::<lambda_3>::
                           operator()<PCGSplineIntersection::IntersectionPoint,PCGSplineIntersection::IntersectionPoint>
                                     (param_4.Predicate,param_1 + (iVar25 + 2),param_1 + iVar22);
                  if (bVar21) {
                    iVar22 = iVar25;
                  }
                  iVar22 = iVar22 + 1;
                }
                pIVar29 = param_1 + iVar22;
                pIVar30 = param_1 + iVar28;
                bVar21 = `FPCGSplineIntersectionElement::ExecuteInternal'::__l75::<lambda_3>::
                         operator()<PCGSplineIntersection::IntersectionPoint,PCGSplineIntersection::IntersectionPoint>
                                   (param_4.Predicate,pIVar30,pIVar29);
                if (!bVar21) break;
                pIVar2 = pIVar29->InputA;
                pUVar3 = pIVar30->A;
                pIVar4 = pIVar30->InputA;
                pUVar5 = pIVar30->B;
                pIVar6 = pIVar30->InputB;
                dVar7 = (pIVar30->AveragePosition).field0_0x0._s_0.X;
                dVar8 = (pIVar30->AveragePosition).field0_0x0._s_0.Y;
                dVar9 = (pIVar30->AveragePosition).field0_0x0._s_0.Z;
                dVar10 = (pIVar30->PositionA).field0_0x0._s_0.X;
                dVar11 = (pIVar30->PositionA).field0_0x0._s_0.Y;
                dVar12 = (pIVar30->PositionA).field0_0x0._s_0.Z;
                dVar13 = (pIVar30->PositionB).field0_0x0._s_0.X;
                dVar14 = (pIVar30->PositionB).field0_0x0._s_0.Y;
                dVar15 = (pIVar30->PositionB).field0_0x0._s_0.Z;
                fVar19 = pIVar30->InputKeyA;
                fVar20 = pIVar30->InputKeyB;
                pIVar30->A = pIVar29->A;
                pIVar30->InputA = pIVar2;
                pIVar2 = pIVar29->InputB;
                pIVar30->B = pIVar29->B;
                pIVar30->InputB = pIVar2;
                dVar16 = (pIVar29->AveragePosition).field0_0x0._s_0.Y;
                (pIVar30->AveragePosition).field0_0x0._s_0.X =
                     (pIVar29->AveragePosition).field0_0x0._s_0.X;
                (pIVar30->AveragePosition).field0_0x0._s_0.Y = dVar16;
                dVar16 = (pIVar29->PositionA).field0_0x0._s_0.X;
                (pIVar30->AveragePosition).field0_0x0._s_0.Z =
                     (pIVar29->AveragePosition).field0_0x0._s_0.Z;
                (pIVar30->PositionA).field0_0x0._s_0.X = dVar16;
                dVar16 = (pIVar29->PositionA).field0_0x0._s_0.Z;
                (pIVar30->PositionA).field0_0x0._s_0.Y = (pIVar29->PositionA).field0_0x0._s_0.Y;
                (pIVar30->PositionA).field0_0x0._s_0.Z = dVar16;
                dVar16 = (pIVar29->PositionB).field0_0x0._s_0.Y;
                (pIVar30->PositionB).field0_0x0._s_0.X = (pIVar29->PositionB).field0_0x0._s_0.X;
                (pIVar30->PositionB).field0_0x0._s_0.Y = dVar16;
                fVar17 = pIVar29->InputKeyA;
                fVar18 = pIVar29->InputKeyB;
                (pIVar30->PositionB).field0_0x0._s_0.Z = (pIVar29->PositionB).field0_0x0._s_0.Z;
                pIVar30->InputKeyA = fVar17;
                pIVar30->InputKeyB = fVar18;
                pIVar29->A = pUVar3;
                pIVar29->InputA = pIVar4;
                pIVar29->B = pUVar5;
                pIVar29->InputB = pIVar6;
                (pIVar29->AveragePosition).field0_0x0._s_0.X = dVar7;
                (pIVar29->AveragePosition).field0_0x0._s_0.Y = dVar8;
                (pIVar29->AveragePosition).field0_0x0._s_0.Z = dVar9;
                (pIVar29->PositionA).field0_0x0._s_0.X = dVar10;
                (pIVar29->PositionA).field0_0x0._s_0.Y = dVar11;
                (pIVar29->PositionA).field0_0x0._s_0.Z = dVar12;
                (pIVar29->PositionB).field0_0x0._s_0.X = dVar13;
                (pIVar29->PositionB).field0_0x0._s_0.Y = dVar14;
                (pIVar29->PositionB).field0_0x0._s_0.Z = dVar15;
                pIVar29->InputKeyA = fVar19;
                pIVar29->InputKeyB = fVar20;
                iVar28 = iVar22;
              } while (iVar22 * 2 + 1 < iVar23);
            }
            iVar23 = iVar23 + -1;
            lVar26 = lVar26 + -1;
            pIVar27 = pIVar27 + -1;
          } while (0 < lVar26);
        }
        return;
      }
      iVar22 = iVar25 + -1;
      iVar23 = iVar28 + -2;
      iVar28 = iVar23;
      iVar25 = iVar22;
    }
    iVar23 = iVar22 * 2;
    iVar24 = iVar23 + 1;
    if (iVar23 + 2 < param_2) {
      bVar21 = `FPCGSplineIntersectionElement::ExecuteInternal'::__l75::<lambda_3>::
               operator()<PCGSplineIntersection::IntersectionPoint,PCGSplineIntersection::IntersectionPoint>
                         (param_4.Predicate,param_1 + (iVar23 + 2),param_1 + iVar24);
      if (bVar21) {
        iVar24 = iVar23;
      }
      iVar24 = iVar24 + 1;
    }
    pIVar27 = param_1 + iVar24;
    pIVar29 = param_1 + iVar22;
    bVar21 = `FPCGSplineIntersectionElement::ExecuteInternal'::__l75::<lambda_3>::
             operator()<PCGSplineIntersection::IntersectionPoint,PCGSplineIntersection::IntersectionPoint>
                       (param_4.Predicate,pIVar29,pIVar27);
    if (!bVar21) goto LAB_149c4457c;
    pIVar2 = pIVar27->InputA;
    iVar23 = iVar24 * 2 + 1;
    pUVar3 = pIVar29->A;
    pIVar4 = pIVar29->InputA;
    pUVar5 = pIVar29->B;
    pIVar6 = pIVar29->InputB;
    dVar7 = (pIVar29->AveragePosition).field0_0x0._s_0.X;
    dVar8 = (pIVar29->AveragePosition).field0_0x0._s_0.Y;
    dVar9 = (pIVar29->AveragePosition).field0_0x0._s_0.Z;
    dVar10 = (pIVar29->PositionA).field0_0x0._s_0.X;
    dVar11 = (pIVar29->PositionA).field0_0x0._s_0.Y;
    dVar12 = (pIVar29->PositionA).field0_0x0._s_0.Z;
    dVar13 = (pIVar29->PositionB).field0_0x0._s_0.X;
    dVar14 = (pIVar29->PositionB).field0_0x0._s_0.Y;
    dVar15 = (pIVar29->PositionB).field0_0x0._s_0.Z;
    fVar19 = pIVar29->InputKeyA;
    fVar20 = pIVar29->InputKeyB;
    pIVar29->A = pIVar27->A;
    pIVar29->InputA = pIVar2;
    pIVar2 = pIVar27->InputB;
    pIVar29->B = pIVar27->B;
    pIVar29->InputB = pIVar2;
    dVar16 = (pIVar27->AveragePosition).field0_0x0._s_0.Y;
    (pIVar29->AveragePosition).field0_0x0._s_0.X = (pIVar27->AveragePosition).field0_0x0._s_0.X;
    (pIVar29->AveragePosition).field0_0x0._s_0.Y = dVar16;
    dVar16 = (pIVar27->PositionA).field0_0x0._s_0.X;
    (pIVar29->AveragePosition).field0_0x0._s_0.Z = (pIVar27->AveragePosition).field0_0x0._s_0.Z;
    (pIVar29->PositionA).field0_0x0._s_0.X = dVar16;
    dVar16 = (pIVar27->PositionA).field0_0x0._s_0.Z;
    (pIVar29->PositionA).field0_0x0._s_0.Y = (pIVar27->PositionA).field0_0x0._s_0.Y;
    (pIVar29->PositionA).field0_0x0._s_0.Z = dVar16;
    dVar16 = (pIVar27->PositionB).field0_0x0._s_0.Y;
    (pIVar29->PositionB).field0_0x0._s_0.X = (pIVar27->PositionB).field0_0x0._s_0.X;
    (pIVar29->PositionB).field0_0x0._s_0.Y = dVar16;
    fVar17 = pIVar27->InputKeyA;
    fVar18 = pIVar27->InputKeyB;
    (pIVar29->PositionB).field0_0x0._s_0.Z = (pIVar27->PositionB).field0_0x0._s_0.Z;
    pIVar29->InputKeyA = fVar17;
    pIVar29->InputKeyB = fVar18;
    pIVar27->A = pUVar3;
    pIVar27->InputA = pIVar4;
    pIVar27->B = pUVar5;
    pIVar27->InputB = pIVar6;
    (pIVar27->AveragePosition).field0_0x0._s_0.X = dVar7;
    (pIVar27->AveragePosition).field0_0x0._s_0.Y = dVar8;
    (pIVar27->AveragePosition).field0_0x0._s_0.Z = dVar9;
    (pIVar27->PositionA).field0_0x0._s_0.X = dVar10;
    (pIVar27->PositionA).field0_0x0._s_0.Y = dVar11;
    (pIVar27->PositionA).field0_0x0._s_0.Z = dVar12;
    (pIVar27->PositionB).field0_0x0._s_0.X = dVar13;
    (pIVar27->PositionB).field0_0x0._s_0.Y = dVar14;
    (pIVar27->PositionB).field0_0x0._s_0.Z = dVar15;
    pIVar27->InputKeyA = fVar19;
    pIVar27->InputKeyB = fVar20;
    iVar22 = iVar24;
  } while( true );
}

// InternalConstructor<UPCGClipPathsSettings> @ 149c44780

void __cdecl InternalConstructor<UPCGClipPathsSettings>(FObjectInitializer *param_1)

{
  UPCGSettings *this;
  
  this = (UPCGSettings *)param_1->Obj;
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPCGClipPathsSettings__6B_;
    this[1]._padding_ = 0x3ff0000000000000;
  }
  return;
}

// InternalConstructor<UPCGCreatePolygon2DSettings> @ 149c447d0

void __cdecl InternalConstructor<UPCGCreatePolygon2DSettings>(FObjectInitializer *param_1)

{
  UPCGSettings *this;
  FObjectInitializer *pFVar1;
  UEnum *this_00;
  FString *pFVar2;
  FString local_18;
  
  this = (UPCGSettings *)param_1->Obj;
  if (this != (UPCGSettings *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UPCGSettings::UPCGSettings(this,pFVar1);
    *(undefined2 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPCGCreatePolygon2DSettings__6B_;
    FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
              ((FPCGAttributePropertyInputSelector *)&this[1]._padding_);
    *(undefined1 *)&this[1]._padding_ = 0;
    FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
              ((FPCGAttributePropertyInputSelector *)&this[1].Seed);
    this[1].CacheLock.CriticalSection.Opaque3[1] = (void *)0x4059000000000000;
    this[1].CacheLock.CriticalSection.Opaque3[2] = &DAT_3ff0000000000000;
    this_00 = StaticEnum<enum_EPCGPolygon2DProperties>();
    pFVar2 = UEnum::GetNameStringByValue(this_00,&local_18,3);
    FPCGAttributePropertySelector::Update
              ((FPCGAttributePropertySelector *)&this[1]._padding_,pFVar2);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// InternalConstructor<UPCGGenericUserParameterGetSettings> @ 149c448a0

void __cdecl InternalConstructor<UPCGGenericUserParameterGetSettings>(FObjectInitializer *param_1)

{
  UPCGSettings *this;
  
  this = (UPCGSettings *)param_1->Obj;
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0x100;
    this->_padding_ = (longlong)&___7UPCGGenericUserParameterGetSettings__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0;
  }
  return;
}

// InternalConstructor<UPCGGetLandscapeSettings> @ 149c44900

void __cdecl InternalConstructor<UPCGGetLandscapeSettings>(FObjectInitializer *param_1)

{
  UPCGDataFromActorSettings *this;
  bool bVar1;
  FObjectInitializer *pFVar2;
  UClass *pUVar3;
  
  this = (UPCGDataFromActorSettings *)param_1->Obj;
  if (this != (UPCGDataFromActorSettings *)0x0) {
    pFVar2 = FObjectInitializer::Get();
    UPCGDataFromActorSettings::UPCGDataFromActorSettings(this,pFVar2);
    this->Mode = ParseActorComponents;
    this->_padding_ = (longlong)&___7UPCGGetLandscapeSettings__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x100;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0x100;
    *(undefined1 *)((longlong)&this[1]._padding_ + 6) = 0;
    (this->ActorSelector).bShowActorFilter = false;
    (this->ActorSelector).bIncludeChildren = false;
    (this->ActorSelector).bShowActorSelectionClass = false;
    (this->ActorSelector).bShowSelectMultiple = false;
    (this->ActorSelector).bSelectMultiple = true;
    bVar1 = PCGHelpers::IsNewObjectAndNotDefault((UObject *)this,false);
    if (bVar1) {
      (this->ActorSelector).ActorFilter = AllWorldActors;
      (this->ActorSelector).bMustOverlapSelf = true;
      (this->ActorSelector).ActorSelection = ByClass;
      pUVar3 = Z_Construct_UClass_ALandscapeProxy_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->ActorSelector).ActorSelectionClass.Class.field0_0x0.DebugPtr = pUVar3;
      *(undefined1 *)((longlong)&this[1]._padding_ + 5) = 0;
    }
  }
  return;
}

// InternalConstructor<UPCGGetPCGComponentSettings> @ 149c449d0

void __cdecl InternalConstructor<UPCGGetPCGComponentSettings>(FObjectInitializer *param_1)

{
  UPCGDataFromActorSettings *this;
  FObjectInitializer *pFVar1;
  
  this = (UPCGDataFromActorSettings *)param_1->Obj;
  if (this != (UPCGDataFromActorSettings *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UPCGDataFromActorSettings::UPCGDataFromActorSettings(this,pFVar1);
    this->Mode = GetDataFromPCGComponent;
    this->_padding_ = (longlong)&___7UPCGGetPCGComponentSettings__6B_;
    (this->ActorSelector).bShowActorFilter = false;
    (this->ActorSelector).ActorFilter = AllWorldActors;
  }
  return;
}

// InternalConstructor<UPCGGetPrimitiveSettings> @ 149c44a20

void __cdecl InternalConstructor<UPCGGetPrimitiveSettings>(FObjectInitializer *param_1)

{
  UPCGDataFromActorSettings *this;
  FObjectInitializer *pFVar1;
  
  this = (UPCGDataFromActorSettings *)param_1->Obj;
  if (this != (UPCGDataFromActorSettings *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UPCGDataFromActorSettings::UPCGDataFromActorSettings(this,pFVar1);
    this->Mode = ParseActorComponents;
    this->_padding_ = (longlong)&___7UPCGGetPrimitiveSettings__6B_;
  }
  return;
}

// InternalConstructor<UPCGGetSegmentSettings> @ 149c44a60

void __cdecl InternalConstructor<UPCGGetSegmentSettings>(FObjectInitializer *param_1)

{
  UPCGSettings *this;
  
  this = (UPCGSettings *)param_1->Obj;
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPCGGetSegmentSettings__6B_;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
              ((FPCGAttributePropertyInputSelector *)&this[1]._padding_);
    *(undefined4 *)&this[1]._padding_ = 0;
    FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
              ((FPCGAttributePropertyInputSelector *)&this[1].Seed);
    *(undefined4 *)(this[1].CacheLock.CriticalSection.Opaque3 + 1) = 0xffffffff;
  }
  return;
}

// InternalConstructor<UPCGGetSplineSettings> @ 149c44ad0

void __cdecl InternalConstructor<UPCGGetSplineSettings>(FObjectInitializer *param_1)

{
  UPCGDataFromActorSettings *this;
  FObjectInitializer *pFVar1;
  
  this = (UPCGDataFromActorSettings *)param_1->Obj;
  if (this != (UPCGDataFromActorSettings *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UPCGDataFromActorSettings::UPCGDataFromActorSettings(this,pFVar1);
    this->Mode = ParseActorComponents;
    this->_padding_ = (longlong)&___7UPCGGetSplineSettings__6B_;
  }
  return;
}

// InternalConstructor<UPCGGetVirtualTextureSettings> @ 149c44b10

void __cdecl InternalConstructor<UPCGGetVirtualTextureSettings>(FObjectInitializer *param_1)

{
  UPCGDataFromActorSettings *this;
  FObjectInitializer *pFVar1;
  UClass *pUVar2;
  
  this = (UPCGDataFromActorSettings *)param_1->Obj;
  if (this != (UPCGDataFromActorSettings *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UPCGDataFromActorSettings::UPCGDataFromActorSettings(this,pFVar1);
    this->Mode = ParseActorComponents;
    this->_padding_ = (longlong)&___7UPCGGetVirtualTextureSettings__6B_;
    (this->ActorSelector).ActorFilter = AllWorldActors;
    (this->ActorSelector).bShowActorFilter = false;
    (this->ActorSelector).ActorSelection = ByClass;
    pUVar2 = Z_Construct_UClass_ARuntimeVirtualTextureVolume_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (this->ActorSelector).ActorSelectionClass.Class.field0_0x0.DebugPtr = pUVar2;
    (this->ActorSelector).bShowActorSelection = false;
    (this->ActorSelector).bShowActorSelectionClass = false;
    (this->ActorSelector).bIncludeChildren = false;
    (this->ActorSelector).bSelectMultiple = true;
    (this->ActorSelector).bShowSelectMultiple = false;
    (this->ComponentSelector).ComponentSelection = ByClass;
    pUVar2 = Z_Construct_UClass_URuntimeVirtualTextureComponent_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (this->ComponentSelector).ComponentSelectionClass.Class.field0_0x0.DebugPtr = pUVar2;
    (this->ComponentSelector).bShowComponentSelectionClass = false;
  }
  return;
}

// InternalConstructor<UPCGGetVolumeSettings> @ 149c44bf0

void __cdecl InternalConstructor<UPCGGetVolumeSettings>(FObjectInitializer *param_1)

{
  UPCGDataFromActorSettings *this;
  FObjectInitializer *pFVar1;
  
  this = (UPCGDataFromActorSettings *)param_1->Obj;
  if (this != (UPCGDataFromActorSettings *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UPCGDataFromActorSettings::UPCGDataFromActorSettings(this,pFVar1);
    this->Mode = ParseActorComponents;
    this->_padding_ = (longlong)&___7UPCGGetVolumeSettings__6B_;
  }
  return;
}

// InternalConstructor<UPCGReverseSplineSettings> @ 149c44c30

void __cdecl InternalConstructor<UPCGReverseSplineSettings>(FObjectInitializer *param_1)

{
  UPCGSettings *this;
  
  this = (UPCGSettings *)param_1->Obj;
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPCGReverseSplineSettings__6B_;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
  }
  return;
}

// InternalConstructor<UPCGSpawnActorNode> @ 149c44c70

void __cdecl InternalConstructor<UPCGSpawnActorNode>(FObjectInitializer *param_1)

{
  UPCGBaseSubgraphNode *this;
  
  this = (UPCGBaseSubgraphNode *)param_1->Obj;
  if (this != (UPCGBaseSubgraphNode *)0x0) {
    UPCGBaseSubgraphNode::UPCGBaseSubgraphNode(this,param_1);
    *(undefined ***)this = &___7UPCGSpawnActorNode__6B_;
  }
  return;
}

// InternalConstructor<UPCGSpawnActorSettings> @ 149c44ca0

void __cdecl InternalConstructor<UPCGSpawnActorSettings>(FObjectInitializer *param_1)

{
  UPCGBaseSubgraphSettings *this;
  bool bVar1;
  
  this = (UPCGBaseSubgraphSettings *)param_1->Obj;
  if (this != (UPCGBaseSubgraphSettings *)0x0) {
    UPCGBaseSubgraphSettings::UPCGBaseSubgraphSettings(this,param_1);
    *(undefined ***)this = &___7UPCGSpawnActorSettings__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined4 *)&this[1].field_0x10 = 0x100;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)&this[1].field_0x30 = 0;
    *(undefined8 *)&this[1].field_0x38 = 0;
    *(undefined8 *)&this[1].field_0x58 = 0;
    *(undefined8 *)&this[1].field_0x60 = 0;
    *(undefined8 *)&this[1].field_0x40 = 0;
    *(undefined8 *)&this[1].field_0x50 = 0;
    *(undefined8 *)&this[1].field_0x48 = 0;
    FUtf8String::Reset((FUtf8String *)&this[1].field_0x58,0);
    *(undefined4 *)&this[1].field_0x68 = 1;
    this[1].field_0x6c = 0;
    *(undefined8 *)&this[1].field_0x70 = 0;
    *(undefined2 *)&this[1].field_0x78 = 1;
    FPCGDataLayerSettings::FPCGDataLayerSettings((FPCGDataLayerSettings *)&this[1].field_0x80);
    this[3].field_0x40 = 0;
    *(undefined8 *)&this[3].field_0x48 = 0;
    *(undefined8 *)&this[3].field_0x50 = 0;
    this[3].field_0x58 = 0;
    bVar1 = PCGHelpers::IsNewObjectAndNotDefault((UObject *)this,false);
    if (bVar1) {
      this[1].field_0x10 = 2;
      *(undefined4 *)&this[1].field_0x68 = 2;
    }
  }
  return;
}

// InternalConstructor<UPCGSpawnSplineMeshSettings> @ 149c44db0

void __cdecl InternalConstructor<UPCGSpawnSplineMeshSettings>(FObjectInitializer *param_1)

{
  UPCGSettings *this;
  
  this = (UPCGSettings *)param_1->Obj;
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    this->_padding_ = (longlong)&___7UPCGSpawnSplineMeshSettings__6B_;
    FSoftSplineMeshComponentDescriptor::FSoftSplineMeshComponentDescriptor
              ((FSoftSplineMeshComponentDescriptor *)(this + 1));
    FPCGSplineMeshParams::FPCGSplineMeshParams
              ((FPCGSplineMeshParams *)&this[3].bHasAnyOverridableHardReferences);
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[5]._padding_,0);
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    *(undefined1 *)&this[5]._padding_ = 0;
    this[5].Seed = 0;
    this[5].bExecutionDependencyRequired = false;
    *(undefined3 *)&this[5].field_0x55 = 0;
    this[5].OriginalSettings = (UPCGSettings *)0x0;
    *(undefined8 *)&this[5].bUseSeed = 0;
    this[5].CachedElement.Object = (IPCGElement *)0x0;
    this[5].CachedElement.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[5].CacheLock.CriticalSection.Opaque1[0] = (void *)0x0;
  }
  return;
}

// InternalConstructor<UPCGSpawnSplineSettings> @ 149c44e70

void __cdecl InternalConstructor<UPCGSpawnSplineSettings>(FObjectInitializer *param_1)

{
  UPCGSettings *this;
  UClass *pUVar1;
  
  this = (UPCGSettings *)param_1->Obj;
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    this->_padding_ = (longlong)&___7UPCGSpawnSplineSettings__6B_;
    pUVar1 = Z_Construct_UClass_USplineComponent_NoRegister();
    this[1]._padding_ = (longlong)pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    *(undefined1 *)&this[1]._padding_ = 0;
    FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
              ((FPCGAttributePropertyInputSelector *)&this[1]._padding_);
    this[1].CachedElement.Object = (IPCGElement *)0x0;
    this[1].CachedElement.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[1].Seed = 0;
    this[1].bExecutionDependencyRequired = false;
    *(undefined3 *)&this[1].field_0x55 = 0;
    *(undefined8 *)&this[1].bUseSeed = 0;
    this[1].OriginalSettings = (UPCGSettings *)0x0;
    FUtf8String::Reset((FUtf8String *)&this[1].CachedElement,0);
    this[1].CacheLock.CriticalSection.Opaque1[0] = (void *)0x0;
    this[1].CacheLock.CriticalSection.Opaque2[0] = 0;
    this[1].CacheLock.CriticalSection.Opaque2[1] = 0;
    this[1].CacheLock.CriticalSection.Opaque3[0] = (void *)0x0;
    this[1].CacheLock.CriticalSection.Opaque3[1] = (void *)0x0;
    *(undefined1 *)(this[1].CacheLock.CriticalSection.Opaque3 + 2) = 1;
    *(FName *)((longlong)this[1].CacheLock.CriticalSection.Opaque3 + 0x14) =
         PCGAddComponentConstants::ComponentReferenceAttribute;
  }
  return;
}

// InternalConstructor<UPCGSplineIntersectionSettings> @ 149c44f40

void __cdecl InternalConstructor<UPCGSplineIntersectionSettings>(FObjectInitializer *param_1)

{
  UPCGSettings *this;
  FObjectInitializer *pFVar1;
  
  this = (UPCGSettings *)param_1->Obj;
  if (this != (UPCGSettings *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UPCGSettings::UPCGSettings(this,pFVar1);
    *(undefined2 *)&this[1]._padding_ = 0x101;
    this->_padding_ = (longlong)&___7UPCGSplineIntersectionSettings__6B_;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector
              ((FPCGAttributePropertyOutputSelector *)&this[1]._padding_);
    FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector
              ((FPCGAttributePropertyOutputSelector *)&this[1]._padding_);
    this[1].CacheLock.CriticalSection.Opaque3[0] = (void *)0x4024000000000000;
    FPCGAttributePropertySelector::SetAttributeName
              ((FPCGAttributePropertySelector *)&this[1]._padding_,
               PCGSplineIntersection::Constants::OriginatingSplineIndexAttributeName,true);
    FPCGAttributePropertySelector::SetAttributeName
              ((FPCGAttributePropertySelector *)&this[1]._padding_,
               PCGSplineIntersection::Constants::IntersectingSplineIndexAttributeName,true);
  }
  return;
}

// InternalConstructor<UPCGSplineSamplerSettings> @ 149c45000

void __cdecl InternalConstructor<UPCGSplineSamplerSettings>(FObjectInitializer *param_1)

{
  UPCGSettings *this;
  bool bVar1;
  FObjectInitializer *pFVar2;
  
  this = (UPCGSettings *)param_1->Obj;
  if (this != (UPCGSettings *)0x0) {
    pFVar2 = FObjectInitializer::Get();
    UPCGSettings::UPCGSettings(this,pFVar2);
    this->_padding_ = (longlong)&___7UPCGSplineSamplerSettings__6B_;
    FPCGSplineSamplerParams::FPCGSplineSamplerParams((FPCGSplineSamplerParams *)(this + 1));
    bVar1 = PCGHelpers::IsNewObjectAndNotDefault((UObject *)this,false);
    if (bVar1) {
      *(undefined4 *)&this[2].field_0x64 = 0x3f800000;
    }
  }
  return;
}

// InternalConstructor<UPCGSplitPointsSettings> @ 149c45060

void __cdecl InternalConstructor<UPCGSplitPointsSettings>(FObjectInitializer *param_1)

{
  UPCGSettings *this;
  
  this = (UPCGSettings *)param_1->Obj;
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0x3f000000;
    this->_padding_ = (longlong)&___7UPCGSplitPointsSettings__6B_;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 2;
  }
  return;
}

// InternalConstructor<UPCGSplitSplinesSettings> @ 149c450b0

void __cdecl InternalConstructor<UPCGSplitSplinesSettings>(FObjectInitializer *param_1)

{
  UPCGSettings *this;
  FName FVar1;
  FName FVar2;
  FObjectInitializer *pFVar3;
  FName *pFVar4;
  FName local_res8;
  FName local_res10;
  FPCGAttributePropertySelector local_48;
  
  this = (UPCGSettings *)param_1->Obj;
  if (this != (UPCGSettings *)0x0) {
    pFVar3 = FObjectInitializer::Get();
    UPCGSettings::UPCGSettings(this,pFVar3);
    *(undefined4 *)&this[1]._padding_ = 2;
    this->_padding_ = (longlong)&___7UPCGSplitSplinesSettings__6B_;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 1;
    this[1]._padding_ = 0x3fe0000000000000;
    FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
              ((FPCGAttributePropertyInputSelector *)&this[1]._padding_);
    *(undefined1 *)&this[1].Seed = 1;
    FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector
              ((FPCGAttributePropertyOutputSelector *)&this[1].OriginalSettings);
    pFVar4 = FName::FName(&local_res8,L"Data");
    FVar1 = *pFVar4;
    pFVar4 = FName::FName(&local_res10,L"OriginatingSplineIndex");
    FVar2 = *pFVar4;
    FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector
              ((FPCGAttributePropertyOutputSelector *)&local_48);
    FPCGAttributePropertySelector::SetDomainName(&local_48,FVar1,true);
    FPCGAttributePropertySelector::SetAttributeName(&local_48,FVar2,true);
    DestructItems<FString,int>
              ((FString *)local_48.ExtraNames.AllocatorInstance.Data,local_48.ExtraNames.ArrayNum);
    local_48.ExtraNames.ArrayNum = 0;
    if (local_48.ExtraNames.ArrayMax == 0) {
      local_48.ExtraNames.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,local_48.ExtraNames.ArrayMax,&local_48.ExtraNames.AllocatorInstance,0,
                 &local_48.ExtraNames.ArrayMax);
      ConstructItems<FString,FString,int>
                (local_48.ExtraNames.AllocatorInstance.Data,(FString *)0x0,0);
    }
    FPCGAttributePropertySelector::operator=
              ((FPCGAttributePropertySelector *)&this[1].OriginalSettings,&local_48);
    DestructItems<FString,int>
              ((FString *)local_48.ExtraNames.AllocatorInstance.Data,local_48.ExtraNames.ArrayNum);
    if (local_48.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.ExtraNames.AllocatorInstance.Data);
    }
  }
  return;
}

// InternalConstructor<UPCGStaticMeshSpawnerKernel> @ 149c45230

void __cdecl InternalConstructor<UPCGStaticMeshSpawnerKernel>(FObjectInitializer *param_1)

{
  UPCGComputeKernel *this;
  
  this = (UPCGComputeKernel *)param_1->Obj;
  if (this != (UPCGComputeKernel *)0x0) {
    UPCGComputeKernel::UPCGComputeKernel(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPCGStaticMeshSpawnerKernel__6B_;
  }
  return;
}

// InternalConstructor<UPCGStaticMeshSpawnerSettings> @ 149c45270

void __cdecl InternalConstructor<UPCGStaticMeshSpawnerSettings>(FObjectInitializer *param_1)

{
  UPCGSettings *this;
  FName FVar1;
  FObjectInitializer *pFVar2;
  UClass *pUVar3;
  FName *pFVar4;
  UObject *pUVar5;
  FName local_res8;
  
  this = (UPCGSettings *)param_1->Obj;
  if (this != (UPCGSettings *)0x0) {
    pFVar2 = FObjectInitializer::Get();
    UPCGSettings::UPCGSettings(this,pFVar2);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UPCGStaticMeshSpawnerSettings__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 1;
    *(undefined8 *)&this[1].bUseSeed = 0;
    this[1].CachedElement.Object = (IPCGElement *)0x0;
    this[1]._padding_ = 0;
    this[1].OriginalSettings = (UPCGSettings *)0x0;
    this[1].Seed = 0;
    this[1].bExecutionDependencyRequired = false;
    *(undefined3 *)&this[1].field_0x55 = 0;
    FUtf8String::Reset((FUtf8String *)&this[1].bUseSeed,0);
    this[1].CachedElement.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[1].CacheLock.CriticalSection.Opaque1[0] = (void *)0x0;
    this[1].CacheLock.CriticalSection.Opaque2[0] = 0x1000100;
    pUVar3 = Z_Construct_UClass_UPCGMeshSelectorWeighted_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    this[1]._padding_ = (longlong)pUVar3;
    if ((this->_padding_ & 0x10) == 0) {
      pFVar4 = FName::FName(&local_res8,L"DefaultSelectorInstance");
      FVar1 = *pFVar4;
      pUVar3 = Z_Construct_UClass_UPCGMeshSelectorWeighted_NoRegister();
      pUVar5 = FObjectInitializer::CreateDefaultSubobject
                         (param_1,(UObject *)this,FVar1,pUVar3,pUVar3,true,false);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      this[1]._padding_ = (longlong)pUVar5;
    }
  }
  return;
}

// InternalConstructor<UPCGSurfaceSamplerSettings> @ 149c453d0

void __cdecl InternalConstructor<UPCGSurfaceSamplerSettings>(FObjectInitializer *param_1)

{
  UPCGSettings *this;
  bool bVar1;
  FObjectInitializer *pFVar2;
  
  this = (UPCGSettings *)param_1->Obj;
  if (this != (UPCGSettings *)0x0) {
    pFVar2 = FObjectInitializer::Get();
    UPCGSettings::UPCGSettings(this,pFVar2);
    *(undefined4 *)&this[1]._padding_ = 0x3dcccccd;
    this->_padding_ = (longlong)&___7UPCGSurfaceSamplerSettings__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
    this[1]._padding_ = 0x4049000000000000;
    this[1]._padding_ = 0x4049000000000000;
    this[1]._padding_ = 0x4049000000000000;
    *(undefined4 *)&this[1]._padding_ = 0x3f000000;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0x100;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    bVar1 = PCGHelpers::IsNewObjectAndNotDefault((UObject *)this,false);
    if (bVar1) {
      *(undefined4 *)&this[1]._padding_ = 0x3f800000;
    }
  }
  return;
}

// InternalConstructor<UPCGTextureSamplerSettings> @ 149c45470

void __cdecl InternalConstructor<UPCGTextureSamplerSettings>(FObjectInitializer *param_1)

{
  UPCGSettings *this;
  TVector2<double> TVar1;
  double dVar2;
  undefined8 local_res8;
  
  this = (UPCGSettings *)param_1->Obj;
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    this->_padding_ = (longlong)&___7UPCGTextureSamplerSettings__6B_;
    dVar2 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar2;
    dVar2 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar2;
    dVar2 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]
    ;
    this[1]._padding_ = (longlong)dVar2;
    dVar2 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]
    ;
    this[1]._padding_ = (longlong)dVar2;
    *(double (*) [2])&this[1]._padding_ =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    *(double (*) [2])&this[1].OriginalSettings =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    this[1].CacheLock.CriticalSection.Opaque2[0] = 0;
    this[1].CacheLock.CriticalSection.Opaque2[1] = 0x3ff00000;
    this[1].CacheLock.CriticalSection.Opaque3[0] = &DAT_3ff0000000000000;
    *(undefined1 *)&this[1].CachedElement.Object = 0;
    *(undefined4 *)((longlong)&this[1].CachedElement.Object + 4) = 0;
    *(undefined2 *)&this[1].CachedElement.SharedReferenceCount.ReferenceController = 0x301;
    *(undefined1 *)((longlong)&this[1].CachedElement.SharedReferenceCount.ReferenceController + 2) =
         1;
    *(undefined4 *)((longlong)&this[1].CachedElement.SharedReferenceCount.ReferenceController + 4) =
         0x42480000;
    *(undefined1 *)this[1].CacheLock.CriticalSection.Opaque1 = 0;
    TVar1 = UE::Math::TVector2<double>::ZeroVector;
    *(undefined4 *)&this[1].CachedOverridableParams.AllocatorInstance.Data = 0;
    *(undefined1 *)((longlong)&this[1].CachedOverridableParams.AllocatorInstance.Data + 4) = 0;
    ((TVector2<double>_u_0 *)(this[1].CacheLock.CriticalSection.Opaque3 + 1))->_s_0 =
         (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
    this[1].CachedOverridableParams.ArrayNum = 0;
    this[1].CachedOverridableParams.ArrayMax = -0x40200000;
    this[1].OverriddenSettingsPropertyBag.field0_0x0.DebugPtr = (UPropertyBag *)0xbfe0000000000000;
    *(undefined2 *)&this[2]._padding_ = 0;
    this[1].bHasAnyOverridableHardReferences = false;
    this[1].bExecuteOnGPU = false;
    this[1].bDumpCookedHLSL = false;
    this[1].bDumpDataDescriptions = false;
    this[1].bPrintShaderDebugValues = false;
    *(undefined3 *)&this[1].field_0xbd = 0x3fe000;
    *(undefined8 *)&this[1].DebugBufferSize = 0x3fe0000000000000;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[2]._padding_,0);
    local_res8 = 0;
    FSoftObjectPtr::operator=((FSoftObjectPtr *)&this[2]._padding_,(FObjectPtr)&local_res8);
  }
  return;
}

// InternalConstructor<UPCGTransformPointsSettings> @ 149c455e0

void __cdecl InternalConstructor<UPCGTransformPointsSettings>(FObjectInitializer *param_1)

{
  UPCGSettings *this;
  undefined8 uVar1;
  double dVar2;
  
  this = (UPCGSettings *)param_1->Obj;
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPCGTransformPointsSettings__6B_;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    this[1]._padding_ = uVar1;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    this[1]._padding_ = uVar1;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined1 *)&this[1]._padding_ = 0;
    dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    this[1]._padding_ = (longlong)UE::Math::TRotator<double>::ZeroRotator.Pitch;
    *(double *)&this[1].Seed = dVar2;
    this[1].OriginalSettings = (UPCGSettings *)UE::Math::TRotator<double>::ZeroRotator.Roll;
    dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    *(double *)&this[1].bUseSeed = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    this[1].CachedElement.Object = (IPCGElement *)dVar2;
    this[1].CachedElement.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)UE::Math::TRotator<double>::ZeroRotator.Roll;
    *(undefined1 *)this[1].CacheLock.CriticalSection.Opaque1 = 0;
    uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    *(double *)this[1].CacheLock.CriticalSection.Opaque2 =
         UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    this[1].CacheLock.CriticalSection.Opaque3[0] = (void *)uVar1;
    this[1].CacheLock.CriticalSection.Opaque3[1] =
         (void *)UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    this[1].CacheLock.CriticalSection.Opaque3[2] =
         (void *)UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    this[1].CachedOverridableParams.AllocatorInstance.Data = (FScriptContainerElement *)uVar1;
    *(double *)&this[1].CachedOverridableParams.ArrayNum =
         UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    *(undefined2 *)&this[1].OverriddenSettingsPropertyBag.field0_0x0 = 0x100;
    *(undefined1 *)((longlong)&this[1].OverriddenSettingsPropertyBag.field0_0x0 + 2) = 0;
  }
  return;
}

// InternalConstructor<UPCGUnionSettings> @ 149c45700

void __cdecl InternalConstructor<UPCGUnionSettings>(FObjectInitializer *param_1)

{
  UPCGSettingsWithDynamicInputs *this;
  
  this = (UPCGSettingsWithDynamicInputs *)param_1->Obj;
  if (this != (UPCGSettingsWithDynamicInputs *)0x0) {
    UPCGSettingsWithDynamicInputs::UPCGSettingsWithDynamicInputs(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPCGUnionSettings__6B_;
  }
  return;
}

// InternalConstructor<UPCGUserParameterGetSettings> @ 149c45740

void __cdecl InternalConstructor<UPCGUserParameterGetSettings>(FObjectInitializer *param_1)

{
  UPCGSettings *this;
  
  this = (UPCGSettings *)param_1->Obj;
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0x100;
    this->_padding_ = (longlong)&___7UPCGUserParameterGetSettings__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UPCGVisualizeAttributeSettings> @ 149c45790

void __cdecl InternalConstructor<UPCGVisualizeAttributeSettings>(FObjectInitializer *param_1)

{
  UPCGSettings *this;
  
  this = (UPCGSettings *)param_1->Obj;
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    this->_padding_ = (longlong)&___7UPCGVisualizeAttributeSettings__6B_;
    FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
              ((FPCGAttributePropertyInputSelector *)(this + 1));
    *(undefined2 *)&this[1].Seed = 1;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].OriginalSettings = (UPCGSettings *)0x0;
    *(undefined8 *)&this[1].bUseSeed = 0;
    this[1].CachedElement.Object = (IPCGElement *)0x0;
    *(FColor_u_0 *)&this[1].CachedElement.SharedReferenceCount.ReferenceController =
         (FColor_u_0_s_0)FColor::Cyan.field0_0x0;
    this[1].CacheLock.CriticalSection.Opaque1[0] = (void *)0x403e000000000000;
    this[1].CacheLock.CriticalSection.Opaque2[0] = 0x1000;
    *(undefined1 *)(this[1].CacheLock.CriticalSection.Opaque2 + 1) = 1;
  }
  return;
}

// InternalConstructor<UPCGVolumeSamplerSettings> @ 149c45830

void __cdecl InternalConstructor<UPCGVolumeSamplerSettings>(FObjectInitializer *param_1)

{
  UPCGSettings *this;
  undefined8 uVar1;
  bool bVar2;
  FObjectInitializer *pFVar3;
  
  this = (UPCGSettings *)param_1->Obj;
  if (this != (UPCGSettings *)0x0) {
    pFVar3 = FObjectInitializer::Get();
    UPCGSettings::UPCGSettings(this,pFVar3);
    this->_padding_ = (longlong)&___7UPCGVolumeSamplerSettings__6B_;
    uVar1 = PCGVolumeSampler::DefaultVoxelSize.field0_0x0._s_0.Y;
    this[1]._padding_ = (longlong)PCGVolumeSampler::DefaultVoxelSize.field0_0x0._s_0.X;
    this[1]._padding_ = uVar1;
    this[1]._padding_ = (longlong)PCGVolumeSampler::DefaultVoxelSize.field0_0x0._s_0.Z;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f000000;
    bVar2 = PCGHelpers::IsNewObjectAndNotDefault((UObject *)this,false);
    if (bVar2) {
      *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    }
  }
  return;
}

// InternalConstructor<UPCGWorldQuerySettings> @ 149c458b0

/* WARNING: Enum "EPCGWorldQueryFilter": Some values do not have unique names */

void __cdecl InternalConstructor<UPCGWorldQuerySettings>(FObjectInitializer *param_1)

{
  UPCGSettings *this;
  
  this = (UPCGSettings *)param_1->Obj;
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    this->_padding_ = (longlong)&___7UPCGWorldQuerySettings__6B_;
    FPCGWorldCommonQueryParams::FPCGWorldCommonQueryParams((FPCGWorldCommonQueryParams *)(this + 1))
    ;
    *(undefined1 *)&this[2]._padding_ = 1;
  }
  return;
}

// InternalConstructor<UPCGWorldRayHitSettings> @ 149c45900

void __cdecl InternalConstructor<UPCGWorldRayHitSettings>(FObjectInitializer *param_1)

{
  UPCGSettings *this;
  undefined8 uVar1;
  double dVar2;
  
  this = (UPCGSettings *)param_1->Obj;
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    this->_padding_ = (longlong)&___7UPCGWorldRayHitSettings__6B_;
    *(undefined1 *)&this[1]._padding_ = 0;
    uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    this[1]._padding_ = uVar1;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    *(undefined4 *)&this[1]._padding_ = 0x42c80000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x42c80000;
    *(undefined4 *)&this[1]._padding_ = 0x42c80000;
    dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    this[1]._padding_ = (longlong)UE::Math::TRotator<double>::ZeroRotator.Pitch;
    this[1]._padding_ = (longlong)dVar2;
    this[1]._padding_ = (longlong)UE::Math::TRotator<double>::ZeroRotator.Roll;
    FPCGWorldRayHitQueryParams::FPCGWorldRayHitQueryParams
              ((FPCGWorldRayHitQueryParams *)&this[1]._padding_);
    return;
  }
  return;
}

// InternalConstructor<UPCGWorldRaycastElementSettings> @ 149c459b0

/* WARNING: Enum "EPCGWorldQueryFilter": Some values do not have unique names */

void __cdecl InternalConstructor<UPCGWorldRaycastElementSettings>(FObjectInitializer *param_1)

{
  UPCGSettings *this;
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  FObjectInitializer *pFVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  FString local_28;
  double local_18;
  
  this = (UPCGSettings *)param_1->Obj;
  if (this != (UPCGSettings *)0x0) {
    pFVar4 = FObjectInitializer::Get();
    UPCGSettings::UPCGSettings(this,pFVar4);
    this->_padding_ = (longlong)&___7UPCGWorldRaycastElementSettings__6B_;
    *(undefined1 *)&this[1]._padding_ = 0;
    uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    this[1]._padding_ = uVar1;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    *(undefined4 *)&this[1]._padding_ = 0x42c80000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x42c80000;
    *(undefined4 *)&this[1]._padding_ = 0x42c80000;
    dVar3 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    this[1]._padding_ = (longlong)UE::Math::TRotator<double>::ZeroRotator.Pitch;
    this[1]._padding_ = (longlong)dVar3;
    this[1]._padding_ = (longlong)UE::Math::TRotator<double>::ZeroRotator.Roll;
    *(undefined1 *)&this[1]._padding_ = 0;
    FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
              ((FPCGAttributePropertyInputSelector *)&this[1].Seed);
    uVar1 = __xmm_80000000000000008000000000000000;
    *(undefined1 *)(this[1].CacheLock.CriticalSection.Opaque3 + 1) = 0;
    uVar2 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
    local_18 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
    uVar5 = (uint)uVar1;
    uVar6 = (uint)((ulonglong)uVar1 >> 0x20);
    uVar7 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._8_4_ ^ uVar5;
    uVar8 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._12_4_ ^ uVar6;
    this[1].CacheLock.CriticalSection.Opaque3[2] =
         (void *)CONCAT44(UE::Math::TVector<double>::ZAxisVector.field0_0x0._4_4_ ^ uVar6,
                          UE::Math::TVector<double>::ZAxisVector.field0_0x0._0_4_ ^ uVar5);
    this[1].CachedOverridableParams.AllocatorInstance.Data =
         (FScriptContainerElement *)CONCAT44(uVar8,uVar7);
    this[1].CachedOverridableParams.ArrayNum = (uint)uVar2 ^ uVar5;
    this[1].CachedOverridableParams.ArrayMax = (uint)((ulonglong)uVar2 >> 0x20) ^ uVar6;
    FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
              ((FPCGAttributePropertyInputSelector *)&this[1].OverriddenSettingsPropertyBag);
    FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
              ((FPCGAttributePropertyInputSelector *)&this[2]._padding_);
    *(undefined1 *)&this[2].CachedElement.Object = 0;
    this[2].CachedElement.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x40f86a0000000000;
    FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
              ((FPCGAttributePropertyInputSelector *)&this[2].CacheLock);
    FPCGWorldCommonQueryParams::FPCGWorldCommonQueryParams
              ((FPCGWorldCommonQueryParams *)&this[2].bHasAnyOverridableHardReferences);
    this[3].bExecuteOnGPU = (bool)(this[3].bExecuteOnGPU & 0x80);
    *(byte *)&this[3].DebugBufferSize = (byte)this[3].DebugBufferSize & 0xfe;
    *(undefined4 *)&this[3].bPrintShaderDebugValues = 0;
    *(undefined4 *)&this[3].field_0xc4 = 0;
    this[3].bHasAnyOverridableHardReferences = false;
    *(undefined2 *)&this[4]._padding_ = 0;
    FPCGAttributePropertySelector::SetPointProperty
              ((FPCGAttributePropertySelector *)&this[1].Seed,Position,true);
    FPCGAttributePropertySelector::SetPointProperty
              ((FPCGAttributePropertySelector *)&this[2]._padding_,Position,true);
    FString::FString(&local_28,"$Rotation.Up");
    FPCGAttributePropertySelector::Update
              ((FPCGAttributePropertySelector *)&this[1].OverriddenSettingsPropertyBag,&local_28);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// InternalVTableHelperCtorCaller<UPCGClipPathsSettings> @ 149c45bb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGClipPathsSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGClipPathsSettings::GetPrivateStaticClass();
  this = (UPCGSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPCGClipPathsSettings__6B_;
    this[1]._padding_ = 0x3ff0000000000000;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGCreatePolygon2DSettings> @ 149c45c80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGCreatePolygon2DSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGCreatePolygon2DSettings::GetPrivateStaticClass();
  this = (UPCGSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPCGCreatePolygon2DSettings__6B_;
    FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
              ((FPCGAttributePropertyInputSelector *)&this[1]._padding_);
    *(undefined1 *)&this[1]._padding_ = 0;
    FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
              ((FPCGAttributePropertyInputSelector *)&this[1].Seed);
    this[1].CacheLock.CriticalSection.Opaque3[1] = (void *)0x4059000000000000;
    this[1].CacheLock.CriticalSection.Opaque3[2] = &DAT_3ff0000000000000;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGGenericUserParameterGetSettings> @ 149c45d80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGGenericUserParameterGetSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGGenericUserParameterGetSettings::GetPrivateStaticClass();
  this = (UPCGSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0x100;
    this->_padding_ = (longlong)&___7UPCGGenericUserParameterGetSettings__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGGetLandscapeSettings> @ 149c45e50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGGetLandscapeSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGDataFromActorSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGGetLandscapeSettings::GetPrivateStaticClass();
  this = (UPCGDataFromActorSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGDataFromActorSettings *)0x0) {
    UPCGDataFromActorSettings::UPCGDataFromActorSettings(this,param_1);
    this->_padding_ = (longlong)&___7UPCGGetLandscapeSettings__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x100;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0x100;
    *(undefined1 *)((longlong)&this[1]._padding_ + 6) = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGGetPCGComponentSettings> @ 149c45f20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGGetPCGComponentSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGDataFromActorSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGGetPCGComponentSettings::GetPrivateStaticClass();
  this = (UPCGDataFromActorSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGDataFromActorSettings *)0x0) {
    UPCGDataFromActorSettings::UPCGDataFromActorSettings(this,param_1);
    this->_padding_ = (longlong)&___7UPCGGetPCGComponentSettings__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGGetPrimitiveSettings> @ 149c45fd0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGGetPrimitiveSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGDataFromActorSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGGetPrimitiveSettings::GetPrivateStaticClass();
  this = (UPCGDataFromActorSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGDataFromActorSettings *)0x0) {
    UPCGDataFromActorSettings::UPCGDataFromActorSettings(this,param_1);
    this->_padding_ = (longlong)&___7UPCGGetPrimitiveSettings__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGGetSegmentSettings> @ 149c46080

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGGetSegmentSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGGetSegmentSettings::GetPrivateStaticClass();
  this = (UPCGSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPCGGetSegmentSettings__6B_;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
              ((FPCGAttributePropertyInputSelector *)&this[1]._padding_);
    *(undefined4 *)&this[1]._padding_ = 0;
    FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
              ((FPCGAttributePropertyInputSelector *)&this[1].Seed);
    *(undefined4 *)(this[1].CacheLock.CriticalSection.Opaque3 + 1) = 0xffffffff;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGGetSplineSettings> @ 149c46160

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGGetSplineSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGDataFromActorSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGGetSplineSettings::GetPrivateStaticClass();
  this = (UPCGDataFromActorSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGDataFromActorSettings *)0x0) {
    UPCGDataFromActorSettings::UPCGDataFromActorSettings(this,param_1);
    this->_padding_ = (longlong)&___7UPCGGetSplineSettings__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGGetVirtualTextureSettings> @ 149c46210

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGGetVirtualTextureSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGDataFromActorSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGGetVirtualTextureSettings::GetPrivateStaticClass();
  this = (UPCGDataFromActorSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGDataFromActorSettings *)0x0) {
    UPCGDataFromActorSettings::UPCGDataFromActorSettings(this,param_1);
    this->_padding_ = (longlong)&___7UPCGGetVirtualTextureSettings__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGGetVolumeSettings> @ 149c462c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGGetVolumeSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGDataFromActorSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGGetVolumeSettings::GetPrivateStaticClass();
  this = (UPCGDataFromActorSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGDataFromActorSettings *)0x0) {
    UPCGDataFromActorSettings::UPCGDataFromActorSettings(this,param_1);
    this->_padding_ = (longlong)&___7UPCGGetVolumeSettings__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGReverseSplineSettings> @ 149c46370

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGReverseSplineSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGReverseSplineSettings::GetPrivateStaticClass();
  this = (UPCGSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPCGReverseSplineSettings__6B_;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGSpawnActorNode> @ 149c46430

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGSpawnActorNode>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGBaseSubgraphNode *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGSpawnActorNode::GetPrivateStaticClass();
  this = (UPCGBaseSubgraphNode *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGBaseSubgraphNode *)0x0) {
    UPCGBaseSubgraphNode::UPCGBaseSubgraphNode(this,param_1);
    *(undefined ***)this = &___7UPCGSpawnActorNode__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGSpawnActorSettings> @ 149c464e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGSpawnActorSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGBaseSubgraphSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGSpawnActorSettings::GetPrivateStaticClass();
  this = (UPCGBaseSubgraphSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGBaseSubgraphSettings *)0x0) {
    UPCGBaseSubgraphSettings::UPCGBaseSubgraphSettings(this,param_1);
    *(undefined4 *)&this[1].field_0x10 = 0x100;
    *(undefined ***)this = &___7UPCGSpawnActorSettings__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)&this[1].field_0x30 = 0;
    *(undefined8 *)&this[1].field_0x38 = 0;
    *(undefined8 *)&this[1].field_0x58 = 0;
    *(undefined8 *)&this[1].field_0x60 = 0;
    *(undefined8 *)&this[1].field_0x40 = 0;
    *(undefined8 *)&this[1].field_0x50 = 0;
    *(undefined8 *)&this[1].field_0x48 = 0;
    FUtf8String::Reset((FUtf8String *)&this[1].field_0x58,0);
    *(undefined4 *)&this[1].field_0x68 = 1;
    this[1].field_0x6c = 0;
    *(undefined8 *)&this[1].field_0x70 = 0;
    *(undefined2 *)&this[1].field_0x78 = 1;
    FPCGDataLayerSettings::FPCGDataLayerSettings((FPCGDataLayerSettings *)&this[1].field_0x80);
    this[3].field_0x40 = 0;
    *(undefined8 *)&this[3].field_0x48 = 0;
    *(undefined8 *)&this[3].field_0x50 = 0;
    this[3].field_0x58 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGSpawnSplineMeshSettings> @ 149c46640

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGSpawnSplineMeshSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGSpawnSplineMeshSettings::GetPrivateStaticClass();
  this = (UPCGSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    this->_padding_ = (longlong)&___7UPCGSpawnSplineMeshSettings__6B_;
    FSoftSplineMeshComponentDescriptor::FSoftSplineMeshComponentDescriptor
              ((FSoftSplineMeshComponentDescriptor *)(this + 1));
    FPCGSplineMeshParams::FPCGSplineMeshParams
              ((FPCGSplineMeshParams *)&this[3].bHasAnyOverridableHardReferences);
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[5]._padding_,0);
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    *(undefined1 *)&this[5]._padding_ = 0;
    this[5].Seed = 0;
    this[5].bExecutionDependencyRequired = false;
    *(undefined3 *)&this[5].field_0x55 = 0;
    this[5].OriginalSettings = (UPCGSettings *)0x0;
    *(undefined8 *)&this[5].bUseSeed = 0;
    this[5].CachedElement.Object = (IPCGElement *)0x0;
    this[5].CachedElement.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[5].CacheLock.CriticalSection.Opaque1[0] = (void *)0x0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGSpawnSplineSettings> @ 149c46770

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGSpawnSplineSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGSpawnSplineSettings::GetPrivateStaticClass();
  this = (UPCGSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    this->_padding_ = (longlong)&___7UPCGSpawnSplineSettings__6B_;
    pUVar2 = Z_Construct_UClass_USplineComponent_NoRegister();
    this[1]._padding_ = (longlong)pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    *(undefined1 *)&this[1]._padding_ = 0;
    FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
              ((FPCGAttributePropertyInputSelector *)&this[1]._padding_);
    this[1].Seed = 0;
    this[1].bExecutionDependencyRequired = false;
    *(undefined3 *)&this[1].field_0x55 = 0;
    this[1].CachedElement.Object = (IPCGElement *)0x0;
    this[1].CachedElement.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    *(undefined8 *)&this[1].bUseSeed = 0;
    this[1].OriginalSettings = (UPCGSettings *)0x0;
    FUtf8String::Reset((FUtf8String *)&this[1].CachedElement,0);
    this[1].CacheLock.CriticalSection.Opaque1[0] = (void *)0x0;
    this[1].CacheLock.CriticalSection.Opaque2[0] = 0;
    this[1].CacheLock.CriticalSection.Opaque2[1] = 0;
    this[1].CacheLock.CriticalSection.Opaque3[0] = (void *)0x0;
    this[1].CacheLock.CriticalSection.Opaque3[1] = (void *)0x0;
    *(undefined1 *)(this[1].CacheLock.CriticalSection.Opaque3 + 2) = 1;
    *(FName *)((longlong)this[1].CacheLock.CriticalSection.Opaque3 + 0x14) =
         PCGAddComponentConstants::ComponentReferenceAttribute;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGSplineIntersectionSettings> @ 149c468b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGSplineIntersectionSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGSplineIntersectionSettings::GetPrivateStaticClass();
  this = (UPCGSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0x101;
    this->_padding_ = (longlong)&___7UPCGSplineIntersectionSettings__6B_;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector
              ((FPCGAttributePropertyOutputSelector *)&this[1]._padding_);
    FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector
              ((FPCGAttributePropertyOutputSelector *)&this[1]._padding_);
    this[1].CacheLock.CriticalSection.Opaque3[0] = (void *)0x4024000000000000;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGSplineSamplerSettings> @ 149c469a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGSplineSamplerSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGSplineSamplerSettings::GetPrivateStaticClass();
  this = (UPCGSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    this->_padding_ = (longlong)&___7UPCGSplineSamplerSettings__6B_;
    FPCGSplineSamplerParams::FPCGSplineSamplerParams((FPCGSplineSamplerParams *)(this + 1));
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGSplitPointsSettings> @ 149c46a60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGSplitPointsSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGSplitPointsSettings::GetPrivateStaticClass();
  this = (UPCGSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0x3f000000;
    this->_padding_ = (longlong)&___7UPCGSplitPointsSettings__6B_;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 2;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGSplitSplinesSettings> @ 149c46b20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGSplitSplinesSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGSplitSplinesSettings::GetPrivateStaticClass();
  this = (UPCGSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 2;
    this->_padding_ = (longlong)&___7UPCGSplitSplinesSettings__6B_;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 1;
    this[1]._padding_ = 0x3fe0000000000000;
    FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
              ((FPCGAttributePropertyInputSelector *)&this[1]._padding_);
    *(undefined1 *)&this[1].Seed = 1;
    FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector
              ((FPCGAttributePropertyOutputSelector *)&this[1].OriginalSettings);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGStaticMeshSpawnerKernel> @ 149c46c10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGStaticMeshSpawnerKernel>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGComputeKernel *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGStaticMeshSpawnerKernel::GetPrivateStaticClass();
  this = (UPCGComputeKernel *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGComputeKernel *)0x0) {
    UPCGComputeKernel::UPCGComputeKernel(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPCGStaticMeshSpawnerKernel__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGStaticMeshSpawnerSettings> @ 149c46cd0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGStaticMeshSpawnerSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGStaticMeshSpawnerSettings::GetPrivateStaticClass();
  this = (UPCGSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UPCGStaticMeshSpawnerSettings__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 1;
    *(undefined8 *)&this[1].bUseSeed = 0;
    this[1].CachedElement.Object = (IPCGElement *)0x0;
    this[1]._padding_ = 0;
    this[1].OriginalSettings = (UPCGSettings *)0x0;
    this[1].Seed = 0;
    this[1].bExecutionDependencyRequired = false;
    *(undefined3 *)&this[1].field_0x55 = 0;
    FUtf8String::Reset((FUtf8String *)&this[1].bUseSeed,0);
    this[1].CachedElement.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[1].CacheLock.CriticalSection.Opaque1[0] = (void *)0x0;
    this[1].CacheLock.CriticalSection.Opaque2[0] = 0x1000100;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGSurfaceSamplerSettings> @ 149c46e00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGSurfaceSamplerSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGSurfaceSamplerSettings::GetPrivateStaticClass();
  this = (UPCGSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0x3dcccccd;
    this->_padding_ = (longlong)&___7UPCGSurfaceSamplerSettings__6B_;
    this[1]._padding_ = 0x4049000000000000;
    this[1]._padding_ = 0x4049000000000000;
    this[1]._padding_ = 0x4049000000000000;
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0x100;
    *(undefined4 *)&this[1]._padding_ = 0x3f000000;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGTextureSamplerSettings> @ 149c46f00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGTextureSamplerSettings>(FVTableHelper *param_1)

{
  TVector2<double> TVar1;
  double dVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UPCGSettings *this;
  UPCGSettings *pUVar5;
  undefined8 local_res10;
  
  pUVar5 = (UPCGSettings *)0x0;
  local_res10 = 0;
  pUVar3 = GetTransientPackageAsObject();
  pUVar4 = UPCGTextureSamplerSettings::GetPrivateStaticClass();
  this = (UPCGSettings *)
         StaticAllocateObject
                   (pUVar4,pUVar3,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    this->_padding_ = (longlong)&___7UPCGTextureSamplerSettings__6B_;
    dVar2 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar2;
    dVar2 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar2;
    dVar2 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]
    ;
    this[1]._padding_ = (longlong)dVar2;
    dVar2 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]
    ;
    this[1]._padding_ = (longlong)dVar2;
    *(double (*) [2])&this[1]._padding_ =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    *(double (*) [2])&this[1].OriginalSettings =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    this[1].CacheLock.CriticalSection.Opaque2[0] = 0;
    this[1].CacheLock.CriticalSection.Opaque2[1] = 0x3ff00000;
    this[1].CacheLock.CriticalSection.Opaque3[0] = &DAT_3ff0000000000000;
    *(undefined1 *)&this[1].CachedElement.Object = 0;
    *(undefined4 *)((longlong)&this[1].CachedElement.Object + 4) = 0;
    *(undefined2 *)&this[1].CachedElement.SharedReferenceCount.ReferenceController = 0x301;
    *(undefined1 *)((longlong)&this[1].CachedElement.SharedReferenceCount.ReferenceController + 2) =
         1;
    *(undefined4 *)((longlong)&this[1].CachedElement.SharedReferenceCount.ReferenceController + 4) =
         0x42480000;
    *(undefined1 *)this[1].CacheLock.CriticalSection.Opaque1 = 0;
    TVar1 = UE::Math::TVector2<double>::ZeroVector;
    *(undefined4 *)&this[1].CachedOverridableParams.AllocatorInstance.Data = 0;
    *(undefined1 *)((longlong)&this[1].CachedOverridableParams.AllocatorInstance.Data + 4) = 0;
    ((TVector2<double>_u_0 *)(this[1].CacheLock.CriticalSection.Opaque3 + 1))->_s_0 =
         (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
    this[1].CachedOverridableParams.ArrayNum = 0;
    this[1].CachedOverridableParams.ArrayMax = -0x40200000;
    this[1].OverriddenSettingsPropertyBag.field0_0x0.DebugPtr = (UPropertyBag *)0xbfe0000000000000;
    *(undefined2 *)&this[2]._padding_ = 0;
    this[1].bHasAnyOverridableHardReferences = false;
    this[1].bExecuteOnGPU = false;
    this[1].bDumpCookedHLSL = false;
    this[1].bDumpDataDescriptions = false;
    this[1].bPrintShaderDebugValues = false;
    *(undefined3 *)&this[1].field_0xbd = 0x3fe000;
    *(undefined8 *)&this[1].DebugBufferSize = 0x3fe0000000000000;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[2]._padding_,0);
    local_res10 = 0;
    FSoftObjectPtr::operator=((FSoftObjectPtr *)&this[2]._padding_,(FObjectPtr)&local_res10);
    pUVar5 = this;
  }
  return (UObject *)pUVar5;
}

// InternalVTableHelperCtorCaller<UPCGTransformPointsSettings> @ 149c470e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGTransformPointsSettings>(FVTableHelper *param_1)

{
  undefined8 uVar1;
  double dVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UPCGSettings *this;
  
  pUVar3 = GetTransientPackageAsObject();
  pUVar4 = UPCGTransformPointsSettings::GetPrivateStaticClass();
  this = (UPCGSettings *)
         StaticAllocateObject
                   (pUVar4,pUVar3,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPCGTransformPointsSettings__6B_;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    this[1]._padding_ = uVar1;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    this[1]._padding_ = uVar1;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined1 *)&this[1]._padding_ = 0;
    dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    this[1]._padding_ = (longlong)UE::Math::TRotator<double>::ZeroRotator.Pitch;
    *(double *)&this[1].Seed = dVar2;
    this[1].OriginalSettings = (UPCGSettings *)UE::Math::TRotator<double>::ZeroRotator.Roll;
    dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    *(double *)&this[1].bUseSeed = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    this[1].CachedElement.Object = (IPCGElement *)dVar2;
    this[1].CachedElement.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)UE::Math::TRotator<double>::ZeroRotator.Roll;
    *(undefined1 *)this[1].CacheLock.CriticalSection.Opaque1 = 0;
    uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    *(double *)this[1].CacheLock.CriticalSection.Opaque2 =
         UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    this[1].CacheLock.CriticalSection.Opaque3[0] = (void *)uVar1;
    this[1].CacheLock.CriticalSection.Opaque3[1] =
         (void *)UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    this[1].CacheLock.CriticalSection.Opaque3[2] =
         (void *)UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    this[1].CachedOverridableParams.AllocatorInstance.Data = (FScriptContainerElement *)uVar1;
    *(double *)&this[1].CachedOverridableParams.ArrayNum =
         UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    *(undefined2 *)&this[1].OverriddenSettingsPropertyBag.field0_0x0 = 0x100;
    *(undefined1 *)((longlong)&this[1].OverriddenSettingsPropertyBag.field0_0x0 + 2) = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGUnionSettings> @ 149c47270

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGUnionSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGSettingsWithDynamicInputs *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGUnionSettings::GetPrivateStaticClass();
  this = (UPCGSettingsWithDynamicInputs *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSettingsWithDynamicInputs *)0x0) {
    UPCGSettingsWithDynamicInputs::UPCGSettingsWithDynamicInputs(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPCGUnionSettings__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGUserParameterGetSettings> @ 149c47330

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGUserParameterGetSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGUserParameterGetSettings::GetPrivateStaticClass();
  this = (UPCGSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0x100;
    this->_padding_ = (longlong)&___7UPCGUserParameterGetSettings__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGVisualizeAttributeSettings> @ 149c47400

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGVisualizeAttributeSettings>(FVTableHelper *param_1)

{
  FColor FVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UPCGSettings *this;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UPCGVisualizeAttributeSettings::GetPrivateStaticClass();
  this = (UPCGSettings *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    this->_padding_ = (longlong)&___7UPCGVisualizeAttributeSettings__6B_;
    FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
              ((FPCGAttributePropertyInputSelector *)(this + 1));
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].OriginalSettings = (UPCGSettings *)0x0;
    *(undefined8 *)&this[1].bUseSeed = 0;
    this[1].CachedElement.Object = (IPCGElement *)0x0;
    *(undefined2 *)&this[1].Seed = 1;
    FVar1 = FColor::Cyan;
    this[1].CacheLock.CriticalSection.Opaque1[0] = (void *)0x403e000000000000;
    *(FColor_u_0 *)&this[1].CachedElement.SharedReferenceCount.ReferenceController =
         (FColor_u_0_s_0)FVar1.field0_0x0;
    this[1].CacheLock.CriticalSection.Opaque2[0] = 0x1000;
    *(undefined1 *)(this[1].CacheLock.CriticalSection.Opaque2 + 1) = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGVolumeSamplerSettings> @ 149c47520

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGVolumeSamplerSettings>(FVTableHelper *param_1)

{
  undefined8 uVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UPCGSettings *this;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UPCGVolumeSamplerSettings::GetPrivateStaticClass();
  this = (UPCGSettings *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    this->_padding_ = (longlong)&___7UPCGVolumeSamplerSettings__6B_;
    uVar1 = PCGVolumeSampler::DefaultVoxelSize.field0_0x0._s_0.Y;
    this[1]._padding_ = (longlong)PCGVolumeSampler::DefaultVoxelSize.field0_0x0._s_0.X;
    this[1]._padding_ = uVar1;
    this[1]._padding_ = (longlong)PCGVolumeSampler::DefaultVoxelSize.field0_0x0._s_0.Z;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f000000;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGWorldQuerySettings> @ 149c47600

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EPCGWorldQueryFilter": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGWorldQuerySettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGSettings *this;
  UPCGSettings *pUVar3;
  
  pUVar3 = (UPCGSettings *)0x0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGWorldQuerySettings::GetPrivateStaticClass();
  this = (UPCGSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    this->_padding_ = (longlong)&___7UPCGWorldQuerySettings__6B_;
    FPCGWorldCommonQueryParams::FPCGWorldCommonQueryParams((FPCGWorldCommonQueryParams *)(this + 1))
    ;
    *(undefined1 *)&this[2]._padding_ = 1;
    pUVar3 = this;
  }
  return (UObject *)pUVar3;
}

// InternalVTableHelperCtorCaller<UPCGWorldRayHitSettings> @ 149c476c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGWorldRayHitSettings>(FVTableHelper *param_1)

{
  undefined8 uVar1;
  double dVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UPCGSettings *this;
  
  pUVar3 = GetTransientPackageAsObject();
  pUVar4 = UPCGWorldRayHitSettings::GetPrivateStaticClass();
  this = (UPCGSettings *)
         StaticAllocateObject
                   (pUVar4,pUVar3,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    this->_padding_ = (longlong)&___7UPCGWorldRayHitSettings__6B_;
    *(undefined1 *)&this[1]._padding_ = 0;
    uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    this[1]._padding_ = uVar1;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    *(undefined4 *)&this[1]._padding_ = 0x42c80000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x42c80000;
    *(undefined4 *)&this[1]._padding_ = 0x42c80000;
    dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    this[1]._padding_ = (longlong)UE::Math::TRotator<double>::ZeroRotator.Pitch;
    this[1]._padding_ = (longlong)dVar2;
    this[1]._padding_ = (longlong)UE::Math::TRotator<double>::ZeroRotator.Roll;
    FPCGWorldRayHitQueryParams::FPCGWorldRayHitQueryParams
              ((FPCGWorldRayHitQueryParams *)&this[1]._padding_);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGWorldRaycastElementSettings> @ 149c477e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EPCGWorldQueryFilter": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGWorldRaycastElementSettings>(FVTableHelper *param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  double dVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  UPCGSettings *this;
  UPCGSettings *pUVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  pUVar6 = (UPCGSettings *)0x0;
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = UPCGWorldRaycastElementSettings::GetPrivateStaticClass();
  this = (UPCGSettings *)
         StaticAllocateObject
                   (pUVar5,pUVar4,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    this->_padding_ = (longlong)&___7UPCGWorldRaycastElementSettings__6B_;
    *(undefined1 *)&this[1]._padding_ = 0;
    uVar2 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    this[1]._padding_ = uVar2;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    *(undefined4 *)&this[1]._padding_ = 0x42c80000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x42c80000;
    *(undefined4 *)&this[1]._padding_ = 0x42c80000;
    dVar3 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    this[1]._padding_ = (longlong)UE::Math::TRotator<double>::ZeroRotator.Pitch;
    this[1]._padding_ = (longlong)dVar3;
    this[1]._padding_ = (longlong)UE::Math::TRotator<double>::ZeroRotator.Roll;
    *(undefined1 *)&this[1]._padding_ = 0;
    FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
              ((FPCGAttributePropertyInputSelector *)&this[1].Seed);
    uVar2 = __xmm_80000000000000008000000000000000;
    *(undefined1 *)(this[1].CacheLock.CriticalSection.Opaque3 + 1) = 0;
    uVar7 = (uint)uVar2;
    uVar11 = SUB84(UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z,0);
    uVar1 = (ulonglong)UE::Math::TVector<double>::ZAxisVector.field0_0x0._16_8_ >> 0x20;
    uVar8 = (uint)((ulonglong)uVar2 >> 0x20);
    uVar9 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._8_4_ ^ uVar7;
    uVar10 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._12_4_ ^ uVar8;
    this[1].CacheLock.CriticalSection.Opaque3[2] =
         (void *)CONCAT44(UE::Math::TVector<double>::ZAxisVector.field0_0x0._4_4_ ^ uVar8,
                          UE::Math::TVector<double>::ZAxisVector.field0_0x0._0_4_ ^ uVar7);
    this[1].CachedOverridableParams.AllocatorInstance.Data =
         (FScriptContainerElement *)CONCAT44(uVar10,uVar9);
    this[1].CachedOverridableParams.ArrayNum = uVar11 ^ uVar7;
    this[1].CachedOverridableParams.ArrayMax = (uint)uVar1 ^ uVar8;
    FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
              ((FPCGAttributePropertyInputSelector *)&this[1].OverriddenSettingsPropertyBag);
    FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
              ((FPCGAttributePropertyInputSelector *)&this[2]._padding_);
    *(undefined1 *)&this[2].CachedElement.Object = 0;
    this[2].CachedElement.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x40f86a0000000000;
    FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
              ((FPCGAttributePropertyInputSelector *)&this[2].CacheLock);
    FPCGWorldCommonQueryParams::FPCGWorldCommonQueryParams
              ((FPCGWorldCommonQueryParams *)&this[2].bHasAnyOverridableHardReferences);
    this[3].bExecuteOnGPU = (bool)(this[3].bExecuteOnGPU & 0x80);
    *(byte *)&this[3].DebugBufferSize = (byte)this[3].DebugBufferSize & 0xfe;
    this[3].bHasAnyOverridableHardReferences = false;
    *(undefined4 *)&this[3].bPrintShaderDebugValues = 0;
    *(undefined4 *)&this[3].field_0xc4 = 0;
    *(undefined2 *)&this[4]._padding_ = 0;
    pUVar6 = this;
  }
  return (UObject *)pUVar6;
}

// IntroSortInternal<double,int,FIdentityFunctor,TDereferenceWrapper<double,`FPCGSplitSplineElement::ExecuteInternal'::__l17::<lambda_3>_>_> @ 149c479c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<double,int,FIdentityFunctor,TDereferenceWrapper<double,_FPCGSplitSplineElement::ExecuteInternal_::__l17::<lambda_3>_>_>
          (double *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<double,_public:_virtual_bool___cdecl_FPCGSplitSplineElement::ExecuteInternal(FPCGContext_*)const_::_17_::<lambda_3>_>
          param_4)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  double *pdVar4;
  double *pdVar5;
  double **ppdVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  double *local_338;
  double *local_328;
  double *local_320;
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
    ppdVar6 = &local_328;
    do {
      pdVar8 = ppdVar6[1];
      pdVar5 = *ppdVar6;
      pdVar1 = ppdVar6[2];
      iVar3 = (int)((longlong)pdVar8 - (longlong)pdVar5 >> 3) + 1;
      local_338._0_4_ = (int)pdVar1;
      pdVar9 = pdVar5;
      if ((int)local_338 != 0) {
LAB_149c47a70:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          pdVar4 = pdVar8 + 1;
          dVar2 = pdVar9[iVar3 >> 1];
          pdVar9[iVar3 >> 1] = *pdVar9;
          *pdVar9 = dVar2;
          pdVar5 = pdVar9;
LAB_149c47aa0:
          pdVar5 = pdVar5 + 1;
          if (pdVar5 <= pdVar8) goto code_r0x000149c47aa9;
          goto LAB_149c47ab4;
        }
        if (pdVar9 < pdVar8) {
          pdVar1 = pdVar9 + 1;
          do {
            pdVar5 = pdVar9;
            if (pdVar1 <= pdVar8) {
              pdVar4 = pdVar1;
              if (0x1f < ((longlong)pdVar8 + (8 - (longlong)pdVar1) & 0xfffffffffffffff8U)) {
                do {
                  dVar2 = *pdVar5;
                  if (*pdVar5 < *pdVar4) {
                    pdVar5 = pdVar4;
                    dVar2 = *pdVar4;
                  }
                  if (dVar2 < pdVar4[1]) {
                    pdVar5 = pdVar4 + 1;
                  }
                  dVar2 = *pdVar5;
                  if (*pdVar5 < pdVar4[2]) {
                    pdVar5 = pdVar4 + 2;
                    dVar2 = pdVar4[2];
                  }
                  if (dVar2 < pdVar4[3]) {
                    pdVar5 = pdVar4 + 3;
                  }
                  pdVar4 = pdVar4 + 4;
                } while (pdVar4 <= pdVar8 + -3);
              }
              for (; pdVar4 <= pdVar8; pdVar4 = pdVar4 + 1) {
                if (*pdVar5 < *pdVar4) {
                  pdVar5 = pdVar4;
                }
              }
            }
            dVar2 = *pdVar5;
            pdVar4 = pdVar8 + -1;
            *pdVar5 = *pdVar8;
            *pdVar8 = dVar2;
            pdVar8 = pdVar4;
          } while (pdVar9 < pdVar4);
        }
        goto LAB_149c47b79;
      }
LAB_149c47b68:
      local_338 = pdVar1;
      HeapSortInternal<double,int,FIdentityFunctor,TDereferenceWrapper<double,_FPCGSplitSplineElement::ExecuteInternal_::__l17::<lambda_3>_>_>
                (pdVar5,iVar3,param_3,param_4);
LAB_149c47b79:
      ppdVar6 = ppdVar6 + -3;
    } while (&local_328 <= ppdVar6);
  }
  return;
code_r0x000149c47aa9:
  if (*pdVar5 < *pdVar9 || *pdVar5 == *pdVar9) goto LAB_149c47aa0;
LAB_149c47ab4:
  do {
    pdVar7 = pdVar4;
    pdVar4 = pdVar7 + -1;
    if (pdVar4 <= pdVar9) break;
  } while (*pdVar9 < *pdVar4 || *pdVar9 == *pdVar4);
  if (pdVar5 <= pdVar4) {
    dVar2 = *pdVar5;
    *pdVar5 = *pdVar4;
    *pdVar4 = dVar2;
    goto LAB_149c47aa0;
  }
  dVar2 = *pdVar9;
  *pdVar9 = *pdVar4;
  *pdVar4 = dVar2;
  local_338._0_4_ = (int)local_338 + -1;
  if ((longlong)((longlong)pdVar4 + (-8 - (longlong)pdVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)pdVar8 - (longlong)pdVar5 & 0xfffffffffffffff8U)) {
    if (pdVar5 < pdVar8) {
      *ppdVar6 = pdVar5;
      ppdVar6[1] = pdVar8;
      *(int *)(ppdVar6 + 2) = (int)local_338;
      ppdVar6 = ppdVar6 + 3;
    }
    if (pdVar4 <= pdVar9 + 1) goto LAB_149c47b79;
    pdVar8 = pdVar7 + -2;
    pdVar5 = pdVar9;
  }
  else {
    if (pdVar9 + 1 < pdVar4) {
      *ppdVar6 = pdVar9;
      ppdVar6[1] = pdVar7 + -2;
      *(int *)(ppdVar6 + 2) = (int)local_338;
      ppdVar6 = ppdVar6 + 3;
    }
    if (pdVar8 <= pdVar5) goto LAB_149c47b79;
  }
  iVar3 = (int)((longlong)pdVar8 - (longlong)pdVar5 >> 3) + 1;
  pdVar9 = pdVar5;
  if ((int)local_338 == 0) goto LAB_149c47b68;
  goto LAB_149c47a70;
}

// IntroSortInternal<UE::Math::TVector2<double>,int,FIdentityFunctor,TDereferenceWrapper<UE::Math::TVector2<double>,``PCGSplineSamplerHelpers::SampleInteriorData'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>_>_> @ 149c47c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<UE::Math::TVector2<double>,int,FIdentityFunctor,TDereferenceWrapper<UE::Math::TVector2<double>,__PCGSplineSamplerHelpers::SampleInteriorData_::__l2::<lambda_1>::operator()_::__l5::<lambda_1>_>_>
          (TVector2<double> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UE::Math::TVector2<double>,_public:___cdecl__void___cdecl_PCGSplineSamplerHelpers::SampleInteriorData(FPCGContext_*,UPCGPolyLineData_const_*,UPCGSpatialData_const_*,UPCGSpatialData_const_*,FPCGProjectionParams_const_&,FPCGSplineSamplerParams_const_&,UPCGBasePointData_*)_::_2_::<lambda_1>::operator()(int)const_::_5_::<lambda_1>_>
          param_4)

{
  TVector2<double> *pTVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  TVector2<double> *pTVar7;
  TVector2<double> *pTVar8;
  TVector2<double> *pTVar9;
  TVector2<double> **ppTVar10;
  TVector2<double> *pTVar11;
  TVector2<double> *pTVar12;
  TVector2<double> *pTVar13;
  float fVar14;
  undefined1 auStack_368 [48];
  TVector2<double> *local_338;
  TVector2<double> *local_328;
  TVector2<double> *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar14 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar14;
    memset(local_310,0,0x2e8);
    ppTVar10 = &local_328;
    do {
      pTVar12 = ppTVar10[1];
      pTVar7 = *ppTVar10;
      pTVar1 = ppTVar10[2];
      iVar6 = (int)((longlong)pTVar12 - (longlong)pTVar7 >> 4) + 1;
      local_338._0_4_ = (int)pTVar1;
      pTVar13 = pTVar7;
      if ((int)local_338 != 0) {
LAB_149c47d40:
        if (8 < iVar6) {
          dVar2 = (pTVar13->field0_0x0)._s_0.Y;
          pTVar9 = pTVar12 + 1;
          dVar3 = pTVar13[iVar6 / 2].field0_0x0._s_0.X;
          dVar4 = pTVar13[iVar6 / 2].field0_0x0._s_0.Y;
          pTVar13[iVar6 / 2].field0_0x0._s_0.X = (pTVar13->field0_0x0)._s_0.X;
          pTVar13[iVar6 / 2].field0_0x0._s_0.Y = dVar2;
          (pTVar13->field0_0x0)._s_0.X = dVar3;
          (pTVar13->field0_0x0)._s_0.Y = dVar4;
          pTVar7 = pTVar13;
LAB_149c47d70:
          pTVar8 = pTVar7;
          pTVar7 = pTVar8 + 1;
          if (pTVar7 <= pTVar12) goto code_r0x000149c47d79;
          goto LAB_149c47d84;
        }
        if (pTVar13 < pTVar12) {
          pTVar1 = pTVar13 + 1;
          do {
            pTVar7 = pTVar13;
            if (pTVar1 <= pTVar12) {
              pTVar9 = pTVar1;
              if (0x3f < ((longlong)pTVar12 + (0x10 - (longlong)pTVar1) & 0xfffffffffffffff0U)) {
                do {
                  dVar3 = (pTVar7->field0_0x0)._s_0.X;
                  dVar2 = (pTVar9->field0_0x0)._s_0.X;
                  if (dVar3 < dVar2) {
                    pTVar7 = pTVar9;
                    dVar3 = dVar2;
                  }
                  dVar2 = pTVar9[2].field0_0x0._s_0.X;
                  if (dVar3 < pTVar9[1].field0_0x0._s_0.X) {
                    pTVar7 = pTVar9 + 1;
                  }
                  dVar3 = (pTVar7->field0_0x0)._s_0.X;
                  if (dVar3 < dVar2) {
                    pTVar7 = pTVar9 + 2;
                    dVar3 = dVar2;
                  }
                  if (dVar3 < pTVar9[3].field0_0x0._s_0.X) {
                    pTVar7 = pTVar9 + 3;
                  }
                  pTVar9 = pTVar9 + 4;
                } while (pTVar9 <= pTVar12 + -3);
              }
              for (; pTVar9 <= pTVar12; pTVar9 = pTVar9 + 1) {
                if ((pTVar7->field0_0x0)._s_0.X < (pTVar9->field0_0x0)._s_0.X) {
                  pTVar7 = pTVar9;
                }
              }
            }
            dVar2 = (pTVar7->field0_0x0)._s_0.X;
            dVar3 = (pTVar7->field0_0x0)._s_0.Y;
            pTVar9 = pTVar12 + -1;
            dVar4 = (pTVar12->field0_0x0)._s_0.Y;
            (pTVar7->field0_0x0)._s_0.X = (pTVar12->field0_0x0)._s_0.X;
            (pTVar7->field0_0x0)._s_0.Y = dVar4;
            (pTVar12->field0_0x0)._s_0.X = dVar2;
            (pTVar12->field0_0x0)._s_0.Y = dVar3;
            pTVar12 = pTVar9;
          } while (pTVar13 < pTVar9);
        }
        goto LAB_149c47e47;
      }
LAB_149c47e36:
      local_338 = pTVar1;
      HeapSortInternal<UE::Math::TVector2<double>,int,FIdentityFunctor,TDereferenceWrapper<UE::Math::TVector2<double>,__PCGSplineSamplerHelpers::SampleInteriorData_::__l2::<lambda_1>::operator()_::__l5::<lambda_1>_>_>
                (pTVar7,iVar6,param_3,param_4);
LAB_149c47e47:
      ppTVar10 = ppTVar10 + -3;
    } while (&local_328 <= ppTVar10);
  }
  return;
code_r0x000149c47d79:
  dVar2 = (pTVar7->field0_0x0)._s_0.X;
  if (dVar2 < (pTVar13->field0_0x0)._s_0.X || dVar2 == (pTVar13->field0_0x0)._s_0.X)
  goto LAB_149c47d70;
LAB_149c47d84:
  do {
    pTVar11 = pTVar9;
    pTVar9 = pTVar11 + -1;
    if (pTVar9 <= pTVar13) break;
    dVar2 = (pTVar13->field0_0x0)._s_0.X;
  } while (dVar2 < (pTVar9->field0_0x0)._s_0.X || dVar2 == (pTVar9->field0_0x0)._s_0.X);
  dVar2 = (pTVar9->field0_0x0)._s_0.X;
  dVar3 = pTVar11[-1].field0_0x0._s_0.Y;
  if (pTVar7 <= pTVar9) {
    dVar4 = (pTVar7->field0_0x0)._s_0.X;
    dVar5 = pTVar8[1].field0_0x0._s_0.Y;
    (pTVar7->field0_0x0)._s_0.X = dVar2;
    pTVar8[1].field0_0x0._s_0.Y = dVar3;
    (pTVar9->field0_0x0)._s_0.X = dVar4;
    pTVar11[-1].field0_0x0._s_0.Y = dVar5;
    goto LAB_149c47d70;
  }
  dVar4 = (pTVar13->field0_0x0)._s_0.X;
  dVar5 = (pTVar13->field0_0x0)._s_0.Y;
  local_338._0_4_ = (int)local_338 + -1;
  (pTVar13->field0_0x0)._s_0.X = dVar2;
  (pTVar13->field0_0x0)._s_0.Y = dVar3;
  (pTVar9->field0_0x0)._s_0.X = dVar4;
  pTVar11[-1].field0_0x0._s_0.Y = dVar5;
  if ((longlong)((longlong)pTVar9 + (-0x10 - (longlong)pTVar13) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pTVar12 - (longlong)pTVar7 & 0xfffffffffffffff0U)) {
    if (pTVar7 < pTVar12) {
      *ppTVar10 = pTVar7;
      ppTVar10[1] = pTVar12;
      *(int *)(ppTVar10 + 2) = (int)local_338;
      ppTVar10 = ppTVar10 + 3;
    }
    if (pTVar9 <= pTVar13 + 1) goto LAB_149c47e47;
    pTVar12 = pTVar11 + -2;
    pTVar7 = pTVar13;
  }
  else {
    if (pTVar13 + 1 < pTVar9) {
      *ppTVar10 = pTVar13;
      ppTVar10[1] = pTVar11 + -2;
      *(int *)(ppTVar10 + 2) = (int)local_338;
      ppTVar10 = ppTVar10 + 3;
    }
    if (pTVar12 <= pTVar7) goto LAB_149c47e47;
  }
  iVar6 = (int)((longlong)pTVar12 - (longlong)pTVar7 >> 4) + 1;
  pTVar13 = pTVar7;
  if ((int)local_338 == 0) goto LAB_149c47e36;
  goto LAB_149c47d40;
}

// IntroSortInternal<PCGSplineIntersection::IntersectionPoint,int,FIdentityFunctor,TDereferenceWrapper<PCGSplineIntersection::IntersectionPoint,`FPCGSplineIntersectionElement::ExecuteInternal'::__l75::<lambda_3>_>_> @ 149c47f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<PCGSplineIntersection::IntersectionPoint,int,FIdentityFunctor,TDereferenceWrapper<PCGSplineIntersection::IntersectionPoint,_FPCGSplineIntersectionElement::ExecuteInternal_::__l75::<lambda_3>_>_>
          (IntersectionPoint *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<PCGSplineIntersection::IntersectionPoint,_public:_virtual_bool___cdecl_FPCGSplineIntersectionElement::ExecuteInternal(FPCGContext_*)const_::_75_::<lambda_3>_>
          param_4)

{
  InputData *pIVar1;
  UPCGSplineData *pUVar2;
  InputData *pIVar3;
  UPCGSplineData *pUVar4;
  InputData *pIVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  bool bVar19;
  int iVar20;
  IntersectionPoint *pIVar21;
  IntersectionPoint *pIVar22;
  IntersectionPoint *pIVar23;
  IntersectionPoint **ppIVar24;
  int iVar25;
  IntersectionPoint *pIVar26;
  IntersectionPoint *pIVar27;
  IntersectionPoint *pIVar28;
  float fVar29;
  undefined1 auStack_3b8 [48];
  IntersectionPoint *local_388;
  IntersectionPoint *local_378;
  IntersectionPoint *local_370;
  undefined4 local_368;
  undefined1 local_360 [744];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_3b8;
  if (1 < param_2) {
    local_370 = param_1 + (longlong)param_2 + -1;
    local_378 = param_1;
    fVar29 = logf((float)param_2 * (float)param_2);
    local_368 = (undefined4)(longlong)fVar29;
    memset(local_360,0,0x2e8);
    ppIVar24 = &local_378;
    do {
      pIVar28 = ppIVar24[1];
      pIVar27 = *ppIVar24;
      local_388 = ppIVar24[2];
      iVar20 = (int)(((longlong)pIVar28 - (longlong)pIVar27) / 0x70) + 1;
      pIVar26 = pIVar27;
      iVar25 = (int)local_388;
      if ((int)local_388 != 0) {
LAB_149c48050:
        if (8 < iVar20) {
          pIVar1 = pIVar26->InputA;
          pIVar21 = pIVar28 + 1;
          pIVar27 = pIVar26 + iVar20 / 2;
          pUVar2 = pIVar27->A;
          pIVar3 = pIVar27->InputA;
          pUVar4 = pIVar27->B;
          pIVar5 = pIVar27->InputB;
          dVar6 = (pIVar27->AveragePosition).field0_0x0._s_0.X;
          dVar7 = (pIVar27->AveragePosition).field0_0x0._s_0.Y;
          dVar8 = (pIVar27->AveragePosition).field0_0x0._s_0.Z;
          dVar9 = (pIVar27->PositionA).field0_0x0._s_0.X;
          dVar10 = (pIVar27->PositionA).field0_0x0._s_0.Y;
          dVar11 = (pIVar27->PositionA).field0_0x0._s_0.Z;
          dVar12 = (pIVar27->PositionB).field0_0x0._s_0.X;
          dVar13 = (pIVar27->PositionB).field0_0x0._s_0.Y;
          dVar14 = (pIVar27->PositionB).field0_0x0._s_0.Z;
          fVar17 = pIVar27->InputKeyA;
          fVar18 = pIVar27->InputKeyB;
          pIVar27->A = pIVar26->A;
          pIVar27->InputA = pIVar1;
          pIVar1 = pIVar26->InputB;
          pIVar27->B = pIVar26->B;
          pIVar27->InputB = pIVar1;
          dVar15 = (pIVar26->AveragePosition).field0_0x0._s_0.Y;
          (pIVar27->AveragePosition).field0_0x0._s_0.X =
               (pIVar26->AveragePosition).field0_0x0._s_0.X;
          (pIVar27->AveragePosition).field0_0x0._s_0.Y = dVar15;
          dVar15 = (pIVar26->PositionA).field0_0x0._s_0.X;
          (pIVar27->AveragePosition).field0_0x0._s_0.Z =
               (pIVar26->AveragePosition).field0_0x0._s_0.Z;
          (pIVar27->PositionA).field0_0x0._s_0.X = dVar15;
          dVar15 = (pIVar26->PositionA).field0_0x0._s_0.Z;
          (pIVar27->PositionA).field0_0x0._s_0.Y = (pIVar26->PositionA).field0_0x0._s_0.Y;
          (pIVar27->PositionA).field0_0x0._s_0.Z = dVar15;
          dVar15 = (pIVar26->PositionB).field0_0x0._s_0.Y;
          (pIVar27->PositionB).field0_0x0._s_0.X = (pIVar26->PositionB).field0_0x0._s_0.X;
          (pIVar27->PositionB).field0_0x0._s_0.Y = dVar15;
          fVar29 = pIVar26->InputKeyA;
          fVar16 = pIVar26->InputKeyB;
          (pIVar27->PositionB).field0_0x0._s_0.Z = (pIVar26->PositionB).field0_0x0._s_0.Z;
          pIVar27->InputKeyA = fVar29;
          pIVar27->InputKeyB = fVar16;
          pIVar26->A = pUVar2;
          pIVar26->InputA = pIVar3;
          pIVar26->B = pUVar4;
          pIVar26->InputB = pIVar5;
          (pIVar26->AveragePosition).field0_0x0._s_0.X = dVar6;
          (pIVar26->AveragePosition).field0_0x0._s_0.Y = dVar7;
          (pIVar26->AveragePosition).field0_0x0._s_0.Z = dVar8;
          (pIVar26->PositionA).field0_0x0._s_0.X = dVar9;
          (pIVar26->PositionA).field0_0x0._s_0.Y = dVar10;
          (pIVar26->PositionA).field0_0x0._s_0.Z = dVar11;
          (pIVar26->PositionB).field0_0x0._s_0.X = dVar12;
          (pIVar26->PositionB).field0_0x0._s_0.Y = dVar13;
          (pIVar26->PositionB).field0_0x0._s_0.Z = dVar14;
          pIVar26->InputKeyA = fVar17;
          pIVar26->InputKeyB = fVar18;
          pIVar27 = pIVar26;
LAB_149c480f0:
          pIVar23 = pIVar27;
          pIVar27 = pIVar23 + 1;
          if (pIVar27 <= pIVar28) goto code_r0x000149c480f9;
          goto LAB_149c48110;
        }
        for (; pIVar21 = pIVar26, pIVar27 = pIVar26, pIVar26 < pIVar28; pIVar28 = pIVar28 + -1) {
          while (pIVar23 = pIVar21, pIVar27 = pIVar27 + 1, pIVar27 <= pIVar28) {
            bVar19 = `FPCGSplineIntersectionElement::ExecuteInternal'::__l75::<lambda_3>::
                     operator()<PCGSplineIntersection::IntersectionPoint,PCGSplineIntersection::IntersectionPoint>
                               (param_4.Predicate,pIVar23,pIVar27);
            pIVar21 = pIVar27;
            if (!bVar19) {
              pIVar21 = pIVar23;
            }
          }
          pUVar2 = pIVar23->A;
          pIVar1 = pIVar23->InputA;
          pUVar4 = pIVar23->B;
          pIVar3 = pIVar23->InputB;
          dVar6 = (pIVar23->AveragePosition).field0_0x0._s_0.X;
          dVar7 = (pIVar23->AveragePosition).field0_0x0._s_0.Y;
          pIVar5 = pIVar28->InputA;
          dVar8 = (pIVar23->AveragePosition).field0_0x0._s_0.Z;
          dVar9 = (pIVar23->PositionA).field0_0x0._s_0.X;
          dVar10 = (pIVar23->PositionA).field0_0x0._s_0.Y;
          dVar11 = (pIVar23->PositionA).field0_0x0._s_0.Z;
          dVar12 = (pIVar23->PositionB).field0_0x0._s_0.X;
          dVar13 = (pIVar23->PositionB).field0_0x0._s_0.Y;
          dVar14 = (pIVar23->PositionB).field0_0x0._s_0.Z;
          fVar17 = pIVar23->InputKeyA;
          fVar18 = pIVar23->InputKeyB;
          pIVar23->A = pIVar28->A;
          pIVar23->InputA = pIVar5;
          pIVar5 = pIVar28->InputB;
          pIVar23->B = pIVar28->B;
          pIVar23->InputB = pIVar5;
          dVar15 = (pIVar28->AveragePosition).field0_0x0._s_0.Y;
          (pIVar23->AveragePosition).field0_0x0._s_0.X =
               (pIVar28->AveragePosition).field0_0x0._s_0.X;
          (pIVar23->AveragePosition).field0_0x0._s_0.Y = dVar15;
          dVar15 = (pIVar28->PositionA).field0_0x0._s_0.X;
          (pIVar23->AveragePosition).field0_0x0._s_0.Z =
               (pIVar28->AveragePosition).field0_0x0._s_0.Z;
          (pIVar23->PositionA).field0_0x0._s_0.X = dVar15;
          dVar15 = (pIVar28->PositionA).field0_0x0._s_0.Z;
          (pIVar23->PositionA).field0_0x0._s_0.Y = (pIVar28->PositionA).field0_0x0._s_0.Y;
          (pIVar23->PositionA).field0_0x0._s_0.Z = dVar15;
          dVar15 = (pIVar28->PositionB).field0_0x0._s_0.Y;
          (pIVar23->PositionB).field0_0x0._s_0.X = (pIVar28->PositionB).field0_0x0._s_0.X;
          (pIVar23->PositionB).field0_0x0._s_0.Y = dVar15;
          fVar29 = pIVar28->InputKeyA;
          fVar16 = pIVar28->InputKeyB;
          (pIVar23->PositionB).field0_0x0._s_0.Z = (pIVar28->PositionB).field0_0x0._s_0.Z;
          pIVar23->InputKeyA = fVar29;
          pIVar23->InputKeyB = fVar16;
          pIVar28->A = pUVar2;
          pIVar28->InputA = pIVar1;
          pIVar28->B = pUVar4;
          pIVar28->InputB = pIVar3;
          (pIVar28->AveragePosition).field0_0x0._s_0.X = dVar6;
          (pIVar28->AveragePosition).field0_0x0._s_0.Y = dVar7;
          (pIVar28->AveragePosition).field0_0x0._s_0.Z = dVar8;
          (pIVar28->PositionA).field0_0x0._s_0.X = dVar9;
          (pIVar28->PositionA).field0_0x0._s_0.Y = dVar10;
          (pIVar28->PositionA).field0_0x0._s_0.Z = dVar11;
          (pIVar28->PositionB).field0_0x0._s_0.X = dVar12;
          (pIVar28->PositionB).field0_0x0._s_0.Y = dVar13;
          (pIVar28->PositionB).field0_0x0._s_0.Z = dVar14;
          pIVar28->InputKeyA = fVar17;
          pIVar28->InputKeyB = fVar18;
        }
        goto LAB_149c482f6;
      }
LAB_149c482dd:
      HeapSortInternal<PCGSplineIntersection::IntersectionPoint,int,FIdentityFunctor,TDereferenceWrapper<PCGSplineIntersection::IntersectionPoint,_FPCGSplineIntersectionElement::ExecuteInternal_::__l75::<lambda_3>_>_>
                (pIVar27,iVar20,param_3,param_4);
LAB_149c482f6:
      ppIVar24 = ppIVar24 + -3;
    } while (&local_378 <= ppIVar24);
  }
  return;
code_r0x000149c480f9:
  bVar19 = `FPCGSplineIntersectionElement::ExecuteInternal'::__l75::<lambda_3>::
           operator()<PCGSplineIntersection::IntersectionPoint,PCGSplineIntersection::IntersectionPoint>
                     (param_4.Predicate,pIVar26,pIVar27);
  if (!bVar19) goto LAB_149c480f0;
LAB_149c48110:
  do {
    pIVar22 = pIVar21;
    pIVar21 = pIVar22 + -1;
    if (pIVar21 <= pIVar26) break;
    bVar19 = `FPCGSplineIntersectionElement::ExecuteInternal'::__l75::<lambda_3>::
             operator()<PCGSplineIntersection::IntersectionPoint,PCGSplineIntersection::IntersectionPoint>
                       (param_4.Predicate,pIVar21,pIVar26);
  } while (!bVar19);
  pIVar1 = pIVar22[-1].InputA;
  if (pIVar27 <= pIVar21) {
    pUVar2 = pIVar27->A;
    pIVar3 = pIVar23[1].InputA;
    pUVar4 = pIVar23[1].B;
    pIVar5 = pIVar23[1].InputB;
    dVar6 = pIVar23[1].AveragePosition.field0_0x0._s_0.X;
    dVar7 = pIVar23[1].AveragePosition.field0_0x0._s_0.Y;
    dVar8 = pIVar23[1].AveragePosition.field0_0x0._s_0.Z;
    dVar9 = pIVar23[1].PositionA.field0_0x0._s_0.X;
    dVar10 = pIVar23[1].PositionA.field0_0x0._s_0.Y;
    dVar11 = pIVar23[1].PositionA.field0_0x0._s_0.Z;
    dVar12 = pIVar23[1].PositionB.field0_0x0._s_0.X;
    dVar13 = pIVar23[1].PositionB.field0_0x0._s_0.Y;
    dVar14 = pIVar23[1].PositionB.field0_0x0._s_0.Z;
    fVar17 = pIVar23[1].InputKeyA;
    fVar18 = pIVar23[1].InputKeyB;
    pIVar27->A = pIVar21->A;
    pIVar23[1].InputA = pIVar1;
    pIVar1 = pIVar22[-1].InputB;
    pIVar23[1].B = pIVar22[-1].B;
    pIVar23[1].InputB = pIVar1;
    dVar15 = pIVar22[-1].AveragePosition.field0_0x0._s_0.Y;
    pIVar23[1].AveragePosition.field0_0x0._s_0.X = pIVar22[-1].AveragePosition.field0_0x0._s_0.X;
    pIVar23[1].AveragePosition.field0_0x0._s_0.Y = dVar15;
    dVar15 = pIVar22[-1].PositionA.field0_0x0._s_0.X;
    pIVar23[1].AveragePosition.field0_0x0._s_0.Z = pIVar22[-1].AveragePosition.field0_0x0._s_0.Z;
    pIVar23[1].PositionA.field0_0x0._s_0.X = dVar15;
    dVar15 = pIVar22[-1].PositionA.field0_0x0._s_0.Z;
    pIVar23[1].PositionA.field0_0x0._s_0.Y = pIVar22[-1].PositionA.field0_0x0._s_0.Y;
    pIVar23[1].PositionA.field0_0x0._s_0.Z = dVar15;
    dVar15 = pIVar22[-1].PositionB.field0_0x0._s_0.Y;
    pIVar23[1].PositionB.field0_0x0._s_0.X = pIVar22[-1].PositionB.field0_0x0._s_0.X;
    pIVar23[1].PositionB.field0_0x0._s_0.Y = dVar15;
    fVar29 = pIVar22[-1].InputKeyA;
    fVar16 = pIVar22[-1].InputKeyB;
    pIVar23[1].PositionB.field0_0x0._s_0.Z = pIVar22[-1].PositionB.field0_0x0._s_0.Z;
    pIVar23[1].InputKeyA = fVar29;
    pIVar23[1].InputKeyB = fVar16;
    pIVar21->A = pUVar2;
    pIVar22[-1].InputA = pIVar3;
    pIVar22[-1].B = pUVar4;
    pIVar22[-1].InputB = pIVar5;
    pIVar22[-1].AveragePosition.field0_0x0._s_0.X = dVar6;
    pIVar22[-1].AveragePosition.field0_0x0._s_0.Y = dVar7;
    pIVar22[-1].AveragePosition.field0_0x0._s_0.Z = dVar8;
    pIVar22[-1].PositionA.field0_0x0._s_0.X = dVar9;
    pIVar22[-1].PositionA.field0_0x0._s_0.Y = dVar10;
    pIVar22[-1].PositionA.field0_0x0._s_0.Z = dVar11;
    pIVar22[-1].PositionB.field0_0x0._s_0.X = dVar12;
    pIVar22[-1].PositionB.field0_0x0._s_0.Y = dVar13;
    pIVar22[-1].PositionB.field0_0x0._s_0.Z = dVar14;
    pIVar22[-1].InputKeyA = fVar17;
    pIVar22[-1].InputKeyB = fVar18;
    goto LAB_149c480f0;
  }
  pUVar2 = pIVar26->A;
  pIVar3 = pIVar26->InputA;
  pUVar4 = pIVar26->B;
  pIVar5 = pIVar26->InputB;
  dVar6 = (pIVar26->AveragePosition).field0_0x0._s_0.X;
  dVar7 = (pIVar26->AveragePosition).field0_0x0._s_0.Y;
  iVar25 = iVar25 + -1;
  dVar8 = (pIVar26->AveragePosition).field0_0x0._s_0.Z;
  dVar9 = (pIVar26->PositionA).field0_0x0._s_0.X;
  dVar10 = (pIVar26->PositionA).field0_0x0._s_0.Y;
  dVar11 = (pIVar26->PositionA).field0_0x0._s_0.Z;
  dVar12 = (pIVar26->PositionB).field0_0x0._s_0.X;
  dVar13 = (pIVar26->PositionB).field0_0x0._s_0.Y;
  dVar14 = (pIVar26->PositionB).field0_0x0._s_0.Z;
  fVar17 = pIVar26->InputKeyA;
  fVar18 = pIVar26->InputKeyB;
  pIVar26->A = pIVar21->A;
  pIVar26->InputA = pIVar1;
  pIVar1 = pIVar22[-1].InputB;
  pIVar26->B = pIVar22[-1].B;
  pIVar26->InputB = pIVar1;
  dVar15 = pIVar22[-1].AveragePosition.field0_0x0._s_0.Y;
  (pIVar26->AveragePosition).field0_0x0._s_0.X = pIVar22[-1].AveragePosition.field0_0x0._s_0.X;
  (pIVar26->AveragePosition).field0_0x0._s_0.Y = dVar15;
  dVar15 = pIVar22[-1].PositionA.field0_0x0._s_0.X;
  (pIVar26->AveragePosition).field0_0x0._s_0.Z = pIVar22[-1].AveragePosition.field0_0x0._s_0.Z;
  (pIVar26->PositionA).field0_0x0._s_0.X = dVar15;
  dVar15 = pIVar22[-1].PositionA.field0_0x0._s_0.Z;
  (pIVar26->PositionA).field0_0x0._s_0.Y = pIVar22[-1].PositionA.field0_0x0._s_0.Y;
  (pIVar26->PositionA).field0_0x0._s_0.Z = dVar15;
  dVar15 = pIVar22[-1].PositionB.field0_0x0._s_0.Y;
  (pIVar26->PositionB).field0_0x0._s_0.X = pIVar22[-1].PositionB.field0_0x0._s_0.X;
  (pIVar26->PositionB).field0_0x0._s_0.Y = dVar15;
  fVar29 = pIVar22[-1].InputKeyA;
  fVar16 = pIVar22[-1].InputKeyB;
  (pIVar26->PositionB).field0_0x0._s_0.Z = pIVar22[-1].PositionB.field0_0x0._s_0.Z;
  pIVar26->InputKeyA = fVar29;
  pIVar26->InputKeyB = fVar16;
  pIVar21->A = pUVar2;
  pIVar22[-1].InputA = pIVar3;
  pIVar22[-1].B = pUVar4;
  pIVar22[-1].InputB = pIVar5;
  pIVar22[-1].AveragePosition.field0_0x0._s_0.X = dVar6;
  pIVar22[-1].AveragePosition.field0_0x0._s_0.Y = dVar7;
  pIVar22[-1].AveragePosition.field0_0x0._s_0.Z = dVar8;
  pIVar22[-1].PositionA.field0_0x0._s_0.X = dVar9;
  pIVar22[-1].PositionA.field0_0x0._s_0.Y = dVar10;
  pIVar22[-1].PositionA.field0_0x0._s_0.Z = dVar11;
  pIVar22[-1].PositionB.field0_0x0._s_0.X = dVar12;
  pIVar22[-1].PositionB.field0_0x0._s_0.Y = dVar13;
  pIVar22[-1].PositionB.field0_0x0._s_0.Z = dVar14;
  pIVar22[-1].InputKeyA = fVar17;
  pIVar22[-1].InputKeyB = fVar18;
  if (((longlong)pIVar21 + (-0x70 - (longlong)pIVar26)) / 0x70 <
      ((longlong)pIVar28 - (longlong)pIVar27) / 0x70) {
    if (pIVar27 < pIVar28) {
      *ppIVar24 = pIVar27;
      ppIVar24[1] = pIVar28;
      *(int *)(ppIVar24 + 2) = iVar25;
      ppIVar24 = ppIVar24 + 3;
    }
    if (pIVar21 <= pIVar26 + 1) goto LAB_149c482f6;
    pIVar28 = pIVar22 + -2;
    pIVar27 = pIVar26;
  }
  else {
    if (pIVar26 + 1 < pIVar21) {
      *ppIVar24 = pIVar26;
      ppIVar24[1] = pIVar22 + -2;
      *(int *)(ppIVar24 + 2) = iVar25;
      ppIVar24 = ppIVar24 + 3;
    }
    if (pIVar28 <= pIVar27) goto LAB_149c482f6;
  }
  iVar20 = (int)(((longlong)pIVar28 - (longlong)pIVar27) / 0x70) + 1;
  pIVar26 = pIVar27;
  if (iVar25 == 0) goto LAB_149c482dd;
  goto LAB_149c48050;
}

// IsClassSupported<unsigned_char> @ 149c484d0

bool __cdecl PCGAttributeAccessorKeys::IsClassSupported<unsigned_char>(UStruct *param_1)

{
  return false;
}

// IsClassSupported<FPCGSplineMeshParams> @ 149c484e0

bool __cdecl PCGAttributeAccessorKeys::IsClassSupported<FPCGSplineMeshParams>(UStruct *param_1)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  
  if (param_1 != (UStruct *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FPCGSplineMeshParams.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_PCG();
      Z_Registration_Info_UScriptStruct_FPCGSplineMeshParams.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FPCGSplineMeshParams,(UObject *)pUVar3,
                           L"PCGSplineMeshParams");
      if (Z_Registration_Info_UScriptStruct_FPCGSplineMeshParams.OuterSingleton ==
          (UScriptStruct *)0x0) {
        return false;
      }
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FPCGSplineMeshParams.OuterSingleton)->_padding_;
    if (((int)param_1->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FPCGSplineMeshParams.OuterSingleton)->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      return true;
    }
  }
  return false;
}

// IsClassSupported<FSplineMeshComponentDescriptor> @ 149c48560

bool __cdecl
PCGAttributeAccessorKeys::IsClassSupported<FSplineMeshComponentDescriptor>(UStruct *param_1)

{
  int iVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  
  if (param_1 != (UStruct *)0x0) {
    pUVar3 = FSplineMeshComponentDescriptor::StaticStruct();
    if (pUVar3 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if (((int)param_1->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        return true;
      }
    }
  }
  return false;
}

// IsClassSupported<AActor> @ 149c485c0

bool __cdecl PCGAttributeAccessorKeys::IsClassSupported<AActor>(UStruct *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  
  if (param_1 != (UStruct *)0x0) {
    pUVar3 = Z_Construct_UClass_AActor_NoRegister();
    if (pUVar3 != (UClass *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if (((int)param_1->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        return true;
      }
    }
  }
  return false;
}

// IsClassSupported<USplineComponent> @ 149c48620

bool __cdecl PCGAttributeAccessorKeys::IsClassSupported<USplineComponent>(UStruct *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  
  if (param_1 != (UStruct *)0x0) {
    pUVar3 = Z_Construct_UClass_USplineComponent_NoRegister();
    if (pUVar3 != (UClass *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if (((int)param_1->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        return true;
      }
    }
  }
  return false;
}

// IsClassSupported<USplineMeshComponent> @ 149c48680

bool __cdecl PCGAttributeAccessorKeys::IsClassSupported<USplineMeshComponent>(UStruct *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  
  if (param_1 != (UStruct *)0x0) {
    pUVar3 = Z_Construct_UClass_USplineMeshComponent_NoRegister();
    if (pUVar3 != (UClass *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if (((int)param_1->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        return true;
      }
    }
  }
  return false;
}

// LogFailToGetAttributeError<FSoftObjectPath> @ 149c486e0

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
PCGLog::Metadata::LogFailToGetAttributeError<FSoftObjectPath>
          (FPCGAttributePropertySelector *param_1,IPCGAttributeAccessor *param_2,
          FPCGContext *param_3)

{
  FString *pFVar1;
  FText local_28;
  FString local_18;
  
  pFVar1 = FPCGAttributePropertySelector::ToString(param_1,&local_18,false);
  FText::FromString(&local_28,pFVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  LogFailToGetAttributeError<FSoftObjectPath>(&local_28,param_2,param_3);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return;
}

// NewObject<UPCGDebugDrawComponent> @ 149c48750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGDebugDrawComponent * __cdecl
NewObject<UPCGDebugDrawComponent>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UPCGDebugDrawComponent *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UPCGDebugDrawComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UPCGDebugDrawComponent *)
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

// NewObject<UPCGInstanceDataPackerBase> @ 149c48840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGInstanceDataPackerBase * __cdecl
NewObject<UPCGInstanceDataPackerBase>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UObject *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UPCGInstanceDataPackerBase_NoRegister();
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
  pUVar2 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return (UPCGInstanceDataPackerBase *)pUVar2;
}

// NewObject<UPCGManagedDebugDrawComponent> @ 149c48940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGManagedDebugDrawComponent * __cdecl NewObject<UPCGManagedDebugDrawComponent>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGManagedDebugDrawComponent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UPCGManagedDebugDrawComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGManagedDebugDrawComponent *)
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

// NewObject<UPCGMeshSelectorBase> @ 149c489e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGMeshSelectorBase * __cdecl
NewObject<UPCGMeshSelectorBase>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UObject *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UPCGMeshSelectorBase_NoRegister();
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
  pUVar2 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return (UPCGMeshSelectorBase *)pUVar2;
}

// NewObject<UPCGSpawnActorNode> @ 149c48ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGSpawnActorNode * __cdecl NewObject<UPCGSpawnActorNode>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGSpawnActorNode *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPCGSpawnActorNode::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGSpawnActorNode *)
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

// NewObject<USplineComponent> @ 149c48b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USplineComponent * __cdecl
NewObject<USplineComponent>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  USplineComponent *pUVar2;
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
  pUVar1 = Z_Construct_UClass_USplineComponent_NoRegister();
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
  pUVar2 = (USplineComponent *)
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

// StaticEnum<enum_EPCGClipPathOperation> @ 149c49030

UEnum * __cdecl StaticEnum<enum_EPCGClipPathOperation>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGClipPathOperation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGClipPathOperation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGClipPathOperation,(UObject *)pUVar1,
                       L"EPCGClipPathOperation");
  }
  return Z_Registration_Info_UEnum_EPCGClipPathOperation.OuterSingleton;
}

// StaticEnum<enum_EPCGCreatePolygonInputType> @ 149c49070

UEnum * __cdecl StaticEnum<enum_EPCGCreatePolygonInputType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGCreatePolygonInputType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGCreatePolygonInputType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGCreatePolygonInputType,(UObject *)pUVar1,
                       L"EPCGCreatePolygonInputType");
  }
  return Z_Registration_Info_UEnum_EPCGCreatePolygonInputType.OuterSingleton;
}

// StaticEnum<enum_EPCGReverseSplineOperation> @ 149c490b0

UEnum * __cdecl StaticEnum<enum_EPCGReverseSplineOperation>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGReverseSplineOperation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGReverseSplineOperation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGReverseSplineOperation,(UObject *)pUVar1,
                       L"EPCGReverseSplineOperation");
  }
  return Z_Registration_Info_UEnum_EPCGReverseSplineOperation.OuterSingleton;
}

// StaticEnum<enum_EPCGSpawnActorGenerationTrigger> @ 149c490f0

UEnum * __cdecl StaticEnum<enum_EPCGSpawnActorGenerationTrigger>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGSpawnActorGenerationTrigger.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGSpawnActorGenerationTrigger.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGSpawnActorGenerationTrigger,(UObject *)pUVar1,
                       L"EPCGSpawnActorGenerationTrigger");
  }
  return Z_Registration_Info_UEnum_EPCGSpawnActorGenerationTrigger.OuterSingleton;
}

// StaticEnum<enum_EPCGSpawnActorOption> @ 149c49130

UEnum * __cdecl StaticEnum<enum_EPCGSpawnActorOption>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGSpawnActorOption.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGSpawnActorOption.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGSpawnActorOption,(UObject *)pUVar1,
                       L"EPCGSpawnActorOption");
  }
  return Z_Registration_Info_UEnum_EPCGSpawnActorOption.OuterSingleton;
}

// StaticEnum<enum_EPCGSplineIntersectionOutput> @ 149c49170

UEnum * __cdecl StaticEnum<enum_EPCGSplineIntersectionOutput>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGSplineIntersectionOutput.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGSplineIntersectionOutput.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGSplineIntersectionOutput,(UObject *)pUVar1,
                       L"EPCGSplineIntersectionOutput");
  }
  return Z_Registration_Info_UEnum_EPCGSplineIntersectionOutput.OuterSingleton;
}

// StaticEnum<enum_EPCGSplineIntersectionType> @ 149c491b0

UEnum * __cdecl StaticEnum<enum_EPCGSplineIntersectionType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGSplineIntersectionType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGSplineIntersectionType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGSplineIntersectionType,(UObject *)pUVar1,
                       L"EPCGSplineIntersectionType");
  }
  return Z_Registration_Info_UEnum_EPCGSplineIntersectionType.OuterSingleton;
}

// StaticEnum<enum_EPCGSplineMeshForwardAxis> @ 149c491f0

UEnum * __cdecl StaticEnum<enum_EPCGSplineMeshForwardAxis>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGSplineMeshForwardAxis.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGSplineMeshForwardAxis.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGSplineMeshForwardAxis,(UObject *)pUVar1,
                       L"EPCGSplineMeshForwardAxis");
  }
  return Z_Registration_Info_UEnum_EPCGSplineMeshForwardAxis.OuterSingleton;
}

// StaticEnum<enum_EPCGSplineSamplingDimension> @ 149c49230

UEnum * __cdecl StaticEnum<enum_EPCGSplineSamplingDimension>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGSplineSamplingDimension.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGSplineSamplingDimension.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGSplineSamplingDimension,(UObject *)pUVar1,
                       L"EPCGSplineSamplingDimension");
  }
  return Z_Registration_Info_UEnum_EPCGSplineSamplingDimension.OuterSingleton;
}

// StaticEnum<enum_EPCGSplineSamplingFill> @ 149c49270

UEnum * __cdecl StaticEnum<enum_EPCGSplineSamplingFill>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGSplineSamplingFill.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGSplineSamplingFill.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGSplineSamplingFill,(UObject *)pUVar1,
                       L"EPCGSplineSamplingFill");
  }
  return Z_Registration_Info_UEnum_EPCGSplineSamplingFill.OuterSingleton;
}

// StaticEnum<enum_EPCGSplineSamplingInteriorOrientation> @ 149c492b0

UEnum * __cdecl StaticEnum<enum_EPCGSplineSamplingInteriorOrientation>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGSplineSamplingInteriorOrientation.OuterSingleton == (UEnum *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGSplineSamplingInteriorOrientation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGSplineSamplingInteriorOrientation,(UObject *)pUVar1
                       ,L"EPCGSplineSamplingInteriorOrientation");
  }
  return Z_Registration_Info_UEnum_EPCGSplineSamplingInteriorOrientation.OuterSingleton;
}

// StaticEnum<enum_EPCGSplineSamplingMode> @ 149c492f0

UEnum * __cdecl StaticEnum<enum_EPCGSplineSamplingMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGSplineSamplingMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGSplineSamplingMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGSplineSamplingMode,(UObject *)pUVar1,
                       L"EPCGSplineSamplingMode");
  }
  return Z_Registration_Info_UEnum_EPCGSplineSamplingMode.OuterSingleton;
}

// StaticEnum<enum_EPCGSplineSamplingSeedingMode> @ 149c49330

UEnum * __cdecl StaticEnum<enum_EPCGSplineSamplingSeedingMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGSplineSamplingSeedingMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGSplineSamplingSeedingMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGSplineSamplingSeedingMode,(UObject *)pUVar1,
                       L"EPCGSplineSamplingSeedingMode");
  }
  return Z_Registration_Info_UEnum_EPCGSplineSamplingSeedingMode.OuterSingleton;
}

// StaticEnum<enum_EPCGSplitAxis> @ 149c49370

UEnum * __cdecl StaticEnum<enum_EPCGSplitAxis>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGSplitAxis.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGSplitAxis.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGSplitAxis,(UObject *)pUVar1,L"EPCGSplitAxis");
  }
  return Z_Registration_Info_UEnum_EPCGSplitAxis.OuterSingleton;
}

// StaticEnum<enum_EPCGSplitSplineMode> @ 149c493b0

UEnum * __cdecl StaticEnum<enum_EPCGSplitSplineMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGSplitSplineMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGSplitSplineMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGSplitSplineMode,(UObject *)pUVar1,
                       L"EPCGSplitSplineMode");
  }
  return Z_Registration_Info_UEnum_EPCGSplitSplineMode.OuterSingleton;
}

// StaticEnum<enum_EPCGUserParameterSource> @ 149c493f0

UEnum * __cdecl StaticEnum<enum_EPCGUserParameterSource>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGUserParameterSource.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGUserParameterSource.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGUserParameterSource,(UObject *)pUVar1,
                       L"EPCGUserParameterSource");
  }
  return Z_Registration_Info_UEnum_EPCGUserParameterSource.OuterSingleton;
}

// Transform<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TArray<FName,TSizedDefaultAllocator<32>_>_&,`FPCGSpawnSplineElement::ExecuteInternal'::__l26::<lambda_1>_> @ 149c49430

void __cdecl
Algo::
Transform<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TArray<FName,TSizedDefaultAllocator<32>_>_&,_FPCGSpawnSplineElement::ExecuteInternal_::__l26::<lambda_1>_>
          (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2,<lambda_1> param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  FName *pFVar4;
  code *pcVar5;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar6;
  bool bVar7;
  int iVar8;
  FName *pFVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  FName local_b8;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  int local_80;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  FName local_48 [2];
  
  iVar8 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iStack_a8 = 0;
  uStack_a4 = 1;
  local_90 = 0;
  iStack_94 = 0;
  if (iVar8 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar11 = *puVar14;
    local_90 = 0;
    while (uVar11 == 0) {
      lVar10 = (longlong)iStack_a8;
      local_90 = local_90 + 0x20;
      iStack_a8 = iStack_a8 + 1;
      iStack_94 = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_149c494ce;
      uVar11 = puVar14[lVar10 + 1];
    }
    uStack_a4 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uStack_a4 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iStack_94 = (int)lVar10 + -1 + local_90;
    if (iVar8 < iStack_94) {
      iStack_94 = iVar8;
    }
  }
LAB_149c494ce:
  uVar11 = *(uint *)&(param_1->Elements).field_0x28;
  uVar15 = uVar11 & 0xffffffe0;
  iStack_88 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uStack_98 = 0xffffffff;
  TStack_70._padding_ = CONCAT44(uStack_a4,iStack_a8);
  TStack_70.CurrentBitIndex = iStack_94;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_70._28_4_ = iStack_94;
  TStack_70.BaseBitIndex = local_90;
  uStack_50 = CONCAT44(uStack_84,iStack_88);
  local_b0 = param_1;
  local_a0 = puVar1;
  iStack_8c = iStack_94;
  local_78 = param_1;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar8 < (int)uVar11)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar3 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar11 != uVar3) {
    puVar13 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      uVar15 = uVar15 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_149c495d1;
      uVar11 = *(uint *)(puVar13 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_80 = (int)lVar10;
    uVar11 = local_80 + -1 + uVar15;
    if ((int)uVar3 < (int)uVar11) {
      uVar11 = uVar3;
    }
  }
LAB_149c495d1:
  while( true ) {
    pTVar6 = local_78;
    if (*(int *)&(local_78->Elements).field_0x8 - *(int *)&(local_78->Elements).field_0x34 !=
        (int)uStack_50) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_70.CurrentBitIndex == uVar11) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == param_1))
    {
      return;
    }
    lVar10 = *(longlong *)&pTVar6->Elements;
    iVar12 = *(int *)(lVar10 + 8 + (longlong)TStack_70.CurrentBitIndex * 0x18);
    iVar8 = iVar12 + -1;
    if (iVar12 == 0) {
      iVar8 = 0;
    }
    pFVar9 = ::FName::FName(local_48,iVar8,
                            *(wchar_t **)(lVar10 + (longlong)TStack_70.CurrentBitIndex * 0x18),
                            FNAME_Add);
    pFVar4 = (FName *)(param_2->AllocatorInstance).Data;
    local_b8 = *pFVar9;
    if (((pFVar4 <= &local_b8) && (&local_b8 < pFVar4 + param_2->ArrayMax)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) break;
    iVar8 = param_2->ArrayNum;
    if (iVar8 == param_2->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar8 + 1;
    *(FName *)((param_2->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_b8;
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// InputData @ 149c4ade0

InputData * __thiscall
PCGSplineIntersection::InputData::InputData(InputData *this,InputData *param_1)

{
  double dVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  
  this->Spline = param_1->Spline;
  this->InputIndex = param_1->InputIndex;
  dVar1 = (param_1->Bounds).Min.field0_0x0._s_0.Y;
  (this->Bounds).Min.field0_0x0._s_0.X = (param_1->Bounds).Min.field0_0x0._s_0.X;
  (this->Bounds).Min.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->Bounds).Max.field0_0x0._s_0.X;
  (this->Bounds).Min.field0_0x0._s_0.Z = (param_1->Bounds).Min.field0_0x0._s_0.Z;
  (this->Bounds).Max.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_1->Bounds).Max.field0_0x0._s_0.Z;
  (this->Bounds).Max.field0_0x0._s_0.Y = (param_1->Bounds).Max.field0_0x0._s_0.Y;
  (this->Bounds).Max.field0_0x0._s_0.Z = dVar1;
  uVar2 = (param_1->Bounds).Pad[0];
  uVar3 = (param_1->Bounds).Pad[1];
  uVar4 = (param_1->Bounds).Pad[2];
  uVar5 = (param_1->Bounds).Pad[3];
  uVar6 = (param_1->Bounds).Pad[4];
  uVar7 = (param_1->Bounds).Pad[5];
  uVar8 = (param_1->Bounds).Pad[6];
  (this->Bounds).IsValid = (param_1->Bounds).IsValid;
  (this->Bounds).Pad[0] = uVar2;
  (this->Bounds).Pad[1] = uVar3;
  (this->Bounds).Pad[2] = uVar4;
  (this->Bounds).Pad[3] = uVar5;
  (this->Bounds).Pad[4] = uVar6;
  (this->Bounds).Pad[5] = uVar7;
  (this->Bounds).Pad[6] = uVar8;
  (this->SegmentBounds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SegmentBounds).AllocatorInstance.Data = (param_1->SegmentBounds).AllocatorInstance.Data;
  (param_1->SegmentBounds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SegmentBounds).ArrayNum = (param_1->SegmentBounds).ArrayNum;
  (this->SegmentBounds).ArrayMax = (param_1->SegmentBounds).ArrayMax;
  (param_1->SegmentBounds).ArrayNum = 0;
  (param_1->SegmentBounds).ArrayMax = 0;
  TSet<TTuple<int,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<int,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ((TSet<TTuple<int,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&this->RoughSampling,
             (TSet<TTuple<int,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&param_1->RoughSampling);
  this->SegmentsNum = param_1->SegmentsNum;
  return this;
}

// ~TFunction_OwnedObject<`FPCGTextureSamplerElement::ExecuteInternal'[::I]::<lambda_1>,0,0> @ 149c4d060

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGTextureSamplerElement::ExecuteInternal'[::I]::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FPCGTextureSamplerElement::ExecuteInternal_[::I]::<lambda_1>,0,0>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000149c4d08a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`FPCGWorldRayHitQueryElement::ExecuteInternal'::__l31::<lambda_3>,0,0> @ 149c4d0a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGWorldRayHitQueryElement::ExecuteInternal'::__l31::<lambda_3>,0,0>::
~TFunction_OwnedObject<_FPCGWorldRayHitQueryElement::ExecuteInternal_::__l31::<lambda_3>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FPCGWorldRayHitQueryElement::ExecuteInternal'::`31'::<lambda_3>,0,0>
        ::_vftable_;
  return;
}

// operator() @ 149c53ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`PCGSplineSamplerHelpers::SampleInteriorData'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char *pcVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  int iVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  bool bVar21;
  char cVar22;
  FInterpCurve<UE::Math::TVector<double>_> *this_00;
  TQuat<double> *pTVar23;
  uint uVar24;
  int iVar25;
  FIdentityFunctor FVar26;
  longlong lVar27;
  double *pdVar28;
  uint uVar29;
  double *pdVar30;
  ForAnyElementType *pFVar31;
  uint uVar32;
  longlong *plVar33;
  uint uVar34;
  double *pdVar35;
  longlong *plVar36;
  float fVar37;
  float fVar38;
  double dVar39;
  double extraout_XMM0 [2];
  double adVar41 [2];
  double dVar40;
  undefined1 extraout_var_00 [12];
  undefined1 auVar42 [16];
  undefined4 uVar43;
  undefined4 uVar44;
  undefined1 unaff_XMM9 [16];
  double dVar45;
  undefined1 unaff_XMM10 [16];
  undefined1 auVar46 [16];
  undefined1 auStackY_538 [32];
  FIdentityFunctor local_508;
  undefined1 local_507 [3];
  uint local_504;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_500;
  float local_4f0;
  uint local_4ec;
  FLLMScope local_4e8;
  float local_4e4;
  uint local_4e0;
  longlong *local_4d8;
  TVector<double>_u_0 local_4d0;
  longlong local_4b8;
  double local_4b0;
  undefined4 local_4a8;
  undefined4 uStack_4a4;
  double dStack_4a0;
  double local_498;
  FName local_490;
  longlong local_488;
  FMemScope local_480;
  TVector2<double>_u_0 local_478;
  TVector2<double>_u_0 local_468;
  TVector<double>_u_0 local_458;
  TVector<double>_u_0 local_440;
  TVector<double>_u_0 local_428;
  undefined1 local_408 [16];
  TVector<double>_u_0 local_3f8;
  double local_3e0;
  double dStack_3d8;
  double local_3d0;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  TQuat<double> local_3a8;
  TTransform<double> local_388;
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  double local_308 [2];
  double local_2f8;
  double dStack_2f0;
  double local_2e8 [2];
  double local_2d8;
  double dStack_2d0;
  undefined4 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  uint uStack_2a0;
  uint uStack_29c;
  double local_298;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 local_260;
  TTransform<double> local_258;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined1 local_1c8;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  undefined1 local_198 [16];
  double local_188;
  double dStack_180;
  undefined1 local_178 [16];
  double local_168;
  double dStack_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  uint uStack_130;
  uint uStack_12c;
  double local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  ulonglong local_e8;
  undefined1 extraout_var [12];
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_538;
  local_504 = param_1;
  FLLMScope::FLLMScope(&local_4e8,LLMTagDeclaration_PCG.UniqueName,false,None,Default,true);
  local_490 = LLMTagDeclaration_PCG.UniqueName;
  FMemScope::FMemScope(&local_480,&local_490,true);
  uVar19 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar18 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar17 = __real_3e45798ee2308c3a;
  dVar16 = __real_3ff0000000000000;
  plVar33 = (longlong *)((longlong)this + 0x20);
  uVar43 = SUB84(__real_3f1a36e2e0000000,0);
  uVar44 = (undefined4)((ulonglong)__real_3f1a36e2e0000000 >> 0x20);
  iVar25 = param_1 * **(int **)((longlong)this + 8);
  if (param_1 == **(int **)this + -1) {
    dVar11 = **(double **)((longlong)this + 0x28) + __real_3f1a36e2e0000000;
  }
  else {
    dVar11 = (double)((float)(**(int **)((longlong)this + 8) + iVar25) * *(float *)(*plVar33 + 0x28)
                     ) + **(double **)((longlong)this + 0x18);
  }
  dVar13 = (double)((float)iVar25 * *(float *)(*plVar33 + 0x28)) +
           **(double **)((longlong)this + 0x18);
  FVar26 = local_508;
  local_4d8 = plVar33;
  local_4b0 = dVar11;
  if (dVar13 < dVar11) {
    do {
      local_468._s_0.X = **(double **)((longlong)this + 0x30) - **(double **)((longlong)this + 0x38)
      ;
      local_478._s_0.X = **(double **)((longlong)this + 0x38) + **(double **)((longlong)this + 0x40)
      ;
      local_500.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_500.ArrayNum = 0;
      local_500.ArrayMax = 0;
      local_478._s_0.Y = dVar13;
      local_468._s_0.Y = dVar13;
      PCGSplineSamplerHelpers::SegmentPolygonIntersection2D
                ((TVector2<double> *)&local_468._s_0,(TVector2<double> *)&local_478._s_0,
                 *(TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> **)
                  ((longlong)this + 0x48),&local_500);
      if ((local_500._8_8_ & 1) == 0) {
        AlgoImpl::
        IntroSortInternal<UE::Math::TVector2<double>,int,FIdentityFunctor,TDereferenceWrapper<UE::Math::TVector2<double>,__PCGSplineSamplerHelpers::SampleInteriorData_::__l2::<lambda_1>::operator()_::__l5::<lambda_1>_>_>
                  ((TVector2<double> *)local_500.AllocatorInstance.Data,local_500.ArrayNum,FVar26,
                   (<lambda_1> *)local_507);
        local_4ec = 0;
        local_4b8 = 0;
        if (0 < local_500.ArrayNum) {
          do {
            lVar20 = local_4b8;
            uVar29 = local_4ec;
            uVar34 = 0;
            if ((int)local_4ec < local_500.ArrayNum) {
              uVar34 = ~local_4ec >> 0x1f;
            }
            if ((uVar34 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            auVar46._0_8_ =
                 *(double *)(local_500.AllocatorInstance.Data + lVar20 * 0x10) /
                 (double)*(float *)(*plVar33 + 0x28);
            auVar46._8_8_ = 0;
            uVar34 = 0;
            if ((int)(uVar29 + 1) < local_500.ArrayNum) {
              uVar34 = ~(uVar29 + 1) >> 0x1f;
            }
            auVar46 = roundpd(unaff_XMM10,auVar46,2);
            unaff_XMM10._8_8_ = auVar46._8_8_;
            unaff_XMM10._0_8_ = auVar46._0_8_ * (double)*(float *)(*plVar33 + 0x28);
            if ((uVar34 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            dVar11 = (double)*(float *)(*plVar33 + 0x28);
            auVar42._0_8_ =
                 *(double *)(local_500.AllocatorInstance.Data + (lVar20 + 1) * 0x10) / dVar11;
            auVar42._8_8_ = 0;
            auVar46 = roundpd(unaff_XMM9,auVar42,1);
            unaff_XMM9._8_8_ = auVar46._8_8_;
            unaff_XMM9._0_8_ = auVar46._0_8_ * dVar11;
            dVar45 = unaff_XMM9._0_8_ - unaff_XMM10._0_8_;
            if (dVar11 <= dVar45) {
              plVar36 = *(longlong **)((longlong)this + 0x58);
              uVar34 = (uint)~param_1 >> 0x1f;
              uVar24 = 0;
              if (param_1 < (int)plVar36[1]) {
                uVar24 = uVar34;
              }
              local_4e0 = uVar34;
              if ((uVar24 == 0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar21)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              if (dVar45 <= 0.0) {
                dVar45 = 0.0;
              }
              uVar24 = (uint)(dVar45 / (double)*(float *)(*plVar33 + 0x28) + __real_4000000000000000
                             );
              if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar24);
              }
              local_488 = (longlong)param_1 * 0x10;
              pFVar31 = (ForAnyElementType *)(*plVar36 + local_488);
              if (*(int *)((longlong)&pFVar31[1].Data + 4) < (int)uVar24) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x80,0x10,uVar24,pFVar31,*(int *)&pFVar31[1].Data,
                           (int *)((longlong)&pFVar31[1].Data + 4));
              }
              lVar20 = local_488;
              unaff_XMM9._0_8_ = unaff_XMM9._0_8_ + (double)CONCAT44(uVar44,uVar43);
              local_408 = unaff_XMM9;
              if (unaff_XMM10._0_8_ < unaff_XMM9._0_8_) {
                do {
                  local_4d0._s_0.Z = *(double *)(*(longlong *)((longlong)this + 0x30) + 0x10);
                  dVar45 = unaff_XMM10._0_8_;
                  local_4d0._s_0.X = dVar45;
                  local_4d0._s_0.Y = dVar13;
                  dVar11 = local_4d0._s_0.Z;
                  if (**(char **)((longlong)this + 0x60) != '\0') {
                    plVar36 = *(longlong **)((longlong)this + 0x68);
                    uVar29 = 0;
                    dVar12 = 0.0;
                    dVar40 = 0.0;
                    iVar25 = (int)plVar36[1];
                    if (0 < iVar25) {
                      lVar27 = 0;
                      dVar40 = 0.0;
                      dVar12 = 0.0;
                      do {
                        uVar24 = 0;
                        if ((int)uVar29 < iVar25) {
                          uVar24 = ~uVar29 >> 0x1f;
                        }
                        if ((uVar24 == 0) &&
                           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar21)) {
                          pcVar7 = (code *)swi(3);
                          (*pcVar7)();
                          return;
                        }
                        lVar3 = *plVar36;
                        dVar39 = *(double *)(lVar27 + lVar3) - local_4d0._s_0.X;
                        dVar8 = *(double *)(lVar27 + 8 + lVar3) - local_4d0._s_0.Y;
                        dVar11 = *(double *)(lVar27 + 0x10 + lVar3);
                        dVar8 = dVar8 * dVar8 + dVar39 * dVar39;
                        if ((double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) & uVar19,
                                             SUB84(dVar8,0) & uVar18) <= dVar17) goto LAB_149c541cc;
                        iVar25 = (int)plVar36[1];
                        uVar29 = uVar29 + 1;
                        lVar27 = lVar27 + 0x18;
                        dVar40 = dVar40 + dVar16 / dVar8;
                        dVar12 = dVar12 + (dVar16 / dVar8) * dVar11;
                      } while ((int)uVar29 < iVar25);
                    }
                    if (dVar17 < (double)CONCAT44((uint)((ulonglong)dVar40 >> 0x20) & uVar19,
                                                  SUB84(dVar40,0) & uVar18)) {
                      dVar11 = dVar12 / dVar40;
                    }
                    else {
                      dVar11 = 0.0;
                    }
                  }
LAB_149c541cc:
                  local_4d0._s_0.Z = dVar11;
                  fVar37 = 0.0;
                  if (**(char **)((longlong)this + 0x70) != '\0') {
                    this_00 = (FInterpCurve<UE::Math::TVector<double>_> *)
                              FPCGSplineStruct::GetSplinePointsPosition
                                        ((FPCGSplineStruct *)
                                         **(undefined8 **)((longlong)this + 0x78));
                    iVar25 = (this_00->Points).ArrayNum;
                    iVar14 = iVar25;
                    if (this_00->bIsLooped == false) {
                      iVar14 = iVar25 + -1;
                    }
                    if (iVar25 < 2) {
                      if (iVar25 == 1) {
                        if (((this_00->Points).ArrayNum < 1) &&
                           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar21)) {
                          pcVar7 = (code *)swi(3);
                          (*pcVar7)();
                          return;
                        }
                        fVar37 = *(float *)(this_00->Points).AllocatorInstance.Data;
                      }
                    }
                    else {
                      fVar37 = FInterpCurve<UE::Math::TVector<double>_>::FindNearestOnSegment
                                         (this_00,(TVector<double> *)&local_4d0._s_0,0,&local_4f0);
                      iVar25 = 1;
                      if (1 < iVar14) {
                        do {
                          fVar38 = FInterpCurve<UE::Math::TVector<double>_>::FindNearestOnSegment
                                             (this_00,(TVector<double> *)&local_4d0._s_0,iVar25,
                                              &local_4e4);
                          if (local_4e4 < local_4f0) {
                            local_4f0 = local_4e4;
                            fVar37 = fVar38;
                          }
                          iVar25 = iVar25 + 1;
                        } while (iVar25 < iVar14);
                      }
                    }
                  }
                  if (*(char *)(*plVar33 + 0x32) == '\0') {
                    uVar43 = unaff_XMM10._0_4_;
                    uVar44 = unaff_XMM10._4_4_;
                    local_498 = *(double *)(*(longlong *)((longlong)this + 0x30) + 0x10);
                    uVar15 = dVar13;
                  }
                  else {
                    uVar43 = SUB84(local_4d0._s_0.X,0);
                    uVar44 = (undefined4)((ulonglong)local_4d0._0_8_ >> 0x20);
                    local_498 = local_4d0._s_0.Z;
                    uVar15 = local_4d0._s_0.Y;
                  }
                  local_258.Rotation.XY.m128d_f64 =
                       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
                  local_258.Scale3D.XY.m128d_f64 =
                       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
                  adVar41[1] = 0.0;
                  adVar41[0] = local_498;
                  local_258.Rotation.ZW.m128d_f64 =
                       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
                  local_258.Scale3D.ZW.m128d_f64 =
                       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
                  local_4a8 = uVar43;
                  uStack_4a4 = uVar44;
                  dStack_4a0 = (double)uVar15;
                  local_258.Translation.XY.m128d_f64[0]._0_4_ = uVar43;
                  local_258.Translation.XY.m128d_f64[0]._4_4_ = uVar44;
                  local_258.Translation.XY.m128d_f64[1] = (double)uVar15;
                  local_258.Translation.ZW.m128d_f64 = adVar41;
                  if (*(char *)(*plVar33 + 0x31) == '\x01') {
                    pTVar23 = FPCGSplineStruct::GetQuaternionAtSplineInputKey
                                        ((FPCGSplineStruct *)
                                         **(undefined8 **)((longlong)this + 0x78),&local_3a8,fVar37,
                                         Local);
                    local_258.Rotation.ZW.m128d_f64[0] = pTVar23->Z;
                    local_258.Rotation.ZW.m128d_f64[1] = pTVar23->W;
                    adVar41[0] = pTVar23->X;
                    adVar41[1] = pTVar23->Y;
                    local_258.Rotation.XY.m128d_f64 = adVar41;
                  }
                  fVar38 = __real_3f800000;
                  if (**(char **)((longlong)this + 0x80) != '\0') {
                    plVar33 = *(longlong **)((longlong)this + 0x90);
                    iVar25 = (int)plVar33[1];
                    dVar11 = **(double **)((longlong)this + 0x88);
                    if (iVar25 < 1) {
                      if ((**(int **)((longlong)this + 0x98) == 2) ||
                         (**(int **)((longlong)this + 0x98) == 3)) {
                        dVar40 = **(double **)((longlong)this + 0xa0) - dVar45;
                        dVar11 = (*(double **)((longlong)this + 0xa0))[1] - dVar13;
                        adVar41[0] = dVar40 * dVar40;
                        adVar41[1] = 0.0;
                        dVar11 = dVar11 * dVar11 + adVar41[0];
                      }
                    }
                    else {
                      pdVar30 = (double *)*plVar33;
                      pdVar28 = pdVar30 + (longlong)iVar25 * 4;
                      pdVar35 = pdVar30 + 2;
                      dVar40 = dVar11;
                      while( true ) {
                        dVar11 = dVar40;
                        if ((int)plVar33[1] != iVar25) {
                          local_508 = (FIdentityFunctor)0x0;
                          `TCheckedPointerIterator<TTuple<UE::Math::TVector2<double>,UE::Math::TVector2<double>_>,int,0>
                          ::operator!='::__l2::<lambda_1>::operator()(&local_508);
                          adVar41 = extraout_XMM0;
                        }
                        if (pdVar30 == pdVar28) break;
                        local_458._s_0.X = *pdVar35;
                        local_458._s_0.Y = pdVar35[1];
                        local_458._s_0.Z = 0.0;
                        local_440._s_0.X = *pdVar30;
                        local_440._s_0.Y = pdVar30[1];
                        local_440._s_0.Z = 0.0;
                        local_428._s_0.Z = 0.0;
                        local_428._s_0.X = dVar45;
                        local_428._s_0.Y = dVar13;
                        adVar41[0]._0_4_ =
                             FMath::PointDistToSegmentSquared
                                       ((TVector<double> *)&local_428._s_0,
                                        (TVector<double> *)&local_440._s_0,
                                        (TVector<double> *)&local_458._s_0);
                        adVar41._4_12_ = extraout_var;
                        pdVar30 = pdVar30 + 4;
                        pdVar35 = pdVar35 + 4;
                        dVar40 = (double)adVar41[0]._0_4_;
                        if (dVar11 <= (double)adVar41[0]._0_4_) {
                          dVar40 = dVar11;
                        }
                      }
                    }
                    plVar33 = local_4d8;
                    auVar9._8_8_ = 0;
                    auVar9._0_8_ = dVar11;
                    auVar46 = sqrtpd(unaff_XMM9,auVar9);
                    if (*(char *)(*local_4d8 + 0x30) == '\0') {
                      FPCGSplineStruct::GetLocationAtSplineInputKey
                                ((FPCGSplineStruct *)**(undefined8 **)((longlong)this + 0x78),
                                 (TVector<double> *)&local_3f8._s_0,fVar37,Local);
                      adVar41[0] = (local_3f8._s_0.X - dVar45) * (local_3f8._s_0.X - dVar45);
                      adVar41[1] = 0.0;
                      dVar11 = (local_3f8._s_0.Y - dVar13) * (local_3f8._s_0.Y - dVar13) +
                               adVar41[0];
                    }
                    else {
                      plVar36 = *(longlong **)((longlong)this + 0x68);
                      uVar29 = 0;
                      dVar40 = **(double **)((longlong)this + 0x88);
                      dVar11 = dVar40;
                      if (0 < (int)plVar36[1]) {
                        do {
                          uVar32 = uVar29 + 1;
                          uVar24 = (int)uVar32 % (int)plVar36[1];
                          uVar34 = 0;
                          if ((int)uVar24 < (int)plVar36[1]) {
                            uVar34 = ~uVar24 >> 0x1f;
                          }
                          if ((uVar34 == 0) &&
                             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar21)) {
                            pcVar7 = (code *)swi(3);
                            (*pcVar7)();
                            return;
                          }
                          lVar27 = *plVar36;
                          plVar33 = *(longlong **)((longlong)this + 0x68);
                          uVar34 = 0;
                          if ((int)uVar29 < (int)plVar33[1]) {
                            uVar34 = ~uVar29 >> 0x1f;
                          }
                          if ((uVar34 == 0) &&
                             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar21)) {
                            pcVar7 = (code *)swi(3);
                            (*pcVar7)();
                            return;
                          }
                          adVar41[0]._0_4_ =
                               FMath::PointDistToSegmentSquared
                                         ((TVector<double> *)&local_4d0._s_0,
                                          (TVector<double> *)
                                          (*plVar33 + (longlong)(int)uVar29 * 0x18),
                                          (TVector<double> *)(lVar27 + (longlong)(int)uVar24 * 0x18)
                                         );
                          adVar41._4_12_ = extraout_var_00;
                          plVar36 = *(longlong **)((longlong)this + 0x68);
                          dVar11 = (double)adVar41[0]._0_4_;
                          if (dVar40 <= (double)adVar41[0]._0_4_) {
                            dVar11 = dVar40;
                          }
                          plVar33 = local_4d8;
                          uVar43 = local_4a8;
                          uVar44 = uStack_4a4;
                          dVar40 = dVar11;
                          uVar15 = dStack_4a0;
                          uVar29 = uVar32;
                        } while ((int)uVar32 < (int)plVar36[1]);
                      }
                    }
                    auVar10._8_8_ = 0;
                    auVar10._0_8_ = dVar11;
                    auVar42 = sqrtpd((undefined1  [16])adVar41,auVar10);
                    fVar38 = FRichCurve::Eval((FRichCurve *)**(undefined8 **)((longlong)this + 0xa8)
                                              ,(float)(auVar46._0_8_ /
                                                      (auVar42._0_8_ + auVar46._0_8_ +
                                                      __real_3f1a36e2e0000000)),0.0);
                    unaff_XMM9 = local_408;
                    uVar34 = local_4e0;
                  }
                  local_388.Rotation.XY.m128d_f64[1]._0_4_ =
                       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
                  local_388.Rotation.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[0];
                  local_388.Rotation.XY.m128d_f64[1]._4_4_ =
                       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20
                            );
                  local_388.Translation.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[2];
                  local_388.Translation.ZW.m128d_f64[1] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[3];
                  local_388.Translation.XY.m128d_f64[1]._0_4_ =
                       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
                  local_388.Translation.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
                  local_388.Translation.XY.m128d_f64[1]._4_4_ =
                       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20
                            );
                  local_388.Rotation.ZW.m128d_f64[1]._0_4_ =
                       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
                  local_388.Rotation.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[2];
                  local_388.Rotation.ZW.m128d_f64[1]._4_4_ =
                       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20
                            );
                  local_388.Scale3D.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[2];
                  local_388.Scale3D.ZW.m128d_f64[1] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[3];
                  local_388.Scale3D.XY.m128d_f64[1]._0_4_ =
                       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
                  local_388.Scale3D.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[0];
                  local_388.Scale3D.XY.m128d_f64[1]._4_4_ =
                       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20
                            );
                  UE::Math::TTransform<double>::Multiply
                            (&local_388,&local_258,*(TTransform<double> **)((longlong)this + 0xb0));
                  plVar36 = (longlong *)**(longlong **)((longlong)this + 0xb8);
                  if (plVar36 == (longlong *)0x0) {
LAB_149c548a9:
                    local_1b8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
                    dStack_1b0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
                    local_158 = 0x3f800000;
                    local_f8 = 0x3f000000;
                    local_f0 = 0xffffffffffffffff;
                    local_1a8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
                    dStack_1a0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
                    local_198._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
                    local_198._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
                    local_198._12_4_ =
                         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >>
                              0x20);
                    local_178._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
                    local_178._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
                    local_178._12_4_ =
                         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >>
                              0x20);
                    local_188 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
                    dStack_180 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
                    uStack_130 = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0);
                    uStack_12c = (uint)((ulonglong)
                                        UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                                       0x20);
                    uVar29 = (uint)__xmm_80000000000000008000000000000000;
                    uVar24 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
                    local_168 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
                    dStack_160 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
                    local_150 = CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._4_4_ ^
                                         uVar24,UE::Math::TVector<double>::OneVector.field0_0x0.
                                                _0_4_ ^ uVar29);
                    local_148 = CONCAT44(uStack_12c ^ uVar24,uStack_130 ^ uVar29);
                    local_140 = CONCAT44((uint)((ulonglong)
                                                UE::Math::TVector<double>::OneVector.field0_0x0.
                                                _16_8_ >> 0x20) ^ uVar24,
                                         SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.
                                               Z,0) ^ uVar29);
                    local_118 = ___xmm_3ff00000000000003ff0000000000000;
                    uStack_110 = _UNK_150689688;
                    local_108 = ___xmm_3ff00000000000003ff0000000000000;
                    uStack_100 = _UNK_150689688;
                    local_138 = UE::Math::TVector<double>::OneVector.field0_0x0._0_4_;
                    uStack_134 = UE::Math::TVector<double>::OneVector.field0_0x0._4_4_;
                    local_128 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
                    plVar36 = (longlong *)**(longlong **)((longlong)this + 0xe0);
                    if ((plVar36 == (longlong *)0x0) ||
                       (cVar22 = (**(code **)(*plVar36 + 0x3c0))(plVar36,&local_388),
                       param_1 = local_504, cVar22 != '\0')) {
                      param_1 = local_504;
                      plVar36 = *(longlong **)((longlong)this + 0x58);
                      uVar29 = 0;
                      if ((int)local_504 < (int)plVar36[1]) {
                        uVar29 = uVar34;
                      }
                      if ((uVar29 == 0) &&
                         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar21)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      pFVar31 = (ForAnyElementType *)(*plVar36 + lVar20);
                      iVar25 = *(int *)&pFVar31[1].Data;
                      piVar1 = (int *)((longlong)&pFVar31[1].Data + 4);
                      if (iVar25 == *piVar1) {
                        iVar25 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x1080,pFVar31,piVar1);
                      }
                      *(int *)&pFVar31[1].Data = iVar25 + 1;
                      pFVar6 = pFVar31->Data;
                      lVar27 = (longlong)iVar25 * 0x80;
                      *(double *)(pFVar6 + lVar27) = local_388.Rotation.XY.m128d_f64[0];
                      *(double *)(pFVar6 + lVar27 + 8) = local_388.Rotation.XY.m128d_f64[1];
                      *(double *)(pFVar6 + lVar27 + 0x10) = local_388.Rotation.ZW.m128d_f64[0];
                      *(double *)(pFVar6 + lVar27 + 0x10 + 8) = local_388.Rotation.ZW.m128d_f64[1];
                      *(double *)(pFVar6 + lVar27 + 0x20) = local_388.Translation.XY.m128d_f64[0];
                      *(double *)(pFVar6 + lVar27 + 0x20 + 8) =
                           local_388.Translation.XY.m128d_f64[1];
                      *(double *)(pFVar6 + lVar27 + 0x30) = local_388.Translation.ZW.m128d_f64[0];
                      *(double *)(pFVar6 + lVar27 + 0x30 + 8) =
                           local_388.Translation.ZW.m128d_f64[1];
                      *(double *)(pFVar6 + lVar27 + 0x40) = local_388.Scale3D.XY.m128d_f64[0];
                      *(double *)(pFVar6 + lVar27 + 0x40 + 8) = local_388.Scale3D.XY.m128d_f64[1];
                      *(double *)(pFVar6 + lVar27 + 0x50) = local_388.Scale3D.ZW.m128d_f64[0];
                      *(double *)(pFVar6 + lVar27 + 0x50 + 8) = local_388.Scale3D.ZW.m128d_f64[1];
                      pFVar2 = pFVar6 + lVar27 + 0x60;
                      *(undefined4 *)pFVar2 = uVar43;
                      *(undefined4 *)(pFVar2 + 4) = uVar44;
                      *(undefined8 *)(pFVar2 + 8) = uVar15;
                      *(double *)(pFVar6 + lVar27 + 0x70) = local_498;
                      *(float *)(pFVar6 + lVar27 + 0x78) = fVar38;
                    }
                  }
                  else {
                    local_328 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
                    dStack_320 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
                    local_2c8 = 0x3f800000;
                    local_268 = 0x3f000000;
                    local_260 = 0xffffffffffffffff;
                    local_318 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
                    dStack_310 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
                    local_308[1]._0_4_ =
                         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
                    local_308[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
                    local_308[1]._4_4_ =
                         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >>
                              0x20);
                    local_2e8[1]._0_4_ =
                         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
                    local_2e8[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
                    local_2e8[1]._4_4_ =
                         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >>
                              0x20);
                    local_2f8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
                    dStack_2f0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
                    uStack_2a0 = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0);
                    uStack_29c = (uint)((ulonglong)
                                        UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                                       0x20);
                    uVar29 = (uint)__xmm_80000000000000008000000000000000;
                    uVar24 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
                    local_2b8 = CONCAT44(uStack_29c ^ uVar24,uStack_2a0 ^ uVar29);
                    local_2d8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
                    dStack_2d0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
                    local_298 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
                    local_2c0 = CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._4_4_ ^
                                         uVar24,UE::Math::TVector<double>::OneVector.field0_0x0.
                                                _0_4_ ^ uVar29);
                    local_2b0 = CONCAT44((uint)((ulonglong)
                                                UE::Math::TVector<double>::OneVector.field0_0x0.
                                                _16_8_ >> 0x20) ^ uVar24,
                                         SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.
                                               Z,0) ^ uVar29);
                    local_288 = ___xmm_3ff00000000000003ff0000000000000;
                    uStack_280 = _UNK_150689688;
                    local_278 = ___xmm_3ff00000000000003ff0000000000000;
                    uStack_270 = _UNK_150689688;
                    local_2a8 = UE::Math::TVector<double>::OneVector.field0_0x0._0_4_;
                    uStack_2a4 = UE::Math::TVector<double>::OneVector.field0_0x0._4_4_;
                    puVar4 = *(undefined8 **)((longlong)this + 0xc0);
                    local_1f8 = *puVar4;
                    uStack_1f0 = puVar4[1];
                    local_1e8 = puVar4[2];
                    puVar4 = *(undefined8 **)((longlong)this + 200);
                    local_1e0 = *puVar4;
                    uStack_1d8 = puVar4[1];
                    local_1d0 = puVar4[2];
                    local_1c8 = 1;
                    cVar22 = (**(code **)(*plVar36 + 0x3d0))(plVar36,&local_388);
                    param_1 = local_504;
                    if (cVar22 != '\0') {
                      pcVar5 = *(char **)((longlong)this + 0xd0);
                      if (*pcVar5 != '\0') {
                        local_3e0 = local_308[0];
                        dStack_3d8 = local_308[1];
                        local_3d0 = local_2f8;
                        local_388.Translation.XY.m128d_f64[0] = local_308[0];
                        local_388.Translation.XY.m128d_f64[1] = local_308[1];
                        local_388.Translation.ZW.m128d_f64[0] = local_2f8;
                        local_388.Translation.ZW.m128d_f64[1] = 0.0;
                      }
                      if (pcVar5[1] != '\0') {
                        local_388.Rotation.XY.m128d_f64[1] = dStack_320;
                        local_388.Rotation.XY.m128d_f64[0] = local_328;
                        local_388.Rotation.ZW.m128d_f64[1] = dStack_310;
                        local_388.Rotation.ZW.m128d_f64[0] = local_318;
                      }
                      if (pcVar5[2] != '\0') {
                        local_3c8 = local_2e8[0];
                        dStack_3c0 = local_2e8[1];
                        local_3b8 = local_2d8;
                        local_388.Scale3D.XY.m128d_f64[0] = local_2e8[0];
                        local_388.Scale3D.XY.m128d_f64[1] = local_2e8[1];
                        local_388.Scale3D.ZW.m128d_f64[0] = local_2d8;
                        local_388.Scale3D.ZW.m128d_f64[1] = 0.0;
                      }
                      goto LAB_149c548a9;
                    }
                  }
                  unaff_XMM10._0_8_ = dVar45 + (double)*(float *)(*plVar33 + 0x28);
                } while (unaff_XMM10._0_8_ < unaff_XMM9._0_8_);
                uVar43 = SUB84(__real_3f1a36e2e0000000,0);
                uVar44 = (undefined4)((ulonglong)__real_3f1a36e2e0000000 >> 0x20);
                FVar26 = local_508;
                uVar29 = local_4ec;
              }
            }
            local_4ec = uVar29 + 2;
            local_4b8 = local_4b8 + 2;
            dVar11 = local_4b0;
          } while ((int)local_4ec < local_500.ArrayNum);
        }
      }
      else {
        **(undefined1 **)((longlong)this + 0x50) = 1;
      }
      if (local_500.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_500.AllocatorInstance.Data);
      }
      dVar13 = dVar13 + (double)*(float *)(*plVar33 + 0x28);
    } while (dVar13 < dVar11);
  }
  FMemScope::~FMemScope(&local_480);
  FLLMScope::~FLLMScope(&local_4e8);
  return;
}

// operator() @ 149c54c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall `PCGSurfaceSampler::SampleSurface'::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  undefined1 auStack_118 [32];
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  undefined1 local_d8 [16];
  double local_c8;
  double dStack_c0;
  undefined1 local_b8 [16];
  double local_a8;
  double dStack_a0;
  undefined4 local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double dStack_70;
  double local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  (**(code **)(**(longlong **)((longlong)this + 8) + 0x490))
            (*(longlong **)((longlong)this + 8),*(undefined4 *)(*(longlong *)this + 0xa8),0);
  (**(code **)(**(longlong **)((longlong)this + 8) + 0x568))
            (*(longlong **)((longlong)this + 8),*(undefined4 *)(*(longlong *)this + 0x28));
  lVar1 = *(longlong *)this;
  local_f8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_f0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_98 = 0x3f800000;
  local_38 = 0x3f000000;
  local_30 = 0xffffffffffffffff;
  local_e8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_e0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_d8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_d8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_d8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_b8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_b8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_b8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_c8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_c0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_a8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_a0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_58 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_50 = _UNK_150689688;
  local_48 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_40 = _UNK_150689688;
  local_78 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * __real_3fe0000000000000 -
             UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * __real_3fe0000000000000;
  local_90 = local_78 - *(double *)(lVar1 + 8);
  dStack_70 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * __real_3fe0000000000000 -
              UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * __real_3fe0000000000000;
  local_68 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z * __real_3fe0000000000000 -
             UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z * __real_3fe0000000000000;
  local_88 = dStack_70 - *(double *)(lVar1 + 0x10);
  local_80 = local_68 - *(double *)(lVar1 + 0x18);
  dStack_70 = dStack_70 + *(double *)(lVar1 + 0x10);
  local_68 = local_68 + *(double *)(lVar1 + 0x18);
  local_78 = local_78 + *(double *)(lVar1 + 8);
  (**(code **)(**(longlong **)((longlong)this + 8) + 0x550))
            (*(longlong **)((longlong)this + 8),&local_90);
  (**(code **)(**(longlong **)((longlong)this + 8) + 0x558))
            (*(longlong **)((longlong)this + 8),&local_78);
  (**(code **)(**(longlong **)((longlong)this + 8) + 0x498))
            (*(longlong **)((longlong)this + 8),0xd3);
  return;
}

// operator() @ 149c54e00

bool __thiscall
`PCGSplineSamplerHelpers::SegmentPolygonIntersection2D'::__l2::<lambda_1>::operator()
          (void *this,TVector2<double> *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  double dVar13;
  
  uVar6 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar5 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar4 = __real_3e45798ee2308c3a;
  iVar11 = *(int *)this;
  dVar3 = 0.0;
  iVar10 = 0;
  if (0 < iVar11) {
    do {
      plVar1 = *(longlong **)((longlong)this + 8);
      uVar9 = ((iVar11 - iVar10) + -1 + param_2) % iVar11;
      uVar12 = 0;
      if ((int)uVar9 < (int)plVar1[1]) {
        uVar12 = ~uVar9 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        uVar8 = (*pcVar2)();
        return (bool)uVar8;
      }
      dVar3 = *(double *)(*plVar1 + 8 + (longlong)(int)uVar9 * 0x10) - (param_1->field0_0x0)._s_0.Y;
      uVar12 = SUB84(dVar3,0) & uVar5;
      uVar9 = (uint)((ulonglong)dVar3 >> 0x20) & uVar6;
      if (dVar4 <= (double)CONCAT44(uVar9,uVar12) && (double)CONCAT44(uVar9,uVar12) != dVar4) break;
      iVar11 = *(int *)this;
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar11);
  }
  iVar11 = *(int *)this;
  iVar10 = 0;
  dVar13 = 0.0;
  if (0 < iVar11) {
    do {
      plVar1 = *(longlong **)((longlong)this + 8);
      uVar9 = (iVar10 + param_2 + 1) % iVar11;
      uVar12 = 0;
      if ((int)uVar9 < (int)plVar1[1]) {
        uVar12 = ~uVar9 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        uVar8 = (*pcVar2)();
        return (bool)uVar8;
      }
      dVar13 = *(double *)(*plVar1 + 8 + (longlong)(int)uVar9 * 0x10) - (param_1->field0_0x0)._s_0.Y
      ;
      uVar12 = SUB84(dVar13,0) & uVar5;
      uVar9 = (uint)((ulonglong)dVar13 >> 0x20) & uVar6;
      if (dVar4 <= (double)CONCAT44(uVar9,uVar12) && (double)CONCAT44(uVar9,uVar12) != dVar4) break;
      iVar11 = *(int *)this;
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar11);
  }
  if (((dVar3 <= 0.0) || (dVar13 <= 0.0)) && ((0.0 <= dVar3 || (0.0 <= dVar13)))) {
    return false;
  }
  return true;
}

// operator() @ 149c55010

void __thiscall `PCGSplitSpline::SplitSpline'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  int *piVar1;
  longlong *plVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  
  plVar2 = *(longlong **)((longlong)this + 0x10);
  pFVar3 = *(ForAnyElementType **)this;
  uVar8 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar11 = (FScriptContainerElement *)(*plVar2 + (longlong)param_1 * 0x88);
  if ((pFVar3->Data <= pFVar11) &&
     (pFVar11 < pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0x88)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar9 = *(int *)&pFVar3[1].Data;
  piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x888,pFVar3,piVar1);
  }
  *(int *)&pFVar3[1].Data = iVar9 + 1;
  uVar6 = *(undefined8 *)(pFVar11 + 8);
  lVar10 = (longlong)iVar9 * 0x88;
  pFVar4 = pFVar3->Data;
  *(undefined8 *)(pFVar4 + lVar10) = *(undefined8 *)pFVar11;
  *(undefined8 *)(pFVar4 + lVar10 + 8) = uVar6;
  uVar6 = *(undefined8 *)(pFVar11 + 0x18);
  *(undefined8 *)(pFVar4 + lVar10 + 0x10) = *(undefined8 *)(pFVar11 + 0x10);
  *(undefined8 *)(pFVar4 + lVar10 + 0x10 + 8) = uVar6;
  uVar6 = *(undefined8 *)(pFVar11 + 0x28);
  *(undefined8 *)(pFVar4 + lVar10 + 0x20) = *(undefined8 *)(pFVar11 + 0x20);
  *(undefined8 *)(pFVar4 + lVar10 + 0x20 + 8) = uVar6;
  uVar6 = *(undefined8 *)(pFVar11 + 0x38);
  *(undefined8 *)(pFVar4 + lVar10 + 0x30) = *(undefined8 *)(pFVar11 + 0x30);
  *(undefined8 *)(pFVar4 + lVar10 + 0x30 + 8) = uVar6;
  uVar6 = *(undefined8 *)(pFVar11 + 0x48);
  *(undefined8 *)(pFVar4 + lVar10 + 0x40) = *(undefined8 *)(pFVar11 + 0x40);
  *(undefined8 *)(pFVar4 + lVar10 + 0x40 + 8) = uVar6;
  uVar6 = *(undefined8 *)(pFVar11 + 0x58);
  *(undefined8 *)(pFVar4 + lVar10 + 0x50) = *(undefined8 *)(pFVar11 + 0x50);
  *(undefined8 *)(pFVar4 + lVar10 + 0x50 + 8) = uVar6;
  uVar6 = *(undefined8 *)(pFVar11 + 0x68);
  *(undefined8 *)(pFVar4 + lVar10 + 0x60) = *(undefined8 *)(pFVar11 + 0x60);
  *(undefined8 *)(pFVar4 + lVar10 + 0x60 + 8) = uVar6;
  uVar6 = *(undefined8 *)(pFVar11 + 0x78);
  *(undefined8 *)(pFVar4 + lVar10 + 0x70) = *(undefined8 *)(pFVar11 + 0x70);
  *(undefined8 *)(pFVar4 + lVar10 + 0x70 + 8) = uVar6;
  *(undefined8 *)(pFVar4 + lVar10 + 0x80) = *(undefined8 *)(pFVar11 + 0x80);
  if ((*(TArrayView<__int64_const_,int> **)((longlong)this + 0x18))->ArrayNum != 0) {
    pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
    pFVar11 = (FScriptContainerElement *)
              TArrayView<__int64_const_,int>::operator[]
                        (*(TArrayView<__int64_const_,int> **)((longlong)this + 0x18),param_1);
    if ((pFVar3->Data <= pFVar11) &&
       (pFVar11 < pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar9 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar3,piVar1);
    }
    *(int *)&pFVar3[1].Data = iVar9 + 1;
    *(undefined8 *)(pFVar3->Data + (longlong)iVar9 * 8) = *(undefined8 *)pFVar11;
  }
  return;
}

// operator() @ 149c57af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
`PCGSurfaceSampler::SampleSurface'::__l2::<lambda_2>::operator()
          (void *this,int param_1,int param_2,int param_3)

{
  float fVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  bool bVar15;
  char cVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  float *pfVar20;
  uint *puVar21;
  double *pdVar22;
  undefined8 *puVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  double dVar28;
  double dVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  float fVar34;
  double dVar35;
  float fVar36;
  undefined1 auStack_4c8 [32];
  double *local_4a8;
  longlong local_4a0;
  longlong local_498;
  int local_490;
  int local_48c;
  int local_488;
  float local_484;
  int local_480;
  longlong local_478;
  int local_470;
  int local_46c;
  int local_468;
  uint local_464;
  longlong local_460;
  int local_458;
  int local_454;
  int local_450;
  undefined8 local_448 [2];
  longlong local_438;
  int local_430;
  int local_42c;
  int local_428;
  undefined8 local_418 [6];
  undefined8 local_3e8;
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double dStack_3a0;
  undefined1 local_398 [16];
  undefined1 local_388 [16];
  undefined8 local_378;
  double local_370;
  double dStack_368;
  double local_360;
  double local_358;
  double dStack_350;
  double local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 local_310;
  uint local_308;
  uint uStack_304;
  uint uStack_300;
  uint uStack_2fc;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined1 local_2d8;
  double local_2d0;
  double dStack_2c8;
  double local_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  undefined1 local_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  undefined1 local_278 [16];
  double local_268;
  double dStack_260;
  undefined1 local_258 [16];
  double local_248;
  double dStack_240;
  float local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined4 local_218;
  undefined4 uStack_214;
  uint uStack_210;
  uint uStack_20c;
  double local_208;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  undefined8 uStack_190;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  longlong local_168;
  int local_160;
  int local_15c;
  int local_158;
  double local_148 [12];
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_4c8;
  (**(code **)(**(longlong **)((longlong)this + 0x28) + 0x4c0))
            (*(longlong **)((longlong)this + 0x28),&local_168,0);
  (**(code **)(**(longlong **)((longlong)this + 0x28) + 0x4c8))
            (*(longlong **)((longlong)this + 0x28),&local_498,0);
  (**(code **)(**(longlong **)((longlong)this + 0x28) + 0x4f0))
            (*(longlong **)((longlong)this + 0x28),&local_478,0);
  (**(code **)(**(longlong **)((longlong)this + 0x28) + 0x4f8))
            (*(longlong **)((longlong)this + 0x28),&local_460,0);
  (**(code **)(**(longlong **)((longlong)this + 0x28) + 0x4e0))
            (*(longlong **)((longlong)this + 0x28),&local_438,0);
  uVar13 = _UNK_15066df7c;
  uVar12 = _UNK_15066df78;
  uVar11 = __xmm_80000000000000008000000000000000._4_4_;
  uVar10 = (uint)__xmm_80000000000000008000000000000000;
  dVar9 = __real_3fe0000000000000;
  local_480 = param_1 + param_3;
  iVar17 = 0;
  fVar34 = __real_3f800000;
  if (param_1 < local_480) {
    do {
      lVar3 = *(longlong *)this;
      if (((param_1 < 0) || (*(int *)(lVar3 + 0xa8) <= param_1)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < CellCount",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSurfaceSampler.cpp"
                              ,0xcd,L""), bVar15)) {
        pcVar6 = (code *)swi(3);
        iVar17 = (*pcVar6)();
        return iVar17;
      }
      iVar18 = (*(int *)(lVar3 + 0x9c) - *(int *)(lVar3 + 0x98)) + 1;
      lVar4 = *(longlong *)this;
      iVar24 = param_1 % iVar18 + *(int *)(lVar3 + 0x98);
      iVar26 = *(int *)(lVar3 + 0xa0) + param_1 / iVar18;
      dVar28 = *(double *)(lVar4 + 0x68);
      dVar35 = *(double *)(lVar4 + 0x70);
      dVar7 = *(double *)(lVar4 + 0x50);
      dVar8 = *(double *)(lVar4 + 0x58);
      local_3e8 = *(undefined8 *)(lVar4 + 0x60);
      dVar2 = *(double *)(lVar4 + 0x88);
      dVar29 = *(double *)(lVar4 + 0x80);
      iVar18 = PCGHelpers::ComputeSeed(*(int *)(lVar4 + 0xb0),iVar24,iVar26);
      lVar4 = *(longlong *)this;
      fVar1 = *(float *)(lVar4 + 0xac);
      uVar19 = iVar18 * 0xbb38435 + 0x3619636b;
      fVar36 = (float)(uVar19 >> 9 | 0x3f800000) - fVar34;
      if (fVar36 < fVar1) {
        uVar19 = uVar19 * 0xbb38435 + 0x3619636b;
        uVar27 = uVar19 * 0xbb38435 + 0x3619636b;
        local_198 = *(double *)(lVar4 + 0xb8);
        dVar29 = (double)((float)(uVar19 >> 9 | 0x3f800000) - fVar34) * dVar7 +
                 dVar28 + (double)iVar24 * dVar29;
        dVar28 = (double)((float)(uVar27 >> 9 | 0x3f800000) - fVar34) * dVar8 +
                 dVar35 + (double)iVar26 * dVar2;
        dVar2 = dVar29;
        if (*(char *)(lVar4 + 0x30) != '\0') {
          dVar35 = *(double *)(lVar4 + 0xf0) * dVar28;
          dVar2 = *(double *)(lVar4 + 0xe0) * dVar28 + *(double *)(lVar4 + 0xc0) * dVar29 +
                  *(double *)(lVar4 + 0x100) * local_198 +
                  *(double *)(lVar4 + 0x120) * __real_3ff0000000000000;
          dVar28 = *(double *)(lVar4 + 0xe8) * dVar28 + *(double *)(lVar4 + 200) * dVar29 +
                   *(double *)(lVar4 + 0x108) * local_198 +
                   *(double *)(lVar4 + 0x128) * __real_3ff0000000000000;
          local_198 = dVar35 + *(double *)(lVar4 + 0xd0) * dVar29 +
                      *(double *)(lVar4 + 0x110) * local_198 +
                      *(double *)(lVar4 + 0x130) * __real_3ff0000000000000;
        }
        local_308 = *(uint *)(lVar3 + 8) ^ uVar10;
        uStack_304 = *(uint *)(lVar3 + 0xc) ^ uVar11;
        uStack_300 = *(uint *)(lVar3 + 0x10) ^ uVar12;
        uStack_2fc = *(uint *)(lVar3 + 0x14) ^ uVar13;
        local_2f8 = CONCAT44((uint)((ulonglong)*(undefined8 *)(lVar3 + 0x18) >> 0x20) ^ uVar11,
                             (uint)*(undefined8 *)(lVar3 + 0x18) ^ uVar10);
        local_2f0 = *(undefined8 *)(lVar3 + 8);
        uStack_2e8 = *(undefined8 *)(lVar3 + 0x10);
        uVar32 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        uVar33 = (undefined4)
                 ((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_2e0 = *(undefined8 *)(lVar3 + 0x18);
        local_3d8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        dStack_3d0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_340 = 0;
        local_2d8 = 1;
        local_378 = 0x3f800000;
        local_318 = 0x3f000000;
        local_310 = 0xffffffffffffffff;
        local_3c8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        dStack_3c0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_3b8 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        dStack_3b0 = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
        local_3a8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        dStack_3a0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
        local_370 = (double)CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._4_4_ ^ uVar11,
                                     UE::Math::TVector<double>::OneVector.field0_0x0._0_4_ ^ uVar10)
        ;
        uVar30 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        uVar31 = (undefined4)
                 ((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        local_360 = (double)CONCAT44((uint)((ulonglong)
                                            UE::Math::TVector<double>::OneVector.field0_0x0._16_8_
                                           >> 0x20) ^ uVar11,
                                     SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0)
                                     ^ uVar10);
        dStack_368 = (double)CONCAT44((uint)((ulonglong)
                                             UE::Math::TVector<double>::OneVector.field0_0x0._8_8_
                                            >> 0x20) ^ uVar11,
                                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0
                                           ) ^ uVar10);
        local_338 = ___xmm_3ff00000000000003ff0000000000000;
        uStack_330 = _UNK_150689688;
        local_328 = ___xmm_3ff00000000000003ff0000000000000;
        uStack_320 = _UNK_150689688;
        local_358 = (double)CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._4_4_,
                                     UE::Math::TVector<double>::OneVector.field0_0x0._0_4_);
        dStack_350 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
        local_398._8_4_ = uVar32;
        local_398._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_398._12_4_ = uVar33;
        local_388._8_4_ = uVar30;
        local_388._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_388._12_4_ = uVar31;
        local_348 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
        local_4a0 = *(longlong *)((longlong)this + 0x20);
        local_4a8 = &local_3d8;
        local_1a8._8_4_ = SUB84(dVar28,0);
        local_1a8._0_8_ = dVar2;
        local_1a8._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
        uStack_190 = 0;
        local_188._8_4_ = uVar32;
        local_188._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_188._12_4_ = uVar33;
        local_178._8_4_ = uVar30;
        local_178._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_178._12_4_ = uVar31;
        local_1c8 = local_3d8;
        dStack_1c0 = dStack_3d0;
        local_1b8 = local_3c8;
        dStack_1b0 = dStack_3c0;
        cVar16 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x3d0))
                           (*(longlong **)((longlong)this + 0x10),&local_1c8,&local_308,
                            *(undefined8 *)((longlong)this + 0x18));
        fVar34 = __real_3f800000;
        if (cVar16 != '\0') {
          uVar25 = (uint)~param_2 >> 0x1f;
          dVar2 = (local_358 + local_370) * dVar9;
          dVar29 = (dStack_350 + dStack_368) * dVar9;
          uVar19 = 0;
          if (param_2 < local_488) {
            uVar19 = uVar25;
          }
          dVar28 = (local_348 + local_360) * dVar9;
          local_370 = dVar2 - *(double *)(lVar3 + 8);
          dStack_368 = dVar29 - *(double *)(lVar3 + 0x10);
          local_360 = dVar28 - *(double *)(lVar3 + 0x18);
          dStack_350 = dVar29 + *(double *)(lVar3 + 0x10);
          local_348 = dVar28 + *(double *)(lVar3 + 0x18);
          local_358 = dVar2 + *(double *)(lVar3 + 8);
          local_318 = CONCAT44(local_318._4_4_,*(undefined4 *)(lVar3 + 0x28));
          if (uVar19 == 0) {
            local_4a8 = (double *)(longlong)param_2;
            local_4a0 = (longlong)local_488;
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < NumElements)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                ,0x8b,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar15) {
              pcVar6 = (code *)swi(3);
              iVar17 = (*pcVar6)();
              return iVar17;
            }
          }
          if (param_2 == param_2 % local_48c) {
            pfVar20 = (float *)((longlong)local_490 * (longlong)(param_2 % local_48c) + local_498);
          }
          else {
            pfVar20 = &local_484;
          }
          *pfVar20 = 1.0;
          plVar5 = *(longlong **)((longlong)this + 8);
          if (plVar5 != (longlong *)0x0) {
            local_298 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
            dStack_290 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
            local_238 = 1.0;
            local_1d8 = 0x3f000000;
            local_1d0 = 0xffffffffffffffff;
            local_4a8 = (double *)0x0;
            local_288 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
            dStack_280 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
            local_278._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
            local_278._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_278._12_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
            local_258._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
            local_258._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
            local_258._12_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
            local_268 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            dStack_260 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
            uStack_210 = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0);
            uStack_20c = (uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                               0x20);
            local_228 = CONCAT44(uStack_20c ^ uVar11,uStack_210 ^ uVar10);
            local_248 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
            dStack_240 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
            local_230 = CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._4_4_ ^ uVar11,
                                 UE::Math::TVector<double>::OneVector.field0_0x0._0_4_ ^ uVar10);
            local_220 = CONCAT44((uint)((ulonglong)
                                        UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                                       0x20) ^ uVar11,
                                 SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^
                                 uVar10);
            local_218 = UE::Math::TVector<double>::OneVector.field0_0x0._0_4_;
            uStack_214 = UE::Math::TVector<double>::OneVector.field0_0x0._4_4_;
            local_208 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
            local_1f8 = ___xmm_3ff00000000000003ff0000000000000;
            uStack_1f0 = _UNK_150689688;
            local_1e8 = ___xmm_3ff00000000000003ff0000000000000;
            uStack_1e0 = _UNK_150689688;
            local_2d0 = local_370;
            dStack_2c8 = dStack_368;
            local_2a0 = 1;
            local_2c0 = local_360;
            local_2b8 = local_358;
            dStack_2b0 = dStack_350;
            local_2a8 = local_348;
            cVar16 = (**(code **)(*plVar5 + 0x3c0))(plVar5,&local_3d8,&local_2d0,&local_298);
            fVar34 = __real_3f800000;
            if (cVar16 == '\0') goto LAB_149c5853a;
            uVar19 = 0;
            if (param_2 < local_488) {
              uVar19 = uVar25;
            }
            if (uVar19 == 0) {
              local_4a8 = (double *)(longlong)param_2;
              local_4a0 = (longlong)local_488;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < NumElements)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                  ,0x8b,
                                  L"Array index out of bounds: %lld from an array of size %lld");
              if (bVar15) {
                pcVar6 = (code *)swi(3);
                iVar17 = (*pcVar6)();
                return iVar17;
              }
            }
            if (param_2 == param_2 % local_48c) {
              pfVar20 = (float *)((longlong)local_490 * (longlong)(param_2 % local_48c) + local_498)
              ;
            }
            else {
              pfVar20 = &local_484;
            }
            *pfVar20 = local_238 * *pfVar20;
          }
          if (*(char *)(lVar3 + 0x24) != '\0') {
            uVar19 = 0;
            if (param_2 < local_488) {
              uVar19 = uVar25;
            }
            if (uVar19 == 0) {
              local_4a8 = (double *)(longlong)param_2;
              local_4a0 = (longlong)local_488;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < NumElements)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                  ,0x8b,
                                  L"Array index out of bounds: %lld from an array of size %lld");
              if (bVar15) {
                pcVar6 = (code *)swi(3);
                iVar17 = (*pcVar6)();
                return iVar17;
              }
            }
            if (param_2 == param_2 % local_48c) {
              pfVar20 = (float *)((longlong)local_490 * (longlong)(param_2 % local_48c) + local_498)
              ;
            }
            else {
              pfVar20 = &local_484;
            }
            *pfVar20 = ((fVar1 - fVar36) / fVar1) * *pfVar20;
          }
          uVar19 = 0;
          if (param_2 < local_468) {
            uVar19 = uVar25;
          }
          if (uVar19 == 0) {
            local_4a8 = (double *)(longlong)param_2;
            local_4a0 = (longlong)local_468;
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < NumElements)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                ,0x8b,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar15) {
              pcVar6 = (code *)swi(3);
              iVar17 = (*pcVar6)();
              return iVar17;
            }
          }
          if (param_2 == param_2 % local_46c) {
            puVar21 = (uint *)((longlong)local_470 * (longlong)(param_2 % local_46c) + local_478);
          }
          else {
            puVar21 = &local_464;
          }
          *puVar21 = uVar27;
          uVar19 = 0;
          if (param_2 < local_158) {
            uVar19 = uVar25;
          }
          if (uVar19 == 0) {
            local_4a8 = (double *)(longlong)param_2;
            local_4a0 = (longlong)local_158;
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < NumElements)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                ,0x8b,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar15) {
              pcVar6 = (code *)swi(3);
              iVar17 = (*pcVar6)();
              return iVar17;
            }
          }
          if (param_2 == param_2 % local_15c) {
            pdVar22 = (double *)((longlong)local_160 * (longlong)(param_2 % local_15c) + local_168);
          }
          else {
            pdVar22 = local_148;
          }
          *pdVar22 = local_3d8;
          pdVar22[1] = dStack_3d0;
          pdVar22[2] = local_3c8;
          pdVar22[3] = dStack_3c0;
          pdVar22[4] = local_3b8;
          pdVar22[5] = dStack_3b0;
          pdVar22[6] = local_3a8;
          pdVar22[7] = dStack_3a0;
          pdVar22[8] = (double)local_398._0_8_;
          pdVar22[9] = (double)local_398._8_8_;
          pdVar22[10] = (double)local_388._0_8_;
          pdVar22[0xb] = (double)local_388._8_8_;
          uVar19 = 0;
          if (param_2 < local_450) {
            uVar19 = uVar25;
          }
          if (uVar19 == 0) {
            local_4a8 = (double *)(longlong)param_2;
            local_4a0 = (longlong)local_450;
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < NumElements)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                ,0x8b,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar15) {
              pcVar6 = (code *)swi(3);
              iVar17 = (*pcVar6)();
              return iVar17;
            }
          }
          if (param_2 == param_2 % local_454) {
            puVar23 = (undefined8 *)
                      ((longlong)local_458 * (longlong)(param_2 % local_454) + local_460);
          }
          else {
            puVar23 = local_448;
          }
          *puVar23 = local_310;
          uVar19 = 0;
          if (param_2 < local_428) {
            uVar19 = uVar25;
          }
          if (uVar19 == 0) {
            local_4a8 = (double *)(longlong)param_2;
            local_4a0 = (longlong)local_428;
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < NumElements)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                ,0x8b,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar15) {
              pcVar6 = (code *)swi(3);
              iVar17 = (*pcVar6)();
              return iVar17;
            }
          }
          uVar14 = uStack_330;
          if (param_2 == param_2 % local_42c) {
            puVar23 = (undefined8 *)
                      ((longlong)local_430 * (longlong)(param_2 % local_42c) + local_438);
          }
          else {
            puVar23 = local_418;
          }
          iVar17 = iVar17 + 1;
          *puVar23 = local_338;
          puVar23[1] = uVar14;
          uVar14 = uStack_320;
          param_2 = param_2 + 1;
          puVar23[2] = local_328;
          puVar23[3] = uVar14;
          fVar34 = __real_3f800000;
        }
      }
LAB_149c5853a:
      param_1 = param_1 + 1;
    } while (param_1 < local_480);
  }
  return iVar17;
}

// operator() @ 149c585e0

bool __thiscall
`PCGSplineSamplerHelpers::SegmentPolygonIntersection2D'::__l2::<lambda_2>::operator()
          (void *this,TVector2<double> *param_1,TVector2<double> *param_2,TVector2<double> *param_3,
          TVector2<double> *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  double dVar9;
  uint uVar10;
  double dVar11;
  uint uVar12;
  uint uVar13;
  uint uVar15;
  double dVar14;
  
  dVar7 = (param_4->field0_0x0)._s_0.Y - (param_3->field0_0x0)._s_0.Y;
  dVar14 = (param_1->field0_0x0)._s_0.X;
  dVar4 = (param_2->field0_0x0)._s_0.X - dVar14;
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  dVar5 = (param_2->field0_0x0)._s_0.Y - dVar1;
  dVar2 = (param_3->field0_0x0)._s_0.X;
  dVar6 = (param_4->field0_0x0)._s_0.X - dVar2;
  dVar11 = dVar5 * dVar5 + dVar4 * dVar4;
  dVar3 = dVar7 * dVar7 + dVar6 * dVar6;
  dVar9 = dVar7 * dVar4 - dVar6 * dVar5;
  if (((__real_3e45798ee2308c3a <
        (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
      ((double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
       __real_3e45798ee2308c3a)) ||
     ((double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3e45798ee2308c3a)) {
    bVar8 = false;
  }
  else {
    dVar9 = dVar14 * dVar4 + dVar1 * dVar5;
    uVar13 = SUB84(dVar9,0) ^ (uint)__xmm_80000000000000008000000000000000;
    uVar15 = (uint)((ulonglong)dVar9 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
    dVar9 = dVar2 * dVar6 + (param_3->field0_0x0)._s_0.Y * dVar7;
    uVar10 = SUB84(dVar9,0) ^ (uint)__xmm_80000000000000008000000000000000;
    uVar12 = (uint)((ulonglong)dVar9 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
    dVar14 = ((double)CONCAT44(uVar15,uVar13) * dVar4 * (__real_3ff0000000000000 / dVar11) + dVar14)
             - ((double)CONCAT44(uVar12,uVar10) * dVar6 * (__real_3ff0000000000000 / dVar3) + dVar2)
    ;
    if ((__real_3f1a36e2e0000000 <
         (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
       (dVar14 = ((double)CONCAT44(uVar15,uVar13) * dVar5 * (__real_3ff0000000000000 / dVar11) +
                 dVar1) - ((double)CONCAT44(uVar12,uVar10) * dVar7 *
                           (__real_3ff0000000000000 / dVar3) + (param_3->field0_0x0)._s_0.Y),
       uVar10 = SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar12 = (uint)((ulonglong)dVar14 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar12,uVar10) &&
       (double)CONCAT44(uVar12,uVar10) != __real_3f1a36e2e0000000)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
  }
  return bVar8;
}

// operator() @ 149c587f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`PCGSplitSpline::SplitSpline'::__l2::<lambda_2>::operator()(void *this,double param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  UPCGSplineData *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TVector<double> *pTVar8;
  TQuat<double> *this_01;
  TRotator<double> *pTVar9;
  UPCGMetadata *pUVar10;
  longlong lVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  float fVar15;
  float local_138;
  undefined4 uStack_134;
  double dStack_130;
  double dStack_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  undefined1 local_b8;
  undefined7 uStack_b7;
  TVector<double> local_a8;
  TVector<double> local_90;
  TRotator<double> local_78;
  TVector<double> local_60;
  TQuat<double> local_48 [2];
  
  local_118 = 0.0;
  dStack_110 = 0.0;
  fVar15 = (float)param_1;
  dStack_128 = 0.0;
  dStack_120 = 0.0;
  local_e8 = 0.0;
  dStack_e0 = 0.0;
  local_d8 = (double)___xmm_3ff00000000000000000000000000000;
  dStack_d0 = (double)_UNK_15061cbc8;
  dStack_130 = 0.0;
  local_108 = 0.0;
  local_c8 = (double)___xmm_3ff00000000000003ff0000000000000;
  dStack_c0 = (double)_UNK_150689688;
  local_138 = fVar15;
  pTVar8 = FPCGSplineStruct::GetLocationAtSplineInputKey
                     ((FPCGSplineStruct *)(**(longlong **)((longlong)this + 0x18) + 0x110),&local_a8
                      ,fVar15,Local);
  dStack_130 = (pTVar8->field0_0x0)._s_0.X;
  dStack_128 = (pTVar8->field0_0x0)._s_0.Y;
  dStack_120 = (pTVar8->field0_0x0)._s_0.Z;
  pTVar8 = FPCGSplineStruct::GetTangentAtSplineInputKey
                     ((FPCGSplineStruct *)(**(longlong **)((longlong)this + 0x18) + 0x110),&local_90
                      ,fVar15,Local);
  local_118 = (pTVar8->field0_0x0)._s_0.X;
  dStack_110 = (pTVar8->field0_0x0)._s_0.Y;
  local_108 = (pTVar8->field0_0x0)._s_0.Z;
  dStack_100 = local_118;
  dStack_f8 = dStack_110;
  dStack_f0 = local_108;
  this_01 = FPCGSplineStruct::GetQuaternionAtSplineInputKey
                      ((FPCGSplineStruct *)(**(longlong **)((longlong)this + 0x18) + 0x110),local_48
                       ,fVar15,Local);
  pTVar9 = UE::Math::TQuat<double>::Rotator(this_01,&local_78);
  local_e8 = pTVar9->Pitch;
  dStack_e0 = pTVar9->Yaw;
  local_d8 = pTVar9->Roll;
  pTVar8 = FPCGSplineStruct::GetScaleAtSplineInputKey
                     ((FPCGSplineStruct *)(**(longlong **)((longlong)this + 0x18) + 0x110),&local_60
                      ,fVar15);
  lVar11 = (longlong)param_1;
  dStack_d0 = (pTVar8->field0_0x0)._s_0.X;
  local_c8 = (pTVar8->field0_0x0)._s_0.Y;
  dStack_c0 = (pTVar8->field0_0x0)._s_0.Z;
  local_b8 = 4;
  dVar12 = param_1;
  if ((lVar11 != -0x8000000000000000) && ((double)lVar11 != param_1)) {
    auVar13._8_8_ = param_1;
    auVar13._0_8_ = param_1;
    uVar6 = movmskpd(0,auVar13);
    dVar12 = (double)(longlong)(lVar11 - (ulonglong)(uVar6 & 1));
  }
  dVar12 = param_1 - dVar12;
  pFVar2 = *(ForAnyElementType **)((longlong)this + 8);
  local_118 = local_118 * dVar12;
  dStack_110 = dStack_110 * dVar12;
  dVar14 = __real_3ff0000000000000 - dVar12;
  local_108 = local_108 * dVar12;
  dStack_100 = dStack_100 * dVar14;
  dStack_f8 = dStack_f8 * dVar14;
  dStack_f0 = dStack_f0 * dVar14;
  if ((pFVar2->Data <= (FScriptContainerElement *)&local_138) &&
     ((FScriptContainerElement *)&local_138 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x88)) {
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
  iVar7 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x888,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar7 + 1;
  lVar11 = (longlong)iVar7 * 0x88;
  pFVar3 = pFVar2->Data;
  *(ulonglong *)(pFVar3 + lVar11) = CONCAT44(uStack_134,local_138);
  *(double *)(pFVar3 + lVar11 + 8) = dStack_130;
  *(double *)(pFVar3 + lVar11 + 0x10) = dStack_128;
  *(double *)(pFVar3 + lVar11 + 0x10 + 8) = dStack_120;
  *(double *)(pFVar3 + lVar11 + 0x20) = local_118;
  *(double *)(pFVar3 + lVar11 + 0x20 + 8) = dStack_110;
  *(double *)(pFVar3 + lVar11 + 0x30) = local_108;
  *(double *)(pFVar3 + lVar11 + 0x30 + 8) = dStack_100;
  *(double *)(pFVar3 + lVar11 + 0x40) = dStack_f8;
  *(double *)(pFVar3 + lVar11 + 0x40 + 8) = dStack_f0;
  *(double *)(pFVar3 + lVar11 + 0x50) = local_e8;
  *(double *)(pFVar3 + lVar11 + 0x50 + 8) = dStack_e0;
  *(double *)(pFVar3 + lVar11 + 0x60) = local_d8;
  *(double *)(pFVar3 + lVar11 + 0x60 + 8) = dStack_d0;
  *(double *)(pFVar3 + lVar11 + 0x70) = local_c8;
  *(double *)(pFVar3 + lVar11 + 0x70 + 8) = dStack_c0;
  *(ulonglong *)(pFVar3 + lVar11 + 0x80) = CONCAT71(uStack_b7,local_b8);
  if (*(int *)(*(longlong *)((longlong)this + 0x20) + 8) != 0) {
    pFVar2 = *(ForAnyElementType **)((longlong)this + 0x10);
    if ((pFVar2->Data < (FScriptContainerElement *)((longlong)&PCGInvalidEntryKey + 1)) &&
       (&PCGInvalidEntryKey < pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8))
    {
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
    iVar7 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar7 + 1;
    pFVar3 = pFVar2->Data;
    *(undefined8 *)(pFVar3 + (longlong)iVar7 * 8) = 0xffffffffffffffff;
    this_00 = (UPCGSplineData *)**(undefined8 **)((longlong)this + 0x18);
    pUVar10 = (UPCGMetadata *)(**(code **)(*(longlong *)**(undefined8 **)this + 0x328))();
    UPCGSplineData::WriteMetadataToEntry
              (this_00,fVar15,(long64 *)(pFVar3 + (longlong)iVar7 * 8),pUVar10);
  }
  return;
}

// operator() @ 149c59ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
`PCGVolumeSampler::SampleVolume'::__l2::<lambda_4>::operator()
          (void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  long64 lVar20;
  char cVar21;
  int iVar22;
  TTransform<double> *pTVar23;
  float *pfVar24;
  TVector<double> *pTVar25;
  TVector4<double> *pTVar26;
  int *piVar27;
  long64 *plVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  uint uVar36;
  uint uVar37;
  undefined1 auStack_4e8 [32];
  undefined8 local_4c8;
  int local_4b8;
  double local_4b0;
  double dStack_4a8;
  double local_4a0;
  double local_498;
  double dStack_490;
  double local_488;
  undefined1 local_480;
  double local_478;
  double dStack_470;
  double local_468;
  double dStack_460;
  double local_458;
  double dStack_450;
  double local_448;
  double dStack_440;
  undefined1 local_438 [16];
  undefined1 local_428 [16];
  float local_418;
  double local_410;
  double dStack_408;
  double local_400;
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  double dStack_3c0;
  undefined8 local_3b8;
  long64 local_3b0;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  double local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  undefined4 local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 local_330;
  double local_328;
  double dStack_320;
  double local_318;
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  undefined8 uStack_2a0;
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  FPCGPointValueRanges local_278;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_4e8;
  iVar31 = 0;
  FPCGPointValueRanges::FPCGPointValueRanges(&local_278,*(UPCGBasePointData **)this,false);
  dVar6 = _UNK_150689688;
  dVar5 = ___xmm_3ff00000000000003ff0000000000000;
  dVar4 = __real_bfe0000000000000;
  dVar3 = __real_3fe0000000000000;
  local_4b8 = param_1 + param_3;
  if (param_1 < local_4b8) {
    uVar36 = (uint)__xmm_80000000000000008000000000000000;
    uVar37 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    do {
      local_2b8 = *(double *)((longlong)this + 0x20);
      dStack_2b0 = *(double *)((longlong)this + 0x28);
      iVar30 = (*(int *)((longlong)this + 0x3c) - *(int *)((longlong)this + 0x38)) + 1;
      local_2a8 = *(double *)((longlong)this + 0x30);
      local_4b0 = local_2b8 * dVar4;
      local_480 = 1;
      dStack_4a8 = dStack_2b0 * dVar4;
      local_418 = 1.0;
      local_4a0 = local_2a8 * dVar4;
      local_498 = local_2b8 * dVar3;
      iVar22 = *(int *)((longlong)this + 0x38) + param_1 % iVar30;
      iVar29 = (*(int *)((longlong)this + 0x44) - *(int *)((longlong)this + 0x40)) + 1;
      dStack_490 = dStack_2b0 * dVar3;
      local_488 = local_2a8 * dVar3;
      local_478 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      dStack_470 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_468 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      dStack_460 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      iVar1 = (int)((longlong)
                    ((ulonglong)(uint)((int)((longlong)param_1 / (longlong)iVar30) >> 0x1f) << 0x20
                    | (longlong)param_1 / (longlong)iVar30 & 0xffffffffU) % (longlong)iVar29) +
              *(int *)((longlong)this + 0x40);
      local_2b8 = (double)iVar22 * local_2b8;
      iVar29 = param_1 / (iVar29 * iVar30) + *(int *)((longlong)this + 0x48);
      dStack_2b0 = (double)iVar1 * dStack_2b0;
      local_2a8 = (double)iVar29 * local_2a8;
      uVar34 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      uVar35 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20)
      ;
      uVar32 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      uVar33 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20)
      ;
      uStack_2a0 = 0;
      local_458 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      dStack_450 = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_448 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      dStack_440 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_298._8_4_ = uVar34;
      local_298._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_298._12_4_ = uVar35;
      local_288._8_4_ = uVar32;
      local_288._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_288._12_4_ = uVar33;
      local_438._8_4_ = uVar34;
      local_438._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_438._12_4_ = uVar35;
      local_428._8_4_ = uVar32;
      local_428._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_428._12_4_ = uVar33;
      local_410 = (double)CONCAT44((uint)((ulonglong)
                                          UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                                         0x20) ^ uVar37,
                                   SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^
                                   uVar36);
      dStack_408 = (double)CONCAT44((uint)((ulonglong)
                                           UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                                          0x20) ^ uVar37,
                                    SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0)
                                    ^ uVar36);
      local_3e8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
      local_400 = (double)CONCAT44((uint)((ulonglong)
                                          UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                                         0x20) ^ uVar37,
                                   SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^
                                   uVar36);
      local_3f8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
      dStack_3f0 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
      local_3d8 = dVar5;
      dStack_3d0 = dVar6;
      local_3c8 = dVar5;
      dStack_3c0 = dVar6;
      local_3b8 = 0x3f000000;
      local_3b0 = -1;
      local_4c8 = 0;
      local_2d8 = local_478;
      dStack_2d0 = dStack_470;
      local_2c8 = local_468;
      dStack_2c0 = dStack_460;
      cVar21 = (**(code **)(**(longlong **)((longlong)this + 8) + 0x3c0))
                         (*(longlong **)((longlong)this + 8),&local_2d8,&local_4b0,&local_478);
      if (cVar21 != '\0') {
        plVar2 = *(longlong **)((longlong)this + 0x10);
        if (plVar2 != (longlong *)0x0) {
          local_3a8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          dStack_3a0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          local_348 = 0x3f800000;
          local_2e8 = 0x3f000000;
          local_2e0 = 0xffffffffffffffff;
          local_4c8 = 0;
          local_398 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          dStack_390 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_388 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          dStack_380 = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
          local_368 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          dStack_360 = (double)GlobalVectorConstants::Float1110.m128_f32[1];
          local_378 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          dStack_370 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_338 = CONCAT44((uint)((ulonglong)
                                      UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >> 0x20)
                               ^ uVar37,SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y
                                              ,0) ^ uVar36);
          local_358 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          dStack_350 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          local_340 = CONCAT44((uint)((ulonglong)
                                      UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >> 0x20)
                               ^ uVar37,SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X
                                              ,0) ^ uVar36);
          local_330 = CONCAT44((uint)((ulonglong)
                                      UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >> 0x20
                                     ) ^ uVar37,
                               SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^
                               uVar36);
          local_328 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
          dStack_320 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
          local_318 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
          local_308 = dVar5;
          dStack_300 = dVar6;
          local_2f8 = dVar5;
          dStack_2f0 = dVar6;
          cVar21 = (**(code **)(*plVar2 + 0x3c0))(plVar2,&local_2d8,&local_4b0,&local_3a8);
          if (cVar21 == '\0') goto LAB_149c5a105;
        }
        iVar22 = PCGHelpers::ComputeSeed(iVar22,iVar1,iVar29);
        dVar14 = dStack_440;
        dVar13 = local_448;
        dVar12 = dStack_450;
        dVar11 = local_458;
        dVar10 = dStack_460;
        dVar9 = local_468;
        dVar8 = dStack_470;
        dVar7 = local_478;
        local_3b8 = CONCAT44(iVar22,*(undefined4 *)((longlong)this + 0x18));
        local_410 = local_4b0;
        dStack_408 = dStack_4a8;
        local_400 = local_4a0;
        local_3f8 = local_498;
        dStack_3f0 = dStack_490;
        local_3e8 = local_488;
        if (local_278.TransformRange.NumElements != 0) {
          uVar15 = local_438._0_8_;
          uVar16 = local_438._8_8_;
          uVar17 = local_428._0_8_;
          uVar18 = local_428._8_8_;
          pTVar23 = TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
                    ::operator[](&local_278.TransformRange,param_2);
          (pTVar23->Rotation).XY.m128d_f64[0] = dVar7;
          (pTVar23->Rotation).XY.m128d_f64[1] = dVar8;
          (pTVar23->Rotation).ZW.m128d_f64[0] = dVar9;
          (pTVar23->Rotation).ZW.m128d_f64[1] = dVar10;
          (pTVar23->Translation).XY.m128d_f64[0] = dVar11;
          (pTVar23->Translation).XY.m128d_f64[1] = dVar12;
          (pTVar23->Translation).ZW.m128d_f64[0] = dVar13;
          (pTVar23->Translation).ZW.m128d_f64[1] = dVar14;
          (pTVar23->Scale3D).XY.m128d_f64[0] = (double)uVar15;
          (pTVar23->Scale3D).XY.m128d_f64[1] = (double)uVar16;
          (pTVar23->Scale3D).ZW.m128d_f64[0] = (double)uVar17;
          (pTVar23->Scale3D).ZW.m128d_f64[1] = (double)uVar18;
        }
        fVar19 = local_418;
        if (local_278.DensityRange.NumElements != 0) {
          pfVar24 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                              (&local_278.DensityRange,param_2);
          *pfVar24 = fVar19;
        }
        if (local_278.SteepnessRange.NumElements != 0) {
          fVar19 = (float)local_3b8;
          pfVar24 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                              (&local_278.SteepnessRange,param_2);
          *pfVar24 = fVar19;
        }
        dVar9 = local_400;
        dVar8 = dStack_408;
        dVar7 = local_410;
        if (local_278.BoundsMinRange.NumElements != 0) {
          pTVar25 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                    ::operator[](&local_278.BoundsMinRange,param_2);
          (pTVar25->field0_0x0)._s_0.X = dVar7;
          (pTVar25->field0_0x0)._s_0.Y = dVar8;
          (pTVar25->field0_0x0)._s_0.Z = dVar9;
        }
        dVar9 = local_3e8;
        dVar8 = dStack_3f0;
        dVar7 = local_3f8;
        if (local_278.BoundsMaxRange.NumElements != 0) {
          pTVar25 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                    ::operator[](&local_278.BoundsMaxRange,param_2);
          (pTVar25->field0_0x0)._s_0.X = dVar7;
          (pTVar25->field0_0x0)._s_0.Y = dVar8;
          (pTVar25->field0_0x0)._s_0.Z = dVar9;
        }
        dVar10 = dStack_3c0;
        dVar9 = local_3c8;
        dVar8 = dStack_3d0;
        dVar7 = local_3d8;
        if (local_278.ColorRange.NumElements != 0) {
          pTVar26 = TPCGValueRange<UE::Math::TVector4<double>,TStridedView<UE::Math::TVector4<double>,int>_>
                    ::operator[](&local_278.ColorRange,param_2);
          (pTVar26->field0_0x0)._s_0.X = dVar7;
          (pTVar26->field0_0x0)._s_0.Y = dVar8;
          (pTVar26->field0_0x0)._s_0.Z = dVar9;
          (pTVar26->field0_0x0)._s_0.W = dVar10;
        }
        if (local_278.SeedRange.NumElements != 0) {
          iVar22 = local_3b8._4_4_;
          piVar27 = TPCGValueRange<int,TStridedView<int,int>_>::operator[]
                              (&local_278.SeedRange,param_2);
          *piVar27 = iVar22;
        }
        lVar20 = local_3b0;
        if (local_278.MetadataEntryRange.NumElements != 0) {
          plVar28 = TPCGValueRange<__int64,TStridedView<__int64,int>_>::operator[]
                              (&local_278.MetadataEntryRange,param_2);
          *plVar28 = lVar20;
        }
        iVar31 = iVar31 + 1;
        param_2 = param_2 + 1;
      }
LAB_149c5a105:
      param_1 = param_1 + 1;
    } while (param_1 < local_4b8);
  }
  return iVar31;
}

// `vector_deleting_destructor'`adjustor{600}' @ 149c5a1a4

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl TPCGTimeSlicedContext<struct
   FPCGSpawnSplineMeshPerExecutionState,struct FPCGSpawnSplineMeshPerIterationState,struct
   FPCGSpawnSplineMeshContext>::`vector deleting destructor'`adjustor{600}' (unsigned int) __ptr64
    */

void * __thiscall
TPCGTimeSlicedContext<FPCGSpawnSplineMeshPerExecutionState,FPCGSpawnSplineMeshPerIterationState,FPCGSpawnSplineMeshContext>
::_vector_deleting_destructor__adjustor_600__
          (TPCGTimeSlicedContext<FPCGSpawnSplineMeshPerExecutionState,FPCGSpawnSplineMeshPerIterationState,FPCGSpawnSplineMeshContext>
           *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((TPCGTimeSlicedContext<FPCGSpawnSplineMeshPerExecutionState,FPCGSpawnSplineMeshPerIterationState,FPCGSpawnSplineMeshContext>
                       *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 149c5a1b8

/* [thunk]:public: virtual void * __ptr64 __cdecl FPCGSpawnSplineMeshContext::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
FPCGSpawnSplineMeshContext::_vector_deleting_destructor__adjustor_600__
          (FPCGSpawnSplineMeshContext *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FPCGSpawnSplineMeshContext *)&this[-1].field_0x30,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 149c5a1cc

/* [thunk]:public: virtual void * __ptr64 __cdecl FPCGStaticMeshSpawnerContext::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
FPCGStaticMeshSpawnerContext::_vector_deleting_destructor__adjustor_600__
          (FPCGStaticMeshSpawnerContext *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FPCGStaticMeshSpawnerContext *)&this[-1]._padding_,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 149c5a1e0

/* [thunk]:public: virtual void * __ptr64 __cdecl FPCGTextureSamplerContext::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
FPCGTextureSamplerContext::_vector_deleting_destructor__adjustor_600__
          (FPCGTextureSamplerContext *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FPCGTextureSamplerContext *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 149c5a200

void * __thiscall
FPCGAttributeAccessorKeysSingleObjectPtr<unsigned_char,void>::_scalar_deleting_destructor_
          (FPCGAttributeAccessorKeysSingleObjectPtr<unsigned_char,void> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5a230

void * __thiscall
FPCGAttributeAccessorKeysSingleObjectPtr<FPCGSplineMeshParams,void>::_scalar_deleting_destructor_
          (FPCGAttributeAccessorKeysSingleObjectPtr<FPCGSplineMeshParams,void> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5a260

void * __thiscall
FPCGAttributeAccessorKeysSingleObjectPtr<FSplineMeshComponentDescriptor,void>::
_scalar_deleting_destructor_
          (FPCGAttributeAccessorKeysSingleObjectPtr<FSplineMeshComponentDescriptor,void> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5a290

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
FPCGAttributeAccessorKeysSingleObjectPtr<AActor,void>::_scalar_deleting_destructor_
          (FPCGAttributeAccessorKeysSingleObjectPtr<AActor,void> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5a2c0

void * __thiscall
FPCGAttributeAccessorKeysSingleObjectPtr<USplineComponent,void>::_scalar_deleting_destructor_
          (FPCGAttributeAccessorKeysSingleObjectPtr<USplineComponent,void> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5a2f0

void * __thiscall
FPCGAttributeAccessorKeysSingleObjectPtr<USplineMeshComponent,void>::_scalar_deleting_destructor_
          (FPCGAttributeAccessorKeysSingleObjectPtr<USplineMeshComponent,void> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5a320

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGTextureSamplerElement::ExecuteInternal'[::I]::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &_vftable_;
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

// `scalar_deleting_destructor' @ 149c5a390

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGWorldRayHitQueryElement::ExecuteInternal'::__l31::<lambda_3>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FPCGWorldRayHitQueryElement::ExecuteInternal'::`31'::<lambda_3>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5a3d0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGClipPathsElement,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FPCGClipPathsElement,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5a410

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGCreatePolygonElement,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FPCGCreatePolygonElement,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5a450

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGGetLandscapeDataElement,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FPCGGetLandscapeDataElement,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5a490

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGGetSegmentElement,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FPCGGetSegmentElement,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5a4d0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGSpawnActorElement,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FPCGSpawnActorElement,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5a510

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGSpawnSplineElement,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FPCGSpawnSplineElement,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5a550

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGSpawnSplineMeshElement,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FPCGSpawnSplineMeshElement,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5a590

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGSplineDirectionElement,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FPCGSplineDirectionElement,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5a5d0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGSplineIntersectionElement,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FPCGSplineIntersectionElement,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5a610

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGSplineSamplerElement,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FPCGSplineSamplerElement,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5a650

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGSplitPointsElement,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FPCGSplitPointsElement,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5a690

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGSplitSplineElement,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FPCGSplitSplineElement,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5a6d0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGStaticMeshSpawnerElement,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FPCGStaticMeshSpawnerElement,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5a710

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGSurfaceSamplerElement,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FPCGSurfaceSamplerElement,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5a750

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGTextureSamplerElement,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FPCGTextureSamplerElement,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5a790

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGTransformPointsElement,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FPCGTransformPointsElement,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5a7d0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGTrivialElement,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FPCGTrivialElement,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5a810

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGUnionElement,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FPCGUnionElement,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5a850

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGUserParameterGetElement,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FPCGUserParameterGetElement,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5a890

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGVisualizeAttribute,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FPCGVisualizeAttribute,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5a8d0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGVolumeSamplerElement,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FPCGVolumeSamplerElement,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5a910

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGWorldRayHitQueryElement,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FPCGWorldRayHitQueryElement,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5a950

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGWorldRaycastElement,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FPCGWorldRaycastElement,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5a990

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGWorldVolumetricQueryElement,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FPCGWorldVolumetricQueryElement,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5a9d0

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
TPCGTimeSlicedContext<FPCGWorldRaycast::FExecutionState,FPCGWorldRaycast::FIterationState,FPCGContext>
::_scalar_deleting_destructor_
          (TPCGTimeSlicedContext<FPCGWorldRaycast::FExecutionState,FPCGWorldRaycast::FIterationState,FPCGContext>
           *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  ForElementType<unsigned_int> FVar2;
  
  pFVar1 = (this->TrackedObjectArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPCGWorldRaycast::FIterationState,int>
            ((FIterationState *)(this->PerIterationStateArray).AllocatorInstance.Data,
             (this->PerIterationStateArray).ArrayNum);
  pFVar1 = (this->PerIterationStateArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FVar2 = (this->PerExecutionStateData).CollisionQueryParams.IgnoreSourceObjects.AllocatorInstance.
          SecondaryData;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  FVar2 = (this->PerExecutionStateData).CollisionQueryParams.IgnoreComponents.AllocatorInstance.
          SecondaryData;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  pFVar1 = (this->PerIterationStateResultArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FPCGContext::~FPCGContext((FPCGContext *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x360);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5aa80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
TPCGTimeSlicedContext<FPCGSpawnSplineMeshPerExecutionState,FPCGSpawnSplineMeshPerIterationState,FPCGSpawnSplineMeshContext>
::_scalar_deleting_destructor_
          (TPCGTimeSlicedContext<FPCGSpawnSplineMeshPerExecutionState,FPCGSpawnSplineMeshPerIterationState,FPCGSpawnSplineMeshContext>
           *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->TrackedObjectArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPCGSpawnSplineMeshPerIterationState,int>
            ((FPCGSpawnSplineMeshPerIterationState *)
             (this->PerIterationStateArray).AllocatorInstance.Data,
             (this->PerIterationStateArray).ArrayNum);
  pFVar1 = (this->PerIterationStateArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PerIterationStateResultArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  IPCGAsyncLoadingContext::~IPCGAsyncLoadingContext((IPCGAsyncLoadingContext *)&this->_padding_);
  FPCGContext::~FPCGContext((FPCGContext *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5ab10

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
TPCGTimeSlicedContext<PCGSurfaceSampler::FSurfaceSamplerExecutionState,PCGSurfaceSampler::FSurfaceSamplerIterationState,FPCGContext>
::_scalar_deleting_destructor_
          (TPCGTimeSlicedContext<PCGSurfaceSampler::FSurfaceSamplerExecutionState,PCGSurfaceSampler::FSurfaceSamplerIterationState,FPCGContext>
           *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->TrackedObjectArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PerIterationStateArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PerExecutionStateData).GeneratingShapes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PerIterationStateResultArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FPCGContext::~FPCGContext((FPCGContext *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2e8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5aba0

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
TPCGTimeSlicedContext<PCGVolumeSampler::FVolumeSamplerExecutionState,PCGVolumeSampler::FVolumeSamplerIterationState,FPCGContext>
::_scalar_deleting_destructor_
          (TPCGTimeSlicedContext<PCGVolumeSampler::FVolumeSamplerExecutionState,PCGVolumeSampler::FVolumeSamplerIterationState,FPCGContext>
           *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->TrackedObjectArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PerIterationStateArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PerExecutionStateData).GeneratingShapes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PerIterationStateResultArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FPCGContext::~FPCGContext((FPCGContext *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2e8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5ac30

void * __thiscall
TPCGTimeSlicedElementBase<FPCGWorldRaycast::FExecutionState,FPCGWorldRaycast::FIterationState,FPCGContext>
::_scalar_deleting_destructor_
          (TPCGTimeSlicedElementBase<FPCGWorldRaycast::FExecutionState,FPCGWorldRaycast::FIterationState,FPCGContext>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5ac60

void * __thiscall
TPCGTimeSlicedElementBase<FPCGSpawnSplineMeshPerExecutionState,FPCGSpawnSplineMeshPerIterationState,FPCGSpawnSplineMeshContext>
::_scalar_deleting_destructor_
          (TPCGTimeSlicedElementBase<FPCGSpawnSplineMeshPerExecutionState,FPCGSpawnSplineMeshPerIterationState,FPCGSpawnSplineMeshContext>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5ac90

void * __thiscall
TPCGTimeSlicedElementBase<PCGSurfaceSampler::FSurfaceSamplerExecutionState,PCGSurfaceSampler::FSurfaceSamplerIterationState,FPCGContext>
::_scalar_deleting_destructor_
          (TPCGTimeSlicedElementBase<PCGSurfaceSampler::FSurfaceSamplerExecutionState,PCGSurfaceSampler::FSurfaceSamplerIterationState,FPCGContext>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5acc0

void * __thiscall
TPCGTimeSlicedElementBase<PCGVolumeSampler::FVolumeSamplerExecutionState,PCGVolumeSampler::FVolumeSamplerIterationState,FPCGContext>
::_scalar_deleting_destructor_
          (TPCGTimeSlicedElementBase<PCGVolumeSampler::FVolumeSamplerExecutionState,PCGVolumeSampler::FVolumeSamplerIterationState,FPCGContext>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5acf0

void * __thiscall
PCGSplineSamplerHelpers::FDimensionSampler::_scalar_deleting_destructor_
          (FDimensionSampler *this,uint param_1)

{
  ~FDimensionSampler(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5ad30

void * __thiscall
FPCGClipPathsElement::_scalar_deleting_destructor_(FPCGClipPathsElement *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5ad60

void * __thiscall
FPCGCreatePolygonElement::_scalar_deleting_destructor_(FPCGCreatePolygonElement *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5ad90

void * __thiscall
FPCGGetLandscapeDataElement::_scalar_deleting_destructor_
          (FPCGGetLandscapeDataElement *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5adc0

void * __thiscall
FPCGGetSegmentElement::_scalar_deleting_destructor_(FPCGGetSegmentElement *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5adf0

void * __thiscall
FPCGSoftISMComponentDescriptor::_scalar_deleting_destructor_
          (FPCGSoftISMComponentDescriptor *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->AdditionalCommaSeparatedTags).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ComponentTags).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FSoftISMComponentDescriptor::~FSoftISMComponentDescriptor((FSoftISMComponentDescriptor *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x280);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5ae50

void * __thiscall
FPCGSpawnActorElement::_scalar_deleting_destructor_(FPCGSpawnActorElement *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5ae80

void * __thiscall
FPCGSpawnSplineElement::_scalar_deleting_destructor_(FPCGSpawnSplineElement *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5aeb0

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
FPCGSpawnSplineMeshContext::_scalar_deleting_destructor_
          (FPCGSpawnSplineMeshContext *this,uint param_1)

{
  IPCGAsyncLoadingContext::~IPCGAsyncLoadingContext((IPCGAsyncLoadingContext *)&this->field_0x258);
  FPCGContext::~FPCGContext((FPCGContext *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x288);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5af00

void * __thiscall
FPCGSpawnSplineMeshElement::_scalar_deleting_destructor_
          (FPCGSpawnSplineMeshElement *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5af30

void * __thiscall
FPCGSplineDirectionElement::_scalar_deleting_destructor_
          (FPCGSplineDirectionElement *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5af60

void * __thiscall
FPCGSplineIntersectionElement::_scalar_deleting_destructor_
          (FPCGSplineIntersectionElement *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5af90

void * __thiscall
FPCGSplineSamplerElement::_scalar_deleting_destructor_(FPCGSplineSamplerElement *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5afc0

void * __thiscall
FPCGSplitPointsElement::_scalar_deleting_destructor_(FPCGSplitPointsElement *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5aff0

void * __thiscall
FPCGSplitSplineElement::_scalar_deleting_destructor_(FPCGSplitSplineElement *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5b020

void * __thiscall
FPCGStaticMeshSpawnerContext::_scalar_deleting_destructor_
          (FPCGStaticMeshSpawnerContext *this,uint param_1)

{
  ~FPCGStaticMeshSpawnerContext(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x460);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5b060

void * __thiscall
FPCGStaticMeshSpawnerElement::_scalar_deleting_destructor_
          (FPCGStaticMeshSpawnerElement *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5b090

void * __thiscall
FPCGSurfaceSamplerElement::_scalar_deleting_destructor_
          (FPCGSurfaceSamplerElement *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5b0c0

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
FPCGTextureSamplerContext::_scalar_deleting_destructor_
          (FPCGTextureSamplerContext *this,uint param_1)

{
  IPCGAsyncLoadingContext::~IPCGAsyncLoadingContext((IPCGAsyncLoadingContext *)&this->_padding_);
  FPCGContext::~FPCGContext((FPCGContext *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x300);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5b110

void * __thiscall
FPCGTextureSamplerElement::_scalar_deleting_destructor_
          (FPCGTextureSamplerElement *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5b140

void * __thiscall
FPCGTransformPointsElement::_scalar_deleting_destructor_
          (FPCGTransformPointsElement *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5b170

void * __thiscall
FPCGTrivialElement::_scalar_deleting_destructor_(FPCGTrivialElement *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5b1a0

void * __thiscall
FPCGUnionElement::_scalar_deleting_destructor_(FPCGUnionElement *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5b1d0

void * __thiscall
FPCGUserParameterGetElement::_scalar_deleting_destructor_
          (FPCGUserParameterGetElement *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5b200

void * __thiscall
FPCGVisualizeAttribute::_scalar_deleting_destructor_(FPCGVisualizeAttribute *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5b230

void * __thiscall
FPCGVolumeSamplerElement::_scalar_deleting_destructor_(FPCGVolumeSamplerElement *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5b260

void * __thiscall
FPCGWorldRayHitQueryElement::_scalar_deleting_destructor_
          (FPCGWorldRayHitQueryElement *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5b290

void * __thiscall
FPCGWorldRaycastElement::_scalar_deleting_destructor_(FPCGWorldRaycastElement *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5b2c0

void * __thiscall
FPCGWorldVolumetricQueryElement::_scalar_deleting_destructor_
          (FPCGWorldVolumetricQueryElement *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5b2f0

void * __thiscall
PCGSplineSamplerHelpers::FVolumeSampler::_scalar_deleting_destructor_
          (FVolumeSampler *this,uint param_1)

{
  FDimensionSampler::~FDimensionSampler((FDimensionSampler *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5b330

void * __thiscall
UPCGClipPathsSettings::_scalar_deleting_destructor_(UPCGClipPathsSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGClipPathsSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5b390

void * __thiscall
UPCGCreatePolygon2DSettings::_scalar_deleting_destructor_
          (UPCGCreatePolygon2DSettings *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGCreatePolygon2DSettings__6B_;
  DestructItems<FString,int>
            (*(FString **)&(this->PolygonWidthAttribute).field_0x28,
             *(int *)&(this->PolygonWidthAttribute).field_0x30);
  pvVar1 = *(void **)&(this->PolygonWidthAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->HoleIndexAttribute).field_0x28,
             *(int *)&(this->HoleIndexAttribute).field_0x30);
  pvVar1 = *(void **)&(this->HoleIndexAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x168);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5b440

void * __thiscall
UPCGGenericUserParameterGetSettings::_scalar_deleting_destructor_
          (UPCGGenericUserParameterGetSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGGenericUserParameterGetSettings__6B_;
  pFVar1 = (this->PropertyPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5b4c0

void * __thiscall
UPCGGetLandscapeSettings::_scalar_deleting_destructor_(UPCGGetLandscapeSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGGetLandscapeSettings__6B_;
  UPCGDataFromActorSettings::~UPCGDataFromActorSettings((UPCGDataFromActorSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5b520

void * __thiscall
UPCGGetPCGComponentSettings::_scalar_deleting_destructor_
          (UPCGGetPCGComponentSettings *this,uint param_1)

{
  *(undefined ***)this = &___7UPCGGetPCGComponentSettings__6B_;
  UPCGDataFromActorSettings::~UPCGDataFromActorSettings((UPCGDataFromActorSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5b580

void * __thiscall
UPCGGetPrimitiveSettings::_scalar_deleting_destructor_(UPCGGetPrimitiveSettings *this,uint param_1)

{
  *(undefined ***)this = &___7UPCGGetPrimitiveSettings__6B_;
  UPCGDataFromActorSettings::~UPCGDataFromActorSettings((UPCGDataFromActorSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5b5e0

void * __thiscall
UPCGGetSegmentSettings::_scalar_deleting_destructor_(UPCGGetSegmentSettings *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGGetSegmentSettings__6B_;
  DestructItems<FString,int>
            (*(FString **)&(this->HoleIndexAttribute).field_0x28,
             *(int *)&(this->HoleIndexAttribute).field_0x30);
  pvVar1 = *(void **)&(this->HoleIndexAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->SegmentIndexAttribute).field_0x28,
             *(int *)&(this->SegmentIndexAttribute).field_0x30);
  pvVar1 = *(void **)&(this->SegmentIndexAttribute).field_0x28;
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

// `scalar_deleting_destructor' @ 149c5b690

void * __thiscall
UPCGGetSplineSettings::_scalar_deleting_destructor_(UPCGGetSplineSettings *this,uint param_1)

{
  *(undefined ***)this = &___7UPCGGetSplineSettings__6B_;
  UPCGDataFromActorSettings::~UPCGDataFromActorSettings((UPCGDataFromActorSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5b6f0

void * __thiscall
UPCGGetVirtualTextureSettings::_scalar_deleting_destructor_
          (UPCGGetVirtualTextureSettings *this,uint param_1)

{
  *(undefined ***)this = &___7UPCGGetVirtualTextureSettings__6B_;
  UPCGDataFromActorSettings::~UPCGDataFromActorSettings((UPCGDataFromActorSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5b750

void * __thiscall
UPCGGetVolumeSettings::_scalar_deleting_destructor_(UPCGGetVolumeSettings *this,uint param_1)

{
  *(undefined ***)this = &___7UPCGGetVolumeSettings__6B_;
  UPCGDataFromActorSettings::~UPCGDataFromActorSettings((UPCGDataFromActorSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5b7b0

void * __thiscall
UPCGReverseSplineSettings::_scalar_deleting_destructor_
          (UPCGReverseSplineSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGReverseSplineSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5b810

void * __thiscall
UPCGSpawnActorNode::_scalar_deleting_destructor_(UPCGSpawnActorNode *this,uint param_1)

{
  *(undefined ***)this = &___7UPCGSpawnActorNode__6B_;
  UPCGBaseSubgraphNode::~UPCGBaseSubgraphNode((UPCGBaseSubgraphNode *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5b870

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
UPCGSpawnActorSettings::_scalar_deleting_destructor_(UPCGSpawnActorSettings *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UPCGSpawnActorSettings__6B_;
  FPCGDataLayerSettings::~FPCGDataLayerSettings(&this->DataLayerSettings);
  pvVar1 = *(void **)&(this->RootActor).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FPCGObjectPropertyOverrideDescription,int>
            ((FPCGObjectPropertyOverrideDescription *)
             (this->SpawnedActorPropertyOverrideDescriptions).AllocatorInstance.Data,
             (this->SpawnedActorPropertyOverrideDescriptions).ArrayNum);
  pFVar2 = (this->SpawnedActorPropertyOverrideDescriptions).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TagsToAddOnActors).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->PostSpawnFunctionNames).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UPCGBaseSubgraphSettings::~UPCGBaseSubgraphSettings((UPCGBaseSubgraphSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5b940

void * __thiscall
UPCGSpawnSplineMeshSettings::_scalar_deleting_destructor_
          (UPCGSpawnSplineMeshSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UPCGSpawnSplineMeshSettings__6B_;
  DestructItems<FPCGObjectPropertyOverrideDescription,int>
            ((FPCGObjectPropertyOverrideDescription *)
             (this->SplineMeshComponentOverride).AllocatorInstance.Data,
             (this->SplineMeshComponentOverride).ArrayNum);
  pFVar1 = (this->SplineMeshComponentOverride).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPCGObjectPropertyOverrideDescription,int>
            ((FPCGObjectPropertyOverrideDescription *)
             (this->SplineMeshParamsOverride).AllocatorInstance.Data,
             (this->SplineMeshParamsOverride).ArrayNum);
  pFVar1 = (this->SplineMeshParamsOverride).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPCGObjectPropertyOverrideDescription,int>
            ((FPCGObjectPropertyOverrideDescription *)
             (this->SplineMeshOverrideDescriptions).AllocatorInstance.Data,
             (this->SplineMeshOverrideDescriptions).ArrayNum);
  pFVar1 = (this->SplineMeshOverrideDescriptions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PostProcessFunctionNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->TargetActor).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FSoftSplineMeshComponentDescriptor::~FSoftSplineMeshComponentDescriptor
            (&this->SplineMeshDescriptor);
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x468);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5ba40

void * __thiscall
UPCGSpawnSplineSettings::_scalar_deleting_destructor_(UPCGSpawnSplineSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UPCGSpawnSplineSettings__6B_;
  DestructItems<FPCGObjectPropertyOverrideDescription,int>
            ((FPCGObjectPropertyOverrideDescription *)
             (this->PropertyOverrideDescriptions).AllocatorInstance.Data,
             (this->PropertyOverrideDescriptions).ArrayNum);
  pFVar1 = (this->PropertyOverrideDescriptions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PostProcessFunctionNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->TargetActor).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->SpawnComponentFromAttributeName).field_0x28,
             *(int *)&(this->SpawnComponentFromAttributeName).field_0x30);
  pvVar2 = *(void **)&(this->SpawnComponentFromAttributeName).field_0x28;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5bb10

void * __thiscall
UPCGSplineIntersectionSettings::_scalar_deleting_destructor_
          (UPCGSplineIntersectionSettings *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGSplineIntersectionSettings__6B_;
  DestructItems<FString,int>
            (*(FString **)&(this->IntersectingSplineIndexAttribute).field_0x28,
             *(int *)&(this->IntersectingSplineIndexAttribute).field_0x30);
  pvVar1 = *(void **)&(this->IntersectingSplineIndexAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->OriginatingSplineIndexAttribute).field_0x28,
             *(int *)&(this->OriginatingSplineIndexAttribute).field_0x30);
  pvVar1 = *(void **)&(this->OriginatingSplineIndexAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x158);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5bbc0

void * __thiscall
UPCGSplineSamplerSettings::_scalar_deleting_destructor_
          (UPCGSplineSamplerSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UPCGSplineSamplerSettings__6B_;
  pFVar1 = (this->SamplerParams).InteriorDensityFalloffCurve.EditorCurveData.Keys.AllocatorInstance.
           Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->SamplerParams).InteriorDensityFalloffCurve.EditorCurveData._padding_ =
       (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->SamplerParams).InteriorDensityFalloffCurve.EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->SamplerParams).InteriorDensityFalloffCurve.EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->SamplerParams).InteriorDensityFalloffCurve.EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->SamplerParams).InteriorDensityFalloffCurve.EditorCurveData._padding_);
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5bc90

void * __thiscall
UPCGSplitPointsSettings::_scalar_deleting_destructor_(UPCGSplitPointsSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGSplitPointsSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5bcf0

void * __thiscall
UPCGSplitSplinesSettings::_scalar_deleting_destructor_(UPCGSplitSplinesSettings *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGSplitSplinesSettings__6B_;
  DestructItems<FString,int>
            (*(FString **)&(this->OutputOriginatingSplineIndex).field_0x28,
             *(int *)&(this->OutputOriginatingSplineIndex).field_0x30);
  pvVar1 = *(void **)&(this->OutputOriginatingSplineIndex).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->Attribute).field_0x28,*(int *)&(this->Attribute).field_0x30);
  pvVar1 = *(void **)&(this->Attribute).field_0x28;
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

// `scalar_deleting_destructor' @ 149c5bda0

void * __thiscall
UPCGStaticMeshSpawnerKernel::_scalar_deleting_destructor_
          (UPCGStaticMeshSpawnerKernel *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGStaticMeshSpawnerKernel__6B_;
  UPCGComputeKernel::~UPCGComputeKernel((UPCGComputeKernel *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5be00

void * __thiscall
UPCGStaticMeshSpawnerSettings::_scalar_deleting_destructor_
          (UPCGStaticMeshSpawnerSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UPCGStaticMeshSpawnerSettings__6B_;
  pFVar1 = (this->PostProcessFunctionNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->TargetActor).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  DestructItems<FPCGObjectPropertyOverrideDescription,int>
            ((FPCGObjectPropertyOverrideDescription *)
             (this->StaticMeshComponentPropertyOverrides).AllocatorInstance.Data,
             (this->StaticMeshComponentPropertyOverrides).ArrayNum);
  pFVar1 = (this->StaticMeshComponentPropertyOverrides).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5beb0

void * __thiscall
UPCGSurfaceSamplerSettings::_scalar_deleting_destructor_
          (UPCGSurfaceSamplerSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGSurfaceSamplerSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5bf10

void * __thiscall
UPCGTextureSamplerSettings::_scalar_deleting_destructor_
          (UPCGTextureSamplerSettings *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGTextureSamplerSettings__6B_;
  pvVar1 = *(void **)&(this->Texture).SoftObjectPtr.field_0x18;
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

// `scalar_deleting_destructor' @ 149c5bf90

void * __thiscall
UPCGTransformPointsSettings::_scalar_deleting_destructor_
          (UPCGTransformPointsSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGTransformPointsSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x180);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5bff0

void * __thiscall
UPCGUnionSettings::_scalar_deleting_destructor_(UPCGUnionSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGUnionSettings__6B_;
  UPCGSettingsWithDynamicInputs::~UPCGSettingsWithDynamicInputs
            ((UPCGSettingsWithDynamicInputs *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5c050

void * __thiscall
UPCGUserParameterGetSettings::_scalar_deleting_destructor_
          (UPCGUserParameterGetSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGUserParameterGetSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5c0b0

void * __thiscall
UPCGVisualizeAttributeSettings::_scalar_deleting_destructor_
          (UPCGVisualizeAttributeSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UPCGVisualizeAttributeSettings__6B_;
  pFVar1 = (this->CustomPrefixString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->AttributeSource).field_0x28,
             *(int *)&(this->AttributeSource).field_0x30);
  pvVar2 = *(void **)&(this->AttributeSource).field_0x28;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5c150

void * __thiscall
UPCGVolumeSamplerSettings::_scalar_deleting_destructor_
          (UPCGVolumeSamplerSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGVolumeSamplerSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5c1b0

/* WARNING: Enum "EPCGWorldQueryFilter": Some values do not have unique names */

void * __thiscall
UPCGWorldQuerySettings::_scalar_deleting_destructor_(UPCGWorldQuerySettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGWorldQuerySettings__6B_;
  FPCGWorldCommonQueryParams::~FPCGWorldCommonQueryParams
            ((FPCGWorldCommonQueryParams *)&this->QueryParams);
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x198);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5c220

/* WARNING: Enum "EPCGWorldQueryFilter": Some values do not have unique names */

void * __thiscall
UPCGWorldRayHitSettings::_scalar_deleting_destructor_(UPCGWorldRayHitSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGWorldRayHitSettings__6B_;
  FPCGWorldCommonQueryParams::~FPCGWorldCommonQueryParams
            ((FPCGWorldCommonQueryParams *)&this->QueryParams);
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x228);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149c5c290

/* WARNING: Enum "EPCGWorldQueryFilter": Some values do not have unique names */

void * __thiscall
UPCGWorldRaycastElementSettings::_scalar_deleting_destructor_
          (UPCGWorldRaycastElementSettings *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGWorldRaycastElementSettings__6B_;
  FPCGWorldCommonQueryParams::~FPCGWorldCommonQueryParams
            ((FPCGWorldCommonQueryParams *)&this->WorldQueryParams);
  DestructItems<FString,int>
            (*(FString **)&(this->RayLengthAttribute).field_0x28,
             *(int *)&(this->RayLengthAttribute).field_0x30);
  pvVar1 = *(void **)&(this->RayLengthAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->EndPointAttribute).field_0x28,
             *(int *)&(this->EndPointAttribute).field_0x30);
  pvVar1 = *(void **)&(this->EndPointAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->RayDirectionAttribute).field_0x28,
             *(int *)&(this->RayDirectionAttribute).field_0x30);
  pvVar1 = *(void **)&(this->RayDirectionAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->OriginInputAttribute).field_0x28,
             *(int *)&(this->OriginInputAttribute).field_0x30);
  pvVar1 = *(void **)&(this->OriginInputAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x328);
  }
  return this;
}

// AssignValue @ 149c5ce00

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

bool __cdecl
PCGUserParameterGet::Helpers::Conversion::AssignValue
          (FPCGMetadataTypesConstantStruct *param_1,UPCGGraph *param_2,FName param_3,FText *param_4)

{
  EPCGMetadataTypes EVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FProperty *this;
  FPropertyBagPropertyDesc *pFVar5;
  TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> TVar6;
  FText *pFVar7;
  undefined8 *local_res18;
  undefined1 local_78 [24];
  FText local_60;
  FText local_50;
  FText local_40;
  <lambda_1> local_28;
  
  if ((param_3 == (FName)0x0) || (param_2 == (UPCGGraph *)0x0)) {
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_40,L"PCGUserParameterGetElement",
                        L"ConversionAssignValueInvalidGraphOrParameter",
                        L"Invalid graph or parameter.");
    FText::operator=(param_4,pFVar7);
    local_50.TextData.Reference = local_40.TextData.Reference;
LAB_149c5cfee:
    if (local_50.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
    }
    return false;
  }
  this = (FProperty *)(**(code **)(param_2->_padding_ + 0x2c0))(param_2);
  if ((this == (FProperty *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("UserParametersStruct",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGUserParameterGet.cpp"
                         ,0x86,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pFVar5 = FInstancedPropertyBag::FindPropertyDescByName((FInstancedPropertyBag *)this,param_3);
  if ((pFVar5 == (FPropertyBagPropertyDesc *)0x0) ||
     ((pFVar5->ContainerTypes).NumContainers != '\0')) {
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_50,L"PCGUserParameterGetElement",
                        L"ConversionAssignValueInvalidParamNameOrContainer",
                        L"Parameter not found or it is a container, which is not supported.");
    FText::operator=(param_4,pFVar7);
    goto LAB_149c5cfee;
  }
  TVar6 = PCGAttributeAccessorHelpers::CreatePropertyAccessor((FProperty *)local_78);
  local_res18 = (undefined8 *)(TVar6.Ptr)->_padding_;
  (TVar6.Ptr)->_padding_ = 0;
  if ((undefined8 *)local_78._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_78._0_8_)(local_78._0_8_,1);
  }
  if (local_res18 == (undefined8 *)0x0) {
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)(local_78 + 8),L"PCGUserParameterGetElement",
                        L"ConversionAssignValueInvalidAccessor",
                        L"Could not access parameter, likely due to unsupported type.");
    FText::operator=(param_4,pFVar7);
  }
  else {
    EVar1 = *(EPCGMetadataTypes *)((longlong)local_res18 + 10);
    param_1->Type = EVar1;
    if (EVar1 != Unknown) {
      local_28.PropertyAccessor =
           (TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_> *
           )&local_res18;
      local_28.UserParametersStruct = (FInstancedPropertyBag *)this;
      local_28.OutFailReason = param_4;
      bVar3 = FPCGMetadataTypesConstantStruct::
              Dispatcher<_PCGUserParameterGet::Helpers::Conversion::AssignValue_::__l2::<lambda_1>_>
                        (param_1,&local_28);
      goto LAB_149c5cf71;
    }
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_60,L"PCGUserParameterGetElement",L"ConversionAssignValueUnknownType",
                        L"Parameter type is not supported by Create Constant.");
    FText::operator=(param_4,pFVar7);
    local_78._8_8_ = local_60.TextData.Reference;
  }
  if ((ITextData *)local_78._8_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_78._8_8_ + 0x10))();
  }
  bVar3 = false;
LAB_149c5cf71:
  if (local_res18 == (undefined8 *)0x0) {
    return bVar3;
  }
  (**(code **)*local_res18)(local_res18,1);
  return bVar3;
}

// CollapseColocatedIntersections @ 149c5d750

TArray<PCGSplineIntersection::IntersectionPoint,TSizedDefaultAllocator<32>_> * __cdecl
PCGSplineIntersection::CollapseColocatedIntersections
          (TArray<PCGSplineIntersection::IntersectionPoint,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,
          TArray<PCGSplineIntersection::IntersectionPoint,TSizedDefaultAllocator<32>_> *param_1,
          double param_2,UPCGSplineData *param_3)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  TArray<PCGSplineIntersection::IntersectionPoint,TSizedDefaultAllocator<32>_> *pTVar16;
  ulonglong uVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  FScriptContainerElement *pFVar22;
  FScriptContainerElement *pFVar23;
  longlong lVar24;
  double dVar25;
  undefined1 local_res8 [8];
  TArray<PCGSplineIntersection::IntersectionPoint,TSizedDefaultAllocator<32>_> *local_res10;
  undefined4 local_a8;
  uint local_a4;
  FScriptContainerElement *local_a0;
  ForAnyElementType local_98;
  undefined8 local_90;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  uVar3 = param_1->ArrayNum;
  local_res10 = param_1;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (0 < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x70,8,uVar3,&__return_storage_ptr__->AllocatorInstance,0,
               &__return_storage_ptr__->ArrayMax);
  }
  uVar3 = param_1->ArrayNum;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (0 < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar3,&local_98,0,(int *)((longlong)&local_90 + 4));
  }
  dVar12 = __real_3ff0000000000000;
  local_a4 = param_1->ArrayNum;
  uVar17 = (ulonglong)(int)local_a4;
  pFVar22 = (param_1->AllocatorInstance).Data;
  local_a0 = pFVar22 + uVar17 * 0x70;
  pFVar23 = local_a0;
LAB_149c5d842:
  do {
    if (param_1->ArrayNum != (int)uVar17) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<PCGSplineIntersection::IntersectionPoint_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar22 == pFVar23) {
      if (local_98.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data);
      }
      return __return_storage_ptr__;
    }
    if (param_3 == (UPCGSplineData *)0x0) {
      pFVar21 = pFVar22 + 0x20;
LAB_149c5d89a:
      pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (pFVar4 != pFVar4 + (longlong)__return_storage_ptr__->ArrayNum * 0x70) {
        pFVar18 = pFVar4;
        do {
          if ((*(double *)(pFVar18 + 0x28) - *(double *)(pFVar21 + 8)) *
              (*(double *)(pFVar18 + 0x28) - *(double *)(pFVar21 + 8)) +
              (*(double *)(pFVar18 + 0x20) - *(double *)pFVar21) *
              (*(double *)(pFVar18 + 0x20) - *(double *)pFVar21) +
              (*(double *)(pFVar18 + 0x30) - *(double *)(pFVar21 + 0x10)) *
              (*(double *)(pFVar18 + 0x30) - *(double *)(pFVar21 + 0x10)) <= param_2) {
            iVar14 = __return_storage_ptr__->ArrayNum;
            uVar3 = (uint)(((longlong)pFVar18 - (longlong)pFVar4) / 0x70);
            if (uVar3 == 0xffffffff) goto LAB_149c5d907;
            uVar20 = ~uVar3 >> 0x1f;
            uVar15 = 0;
            if ((int)uVar3 < iVar14) {
              uVar15 = uVar20;
            }
            if ((uVar15 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar5 = (code *)swi(3);
              pTVar16 = (TArray<PCGSplineIntersection::IntersectionPoint,TSizedDefaultAllocator<32>_>
                         *)(*pcVar5)();
              return pTVar16;
            }
            pFVar23 = (__return_storage_ptr__->AllocatorInstance).Data;
            lVar24 = (longlong)(int)uVar3;
            uVar15 = 0;
            if ((int)uVar3 < (int)local_90) {
              uVar15 = uVar20;
            }
            if ((uVar15 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar5 = (code *)swi(3);
              pTVar16 = (TArray<PCGSplineIntersection::IntersectionPoint,TSizedDefaultAllocator<32>_>
                         *)(*pcVar5)();
              return pTVar16;
            }
            dVar25 = (double)*(int *)(local_98.Data + lVar24 * 4);
            pFVar21 = pFVar23 + lVar24 * 0x70 + 0x28;
            dVar9 = *(double *)pFVar21;
            dVar8 = *(double *)(pFVar21 + 8);
            dVar1 = *(double *)(pFVar23 + lVar24 * 0x70 + 0x20);
            uVar15 = 0;
            if ((int)uVar3 < (int)local_90) {
              uVar15 = uVar20;
            }
            dVar10 = *(double *)(pFVar22 + 0x28);
            dVar11 = *(double *)(pFVar22 + 0x30);
            dVar2 = *(double *)(pFVar22 + 0x20);
            if ((uVar15 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar5 = (code *)swi(3);
              pTVar16 = (TArray<PCGSplineIntersection::IntersectionPoint,TSizedDefaultAllocator<32>_>
                         *)(*pcVar5)();
              return pTVar16;
            }
            uVar15 = 0;
            if ((int)uVar3 < __return_storage_ptr__->ArrayNum) {
              uVar15 = ~uVar3 >> 0x1f;
            }
            dVar6 = dVar12 / (double)(*(int *)(local_98.Data + lVar24 * 4) + 1);
            dVar8 = dVar6 * (dVar25 * dVar8 + dVar11);
            if ((uVar15 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar5 = (code *)swi(3);
              pTVar16 = (TArray<PCGSplineIntersection::IntersectionPoint,TSizedDefaultAllocator<32>_>
                         *)(*pcVar5)();
              return pTVar16;
            }
            pFVar23 = (__return_storage_ptr__->AllocatorInstance).Data;
            *(double *)(pFVar23 + (longlong)(int)uVar3 * 0x70 + 0x20) =
                 (dVar25 * dVar1 + dVar2) * dVar6;
            auVar7._8_4_ = SUB84(dVar8,0);
            auVar7._0_8_ = dVar6 * (dVar25 * dVar9 + dVar10);
            auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
            *(undefined1 (*) [16])(pFVar23 + (longlong)(int)uVar3 * 0x70 + 0x28) = auVar7;
            uVar15 = 0;
            if ((int)uVar3 < (int)local_90) {
              uVar15 = ~uVar3 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar5 = (code *)swi(3);
              pTVar16 = (TArray<PCGSplineIntersection::IntersectionPoint,TSizedDefaultAllocator<32>_>
                         *)(*pcVar5)();
              return pTVar16;
            }
            *(int *)(local_98.Data + (longlong)(int)uVar3 * 4) =
                 *(int *)(local_98.Data + (longlong)(int)uVar3 * 4) + 1;
            uVar17 = (ulonglong)local_a4;
            pFVar22 = pFVar22 + 0x70;
            param_1 = local_res10;
            pFVar23 = local_a0;
            goto LAB_149c5d842;
          }
          pFVar18 = pFVar18 + 0x70;
        } while (pFVar18 != pFVar4 + (longlong)__return_storage_ptr__->ArrayNum * 0x70);
      }
      iVar14 = __return_storage_ptr__->ArrayNum;
LAB_149c5d907:
      if (iVar14 == __return_storage_ptr__->ArrayMax) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x870,&__return_storage_ptr__->AllocatorInstance,
                            &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar14 + 1;
      lVar24 = *(longlong *)(pFVar22 + 8);
      local_a8 = 1;
      lVar19 = (longlong)iVar14 * 0x70;
      pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
      *(longlong *)(pFVar4 + lVar19) = *(longlong *)pFVar22;
      *(longlong *)(pFVar4 + lVar19 + 8) = lVar24;
      lVar24 = *(longlong *)(pFVar22 + 0x18);
      *(longlong *)(pFVar4 + lVar19 + 0x10) = *(longlong *)(pFVar22 + 0x10);
      *(longlong *)(pFVar4 + lVar19 + 0x10 + 8) = lVar24;
      lVar24 = *(longlong *)(pFVar22 + 0x28);
      *(longlong *)(pFVar4 + lVar19 + 0x20) = *(longlong *)(pFVar22 + 0x20);
      *(longlong *)(pFVar4 + lVar19 + 0x20 + 8) = lVar24;
      lVar24 = *(longlong *)(pFVar22 + 0x38);
      *(longlong *)(pFVar4 + lVar19 + 0x30) = *(longlong *)(pFVar22 + 0x30);
      *(longlong *)(pFVar4 + lVar19 + 0x30 + 8) = lVar24;
      lVar24 = *(longlong *)(pFVar22 + 0x48);
      *(longlong *)(pFVar4 + lVar19 + 0x40) = *(longlong *)(pFVar22 + 0x40);
      *(longlong *)(pFVar4 + lVar19 + 0x40 + 8) = lVar24;
      lVar24 = *(longlong *)(pFVar22 + 0x58);
      *(longlong *)(pFVar4 + lVar19 + 0x50) = *(longlong *)(pFVar22 + 0x50);
      *(longlong *)(pFVar4 + lVar19 + 0x50 + 8) = lVar24;
      lVar24 = *(longlong *)(pFVar22 + 0x68);
      *(longlong *)(pFVar4 + lVar19 + 0x60) = *(longlong *)(pFVar22 + 0x60);
      *(longlong *)(pFVar4 + lVar19 + 0x60 + 8) = lVar24;
      dVar1 = *(double *)(pFVar21 + 8);
      *(double *)(pFVar4 + lVar19 + 0x20) = *(double *)pFVar21;
      *(double *)(pFVar4 + lVar19 + 0x20 + 8) = dVar1;
      *(double *)(pFVar4 + lVar19 + 0x30) = *(double *)(pFVar21 + 0x10);
      if (((local_98.Data <= (FScriptContainerElement *)&local_a8) &&
          ((FScriptContainerElement *)&local_a8 < local_98.Data + (longlong)local_90._4_4_ * 4)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar5 = (code *)swi(3);
        pTVar16 = (TArray<PCGSplineIntersection::IntersectionPoint,TSizedDefaultAllocator<32>_> *)
                  (*pcVar5)();
        return pTVar16;
      }
      iVar14 = (int)local_90;
      if ((int)local_90 == local_90._4_4_) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_98,(int *)((longlong)&local_90 + 4));
      }
      local_90 = CONCAT44(local_90._4_4_,iVar14 + 1);
      *(undefined4 *)(local_98.Data + (longlong)iVar14 * 4) = local_a8;
      param_1 = local_res10;
    }
    else {
      if (param_3 == *(UPCGSplineData **)pFVar22) {
LAB_149c5d88a:
        pFVar21 = pFVar22 + 0x38;
        goto LAB_149c5d89a;
      }
      if (param_3 == *(UPCGSplineData **)(pFVar22 + 0x10)) {
        if (param_3 != *(UPCGSplineData **)pFVar22) {
          pFVar21 = pFVar22 + 0x50;
          goto LAB_149c5d89a;
        }
        goto LAB_149c5d88a;
      }
    }
    pFVar22 = pFVar22 + 0x70;
    uVar17 = (ulonglong)local_a4;
  } while( true );
}

// ComputeBoundingShape @ 149c5e810

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGSpatialData * __cdecl
PCGSettingsHelpers::ComputeBoundingShape(FPCGContext *param_1,FName param_2,bool *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UPCGSpatialData *pUVar4;
  longlong *plVar5;
  UClass *pUVar6;
  FName local_res10;
  
  local_res10 = param_2;
  pUVar4 = FPCGDataCollection::GetSpatialUnionOfInputsByPin
                     (&param_1->InputData,param_1,&local_res10,param_3);
  if (((pUVar4 == (UPCGSpatialData *)0x0) &&
      ((param_1->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0)) &&
     (bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), bVar3)) {
    if ((*param_3 != false) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("bOutUnionWasCreated == false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Helpers\\PCGSettingsHelpers.h"
                           ,0x5b,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UPCGSpatialData *)(*pcVar2)();
      return pUVar4;
    }
    if ((((param_1->ExecutionSource).InterfaceInstance == (IPCGGraphExecutionSource *)0x0) ||
        (bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), !bVar3)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                           ,0x8d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UPCGSpatialData *)(*pcVar2)();
      return pUVar4;
    }
    plVar5 = (longlong *)
             (**(code **)((longlong)*(param_1->ExecutionSource).InterfaceInstance + 0x18))();
    pUVar4 = (UPCGSpatialData *)(**(code **)(*plVar5 + 8))(plVar5);
    if (pUVar4 != (UPCGSpatialData *)0x0) {
      pUVar6 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar6->_padding_)) {
        return pUVar4;
      }
    }
    pUVar4 = (UPCGSpatialData *)0x0;
  }
  return pUVar4;
}

// EmptyLinkFunctionForGeneratedCodePCGClipPaths @ 149c61f20

void __cdecl EmptyLinkFunctionForGeneratedCodePCGClipPaths(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGCreatePolygon2D @ 149c61f30

void __cdecl EmptyLinkFunctionForGeneratedCodePCGCreatePolygon2D(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGGetSegment @ 149c61f40

void __cdecl EmptyLinkFunctionForGeneratedCodePCGGetSegment(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGSpawnActor @ 149c61f50

void __cdecl EmptyLinkFunctionForGeneratedCodePCGSpawnActor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGSpawnSpline @ 149c61f60

void __cdecl EmptyLinkFunctionForGeneratedCodePCGSpawnSpline(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGSpawnSplineMesh @ 149c61f70

void __cdecl EmptyLinkFunctionForGeneratedCodePCGSpawnSplineMesh(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGSplineDirection @ 149c61f80

void __cdecl EmptyLinkFunctionForGeneratedCodePCGSplineDirection(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGSplineIntersection @ 149c61f90

void __cdecl EmptyLinkFunctionForGeneratedCodePCGSplineIntersection(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGSplineMeshParams @ 149c61fa0

void __cdecl EmptyLinkFunctionForGeneratedCodePCGSplineMeshParams(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGSplineSampler @ 149c61fb0

void __cdecl EmptyLinkFunctionForGeneratedCodePCGSplineSampler(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGSplitPoints @ 149c61fc0

void __cdecl EmptyLinkFunctionForGeneratedCodePCGSplitPoints(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGSplitSplines @ 149c61fd0

void __cdecl EmptyLinkFunctionForGeneratedCodePCGSplitSplines(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGStaticMeshSpawner @ 149c61fe0

void __cdecl EmptyLinkFunctionForGeneratedCodePCGStaticMeshSpawner(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGStaticMeshSpawnerContext @ 149c61ff0

void __cdecl EmptyLinkFunctionForGeneratedCodePCGStaticMeshSpawnerContext(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGStaticMeshSpawnerKernel @ 149c62000

void __cdecl EmptyLinkFunctionForGeneratedCodePCGStaticMeshSpawnerKernel(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGSurfaceSampler @ 149c62010

void __cdecl EmptyLinkFunctionForGeneratedCodePCGSurfaceSampler(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGTextureSampler @ 149c62020

void __cdecl EmptyLinkFunctionForGeneratedCodePCGTextureSampler(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGTransformPoints @ 149c62030

void __cdecl EmptyLinkFunctionForGeneratedCodePCGTransformPoints(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGTypedGetter @ 149c62040

void __cdecl EmptyLinkFunctionForGeneratedCodePCGTypedGetter(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGUnionElement @ 149c62050

void __cdecl EmptyLinkFunctionForGeneratedCodePCGUnionElement(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGUserParameterGet @ 149c62060

void __cdecl EmptyLinkFunctionForGeneratedCodePCGUserParameterGet(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGVisualizeAttribute @ 149c62070

void __cdecl EmptyLinkFunctionForGeneratedCodePCGVisualizeAttribute(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGVolumeSampler @ 149c62080

void __cdecl EmptyLinkFunctionForGeneratedCodePCGVolumeSampler(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGWorldQuery @ 149c62090

void __cdecl EmptyLinkFunctionForGeneratedCodePCGWorldQuery(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGWorldRaycast @ 149c620a0

void __cdecl EmptyLinkFunctionForGeneratedCodePCGWorldRaycast(void)

{
  return;
}

// GetPolyLineData @ 149c77ae0

UPCGPolyLineData * __cdecl PCGSplineSamplerHelpers::GetPolyLineData(UPCGSpatialData *param_1)

{
  int iVar1;
  UClass *pUVar2;
  UPCGSplineData *pUVar3;
  UPCGPolyLineData *pUVar4;
  
  while( true ) {
    if ((UPCGSplineProjectionData *)param_1 == (UPCGSplineProjectionData *)0x0) {
      return (UPCGPolyLineData *)0x0;
    }
    pUVar2 = Z_Construct_UClass_UPCGPolyLineData_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(((UPCGSplineProjectionData *)param_1)->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(((UPCGSplineProjectionData *)param_1)->_padding_ + 0x30) +
         (longlong)iVar1 * 8) == &pUVar2->_padding_)) {
      return (UPCGPolyLineData *)(UPCGSplineProjectionData *)param_1;
    }
    pUVar2 = Z_Construct_UClass_UPCGSplineProjectionData_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(((UPCGSplineProjectionData *)param_1)->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(((UPCGSplineProjectionData *)param_1)->_padding_ + 0x30) +
         (longlong)iVar1 * 8) == &pUVar2->_padding_)) {
      pUVar3 = UPCGSplineProjectionData::GetSpline((UPCGSplineProjectionData *)param_1);
      return (UPCGPolyLineData *)pUVar3;
    }
    pUVar2 = Z_Construct_UClass_UPCGIntersectionData_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if (*(int *)(((UPCGSplineProjectionData *)param_1)->_padding_ + 0x38) < iVar1) {
      return (UPCGPolyLineData *)0x0;
    }
    if ((longlong *)
        *(undefined1 **)
         (*(longlong *)(((UPCGSplineProjectionData *)param_1)->_padding_ + 0x30) +
         (longlong)iVar1 * 8) != &pUVar2->_padding_) break;
    pUVar4 = GetPolyLineData((UPCGSpatialData *)((UPCGSplineProjectionData *)param_1)->_padding_);
    if (pUVar4 != (UPCGPolyLineData *)0x0) {
      return pUVar4;
    }
    param_1 = (UPCGSpatialData *)((UPCGSplineProjectionData *)param_1)->_padding_;
  }
  return (UPCGPolyLineData *)0x0;
}

// GetTypeHash @ 149c79410

uint __cdecl GetTypeHash(FPCGISMComponentBuilderParams *param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  bVar1 = param_1->bAllowDescriptorChanges;
  uVar5 = param_1->NumCustomDataFloats + 1;
  iVar4 = (bVar1 != false) + 1;
  if ((int)(param_1->Descriptor)._padding_ == 0) {
    (**(code **)((param_1->Descriptor)._padding_ + 0x10))();
  }
  uVar3 = (int)(param_1->Descriptor)._padding_ - uVar5 ^ uVar5 >> 0xd;
  uVar2 = (-0x61c88647 - uVar3) - uVar5 ^ uVar3 << 8;
  uVar6 = (uVar5 - uVar2) - uVar3 ^ uVar2 >> 0xd;
  uVar3 = (uVar3 - uVar6) - uVar2 ^ uVar6 >> 0xc;
  uVar5 = (uVar2 - uVar3) - uVar6 ^ uVar3 << 0x10;
  uVar6 = (uVar6 - uVar5) - uVar3 ^ uVar5 >> 5;
  uVar2 = (uVar3 - uVar6) - uVar5 ^ uVar6 >> 3;
  uVar5 = (uVar5 - uVar2) - uVar6 ^ uVar2 << 10;
  iVar7 = ((uVar6 - uVar5) - uVar2 ^ uVar5 >> 0xf) - iVar4;
  uVar5 = 0x9e3779b8 - iVar7;
  if (bVar1 != false) {
    uVar5 = 0x9e3779b7 - iVar7;
  }
  uVar5 = uVar5 ^ iVar7 * 0x100;
  uVar2 = (iVar4 - uVar5) - iVar7 ^ uVar5 >> 0xd;
  uVar3 = (iVar7 - uVar2) - uVar5 ^ uVar2 >> 0xc;
  uVar5 = (uVar5 - uVar3) - uVar2 ^ uVar3 << 0x10;
  uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar5 >> 5;
  uVar3 = (uVar3 - uVar2) - uVar5 ^ uVar2 >> 3;
  uVar5 = (uVar5 - uVar3) - uVar2 ^ uVar3 << 10;
  return (uVar2 - uVar5) - uVar3 ^ uVar5 >> 0xf;
}

// GetTypeHash @ 149c79540

uint __cdecl GetTypeHash(FPCGSplineMeshParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined1 local_res8 [32];
  uint local_d8 [4];
  TVector2<double>_u_0 local_c8;
  TVector2<double>_u_0 local_b8;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_68;
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_28;
  
  if ((param_1->Hash).bIsSet == false) {
    local_c8._s_0.X = (param_1->EndScale).field0_0x0._s_0.X;
    local_c8._s_0.Y = (param_1->EndScale).field0_0x0._s_0.Y;
    local_a8._s_0.X = (param_1->EndTangent).field0_0x0._s_0.X;
    local_a8._s_0.Y = (param_1->EndTangent).field0_0x0._s_0.Y;
    local_a8._s_0.Z = (param_1->EndTangent).field0_0x0._s_0.Z;
    local_88._s_0.Z = (param_1->EndPosition).field0_0x0._s_0.Z;
    local_88._s_0.X = (param_1->EndPosition).field0_0x0._s_0.X;
    local_88._s_0.Y = (param_1->EndPosition).field0_0x0._s_0.Y;
    local_b8._s_0.X = (param_1->StartScale).field0_0x0._s_0.X;
    local_b8._s_0.Y = (param_1->StartScale).field0_0x0._s_0.Y;
    local_68._s_0.X = (param_1->StartTangent).field0_0x0._s_0.X;
    local_68._s_0.Y = (param_1->StartTangent).field0_0x0._s_0.Y;
    local_68._s_0.Z = (param_1->StartTangent).field0_0x0._s_0.Z;
    local_48._s_0.X = (param_1->StartPosition).field0_0x0._s_0.X;
    local_48._s_0.Y = (param_1->StartPosition).field0_0x0._s_0.Y;
    local_48._s_0.Z = (param_1->StartPosition).field0_0x0._s_0.Z;
    local_28._s_0.X = (param_1->SplineUpDir).field0_0x0._s_0.X;
    local_28._s_0.Y = (param_1->SplineUpDir).field0_0x0._s_0.Y;
    local_28._s_0.Z = (param_1->SplineUpDir).field0_0x0._s_0.Z;
    uVar3 = `FPCGSplineMeshParams::ComputeHash'::__l2::<lambda_1>::
            operator()<enum_EPCGSplineMeshForwardAxis,bool,bool,UE::Math::TVector<double>,float,float,float,bool,UE::Math::TVector<double>,UE::Math::TVector<double>,float,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,float,UE::Math::TVector2<double>_>
                      (local_res8,param_1->ForwardAxis,param_1->bScaleMeshToBounds,
                       param_1->bScaleMeshToLandscapeSplineFullWidth,
                       (TVector<double> *)&local_28._s_0,param_1->NaniteClusterBoundsScale,
                       param_1->SplineBoundaryMin,param_1->SplineBoundaryMax,
                       param_1->bSmoothInterpRollScale,(TVector<double> *)&local_48._s_0,
                       (TVector<double> *)&local_68._s_0,param_1->StartRollDegrees,
                       (TVector2<double> *)&local_b8._s_0,(TVector<double> *)&local_88._s_0,
                       (TVector<double> *)&local_a8._s_0,param_1->EndRollDegrees,
                       (TVector2<double> *)&local_c8._s_0);
    if ((TOptional<unsigned_int> *)local_d8 != &param_1->Hash) {
      (param_1->Hash).TypedValue = uVar3;
      (param_1->Hash).bIsSet = true;
    }
  }
  if ((param_1->Hash).bIsSet == false) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return (param_1->Hash).TypedValue;
}

// GetValidLayouts @ 149c79700

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

TArray<FConstStructView,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> * __cdecl
PCGUserParameterGet::Settings::GetValidLayouts
          (TArray<FConstStructView,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
           *__return_storage_ptr__,FPCGContext *param_1)

{
  undefined8 uVar1;
  IPCGGraphExecutionSource *pIVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  TArray<FConstStructView,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar11;
  UClass *pUVar12;
  FObjectPtr_u_0 FVar13;
  longlong lVar14;
  longlong *plVar15;
  FText *this;
  ForElementType<FConstStructView> *pFVar16;
  FString *pFVar17;
  ForElementType<FConstStructView> *pFVar18;
  undefined8 *puVar19;
  ForElementType<FConstStructView> FVar20;
  wchar_t *pwVar21;
  ForElementType<FConstStructView> FVar22;
  longlong *plVar23;
  wchar_t *pwVar24;
  undefined1 auStack_268 [32];
  ForElementType<FConstStructView> local_248;
  ForElementType<FConstStructView> local_240;
  longlong local_238;
  longlong local_230;
  undefined8 local_228;
  ForAnyElementType local_218;
  undefined8 local_210;
  FObjectPtr_u_0 local_208 [2];
  longlong local_1f8;
  longlong lStack_1f0;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  FString *local_1d8 [2];
  longlong local_1c8;
  longlong lStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  FString local_1a8;
  FString local_198;
  FText local_188;
  FString local_178;
  FString local_168;
  ForElementType<FConstStructView> local_158;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_268;
  plVar15 = (longlong *)0x0;
  local_208[0].Handle = local_208[0].Handle & 0xffffffff00000000;
  FVar20 = (ForElementType<FConstStructView>)(param_1->InputData).TaggedData.AllocatorInstance.Data;
  local_1d8[0] = &PCGBaseSubgraphConstants::UserParameterTagData;
  local_158.SecondaryData = (ForElementType<FConstStructView>)0x0;
  FVar22 = (ForElementType<FConstStructView>)
           ((longlong)(param_1->InputData).TaggedData.ArrayNum * 0x78 + (longlong)FVar20);
  local_50 = 0;
  local_4c = 0x10;
  local_218.Data = (FScriptContainerElement *)0x0;
  local_210 = 0;
  if (FVar20 != FVar22) {
    do {
      bVar8 = `FPCGDataCollection::GetTaggedTypedInputs<UPCGUserParametersData>'::__l2::<lambda_1>::
              operator()(local_1d8,(FPCGTaggedData *)FVar20);
      if (bVar8) {
        if (local_218.Data <= (ulonglong)FVar20) {
          if ((ulonglong)FVar20 <
              (ulonglong)((longlong)local_210._4_4_ * 0x78 + (longlong)local_218.Data)) {
            local_230 = (longlong)(int)local_210;
            local_228 = 0x78;
            local_240 = (ForElementType<FConstStructView>)local_218.Data;
            local_248 = FVar20;
            local_238 = (longlong)local_210._4_4_;
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar8) {
              pcVar4 = (code *)swi(3);
              pTVar11 = (TArray<FConstStructView,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                         *)(*pcVar4)();
              return pTVar11;
            }
          }
        }
        iVar10 = (int)local_210;
        if ((int)local_210 == local_210._4_4_) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x878,&local_218,(int *)((longlong)&local_210 + 4));
        }
        local_210 = CONCAT44(local_210._4_4_,iVar10 + 1);
        FPCGTaggedData::FPCGTaggedData
                  ((FPCGTaggedData *)(local_218.Data + (longlong)iVar10 * 0x78),
                   (FPCGTaggedData *)FVar20);
      }
      FVar20 = (ForElementType<FConstStructView>)((longlong)FVar20 + 0x78);
    } while (FVar20 != FVar22);
    if ((int)local_210 != 0) {
      if ((int)local_210 < 1) {
        local_248 = (ForElementType<FConstStructView>)0x0;
        local_240 = (ForElementType<FConstStructView>)(longlong)(int)local_210;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TArray<FConstStructView,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                     *)(*pcVar4)();
          return pTVar11;
        }
      }
      local_208[0] = *(FObjectPtr_u_0 *)local_218.Data;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149c798b1:
        if ((UPCGData *)local_208[0].Handle != (UPCGData *)0x0) {
          pUVar12 = Z_Construct_UClass_UPCGUserParametersData_NoRegister();
          bVar8 = FObjectPtr::IsA((FObjectPtr *)local_208,pUVar12);
          if ((!bVar8) ||
             (FVar13 = local_208[0], (UPCGData *)local_208[0].Handle == (UPCGData *)0x0)) {
            pFVar17 = GetTypeName<UPCGUserParametersData>(&local_178);
            pwVar21 = L"";
            if ((pFVar17->Data).ArrayNum == 0) {
              pwVar24 = L"";
            }
            else {
              pwVar24 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
            }
            pFVar17 = GetFullNameForCastLogError<UPCGData_const_>
                                (&local_168,(UPCGData *)local_208[0].Handle);
            if ((pFVar17->Data).ArrayNum != 0) {
              pwVar21 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
            }
                    /* WARNING: Subroutine does not return */
            CastLogError(pwVar21,pwVar24);
          }
          while( true ) {
            if ((*(longlong *)(FVar13.Handle + 2) != 0) &&
               (*(longlong *)&FVar13.Handle[1].field_0x20 != 0)) {
              if (local_50 == local_4c) {
                local_50 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FConstStructView>_>
                                     (0x810,&local_158,&local_4c);
              }
              FVar20 = (ForElementType<FConstStructView>)&local_158;
              if (local_158.SecondaryData != (ForElementType<FConstStructView>)0x0) {
                FVar20 = local_158.SecondaryData;
              }
              puVar19 = (undefined8 *)((longlong)local_50 * 0x10 + (longlong)FVar20);
              uVar1 = *(undefined8 *)(FVar13.Handle + 2);
              local_50 = local_50 + 1;
              *puVar19 = *(undefined8 *)&FVar13.Handle[1].field_0x20;
              puVar19[1] = uVar1;
            }
            FVar13.Handle =
                 TPersistentObjectPtr<FSoftObjectPath>::Get
                           ((TPersistentObjectPtr<FSoftObjectPath> *)&FVar13.Handle[2].field_0x8);
            if ((UPCGData *)FVar13.Handle == (UPCGData *)0x0) break;
            pUVar12 = Z_Construct_UClass_UPCGUserParametersData_NoRegister();
            iVar10 = (int)pUVar12->_padding_;
            if ((*(int *)(*(longlong *)&(FVar13.Handle)->field_0x10 + 0x38) < iVar10) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&(FVar13.Handle)->field_0x10 + 0x30) +
                 (longlong)iVar10 * 8) != &pUVar12->_padding_)) break;
          }
          goto LAB_149c7997f;
        }
      }
      else if ((UPCGData *)local_208[0].Handle != (UPCGData *)0x0) {
        UE::GC::MarkAsReachable(local_208[0].Handle);
        goto LAB_149c798b1;
      }
      if (1 < (byte)LogPCG._0_1_) {
        this = FText::AsLocalizable_Advanced_LocText
                         (&local_188,L"PCGUserParameterGetElement",L"InvalidUserParameterData",
                          L"Internal error, PCG User Parameters Data is null");
        pFVar16 = (ForElementType<FConstStructView> *)FText::ToString(this);
        if (*(int *)(pFVar16 + 1) == 0) {
          pwVar21 = L"";
        }
        else {
          pwVar21 = *(wchar_t **)pFVar16;
        }
        if (param_1 != (FPCGContext *)0x0) {
          FPCGContext::GetTaskName(param_1,&local_198);
          plVar15 = (longlong *)&DAT_00000003;
          FPCGContext::GetExecutionSourceName(param_1,&local_1a8);
        }
        local_248 = (ForElementType<FConstStructView>)pwVar21;
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if ((((ulonglong)plVar15 & 2) != 0) &&
           (plVar15 = (longlong *)(ulonglong)((uint)plVar15 & 0xfffffffd),
           local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
        }
        if ((((ulonglong)plVar15 & 1) != 0) &&
           (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_198.Data.AllocatorInstance.Data);
        }
        if (local_188.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
        }
      }
      (__return_storage_ptr__->AllocatorInstance).SecondaryData =
           (ForElementType<FConstStructView>)0x0;
      __return_storage_ptr__->ArrayNum = 0;
      __return_storage_ptr__->ArrayMax = 0x10;
      goto LAB_149c79ee5;
    }
  }
LAB_149c7997f:
  plVar23 = (longlong *)param_1->Node->_padding_;
  if (plVar23 == (longlong *)0x0) {
LAB_149c799b2:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("GraphFromNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGUserParameterGet.cpp"
                       ,0x4b,L"");
    plVar23 = plVar15;
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TArray<FConstStructView,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                 *)(*pcVar4)();
      return pTVar11;
    }
  }
  else {
    pUVar12 = Z_Construct_UClass_UPCGGraph_NoRegister();
    iVar10 = (int)pUVar12->_padding_;
    if ((*(int *)(plVar23[2] + 0x38) < iVar10) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(plVar23[2] + 0x30) + (longlong)iVar10 * 8) !=
        &pUVar12->_padding_)) goto LAB_149c799b2;
  }
  lVar14 = (**(code **)(*plVar23 + 0x2c0))(plVar23);
  if (lVar14 == 0) {
    local_1f8 = 0;
    lStack_1f0 = 0;
  }
  else {
    plVar15 = (longlong *)(**(code **)(*plVar23 + 0x2c0))(plVar23);
    local_1f8 = *plVar15;
    lStack_1f0 = plVar15[1];
    local_1c8 = local_1f8;
    lStack_1c0 = lStack_1f0;
  }
  if ((((param_1->ExecutionSource).InterfaceInstance == (IPCGGraphExecutionSource *)0x0) ||
      (bVar8 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), !bVar8)) ||
     (pIVar2 = (param_1->ExecutionSource).InterfaceInstance,
     pIVar2 == (IPCGGraphExecutionSource *)0x0)) {
LAB_149c79d05:
    if ((lStack_1f0 != 0) && (local_1f8 != 0)) {
      FVar20 = (ForElementType<FConstStructView>)&local_158;
      if (local_158.SecondaryData != (ForElementType<FConstStructView>)0x0) {
        FVar20 = local_158.SecondaryData;
      }
      if ((ulonglong)FVar20 <= &local_1f8) {
        FVar20 = (ForElementType<FConstStructView>)&local_158;
        if (local_158.SecondaryData != (ForElementType<FConstStructView>)0x0) {
          FVar20 = local_158.SecondaryData;
        }
        if (&local_1f8 < (longlong *)((longlong)local_4c * 0x10 + (longlong)FVar20)) {
          local_230 = (longlong)local_50;
          local_228 = 0x10;
          local_248 = (ForElementType<FConstStructView>)&local_1f8;
          local_240 = (ForElementType<FConstStructView>)&local_158;
          if (local_158.SecondaryData != (ForElementType<FConstStructView>)0x0) {
            local_240 = local_158.SecondaryData;
          }
          local_238 = (longlong)local_4c;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar8) {
            pcVar4 = (code *)swi(3);
            pTVar11 = (TArray<FConstStructView,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                       *)(*pcVar4)();
            return pTVar11;
          }
        }
      }
      iVar10 = local_50;
      if (local_50 == local_4c) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FConstStructView>_>
                           (0x810,&local_158,&local_4c);
      }
      local_50 = iVar10 + 1;
      FVar20 = (ForElementType<FConstStructView>)&local_158;
      if (local_158.SecondaryData != (ForElementType<FConstStructView>)0x0) {
        FVar20 = local_158.SecondaryData;
      }
      plVar15 = (longlong *)((longlong)FVar20 + (longlong)iVar10 * 0x10);
      *plVar15 = local_1f8;
      plVar15[1] = lStack_1f0;
    }
  }
  else {
    plVar15 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x10))();
    plVar15 = (longlong *)(**(code **)(*plVar15 + 0x68))(plVar15);
    bVar8 = false;
    if (plVar15 == (longlong *)0x0) goto LAB_149c79d05;
    while( true ) {
      lVar14 = (**(code **)(*plVar15 + 0x2c0))(plVar15);
      if (lVar14 == 0) {
        local_1e8._0_4_ = 0;
        local_1e8._4_4_ = 0;
        uStack_1e0 = 0;
        uStack_1dc = 0;
      }
      else {
        puVar19 = (undefined8 *)(**(code **)(*plVar15 + 0x2c0))(plVar15);
        uVar1 = *puVar19;
        uVar3 = puVar19[1];
        local_1b8._0_4_ = (undefined4)uVar1;
        local_1b8._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
        uStack_1b0._0_4_ = (undefined4)uVar3;
        uStack_1b0._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
        local_1e8._0_4_ = (undefined4)local_1b8;
        local_1e8._4_4_ = local_1b8._4_4_;
        uStack_1e0 = (undefined4)uStack_1b0;
        uStack_1dc = uStack_1b0._4_4_;
        local_1b8 = uVar1;
        uStack_1b0 = uVar3;
      }
      auVar5._4_4_ = local_1e8._4_4_;
      auVar5._0_4_ = (undefined4)local_1e8;
      auVar5._8_4_ = uStack_1e0;
      auVar5._12_4_ = uStack_1dc;
      if ((auVar5._8_8_ != 0) && (CONCAT44(local_1e8._4_4_,(undefined4)local_1e8) != 0)) {
        bVar8 = true;
        FVar20 = (ForElementType<FConstStructView>)&local_158;
        if (local_158.SecondaryData != (ForElementType<FConstStructView>)0x0) {
          FVar20 = local_158.SecondaryData;
        }
        if ((ulonglong)FVar20 <= &local_1e8) {
          FVar20 = (ForElementType<FConstStructView>)&local_158;
          if (local_158.SecondaryData != (ForElementType<FConstStructView>)0x0) {
            FVar20 = local_158.SecondaryData;
          }
          if (&local_1e8 < (undefined8 *)((longlong)local_4c * 0x10 + (longlong)FVar20)) {
            local_230 = (longlong)local_50;
            local_228 = 0x10;
            local_248 = (ForElementType<FConstStructView>)&local_1e8;
            local_240 = (ForElementType<FConstStructView>)&local_158;
            if (local_158.SecondaryData != (ForElementType<FConstStructView>)0x0) {
              local_240 = local_158.SecondaryData;
            }
            local_238 = (longlong)local_4c;
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar9) {
              pcVar4 = (code *)swi(3);
              pTVar11 = (TArray<FConstStructView,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                         *)(*pcVar4)();
              return pTVar11;
            }
          }
        }
        iVar10 = local_50;
        if (local_50 == local_4c) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FConstStructView>_>
                             (0x810,&local_158,&local_4c);
        }
        local_50 = iVar10 + 1;
        FVar20 = (ForElementType<FConstStructView>)&local_158;
        if (local_158.SecondaryData != (ForElementType<FConstStructView>)0x0) {
          FVar20 = local_158.SecondaryData;
        }
        puVar19 = (undefined8 *)((longlong)FVar20 + (longlong)iVar10 * 0x10);
        *puVar19 = CONCAT44(local_1e8._4_4_,(undefined4)local_1e8);
        puVar19[1] = CONCAT44(uStack_1dc,uStack_1e0);
      }
      if (plVar15[5] == 0) break;
      pUVar12 = Z_Construct_UClass_UPCGGraphInstance_NoRegister();
      bVar9 = FObjectPtr::IsA((FObjectPtr *)(plVar15 + 5),pUVar12);
      if ((!bVar9) || (plVar15 = (longlong *)plVar15[5], plVar15 == (longlong *)0x0)) break;
    }
    if (!bVar8) goto LAB_149c79d05;
  }
  (__return_storage_ptr__->AllocatorInstance).SecondaryData = (ForElementType<FConstStructView>)0x0;
  if (local_158.SecondaryData == (ForElementType<FConstStructView>)0x0) {
    lVar14 = 2;
    pTVar11 = __return_storage_ptr__;
    pFVar18 = &local_158;
    do {
      uVar1 = *(undefined8 *)(pFVar18->InlineData + 8);
      uVar3 = *(undefined8 *)(pFVar18->InlineData + 0x10);
      uVar6 = *(undefined8 *)(pFVar18->InlineData + 0x18);
      *(undefined8 *)(pTVar11->AllocatorInstance).InlineData = *(undefined8 *)pFVar18->InlineData;
      *(undefined8 *)((pTVar11->AllocatorInstance).InlineData + 8) = uVar1;
      uVar1 = *(undefined8 *)(pFVar18->InlineData + 0x20);
      uVar7 = *(undefined8 *)(pFVar18->InlineData + 0x28);
      *(undefined8 *)((pTVar11->AllocatorInstance).InlineData + 0x10) = uVar3;
      *(undefined8 *)((pTVar11->AllocatorInstance).InlineData + 0x18) = uVar6;
      uVar3 = *(undefined8 *)(pFVar18->InlineData + 0x30);
      uVar6 = *(undefined8 *)(pFVar18->InlineData + 0x38);
      *(undefined8 *)((pTVar11->AllocatorInstance).InlineData + 0x20) = uVar1;
      *(undefined8 *)((pTVar11->AllocatorInstance).InlineData + 0x28) = uVar7;
      uVar1 = *(undefined8 *)(pFVar18->InlineData + 0x40);
      uVar7 = *(undefined8 *)(pFVar18->InlineData + 0x48);
      *(undefined8 *)((pTVar11->AllocatorInstance).InlineData + 0x30) = uVar3;
      *(undefined8 *)((pTVar11->AllocatorInstance).InlineData + 0x38) = uVar6;
      uVar3 = *(undefined8 *)(pFVar18->InlineData + 0x50);
      uVar6 = *(undefined8 *)(pFVar18->InlineData + 0x58);
      *(undefined8 *)((pTVar11->AllocatorInstance).InlineData + 0x40) = uVar1;
      *(undefined8 *)((pTVar11->AllocatorInstance).InlineData + 0x48) = uVar7;
      uVar1 = *(undefined8 *)(pFVar18->InlineData + 0x60);
      uVar7 = *(undefined8 *)(pFVar18->InlineData + 0x68);
      *(undefined8 *)((pTVar11->AllocatorInstance).InlineData + 0x50) = uVar3;
      *(undefined8 *)((pTVar11->AllocatorInstance).InlineData + 0x58) = uVar6;
      uVar3 = *(undefined8 *)(pFVar18->InlineData + 0x70);
      uVar6 = *(undefined8 *)(pFVar18->InlineData + 0x78);
      *(undefined8 *)((pTVar11->AllocatorInstance).InlineData + 0x60) = uVar1;
      *(undefined8 *)((pTVar11->AllocatorInstance).InlineData + 0x68) = uVar7;
      *(undefined8 *)((pTVar11->AllocatorInstance).InlineData + 0x70) = uVar3;
      *(undefined8 *)((pTVar11->AllocatorInstance).InlineData + 0x78) = uVar6;
      lVar14 = lVar14 + -1;
      pTVar11 = (TArray<FConstStructView,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                 *)((pTVar11->AllocatorInstance).InlineData + 0x80);
      pFVar18 = (ForElementType<FConstStructView> *)(pFVar18->InlineData + 0x80);
    } while (lVar14 != 0);
  }
  FVar20 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
  if (FVar20 != (ForElementType<FConstStructView>)0x0) {
    FMemory::Free((void *)FVar20);
  }
  (__return_storage_ptr__->AllocatorInstance).SecondaryData = local_158.SecondaryData;
  __return_storage_ptr__->ArrayNum = local_50;
  __return_storage_ptr__->ArrayMax = local_4c;
  local_4c = 0x10;
  local_158.SecondaryData = (ForElementType<FConstStructView>)0x0;
  local_50 = 0;
LAB_149c79ee5:
  DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)local_218.Data,(int)local_210);
  if ((ForElementType<FConstStructView>)local_218.Data != (ForElementType<FConstStructView>)0x0) {
    FMemory::Free(local_218.Data);
  }
  if (local_158.SecondaryData != (ForElementType<FConstStructView>)0x0) {
    FMemory::Free((void *)local_158.SecondaryData);
  }
  return __return_storage_ptr__;
}

// InitializeBounds @ 149c7d390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
PCGSplineIntersection::InputData::InitializeBounds(InputData *this,TVector<double> *param_1)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  UPCGSplineData *pUVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  double dVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  double *pdVar13;
  TBox<double> *this_00;
  TMatrix<double> *pTVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  longlong lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auStackY_1d8 [32];
  undefined7 uStack_167;
  TVector<double>_u_0 local_160;
  double local_148;
  double local_140;
  double local_138;
  undefined1 local_128 [56];
  TBox<double> local_f0;
  TMatrix<double> local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if (this->Spline == (UPCGSplineData *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Spline",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSplineIntersection.cpp"
                        ,0x1e,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pdVar13 = (double *)(**(code **)(*(longlong *)this->Spline + 0x388))(this->Spline,local_128);
  dVar18 = (param_1->field0_0x0)._s_0.Y;
  dVar19 = (param_1->field0_0x0)._s_0.X;
  dVar20 = (param_1->field0_0x0)._s_0.Z;
  dVar2 = pdVar13[2];
  dVar3 = pdVar13[3];
  dVar4 = pdVar13[5];
  pUVar6 = this->Spline;
  dVar9 = pdVar13[1] - dVar18;
  dVar5 = pdVar13[4];
  auVar8._8_4_ = SUB84(dVar9,0);
  auVar8._0_8_ = *pdVar13 - dVar19;
  auVar8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *(undefined1 (*) [16])&(this->Bounds).Min.field0_0x0 = auVar8;
  (this->Bounds).Min.field0_0x0._s_0.Z = dVar2 - dVar20;
  (this->Bounds).Max.field0_0x0._s_0.X = dVar19 + dVar3;
  (this->Bounds).Max.field0_0x0._s_0.Y = dVar18 + dVar5;
  (this->Bounds).Max.field0_0x0._s_0.Z = dVar20 + dVar4;
  (this->Bounds).IsValid = 1;
  (this->Bounds).Pad[0] = (char)uStack_167;
  (this->Bounds).Pad[1] = (char)((uint7)uStack_167 >> 8);
  (this->Bounds).Pad[2] = (char)((uint7)uStack_167 >> 0x10);
  (this->Bounds).Pad[3] = (char)((uint7)uStack_167 >> 0x18);
  (this->Bounds).Pad[4] = (char)((uint7)uStack_167 >> 0x20);
  (this->Bounds).Pad[5] = (char)((uint7)uStack_167 >> 0x28);
  (this->Bounds).Pad[6] = (char)((uint7)uStack_167 >> 0x30);
  uVar11 = (**(code **)(*(longlong *)pUVar6 + 0x4a0))();
  piVar1 = &(this->SegmentBounds).ArrayNum;
  this->SegmentsNum = uVar11;
  iVar12 = *piVar1;
  if (iVar12 < (int)uVar11) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,uVar11 - iVar12,&(this->SegmentBounds).AllocatorInstance,piVar1,
               &(this->SegmentBounds).ArrayMax);
  }
  else {
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    if ((int)uVar11 < iVar12) {
      uVar16 = iVar12 - uVar11;
      if ((int)(uVar16 | uVar11) < 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar10) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      if (uVar16 != 0) {
        pFVar15 = (this->SegmentBounds).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x38;
        iVar12 = (*piVar1 - uVar16) - uVar11;
        if (iVar12 != 0) {
          memmove(pFVar15,pFVar15 + (longlong)(int)uVar16 * 0x38,(longlong)iVar12 * 0x38);
        }
        *piVar1 = *piVar1 - uVar16;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,&(this->SegmentBounds).AllocatorInstance,*piVar1,
                   &(this->SegmentBounds).ArrayMax);
      }
    }
  }
  uVar11 = 0;
  if (0 < (this->SegmentBounds).ArrayNum) {
    lVar17 = 0;
    do {
      this_00 = FPCGSplineStruct::GetSegmentBounds(&this->Spline->SplineStruct,&local_f0,uVar11);
      pTVar14 = UE::Math::TTransform<double>::ToMatrixWithScale
                          (&(this->Spline->SplineStruct).Transform,&local_b8);
      UE::Math::TBox<double>::TransformBy(this_00,(TBox<double> *)&local_160._s_0,pTVar14);
      dVar18 = (param_1->field0_0x0)._s_0.X;
      dVar19 = (param_1->field0_0x0)._s_0.Y;
      dVar2 = local_160._s_0.X - dVar18;
      dVar20 = (param_1->field0_0x0)._s_0.Z;
      dVar4 = local_160._s_0.Y - dVar19;
      dVar18 = dVar18 + local_148;
      dVar19 = dVar19 + local_140;
      dVar3 = local_160._s_0.Z - dVar20;
      dVar20 = dVar20 + local_138;
      uVar16 = 0;
      if ((int)uVar11 < *piVar1) {
        uVar16 = ~uVar11 >> 0x1f;
      }
      if (uVar16 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      pFVar15 = (this->SegmentBounds).AllocatorInstance.Data;
      uVar11 = uVar11 + 1;
      *(double *)(pFVar15 + lVar17) = dVar2;
      *(double *)(pFVar15 + lVar17 + 8) = dVar4;
      *(double *)(pFVar15 + lVar17 + 0x10) = dVar3;
      *(double *)(pFVar15 + lVar17 + 0x10 + 8) = dVar18;
      *(double *)(pFVar15 + lVar17 + 0x20) = dVar19;
      *(double *)(pFVar15 + lVar17 + 0x20 + 8) = dVar20;
      *(ulonglong *)(pFVar15 + lVar17 + 0x30) = CONCAT71(uStack_167,1);
      lVar17 = lVar17 + 0x38;
    } while ((int)uVar11 < (this->SegmentBounds).ArrayNum);
  }
  return;
}

// InitializePerExecutionData @ 149c7d960

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

EPCGTimeSliceInitResult __cdecl
PCGSurfaceSamplerHelpers::InitializePerExecutionData
          (TPCGTimeSlicedContext<PCGSurfaceSampler::FSurfaceSamplerExecutionState,PCGSurfaceSampler::FSurfaceSamplerIterationState,FPCGContext>
           *param_1,FSurfaceSamplerExecutionState *param_2)

{
  int *piVar1;
  int iVar2;
  FObjectPtr_u_0 *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  EPCGTimeSliceInitResult EVar7;
  int iVar8;
  UPCGSurfaceSamplerSettings *pUVar9;
  TObjectPtr<UObject_const_>_u_0 TVar10;
  double *pdVar11;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *pTVar12;
  UClass *pUVar13;
  FText *pFVar14;
  ForAnyElementType FVar15;
  FObjectPtr_u_0 *pFVar16;
  bool bVar17;
  undefined1 auStackY_1a8 [32];
  bool local_157 [7];
  FObjectPtr_u_0 local_150;
  FObjectPtr_u_0 local_148;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_140;
  TObjectPtr<UObject_const_>_u_0 local_130 [2];
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_120;
  FString local_110;
  FString local_100;
  FText local_f0;
  FString local_e0;
  FString local_d0;
  FText local_c0;
  FString local_b0;
  FString local_a0;
  FText local_90;
  undefined1 local_80 [56];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_148.Handle = local_148.Handle & 0xffffffff00000000;
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId488,"FPCGSurfaceSamplerElement::InitializePerExecutionData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSurfaceSampler.cpp"
               ,0x1e8);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId488);
  }
  if ((param_1 ==
       (TPCGTimeSlicedContext<PCGSurfaceSampler::FSurfaceSamplerExecutionState,PCGSurfaceSampler::FSurfaceSamplerIterationState,FPCGContext>
        *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSurfaceSampler.cpp"
                         ,0x1ea,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    EVar7 = (*pcVar4)();
    return EVar7;
  }
  pUVar9 = FPCGContext::GetInputSettings<UPCGSurfaceSamplerSettings>((FPCGContext *)param_1);
  if ((pUVar9 == (UPCGSurfaceSamplerSettings *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSurfaceSampler.cpp"
                         ,0x1ec,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    EVar7 = (*pcVar4)();
    return EVar7;
  }
  FPCGDataCollection::GetInputsByPin
            ((FPCGDataCollection *)&param_1->_padding_,&local_140,
             &PCGSurfaceSamplerConstants::SurfaceLabel);
  if (local_140.ArrayNum == 0) {
    EVar7 = NoOperation;
    goto LAB_149c7e05e;
  }
  if (((pUVar9->PointExtents).field0_0x0._s_0.X <= 0.0) ||
     ((pUVar9->PointExtents).field0_0x0._s_0.Y <= 0.0)) {
    if (2 < (byte)LogPCG._0_1_) {
      pFVar14 = FText::AsLocalizable_Advanced_LocText
                          (&local_90,L"PCGSurfaceSamplerElement",L"SkippedInvalidPointExtents",
                           L"Skipped - Invalid point extents");
      FText::ToString(pFVar14);
      bVar6 = param_1 !=
              (TPCGTimeSlicedContext<PCGSurfaceSampler::FSurfaceSamplerExecutionState,PCGSurfaceSampler::FSurfaceSamplerIterationState,FPCGContext>
               *)0x0;
      if (bVar6) {
        FPCGContext::GetTaskName((FPCGContext *)param_1,&local_a0);
        FPCGContext::GetExecutionSourceName((FPCGContext *)param_1,&local_b0);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((bVar6) && (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
      local_c0.TextData.Reference = local_90.TextData.Reference;
      if ((bVar6) && (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        local_c0.TextData.Reference = local_90.TextData.Reference;
      }
LAB_149c7e050:
      if (local_c0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c0.TextData.Reference + 0x10))();
      }
    }
  }
  else {
    if (pUVar9->bUnbounded == false) {
      TVar10.DebugPtr =
           (UObject *)
           PCGSettingsHelpers::ComputeBoundingShape
                     ((FPCGContext *)param_1,PCGSurfaceSamplerConstants::BoundingShapeLabel,
                      local_157);
      param_2->BoundingShape = (UPCGSpatialData *)TVar10;
      if ((UPCGSpatialData *)TVar10.DebugPtr != (UPCGSpatialData *)0x0) {
        if (local_157[0] != false) {
          if ((((uint)*(longlong *)&(TVar10.DebugPtr)->field_0x8 >> 0x1e & 1) != 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Object && IsValid(Object)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\PCGTimeSlicedElementBase.h"
                                 ,0xe3,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            EVar7 = (*pcVar4)();
            return EVar7;
          }
          local_130[0].DebugPtr = TVar10.DebugPtr;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(TVar10.DebugPtr);
          }
          TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_>::
          AddUniqueImpl<TObjectPtr<UObject_const_>_>
                    (&param_1->TrackedObjectArray,
                     (TObjectPtr<UObject_const_> *)&local_130[0].ObjectPtr);
        }
        pdVar11 = (double *)
                  (**(code **)(param_2->BoundingShape->_padding_ + 0x388))
                            (param_2->BoundingShape,local_80);
        dVar5 = pdVar11[1];
        (param_2->BoundingShapeBounds).Min.field0_0x0._s_0.X = *pdVar11;
        (param_2->BoundingShapeBounds).Min.field0_0x0._s_0.Y = dVar5;
        dVar5 = pdVar11[3];
        (param_2->BoundingShapeBounds).Min.field0_0x0._s_0.Z = pdVar11[2];
        (param_2->BoundingShapeBounds).Max.field0_0x0._s_0.X = dVar5;
        dVar5 = pdVar11[5];
        (param_2->BoundingShapeBounds).Max.field0_0x0._s_0.Y = pdVar11[4];
        (param_2->BoundingShapeBounds).Max.field0_0x0._s_0.Z = dVar5;
        *(double *)&(param_2->BoundingShapeBounds).IsValid = pdVar11[6];
      }
      if ((param_2->BoundingShapeBounds).IsValid == '\0') {
        EVar7 = NoOperation;
        goto LAB_149c7e05e;
      }
    }
    else {
      pTVar12 = FPCGDataCollection::GetInputsByPin
                          ((FPCGDataCollection *)&param_1->_padding_,&local_120,
                           &PCGSurfaceSamplerConstants::BoundingShapeLabel);
      iVar2 = pTVar12->ArrayNum;
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)local_120.AllocatorInstance.Data,local_120.ArrayNum);
      if ((FPCGTaggedData *)local_120.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
        FMemory::Free(local_120.AllocatorInstance.Data);
      }
      if ((0 < iVar2) && (5 < (byte)LogPCG._0_1_)) {
        pFVar14 = FText::AsLocalizable_Advanced_LocText
                            (&local_f0,L"PCGSurfaceSamplerElement",L"BoundsIgnored",
                             L"The bounds of the Bounding Shape input pin will be ignored because the Unbounded option is enabled."
                            );
        FText::ToString(pFVar14);
        bVar6 = param_1 !=
                (TPCGTimeSlicedContext<PCGSurfaceSampler::FSurfaceSamplerExecutionState,PCGSurfaceSampler::FSurfaceSamplerIterationState,FPCGContext>
                 *)0x0;
        if (bVar6) {
          FPCGContext::GetTaskName((FPCGContext *)param_1,&local_100);
          FPCGContext::GetExecutionSourceName((FPCGContext *)param_1,&local_110);
        }
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if ((bVar6) && (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_110.Data.AllocatorInstance.Data);
        }
        if ((bVar6) && (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_100.Data.AllocatorInstance.Data);
        }
        if (local_f0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
        }
      }
    }
    if (local_140.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_140.ArrayNum);
    }
    if ((param_2->GeneratingShapes).ArrayMax < local_140.ArrayNum) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_140.ArrayNum,&(param_2->GeneratingShapes).AllocatorInstance,
                 (param_2->GeneratingShapes).ArrayNum,&(param_2->GeneratingShapes).ArrayMax);
    }
    iVar2 = local_140.ArrayNum;
    pFVar16 = (FObjectPtr_u_0 *)
              (local_140.AllocatorInstance.Data + (longlong)local_140.ArrayNum * 0x78);
    FVar15.Data = local_140.AllocatorInstance.Data;
    while( true ) {
      if (local_140.ArrayNum != iVar2) {
        local_157[1] = false;
        `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_157 + 1);
      }
      if ((FObjectPtr_u_0 *)FVar15.Data == pFVar16) break;
      local_148 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)FVar15.Data;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149c7dcfb:
        if (local_148.Handle == (UObject *)0x0) goto LAB_149c7de6d;
        pUVar13 = Z_Construct_UClass_UPCGSurfaceData_NoRegister();
        bVar6 = FObjectPtr::IsA((FObjectPtr *)&local_148,pUVar13);
        if (!bVar6) goto LAB_149c7de6d;
        local_150.Handle = local_148.Handle;
        if (local_148.Handle == (UObject *)0x0) goto LAB_149c7de76;
        pFVar3 = (FObjectPtr_u_0 *)(param_2->GeneratingShapes).AllocatorInstance.Data;
        if (((pFVar3 <= &local_150) && (&local_150 < pFVar3 + (param_2->GeneratingShapes).ArrayMax))
           && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        iVar8 = (param_2->GeneratingShapes).ArrayNum;
        if (iVar8 == (param_2->GeneratingShapes).ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(param_2->GeneratingShapes).AllocatorInstance,
                             &(param_2->GeneratingShapes).ArrayMax);
        }
        (param_2->GeneratingShapes).ArrayNum = iVar8 + 1;
        ((FObjectPtr_u_0 *)
        ((param_2->GeneratingShapes).AllocatorInstance.Data + (longlong)iVar8 * 8))->Handle =
             (UObject *)local_150;
        if ((((FObjectPtr_u_0 *)param_1->_padding_ <= FVar15.Data) &&
            (FVar15.Data <
             (FObjectPtr_u_0 *)param_1->_padding_ +
             (longlong)*(int *)((longlong)&param_1->_padding_ + 4) * 0xf)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        iVar8 = (int)param_1->_padding_;
        piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x878,(ForAnyElementType *)&param_1->_padding_,piVar1);
        }
        *(int *)&param_1->_padding_ = iVar8 + 1;
        FPCGTaggedData::FPCGTaggedData
                  ((FPCGTaggedData *)((longlong)iVar8 * 0x78 + param_1->_padding_),
                   (FPCGTaggedData *)FVar15.Data);
        FVar15.Data = FVar15.Data + 0x78;
      }
      else {
        if (local_148.Handle != (UObject *)0x0) {
          UE::GC::MarkAsReachable(local_148.Handle);
          goto LAB_149c7dcfb;
        }
LAB_149c7de6d:
        local_150.Handle = (UObject *)0x0;
LAB_149c7de76:
        FVar15.Data = FVar15.Data + 0x78;
      }
    }
    if ((param_2->GeneratingShapes).ArrayNum != 0) {
      EVar7 = Success;
      goto LAB_149c7e05e;
    }
    if (2 < (byte)LogPCG._0_1_) {
      pFVar14 = FText::AsLocalizable_Advanced_LocText
                          (&local_c0,L"PCGSurfaceSamplerElement",L"NoSurfaceFound",
                           L"No surfaces found from which to generate");
      FText::ToString(pFVar14);
      bVar6 = param_1 !=
              (TPCGTimeSlicedContext<PCGSurfaceSampler::FSurfaceSamplerExecutionState,PCGSurfaceSampler::FSurfaceSamplerIterationState,FPCGContext>
               *)0x0;
      if (bVar6) {
        FPCGContext::GetTaskName((FPCGContext *)param_1,&local_d0);
        FPCGContext::GetExecutionSourceName((FPCGContext *)param_1,&local_e0);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((bVar6) && (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      }
      if ((bVar6) && (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
      goto LAB_149c7e050;
    }
  }
  EVar7 = AbortExecution;
LAB_149c7e05e:
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_140.AllocatorInstance.Data,local_140.ArrayNum);
  if ((FPCGTaggedData *)local_140.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_140.AllocatorInstance.Data);
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return EVar7;
}

// InitializePerExecutionData @ 149c7e0c0

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

EPCGTimeSliceInitResult __cdecl
PCGVolumeSamplerHelpers::InitializePerExecutionData
          (TPCGTimeSlicedContext<PCGVolumeSampler::FVolumeSamplerExecutionState,PCGVolumeSampler::FVolumeSamplerIterationState,FPCGContext>
           *param_1,FVolumeSamplerExecutionState *param_2)

{
  int *piVar1;
  int iVar2;
  FObjectPtr_u_0 *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  EPCGTimeSliceInitResult EVar7;
  int iVar8;
  UPCGVolumeSamplerSettings *pUVar9;
  TObjectPtr<UObject_const_>_u_0 TVar10;
  IPCGGraphExecutionSource *pIVar11;
  longlong *plVar12;
  UPCGSpatialData *pUVar13;
  UClass *pUVar14;
  double *pdVar15;
  FText *pFVar16;
  ForAnyElementType FVar17;
  FObjectPtr_u_0 *pFVar18;
  bool bVar19;
  undefined1 auStackY_1a8 [32];
  bool local_157 [7];
  FObjectPtr_u_0 local_150;
  FObjectPtr_u_0 local_148;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_140;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_130;
  TObjectPtr<UObject_const_>_u_0 local_120 [2];
  FString local_110;
  FString local_100;
  FText local_f0;
  FString local_e0;
  FString local_d0;
  FText local_c0;
  FString local_b0;
  FString local_a0;
  FText local_90;
  undefined1 local_80 [56];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_148.Handle = local_148.Handle & 0xffffffff00000000;
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId227,"FPCGVolumeSamplerElement::InitializePerExecutionData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGVolumeSampler.cpp"
               ,0xe3);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId227);
  }
  if ((param_1 ==
       (TPCGTimeSlicedContext<PCGVolumeSampler::FVolumeSamplerExecutionState,PCGVolumeSampler::FVolumeSamplerIterationState,FPCGContext>
        *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGVolumeSampler.cpp"
                         ,0xe5,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    EVar7 = (*pcVar4)();
    return EVar7;
  }
  pUVar9 = FPCGContext::GetInputSettings<UPCGVolumeSamplerSettings>((FPCGContext *)param_1);
  if ((pUVar9 == (UPCGVolumeSamplerSettings *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGVolumeSampler.cpp"
                         ,0xe7,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    EVar7 = (*pcVar4)();
    return EVar7;
  }
  if ((((pUVar9->VoxelSize).field0_0x0._s_0.X <= 0.0) ||
      ((pUVar9->VoxelSize).field0_0x0._s_0.Y <= 0.0)) ||
     ((pUVar9->VoxelSize).field0_0x0._s_0.Z <= 0.0)) {
    if (2 < (byte)LogPCG._0_1_) {
      pFVar16 = FText::AsLocalizable_Advanced_LocText
                          (&local_90,L"PCGVolumeSamplerElement",L"InvalidVoxelSize",
                           L"Skipped - Invalid voxel size");
      FText::ToString(pFVar16);
      bVar6 = param_1 !=
              (TPCGTimeSlicedContext<PCGVolumeSampler::FVolumeSamplerExecutionState,PCGVolumeSampler::FVolumeSamplerIterationState,FPCGContext>
               *)0x0;
      if (bVar6) {
        FPCGContext::GetTaskName((FPCGContext *)param_1,&local_a0);
        FPCGContext::GetExecutionSourceName((FPCGContext *)param_1,&local_b0);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((bVar6) && (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
      if ((bVar6) && (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
      if (local_90.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_90.TextData.Reference + 0x10))();
      }
    }
    EVar7 = AbortExecution;
    goto LAB_149c7e871;
  }
  FPCGDataCollection::GetInputsByPin
            ((FPCGDataCollection *)&param_1->_padding_,&local_140,
             &PCGVolumeSamplerConstants::VolumeLabel);
  FPCGDataCollection::GetInputsByPin
            ((FPCGDataCollection *)&param_1->_padding_,&local_130,
             &PCGVolumeSamplerConstants::BoundingShapeLabel);
  if (pUVar9->bUnbounded == false) {
    TVar10.DebugPtr =
         (UObject *)
         FPCGDataCollection::GetSpatialUnionOfInputsByPin
                   ((FPCGDataCollection *)&param_1->_padding_,(FPCGContext *)param_1,
                    &PCGVolumeSamplerConstants::BoundingShapeLabel,local_157);
    param_2->BoundingShape = (UPCGSpatialData *)TVar10;
    if (((UPCGSpatialData *)TVar10.DebugPtr != (UPCGSpatialData *)0x0) && (local_157[0] != false)) {
      if ((((uint)*(longlong *)&(TVar10.DebugPtr)->field_0x8 >> 0x1e & 1) != 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Object && IsValid(Object)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\PCGTimeSlicedElementBase.h"
                             ,0xe3,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      local_120[0].DebugPtr = TVar10.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(TVar10.DebugPtr);
      }
      TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<TObjectPtr<UObject_const_>_>
                (&param_1->TrackedObjectArray,(TObjectPtr<UObject_const_> *)&local_120[0].ObjectPtr)
      ;
    }
    pUVar13 = param_2->BoundingShape;
    if (pUVar13 == (UPCGSpatialData *)0x0) {
      if ((param_1->_padding_ == 0) ||
         (bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->_padding_), !bVar6))
      goto LAB_149c7e3ea;
      pIVar11 = TWeakInterfacePtr<IPCGGraphExecutionSource>::operator->
                          ((TWeakInterfacePtr<IPCGGraphExecutionSource> *)&param_1->_padding_);
      plVar12 = (longlong *)(**(code **)((longlong)*pIVar11 + 0x18))(pIVar11);
      pUVar13 = (UPCGSpatialData *)(**(code **)(*plVar12 + 8))(plVar12);
      if (pUVar13 == (UPCGSpatialData *)0x0) {
LAB_149c7e2f2:
        pUVar13 = (UPCGSpatialData *)0x0;
      }
      else {
        pUVar14 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
        iVar2 = (int)pUVar14->_padding_;
        if ((*(int *)(pUVar13->_padding_ + 0x38) < iVar2) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar13->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
            &pUVar14->_padding_)) goto LAB_149c7e2f2;
      }
      param_2->BoundingShape = pUVar13;
      goto LAB_149c7e3ea;
    }
LAB_149c7e3f2:
    pdVar15 = (double *)(**(code **)(pUVar13->_padding_ + 0x388))(pUVar13,local_80);
    dVar5 = pdVar15[1];
    (param_2->BoundingShapeBounds).Min.field0_0x0._s_0.X = *pdVar15;
    (param_2->BoundingShapeBounds).Min.field0_0x0._s_0.Y = dVar5;
    dVar5 = pdVar15[3];
    (param_2->BoundingShapeBounds).Min.field0_0x0._s_0.Z = pdVar15[2];
    (param_2->BoundingShapeBounds).Max.field0_0x0._s_0.X = dVar5;
    dVar5 = pdVar15[5];
    (param_2->BoundingShapeBounds).Max.field0_0x0._s_0.Y = pdVar15[4];
    (param_2->BoundingShapeBounds).Max.field0_0x0._s_0.Z = dVar5;
    *(double *)&(param_2->BoundingShapeBounds).IsValid = pdVar15[6];
  }
  else {
    if ((0 < local_130.ArrayNum) && (5 < (byte)LogPCG._0_1_)) {
      pFVar16 = FText::AsLocalizable_Advanced_LocText
                          (&local_f0,L"PCGVolumeSamplerElement",L"BoundsIgnored",
                           L"The bounds of the Bounding Shape input pin will be ignored because the Unbounded option is enabled"
                          );
      FText::ToString(pFVar16);
      bVar6 = param_1 !=
              (TPCGTimeSlicedContext<PCGVolumeSampler::FVolumeSamplerExecutionState,PCGVolumeSampler::FVolumeSamplerIterationState,FPCGContext>
               *)0x0;
      if (bVar6) {
        FPCGContext::GetTaskName((FPCGContext *)param_1,&local_100);
        FPCGContext::GetExecutionSourceName((FPCGContext *)param_1,&local_110);
      }
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((bVar6) && (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
      }
      if ((bVar6) && (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
      if (local_f0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
      }
    }
LAB_149c7e3ea:
    pUVar13 = param_2->BoundingShape;
    if (pUVar13 != (UPCGSpatialData *)0x0) goto LAB_149c7e3f2;
  }
  if (local_140.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_140.ArrayNum);
  }
  piVar1 = &(param_2->GeneratingShapes).ArrayMax;
  if (*piVar1 < local_140.ArrayNum) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_140.ArrayNum,&(param_2->GeneratingShapes).AllocatorInstance,
               (param_2->GeneratingShapes).ArrayNum,piVar1);
  }
  iVar2 = local_140.ArrayNum;
  pFVar18 = (FObjectPtr_u_0 *)
            (local_140.AllocatorInstance.Data + (longlong)local_140.ArrayNum * 0x78);
  FVar17.Data = local_140.AllocatorInstance.Data;
  while( true ) {
    if (local_140.ArrayNum != iVar2) {
      local_157[1] = false;
      `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_157 + 1);
    }
    if ((FObjectPtr_u_0 *)FVar17.Data == pFVar18) break;
    local_148 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)FVar17.Data;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149c7e4b5:
      if (local_148.Handle == (UObject *)0x0) goto LAB_149c7e627;
      pUVar14 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
      bVar6 = FObjectPtr::IsA((FObjectPtr *)&local_148,pUVar14);
      if (!bVar6) goto LAB_149c7e627;
      local_150.Handle = local_148.Handle;
      if (local_148.Handle == (UObject *)0x0) goto LAB_149c7e630;
      pFVar3 = (FObjectPtr_u_0 *)(param_2->GeneratingShapes).AllocatorInstance.Data;
      if (((pFVar3 <= &local_150) && (&local_150 < pFVar3 + (param_2->GeneratingShapes).ArrayMax))
         && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      iVar8 = (param_2->GeneratingShapes).ArrayNum;
      if (iVar8 == (param_2->GeneratingShapes).ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(param_2->GeneratingShapes).AllocatorInstance,
                           &(param_2->GeneratingShapes).ArrayMax);
      }
      (param_2->GeneratingShapes).ArrayNum = iVar8 + 1;
      ((FObjectPtr_u_0 *)((param_2->GeneratingShapes).AllocatorInstance.Data + (longlong)iVar8 * 8))
      ->Handle = (UObject *)local_150;
      if ((((FObjectPtr_u_0 *)param_1->_padding_ <= FVar17.Data) &&
          (FVar17.Data <
           (FObjectPtr_u_0 *)param_1->_padding_ +
           (longlong)*(int *)((longlong)&param_1->_padding_ + 4) * 0xf)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      iVar8 = (int)param_1->_padding_;
      piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x878,(ForAnyElementType *)&param_1->_padding_,piVar1);
      }
      *(int *)&param_1->_padding_ = iVar8 + 1;
      FPCGTaggedData::FPCGTaggedData
                ((FPCGTaggedData *)((longlong)iVar8 * 0x78 + param_1->_padding_),
                 (FPCGTaggedData *)FVar17.Data);
      FVar17.Data = FVar17.Data + 0x78;
    }
    else {
      if (local_148.Handle != (UObject *)0x0) {
        UE::GC::MarkAsReachable(local_148.Handle);
        goto LAB_149c7e4b5;
      }
LAB_149c7e627:
      local_150.Handle = (UObject *)0x0;
LAB_149c7e630:
      FVar17.Data = FVar17.Data + 0x78;
    }
  }
  if (((param_2->GeneratingShapes).ArrayNum == 0) &&
     ((0 < local_130.ArrayNum || (0 < local_140.ArrayNum)))) {
    if (2 < (byte)LogPCG._0_1_) {
      pFVar16 = FText::AsLocalizable_Advanced_LocText
                          (&local_c0,L"PCGVolumeSamplerElement",L"NoShapeToSample",
                           L"No Spatial data shape was provided for sampling. No points will be sampled."
                          );
      FText::ToString(pFVar16);
      bVar6 = param_1 !=
              (TPCGTimeSlicedContext<PCGVolumeSampler::FVolumeSamplerExecutionState,PCGVolumeSampler::FVolumeSamplerIterationState,FPCGContext>
               *)0x0;
      if (bVar6) {
        FPCGContext::GetTaskName((FPCGContext *)param_1,&local_d0);
        FPCGContext::GetExecutionSourceName((FPCGContext *)param_1,&local_e0);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((bVar6) && (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      }
      if ((bVar6) && (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
      if (local_c0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c0.TextData.Reference + 0x10))();
      }
    }
    EVar7 = NoOperation;
  }
  else {
    EVar7 = Success;
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_130.AllocatorInstance.Data,local_130.ArrayNum);
  if ((FPCGTaggedData *)local_130.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_130.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_140.AllocatorInstance.Data,local_140.ArrayNum);
  if ((FPCGTaggedData *)local_140.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_140.AllocatorInstance.Data);
  }
LAB_149c7e871:
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return EVar7;
}

// IsClockwiseXY @ 149c808f0

bool __cdecl PCGSplineDirection::IsClockwiseXY(UPCGSplineData *param_1)

{
  FPCGSplineStruct *this;
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  undefined1 uVar6;
  FInterpCurveVector *pFVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  double local_88;
  double dStack_80;
  undefined8 local_78;
  double local_70;
  double dStack_68;
  undefined8 local_60;
  undefined1 local_58 [64];
  
  if ((param_1 == (UPCGSplineData *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InputSplineData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSplineDirection.cpp"
                         ,0x12,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  this = &param_1->SplineStruct;
  dVar4 = 0.0;
  pFVar7 = FPCGSplineStruct::GetSplinePointsPosition(this);
  iVar1 = *(int *)&pFVar7->field_0x8;
  if (iVar1 < 2) {
    bVar5 = true;
  }
  else {
    if (iVar1 == 2) {
      local_60 = 0;
      local_78 = 0;
      local_70 = 0.0;
      dStack_68 = 0.0;
      local_88 = 0.0;
      dStack_80 = 0.0;
      (**(code **)(*(longlong *)param_1 + 0x500))(param_1,0,local_58,&local_88);
      (**(code **)(*(longlong *)param_1 + 0x500))(param_1,1,&local_70,local_58);
      dVar4 = dStack_80 * local_70 - local_88 * dStack_68;
    }
    else {
      iVar11 = 0;
      do {
        pFVar7 = FPCGSplineStruct::GetSplinePointsPosition(this);
        uVar9 = iVar11 % iVar1;
        uVar8 = 0;
        if ((int)uVar9 < *(int *)&pFVar7->field_0x8) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        lVar2 = *(longlong *)pFVar7;
        pFVar7 = FPCGSplineStruct::GetSplinePointsPosition(this);
        iVar11 = iVar11 + 1;
        uVar10 = iVar11 % iVar1;
        uVar8 = 0;
        if ((int)uVar10 < *(int *)&pFVar7->field_0x8) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        dVar4 = dVar4 + (*(double *)((longlong)(int)uVar9 * 0x58 + 0x10 + lVar2) *
                         *(double *)((longlong)(int)uVar10 * 0x58 + 8 + *(longlong *)pFVar7) -
                        *(double *)((longlong)(int)uVar10 * 0x58 + 0x10 + *(longlong *)pFVar7) *
                        *(double *)((longlong)(int)uVar9 * 0x58 + 8 + lVar2));
      } while (iVar11 < iVar1);
    }
    bVar5 = dVar4 <= 0.0;
  }
  return bVar5;
}

// PointInsidePolygon2D @ 149c81b40

bool __cdecl
PCGSplineSamplerHelpers::PointInsidePolygon2D
          (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1,
          TVector2<double> *param_2,double param_3)

{
  uint uVar1;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_28;
  TVector2<double>_u_0 local_18;
  
  if (param_1->ArrayNum < 3) {
    return false;
  }
  local_18._s_0.X = param_3 + (param_2->field0_0x0)._s_0.X;
  local_18._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  SegmentPolygonIntersection2D(param_2,(TVector2<double> *)&local_18._s_0,param_1,&local_28);
  uVar1 = local_28.ArrayNum & 0x80000001;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return uVar1 == 1;
}

// ProjectOntoSplineInteriorSurface @ 149c84bd0

double __cdecl
PCGSplineSamplerHelpers::ProjectOntoSplineInteriorSurface
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TVector<double> *param_2)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  uVar8 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar7 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar6 = __real_3e45798ee2308c3a;
  dVar5 = __real_3ff0000000000000;
  iVar13 = param_1->ArrayNum;
  uVar11 = 0;
  dVar16 = 0.0;
  dVar14 = 0.0;
  dVar4 = 0.0;
  if (0 < iVar13) {
    lVar12 = 0;
    dVar4 = 0.0;
    dVar14 = 0.0;
    do {
      uVar10 = 0;
      if ((int)uVar11 < iVar13) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar3 = (code *)swi(3);
        dVar14 = (double)(*pcVar3)();
        return dVar14;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      dVar15 = *(double *)(pFVar2 + lVar12) - (param_2->field0_0x0)._s_0.X;
      dVar17 = *(double *)(pFVar2 + lVar12 + 8) - (param_2->field0_0x0)._s_0.Y;
      lVar1 = lVar12 + 0x10;
      dVar15 = dVar17 * dVar17 + dVar15 * dVar15;
      if ((double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & uVar8,SUB84(dVar15,0) & uVar7) <=
          dVar6) {
        return *(double *)(pFVar2 + lVar1);
      }
      iVar13 = param_1->ArrayNum;
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0x18;
      dVar4 = dVar4 + dVar5 / dVar15;
      dVar14 = dVar14 + (dVar5 / dVar15) * *(double *)(pFVar2 + lVar1);
    } while ((int)uVar11 < iVar13);
  }
  if (dVar6 < (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) & uVar8,SUB84(dVar4,0) & uVar7)) {
    dVar16 = dVar14 / dVar4;
  }
  return dVar16;
}

// Reverse @ 149c85b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

UPCGSplineData * __cdecl PCGSplineDirection::Reverse(UPCGSplineData *param_1,FPCGContext *param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  double dVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  FInterpCurveQuat *pFVar17;
  bool bVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  UPCGSplineData *pUVar22;
  FInterpCurveVector *pFVar23;
  FInterpCurveVector *pFVar24;
  TTransform<double> *pTVar25;
  longlong lVar26;
  uint uVar27;
  uint uVar28;
  longlong lVar29;
  undefined1 auStackY_1b8 [32];
  ForAnyElementType local_178;
  undefined8 local_170;
  TArray<FSplinePoint,TSizedDefaultAllocator<32>_> local_168;
  longlong local_158;
  FInterpCurveQuat *local_150;
  TRotator<double> *local_148;
  longlong local_140;
  FInterpCurveVector *local_138;
  UPCGSplineData *local_130;
  FPCGContext *local_128;
  TArray<__int64,TSizedDefaultAllocator<32>_> local_120;
  uint local_110;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  undefined8 local_100;
  TRotator<double> local_f8;
  undefined1 local_d8 [96];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_130 = param_1;
  local_128 = param_2;
  if ((param_1 == (UPCGSplineData *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("InputSplineData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSplineDirection.cpp"
                          ,0x39,L""), bVar18)) {
    pcVar8 = (code *)swi(3);
    pUVar22 = (UPCGSplineData *)(*pcVar8)();
    return pUVar22;
  }
  pFVar23 = FPCGSplineStruct::GetSplinePointsPosition(&param_1->SplineStruct);
  local_150 = FPCGSplineStruct::GetSplinePointsRotation(&param_1->SplineStruct);
  pFVar24 = FPCGSplineStruct::GetSplinePointsScale(&param_1->SplineStruct);
  iVar4 = (param_1->SplineStruct).ControlPointsEntryKeys.ArrayNum;
  pFVar6 = (param_1->SplineStruct).ControlPointsEntryKeys.AllocatorInstance.Data;
  local_138 = pFVar24;
  if ((iVar4 < 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar18)) {
    pcVar8 = (code *)swi(3);
    pUVar22 = (UPCGSplineData *)(*pcVar8)();
    return pUVar22;
  }
  local_170 = CONCAT44(local_170._4_4_,iVar4);
  local_178.Data = (FScriptContainerElement *)0x0;
  if (iVar4 == 0) {
    local_170 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar4,0,&local_178,iVar4,(int *)((longlong)&local_170 + 4));
    memcpy(local_178.Data,pFVar6,(longlong)iVar4 << 3);
  }
  local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.ArrayNum = 0;
  local_168.ArrayMax = 0;
  uVar5 = *(uint *)&pFVar23->field_0x8;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
  }
  if (0 < (int)uVar5) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x88,8,uVar5,&local_168.AllocatorInstance,0,&local_168.ArrayMax);
  }
  uVar16 = _UNK_15066df7c;
  uVar15 = _UNK_15066df78;
  uVar14 = __xmm_80000000000000008000000000000000._4_4_;
  uVar5 = (uint)__xmm_80000000000000008000000000000000;
  uVar28 = *(int *)&pFVar23->field_0x8 - 1;
  if (-1 < (int)uVar28) {
    lVar29 = (longlong)(int)uVar28 * 0x58;
    local_158 = (longlong)(int)uVar28 << 7;
    do {
      uVar27 = ~uVar28 >> 0x1f;
      uVar19 = 0;
      if ((int)uVar28 < *(int *)&pFVar24->field_0x8) {
        uVar19 = uVar27;
      }
      if ((uVar19 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar8 = (code *)swi(3);
        pUVar22 = (UPCGSplineData *)(*pcVar8)();
        return pUVar22;
      }
      pFVar17 = local_150;
      local_140 = *(longlong *)pFVar24;
      uVar19 = 0;
      if ((int)uVar28 < *(int *)&local_150->field_0x8) {
        uVar19 = uVar27;
      }
      if ((uVar19 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar8 = (code *)swi(3);
        pUVar22 = (UPCGSplineData *)(*pcVar8)();
        return pUVar22;
      }
      local_148 = UE::Math::TQuat<double>::Rotator
                            ((TQuat<double> *)(local_158 + 0x10 + *(longlong *)pFVar17),&local_f8);
      uVar19 = 0;
      if ((int)uVar28 < *(int *)&pFVar23->field_0x8) {
        uVar19 = uVar27;
      }
      if ((uVar19 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar8 = (code *)swi(3);
        pUVar22 = (UPCGSplineData *)(*pcVar8)();
        return pUVar22;
      }
      puVar1 = (uint *)(*(longlong *)pFVar23 + 0x20 + lVar29);
      local_110 = *puVar1 ^ uVar5;
      uStack_10c = puVar1[1] ^ uVar14;
      uStack_108 = puVar1[2] ^ uVar15;
      uStack_104 = puVar1[3] ^ uVar16;
      uVar3 = *(undefined8 *)(*(longlong *)pFVar23 + 0x30 + lVar29);
      uVar19 = 0;
      if ((int)uVar28 < *(int *)&pFVar23->field_0x8) {
        uVar19 = uVar27;
      }
      local_100 = CONCAT44((uint)((ulonglong)uVar3 >> 0x20) ^ uVar14,(uint)uVar3 ^ uVar5);
      if ((uVar19 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar8 = (code *)swi(3);
        pUVar22 = (UPCGSplineData *)(*pcVar8)();
        return pUVar22;
      }
      uVar3 = *(undefined8 *)(*(longlong *)pFVar23 + 0x38 + lVar29);
      puVar1 = (uint *)(*(longlong *)pFVar23 + 0x40 + lVar29);
      uVar19 = *puVar1;
      uVar9 = puVar1[1];
      uVar10 = puVar1[2];
      uVar11 = puVar1[3];
      uVar20 = 0;
      if ((int)uVar28 < *(int *)&pFVar23->field_0x8) {
        uVar20 = uVar27;
      }
      if ((uVar20 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar8 = (code *)swi(3);
        pUVar22 = (UPCGSplineData *)(*pcVar8)();
        return pUVar22;
      }
      iVar4 = local_168.ArrayNum;
      lVar7 = *(longlong *)pFVar23;
      iVar21 = local_168.ArrayNum;
      if (local_168.ArrayNum == local_168.ArrayMax) {
        iVar21 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x888,&local_168.AllocatorInstance,&local_168.ArrayMax);
      }
      local_158 = local_158 + -0x80;
      local_168.ArrayNum = iVar21 + 1;
      lVar26 = (longlong)iVar21 * 0x88;
      *(float *)(local_168.AllocatorInstance.Data + lVar26) = (float)iVar4;
      puVar2 = (undefined8 *)(lVar29 + 8 + lVar7);
      uVar12 = puVar2[1];
      *(undefined8 *)(local_168.AllocatorInstance.Data + lVar26 + 8) = *puVar2;
      *(undefined8 *)(local_168.AllocatorInstance.Data + lVar26 + 8 + 8) = uVar12;
      *(undefined8 *)(local_168.AllocatorInstance.Data + lVar26 + 0x18) =
           *(undefined8 *)(lVar29 + 0x18 + lVar7);
      *(ulonglong *)(local_168.AllocatorInstance.Data + lVar26 + 0x20) =
           CONCAT44((uint)((ulonglong)uVar3 >> 0x20) ^ uVar14,(uint)uVar3 ^ uVar5);
      pFVar6 = local_168.AllocatorInstance.Data + lVar26 + 0x28;
      *(uint *)pFVar6 = uVar19 ^ uVar5;
      *(uint *)(pFVar6 + 4) = uVar9 ^ uVar14;
      *(uint *)(pFVar6 + 8) = uVar10 ^ uVar15;
      *(uint *)(pFVar6 + 0xc) = uVar11 ^ uVar16;
      *(ulonglong *)(local_168.AllocatorInstance.Data + lVar26 + 0x38) =
           CONCAT44(uStack_10c,local_110);
      *(ulonglong *)(local_168.AllocatorInstance.Data + lVar26 + 0x38 + 8) =
           CONCAT44(uStack_104,uStack_108);
      *(undefined8 *)(local_168.AllocatorInstance.Data + lVar26 + 0x48) = local_100;
      dVar13 = local_148->Yaw;
      *(double *)(local_168.AllocatorInstance.Data + lVar26 + 0x50) = local_148->Pitch;
      *(double *)(local_168.AllocatorInstance.Data + lVar26 + 0x50 + 8) = dVar13;
      *(double *)(local_168.AllocatorInstance.Data + lVar26 + 0x60) = local_148->Roll;
      puVar2 = (undefined8 *)(local_140 + 8 + lVar29);
      uVar3 = puVar2[1];
      *(undefined8 *)(local_168.AllocatorInstance.Data + lVar26 + 0x68) = *puVar2;
      *(undefined8 *)(local_168.AllocatorInstance.Data + lVar26 + 0x68 + 8) = uVar3;
      puVar2 = (undefined8 *)(local_140 + 0x18 + lVar29);
      lVar29 = lVar29 + -0x58;
      uVar28 = uVar28 - 1;
      *(undefined8 *)(local_168.AllocatorInstance.Data + lVar26 + 0x78) = *puVar2;
      local_168.AllocatorInstance.Data[lVar26 + 0x80] = (FScriptContainerElement)0x4;
      pFVar24 = local_138;
      param_1 = local_130;
    } while (-1 < (int)uVar28);
  }
  pUVar22 = FPCGContext::NewObject_AnyThread<UPCGSplineData>(local_128);
  UPCGSpatialData::InitializeFromData
            ((UPCGSpatialData *)pUVar22,(UPCGSpatialData *)param_1,(UPCGMetadata *)0x0,true,true);
  local_120.ArrayNum = (int)local_170;
  local_120.ArrayMax = local_170._4_4_;
  local_120.AllocatorInstance.Data = local_178.Data;
  local_178.Data = (FScriptContainerElement *)0x0;
  local_170 = 0;
  pTVar25 = (TTransform<double> *)(**(code **)(*(longlong *)param_1 + 0x498))(param_1,local_d8);
  bVar18 = (bool)(**(code **)(*(longlong *)param_1 + 0x510))(param_1);
  UPCGSplineData::Initialize(pUVar22,&local_168,bVar18,pTVar25,&local_120);
  if (local_168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.AllocatorInstance.Data);
  }
  if (local_178.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data);
  }
  return pUVar22;
}

// SampleInteriorData @ 149c87710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

void __cdecl
PCGSplineSamplerHelpers::SampleInteriorData
          (FPCGContext *param_1,UPCGPolyLineData *param_2,UPCGSpatialData *param_3,
          UPCGSpatialData *param_4,FPCGProjectionParams *param_5,FPCGSplineSamplerParams *param_6,
          UPCGBasePointData *param_7)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  code *pcVar6;
  double dVar7;
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  bool bVar17;
  bool bVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  UClass *pUVar22;
  FText *pFVar23;
  FScriptContainerElement *pFVar24;
  undefined8 *puVar25;
  double *pdVar26;
  ulonglong uVar27;
  longlong lVar28;
  TTransform<double> *pTVar29;
  int *piVar30;
  uint uVar31;
  ulonglong uVar32;
  undefined1 *puVar33;
  ForAnyElementType FVar34;
  uint uVar35;
  ulonglong uVar36;
  FScriptContainerElement *pFVar37;
  TArray<TTuple<UE::Math::TTransform<double>,UE::Math::TVector<double>,float>,TSizedDefaultAllocator<32>_>
  *pTVar38;
  undefined8 uVar39;
  FScriptContainerElement *pFVar40;
  double dVar41;
  undefined1 in_XMM2 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 in_XMM3 [16];
  undefined8 uVar47;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  UPCGSpatialData *local_res18;
  UPCGSpatialData *local_res20;
  undefined1 auStackY_808 [32];
  char local_7b8;
  char local_7b7;
  <lambda_1> local_7b6 [6];
  ForAnyElementType local_7b0;
  undefined8 local_7a8;
  ForAnyElementType local_7a0;
  uint local_798;
  uint local_794;
  uint local_790;
  undefined1 local_78c;
  undefined1 local_78b;
  undefined1 local_78a;
  undefined1 local_789;
  undefined1 local_788;
  char local_787 [7];
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_780;
  ForAnyElementType local_770;
  int local_768;
  int iStack_764;
  ForAnyElementType local_760;
  undefined8 local_758;
  UPCGBasePointData *local_750;
  ForAnyElementType local_748;
  undefined8 local_740;
  uint local_738;
  int local_734;
  uint local_730;
  FPCGSplineStruct *local_728;
  FPCGContext *local_720;
  FPCGSplineSamplerParams *local_718;
  int local_710;
  int local_70c;
  TArray<TTuple<UE::Math::TVector<double>,UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>
  local_708;
  double local_6f8;
  double dStack_6f0;
  double local_6e8;
  undefined8 local_6e0;
  undefined8 uStack_6d8;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_6d0;
  undefined8 local_6c0;
  undefined8 uStack_6b8;
  TArray<int,TSizedDefaultAllocator<32>_> local_6b0;
  double local_6a0;
  double dStack_698;
  double local_690;
  ulonglong local_688;
  ulonglong uStack_680;
  ulonglong local_678;
  ulonglong uStack_670;
  double local_668;
  double local_660;
  undefined8 local_658;
  double local_650;
  FRichCurve *local_648;
  TArray<TTuple<UE::Math::TTransform<double>,UE::Math::TVector<double>,float>,TSizedDefaultAllocator<32>_>
  *local_640;
  undefined1 local_638 [16];
  double local_628;
  undefined1 local_620 [16];
  double local_610;
  TArrayView<UE::Math::TVector<double>_const_,int> local_608;
  TVector2<double>_u_0 local_5f8;
  TVector2<double>_u_0 local_5e8;
  TVector2<double>_u_0 local_5d8;
  TVector2<double>_u_0 local_5c8;
  undefined1 local_5b8 [16];
  TArrayView<std::nullptr_t,int> local_5a8;
  code *local_598;
  uint **local_590;
  uint *local_588;
  int *local_580;
  int *local_578;
  double *local_570;
  FPCGSplineSamplerParams *local_568;
  double *local_560;
  double *local_558;
  undefined8 *local_550;
  double *local_548;
  ForAnyElementType *local_540;
  char *local_538;
  ForAnyElementType *local_530;
  undefined1 *local_528;
  ForAnyElementType *local_520;
  char *local_518;
  FPCGSplineStruct **local_510;
  char *local_508;
  double *local_500;
  ForAnyElementType *local_4f8;
  uint *local_4f0;
  undefined1 *local_4e8;
  FRichCurve **local_4e0;
  undefined1 *local_4d8;
  UPCGSpatialData **local_4d0;
  undefined1 *local_4c8;
  undefined1 *local_4c0;
  FPCGProjectionParams *local_4b8;
  UPCGBasePointData **local_4b0;
  UPCGSpatialData **local_4a8;
  undefined1 *local_4a0;
  FText local_498;
  FText local_488;
  FText local_478;
  FText local_468;
  TVector2<double> local_458;
  FPCGPointValueRanges local_448;
  undefined1 local_2b8 [24];
  TVector<double> local_2a0;
  undefined1 local_288 [24];
  undefined1 local_270 [24];
  undefined1 local_258 [24];
  undefined1 local_240 [24];
  undefined1 local_228 [24];
  undefined1 local_210 [24];
  undefined1 local_1f8 [72];
  double local_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  undefined1 local_190 [16];
  double local_180;
  undefined1 local_178;
  TVector<double>_u_0 local_170;
  double local_158;
  double dStack_150;
  double local_148;
  undefined1 local_140;
  undefined1 local_138 [96];
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_808;
  local_718 = param_6;
  local_750 = param_7;
  local_res18 = param_3;
  local_res20 = param_4;
  local_720 = param_1;
  if ((param_2 == (UPCGPolyLineData *)0x0) || (param_7 == (UPCGBasePointData *)0x0)) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("LineData && OutPointData",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSplineSampler.cpp"
                        ,0x41b,L"");
    if (bVar17) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (param_2 == (UPCGPolyLineData *)0x0) goto LAB_149c88fac;
  }
  pUVar22 = Z_Construct_UClass_UPCGSplineData_NoRegister();
  uVar47 = in_XMM3._8_8_;
  uVar39 = in_XMM2._8_8_;
  iVar19 = (int)pUVar22->_padding_;
  if ((*(int *)(*(longlong *)&param_2->field_0x10 + 0x38) < iVar19) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar19 * 8) !=
      &pUVar22->_padding_)) {
    pUVar22 = Z_Construct_UClass_UPCGLandscapeSplineData_NoRegister();
    iVar19 = (int)pUVar22->_padding_;
    if ((iVar19 <= *(int *)(*(longlong *)&param_2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar19 * 8) ==
        &pUVar22->_padding_)) {
      pFVar23 = FText::AsLocalizable_Advanced_LocText
                          (&local_478,L"PCGSplineSamplerElement",L"LandscapeSplinesNotSupported",
                           L"Input data of type Landscape Spline are not supported for interior sampling"
                          );
      PCGLog::LogErrorOnGraph(pFVar23,param_1);
      if (local_478.TextData.Reference == (ITextData *)0x0) {
        return;
      }
      (**(code **)((longlong)*local_478.TextData.Reference + 0x10))();
      return;
    }
LAB_149c88fac:
    pFVar23 = FText::AsLocalizable_Advanced_LocText
                        (&local_468,L"PCGSplineSamplerElement",L"CouldNotCreateSplineData",
                         L"Could not create UPCGSplineData from LineData");
    PCGLog::LogErrorOnGraph(pFVar23,param_1);
    if (local_468.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_468.TextData.Reference + 0x10))();
    }
    return;
  }
  local_728 = (FPCGSplineStruct *)(param_2 + 1);
  if (local_728 == (FPCGSplineStruct *)0x0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Spline",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSplineSampler.cpp"
                        ,0x42e,L"");
    uVar47 = in_XMM3._8_8_;
    uVar39 = in_XMM2._8_8_;
    if (bVar17) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (local_728->bClosedLoop == false) {
    pFVar23 = FText::AsLocalizable_Advanced_LocText
                        (&local_498,L"PCGSplineSamplerElement",L"ShapeNotClosed",
                         L"Interior sampling only generates for closed shapes, enable the \'Closed Loop\' setting on the spline"
                        );
    PCGLog::LogErrorOnGraph(pFVar23,param_1);
    if (local_498.TextData.Reference == (ITextData *)0x0) {
      return;
    }
    (**(code **)((longlong)*local_498.TextData.Reference + 0x10))();
    return;
  }
  auVar43 = *(undefined1 (*) [16])&(local_728->LocalBounds).Origin.field0_0x0;
  auVar46 = *(undefined1 (*) [16])((longlong)&(local_728->LocalBounds).BoxExtent.field0_0x0 + 8);
  local_1b0 = (local_728->LocalBounds).SphereRadius;
  auVar8._4_8_ = uVar39;
  auVar8._0_4_ = auVar43._4_4_;
  auVar42._0_8_ = auVar8._0_8_ << 0x20;
  auVar42._8_4_ = auVar43._8_4_;
  auVar42._12_4_ = auVar43._12_4_;
  auVar5 = *(undefined1 (*) [16])((longlong)&(local_728->LocalBounds).Origin.field0_0x0 + 0x10);
  auVar9._4_8_ = uVar47;
  auVar9._0_4_ = auVar5._4_4_;
  auVar44._0_8_ = auVar9._0_8_ << 0x20;
  auVar44._8_4_ = auVar5._8_4_;
  auVar44._12_4_ = auVar5._12_4_;
  local_6a0 = auVar44._8_8_;
  auVar45._8_8_ = auVar5._8_8_;
  auVar45._0_8_ = local_6a0;
  local_6f8 = auVar43._0_8_ - local_6a0;
  local_6a0 = auVar43._0_8_ + local_6a0;
  dStack_698 = auVar46._0_8_;
  dStack_6f0 = auVar42._8_8_ - dStack_698;
  dStack_698 = auVar42._8_8_ + dStack_698;
  local_690 = auVar46._8_8_;
  local_6e8 = auVar5._0_8_ - local_690;
  local_690 = auVar5._0_8_ + local_690;
  dVar2 = *(double *)((longlong)&(local_728->Bounds).BoxExtent.field0_0x0 + 8);
  uVar48 = SUB84(dVar2,0);
  uVar49 = (undefined4)((ulonglong)dVar2 >> 0x20);
  dVar3 = *(double *)&(local_728->Bounds).BoxExtent.field0_0x0;
  if (dVar2 <= dVar3) {
    uVar48 = SUB84(dVar3,0);
    uVar49 = (undefined4)((ulonglong)dVar3 >> 0x20);
  }
  dVar2 = (double)CONCAT44(uVar49,uVar48) + (double)CONCAT44(uVar49,uVar48);
  local_650 = dVar2 * dVar2;
  local_790 = (**(code **)(*(longlong *)param_2 + 0x4a0))(param_2);
  local_648 = FRuntimeFloatCurve::GetRichCurveConst(&param_6->InteriorDensityFalloffCurve);
  if (((local_648 == (FRichCurve *)0x0) || ((local_648->Keys).ArrayNum < 1)) || ((int)local_790 < 2)
     ) {
    local_7b8 = '\0';
  }
  else {
    local_7b8 = '\x01';
  }
  if ((param_6->InteriorOrientation == FollowCurvature) ||
     ((local_7b8 != '\0' && (param_6->bTreatSplineAsPolyline == false)))) {
    local_787[0] = '\x01';
  }
  else {
    local_787[0] = '\0';
  }
  if ((param_6->bProjectOntoSurface != false) || (local_788 = 0, local_787[0] != '\0')) {
    local_788 = 1;
  }
  dVar3 = (double)(param_6->InteriorBorderSampleSpacing * __real_3f000000);
  dVar41 = (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(dVar3,0) ^ (uint)__xmm_80000000000000008000000000000000);
  auVar43._0_8_ = dVar41 * UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  auVar43._8_8_ = dVar41;
  local_638._8_4_ = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * dVar41,0);
  local_638._0_8_ = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * dVar41;
  local_638._12_4_ =
       (int)((ulonglong)(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * dVar41) >> 0x20);
  local_610 = dVar3 * UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  local_620._8_4_ = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * dVar3,0);
  local_620._0_8_ = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * dVar3;
  local_620._12_4_ =
       (int)((ulonglong)(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * dVar3) >> 0x20);
  local_628 = auVar43._0_8_;
  dVar3 = FPCGSplineStruct::GetSplineLength(local_728);
  dVar41 = __real_3ff0000000000000;
  uVar36 = 0;
  local_7b0.Data = (FScriptContainerElement *)0x0;
  local_7a8 = 0;
  uVar27 = uVar36;
  if (param_6->bTreatSplineAsPolyline == false) {
    if (0.0 < param_6->InteriorBorderSampleSpacing) {
      uVar35 = (uint)(dVar3 / (double)param_6->InteriorBorderSampleSpacing + __real_3ff0000000000000
                     );
      if ((int)uVar35 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar35);
      }
      if (0 < (int)uVar35) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,uVar35,&local_7b0,0,(int *)((longlong)&local_7a8 + 4));
        uVar27 = local_7a8 & 0xffffffff;
      }
      dVar7 = 0.0;
      if (0.0 < dVar3) {
        do {
          auVar43._8_8_ = 0;
          auVar43._0_8_ = dVar7;
          pFVar24 = (FScriptContainerElement *)
                    FPCGSplineStruct::GetLocationAtDistanceAlongSpline
                              (local_728,&local_2a0,dVar7,Local);
          if (((local_7b0.Data <= pFVar24) &&
              (pFVar24 < local_7b0.Data + (longlong)local_7a8._4_4_ * 0x18)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar17)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar19 = (int)local_7a8;
          if ((int)local_7a8 == local_7a8._4_4_) {
            iVar19 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x818,&local_7b0,(int *)((longlong)&local_7a8 + 4));
          }
          local_7a8 = CONCAT44(local_7a8._4_4_,iVar19 + 1);
          uVar39 = *(undefined8 *)(pFVar24 + 8);
          *(undefined8 *)(local_7b0.Data + (longlong)iVar19 * 0x18) = *(undefined8 *)pFVar24;
          *(undefined8 *)(local_7b0.Data + (longlong)iVar19 * 0x18 + 8) = uVar39;
          *(undefined8 *)(local_7b0.Data + (longlong)iVar19 * 0x18 + 0x10) =
               *(undefined8 *)(pFVar24 + 0x10);
          dVar7 = dVar7 + (double)param_6->InteriorBorderSampleSpacing;
        } while (dVar7 < dVar3);
        goto LAB_149c87cad;
      }
    }
  }
  else {
    if ((int)local_790 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_790);
    }
    if (0 < (int)local_790) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,local_790,&local_7b0,0,(int *)((longlong)&local_7a8 + 4));
      uVar27 = local_7a8 & 0xffffffff;
    }
    uVar32 = uVar36;
    if (0 < (int)local_790) {
      do {
        auVar45 = ZEXT816(0);
        pFVar24 = (FScriptContainerElement *)
                  (**(code **)(*(longlong *)param_2 + 0x4d8))(param_2,local_2b8,uVar32);
        if (((local_7b0.Data <= pFVar24) &&
            (pFVar24 < local_7b0.Data + (longlong)local_7a8._4_4_ * 0x18)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar19 = (int)local_7a8;
        if ((int)local_7a8 == local_7a8._4_4_) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&local_7b0,(int *)((longlong)&local_7a8 + 4));
        }
        uVar35 = (int)uVar32 + 1;
        local_7a8 = CONCAT44(local_7a8._4_4_,iVar19 + 1);
        uVar39 = *(undefined8 *)(pFVar24 + 8);
        *(undefined8 *)(local_7b0.Data + (longlong)iVar19 * 0x18) = *(undefined8 *)pFVar24;
        *(undefined8 *)(local_7b0.Data + (longlong)iVar19 * 0x18 + 8) = uVar39;
        *(undefined8 *)(local_7b0.Data + (longlong)iVar19 * 0x18 + 0x10) =
             *(undefined8 *)(pFVar24 + 0x10);
        uVar32 = (ulonglong)uVar35;
      } while ((int)uVar35 < (int)local_790);
LAB_149c87cad:
      uVar27 = local_7a8 & 0xffffffff;
    }
  }
  local_770.Data = (FScriptContainerElement *)0x0;
  local_768 = 0;
  iStack_764 = 0;
  iVar19 = (int)uVar27;
  if (iVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar27);
  }
  if (0 < iVar19) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar19,&local_770,0,&iStack_764);
    uVar27 = local_7a8 & 0xffffffff;
  }
  iVar19 = (int)uVar27;
  pFVar24 = local_7b0.Data + (longlong)iVar19 * 0x18;
  FVar34.Data = local_7b0.Data;
  while( true ) {
    if ((int)uVar27 != iVar19) {
      local_78c = 0;
      `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_78c);
      uVar27 = local_7a8 & 0xffffffff;
    }
    dVar3 = _UNK_150689678;
    dVar10 = ___xmm_3fe00000000000003fe0000000000000;
    dVar7 = __real_3f1a36e2e0000000;
    if (FVar34.Data == pFVar24) break;
    local_6c0 = *(undefined8 *)FVar34.Data;
    uStack_6b8 = *(undefined8 *)(FVar34.Data + 8);
    if (((local_770.Data <= (FScriptContainerElement *)&local_6c0) &&
        ((FScriptContainerElement *)&local_6c0 < local_770.Data + (longlong)iStack_764 * 0x10)) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar17)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (local_768 == iStack_764) {
      local_768 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_770,&iStack_764);
    }
    lVar28 = (longlong)local_768;
    local_768 = local_768 + 1;
    FVar34.Data = FVar34.Data + 0x18;
    *(undefined8 *)(local_770.Data + lVar28 * 0x10) = local_6c0;
    *(undefined8 *)(local_770.Data + lVar28 * 0x10 + 8) = uStack_6b8;
    uVar27 = local_7a8 & 0xffffffff;
  }
  local_748.Data = (FScriptContainerElement *)0x0;
  local_740 = 0;
  if (local_7b8 != '\0') {
    iVar19 = (int)uVar27;
    if ((int)local_790 < 4) {
      if (local_790 == 3) {
        puVar25 = (undefined8 *)(**(code **)(*(longlong *)param_2 + 0x4d8))(param_2,local_270,0);
        uVar48 = (undefined4)*puVar25;
        uVar49 = (undefined4)((ulonglong)*puVar25 >> 0x20);
        uVar50 = (undefined4)puVar25[1];
        uVar51 = (undefined4)((ulonglong)puVar25[1] >> 0x20);
        pdVar26 = (double *)(**(code **)(*(longlong *)param_2 + 0x4d8))(param_2,local_258,1);
        uVar39 = 2;
        puVar33 = local_240;
      }
      else {
        if (local_790 != 2) goto LAB_149c885e4;
        puVar25 = (undefined8 *)(**(code **)(*(longlong *)param_2 + 0x4d8))(param_2,local_228,0);
        uVar48 = (undefined4)*puVar25;
        uVar49 = (undefined4)((ulonglong)*puVar25 >> 0x20);
        uVar50 = (undefined4)puVar25[1];
        uVar51 = (undefined4)((ulonglong)puVar25[1] >> 0x20);
        pdVar26 = (double *)(**(code **)(*(longlong *)param_2 + 0x4d8))(param_2,local_1f8,0);
        uVar39 = 1;
        puVar33 = local_210;
      }
      dVar2 = *pdVar26;
      auVar45._0_12_ = ZEXT812(0);
      auVar45._12_4_ = 0;
      dVar4 = pdVar26[1];
      pdVar26 = (double *)(**(code **)(*(longlong *)param_2 + 0x4d8))(param_2,puVar33,uVar39);
      dVar4 = (dVar4 + (double)CONCAT44(uVar51,uVar50) + pdVar26[1]) * __real_3fd5555555555555;
      local_5b8._8_4_ = SUB84(dVar4,0);
      local_5b8._0_8_ =
           (dVar2 + (double)CONCAT44(uVar49,uVar48) + *pdVar26) * __real_3fd5555555555555;
      local_5b8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    }
    else {
      local_7a0.Data = (FScriptContainerElement *)0x0;
      local_798 = 0;
      local_794 = 0;
      uVar32 = uVar36;
      if (param_6->bTreatSplineAsPolyline == false) {
        if ((int)local_790 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)local_790);
        }
        if (0 < (int)local_790) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,local_790,&local_7a0,0,(int *)&local_794);
          uVar32 = (ulonglong)local_798;
        }
        if (0 < (int)local_790) {
          do {
            auVar45 = ZEXT816(0);
            pFVar24 = (FScriptContainerElement *)
                      (**(code **)(*(longlong *)param_2 + 0x4d8))(param_2,local_288,uVar36);
            if (((local_7a0.Data <= pFVar24) &&
                (pFVar24 < local_7a0.Data + (longlong)(int)local_794 * 0x18)) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar17)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if (local_798 == local_794) {
              local_798 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x818,&local_7a0,(int *)&local_794);
            }
            uVar35 = local_798 + 1;
            uVar21 = (int)uVar36 + 1;
            uVar36 = (ulonglong)uVar21;
            uVar39 = *(undefined8 *)(pFVar24 + 8);
            lVar28 = (longlong)(int)local_798;
            *(undefined8 *)(local_7a0.Data + lVar28 * 0x18) = *(undefined8 *)pFVar24;
            *(undefined8 *)(local_7a0.Data + lVar28 * 0x18 + 8) = uVar39;
            *(undefined8 *)(local_7a0.Data + lVar28 * 0x18 + 0x10) = *(undefined8 *)(pFVar24 + 0x10)
            ;
            *(double *)(local_7a0.Data + lVar28 * 0x18 + 0x10) = local_6e8;
            local_798 = uVar35;
          } while ((int)uVar21 < (int)local_790);
          uVar32 = (ulonglong)uVar35;
        }
      }
      else {
        if (iVar19 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum(uVar27);
        }
        if (0 < iVar19) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,iVar19,&local_7a0,0,(int *)&local_794);
          uVar27 = local_7a8 & 0xffffffff;
          uVar32 = (ulonglong)local_798;
        }
        iVar19 = (int)uVar27;
        pFVar24 = local_7b0.Data + (longlong)iVar19 * 0x18;
        FVar34.Data = local_7b0.Data;
        while( true ) {
          if ((int)uVar27 != iVar19) {
            local_78b = 0;
            `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(&local_78b);
            uVar32 = (ulonglong)local_798;
          }
          if (FVar34.Data == pFVar24) break;
          uVar35 = (uint)uVar32;
          if (((local_7a0.Data <= FVar34.Data) &&
              (FVar34.Data < local_7a0.Data + (longlong)(int)local_794 * 0x18)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), uVar35 = local_798, bVar17)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (uVar35 == local_794) {
            uVar35 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x818,&local_7a0,(int *)&local_794);
          }
          lVar28 = (longlong)(int)uVar35;
          local_798 = uVar35 + 1;
          uVar39 = *(undefined8 *)(FVar34.Data + 8);
          *(undefined8 *)(local_7a0.Data + lVar28 * 0x18) = *(undefined8 *)FVar34.Data;
          *(undefined8 *)(local_7a0.Data + lVar28 * 0x18 + 8) = uVar39;
          pFVar40 = FVar34.Data + 0x10;
          FVar34.Data = FVar34.Data + 0x18;
          *(undefined8 *)(local_7a0.Data + lVar28 * 0x18 + 0x10) = *(undefined8 *)pFVar40;
          *(double *)(local_7a0.Data + lVar28 * 0x18 + 0x10) = local_6e8;
          uVar27 = local_7a8 & 0xffffffff;
          uVar32 = (ulonglong)local_798;
        }
      }
      local_780.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_780.ArrayNum = 0;
      local_780.ArrayMax = 0;
      iVar19 = (int)uVar32;
      if (iVar19 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar32);
      }
      if (0 < iVar19) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar19,&local_780.AllocatorInstance,0,&local_780.ArrayMax);
        uVar32 = (ulonglong)local_798;
      }
      iVar19 = (int)uVar32;
      pFVar24 = local_7a0.Data + (longlong)iVar19 * 0x18;
      FVar34.Data = local_7a0.Data;
      while( true ) {
        if ((int)uVar32 != iVar19) {
          local_78a = 0;
          `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_78a);
        }
        if (FVar34.Data == pFVar24) break;
        local_6e0 = *(undefined8 *)FVar34.Data;
        uStack_6d8 = *(undefined8 *)(FVar34.Data + 8);
        if (((local_780.AllocatorInstance.Data <= (FScriptContainerElement *)&local_6e0) &&
            ((FScriptContainerElement *)&local_6e0 <
             local_780.AllocatorInstance.Data + (longlong)local_780.ArrayMax * 0x10)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (local_780.ArrayNum == local_780.ArrayMax) {
          iVar20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_780.AllocatorInstance,&local_780.ArrayMax);
          local_780.ArrayNum = iVar20;
        }
        lVar28 = (longlong)local_780.ArrayNum;
        FVar34.Data = FVar34.Data + 0x18;
        local_780.ArrayNum = local_780.ArrayNum + 1;
        *(undefined8 *)(local_780.AllocatorInstance.Data + lVar28 * 0x10) = local_6e0;
        *(undefined8 *)(local_780.AllocatorInstance.Data + lVar28 * 0x10 + 8) = uStack_6d8;
        uVar32 = (ulonglong)local_798;
      }
      local_708.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_708.ArrayNum = 0;
      local_708.ArrayMax = 0;
      local_6b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_6b0.ArrayNum = 0;
      local_6b0.ArrayMax = 0;
      bVar17 = -1 < CpuChannel->Enabled;
      if (bVar17) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId1172,
                   "FPCGSplineSamplerElement::Execute::GetVoronoiEdges",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSplineSampler.cpp"
                   ,0x494);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1172);
      }
      uVar35 = local_798;
      local_170._s_0.Z = local_6e8;
      local_140 = 1;
      local_608.DataPtr = (TVector<double> *)local_7a0.Data;
      local_170._s_0.X = local_6f8;
      local_170._s_0.Y = dStack_6f0;
      local_158 = local_6a0;
      dStack_150 = dStack_698;
      local_148 = local_6e8;
      if (((int)local_798 < 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar18)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_608.ArrayNum = uVar35;
      GetVoronoiEdges(&local_608,(TBox<double> *)&local_170._s_0,&local_708,&local_6b0,dVar7);
      if (bVar17) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      iVar19 = local_708.ArrayNum;
      pFVar24 = local_708.AllocatorInstance.Data + 8;
      pFVar40 = local_708.AllocatorInstance.Data + (longlong)local_708.ArrayNum * 0x30;
      iVar20 = local_780.ArrayNum;
      while( true ) {
        if (local_708.ArrayNum != iVar19) {
          local_789 = 0;
          `TCheckedPointerIterator<TTuple<UE::Math::TVector<double>,UE::Math::TVector<double>_>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_789);
          iVar20 = local_780.ArrayNum;
        }
        if (pFVar24 + -8 == pFVar40) break;
        uVar35 = 0;
        if (0 < (int)local_798) {
          do {
            local_5f8._s_0.X = (double)*(undefined8 *)(pFVar24 + 0x10);
            local_5f8._s_0.Y = (double)*(undefined8 *)(pFVar24 + 0x18);
            local_5e8._s_0.Y = (double)*(undefined8 *)pFVar24;
            uVar31 = (int)(uVar35 + 1) % iVar20;
            uVar21 = 0;
            if ((int)uVar31 < iVar20) {
              uVar21 = ~uVar31 >> 0x1f;
            }
            local_5e8._s_0.X = (double)*(undefined8 *)(pFVar24 + -8);
            if (uVar21 == 0) {
              bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar17) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar20 = local_780.ArrayNum;
            }
            pFVar37 = local_780.AllocatorInstance.Data + (longlong)(int)uVar31 * 0x10;
            uVar21 = 0;
            if ((int)uVar35 < iVar20) {
              uVar21 = ~uVar35 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            bVar17 = SegmentIntersection2D
                               ((TVector2<double> *)
                                (local_780.AllocatorInstance.Data + (longlong)(int)uVar35 * 0x10),
                                (TVector2<double> *)pFVar37,(TVector2<double> *)&local_5e8._s_0,
                                (TVector2<double> *)&local_5f8._s_0,&local_458);
            if (bVar17) goto LAB_149c8858e;
            uVar35 = uVar35 + 1;
            iVar20 = local_780.ArrayNum;
          } while ((int)uVar35 < (int)local_798);
        }
        local_5c8._s_0.X = (double)*(undefined8 *)(pFVar24 + -8);
        local_5c8._s_0.Y = (double)*(undefined8 *)pFVar24;
        auVar43._8_8_ = 0;
        auVar43._0_8_ = local_5c8._s_0.Y;
        if (2 < iVar20) {
          local_5d8._s_0.X = dVar2 + local_5c8._s_0.X;
          local_6d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_6d0.ArrayNum = 0;
          local_6d0.ArrayMax = 0;
          local_5d8._s_0.Y = local_5c8._s_0.Y;
          SegmentPolygonIntersection2D
                    ((TVector2<double> *)&local_5c8._s_0,(TVector2<double> *)&local_5d8._s_0,
                     &local_780,&local_6d0);
          uVar35 = local_6d0.ArrayNum & 0x80000001;
          if ((int)uVar35 < 0) {
            uVar35 = (uVar35 - 1 | 0xfffffffe) + 1;
          }
          if (local_6d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_6d0.AllocatorInstance.Data);
          }
          if (uVar35 == 1) {
            local_688 = *(ulonglong *)(pFVar24 + -8);
            uStack_680 = *(ulonglong *)pFVar24;
            local_678 = *(ulonglong *)(pFVar24 + 0x10);
            uStack_670 = *(ulonglong *)(pFVar24 + 0x18);
            if (((local_748.Data <= (FScriptContainerElement *)&local_688) &&
                ((FScriptContainerElement *)&local_688 <
                 local_748.Data + (longlong)local_740._4_4_ * 0x20)) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar17)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar20 = (int)local_740;
            if ((int)local_740 == local_740._4_4_) {
              iVar20 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x820,&local_748,(int *)((longlong)&local_740 + 4));
            }
            local_740 = CONCAT44(local_740._4_4_,iVar20 + 1);
            *(ulonglong *)(local_748.Data + (longlong)iVar20 * 0x20) = local_688;
            *(ulonglong *)(local_748.Data + (longlong)iVar20 * 0x20 + 8) = uStack_680;
            *(ulonglong *)(local_748.Data + (longlong)iVar20 * 0x20 + 0x10) = local_678;
            *(ulonglong *)(local_748.Data + (longlong)iVar20 * 0x20 + 0x10 + 8) = uStack_670;
          }
LAB_149c8858e:
          iVar20 = local_780.ArrayNum;
        }
        pFVar24 = pFVar24 + 0x30;
      }
      if (local_6b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6b0.AllocatorInstance.Data);
      }
      if (local_708.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_708.AllocatorInstance.Data);
      }
      if (local_780.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_780.AllocatorInstance.Data);
      }
      param_1 = local_720;
      param_6 = local_718;
      if (local_7a0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7a0.Data);
        param_1 = local_720;
        param_6 = local_718;
      }
    }
  }
LAB_149c885e4:
  uVar35 = 0;
  local_658 = __real_4059000000000000;
  dVar2 = (double)param_6->InteriorSampleSpacing;
  dVar41 = dVar41 / dVar2;
  auVar46._8_8_ = 0;
  auVar46._0_8_ = dVar41 * dStack_6f0;
  auVar46 = roundpd(auVar45,auVar46,2);
  local_668 = auVar46._0_8_ * dVar2;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = dVar41 * dStack_698;
  auVar43 = roundpd(auVar43,auVar5,1);
  local_660 = auVar43._0_8_ * dVar2;
  local_70c = (int)(((local_660 + dVar7) - local_668) * dVar41);
  if (param_1 == (FPCGContext *)0x0) {
    uVar21 = 1;
  }
  else {
    uVar31 = (param_1->AsyncState).NumAvailableTasks;
    uVar21 = (int)(local_70c + (local_70c >> 0x1f & 3U)) >> 2;
    if ((0 < (int)uVar31) && ((int)uVar31 < (int)uVar21)) {
      uVar21 = uVar31;
    }
  }
  if ((int)uVar21 < 1) {
    uVar21 = 1;
  }
  local_178 = 1;
  local_760.Data = (FScriptContainerElement *)0x0;
  local_758 = 0;
  local_710 = local_70c / (int)uVar21;
  local_198 = dVar2 * UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z *
              ___xmm_bfe0000000000000bfe0000000000000;
  dVar41 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * dVar2 * _UNK_150689738;
  local_1a8._8_4_ = SUB84(dVar41,0);
  local_1a8._0_8_ =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * dVar2 *
       ___xmm_bfe0000000000000bfe0000000000000;
  local_1a8._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
  dVar3 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * dVar2 * dVar3;
  local_180 = dVar2 * UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z * dVar10;
  local_190._8_4_ = SUB84(dVar3,0);
  local_190._0_8_ = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * dVar2 * dVar10;
  local_190._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  local_738 = uVar21;
  if ((int)uVar21 < 1) {
    if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
    }
  }
  else {
    iVar19 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,uVar21,&local_760,(int *)&local_758,(int *)((longlong)&local_758 + 4)
                       );
    memset(local_760.Data + (longlong)iVar19 * 0x10,0,(longlong)(int)uVar21 << 4);
  }
  (**(code **)(*(longlong *)param_2 + 0x498))(param_2,local_138);
  local_588 = &local_738;
  local_580 = &local_710;
  local_7b7 = '\0';
  local_578 = &local_70c;
  local_570 = &local_668;
  local_5a8.DataPtr = (void **)0x0;
  local_560 = &local_660;
  local_558 = &local_6f8;
  local_550 = &local_658;
  local_548 = &local_6a0;
  local_540 = &local_770;
  local_538 = &local_7b7;
  local_530 = &local_760;
  local_528 = &local_788;
  local_520 = &local_7b0;
  local_518 = local_787;
  local_510 = &local_728;
  local_508 = &local_7b8;
  local_500 = &local_650;
  local_4f8 = &local_748;
  local_4f0 = &local_790;
  local_4e8 = local_5b8;
  local_4e0 = &local_648;
  local_4d8 = local_138;
  local_4d0 = &local_res20;
  local_4c8 = local_638;
  local_4c0 = local_620;
  local_4b8 = param_5;
  local_4b0 = &local_750;
  local_4a8 = &local_res18;
  local_4a0 = local_1a8;
  local_598 = UE::Core::Private::Function::
              TFunctionRefCaller<`PCGSplineSamplerHelpers::SampleInteriorData'::__l2::<lambda_1>,void,int>
              ::Call;
  local_590 = &local_588;
  local_5a8.ArrayNum = 0;
  local_568 = param_6;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",local_738,1,(TFunctionRef<void___cdecl(int)> *)&local_598,
             local_7b6[0],None,&local_5a8);
  if (local_7b7 != '\0') {
    pFVar23 = FText::AsLocalizable_Advanced_LocText
                        (&local_488,L"PCGSplineSamplerElement",L"IntersectionTestFailed",
                         L"One or more rows of the spline interior failed to sample (intersection test failed). Ensure the spline points are not overlapping."
                        );
    PCGLog::LogErrorOnGraph(pFVar23,param_1);
    if (local_488.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_488.TextData.Reference + 0x10))();
    }
  }
  iVar19 = (int)local_758;
  uVar27 = (ulonglong)(int)local_758;
  pTVar38 = (TArray<TTuple<UE::Math::TTransform<double>,UE::Math::TVector<double>,float>,TSizedDefaultAllocator<32>_>
             *)(local_760.Data + uVar27 * 0x10);
  FVar34.Data = local_760.Data;
  uVar21 = uVar35;
  while( true ) {
    if ((int)uVar27 != iVar19) {
      local_787[1] = 0;
      `TCheckedPointerIterator<TArray<TTuple<UE::Math::TTransform<double>,UE::Math::TVector<double>,float>,TSizedDefaultAllocator<32>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_787 + 1);
      uVar27 = local_758 & 0xffffffff;
    }
    if ((TArray<TTuple<UE::Math::TTransform<double>,UE::Math::TVector<double>,float>,TSizedDefaultAllocator<32>_>
         *)FVar34.Data == pTVar38) break;
    uVar21 = uVar21 + ((TArray<TTuple<UE::Math::TTransform<double>,UE::Math::TVector<double>,float>,TSizedDefaultAllocator<32>_>
                        *)FVar34.Data)->ArrayNum;
    FVar34.Data = FVar34.Data + 0x10;
  }
  local_730 = uVar21;
  if (param_1 == (FPCGContext *)0x0) {
    local_734 = 0x2a;
  }
  else {
    local_734 = FPCGContext::GetSeed(param_1);
  }
  (**(code **)(local_750->_padding_ + 0x490))(local_750,uVar21);
  (**(code **)(local_750->_padding_ + 0x498))(local_750,0x43);
  (**(code **)(local_750->_padding_ + 0x550))(local_750,local_638);
  (**(code **)(local_750->_padding_ + 0x558))(local_750,local_620);
  (**(code **)(local_750->_padding_ + 0x568))(local_750,local_718->PointSteepness);
  FPCGPointValueRanges::FPCGPointValueRanges(&local_448,local_750,false);
  uVar27 = (ulonglong)(int)local_758;
  uVar21 = 0;
  local_640 = (TArray<TTuple<UE::Math::TTransform<double>,UE::Math::TVector<double>,float>,TSizedDefaultAllocator<32>_>
               *)(local_760.Data + uVar27 * 0x10);
  local_720 = (FPCGContext *)CONCAT44(local_720._4_4_,(int)local_758);
  FVar34.Data = local_760.Data;
  do {
    pTVar38 = local_640;
    if ((int)local_758 != (int)uVar27) {
      local_787[2] = 0;
      `TCheckedPointerIterator<TArray<TTuple<UE::Math::TTransform<double>,UE::Math::TVector<double>,float>,TSizedDefaultAllocator<32>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_787 + 2);
    }
    if ((TArray<TTuple<UE::Math::TTransform<double>,UE::Math::TVector<double>,float>,TSizedDefaultAllocator<32>_>
         *)FVar34.Data == pTVar38) {
      if ((uVar21 != local_730) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("NumWritten == PointCount",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSplineSampler.cpp"
                              ,0x5a2,L""), bVar17)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      DestructItems<TArray<TTuple<UE::Math::TTransform<double>,UE::Math::TVector<double>,float>,TSizedDefaultAllocator<32>_>,int>
                ((TArray<TTuple<UE::Math::TTransform<double>,UE::Math::TVector<double>,float>,TSizedDefaultAllocator<32>_>
                  *)local_760.Data,(int)local_758);
      if ((TArray<TTuple<UE::Math::TTransform<double>,UE::Math::TVector<double>,float>,TSizedDefaultAllocator<32>_>
           *)local_760.Data !=
          (TArray<TTuple<UE::Math::TTransform<double>,UE::Math::TVector<double>,float>,TSizedDefaultAllocator<32>_>
           *)0x0) {
        FMemory::Free(local_760.Data);
      }
      if (local_748.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_748.Data);
      }
      if (local_770.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_770.Data);
      }
      if (local_7b0.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_7b0.Data);
      return;
    }
    iVar19 = ((TArray<TTuple<UE::Math::TTransform<double>,UE::Math::TVector<double>,float>,TSizedDefaultAllocator<32>_>
               *)FVar34.Data)->ArrayNum;
    pFVar24 = (((TArray<TTuple<UE::Math::TTransform<double>,UE::Math::TVector<double>,float>,TSizedDefaultAllocator<32>_>
                 *)FVar34.Data)->AllocatorInstance).Data;
    pFVar40 = pFVar24 + (longlong)iVar19 * 0x80;
    while( true ) {
      if (((TArray<TTuple<UE::Math::TTransform<double>,UE::Math::TVector<double>,float>,TSizedDefaultAllocator<32>_>
            *)FVar34.Data)->ArrayNum != iVar19) {
        local_7b6[0] = (<lambda_1>)0x0;
        `TCheckedPointerIterator<TTuple<UE::Math::TTransform<double>,UE::Math::TVector<double>,float>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_7b6);
      }
      if (pFVar24 == pFVar40) break;
      dVar2 = *(double *)pFVar24;
      dVar3 = *(double *)(pFVar24 + 8);
      dVar41 = *(double *)(pFVar24 + 0x10);
      dVar7 = *(double *)(pFVar24 + 0x18);
      dVar10 = *(double *)(pFVar24 + 0x20);
      dVar4 = *(double *)(pFVar24 + 0x28);
      dVar11 = *(double *)(pFVar24 + 0x30);
      dVar12 = *(double *)(pFVar24 + 0x38);
      dVar13 = *(double *)(pFVar24 + 0x40);
      dVar14 = *(double *)(pFVar24 + 0x48);
      dVar15 = *(double *)(pFVar24 + 0x50);
      dVar16 = *(double *)(pFVar24 + 0x58);
      uVar31 = 0;
      if ((int)uVar21 < local_448.TransformRange.NumElements) {
        uVar31 = ~uVar21 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar17)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (uVar21 == (int)uVar21 % local_448.TransformRange.ElementView.NumElements) {
        pTVar29 = (TTransform<double> *)
                  ((longlong)
                   ((local_448.TransformRange.ElementView.FirstElementPtr)->Rotation).XY.m128d_f64 +
                  (longlong)local_448.TransformRange.ElementView.BytesBetweenElements *
                  (longlong)((int)uVar21 % local_448.TransformRange.ElementView.NumElements));
      }
      else {
        pTVar29 = &local_448.TransformRange.StubValue;
      }
      (pTVar29->Rotation).XY.m128d_f64[0] = dVar2;
      (pTVar29->Rotation).XY.m128d_f64[1] = dVar3;
      (pTVar29->Rotation).ZW.m128d_f64[0] = dVar41;
      (pTVar29->Rotation).ZW.m128d_f64[1] = dVar7;
      uVar35 = uVar35 + 1;
      (pTVar29->Translation).XY.m128d_f64[0] = dVar10;
      (pTVar29->Translation).XY.m128d_f64[1] = dVar4;
      (pTVar29->Translation).ZW.m128d_f64[0] = dVar11;
      (pTVar29->Translation).ZW.m128d_f64[1] = dVar12;
      (pTVar29->Scale3D).XY.m128d_f64[0] = dVar13;
      (pTVar29->Scale3D).XY.m128d_f64[1] = dVar14;
      (pTVar29->Scale3D).ZW.m128d_f64[0] = dVar15;
      (pTVar29->Scale3D).ZW.m128d_f64[1] = dVar16;
      uVar31 = 0;
      if ((int)uVar21 < local_448.TransformRange.NumElements) {
        uVar31 = ~uVar21 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar17)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (uVar21 == (int)uVar21 % local_448.TransformRange.ElementView.NumElements) {
        pTVar29 = (TTransform<double> *)
                  ((longlong)
                   ((local_448.TransformRange.ElementView.FirstElementPtr)->Rotation).XY.m128d_f64 +
                  (longlong)local_448.TransformRange.ElementView.BytesBetweenElements *
                  (longlong)((int)uVar21 % local_448.TransformRange.ElementView.NumElements));
      }
      else {
        pTVar29 = &local_448.TransformRange.StubValue;
      }
      uVar31 = 0;
      if ((int)uVar21 < local_448.SeedRange.NumElements) {
        uVar31 = ~uVar21 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar17)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (uVar21 == (int)uVar21 % local_448.SeedRange.ElementView.NumElements) {
        piVar30 = (int *)((longlong)local_448.SeedRange.ElementView.BytesBetweenElements *
                          (longlong)((int)uVar21 % local_448.SeedRange.ElementView.NumElements) +
                         (longlong)local_448.SeedRange.ElementView.FirstElementPtr);
      }
      else {
        piVar30 = &local_448.SeedRange.StubValue;
      }
      SetSeed(piVar30,pTVar29,(TVector<double> *)(pFVar24 + 0x60),local_718,local_734,uVar35);
      fVar1 = *(float *)(pFVar24 + 0x78);
      uVar31 = 0;
      if ((int)uVar21 < local_448.DensityRange.NumElements) {
        uVar31 = ~uVar21 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar17)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar31 = (int)uVar21 % local_448.DensityRange.ElementView.NumElements;
      if (uVar21 == uVar31) {
        uVar21 = uVar21 + 1;
        pFVar24 = pFVar24 + 0x80;
        *(float *)((longlong)local_448.DensityRange.ElementView.BytesBetweenElements *
                   (longlong)(int)uVar31 +
                  (longlong)local_448.DensityRange.ElementView.FirstElementPtr) = fVar1;
      }
      else {
        uVar21 = uVar21 + 1;
        pFVar24 = pFVar24 + 0x80;
        local_448.DensityRange.StubValue = fVar1;
      }
    }
    FVar34.Data = FVar34.Data + 0x10;
    uVar27 = (ulonglong)local_720 & 0xffffffff;
  } while( true );
}

// SampleLineData @ 149c89040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
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

void __cdecl
PCGSplineSamplerHelpers::SampleLineData
          (FPCGContext *param_1,UPCGPolyLineData *param_2,UPCGSpatialData *param_3,
          UPCGSpatialData *param_4,FPCGProjectionParams *param_5,FPCGSplineSamplerParams *param_6,
          UPCGBasePointData *param_7)

{
  double dVar1;
  EPCGSplineSamplingDimension EVar2;
  code *pcVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  double dVar6;
  double dVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  bool bVar10;
  bool bVar11;
  char cVar12;
  char cVar13;
  int iVar14;
  TTransform<double> *pTVar15;
  FSamplerResult *pFVar16;
  TVector<double> *pTVar17;
  TVector<double> *pTVar18;
  longlong lVar19;
  FSamplerResult *pFVar20;
  FDistanceStepSampler *pFVar21;
  FSamplerResult *this;
  FSamplerResult *this_00;
  int iVar22;
  FDimensionSampler *pFVar23;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined4 uVar28;
  double dVar29;
  double dVar30;
  undefined4 uVar36;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined4 uVar46;
  double dVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined4 uVar51;
  undefined4 uVar52;
  double dVar53;
  double dVar54;
  double dVar57;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  uint uVar58;
  undefined1 auStackY_a98 [32];
  undefined1 local_a38 [72];
  double local_9f0;
  double local_9e8;
  TVector<double>_u_0 local_9e0;
  TVector<double>_u_0 local_9c8 [5];
  TVector<double> local_948;
  TVector<double> local_930;
  FDistanceStepSampler local_918;
  FSamplerResult local_898;
  TTransform<double> local_798 [2];
  FDimensionSampler local_698;
  EPCGSplineSamplingFill local_4d0;
  int local_4cc;
  int local_4c8;
  FDimensionSampler local_4b8;
  FSamplerResult local_2e8;
  FSamplerResult local_1e8;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_a98;
  if (((param_2 == (UPCGPolyLineData *)0x0) || (param_7 == (UPCGBasePointData *)0x0)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("LineData && OutPointData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSplineSampler.cpp"
                          ,0x3cd,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar10 = false;
  if (((param_2 != (UPCGPolyLineData *)0x0) &&
      (bVar11 = UObjectBaseUtility::IsA<UPCGSplineData>((UObjectBaseUtility *)param_2), bVar11)) &&
     ((param_2 != (UPCGPolyLineData *)0xfffffffffffffef0 &&
      (bVar10 = false, param_2[1].field_0x7c != '\0')))) {
    bVar10 = true;
  }
  if (param_1 == (FPCGContext *)0x0) {
    iVar14 = 0x2a;
  }
  else {
    iVar14 = FPCGContext::GetSeed(param_1);
  }
  FStepSampler::FStepSampler((FStepSampler *)local_a38,param_2,param_6,iVar14);
  local_a38._0_8_ = &___7FSubdivisionStepSampler_PCGSplineSamplerHelpers__6B_;
  local_a38._48_8_ = 0.0;
  iVar22 = 0;
  local_a38._56_4_ = 0;
  local_a38._48_4_ = (**(code **)(*(longlong *)local_a38._8_8_ + 0x4a0))();
  local_a38._24_4_ = 0;
  local_a38._52_4_ = param_6->SubdivisionsPerSegment;
  local_a38._56_4_ = 0;
  FDistanceStepSampler::FDistanceStepSampler(&local_918,param_2,param_6,iVar14);
  pFVar21 = (FDistanceStepSampler *)local_a38;
  if (param_6->Mode != Subdivision) {
    pFVar21 = &local_918;
  }
  FDimensionSampler::FDimensionSampler
            (&local_4b8,param_2,param_3,param_4,param_5,param_6,iVar14,param_7);
  FDimensionSampler::FDimensionSampler
            (&local_698,param_2,param_3,param_4,param_5,param_6,iVar14,param_7);
  EVar2 = param_6->Dimension;
  local_698._padding_ = (longlong)&___7FVolumeSampler_PCGSplineSamplerHelpers__6B_;
  local_4d0 = param_6->Fill;
  if (EVar2 == OnVertical) {
    local_4cc = 1;
  }
  else {
    local_4cc = param_6->NumPlanarSubdivisions + 1;
    if (EVar2 == OnHorizontal) goto LAB_149c89246;
  }
  iVar22 = param_6->NumHeightSubdivisions;
LAB_149c89246:
  local_4c8 = iVar22 + 1;
  pFVar23 = &local_4b8;
  if (EVar2 != OnSpline) {
    pFVar23 = &local_698;
  }
  FSamplerResult::FSamplerResult(&local_2e8);
  FSamplerResult::FSamplerResult(&local_1e8);
  this_00 = &local_2e8;
  cVar12 = (**(code **)(pFVar21->_padding_ + 8))(pFVar21);
  if (cVar12 == '\0') {
    (**(code **)pFVar21->_padding_)(pFVar21,&local_2e8);
  }
  lVar19 = 2;
  pTVar15 = local_798;
  pFVar16 = &local_2e8;
  do {
    dVar25 = (pFVar16->LocalTransform).Rotation.XY.m128d_f64[1];
    dVar6 = (pFVar16->LocalTransform).Rotation.ZW.m128d_f64[0];
    dVar7 = (pFVar16->LocalTransform).Rotation.ZW.m128d_f64[1];
    (pTVar15->Rotation).XY.m128d_f64[0] = (pFVar16->LocalTransform).Rotation.XY.m128d_f64[0];
    (pTVar15->Rotation).XY.m128d_f64[1] = dVar25;
    dVar25 = (pFVar16->LocalTransform).Translation.XY.m128d_f64[0];
    dVar24 = (pFVar16->LocalTransform).Translation.XY.m128d_f64[1];
    (pTVar15->Rotation).ZW.m128d_f64[0] = dVar6;
    (pTVar15->Rotation).ZW.m128d_f64[1] = dVar7;
    dVar6 = (pFVar16->LocalTransform).Translation.ZW.m128d_f64[0];
    dVar7 = (pFVar16->LocalTransform).Translation.ZW.m128d_f64[1];
    (pTVar15->Translation).XY.m128d_f64[0] = dVar25;
    (pTVar15->Translation).XY.m128d_f64[1] = dVar24;
    dVar25 = (pFVar16->LocalTransform).Scale3D.XY.m128d_f64[0];
    dVar24 = (pFVar16->LocalTransform).Scale3D.XY.m128d_f64[1];
    (pTVar15->Translation).ZW.m128d_f64[0] = dVar6;
    (pTVar15->Translation).ZW.m128d_f64[1] = dVar7;
    dVar6 = (pFVar16->LocalTransform).Scale3D.ZW.m128d_f64[0];
    dVar7 = (pFVar16->LocalTransform).Scale3D.ZW.m128d_f64[1];
    (pTVar15->Scale3D).XY.m128d_f64[0] = dVar25;
    (pTVar15->Scale3D).XY.m128d_f64[1] = dVar24;
    dVar25 = (pFVar16->Box).Min.field0_0x0._s_0.X;
    dVar24 = (pFVar16->Box).Min.field0_0x0._s_0.Y;
    (pTVar15->Scale3D).ZW.m128d_f64[0] = dVar6;
    (pTVar15->Scale3D).ZW.m128d_f64[1] = dVar7;
    dVar6 = (pFVar16->Box).Min.field0_0x0._s_0.Z;
    dVar7 = (pFVar16->Box).Max.field0_0x0._s_0.X;
    pTVar15[1].Rotation.XY.m128d_f64[0] = dVar25;
    pTVar15[1].Rotation.XY.m128d_f64[1] = dVar24;
    pTVar15[1].Rotation.ZW.m128d_f64[0] = dVar6;
    pTVar15[1].Rotation.ZW.m128d_f64[1] = dVar7;
    lVar19 = lVar19 + -1;
    pTVar15 = (TTransform<double> *)&pTVar15[1].Translation;
    pFVar16 = (FSamplerResult *)((pFVar16->Box).Max.field0_0x0.XYZ + 1);
  } while (lVar19 != 0);
  cVar13 = (**(code **)(pFVar21->_padding_ + 8))(pFVar21);
  dVar7 = __real_3fe45f306446f9b4;
  auVar9 = ___xmm_00000000000000003ff0000000000000;
  dVar6 = __real_bff0000000000000;
  dVar25 = __real_3ff0000000000000;
  uVar28 = SUB84(__real_bff0000000000000,0);
  uVar36 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
  if (cVar13 == '\0') {
    uVar58 = (uint)__xmm_80000000000000008000000000000000;
    uVar8 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
    pFVar16 = this_00;
    this = &local_1e8;
    do {
      this_00 = this;
      this = pFVar16;
      (**(code **)pFVar21->_padding_)(pFVar21,this_00);
      auVar41 = *(undefined1 (*) [16])(this_00->LocalTransform).Rotation.ZW.m128d_f64;
      dVar29 = auVar41._0_8_;
      auVar48._0_12_ = ZEXT812(0);
      auVar48._12_4_ = 0;
      local_9c8[0]._0_16_ = *(undefined1 (*) [16])(this_00->LocalTransform).Rotation.XY.m128d_f64;
      auVar32 = *(undefined1 (*) [16])(this_00->LocalTransform).Rotation.XY.m128d_f64;
      dVar47 = (this_00->LocalTransform).Rotation.ZW.m128d_f64[1];
      dVar53 = auVar9._0_8_;
      dVar57 = auVar9._8_8_;
      auVar37 = blendpd(local_9c8[0]._0_16_,auVar41,2);
      auVar55._0_8_ = dVar57 * local_9c8[0]._0_8_ - local_9c8[0]._8_8_ * dVar53;
      auVar55._8_8_ = local_9c8[0]._8_8_ * 0.0 - dVar29 * dVar57;
      auVar26 = blendpd(auVar9,auVar48,2);
      auVar40._0_8_ = auVar26._0_8_ * dVar29 - auVar37._0_8_ * 0.0;
      auVar40._8_8_ = auVar26._8_8_ * auVar41._8_8_ - auVar37._8_8_ * 0.0;
      auVar26 = blendpd(auVar55,auVar40,2);
      dVar24 = auVar55._8_8_ + auVar55._8_8_;
      dVar39 = auVar40._0_8_ + auVar40._0_8_;
      uVar46 = (undefined4)((ulonglong)dVar39 >> 0x20);
      auVar56._0_8_ = auVar26._0_8_ + auVar26._0_8_;
      auVar56._8_8_ = auVar26._8_8_ + auVar26._8_8_;
      auVar42._8_4_ = SUB84(dVar39,0);
      auVar42._0_8_ = dVar24;
      auVar42._12_4_ = uVar46;
      auVar31._8_4_ = SUB84(dVar39,0);
      auVar31._0_8_ = dVar24;
      auVar31._12_4_ = uVar46;
      auVar40 = blendpd(auVar32,auVar41,2);
      auVar43._0_8_ = auVar42._8_8_ * auVar32._0_8_ - auVar32._8_8_ * dVar24;
      auVar43._8_8_ = auVar56._0_8_ * auVar32._8_8_ - dVar29 * dVar39;
      auVar32 = blendpd(auVar31,auVar56,2);
      auVar26._8_4_ = SUB84(auVar43._8_8_,0);
      auVar26._0_8_ = auVar43._0_8_;
      auVar26._12_4_ = (int)((ulonglong)auVar43._8_8_ >> 0x20);
      auVar33._0_8_ = auVar32._0_8_ * dVar29 - auVar40._0_8_ * auVar56._0_8_;
      auVar33._8_8_ = auVar32._8_8_ * auVar41._8_8_ - auVar40._8_8_ * auVar56._8_8_;
      auVar41 = *(undefined1 (*) [16])(this->LocalTransform).Rotation.XY.m128d_f64;
      auVar40 = blendpd(auVar43,auVar33,2);
      auVar32 = *(undefined1 (*) [16])(this->LocalTransform).Rotation.ZW.m128d_f64;
      dVar30 = auVar32._0_8_;
      dVar1 = (this->LocalTransform).Rotation.ZW.m128d_f64[1];
      dVar54 = auVar56._0_8_ * dVar47 + auVar40._0_8_;
      dVar29 = dVar24 * dVar47 + dVar53 + auVar26._8_8_;
      dVar24 = dVar39 * dVar47 + dVar57 + auVar33._0_8_;
      uVar51 = SUB84(dVar24,0);
      uVar52 = (undefined4)((ulonglong)dVar24 >> 0x20);
      local_9c8[0]._0_16_ = *(undefined1 (*) [16])(this->LocalTransform).Rotation.XY.m128d_f64;
      auVar40 = blendpd(local_9c8[0]._0_16_,auVar32,2);
      auVar49._0_8_ = dVar57 * local_9c8[0]._0_8_ - local_9c8[0]._8_8_ * dVar53;
      auVar49._8_8_ = local_9c8[0]._8_8_ * 0.0 - dVar30 * dVar57;
      auVar26 = blendpd(auVar9,ZEXT816(0),2);
      auVar37._0_8_ = auVar26._0_8_ * dVar30 - auVar40._0_8_ * 0.0;
      auVar37._8_8_ = auVar26._8_8_ * auVar32._8_8_ - auVar40._8_8_ * 0.0;
      auVar26 = blendpd(auVar49,auVar37,2);
      dVar24 = auVar49._8_8_ + auVar49._8_8_;
      dVar39 = auVar37._0_8_ + auVar37._0_8_;
      uVar46 = (undefined4)((ulonglong)dVar39 >> 0x20);
      auVar50._0_8_ = auVar26._0_8_ + auVar26._0_8_;
      auVar50._8_8_ = auVar26._8_8_ + auVar26._8_8_;
      auVar44._8_4_ = SUB84(dVar39,0);
      auVar44._0_8_ = dVar24;
      auVar44._12_4_ = uVar46;
      auVar34._8_4_ = SUB84(dVar39,0);
      auVar34._0_8_ = dVar24;
      auVar34._12_4_ = uVar46;
      local_9e0._s_0.Z = dVar25;
      auVar26 = blendpd(auVar34,auVar50,2);
      auVar45._0_8_ = auVar44._8_8_ * auVar41._0_8_ - auVar41._8_8_ * dVar24;
      auVar45._8_8_ = auVar50._0_8_ * auVar41._8_8_ - dVar30 * dVar39;
      auVar27._8_4_ = SUB84(auVar45._8_8_,0);
      auVar27._0_8_ = auVar45._0_8_;
      auVar27._12_4_ = (int)((ulonglong)auVar45._8_8_ >> 0x20);
      auVar41 = blendpd(auVar41,auVar32,2);
      auVar35._0_8_ = auVar26._0_8_ * dVar30 - auVar41._0_8_ * auVar50._0_8_;
      auVar35._8_8_ = auVar26._8_8_ * auVar32._8_8_ - auVar41._8_8_ * auVar50._8_8_;
      dVar24 = dVar24 * dVar1 + dVar53 + auVar27._8_8_;
      dVar39 = dVar39 * dVar1 + dVar57 + auVar35._0_8_;
      auVar41 = blendpd(auVar45,auVar35,2);
      local_9e0._s_0.X = 0.0;
      local_9e0._s_0.Y = 0.0;
      dVar47 = auVar50._0_8_ * dVar1 + auVar41._0_8_;
      UE::Math::TTransform<double>::TransformVectorNoScale
                (&this->LocalTransform,(TVector<double> *)(local_a38 + 0x40),
                 (TVector<double> *)&local_9e0._s_0);
      auVar41._8_4_ = uVar51;
      auVar41._0_8_ = dVar29;
      auVar41._12_4_ = uVar52;
      auVar4._4_8_ = auVar32._8_8_;
      auVar4._0_4_ = (int)((ulonglong)dVar29 >> 0x20);
      auVar38._0_8_ = auVar4._0_8_ << 0x20;
      auVar38._8_4_ = uVar51;
      auVar38._12_4_ = uVar52;
      auVar5._4_8_ = auVar41._8_8_;
      auVar5._0_4_ = (int)((ulonglong)dVar24 >> 0x20);
      auVar32._0_8_ = auVar5._0_8_ << 0x20;
      auVar32._8_4_ = SUB84(dVar39,0);
      auVar32._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
      dVar39 = (dVar24 * dVar54 - dVar29 * dVar47) * local_9f0 +
               (auVar38._8_8_ * dVar47 - dVar54 * auVar32._8_8_) * (double)local_a38._64_8_ +
               (dVar29 * auVar32._8_8_ - dVar24 * auVar38._8_8_) * local_9e8;
      dVar24 = dVar6;
      if ((dVar6 <= dVar39) && (dVar24 = dVar39, dVar25 <= dVar39)) {
        dVar24 = dVar25;
      }
      dVar24 = asin(dVar24);
      lVar19 = pFVar23->_padding_;
      dVar24 = dVar24 * dVar7;
      this->NextDeltaAngle = dVar24;
      this_00->PreviousDeltaAngle =
           (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) ^ (uint)uVar8,SUB84(dVar24,0) ^ uVar58
                           );
      (**(code **)(lVar19 + 0x10))(pFVar23,this,param_7);
      memset(&local_898,0,0x100);
      pFVar16 = FSamplerResult::FSamplerResult(&local_898);
      lVar19 = 2;
      pFVar20 = this;
      do {
        dVar24 = (pFVar16->LocalTransform).Rotation.XY.m128d_f64[1];
        (pFVar20->LocalTransform).Rotation.XY.m128d_f64[0] =
             (pFVar16->LocalTransform).Rotation.XY.m128d_f64[0];
        (pFVar20->LocalTransform).Rotation.XY.m128d_f64[1] = dVar24;
        dVar24 = (pFVar16->LocalTransform).Rotation.ZW.m128d_f64[1];
        (pFVar20->LocalTransform).Rotation.ZW.m128d_f64[0] =
             (pFVar16->LocalTransform).Rotation.ZW.m128d_f64[0];
        (pFVar20->LocalTransform).Rotation.ZW.m128d_f64[1] = dVar24;
        dVar24 = (pFVar16->LocalTransform).Translation.XY.m128d_f64[1];
        (pFVar20->LocalTransform).Translation.XY.m128d_f64[0] =
             (pFVar16->LocalTransform).Translation.XY.m128d_f64[0];
        (pFVar20->LocalTransform).Translation.XY.m128d_f64[1] = dVar24;
        dVar24 = (pFVar16->LocalTransform).Translation.ZW.m128d_f64[1];
        (pFVar20->LocalTransform).Translation.ZW.m128d_f64[0] =
             (pFVar16->LocalTransform).Translation.ZW.m128d_f64[0];
        (pFVar20->LocalTransform).Translation.ZW.m128d_f64[1] = dVar24;
        dVar24 = (pFVar16->LocalTransform).Scale3D.XY.m128d_f64[1];
        (pFVar20->LocalTransform).Scale3D.XY.m128d_f64[0] =
             (pFVar16->LocalTransform).Scale3D.XY.m128d_f64[0];
        (pFVar20->LocalTransform).Scale3D.XY.m128d_f64[1] = dVar24;
        dVar24 = (pFVar16->LocalTransform).Scale3D.ZW.m128d_f64[1];
        (pFVar20->LocalTransform).Scale3D.ZW.m128d_f64[0] =
             (pFVar16->LocalTransform).Scale3D.ZW.m128d_f64[0];
        (pFVar20->LocalTransform).Scale3D.ZW.m128d_f64[1] = dVar24;
        dVar24 = (pFVar16->Box).Min.field0_0x0._s_0.Y;
        (pFVar20->Box).Min.field0_0x0._s_0.X = (pFVar16->Box).Min.field0_0x0._s_0.X;
        (pFVar20->Box).Min.field0_0x0._s_0.Y = dVar24;
        dVar24 = (pFVar16->Box).Max.field0_0x0._s_0.X;
        (pFVar20->Box).Min.field0_0x0._s_0.Z = (pFVar16->Box).Min.field0_0x0._s_0.Z;
        (pFVar20->Box).Max.field0_0x0._s_0.X = dVar24;
        lVar19 = lVar19 + -1;
        pFVar16 = (FSamplerResult *)((pFVar16->Box).Max.field0_0x0.XYZ + 1);
        pFVar20 = (FSamplerResult *)((pFVar20->Box).Max.field0_0x0.XYZ + 1);
      } while (lVar19 != 0);
      cVar13 = (**(code **)(pFVar21->_padding_ + 8))(pFVar21);
      pFVar16 = this_00;
    } while (cVar13 == '\0');
  }
  if (cVar12 == '\0') {
    if (bVar10) {
      pTVar17 = UE::Math::TTransform<double>::GetUnitAxis(local_798,&local_948,X);
      pTVar18 = UE::Math::TTransform<double>::GetUnitAxis(&this_00->LocalTransform,&local_930,X);
      dVar24 = (pTVar17->field0_0x0)._s_0.Z;
      dVar39 = (pTVar17->field0_0x0)._s_0.Y;
      dVar29 = (pTVar17->field0_0x0)._s_0.X;
      dVar47 = (pTVar18->field0_0x0)._s_0.Y;
      dVar1 = (pTVar18->field0_0x0)._s_0.Z;
      dVar30 = (pTVar18->field0_0x0)._s_0.X;
      pTVar17 = UE::Math::TTransform<double>::GetUnitAxis
                          (&this_00->LocalTransform,(TVector<double> *)&local_9c8[0]._s_0,Z);
      dVar24 = (dVar30 * dVar24 - dVar29 * dVar1) * (pTVar17->field0_0x0)._s_0.Y +
               (dVar39 * dVar1 - dVar24 * dVar47) * (pTVar17->field0_0x0)._s_0.X +
               (dVar29 * dVar47 - dVar30 * dVar39) * (pTVar17->field0_0x0)._s_0.Z;
      if (dVar6 <= dVar24) {
        if (dVar25 <= dVar24) {
          dVar24 = dVar25;
        }
        uVar28 = SUB84(dVar24,0);
        uVar36 = (undefined4)((ulonglong)dVar24 >> 0x20);
      }
      dVar25 = asin((double)CONCAT44(uVar36,uVar28));
      this_00->NextDeltaAngle = dVar25 * dVar7;
    }
    (**(code **)(pFVar23->_padding_ + 0x10))(pFVar23,this_00,param_7);
  }
  FDimensionSampler::~FDimensionSampler(&local_698);
  FDimensionSampler::~FDimensionSampler(&local_4b8);
  return;
}

// SampleSurface @ 149c89840

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

UPCGBasePointData * __cdecl
PCGSurfaceSampler::SampleSurface
          (FPCGContext *param_1,FSurfaceSamplerParams *param_2,UPCGSurfaceData *param_3,
          UPCGSpatialData *param_4,TBox<double> *param_5,TSubclassOf<UPCGBasePointData> param_6)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UPackage *pUVar6;
  UPCGBasePointData *pUVar7;
  FPCGAsyncState *pFVar8;
  undefined1 auStackY_268 [32];
  UPackage *local_210;
  FPCGProjectionParams local_208;
  UPCGSpatialData *local_1e8;
  <lambda_4> local_1e0;
  <lambda_3> local_1d8;
  <lambda_1> local_1d0;
  <lambda_2> local_1c0;
  FSurfaceSamplerData local_188;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_268;
  lVar2 = *(longlong *)param_6.Class.field0_0x0;
  local_1e8 = param_4;
  if ((lVar2 != 0) &&
     (pUVar5 = Z_Construct_UClass_UPCGBasePointData_NoRegister(), pUVar5 != (UClass *)0x0)) {
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && (*(longlong *)param_6.Class.field0_0x0 != 0)) {
      pUVar6 = GetTransientPackage();
      local_210 = pUVar6;
      if (param_1 != (FPCGContext *)0x0) {
        pUVar7 = FPCGContext::
                 NewObject_AnyThread_Impl<UPCGBasePointData,UPackage_*,TSubclassOf<UPCGBasePointData>_&>
                           (param_1,&local_210,
                            (TSubclassOf<UPCGBasePointData> *)param_6.Class.field0_0x0);
        param_4 = local_1e8;
        goto LAB_149c899bc;
      }
      bVar4 = IsInGameThread();
      if ((!bVar4) &&
         (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4331830188552749225>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                             ,0xa9,"Context != nullptr || IsInGameThread()"), bVar4)) {
        pcVar3 = (code *)swi(3);
        pUVar7 = (UPCGBasePointData *)(*pcVar3)();
        return pUVar7;
      }
      lVar2 = *(longlong *)param_6.Class.field0_0x0;
      if ((lVar2 == 0) ||
         (pUVar5 = Z_Construct_UClass_UPCGBasePointData_NoRegister(), pUVar5 == (UClass *)0x0)) {
LAB_149c89971:
        pUVar5 = (UClass *)0x0;
      }
      else {
        iVar1 = (int)pUVar5->_padding_;
        if ((*(int *)(lVar2 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar5->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) goto LAB_149c89971;
        pUVar5 = *(UClass **)param_6.Class.field0_0x0;
      }
      pUVar7 = NewObject<UPCGBasePointData>
                         ((UObject *)pUVar6,pUVar5,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      param_4 = local_1e8;
      goto LAB_149c899bc;
    }
  }
  pUVar7 = FPCGContext::NewPointData_AnyThread(param_1);
LAB_149c899bc:
  UPCGSpatialData::InitializeFromData
            ((UPCGSpatialData *)pUVar7,(UPCGSpatialData *)param_3,(UPCGMetadata *)0x0,true,true);
  FSurfaceSamplerData::FSurfaceSamplerData(&local_188);
  local_188.Params.bUseLegacyGridCreationMethod = param_2->bUseLegacyGridCreationMethod;
  local_188.Params._1_3_ = *(undefined3 *)&param_2->field_0x1;
  local_188.Params.PointsPerSquaredMeter = param_2->PointsPerSquaredMeter;
  local_188.Params.PointExtents.field0_0x0._s_0.X = (param_2->PointExtents).field0_0x0._s_0.X;
  local_188.Params.PointExtents.field0_0x0._s_0.Y = (param_2->PointExtents).field0_0x0._s_0.Y;
  local_188.Params.PointExtents.field0_0x0._s_0.Z = (param_2->PointExtents).field0_0x0._s_0.Z;
  local_188.Params.Looseness = param_2->Looseness;
  local_188.Params.bApplyDensityToPoints = param_2->bApplyDensityToPoints;
  local_188.Params._37_3_ = *(undefined3 *)&param_2->field_0x25;
  local_188.Params.PointSteepness = param_2->PointSteepness;
  local_188.Params._44_4_ = *(undefined4 *)&param_2->field_0x2c;
  FSurfaceSamplerData::Initialize
            (&local_188,param_1,param_5,&UE::Math::TTransform<double>::Identity);
  if (((param_3 == (UPCGSurfaceData *)0x0) || (pUVar7 == (UPCGBasePointData *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSurface && SampledData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSurfaceSampler.cpp"
                         ,0xe8,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pUVar7 = (UPCGBasePointData *)(*pcVar3)();
    return pUVar7;
  }
  local_208.AttributeList.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_208.bProjectPositions = true;
  local_208.bProjectRotations = true;
  local_208.bProjectScales = false;
  local_208.ColorBlendMode = SourceValue;
  local_208._4_4_ = 0;
  local_208.AttributeList.Data.ArrayNum = 0;
  local_208.AttributeList.Data.ArrayMax = 0;
  local_208.AttributeMode = ExcludeAttributes;
  local_208.AttributeMergeOperation = Min;
  local_208.TagMergeOperation = Source;
  local_208._27_5_ = 0;
  ::FString::FString(&local_208.AttributeList,L"");
  local_1d0.SamplerData = &local_188;
  pFVar8 = &param_1->AsyncState;
  local_1c0.SamplerData = &local_188;
  local_1c0.ProjectionParams = &local_208;
  local_1c0.OutMetadata = (UPCGMetadata *)pUVar7->_padding_;
  if (param_1 == (FPCGContext *)0x0) {
    pFVar8 = (FPCGAsyncState *)0x0;
  }
  local_208.AttributeMode = ExcludeAttributes;
  local_208.AttributeMergeOperation = TargetValue;
  local_208.TagMergeOperation = Source;
  local_1e0.SampledData = pUVar7;
  local_1d8.SampledData = pUVar7;
  local_1d0.SampledData = pUVar7;
  local_1c0.InBoundingShape = param_4;
  local_1c0.InSurface = param_3;
  local_1c0.SampledData = pUVar7;
  FPCGAsync::
  AsyncProcessingRangeEx<_PCGSurfaceSampler::SampleSurface_::__l2::<lambda_1>_&,_PCGSurfaceSampler::SampleSurface_::__l2::<lambda_2>_&,_PCGSurfaceSampler::SampleSurface_::__l2::<lambda_3>_&,_PCGSurfaceSampler::SampleSurface_::__l2::<lambda_4>_&>
            (pFVar8,local_188.CellCount,&local_1d0,&local_1c0,&local_1d8,&local_1e0,false,0x40,true)
  ;
  if (local_208.AttributeList.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.AttributeList.Data.AllocatorInstance.Data);
  }
  return pUVar7;
}

// SampleSurface @ 149c89b40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGPointData * __cdecl
PCGSurfaceSampler::SampleSurface
          (FPCGContext *param_1,UPCGSurfaceData *param_2,UPCGSpatialData *param_3,
          TBox<double> *param_4,FSurfaceSamplerParams *param_5)

{
  int iVar1;
  UPCGPointData *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  local_28.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)Z_Construct_UClass_UPCGPointData_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_28.Data.AllocatorInstance.Data != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_28.Data.AllocatorInstance.Data);
  }
  pUVar2 = (UPCGPointData *)
           SampleSurface(param_1,param_5,param_2,param_3,param_4,
                         (TSubclassOf<UPCGBasePointData>)&local_28);
  if (pUVar2 != (UPCGPointData *)0x0) {
    pUVar3 = Z_Construct_UClass_UPCGPointData_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
    pFVar4 = GetTypeName<UPCGPointData>(&local_28);
    pwVar5 = L"";
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    pFVar4 = GetFullNameForCastLogError<UPCGBasePointData>(&local_18,(UPCGBasePointData *)pUVar2);
    if ((pFVar4->Data).ArrayNum != 0) {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar5,pwVar6);
  }
  pFVar4 = GetTypeName<UPCGPointData>(&local_28);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar5);
}

// SampleSurface @ 149c89c60

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
PCGSurfaceSampler::SampleSurface
          (FPCGContext *param_1,FSurfaceSamplerData *param_2,UPCGSurfaceData *param_3,
          UPCGSpatialData *param_4,UPCGBasePointData *param_5,bool param_6)

{
  code *pcVar1;
  UPCGBasePointData *pUVar2;
  bool bVar3;
  undefined1 uVar4;
  FPCGAsyncState *pFVar5;
  FPCGAsyncState *pFVar6;
  <lambda_3> local_res8;
  <lambda_1> local_78;
  FPCGProjectionParams local_68;
  <lambda_2> local_48;
  
  pUVar2 = param_5;
  if ((param_3 == (UPCGSurfaceData *)0x0) || (param_5 == (UPCGBasePointData *)0x0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSurface && SampledData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSurfaceSampler.cpp"
                       ,0xe8,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  local_68.AttributeList.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.bProjectPositions = true;
  local_68.bProjectRotations = true;
  local_68.bProjectScales = false;
  local_68.ColorBlendMode = SourceValue;
  local_68._4_4_ = 0;
  local_68.AttributeList.Data.ArrayNum = 0;
  local_68.AttributeList.Data.ArrayMax = 0;
  local_68.AttributeMode = ExcludeAttributes;
  local_68.AttributeMergeOperation = Min;
  local_68.TagMergeOperation = Source;
  local_68._27_5_ = 0;
  ::FString::FString(&local_68.AttributeList,L"");
  local_48.ProjectionParams = &local_68;
  local_48.OutMetadata = (UPCGMetadata *)pUVar2->_padding_;
  pFVar5 = (FPCGAsyncState *)0x0;
  local_68.AttributeMode = ExcludeAttributes;
  local_68.AttributeMergeOperation = TargetValue;
  local_68.TagMergeOperation = Source;
  pFVar6 = &param_1->AsyncState;
  if (param_1 == (FPCGContext *)0x0) {
    pFVar6 = pFVar5;
  }
  local_78.SampledData = pUVar2;
  local_48.SampledData = pUVar2;
  local_res8.SampledData = pUVar2;
  if ((param_1 != (FPCGContext *)0x0) && (param_6 != false)) {
    pFVar5 = (FPCGAsyncState *)&DAT_00000001;
  }
  param_5 = pUVar2;
  local_78.SamplerData = param_2;
  local_48.SamplerData = param_2;
  local_48.InBoundingShape = param_4;
  local_48.InSurface = param_3;
  bVar3 = FPCGAsync::
          AsyncProcessingRangeEx<_PCGSurfaceSampler::SampleSurface_::__l2::<lambda_1>_&,_PCGSurfaceSampler::SampleSurface_::__l2::<lambda_2>_&,_PCGSurfaceSampler::SampleSurface_::__l2::<lambda_3>_&,_PCGSurfaceSampler::SampleSurface_::__l2::<lambda_4>_&>
                    (pFVar6,param_2->CellCount,&local_78,&local_48,&local_res8,
                     (<lambda_4> *)&param_5,SUB81(pFVar5,0),0x40,true);
  if (local_68.AttributeList.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AttributeList.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// SampleVolume @ 149c89db0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGBasePointData * __cdecl
PCGVolumeSampler::SampleVolume
          (FPCGContext *param_1,UPCGSpatialData *param_2,FVolumeSamplerParams *param_3,
          UPCGSpatialData *param_4)

{
  undefined1 uVar1;
  UPCGBasePointData *this;
  FPCGInitializeFromDataParams local_48;
  
  this = FPCGContext::NewPointData_AnyThread(param_1);
  FPCGInitializeFromDataParams::FPCGInitializeFromDataParams(&local_48,param_2);
  local_48.bInheritSpatialData = false;
  UPCGSpatialData::InitializeFromDataWithParams((UPCGSpatialData *)this,&local_48);
  if (param_1 == (FPCGContext *)0x0) {
    uVar1 = false;
  }
  else {
    uVar1 = (**(code **)(param_1->_padding_ + 8))(param_1);
  }
  SampleVolume(param_1,param_3,param_2,param_4,this,(bool)uVar1);
  DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
            ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
             local_48.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data,
             local_48.MetadataInitializeParams.DomainInitializeParams.ArrayNum);
  if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
      local_48.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data !=
      (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
    FMemory::Free(local_48.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data);
  }
  if (local_48.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data);
  }
  return this;
}

// SampleVolume @ 149c89e80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGBasePointData * __cdecl
PCGVolumeSampler::SampleVolume
          (FPCGContext *param_1,TSubclassOf<UPCGBasePointData> param_2,FVolumeSamplerParams *param_3
          ,UPCGSpatialData *param_4,UPCGSpatialData *param_5)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UClass *pUVar6;
  UPackage *pUVar7;
  UPCGBasePointData *pUVar8;
  UClass *pUVar9;
  UPackage *local_res10;
  FPCGInitializeFromDataParams local_68;
  
  lVar2 = *(longlong *)param_2.Class.field0_0x0;
  if ((lVar2 != 0) &&
     (pUVar6 = Z_Construct_UClass_UPCGBasePointData_NoRegister(), pUVar6 != (UClass *)0x0)) {
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && (*(longlong *)param_2.Class.field0_0x0 != 0)) {
      pUVar7 = GetTransientPackage();
      local_res10 = pUVar7;
      if (param_1 == (FPCGContext *)0x0) {
        bVar4 = IsInGameThread();
        if ((!bVar4) &&
           (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<4331830188552749225>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                               ,0xa9,"Context != nullptr || IsInGameThread()"), bVar4)) {
          pcVar3 = (code *)swi(3);
          pUVar8 = (UPCGBasePointData *)(*pcVar3)();
          return pUVar8;
        }
        lVar2 = *(longlong *)param_2.Class.field0_0x0;
        pUVar6 = (UClass *)0x0;
        if ((lVar2 != 0) &&
           (pUVar9 = Z_Construct_UClass_UPCGBasePointData_NoRegister(), pUVar9 != (UClass *)0x0)) {
          iVar1 = (int)pUVar9->_padding_;
          if ((*(int *)(lVar2 + 0x38) < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar9->_padding_)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            pUVar6 = *(UClass **)param_2.Class.field0_0x0;
          }
        }
        pUVar8 = NewObject<UPCGBasePointData>
                           ((UObject *)pUVar7,pUVar6,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                            (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      }
      else {
        pUVar8 = FPCGContext::
                 NewObject_AnyThread_Impl<UPCGBasePointData,UPackage_*,TSubclassOf<UPCGBasePointData>_&>
                           (param_1,&local_res10,
                            (TSubclassOf<UPCGBasePointData> *)param_2.Class.field0_0x0);
      }
      goto LAB_149c89ff9;
    }
  }
  pUVar8 = FPCGContext::NewPointData_AnyThread(param_1);
LAB_149c89ff9:
  FPCGInitializeFromDataParams::FPCGInitializeFromDataParams(&local_68,param_4);
  local_68.bInheritSpatialData = false;
  UPCGSpatialData::InitializeFromDataWithParams((UPCGSpatialData *)pUVar8,&local_68);
  if (param_1 == (FPCGContext *)0x0) {
    uVar5 = false;
  }
  else {
    uVar5 = (**(code **)(param_1->_padding_ + 8))(param_1);
  }
  SampleVolume(param_1,param_3,param_4,param_5,pUVar8,(bool)uVar5);
  DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
            ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
             local_68.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data,
             local_68.MetadataInitializeParams.DomainInitializeParams.ArrayNum);
  if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
      local_68.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data !=
      (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
    FMemory::Free(local_68.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data);
  }
  if (local_68.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data);
  }
  return pUVar8;
}

// SampleVolume @ 149c8a0b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGPointData * __cdecl
PCGVolumeSampler::SampleVolume
          (FPCGContext *param_1,FVolumeSamplerParams *param_2,UPCGSpatialData *param_3,
          UPCGSpatialData *param_4)

{
  int iVar1;
  UPCGPointData *pUVar2;
  UClass *pUVar3;
  UClass *local_18 [2];
  
  local_18[0] = Z_Construct_UClass_UPCGPointData_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18[0]);
  }
  pUVar2 = (UPCGPointData *)
           SampleVolume(param_1,(TSubclassOf<UPCGBasePointData>)local_18,param_2,param_3,param_4);
  if (pUVar2 != (UPCGPointData *)0x0) {
    pUVar3 = Z_Construct_UClass_UPCGPointData_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UPCGPointData *)0x0;
}

// SampleVolume @ 149c8a160

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
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __cdecl
PCGVolumeSampler::SampleVolume
          (FPCGContext *param_1,FVolumeSamplerParams *param_2,UPCGSpatialData *param_3,
          UPCGSpatialData *param_4,UPCGBasePointData *param_5,bool param_6)

{
  code *pcVar1;
  TConsoleVariableData<bool> *pTVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  ulong64 uVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  int iVar10;
  FPCGAsyncState *pFVar11;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 auStackY_348 [32];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_2f8;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_2e8;
  longlong local_2d8;
  longlong local_2d0;
  UPCGSpatialData *local_2c8;
  ulonglong local_2c0;
  longlong local_2b8;
  ulonglong local_2b0;
  longlong local_2a8;
  ulonglong local_2a0;
  <lambda_3> local_298;
  <lambda_2> local_290;
  <lambda_1> local_288;
  FTextFormat local_278;
  FText local_268;
  FTextFormat local_258;
  FText local_248;
  <lambda_4> local_238;
  FText local_1e8;
  FString local_1d8;
  FString local_1c8;
  FText local_1b8;
  FTextFormat local_1a8;
  FTextFormat local_198;
  FFormatArgumentValue local_188;
  undefined4 local_168;
  longlong local_160;
  longlong *local_158;
  undefined4 local_150;
  undefined4 local_148;
  longlong local_140;
  longlong *local_138;
  undefined4 local_130;
  FFormatArgumentValue local_128;
  undefined4 local_108;
  longlong local_100;
  longlong *local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  longlong local_e0;
  longlong *local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  longlong local_c0;
  longlong *local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [56];
  ulonglong local_70;
  
  local_70 = __security_cookie.value ^ (ulonglong)auStackY_348;
  local_2c8 = param_4;
  if (((param_3 == (UPCGSpatialData *)0x0) || (param_5 == (UPCGBasePointData *)0x0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Volume && OutputData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGVolumeSampler.cpp"
                         ,0x32,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  local_158 = *(longlong **)&(param_2->Bounds).IsValid;
  uVar17 = *(undefined4 *)&(param_2->Bounds).Min.field0_0x0;
  uVar18 = *(undefined4 *)((longlong)&(param_2->Bounds).Min.field0_0x0 + 4);
  uVar19 = *(undefined4 *)((longlong)&(param_2->Bounds).Min.field0_0x0 + 8);
  uVar20 = *(undefined4 *)((longlong)&(param_2->Bounds).Min.field0_0x0 + 0xc);
  uVar25 = *(undefined4 *)((longlong)&(param_2->Bounds).Min.field0_0x0 + 0x10);
  uVar26 = *(undefined4 *)((longlong)&(param_2->Bounds).Min.field0_0x0 + 0x14);
  uVar27 = *(undefined4 *)&(param_2->Bounds).Max.field0_0x0;
  uVar28 = *(undefined4 *)((longlong)&(param_2->Bounds).Max.field0_0x0 + 4);
  uVar21 = *(undefined4 *)((longlong)&(param_2->Bounds).Max.field0_0x0 + 8);
  uVar22 = *(undefined4 *)((longlong)&(param_2->Bounds).Max.field0_0x0 + 0xc);
  uVar23 = *(undefined4 *)((longlong)&(param_2->Bounds).Max.field0_0x0 + 0x10);
  uVar24 = *(undefined4 *)((longlong)&(param_2->Bounds).Max.field0_0x0 + 0x14);
  if ((char)local_158 == '\0') {
    puVar5 = (undefined4 *)(**(code **)(param_3->_padding_ + 0x388))(param_3,local_a8);
    local_158 = *(longlong **)(puVar5 + 0xc);
    uVar17 = *puVar5;
    uVar18 = puVar5[1];
    uVar19 = puVar5[2];
    uVar20 = puVar5[3];
    uVar25 = puVar5[4];
    uVar26 = puVar5[5];
    uVar27 = puVar5[6];
    uVar28 = puVar5[7];
    uVar21 = puVar5[8];
    uVar22 = puVar5[9];
    uVar23 = puVar5[10];
    uVar24 = puVar5[0xb];
    if ((char)local_158 == '\0') {
      return true;
    }
  }
  pTVar2 = PCGFeatureSwitches::CVarCheckSamplerMemory.Ref;
  dVar14 = __real_3ff0000000000000 / (param_2->VoxelSize).field0_0x0._s_0.X;
  dVar15 = dVar14 * (double)CONCAT44(uVar18,uVar17);
  dVar14 = dVar14 * (double)CONCAT44(uVar28,uVar27);
  iVar10 = (int)((longlong)ROUND(__real_bfe0000000000000 - (dVar15 + dVar15)) >> 1);
  local_2c0 = (ulonglong)(uint)-iVar10;
  dVar15 = __real_3ff0000000000000 / (param_2->VoxelSize).field0_0x0._s_0.Y;
  local_2b8 = (longlong)ROUND((dVar14 + dVar14) - __real_3fe0000000000000) >> 1;
  local_2d8 = (longlong)((int)local_2b8 + iVar10 + 1);
  dVar14 = __real_3ff0000000000000 / (param_2->VoxelSize).field0_0x0._s_0.Z;
  dVar16 = dVar15 * (double)CONCAT44(uVar22,uVar21);
  dVar15 = dVar15 * (double)CONCAT44(uVar20,uVar19);
  local_2a8 = (longlong)ROUND((dVar16 + dVar16) - __real_3fe0000000000000) >> 1;
  dVar16 = dVar14 * (double)CONCAT44(uVar24,uVar23);
  iVar10 = (int)((longlong)ROUND(__real_bfe0000000000000 - (dVar15 + dVar15)) >> 1);
  local_2b0 = (ulonglong)(uint)-iVar10;
  dVar14 = dVar14 * (double)CONCAT44(uVar26,uVar25);
  lVar12 = (longlong)((int)local_2a8 + iVar10 + 1);
  iVar10 = (int)((longlong)ROUND(__real_bfe0000000000000 - (dVar14 + dVar14)) >> 1);
  local_2a0 = (ulonglong)(uint)-iVar10;
  local_2d0 = (longlong)
              ((int)((longlong)ROUND((dVar16 + dVar16) - __real_3fe0000000000000) >> 1) + iVar10 + 1
              );
  lVar13 = lVar12 * local_2d8 * local_2d0;
  if (((local_2d8 < 1) || (lVar12 < 1)) || (local_2d0 < 1)) {
    if (param_1 == (FPCGContext *)0x0) {
      return true;
    }
    if ((byte)LogPCG._0_1_ < 6) {
      return true;
    }
    pFVar8 = FText::FromString(&local_1b8,L"Skipped - invalid cell bounds ({0} x {1} x {2})");
    pFVar9 = FTextFormat::FTextFormat(&local_198,pFVar8,Default);
    local_188.Type = Int;
    local_188.field1_0x8.IntValue = local_2d8;
    local_140 = local_2d0;
    local_188.TextValue.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(ITextData *)0x0;
    local_188.TextValue.field0_0x0.TypedValue.Flags = 0;
    local_168 = 0;
    local_158 = (longlong *)0x0;
    local_150 = 0;
    local_148 = 0;
    local_138 = (longlong *)0x0;
    local_130 = 0;
    local_2e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2e8.ArrayNum = 3;
    local_160 = lVar12;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,3,0,&local_2e8.AllocatorInstance,3,&local_2e8.ArrayMax);
    ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
              (local_2e8.AllocatorInstance.Data,&local_188,3);
    local_258.TextFormatData.Object = (pFVar9->TextFormatData).Object;
    local_258.TextFormatData.SharedReferenceCount.ReferenceController =
         (pFVar9->TextFormatData).SharedReferenceCount.ReferenceController;
    if (local_258.TextFormatData.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_258.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_258.TextFormatData.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    FText::Format(&local_248,&local_258,&local_2e8);
    DestructItems<FFormatArgumentValue,int>
              ((FFormatArgumentValue *)local_2e8.AllocatorInstance.Data,local_2e8.ArrayNum);
    if ((FFormatArgumentValue *)local_2e8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
      FMemory::Free(local_2e8.AllocatorInstance.Data);
    }
    if (local_138 != (longlong *)0x0) {
      (**(code **)(*local_138 + 0x10))();
    }
    if (local_158 != (longlong *)0x0) {
      (**(code **)(*local_158 + 0x10))();
    }
    if (local_188.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_188.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar9->TextFormatData).SharedReferenceCount.ReferenceController);
    FText::ToString(&local_248);
    FPCGContext::GetTaskName(param_1,&local_1c8);
    FPCGContext::GetExecutionSourceName(param_1,&local_1d8);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    if (local_248.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_248.TextData.Reference + 0x10))();
    }
  }
  else {
    if ((lVar12 * local_2d8 - 1U < 0x7ffffffe) && (lVar13 - 1U < 0x7ffffffe)) {
      bVar3 = IsInParallelGameThread();
      if ((bVar3) || (bVar3 = IsInGameThread(), bVar3)) {
        lVar6 = 0;
      }
      else {
        lVar6 = 1;
      }
      if ((pTVar2->ShadowedValue[lVar6] == false) ||
         (uVar7 = PCGFeatureSwitches::Helpers::GetAvailableMemoryForSamplers(),
         (ulonglong)(lVar13 * 0xd0) <= uVar7)) {
        pFVar11 = &param_1->AsyncState;
        local_238.PointSteepness = param_2->PointSteepness;
        local_238.VoxelSize.field0_0x0._s_0.X = (param_2->VoxelSize).field0_0x0._s_0.X;
        local_238.VoxelSize.field0_0x0._s_0.Y = (param_2->VoxelSize).field0_0x0._s_0.Y;
        local_238.BoundingShape = local_2c8;
        local_238.MinX = (int)local_2c0;
        local_238.MaxX = (int)local_2b8;
        local_238.MinY = (int)local_2b0;
        local_238.MaxY = (int)local_2a8;
        local_238.MinZ = (int)local_2a0;
        bVar3 = false;
        if (param_1 == (FPCGContext *)0x0) {
          pFVar11 = (FPCGAsyncState *)0x0;
        }
        local_238.VoxelSize.field0_0x0._s_0.Z = (param_2->VoxelSize).field0_0x0._s_0.Z;
        local_288.NumIterations = (int)lVar13;
        local_288.OutputData = param_5;
        local_290.OutputData = param_5;
        local_298.OutputData = param_5;
        local_238.OutputData = param_5;
        if ((param_1 != (FPCGContext *)0x0) && (param_6)) {
          bVar3 = true;
        }
        local_238.Volume = param_3;
        bVar3 = FPCGAsync::
                AsyncProcessingRangeEx<_PCGVolumeSampler::SampleVolume_::__l2::<lambda_1>_&,_PCGVolumeSampler::SampleVolume_::__l2::<lambda_4>_&,_PCGVolumeSampler::SampleVolume_::__l2::<lambda_2>_&,_PCGVolumeSampler::SampleVolume_::__l2::<lambda_3>_&>
                          (pFVar11,local_288.NumIterations,&local_288,&local_238,&local_290,
                           &local_298,bVar3,0x40,true);
        return bVar3;
      }
    }
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_1e8,L"PCGVolumeSamplerElement",L"TooManyPoints",
                        L"Skipped - tried to generate too many points ({0} x {1} x {2} = {3}).\nAdjust \'pcg.SamplerMemoryThreshold\' if needed."
                       );
    pFVar9 = FTextFormat::FTextFormat(&local_1a8,pFVar8,Default);
    local_128.Type = Int;
    local_128.field1_0x8.IntValue = local_2d8;
    local_e0 = local_2d0;
    local_128.TextValue.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(ITextData *)0x0;
    local_128.TextValue.field0_0x0.TypedValue.Flags = 0;
    local_108 = 0;
    local_f8 = (longlong *)0x0;
    local_f0 = 0;
    local_e8 = 0;
    local_d8 = (longlong *)0x0;
    local_d0 = 0;
    local_c8 = 0;
    local_b8 = (longlong *)0x0;
    local_b0 = 0;
    local_2f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2f8.ArrayNum = 4;
    local_100 = lVar12;
    local_c0 = lVar13;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,4,0,&local_2f8.AllocatorInstance,4,&local_2f8.ArrayMax);
    ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
              (local_2f8.AllocatorInstance.Data,&local_128,4);
    local_278.TextFormatData.Object = (pFVar9->TextFormatData).Object;
    local_278.TextFormatData.SharedReferenceCount.ReferenceController =
         (pFVar9->TextFormatData).SharedReferenceCount.ReferenceController;
    if (local_278.TextFormatData.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_278.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_278.TextFormatData.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    FText::Format(&local_268,&local_278,&local_2f8);
    DestructItems<FFormatArgumentValue,int>
              ((FFormatArgumentValue *)local_2f8.AllocatorInstance.Data,local_2f8.ArrayNum);
    if ((FFormatArgumentValue *)local_2f8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
      FMemory::Free(local_2f8.AllocatorInstance.Data);
    }
    if (local_b8 != (longlong *)0x0) {
      (**(code **)(*local_b8 + 0x10))();
    }
    if (local_d8 != (longlong *)0x0) {
      (**(code **)(*local_d8 + 0x10))();
    }
    if (local_f8 != (longlong *)0x0) {
      (**(code **)(*local_f8 + 0x10))();
    }
    if (local_128.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_128.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar9->TextFormatData).SharedReferenceCount.ReferenceController);
    PCGLog::LogErrorOnGraph(&local_268,param_1);
    local_1b8.TextData.Reference = local_1e8.TextData.Reference;
    if (local_268.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_268.TextData.Reference + 0x10))();
      local_1b8.TextData.Reference = local_1e8.TextData.Reference;
    }
  }
  if (local_1b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1b8.TextData.Reference + 0x10))();
  }
  return true;
}

// SegmentIntersection2D @ 149c8a8b0

bool __cdecl
PCGSplineSamplerHelpers::SegmentIntersection2D
          (TVector2<double> *param_1,TVector2<double> *param_2,TVector2<double> *param_3,
          TVector2<double> *param_4,TVector2<double> *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  TVector2<double> *pTVar8;
  uint uVar9;
  double dVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  uint uVar14;
  double dVar15;
  uint uVar17;
  double dVar16;
  
  dVar10 = (param_3->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_3->field0_0x0)._s_0.X;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  dVar5 = (param_2->field0_0x0)._s_0.Y - dVar3;
  dVar13 = (param_2->field0_0x0)._s_0.X;
  dVar4 = (param_4->field0_0x0)._s_0.X;
  dVar16 = dVar13 - dVar1;
  dVar6 = dVar4 - dVar2;
  dVar7 = (param_4->field0_0x0)._s_0.Y - dVar10;
  dVar12 = dVar16 * dVar7 - dVar6 * dVar5;
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar10 = dVar3 - dVar10;
    dVar13 = (dVar10 * dVar16 - (dVar1 - dVar2) * dVar5) * (__real_3ff0000000000000 / dVar12);
    dVar10 = (dVar10 * dVar6 - (dVar1 - dVar2) * dVar7) * (__real_3ff0000000000000 / dVar12);
    if ((((0.0 <= dVar13) && (dVar13 <= __real_3ff0000000000000)) && (0.0 <= dVar10)) &&
       (dVar10 <= __real_3ff0000000000000)) {
      (param_5->field0_0x0)._s_0.X = dVar16 * dVar10 + dVar1;
      (param_5->field0_0x0)._s_0.Y = dVar5 * dVar10 + dVar3;
      return true;
    }
  }
  else {
    dVar10 = dVar16 * dVar16 + dVar5 * dVar5;
    if (__real_3e45798ee2308c3a <
        (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      dVar12 = dVar7 * dVar7 + dVar6 * dVar6;
      if (__real_3e45798ee2308c3a <
          (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
        dVar15 = dVar1 * dVar16 + dVar5 * dVar3;
        uVar14 = SUB84(dVar15,0) ^ (uint)__xmm_80000000000000008000000000000000;
        uVar17 = (uint)((ulonglong)dVar15 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
        dVar15 = dVar7 * (param_3->field0_0x0)._s_0.Y + dVar2 * dVar6;
        uVar9 = SUB84(dVar15,0) ^ (uint)__xmm_80000000000000008000000000000000;
        uVar11 = (uint)((ulonglong)dVar15 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
        dVar16 = ((double)CONCAT44(uVar17,uVar14) * dVar16 * (__real_3ff0000000000000 / dVar10) +
                 dVar1) - ((double)CONCAT44(uVar11,uVar9) * dVar6 *
                           (__real_3ff0000000000000 / dVar12) + dVar2);
        if (((double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar16,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
             __real_3f1a36e2e0000000) &&
           (dVar10 = ((double)CONCAT44(uVar17,uVar14) * dVar5 * (__real_3ff0000000000000 / dVar10) +
                     dVar3) - ((double)CONCAT44(uVar11,uVar9) * dVar7 *
                               (__real_3ff0000000000000 / dVar12) + (param_3->field0_0x0)._s_0.Y),
           uVar9 = SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
           uVar11 = (uint)((ulonglong)dVar10 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_
           , (double)CONCAT44(uVar11,uVar9) < __real_3f1a36e2e0000000 ||
             (double)CONCAT44(uVar11,uVar9) == __real_3f1a36e2e0000000)) {
          pTVar8 = param_2;
          if (dVar1 < dVar13) {
            pTVar8 = param_1;
          }
          dVar10 = (pTVar8->field0_0x0)._s_0.X;
          if (dVar13 < dVar1) {
            param_2 = param_1;
          }
          param_1 = param_4;
          if (dVar2 < dVar4) {
            param_1 = param_3;
          }
          dVar1 = (param_1->field0_0x0)._s_0.X;
          if (dVar4 < dVar2) {
            param_4 = param_3;
          }
          if ((dVar1 < dVar10) && (dVar10 < (param_4->field0_0x0)._s_0.X)) {
            dVar10 = (pTVar8->field0_0x0)._s_0.Y;
            (param_5->field0_0x0)._s_0.X = (pTVar8->field0_0x0)._s_0.X;
            (param_5->field0_0x0)._s_0.Y = dVar10;
            return true;
          }
          dVar2 = (param_2->field0_0x0)._s_0.X;
          if ((dVar1 < dVar2) && (dVar2 < (param_4->field0_0x0)._s_0.X)) {
            dVar10 = (param_2->field0_0x0)._s_0.Y;
            (param_5->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
            (param_5->field0_0x0)._s_0.Y = dVar10;
            return true;
          }
          if ((dVar10 < dVar1) && (dVar1 < dVar2)) goto LAB_149c8a9ba;
          dVar1 = (param_4->field0_0x0)._s_0.X;
          if ((dVar10 < dVar1) && (dVar1 < dVar2)) {
            dVar10 = (param_4->field0_0x0)._s_0.Y;
            (param_5->field0_0x0)._s_0.X = (param_4->field0_0x0)._s_0.X;
            (param_5->field0_0x0)._s_0.Y = dVar10;
            return true;
          }
        }
      }
      else {
        pTVar8 = param_2;
        if (dVar1 < dVar13) {
          pTVar8 = param_1;
        }
        if ((pTVar8->field0_0x0)._s_0.X <= dVar2 && dVar2 != (pTVar8->field0_0x0)._s_0.X) {
          if (dVar13 < dVar1) {
            param_2 = param_1;
          }
          if (dVar2 < (param_2->field0_0x0)._s_0.X) {
            dVar10 = (param_3->field0_0x0)._s_0.Y;
            (param_5->field0_0x0)._s_0.X = (param_3->field0_0x0)._s_0.X;
            (param_5->field0_0x0)._s_0.Y = dVar10;
            return true;
          }
        }
      }
    }
    else {
      pTVar8 = param_4;
      if (dVar2 < dVar4) {
        pTVar8 = param_3;
      }
      if ((pTVar8->field0_0x0)._s_0.X <= dVar1 && dVar1 != (pTVar8->field0_0x0)._s_0.X) {
        if (dVar4 < dVar2) {
          param_4 = param_3;
        }
        if (dVar1 < (param_4->field0_0x0)._s_0.X) {
LAB_149c8a9ba:
          dVar10 = (param_1->field0_0x0)._s_0.Y;
          (param_5->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
          (param_5->field0_0x0)._s_0.Y = dVar10;
          return true;
        }
      }
    }
  }
  return false;
}

// SegmentPolygonIntersection2D @ 149c8ac90

void __cdecl
PCGSplineSamplerHelpers::SegmentPolygonIntersection2D
          (TVector2<double> *param_1,TVector2<double> *param_2,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  TVector2<double>_u_0 *pTVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  int *piVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 local_118 [4];
  int local_114;
  longlong local_110;
  TVector2<double>_u_0 local_108;
  int local_f8 [2];
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *local_f0;
  double local_e8;
  double dStack_e0;
  
  dVar10 = __real_3f1a36e2e0000000;
  uVar24 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar22 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_114 = param_3->ArrayNum;
  if (local_114 < 3) {
    return;
  }
  bVar14 = false;
  uVar20 = 0;
  local_f8[0] = local_114;
  local_f0 = param_3;
  if (0 < local_114 + -1) {
    local_110 = 0;
    bVar13 = false;
    do {
      lVar16 = local_110;
      uVar21 = 0;
      if ((int)uVar20 < param_3->ArrayNum) {
        uVar21 = ~uVar20 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar17 = (param_3->AllocatorInstance).Data + lVar16;
      uVar21 = 0;
      if ((int)(uVar20 + 1) < param_3->ArrayNum) {
        uVar21 = ~(uVar20 + 1) >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar19 = (param_3->AllocatorInstance).Data + lVar16 + 0x10;
      dVar27 = *(double *)&pFVar19->field_0x0;
      dVar29 = (((TVector2<double>_u_0 *)&pFVar17->field_0x0)->_s_0).X - dVar27;
      uVar21 = SUB84(dVar29,0) & uVar22;
      uVar23 = (uint)((ulonglong)dVar29 >> 0x20) & uVar24;
      if ((dVar10 <= (double)CONCAT44(uVar23,uVar21) && (double)CONCAT44(uVar23,uVar21) != dVar10)
         || (uVar21 = SUB84(*(double *)(pFVar17 + 8) - *(double *)(pFVar19 + 8),0) & uVar22,
            uVar23 = (uint)((ulonglong)(*(double *)(pFVar17 + 8) - *(double *)(pFVar19 + 8)) >> 0x20
                           ) & uVar24, bVar11 = bVar13,
            dVar10 <= (double)CONCAT44(uVar23,uVar21) && (double)CONCAT44(uVar23,uVar21) != dVar10))
      {
        dVar1 = *(double *)(pFVar19 + 8);
        dVar6 = *(double *)(pFVar17 + 8) - dVar1;
        dVar2 = (param_1->field0_0x0)._s_0.X;
        dVar3 = (param_1->field0_0x0)._s_0.Y;
        dVar9 = (param_2->field0_0x0)._s_0.X - dVar2;
        dVar28 = (param_2->field0_0x0)._s_0.Y - dVar3;
        dVar7 = dVar6 * dVar6 + dVar29 * dVar29;
        dVar8 = dVar9 * dVar9 + dVar28 * dVar28;
        dVar25 = dVar28 * dVar29 - dVar6 * dVar9;
        if ((__real_3e45798ee2308c3a <
             (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) & uVar24,SUB84(dVar25,0) & uVar22))
           || ((uVar21 = SUB84(dVar7,0) & uVar22, uVar23 = (uint)((ulonglong)dVar7 >> 0x20) & uVar24
               , (double)CONCAT44(uVar23,uVar21) < __real_3e45798ee2308c3a ||
                 (double)CONCAT44(uVar23,uVar21) == __real_3e45798ee2308c3a ||
               (uVar21 = SUB84(dVar8,0) & uVar22, uVar23 = (uint)((ulonglong)dVar8 >> 0x20) & uVar24
               , (double)CONCAT44(uVar23,uVar21) < __real_3e45798ee2308c3a ||
                 (double)CONCAT44(uVar23,uVar21) == __real_3e45798ee2308c3a)))) {
          bVar14 = false;
        }
        else {
          dVar25 = dVar29 * dVar27 + dVar6 * dVar1;
          dVar26 = (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) ^
                                    __xmm_80000000000000008000000000000000._4_4_,
                                    SUB84(dVar25,0) ^ (uint)__xmm_80000000000000008000000000000000);
          dVar25 = dVar2 * dVar9 + dVar28 * dVar3;
          dVar25 = (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) ^
                                    __xmm_80000000000000008000000000000000._4_4_,
                                    SUB84(dVar25,0) ^ (uint)__xmm_80000000000000008000000000000000);
          dVar27 = (dVar26 * dVar29 * (__real_3ff0000000000000 / dVar7) + dVar27) -
                   (dVar25 * dVar9 * (__real_3ff0000000000000 / dVar8) + dVar2);
          if ((dVar10 < (double)CONCAT44((uint)((ulonglong)dVar27 >> 0x20) & uVar24,
                                         SUB84(dVar27,0) & uVar22)) ||
             (dVar27 = ((__real_3ff0000000000000 / dVar7) * dVar6 * dVar26 + dVar1) -
                       (dVar28 * dVar25 * (__real_3ff0000000000000 / dVar8) + dVar3),
             dVar10 < (double)CONCAT44((uint)((ulonglong)dVar27 >> 0x20) & uVar24,
                                       SUB84(dVar27,0) & uVar22))) {
            bVar14 = false;
          }
          else {
            bVar14 = true;
          }
          bVar11 = bVar14;
          if (bVar14) goto LAB_149c8b170;
        }
        bVar12 = SegmentIntersection2D
                           (param_1,param_2,(TVector2<double> *)pFVar17,(TVector2<double> *)pFVar19,
                            (TVector2<double> *)&local_108._s_0);
        bVar11 = bVar14;
        if (bVar12) {
          if ((((0 < param_4->ArrayNum) &&
               (uVar21 = SUB84(local_108._s_0.X - local_e8,0) & uVar22,
               uVar23 = (uint)((ulonglong)(local_108._s_0.X - local_e8) >> 0x20) & uVar24,
               (double)CONCAT44(uVar23,uVar21) < dVar10 || (double)CONCAT44(uVar23,uVar21) == dVar10
               )) && (uVar21 = SUB84(local_108._s_0.Y - dStack_e0,0) & uVar22,
                     uVar23 = (uint)((ulonglong)(local_108._s_0.Y - dStack_e0) >> 0x20) & uVar24,
                     (double)CONCAT44(uVar23,uVar21) < dVar10 ||
                     (double)CONCAT44(uVar23,uVar21) == dVar10)) || (bVar13)) {
            bVar13 = `PCGSplineSamplerHelpers::SegmentPolygonIntersection2D'::__l2::<lambda_1>::
                     operator()(local_f8,(TVector2<double> *)&local_108._s_0,uVar20);
            if (bVar13) {
              pTVar4 = (TVector2<double>_u_0 *)(param_4->AllocatorInstance).Data;
              if (((pTVar4 <= &local_108) &&
                  (&local_108 <
                   (TVector2<double>_u_0 *)(pTVar4->XY + (longlong)param_4->ArrayMax * 2))) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar13)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar15 = param_4->ArrayNum;
              if (iVar15 == param_4->ArrayMax) {
                iVar15 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
              }
              param_4->ArrayNum = iVar15 + 1;
              lVar16 = local_110;
              goto LAB_149c8b14d;
            }
          }
          else {
            pTVar4 = (TVector2<double>_u_0 *)(param_4->AllocatorInstance).Data;
            if (((pTVar4 <= &local_108) &&
                (&local_108 < (TVector2<double>_u_0 *)(pTVar4->XY + (longlong)param_4->ArrayMax * 2)
                )) && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar13)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar15 = param_4->ArrayNum;
            if (iVar15 == param_4->ArrayMax) {
              iVar15 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
            }
            param_4->ArrayNum = iVar15 + 1;
LAB_149c8b14d:
            pFVar17 = (param_4->AllocatorInstance).Data + (longlong)iVar15 * 0x10;
            *(double *)pFVar17 = local_108._s_0.X;
            *(double *)(pFVar17 + 8) = local_108._s_0.Y;
          }
          local_e8 = local_108._s_0.X;
          dStack_e0 = local_108._s_0.Y;
        }
      }
LAB_149c8b170:
      local_110 = lVar16 + 0x10;
      uVar20 = uVar20 + 1;
      bVar13 = bVar11;
    } while ((int)uVar20 < local_114 + -1);
  }
  uVar21 = param_3->ArrayNum - 1;
  uVar20 = 0;
  if ((int)uVar21 < param_3->ArrayNum) {
    uVar20 = ~uVar21 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar15 = param_3->ArrayNum;
  pFVar17 = (param_3->AllocatorInstance).Data;
  if ((iVar15 < 1) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar19 = (param_3->AllocatorInstance).Data;
  dVar27 = *(double *)(pFVar17 + (longlong)iVar15 * 0x10 + -0x10) -
           (((TVector2<double>_u_0 *)&pFVar19->field_0x0)->_s_0).X;
  uVar20 = SUB84(dVar27,0) & uVar22;
  uVar21 = (uint)((ulonglong)dVar27 >> 0x20) & uVar24;
  if (((double)CONCAT44(uVar21,uVar20) < dVar10 || (double)CONCAT44(uVar21,uVar20) == dVar10) &&
     (uVar20 = SUB84(*(double *)(pFVar17 + (longlong)iVar15 * 0x10 + -8) - *(double *)(pFVar19 + 8),
                     0) & uVar22,
     uVar21 = (uint)((ulonglong)
                     (*(double *)(pFVar17 + (longlong)iVar15 * 0x10 + -8) - *(double *)(pFVar19 + 8)
                     ) >> 0x20) & uVar24,
     (double)CONCAT44(uVar21,uVar20) < dVar10 || (double)CONCAT44(uVar21,uVar20) == dVar10)) {
    return;
  }
  bVar13 = `PCGSplineSamplerHelpers::SegmentPolygonIntersection2D'::__l2::<lambda_2>::operator()
                     (local_118,(TVector2<double> *)pFVar19,
                      (TVector2<double> *)(pFVar17 + (longlong)iVar15 * 0x10 + -0x10),param_1,
                      param_2);
  if (bVar13) {
    if (param_4->ArrayNum < 1) {
      return;
    }
    pFVar17 = (param_4->AllocatorInstance).Data;
    if ((param_3->ArrayNum < 1) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    piVar18 = &param_4->ArrayNum;
    pFVar19 = (param_3->AllocatorInstance).Data;
    dVar27 = *(double *)pFVar17 - *(double *)pFVar19;
    uVar20 = SUB84(dVar27,0) & uVar22;
    uVar21 = (uint)((ulonglong)dVar27 >> 0x20) & uVar24;
    if (dVar10 <= (double)CONCAT44(uVar21,uVar20) && (double)CONCAT44(uVar21,uVar20) != dVar10) {
      return;
    }
    dVar27 = *(double *)(pFVar17 + 8) - *(double *)(pFVar19 + 8);
    uVar22 = SUB84(dVar27,0) & uVar22;
    uVar24 = (uint)((ulonglong)dVar27 >> 0x20) & uVar24;
    if (dVar10 <= (double)CONCAT44(uVar24,uVar22) && (double)CONCAT44(uVar24,uVar22) != dVar10) {
      return;
    }
    if ((param_4->ArrayNum < 1) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar17 = (param_4->AllocatorInstance).Data;
    iVar15 = param_4->ArrayNum + -1;
    if (iVar15 != 0) {
      memmove(pFVar17,pFVar17 + 0x10,(longlong)iVar15 << 4);
    }
    *piVar18 = *piVar18 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&param_4->AllocatorInstance,*piVar18,&param_4->ArrayMax);
    return;
  }
  bVar13 = SegmentIntersection2D
                     (param_1,param_2,
                      (TVector2<double> *)(pFVar17 + (longlong)iVar15 * 0x10 + -0x10),
                      (TVector2<double> *)pFVar19,(TVector2<double> *)&local_108._s_0);
  if (!bVar13) {
    return;
  }
  if ((param_4->ArrayNum < 1) && (!bVar14)) {
    pTVar4 = (TVector2<double>_u_0 *)(param_4->AllocatorInstance).Data;
    if (((pTVar4 <= &local_108) &&
        (&local_108 < (TVector2<double>_u_0 *)(pTVar4->XY + (longlong)param_4->ArrayMax * 2))) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar14)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    piVar18 = &param_4->ArrayNum;
    iVar15 = *piVar18;
    if (iVar15 == param_4->ArrayMax) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
      *piVar18 = iVar15;
    }
    *piVar18 = iVar15 + 1;
    goto LAB_149c8b631;
  }
  if ((param_3->ArrayNum < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar17 = (param_3->AllocatorInstance).Data;
  dVar27 = local_108._s_0.X - *(double *)pFVar17;
  uVar20 = SUB84(dVar27,0) & uVar22;
  uVar21 = (uint)((ulonglong)dVar27 >> 0x20) & uVar24;
  if ((dVar10 <= (double)CONCAT44(uVar21,uVar20) && (double)CONCAT44(uVar21,uVar20) != dVar10) ||
     (dVar27 = local_108._s_0.Y - *(double *)(pFVar17 + 8), uVar20 = SUB84(dVar27,0) & uVar22,
     uVar21 = (uint)((ulonglong)dVar27 >> 0x20) & uVar24, iVar15 = local_114,
     dVar10 <= (double)CONCAT44(uVar21,uVar20) && (double)CONCAT44(uVar21,uVar20) != dVar10)) {
    uVar21 = param_3->ArrayNum - 1;
    uVar20 = 0;
    if ((int)uVar21 < param_3->ArrayNum) {
      uVar20 = ~uVar21 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar17 = (param_3->AllocatorInstance).Data;
    dVar27 = local_108._s_0.X - *(double *)(pFVar17 + (longlong)param_3->ArrayNum * 0x10 + -0x10);
    uVar20 = SUB84(dVar27,0) & uVar22;
    uVar21 = (uint)((ulonglong)dVar27 >> 0x20) & uVar24;
    if (((double)CONCAT44(uVar21,uVar20) < dVar10 || (double)CONCAT44(uVar21,uVar20) == dVar10) &&
       (dVar27 = local_108._s_0.Y - *(double *)(pFVar17 + (longlong)param_3->ArrayNum * 0x10 + -8),
       uVar22 = SUB84(dVar27,0) & uVar22, uVar24 = (uint)((ulonglong)dVar27 >> 0x20) & uVar24,
       (double)CONCAT44(uVar24,uVar22) < dVar10 || (double)CONCAT44(uVar24,uVar22) == dVar10)) {
      iVar15 = local_114 + -1;
      goto LAB_149c8b58a;
    }
  }
  else {
LAB_149c8b58a:
    bVar14 = `PCGSplineSamplerHelpers::SegmentPolygonIntersection2D'::__l2::<lambda_1>::operator()
                       (local_f8,(TVector2<double> *)&local_108._s_0,iVar15);
    if (!bVar14) {
      return;
    }
  }
  pTVar4 = (TVector2<double>_u_0 *)(param_4->AllocatorInstance).Data;
  if (((pTVar4 <= &local_108) &&
      (&local_108 < (TVector2<double>_u_0 *)(pTVar4->XY + (longlong)param_4->ArrayMax * 2))) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar14)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar15 = param_4->ArrayNum;
  if (iVar15 == param_4->ArrayMax) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
  }
  param_4->ArrayNum = iVar15 + 1;
LAB_149c8b631:
  pFVar17 = (param_4->AllocatorInstance).Data + (longlong)iVar15 * 0x10;
  *(double *)pFVar17 = local_108._s_0.X;
  *(double *)(pFVar17 + 8) = local_108._s_0.Y;
  return;
}

// SetSeed @ 149c8c910

void __cdecl
PCGSplineSamplerHelpers::SetSeed
          (int *param_1,TTransform<double> *param_2,TVector<double> *param_3,
          FPCGSplineSamplerParams *param_4,int param_5,int param_6)

{
  int iVar1;
  TVector<double>_u_0 local_28;
  
  if (param_4->SeedingMode != SeedFromPosition) {
    iVar1 = PCGHelpers::ComputeSeed(param_5,param_6);
    *param_1 = iVar1;
    return;
  }
  if (param_4->bSeedFromLocalPosition == false) {
    if (param_4->bSeedFrom2DPosition == false) {
      local_28._s_0.X = (param_2->Translation).XY.m128d_f64[0];
      local_28._s_0.Y = (param_2->Translation).XY.m128d_f64[1];
      local_28._s_0.Z = (param_2->Translation).ZW.m128d_f64[0];
      iVar1 = PCGHelpers::ComputeSeedFromPosition((TVector<double> *)&local_28._s_0);
      *param_1 = iVar1;
      return;
    }
    iVar1 = PCGHelpers::ComputeSeed
                      ((int)(param_2->Translation).XY.m128d_f64[0],
                       (int)(param_2->Translation).XY.m128d_f64[1]);
    *param_1 = iVar1;
    return;
  }
  if (param_4->bSeedFrom2DPosition == false) {
    iVar1 = PCGHelpers::ComputeSeedFromPosition(param_3);
    *param_1 = iVar1;
    return;
  }
  iVar1 = PCGHelpers::ComputeSeed
                    ((int)(param_3->field0_0x0)._s_0.X,(int)(param_3->field0_0x0)._s_0.Y);
  *param_1 = iVar1;
  return;
}

// SplitSpline @ 149c91410

void __cdecl
PCGSplitSpline::SplitSpline
          (UPCGSplineData *param_1,UPCGSplineData *param_2,double param_3,double param_4)

{
  code *pcVar1;
  bool bVar2;
  TArray<FSplinePoint,TSizedDefaultAllocator<32>_> local_88;
  FSplinePoint *local_78;
  int iStack_70;
  long64 *local_68 [2];
  TArrayView<__int64_const_,int> local_58;
  TArrayView<FSplinePoint_const_,int> local_48 [4];
  
  if (param_1 == (UPCGSplineData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Spline",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSplitSplines.cpp"
                       ,0xa4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 == (UPCGSplineData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutSplitSpline",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSplitSplines.cpp"
                       ,0xa5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UPCGSplineData::GetSplinePoints(param_1,&local_88);
  (**(code **)(*(longlong *)param_1 + 0x520))(param_1,local_68);
  local_78 = (FSplinePoint *)local_88.AllocatorInstance.Data;
  if (local_88.ArrayNum < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iStack_70 = local_88.ArrayNum;
  local_48[0].DataPtr = local_78;
  local_58.DataPtr = local_68[0];
  local_58._8_8_ = local_68[1];
  SplitSpline(param_1,param_2,local_48,&local_58,param_3,param_4);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return;
}

// SplitSpline @ 149c91560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
PCGSplitSpline::SplitSpline
          (UPCGSplineData *param_1,UPCGSplineData *param_2,
          TArrayView<FSplinePoint_const_,int> *param_3,TArrayView<__int64_const_,int> *param_4,
          double param_5,double param_6)

{
  int *piVar1;
  float fVar2;
  double dVar3;
  FSplinePoint *pFVar4;
  code *pcVar5;
  double dVar6;
  undefined1 uVar7;
  TArray<FSplinePoint,TSizedDefaultAllocator<32>_> *pTVar8;
  TArrayView<FSplinePoint_const_,int> *pTVar9;
  double dVar10;
  ForAnyElementType _Src;
  ForAnyElementType *pFVar11;
  bool bVar12;
  char cVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  FSplinePoint *pFVar22;
  ulonglong uVar23;
  int iVar24;
  int iVar25;
  double dVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auStackY_1f8 [32];
  TArray<FSplinePoint,TSizedDefaultAllocator<32>_> local_1a8;
  UPCGSplineData *local_198;
  UPCGSplineData *local_190;
  ForAnyElementType local_188;
  undefined8 local_180;
  TArray<__int64,TSizedDefaultAllocator<32>_> local_178;
  TArray<FSplinePoint,TSizedDefaultAllocator<32>_> *local_168;
  ForAnyElementType *local_160;
  TArrayView<FSplinePoint_const_,int> *local_158;
  TArrayView<__int64_const_,int> *local_150;
  UPCGSplineData **local_148;
  TArray<FSplinePoint,TSizedDefaultAllocator<32>_> *local_140;
  ForAnyElementType *local_138;
  UPCGSplineData **local_130;
  TArrayView<__int64_const_,int> *local_128;
  TTransform<double> local_118;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_198 = param_1;
  local_190 = param_2;
  if ((param_1 == (UPCGSplineData *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Spline",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSplitSplines.cpp"
                          ,0x19,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((local_190 == (UPCGSplineData *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("OutSplitSpline",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSplitSplines.cpp"
                          ,0x1a,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  cVar13 = (**(code **)(*(longlong *)local_198 + 0x510))();
  dVar3 = __real_bfe0000000000000;
  dVar27 = param_5;
  if ((cVar13 == '\0') && (param_6 < param_5)) {
    dVar27 = param_6;
    param_6 = param_5;
  }
  local_168 = &local_1a8;
  local_1a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.ArrayNum = 0;
  local_1a8.ArrayMax = 0;
  local_188.Data = (FScriptContainerElement *)0x0;
  local_180 = 0;
  local_160 = &local_188;
  local_148 = &local_190;
  local_140 = &local_1a8;
  local_138 = &local_188;
  local_130 = &local_198;
  iVar24 = -(int)((longlong)ROUND(__real_bfe0000000000000 - (dVar27 + dVar27)) >> 1);
  iVar25 = (int)((longlong)ROUND((param_6 + param_6) - __real_3fe0000000000000) >> 1);
  local_158 = param_3;
  local_150 = param_4;
  local_128 = param_4;
  cVar13 = (**(code **)(*(longlong *)local_198 + 0x510))();
  dVar10 = __real_3feffffde7210c00;
  dVar6 = __real_3eb0c6f7a0000000;
  if ((cVar13 != '\0') && (param_6 <= dVar27)) {
    iVar25 = iVar25 + param_3->ArrayNum;
  }
  lVar18 = (longlong)dVar27;
  uVar7 = false;
  dVar26 = dVar27;
  if ((lVar18 != -0x8000000000000000) && ((double)lVar18 != dVar27)) {
    auVar28._8_8_ = dVar27;
    auVar28._0_8_ = dVar27;
    uVar15 = movmskpd(0,auVar28);
    dVar26 = (double)(longlong)(lVar18 - (ulonglong)(uVar15 & 1));
  }
  dVar26 = dVar27 - dVar26;
  pTVar8 = local_168;
  pTVar9 = local_158;
  if (__real_3eb0c6f7a0000000 <= dVar26) {
    if (dVar26 <= __real_3feffffde7210c00) {
      `PCGSplitSpline::SplitSpline'::__l2::<lambda_2>::operator()(&local_148,dVar27);
      uVar7 = true;
      pTVar8 = local_168;
      pTVar9 = local_158;
    }
  }
  else if (0.0 < dVar26) {
    `PCGSplitSpline::SplitSpline'::__l2::<lambda_1>::operator()
              (&local_168,(int)((longlong)ROUND((dVar27 + dVar27) - __real_3fe0000000000000) >> 1));
    pTVar8 = local_168;
    pTVar9 = local_158;
  }
  for (; local_168 = pTVar8, local_158 = pTVar9, iVar24 <= iVar25; iVar24 = iVar24 + 1) {
    uVar19 = iVar24 % param_3->ArrayNum;
    uVar15 = 0;
    if ((int)uVar19 < pTVar9->ArrayNum) {
      uVar15 = ~uVar19 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar22 = pTVar9->DataPtr + (int)uVar19;
    pFVar4 = (FSplinePoint *)(pTVar8->AllocatorInstance).Data;
    if (((pFVar4 <= pFVar22) && (pFVar22 < pFVar4 + pTVar8->ArrayMax)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar16 = pTVar8->ArrayNum;
    if (iVar16 == pTVar8->ArrayMax) {
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x888,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
    }
    pTVar8->ArrayNum = iVar16 + 1;
    pFVar11 = local_160;
    dVar27 = (pFVar22->Position).field0_0x0._s_0.X;
    lVar18 = (longlong)iVar16 * 0x88;
    pFVar17 = (pTVar8->AllocatorInstance).Data;
    *(undefined8 *)(pFVar17 + lVar18) = *(undefined8 *)pFVar22;
    *(double *)(pFVar17 + lVar18 + 8) = dVar27;
    dVar27 = (pFVar22->Position).field0_0x0._s_0.Z;
    *(double *)(pFVar17 + lVar18 + 0x10) = (pFVar22->Position).field0_0x0._s_0.Y;
    *(double *)(pFVar17 + lVar18 + 0x10 + 8) = dVar27;
    dVar27 = (pFVar22->ArriveTangent).field0_0x0._s_0.Y;
    *(double *)(pFVar17 + lVar18 + 0x20) = (pFVar22->ArriveTangent).field0_0x0._s_0.X;
    *(double *)(pFVar17 + lVar18 + 0x20 + 8) = dVar27;
    dVar27 = (pFVar22->LeaveTangent).field0_0x0._s_0.X;
    *(double *)(pFVar17 + lVar18 + 0x30) = (pFVar22->ArriveTangent).field0_0x0._s_0.Z;
    *(double *)(pFVar17 + lVar18 + 0x30 + 8) = dVar27;
    dVar27 = (pFVar22->LeaveTangent).field0_0x0._s_0.Z;
    *(double *)(pFVar17 + lVar18 + 0x40) = (pFVar22->LeaveTangent).field0_0x0._s_0.Y;
    *(double *)(pFVar17 + lVar18 + 0x40 + 8) = dVar27;
    dVar27 = (pFVar22->Rotation).Yaw;
    *(double *)(pFVar17 + lVar18 + 0x50) = (pFVar22->Rotation).Pitch;
    *(double *)(pFVar17 + lVar18 + 0x50 + 8) = dVar27;
    dVar27 = (pFVar22->Scale).field0_0x0._s_0.X;
    *(double *)(pFVar17 + lVar18 + 0x60) = (pFVar22->Rotation).Roll;
    *(double *)(pFVar17 + lVar18 + 0x60 + 8) = dVar27;
    dVar27 = (pFVar22->Scale).field0_0x0._s_0.Z;
    *(double *)(pFVar17 + lVar18 + 0x70) = (pFVar22->Scale).field0_0x0._s_0.Y;
    *(double *)(pFVar17 + lVar18 + 0x70 + 8) = dVar27;
    *(undefined8 *)(pFVar17 + lVar18 + 0x80) = *(undefined8 *)&pFVar22->Type;
    if (local_150->ArrayNum != 0) {
      pFVar17 = (FScriptContainerElement *)
                TArrayView<__int64_const_,int>::operator[](local_150,uVar19);
      if (((pFVar11->Data <= pFVar17) &&
          (pFVar17 < pFVar11->Data + (longlong)*(int *)((longlong)&pFVar11[1].Data + 4) * 8)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar16 = *(int *)&pFVar11[1].Data;
      piVar1 = (int *)((longlong)&pFVar11[1].Data + 4);
      if (iVar16 == *piVar1) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,pFVar11,piVar1);
      }
      *(int *)&pFVar11[1].Data = iVar16 + 1;
      *(long64 *)(pFVar11->Data + (longlong)iVar16 * 8) = *(long64 *)pFVar17;
    }
    pTVar8 = local_168;
    pTVar9 = local_158;
  }
  uVar20 = 0;
  bVar12 = false;
  lVar18 = (longlong)param_6;
  dVar27 = param_6;
  if ((lVar18 != -0x8000000000000000) && ((double)lVar18 != param_6)) {
    auVar29._8_8_ = param_6;
    auVar29._0_8_ = param_6;
    uVar15 = movmskpd(0,auVar29);
    dVar27 = (double)(longlong)(lVar18 - (ulonglong)(uVar15 & 1));
  }
  if (dVar6 <= param_6 - dVar27) {
    if (param_6 - dVar27 <= dVar10) {
      `PCGSplitSpline::SplitSpline'::__l2::<lambda_2>::operator()(&local_148,param_6);
      bVar12 = true;
    }
    else {
      `PCGSplitSpline::SplitSpline'::__l2::<lambda_1>::operator()
                (&local_168,-(int)((longlong)ROUND(dVar3 - (param_6 + param_6)) >> 1));
    }
  }
  uVar23 = (ulonglong)local_1a8.ArrayNum;
  if (1 < local_1a8.ArrayNum) {
    if ((bool)uVar7) {
      fVar2 = *(float *)local_1a8.AllocatorInstance.Data;
      iVar24 = (int)fVar2;
      fVar30 = fVar2;
      if ((iVar24 != -0x80000000) && ((float)iVar24 != fVar2)) {
        auVar31._4_4_ = fVar2;
        auVar31._0_4_ = fVar2;
        auVar31._8_8_ = 0;
        uVar15 = movmskps((int)local_1a8.AllocatorInstance.Data,auVar31);
        fVar30 = (float)(int)(iVar24 - (uVar15 & 1));
      }
      dVar27 = __real_3ff0000000000000 - (double)(fVar2 - fVar30);
      if ((local_1a8.ArrayNum < 2) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(double *)(local_1a8.AllocatorInstance.Data + 0xa8) =
           *(double *)(local_1a8.AllocatorInstance.Data + 0xa8) * dVar27;
      *(double *)(local_1a8.AllocatorInstance.Data + 0xb0) =
           *(double *)(local_1a8.AllocatorInstance.Data + 0xb0) * dVar27;
      *(double *)(local_1a8.AllocatorInstance.Data + 0xb8) =
           dVar27 * *(double *)(local_1a8.AllocatorInstance.Data + 0xb8);
      uVar23 = local_1a8._8_8_ & 0xffffffff;
    }
    iVar24 = (int)uVar23;
    if (bVar12) {
      uVar15 = 0;
      if ((int)(iVar24 - 1U) < iVar24) {
        uVar15 = ~(iVar24 - 1U) >> 0x1f;
      }
      if (uVar15 == 0) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar12) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar24 = local_1a8.ArrayNum;
      }
      fVar2 = *(float *)(local_1a8.AllocatorInstance.Data + (longlong)(iVar24 + -1) * 0x88);
      iVar25 = (int)fVar2;
      fVar30 = fVar2;
      if ((iVar25 != -0x80000000) && ((float)iVar25 != fVar2)) {
        auVar32._4_4_ = fVar2;
        auVar32._0_4_ = fVar2;
        auVar32._8_8_ = 0;
        uVar15 = movmskps((int)local_1a8.AllocatorInstance.Data,auVar32);
        fVar30 = (float)(int)(iVar25 - (uVar15 & 1));
      }
      uVar19 = iVar24 - 2;
      dVar27 = (double)(fVar2 - fVar30);
      uVar15 = 0;
      if ((int)uVar19 < iVar24) {
        uVar15 = ~uVar19 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar18 = (longlong)(int)uVar19 * 0x88;
      dVar6 = *(double *)(local_1a8.AllocatorInstance.Data + lVar18 + 0x38 + 8);
      dVar3 = *(double *)(local_1a8.AllocatorInstance.Data + lVar18 + 0x48);
      *(double *)(local_1a8.AllocatorInstance.Data + lVar18 + 0x38) =
           *(double *)(local_1a8.AllocatorInstance.Data + lVar18 + 0x38) * dVar27;
      *(double *)(local_1a8.AllocatorInstance.Data + lVar18 + 0x38 + 8) = dVar6 * dVar27;
      *(double *)(local_1a8.AllocatorInstance.Data + lVar18 + 0x48) = dVar27 * dVar3;
      uVar23 = local_1a8._8_8_ & 0xffffffff;
    }
  }
  uVar21 = uVar20;
  if (0 < (int)uVar23) {
    do {
      uVar19 = (uint)uVar20;
      uVar15 = 0;
      if ((int)uVar19 < (int)uVar23) {
        uVar15 = ~uVar19 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(float *)(local_1a8.AllocatorInstance.Data + uVar21) = (float)(int)uVar19;
      if ((local_1a8.AllocatorInstance.Data[uVar21 + 0x80] == (FScriptContainerElement)0x1) ||
         (local_1a8.AllocatorInstance.Data[uVar21 + 0x80] == (FScriptContainerElement)0x3)) {
        uVar15 = 0;
        if ((int)uVar19 < local_1a8.ArrayNum) {
          uVar15 = ~uVar19 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_1a8.AllocatorInstance.Data[uVar21 + 0x80] = (FScriptContainerElement)0x4;
      }
      uVar23 = local_1a8._8_8_ & 0xffffffff;
      uVar20 = (ulonglong)(uVar19 + 1);
      uVar21 = uVar21 + 0x88;
    } while ((int)(uVar19 + 1) < local_1a8.ArrayNum);
  }
  _Src.Data = local_188.Data;
  lVar18 = (longlong)(int)local_180;
  local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.ArrayNum = (int)local_180;
  if ((int)local_180 == 0) {
    local_178.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(int)local_180,0,&local_178.AllocatorInstance,(int)local_180,&local_178.ArrayMax)
    ;
    memcpy(local_178.AllocatorInstance.Data,_Src.Data,lVar18 << 3);
  }
  local_118.Rotation.XY.m128d_f64[0] = (local_198->SplineStruct).Transform.Rotation.XY.m128d_f64[0];
  local_118.Rotation.XY.m128d_f64[1] = (local_198->SplineStruct).Transform.Rotation.XY.m128d_f64[1];
  local_118.Rotation.ZW.m128d_f64[0] = (local_198->SplineStruct).Transform.Rotation.ZW.m128d_f64[0];
  local_118.Rotation.ZW.m128d_f64[1] = (local_198->SplineStruct).Transform.Rotation.ZW.m128d_f64[1];
  local_118.Translation.XY.m128d_f64[0] =
       (local_198->SplineStruct).Transform.Translation.XY.m128d_f64[0];
  local_118.Translation.XY.m128d_f64[1] =
       (local_198->SplineStruct).Transform.Translation.XY.m128d_f64[1];
  local_118.Translation.ZW.m128d_f64[0] =
       (local_198->SplineStruct).Transform.Translation.ZW.m128d_f64[0];
  local_118.Translation.ZW.m128d_f64[1] =
       (local_198->SplineStruct).Transform.Translation.ZW.m128d_f64[1];
  local_118.Scale3D.XY.m128d_f64[0] = (local_198->SplineStruct).Transform.Scale3D.XY.m128d_f64[0];
  local_118.Scale3D.XY.m128d_f64[1] = (local_198->SplineStruct).Transform.Scale3D.XY.m128d_f64[1];
  local_118.Scale3D.ZW.m128d_f64[0] = (local_198->SplineStruct).Transform.Scale3D.ZW.m128d_f64[0];
  local_118.Scale3D.ZW.m128d_f64[1] = (local_198->SplineStruct).Transform.Scale3D.ZW.m128d_f64[1];
  UPCGSplineData::Initialize(local_190,&local_1a8,false,&local_118,&local_178);
  if (local_188.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data);
  }
  if (local_1a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.AllocatorInstance.Data);
  }
  return;
}

// Z_Construct_UClass_UPCGClipPathsSettings_NoRegister @ 149c936c0

UClass * __cdecl Z_Construct_UClass_UPCGClipPathsSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGClipPathsSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGClipPathsSettings",
               &Z_Registration_Info_UClass_UPCGClipPathsSettings.InnerSingleton,
               UPCGClipPathsSettings::StaticRegisterNativesUPCGClipPathsSettings,0xd8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UPCGClipPathsSettings>,
               InternalVTableHelperCtorCaller<UPCGClipPathsSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGClipPathsSettings.InnerSingleton;
}

// Z_Construct_UClass_UPCGCreatePolygon2DSettings_NoRegister @ 149c93780

UClass * __cdecl Z_Construct_UClass_UPCGCreatePolygon2DSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCreatePolygon2DSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCreatePolygon2DSettings",
               &Z_Registration_Info_UClass_UPCGCreatePolygon2DSettings.InnerSingleton,
               UPCGCreatePolygon2DSettings::StaticRegisterNativesUPCGCreatePolygon2DSettings,0x168,8
               ,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGCreatePolygon2DSettings>,
               InternalVTableHelperCtorCaller<UPCGCreatePolygon2DSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCreatePolygon2DSettings.InnerSingleton;
}

// Z_Construct_UClass_UPCGGenericUserParameterGetSettings_NoRegister @ 149c93840

UClass * __cdecl Z_Construct_UClass_UPCGGenericUserParameterGetSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGenericUserParameterGetSettings.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGenericUserParameterGetSettings",
               &Z_Registration_Info_UClass_UPCGGenericUserParameterGetSettings.InnerSingleton,
               UPCGGenericUserParameterGetSettings::
               StaticRegisterNativesUPCGGenericUserParameterGetSettings,0xe8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGGenericUserParameterGetSettings>,
               InternalVTableHelperCtorCaller<UPCGGenericUserParameterGetSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGenericUserParameterGetSettings.InnerSingleton;
}

// Z_Construct_UClass_UPCGGetLandscapeSettings_NoRegister @ 149c93900

UClass * __cdecl Z_Construct_UClass_UPCGGetLandscapeSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGetLandscapeSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGetLandscapeSettings",
               &Z_Registration_Info_UClass_UPCGGetLandscapeSettings.InnerSingleton,
               UPCGGetLandscapeSettings::StaticRegisterNativesUPCGGetLandscapeSettings,0x1c0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGGetLandscapeSettings>,
               InternalVTableHelperCtorCaller<UPCGGetLandscapeSettings>,local_res8,
               UPCGDataFromActorSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGetLandscapeSettings.InnerSingleton;
}

// Z_Construct_UClass_UPCGGetPCGComponentSettings_NoRegister @ 149c939c0

UClass * __cdecl Z_Construct_UClass_UPCGGetPCGComponentSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGetPCGComponentSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGetPCGComponentSettings",
               &Z_Registration_Info_UClass_UPCGGetPCGComponentSettings.InnerSingleton,
               UPCGGetPCGComponentSettings::StaticRegisterNativesUPCGGetPCGComponentSettings,0x1b8,8
               ,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGGetPCGComponentSettings>,
               InternalVTableHelperCtorCaller<UPCGGetPCGComponentSettings>,local_res8,
               UPCGDataFromActorSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGetPCGComponentSettings.InnerSingleton;
}

// Z_Construct_UClass_UPCGGetPrimitiveSettings_NoRegister @ 149c93a80

UClass * __cdecl Z_Construct_UClass_UPCGGetPrimitiveSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGetPrimitiveSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGetPrimitiveSettings",
               &Z_Registration_Info_UClass_UPCGGetPrimitiveSettings.InnerSingleton,
               UPCGGetPrimitiveSettings::StaticRegisterNativesUPCGGetPrimitiveSettings,0x1b8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGGetPrimitiveSettings>,
               InternalVTableHelperCtorCaller<UPCGGetPrimitiveSettings>,local_res8,
               UPCGDataFromActorSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGetPrimitiveSettings.InnerSingleton;
}

// Z_Construct_UClass_UPCGGetSegmentSettings_NoRegister @ 149c93b40

UClass * __cdecl Z_Construct_UClass_UPCGGetSegmentSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGetSegmentSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGetSegmentSettings",
               &Z_Registration_Info_UClass_UPCGGetSegmentSettings.InnerSingleton,
               UPCGGetSegmentSettings::StaticRegisterNativesUPCGGetSegmentSettings,0x160,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UPCGGetSegmentSettings>,
               InternalVTableHelperCtorCaller<UPCGGetSegmentSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGetSegmentSettings.InnerSingleton;
}

// Z_Construct_UClass_UPCGGetSplineSettings_NoRegister @ 149c93c00

UClass * __cdecl Z_Construct_UClass_UPCGGetSplineSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGetSplineSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGetSplineSettings",
               &Z_Registration_Info_UClass_UPCGGetSplineSettings.InnerSingleton,
               UPCGGetSplineSettings::StaticRegisterNativesUPCGGetSplineSettings,0x1b8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UPCGGetSplineSettings>,
               InternalVTableHelperCtorCaller<UPCGGetSplineSettings>,local_res8,
               UPCGDataFromActorSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGetSplineSettings.InnerSingleton;
}

// Z_Construct_UClass_UPCGGetVirtualTextureSettings_NoRegister @ 149c93cc0

UClass * __cdecl Z_Construct_UClass_UPCGGetVirtualTextureSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGetVirtualTextureSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGetVirtualTextureSettings",
               &Z_Registration_Info_UClass_UPCGGetVirtualTextureSettings.InnerSingleton,
               UPCGGetVirtualTextureSettings::StaticRegisterNativesUPCGGetVirtualTextureSettings,
               0x1b8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGGetVirtualTextureSettings>,
               InternalVTableHelperCtorCaller<UPCGGetVirtualTextureSettings>,local_res8,
               UPCGDataFromActorSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGetVirtualTextureSettings.InnerSingleton;
}

// Z_Construct_UClass_UPCGGetVolumeSettings_NoRegister @ 149c93d80

UClass * __cdecl Z_Construct_UClass_UPCGGetVolumeSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGetVolumeSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGetVolumeSettings",
               &Z_Registration_Info_UClass_UPCGGetVolumeSettings.InnerSingleton,
               UPCGGetVolumeSettings::StaticRegisterNativesUPCGGetVolumeSettings,0x1b8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UPCGGetVolumeSettings>,
               InternalVTableHelperCtorCaller<UPCGGetVolumeSettings>,local_res8,
               UPCGDataFromActorSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGetVolumeSettings.InnerSingleton;
}

// Z_Construct_UClass_UPCGReverseSplineSettings_NoRegister @ 149c93e40

UClass * __cdecl Z_Construct_UClass_UPCGReverseSplineSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGReverseSplineSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGReverseSplineSettings",
               &Z_Registration_Info_UClass_UPCGReverseSplineSettings.InnerSingleton,
               UPCGReverseSplineSettings::StaticRegisterNativesUPCGReverseSplineSettings,0xd0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGReverseSplineSettings>,
               InternalVTableHelperCtorCaller<UPCGReverseSplineSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGReverseSplineSettings.InnerSingleton;
}

// Z_Construct_UClass_UPCGSpawnActorNode_NoRegister @ 149c93f00

UClass * __cdecl Z_Construct_UClass_UPCGSpawnActorNode_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSpawnActorNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSpawnActorNode",
               &Z_Registration_Info_UClass_UPCGSpawnActorNode.InnerSingleton,
               UPCGSpawnActorNode::StaticRegisterNativesUPCGSpawnActorNode,0x88,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGSpawnActorNode>,
               InternalVTableHelperCtorCaller<UPCGSpawnActorNode>,local_res8,
               UPCGBaseSubgraphNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSpawnActorNode.InnerSingleton;
}

// Z_Construct_UClass_UPCGSpawnActorSettings_NoRegister @ 149c93fc0

UClass * __cdecl Z_Construct_UClass_UPCGSpawnActorSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSpawnActorSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSpawnActorSettings",
               &Z_Registration_Info_UClass_UPCGSpawnActorSettings.InnerSingleton,
               UPCGSpawnActorSettings::StaticRegisterNativesUPCGSpawnActorSettings,0x2b8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UPCGSpawnActorSettings>,
               InternalVTableHelperCtorCaller<UPCGSpawnActorSettings>,local_res8,
               UPCGBaseSubgraphSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSpawnActorSettings.InnerSingleton;
}

// Z_Construct_UClass_UPCGSpawnSplineMeshSettings_NoRegister @ 149c94080

UClass * __cdecl Z_Construct_UClass_UPCGSpawnSplineMeshSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSpawnSplineMeshSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSpawnSplineMeshSettings",
               &Z_Registration_Info_UClass_UPCGSpawnSplineMeshSettings.InnerSingleton,
               UPCGSpawnSplineMeshSettings::StaticRegisterNativesUPCGSpawnSplineMeshSettings,0x468,8
               ,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGSpawnSplineMeshSettings>,
               InternalVTableHelperCtorCaller<UPCGSpawnSplineMeshSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSpawnSplineMeshSettings.InnerSingleton;
}

// Z_Construct_UClass_UPCGSpawnSplineSettings_NoRegister @ 149c94140

UClass * __cdecl Z_Construct_UClass_UPCGSpawnSplineSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSpawnSplineSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSpawnSplineSettings",
               &Z_Registration_Info_UClass_UPCGSpawnSplineSettings.InnerSingleton,
               UPCGSpawnSplineSettings::StaticRegisterNativesUPCGSpawnSplineSettings,0x170,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UPCGSpawnSplineSettings>
               ,InternalVTableHelperCtorCaller<UPCGSpawnSplineSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSpawnSplineSettings.InnerSingleton;
}

// Z_Construct_UClass_UPCGSplineIntersectionSettings_NoRegister @ 149c94200

UClass * __cdecl Z_Construct_UClass_UPCGSplineIntersectionSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSplineIntersectionSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSplineIntersectionSettings",
               &Z_Registration_Info_UClass_UPCGSplineIntersectionSettings.InnerSingleton,
               UPCGSplineIntersectionSettings::StaticRegisterNativesUPCGSplineIntersectionSettings,
               0x158,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGSplineIntersectionSettings>,
               InternalVTableHelperCtorCaller<UPCGSplineIntersectionSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSplineIntersectionSettings.InnerSingleton;
}

// Z_Construct_UClass_UPCGSplineSamplerSettings_NoRegister @ 149c942c0

UClass * __cdecl Z_Construct_UClass_UPCGSplineSamplerSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSplineSamplerSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSplineSamplerSettings",
               &Z_Registration_Info_UClass_UPCGSplineSamplerSettings.InnerSingleton,
               UPCGSplineSamplerSettings::StaticRegisterNativesUPCGSplineSamplerSettings,0x200,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGSplineSamplerSettings>,
               InternalVTableHelperCtorCaller<UPCGSplineSamplerSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSplineSamplerSettings.InnerSingleton;
}

// Z_Construct_UClass_UPCGSplitPointsSettings_NoRegister @ 149c94380

UClass * __cdecl Z_Construct_UClass_UPCGSplitPointsSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSplitPointsSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSplitPointsSettings",
               &Z_Registration_Info_UClass_UPCGSplitPointsSettings.InnerSingleton,
               UPCGSplitPointsSettings::StaticRegisterNativesUPCGSplitPointsSettings,0xd0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UPCGSplitPointsSettings>
               ,InternalVTableHelperCtorCaller<UPCGSplitPointsSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSplitPointsSettings.InnerSingleton;
}

// Z_Construct_UClass_UPCGSplitSplinesSettings_NoRegister @ 149c94440

UClass * __cdecl Z_Construct_UClass_UPCGSplitSplinesSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSplitSplinesSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSplitSplinesSettings",
               &Z_Registration_Info_UClass_UPCGSplitSplinesSettings.InnerSingleton,
               UPCGSplitSplinesSettings::StaticRegisterNativesUPCGSplitSplinesSettings,0x160,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGSplitSplinesSettings>,
               InternalVTableHelperCtorCaller<UPCGSplitSplinesSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSplitSplinesSettings.InnerSingleton;
}

// Z_Construct_UClass_UPCGStaticMeshSpawnerKernel_NoRegister @ 149c94500

UClass * __cdecl Z_Construct_UClass_UPCGStaticMeshSpawnerKernel_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGStaticMeshSpawnerKernel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeKernel::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGStaticMeshSpawnerKernel",
               &Z_Registration_Info_UClass_UPCGStaticMeshSpawnerKernel.InnerSingleton,
               UPCGStaticMeshSpawnerKernel::StaticRegisterNativesUPCGStaticMeshSpawnerKernel,0xa0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGStaticMeshSpawnerKernel>,
               InternalVTableHelperCtorCaller<UPCGStaticMeshSpawnerKernel>,local_res8,
               UPCGComputeKernel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGStaticMeshSpawnerKernel.InnerSingleton;
}

// Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_NoRegister @ 149c945c0

UClass * __cdecl Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGStaticMeshSpawnerSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGStaticMeshSpawnerSettings",
               &Z_Registration_Info_UClass_UPCGStaticMeshSpawnerSettings.InnerSingleton,
               UPCGStaticMeshSpawnerSettings::StaticRegisterNativesUPCGStaticMeshSpawnerSettings,
               0x150,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGStaticMeshSpawnerSettings>,
               InternalVTableHelperCtorCaller<UPCGStaticMeshSpawnerSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGStaticMeshSpawnerSettings.InnerSingleton;
}

// Z_Construct_UClass_UPCGSurfaceSamplerSettings_NoRegister @ 149c94680

UClass * __cdecl Z_Construct_UClass_UPCGSurfaceSamplerSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSurfaceSamplerSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSurfaceSamplerSettings",
               &Z_Registration_Info_UClass_UPCGSurfaceSamplerSettings.InnerSingleton,
               UPCGSurfaceSamplerSettings::StaticRegisterNativesUPCGSurfaceSamplerSettings,0xf8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGSurfaceSamplerSettings>,
               InternalVTableHelperCtorCaller<UPCGSurfaceSamplerSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSurfaceSamplerSettings.InnerSingleton;
}

// Z_Construct_UClass_UPCGTextureSamplerSettings_NoRegister @ 149c94740

UClass * __cdecl Z_Construct_UClass_UPCGTextureSamplerSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGTextureSamplerSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGTextureSamplerSettings",
               &Z_Registration_Info_UClass_UPCGTextureSamplerSettings.InnerSingleton,
               UPCGTextureSamplerSettings::StaticRegisterNativesUPCGTextureSamplerSettings,0x1c0,
               0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGTextureSamplerSettings>,
               InternalVTableHelperCtorCaller<UPCGTextureSamplerSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGTextureSamplerSettings.InnerSingleton;
}

// Z_Construct_UClass_UPCGTransformPointsSettings_NoRegister @ 149c94800

UClass * __cdecl Z_Construct_UClass_UPCGTransformPointsSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGTransformPointsSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGTransformPointsSettings",
               &Z_Registration_Info_UClass_UPCGTransformPointsSettings.InnerSingleton,
               UPCGTransformPointsSettings::StaticRegisterNativesUPCGTransformPointsSettings,0x180,8
               ,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGTransformPointsSettings>,
               InternalVTableHelperCtorCaller<UPCGTransformPointsSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGTransformPointsSettings.InnerSingleton;
}

// Z_Construct_UClass_UPCGUnionSettings_NoRegister @ 149c948c0

UClass * __cdecl Z_Construct_UClass_UPCGUnionSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGUnionSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGUnionSettings",
               &Z_Registration_Info_UClass_UPCGUnionSettings.InnerSingleton,
               UPCGUnionSettings::StaticRegisterNativesUPCGUnionSettings,0xe0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGUnionSettings>,
               InternalVTableHelperCtorCaller<UPCGUnionSettings>,local_res8,
               UPCGSettingsWithDynamicInputs::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGUnionSettings.InnerSingleton;
}

// Z_Construct_UClass_UPCGUserParameterGetSettings_NoRegister @ 149c94980

UClass * __cdecl Z_Construct_UClass_UPCGUserParameterGetSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGUserParameterGetSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGUserParameterGetSettings",
               &Z_Registration_Info_UClass_UPCGUserParameterGetSettings.InnerSingleton,
               UPCGUserParameterGetSettings::StaticRegisterNativesUPCGUserParameterGetSettings,0xe8,
               8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGUserParameterGetSettings>,
               InternalVTableHelperCtorCaller<UPCGUserParameterGetSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGUserParameterGetSettings.InnerSingleton;
}

// Z_Construct_UClass_UPCGVisualizeAttributeSettings_NoRegister @ 149c94a40

UClass * __cdecl Z_Construct_UClass_UPCGVisualizeAttributeSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGVisualizeAttributeSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGVisualizeAttributeSettings",
               &Z_Registration_Info_UClass_UPCGVisualizeAttributeSettings.InnerSingleton,
               UPCGVisualizeAttributeSettings::StaticRegisterNativesUPCGVisualizeAttributeSettings,
               0x150,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGVisualizeAttributeSettings>,
               InternalVTableHelperCtorCaller<UPCGVisualizeAttributeSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGVisualizeAttributeSettings.InnerSingleton;
}

// Z_Construct_UClass_UPCGVolumeSamplerSettings_NoRegister @ 149c94b00

UClass * __cdecl Z_Construct_UClass_UPCGVolumeSamplerSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGVolumeSamplerSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGVolumeSamplerSettings",
               &Z_Registration_Info_UClass_UPCGVolumeSamplerSettings.InnerSingleton,
               UPCGVolumeSamplerSettings::StaticRegisterNativesUPCGVolumeSamplerSettings,0xe8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGVolumeSamplerSettings>,
               InternalVTableHelperCtorCaller<UPCGVolumeSamplerSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGVolumeSamplerSettings.InnerSingleton;
}

// Z_Construct_UClass_UPCGWorldQuerySettings_NoRegister @ 149c94bc0

UClass * __cdecl Z_Construct_UClass_UPCGWorldQuerySettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGWorldQuerySettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGWorldQuerySettings",
               &Z_Registration_Info_UClass_UPCGWorldQuerySettings.InnerSingleton,
               UPCGWorldQuerySettings::StaticRegisterNativesUPCGWorldQuerySettings,0x198,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UPCGWorldQuerySettings>,
               InternalVTableHelperCtorCaller<UPCGWorldQuerySettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGWorldQuerySettings.InnerSingleton;
}

// Z_Construct_UClass_UPCGWorldRayHitSettings_NoRegister @ 149c94c80

UClass * __cdecl Z_Construct_UClass_UPCGWorldRayHitSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGWorldRayHitSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGWorldRayHitSettings",
               &Z_Registration_Info_UClass_UPCGWorldRayHitSettings.InnerSingleton,
               UPCGWorldRayHitSettings::StaticRegisterNativesUPCGWorldRayHitSettings,0x228,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UPCGWorldRayHitSettings>
               ,InternalVTableHelperCtorCaller<UPCGWorldRayHitSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGWorldRayHitSettings.InnerSingleton;
}

// Z_Construct_UClass_UPCGWorldRaycastElementSettings_NoRegister @ 149c94d40

UClass * __cdecl Z_Construct_UClass_UPCGWorldRaycastElementSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGWorldRaycastElementSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGWorldRaycastElementSettings",
               &Z_Registration_Info_UClass_UPCGWorldRaycastElementSettings.InnerSingleton,
               UPCGWorldRaycastElementSettings::StaticRegisterNativesUPCGWorldRaycastElementSettings
               ,0x328,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGWorldRaycastElementSettings>,
               InternalVTableHelperCtorCaller<UPCGWorldRaycastElementSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGWorldRaycastElementSettings.InnerSingleton;
}

// Z_Construct_UScriptStruct_FPCGStaticMeshSpawnerContext @ 149c94e00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGStaticMeshSpawnerContext(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGStaticMeshSpawnerContext.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGStaticMeshSpawnerContext.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGStaticMeshSpawnerContext_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGStaticMeshSpawnerContext.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGStaticMeshSpawnerContext.InnerSingleton;
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

// PositionCurve'' @ 150418360

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

// RotationCurve'' @ 150418380

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

// ScaleCurve'' @ 1504183a0

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

// `dynamic_atexit_destructor_for_'BoxSweep'' @ 1504183c0

void __cdecl
PCGWorldRaycastElement::Constants::Labels::_dynamic_atexit_destructor_for__BoxSweep__(void)

{
  if (BoxSweep.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001504183cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*BoxSweep.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'BoxSweep'' @ 1504183e0

void __cdecl
PCGWorldRaycastElement::Constants::Tooltips::_dynamic_atexit_destructor_for__BoxSweep__(void)

{
  if (BoxSweep.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001504183ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*BoxSweep.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowActorReuse'' @ 150418400

void __cdecl _dynamic_atexit_destructor_for__CVarAllowActorReuse__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAllowActorReuse);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowISMReuse'' @ 150418420

void __cdecl _dynamic_atexit_destructor_for__CVarAllowISMReuse__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAllowISMReuse);
  return;
}

// `dynamic_atexit_destructor_for_'CapsuleSweep'' @ 150418440

void __cdecl
PCGWorldRaycastElement::Constants::Labels::_dynamic_atexit_destructor_for__CapsuleSweep__(void)

{
  if (CapsuleSweep.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015041844f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*CapsuleSweep.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'CapsuleSweep'' @ 150418460

void __cdecl
PCGWorldRaycastElement::Constants::Tooltips::_dynamic_atexit_destructor_for__CapsuleSweep__(void)

{
  if (CapsuleSweep.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015041846f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*CapsuleSweep.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DefaultNodeTitle'' @ 150418480

void __cdecl
PCGWorldRaycastElement::Constants::_dynamic_atexit_destructor_for__DefaultNodeTitle__(void)

{
  if (DefaultNodeTitle.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015041848f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*DefaultNodeTitle.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GenericGetUserParameterNodeTitle'' @ 1504184a0

void __cdecl
PCGUserParameterGet::Constants::Conversion::
_dynamic_atexit_destructor_for__GenericGetUserParameterNodeTitle__(void)

{
  if (GenericGetUserParameterNodeTitle.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001504184af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*GenericGetUserParameterNodeTitle.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GenericToSpecificTooltip'' @ 1504184c0

void __cdecl
PCGUserParameterGet::Constants::Conversion::
_dynamic_atexit_destructor_for__GenericToSpecificTooltip__(void)

{
  if (GenericToSpecificTooltip.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001504184cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*GenericToSpecificTooltip.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'InvalidHoleIndex'' @ 1504184e0

void __cdecl PCGGetSegment::Log::_dynamic_atexit_destructor_for__InvalidHoleIndex__(void)

{
  if (InvalidHoleIndex.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001504184ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*InvalidHoleIndex.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'InvalidSegmentIndex'' @ 150418500

void __cdecl PCGGetSegment::Log::_dynamic_atexit_destructor_for__InvalidSegmentIndex__(void)

{
  if (InvalidSegmentIndex.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015041850f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*InvalidSegmentIndex.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'LineTrace'' @ 150418520

void __cdecl
PCGWorldRaycastElement::Constants::Labels::_dynamic_atexit_destructor_for__LineTrace__(void)

{
  if (LineTrace.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015041852f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*LineTrace.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'LineTrace'' @ 150418540

void __cdecl
PCGWorldRaycastElement::Constants::Tooltips::_dynamic_atexit_destructor_for__LineTrace__(void)

{
  if (LineTrace.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015041854f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*LineTrace.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'LogSpline'' @ 150418560

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::Geometry::Spline::_dynamic_atexit_destructor_for__LogSpline__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogSpline);
  return;
}

// `dynamic_atexit_destructor_for_'NoMeshEntriesFormat'' @ 150418580

void __cdecl PCGStaticMeshSpawnerKernel::_dynamic_atexit_destructor_for__NoMeshEntriesFormat__(void)

{
  if (NoMeshEntriesFormat.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015041858f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*NoMeshEntriesFormat.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'SpecificGetUserParameterNodeTitle'' @ 1504185a0

void __cdecl
PCGUserParameterGet::Constants::Conversion::
_dynamic_atexit_destructor_for__SpecificGetUserParameterNodeTitle__(void)

{
  if (SpecificGetUserParameterNodeTitle.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001504185af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*SpecificGetUserParameterNodeTitle.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'SpecificToGenericTooltip'' @ 1504185c0

void __cdecl
PCGUserParameterGet::Constants::Conversion::
_dynamic_atexit_destructor_for__SpecificToGenericTooltip__(void)

{
  if (SpecificToGenericTooltip.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001504185cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*SpecificToGenericTooltip.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'SphereSweep'' @ 1504185e0

void __cdecl
PCGWorldRaycastElement::Constants::Labels::_dynamic_atexit_destructor_for__SphereSweep__(void)

{
  if (SphereSweep.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001504185ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*SphereSweep.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'SphereSweep'' @ 150418600

void __cdecl
PCGWorldRaycastElement::Constants::Tooltips::_dynamic_atexit_destructor_for__SphereSweep__(void)

{
  if (SphereSweep.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015041860f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*SphereSweep.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'ToCreateConstantTooltip'' @ 150418620

void __cdecl
PCGUserParameterGet::Constants::Conversion::
_dynamic_atexit_destructor_for__ToCreateConstantTooltip__(void)

{
  if (ToCreateConstantTooltip.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015041862f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*ToCreateConstantTooltip.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'UserParameterTagData'' @ 150418640

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

