// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 820

// PositionCurve'' @ 14119d4c0

void __cdecl `dynamic_initializer_for_'FSpline::PositionCurve__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSpline::PositionCurve__);
  return;
}

// RotationCurve'' @ 14119d4e0

void __cdecl `dynamic_initializer_for_'FSpline::RotationCurve__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSpline::RotationCurve__);
  return;
}

// ScaleCurve'' @ 14119d500

void __cdecl `dynamic_initializer_for_'FSpline::ScaleCurve__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSpline::ScaleCurve__);
  return;
}

// StaticResource'' @ 14119d520

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHISamplerState> this;
  TRefCountPtr<FRHISamplerState> TVar1;
  FRHIResource *local_res8;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__0A__00_00_00_0A__00_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
  ;
  TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource.StateRHI.Reference = (FRHISamplerState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    TVar1 = TStaticSamplerState<0,1,1,1,0,1,0,0>::CreateRHI();
    this = TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
           ::StaticResource.StateRHI;
    if (TVar1.Reference !=
        (FRHISamplerState *)
        &TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource.StateRHI) {
                    /* WARNING: Load size is inaccurate */
      TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
      ::StaticResource.StateRHI.Reference = *TVar1.Reference;
      *(undefined8 *)TVar1.Reference = 0;
      if (this.Reference != (FRHISamplerState *)0x0) {
        FRHIResource::Release((FRHIResource *)this.Reference);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
      atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
             ::StaticResource__);
      return;
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource__);
  return;
}

// `dynamic_initializer_for_'ActorReferenceAttribute'' @ 14119d5e0

void __cdecl PCGPointDataConstants::_dynamic_initializer_for__ActorReferenceAttribute__(void)

{
  ::FName::FName(&ActorReferenceAttribute,L"ActorReference");
  return;
}

// `dynamic_initializer_for_'AlphaAttributeName'' @ 14119d600

void __cdecl PCGSplineSamplerConstants::_dynamic_initializer_for__AlphaAttributeName__(void)

{
  ::FName::FName(&AlphaAttributeName,L"Alpha");
  return;
}

// `dynamic_initializer_for_'ArriveTangentAttributeName'' @ 14119d620

void __cdecl PCGSplineSamplerConstants::_dynamic_initializer_for__ArriveTangentAttributeName__(void)

{
  ::FName::FName(&ArriveTangentAttributeName,L"ArriveTangent");
  return;
}

// `dynamic_initializer_for_'BoundingShapeLabel'' @ 14119d640

void __cdecl PCGSplineSamplerConstants::_dynamic_initializer_for__BoundingShapeLabel__(void)

{
  ::FName::FName(&BoundingShapeLabel,L"Bounding Shape");
  return;
}

// `dynamic_initializer_for_'BoundingShapeLabel'' @ 14119d660

void __cdecl PCGSurfaceSamplerConstants::_dynamic_initializer_for__BoundingShapeLabel__(void)

{
  ::FName::FName(&BoundingShapeLabel,L"Bounding Shape");
  return;
}

// `dynamic_initializer_for_'BoundingShapeLabel'' @ 14119d680

void __cdecl PCGVolumeSamplerConstants::_dynamic_initializer_for__BoundingShapeLabel__(void)

{
  ::FName::FName(&BoundingShapeLabel,L"Bounding Shape");
  return;
}

// `dynamic_initializer_for_'CVarEnablePrepareForSpatialQuery'' @ 14119d6a0

void __cdecl PCGSpatialData::_dynamic_initializer_for__CVarEnablePrepareForSpatialQuery__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarEnablePrepareForSpatialQuery,L"pcg.SpatialData.EnablePrepareForSpatialQuery",
             local_res8,L"Enable UPCGSpatialData subclass PrepareForSpatialQuery task scheduling",0)
  ;
  atexit(_dynamic_atexit_destructor_for__CVarEnablePrepareForSpatialQuery__);
  return;
}

// `dynamic_initializer_for_'CVarPCGEnablePointArrayDataParenting'' @ 14119d6f0

void __cdecl _dynamic_initializer_for__CVarPCGEnablePointArrayDataParenting__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarPCGEnablePointArrayDataParenting,L"pcg.EnablePointArrayDataParenting",local_res8,
             L"Whether to enable inheritance of data on PointArrayData (memory savings)",0);
  atexit(_dynamic_atexit_destructor_for__CVarPCGEnablePointArrayDataParenting__);
  return;
}

// `dynamic_initializer_for_'CVarTriggerReadbackCapture'' @ 14119d740

void __cdecl PCGTextureSamplingHelpers::_dynamic_initializer_for__CVarTriggerReadbackCapture__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarTriggerReadbackCapture,L"pcg.GPU.TriggerRenderCaptures.TextureReadback",
             &GTriggerReadbackCaptureDispatches,
             L"Trigger GPU readback captures for this many of the subsequent texture data initializations."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarTriggerReadbackCapture__);
  return;
}

// `dynamic_initializer_for_'CVarUseSplineCurves'' @ 14119d790

void __cdecl PCGSplineStruct::_dynamic_initializer_for__CVarUseSplineCurves__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUseSplineCurves,L"PCGSplineStruct.UseSplineCurves",&GUseSplineCurves,
             L"When true, SplineCurves is the \'source of truth\'.",0);
  atexit(_dynamic_atexit_destructor_for__CVarUseSplineCurves__);
  return;
}

// `dynamic_initializer_for_'CompactNodeConvert'' @ 14119d7e0

void __cdecl PCGNodeConstants::Icons::_dynamic_initializer_for__CompactNodeConvert__(void)

{
  ::FName::FName(&CompactNodeConvert,L"PCG.Node.Compact.Convert");
  return;
}

// `dynamic_initializer_for_'CompactNodeFilter'' @ 14119d800

void __cdecl PCGNodeConstants::Icons::_dynamic_initializer_for__CompactNodeFilter__(void)

{
  ::FName::FName(&CompactNodeFilter,L"PCG.Node.Compact.Filter");
  return;
}

// `dynamic_initializer_for_'ComponentXAttribute'' @ 14119d820

void __cdecl PCGLandscapeDataConstants::_dynamic_initializer_for__ComponentXAttribute__(void)

{
  ::FName::FName(&ComponentXAttribute,L"ComponentX");
  return;
}

// `dynamic_initializer_for_'ComponentYAttribute'' @ 14119d840

void __cdecl PCGLandscapeDataConstants::_dynamic_initializer_for__ComponentYAttribute__(void)

{
  ::FName::FName(&ComponentYAttribute,L"ComponentY");
  return;
}

// `dynamic_initializer_for_'ControlPointDomainName'' @ 14119d860

void __cdecl PCGSplineData::_dynamic_initializer_for__ControlPointDomainName__(void)

{
  ::FName::FName(&ControlPointDomainName,"ControlPoints");
  return;
}

// `dynamic_initializer_for_'CurvatureAttributeName'' @ 14119d880

void __cdecl PCGSplineSamplerConstants::_dynamic_initializer_for__CurvatureAttributeName__(void)

{
  ::FName::FName(&CurvatureAttributeName,L"Curvature");
  return;
}

// `dynamic_initializer_for_'Data'' @ 14119d8a0

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

// `dynamic_initializer_for_'DataDomainName'' @ 14119d8e0

void __cdecl PCGDataConstants::_dynamic_initializer_for__DataDomainName__(void)

{
  ::FName::FName(&DataDomainName,"Data");
  return;
}

// `dynamic_initializer_for_'Default'' @ 14119d900

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

// `dynamic_initializer_for_'DefaultDependencyOnlyLabel'' @ 14119d940

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultDependencyOnlyLabel__(void)

{
  ::FName::FName(&DefaultDependencyOnlyLabel,L"Dependency Only");
  return;
}

// `dynamic_initializer_for_'DefaultDomainName'' @ 14119d960

void __cdecl PCGDataConstants::_dynamic_initializer_for__DefaultDomainName__(void)

{
  ::FName::FName(&DefaultDomainName,"Default");
  return;
}

// `dynamic_initializer_for_'DefaultExecutionDependencyLabel'' @ 14119d980

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultExecutionDependencyLabel__(void)

{
  ::FName::FName(&DefaultExecutionDependencyLabel,L"Execution Dependency");
  return;
}

// `dynamic_initializer_for_'DefaultInFilterLabel'' @ 14119d9a0

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultInFilterLabel__(void)

{
  ::FName::FName(&DefaultInFilterLabel,L"InsideFilter");
  return;
}

// `dynamic_initializer_for_'DefaultInputLabel'' @ 14119d9c0

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultInputLabel__(void)

{
  ::FName::FName(&DefaultInputLabel,L"In");
  return;
}

// `dynamic_initializer_for_'DefaultOutFilterLabel'' @ 14119d9e0

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultOutFilterLabel__(void)

{
  ::FName::FName(&DefaultOutFilterLabel,L"OutsideFilter");
  return;
}

// `dynamic_initializer_for_'DefaultOutputLabel'' @ 14119da00

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultOutputLabel__(void)

{
  ::FName::FName(&DefaultOutputLabel,L"Out");
  return;
}

// `dynamic_initializer_for_'DefaultPCGActorTag'' @ 14119da20

void __cdecl PCGHelpers::_dynamic_initializer_for__DefaultPCGActorTag__(void)

{
  ::FName::FName(&DefaultPCGActorTag,L"PCG Generated Actor");
  return;
}

// `dynamic_initializer_for_'DefaultPCGDebugTag'' @ 14119da40

void __cdecl PCGHelpers::_dynamic_initializer_for__DefaultPCGDebugTag__(void)

{
  ::FName::FName(&DefaultPCGDebugTag,L"PCG Generated Debug Component");
  return;
}

// `dynamic_initializer_for_'DefaultPCGTag'' @ 14119da60

void __cdecl PCGHelpers::_dynamic_initializer_for__DefaultPCGTag__(void)

{
  ::FName::FName(&DefaultPCGTag,L"PCG Generated Component");
  return;
}

// `dynamic_initializer_for_'DefaultParamsLabel'' @ 14119da80

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultParamsLabel__(void)

{
  ::FName::FName(&DefaultParamsLabel,L"Overrides");
  return;
}

// `dynamic_initializer_for_'DistanceAttributeName'' @ 14119daa0

void __cdecl PCGSplineSamplerConstants::_dynamic_initializer_for__DistanceAttributeName__(void)

{
  ::FName::FName(&DistanceAttributeName,L"Distance");
  return;
}

// `dynamic_initializer_for_'ElementIndexAttribute'' @ 14119dac0

void __cdecl PCGWorldQueryConstants::_dynamic_initializer_for__ElementIndexAttribute__(void)

{
  ::FName::FName(&ElementIndexAttribute,L"ImpactElementIndex");
  return;
}

// `dynamic_initializer_for_'Elements'' @ 14119dae0

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

// `dynamic_initializer_for_'ElementsDomainName'' @ 14119db20

void __cdecl PCGParamDataConstants::_dynamic_initializer_for__ElementsDomainName__(void)

{
  ::FName::FName(&ElementsDomainName,"Elements");
  return;
}

// `dynamic_initializer_for_'ElementsDomainName'' @ 14119db40

void __cdecl PCGPointDataConstants::_dynamic_initializer_for__ElementsDomainName__(void)

{
  ::FName::FName(&ElementsDomainName,"Points");
  return;
}

// `dynamic_initializer_for_'ExtentsName'' @ 14119db60

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__ExtentsName__(void)

{
  ::FName::FName(&ExtentsName,L"Extents");
  return;
}

// `dynamic_initializer_for_'FaceIndexAttribute'' @ 14119db80

void __cdecl PCGWorldQueryConstants::_dynamic_initializer_for__FaceIndexAttribute__(void)

{
  ::FName::FName(&FaceIndexAttribute,L"ImpactFaceIndex");
  return;
}

// `dynamic_initializer_for_'FeedbackPinIcon'' @ 14119dba0

void __cdecl PCGPinConstants::Icons::_dynamic_initializer_for__FeedbackPinIcon__(void)

{
  ::FName::FName(&FeedbackPinIcon,L"GraphEditor.GetSequenceBinding");
  return;
}

// `dynamic_initializer_for_'FilterActorPinLabel'' @ 14119dbc0

void __cdecl PCGWorldRayHitConstants::_dynamic_initializer_for__FilterActorPinLabel__(void)

{
  ::FName::FName(&FilterActorPinLabel,L"FilterActors");
  return;
}

// `dynamic_initializer_for_'ImpactAttribute'' @ 14119dbe0

void __cdecl PCGWorldQueryConstants::_dynamic_initializer_for__ImpactAttribute__(void)

{
  ::FName::FName(&ImpactAttribute,L"ImpactResult");
  return;
}

// `dynamic_initializer_for_'ImpactDistanceAttribute'' @ 14119dc00

void __cdecl PCGWorldQueryConstants::_dynamic_initializer_for__ImpactDistanceAttribute__(void)

{
  ::FName::FName(&ImpactDistanceAttribute,L"ImpactDistance");
  return;
}

// `dynamic_initializer_for_'ImpactNormalAttribute'' @ 14119dc20

void __cdecl PCGWorldQueryConstants::_dynamic_initializer_for__ImpactNormalAttribute__(void)

{
  ::FName::FName(&ImpactNormalAttribute,L"ImpactNormal");
  return;
}

// `dynamic_initializer_for_'ImpactPointAttribute'' @ 14119dc40

void __cdecl PCGWorldQueryConstants::_dynamic_initializer_for__ImpactPointAttribute__(void)

{
  ::FName::FName(&ImpactPointAttribute,L"ImpactPoint");
  return;
}

// `dynamic_initializer_for_'ImpactReflectionAttribute'' @ 14119dc60

void __cdecl PCGWorldQueryConstants::_dynamic_initializer_for__ImpactReflectionAttribute__(void)

{
  ::FName::FName(&ImpactReflectionAttribute,L"ImpactReflection");
  return;
}

// `dynamic_initializer_for_'InputKeyAttributeName'' @ 14119dc80

void __cdecl PCGSplineSamplerConstants::_dynamic_initializer_for__InputKeyAttributeName__(void)

{
  ::FName::FName(&InputKeyAttributeName,L"InputKey");
  return;
}

// `dynamic_initializer_for_'Invalid'' @ 14119dca0

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

// `dynamic_initializer_for_'LastAttributeName'' @ 14119dce0

void __cdecl PCGMetadataAttributeConstants::_dynamic_initializer_for__LastAttributeName__(void)

{
  ::FName::FName(&LastAttributeName,L"@Last");
  return;
}

// `dynamic_initializer_for_'LastCreatedAttributeName'' @ 14119dd00

void __cdecl
PCGMetadataAttributeConstants::_dynamic_initializer_for__LastCreatedAttributeName__(void)

{
  ::FName::FName(&LastCreatedAttributeName,L"@LastCreated");
  return;
}

// `dynamic_initializer_for_'LeaveTangentAttributeName'' @ 14119dd20

void __cdecl PCGSplineSamplerConstants::_dynamic_initializer_for__LeaveTangentAttributeName__(void)

{
  ::FName::FName(&LeaveTangentAttributeName,L"LeaveTangent");
  return;
}

// `dynamic_initializer_for_'LocalCenterName'' @ 14119dd40

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__LocalCenterName__(void)

{
  ::FName::FName(&LocalCenterName,L"LocalCenter");
  return;
}

// `dynamic_initializer_for_'LocalImpactPointAttribute'' @ 14119dd60

void __cdecl PCGWorldQueryConstants::_dynamic_initializer_for__LocalImpactPointAttribute__(void)

{
  ::FName::FName(&LocalImpactPointAttribute,L"ImpactLocalPoint");
  return;
}

// `dynamic_initializer_for_'LocalSizeName'' @ 14119dd80

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__LocalSizeName__(void)

{
  ::FName::FName(&LocalSizeName,L"LocalSize");
  return;
}

// `dynamic_initializer_for_'LogSpline'' @ 14119dda0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::Geometry::Spline::_dynamic_initializer_for__LogSpline__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogSpline,L"LogSpline",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogSpline__);
  return;
}

// `dynamic_initializer_for_'LoopPinIcon'' @ 14119dde0

void __cdecl PCGPinConstants::Icons::_dynamic_initializer_for__LoopPinIcon__(void)

{
  ::FName::FName(&LoopPinIcon,L"GraphEditor.Macro.Loop_16x");
  return;
}

// `dynamic_initializer_for_'MarkedForCleanupPCGTag'' @ 14119de00

void __cdecl PCGHelpers::_dynamic_initializer_for__MarkedForCleanupPCGTag__(void)

{
  ::FName::FName(&MarkedForCleanupPCGTag,L"PCG Marked For Cleanup");
  return;
}

// `dynamic_initializer_for_'ModuleName'' @ 14119de20

void __cdecl AssetRegistryConstants::_dynamic_initializer_for__ModuleName__(void)

{
  ::FName::FName(&ModuleName,"AssetRegistry");
  return;
}

// `dynamic_initializer_for_'NextDirectionDeltaAttributeName'' @ 14119de40

void __cdecl
PCGSplineSamplerConstants::_dynamic_initializer_for__NextDirectionDeltaAttributeName__(void)

{
  ::FName::FName(&NextDirectionDeltaAttributeName,L"NextDirectionDelta");
  return;
}

// `dynamic_initializer_for_'OldDefaultParamsLabel'' @ 14119de60

void __cdecl PCGPinConstants::Private::_dynamic_initializer_for__OldDefaultParamsLabel__(void)

{
  ::FName::FName(&OldDefaultParamsLabel,L"Params");
  return;
}

// `dynamic_initializer_for_'PhysicalMaterialReferenceAttribute'' @ 14119de80

void __cdecl
PCGWorldQueryConstants::_dynamic_initializer_for__PhysicalMaterialReferenceAttribute__(void)

{
  ::FName::FName(&PhysicalMaterialReferenceAttribute,L"PhysicalMaterial");
  return;
}

// `dynamic_initializer_for_'PhysicalMaterialReferenceAttribute'' @ 14119dea0

void __cdecl
PCGWorldRayHitConstants::_dynamic_initializer_for__PhysicalMaterialReferenceAttribute__(void)

{
  PhysicalMaterialReferenceAttribute = PCGWorldQueryConstants::PhysicalMaterialReferenceAttribute;
  return;
}

// `dynamic_initializer_for_'PinLabelCinematic'' @ 14119dec0

void __cdecl PCGQualityHelpers::_dynamic_initializer_for__PinLabelCinematic__(void)

{
  ::FName::FName(&PinLabelCinematic,L"Cinematic");
  return;
}

// `dynamic_initializer_for_'PinLabelDefault'' @ 14119dee0

void __cdecl PCGQualityHelpers::_dynamic_initializer_for__PinLabelDefault__(void)

{
  ::FName::FName(&PinLabelDefault,L"Default");
  return;
}

// `dynamic_initializer_for_'PinLabelEpic'' @ 14119df00

void __cdecl PCGQualityHelpers::_dynamic_initializer_for__PinLabelEpic__(void)

{
  ::FName::FName(&PinLabelEpic,L"Epic");
  return;
}

// `dynamic_initializer_for_'PinLabelHigh'' @ 14119df20

void __cdecl PCGQualityHelpers::_dynamic_initializer_for__PinLabelHigh__(void)

{
  ::FName::FName(&PinLabelHigh,L"High");
  return;
}

// `dynamic_initializer_for_'PinLabelLow'' @ 14119df40

void __cdecl PCGQualityHelpers::_dynamic_initializer_for__PinLabelLow__(void)

{
  ::FName::FName(&PinLabelLow,L"Low");
  return;
}

// `dynamic_initializer_for_'PinLabelMedium'' @ 14119df60

void __cdecl PCGQualityHelpers::_dynamic_initializer_for__PinLabelMedium__(void)

{
  ::FName::FName(&PinLabelMedium,L"Medium");
  return;
}

// `dynamic_initializer_for_'PositionName'' @ 14119df80

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__PositionName__(void)

{
  ::FName::FName(&PositionName,L"Position");
  return;
}

// `dynamic_initializer_for_'RenderMaterialIndexAttribute'' @ 14119dfa0

void __cdecl PCGWorldQueryConstants::_dynamic_initializer_for__RenderMaterialIndexAttribute__(void)

{
  ::FName::FName(&RenderMaterialIndexAttribute,L"ImpactRenderMaterialIndex");
  return;
}

// `dynamic_initializer_for_'RenderMaterialReferenceAttribute'' @ 14119dfc0

void __cdecl
PCGWorldQueryConstants::_dynamic_initializer_for__RenderMaterialReferenceAttribute__(void)

{
  ::FName::FName(&RenderMaterialReferenceAttribute,L"ImpactRenderMaterial");
  return;
}

// `dynamic_initializer_for_'RotationName'' @ 14119dfe0

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__RotationName__(void)

{
  ::FName::FName(&RotationName,L"Rotation");
  return;
}

// `dynamic_initializer_for_'ScaleName'' @ 14119e000

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__ScaleName__(void)

{
  ::FName::FName(&ScaleName,L"Scale");
  return;
}

// `dynamic_initializer_for_'ScaledLocalSizeName'' @ 14119e020

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__ScaledLocalSizeName__(void)

{
  ::FName::FName(&ScaledLocalSizeName,L"ScaledLocalSize");
  return;
}

// `dynamic_initializer_for_'SectionIndexAttribute'' @ 14119e040

void __cdecl PCGWorldQueryConstants::_dynamic_initializer_for__SectionIndexAttribute__(void)

{
  ::FName::FName(&SectionIndexAttribute,L"ImpactSectionIndex");
  return;
}

// `dynamic_initializer_for_'SegmentIndexAttributeName'' @ 14119e060

void __cdecl PCGSplineSamplerConstants::_dynamic_initializer_for__SegmentIndexAttributeName__(void)

{
  ::FName::FName(&SegmentIndexAttributeName,L"SegmentIndex");
  return;
}

// `dynamic_initializer_for_'SourceAttributeName'' @ 14119e080

void __cdecl PCGMetadataAttributeConstants::_dynamic_initializer_for__SourceAttributeName__(void)

{
  ::FName::FName(&SourceAttributeName,L"@Source");
  return;
}

// `dynamic_initializer_for_'SourceNameAttributeName'' @ 14119e0a0

void __cdecl
PCGMetadataAttributeConstants::_dynamic_initializer_for__SourceNameAttributeName__(void)

{
  ::FName::FName(&SourceNameAttributeName,L"@SourceName");
  return;
}

// `dynamic_initializer_for_'SplineLabel'' @ 14119e0c0

void __cdecl PCGSplineSamplerConstants::_dynamic_initializer_for__SplineLabel__(void)

{
  ::FName::FName(&SplineLabel,L"Spline");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeGenerateTree'' @ 14119e0e0

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeInitialTimeSlice'' @ 14119e170

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeProgressTimeSlice'' @ 14119e200

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeTimeSliceSetup'' @ 14119e290

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeAddElement'' @ 14119e320

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeComputeGlobalBox'' @ 14119e3b0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeFillGrid'' @ 14119e440

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeGenerateTree'' @ 14119e4d0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeRemoveElement'' @ 14119e560

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeUpdateElement'' @ 14119e5f0

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

// `dynamic_initializer_for_'StaticMeshReferenceAttribute'' @ 14119e680

void __cdecl PCGWorldQueryConstants::_dynamic_initializer_for__StaticMeshReferenceAttribute__(void)

{
  ::FName::FName(&StaticMeshReferenceAttribute,L"ImpactStaticMesh");
  return;
}

// `dynamic_initializer_for_'SubsegmentIndexAttributeName'' @ 14119e6a0

void __cdecl
PCGSplineSamplerConstants::_dynamic_initializer_for__SubsegmentIndexAttributeName__(void)

{
  ::FName::FName(&SubsegmentIndexAttributeName,L"SubsegmentIndex");
  return;
}

// `dynamic_initializer_for_'SurfaceLabel'' @ 14119e6c0

void __cdecl PCGSurfaceSamplerConstants::_dynamic_initializer_for__SurfaceLabel__(void)

{
  ::FName::FName(&SurfaceLabel,L"Surface");
  return;
}

// `dynamic_initializer_for_'UVCoordAttribute'' @ 14119e6e0

void __cdecl PCGWorldQueryConstants::_dynamic_initializer_for__UVCoordAttribute__(void)

{
  ::FName::FName(&UVCoordAttribute,L"ImpactUVCoords");
  return;
}

// `dynamic_initializer_for_'VertexDomainName'' @ 14119e700

void __cdecl PCGPolygon2DData::_dynamic_initializer_for__VertexDomainName__(void)

{
  ::FName::FName(&VertexDomainName,"Vertices");
  return;
}

// `dynamic_initializer_for_'VolumeLabel'' @ 14119e720

void __cdecl PCGVolumeSamplerConstants::_dynamic_initializer_for__VolumeLabel__(void)

{
  ::FName::FName(&VolumeLabel,L"Volume");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGCollisionShapeData_h__Script_PCG_2115996509'' @ 14119e740

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGCollisionShapeData_h__Script_PCG_2115996509__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGCollisionShapeData_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGCollisionShape_h__Script_PCG_3547376569'' @ 14119e780

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGCollisionShape_h__Script_PCG_3547376569__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGCollisionShape_h__Script_PCG_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGCollisionShape_h__Script_PCG_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGCollisionWrapperData_h__Script_PCG_1035758680'' @ 14119e7d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGCollisionWrapperData_h__Script_PCG_1035758680__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGCollisionWrapperData_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGCollisionWrapperData_h__Script_PCG_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGDataPtrWrapper_h__Script_PCG_4118200244'' @ 14119e820

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGDataPtrWrapper_h__Script_PCG_4118200244__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGDataPtrWrapper_h__Script_PCG_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGDifferenceData_h__Script_PCG_3263339703'' @ 14119e860

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGDifferenceData_h__Script_PCG_3263339703__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGDifferenceData_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGDifferenceData_h__Script_PCG_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGDynamicMeshData_h__Script_PCG_2142172814'' @ 14119e8b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGDynamicMeshData_h__Script_PCG_2142172814__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGDynamicMeshData_h__Script_PCG_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGDynamicMeshData_h__Script_PCG_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGIntersectionData_h__Script_PCG_1632821583'' @ 14119e900

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGIntersectionData_h__Script_PCG_1632821583__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGIntersectionData_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGIntersectionData_h__Script_PCG_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGLandscapeData_h__Script_PCG_964543719'' @ 14119e950

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGLandscapeData_h__Script_PCG_964543719__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGLandscapeData_h__Script_PCG_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGLandscapeData_h__Script_PCG_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGLandscapeSplineData_h__Script_PCG_2172393642'' @ 14119e9a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGLandscapeSplineData_h__Script_PCG_2172393642__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGLandscapeSplineData_h__Script_PCG_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGLandscapeSplineData_h__Script_PCG_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPointArrayData_h__Script_PCG_1699807788'' @ 14119e9f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPointArrayData_h__Script_PCG_1699807788__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPointArrayData_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPointData_h__Script_PCG_2916726103'' @ 14119ea30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPointData_h__Script_PCG_2916726103__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPointData_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPolyLineData_h__Script_PCG_2062839154'' @ 14119ea70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPolyLineData_h__Script_PCG_2062839154__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPolyLineData_h__Script_PCG_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPolyLineData_h__Script_PCG_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPolygon2DData_h__Script_PCG_1759300190'' @ 14119eac0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPolygon2DData_h__Script_PCG_1759300190__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPolygon2DData_h__Script_PCG_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPolygon2DData_h__Script_PCG_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPolygon2DData_h__Script_PCG_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPolygon2DInteriorData_h__Script_PCG_2158121442'' @ 14119eb10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPolygon2DInteriorData_h__Script_PCG_2158121442__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPolygon2DInteriorData_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPrimitiveData_h__Script_PCG_2025453824'' @ 14119eb50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPrimitiveData_h__Script_PCG_2025453824__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPrimitiveData_h__Script_PCG_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPrimitiveData_h__Script_PCG_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGProjectionData_h__Script_PCG_1550356651'' @ 14119eba0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGProjectionData_h__Script_PCG_1550356651__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGProjectionData_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGRenderTargetData_h__Script_PCG_535326568'' @ 14119ebe0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGRenderTargetData_h__Script_PCG_535326568__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGRenderTargetData_h__Script_PCG_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGRenderTargetData_h__Script_PCG_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGResourceData_h__Script_PCG_3783608131'' @ 14119ec30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGResourceData_h__Script_PCG_3783608131__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGResourceData_h__Script_PCG_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGResourceData_h__Script_PCG_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h__Script_PCG_1638909975'' @ 14119ec80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h__Script_PCG_1638909975__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h__Script_PCG_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h__Script_PCG_Statics
             ::ScriptStructInfo,5,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSplineData_h__Script_PCG_3957161946'' @ 14119ecd0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSplineData_h__Script_PCG_3957161946__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSplineData_h__Script_PCG_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSplineData_h__Script_PCG_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSplineInteriorSurfaceData_h__Script_PCG_4165144209'' @ 14119ed20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSplineInteriorSurfaceData_h__Script_PCG_4165144209__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSplineInteriorSurfaceData_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSplineStruct_h__Script_PCG_100180435'' @ 14119ed60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSplineStruct_h__Script_PCG_100180435__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSplineStruct_h__Script_PCG_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSplineStruct_h__Script_PCG_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGStaticMeshResourceData_h__Script_PCG_2237020020'' @ 14119edb0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGStaticMeshResourceData_h__Script_PCG_2237020020__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGStaticMeshResourceData_h__Script_PCG_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGStaticMeshResourceData_h__Script_PCG_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSurfaceData_h__Script_PCG_2658609817'' @ 14119ee00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSurfaceData_h__Script_PCG_2658609817__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSurfaceData_h__Script_PCG_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSurfaceData_h__Script_PCG_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGTextureData_h__Script_PCG_1876088118'' @ 14119ee50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGTextureData_h__Script_PCG_1876088118__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGTextureData_h__Script_PCG_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGTextureData_h__Script_PCG_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGTextureData_h__Script_PCG_Statics
             ::EnumInfo,5);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGUnionData_h__Script_PCG_3274450044'' @ 14119eea0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGUnionData_h__Script_PCG_3274450044__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGUnionData_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGUnionData_h__Script_PCG_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGVirtualTextureData_h__Script_PCG_2661868037'' @ 14119eef0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGVirtualTextureData_h__Script_PCG_2661868037__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGVirtualTextureData_h__Script_PCG_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGVirtualTextureData_h__Script_PCG_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGVolumeData_h__Script_PCG_2650153351'' @ 14119ef40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGVolumeData_h__Script_PCG_2650153351__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGVolumeData_h__Script_PCG_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGVolumeData_h__Script_PCG_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGWorldData_h__Script_PCG_3510856837'' @ 14119ef90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGWorldData_h__Script_PCG_3510856837__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGWorldData_h__Script_PCG_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGWorldData_h__Script_PCG_Statics
             ::ScriptStructInfo,5,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGWorldData_h__Script_PCG_Statics
             ::EnumInfo,3);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_Registry_PCGDataTypeIdentifier_h__Script_PCG_2500015895'' @ 14119efe0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_Registry_PCGDataTypeIdentifier_h__Script_PCG_2500015895__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_Registry_PCGDataTypeIdentifier_h__Script_PCG_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_Registry_PCGDataTypeIdentifier_h__Script_PCG_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_Registry_PCGDataType_h__Script_PCG_1453343808'' @ 14119f030

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_Registry_PCGDataType_h__Script_PCG_1453343808__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_Registry_PCGDataType_h__Script_PCG_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// Z_Construct_UClass_UPCGTextureData @ 149852410

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGTextureData(void)

{
  if (Z_Registration_Info_UClass_UPCGTextureData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGTextureData.OuterSingleton,
               &Z_Construct_UClass_UPCGTextureData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGTextureData.OuterSingleton;
}

// Z_Construct_UEnum_PCG_EPCGTextureColorChannel @ 149852450

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGTextureColorChannel(void)

{
  if (Z_Registration_Info_UEnum_EPCGTextureColorChannel.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGTextureColorChannel.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGTextureColorChannel_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGTextureColorChannel.InnerSingleton;
}

// Z_Construct_UEnum_PCG_EPCGTextureDensityFunction @ 149852490

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGTextureDensityFunction(void)

{
  if (Z_Registration_Info_UEnum_EPCGTextureDensityFunction.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGTextureDensityFunction.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGTextureDensityFunction_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGTextureDensityFunction.InnerSingleton;
}

// Z_Construct_UEnum_PCG_EPCGTextureFilter @ 1498524d0

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGTextureFilter(void)

{
  if (Z_Registration_Info_UEnum_EPCGTextureFilter.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGTextureFilter.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGTextureFilter_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGTextureFilter.InnerSingleton;
}

// Z_Construct_UEnum_PCG_EPCGTextureResourceType @ 149852510

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGTextureResourceType(void)

{
  if (Z_Registration_Info_UEnum_EPCGTextureResourceType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGTextureResourceType.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGTextureResourceType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGTextureResourceType.InnerSingleton;
}

// EPCGTextureColorChannel_StaticEnum @ 149852550

UEnum * __cdecl EPCGTextureColorChannel_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGTextureColorChannel.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGTextureColorChannel.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGTextureColorChannel,(UObject *)pUVar1,
                       L"EPCGTextureColorChannel");
  }
  return Z_Registration_Info_UEnum_EPCGTextureColorChannel.OuterSingleton;
}

// NewStructOps @ 1498525a0

void * __cdecl Z_Construct_UScriptStruct_FPCGDataTypeInfoConcrete_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGDataTypeInfoConcrete,&UE::CoreUObject::Private::Construct<FPCGDataTypeInfoConcrete>,&UE::CoreUObject::Private::ConstructForTests<FPCGDataTypeInfoConcrete>,&UE::CoreUObject::Private::Destruct<FPCGDataTypeInfoConcrete>,&UE::CoreUObject::Private::Copy<FPCGDataTypeInfoConcrete>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EPCGTextureDensityFunction_StaticEnum @ 149852620

UEnum * __cdecl EPCGTextureDensityFunction_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGTextureDensityFunction.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGTextureDensityFunction.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGTextureDensityFunction,(UObject *)pUVar1,
                       L"EPCGTextureDensityFunction");
  }
  return Z_Registration_Info_UEnum_EPCGTextureDensityFunction.OuterSingleton;
}

// `scalar_deleting_destructor' @ 1498526b0

void * __thiscall
FPCGDataTypeInfoVolume::_scalar_deleting_destructor_(FPCGDataTypeInfoVolume *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UPCGPolygon2DData @ 1498526e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGPolygon2DData(void)

{
  if (Z_Registration_Info_UClass_UPCGPolygon2DData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGPolygon2DData.OuterSingleton,
               &Z_Construct_UClass_UPCGPolygon2DData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGPolygon2DData.OuterSingleton;
}

// EPCGPolygon2DProperties_StaticEnum @ 149852720

UEnum * __cdecl EPCGPolygon2DProperties_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGPolygon2DProperties.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGPolygon2DProperties.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGPolygon2DProperties,(UObject *)pUVar1,
                       L"EPCGPolygon2DProperties");
  }
  return Z_Registration_Info_UEnum_EPCGPolygon2DProperties.OuterSingleton;
}

// EPCGTextureFilter_StaticEnum @ 149852760

UEnum * __cdecl EPCGTextureFilter_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGTextureFilter.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGTextureFilter.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGTextureFilter,(UObject *)pUVar1,
                       L"EPCGTextureFilter");
  }
  return Z_Registration_Info_UEnum_EPCGTextureFilter.OuterSingleton;
}

// EPCGTextureAddressMode_StaticEnum @ 149852860

UEnum * __cdecl EPCGTextureAddressMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGTextureAddressMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGTextureAddressMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGTextureAddressMode,(UObject *)pUVar1,
                       L"EPCGTextureAddressMode");
  }
  return Z_Registration_Info_UEnum_EPCGTextureAddressMode.OuterSingleton;
}

// EPCGPolygon2DDataProperties_StaticEnum @ 1498528e0

UEnum * __cdecl EPCGPolygon2DDataProperties_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGPolygon2DDataProperties.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGPolygon2DDataProperties.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGPolygon2DDataProperties,(UObject *)pUVar1,
                       L"EPCGPolygon2DDataProperties");
  }
  return Z_Registration_Info_UEnum_EPCGPolygon2DDataProperties.OuterSingleton;
}

// NewStructOps @ 149852920

void * __cdecl Z_Construct_UScriptStruct_FPCGDataTypeInfoComposite_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGDataTypeInfoComposite,&UE::CoreUObject::Private::Construct<FPCGDataTypeInfoComposite>,&UE::CoreUObject::Private::ConstructForTests<FPCGDataTypeInfoComposite>,&UE::CoreUObject::Private::Destruct<FPCGDataTypeInfoComposite>,&UE::CoreUObject::Private::Copy<FPCGDataTypeInfoComposite>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EPCGTextureResourceType_StaticEnum @ 149852960

UEnum * __cdecl EPCGTextureResourceType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGTextureResourceType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGTextureResourceType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGTextureResourceType,(UObject *)pUVar1,
                       L"EPCGTextureResourceType");
  }
  return Z_Registration_Info_UEnum_EPCGTextureResourceType.OuterSingleton;
}

// NewStructOps @ 1498529e0

void * __cdecl Z_Construct_UScriptStruct_FPCGDataTypeInfoBaseTexture2D_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGDataTypeInfoBaseTexture2D,&UE::CoreUObject::Private::Construct<FPCGDataTypeInfoBaseTexture2D>,&UE::CoreUObject::Private::ConstructForTests<FPCGDataTypeInfoBaseTexture2D>,&UE::CoreUObject::Private::Destruct<FPCGDataTypeInfoBaseTexture2D>,&UE::CoreUObject::Private::Copy<FPCGDataTypeInfoBaseTexture2D>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 149852a20

void * __cdecl Z_Construct_UScriptStruct_FPCGDataTypeInfoPolygon2D_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGDataTypeInfoPolygon2D,&UE::CoreUObject::Private::Construct<FPCGDataTypeInfoPolygon2D>,&UE::CoreUObject::Private::ConstructForTests<FPCGDataTypeInfoPolygon2D>,&UE::CoreUObject::Private::Destruct<FPCGDataTypeInfoPolygon2D>,&UE::CoreUObject::Private::Copy<FPCGDataTypeInfoPolygon2D>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UPCGPointArrayData @ 149852a70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGPointArrayData(void)

{
  if (Z_Registration_Info_UClass_UPCGPointArrayData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGPointArrayData.OuterSingleton,
               &Z_Construct_UClass_UPCGPointArrayData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGPointArrayData.OuterSingleton;
}

// Z_Construct_UClass_UPCGSpatialData_NoRegister @ 149852ac0

UClass * __cdecl Z_Construct_UClass_UPCGSpatialData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSpatialData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSpatialData",
               &Z_Registration_Info_UClass_UPCGSpatialData.InnerSingleton,
               UPCGSpatialData::StaticRegisterNativesUPCGSpatialData,0x98,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGSpatialData>,InternalVTableHelperCtorCaller<UPCGSpatialData>,
               local_res8,UPCGData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSpatialData.InnerSingleton;
}

// Z_Construct_UClass_UPCGPointArrayData_NoRegister @ 149852bc0

UClass * __cdecl Z_Construct_UClass_UPCGPointArrayData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGPointArrayData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGPointArrayData",
               &Z_Registration_Info_UClass_UPCGPointArrayData.InnerSingleton,
               UPCGPointArrayData::StaticRegisterNativesUPCGPointArrayData,0x360,0x10,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UPCGPointArrayData>,
               InternalVTableHelperCtorCaller<UPCGPointArrayData>,local_res8,
               UPCGBasePointData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGPointArrayData.InnerSingleton;
}

// NewStructOps @ 149852d40

void * __cdecl Z_Construct_UScriptStruct_FPCGDataTypeInfoTexture2D_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGDataTypeInfoTexture2D,&UE::CoreUObject::Private::Construct<FPCGDataTypeInfoTexture2D>,&UE::CoreUObject::Private::ConstructForTests<FPCGDataTypeInfoTexture2D>,&UE::CoreUObject::Private::Destruct<FPCGDataTypeInfoTexture2D>,&UE::CoreUObject::Private::Copy<FPCGDataTypeInfoTexture2D>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPCGSpatialData_CreateEmptyMetadata @ 149852d80

UFunction * __cdecl Z_Construct_UFunction_UPCGSpatialData_CreateEmptyMetadata(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGSpatialData_CreateEmptyMetadata_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGSpatialData_GetBounds @ 149852dc0

UFunction * __cdecl Z_Construct_UFunction_UPCGSpatialData_GetBounds(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UPCGSpatialData_GetBounds_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 149853140

void * __thiscall
FPCGDataTypeInfoSpline::_scalar_deleting_destructor_(FPCGDataTypeInfoSpline *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UPCGVolumeData @ 1498531d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGVolumeData(void)

{
  if (Z_Registration_Info_UClass_UPCGVolumeData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGVolumeData.OuterSingleton,
               &Z_Construct_UClass_UPCGVolumeData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGVolumeData.OuterSingleton;
}

// NewStructOps @ 149853900

void * __cdecl Z_Construct_UScriptStruct_FPCGDataTypeInfoVolume_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGDataTypeInfoVolume,&UE::CoreUObject::Private::Construct<FPCGDataTypeInfoVolume>,&UE::CoreUObject::Private::ConstructForTests<FPCGDataTypeInfoVolume>,&UE::CoreUObject::Private::Destruct<FPCGDataTypeInfoVolume>,&UE::CoreUObject::Private::Copy<FPCGDataTypeInfoVolume>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPCGSpatialData_GetDensityAtPosition @ 149853940

UFunction * __cdecl Z_Construct_UFunction_UPCGSpatialData_GetDensityAtPosition(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGSpatialData_GetDensityAtPosition_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 149853ad0

void * __thiscall
FPCGDataTypeInfoComposite::_scalar_deleting_destructor_
          (FPCGDataTypeInfoComposite *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UFunction_UPCGSpatialData_GetDimension @ 149853b00

UFunction * __cdecl Z_Construct_UFunction_UPCGSpatialData_GetDimension(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGSpatialData_GetDimension_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGBaseTextureData_GetDensityFunctionEquivalent @ 149853b40

UFunction * __cdecl Z_Construct_UFunction_UPCGBaseTextureData_GetDensityFunctionEquivalent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGBaseTextureData_GetDensityFunctionEquivalent_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGSpatialData_GetNormal @ 149853b80

UFunction * __cdecl Z_Construct_UFunction_UPCGSpatialData_GetNormal(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UPCGSpatialData_GetNormal_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGBaseTextureData_SetDensityFunctionEquivalent @ 149853bc0

UFunction * __cdecl Z_Construct_UFunction_UPCGBaseTextureData_SetDensityFunctionEquivalent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGBaseTextureData_SetDensityFunctionEquivalent_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGSpatialData_GetStrictBounds @ 149853c00

UFunction * __cdecl Z_Construct_UFunction_UPCGSpatialData_GetStrictBounds(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGSpatialData_GetStrictBounds_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bUseDensitySourceChannel_SetBit @ 149853c40

void __cdecl
Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_bUseDensitySourceChannel_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1a8) = 1;
  return;
}

// NewProp_bUseAdvancedTiling_SetBit @ 149853c50

void __cdecl
Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_bUseAdvancedTiling_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1b0) = 1;
  return;
}

// NewProp_bUseTileBounds_SetBit @ 149853c60

void __cdecl
Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_bUseTileBounds_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1dc) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 149853c70

void __cdecl
Z_Construct_UFunction_UPCGSpatialData_HasNonTrivialTransform_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bSkipReadbackToCPU_SetBit @ 149853ca0

void __cdecl
Z_Construct_UClass_UPCGBaseTextureData_Statics::NewProp_bSkipReadbackToCPU_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 600) = 1;
  return;
}

// Z_Construct_UFunction_UPCGSpatialData_HasNonTrivialTransform @ 149853cf0

UFunction * __cdecl Z_Construct_UFunction_UPCGSpatialData_HasNonTrivialTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGSpatialData_HasNonTrivialTransform_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UPCGIntersectionData_NoRegister @ 149853d30

UClass * __cdecl Z_Construct_UClass_UPCGIntersectionData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGIntersectionData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGIntersectionData",
               &Z_Registration_Info_UClass_UPCGIntersectionData.InnerSingleton,
               UPCGIntersectionData::StaticRegisterNativesUPCGIntersectionData,0x198,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UPCGIntersectionData>,
               InternalVTableHelperCtorCaller<UPCGIntersectionData>,local_res8,
               UPCGSpatialDataWithPointCache::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGIntersectionData.InnerSingleton;
}

// NewProp_bInheritMetadata_SetBit @ 149854100

void __cdecl
Z_Construct_UFunction_UPCGSpatialData_InitializeFromData_Statics::NewProp_bInheritMetadata_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bInheritAttributes_SetBit @ 149854110

void __cdecl
Z_Construct_UFunction_UPCGSpatialData_InitializeFromData_Statics::NewProp_bInheritAttributes_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// Z_Construct_UFunction_UPCGSpatialData_InitializeFromData @ 149854220

UFunction * __cdecl Z_Construct_UFunction_UPCGSpatialData_InitializeFromData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGSpatialData_InitializeFromData_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UPCGPointData_NoRegister @ 149854270

UClass * __cdecl Z_Construct_UClass_UPCGPointData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGPointData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGPointData",
               &Z_Registration_Info_UClass_UPCGPointData.InnerSingleton,
               UPCGPointData::StaticRegisterNativesUPCGPointData,0x280,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGPointData>,
               InternalVTableHelperCtorCaller<UPCGPointData>,local_res8,
               UPCGBasePointData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGPointData.InnerSingleton;
}

// Z_Construct_UClass_UPCGProjectionData @ 149854330

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGProjectionData(void)

{
  if (Z_Registration_Info_UClass_UPCGProjectionData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGProjectionData.OuterSingleton,
               &Z_Construct_UClass_UPCGProjectionData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGProjectionData.OuterSingleton;
}

// Z_Construct_UFunction_UPCGSpatialData_InitializeFromDataWithParams @ 149854370

UFunction * __cdecl Z_Construct_UFunction_UPCGSpatialData_InitializeFromDataWithParams(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGSpatialData_InitializeFromDataWithParams_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UPCGIntersectionData @ 1498543b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGIntersectionData(void)

{
  if (Z_Registration_Info_UClass_UPCGIntersectionData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGIntersectionData.OuterSingleton,
               &Z_Construct_UClass_UPCGIntersectionData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGIntersectionData.OuterSingleton;
}

// Z_Construct_UEnum_PCG_EPCGIntersectionDensityFunction @ 1498543f0

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGIntersectionDensityFunction(void)

{
  if (Z_Registration_Info_UEnum_EPCGIntersectionDensityFunction.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGIntersectionDensityFunction.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGIntersectionDensityFunction_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGIntersectionDensityFunction.InnerSingleton;
}

// EPCGIntersectionDensityFunction_StaticEnum @ 149854430

UEnum * __cdecl EPCGIntersectionDensityFunction_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGIntersectionDensityFunction.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGIntersectionDensityFunction.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGIntersectionDensityFunction,(UObject *)pUVar1,
                       L"EPCGIntersectionDensityFunction");
  }
  return Z_Registration_Info_UEnum_EPCGIntersectionDensityFunction.OuterSingleton;
}

// NewProp_bSuccessfullyInitialized_SetBit @ 149854470

void __cdecl
Z_Construct_UClass_UPCGTextureData_Statics::NewProp_bSuccessfullyInitialized_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x26c) = 1;
  return;
}

// NewProp_bReadbackFromGPUInitiated_SetBit @ 149854480

void __cdecl
Z_Construct_UClass_UPCGTextureData_Statics::NewProp_bReadbackFromGPUInitiated_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2b1) = 1;
  return;
}

// Z_Construct_UFunction_UPCGSpatialData_K2_IntersectWith @ 149854490

UFunction * __cdecl Z_Construct_UFunction_UPCGSpatialData_K2_IntersectWith(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGSpatialData_K2_IntersectWith_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGIntersectionData_Initialize @ 149854620

UFunction * __cdecl Z_Construct_UFunction_UPCGIntersectionData_Initialize(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGIntersectionData_Initialize_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGSpatialData_K2_ProjectOn @ 149854660

UFunction * __cdecl Z_Construct_UFunction_UPCGSpatialData_K2_ProjectOn(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGSpatialData_K2_ProjectOn_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 1498546b0

void __cdecl
Z_Construct_UFunction_UPCGSpatialData_K2_ProjectPoint_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x198) = 1;
  return;
}

// Z_Construct_UFunction_UPCGSpatialData_K2_ProjectPoint @ 1498546c0

UFunction * __cdecl Z_Construct_UFunction_UPCGSpatialData_K2_ProjectPoint(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGSpatialData_K2_ProjectPoint_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UPCGDataTypeIdentifierHelpers @ 149854700

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGDataTypeIdentifierHelpers(void)

{
  if (Z_Registration_Info_UClass_UPCGDataTypeIdentifierHelpers.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGDataTypeIdentifierHelpers.OuterSingleton,
               &Z_Construct_UClass_UPCGDataTypeIdentifierHelpers_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGDataTypeIdentifierHelpers.OuterSingleton;
}

// Z_Construct_UScriptStruct_FPCGDataTypeIdentifier @ 149854740

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGDataTypeIdentifier(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeIdentifier.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGDataTypeIdentifier.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGDataTypeIdentifier_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeIdentifier.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGDataTypeIdentifier.InnerSingleton;
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

// NewProp_ReturnValue_SetBit @ 1498547c0

void __cdecl
Z_Construct_UFunction_UPCGSpatialData_K2_SamplePoint_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x178) = 1;
  return;
}

// NewStructOps @ 1498547d0

void * __cdecl Z_Construct_UScriptStruct_FPCGDataTypeIdentifier_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGDataTypeIdentifier,&UE::CoreUObject::Private::Construct<FPCGDataTypeIdentifier>,&UE::CoreUObject::Private::ConstructForTests<FPCGDataTypeIdentifier>,&UE::CoreUObject::Private::Destruct<FPCGDataTypeIdentifier>,&UE::CoreUObject::Private::Copy<FPCGDataTypeIdentifier>,&UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FPCGDataTypeIdentifier>,&UE::CoreUObject::Private::GetStructTypeHash<FPCGDataTypeIdentifier>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPCGSpatialData_K2_SamplePoint @ 149854810

UFunction * __cdecl Z_Construct_UFunction_UPCGSpatialData_K2_SamplePoint(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGSpatialData_K2_SamplePoint_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGDataTypeIdentifierHelpers_GetIdentifierFromClass @ 1498548a0

UFunction * __cdecl Z_Construct_UFunction_UPCGDataTypeIdentifierHelpers_GetIdentifierFromClass(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGDataTypeIdentifierHelpers_GetIdentifierFromClass_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGSpatialData_K2_Subtract @ 1498548e0

UFunction * __cdecl Z_Construct_UFunction_UPCGSpatialData_K2_Subtract(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGSpatialData_K2_Subtract_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGSpatialData_K2_UnionWith @ 149854970

UFunction * __cdecl Z_Construct_UFunction_UPCGSpatialData_K2_UnionWith(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGSpatialData_K2_UnionWith_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGDataTypeIdentifierHelpers_GetIdentifierFromLegacyType @ 1498549b0

UFunction * __cdecl
Z_Construct_UFunction_UPCGDataTypeIdentifierHelpers_GetIdentifierFromLegacyType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGDataTypeIdentifierHelpers_GetIdentifierFromLegacyType_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 149854a30

void __cdecl
Z_Construct_UFunction_UPCGDataTypeIdentifierHelpers_IsComposition_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UFunction_UPCGSpatialData_ToBasePointDataWithContext @ 149854a40

UFunction * __cdecl Z_Construct_UFunction_UPCGSpatialData_ToBasePointDataWithContext(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGSpatialData_ToBasePointDataWithContext_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGDataTypeIdentifierHelpers_IsComposition @ 149854a80

UFunction * __cdecl Z_Construct_UFunction_UPCGDataTypeIdentifierHelpers_IsComposition(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGDataTypeIdentifierHelpers_IsComposition_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGSpatialData_ToPointData @ 149854b00

UFunction * __cdecl Z_Construct_UFunction_UPCGSpatialData_ToPointData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGSpatialData_ToPointData_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 149854b40

void __cdecl
Z_Construct_UFunction_UPCGDataTypeIdentifierHelpers_IsIdentical_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// Z_Construct_UFunction_UPCGDataTypeIdentifierHelpers_IsIdentical @ 149854ba0

UFunction * __cdecl Z_Construct_UFunction_UPCGDataTypeIdentifierHelpers_IsIdentical(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGDataTypeIdentifierHelpers_IsIdentical_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGSpatialData_ToPointDataWithContext @ 149854bf0

UFunction * __cdecl Z_Construct_UFunction_UPCGSpatialData_ToPointDataWithContext(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGSpatialData_ToPointDataWithContext_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 149854c30

void __cdecl
Z_Construct_UFunction_UPCGDataTypeIdentifierHelpers_IsSameType_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// Z_Construct_UFunction_UPCGDataTypeIdentifierHelpers_IsSameType @ 149854c80

UFunction * __cdecl Z_Construct_UFunction_UPCGDataTypeIdentifierHelpers_IsSameType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGDataTypeIdentifierHelpers_IsSameType_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bKeepZeroDensityPoints_SetBit @ 149854cc0

void __cdecl
Z_Construct_UClass_UPCGSpatialData_Statics::NewProp_bKeepZeroDensityPoints_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x50) = 1;
  return;
}

// NewProp_bHasCachedLastSelector_SetBit @ 149854cd0

void __cdecl
Z_Construct_UClass_UPCGSpatialData_Statics::NewProp_bHasCachedLastSelector_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x51) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 149854ce0

void __cdecl
Z_Construct_UFunction_UPCGDataTypeIdentifierHelpers_IsValid_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UFunction_UPCGDataTypeIdentifierHelpers_IsValid @ 149854d80

UFunction * __cdecl Z_Construct_UFunction_UPCGDataTypeIdentifierHelpers_IsValid(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGDataTypeIdentifierHelpers_IsValid_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 149854ea0

void * __thiscall
FPCGDataTypeInfoBaseTexture2D::_scalar_deleting_destructor_
          (FPCGDataTypeInfoBaseTexture2D *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149855040

void * __thiscall
FPCGDataTypeInfoTexture2D::_scalar_deleting_destructor_
          (FPCGDataTypeInfoTexture2D *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149855070

void * __thiscall
FPCGDataTypeInfoSurface::_scalar_deleting_destructor_(FPCGDataTypeInfoSurface *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// NewStructOps @ 149855230

void * __cdecl Z_Construct_UScriptStruct_FPCGPointDataCache_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGPointDataCache,&UE::CoreUObject::Private::Construct<FPCGPointDataCache>,&UE::CoreUObject::Private::ConstructForTests<FPCGPointDataCache>,&UE::CoreUObject::Private::Destruct<FPCGPointDataCache>,&UE::CoreUObject::Private::Copy<FPCGPointDataCache>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UPCGPointData @ 1498552d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGPointData(void)

{
  if (Z_Registration_Info_UClass_UPCGPointData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGPointData.OuterSingleton,
               &Z_Construct_UClass_UPCGPointData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGPointData.OuterSingleton;
}

// Z_Construct_UFunction_UPCGPointData_GetPoint @ 1498556d0

UFunction * __cdecl Z_Construct_UFunction_UPCGPointData_GetPoint(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UPCGPointData_GetPoint_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 149855720

void * __thiscall
FPCGDataTypeInfoLandscape::_scalar_deleting_destructor_
          (FPCGDataTypeInfoLandscape *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UFunction_UPCGPointData_GetPoints @ 1498558d0

UFunction * __cdecl Z_Construct_UFunction_UPCGPointData_GetPoints(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UPCGPointData_GetPoints_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UPCGLandscapeData @ 149855960

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGLandscapeData(void)

{
  if (Z_Registration_Info_UClass_UPCGLandscapeData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGLandscapeData.OuterSingleton,
               &Z_Construct_UClass_UPCGLandscapeData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGLandscapeData.OuterSingleton;
}

// Z_Construct_UClass_UPCGSurfaceData @ 1498559a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGSurfaceData(void)

{
  if (Z_Registration_Info_UClass_UPCGSurfaceData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGSurfaceData.OuterSingleton,
               &Z_Construct_UClass_UPCGSurfaceData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGSurfaceData.OuterSingleton;
}

// Z_Construct_UScriptStruct_FPCGDataTypeInfoSurface @ 1498559e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGDataTypeInfoSurface(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoSurface.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoSurface.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGDataTypeInfoSurface_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoSurface.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoSurface.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPCGLandscapeDataProps @ 149855a60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGLandscapeDataProps(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGLandscapeDataProps.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGLandscapeDataProps.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGLandscapeDataProps_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGLandscapeDataProps.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGLandscapeDataProps.InnerSingleton;
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

// NewProp_bGetHeightOnly_SetBit @ 149855ae0

void __cdecl
Z_Construct_UScriptStruct_FPCGLandscapeDataProps_Statics::NewProp_bGetHeightOnly_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bGetLayerWeights_SetBit @ 149855af0

void __cdecl
Z_Construct_UScriptStruct_FPCGLandscapeDataProps_Statics::NewProp_bGetLayerWeights_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// NewStructOps @ 149855b00

void * __cdecl Z_Construct_UScriptStruct_FPCGDataPtrWrapper_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGDataPtrWrapper,&UE::CoreUObject::Private::Construct<FPCGDataPtrWrapper>,&UE::CoreUObject::Private::ConstructForTests<FPCGDataPtrWrapper>,&UE::CoreUObject::Private::Destruct<FPCGDataPtrWrapper>,&UE::CoreUObject::Private::SerializeArchive<FPCGDataPtrWrapper>,&UE::CoreUObject::Private::Copy<FPCGDataPtrWrapper>,&UE::CoreUObject::Private::ImportTextItem<FPCGDataPtrWrapper>,&UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FPCGDataPtrWrapper>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bGetActorReference_SetBit @ 149855c00

void __cdecl
Z_Construct_UScriptStruct_FPCGLandscapeDataProps_Statics::NewProp_bGetActorReference_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  return;
}

// NewProp_bGetPhysicalMaterial_SetBit @ 149855c10

void __cdecl
Z_Construct_UScriptStruct_FPCGLandscapeDataProps_Statics::NewProp_bGetPhysicalMaterial_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 3) = 1;
  return;
}

// NewProp_bGetComponentCoordinates_SetBit @ 149855c20

void __cdecl
Z_Construct_UScriptStruct_FPCGLandscapeDataProps_Statics::NewProp_bGetComponentCoordinates_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// NewProp_bSampleVirtualTextures_SetBit @ 149855c40

void __cdecl
Z_Construct_UScriptStruct_FPCGLandscapeDataProps_Statics::NewProp_bSampleVirtualTextures_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 5) = 1;
  return;
}

// NewProp_bSampleVirtualTextureNormals_SetBit @ 149855c50

void __cdecl
Z_Construct_UScriptStruct_FPCGLandscapeDataProps_Statics::
NewProp_bSampleVirtualTextureNormals_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 6) = 1;
  return;
}

// NewStructOps @ 149855c60

void * __cdecl Z_Construct_UScriptStruct_FPCGLandscapeDataProps_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 7;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGLandscapeDataProps,&UE::CoreUObject::Private::Construct<FPCGLandscapeDataProps>,&UE::CoreUObject::Private::ConstructForTests<FPCGLandscapeDataProps>,&UE::CoreUObject::Private::Destruct<FPCGLandscapeDataProps>,&UE::CoreUObject::Private::Copy<FPCGLandscapeDataProps>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPCGPointData_GetPointsCopy @ 149855ca0

UFunction * __cdecl Z_Construct_UFunction_UPCGPointData_GetPointsCopy(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGPointData_GetPointsCopy_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGPointData_SetPoints @ 149855ce0

UFunction * __cdecl Z_Construct_UFunction_UPCGPointData_SetPoints(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UPCGPointData_SetPoints_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 149855df0

void * __thiscall
FPCGDataTypeInfoPrimitive::_scalar_deleting_destructor_
          (FPCGDataTypeInfoPrimitive *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149855f30

void * __thiscall
FPCGDataTypeInfoRenderTarget2D::_scalar_deleting_destructor_
          (FPCGDataTypeInfoRenderTarget2D *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// NewStructOps @ 149856020

void * __cdecl Z_Construct_UScriptStruct_FPCGDataTypeInfoLandscape_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGDataTypeInfoLandscape,&UE::CoreUObject::Private::Construct<FPCGDataTypeInfoLandscape>,&UE::CoreUObject::Private::ConstructForTests<FPCGDataTypeInfoLandscape>,&UE::CoreUObject::Private::Destruct<FPCGDataTypeInfoLandscape>,&UE::CoreUObject::Private::Copy<FPCGDataTypeInfoLandscape>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UPCGDifferenceData_NoRegister @ 149856270

UClass * __cdecl Z_Construct_UClass_UPCGDifferenceData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDifferenceData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDifferenceData",
               &Z_Registration_Info_UClass_UPCGDifferenceData.InnerSingleton,
               UPCGDifferenceData::StaticRegisterNativesUPCGDifferenceData,0x138,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGDifferenceData>,
               InternalVTableHelperCtorCaller<UPCGDifferenceData>,local_res8,
               UPCGSpatialDataWithPointCache::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDifferenceData.InnerSingleton;
}

// Z_Construct_UClass_UPCGBaseTextureData @ 149856450

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGBaseTextureData(void)

{
  if (Z_Registration_Info_UClass_UPCGBaseTextureData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGBaseTextureData.OuterSingleton,
               &Z_Construct_UClass_UPCGBaseTextureData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGBaseTextureData.OuterSingleton;
}

// Z_Construct_UClass_UPCGRenderTargetData @ 149856490

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGRenderTargetData(void)

{
  if (Z_Registration_Info_UClass_UPCGRenderTargetData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGRenderTargetData.OuterSingleton,
               &Z_Construct_UClass_UPCGRenderTargetData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGRenderTargetData.OuterSingleton;
}

// Z_Construct_UScriptStruct_FPCGDataTypeInfoBaseTexture2D @ 1498564d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGDataTypeInfoBaseTexture2D(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoBaseTexture2D.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoBaseTexture2D.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGDataTypeInfoBaseTexture2D_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoBaseTexture2D.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoBaseTexture2D.InnerSingleton;
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

// NewStructOps @ 149856550

void * __cdecl Z_Construct_UScriptStruct_FPCGDataTypeInfoRenderTarget2D_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGDataTypeInfoRenderTarget2D,&UE::CoreUObject::Private::Construct<FPCGDataTypeInfoRenderTarget2D>,&UE::CoreUObject::Private::ConstructForTests<FPCGDataTypeInfoRenderTarget2D>,&UE::CoreUObject::Private::Destruct<FPCGDataTypeInfoRenderTarget2D>,&UE::CoreUObject::Private::Copy<FPCGDataTypeInfoRenderTarget2D>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bInSkipReadbackToCPU_SetBit @ 149856590

void __cdecl
Z_Construct_UFunction_UPCGRenderTargetData_Initialize_Statics::NewProp_bInSkipReadbackToCPU_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x70) = 1;
  return;
}

// NewProp_bInTakeOwnershipOfRenderTarget_SetBit @ 1498565a0

void __cdecl
Z_Construct_UFunction_UPCGRenderTargetData_Initialize_Statics::
NewProp_bInTakeOwnershipOfRenderTarget_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x71) = 1;
  return;
}

// Z_Construct_UClass_UPCGUnionData @ 1498565f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGUnionData(void)

{
  if (Z_Registration_Info_UClass_UPCGUnionData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGUnionData.OuterSingleton,
               &Z_Construct_UClass_UPCGUnionData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGUnionData.OuterSingleton;
}

// Z_Construct_UEnum_PCG_EPCGUnionDensityFunction @ 149856630

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGUnionDensityFunction(void)

{
  if (Z_Registration_Info_UEnum_EPCGUnionDensityFunction.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGUnionDensityFunction.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGUnionDensityFunction_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGUnionDensityFunction.InnerSingleton;
}

// Z_Construct_UEnum_PCG_EPCGUnionType @ 149856680

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGUnionType(void)

{
  if (Z_Registration_Info_UEnum_EPCGUnionType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGUnionType.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGUnionType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGUnionType.InnerSingleton;
}

// EPCGUnionType_StaticEnum @ 1498566c0

UEnum * __cdecl EPCGUnionType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGUnionType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGUnionType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGUnionType,(UObject *)pUVar1,L"EPCGUnionType");
  }
  return Z_Registration_Info_UEnum_EPCGUnionType.OuterSingleton;
}

// Z_Construct_UFunction_UPCGRenderTargetData_Initialize @ 149856700

UFunction * __cdecl Z_Construct_UFunction_UPCGRenderTargetData_Initialize(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGRenderTargetData_Initialize_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EPCGUnionDensityFunction_StaticEnum @ 149856750

UEnum * __cdecl EPCGUnionDensityFunction_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGUnionDensityFunction.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGUnionDensityFunction.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGUnionDensityFunction,(UObject *)pUVar1,
                       L"EPCGUnionDensityFunction");
  }
  return Z_Registration_Info_UEnum_EPCGUnionDensityFunction.OuterSingleton;
}

// NewProp_bOwnsRenderTarget_SetBit @ 149856790

void __cdecl
Z_Construct_UClass_UPCGRenderTargetData_Statics::NewProp_bOwnsRenderTarget_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x268) = 1;
  return;
}

// Z_Construct_UClass_UPCGUnionData_NoRegister @ 1498567a0

UClass * __cdecl Z_Construct_UClass_UPCGUnionData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGUnionData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGUnionData",
               &Z_Registration_Info_UClass_UPCGUnionData.InnerSingleton,
               UPCGUnionData::StaticRegisterNativesUPCGUnionData,0x1a8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGUnionData>,
               InternalVTableHelperCtorCaller<UPCGUnionData>,local_res8,
               UPCGSpatialDataWithPointCache::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGUnionData.InnerSingleton;
}

// Z_Construct_UFunction_UPCGUnionData_AddData @ 149856860

UFunction * __cdecl Z_Construct_UFunction_UPCGUnionData_AddData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UPCGUnionData_AddData_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGUnionData_Initialize @ 149856a20

UFunction * __cdecl Z_Construct_UFunction_UPCGUnionData_Initialize(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UPCGUnionData_Initialize_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UPCGSplineData @ 149856be0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGSplineData(void)

{
  if (Z_Registration_Info_UClass_UPCGSplineData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGSplineData.OuterSingleton,
               &Z_Construct_UClass_UPCGSplineData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGSplineData.OuterSingleton;
}

// Z_Construct_UClass_UPCGSplineProjectionData @ 149856c20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGSplineProjectionData(void)

{
  if (Z_Registration_Info_UClass_UPCGSplineProjectionData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGSplineProjectionData.OuterSingleton,
               &Z_Construct_UClass_UPCGSplineProjectionData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGSplineProjectionData.OuterSingleton;
}

// Z_Construct_UScriptStruct_FPCGSplineStruct @ 149856c60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGSplineStruct(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGSplineStruct.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGSplineStruct.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGSplineStruct_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGSplineStruct.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGSplineStruct.InnerSingleton;
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

// NewStructOps @ 149856ce0

void * __cdecl Z_Construct_UScriptStruct_FPCGDataTypeInfoSpline_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGDataTypeInfoSpline,&UE::CoreUObject::Private::Construct<FPCGDataTypeInfoSpline>,&UE::CoreUObject::Private::ConstructForTests<FPCGDataTypeInfoSpline>,&UE::CoreUObject::Private::Destruct<FPCGDataTypeInfoSpline>,&UE::CoreUObject::Private::Copy<FPCGDataTypeInfoSpline>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPCGSplineData_GetMetadataEntryKeysForSplinePoints @ 149856e50

UFunction * __cdecl Z_Construct_UFunction_UPCGSplineData_GetMetadataEntryKeysForSplinePoints(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGSplineData_GetMetadataEntryKeysForSplinePoints_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGSplineData_GetSplinePoints @ 149856f50

UFunction * __cdecl Z_Construct_UFunction_UPCGSplineData_GetSplinePoints(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGSplineData_GetSplinePoints_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UPCGWorldRayHitData @ 1498570c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGWorldRayHitData(void)

{
  if (Z_Registration_Info_UClass_UPCGWorldRayHitData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGWorldRayHitData.OuterSingleton,
               &Z_Construct_UClass_UPCGWorldRayHitData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGWorldRayHitData.OuterSingleton;
}

// Z_Construct_UClass_UPCGWorldVolumetricData @ 149857100

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGWorldVolumetricData(void)

{
  if (Z_Registration_Info_UClass_UPCGWorldVolumetricData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGWorldVolumetricData.OuterSingleton,
               &Z_Construct_UClass_UPCGWorldVolumetricData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGWorldVolumetricData.OuterSingleton;
}

// Z_Construct_UFunction_UPCGSplineData_Initialize @ 149857140

UFunction * __cdecl Z_Construct_UFunction_UPCGSplineData_Initialize(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UPCGSplineData_Initialize_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UEnum_PCG_EPCGWorldQueryFilter @ 149857180

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGWorldQueryFilter(void)

{
  if (Z_Registration_Info_UEnum_EPCGWorldQueryFilter.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGWorldQueryFilter.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGWorldQueryFilter_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGWorldQueryFilter.InnerSingleton;
}

// Z_Construct_UEnum_PCG_EPCGWorldQuerySelectLandscapeHits @ 1498571c0

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGWorldQuerySelectLandscapeHits(void)

{
  if (Z_Registration_Info_UEnum_EPCGWorldQuerySelectLandscapeHits.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGWorldQuerySelectLandscapeHits.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGWorldQuerySelectLandscapeHits_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGWorldQuerySelectLandscapeHits.InnerSingleton;
}

// Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams @ 149857200

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGWorldCommonQueryParams.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGWorldCommonQueryParams.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGWorldCommonQueryParams.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGWorldCommonQueryParams.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPCGWorldQueryActorFilterCache @ 149857280

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGWorldQueryActorFilterCache(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGWorldQueryActorFilterCache.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGWorldQueryActorFilterCache.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGWorldQueryActorFilterCache_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGWorldQueryActorFilterCache.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGWorldQueryActorFilterCache.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPCGWorldRaycastQueryParams @ 149857300

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGWorldRaycastQueryParams(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGWorldRaycastQueryParams.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGWorldRaycastQueryParams.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGWorldRaycastQueryParams_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGWorldRaycastQueryParams.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGWorldRaycastQueryParams.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPCGWorldRayHitQueryParams @ 149857380

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGWorldRayHitQueryParams(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGWorldRayHitQueryParams.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGWorldRayHitQueryParams.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGWorldRayHitQueryParams_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGWorldRayHitQueryParams.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGWorldRayHitQueryParams.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPCGWorldVolumetricQueryParams @ 149857400

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGWorldVolumetricQueryParams(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGWorldVolumetricQueryParams.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGWorldVolumetricQueryParams.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGWorldVolumetricQueryParams_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGWorldVolumetricQueryParams.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGWorldVolumetricQueryParams.InnerSingleton;
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

// EPCGWorldQueryFilterByTag_StaticEnum @ 149857480

UEnum * __cdecl EPCGWorldQueryFilterByTag_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGWorldQueryFilterByTag.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGWorldQueryFilterByTag.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGWorldQueryFilterByTag,(UObject *)pUVar1,
                       L"EPCGWorldQueryFilterByTag");
  }
  return Z_Registration_Info_UEnum_EPCGWorldQueryFilterByTag.OuterSingleton;
}

// NewProp_bInClosedLoop_SetBit @ 149857500

void __cdecl
Z_Construct_UFunction_UPCGSplineData_K2_Initialize_Statics::NewProp_bInClosedLoop_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// EPCGWorldQueryFilter_StaticEnum @ 149857510

UEnum * __cdecl EPCGWorldQueryFilter_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGWorldQueryFilter.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGWorldQueryFilter.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGWorldQueryFilter,(UObject *)pUVar1,
                       L"EPCGWorldQueryFilter");
  }
  return Z_Registration_Info_UEnum_EPCGWorldQueryFilter.OuterSingleton;
}

// Z_Construct_UFunction_UPCGSplineData_K2_Initialize @ 149857550

UFunction * __cdecl Z_Construct_UFunction_UPCGSplineData_K2_Initialize(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGSplineData_K2_Initialize_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EPCGWorldQuerySelectLandscapeHits_StaticEnum @ 149857590

UEnum * __cdecl EPCGWorldQuerySelectLandscapeHits_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGWorldQuerySelectLandscapeHits.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGWorldQuerySelectLandscapeHits.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGWorldQuerySelectLandscapeHits,(UObject *)pUVar1,
                       L"EPCGWorldQuerySelectLandscapeHits");
  }
  return Z_Registration_Info_UEnum_EPCGWorldQuerySelectLandscapeHits.OuterSingleton;
}

// Z_Construct_UClass_UPCGResourceData @ 1498575d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGResourceData(void)

{
  if (Z_Registration_Info_UClass_UPCGResourceData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGResourceData.OuterSingleton,
               &Z_Construct_UClass_UPCGResourceData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGResourceData.OuterSingleton;
}

// Z_Construct_UScriptStruct_FPCGDataTypeInfo @ 149857610

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGDataTypeInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGDataTypeInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPCGDataTypeInfoResource @ 149857690

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGDataTypeInfoResource(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoResource.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoResource.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGDataTypeInfoResource_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoResource.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoResource.InnerSingleton;
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

// NewStructOps @ 149857710

void * __cdecl Z_Construct_UScriptStruct_FPCGDataTypeInfoResource_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGDataTypeInfoResource,&UE::CoreUObject::Private::Construct<FPCGDataTypeInfoResource>,&UE::CoreUObject::Private::ConstructForTests<FPCGDataTypeInfoResource>,&UE::CoreUObject::Private::Destruct<FPCGDataTypeInfoResource>,&UE::CoreUObject::Private::Copy<FPCGDataTypeInfoResource>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bIgnorePCGHits_SetBit @ 149857750

void __cdecl
Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewProp_bIgnorePCGHits_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bIgnoreSelfHits_SetBit @ 149857760

void __cdecl
Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewProp_bIgnoreSelfHits_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// NewProp_bTraceComplex_SetBit @ 149857770

void __cdecl
Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewProp_bTraceComplex_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 3) = 1;
  return;
}

// NewProp_bGetReferenceToActorHit_SetBit @ 149857780

void __cdecl
Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewProp_bGetReferenceToActorHit_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x71) = 1;
  return;
}

// NewProp_bGetReferenceToPhysicalMaterial_SetBit @ 149857790

void __cdecl
Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::
NewProp_bGetReferenceToPhysicalMaterial_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x72) = 1;
  return;
}

// NewStructOps @ 1498577a0

void * __cdecl Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 200;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGWorldCommonQueryParams,&UE::CoreUObject::Private::Construct<FPCGWorldCommonQueryParams>,&UE::CoreUObject::Private::ConstructForTests<FPCGWorldCommonQueryParams>,&UE::CoreUObject::Private::Destruct<FPCGWorldCommonQueryParams>,&UE::CoreUObject::Private::Copy<FPCGWorldCommonQueryParams>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bIgnoreBackfaceHits_SetBit @ 149857840

void __cdecl
Z_Construct_UScriptStruct_FPCGWorldRaycastQueryParams_Statics::NewProp_bIgnoreBackfaceHits_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 200) = *(byte *)((longlong)param_1 + 200) | 1;
  return;
}

// Z_Construct_UClass_UPCGDifferenceData @ 149857850

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGDifferenceData(void)

{
  if (Z_Registration_Info_UClass_UPCGDifferenceData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGDifferenceData.OuterSingleton,
               &Z_Construct_UClass_UPCGDifferenceData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGDifferenceData.OuterSingleton;
}

// NewProp_bGetImpact_SetBit @ 149857890

void __cdecl
Z_Construct_UScriptStruct_FPCGWorldRaycastQueryParams_Statics::NewProp_bGetImpact_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 200) = *(byte *)((longlong)param_1 + 200) | 2;
  return;
}

// Z_Construct_UEnum_PCG_EPCGDifferenceDensityFunction @ 1498578a0

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGDifferenceDensityFunction(void)

{
  if (Z_Registration_Info_UEnum_EPCGDifferenceDensityFunction.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGDifferenceDensityFunction.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGDifferenceDensityFunction_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGDifferenceDensityFunction.InnerSingleton;
}

// NewProp_bGetImpactPoint_SetBit @ 1498578e0

void __cdecl
Z_Construct_UScriptStruct_FPCGWorldRaycastQueryParams_Statics::NewProp_bGetImpactPoint_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 200) = *(byte *)((longlong)param_1 + 200) | 4;
  return;
}

// EPCGDifferenceDensityFunction_StaticEnum @ 149857960

UEnum * __cdecl EPCGDifferenceDensityFunction_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGDifferenceDensityFunction.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGDifferenceDensityFunction.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGDifferenceDensityFunction,(UObject *)pUVar1,
                       L"EPCGDifferenceDensityFunction");
  }
  return Z_Registration_Info_UEnum_EPCGDifferenceDensityFunction.OuterSingleton;
}

// NewProp_bGetImpactNormal_SetBit @ 1498579a0

void __cdecl
Z_Construct_UScriptStruct_FPCGWorldRaycastQueryParams_Statics::NewProp_bGetImpactNormal_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 200) = *(byte *)((longlong)param_1 + 200) | 8;
  return;
}

// NewProp_bGetReflection_SetBit @ 149857a00

void __cdecl
Z_Construct_UScriptStruct_FPCGWorldRaycastQueryParams_Statics::NewProp_bGetReflection_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 200) = *(byte *)((longlong)param_1 + 200) | 0x10;
  return;
}

// NewProp_bGetDistance_SetBit @ 149857a10

void __cdecl
Z_Construct_UScriptStruct_FPCGWorldRaycastQueryParams_Statics::NewProp_bGetDistance_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 200) = *(byte *)((longlong)param_1 + 200) | 0x20;
  return;
}

// NewProp_bGetLocalImpactPoint_SetBit @ 149857a30

void __cdecl
Z_Construct_UScriptStruct_FPCGWorldRaycastQueryParams_Statics::NewProp_bGetLocalImpactPoint_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 200) = *(byte *)((longlong)param_1 + 200) | 0x40;
  return;
}

// NewProp_bGetReferenceToRenderMaterial_SetBit @ 149857a40

void __cdecl
Z_Construct_UScriptStruct_FPCGWorldRaycastQueryParams_Statics::
NewProp_bGetReferenceToRenderMaterial_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 200) = *(byte *)((longlong)param_1 + 200) | 0x80;
  return;
}

// Z_Construct_UEnum_PCG_EPCGCollisionShapeType @ 149857a50

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGCollisionShapeType(void)

{
  if (Z_Registration_Info_UEnum_EPCGCollisionShapeType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGCollisionShapeType.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGCollisionShapeType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGCollisionShapeType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FPCGCollisionShape @ 149857a90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGCollisionShape(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGCollisionShape.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGCollisionShape.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGCollisionShape_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGCollisionShape.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGCollisionShape.InnerSingleton;
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

// NewProp_bGetReferenceToStaticMesh_SetBit @ 149857b10

void __cdecl
Z_Construct_UScriptStruct_FPCGWorldRaycastQueryParams_Statics::
NewProp_bGetReferenceToStaticMesh_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0xc9) = *(byte *)((longlong)param_1 + 0xc9) | 1;
  return;
}

// NewProp_bGetFaceIndex_SetBit @ 149857b20

void __cdecl
Z_Construct_UScriptStruct_FPCGWorldRaycastQueryParams_Statics::NewProp_bGetFaceIndex_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xc9) = *(byte *)((longlong)param_1 + 0xc9) | 2;
  return;
}

// NewProp_bGetUVCoords_SetBit @ 149857b30

void __cdecl
Z_Construct_UScriptStruct_FPCGWorldRaycastQueryParams_Statics::NewProp_bGetUVCoords_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xc9) = *(byte *)((longlong)param_1 + 0xc9) | 4;
  return;
}

// NewProp_bGetElementIndex_SetBit @ 149857b40

void __cdecl
Z_Construct_UScriptStruct_FPCGWorldRaycastQueryParams_Statics::NewProp_bGetElementIndex_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xc9) = *(byte *)((longlong)param_1 + 0xc9) | 8;
  return;
}

// NewProp_bGetSectionIndex_SetBit @ 149857b50

void __cdecl
Z_Construct_UScriptStruct_FPCGWorldRaycastQueryParams_Statics::NewProp_bGetSectionIndex_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xc9) = *(byte *)((longlong)param_1 + 0xc9) | 0x10;
  return;
}

// NewProp_bApplyMetadataFromLandscape_SetBit @ 149857b60

void __cdecl
Z_Construct_UScriptStruct_FPCGWorldRaycastQueryParams_Statics::
NewProp_bApplyMetadataFromLandscape_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0xc9) = *(byte *)((longlong)param_1 + 0xc9) | 0x20;
  return;
}

// EPCGCollisionShapeType_StaticEnum @ 149857b70

UEnum * __cdecl EPCGCollisionShapeType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGCollisionShapeType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGCollisionShapeType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGCollisionShapeType,(UObject *)pUVar1,
                       L"EPCGCollisionShapeType");
  }
  return Z_Registration_Info_UEnum_EPCGCollisionShapeType.OuterSingleton;
}

// NewProp_bUseRenderMaterialIndex_SetBit @ 149857bb0

void __cdecl
Z_Construct_UScriptStruct_FPCGWorldRaycastQueryParams_Statics::
NewProp_bUseRenderMaterialIndex_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0xc9) = *(byte *)((longlong)param_1 + 0xc9) | 0x40;
  return;
}

// EPCGDifferenceMode_StaticEnum @ 149857bc0

UEnum * __cdecl EPCGDifferenceMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGDifferenceMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGDifferenceMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGDifferenceMode,(UObject *)pUVar1,
                       L"EPCGDifferenceMode");
  }
  return Z_Registration_Info_UEnum_EPCGDifferenceMode.OuterSingleton;
}

// NewProp_bGetRenderMaterialIndex_SetBit @ 149857c50

void __cdecl
Z_Construct_UScriptStruct_FPCGWorldRaycastQueryParams_Statics::
NewProp_bGetRenderMaterialIndex_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0xd0) = *(byte *)((longlong)param_1 + 0xd0) | 1;
  return;
}

// NewStructOps @ 149857c60

void * __cdecl Z_Construct_UScriptStruct_FPCGWorldRaycastQueryParams_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xd8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGWorldRaycastQueryParams,&UE::CoreUObject::Private::Construct<FPCGWorldRaycastQueryParams>,&UE::CoreUObject::Private::ConstructForTests<FPCGWorldRaycastQueryParams>,&UE::CoreUObject::Private::Destruct<FPCGWorldRaycastQueryParams>,&UE::CoreUObject::Private::PostSerialize<FPCGWorldRaycastQueryParams>,&UE::CoreUObject::Private::Copy<FPCGWorldRaycastQueryParams>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 149857ca0

void * __cdecl Z_Construct_UScriptStruct_FPCGCollisionShape_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGCollisionShape,&UE::CoreUObject::Private::Construct<FPCGCollisionShape>,&UE::CoreUObject::Private::ConstructForTests<FPCGCollisionShape>,&UE::CoreUObject::Private::Destruct<FPCGCollisionShape>,&UE::CoreUObject::Private::Copy<FPCGCollisionShape>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPCGDifferenceData_Initialize @ 149857ce0

UFunction * __cdecl Z_Construct_UFunction_UPCGDifferenceData_Initialize(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGDifferenceData_Initialize_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGDifferenceData_K2_AddDifference @ 149857d20

UFunction * __cdecl Z_Construct_UFunction_UPCGDifferenceData_K2_AddDifference(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGDifferenceData_K2_AddDifference_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGDifferenceData_SetDensityFunction @ 149857d60

UFunction * __cdecl Z_Construct_UFunction_UPCGDifferenceData_SetDensityFunction(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGDifferenceData_SetDensityFunction_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bDiffMetadata_SetBit @ 149857da0

void __cdecl
Z_Construct_UClass_UPCGDifferenceData_Statics::NewProp_bDiffMetadata_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x110) = 1;
  return;
}

// NewProp_bSearchForOverlap_SetBit @ 149857e70

void __cdecl
Z_Construct_UScriptStruct_FPCGWorldVolumetricQueryParams_Statics::NewProp_bSearchForOverlap_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 200) = 1;
  return;
}

// NewStructOps @ 149857ec0

void * __cdecl Z_Construct_UScriptStruct_FPCGWorldVolumetricQueryParams_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xd0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGWorldVolumetricQueryParams,&UE::CoreUObject::Private::Construct<FPCGWorldVolumetricQueryParams>,&UE::CoreUObject::Private::ConstructForTests<FPCGWorldVolumetricQueryParams>,&UE::CoreUObject::Private::Destruct<FPCGWorldVolumetricQueryParams>,&UE::CoreUObject::Private::PostSerialize<FPCGWorldVolumetricQueryParams>,&UE::CoreUObject::Private::Copy<FPCGWorldVolumetricQueryParams>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bOverrideDefaultParams_SetBit @ 149857fd0

void __cdecl
Z_Construct_UScriptStruct_FPCGWorldRayHitQueryParams_Statics::NewProp_bOverrideDefaultParams_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd8) = 1;
  return;
}

// NewStructOps @ 149857fe0

void * __cdecl Z_Construct_UScriptStruct_FPCGWorldRayHitQueryParams_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x118;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGWorldRayHitQueryParams,&UE::CoreUObject::Private::Construct<FPCGWorldRayHitQueryParams>,&UE::CoreUObject::Private::ConstructForTests<FPCGWorldRayHitQueryParams>,&UE::CoreUObject::Private::Destruct<FPCGWorldRayHitQueryParams>,&UE::CoreUObject::Private::PostSerialize<FPCGWorldRayHitQueryParams>,&UE::CoreUObject::Private::Copy<FPCGWorldRayHitQueryParams>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UPCGSplineInteriorSurfaceData @ 149858020

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGSplineInteriorSurfaceData(void)

{
  if (Z_Registration_Info_UClass_UPCGSplineInteriorSurfaceData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGSplineInteriorSurfaceData.OuterSingleton,
               &Z_Construct_UClass_UPCGSplineInteriorSurfaceData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGSplineInteriorSurfaceData.OuterSingleton;
}

// NewStructOps @ 149858160

void * __cdecl Z_Construct_UScriptStruct_FPCGWorldQueryActorFilterCache_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x90;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGWorldQueryActorFilterCache,&UE::CoreUObject::Private::Construct<FPCGWorldQueryActorFilterCache>,&UE::CoreUObject::Private::ConstructForTests<FPCGWorldQueryActorFilterCache>,&UE::CoreUObject::Private::Destruct<FPCGWorldQueryActorFilterCache>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UPCGPolygon2DInteriorSurfaceData @ 1498581a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGPolygon2DInteriorSurfaceData(void)

{
  if (Z_Registration_Info_UClass_UPCGPolygon2DInteriorSurfaceData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGPolygon2DInteriorSurfaceData.OuterSingleton,
               &Z_Construct_UClass_UPCGPolygon2DInteriorSurfaceData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGPolygon2DInteriorSurfaceData.OuterSingleton;
}

// EPCGSplineStructProperties_StaticEnum @ 1498582d0

UEnum * __cdecl EPCGSplineStructProperties_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGSplineStructProperties.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGSplineStructProperties.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGSplineStructProperties,(UObject *)pUVar1,
                       L"EPCGSplineStructProperties");
  }
  return Z_Registration_Info_UEnum_EPCGSplineStructProperties.OuterSingleton;
}

// NewStructOps @ 1498586f0

void * __cdecl Z_Construct_UScriptStruct_FPCGDataTypeInfoPolyline_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGDataTypeInfoPolyline,&UE::CoreUObject::Private::Construct<FPCGDataTypeInfoPolyline>,&UE::CoreUObject::Private::ConstructForTests<FPCGDataTypeInfoPolyline>,&UE::CoreUObject::Private::Destruct<FPCGDataTypeInfoPolyline>,&UE::CoreUObject::Private::Copy<FPCGDataTypeInfoPolyline>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EPCGSplineDataProperties_StaticEnum @ 149858950

UEnum * __cdecl EPCGSplineDataProperties_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGSplineDataProperties.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGSplineDataProperties.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGSplineDataProperties,(UObject *)pUVar1,
                       L"EPCGSplineDataProperties");
  }
  return Z_Registration_Info_UEnum_EPCGSplineDataProperties.OuterSingleton;
}

// NewProp_bClosedLoop_SetBit @ 149858990

void __cdecl
Z_Construct_UScriptStruct_FPCGSplineStruct_Statics::NewProp_bClosedLoop_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x7c) = 1;
  return;
}

// NewStructOps @ 1498589a0

void * __cdecl Z_Construct_UScriptStruct_FPCGSplineStruct_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1d0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGSplineStruct,&UE::CoreUObject::Private::Construct<FPCGSplineStruct>,&UE::CoreUObject::Private::ConstructForTests<FPCGSplineStruct>,&UE::CoreUObject::Private::Destruct<FPCGSplineStruct>,&UE::CoreUObject::Private::PostSerialize<FPCGSplineStruct>,&UE::CoreUObject::Private::Copy<FPCGSplineStruct>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 149858a80

void * __thiscall
FPCGDataTypeInfoOther::_scalar_deleting_destructor_(FPCGDataTypeInfoOther *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UFunction_UPCGPolyLineData_GetAlphaAtDistance @ 149858bd0

UFunction * __cdecl Z_Construct_UFunction_UPCGPolyLineData_GetAlphaAtDistance(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGPolyLineData_GetAlphaAtDistance_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGPolyLineData_GetCurvatureAtDistance @ 149858ef0

UFunction * __cdecl Z_Construct_UFunction_UPCGPolyLineData_GetCurvatureAtDistance(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGPolyLineData_GetCurvatureAtDistance_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 149859060

void * __thiscall
FPCGDataTypeInfoResource::_scalar_deleting_destructor_(FPCGDataTypeInfoResource *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UFunction_UPCGPolyLineData_GetDistanceAtSegmentStart @ 149859150

UFunction * __cdecl Z_Construct_UFunction_UPCGPolyLineData_GetDistanceAtSegmentStart(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGPolyLineData_GetDistanceAtSegmentStart_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGPolyLineData_GetInputKeyAtAlpha @ 149859190

UFunction * __cdecl Z_Construct_UFunction_UPCGPolyLineData_GetInputKeyAtAlpha(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGPolyLineData_GetInputKeyAtAlpha_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGPolyLineData_GetInputKeyAtDistance @ 1498591d0

UFunction * __cdecl Z_Construct_UFunction_UPCGPolyLineData_GetInputKeyAtDistance(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGPolyLineData_GetInputKeyAtDistance_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGPolyLineData_GetLength @ 1498592a0

UFunction * __cdecl Z_Construct_UFunction_UPCGPolyLineData_GetLength(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UPCGPolyLineData_GetLength_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGPolyLineData_GetLocationAtAlpha @ 149859420

UFunction * __cdecl Z_Construct_UFunction_UPCGPolyLineData_GetLocationAtAlpha(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGPolyLineData_GetLocationAtAlpha_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bWorldSpace_SetBit @ 1498594b0

void __cdecl
Z_Construct_UFunction_UPCGPolyLineData_GetLocationAtDistance_Statics::NewProp_bWorldSpace_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UPCGPolyLineData_GetLocationAtDistance @ 149859560

UFunction * __cdecl Z_Construct_UFunction_UPCGPolyLineData_GetLocationAtDistance(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGPolyLineData_GetLocationAtDistance_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 1498595a0

void * __thiscall
FPCGDataTypeInfoVirtualTexture::_scalar_deleting_destructor_
          (FPCGDataTypeInfoVirtualTexture *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UFunction_UPCGPolyLineData_GetNumSegments @ 149859690

UFunction * __cdecl Z_Construct_UFunction_UPCGPolyLineData_GetNumSegments(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGPolyLineData_GetNumSegments_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UPCGPolygon2DData_NoRegister @ 1498596d0

UClass * __cdecl Z_Construct_UClass_UPCGPolygon2DData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGPolygon2DData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGPolygon2DData",
               &Z_Registration_Info_UClass_UPCGPolygon2DData.InnerSingleton,
               UPCGPolygon2DData::StaticRegisterNativesUPCGPolygon2DData,0x260,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGPolygon2DData>,
               InternalVTableHelperCtorCaller<UPCGPolygon2DData>,local_res8,
               UPCGPolyLineData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGPolygon2DData.InnerSingleton;
}

// `scalar_deleting_destructor' @ 149859820

void * __thiscall
FPCGDataTypeInfoPolyline::_scalar_deleting_destructor_(FPCGDataTypeInfoPolyline *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UFunction_UPCGPolyLineData_GetNumVertices @ 149859850

UFunction * __cdecl Z_Construct_UFunction_UPCGPolyLineData_GetNumVertices(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGPolyLineData_GetNumVertices_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 149859a50

void * __thiscall
FPCGDataTypeInfoPolygon2D::_scalar_deleting_destructor_
          (FPCGDataTypeInfoPolygon2D *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UFunction_UPCGPolyLineData_GetSegmentLength @ 149859a80

UFunction * __cdecl Z_Construct_UFunction_UPCGPolyLineData_GetSegmentLength(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGPolyLineData_GetSegmentLength_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGPolyLineData_GetTangentsAtSegmentStart @ 149859c40

UFunction * __cdecl Z_Construct_UFunction_UPCGPolyLineData_GetTangentsAtSegmentStart(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGPolyLineData_GetTangentsAtSegmentStart_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGPolyLineData_GetTransform @ 149859c80

UFunction * __cdecl Z_Construct_UFunction_UPCGPolyLineData_GetTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGPolyLineData_GetTransform_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 149859d70

void * __thiscall
FPCGDataTypeInfoDynamicMesh::_scalar_deleting_destructor_
          (FPCGDataTypeInfoDynamicMesh *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UFunction_UPCGPolyLineData_GetTransformAtAlpha @ 149859e00

UFunction * __cdecl Z_Construct_UFunction_UPCGPolyLineData_GetTransformAtAlpha(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGPolyLineData_GetTransformAtAlpha_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 149859f00

void __cdecl
Z_Construct_UFunction_UPCGPolyLineData_IsClosed_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UPCGPolyLineData_IsClosed @ 14985a090

UFunction * __cdecl Z_Construct_UFunction_UPCGPolyLineData_IsClosed(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UPCGPolyLineData_IsClosed_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14985a190

void * __thiscall
FPCGDataTypeInfoLandscapeSpline::_scalar_deleting_destructor_
          (FPCGDataTypeInfoLandscapeSpline *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// NewProp_bWorldSpace_SetBit @ 14985a1c0

void __cdecl
Z_Construct_UFunction_UPCGPolyLineData_K2_GetTransformAtDistance_Statics::NewProp_bWorldSpace_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x48) = 1;
  return;
}

// Z_Construct_UFunction_UPCGPolyLineData_K2_GetTransformAtDistance @ 14985a320

UFunction * __cdecl Z_Construct_UFunction_UPCGPolyLineData_K2_GetTransformAtDistance(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGPolyLineData_K2_GetTransformAtDistance_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGPolyLineData_WriteMetadataToPoint @ 14985a400

UFunction * __cdecl Z_Construct_UFunction_UPCGPolyLineData_WriteMetadataToPoint(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGPolyLineData_WriteMetadataToPoint_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14985a440

void * __thiscall
FPCGDataTypeInfoStaticMeshResource::_scalar_deleting_destructor_
          (FPCGDataTypeInfoStaticMeshResource *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UPCGDynamicMeshData @ 14985a530

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGDynamicMeshData(void)

{
  if (Z_Registration_Info_UClass_UPCGDynamicMeshData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGDynamicMeshData.OuterSingleton,
               &Z_Construct_UClass_UPCGDynamicMeshData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGDynamicMeshData.OuterSingleton;
}

// Z_Construct_UScriptStruct_FPCGDataTypeInfoConcrete @ 14985a570

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGDataTypeInfoConcrete(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoConcrete.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoConcrete.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGDataTypeInfoConcrete_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoConcrete.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoConcrete.InnerSingleton;
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

// NewStructOps @ 14985a5f0

void * __cdecl Z_Construct_UScriptStruct_FPCGDataTypeInfoDynamicMesh_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGDataTypeInfoDynamicMesh,&UE::CoreUObject::Private::Construct<FPCGDataTypeInfoDynamicMesh>,&UE::CoreUObject::Private::ConstructForTests<FPCGDataTypeInfoDynamicMesh>,&UE::CoreUObject::Private::Destruct<FPCGDataTypeInfoDynamicMesh>,&UE::CoreUObject::Private::Copy<FPCGDataTypeInfoDynamicMesh>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UPCGStaticMeshResourceData @ 14985a630

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGStaticMeshResourceData(void)

{
  if (Z_Registration_Info_UClass_UPCGStaticMeshResourceData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGStaticMeshResourceData.OuterSingleton,
               &Z_Construct_UClass_UPCGStaticMeshResourceData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGStaticMeshResourceData.OuterSingleton;
}

// NewStructOps @ 14985a670

void * __cdecl
Z_Construct_UScriptStruct_FPCGDataTypeInfoStaticMeshResource_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGDataTypeInfoStaticMeshResource,&UE::CoreUObject::Private::Construct<FPCGDataTypeInfoStaticMeshResource>,&UE::CoreUObject::Private::ConstructForTests<FPCGDataTypeInfoStaticMeshResource>,&UE::CoreUObject::Private::Destruct<FPCGDataTypeInfoStaticMeshResource>,&UE::CoreUObject::Private::Copy<FPCGDataTypeInfoStaticMeshResource>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UPCGLandscapeSplineData @ 14985a700

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGLandscapeSplineData(void)

{
  if (Z_Registration_Info_UClass_UPCGLandscapeSplineData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGLandscapeSplineData.OuterSingleton,
               &Z_Construct_UClass_UPCGLandscapeSplineData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGLandscapeSplineData.OuterSingleton;
}

// Z_Construct_UClass_UPCGPolyLineData @ 14985a740

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGPolyLineData(void)

{
  if (Z_Registration_Info_UClass_UPCGPolyLineData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGPolyLineData.OuterSingleton,
               &Z_Construct_UClass_UPCGPolyLineData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGPolyLineData.OuterSingleton;
}

// Z_Construct_UScriptStruct_FPCGDataTypeInfoPolyline @ 14985a780

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGDataTypeInfoPolyline(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoPolyline.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoPolyline.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGDataTypeInfoPolyline_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoPolyline.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoPolyline.InnerSingleton;
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

// NewStructOps @ 14985a800

void * __cdecl Z_Construct_UScriptStruct_FPCGDataTypeInfoLandscapeSpline_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGDataTypeInfoLandscapeSpline,&UE::CoreUObject::Private::Construct<FPCGDataTypeInfoLandscapeSpline>,&UE::CoreUObject::Private::ConstructForTests<FPCGDataTypeInfoLandscapeSpline>,&UE::CoreUObject::Private::Destruct<FPCGDataTypeInfoLandscapeSpline>,&UE::CoreUObject::Private::Copy<FPCGDataTypeInfoLandscapeSpline>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bCanTakeOwnership_SetBit @ 14985a840

void __cdecl
Z_Construct_UFunction_UPCGDynamicMeshData_K2_Initialize_Statics::NewProp_bCanTakeOwnership_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UFunction_UPCGDynamicMeshData_K2_Initialize @ 14985a860

UFunction * __cdecl Z_Construct_UFunction_UPCGDynamicMeshData_K2_Initialize(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGDynamicMeshData_K2_Initialize_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UPCGCollisionShapeData @ 14985a8a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGCollisionShapeData(void)

{
  if (Z_Registration_Info_UClass_UPCGCollisionShapeData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGCollisionShapeData.OuterSingleton,
               &Z_Construct_UClass_UPCGCollisionShapeData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGCollisionShapeData.OuterSingleton;
}

// Z_Construct_UClass_UPCGSpatialDataWithPointCache @ 14985a8e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGSpatialDataWithPointCache(void)

{
  if (Z_Registration_Info_UClass_UPCGSpatialDataWithPointCache.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGSpatialDataWithPointCache.OuterSingleton,
               &Z_Construct_UClass_UPCGSpatialDataWithPointCache_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGSpatialDataWithPointCache.OuterSingleton;
}

// Z_Construct_UFunction_UPCGDynamicMeshData_SetMaterials @ 14985a970

UFunction * __cdecl Z_Construct_UFunction_UPCGDynamicMeshData_SetMaterials(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGDynamicMeshData_SetMaterials_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UPCGPrimitiveData @ 14985a9c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGPrimitiveData(void)

{
  if (Z_Registration_Info_UClass_UPCGPrimitiveData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGPrimitiveData.OuterSingleton,
               &Z_Construct_UClass_UPCGPrimitiveData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGPrimitiveData.OuterSingleton;
}

// NewStructOps @ 14985aa00

void * __cdecl Z_Construct_UScriptStruct_FPCGDataTypeInfoSurface_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGDataTypeInfoSurface,&UE::CoreUObject::Private::Construct<FPCGDataTypeInfoSurface>,&UE::CoreUObject::Private::ConstructForTests<FPCGDataTypeInfoSurface>,&UE::CoreUObject::Private::Destruct<FPCGDataTypeInfoSurface>,&UE::CoreUObject::Private::Copy<FPCGDataTypeInfoSurface>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14985aa40

void * __cdecl Z_Construct_UScriptStruct_FPCGDataTypeInfoPrimitive_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGDataTypeInfoPrimitive,&UE::CoreUObject::Private::Construct<FPCGDataTypeInfoPrimitive>,&UE::CoreUObject::Private::ConstructForTests<FPCGDataTypeInfoPrimitive>,&UE::CoreUObject::Private::Destruct<FPCGDataTypeInfoPrimitive>,&UE::CoreUObject::Private::Copy<FPCGDataTypeInfoPrimitive>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FPCGDataTypeBaseId @ 14985aa80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGDataTypeBaseId(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeBaseId.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGDataTypeBaseId.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGDataTypeBaseId_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeBaseId.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGDataTypeBaseId.InnerSingleton;
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

// NewStructOps @ 14985ab00

void * __cdecl Z_Construct_UScriptStruct_FPCGDataTypeInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGDataTypeInfo,&UE::CoreUObject::Private::Construct<FPCGDataTypeInfo>,&UE::CoreUObject::Private::ConstructForTests<FPCGDataTypeInfo>,&UE::CoreUObject::Private::Destruct<FPCGDataTypeInfo>,&UE::CoreUObject::Private::Copy<FPCGDataTypeInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14985ab40

void * __cdecl Z_Construct_UScriptStruct_FPCGDataTypeBaseId_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGDataTypeBaseId,&UE::CoreUObject::Private::Construct<FPCGDataTypeBaseId>,&UE::CoreUObject::Private::ConstructForTests<FPCGDataTypeBaseId>,&UE::CoreUObject::Private::Destruct<FPCGDataTypeBaseId>,&UE::CoreUObject::Private::Copy<FPCGDataTypeBaseId>,&UE::CoreUObject::Private::GetStructTypeHash<FPCGDataTypeBaseId>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UPCGVirtualTextureData @ 14985ab80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGVirtualTextureData(void)

{
  if (Z_Registration_Info_UClass_UPCGVirtualTextureData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGVirtualTextureData.OuterSingleton,
               &Z_Construct_UClass_UPCGVirtualTextureData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGVirtualTextureData.OuterSingleton;
}

// Z_Construct_UScriptStruct_FPCGDataTypeInfoSpatial @ 14985abc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGDataTypeInfoSpatial(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoSpatial.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoSpatial.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGDataTypeInfoSpatial_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoSpatial.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoSpatial.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPCGInitializeFromDataParams @ 14985ac40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGInitializeFromDataParams(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGInitializeFromDataParams.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGInitializeFromDataParams.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGInitializeFromDataParams_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGInitializeFromDataParams.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGInitializeFromDataParams.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPCGPointDataCache @ 14985ace0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGPointDataCache(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGPointDataCache.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGPointDataCache.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGPointDataCache_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGPointDataCache.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGPointDataCache.InnerSingleton;
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

// NewStructOps @ 14985ad60

void * __cdecl Z_Construct_UScriptStruct_FPCGDataTypeInfoVirtualTexture_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGDataTypeInfoVirtualTexture,&UE::CoreUObject::Private::Construct<FPCGDataTypeInfoVirtualTexture>,&UE::CoreUObject::Private::ConstructForTests<FPCGDataTypeInfoVirtualTexture>,&UE::CoreUObject::Private::Destruct<FPCGDataTypeInfoVirtualTexture>,&UE::CoreUObject::Private::Copy<FPCGDataTypeInfoVirtualTexture>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14985ada0

void * __cdecl Z_Construct_UScriptStruct_FPCGDataTypeInfoOther_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGDataTypeInfoOther,&UE::CoreUObject::Private::Construct<FPCGDataTypeInfoOther>,&UE::CoreUObject::Private::ConstructForTests<FPCGDataTypeInfoOther>,&UE::CoreUObject::Private::Destruct<FPCGDataTypeInfoOther>,&UE::CoreUObject::Private::Copy<FPCGDataTypeInfoOther>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bInheritMetadata_SetBit @ 14985ae00

void __cdecl
Z_Construct_UScriptStruct_FPCGInitializeFromDataParams_Statics::NewProp_bInheritMetadata_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bInheritAttributes_SetBit @ 14985ae20

void __cdecl
Z_Construct_UScriptStruct_FPCGInitializeFromDataParams_Statics::NewProp_bInheritAttributes_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// NewProp_bInheritSpatialData_SetBit @ 14985ae30

void __cdecl
Z_Construct_UScriptStruct_FPCGInitializeFromDataParams_Statics::NewProp_bInheritSpatialData_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  return;
}

// NewStructOps @ 14985ae40

void * __cdecl Z_Construct_UScriptStruct_FPCGInitializeFromDataParams_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGInitializeFromDataParams,&UE::CoreUObject::Private::Construct<FPCGInitializeFromDataParams>,&UE::CoreUObject::Private::ConstructForTests<FPCGInitializeFromDataParams>,&UE::CoreUObject::Private::Destruct<FPCGInitializeFromDataParams>,&UE::CoreUObject::Private::Copy<FPCGInitializeFromDataParams>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UPCGCollisionWrapperData @ 14985ae90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGCollisionWrapperData(void)

{
  if (Z_Registration_Info_UClass_UPCGCollisionWrapperData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGCollisionWrapperData.OuterSingleton,
               &Z_Construct_UClass_UPCGCollisionWrapperData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGCollisionWrapperData.OuterSingleton;
}

// Z_Construct_UClass_UPCGSpatialData @ 14985aed0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGSpatialData(void)

{
  if (Z_Registration_Info_UClass_UPCGSpatialData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGSpatialData.OuterSingleton,
               &Z_Construct_UClass_UPCGSpatialData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGSpatialData.OuterSingleton;
}

// Z_Construct_UEnum_PCG_EPCGCollisionQueryFlag @ 14985af10

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGCollisionQueryFlag(void)

{
  if (Z_Registration_Info_UEnum_EPCGCollisionQueryFlag.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGCollisionQueryFlag.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGCollisionQueryFlag_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGCollisionQueryFlag.InnerSingleton;
}

// EPCGCollisionQueryFlag_StaticEnum @ 14985af50

UEnum * __cdecl EPCGCollisionQueryFlag_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGCollisionQueryFlag.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGCollisionQueryFlag.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGCollisionQueryFlag,(UObject *)pUVar1,
                       L"EPCGCollisionQueryFlag");
  }
  return Z_Registration_Info_UEnum_EPCGCollisionQueryFlag.OuterSingleton;
}

// NewStructOps @ 14985af90

void * __cdecl Z_Construct_UScriptStruct_FPCGDataTypeInfoSpatial_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGDataTypeInfoSpatial,&UE::CoreUObject::Private::Construct<FPCGDataTypeInfoSpatial>,&UE::CoreUObject::Private::ConstructForTests<FPCGDataTypeInfoSpatial>,&UE::CoreUObject::Private::Destruct<FPCGDataTypeInfoSpatial>,&UE::CoreUObject::Private::Copy<FPCGDataTypeInfoSpatial>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// operator()<Chaos::TBox<double,3>,Chaos::TRigidTransform<double,3>_> @ 14985bc40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
``UPCGCollisionWrapperData::SamplePoint'::__l2::<lambda_1>::operator()'::__l12::<lambda_1>::
operator()<Chaos::TBox<double,3>,Chaos::TRigidTransform<double,3>_>
          (void *this,TBox<double,3> *param_1,TRigidTransform<double,3> *param_2)

{
  bool bVar1;
  undefined1 auStackY_a8 [32];
  double local_78 [2];
  double local_68 [2];
  double local_58 [2];
  double local_48 [2];
  double local_38 [2];
  double local_28 [2];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_78 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_68 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_58 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_48 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_38 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_28 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  bVar1 = Chaos::OverlapQuery<Chaos::TBox<double,3>_>
                    (*(FImplicitObject **)(**(longlong **)this + 0x10),
                     (TRigidTransform<double,3> *)local_78,param_1,param_2,0.0,(FMTDInfo *)0x0);
  return bVar1;
}

// operator()<Chaos::TBox<double,3>,Chaos::TRigidTransform<double,3>_> @ 14985bcf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
``UPCGCollisionWrapperData::SamplePoint'::__l2::<lambda_1>::operator()'::__l17::<lambda_2>::
operator()<Chaos::TBox<double,3>,Chaos::TRigidTransform<double,3>_>
          (void *this,TBox<double,3> *param_1,TRigidTransform<double,3> *param_2)

{
  bool bVar1;
  FImplicitObject *pFVar2;
  undefined1 auStackY_a8 [32];
  double local_78 [2];
  double local_68 [2];
  double local_58 [2];
  double local_48 [2];
  double local_38 [2];
  double local_28 [2];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_78 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_68 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_58 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_48 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_38 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_28 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  pFVar2 = FPhysicsShapeAdapter_Chaos::GetGeometry(*(FPhysicsShapeAdapter_Chaos **)this);
  bVar1 = Chaos::OverlapQuery<Chaos::TBox<double,3>_>
                    (pFVar2,(TRigidTransform<double,3> *)local_78,param_1,param_2,0.0,
                     (FMTDInfo *)0x0);
  return bVar1;
}

// operator()<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::TRigidTransform<double,3>_> @ 14985beb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
``UPCGCollisionWrapperData::SamplePoint'::__l2::<lambda_1>::operator()'::__l12::<lambda_1>::
operator()<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::TRigidTransform<double,3>_>
          (void *this,TImplicitObjectScaled<Chaos::TBox<double,3>,1> *param_1,
          TRigidTransform<double,3> *param_2)

{
  bool bVar1;
  undefined1 auStackY_a8 [32];
  double local_78 [2];
  double local_68 [2];
  double local_58 [2];
  double local_48 [2];
  double local_38 [2];
  double local_28 [2];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_78 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_68 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_58 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_48 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_38 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_28 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  bVar1 = Chaos::OverlapQuery<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>
                    (*(FImplicitObject **)(**(longlong **)this + 0x10),
                     (TRigidTransform<double,3> *)local_78,param_1,param_2,0.0,(FMTDInfo *)0x0);
  return bVar1;
}

// operator()<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::TRigidTransform<double,3>_> @ 14985bf60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
``UPCGCollisionWrapperData::SamplePoint'::__l2::<lambda_1>::operator()'::__l17::<lambda_2>::
operator()<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::TRigidTransform<double,3>_>
          (void *this,TImplicitObjectScaled<Chaos::TBox<double,3>,1> *param_1,
          TRigidTransform<double,3> *param_2)

{
  bool bVar1;
  FImplicitObject *pFVar2;
  undefined1 auStackY_a8 [32];
  double local_78 [2];
  double local_68 [2];
  double local_58 [2];
  double local_48 [2];
  double local_38 [2];
  double local_28 [2];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_78 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_68 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_58 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_48 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_38 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_28 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  pFVar2 = FPhysicsShapeAdapter_Chaos::GetGeometry(*(FPhysicsShapeAdapter_Chaos **)this);
  bVar1 = Chaos::OverlapQuery<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>
                    (pFVar2,(TRigidTransform<double,3> *)local_78,param_1,param_2,0.0,
                     (FMTDInfo *)0x0);
  return bVar1;
}

// operator()<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::TRigidTransform<double,3>_> @ 14985c120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
``UPCGCollisionWrapperData::SamplePoint'::__l2::<lambda_1>::operator()'::__l12::<lambda_1>::
operator()<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::TRigidTransform<double,3>_>
          (void *this,TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *param_1,
          TRigidTransform<double,3> *param_2)

{
  bool bVar1;
  undefined1 auStackY_a8 [32];
  double local_78 [2];
  double local_68 [2];
  double local_58 [2];
  double local_48 [2];
  double local_38 [2];
  double local_28 [2];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_78 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_68 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_58 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_48 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_38 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_28 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  bVar1 = Chaos::OverlapQuery<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>
                    (*(FImplicitObject **)(**(longlong **)this + 0x10),
                     (TRigidTransform<double,3> *)local_78,param_1,param_2,0.0,(FMTDInfo *)0x0);
  return bVar1;
}

// operator()<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::TRigidTransform<double,3>_> @ 14985c1d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
``UPCGCollisionWrapperData::SamplePoint'::__l2::<lambda_1>::operator()'::__l17::<lambda_2>::
operator()<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::TRigidTransform<double,3>_>
          (void *this,TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *param_1,
          TRigidTransform<double,3> *param_2)

{
  bool bVar1;
  FImplicitObject *pFVar2;
  undefined1 auStackY_a8 [32];
  double local_78 [2];
  double local_68 [2];
  double local_58 [2];
  double local_48 [2];
  double local_38 [2];
  double local_28 [2];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_78 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_68 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_58 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_48 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_38 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_28 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  pFVar2 = FPhysicsShapeAdapter_Chaos::GetGeometry(*(FPhysicsShapeAdapter_Chaos **)this);
  bVar1 = Chaos::OverlapQuery<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>
                    (pFVar2,(TRigidTransform<double,3> *)local_78,param_1,param_2,0.0,
                     (FMTDInfo *)0x0);
  return bVar1;
}

// operator()<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::TRigidTransform<double,3>_> @ 14985c390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
``UPCGCollisionWrapperData::SamplePoint'::__l2::<lambda_1>::operator()'::__l12::<lambda_1>::
operator()<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::TRigidTransform<double,3>_>
          (void *this,TImplicitObjectScaled<Chaos::FCapsule,1> *param_1,
          TRigidTransform<double,3> *param_2)

{
  bool bVar1;
  undefined1 auStackY_a8 [32];
  double local_78 [2];
  double local_68 [2];
  double local_58 [2];
  double local_48 [2];
  double local_38 [2];
  double local_28 [2];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_78 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_68 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_58 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_48 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_38 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_28 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  bVar1 = Chaos::OverlapQuery<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>
                    (*(FImplicitObject **)(**(longlong **)this + 0x10),
                     (TRigidTransform<double,3> *)local_78,param_1,param_2,0.0,(FMTDInfo *)0x0);
  return bVar1;
}

// operator()<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::TRigidTransform<double,3>_> @ 14985c440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
``UPCGCollisionWrapperData::SamplePoint'::__l2::<lambda_1>::operator()'::__l17::<lambda_2>::
operator()<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::TRigidTransform<double,3>_>
          (void *this,TImplicitObjectScaled<Chaos::FCapsule,1> *param_1,
          TRigidTransform<double,3> *param_2)

{
  bool bVar1;
  FImplicitObject *pFVar2;
  undefined1 auStackY_a8 [32];
  double local_78 [2];
  double local_68 [2];
  double local_58 [2];
  double local_48 [2];
  double local_38 [2];
  double local_28 [2];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_78 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_68 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_58 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_48 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_38 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_28 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  pFVar2 = FPhysicsShapeAdapter_Chaos::GetGeometry(*(FPhysicsShapeAdapter_Chaos **)this);
  bVar1 = Chaos::OverlapQuery<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>
                    (pFVar2,(TRigidTransform<double,3> *)local_78,param_1,param_2,0.0,
                     (FMTDInfo *)0x0);
  return bVar1;
}

// operator()<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::TRigidTransform<double,3>_> @ 14985c600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
``UPCGCollisionWrapperData::SamplePoint'::__l2::<lambda_1>::operator()'::__l12::<lambda_1>::
operator()<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::TRigidTransform<double,3>_>
          (void *this,TImplicitObjectScaled<Chaos::FConvex,1> *param_1,
          TRigidTransform<double,3> *param_2)

{
  bool bVar1;
  undefined1 auStackY_a8 [32];
  double local_78 [2];
  double local_68 [2];
  double local_58 [2];
  double local_48 [2];
  double local_38 [2];
  double local_28 [2];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_78 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_68 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_58 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_48 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_38 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_28 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  bVar1 = Chaos::OverlapQuery<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>
                    (*(FImplicitObject **)(**(longlong **)this + 0x10),
                     (TRigidTransform<double,3> *)local_78,param_1,param_2,0.0,(FMTDInfo *)0x0);
  return bVar1;
}

// operator()<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::TRigidTransform<double,3>_> @ 14985c6b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
``UPCGCollisionWrapperData::SamplePoint'::__l2::<lambda_1>::operator()'::__l17::<lambda_2>::
operator()<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::TRigidTransform<double,3>_>
          (void *this,TImplicitObjectScaled<Chaos::FConvex,1> *param_1,
          TRigidTransform<double,3> *param_2)

{
  bool bVar1;
  FImplicitObject *pFVar2;
  undefined1 auStackY_a8 [32];
  double local_78 [2];
  double local_68 [2];
  double local_58 [2];
  double local_48 [2];
  double local_38 [2];
  double local_28 [2];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_78 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_68 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_58 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_48 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_38 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_28 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  pFVar2 = FPhysicsShapeAdapter_Chaos::GetGeometry(*(FPhysicsShapeAdapter_Chaos **)this);
  bVar1 = Chaos::OverlapQuery<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>
                    (pFVar2,(TRigidTransform<double,3> *)local_78,param_1,param_2,0.0,
                     (FMTDInfo *)0x0);
  return bVar1;
}

// operator()<Chaos::TSphere<double,3>,Chaos::TRigidTransform<double,3>_> @ 14985c870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
``UPCGCollisionWrapperData::SamplePoint'::__l2::<lambda_1>::operator()'::__l12::<lambda_1>::
operator()<Chaos::TSphere<double,3>,Chaos::TRigidTransform<double,3>_>
          (void *this,TSphere<double,3> *param_1,TRigidTransform<double,3> *param_2)

{
  bool bVar1;
  undefined1 auStackY_a8 [32];
  double local_78 [2];
  double local_68 [2];
  double local_58 [2];
  double local_48 [2];
  double local_38 [2];
  double local_28 [2];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_78 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_68 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_58 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_48 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_38 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_28 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  bVar1 = Chaos::OverlapQuery<Chaos::TSphere<double,3>_>
                    (*(FImplicitObject **)(**(longlong **)this + 0x10),
                     (TRigidTransform<double,3> *)local_78,param_1,param_2,0.0,(FMTDInfo *)0x0);
  return bVar1;
}

// operator()<Chaos::TSphere<double,3>,Chaos::TRigidTransform<double,3>_> @ 14985c920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
``UPCGCollisionWrapperData::SamplePoint'::__l2::<lambda_1>::operator()'::__l17::<lambda_2>::
operator()<Chaos::TSphere<double,3>,Chaos::TRigidTransform<double,3>_>
          (void *this,TSphere<double,3> *param_1,TRigidTransform<double,3> *param_2)

{
  bool bVar1;
  FImplicitObject *pFVar2;
  undefined1 auStackY_a8 [32];
  double local_78 [2];
  double local_68 [2];
  double local_58 [2];
  double local_48 [2];
  double local_38 [2];
  double local_28 [2];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_78 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_68 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_58 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_48 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_38 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_28 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  pFVar2 = FPhysicsShapeAdapter_Chaos::GetGeometry(*(FPhysicsShapeAdapter_Chaos **)this);
  bVar1 = Chaos::OverlapQuery<Chaos::TSphere<double,3>_>
                    (pFVar2,(TRigidTransform<double,3> *)local_78,param_1,param_2,0.0,
                     (FMTDInfo *)0x0);
  return bVar1;
}

// operator()<Chaos::FCapsule,Chaos::TRigidTransform<double,3>_> @ 14985cae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
``UPCGCollisionWrapperData::SamplePoint'::__l2::<lambda_1>::operator()'::__l12::<lambda_1>::
operator()<Chaos::FCapsule,Chaos::TRigidTransform<double,3>_>
          (void *this,FCapsule *param_1,TRigidTransform<double,3> *param_2)

{
  bool bVar1;
  undefined1 auStackY_a8 [32];
  double local_78 [2];
  double local_68 [2];
  double local_58 [2];
  double local_48 [2];
  double local_38 [2];
  double local_28 [2];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_78 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_68 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_58 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_48 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_38 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_28 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  bVar1 = Chaos::OverlapQuery<Chaos::FCapsule>
                    (*(FImplicitObject **)(**(longlong **)this + 0x10),
                     (TRigidTransform<double,3> *)local_78,param_1,param_2,0.0,(FMTDInfo *)0x0);
  return bVar1;
}

// operator()<Chaos::FCapsule,Chaos::TRigidTransform<double,3>_> @ 14985cb90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
``UPCGCollisionWrapperData::SamplePoint'::__l2::<lambda_1>::operator()'::__l17::<lambda_2>::
operator()<Chaos::FCapsule,Chaos::TRigidTransform<double,3>_>
          (void *this,FCapsule *param_1,TRigidTransform<double,3> *param_2)

{
  bool bVar1;
  FImplicitObject *pFVar2;
  undefined1 auStackY_a8 [32];
  double local_78 [2];
  double local_68 [2];
  double local_58 [2];
  double local_48 [2];
  double local_38 [2];
  double local_28 [2];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_78 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_68 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_58 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_48 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_38 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_28 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  pFVar2 = FPhysicsShapeAdapter_Chaos::GetGeometry(*(FPhysicsShapeAdapter_Chaos **)this);
  bVar1 = Chaos::OverlapQuery<Chaos::FCapsule>
                    (pFVar2,(TRigidTransform<double,3> *)local_78,param_1,param_2,0.0,
                     (FMTDInfo *)0x0);
  return bVar1;
}

// operator()<Chaos::FConvex,Chaos::TRigidTransform<double,3>_> @ 14985cd50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
``UPCGCollisionWrapperData::SamplePoint'::__l2::<lambda_1>::operator()'::__l12::<lambda_1>::
operator()<Chaos::FConvex,Chaos::TRigidTransform<double,3>_>
          (void *this,FConvex *param_1,TRigidTransform<double,3> *param_2)

{
  bool bVar1;
  undefined1 auStackY_a8 [32];
  double local_78 [2];
  double local_68 [2];
  double local_58 [2];
  double local_48 [2];
  double local_38 [2];
  double local_28 [2];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_78 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_68 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_58 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_48 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_38 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_28 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  bVar1 = Chaos::OverlapQuery<Chaos::FConvex>
                    (*(FImplicitObject **)(**(longlong **)this + 0x10),
                     (TRigidTransform<double,3> *)local_78,param_1,param_2,0.0,(FMTDInfo *)0x0);
  return bVar1;
}

// operator()<Chaos::FConvex,Chaos::TRigidTransform<double,3>_> @ 14985ce00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
``UPCGCollisionWrapperData::SamplePoint'::__l2::<lambda_1>::operator()'::__l17::<lambda_2>::
operator()<Chaos::FConvex,Chaos::TRigidTransform<double,3>_>
          (void *this,FConvex *param_1,TRigidTransform<double,3> *param_2)

{
  bool bVar1;
  FImplicitObject *pFVar2;
  undefined1 auStackY_a8 [32];
  double local_78 [2];
  double local_68 [2];
  double local_58 [2];
  double local_48 [2];
  double local_38 [2];
  double local_28 [2];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_78 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_68 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_58 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_48 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_38 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_28 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  pFVar2 = FPhysicsShapeAdapter_Chaos::GetGeometry(*(FPhysicsShapeAdapter_Chaos **)this);
  bVar1 = Chaos::OverlapQuery<Chaos::FConvex>
                    (pFVar2,(TRigidTransform<double,3> *)local_78,param_1,param_2,0.0,
                     (FMTDInfo *)0x0);
  return bVar1;
}

// AddressOffset<void_*> @ 14985d1f0

void __cdecl
PCGPropertyAccessor::AddressOffset<void_*>
          (TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *param_1,
          TArrayView<void_*,int> *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  longlong *plVar11;
  longlong local_res18;
  
  iVar5 = param_1->ArrayNum;
  uVar10 = 0;
  if (0 < iVar5) {
    local_res18 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar10 < iVar5) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      plVar1 = *(longlong **)((param_1->AllocatorInstance).Data + local_res18);
      if ((plVar1 == (longlong *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Property",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGPropertyAccessor.h"
                             ,0x1b,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((int)uVar10 < param_1->ArrayNum + -1) {
        if ((plVar1 == (longlong *)0x0) ||
           (plVar11 = plVar1, (*(uint *)(plVar1[1] + 0x18) >> 0x10 & 1) == 0)) {
          plVar11 = (longlong *)0x0;
        }
        iVar5 = param_2->ArrayNum;
        if (plVar11 == (longlong *)0x0) goto LAB_14985d3d5;
        uVar8 = 0;
        if (0 < iVar5) {
          lVar9 = 0;
          do {
            pcVar3 = *(code **)(*plVar11 + 0x208);
            uVar7 = 0;
            if ((int)uVar8 < iVar5) {
              uVar7 = ~uVar8 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar6 = (*pcVar3)(plVar11,*(undefined8 *)(lVar9 + (longlong)param_2->DataPtr),0);
            uVar7 = 0;
            if ((int)uVar8 < param_2->ArrayNum) {
              uVar7 = ~uVar8 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar8 = uVar8 + 1;
            *(undefined8 *)(lVar9 + (longlong)param_2->DataPtr) = uVar6;
            lVar9 = lVar9 + 8;
            iVar5 = param_2->ArrayNum;
          } while ((int)uVar8 < iVar5);
        }
      }
      else {
        iVar5 = param_2->ArrayNum;
LAB_14985d3d5:
        uVar8 = 0;
        if (0 < iVar5) {
          lVar9 = 0;
          do {
            uVar7 = 0;
            if ((int)uVar8 < iVar5) {
              uVar7 = ~uVar8 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            lVar2 = *(longlong *)(lVar9 + (longlong)param_2->DataPtr);
            if (((int)plVar1[6] < 1) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
               , bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if ((lVar2 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ContainerPtr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2de,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar5 = *(int *)((longlong)plVar1 + 0x44);
            uVar7 = 0;
            if ((int)uVar8 < param_2->ArrayNum) {
              uVar7 = ~uVar8 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar8 = uVar8 + 1;
            *(longlong *)(lVar9 + (longlong)param_2->DataPtr) = iVar5 + lVar2;
            lVar9 = lVar9 + 8;
            iVar5 = param_2->ArrayNum;
          } while ((int)uVar8 < iVar5);
        }
      }
      local_res18 = local_res18 + 8;
      uVar10 = uVar10 + 1;
      iVar5 = param_1->ArrayNum;
    } while ((int)uVar10 < iVar5);
  }
  return;
}

// AddressOffset<void_const_*> @ 14985d550

void __cdecl
PCGPropertyAccessor::AddressOffset<void_const_*>
          (TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *param_1,
          TArrayView<void_const_*,int> *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  longlong *plVar11;
  longlong local_res18;
  
  iVar5 = param_1->ArrayNum;
  uVar10 = 0;
  if (0 < iVar5) {
    local_res18 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar10 < iVar5) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      plVar1 = *(longlong **)((param_1->AllocatorInstance).Data + local_res18);
      if ((plVar1 == (longlong *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Property",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGPropertyAccessor.h"
                             ,0x1b,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((int)uVar10 < param_1->ArrayNum + -1) {
        if ((plVar1 == (longlong *)0x0) ||
           (plVar11 = plVar1, (*(uint *)(plVar1[1] + 0x18) >> 0x10 & 1) == 0)) {
          plVar11 = (longlong *)0x0;
        }
        iVar5 = param_2->ArrayNum;
        if (plVar11 == (longlong *)0x0) goto LAB_14985d735;
        uVar8 = 0;
        if (0 < iVar5) {
          lVar9 = 0;
          do {
            pcVar3 = *(code **)(*plVar11 + 0x208);
            uVar7 = 0;
            if ((int)uVar8 < iVar5) {
              uVar7 = ~uVar8 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar6 = (*pcVar3)(plVar11,*(undefined8 *)(lVar9 + (longlong)param_2->DataPtr),0);
            uVar7 = 0;
            if ((int)uVar8 < param_2->ArrayNum) {
              uVar7 = ~uVar8 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar8 = uVar8 + 1;
            *(undefined8 *)(lVar9 + (longlong)param_2->DataPtr) = uVar6;
            lVar9 = lVar9 + 8;
            iVar5 = param_2->ArrayNum;
          } while ((int)uVar8 < iVar5);
        }
      }
      else {
        iVar5 = param_2->ArrayNum;
LAB_14985d735:
        uVar8 = 0;
        if (0 < iVar5) {
          lVar9 = 0;
          do {
            uVar7 = 0;
            if ((int)uVar8 < iVar5) {
              uVar7 = ~uVar8 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            lVar2 = *(longlong *)(lVar9 + (longlong)param_2->DataPtr);
            if (((int)plVar1[6] < 1) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
               , bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if ((lVar2 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ContainerPtr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2de,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar5 = *(int *)((longlong)plVar1 + 0x44);
            uVar7 = 0;
            if ((int)uVar8 < param_2->ArrayNum) {
              uVar7 = ~uVar8 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar8 = uVar8 + 1;
            *(longlong *)(lVar9 + (longlong)param_2->DataPtr) = iVar5 + lVar2;
            lVar9 = lVar9 + 8;
            iVar5 = param_2->ArrayNum;
          } while ((int)uVar8 < iVar5);
        }
      }
      local_res18 = local_res18 + 8;
      uVar10 = uVar10 + 1;
      iVar5 = param_1->ArrayNum;
    } while ((int)uVar10 < iVar5);
  }
  return;
}

// AllOf<TArray<FPCGDataTypeBaseId,TSizedDefaultAllocator<32>_>,`FPCGDataTypeIdentifier::IsValid'::__l2::<lambda_1>_> @ 14985d8b0

bool __cdecl
Algo::
AllOf<TArray<FPCGDataTypeBaseId,TSizedDefaultAllocator<32>_>,_FPCGDataTypeIdentifier::IsValid_::__l2::<lambda_1>_>
          (TArray<FPCGDataTypeBaseId,TSizedDefaultAllocator<32>_> *param_1,<lambda_1> param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FPCGDataTypeBaseId_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(longlong *)pFVar3 == 0) {
      return false;
    }
    pFVar3 = pFVar3 + 8;
  }
  return true;
}

// ApplyOnAccessorRange<FSoftObjectPath,`FPCGCollisionWrapper::Prepare'::__l2::<lambda_1>_&> @ 14985d920

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
PCGMetadataElementCommon::
ApplyOnAccessorRange<FSoftObjectPath,_FPCGCollisionWrapper::Prepare_::__l2::<lambda_1>_&>
          (IPCGAttributeAccessorKeys *param_1,IPCGAttributeAccessor *param_2,<lambda_1> *param_3,
          EPCGAttributeAccessorFlags param_4,int param_5,int param_6)

{
  int *piVar1;
  FPCGCollisionWrapper *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  ForElementType<FSoftObjectPath> FVar9;
  ForElementType<FSoftObjectPath> FVar10;
  int iVar11;
  undefined1 auStackY_20f8 [32];
  int local_20a8;
  int local_20a4;
  EPCGAttributeAccessorFlags local_20a0;
  int local_209c;
  IPCGAttributeAccessorKeys *local_2098;
  IPCGAttributeAccessor *local_2090;
  ForElementType<FSoftObjectPath> local_2088;
  int iStack_2080;
  undefined4 uStack_207c;
  TArrayView<FSoftObjectPath,int> local_2078;
  ForElementType<FSoftObjectPath> local_2068;
  int local_60;
  int local_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_20f8;
  local_20a0 = param_4;
  local_2098 = param_1;
  local_2090 = param_2;
  if (param_6 < 0) {
    param_6 = (**(code **)(param_1->_padding_ + 0x10))();
  }
  if (param_6 == 0) {
    bVar5 = false;
  }
  else {
    iVar11 = 0;
    local_2068.SecondaryData = (ForElementType<FSoftObjectPath>)0x0;
    local_60 = 0;
    local_5c = 0x100;
    if (param_5 < 1) {
      if (param_5 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_5);
      }
    }
    else {
      iVar7 = UE::Core::Private::
              ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftObjectPath>_>
                        (0x20,8,param_5,&local_2068,&local_60,&local_5c);
      FVar10 = (ForElementType<FSoftObjectPath>)&local_2068;
      if (local_2068.SecondaryData != (ForElementType<FSoftObjectPath>)0x0) {
        FVar10 = local_2068.SecondaryData;
      }
      DefaultConstructItems<FSoftObjectPath,int>
                ((FSoftObjectPath *)((longlong)iVar7 * 0x20 + (longlong)FVar10),param_5);
    }
    local_209c = (param_5 + -1 + param_6) / param_5;
    if (0 < local_209c) {
      local_20a4 = 0;
      do {
        iVar7 = local_20a4;
        iVar8 = param_5;
        if (param_6 < param_5) {
          iVar8 = param_6;
        }
        FVar10 = (ForElementType<FSoftObjectPath>)&local_2068;
        if (local_2068.SecondaryData != (ForElementType<FSoftObjectPath>)0x0) {
          FVar10 = local_2068.SecondaryData;
        }
        local_2088 = FVar10;
        iStack_2080 = iVar8;
        if ((iVar8 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        local_2078._12_4_ = uStack_207c;
        local_2078.ArrayNum = iStack_2080;
        local_2078.DataPtr = (FSoftObjectPath *)local_2088;
        bVar5 = IPCGAttributeAccessor::GetRange<FSoftObjectPath>
                          (local_2090,&local_2078,iVar7,local_2098,local_20a0);
        if (!bVar5) {
          bVar5 = false;
          goto LAB_14985dbd7;
        }
        FVar9 = (ForElementType<FSoftObjectPath>)((longlong)iVar8 * 0x20 + (longlong)FVar10);
        for (; FVar10 != FVar9; FVar10 = (ForElementType<FSoftObjectPath>)((longlong)FVar10 + 0x20))
        {
          pFVar2 = param_3->__this;
          if (*(longlong *)FVar10 == 0) {
            local_20a8 = -1;
          }
          else {
            local_20a8 = TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>::
                         AddUniqueImpl<FSoftObjectPath_const_&>
                                   (param_3->MeshPathsToLoad,(FSoftObjectPath *)FVar10);
          }
          pFVar3 = (pFVar2->IndexToBodyInstance).AllocatorInstance.Data;
          if (((pFVar3 <= (FScriptContainerElement *)&local_20a8) &&
              ((FScriptContainerElement *)&local_20a8 <
               pFVar3 + (longlong)(pFVar2->IndexToBodyInstance).ArrayMax * 4)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          iVar7 = (pFVar2->IndexToBodyInstance).ArrayNum;
          piVar1 = &(pFVar2->IndexToBodyInstance).ArrayMax;
          if (iVar7 == *piVar1) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&(pFVar2->IndexToBodyInstance).AllocatorInstance,piVar1);
          }
          (pFVar2->IndexToBodyInstance).ArrayNum = iVar7 + 1;
          *(int *)((pFVar2->IndexToBodyInstance).AllocatorInstance.Data + (longlong)iVar7 * 4) =
               local_20a8;
        }
        iVar11 = iVar11 + 1;
        local_20a4 = local_20a4 + param_5;
        param_6 = param_6 - param_5;
      } while (iVar11 < local_209c);
    }
    bVar5 = true;
LAB_14985dbd7:
    FVar10 = (ForElementType<FSoftObjectPath>)&local_2068;
    if (local_2068.SecondaryData != (ForElementType<FSoftObjectPath>)0x0) {
      FVar10 = local_2068.SecondaryData;
    }
    DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)FVar10,local_60);
    if (local_2068.SecondaryData != (ForElementType<FSoftObjectPath>)0x0) {
      FMemory::Free((void *)local_2068.SecondaryData);
    }
  }
  return bVar5;
}

// AsyncProcessingRangeEx<`FPCGSpatialDataProcessing::SampleBasedRangeProcessing<256,`UPCGIntersectionData::CreateAndFilterPointData'::__l2::<lambda_1>_&>'::__l2::<lambda_1>_&,`FPCGSpatialDataProcessing::SampleBasedRangeProcessing<256,`UPCGIntersectionData::CreateAndFilterPointData'::__l2::<lambda_1>_&>'::__l2::<lambda_2>_&,`FPCGSpatialDataProcessing::SampleBasedRangeProcessing<256,`UPCGIntersectionData::CreateAndFilterPointData'::__l2::<lambda_1>_&>'::__l2::<lambda_3>_&,`FPCGSpatialDataProcessing::SampleBasedRangeProcessing<256,`UPCGIntersectionData::CreateAndFilterPointData'::__l2::<lambda_1>_&>'::__l2::<lambda_4>_&> @ 14985dea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
FPCGAsync::
AsyncProcessingRangeEx<_FPCGSpatialDataProcessing::SampleBasedRangeProcessing<256,_UPCGIntersectionData::CreateAndFilterPointData_::__l2::<lambda_1>_&>_::__l2::<lambda_1>_&,_FPCGSpatialDataProcessing::SampleBasedRangeProcessing<256,_UPCGIntersectionData::CreateAndFilterPointData_::__l2::<lambda_1>_&>_::__l2::<lambda_2>_&,_FPCGSpatialDataProcessing::SampleBasedRangeProcessing<256,_UPCGIntersectionData::CreateAndFilterPointData_::__l2::<lambda_1>_&>_::__l2::<lambda_3>_&,_FPCGSpatialDataProcessing::SampleBasedRangeProcessing<256,_UPCGIntersectionData::CreateAndFilterPointData_::__l2::<lambda_1>_&>_::__l2::<lambda_4>_&>
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
               TFunctionRefCaller<`FPCGSpatialDataProcessing::SampleBasedRangeProcessing<256,`UPCGIntersectionData::CreateAndFilterPointData'::__l2::<lambda_1>_&>'::__l2::<lambda_4>,void,int>
               ::Call;
    local_c0 = (<lambda_2> *)param_5;
    local_c8 = UE::Core::Private::Function::
               TFunctionRefCaller<`FPCGSpatialDataProcessing::SampleBasedRangeProcessing<256,`UPCGIntersectionData::CreateAndFilterPointData'::__l2::<lambda_1>_&>'::__l2::<lambda_3>,void,int,int,int>
               ::Call;
    local_d8 = UE::Core::Private::Function::
               TFunctionRefCaller<`FPCGSpatialDataProcessing::SampleBasedRangeProcessing<256,`UPCGIntersectionData::CreateAndFilterPointData'::__l2::<lambda_1>_&>'::__l2::<lambda_2>,int,int,int,int>
               ::Call;
    local_e8 = UE::Core::Private::Function::
               TFunctionRefCaller<`FPCGSpatialDataProcessing::SampleBasedRangeProcessing<256,`UPCGIntersectionData::CreateAndFilterPointData'::__l2::<lambda_1>_&>'::__l2::<lambda_1>,void>
               ::Call;
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
               TFunctionRefCaller<`FPCGSpatialDataProcessing::SampleBasedRangeProcessing<256,`UPCGIntersectionData::CreateAndFilterPointData'::__l2::<lambda_1>_&>'::__l2::<lambda_4>,void,int>
               ::Call;
    local_d0 = (<lambda_2> *)param_5;
    local_d8 = UE::Core::Private::Function::
               TFunctionRefCaller<`FPCGSpatialDataProcessing::SampleBasedRangeProcessing<256,`UPCGIntersectionData::CreateAndFilterPointData'::__l2::<lambda_1>_&>'::__l2::<lambda_3>,void,int,int,int>
               ::Call;
    local_c8 = UE::Core::Private::Function::
               TFunctionRefCaller<`FPCGSpatialDataProcessing::SampleBasedRangeProcessing<256,`UPCGIntersectionData::CreateAndFilterPointData'::__l2::<lambda_1>_&>'::__l2::<lambda_2>,int,int,int,int>
               ::Call;
    local_b8 = UE::Core::Private::Function::
               TFunctionRefCaller<`FPCGSpatialDataProcessing::SampleBasedRangeProcessing<256,`UPCGIntersectionData::CreateAndFilterPointData'::__l2::<lambda_1>_&>'::__l2::<lambda_1>,void>
               ::Call;
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

// AsyncProcessingRangeEx<`FPCGSpatialDataProcessing::SampleBasedRangeProcessing<256,`UPCGDifferenceData::CreateBasePointData'::__l2::<lambda_1>_&>'::__l2::<lambda_1>_&,`FPCGSpatialDataProcessing::SampleBasedRangeProcessing<256,`UPCGDifferenceData::CreateBasePointData'::__l2::<lambda_1>_&>'::__l2::<lambda_2>_&,`FPCGSpatialDataProcessing::SampleBasedRangeProcessing<256,`UPCGDifferenceData::CreateBasePointData'::__l2::<lambda_1>_&>'::__l2::<lambda_3>_&,`FPCGSpatialDataProcessing::SampleBasedRangeProcessing<256,`UPCGDifferenceData::CreateBasePointData'::__l2::<lambda_1>_&>'::__l2::<lambda_4>_&> @ 14985e110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
FPCGAsync::
AsyncProcessingRangeEx<_FPCGSpatialDataProcessing::SampleBasedRangeProcessing<256,_UPCGDifferenceData::CreateBasePointData_::__l2::<lambda_1>_&>_::__l2::<lambda_1>_&,_FPCGSpatialDataProcessing::SampleBasedRangeProcessing<256,_UPCGDifferenceData::CreateBasePointData_::__l2::<lambda_1>_&>_::__l2::<lambda_2>_&,_FPCGSpatialDataProcessing::SampleBasedRangeProcessing<256,_UPCGDifferenceData::CreateBasePointData_::__l2::<lambda_1>_&>_::__l2::<lambda_3>_&,_FPCGSpatialDataProcessing::SampleBasedRangeProcessing<256,_UPCGDifferenceData::CreateBasePointData_::__l2::<lambda_1>_&>_::__l2::<lambda_4>_&>
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
               TFunctionRefCaller<`FPCGSpatialDataProcessing::SampleBasedRangeProcessing<256,`UPCGDifferenceData::CreateBasePointData'::__l2::<lambda_1>_&>'::__l2::<lambda_4>,void,int>
               ::Call;
    local_c0 = (<lambda_2> *)param_5;
    local_c8 = UE::Core::Private::Function::
               TFunctionRefCaller<`FPCGSpatialDataProcessing::SampleBasedRangeProcessing<256,`UPCGDifferenceData::CreateBasePointData'::__l2::<lambda_1>_&>'::__l2::<lambda_3>,void,int,int,int>
               ::Call;
    local_d8 = UE::Core::Private::Function::
               TFunctionRefCaller<`FPCGSpatialDataProcessing::SampleBasedRangeProcessing<256,`UPCGDifferenceData::CreateBasePointData'::__l2::<lambda_1>_&>'::__l2::<lambda_2>,int,int,int,int>
               ::Call;
    local_e8 = UE::Core::Private::Function::
               TFunctionRefCaller<`FPCGSpatialDataProcessing::SampleBasedRangeProcessing<256,`UPCGDifferenceData::CreateBasePointData'::__l2::<lambda_1>_&>'::__l2::<lambda_1>,void>
               ::Call;
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
               TFunctionRefCaller<`FPCGSpatialDataProcessing::SampleBasedRangeProcessing<256,`UPCGDifferenceData::CreateBasePointData'::__l2::<lambda_1>_&>'::__l2::<lambda_4>,void,int>
               ::Call;
    local_d0 = (<lambda_2> *)param_5;
    local_d8 = UE::Core::Private::Function::
               TFunctionRefCaller<`FPCGSpatialDataProcessing::SampleBasedRangeProcessing<256,`UPCGDifferenceData::CreateBasePointData'::__l2::<lambda_1>_&>'::__l2::<lambda_3>,void,int,int,int>
               ::Call;
    local_c8 = UE::Core::Private::Function::
               TFunctionRefCaller<`FPCGSpatialDataProcessing::SampleBasedRangeProcessing<256,`UPCGDifferenceData::CreateBasePointData'::__l2::<lambda_1>_&>'::__l2::<lambda_2>,int,int,int,int>
               ::Call;
    local_b8 = UE::Core::Private::Function::
               TFunctionRefCaller<`FPCGSpatialDataProcessing::SampleBasedRangeProcessing<256,`UPCGDifferenceData::CreateBasePointData'::__l2::<lambda_1>_&>'::__l2::<lambda_1>,void>
               ::Call;
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

// AsyncProcessingRangeEx<`UPCGProjectionData::CreateBasePointData'::__l2::<lambda_1>_&,`UPCGProjectionData::CreateBasePointData'::__l2::<lambda_4>_&,`UPCGProjectionData::CreateBasePointData'::__l2::<lambda_2>_&,`UPCGProjectionData::CreateBasePointData'::__l2::<lambda_3>_&> @ 14985e380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
FPCGAsync::
AsyncProcessingRangeEx<_UPCGProjectionData::CreateBasePointData_::__l2::<lambda_1>_&,_UPCGProjectionData::CreateBasePointData_::__l2::<lambda_4>_&,_UPCGProjectionData::CreateBasePointData_::__l2::<lambda_2>_&,_UPCGProjectionData::CreateBasePointData_::__l2::<lambda_3>_&>
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
               TFunctionRefCaller<`UPCGProjectionData::CreateBasePointData'::__l2::<lambda_3>,void,int>
               ::Call;
    local_c0 = (<lambda_4> *)param_5;
    local_c8 = UE::Core::Private::Function::
               TFunctionRefCaller<`UPCGProjectionData::CreateBasePointData'::__l2::<lambda_2>,void,int,int,int>
               ::Call;
    local_d8 = UE::Core::Private::Function::
               TFunctionRefCaller<`UPCGProjectionData::CreateBasePointData'::__l2::<lambda_4>,int,int,int,int>
               ::Call;
    local_e8 = UE::Core::Private::Function::
               TFunctionRefCaller<`UPCGProjectionData::CreateBasePointData'::__l2::<lambda_1>,void>
               ::Call;
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
               TFunctionRefCaller<`UPCGProjectionData::CreateBasePointData'::__l2::<lambda_3>,void,int>
               ::Call;
    local_d0 = (<lambda_4> *)param_5;
    local_d8 = UE::Core::Private::Function::
               TFunctionRefCaller<`UPCGProjectionData::CreateBasePointData'::__l2::<lambda_2>,void,int,int,int>
               ::Call;
    local_c8 = UE::Core::Private::Function::
               TFunctionRefCaller<`UPCGProjectionData::CreateBasePointData'::__l2::<lambda_4>,int,int,int,int>
               ::Call;
    local_b8 = UE::Core::Private::Function::
               TFunctionRefCaller<`UPCGProjectionData::CreateBasePointData'::__l2::<lambda_1>,void>
               ::Call;
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

// AsyncProcessingRangeEx<`UPCGBaseTextureData::CreateBasePointData'::__l2::<lambda_4>,`UPCGBaseTextureData::CreateBasePointData'::__l2::<lambda_1>_&,`UPCGBaseTextureData::CreateBasePointData'::__l2::<lambda_2>_&,`UPCGBaseTextureData::CreateBasePointData'::__l2::<lambda_3>_&> @ 14985e5f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
FPCGAsync::
AsyncProcessingRangeEx<_UPCGBaseTextureData::CreateBasePointData_::__l2::<lambda_4>,_UPCGBaseTextureData::CreateBasePointData_::__l2::<lambda_1>_&,_UPCGBaseTextureData::CreateBasePointData_::__l2::<lambda_2>_&,_UPCGBaseTextureData::CreateBasePointData_::__l2::<lambda_3>_&>
          (FPCGAsyncState *param_1,int param_2,<lambda_4> *param_3,<lambda_1> *param_4,
          <lambda_2> *param_5,<lambda_3> *param_6,bool param_7,int param_8,bool param_9)

{
  ulonglong uVar1;
  int iVar2;
  bool bVar3;
  undefined1 auStackY_138 [32];
  code *local_e8;
  <lambda_4> *local_e0;
  code *local_d8;
  <lambda_1> *local_d0;
  code *local_c8;
  <lambda_1> *local_c0;
  code *local_b8;
  <lambda_4> *local_b0;
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
    local_b0 = (<lambda_4> *)param_6;
    local_a8._0_8_ = 0.0;
    local_b8 = UE::Core::Private::Function::
               TFunctionRefCaller<`UPCGBaseTextureData::CreateBasePointData'::__l2::<lambda_3>,void,int>
               ::Call;
    local_c0 = (<lambda_1> *)param_5;
    local_c8 = UE::Core::Private::Function::
               TFunctionRefCaller<`UPCGBaseTextureData::CreateBasePointData'::__l2::<lambda_2>,void,int,int,int>
               ::Call;
    local_d8 = UE::Core::Private::Function::
               TFunctionRefCaller<`UPCGBaseTextureData::CreateBasePointData'::__l2::<lambda_1>,int,int,int,int>
               ::Call;
    local_e8 = UE::Core::Private::Function::
               TFunctionRefCaller<`UPCGBaseTextureData::CreateBasePointData'::__l2::<lambda_4>,void>
               ::Call;
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
    local_e0 = (<lambda_4> *)param_6;
    local_e8 = UE::Core::Private::Function::
               TFunctionRefCaller<`UPCGBaseTextureData::CreateBasePointData'::__l2::<lambda_3>,void,int>
               ::Call;
    local_d0 = (<lambda_1> *)param_5;
    local_d8 = UE::Core::Private::Function::
               TFunctionRefCaller<`UPCGBaseTextureData::CreateBasePointData'::__l2::<lambda_2>,void,int,int,int>
               ::Call;
    local_c8 = UE::Core::Private::Function::
               TFunctionRefCaller<`UPCGBaseTextureData::CreateBasePointData'::__l2::<lambda_1>,int,int,int,int>
               ::Call;
    local_b8 = UE::Core::Private::Function::
               TFunctionRefCaller<`UPCGBaseTextureData::CreateBasePointData'::__l2::<lambda_4>,void>
               ::Call;
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

// AsyncProcessingRangeEx<`UPCGUnionData::CreateSequentialPointData'::__l13::<lambda_5>,`UPCGUnionData::CreateSequentialPointData'::__l13::<lambda_4>_&,`UPCGUnionData::CreateSequentialPointData'::__l2::<lambda_1>_&,`UPCGUnionData::CreateSequentialPointData'::__l2::<lambda_2>_&> @ 14985e860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
FPCGAsync::
AsyncProcessingRangeEx<_UPCGUnionData::CreateSequentialPointData_::__l13::<lambda_5>,_UPCGUnionData::CreateSequentialPointData_::__l13::<lambda_4>_&,_UPCGUnionData::CreateSequentialPointData_::__l2::<lambda_1>_&,_UPCGUnionData::CreateSequentialPointData_::__l2::<lambda_2>_&>
          (FPCGAsyncState *param_1,int param_2,<lambda_5> *param_3,<lambda_4> *param_4,
          <lambda_1> *param_5,<lambda_2> *param_6,bool param_7,int param_8,bool param_9)

{
  ulonglong uVar1;
  int iVar2;
  bool bVar3;
  undefined1 auStackY_138 [32];
  code *local_e8;
  <lambda_5> *local_e0;
  code *local_d8;
  <lambda_4> *local_d0;
  code *local_c8;
  <lambda_4> *local_c0;
  code *local_b8;
  <lambda_5> *local_b0;
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
    local_b0 = (<lambda_5> *)param_6;
    local_a8._0_8_ = 0.0;
    local_b8 = UE::Core::Private::Function::
               TFunctionRefCaller<`UPCGUnionData::CreateSequentialPointData'::__l2::<lambda_2>,void,int>
               ::Call;
    local_c0 = (<lambda_4> *)param_5;
    local_c8 = UE::Core::Private::Function::
               TFunctionRefCaller<`UPCGUnionData::CreateSequentialPointData'::__l2::<lambda_1>,void,int,int,int>
               ::Call;
    local_d8 = UE::Core::Private::Function::
               TFunctionRefCaller<`UPCGUnionData::CreateSequentialPointData'::__l13::<lambda_4>,int,int,int,int>
               ::Call;
    local_e8 = UE::Core::Private::Function::
               TFunctionRefCaller<`UPCGUnionData::CreateSequentialPointData'::__l13::<lambda_5>,void>
               ::Call;
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
    local_e0 = (<lambda_5> *)param_6;
    local_e8 = UE::Core::Private::Function::
               TFunctionRefCaller<`UPCGUnionData::CreateSequentialPointData'::__l2::<lambda_2>,void,int>
               ::Call;
    local_d0 = (<lambda_4> *)param_5;
    local_d8 = UE::Core::Private::Function::
               TFunctionRefCaller<`UPCGUnionData::CreateSequentialPointData'::__l2::<lambda_1>,void,int,int,int>
               ::Call;
    local_c8 = UE::Core::Private::Function::
               TFunctionRefCaller<`UPCGUnionData::CreateSequentialPointData'::__l13::<lambda_4>,int,int,int,int>
               ::Call;
    local_b8 = UE::Core::Private::Function::
               TFunctionRefCaller<`UPCGUnionData::CreateSequentialPointData'::__l13::<lambda_5>,void>
               ::Call;
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

// CastChecked<UPCGPointArrayData,UPCGBasePointData_const_> @ 14985ead0

UPCGPointArrayData * __cdecl
CastChecked<UPCGPointArrayData,UPCGBasePointData_const_>(UPCGBasePointData *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UPCGBasePointData *)0x0) {
    pFVar3 = GetTypeName<UPCGPointArrayData>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UPCGPointArrayData::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UPCGPointArrayData *)param_1;
  }
  pFVar3 = GetTypeName<UPCGPointArrayData>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UPCGBasePointData_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UPCGPointArrayData,UPCGBasePointData_const_> @ 14985eb90

UPCGPointArrayData * __cdecl
CastChecked<UPCGPointArrayData,UPCGBasePointData_const_>(UPCGBasePointData *param_1,Type param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UPCGBasePointData *)0x0) {
    if (param_2 != NullChecked) {
      return (UPCGPointArrayData *)0x0;
    }
    pFVar3 = GetTypeName<UPCGPointArrayData>(&local_18);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UPCGPointArrayData::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UPCGPointArrayData *)param_1;
  }
  pFVar3 = GetTypeName<UPCGPointArrayData>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UPCGBasePointData_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UPCGPointArrayData,UPCGBasePointData> @ 14985ec70

UPCGPointArrayData * __cdecl
CastChecked<UPCGPointArrayData,UPCGBasePointData>(UPCGBasePointData *param_1,Type param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UPCGBasePointData *)0x0) {
    if (param_2 != NullChecked) {
      return (UPCGPointArrayData *)0x0;
    }
    pFVar3 = GetTypeName<UPCGPointArrayData>(&local_18);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UPCGPointArrayData::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UPCGPointArrayData *)param_1;
  }
  pFVar3 = GetTypeName<UPCGPointArrayData>(&local_28);
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

// CastChecked<UPCGPointData,UPCGBasePointData_const_> @ 14985ed50

UPCGPointData * __cdecl
CastChecked<UPCGPointData,UPCGBasePointData_const_>(UPCGBasePointData *param_1)

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
  pUVar2 = UPCGPointData::StaticClass();
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
  pFVar3 = GetFullNameForCastLogError<UPCGBasePointData_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UPCGPointData,UPCGBasePointData_const_> @ 14985ee10

UPCGPointData * __cdecl
CastChecked<UPCGPointData,UPCGBasePointData_const_>(UPCGBasePointData *param_1,Type param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UPCGBasePointData *)0x0) {
    if (param_2 != NullChecked) {
      return (UPCGPointData *)0x0;
    }
    pFVar3 = GetTypeName<UPCGPointData>(&local_18);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UPCGPointData::StaticClass();
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
  pFVar3 = GetFullNameForCastLogError<UPCGBasePointData_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UPCGPointData,UPCGData_const_> @ 14985eef0

UPCGPointData * __cdecl CastChecked<UPCGPointData,UPCGData_const_>(UPCGData *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UPCGData *)0x0) {
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
  pUVar2 = UPCGPointData::StaticClass();
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
  pFVar3 = GetFullNameForCastLogError<UPCGData_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UPCGPointData,UPCGBasePointData> @ 14985efb0

UPCGPointData * __cdecl
CastChecked<UPCGPointData,UPCGBasePointData>(UPCGBasePointData *param_1,Type param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UPCGBasePointData *)0x0) {
    if (param_2 != NullChecked) {
      return (UPCGPointData *)0x0;
    }
    pFVar3 = GetTypeName<UPCGPointData>(&local_18);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UPCGPointData::StaticClass();
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

// CastChecked<UPCGPointData,UPCGData> @ 14985f090

UPCGPointData * __cdecl CastChecked<UPCGPointData,UPCGData>(UPCGData *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UPCGData *)0x0) {
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
  pUVar2 = UPCGPointData::StaticClass();
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
  pFVar3 = GetFullNameForCastLogError<UPCGData>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UPCGPolygon2DData,UPCGData_const_> @ 14985f150

UPCGPolygon2DData * __cdecl CastChecked<UPCGPolygon2DData,UPCGData_const_>(UPCGData *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UPCGData *)0x0) {
    pFVar3 = GetTypeName<UPCGPolygon2DData>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UPCGPolygon2DData::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UPCGPolygon2DData *)param_1;
  }
  pFVar3 = GetTypeName<UPCGPolygon2DData>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UPCGData_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UPCGPolygon2DData,UPCGData> @ 14985f210

UPCGPolygon2DData * __cdecl CastChecked<UPCGPolygon2DData,UPCGData>(UPCGData *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UPCGData *)0x0) {
    pFVar3 = GetTypeName<UPCGPolygon2DData>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UPCGPolygon2DData::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UPCGPolygon2DData *)param_1;
  }
  pFVar3 = GetTypeName<UPCGPolygon2DData>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UPCGData>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UPCGSplineData,UPCGData_const_> @ 14985f2d0

UPCGSplineData * __cdecl CastChecked<UPCGSplineData,UPCGData_const_>(UPCGData *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UPCGData *)0x0) {
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
  pUVar2 = UPCGSplineData::StaticClass();
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
  pFVar3 = GetFullNameForCastLogError<UPCGData_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UPCGSplineData,UPCGData> @ 14985f390

UPCGSplineData * __cdecl CastChecked<UPCGSplineData,UPCGData>(UPCGData *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UPCGData *)0x0) {
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
  pUVar2 = UPCGSplineData::StaticClass();
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
  pFVar3 = GetFullNameForCastLogError<UPCGData>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastHelper<`UPCGCollisionShapeData::SamplePoint'::__l3::<lambda_1>_> @ 14985f450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
Chaos::Utilities::CastHelper<_UPCGCollisionShapeData::SamplePoint_::__l3::<lambda_1>_>
          (FImplicitObject *param_1,TRigidTransform<double,3> *param_2,<lambda_1> *param_3)

{
  code *pcVar1;
  uchar uVar2;
  bool bVar3;
  undefined1 uVar4;
  TBox<double,3> *pTVar5;
  FCapsule *pFVar6;
  FConvex *pFVar7;
  TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *pTVar8;
  TImplicitObjectScaled<Chaos::TBox<double,3>,1> *pTVar9;
  TImplicitObjectScaled<Chaos::FCapsule,1> *pTVar10;
  TImplicitObjectScaled<Chaos::FConvex,1> *pTVar11;
  TImplicitObjectInstanced<Chaos::TSphere<double,3>_> *pTVar12;
  TImplicitObjectInstanced<Chaos::TBox<double,3>_> *pTVar13;
  TImplicitObjectInstanced<Chaos::FCapsule> *pTVar14;
  TImplicitObjectInstanced<Chaos::FConvex> *pTVar15;
  TImplicitObjectTransformed<double,3,1> *pTVar16;
  undefined1 auStack_108 [32];
  TTransform<double> local_e8;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  uVar2 = FImplicitObject::GetType(param_1);
  switch(uVar2) {
  case '\x01':
    goto LAB_14985f4a7;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\CastingUtilities.h"
                       ,0x7a,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  case '\0':
    if ((param_1->Type != '\0') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("T_DERIVED::StaticType() == Type",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                           ,0xbb,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    goto LAB_14985f6d0;
  case '\x03':
    goto LAB_14985f4c2;
  case '\x04':
    pTVar16 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectTransformed<double,3,1>_>
                        (param_1);
    local_e8.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_e8.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_e8.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_e8.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_e8.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_e8.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_e8.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_e8.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_e8.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_e8.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_e8.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_e8.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply
              (&local_e8,(TTransform<double> *)&pTVar16->MTransform,(TTransform<double> *)param_2);
    local_88 = local_e8.Rotation.XY.m128d_f64[0];
    dStack_80 = local_e8.Rotation.XY.m128d_f64[1];
    local_78 = local_e8.Rotation.ZW.m128d_f64[0];
    dStack_70 = local_e8.Rotation.ZW.m128d_f64[1];
    local_68 = local_e8.Translation.XY.m128d_f64[0];
    dStack_60 = local_e8.Translation.XY.m128d_f64[1];
    local_58 = local_e8.Translation.ZW.m128d_f64[0];
    dStack_50 = local_e8.Translation.ZW.m128d_f64[1];
    local_48 = local_e8.Scale3D.XY.m128d_f64[0];
    dStack_40 = local_e8.Scale3D.XY.m128d_f64[1];
    local_38 = local_e8.Scale3D.ZW.m128d_f64[0];
    dStack_30 = local_e8.Scale3D.ZW.m128d_f64[1];
    bVar3 = CastHelper<_UPCGCollisionShapeData::SamplePoint_::__l3::<lambda_1>_>
                      ((pTVar16->MObject).Reference,(TRigidTransform<double,3> *)&local_88,param_3);
    break;
  case '\b':
    goto LAB_14985f4dd;
  case '@':
    pTVar12 = FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TSphere<double,3>_>_>(param_1)
    ;
    param_1 = (FImplicitObject *)
              FImplicitObject::GetObjectChecked<Chaos::TSphere<double,3>_>
                        ((FImplicitObject *)(pTVar12->MObject).Reference);
LAB_14985f6d0:
    bVar3 = `UPCGCollisionShapeData::SamplePoint'::__l3::<lambda_1>::
            operator()<Chaos::TSphere<double,3>,Chaos::TRigidTransform<double,3>_>
                      (param_3,(TSphere<double,3> *)param_1,param_2);
    break;
  case 'A':
    pTVar13 = FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TBox<double,3>_>_>(param_1);
    param_1 = (FImplicitObject *)(pTVar13->MObject).Reference;
LAB_14985f4a7:
    pTVar5 = FImplicitObject::GetObjectChecked<Chaos::TBox<double,3>_>(param_1);
    bVar3 = `UPCGCollisionShapeData::SamplePoint'::__l3::<lambda_1>::
            operator()<Chaos::TBox<double,3>,Chaos::TRigidTransform<double,3>_>
                      (param_3,pTVar5,param_2);
    break;
  case 'C':
    pTVar14 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FCapsule>_>
                        (param_1);
    param_1 = (FImplicitObject *)(pTVar14->MObject).Reference;
LAB_14985f4c2:
    pFVar6 = FImplicitObject::GetObjectChecked<Chaos::FCapsule>(param_1);
    bVar3 = `UPCGCollisionShapeData::SamplePoint'::__l3::<lambda_1>::
            operator()<Chaos::FCapsule,Chaos::TRigidTransform<double,3>_>(param_3,pFVar6,param_2);
    break;
  case 'H':
    pTVar15 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>
                        (param_1);
    param_1 = (FImplicitObject *)(pTVar15->MObject).Reference;
LAB_14985f4dd:
    pFVar7 = FImplicitObject::GetObjectChecked<Chaos::FConvex>(param_1);
    bVar3 = `UPCGCollisionShapeData::SamplePoint'::__l3::<lambda_1>::
            operator()<Chaos::FConvex,Chaos::TRigidTransform<double,3>_>(param_3,pFVar7,param_2);
    break;
  case 0x80:
    pTVar8 = FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>(param_1);
    bVar3 = `UPCGCollisionShapeData::SamplePoint'::__l3::<lambda_1>::
            operator()<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::TRigidTransform<double,3>_>
                      (param_3,pTVar8,param_2);
    break;
  case 0x81:
    pTVar9 = FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>(param_1);
    bVar3 = `UPCGCollisionShapeData::SamplePoint'::__l3::<lambda_1>::
            operator()<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::TRigidTransform<double,3>_>
                      (param_3,pTVar9,param_2);
    break;
  case 0x83:
    pTVar10 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>
                        (param_1);
    bVar3 = `UPCGCollisionShapeData::SamplePoint'::__l3::<lambda_1>::
            operator()<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::TRigidTransform<double,3>_>
                      (param_3,pTVar10,param_2);
    break;
  case 0x88:
    pTVar11 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>
                        (param_1);
    bVar3 = `UPCGCollisionShapeData::SamplePoint'::__l3::<lambda_1>::
            operator()<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::TRigidTransform<double,3>_>
                      (param_3,pTVar11,param_2);
  }
  return bVar3;
}

// CastHelper<``UPCGCollisionWrapperData::SamplePoint'::__l2::<lambda_1>::operator()'::__l12::<lambda_1>_> @ 14985f7c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
Chaos::Utilities::
CastHelper<__UPCGCollisionWrapperData::SamplePoint_::__l2::<lambda_1>::operator()_::__l12::<lambda_1>_>
          (FImplicitObject *param_1,TRigidTransform<double,3> *param_2,<lambda_1> *param_3)

{
  code *pcVar1;
  uchar uVar2;
  bool bVar3;
  undefined1 uVar4;
  TBox<double,3> *pTVar5;
  FCapsule *pFVar6;
  FConvex *pFVar7;
  TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *pTVar8;
  TImplicitObjectScaled<Chaos::TBox<double,3>,1> *pTVar9;
  TImplicitObjectScaled<Chaos::FCapsule,1> *pTVar10;
  TImplicitObjectScaled<Chaos::FConvex,1> *pTVar11;
  TImplicitObjectInstanced<Chaos::TSphere<double,3>_> *pTVar12;
  TImplicitObjectInstanced<Chaos::TBox<double,3>_> *pTVar13;
  TImplicitObjectInstanced<Chaos::FCapsule> *pTVar14;
  TImplicitObjectInstanced<Chaos::FConvex> *pTVar15;
  TImplicitObjectTransformed<double,3,1> *pTVar16;
  undefined1 auStack_108 [32];
  TTransform<double> local_e8;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  uVar2 = FImplicitObject::GetType(param_1);
  switch(uVar2) {
  case '\x01':
    goto LAB_14985f817;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\CastingUtilities.h"
                       ,0x7a,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  case '\0':
    if ((param_1->Type != '\0') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("T_DERIVED::StaticType() == Type",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                           ,0xbb,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    goto LAB_14985fa40;
  case '\x03':
    goto LAB_14985f832;
  case '\x04':
    pTVar16 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectTransformed<double,3,1>_>
                        (param_1);
    local_e8.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_e8.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_e8.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_e8.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_e8.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_e8.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_e8.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_e8.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_e8.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_e8.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_e8.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_e8.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply
              (&local_e8,(TTransform<double> *)&pTVar16->MTransform,(TTransform<double> *)param_2);
    local_88 = local_e8.Rotation.XY.m128d_f64[0];
    dStack_80 = local_e8.Rotation.XY.m128d_f64[1];
    local_78 = local_e8.Rotation.ZW.m128d_f64[0];
    dStack_70 = local_e8.Rotation.ZW.m128d_f64[1];
    local_68 = local_e8.Translation.XY.m128d_f64[0];
    dStack_60 = local_e8.Translation.XY.m128d_f64[1];
    local_58 = local_e8.Translation.ZW.m128d_f64[0];
    dStack_50 = local_e8.Translation.ZW.m128d_f64[1];
    local_48 = local_e8.Scale3D.XY.m128d_f64[0];
    dStack_40 = local_e8.Scale3D.XY.m128d_f64[1];
    local_38 = local_e8.Scale3D.ZW.m128d_f64[0];
    dStack_30 = local_e8.Scale3D.ZW.m128d_f64[1];
    bVar3 = CastHelper<__UPCGCollisionWrapperData::SamplePoint_::__l2::<lambda_1>::operator()_::__l12::<lambda_1>_>
                      ((pTVar16->MObject).Reference,(TRigidTransform<double,3> *)&local_88,param_3);
    break;
  case '\b':
    goto LAB_14985f84d;
  case '@':
    pTVar12 = FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TSphere<double,3>_>_>(param_1)
    ;
    param_1 = (FImplicitObject *)
              FImplicitObject::GetObjectChecked<Chaos::TSphere<double,3>_>
                        ((FImplicitObject *)(pTVar12->MObject).Reference);
LAB_14985fa40:
    bVar3 = ``UPCGCollisionWrapperData::SamplePoint'::__l2::<lambda_1>::operator()'::__l12::
            <lambda_1>::operator()<Chaos::TSphere<double,3>,Chaos::TRigidTransform<double,3>_>
                      (param_3,(TSphere<double,3> *)param_1,param_2);
    break;
  case 'A':
    pTVar13 = FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TBox<double,3>_>_>(param_1);
    param_1 = (FImplicitObject *)(pTVar13->MObject).Reference;
LAB_14985f817:
    pTVar5 = FImplicitObject::GetObjectChecked<Chaos::TBox<double,3>_>(param_1);
    bVar3 = ``UPCGCollisionWrapperData::SamplePoint'::__l2::<lambda_1>::operator()'::__l12::
            <lambda_1>::operator()<Chaos::TBox<double,3>,Chaos::TRigidTransform<double,3>_>
                      (param_3,pTVar5,param_2);
    break;
  case 'C':
    pTVar14 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FCapsule>_>
                        (param_1);
    param_1 = (FImplicitObject *)(pTVar14->MObject).Reference;
LAB_14985f832:
    pFVar6 = FImplicitObject::GetObjectChecked<Chaos::FCapsule>(param_1);
    bVar3 = ``UPCGCollisionWrapperData::SamplePoint'::__l2::<lambda_1>::operator()'::__l12::
            <lambda_1>::operator()<Chaos::FCapsule,Chaos::TRigidTransform<double,3>_>
                      (param_3,pFVar6,param_2);
    break;
  case 'H':
    pTVar15 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>
                        (param_1);
    param_1 = (FImplicitObject *)(pTVar15->MObject).Reference;
LAB_14985f84d:
    pFVar7 = FImplicitObject::GetObjectChecked<Chaos::FConvex>(param_1);
    bVar3 = ``UPCGCollisionWrapperData::SamplePoint'::__l2::<lambda_1>::operator()'::__l12::
            <lambda_1>::operator()<Chaos::FConvex,Chaos::TRigidTransform<double,3>_>
                      (param_3,pFVar7,param_2);
    break;
  case 0x80:
    pTVar8 = FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>(param_1);
    bVar3 = ``UPCGCollisionWrapperData::SamplePoint'::__l2::<lambda_1>::operator()'::__l12::
            <lambda_1>::
            operator()<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::TRigidTransform<double,3>_>
                      (param_3,pTVar8,param_2);
    break;
  case 0x81:
    pTVar9 = FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>(param_1);
    bVar3 = ``UPCGCollisionWrapperData::SamplePoint'::__l2::<lambda_1>::operator()'::__l12::
            <lambda_1>::
            operator()<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::TRigidTransform<double,3>_>
                      (param_3,pTVar9,param_2);
    break;
  case 0x83:
    pTVar10 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>
                        (param_1);
    bVar3 = ``UPCGCollisionWrapperData::SamplePoint'::__l2::<lambda_1>::operator()'::__l12::
            <lambda_1>::
            operator()<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::TRigidTransform<double,3>_>
                      (param_3,pTVar10,param_2);
    break;
  case 0x88:
    pTVar11 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>
                        (param_1);
    bVar3 = ``UPCGCollisionWrapperData::SamplePoint'::__l2::<lambda_1>::operator()'::__l12::
            <lambda_1>::
            operator()<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::TRigidTransform<double,3>_>
                      (param_3,pTVar11,param_2);
  }
  return bVar3;
}

// CastHelper<``UPCGCollisionWrapperData::SamplePoint'::__l2::<lambda_1>::operator()'::__l17::<lambda_2>_> @ 14985fb30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
Chaos::Utilities::
CastHelper<__UPCGCollisionWrapperData::SamplePoint_::__l2::<lambda_1>::operator()_::__l17::<lambda_2>_>
          (FImplicitObject *param_1,TRigidTransform<double,3> *param_2,<lambda_2> *param_3)

{
  code *pcVar1;
  uchar uVar2;
  bool bVar3;
  undefined1 uVar4;
  TBox<double,3> *pTVar5;
  FCapsule *pFVar6;
  FConvex *pFVar7;
  TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *pTVar8;
  TImplicitObjectScaled<Chaos::TBox<double,3>,1> *pTVar9;
  TImplicitObjectScaled<Chaos::FCapsule,1> *pTVar10;
  TImplicitObjectScaled<Chaos::FConvex,1> *pTVar11;
  TImplicitObjectInstanced<Chaos::TSphere<double,3>_> *pTVar12;
  TImplicitObjectInstanced<Chaos::TBox<double,3>_> *pTVar13;
  TImplicitObjectInstanced<Chaos::FCapsule> *pTVar14;
  TImplicitObjectInstanced<Chaos::FConvex> *pTVar15;
  TImplicitObjectTransformed<double,3,1> *pTVar16;
  undefined1 auStack_108 [32];
  TTransform<double> local_e8;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  uVar2 = FImplicitObject::GetType(param_1);
  switch(uVar2) {
  case '\x01':
    goto LAB_14985fb87;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\CastingUtilities.h"
                       ,0x7a,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  case '\0':
    if ((param_1->Type != '\0') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("T_DERIVED::StaticType() == Type",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                           ,0xbb,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    goto LAB_14985fdb0;
  case '\x03':
    goto LAB_14985fba2;
  case '\x04':
    pTVar16 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectTransformed<double,3,1>_>
                        (param_1);
    local_e8.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_e8.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_e8.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_e8.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_e8.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_e8.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_e8.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_e8.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_e8.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_e8.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_e8.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_e8.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply
              (&local_e8,(TTransform<double> *)&pTVar16->MTransform,(TTransform<double> *)param_2);
    local_88 = local_e8.Rotation.XY.m128d_f64[0];
    dStack_80 = local_e8.Rotation.XY.m128d_f64[1];
    local_78 = local_e8.Rotation.ZW.m128d_f64[0];
    dStack_70 = local_e8.Rotation.ZW.m128d_f64[1];
    local_68 = local_e8.Translation.XY.m128d_f64[0];
    dStack_60 = local_e8.Translation.XY.m128d_f64[1];
    local_58 = local_e8.Translation.ZW.m128d_f64[0];
    dStack_50 = local_e8.Translation.ZW.m128d_f64[1];
    local_48 = local_e8.Scale3D.XY.m128d_f64[0];
    dStack_40 = local_e8.Scale3D.XY.m128d_f64[1];
    local_38 = local_e8.Scale3D.ZW.m128d_f64[0];
    dStack_30 = local_e8.Scale3D.ZW.m128d_f64[1];
    bVar3 = CastHelper<__UPCGCollisionWrapperData::SamplePoint_::__l2::<lambda_1>::operator()_::__l17::<lambda_2>_>
                      ((pTVar16->MObject).Reference,(TRigidTransform<double,3> *)&local_88,param_3);
    break;
  case '\b':
    goto LAB_14985fbbd;
  case '@':
    pTVar12 = FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TSphere<double,3>_>_>(param_1)
    ;
    param_1 = (FImplicitObject *)
              FImplicitObject::GetObjectChecked<Chaos::TSphere<double,3>_>
                        ((FImplicitObject *)(pTVar12->MObject).Reference);
LAB_14985fdb0:
    bVar3 = ``UPCGCollisionWrapperData::SamplePoint'::__l2::<lambda_1>::operator()'::__l17::
            <lambda_2>::operator()<Chaos::TSphere<double,3>,Chaos::TRigidTransform<double,3>_>
                      (param_3,(TSphere<double,3> *)param_1,param_2);
    break;
  case 'A':
    pTVar13 = FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TBox<double,3>_>_>(param_1);
    param_1 = (FImplicitObject *)(pTVar13->MObject).Reference;
LAB_14985fb87:
    pTVar5 = FImplicitObject::GetObjectChecked<Chaos::TBox<double,3>_>(param_1);
    bVar3 = ``UPCGCollisionWrapperData::SamplePoint'::__l2::<lambda_1>::operator()'::__l17::
            <lambda_2>::operator()<Chaos::TBox<double,3>,Chaos::TRigidTransform<double,3>_>
                      (param_3,pTVar5,param_2);
    break;
  case 'C':
    pTVar14 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FCapsule>_>
                        (param_1);
    param_1 = (FImplicitObject *)(pTVar14->MObject).Reference;
LAB_14985fba2:
    pFVar6 = FImplicitObject::GetObjectChecked<Chaos::FCapsule>(param_1);
    bVar3 = ``UPCGCollisionWrapperData::SamplePoint'::__l2::<lambda_1>::operator()'::__l17::
            <lambda_2>::operator()<Chaos::FCapsule,Chaos::TRigidTransform<double,3>_>
                      (param_3,pFVar6,param_2);
    break;
  case 'H':
    pTVar15 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>
                        (param_1);
    param_1 = (FImplicitObject *)(pTVar15->MObject).Reference;
LAB_14985fbbd:
    pFVar7 = FImplicitObject::GetObjectChecked<Chaos::FConvex>(param_1);
    bVar3 = ``UPCGCollisionWrapperData::SamplePoint'::__l2::<lambda_1>::operator()'::__l17::
            <lambda_2>::operator()<Chaos::FConvex,Chaos::TRigidTransform<double,3>_>
                      (param_3,pFVar7,param_2);
    break;
  case 0x80:
    pTVar8 = FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>(param_1);
    bVar3 = ``UPCGCollisionWrapperData::SamplePoint'::__l2::<lambda_1>::operator()'::__l17::
            <lambda_2>::
            operator()<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::TRigidTransform<double,3>_>
                      (param_3,pTVar8,param_2);
    break;
  case 0x81:
    pTVar9 = FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>(param_1);
    bVar3 = ``UPCGCollisionWrapperData::SamplePoint'::__l2::<lambda_1>::operator()'::__l17::
            <lambda_2>::
            operator()<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::TRigidTransform<double,3>_>
                      (param_3,pTVar9,param_2);
    break;
  case 0x83:
    pTVar10 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>
                        (param_1);
    bVar3 = ``UPCGCollisionWrapperData::SamplePoint'::__l2::<lambda_1>::operator()'::__l17::
            <lambda_2>::
            operator()<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::TRigidTransform<double,3>_>
                      (param_3,pTVar10,param_2);
    break;
  case 0x88:
    pTVar11 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>
                        (param_1);
    bVar3 = ``UPCGCollisionWrapperData::SamplePoint'::__l2::<lambda_1>::operator()'::__l17::
            <lambda_2>::
            operator()<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::TRigidTransform<double,3>_>
                      (param_3,pTVar11,param_2);
  }
  return bVar3;
}

// ConstructItems<TObjectPtr<UPCGBasePointData_const_>,TObjectPtr<UPCGBasePointData_const_>,int> @ 14985fea0

void __cdecl
ConstructItems<TObjectPtr<UPCGBasePointData_const_>,TObjectPtr<UPCGBasePointData_const_>,int>
          (void *param_1,TObjectPtr<UPCGBasePointData_const_> *param_2,int param_3)

{
  TObjectPtr<UPCGBasePointData_const_> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<UPCGBasePointData_const_>_u_0)param_2->field0_0x0;
      ((TObjectPtr<UPCGBasePointData_const_>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr =
           (UPCGBasePointData *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UPCGBasePointData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TObjectPtr<UPCGSpatialData_const_>,TObjectPtr<UPCGSpatialData_const_>,int> @ 14985ff00

void __cdecl
ConstructItems<TObjectPtr<UPCGSpatialData_const_>,TObjectPtr<UPCGSpatialData_const_>,int>
          (void *param_1,TObjectPtr<UPCGSpatialData_const_> *param_2,int param_3)

{
  TObjectPtr<UPCGSpatialData_const_> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<UPCGSpatialData_const_>_u_0)param_2->field0_0x0;
      ((TObjectPtr<UPCGSpatialData_const_>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr =
           (UPCGSpatialData *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UPCGSpatialData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TSoftObjectPtr<ALandscapeProxy>,TSoftObjectPtr<ALandscapeProxy>,int> @ 14985ff60

void __cdecl
ConstructItems<TSoftObjectPtr<ALandscapeProxy>,TSoftObjectPtr<ALandscapeProxy>,int>
          (void *param_1,TSoftObjectPtr<ALandscapeProxy> *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      *(undefined8 *)(lVar1 + (longlong)param_2) = *(undefined8 *)&param_2->SoftObjectPtr;
      FSoftObjectPath::FSoftObjectPath
                ((FSoftObjectPath *)(lVar1 + 8 + (longlong)param_2),
                 (FSoftObjectPath *)&(param_2->SoftObjectPtr).field_0x8);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int> @ 14985ffc0

void __cdecl
ConstructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
          (void *param_1,TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *param_2,
          int param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  if (param_3 != 0) {
    puVar5 = (undefined4 *)((longlong)param_1 + 0x24);
    piVar6 = (int *)&param_2->field_0x24;
    do {
      uVar3 = *(undefined8 *)(piVar6 + -7);
      puVar1 = (undefined8 *)((longlong)piVar6 + (longlong)param_1 + (-0x24 - (longlong)param_2));
      *puVar1 = *(undefined8 *)(piVar6 + -9);
      puVar1[1] = uVar3;
      *(undefined8 *)(puVar5 + -5) = *(undefined8 *)(piVar6 + -5);
      *(undefined8 *)
       &((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(puVar5 + -3))->Elements = 0;
      puVar5[-1] = 0;
      *puVar5 = 0xffffffff;
      *(undefined8 *)(puVar5 + 5) = 0;
      puVar5[7] = 0;
      puVar5[8] = 0x80;
      puVar5[9] = 0xffffffff;
      puVar5[10] = 0;
      *(undefined8 *)(puVar5 + 0xd) = 0;
      puVar5[0xf] = 0;
      if (*piVar6 != -1) {
        *puVar5 = 0;
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
                  ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(puVar5 + -3),
                   (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(piVar6 + -3));
      }
      *(char *)(puVar5 + 0x11) = (char)piVar6[0x11];
      uVar2 = *(undefined1 *)((longlong)piVar6 + 0x45);
      *(undefined1 *)(puVar5 + 0x1b) = 0;
      *(undefined1 *)((longlong)puVar5 + 0x45) = uVar2;
      iVar4 = piVar6[0x1b];
      *(char *)(puVar5 + 0x1b) = (char)iVar4;
      if ((char)iVar4 != '\0') {
        uVar3 = *(undefined8 *)(piVar6 + 0x15);
        *(undefined8 *)(puVar5 + 0x13) = *(undefined8 *)(piVar6 + 0x13);
        *(undefined8 *)(puVar5 + 0x15) = uVar3;
        uVar3 = *(undefined8 *)(piVar6 + 0x19);
        *(undefined8 *)(puVar5 + 0x17) = *(undefined8 *)(piVar6 + 0x17);
        *(undefined8 *)(puVar5 + 0x19) = uVar3;
      }
      puVar5 = puVar5 + 0x26;
      piVar6 = piVar6 + 0x26;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<TOctree2<FPCGPointRef,FPCGPointRefSemantics>::FNode,int> @ 1498600c0

void __cdecl
DefaultConstructItems<TOctree2<FPCGPointRef,FPCGPointRefSemantics>::FNode,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)param_1 = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 4) = 0;
    param_1 = (void *)((longlong)param_1 + 8);
  }
  return;
}

// DefaultConstructItems<FPCGPoint,int> @ 1498600f0

void __cdecl DefaultConstructItems<FPCGPoint,int>(void *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 (*pauVar15) [16];
  uint uVar16;
  uint uVar17;
  
  uVar10 = __xmm_80000000000000008000000000000000;
  if (param_2 != 0) {
    pauVar15 = (undefined1 (*) [16])((longlong)param_1 + 0x20);
    do {
      fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
      fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
      auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
      ;
      pauVar15[-2] = auVar3;
      auVar4._8_4_ = SUB84((double)fVar2,0);
      auVar4._0_8_ = (double)fVar1;
      auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
      pauVar15[-1] = auVar4;
      fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
      fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
      auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20)
      ;
      *pauVar15 = auVar5;
      auVar6._8_4_ = SUB84((double)fVar2,0);
      auVar6._0_8_ = (double)fVar1;
      auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
      pauVar15[1] = auVar6;
      fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
      fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
      auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20)
      ;
      pauVar15[2] = auVar7;
      auVar8._8_4_ = SUB84((double)fVar2,0);
      auVar8._0_8_ = (double)fVar1;
      auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
      pauVar15[3] = auVar8;
      *(undefined4 *)pauVar15[4] = 0x3f800000;
      uVar14 = UE::Math::TVector<double>::OneVector.field0_0x0._12_4_;
      uVar13 = UE::Math::TVector<double>::OneVector.field0_0x0._8_4_;
      uVar12 = UE::Math::TVector<double>::OneVector.field0_0x0._4_4_;
      uVar11 = UE::Math::TVector<double>::OneVector.field0_0x0._0_4_;
      uVar16 = (uint)uVar10;
      uVar17 = (uint)((ulonglong)uVar10 >> 0x20);
      *(ulonglong *)(pauVar15[5] + 8) =
           CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >> 0x20
                          ) ^ uVar17,
                    SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar16);
      *(ulonglong *)pauVar15[5] = CONCAT44(uVar14 ^ uVar17,uVar13 ^ uVar16);
      *(ulonglong *)(pauVar15[4] + 8) = CONCAT44(uVar12 ^ uVar17,uVar11 ^ uVar16);
      uVar9 = CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._12_4_,
                       UE::Math::TVector<double>::OneVector.field0_0x0._8_4_);
      *(ulonglong *)pauVar15[6] =
           CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._4_4_,
                    UE::Math::TVector<double>::OneVector.field0_0x0._0_4_);
      *(undefined8 *)(pauVar15[6] + 8) = uVar9;
      *(double *)pauVar15[7] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
      *(undefined8 *)pauVar15[8] = 0x3ff0000000000000;
      *(undefined8 *)(pauVar15[8] + 8) = 0x3ff0000000000000;
      *(undefined8 *)pauVar15[9] = 0x3ff0000000000000;
      *(undefined8 *)(pauVar15[9] + 8) = 0x3ff0000000000000;
      *(undefined8 *)pauVar15[10] = 0x3f000000;
      *(undefined8 *)(pauVar15[10] + 8) = 0xffffffffffffffff;
      param_2 = param_2 + -1;
      pauVar15 = pauVar15 + 0xd;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TArray<FPCGPointRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,int> @ 149860200

void __cdecl
DefaultConstructItems<TArray<FPCGPointRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,int>
          (void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0x408);
    do {
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      puVar1[1] = 0x10;
      puVar1 = puVar1 + 0x104;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSoftObjectPtr<ALandscapeProxy>,int> @ 149860230

void __cdecl
DestructItems<TSoftObjectPtr<ALandscapeProxy>,int>
          (TSoftObjectPtr<ALandscapeProxy> *param_1,int param_2)

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

// DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int> @ 149860270

void __cdecl
DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
          (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *param_1,int param_2)

{
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this;
  
  if (param_2 != 0) {
    this = (TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            *)&param_1->field_0x18;
    do {
      if (*(int *)&this->field_0xc != -1) {
        *(undefined4 *)&this[1].field_0x10 = 0;
        if (*(void **)&this[1].field_0x8 != (void *)0x0) {
          FMemory::Free(*(void **)&this[1].field_0x8);
        }
        TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (this);
      }
      this = (TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this[2].field_0x28;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TArray<FPCGPointRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,int> @ 1498602e0

void __cdecl
DestructItems<TArray<FPCGPointRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,int>
          (TArray<FPCGPointRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *param_1,
          int param_2)

{
  ForElementType<FPCGPointRef> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->AllocatorInstance).SecondaryData;
    do {
      if (*pFVar1 != (ForElementType<FPCGPointRef>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      pFVar1 = pFVar1 + 0x82;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TArray<FPhysicsShapeReference_Chaos,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>,int> @ 149860330

void __cdecl
DestructItems<TArray<FPhysicsShapeReference_Chaos,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>,int>
          (TArray<FPhysicsShapeReference_Chaos,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
           *param_1,int param_2)

{
  ForElementType<FPhysicsShapeReference_Chaos> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->AllocatorInstance).SecondaryData;
    do {
      if (*pFVar1 != (ForElementType<FPhysicsShapeReference_Chaos>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      pFVar1 = pFVar1 + 0x42;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FPhysicsShapeAdapter_Chaos,int> @ 149860380

void __cdecl
DestructItems<FPhysicsShapeAdapter_Chaos,int>(FPhysicsShapeAdapter_Chaos *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FPhysicsShapeAdapter_Chaos::~FPhysicsShapeAdapter_Chaos(param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// ExtractActorFiltersIfNeeded<TSoftObjectPtr<AActor>,TArray<TSoftObjectPtr<AActor>,TSizedDefaultAllocator<32>_>,`FPCGWorldCommonQueryParams::ExtractActorFiltersIfNeeded'::__l2::<lambda_1>_> @ 1498611d0

/* WARNING: Removing unreachable block (ram,0x0001498613d7) */
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

bool __cdecl
PCGWorldCommonQueryParams::
ExtractActorFiltersIfNeeded<TSoftObjectPtr<AActor>,TArray<TSoftObjectPtr<AActor>,TSizedDefaultAllocator<32>_>,_FPCGWorldCommonQueryParams::ExtractActorFiltersIfNeeded_::__l2::<lambda_1>_>
          (FPCGWorldCommonQueryParams *param_1,UPCGData *param_2,
          TArray<TSoftObjectPtr<AActor>,TSizedDefaultAllocator<32>_> *param_3,FPCGContext *param_4,
          <lambda_1> param_5)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FSoftObjectPath *pFVar8;
  ForAnyElementType FVar9;
  FSoftObjectPath *pFVar10;
  undefined1 local_res8 [8];
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_88;
  FSoftObjectPath local_78;
  undefined8 local_58;
  FSoftObjectPath local_50;
  
  if (param_1->ActorFilterFromInput != NoTagFilter) {
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.ArrayNum = 0;
    local_88.ArrayMax = 0;
    bVar5 = PCGAttributeAccessorHelpers::
            ExtractAllValues<FSoftObjectPath,TSizedDefaultAllocator<32>_>
                      (param_2,&param_1->ActorFilterInputSource,&local_88,param_4,
                       AllowBroadcastAndConstructible,false);
    iVar4 = local_88.ArrayNum;
    if (!bVar5) {
      DestructItems<FSoftObjectPath,int>
                ((FSoftObjectPath *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
      if ((FSoftObjectPath *)local_88.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
        FMemory::Free(local_88.AllocatorInstance.Data);
      }
      return false;
    }
    if (local_88.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(local_88._8_8_ & 0xffffffff);
    }
    DestructItems<TSoftObjectPtr<AActor>,int>
              ((TSoftObjectPtr<AActor> *)(param_3->AllocatorInstance).Data,param_3->ArrayNum);
    piVar1 = &param_3->ArrayMax;
    param_3->ArrayNum = 0;
    if (*piVar1 != iVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar4,&param_3->AllocatorInstance,0,piVar1);
    }
    iVar4 = local_88.ArrayNum;
    pFVar10 = (FSoftObjectPath *)
              (local_88.AllocatorInstance.Data + (longlong)local_88.ArrayNum * 0x20);
    FVar9.Data = local_88.AllocatorInstance.Data;
    while( true ) {
      if (local_88.ArrayNum != iVar4) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FSoftObjectPath_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if ((FSoftObjectPath *)FVar9.Data == pFVar10) break;
      pFVar8 = FSoftObjectPath::FSoftObjectPath(&local_78,(FSoftObjectPath *)FVar9.Data);
      local_58 = 0;
      FSoftObjectPath::FSoftObjectPath(&local_50,pFVar8);
      pFVar2 = (pFVar8->SubPathString).Data.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      pFVar2 = (param_3->AllocatorInstance).Data;
      if (((pFVar2 <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 < pFVar2 + (longlong)*piVar1 * 0x28)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      iVar7 = param_3->ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x828,&param_3->AllocatorInstance,piVar1);
      }
      param_3->ArrayNum = iVar7 + 1;
      pFVar2 = (param_3->AllocatorInstance).Data + (longlong)iVar7 * 0x28;
      *(undefined8 *)pFVar2 = local_58;
      *(FName *)(pFVar2 + 8) = local_50.AssetPath.PackageName;
      *(FName *)(pFVar2 + 0x10) = local_50.AssetPath.AssetName;
      *(undefined8 *)(pFVar2 + 0x18) = 0;
      *(FScriptContainerElement **)(pFVar2 + 0x18) =
           local_50.SubPathString.Data.AllocatorInstance.Data;
      local_50.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar2 + 0x20) = local_50.SubPathString.Data.ArrayNum;
      *(int *)(pFVar2 + 0x24) = local_50.SubPathString.Data.ArrayMax;
      local_50.SubPathString.Data.ArrayNum = 0;
      local_50.SubPathString.Data.ArrayMax = 0;
      FVar9.Data = FVar9.Data + 0x20;
    }
    DestructItems<FSoftObjectPath,int>
              ((FSoftObjectPath *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
    if ((FSoftObjectPath *)local_88.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
      FMemory::Free(local_88.AllocatorInstance.Data);
    }
  }
  return true;
}

// ExtractAllValues<FSoftObjectPath,TSizedDefaultAllocator<32>_> @ 149861440

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
PCGAttributeAccessorHelpers::ExtractAllValues<FSoftObjectPath,TSizedDefaultAllocator<32>_>
          (IPCGAttributeAccessor *param_1,IPCGAttributeAccessorKeys *param_2,
          TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *param_3,
          EPCGAttributeAccessorFlags param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uStack_1c;
  TArrayView<FSoftObjectPath,int> local_18;
  
  if ((param_1 == (IPCGAttributeAccessor *)0x0) || (param_2 == (IPCGAttributeAccessorKeys *)0x0)) {
    bVar2 = false;
  }
  else {
    iVar4 = (**(code **)(param_2->_padding_ + 0x10))(param_2);
    if (iVar4 < 1) {
      bVar2 = true;
    }
    else {
      iVar4 = (**(code **)(param_2->_padding_ + 0x10))(param_2);
      TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>::SetNum(param_3,iVar4,Default);
      local_18.DataPtr = (FSoftObjectPath *)(param_3->AllocatorInstance).Data;
      iVar4 = param_3->ArrayNum;
      if (iVar4 < 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      local_18._12_4_ = uStack_1c;
      local_18.ArrayNum = iVar4;
      bVar2 = IPCGAttributeAccessor::GetRange<FSoftObjectPath>(param_1,&local_18,0,param_2,param_4);
    }
  }
  return bVar2;
}

// ExtractAllValues<FSoftObjectPath,TSizedDefaultAllocator<32>_> @ 149861520

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
PCGAttributeAccessorHelpers::ExtractAllValues<FSoftObjectPath,TSizedDefaultAllocator<32>_>
          (UPCGData *param_1,FPCGAttributePropertyInputSelector *param_2,
          TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *param_3,FPCGContext *param_4,
          EPCGAttributeAccessorFlags param_5,bool param_6)

{
  code *pcVar1;
  undefined8 this;
  undefined8 uVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  undefined1 local_78 [16];
  FSoftObjectPath *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TArrayView<FSoftObjectPath,int> local_58;
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
      goto LAB_149861671;
    }
  }
  else if ((IPCGAttributeAccessorKeys *)local_78._8_8_ != (IPCGAttributeAccessorKeys *)0x0) {
    iVar5 = (**(code **)(*(longlong *)local_78._8_8_ + 0x10))(local_78._8_8_);
    if (iVar5 < 1) {
      bVar3 = true;
    }
    else {
      iVar5 = (**(code **)(*(longlong *)uVar2 + 0x10))(uVar2);
      TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>::SetNum(param_3,iVar5,Default);
      local_68 = (FSoftObjectPath *)(param_3->AllocatorInstance).Data;
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
      local_58.DataPtr = local_68;
      bVar3 = IPCGAttributeAccessor::GetRange<FSoftObjectPath>
                        ((IPCGAttributeAccessor *)this,&local_58,0,
                         (IPCGAttributeAccessorKeys *)uVar2,param_5);
      if ((!bVar3) && (!param_6)) {
        PCGLog::Metadata::LogFailToGetAttributeError(&local_48,param_4);
      }
    }
    goto LAB_149861671;
  }
  PCGLog::Metadata::LogFailToCreateAccessorError(&local_48,param_4);
  bVar3 = false;
LAB_149861671:
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

// FindElementsWithBoundsTestInternal<`UPCGCollisionWrapperData::SamplePoint'::__l2::<lambda_1>_> @ 1498616f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>::
FindElementsWithBoundsTestInternal<_UPCGCollisionWrapperData::SamplePoint_::__l2::<lambda_1>_>
          (TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *this,uint param_1
          ,FOctreeNodeContext *param_2,FBoxCenterAndExtent *param_3,<lambda_1> *param_4)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  ulonglong uVar17;
  float fVar18;
  float fVar19;
  uint uVar20;
  bool bVar21;
  uint uVar22;
  undefined4 uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  undefined7 extraout_var;
  FScriptContainerElement *extraout_RAX;
  undefined4 uVar28;
  int iVar29;
  int iVar30;
  uint uVar31;
  char *pcVar32;
  undefined1 *this_00;
  uint uVar33;
  FScriptContainerElement *pFVar34;
  byte bVar35;
  FPointRef *pFVar37;
  uint uVar38;
  FScriptContainerElement *pFVar39;
  longlong lVar40;
  longlong lVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  double dVar50;
  uint uVar51;
  double dVar52;
  uint uVar53;
  uint uVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  uint uVar58;
  undefined1 local_res8 [8];
  uint local_res10;
  FOctreeNodeContext *local_res18;
  TVector4<double>_u_0 local_f8;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  double local_b8;
  double local_b0;
  FScriptContainerElement *pFVar27;
  uint uVar36;
  
  uVar38 = ~param_1 >> 0x1f;
  uVar22 = 0;
  if ((int)param_1 < (this->TreeNodes).ArrayNum) {
    uVar22 = uVar38;
  }
  local_res10 = param_1;
  local_res18 = param_2;
  if ((uVar22 == 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar21)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*(int *)((this->TreeNodes).AllocatorInstance.Data + (longlong)(int)param_1 * 8 + 4) != 0) {
    iVar30 = (this->TreeElements).ArrayNum;
    pcVar32 = (char *)(longlong)iVar30;
    uVar22 = 0;
    if ((int)param_1 < iVar30) {
      uVar22 = uVar38;
    }
    if (uVar22 == 0) {
      pcVar32 = "(Index >= 0) & (Index < ArrayNum)";
      bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar21) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar33 = _UNK_15061cc8c;
    uVar26 = _UNK_15061cc88;
    uVar25 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar22 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    pFVar39 = (this->TreeElements).AllocatorInstance.Data + (longlong)(int)param_1 * 0x410;
    iVar30 = *(int *)(pFVar39 + 0x408);
    pFVar27 = *(FScriptContainerElement **)(pFVar39 + 0x400);
    if (*(FScriptContainerElement **)(pFVar39 + 0x400) == (FScriptContainerElement *)0x0) {
      pFVar27 = pFVar39;
    }
    pFVar37 = (FPointRef *)(pFVar27 + (longlong)iVar30 * 0x40);
    pFVar34 = pFVar27 + 0x20;
    while( true ) {
      uVar23 = SUB84(pFVar27,0);
      uVar28 = SUB84(pcVar32,0);
      if (*(int *)(pFVar39 + 0x408) != iVar30) {
        this_00 = local_res8;
        local_res8[0] = 0;
        bVar21 = `TCheckedPointerIterator<PCGPointOctree::FPointRef_const_,int,0>::operator!='::__l2
                 ::<lambda_1>::operator()(this_00);
        uVar28 = SUB84(this_00,0);
        uVar23 = (undefined4)CONCAT71(extraout_var,bVar21);
      }
      uVar24 = local_res10;
      if ((FPointRef *)(pFVar34 + -0x20) == pFVar37) break;
      dVar50 = *(double *)(pFVar34 + -8) - (param_3->Center).field0_0x0._s_0.Z;
      dVar52 = 0.0 - (param_3->Center).field0_0x0._s_0.W;
      lVar40 = -(ulonglong)
                ((param_3->Extent).field0_0x0._s_0.W + 0.0 <
                (double)CONCAT44((uint)((ulonglong)dVar52 >> 0x20) & uVar33,SUB84(dVar52,0) & uVar26
                                ));
      auVar6._8_4_ = (int)lVar40;
      auVar6._0_8_ = -(ulonglong)
                      (*(double *)(pFVar34 + 0x10) + (param_3->Extent).field0_0x0._s_0.Z <
                      (double)CONCAT44((uint)((ulonglong)dVar50 >> 0x20) & uVar25,
                                       SUB84(dVar50,0) & uVar22));
      auVar6._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
      iVar29 = movmskpd(uVar28,auVar6);
      dVar50 = *(double *)(pFVar34 + -0x18) - (param_3->Center).field0_0x0._s_0.X;
      dVar52 = *(double *)(pFVar34 + -0x10) - (param_3->Center).field0_0x0._s_0.Y;
      lVar40 = -(ulonglong)
                ((param_3->Extent).field0_0x0._s_0.Y + *(double *)(pFVar34 + 8) <
                (double)CONCAT44((uint)((ulonglong)dVar52 >> 0x20) & uVar33,SUB84(dVar52,0) & uVar26
                                ));
      auVar7._8_4_ = (int)lVar40;
      auVar7._0_8_ = -(ulonglong)
                      ((param_3->Extent).field0_0x0._s_0.X + *(double *)pFVar34 <
                      (double)CONCAT44((uint)((ulonglong)dVar50 >> 0x20) & uVar25,
                                       SUB84(dVar50,0) & uVar22));
      auVar7._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
      uVar24 = movmskpd(uVar23,auVar7);
      pFVar27 = (FScriptContainerElement *)(ulonglong)uVar24;
      uVar24 = iVar29 << 2 | uVar24;
      pcVar32 = (char *)(ulonglong)uVar24;
      if (uVar24 == 0) {
        pcVar32 = (char *)param_4;
        `UPCGCollisionWrapperData::SamplePoint'::__l2::<lambda_1>::operator()
                  (param_4,(FPointRef *)(pFVar34 + -0x20));
        pFVar27 = extraout_RAX;
      }
      pFVar34 = pFVar34 + 0x40;
    }
    iVar30 = (this->TreeNodes).ArrayNum;
    lVar40 = (longlong)(int)local_res10;
    uVar22 = 0;
    if ((int)local_res10 < iVar30) {
      uVar22 = uVar38;
    }
    if (uVar22 == 0) {
      iVar30 = 0x506106c8;
      bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar21) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar27 = (this->TreeNodes).AllocatorInstance.Data;
    if (*(int *)(pFVar27 + lVar40 * 8) != -1) {
      dVar5 = (param_3->Center).field0_0x0._s_0.Z;
      dVar10 = (param_3->Center).field0_0x0._s_0.W;
      dVar11 = (local_res18->Bounds).Center.field0_0x0._s_0.Z;
      dVar12 = (local_res18->Bounds).Center.field0_0x0._s_0.W;
      dVar50 = local_res18->ChildCenterOffset;
      dVar52 = local_res18->ChildExtent;
      dVar13 = (local_res18->Bounds).Center.field0_0x0._s_0.X;
      dVar14 = (local_res18->Bounds).Center.field0_0x0._s_0.Y;
      dVar15 = (param_3->Center).field0_0x0._s_0.X;
      dVar16 = (param_3->Center).field0_0x0._s_0.Y;
      lVar41 = -(ulonglong)
                ((dVar50 + dVar12) - dVar52 < (param_3->Extent).field0_0x0._s_0.W + dVar10);
      auVar2._8_4_ = (int)lVar41;
      auVar2._0_8_ = -(ulonglong)
                      ((dVar50 + dVar11) - dVar52 < (param_3->Extent).field0_0x0._s_0.Z + dVar5);
      auVar2._12_4_ = (int)((ulonglong)lVar41 >> 0x20);
      uVar33 = movmskpd((int)pFVar34,auVar2);
      lVar41 = -(ulonglong)
                ((dVar50 + dVar14) - dVar52 < (param_3->Extent).field0_0x0._s_0.Y + dVar16);
      auVar3._8_4_ = (int)lVar41;
      auVar3._0_8_ = -(ulonglong)
                      ((dVar50 + dVar13) - dVar52 < (param_3->Extent).field0_0x0._s_0.X + dVar15);
      auVar3._12_4_ = (int)((ulonglong)lVar41 >> 0x20);
      uVar25 = movmskpd((int)pFVar27,auVar3);
      auVar57._8_8_ =
           -(ulonglong)(dVar10 - (param_3->Extent).field0_0x0._s_0.W <= (dVar12 - dVar50) + dVar52);
      auVar57._0_8_ =
           -(ulonglong)(dVar5 - (param_3->Extent).field0_0x0._s_0.Z <= (dVar11 - dVar50) + dVar52);
      iVar30 = movmskpd(iVar30,auVar57);
      lVar41 = -(ulonglong)
                (dVar16 - (param_3->Extent).field0_0x0._s_0.Y <= (dVar14 - dVar50) + dVar52);
      auVar9._8_4_ = (int)lVar41;
      auVar9._0_8_ = -(ulonglong)
                      (dVar15 - (param_3->Extent).field0_0x0._s_0.X <= (dVar13 - dVar50) + dVar52);
      auVar9._12_4_ = (int)((ulonglong)lVar41 >> 0x20);
      uVar26 = movmskpd(uVar25,auVar9);
      uVar22 = 0;
      if ((int)uVar24 < (this->TreeNodes).ArrayNum) {
        uVar22 = uVar38;
      }
      if ((uVar22 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar20 = _UNK_15074415c;
      uVar24 = _UNK_150744158;
      uVar38 = _UNK_150744154;
      uVar22 = ___xmm_00000008000000040000000200000001;
      dVar52 = __real_3ff1000000000000;
      fVar19 = _UNK_15068954c;
      fVar18 = _UNK_150689548;
      dVar50 = __real_3fe0000000000000;
      uVar36 = 0;
      uVar58 = (uint)__xmm_80000000000000008000000000000000;
      uVar17 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
      iVar29 = *(int *)((this->TreeNodes).AllocatorInstance.Data + lVar40 * 8);
      do {
        uVar31 = (~uVar36 & 7) << 3 | uVar36 & 7;
        if ((uVar31 & ((uVar33 & 1) << 2 | uVar25 & 7 | (iVar30 << 2 | uVar26) << 3)) == uVar31) {
          uVar53 = SUB84(local_res18->ChildCenterOffset,0) ^ uVar58;
          uVar54 = (uint)((ulonglong)local_res18->ChildCenterOffset >> 0x20) ^ (uint)uVar17;
          dVar5 = (double)(float)-(uint)((uVar36 & uVar22) == uVar22);
          uVar31 = SUB84(dVar5,0);
          uVar42 = (uint)((ulonglong)dVar5 >> 0x20);
          dVar5 = (double)(float)-(uint)((uVar36 & uVar38) == uVar38);
          uVar43 = SUB84(dVar5,0);
          uVar44 = (uint)((ulonglong)dVar5 >> 0x20);
          dVar5 = (double)(float)-(uint)((uVar36 & uVar24) == uVar24);
          uVar45 = SUB84(dVar5,0);
          uVar46 = (uint)((ulonglong)dVar5 >> 0x20);
          dVar5 = (double)(float)-(uint)((uVar36 & uVar20) == uVar20);
          uVar47 = SUB84(dVar5,0);
          uVar48 = (uint)((ulonglong)dVar5 >> 0x20);
          uVar49 = SUB84(local_res18->ChildCenterOffset,0);
          auVar56._0_4_ = uVar31 & uVar49;
          uVar51 = (uint)((ulonglong)local_res18->ChildCenterOffset >> 0x20);
          auVar56._4_4_ = uVar42 & uVar51;
          auVar56._8_4_ = uVar43 & uVar49;
          auVar56._12_4_ = uVar44 & uVar51;
          auVar4._4_4_ = ~uVar42 & uVar54;
          auVar4._0_4_ = ~uVar31 & uVar53;
          auVar4._8_4_ = ~uVar43 & uVar53;
          auVar4._12_4_ = ~uVar44 & uVar54;
          local_f8._s_0.X =
               SUB168(auVar56 | auVar4,0) + (local_res18->Bounds).Center.field0_0x0._s_0.X;
          local_f8._s_0.Y =
               SUB168(auVar56 | auVar4,8) + (local_res18->Bounds).Center.field0_0x0._s_0.Y;
          auVar55._0_4_ = uVar45 & uVar49;
          auVar55._4_4_ = uVar46 & uVar51;
          auVar55._8_4_ = uVar47 & uVar49;
          auVar55._12_4_ = uVar48 & uVar51;
          auVar8._4_4_ = ~uVar46 & uVar54;
          auVar8._0_4_ = ~uVar45 & uVar53;
          auVar8._8_4_ = ~uVar47 & uVar53;
          auVar8._12_4_ = ~uVar48 & uVar54;
          local_b0 = local_res18->ChildExtent;
          local_d8._8_4_ = SUB84(local_b0,0);
          local_d8._0_8_ = local_b0;
          local_d8._12_4_ = (int)((ulonglong)local_b0 >> 0x20);
          dVar5 = local_b0 * (double)fVar19;
          local_f8._16_8_ =
               (SUB168(auVar55 | auVar8,0) + (local_res18->Bounds).Center.field0_0x0._s_0.Z) *
               (double)fVar18;
          local_f8._24_8_ =
               (SUB168(auVar55 | auVar8,8) + (local_res18->Bounds).Center.field0_0x0._s_0.W) *
               (double)fVar19;
          local_c8._8_4_ = SUB84(dVar5,0);
          local_c8._0_8_ = local_b0 * (double)fVar18;
          local_c8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
          local_b8 = local_b0 * dVar50 * dVar52;
          local_b0 = local_b0 - local_b8;
          FindElementsWithBoundsTestInternal<_UPCGCollisionWrapperData::SamplePoint_::__l2::<lambda_1>_>
                    (this,uVar36 + iVar29,(FOctreeNodeContext *)&local_f8._s_0,param_3,param_4);
        }
        bVar35 = (char)uVar36 + 1;
        uVar36 = (uint)bVar35;
      } while ((char)bVar35 < '\b');
    }
  }
  return;
}

// GetFullNameForCastLogError<UPCGBasePointData_const_> @ 149862720

FString * __cdecl
GetFullNameForCastLogError<UPCGBasePointData_const_>
          (FString *__return_storage_ptr__,UPCGBasePointData *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetFullNameForCastLogError<UPCGBasePointData> @ 149862750

FString * __cdecl
GetFullNameForCastLogError<UPCGBasePointData>
          (FString *__return_storage_ptr__,UPCGBasePointData *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetTypeHash<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> @ 1498634a0

uint __cdecl
GetTypeHash<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
          (TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<int> FVar3;
  uint uVar4;
  undefined1 local_res8 [8];
  
  uVar4 = 0;
  FVar3 = (param_1->AllocatorInstance).SecondaryData;
  piVar1 = &param_1->ArrayNum;
  iVar2 = *piVar1;
  if (FVar3 != (ForElementType<int>)0x0) {
    param_1 = (TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)FVar3;
  }
  FVar3 = (ForElementType<int>)((longlong)param_1 + (longlong)iVar2 * 4);
  while( true ) {
    if (*piVar1 != iVar2) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if ((ForElementType<int>)param_1 == FVar3) break;
    uVar4 = uVar4 ^ uVar4 * 0x40 + -0x61c88647 + (uVar4 >> 2) + *(int *)param_1;
    param_1 = (TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
              ((longlong)param_1 + 4);
  }
  return uVar4;
}

// GetTypeName<UPCGPointArrayData> @ 149863520

FString * __cdecl GetTypeName<UPCGPointArrayData>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UPCGPointArrayData::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UPCGPointData> @ 149863560

FString * __cdecl GetTypeName<UPCGPointData>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UPCGPointData::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UPCGPolygon2DData> @ 1498635a0

FString * __cdecl GetTypeName<UPCGPolygon2DData>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UPCGPolygon2DData::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UPCGSplineData> @ 1498635e0

FString * __cdecl GetTypeName<UPCGSplineData>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UPCGSplineData::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSortInternal<FName,int,FIdentityFunctor,TDereferenceWrapper<FName,`FPCGSplineStruct::GetAttributeChannelNames'::__l12::<lambda_1>_>_> @ 149863620

void __cdecl
AlgoImpl::
HeapSortInternal<FName,int,FIdentityFunctor,TDereferenceWrapper<FName,_FPCGSplineStruct::GetAttributeChannelNames_::__l12::<lambda_1>_>_>
          (FName *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FName,_public:_class_TArray<FName,TSizedDefaultAllocator<32>_>_const_&___cdecl_FPCGSplineStruct::GetAttributeChannelNames(void)const_::_12_::<lambda_1>_>
          param_4)

{
  FName *pFVar1;
  FName *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar7 = iVar6 * 2 + 1;
  iVar11 = iVar7;
  iVar9 = iVar6;
  do {
    while (param_2 <= iVar7) {
LAB_149863727:
      if (iVar9 == 0) {
        iVar7 = param_2 + -1;
        lVar10 = (longlong)iVar7;
        if (0 < iVar7) {
          do {
            iVar11 = 0;
            FVar3 = *param_1;
            *param_1 = param_1[lVar10];
            param_1[lVar10] = FVar3;
            if (1 < iVar7) {
              do {
                iVar9 = iVar11 * 2;
                iVar6 = iVar9 + 1;
                if (iVar9 + 2 < iVar7) {
                  bVar5 = `FPCGSplineStruct::GetAttributeChannelNames'::__l12::<lambda_1>::
                          operator()(param_4.Predicate,param_1 + (iVar9 + 2),param_1 + iVar6);
                  if (bVar5) {
                    iVar6 = iVar9;
                  }
                  iVar6 = iVar6 + 1;
                }
                pFVar1 = param_1 + iVar6;
                pFVar2 = param_1 + iVar11;
                bVar5 = `FPCGSplineStruct::GetAttributeChannelNames'::__l12::<lambda_1>::operator()
                                  (param_4.Predicate,pFVar2,pFVar1);
                if (!bVar5) break;
                FVar3 = *pFVar2;
                *pFVar2 = *pFVar1;
                *pFVar1 = FVar3;
                iVar11 = iVar6;
              } while (iVar6 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar10 = lVar10 + -1;
          } while (0 < lVar10);
        }
        return;
      }
      iVar6 = iVar9 + -1;
      iVar7 = iVar11 + -2;
      iVar11 = iVar7;
      iVar9 = iVar6;
    }
    iVar7 = iVar6 * 2;
    iVar8 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      bVar5 = `FPCGSplineStruct::GetAttributeChannelNames'::__l12::<lambda_1>::operator()
                        (param_4.Predicate,param_1 + (iVar7 + 2),param_1 + iVar8);
      if (bVar5) {
        iVar8 = iVar7;
      }
      iVar8 = iVar8 + 1;
    }
    pFVar1 = param_1 + iVar8;
    pFVar2 = param_1 + iVar6;
    bVar5 = `FPCGSplineStruct::GetAttributeChannelNames'::__l12::<lambda_1>::operator()
                      (param_4.Predicate,pFVar2,pFVar1);
    if (!bVar5) goto LAB_149863727;
    FVar3 = *pFVar2;
    *pFVar2 = *pFVar1;
    iVar7 = iVar8 * 2 + 1;
    *pFVar1 = FVar3;
    iVar6 = iVar8;
  } while( true );
}

// InternalConstructor<UPCGBaseTextureData> @ 149863810

void __cdecl InternalConstructor<UPCGBaseTextureData>(FObjectInitializer *param_1)

{
  if ((UPCGBaseTextureData *)param_1->Obj != (UPCGBaseTextureData *)0x0) {
    UPCGBaseTextureData::UPCGBaseTextureData((UPCGBaseTextureData *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UPCGCollisionShapeData> @ 149863830

void __cdecl InternalConstructor<UPCGCollisionShapeData>(FObjectInitializer *param_1)

{
  UPCGSpatialDataWithPointCache *this;
  float fVar1;
  float fVar2;
  float fVar3;
  
  this = (UPCGSpatialDataWithPointCache *)param_1->Obj;
  if (this != (UPCGSpatialDataWithPointCache *)0x0) {
    UPCGSpatialDataWithPointCache::UPCGSpatialDataWithPointCache(this,param_1);
    this->_padding_ = (longlong)&___7UPCGCollisionShapeData__6B_;
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
    this[1]._padding_ = (longlong)(double)fVar1;
    this[1]._padding_ = (longlong)(double)fVar2;
    this[1]._padding_ = (longlong)(double)fVar3;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PointDataCache.CachedPointData.field0_0x0.DebugPtr = (UPCGBasePointData *)0x0;
    this[1].PointDataCache.CachedBoundedPointDataBoxes.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1].PointDataCache.CachedBoundedPointDataBoxes.ArrayNum = 0;
    *(undefined4 *)((longlong)&this[1].PointDataCache.CachedBoundedPointDataBoxes.ArrayNum + 1) = 0;
    *(undefined2 *)((longlong)&this[1].PointDataCache.CachedBoundedPointDataBoxes.ArrayMax + 1) = 0;
    *(undefined1 *)((longlong)&this[1].PointDataCache.CachedBoundedPointDataBoxes.ArrayMax + 3) = 0;
    this[1].PointDataCache.CachedBoundedPointData.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    this[1].PointDataCache.CachedBoundedPointData.ArrayNum = 0;
    this[1].PointDataCache.CachedBoundedPointData.ArrayMax = 0;
    this[1].PointArrayDataCache.CachedPointData.field0_0x0.DebugPtr = (UPCGBasePointData *)0x0;
    this[1].PointArrayDataCache.CachedBoundedPointDataBoxes.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    this[1].PointArrayDataCache.CachedBoundedPointDataBoxes.ArrayNum = 0;
    this[1].PointArrayDataCache.CachedBoundedPointDataBoxes.ArrayMax = 0;
    this[1].PointArrayDataCache.CachedBoundedPointData.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined1 *)&this[1].PointArrayDataCache.CachedBoundedPointData.ArrayNum = 0;
    *(undefined4 *)((longlong)&this[1].PointArrayDataCache.CachedBoundedPointData.ArrayNum + 1) = 0;
    *(undefined2 *)((longlong)&this[1].PointArrayDataCache.CachedBoundedPointData.ArrayMax + 1) = 0;
    *(undefined1 *)((longlong)&this[1].PointArrayDataCache.CachedBoundedPointData.ArrayMax + 3) = 0;
  }
  return;
}

// InternalConstructor<UPCGCollisionWrapperData> @ 149863960

void __cdecl InternalConstructor<UPCGCollisionWrapperData>(FObjectInitializer *param_1)

{
  UPCGSpatialData *this;
  
  this = (UPCGSpatialData *)param_1->Obj;
  if (this != (UPCGSpatialData *)0x0) {
    UPCGSpatialData::UPCGSpatialData(this,param_1);
    this->_padding_ = (longlong)&___7UPCGCollisionWrapperData__6B_;
    this[1]._padding_ = 0;
    FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
              ((FPCGAttributePropertyInputSelector *)&this[1]._padding_);
    *(undefined1 *)&this[1].TargetActor.WeakPtr.ObjectIndex = 0;
    this[1].bKeepZeroDensityPoints = false;
    this[1].bHasCachedLastSelector = false;
    *(undefined2 *)&this[1].field_0x52 = 0;
    this[1]._padding_ = 0;
    *(undefined8 *)&this[1].CachedLastSelector = 0;
    *(undefined8 *)&this[1].CachedLastSelector.field_0x8 = 0;
    *(undefined8 *)&this[1].CachedLastSelector.field_0x10 = 0;
    this[1].CachedLastSelector.field_0x18 = 0;
    *(undefined8 *)&this[1].CachedLastSelector.field_0x20 = 0;
    *(undefined8 *)&this[1].CachedLastSelector.field_0x28 = 0;
  }
  return;
}

// InternalConstructor<UPCGDataTypeIdentifierHelpers> @ 1498639f0

void __cdecl InternalConstructor<UPCGDataTypeIdentifierHelpers>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UPCGDataTypeIdentifierHelpers__6B_;
  }
  return;
}

// InternalConstructor<UPCGDifferenceData> @ 149863a20

void __cdecl InternalConstructor<UPCGDifferenceData>(FObjectInitializer *param_1)

{
  UPCGSpatialDataWithPointCache *this;
  
  this = (UPCGSpatialDataWithPointCache *)param_1->Obj;
  if (this != (UPCGSpatialDataWithPointCache *)0x0) {
    UPCGSpatialDataWithPointCache::UPCGSpatialDataWithPointCache(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UPCGDifferenceData__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UPCGDynamicMeshData> @ 149863a80

void __cdecl InternalConstructor<UPCGDynamicMeshData>(FObjectInitializer *param_1)

{
  UPCGSpatialData *this;
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FName local_res8;
  
  this = (UPCGSpatialData *)param_1->Obj;
  if (this != (UPCGSpatialData *)0x0) {
    UPCGSpatialData::UPCGSpatialData(this,param_1);
    this->_padding_ = (longlong)&___7UPCGDynamicMeshData__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    UE::Geometry::FSparseDynamicOctree3::FSparseDynamicOctree3
              ((FSparseDynamicOctree3 *)&this[1]._padding_);
    this[4]._padding_ = 0x7fefffffffffffff;
    this[4]._padding_ = 0x7fefffffffffffff;
    this[4]._padding_ = 0x7fefffffffffffff;
    this[4]._padding_ = -0x10000000000001;
    this[4].TargetActor.WeakPtr = (FWeakObjectPtr)0xffefffffffffffff;
    this[4].bKeepZeroDensityPoints = true;
    this[4].bHasCachedLastSelector = true;
    *(undefined2 *)&this[4].field_0x52 = 0xffff;
    this[4]._padding_ = -0x100001;
    *(undefined1 *)&this[4].CachedLastSelector = 1;
    InitializeCriticalSectionAndSpinCount
              ((LPCRITICAL_SECTION)&this[4].CachedLastSelector.field_0x8,4000);
    *(undefined8 *)&this[4].CachedLastSelector.field_0x30 = 0;
    *(undefined8 *)&this[4].CachedLastSelector.field_0x38 = 0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    *(undefined1 *)&this[5]._padding_ = 0;
    *(undefined4 *)((longlong)&this[5]._padding_ + 1) = 0;
    *(undefined4 *)((longlong)&this[5]._padding_ + 5) = 0x1000000;
    *(undefined1 *)((longlong)&this[5]._padding_ + 1) = 0;
    pFVar2 = FName::FName(&local_res8,L"DynamicMesh");
    FVar1 = *pFVar2;
    pUVar3 = Z_Construct_UClass_UDynamicMesh_NoRegister();
    pUVar4 = FObjectInitializer::CreateDefaultSubobject
                       (param_1,(UObject *)this,FVar1,pUVar3,pUVar3,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    this[1]._padding_ = (longlong)pUVar4;
  }
  return;
}

// InternalConstructor<UPCGIntersectionData> @ 149863c00

void __cdecl InternalConstructor<UPCGIntersectionData>(FObjectInitializer *param_1)

{
  UPCGSpatialDataWithPointCache *this;
  
  this = (UPCGSpatialDataWithPointCache *)param_1->Obj;
  if (this != (UPCGSpatialDataWithPointCache *)0x0) {
    UPCGSpatialDataWithPointCache::UPCGSpatialDataWithPointCache(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPCGIntersectionData__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 1) = 0;
    *(undefined2 *)((longlong)&this[1]._padding_ + 5) = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 7) = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 1) = 0;
    *(undefined2 *)((longlong)&this[1]._padding_ + 5) = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 7) = 0;
  }
  return;
}

// InternalConstructor<UPCGLandscapeData> @ 149863ce0

void __cdecl InternalConstructor<UPCGLandscapeData>(FObjectInitializer *param_1)

{
  UPCGSurfaceData *this;
  
  this = (UPCGSurfaceData *)param_1->Obj;
  if (this != (UPCGSurfaceData *)0x0) {
    UPCGSurfaceData::UPCGSurfaceData(this,param_1);
    *(undefined ***)this = &___7UPCGLandscapeData__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this->field_0x1a8 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)&this[1].field_0x30 = 0;
    this[1].field_0x38 = 0;
    *(undefined8 *)&this[1].field_0x39 = 0;
    *(undefined4 *)&this[1].field_0x41 = 1;
    *(undefined2 *)&this[1].field_0x45 = 1;
    *(undefined8 *)&this[1].field_0x48 = 0;
    *(undefined8 *)&this[1].field_0x50 = 0;
    *(undefined8 *)&this[1].field_0x58 = 0;
    *(undefined8 *)&this[1].field_0x60 = 0;
    *(undefined8 *)&this[1].field_0x68 = 0;
  }
  return;
}

// InternalConstructor<UPCGLandscapeSplineData> @ 149863da0

void __cdecl InternalConstructor<UPCGLandscapeSplineData>(FObjectInitializer *param_1)

{
  UPCGSpatialDataWithPointCache *this;
  
  this = (UPCGSpatialDataWithPointCache *)param_1->Obj;
  if (this != (UPCGSpatialDataWithPointCache *)0x0) {
    UPCGSpatialDataWithPointCache::UPCGSpatialDataWithPointCache(this,param_1);
    this->_padding_ = (longlong)&___7UPCGLandscapeSplineData__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UPCGPointArrayData> @ 149863e00

void __cdecl InternalConstructor<UPCGPointArrayData>(FObjectInitializer *param_1)

{
  UPCGBasePointData *this;
  
  this = (UPCGBasePointData *)param_1->Obj;
  if (this != (UPCGBasePointData *)0x0) {
    UPCGBasePointData::UPCGBasePointData(this,param_1);
    this->_padding_ = (longlong)&___7UPCGPointArrayData__6B_;
    FPCGPointArray::FPCGPointArray((FPCGPointArray *)(this + 1));
    this[1].Bounds.IsValid = '\0';
    this[1].Bounds.Pad[0] = '\0';
    this[1].Bounds.Pad[1] = '\0';
    this[1].Bounds.Pad[2] = '\0';
    this[1].Bounds.Pad[3] = '\0';
    this[1].Bounds.Pad[4] = '\0';
    this[1].Bounds.Pad[5] = '\0';
    this[1].Bounds.Pad[6] = '\0';
    this[1].bOctreeIsDirty = false;
    this[1].bBoundsAreDirty = false;
    *(undefined2 *)&this[1].field_0x1aa = 0;
  }
  return;
}

// InternalConstructor<UPCGPointData> @ 149863e50

void __cdecl InternalConstructor<UPCGPointData>(FObjectInitializer *param_1)

{
  UPCGBasePointData *this;
  
  this = (UPCGBasePointData *)param_1->Obj;
  if (this != (UPCGBasePointData *)0x0) {
    UPCGBasePointData::UPCGBasePointData(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UPCGPointData__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    TOctree2<FPCGPointRef,FPCGPointRefSemantics>::TOctree2<FPCGPointRef,FPCGPointRefSemantics>
              ((TOctree2<FPCGPointRef,FPCGPointRefSemantics> *)&this[1]._padding_);
    return;
  }
  return;
}

// InternalConstructor<UPCGPolyLineData> @ 149863eb0

void __cdecl InternalConstructor<UPCGPolyLineData>(FObjectInitializer *param_1)

{
  UPCGSpatialDataWithPointCache *this;
  
  this = (UPCGSpatialDataWithPointCache *)param_1->Obj;
  if (this != (UPCGSpatialDataWithPointCache *)0x0) {
    UPCGSpatialDataWithPointCache::UPCGSpatialDataWithPointCache(this,param_1);
    this->_padding_ = (longlong)&___7UPCGPolyLineData__6B_;
  }
  return;
}

// InternalConstructor<UPCGPolygon2DData> @ 149863ee0

void __cdecl InternalConstructor<UPCGPolygon2DData>(FObjectInitializer *param_1)

{
  UPCGSpatialDataWithPointCache *this;
  code *pcVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  bool bVar10;
  FPCGMetadataDomainID local_18;
  
  this = (UPCGSpatialDataWithPointCache *)param_1->Obj;
  if (this != (UPCGSpatialDataWithPointCache *)0x0) {
    UPCGSpatialDataWithPointCache::UPCGSpatialDataWithPointCache(this,param_1);
    this->_padding_ = (longlong)&___7UPCGPolygon2DData__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    this[1]._padding_ = (longlong)(double)GlobalVectorConstants::Float0001.m128_f32[0];
    this[1]._padding_ = auVar4._8_8_;
    auVar5._8_4_ = SUB84((double)fVar3,0);
    auVar5._0_8_ = (double)fVar2;
    auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
    this[1]._padding_ = (longlong)(double)fVar2;
    this[1]._padding_ = auVar5._8_8_;
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    this[1]._padding_ = (longlong)(double)GlobalVectorConstants::FloatZero.m128_f32[0];
    this[1]._padding_ = auVar6._8_8_;
    auVar7._8_4_ = SUB84((double)fVar3,0);
    auVar7._0_8_ = (double)fVar2;
    auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
    this[1]._padding_ = (longlong)(double)fVar2;
    this[1]._padding_ = auVar7._8_8_;
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    this[1]._padding_ = (longlong)(double)GlobalVectorConstants::Float1110.m128_f32[0];
    this[1]._padding_ = auVar8._8_8_;
    auVar9._8_4_ = SUB84((double)fVar3,0);
    auVar9._0_8_ = (double)fVar2;
    auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
    this[1]._padding_ = (longlong)(double)fVar2;
    this[1].PointDataCache.CachedPointData = (TObjectPtr<UPCGBasePointData_const_>)auVar9._8_8_;
    this[1].PointDataCache.CachedBoundedPointDataBoxes.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    this[1].PointDataCache.CachedBoundedPointDataBoxes.ArrayNum = 0;
    this[1].PointDataCache.CachedBoundedPointDataBoxes.ArrayMax = 0;
    this[1].PointArrayDataCache.CachedPointData.field0_0x0.DebugPtr = (UPCGBasePointData *)0x0;
    *(undefined4 *)&this[1].PointArrayDataCache.CachedBoundedPointDataBoxes.AllocatorInstance.Data =
         0;
    *(undefined4 *)
     ((longlong)&this[1].PointArrayDataCache.CachedBoundedPointDataBoxes.AllocatorInstance.Data + 4)
         = 0x80;
    this[1].PointArrayDataCache.CachedBoundedPointDataBoxes.ArrayNum = -1;
    this[1].PointArrayDataCache.CachedBoundedPointDataBoxes.ArrayMax = 0;
    this[1].PointArrayDataCache.CachedBoundedPointData.ArrayNum = 0;
    this[1].PointArrayDataCache.CachedBoundedPointData.ArrayMax = 0;
    *(undefined4 *)this[1].CacheLock.CriticalSection.Opaque1 = 0;
    this[1].CacheLock.CriticalSection.Opaque2[0] = 0;
    this[1].CacheLock.CriticalSection.Opaque2[1] = 0;
    this[1].CacheLock.CriticalSection.Opaque3[0] = (void *)0x0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[2]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    if (this->_padding_ == 0) {
      bVar10 = FDebug::CheckVerifyFailedImpl2
                         ("Metadata",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGPolygon2DData.cpp"
                          ,0xf3,L"");
      if (bVar10) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_18 = PCGMetadataDomainID::Elements;
    UPCGMetadata::SetupDomain((UPCGMetadata *)this->_padding_,&local_18,true);
  }
  return;
}

// InternalConstructor<UPCGPolygon2DInteriorSurfaceData> @ 149864070

void __cdecl InternalConstructor<UPCGPolygon2DInteriorSurfaceData>(FObjectInitializer *param_1)

{
  UPCGSurfaceData *this;
  
  this = (UPCGSurfaceData *)param_1->Obj;
  if (this != (UPCGSurfaceData *)0x0) {
    UPCGSurfaceData::UPCGSurfaceData(this,param_1);
    *(undefined ***)this = &___7UPCGPolygon2DInteriorSurfaceData__6B_;
    *(undefined8 *)&this->field_0x1a8 = 0;
  }
  return;
}

// InternalConstructor<UPCGPrimitiveData> @ 1498640b0

void __cdecl InternalConstructor<UPCGPrimitiveData>(FObjectInitializer *param_1)

{
  UPCGSpatialDataWithPointCache *this;
  undefined8 local_res8;
  
  this = (UPCGSpatialDataWithPointCache *)param_1->Obj;
  if (this != (UPCGSpatialDataWithPointCache *)0x0) {
    UPCGSpatialDataWithPointCache::UPCGSpatialDataWithPointCache(this,param_1);
    this->_padding_ = (longlong)&___7UPCGPrimitiveData__6B_;
    local_res8 = 0;
    this[1]._padding_ = 0x4059000000000000;
    this[1]._padding_ = 0x4059000000000000;
    this[1]._padding_ = 0x4059000000000000;
    this[1]._padding_ = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&this[1]._padding_,(FObjectPtr)&local_res8);
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 1) = 0;
    *(undefined2 *)((longlong)&this[1]._padding_ + 5) = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 7) = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 1) = 0;
    *(undefined2 *)((longlong)&this[1]._padding_ + 5) = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 7) = 0;
  }
  return;
}

// InternalConstructor<UPCGProjectionData> @ 1498641b0

void __cdecl InternalConstructor<UPCGProjectionData>(FObjectInitializer *param_1)

{
  if ((UPCGProjectionData *)param_1->Obj != (UPCGProjectionData *)0x0) {
    UPCGProjectionData::UPCGProjectionData((UPCGProjectionData *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UPCGRenderTargetData> @ 1498641d0

void __cdecl InternalConstructor<UPCGRenderTargetData>(FObjectInitializer *param_1)

{
  UPCGBaseTextureData *this;
  
  this = (UPCGBaseTextureData *)param_1->Obj;
  if (this != (UPCGBaseTextureData *)0x0) {
    UPCGBaseTextureData::UPCGBaseTextureData(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPCGRenderTargetData__6B_;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UPCGResourceData> @ 149864220

void __cdecl InternalConstructor<UPCGResourceData>(FObjectInitializer *param_1)

{
  UPCGData *this;
  
  this = (UPCGData *)param_1->Obj;
  if (this != (UPCGData *)0x0) {
    UPCGData::UPCGData(this,param_1);
    this->_padding_ = (longlong)&___7UPCGResourceData__6B_;
  }
  return;
}

// InternalConstructor<UPCGSpatialData> @ 149864250

void __cdecl InternalConstructor<UPCGSpatialData>(FObjectInitializer *param_1)

{
  if ((UPCGSpatialData *)param_1->Obj != (UPCGSpatialData *)0x0) {
    UPCGSpatialData::UPCGSpatialData((UPCGSpatialData *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UPCGSpatialDataWithPointCache> @ 149864270

void __cdecl InternalConstructor<UPCGSpatialDataWithPointCache>(FObjectInitializer *param_1)

{
  if ((UPCGSpatialDataWithPointCache *)param_1->Obj != (UPCGSpatialDataWithPointCache *)0x0) {
    UPCGSpatialDataWithPointCache::UPCGSpatialDataWithPointCache
              ((UPCGSpatialDataWithPointCache *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UPCGSplineData> @ 149864290

void __cdecl InternalConstructor<UPCGSplineData>(FObjectInitializer *param_1)

{
  UPCGSpatialDataWithPointCache *this;
  code *pcVar1;
  bool bVar2;
  FObjectInitializer *pFVar3;
  FPCGMetadataDomainID local_18;
  
  this = (UPCGSpatialDataWithPointCache *)param_1->Obj;
  if (this != (UPCGSpatialDataWithPointCache *)0x0) {
    pFVar3 = FObjectInitializer::Get();
    UPCGSpatialDataWithPointCache::UPCGSpatialDataWithPointCache(this,pFVar3);
    this->_padding_ = (longlong)&___7UPCGSplineData__6B_;
    FPCGSplineStruct::FPCGSplineStruct((FPCGSplineStruct *)(this + 1));
    this[2].PointArrayDataCache.CachedPointData.field0_0x0.DebugPtr = (UPCGBasePointData *)0x0;
    this[2].PointArrayDataCache.CachedBoundedPointDataBoxes.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    this[2].PointArrayDataCache.CachedBoundedPointDataBoxes.ArrayNum = 0;
    this[2].PointArrayDataCache.CachedBoundedPointDataBoxes.ArrayMax = 0;
    this[2].PointArrayDataCache.CachedBoundedPointData.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    this[2].PointArrayDataCache.CachedBoundedPointData.ArrayNum = 0;
    this[2].PointArrayDataCache.CachedBoundedPointData.ArrayMax = 0;
    this[2].CacheLock.CriticalSection.Opaque1[0] = (void *)0x0;
    *(undefined1 *)this[2].CacheLock.CriticalSection.Opaque2 = 0;
    *(undefined4 *)((longlong)this[2].CacheLock.CriticalSection.Opaque2 + 1) = 0;
    *(undefined2 *)((longlong)this[2].CacheLock.CriticalSection.Opaque2 + 5) = 0;
    *(undefined1 *)((longlong)this[2].CacheLock.CriticalSection.Opaque2 + 7) = 0;
    if (this->_padding_ == 0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Metadata",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGSplineData.cpp"
                         ,0x2d,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_18 = PCGMetadataDomainID::Elements;
    UPCGMetadata::SetupDomain((UPCGMetadata *)this->_padding_,&local_18,true);
  }
  return;
}

// InternalConstructor<UPCGSplineInteriorSurfaceData> @ 149864370

void __cdecl InternalConstructor<UPCGSplineInteriorSurfaceData>(FObjectInitializer *param_1)

{
  UPCGSurfaceData *this;
  
  this = (UPCGSurfaceData *)param_1->Obj;
  if (this != (UPCGSurfaceData *)0x0) {
    UPCGSurfaceData::UPCGSurfaceData(this,param_1);
    *(undefined ***)this = &___7UPCGSplineInteriorSurfaceData__6B_;
    FPCGSplineStruct::FPCGSplineStruct((FPCGSplineStruct *)(this + 1));
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)&this[2].field_0x28 = 0;
    *(undefined8 *)&this[2].field_0x30 = 0;
    *(undefined8 *)&this[2].field_0x38 = 0;
    *(undefined8 *)&this[2].field_0x40 = 0;
    *(undefined8 *)&this[2].field_0x48 = 0;
    this[2].field_0x50 = 0;
    *(undefined4 *)&this[2].field_0x51 = 0;
    *(undefined2 *)&this[2].field_0x55 = 0;
    this[2].field_0x57 = 0;
    *(undefined8 *)&this[2].field_0x58 = 0;
    *(undefined8 *)&this[2].field_0x60 = 0;
    *(undefined8 *)&this[2].field_0x68 = 0;
    *(undefined8 *)&this[2].field_0x70 = 0;
  }
  return;
}

// InternalConstructor<UPCGSplineProjectionData> @ 149864420

void __cdecl InternalConstructor<UPCGSplineProjectionData>(FObjectInitializer *param_1)

{
  UPCGProjectionData *this;
  
  this = (UPCGProjectionData *)param_1->Obj;
  if (this != (UPCGProjectionData *)0x0) {
    UPCGProjectionData::UPCGProjectionData(this,param_1);
    this->_padding_ = (longlong)&___7UPCGSplineProjectionData__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
  }
  return;
}

// InternalConstructor<UPCGStaticMeshResourceData> @ 149864470

void __cdecl InternalConstructor<UPCGStaticMeshResourceData>(FObjectInitializer *param_1)

{
  UPCGData *this;
  undefined8 local_res8;
  
  this = (UPCGData *)param_1->Obj;
  if (this != (UPCGData *)0x0) {
    UPCGData::UPCGData(this,param_1);
    this->_padding_ = (longlong)&___7UPCGStaticMeshResourceData__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1]._padding_,0);
    local_res8 = 0;
    FSoftObjectPtr::operator=((FSoftObjectPtr *)(this + 1),(FObjectPtr)&local_res8);
  }
  return;
}

// InternalConstructor<UPCGSurfaceData> @ 1498644e0

void __cdecl InternalConstructor<UPCGSurfaceData>(FObjectInitializer *param_1)

{
  if ((UPCGSurfaceData *)param_1->Obj != (UPCGSurfaceData *)0x0) {
    UPCGSurfaceData::UPCGSurfaceData((UPCGSurfaceData *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UPCGTextureData> @ 149864500

void __cdecl InternalConstructor<UPCGTextureData>(FObjectInitializer *param_1)

{
  UPCGBaseTextureData *this;
  undefined8 local_res8;
  
  this = (UPCGBaseTextureData *)param_1->Obj;
  if (this != (UPCGBaseTextureData *)0x0) {
    UPCGBaseTextureData::UPCGBaseTextureData(this,param_1);
    this->_padding_ = (longlong)&___7UPCGTextureData__6B_;
    this[1]._padding_ = 0;
    local_res8 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(this + 1),(FObjectPtr)&local_res8);
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined2 *)&this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UPCGUnionData> @ 149864590

void __cdecl InternalConstructor<UPCGUnionData>(FObjectInitializer *param_1)

{
  UPCGSpatialDataWithPointCache *this;
  
  this = (UPCGSpatialDataWithPointCache *)param_1->Obj;
  if (this != (UPCGSpatialDataWithPointCache *)0x0) {
    UPCGSpatialDataWithPointCache::UPCGSpatialDataWithPointCache(this,param_1);
    this->_padding_ = (longlong)&___7UPCGUnionData__6B_;
    this[1]._padding_ = 0;
    *(undefined2 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 1) = 0;
    *(undefined2 *)((longlong)&this[1]._padding_ + 5) = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 7) = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 1) = 0;
    *(undefined2 *)((longlong)&this[1]._padding_ + 5) = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 7) = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UPCGVirtualTextureData> @ 149864670

void __cdecl InternalConstructor<UPCGVirtualTextureData>(FObjectInitializer *param_1)

{
  UPCGSurfaceData *this;
  
  this = (UPCGSurfaceData *)param_1->Obj;
  if (this != (UPCGSurfaceData *)0x0) {
    UPCGSurfaceData::UPCGSurfaceData(this,param_1);
    *(undefined ***)this = &___7UPCGVirtualTextureData__6B_;
    *(undefined8 *)&this->field_0x1a8 = 0;
  }
  return;
}

// InternalConstructor<UPCGVolumeData> @ 1498646b0

void __cdecl InternalConstructor<UPCGVolumeData>(FObjectInitializer *param_1)

{
  if ((UPCGVolumeData *)param_1->Obj != (UPCGVolumeData *)0x0) {
    UPCGVolumeData::UPCGVolumeData((UPCGVolumeData *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UPCGWorldRayHitData> @ 1498646d0

void __cdecl InternalConstructor<UPCGWorldRayHitData>(FObjectInitializer *param_1)

{
  UPCGSurfaceData *this;
  UPCGSurfaceData *this_00;
  undefined8 uVar1;
  double dVar2;
  undefined8 local_res8;
  
  this_00 = (UPCGSurfaceData *)param_1->Obj;
  if (this_00 != (UPCGSurfaceData *)0x0) {
    UPCGSurfaceData::UPCGSurfaceData(this_00,param_1);
    *(undefined ***)this_00 = &___7UPCGWorldRayHitData__6B_;
    *(undefined8 *)&this_00->field_0x1a8 = 0;
    local_res8 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&this_00->field_0x1a8,(FObjectPtr)&local_res8);
    this = this_00 + 1;
    local_res8 = 0;
    *(int *)&this->field_0x0 = 0;
    *(int *)&this->field_0x4 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
    *(undefined8 *)&this_00[1].field_0x8 = 0;
    *(undefined8 *)&this_00[1].field_0x10 = 0;
    *(undefined8 *)&this_00[1].field_0x18 = 0;
    *(undefined8 *)&this_00[1].field_0x20 = 0;
    *(undefined8 *)&this_00[1].field_0x28 = 0;
    *(undefined8 *)&this_00[1].field_0x30 = 0;
    this_00[1].field_0x38 = 0;
    *(undefined8 *)&this_00[1].field_0x39 = 0;
    uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    *(double *)&this_00[1].field_0x48 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    *(undefined8 *)&this_00[1].field_0x50 = uVar1;
    *(double *)&this_00[1].field_0x58 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    *(undefined4 *)&this_00[1].field_0x60 = 0x42c80000;
    *(undefined4 *)&this_00[1].field_0x64 = 0x42c80000;
    *(undefined4 *)&this_00[1].field_0x68 = 0x42c80000;
    dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    *(double *)&this_00[1].field_0x70 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    *(double *)&this_00[1].field_0x78 = dVar2;
    *(double *)&this_00[1].field_0x80 = UE::Math::TRotator<double>::ZeroRotator.Roll;
    FPCGWorldRayHitQueryParams::FPCGWorldRayHitQueryParams
              ((FPCGWorldRayHitQueryParams *)&this_00[1].field_0x88);
    this_00[1].LocalBounds.IsValid = '\0';
    this_00[1].LocalBounds.Pad[0] = '\0';
    this_00[1].LocalBounds.Pad[1] = '\0';
    this_00[1].LocalBounds.Pad[2] = '\0';
    this_00[1].LocalBounds.Pad[3] = '\0';
    this_00[1].LocalBounds.Pad[4] = '\0';
    this_00[1].LocalBounds.Pad[5] = '\0';
    this_00[1].LocalBounds.Pad[6] = '\0';
    *(undefined8 *)&this_00[1].field_0x1a8 = 0;
    *(undefined8 *)(this_00 + 2) = 0;
    *(undefined8 *)&this_00[2].field_0x8 = 0;
    *(undefined8 *)&this_00[2].field_0x20 = 0;
    *(undefined4 *)&this_00[2].field_0x28 = 0;
    *(undefined4 *)&this_00[2].field_0x2c = 0x80;
    *(undefined4 *)&this_00[2].field_0x30 = 0xffffffff;
    *(undefined4 *)&this_00[2].field_0x34 = 0;
    *(undefined8 *)&this_00[2].field_0x40 = 0;
    *(undefined4 *)&this_00[2].field_0x48 = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this_00[2].field_0x50,4000);
    this_00[2].field_0x78 = 0;
    *(undefined8 *)&this_00[2].field_0x80 = 0;
    *(undefined8 *)&this_00[2].field_0x88 = 0;
    *(undefined8 *)&this_00[2].field_0xa0 = 0;
    *(undefined4 *)&this_00[2].field_0xa8 = 0;
    *(undefined4 *)&this_00[2].field_0xac = 0x80;
    *(undefined4 *)&this_00[2].field_0xb4 = 0;
    *(undefined4 *)&this_00[2].field_0xb0 = 0xffffffff;
    *(undefined8 *)&this_00[2].field_0xc0 = 0;
    *(undefined4 *)&this_00[2].field_0xc8 = 0;
  }
  return;
}

// InternalConstructor<UPCGWorldVolumetricData> @ 149864890

/* WARNING: Enum "EPCGWorldQueryFilter": Some values do not have unique names */

void __cdecl InternalConstructor<UPCGWorldVolumetricData>(FObjectInitializer *param_1)

{
  UPCGVolumeData *this;
  undefined8 local_res8;
  
  this = (UPCGVolumeData *)param_1->Obj;
  if (this != (UPCGVolumeData *)0x0) {
    UPCGVolumeData::UPCGVolumeData(this,param_1);
    this->_padding_ = (longlong)&___7UPCGWorldVolumetricData__6B_;
    this[1]._padding_ = 0;
    local_res8 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(this + 1),(FObjectPtr)&local_res8);
    local_res8 = 0;
    this[1]._padding_ = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&this[1]._padding_,(FObjectPtr)&local_res8);
    FPCGWorldCommonQueryParams::FPCGWorldCommonQueryParams
              ((FPCGWorldCommonQueryParams *)&this[1]._padding_);
    *(undefined1 *)&this[1]._padding_ = 1;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].VoxelSize.field0_0x0._s_0.X = 0.0;
    *(undefined4 *)((longlong)&this[1].VoxelSize.field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&this[1].VoxelSize.field0_0x0 + 0xc) = 0x80;
    *(undefined4 *)((longlong)&this[1].VoxelSize.field0_0x0 + 0x10) = 0xffffffff;
    *(undefined4 *)((longlong)&this[1].VoxelSize.field0_0x0 + 0x14) = 0;
    this[1].Bounds.Min.field0_0x0._s_0.X = 0.0;
    *(undefined4 *)((longlong)&this[1].Bounds.Min.field0_0x0 + 8) = 0;
    InitializeCriticalSectionAndSpinCount
              ((LPCRITICAL_SECTION)((longlong)&this[1].Bounds.Min.field0_0x0 + 0x10),4000);
    *(undefined1 *)&this[1].StrictBounds.Min.field0_0x0 = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<UPCGBaseTextureData> @ 149884d80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGBaseTextureData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGBaseTextureData *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGBaseTextureData::GetPrivateStaticClass();
  pUVar3 = (UPCGBaseTextureData *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UPCGBaseTextureData *)0x0) {
    pUVar3 = UPCGBaseTextureData::UPCGBaseTextureData(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGCollisionShapeData> @ 149884e20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGCollisionShapeData>(FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  UPCGSpatialDataWithPointCache *this;
  
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = UPCGCollisionShapeData::GetPrivateStaticClass();
  this = (UPCGSpatialDataWithPointCache *)
         StaticAllocateObject
                   (pUVar5,pUVar4,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSpatialDataWithPointCache *)0x0) {
    UPCGSpatialDataWithPointCache::UPCGSpatialDataWithPointCache(this,param_1);
    this->_padding_ = (longlong)&___7UPCGCollisionShapeData__6B_;
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
    this[1]._padding_ = (longlong)(double)fVar1;
    this[1]._padding_ = (longlong)(double)fVar2;
    this[1]._padding_ = (longlong)(double)fVar3;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PointDataCache.CachedPointData.field0_0x0.DebugPtr = (UPCGBasePointData *)0x0;
    this[1].PointDataCache.CachedBoundedPointDataBoxes.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1].PointDataCache.CachedBoundedPointDataBoxes.ArrayNum = 0;
    *(undefined4 *)((longlong)&this[1].PointDataCache.CachedBoundedPointDataBoxes.ArrayNum + 1) = 0;
    *(undefined2 *)((longlong)&this[1].PointDataCache.CachedBoundedPointDataBoxes.ArrayMax + 1) = 0;
    *(undefined1 *)((longlong)&this[1].PointDataCache.CachedBoundedPointDataBoxes.ArrayMax + 3) = 0;
    this[1].PointDataCache.CachedBoundedPointData.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    this[1].PointDataCache.CachedBoundedPointData.ArrayNum = 0;
    this[1].PointDataCache.CachedBoundedPointData.ArrayMax = 0;
    this[1].PointArrayDataCache.CachedPointData.field0_0x0.DebugPtr = (UPCGBasePointData *)0x0;
    this[1].PointArrayDataCache.CachedBoundedPointDataBoxes.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    this[1].PointArrayDataCache.CachedBoundedPointDataBoxes.ArrayNum = 0;
    this[1].PointArrayDataCache.CachedBoundedPointDataBoxes.ArrayMax = 0;
    this[1].PointArrayDataCache.CachedBoundedPointData.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined1 *)&this[1].PointArrayDataCache.CachedBoundedPointData.ArrayNum = 0;
    *(undefined4 *)((longlong)&this[1].PointArrayDataCache.CachedBoundedPointData.ArrayNum + 1) = 0;
    *(undefined2 *)((longlong)&this[1].PointArrayDataCache.CachedBoundedPointData.ArrayMax + 1) = 0;
    *(undefined1 *)((longlong)&this[1].PointArrayDataCache.CachedBoundedPointData.ArrayMax + 3) = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGCollisionWrapperData> @ 149884fc0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGCollisionWrapperData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGData *this;
  undefined8 local_res10;
  
  local_res10 = 0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGCollisionWrapperData::GetPrivateStaticClass();
  this = (UPCGData *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGData *)0x0) {
    UPCGData::UPCGData(this,param_1);
    local_res10 = 0;
    this->_padding_ = (longlong)&___7UPCGSpatialData__6B_;
    this[1]._padding_ = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(this + 1),(FObjectPtr)&local_res10);
    *(undefined2 *)&this[1]._padding_ = 0;
    FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
              ((FPCGAttributePropertyInputSelector *)&this[1]._padding_);
    this->_padding_ = (longlong)&___7UPCGCollisionWrapperData__6B_;
    this[2]._padding_ = 0;
    FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
              ((FPCGAttributePropertyInputSelector *)&this[2]._padding_);
    *(undefined1 *)&this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3].UID = 0;
    *(undefined1 *)&this[3].Crc.Value = 0;
    this[3].Metadata.field0_0x0.DebugPtr = (UPCGMetadata *)0x0;
    this[3].bIsFullDataCrc = false;
    this[3].Usage = (atomic<unsigned_char>)0x0;
    this[3]._padding_ = 0;
    this[3].CollectionRefCount = (atomic<int>)0x0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGDataTypeIdentifierHelpers> @ 1498850f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGDataTypeIdentifierHelpers>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGDataTypeIdentifierHelpers::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPCGDataTypeIdentifierHelpers__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGDifferenceData> @ 1498851a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGDifferenceData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGSpatialDataWithPointCache *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGDifferenceData::GetPrivateStaticClass();
  this = (UPCGSpatialDataWithPointCache *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSpatialDataWithPointCache *)0x0) {
    UPCGSpatialDataWithPointCache::UPCGSpatialDataWithPointCache(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UPCGDifferenceData__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGDynamicMeshData> @ 149885270

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGDynamicMeshData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGData *this;
  UPCGData *pUVar3;
  undefined8 local_res10;
  
  pUVar3 = (UPCGData *)0x0;
  local_res10 = 0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGDynamicMeshData::GetPrivateStaticClass();
  this = (UPCGData *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGData *)0x0) {
    UPCGData::UPCGData(this,param_1);
    local_res10 = 0;
    this->_padding_ = (longlong)&___7UPCGSpatialData__6B_;
    this[1]._padding_ = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(this + 1),(FObjectPtr)&local_res10);
    *(undefined2 *)&this[1]._padding_ = 0;
    FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
              ((FPCGAttributePropertyInputSelector *)&this[1]._padding_);
    this->_padding_ = (longlong)&___7UPCGDynamicMeshData__6B_;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    UE::Geometry::FSparseDynamicOctree3::FSparseDynamicOctree3
              ((FSparseDynamicOctree3 *)&this[2]._padding_);
    this[9]._padding_ = 0x7fefffffffffffff;
    this[9]._padding_ = 0x7fefffffffffffff;
    this[9]._padding_ = 0x7fefffffffffffff;
    this[9]._padding_ = -0x10000000000001;
    this[9]._padding_ = -0x10000000000001;
    this[9].UID = 0xffefffffffffffff;
    *(undefined1 *)&this[9].Crc.Value = 1;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this[9].Metadata,4000);
    this[10]._padding_ = 0;
    this[10]._padding_ = 0;
    this[10].UID = 0;
    this[10].Crc.Value = 0;
    this[10].Crc.bValid = false;
    *(undefined3 *)&this[10].Crc.field_0x5 = 0;
    this[10].Metadata.field0_0x0.DebugPtr = (UPCGMetadata *)0x0;
    this[10].bIsFullDataCrc = false;
    this[10].Usage = (atomic<unsigned_char>)0x0;
    this[10]._padding_ = 0;
    this[10].CollectionRefCount = (atomic<int>)0x0;
    *(undefined1 *)&this[0xb]._padding_ = 0;
    *(undefined4 *)((longlong)&this[0xb]._padding_ + 1) = 0;
    *(undefined4 *)((longlong)&this[0xb]._padding_ + 5) = 0x1000000;
    *(undefined1 *)((longlong)&this[0xb]._padding_ + 1) = 0;
    pUVar3 = this;
  }
  return (UObject *)pUVar3;
}

// InternalVTableHelperCtorCaller<UPCGIntersectionData> @ 149885410

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGIntersectionData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGSpatialDataWithPointCache *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGIntersectionData::GetPrivateStaticClass();
  this = (UPCGSpatialDataWithPointCache *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSpatialDataWithPointCache *)0x0) {
    UPCGSpatialDataWithPointCache::UPCGSpatialDataWithPointCache(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPCGIntersectionData__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 1) = 0;
    *(undefined2 *)((longlong)&this[1]._padding_ + 5) = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 7) = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 1) = 0;
    *(undefined2 *)((longlong)&this[1]._padding_ + 5) = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 7) = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGLandscapeData> @ 149885560

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGLandscapeData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGSurfaceData *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGLandscapeData::GetPrivateStaticClass();
  this = (UPCGSurfaceData *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSurfaceData *)0x0) {
    UPCGSurfaceData::UPCGSurfaceData(this,param_1);
    *(undefined ***)this = &___7UPCGLandscapeData__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this->field_0x1a8 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)&this[1].field_0x30 = 0;
    this[1].field_0x38 = 0;
    *(undefined8 *)&this[1].field_0x39 = 0;
    *(undefined4 *)&this[1].field_0x41 = 1;
    *(undefined2 *)&this[1].field_0x45 = 1;
    *(undefined8 *)&this[1].field_0x48 = 0;
    *(undefined8 *)&this[1].field_0x50 = 0;
    *(undefined8 *)&this[1].field_0x58 = 0;
    *(undefined8 *)&this[1].field_0x60 = 0;
    *(undefined8 *)&this[1].field_0x68 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGLandscapeSplineData> @ 149885690

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGLandscapeSplineData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGSpatialDataWithPointCache *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGLandscapeSplineData::GetPrivateStaticClass();
  this = (UPCGSpatialDataWithPointCache *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSpatialDataWithPointCache *)0x0) {
    UPCGSpatialDataWithPointCache::UPCGSpatialDataWithPointCache(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPCGLandscapeSplineData__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGPointArrayData> @ 149885770

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGPointArrayData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGBasePointData *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGPointArrayData::GetPrivateStaticClass();
  this = (UPCGBasePointData *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGBasePointData *)0x0) {
    UPCGBasePointData::UPCGBasePointData(this,param_1);
    this->_padding_ = (longlong)&___7UPCGPointArrayData__6B_;
    FPCGPointArray::FPCGPointArray((FPCGPointArray *)(this + 1));
    this[1].Bounds.IsValid = '\0';
    this[1].Bounds.Pad[0] = '\0';
    this[1].Bounds.Pad[1] = '\0';
    this[1].Bounds.Pad[2] = '\0';
    this[1].Bounds.Pad[3] = '\0';
    this[1].Bounds.Pad[4] = '\0';
    this[1].Bounds.Pad[5] = '\0';
    this[1].Bounds.Pad[6] = '\0';
    this[1].bOctreeIsDirty = false;
    this[1].bBoundsAreDirty = false;
    *(undefined2 *)&this[1].field_0x1aa = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGPointData> @ 149885840

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGPointData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGBasePointData *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGPointData::GetPrivateStaticClass();
  this = (UPCGBasePointData *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGBasePointData *)0x0) {
    UPCGBasePointData::UPCGBasePointData(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UPCGPointData__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    TOctree2<FPCGPointRef,FPCGPointRefSemantics>::TOctree2<FPCGPointRef,FPCGPointRefSemantics>
              ((TOctree2<FPCGPointRef,FPCGPointRefSemantics> *)&this[1]._padding_);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGPolyLineData> @ 149885910

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGPolyLineData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGSpatialDataWithPointCache *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGPolyLineData::GetPrivateStaticClass();
  this = (UPCGSpatialDataWithPointCache *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSpatialDataWithPointCache *)0x0) {
    UPCGSpatialDataWithPointCache::UPCGSpatialDataWithPointCache(this,param_1);
    this->_padding_ = (longlong)&___7UPCGPolyLineData__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGPolygon2DData> @ 1498859c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGPolygon2DData>(FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  UPCGSpatialDataWithPointCache *this;
  
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = UPCGPolygon2DData::GetPrivateStaticClass();
  this = (UPCGSpatialDataWithPointCache *)
         StaticAllocateObject
                   (pUVar5,pUVar4,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSpatialDataWithPointCache *)0x0) {
    UPCGSpatialDataWithPointCache::UPCGSpatialDataWithPointCache(this,param_1);
    this->_padding_ = (longlong)&___7UPCGPolygon2DData__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
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
    this[1]._padding_ = (longlong)(double)fVar1;
    this[1]._padding_ = (longlong)(double)fVar2;
    this[1].PointDataCache.CachedPointData.field0_0x0 =
         (TObjectPtr<UPCGBasePointData_const_>_u_0)(double)fVar3;
    this[1].PointDataCache.CachedBoundedPointDataBoxes.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    this[1].PointDataCache.CachedBoundedPointDataBoxes.ArrayNum = 0;
    this[1].PointDataCache.CachedBoundedPointDataBoxes.ArrayMax = 0;
    this[1].PointArrayDataCache.CachedPointData.field0_0x0.DebugPtr = (UPCGBasePointData *)0x0;
    *(undefined4 *)&this[1].PointArrayDataCache.CachedBoundedPointDataBoxes.AllocatorInstance.Data =
         0;
    *(undefined4 *)
     ((longlong)&this[1].PointArrayDataCache.CachedBoundedPointDataBoxes.AllocatorInstance.Data + 4)
         = 0x80;
    this[1].PointArrayDataCache.CachedBoundedPointDataBoxes.ArrayNum = -1;
    this[1].PointArrayDataCache.CachedBoundedPointDataBoxes.ArrayMax = 0;
    this[1].PointArrayDataCache.CachedBoundedPointData.ArrayNum = 0;
    this[1].PointArrayDataCache.CachedBoundedPointData.ArrayMax = 0;
    *(undefined4 *)this[1].CacheLock.CriticalSection.Opaque1 = 0;
    this[1].CacheLock.CriticalSection.Opaque2[0] = 0;
    this[1].CacheLock.CriticalSection.Opaque2[1] = 0;
    this[1].CacheLock.CriticalSection.Opaque3[0] = (void *)0x0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[2]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGPolygon2DInteriorSurfaceData> @ 149885b80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGPolygon2DInteriorSurfaceData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGSurfaceData *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGPolygon2DInteriorSurfaceData::GetPrivateStaticClass();
  this = (UPCGSurfaceData *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSurfaceData *)0x0) {
    UPCGSurfaceData::UPCGSurfaceData(this,param_1);
    *(undefined ***)this = &___7UPCGPolygon2DInteriorSurfaceData__6B_;
    *(undefined8 *)&this->field_0x1a8 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGPrimitiveData> @ 149885c40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGPrimitiveData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGSpatialDataWithPointCache *this;
  undefined8 local_res10;
  
  local_res10 = 0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGPrimitiveData::GetPrivateStaticClass();
  this = (UPCGSpatialDataWithPointCache *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSpatialDataWithPointCache *)0x0) {
    UPCGSpatialDataWithPointCache::UPCGSpatialDataWithPointCache(this,param_1);
    local_res10 = 0;
    this->_padding_ = (longlong)&___7UPCGPrimitiveData__6B_;
    this[1]._padding_ = 0x4059000000000000;
    this[1]._padding_ = 0x4059000000000000;
    this[1]._padding_ = 0x4059000000000000;
    this[1]._padding_ = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&this[1]._padding_,(FObjectPtr)&local_res10);
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 1) = 0;
    *(undefined2 *)((longlong)&this[1]._padding_ + 5) = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 7) = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 1) = 0;
    *(undefined2 *)((longlong)&this[1]._padding_ + 5) = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 7) = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGProjectionData> @ 149885db0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGProjectionData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGProjectionData *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGProjectionData::GetPrivateStaticClass();
  pUVar3 = (UPCGProjectionData *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UPCGProjectionData *)0x0) {
    pUVar3 = UPCGProjectionData::UPCGProjectionData(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGRenderTargetData> @ 149885e50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGRenderTargetData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGBaseTextureData *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGRenderTargetData::GetPrivateStaticClass();
  this = (UPCGBaseTextureData *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGBaseTextureData *)0x0) {
    UPCGBaseTextureData::UPCGBaseTextureData(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPCGRenderTargetData__6B_;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGResourceData> @ 149885f10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGResourceData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGData *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGResourceData::GetPrivateStaticClass();
  this = (UPCGData *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGData *)0x0) {
    UPCGData::UPCGData(this,param_1);
    this->_padding_ = (longlong)&___7UPCGResourceData__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGSpatialData> @ 149885fc0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGSpatialData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGData *this;
  undefined8 local_res10;
  
  local_res10 = 0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGSpatialData::GetPrivateStaticClass();
  this = (UPCGData *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGData *)0x0) {
    UPCGData::UPCGData(this,param_1);
    local_res10 = 0;
    this->_padding_ = (longlong)&___7UPCGSpatialData__6B_;
    this[1]._padding_ = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(this + 1),(FObjectPtr)&local_res10);
    *(undefined2 *)&this[1]._padding_ = 0;
    FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
              ((FPCGAttributePropertyInputSelector *)&this[1]._padding_);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGSpatialDataWithPointCache> @ 149886090

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGSpatialDataWithPointCache>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGSpatialDataWithPointCache *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGSpatialDataWithPointCache::GetPrivateStaticClass();
  pUVar3 = (UPCGSpatialDataWithPointCache *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UPCGSpatialDataWithPointCache *)0x0) {
    pUVar3 = UPCGSpatialDataWithPointCache::UPCGSpatialDataWithPointCache(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGSplineData> @ 149886130

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGSplineData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGSpatialDataWithPointCache *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGSplineData::GetPrivateStaticClass();
  this = (UPCGSpatialDataWithPointCache *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSpatialDataWithPointCache *)0x0) {
    UPCGSpatialDataWithPointCache::UPCGSpatialDataWithPointCache(this,param_1);
    this->_padding_ = (longlong)&___7UPCGSplineData__6B_;
    FPCGSplineStruct::FPCGSplineStruct((FPCGSplineStruct *)(this + 1));
    this[2].PointArrayDataCache.CachedPointData.field0_0x0.DebugPtr = (UPCGBasePointData *)0x0;
    this[2].PointArrayDataCache.CachedBoundedPointDataBoxes.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    this[2].PointArrayDataCache.CachedBoundedPointDataBoxes.ArrayNum = 0;
    this[2].PointArrayDataCache.CachedBoundedPointDataBoxes.ArrayMax = 0;
    this[2].PointArrayDataCache.CachedBoundedPointData.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    this[2].PointArrayDataCache.CachedBoundedPointData.ArrayNum = 0;
    this[2].PointArrayDataCache.CachedBoundedPointData.ArrayMax = 0;
    this[2].CacheLock.CriticalSection.Opaque1[0] = (void *)0x0;
    *(undefined1 *)this[2].CacheLock.CriticalSection.Opaque2 = 0;
    *(undefined4 *)((longlong)this[2].CacheLock.CriticalSection.Opaque2 + 1) = 0;
    *(undefined2 *)((longlong)this[2].CacheLock.CriticalSection.Opaque2 + 5) = 0;
    *(undefined1 *)((longlong)this[2].CacheLock.CriticalSection.Opaque2 + 7) = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGSplineInteriorSurfaceData> @ 149886230

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGSplineInteriorSurfaceData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGSurfaceData *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGSplineInteriorSurfaceData::GetPrivateStaticClass();
  this = (UPCGSurfaceData *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSurfaceData *)0x0) {
    UPCGSurfaceData::UPCGSurfaceData(this,param_1);
    *(undefined ***)this = &___7UPCGSplineInteriorSurfaceData__6B_;
    FPCGSplineStruct::FPCGSplineStruct((FPCGSplineStruct *)(this + 1));
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)&this[2].field_0x28 = 0;
    *(undefined8 *)&this[2].field_0x30 = 0;
    *(undefined8 *)&this[2].field_0x38 = 0;
    *(undefined8 *)&this[2].field_0x40 = 0;
    *(undefined8 *)&this[2].field_0x48 = 0;
    this[2].field_0x50 = 0;
    *(undefined4 *)&this[2].field_0x51 = 0;
    *(undefined2 *)&this[2].field_0x55 = 0;
    this[2].field_0x57 = 0;
    *(undefined8 *)&this[2].field_0x58 = 0;
    *(undefined8 *)&this[2].field_0x60 = 0;
    *(undefined8 *)&this[2].field_0x68 = 0;
    *(undefined8 *)&this[2].field_0x70 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGSplineProjectionData> @ 149886350

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGSplineProjectionData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGProjectionData *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGSplineProjectionData::GetPrivateStaticClass();
  this = (UPCGProjectionData *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGProjectionData *)0x0) {
    UPCGProjectionData::UPCGProjectionData(this,param_1);
    this->_padding_ = (longlong)&___7UPCGSplineProjectionData__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGStaticMeshResourceData> @ 149886420

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGStaticMeshResourceData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGData *this;
  UPCGData *pUVar3;
  undefined8 local_res10;
  
  pUVar3 = (UPCGData *)0x0;
  local_res10 = 0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGStaticMeshResourceData::GetPrivateStaticClass();
  this = (UPCGData *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGData *)0x0) {
    UPCGData::UPCGData(this,param_1);
    this->_padding_ = (longlong)&___7UPCGStaticMeshResourceData__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1]._padding_,0);
    local_res10 = 0;
    FSoftObjectPtr::operator=((FSoftObjectPtr *)(this + 1),(FObjectPtr)&local_res10);
    pUVar3 = this;
  }
  return (UObject *)pUVar3;
}

// InternalVTableHelperCtorCaller<UPCGSurfaceData> @ 149886500

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGSurfaceData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGSurfaceData *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGSurfaceData::GetPrivateStaticClass();
  pUVar3 = (UPCGSurfaceData *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UPCGSurfaceData *)0x0) {
    pUVar3 = UPCGSurfaceData::UPCGSurfaceData(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGTextureData> @ 1498865a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGTextureData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGBaseTextureData *this;
  undefined8 local_res10;
  
  local_res10 = 0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGTextureData::GetPrivateStaticClass();
  this = (UPCGBaseTextureData *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGBaseTextureData *)0x0) {
    UPCGBaseTextureData::UPCGBaseTextureData(this,param_1);
    local_res10 = 0;
    this->_padding_ = (longlong)&___7UPCGTextureData__6B_;
    this[1]._padding_ = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(this + 1),(FObjectPtr)&local_res10);
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined2 *)&this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGUnionData> @ 1498866a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGUnionData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGSpatialDataWithPointCache *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGUnionData::GetPrivateStaticClass();
  this = (UPCGSpatialDataWithPointCache *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSpatialDataWithPointCache *)0x0) {
    UPCGSpatialDataWithPointCache::UPCGSpatialDataWithPointCache(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPCGUnionData__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 1) = 0;
    *(undefined2 *)((longlong)&this[1]._padding_ + 5) = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 7) = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 1) = 0;
    *(undefined2 *)((longlong)&this[1]._padding_ + 5) = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 7) = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGVirtualTextureData> @ 149886800

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGVirtualTextureData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGSurfaceData *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGVirtualTextureData::GetPrivateStaticClass();
  this = (UPCGSurfaceData *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSurfaceData *)0x0) {
    UPCGSurfaceData::UPCGSurfaceData(this,param_1);
    *(undefined ***)this = &___7UPCGVirtualTextureData__6B_;
    *(undefined8 *)&this->field_0x1a8 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGVolumeData> @ 1498868c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGVolumeData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGVolumeData *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGVolumeData::GetPrivateStaticClass();
  pUVar3 = (UPCGVolumeData *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UPCGVolumeData *)0x0) {
    pUVar3 = UPCGVolumeData::UPCGVolumeData(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGWorldRayHitData> @ 149886960

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGWorldRayHitData>(FVTableHelper *param_1)

{
  UPCGSurfaceData *this;
  undefined8 uVar1;
  double dVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UPCGSurfaceData *this_00;
  undefined8 local_res10;
  
  local_res10 = 0;
  pUVar3 = GetTransientPackageAsObject();
  pUVar4 = UPCGWorldRayHitData::GetPrivateStaticClass();
  this_00 = (UPCGSurfaceData *)
            StaticAllocateObject
                      (pUVar4,pUVar3,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                       Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                       (FGCReconstructionGuard *)0x0);
  if (this_00 != (UPCGSurfaceData *)0x0) {
    UPCGSurfaceData::UPCGSurfaceData(this_00,param_1);
    local_res10 = 0;
    *(undefined ***)this_00 = &___7UPCGWorldRayHitData__6B_;
    *(undefined8 *)&this_00->field_0x1a8 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&this_00->field_0x1a8,(FObjectPtr)&local_res10);
    this = this_00 + 1;
    local_res10 = 0;
    *(int *)&this->field_0x0 = 0;
    *(int *)&this->field_0x4 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res10);
    *(undefined8 *)&this_00[1].field_0x8 = 0;
    *(undefined8 *)&this_00[1].field_0x10 = 0;
    *(undefined8 *)&this_00[1].field_0x18 = 0;
    *(undefined8 *)&this_00[1].field_0x20 = 0;
    *(undefined8 *)&this_00[1].field_0x28 = 0;
    *(undefined8 *)&this_00[1].field_0x30 = 0;
    this_00[1].field_0x38 = 0;
    *(undefined8 *)&this_00[1].field_0x39 = 0;
    uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    *(double *)&this_00[1].field_0x48 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    *(undefined8 *)&this_00[1].field_0x50 = uVar1;
    *(double *)&this_00[1].field_0x58 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    *(undefined4 *)&this_00[1].field_0x60 = 0x42c80000;
    *(undefined4 *)&this_00[1].field_0x64 = 0x42c80000;
    *(undefined4 *)&this_00[1].field_0x68 = 0x42c80000;
    dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    *(double *)&this_00[1].field_0x70 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    *(double *)&this_00[1].field_0x78 = dVar2;
    *(double *)&this_00[1].field_0x80 = UE::Math::TRotator<double>::ZeroRotator.Roll;
    FPCGWorldRayHitQueryParams::FPCGWorldRayHitQueryParams
              ((FPCGWorldRayHitQueryParams *)&this_00[1].field_0x88);
    this_00[1].LocalBounds.IsValid = '\0';
    this_00[1].LocalBounds.Pad[0] = '\0';
    this_00[1].LocalBounds.Pad[1] = '\0';
    this_00[1].LocalBounds.Pad[2] = '\0';
    this_00[1].LocalBounds.Pad[3] = '\0';
    this_00[1].LocalBounds.Pad[4] = '\0';
    this_00[1].LocalBounds.Pad[5] = '\0';
    this_00[1].LocalBounds.Pad[6] = '\0';
    *(undefined8 *)&this_00[1].field_0x1a8 = 0;
    *(undefined8 *)(this_00 + 2) = 0;
    *(undefined8 *)&this_00[2].field_0x8 = 0;
    *(undefined8 *)&this_00[2].field_0x20 = 0;
    *(undefined4 *)&this_00[2].field_0x28 = 0;
    *(undefined4 *)&this_00[2].field_0x2c = 0x80;
    *(undefined4 *)&this_00[2].field_0x30 = 0xffffffff;
    *(undefined4 *)&this_00[2].field_0x34 = 0;
    *(undefined8 *)&this_00[2].field_0x40 = 0;
    *(undefined4 *)&this_00[2].field_0x48 = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this_00[2].field_0x50,4000);
    this_00[2].field_0x78 = 0;
    *(undefined8 *)&this_00[2].field_0x80 = 0;
    *(undefined8 *)&this_00[2].field_0x88 = 0;
    *(undefined8 *)&this_00[2].field_0xa0 = 0;
    *(undefined4 *)&this_00[2].field_0xa8 = 0;
    *(undefined4 *)&this_00[2].field_0xac = 0x80;
    *(undefined4 *)&this_00[2].field_0xb0 = 0xffffffff;
    *(undefined4 *)&this_00[2].field_0xb4 = 0;
    *(undefined8 *)&this_00[2].field_0xc0 = 0;
    *(undefined4 *)&this_00[2].field_0xc8 = 0;
    return (UObject *)this_00;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGWorldVolumetricData> @ 149886b90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EPCGWorldQueryFilter": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGWorldVolumetricData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGVolumeData *this;
  UPCGVolumeData *pUVar3;
  undefined8 local_res10;
  
  pUVar3 = (UPCGVolumeData *)0x0;
  local_res10 = 0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGWorldVolumetricData::GetPrivateStaticClass();
  this = (UPCGVolumeData *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGVolumeData *)0x0) {
    UPCGVolumeData::UPCGVolumeData(this,param_1);
    local_res10 = 0;
    this->_padding_ = (longlong)&___7UPCGWorldVolumetricData__6B_;
    this[1]._padding_ = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(this + 1),(FObjectPtr)&local_res10);
    local_res10 = 0;
    this[1]._padding_ = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&this[1]._padding_,(FObjectPtr)&local_res10);
    FPCGWorldCommonQueryParams::FPCGWorldCommonQueryParams
              ((FPCGWorldCommonQueryParams *)&this[1]._padding_);
    *(undefined1 *)&this[1]._padding_ = 1;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].VoxelSize.field0_0x0._s_0.X = 0.0;
    *(undefined4 *)((longlong)&this[1].VoxelSize.field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&this[1].VoxelSize.field0_0x0 + 0xc) = 0x80;
    *(undefined4 *)((longlong)&this[1].VoxelSize.field0_0x0 + 0x10) = 0xffffffff;
    *(undefined4 *)((longlong)&this[1].VoxelSize.field0_0x0 + 0x14) = 0;
    this[1].Bounds.Min.field0_0x0._s_0.X = 0.0;
    *(undefined4 *)((longlong)&this[1].Bounds.Min.field0_0x0 + 8) = 0;
    InitializeCriticalSectionAndSpinCount
              ((LPCRITICAL_SECTION)((longlong)&this[1].Bounds.Min.field0_0x0 + 0x10),4000);
    *(undefined1 *)&this[1].StrictBounds.Min.field0_0x0 = 0;
    pUVar3 = this;
  }
  return (UObject *)pUVar3;
}

// IntroSortInternal<FName,int,FIdentityFunctor,TDereferenceWrapper<FName,`FPCGSplineStruct::GetAttributeChannelNames'::__l12::<lambda_1>_>_> @ 149886cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FName,int,FIdentityFunctor,TDereferenceWrapper<FName,_FPCGSplineStruct::GetAttributeChannelNames_::__l12::<lambda_1>_>_>
          (FName *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FName,_public:_class_TArray<FName,TSizedDefaultAllocator<32>_>_const_&___cdecl_FPCGSplineStruct::GetAttributeChannelNames(void)const_::_12_::<lambda_1>_>
          param_4)

{
  FName FVar1;
  bool bVar2;
  int iVar3;
  FName *pFVar4;
  FName *pFVar5;
  int iVar6;
  FName **ppFVar7;
  FName *pFVar8;
  FName *pFVar9;
  FName *pFVar10;
  float fVar11;
  undefined1 auStack_388 [48];
  FName *local_358;
  FName *local_348;
  FName *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar11 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar11;
    memset(local_330,0,0x2e8);
    ppFVar7 = &local_348;
    do {
      pFVar4 = ppFVar7[1];
      pFVar5 = *ppFVar7;
      local_358 = ppFVar7[2];
      iVar3 = (int)((longlong)pFVar4 - (longlong)pFVar5 >> 3) + 1;
      pFVar10 = pFVar5;
      iVar6 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_149886db0:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          pFVar8 = pFVar4 + 1;
          FVar1 = pFVar10[iVar3 >> 1];
          pFVar10[iVar3 >> 1] = *pFVar10;
          *pFVar10 = FVar1;
          pFVar5 = pFVar10;
LAB_149886de0:
          pFVar5 = pFVar5 + 1;
          if (pFVar5 <= pFVar4) goto code_r0x000149886de9;
          goto LAB_149886e00;
        }
        for (; pFVar8 = pFVar10, pFVar5 = pFVar10, pFVar10 < pFVar4; pFVar4 = pFVar4 + -1) {
          while (pFVar9 = pFVar8, pFVar5 = pFVar5 + 1, pFVar5 <= pFVar4) {
            bVar2 = `FPCGSplineStruct::GetAttributeChannelNames'::__l12::<lambda_1>::operator()
                              (param_4.Predicate,pFVar9,pFVar5);
            pFVar8 = pFVar5;
            if (!bVar2) {
              pFVar8 = pFVar9;
            }
          }
          FVar1 = *pFVar9;
          *pFVar9 = *pFVar4;
          *pFVar4 = FVar1;
        }
        goto LAB_149886ec6;
      }
LAB_149886eb5:
      HeapSortInternal<FName,int,FIdentityFunctor,TDereferenceWrapper<FName,_FPCGSplineStruct::GetAttributeChannelNames_::__l12::<lambda_1>_>_>
                (pFVar5,iVar3,param_3,param_4);
LAB_149886ec6:
      ppFVar7 = ppFVar7 + -3;
    } while (&local_348 <= ppFVar7);
  }
  return;
code_r0x000149886de9:
  bVar2 = `FPCGSplineStruct::GetAttributeChannelNames'::__l12::<lambda_1>::operator()
                    (param_4.Predicate,pFVar10,pFVar5);
  if (!bVar2) goto LAB_149886de0;
LAB_149886e00:
  do {
    pFVar9 = pFVar8;
    pFVar8 = pFVar9 + -1;
    if (pFVar8 <= pFVar10) break;
    bVar2 = `FPCGSplineStruct::GetAttributeChannelNames'::__l12::<lambda_1>::operator()
                      (param_4.Predicate,pFVar8,pFVar10);
  } while (!bVar2);
  if (pFVar5 <= pFVar8) {
    FVar1 = *pFVar5;
    *pFVar5 = *pFVar8;
    *pFVar8 = FVar1;
    goto LAB_149886de0;
  }
  FVar1 = *pFVar10;
  iVar6 = iVar6 + -1;
  *pFVar10 = *pFVar8;
  *pFVar8 = FVar1;
  if ((longlong)((longlong)pFVar8 + (-8 - (longlong)pFVar10) & 0xfffffffffffffff8U) <
      (longlong)((longlong)pFVar4 - (longlong)pFVar5 & 0xfffffffffffffff8U)) {
    if (pFVar5 < pFVar4) {
      *ppFVar7 = pFVar5;
      ppFVar7[1] = pFVar4;
      *(int *)(ppFVar7 + 2) = iVar6;
      ppFVar7 = ppFVar7 + 3;
    }
    if (pFVar8 <= pFVar10 + 1) goto LAB_149886ec6;
    pFVar4 = pFVar9 + -2;
    pFVar5 = pFVar10;
  }
  else {
    if (pFVar10 + 1 < pFVar8) {
      *ppFVar7 = pFVar10;
      ppFVar7[1] = pFVar9 + -2;
      *(int *)(ppFVar7 + 2) = iVar6;
      ppFVar7 = ppFVar7 + 3;
    }
    if (pFVar4 <= pFVar5) goto LAB_149886ec6;
  }
  iVar3 = (int)((longlong)pFVar4 - (longlong)pFVar5 >> 3) + 1;
  pFVar10 = pFVar5;
  if (iVar6 == 0) goto LAB_149886eb5;
  goto LAB_149886db0;
}

// IsObjectPtrEqual<UPCGSpatialData_const_,UPCGSpatialData_const_*,0> @ 149887000

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UPCGSpatialData_const_,UPCGSpatialData_const_*,0>
          (TObjectPtr<UPCGSpatialData_const_> *param_1,UPCGSpatialData **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UPCGSpatialData *)0x0) {
    return *param_2 == (UPCGSpatialData *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// MakeConstStridedView<TArray<int,TSizedDefaultAllocator<32>_>_const_&> @ 149887020

TStridedView<int_const_,int> * __cdecl
MakeConstStridedView<TArray<int,TSizedDefaultAllocator<32>_>_const_&>
          (TStridedView<int_const_,int> *__return_storage_ptr__,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TStridedView<int_const_,int> *pTVar5;
  
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (iVar1 < 0) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TStridedView<int_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  MakeConstStridedView<int>(__return_storage_ptr__,4,(int *)pFVar2,iVar1);
  return __return_storage_ptr__;
}

// MakeConstStridedView<TArray<float,TSizedDefaultAllocator<32>_>_const_&> @ 149887090

TStridedView<float_const_,int> * __cdecl
MakeConstStridedView<TArray<float,TSizedDefaultAllocator<32>_>_const_&>
          (TStridedView<float_const_,int> *__return_storage_ptr__,
          TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TStridedView<float_const_,int> *pTVar5;
  
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (iVar1 < 0) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TStridedView<float_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  MakeConstStridedView<float>(__return_storage_ptr__,4,(float *)pFVar2,iVar1);
  return __return_storage_ptr__;
}

// MakeConstStridedView<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_const_&> @ 149887100

TStridedView<UE::Math::TTransform<double>_const_,int> * __cdecl
MakeConstStridedView<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_const_&>
          (TStridedView<UE::Math::TTransform<double>_const_,int> *__return_storage_ptr__,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  TTransform<double> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TStridedView<UE::Math::TTransform<double>_const_,int> *pTVar5;
  
  iVar1 = param_1->ArrayNum;
  pTVar2 = (TTransform<double> *)(param_1->AllocatorInstance).Data;
  if (iVar1 < 0) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TStridedView<UE::Math::TTransform<double>_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  MakeConstStridedView<UE::Math::TTransform<double>_>(__return_storage_ptr__,0x60,pTVar2,iVar1);
  return __return_storage_ptr__;
}

// MakeConstStridedView<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_const_&> @ 149887170

TStridedView<UE::Math::TVector4<double>_const_,int> * __cdecl
MakeConstStridedView<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_const_&>
          (TStridedView<UE::Math::TVector4<double>_const_,int> *__return_storage_ptr__,
          TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TStridedView<UE::Math::TVector4<double>_const_,int> *pTVar5;
  
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (iVar1 < 0) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TStridedView<UE::Math::TVector4<double>_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  MakeConstStridedView<UE::Math::TVector4<double>_>
            (__return_storage_ptr__,0x20,(TVector4<double> *)pFVar2,iVar1);
  return __return_storage_ptr__;
}

// MakeConstStridedView<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&> @ 1498871e0

TStridedView<UE::Math::TVector<double>_const_,int> * __cdecl
MakeConstStridedView<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&>
          (TStridedView<UE::Math::TVector<double>_const_,int> *__return_storage_ptr__,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TStridedView<UE::Math::TVector<double>_const_,int> *pTVar5;
  
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (iVar1 < 0) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TStridedView<UE::Math::TVector<double>_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  MakeConstStridedView<UE::Math::TVector<double>_>
            (__return_storage_ptr__,0x18,(TVector<double> *)pFVar2,iVar1);
  return __return_storage_ptr__;
}

// MakeConstStridedView<TArray<__int64,TSizedDefaultAllocator<32>_>_const_&> @ 149887250

TStridedView<__int64_const_,int> * __cdecl
MakeConstStridedView<TArray<__int64,TSizedDefaultAllocator<32>_>_const_&>
          (TStridedView<__int64_const_,int> *__return_storage_ptr__,
          TArray<__int64,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TStridedView<__int64_const_,int> *pTVar5;
  
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (iVar1 < 0) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TStridedView<__int64_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  MakeConstStridedView<__int64>(__return_storage_ptr__,8,(long64 *)pFVar2,iVar1);
  return __return_storage_ptr__;
}

// MakeConstStridedView<int> @ 1498872c0

TStridedView<int_const_,int> * __cdecl
MakeConstStridedView<int>
          (TStridedView<int_const_,int> *__return_storage_ptr__,int param_1,int *param_2,int param_3
          )

{
  code *pcVar1;
  bool bVar2;
  TStridedView<int_const_,int> *pTVar3;
  
  __return_storage_ptr__->FirstElementPtr = param_2;
  __return_storage_ptr__->BytesBetweenElements = param_1;
  __return_storage_ptr__->NumElements = param_3;
  if (param_3 < 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("NumElements >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x3f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<int_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (__return_storage_ptr__->BytesBetweenElements < 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("BytesBetweenElements >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x40,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<int_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((__return_storage_ptr__->BytesBetweenElements & 3) != 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("BytesBetweenElements % alignof(ElementType) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x41,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<int_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// MakeConstStridedView<float> @ 149887370

TStridedView<float_const_,int> * __cdecl
MakeConstStridedView<float>
          (TStridedView<float_const_,int> *__return_storage_ptr__,int param_1,float *param_2,
          int param_3)

{
  code *pcVar1;
  bool bVar2;
  TStridedView<float_const_,int> *pTVar3;
  
  __return_storage_ptr__->FirstElementPtr = param_2;
  __return_storage_ptr__->BytesBetweenElements = param_1;
  __return_storage_ptr__->NumElements = param_3;
  if (param_3 < 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("NumElements >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x3f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<float_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (__return_storage_ptr__->BytesBetweenElements < 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("BytesBetweenElements >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x40,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<float_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((__return_storage_ptr__->BytesBetweenElements & 3) != 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("BytesBetweenElements % alignof(ElementType) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x41,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<float_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// MakeConstStridedView<UE::Math::TTransform<double>_> @ 149887420

TStridedView<UE::Math::TTransform<double>_const_,int> * __cdecl
MakeConstStridedView<UE::Math::TTransform<double>_>
          (TStridedView<UE::Math::TTransform<double>_const_,int> *__return_storage_ptr__,int param_1
          ,TTransform<double> *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  TStridedView<UE::Math::TTransform<double>_const_,int> *pTVar3;
  
  __return_storage_ptr__->FirstElementPtr = param_2;
  __return_storage_ptr__->BytesBetweenElements = param_1;
  __return_storage_ptr__->NumElements = param_3;
  if (param_3 < 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("NumElements >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x3f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<UE::Math::TTransform<double>_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (__return_storage_ptr__->BytesBetweenElements < 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("BytesBetweenElements >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x40,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<UE::Math::TTransform<double>_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((__return_storage_ptr__->BytesBetweenElements & 0xf) != 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("BytesBetweenElements % alignof(ElementType) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x41,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<UE::Math::TTransform<double>_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// MakeConstStridedView<UE::Math::TVector4<double>_> @ 1498874d0

TStridedView<UE::Math::TVector4<double>_const_,int> * __cdecl
MakeConstStridedView<UE::Math::TVector4<double>_>
          (TStridedView<UE::Math::TVector4<double>_const_,int> *__return_storage_ptr__,int param_1,
          TVector4<double> *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  TStridedView<UE::Math::TVector4<double>_const_,int> *pTVar3;
  
  __return_storage_ptr__->FirstElementPtr = param_2;
  __return_storage_ptr__->BytesBetweenElements = param_1;
  __return_storage_ptr__->NumElements = param_3;
  if (param_3 < 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("NumElements >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x3f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<UE::Math::TVector4<double>_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (__return_storage_ptr__->BytesBetweenElements < 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("BytesBetweenElements >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x40,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<UE::Math::TVector4<double>_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((__return_storage_ptr__->BytesBetweenElements & 0xf) != 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("BytesBetweenElements % alignof(ElementType) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x41,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<UE::Math::TVector4<double>_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// MakeConstStridedView<UE::Math::TVector<double>_> @ 149887580

TStridedView<UE::Math::TVector<double>_const_,int> * __cdecl
MakeConstStridedView<UE::Math::TVector<double>_>
          (TStridedView<UE::Math::TVector<double>_const_,int> *__return_storage_ptr__,int param_1,
          TVector<double> *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  TStridedView<UE::Math::TVector<double>_const_,int> *pTVar3;
  
  __return_storage_ptr__->FirstElementPtr = param_2;
  __return_storage_ptr__->BytesBetweenElements = param_1;
  __return_storage_ptr__->NumElements = param_3;
  if (param_3 < 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("NumElements >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x3f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<UE::Math::TVector<double>_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (__return_storage_ptr__->BytesBetweenElements < 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("BytesBetweenElements >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x40,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<UE::Math::TVector<double>_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((__return_storage_ptr__->BytesBetweenElements & 7) != 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("BytesBetweenElements % alignof(ElementType) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x41,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<UE::Math::TVector<double>_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// MakeConstStridedView<__int64> @ 149887630

TStridedView<__int64_const_,int> * __cdecl
MakeConstStridedView<__int64>
          (TStridedView<__int64_const_,int> *__return_storage_ptr__,int param_1,long64 *param_2,
          int param_3)

{
  code *pcVar1;
  bool bVar2;
  TStridedView<__int64_const_,int> *pTVar3;
  
  __return_storage_ptr__->FirstElementPtr = param_2;
  __return_storage_ptr__->BytesBetweenElements = param_1;
  __return_storage_ptr__->NumElements = param_3;
  if (param_3 < 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("NumElements >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x3f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<__int64_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (__return_storage_ptr__->BytesBetweenElements < 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("BytesBetweenElements >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x40,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<__int64_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((__return_storage_ptr__->BytesBetweenElements & 7) != 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("BytesBetweenElements % alignof(ElementType) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x41,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<__int64_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// MakeStridedView<TArray<int,TSizedDefaultAllocator<32>_>_&> @ 1498876e0

TStridedView<int,int> * __cdecl
MakeStridedView<TArray<int,TSizedDefaultAllocator<32>_>_&>
          (TStridedView<int,int> *__return_storage_ptr__,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TStridedView<int,int> *pTVar5;
  
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (iVar1 < 0) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TStridedView<int,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  MakeStridedView<int>(__return_storage_ptr__,4,(int *)pFVar2,iVar1);
  return __return_storage_ptr__;
}

// MakeStridedView<TArray<float,TSizedDefaultAllocator<32>_>_&> @ 149887750

TStridedView<float,int> * __cdecl
MakeStridedView<TArray<float,TSizedDefaultAllocator<32>_>_&>
          (TStridedView<float,int> *__return_storage_ptr__,
          TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TStridedView<float,int> *pTVar5;
  
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (iVar1 < 0) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TStridedView<float,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  MakeStridedView<float>(__return_storage_ptr__,4,(float *)pFVar2,iVar1);
  return __return_storage_ptr__;
}

// MakeStridedView<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&> @ 1498877c0

TStridedView<UE::Math::TTransform<double>,int> * __cdecl
MakeStridedView<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&>
          (TStridedView<UE::Math::TTransform<double>,int> *__return_storage_ptr__,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  TTransform<double> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TStridedView<UE::Math::TTransform<double>,int> *pTVar5;
  
  iVar1 = param_1->ArrayNum;
  pTVar2 = (TTransform<double> *)(param_1->AllocatorInstance).Data;
  if (iVar1 < 0) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TStridedView<UE::Math::TTransform<double>,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  MakeStridedView<UE::Math::TTransform<double>_>(__return_storage_ptr__,0x60,pTVar2,iVar1);
  return __return_storage_ptr__;
}

// MakeStridedView<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_&> @ 149887830

TStridedView<UE::Math::TVector4<double>,int> * __cdecl
MakeStridedView<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_&>
          (TStridedView<UE::Math::TVector4<double>,int> *__return_storage_ptr__,
          TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TStridedView<UE::Math::TVector4<double>,int> *pTVar5;
  
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (iVar1 < 0) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TStridedView<UE::Math::TVector4<double>,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  MakeStridedView<UE::Math::TVector4<double>_>
            (__return_storage_ptr__,0x20,(TVector4<double> *)pFVar2,iVar1);
  return __return_storage_ptr__;
}

// MakeStridedView<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_&> @ 1498878a0

TStridedView<UE::Math::TVector<double>,int> * __cdecl
MakeStridedView<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_&>
          (TStridedView<UE::Math::TVector<double>,int> *__return_storage_ptr__,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TStridedView<UE::Math::TVector<double>,int> *pTVar5;
  
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (iVar1 < 0) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TStridedView<UE::Math::TVector<double>,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  MakeStridedView<UE::Math::TVector<double>_>
            (__return_storage_ptr__,0x18,(TVector<double> *)pFVar2,iVar1);
  return __return_storage_ptr__;
}

// MakeStridedView<TArray<__int64,TSizedDefaultAllocator<32>_>_&> @ 149887910

TStridedView<__int64,int> * __cdecl
MakeStridedView<TArray<__int64,TSizedDefaultAllocator<32>_>_&>
          (TStridedView<__int64,int> *__return_storage_ptr__,
          TArray<__int64,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TStridedView<__int64,int> *pTVar5;
  
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (iVar1 < 0) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TStridedView<__int64,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  MakeStridedView<__int64>(__return_storage_ptr__,8,(long64 *)pFVar2,iVar1);
  return __return_storage_ptr__;
}

// MakeStridedView<int> @ 149887980

TStridedView<int,int> * __cdecl
MakeStridedView<int>
          (TStridedView<int,int> *__return_storage_ptr__,int param_1,int *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  TStridedView<int,int> *pTVar3;
  
  __return_storage_ptr__->FirstElementPtr = param_2;
  __return_storage_ptr__->BytesBetweenElements = param_1;
  __return_storage_ptr__->NumElements = param_3;
  if (param_3 < 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("NumElements >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x3f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<int,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (__return_storage_ptr__->BytesBetweenElements < 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("BytesBetweenElements >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x40,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<int,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((__return_storage_ptr__->BytesBetweenElements & 3) != 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("BytesBetweenElements % alignof(ElementType) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x41,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<int,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// MakeStridedView<float> @ 149887a30

TStridedView<float,int> * __cdecl
MakeStridedView<float>
          (TStridedView<float,int> *__return_storage_ptr__,int param_1,float *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  TStridedView<float,int> *pTVar3;
  
  __return_storage_ptr__->FirstElementPtr = param_2;
  __return_storage_ptr__->BytesBetweenElements = param_1;
  __return_storage_ptr__->NumElements = param_3;
  if (param_3 < 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("NumElements >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x3f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<float,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (__return_storage_ptr__->BytesBetweenElements < 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("BytesBetweenElements >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x40,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<float,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((__return_storage_ptr__->BytesBetweenElements & 3) != 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("BytesBetweenElements % alignof(ElementType) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x41,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<float,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// MakeStridedView<UE::Math::TTransform<double>_> @ 149887ae0

TStridedView<UE::Math::TTransform<double>,int> * __cdecl
MakeStridedView<UE::Math::TTransform<double>_>
          (TStridedView<UE::Math::TTransform<double>,int> *__return_storage_ptr__,int param_1,
          TTransform<double> *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  TStridedView<UE::Math::TTransform<double>,int> *pTVar3;
  
  __return_storage_ptr__->FirstElementPtr = param_2;
  __return_storage_ptr__->BytesBetweenElements = param_1;
  __return_storage_ptr__->NumElements = param_3;
  if (param_3 < 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("NumElements >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x3f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<UE::Math::TTransform<double>,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (__return_storage_ptr__->BytesBetweenElements < 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("BytesBetweenElements >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x40,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<UE::Math::TTransform<double>,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((__return_storage_ptr__->BytesBetweenElements & 0xf) != 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("BytesBetweenElements % alignof(ElementType) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x41,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<UE::Math::TTransform<double>,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// MakeStridedView<UE::Math::TVector4<double>_> @ 149887b90

TStridedView<UE::Math::TVector4<double>,int> * __cdecl
MakeStridedView<UE::Math::TVector4<double>_>
          (TStridedView<UE::Math::TVector4<double>,int> *__return_storage_ptr__,int param_1,
          TVector4<double> *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  TStridedView<UE::Math::TVector4<double>,int> *pTVar3;
  
  __return_storage_ptr__->FirstElementPtr = param_2;
  __return_storage_ptr__->BytesBetweenElements = param_1;
  __return_storage_ptr__->NumElements = param_3;
  if (param_3 < 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("NumElements >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x3f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<UE::Math::TVector4<double>,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (__return_storage_ptr__->BytesBetweenElements < 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("BytesBetweenElements >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x40,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<UE::Math::TVector4<double>,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((__return_storage_ptr__->BytesBetweenElements & 0xf) != 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("BytesBetweenElements % alignof(ElementType) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x41,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<UE::Math::TVector4<double>,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// MakeStridedView<__int64> @ 149887c40

TStridedView<__int64,int> * __cdecl
MakeStridedView<__int64>
          (TStridedView<__int64,int> *__return_storage_ptr__,int param_1,long64 *param_2,int param_3
          )

{
  code *pcVar1;
  bool bVar2;
  TStridedView<__int64,int> *pTVar3;
  
  __return_storage_ptr__->FirstElementPtr = param_2;
  __return_storage_ptr__->BytesBetweenElements = param_1;
  __return_storage_ptr__->NumElements = param_3;
  if (param_3 < 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("NumElements >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x3f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<__int64,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (__return_storage_ptr__->BytesBetweenElements < 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("BytesBetweenElements >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x40,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<__int64,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((__return_storage_ptr__->BytesBetweenElements & 7) != 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("BytesBetweenElements % alignof(ElementType) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x41,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<__int64,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// NewObject<UPCGBasePointData> @ 149888000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGBasePointData * __cdecl
NewObject<UPCGBasePointData>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UPCGBasePointData *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
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
  pUVar2 = (UPCGBasePointData *)
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

// NewObject<UPCGCollisionShapeData> @ 149888100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGCollisionShapeData * __cdecl NewObject<UPCGCollisionShapeData>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGCollisionShapeData *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPCGCollisionShapeData::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGCollisionShapeData *)
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

// NewObject<UPCGCollisionWrapperData> @ 1498881a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGCollisionWrapperData * __cdecl NewObject<UPCGCollisionWrapperData>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGCollisionWrapperData *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPCGCollisionWrapperData::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGCollisionWrapperData *)
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

// NewObject<UPCGDifferenceData> @ 149888240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGDifferenceData * __cdecl NewObject<UPCGDifferenceData>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGDifferenceData *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPCGDifferenceData::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGDifferenceData *)
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

// NewObject<UPCGDynamicMeshData> @ 1498882e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGDynamicMeshData * __cdecl NewObject<UPCGDynamicMeshData>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGDynamicMeshData *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPCGDynamicMeshData::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGDynamicMeshData *)
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

// NewObject<UPCGIntersectionData> @ 149888380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGIntersectionData * __cdecl NewObject<UPCGIntersectionData>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGIntersectionData *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPCGIntersectionData::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGIntersectionData *)
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

// NewObject<UPCGLandscapeData> @ 149888420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGLandscapeData * __cdecl NewObject<UPCGLandscapeData>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGLandscapeData *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPCGLandscapeData::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGLandscapeData *)
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

// NewObject<UPCGLandscapeSplineData> @ 1498884c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGLandscapeSplineData * __cdecl NewObject<UPCGLandscapeSplineData>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGLandscapeSplineData *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPCGLandscapeSplineData::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGLandscapeSplineData *)
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

// NewObject<UPCGMetadata> @ 149888560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGMetadata * __cdecl NewObject<UPCGMetadata>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGMetadata *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UPCGMetadata_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGMetadata *)
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

// NewObject<UPCGPointArrayData> @ 149888600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGPointArrayData * __cdecl NewObject<UPCGPointArrayData>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGPointArrayData *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPCGPointArrayData::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGPointArrayData *)
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

// NewObject<UPCGPolygon2DData> @ 1498886a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGPolygon2DData * __cdecl NewObject<UPCGPolygon2DData>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGPolygon2DData *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPCGPolygon2DData::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGPolygon2DData *)
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

// NewObject<UPCGPolygon2DInteriorSurfaceData> @ 149888740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGPolygon2DInteriorSurfaceData * __cdecl
NewObject<UPCGPolygon2DInteriorSurfaceData>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGPolygon2DInteriorSurfaceData *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPCGPolygon2DInteriorSurfaceData::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGPolygon2DInteriorSurfaceData *)
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

// NewObject<UPCGPrimitiveData> @ 1498887e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGPrimitiveData * __cdecl NewObject<UPCGPrimitiveData>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGPrimitiveData *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPCGPrimitiveData::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGPrimitiveData *)
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

// NewObject<UPCGProjectionData> @ 149888880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGProjectionData * __cdecl NewObject<UPCGProjectionData>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGProjectionData *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPCGProjectionData::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGProjectionData *)
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

// NewObject<UPCGRenderTargetData> @ 149888920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGRenderTargetData * __cdecl NewObject<UPCGRenderTargetData>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGRenderTargetData *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPCGRenderTargetData::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGRenderTargetData *)
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

// NewObject<UPCGSplineData> @ 1498889c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGSplineData * __cdecl NewObject<UPCGSplineData>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGSplineData *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPCGSplineData::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGSplineData *)
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

// NewObject<UPCGSplineInteriorSurfaceData> @ 149888a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGSplineInteriorSurfaceData * __cdecl NewObject<UPCGSplineInteriorSurfaceData>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGSplineInteriorSurfaceData *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPCGSplineInteriorSurfaceData::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGSplineInteriorSurfaceData *)
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

// NewObject<UPCGSplineProjectionData> @ 149888b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGSplineProjectionData * __cdecl NewObject<UPCGSplineProjectionData>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGSplineProjectionData *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPCGSplineProjectionData::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGSplineProjectionData *)
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

// NewObject<UPCGUnionData> @ 149888ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGUnionData * __cdecl NewObject<UPCGUnionData>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGUnionData *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPCGUnionData::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGUnionData *)
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

// NewObject<UPCGVirtualTextureData> @ 149888c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGVirtualTextureData * __cdecl NewObject<UPCGVirtualTextureData>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGVirtualTextureData *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPCGVirtualTextureData::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGVirtualTextureData *)
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

// NewObject<UPCGVolumeData> @ 149888ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGVolumeData * __cdecl NewObject<UPCGVolumeData>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGVolumeData *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPCGVolumeData::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGVolumeData *)
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

// NewObject<UPCGWorldRayHitData> @ 149888d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGWorldRayHitData * __cdecl NewObject<UPCGWorldRayHitData>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGWorldRayHitData *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPCGWorldRayHitData::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGWorldRayHitData *)
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

// NewObject<UPCGWorldVolumetricData> @ 149888e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGWorldVolumetricData * __cdecl NewObject<UPCGWorldVolumetricData>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGWorldVolumetricData *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPCGWorldVolumetricData::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGWorldVolumetricData *)
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

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<``UPCGDifferenceData::CreateBasePointData'::__l2::<lambda_1>::operator()'::__l2::FKeptPoint>_> @ 149889ef0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__UPCGDifferenceData::CreateBasePointData_::__l2::<lambda_1>::operator()_::__l2::FKeptPoint>_>
          (ushort param_1,
          ForElementType<_public:___cdecl__protected:_class_UPCGBasePointData_const_*___cdecl_UPCGDifferenceData::CreateBasePointData(FPCGContext_*,UPCGBasePointData_const_*,TSubclassOf<UPCGBasePointData>)const_::_2_::<lambda_1>::operator()(TArrayView<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>,int>_const_&,UPCGBasePointData_const_*,int,UPCGBasePointData_*,int)const_::_2_::FKeptPoint>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    iVar8 = 0x100;
    uVar7 = (ulonglong)(byte)param_1;
    if (0x100 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x101) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::
    ForElementType<``UPCGDifferenceData::CreateBasePointData'::__l2::<lambda_1>::operator()'::__l2::FKeptPoint>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// Reverse<UE::Math::TVector2<double>_> @ 14988b0f0

void __cdecl AlgoImpl::Reverse<UE::Math::TVector2<double>_>(TVector2<double> *param_1,int param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  TVector2<double> *pTVar4;
  longlong lVar5;
  
  lVar5 = (longlong)(param_2 / 2);
  if (0 < param_2 / 2) {
    pTVar4 = param_1 + (param_2 + -1);
    do {
      dVar1 = (pTVar4->field0_0x0)._s_0.Y;
      dVar2 = (param_1->field0_0x0)._s_0.X;
      dVar3 = (param_1->field0_0x0)._s_0.Y;
      (param_1->field0_0x0)._s_0.X = (pTVar4->field0_0x0)._s_0.X;
      (param_1->field0_0x0)._s_0.Y = dVar1;
      param_1 = param_1 + 1;
      (pTVar4->field0_0x0)._s_0.X = dVar2;
      (pTVar4->field0_0x0)._s_0.Y = dVar3;
      lVar5 = lVar5 + -1;
      pTVar4 = pTVar4 + -1;
    } while (lVar5 != 0);
  }
  return;
}

// Sample<FLinearColor> @ 14988b140

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
PCGTextureSamplingHelpers::Sample<FLinearColor>
          (TVector2<double> *param_1,TBox2<double> *param_2,UPCGBaseTextureData *param_3,int param_4
          ,int param_5,FLinearColor *param_6,TFunctionRef<FLinearColor___cdecl(int)> *param_7)

{
  TVector2<double> *pTVar1;
  double *pdVar2;
  TVector2<double>_u_0_s_0 TVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  bool bVar14;
  undefined1 uVar15;
  TQuat<double> *pTVar16;
  FLinearColor *pFVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  double dVar29;
  undefined4 uVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar39;
  TFunctionRef<FLinearColor___cdecl(int)> local_158;
  TVector2<double>_u_0 local_148;
  TRotator<double> local_138;
  FLinearColor local_120 [4];
  TQuat<double> local_d8 [6];
  
  if ((param_4 < 1) || (param_5 < 1)) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Width > 0 && Height > 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGTextureData.cpp"
                        ,0x82,L"");
    if (bVar14) {
      pcVar4 = (code *)swi(3);
      uVar15 = (*pcVar4)();
      return (bool)uVar15;
    }
    if (param_4 < 1) {
      return false;
    }
    if (param_5 < 1) {
      return false;
    }
  }
  dVar39 = (param_2->Max).field0_0x0._s_0.Y - (param_2->Min).field0_0x0._s_0.Y;
  dVar22 = (param_2->Max).field0_0x0._s_0.X - (param_2->Min).field0_0x0._s_0.X;
  if (dVar39 * dVar39 + dVar22 * dVar22 <= 0.0) {
    return false;
  }
  if ((param_3 == (UPCGBaseTextureData *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("InTextureData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGTextureData.cpp"
                          ,0x88,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    uVar15 = (*pcVar4)();
    return (bool)uVar15;
  }
  dVar7 = __real_3fe0000000000000;
  dVar22 = ((param_1->field0_0x0)._s_0.X - (param_2->Min).field0_0x0._s_0.X) /
           ((param_2->Max).field0_0x0._s_0.X - (param_2->Min).field0_0x0._s_0.X);
  dVar39 = ((param_1->field0_0x0)._s_0.Y - (param_2->Min).field0_0x0._s_0.Y) /
           ((param_2->Max).field0_0x0._s_0.Y - (param_2->Min).field0_0x0._s_0.Y);
  if (param_3->bUseAdvancedTiling == false) {
    local_148._s_0.Y = dVar39;
    if (__real_3ff0000000000000 <= dVar39) {
      local_148._s_0.Y = __real_3ff0000000000000;
    }
    local_148._s_0.X = dVar22;
    if (__real_3ff0000000000000 <= dVar22) {
      local_148._s_0.X = __real_3ff0000000000000;
    }
    if (local_148._s_0.Y <= 0.0) {
      local_148._s_0.Y = 0.0;
    }
    if (local_148._s_0.X <= 0.0) {
      local_148._s_0.X = 0.0;
    }
  }
  else {
    TVar3 = (param_3->Tiling).field0_0x0._s_0;
    local_138.Yaw =
         (double)(float)((uint)param_3->Rotation ^ __xmm_80000000800000008000000080000000);
    uVar20 = TVar3.X._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar21 = TVar3.X._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    local_138.Pitch = 0.0;
    local_138.Roll = 0.0;
    if ((double)CONCAT44(uVar21,uVar20) < __real_3e45798ee0000000 ||
        (double)CONCAT44(uVar21,uVar20) == __real_3e45798ee0000000) {
      dVar12 = 0.0;
    }
    else {
      dVar12 = __real_3ff0000000000000 / TVar3.X;
    }
    uVar20 = TVar3.Y._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar21 = TVar3.Y._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if ((double)CONCAT44(uVar21,uVar20) < __real_3e45798ee0000000 ||
        (double)CONCAT44(uVar21,uVar20) == __real_3e45798ee0000000) {
      dVar11 = 0.0;
    }
    else {
      dVar11 = __real_3ff0000000000000 / TVar3.Y;
    }
    uVar20 = (uint)((ulonglong)dVar11 >> 0x20);
    dVar10 = (param_3->CenterOffset).field0_0x0._s_0.X + __real_3fe0000000000000;
    dVar31 = (param_3->CenterOffset).field0_0x0._s_0.Y + __real_3fe0000000000000;
    pTVar16 = UE::Math::TRotator<double>::Quaternion(&local_138,local_d8);
    dVar28 = pTVar16->X * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar29 = pTVar16->Y * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    dVar8 = pTVar16->Z * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar9 = pTVar16->W * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    auVar25._8_4_ = SUB84(dVar29,0);
    auVar25._0_8_ = dVar28;
    uVar30 = (undefined4)((ulonglong)dVar29 >> 0x20);
    auVar25._12_4_ = uVar30;
    auVar26._8_4_ = SUB84(dVar29,0);
    auVar26._0_8_ = dVar28;
    auVar26._12_4_ = uVar30;
    auVar37._0_8_ =
         (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                          (uint)((ulonglong)dVar12 >> 0x20),
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff & SUB84(dVar12,0));
    auVar37._8_4_ = _UNK_15061cc88 & SUB84(dVar11,0);
    auVar37._12_4_ = _UNK_15061cc8c & uVar20;
    dVar22 = dVar22 - dVar10;
    dVar39 = dVar39 - dVar31;
    uVar30 = (undefined4)((ulonglong)dVar39 >> 0x20);
    auVar33._8_4_ = SUB84(dVar39,0);
    auVar33._0_8_ = dVar22;
    auVar33._12_4_ = uVar30;
    auVar27._8_4_ = SUB84(dVar39,0);
    auVar27._0_8_ = dVar22;
    auVar27._12_4_ = uVar30;
    auVar34._0_8_ = auVar33._8_8_ * dVar28 - dVar22 * auVar25._8_8_;
    auVar34._8_8_ = dVar29 * 0.0 - dVar39 * dVar8;
    auVar23 = blendpd(auVar27,ZEXT816(0),2);
    auVar24._8_4_ = SUB84(dVar9,0);
    auVar24._0_8_ = dVar8;
    auVar24._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    auVar27 = blendpd(auVar26,auVar24,2);
    auVar35._0_8_ = auVar23._0_8_ * dVar8 - auVar27._0_8_ * 0.0;
    auVar35._8_8_ = auVar23._8_8_ * dVar9 - auVar27._8_8_ * 0.0;
    dVar10 = auVar35._0_8_ + auVar35._0_8_;
    auVar35 = blendpd(auVar34,auVar35,2);
    auVar32._8_4_ = SUB84(dVar10,0);
    auVar32._0_8_ = auVar34._8_8_ + auVar34._8_8_;
    auVar32._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    auVar23._8_4_ = SUB84(dVar11,0);
    auVar23._0_8_ = dVar12;
    auVar23._12_4_ = uVar20;
    auVar24 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar23);
    auVar36._0_8_ = auVar35._0_8_ + auVar35._0_8_;
    auVar36._8_8_ = auVar35._8_8_ + auVar35._8_8_;
    auVar23 = blendpd(auVar32,auVar36,2);
    lVar18 = -(ulonglong)
              (auVar37._0_8_ <= (double)(float)GlobalVectorConstants::SmallNumber.m128_u64[0]);
    lVar19 = -(ulonglong)
              (auVar37._8_8_ <=
              (double)(float)((ulonglong)GlobalVectorConstants::SmallNumber._0_8_ >> 0x20));
    auVar38._0_8_ =
         (double)CONCAT44(~(uint)((ulonglong)lVar18 >> 0x20) & auVar24._4_4_,
                          ~(uint)lVar18 & auVar24._0_4_);
    auVar38._8_4_ = ~(uint)lVar19 & auVar24._8_4_;
    auVar38._12_4_ = ~(uint)((ulonglong)lVar19 >> 0x20) & auVar24._12_4_;
    dVar22 = auVar38._0_8_ *
             ((auVar34._8_8_ + auVar34._8_8_) * dVar9 + dVar22 +
             (auVar36._0_8_ * dVar29 - dVar10 * dVar8));
    dVar39 = auVar38._8_8_ *
             (dVar10 * dVar9 + dVar39 + (auVar23._0_8_ * dVar8 - auVar36._0_8_ * auVar27._0_8_));
    if (param_3->bUseTileBounds != false) {
      if (dVar22 < (param_3->TileBounds).Min.field0_0x0._s_0.X) {
        return false;
      }
      pTVar1 = &(param_3->TileBounds).Max;
      if ((pTVar1->field0_0x0)._s_0.X <= dVar22 && dVar22 != (pTVar1->field0_0x0)._s_0.X) {
        return false;
      }
      if (dVar39 < (param_3->TileBounds).Min.field0_0x0._s_0.Y) {
        return false;
      }
      pdVar2 = &(param_3->TileBounds).Max.field0_0x0._s_0.Y;
      if (*pdVar2 <= dVar39 && dVar39 != *pdVar2) {
        return false;
      }
    }
    dVar39 = dVar39 + dVar7;
    dVar22 = dVar22 + dVar7;
    lVar18 = (longlong)dVar39;
    dVar7 = dVar39;
    if ((lVar18 != -0x8000000000000000) && ((double)lVar18 != dVar39)) {
      auVar5._8_4_ = SUB84(dVar39,0);
      auVar5._0_8_ = dVar39;
      auVar5._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
      uVar20 = movmskpd((int)pTVar16,auVar5);
      pTVar16 = (TQuat<double> *)(ulonglong)(uVar20 & 1);
      dVar7 = (double)(lVar18 - (longlong)pTVar16);
    }
    lVar18 = (longlong)dVar22;
    local_148._s_0.Y = dVar39 - dVar7;
    dVar39 = dVar22;
    if ((lVar18 != -0x8000000000000000) && ((double)lVar18 != dVar22)) {
      auVar6._8_4_ = SUB84(dVar22,0);
      auVar6._0_8_ = dVar22;
      auVar6._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
      uVar20 = movmskpd((int)pTVar16,auVar6);
      dVar39 = (double)(longlong)(lVar18 - (ulonglong)(uVar20 & 1));
    }
    local_148._s_0.X = dVar22 - dVar39;
  }
  local_158._0_8_ = *(undefined8 *)param_7;
  local_158._8_8_ = *(undefined8 *)&param_7->field_0x8;
  pFVar17 = SampleInternal<FLinearColor>
                      (local_120,(TVector2<double> *)&local_148._s_0,param_4,param_5,param_3->Filter
                       ,&local_158);
  uVar13 = *(undefined8 *)((longlong)&pFVar17->field0_0x0 + 8);
  *(undefined8 *)&param_6->field0_0x0 = *(undefined8 *)&pFVar17->field0_0x0;
  *(undefined8 *)((longlong)&param_6->field0_0x0 + 8) = uVar13;
  return true;
}

// SampleInternal<FLinearColor> @ 14988b630

FLinearColor * __cdecl
PCGTextureSamplingHelpers::SampleInternal<FLinearColor>
          (FLinearColor *__return_storage_ptr__,TVector2<double> *param_1,int param_2,int param_3,
          EPCGTextureFilter param_4,TFunctionRef<FLinearColor___cdecl(int)> *param_5)

{
  double dVar1;
  double dVar2;
  TFunctionRef<FLinearColor___cdecl(int)> *pTVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  undefined3 in_stack_00000029;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  
  pTVar3 = param_5;
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar11 = (double)param_3;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
  if (param_4 == Point) {
    lVar4 = (longlong)ROUND((dVar1 + dVar1) * (double)param_2 - __real_3fe0000000000000) >> 1;
    lVar6 = (longlong)(param_2 + -1);
    if (lVar4 < param_2 + -1) {
      lVar6 = lVar4;
    }
    lVar5 = (longlong)ROUND((dVar11 + dVar11) * dVar2 - __real_3fe0000000000000) >> 1;
    lVar4 = (longlong)(param_3 + -1);
    if (lVar5 < param_3 + -1) {
      lVar4 = lVar5;
    }
    iVar8 = 0;
    if (0 < lVar4) {
      iVar8 = (int)lVar4;
    }
    _param_4 = 0;
    if (0 < lVar6) {
      _param_4 = (int)lVar6;
    }
    _param_4 = iVar8 * param_2 + _param_4;
    (**(code **)param_5)(&local_88,*(undefined8 *)&param_5->field_0x8,&param_4);
    *(ulonglong *)&__return_storage_ptr__->field0_0x0 = CONCAT44(fStack_84,local_88);
    *(ulonglong *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) =
         CONCAT44(fStack_7c,fStack_80);
  }
  else if (param_4 == Bilinear) {
    dVar1 = dVar1 * (double)param_2 - __real_3fe0000000000000;
    dVar2 = dVar2 * dVar11 - __real_3fe0000000000000;
    iVar8 = param_2 + -1;
    lVar4 = (longlong)ROUND((dVar1 + dVar1) - __real_3fe0000000000000) >> 1;
    lVar6 = (longlong)iVar8;
    if (lVar4 < iVar8) {
      lVar6 = lVar4;
    }
    iVar10 = 0;
    if (0 < lVar6) {
      iVar10 = (int)lVar6;
    }
    if (iVar10 + 1 < iVar8) {
      iVar8 = iVar10 + 1;
    }
    lVar4 = (longlong)ROUND((dVar2 + dVar2) - __real_3fe0000000000000) >> 1;
    iVar9 = param_3 + -1;
    lVar6 = (longlong)iVar9;
    if (lVar4 < iVar9) {
      lVar6 = lVar4;
    }
    iVar7 = 0;
    if (0 < lVar6) {
      iVar7 = (int)lVar6;
    }
    _param_4 = iVar7 * param_2 + iVar10;
    (**(code **)param_5)(&local_a8,*(undefined8 *)&param_5->field_0x8,&param_4);
    _param_4 = iVar8 + iVar7 * param_2;
    (**(code **)pTVar3)(&local_b8,*(undefined8 *)&pTVar3->field_0x8,&param_4);
    if (iVar7 + 1 < iVar9) {
      iVar9 = iVar7 + 1;
    }
    _param_4 = iVar9 * param_2 + iVar10;
    (**(code **)pTVar3)(&local_88,*(undefined8 *)&pTVar3->field_0x8,&param_4);
    _param_4 = iVar9 * param_2 + iVar8;
    (**(code **)pTVar3)(&local_98,*(undefined8 *)&pTVar3->field_0x8,&param_4);
    fVar13 = (float)(dVar1 - (double)iVar10);
    local_a8 = (local_b8 - local_a8) * fVar13 + local_a8;
    local_a4 = (local_b4 - local_a4) * fVar13 + local_a4;
    local_a0 = (local_b0 - local_a0) * fVar13 + local_a0;
    local_9c = (local_ac - local_9c) * fVar13 + local_9c;
    fVar12 = (float)(dVar2 - (double)iVar7);
    (__return_storage_ptr__->field0_0x0)._s_0.R =
         (((local_98 - local_88) * fVar13 + local_88) - local_a8) * fVar12 + local_a8;
    (__return_storage_ptr__->field0_0x0)._s_0.G =
         (((local_94 - fStack_84) * fVar13 + fStack_84) - local_a4) * fVar12 + local_a4;
    (__return_storage_ptr__->field0_0x0)._s_0.B =
         (((local_90 - fStack_80) * fVar13 + fStack_80) - local_a0) * fVar12 + local_a0;
    (__return_storage_ptr__->field0_0x0)._s_0.A =
         (((local_8c - fStack_7c) * fVar13 + fStack_7c) - local_9c) * fVar12 + local_9c;
  }
  else {
    `PCGTextureSamplingHelpers::SampleInternal<FLinearColor>'::__l11::<lambda_1>::operator()
              (&param_4);
  }
  return __return_storage_ptr__;
}

// StaticEnum<enum_EPCGCollisionQueryFlag> @ 14988b9c0

UEnum * __cdecl StaticEnum<enum_EPCGCollisionQueryFlag>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGCollisionQueryFlag.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGCollisionQueryFlag.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGCollisionQueryFlag,(UObject *)pUVar1,
                       L"EPCGCollisionQueryFlag");
  }
  return Z_Registration_Info_UEnum_EPCGCollisionQueryFlag.OuterSingleton;
}

// StaticEnum<enum_EPCGCollisionShapeType> @ 14988ba00

UEnum * __cdecl StaticEnum<enum_EPCGCollisionShapeType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGCollisionShapeType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGCollisionShapeType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGCollisionShapeType,(UObject *)pUVar1,
                       L"EPCGCollisionShapeType");
  }
  return Z_Registration_Info_UEnum_EPCGCollisionShapeType.OuterSingleton;
}

// StaticEnum<enum_EPCGDifferenceDensityFunction> @ 14988ba40

UEnum * __cdecl StaticEnum<enum_EPCGDifferenceDensityFunction>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGDifferenceDensityFunction.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGDifferenceDensityFunction.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGDifferenceDensityFunction,(UObject *)pUVar1,
                       L"EPCGDifferenceDensityFunction");
  }
  return Z_Registration_Info_UEnum_EPCGDifferenceDensityFunction.OuterSingleton;
}

// StaticEnum<enum_EPCGDifferenceMode> @ 14988ba80

UEnum * __cdecl StaticEnum<enum_EPCGDifferenceMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGDifferenceMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGDifferenceMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGDifferenceMode,(UObject *)pUVar1,
                       L"EPCGDifferenceMode");
  }
  return Z_Registration_Info_UEnum_EPCGDifferenceMode.OuterSingleton;
}

// StaticEnum<enum_EPCGIntersectionDensityFunction> @ 14988bac0

UEnum * __cdecl StaticEnum<enum_EPCGIntersectionDensityFunction>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGIntersectionDensityFunction.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGIntersectionDensityFunction.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGIntersectionDensityFunction,(UObject *)pUVar1,
                       L"EPCGIntersectionDensityFunction");
  }
  return Z_Registration_Info_UEnum_EPCGIntersectionDensityFunction.OuterSingleton;
}

// StaticEnum<enum_EPCGPolygon2DDataProperties> @ 14988bb00

UEnum * __cdecl StaticEnum<enum_EPCGPolygon2DDataProperties>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGPolygon2DDataProperties.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGPolygon2DDataProperties.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGPolygon2DDataProperties,(UObject *)pUVar1,
                       L"EPCGPolygon2DDataProperties");
  }
  return Z_Registration_Info_UEnum_EPCGPolygon2DDataProperties.OuterSingleton;
}

// StaticEnum<enum_EPCGPolygon2DProperties> @ 14988bb40

UEnum * __cdecl StaticEnum<enum_EPCGPolygon2DProperties>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGPolygon2DProperties.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGPolygon2DProperties.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGPolygon2DProperties,(UObject *)pUVar1,
                       L"EPCGPolygon2DProperties");
  }
  return Z_Registration_Info_UEnum_EPCGPolygon2DProperties.OuterSingleton;
}

// StaticEnum<enum_EPCGSplineDataProperties> @ 14988bb80

UEnum * __cdecl StaticEnum<enum_EPCGSplineDataProperties>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGSplineDataProperties.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGSplineDataProperties.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGSplineDataProperties,(UObject *)pUVar1,
                       L"EPCGSplineDataProperties");
  }
  return Z_Registration_Info_UEnum_EPCGSplineDataProperties.OuterSingleton;
}

// StaticEnum<enum_EPCGSplineStructProperties> @ 14988bbc0

UEnum * __cdecl StaticEnum<enum_EPCGSplineStructProperties>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGSplineStructProperties.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGSplineStructProperties.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGSplineStructProperties,(UObject *)pUVar1,
                       L"EPCGSplineStructProperties");
  }
  return Z_Registration_Info_UEnum_EPCGSplineStructProperties.OuterSingleton;
}

// StaticEnum<enum_EPCGTextureAddressMode> @ 14988bc00

UEnum * __cdecl StaticEnum<enum_EPCGTextureAddressMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGTextureAddressMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGTextureAddressMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGTextureAddressMode,(UObject *)pUVar1,
                       L"EPCGTextureAddressMode");
  }
  return Z_Registration_Info_UEnum_EPCGTextureAddressMode.OuterSingleton;
}

// StaticEnum<enum_EPCGTextureColorChannel> @ 14988bc40

UEnum * __cdecl StaticEnum<enum_EPCGTextureColorChannel>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGTextureColorChannel.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGTextureColorChannel.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGTextureColorChannel,(UObject *)pUVar1,
                       L"EPCGTextureColorChannel");
  }
  return Z_Registration_Info_UEnum_EPCGTextureColorChannel.OuterSingleton;
}

// StaticEnum<enum_EPCGTextureDensityFunction> @ 14988bc80

UEnum * __cdecl StaticEnum<enum_EPCGTextureDensityFunction>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGTextureDensityFunction.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGTextureDensityFunction.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGTextureDensityFunction,(UObject *)pUVar1,
                       L"EPCGTextureDensityFunction");
  }
  return Z_Registration_Info_UEnum_EPCGTextureDensityFunction.OuterSingleton;
}

// StaticEnum<enum_EPCGTextureFilter> @ 14988bcc0

UEnum * __cdecl StaticEnum<enum_EPCGTextureFilter>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGTextureFilter.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGTextureFilter.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGTextureFilter,(UObject *)pUVar1,
                       L"EPCGTextureFilter");
  }
  return Z_Registration_Info_UEnum_EPCGTextureFilter.OuterSingleton;
}

// StaticEnum<enum_EPCGTextureResourceType> @ 14988bd00

UEnum * __cdecl StaticEnum<enum_EPCGTextureResourceType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGTextureResourceType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGTextureResourceType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGTextureResourceType,(UObject *)pUVar1,
                       L"EPCGTextureResourceType");
  }
  return Z_Registration_Info_UEnum_EPCGTextureResourceType.OuterSingleton;
}

// StaticEnum<enum_EPCGUnionDensityFunction> @ 14988bd40

UEnum * __cdecl StaticEnum<enum_EPCGUnionDensityFunction>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGUnionDensityFunction.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGUnionDensityFunction.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGUnionDensityFunction,(UObject *)pUVar1,
                       L"EPCGUnionDensityFunction");
  }
  return Z_Registration_Info_UEnum_EPCGUnionDensityFunction.OuterSingleton;
}

// StaticEnum<enum_EPCGUnionType> @ 14988bd80

UEnum * __cdecl StaticEnum<enum_EPCGUnionType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGUnionType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGUnionType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGUnionType,(UObject *)pUVar1,L"EPCGUnionType");
  }
  return Z_Registration_Info_UEnum_EPCGUnionType.OuterSingleton;
}

// StaticEnum<enum_EPCGWorldQueryFilter> @ 14988bdc0

UEnum * __cdecl StaticEnum<enum_EPCGWorldQueryFilter>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGWorldQueryFilter.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGWorldQueryFilter.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGWorldQueryFilter,(UObject *)pUVar1,
                       L"EPCGWorldQueryFilter");
  }
  return Z_Registration_Info_UEnum_EPCGWorldQueryFilter.OuterSingleton;
}

// StaticEnum<enum_EPCGWorldQueryFilterByTag> @ 14988be00

UEnum * __cdecl StaticEnum<enum_EPCGWorldQueryFilterByTag>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGWorldQueryFilterByTag.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGWorldQueryFilterByTag.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGWorldQueryFilterByTag,(UObject *)pUVar1,
                       L"EPCGWorldQueryFilterByTag");
  }
  return Z_Registration_Info_UEnum_EPCGWorldQueryFilterByTag.OuterSingleton;
}

// StaticEnum<enum_EPCGWorldQuerySelectLandscapeHits> @ 14988be40

UEnum * __cdecl StaticEnum<enum_EPCGWorldQuerySelectLandscapeHits>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGWorldQuerySelectLandscapeHits.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGWorldQuerySelectLandscapeHits.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGWorldQuerySelectLandscapeHits,(UObject *)pUVar1,
                       L"EPCGWorldQuerySelectLandscapeHits");
  }
  return Z_Registration_Info_UEnum_EPCGWorldQuerySelectLandscapeHits.OuterSingleton;
}

// get<1,TTuple<TObjectKey<UPCGPolygon2DData>,TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>_&> @ 14988be80

TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *
__cdecl get<1,TTuple<TObjectKey<UPCGPolygon2DData>,TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>_&>
                  (TTuple<TObjectKey<UPCGPolygon2DData>,TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
                   *param_1)

{
  return (TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *)&param_1->field_0x8;
}

// get<1,TTuple<int,int>_> @ 14988be90

int * __cdecl get<1,TTuple<int,int>_>(TTuple<int,int> *param_1)

{
  return (int *)&param_1->field_0x4;
}

// get<0,TTuple<TObjectKey<UPCGPolygon2DData>,TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>_&> @ 14988bea0

TObjectKey<UPCGPolygon2DData> * __cdecl
get<0,TTuple<TObjectKey<UPCGPolygon2DData>,TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>_&>
          (TTuple<TObjectKey<UPCGPolygon2DData>,TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
           *param_1)

{
  return (TObjectKey<UPCGPolygon2DData> *)param_1;
}

// get<0,TTuple<int,int>_> @ 14988beb0

int * __cdecl get<0,TTuple<int,int>_>(TTuple<int,int> *param_1)

{
  return (int *)param_1;
}

// ~TFunction_OwnedObject<`ExecuteOnGameThread<`FPCGDataPtrWrapper::DecRefCount'::__l9::<lambda_1>_>'::__l2::<lambda_1>,1,0> @ 149890cf0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`FPCGDataPtrWrapper::DecRefCount'::__l9::<lambda_1>_>'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_ExecuteOnGameThread<_FPCGDataPtrWrapper::DecRefCount_::__l9::<lambda_1>_>_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnGameThread<`FPCGDataPtrWrapper::DecRefCount'::`9'::<lambda_1>_>'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UPCGCollisionWrapperData::CopyInternal'::__l2::<lambda_1>,0,1> @ 149890d10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGCollisionWrapperData::CopyInternal'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UPCGCollisionWrapperData::CopyInternal_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPCGCollisionWrapperData::CopyInternal'::`2'::<lambda_1>,0,1>::
        _vftable_;
  DestructItems<FString,int>(*(FString **)((longlong)this + 0x40),*(int *)((longlong)this + 0x48));
  if (*(void **)((longlong)this + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x40));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`UPCGLandscapeData::PrepareForSpatialQuery'::__l2::<lambda_1>,0,1> @ 149890d50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGLandscapeData::PrepareForSpatialQuery'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UPCGLandscapeData::PrepareForSpatialQuery_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPCGLandscapeData::PrepareForSpatialQuery'::`2'::<lambda_1>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UPCGVolumeData::CopyInternal'::__l5::<lambda_1>,0,0> @ 149890d70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGVolumeData::CopyInternal'::__l5::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UPCGVolumeData::CopyInternal_::__l5::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPCGVolumeData::CopyInternal'::`5'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UPCGTextureData::ReadbackFromGPUTexture'::__l20::<lambda_1>,0,1> @ 149890d90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGTextureData::ReadbackFromGPUTexture'::__l20::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UPCGTextureData::ReadbackFromGPUTexture_::__l20::<lambda_1>,0,1>(void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPCGTextureData::ReadbackFromGPUTexture'::`20'::<lambda_1>,0,1>::
        _vftable_;
  pvVar1 = *(void **)((longlong)this + 0x20);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// operator() @ 1498937a0

bool __thiscall
`ExecuteOnGameThread<`FPCGDataPtrWrapper::DecRefCount'::__l9::<lambda_1>_>'::__l2::<lambda_1>::
operator()(void *this,float param_1)

{
  UPCGData *this_00;
  FLLMScope local_res8 [5];
  FName local_res18;
  FMemScope local_res20;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_PCG.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_PCG.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  this_00 = (UPCGData *)FWeakObjectPtr::Get(this);
  if (this_00 != (UPCGData *)0x0) {
    UPCGData::DecCollectionRefCount(this_00);
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return false;
}

// operator() @ 149893820

void __thiscall
`PCGPointHelpers::BilerpWithSnapping'::__l2::<lambda_1>::operator()(void *this,FPCGPoint *param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  
  pdVar1 = *(double **)this;
  dVar3 = (param_1->Transform).Rotation.XY.m128d_f64[1];
  dVar2 = pdVar1[0x19];
  *pdVar1 = (param_1->Transform).Rotation.XY.m128d_f64[0];
  pdVar1[1] = dVar3;
  dVar3 = (param_1->Transform).Rotation.ZW.m128d_f64[1];
  pdVar1[2] = (param_1->Transform).Rotation.ZW.m128d_f64[0];
  pdVar1[3] = dVar3;
  dVar3 = (param_1->Transform).Translation.XY.m128d_f64[1];
  pdVar1[4] = (param_1->Transform).Translation.XY.m128d_f64[0];
  pdVar1[5] = dVar3;
  dVar3 = (param_1->Transform).Translation.ZW.m128d_f64[1];
  pdVar1[6] = (param_1->Transform).Translation.ZW.m128d_f64[0];
  pdVar1[7] = dVar3;
  dVar3 = (param_1->Transform).Scale3D.XY.m128d_f64[1];
  pdVar1[8] = (param_1->Transform).Scale3D.XY.m128d_f64[0];
  pdVar1[9] = dVar3;
  dVar3 = (param_1->Transform).Scale3D.ZW.m128d_f64[1];
  pdVar1[10] = (param_1->Transform).Scale3D.ZW.m128d_f64[0];
  pdVar1[0xb] = dVar3;
  dVar3 = (param_1->BoundsMin).field0_0x0._s_0.X;
  pdVar1[0xc] = *(double *)&param_1->Density;
  pdVar1[0xd] = dVar3;
  dVar3 = (param_1->BoundsMin).field0_0x0._s_0.Z;
  pdVar1[0xe] = (param_1->BoundsMin).field0_0x0._s_0.Y;
  pdVar1[0xf] = dVar3;
  dVar3 = (param_1->BoundsMax).field0_0x0._s_0.Y;
  pdVar1[0x10] = (param_1->BoundsMax).field0_0x0._s_0.X;
  pdVar1[0x11] = dVar3;
  dVar3 = (double)param_1->_padding_;
  pdVar1[0x12] = (param_1->BoundsMax).field0_0x0._s_0.Z;
  pdVar1[0x13] = dVar3;
  dVar3 = (param_1->Color).field0_0x0._s_0.Y;
  pdVar1[0x14] = (param_1->Color).field0_0x0._s_0.X;
  pdVar1[0x15] = dVar3;
  dVar3 = (param_1->Color).field0_0x0._s_0.W;
  pdVar1[0x16] = (param_1->Color).field0_0x0._s_0.Z;
  pdVar1[0x17] = dVar3;
  dVar3 = (double)param_1->MetadataEntry;
  pdVar1[0x18] = *(double *)&param_1->Steepness;
  pdVar1[0x19] = dVar3;
  *(double *)(*(longlong *)this + 200) = dVar2;
  if ((UPCGMetadata *)**(undefined8 **)((longlong)this + 8) != (UPCGMetadata *)0x0) {
    UPCGMetadata::SetPointAttributes
              ((UPCGMetadata *)**(undefined8 **)((longlong)this + 8),param_1,
               (UPCGMetadata *)**(undefined8 **)((longlong)this + 0x10),*(FPCGPoint **)this);
    return;
  }
  return;
}

// operator() @ 149896900

FLinearColor * __thiscall
``UPCGBaseTextureData::CreateBasePointData'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>::
operator()(void *this,FLinearColor *__return_storage_ptr__,int param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  FLinearColor *pFVar7;
  
  lVar2 = *(longlong *)this;
  uVar6 = 0;
  if (param_1 < *(int *)(lVar2 + 0x210)) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FLinearColor *)(*pcVar3)();
      return pFVar7;
    }
  }
  puVar1 = (undefined8 *)(*(longlong *)(lVar2 + 0x208) + (longlong)param_1 * 0x10);
  uVar4 = puVar1[1];
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *puVar1;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar4;
  return __return_storage_ptr__;
}

// `vector_deleting_destructor'`adjustor{16}' @ 14989a284

/* [thunk]:public: virtual void * __ptr64 __cdecl FPCGControlPointsAccessor<struct
   UE::Math::TQuat<double>,1,1>::`vector deleting destructor'`adjustor{16}' (unsigned int) __ptr64
    */

void * __thiscall
FPCGControlPointsAccessor<UE::Math::TQuat<double>,1,1>::_vector_deleting_destructor__adjustor_16__
          (FPCGControlPointsAccessor<UE::Math::TQuat<double>,1,1> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FPCGControlPointsAccessor<UE::Math::TQuat<double>,1,1> *)&this[-1]._padding_,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{16}' @ 14989a294

/* [thunk]:public: virtual void * __ptr64 __cdecl FPCGControlPointsAccessor<struct
   UE::Math::TQuat<double>,1,0>::`vector deleting destructor'`adjustor{16}' (unsigned int) __ptr64
    */

void * __thiscall
FPCGControlPointsAccessor<UE::Math::TQuat<double>,1,0>::_vector_deleting_destructor__adjustor_16__
          (FPCGControlPointsAccessor<UE::Math::TQuat<double>,1,0> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FPCGControlPointsAccessor<UE::Math::TQuat<double>,1,0> *)&this[-1]._padding_,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{16}' @ 14989a2a4

/* [thunk]:public: virtual void * __ptr64 __cdecl FPCGControlPointsAccessor<struct
   UE::Math::TTransform<double>,3,1>::`vector deleting destructor'`adjustor{16}' (unsigned int)
   __ptr64 */

void * __thiscall
FPCGControlPointsAccessor<UE::Math::TTransform<double>,3,1>::
_vector_deleting_destructor__adjustor_16__
          (FPCGControlPointsAccessor<UE::Math::TTransform<double>,3,1> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FPCGControlPointsAccessor<UE::Math::TTransform<double>,3,1> *)
                      &this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{16}' @ 14989a2b4

/* [thunk]:public: virtual void * __ptr64 __cdecl FPCGControlPointsAccessor<struct
   UE::Math::TTransform<double>,3,0>::`vector deleting destructor'`adjustor{16}' (unsigned int)
   __ptr64 */

void * __thiscall
FPCGControlPointsAccessor<UE::Math::TTransform<double>,3,0>::
_vector_deleting_destructor__adjustor_16__
          (FPCGControlPointsAccessor<UE::Math::TTransform<double>,3,0> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FPCGControlPointsAccessor<UE::Math::TTransform<double>,3,0> *)
                      &this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{16}' @ 14989a2c4

/* [thunk]:public: virtual void * __ptr64 __cdecl FPCGControlPointsAccessor<struct
   UE::Math::TVector<double>,2,1>::`vector deleting destructor'`adjustor{16}' (unsigned int) __ptr64
    */

void * __thiscall
FPCGControlPointsAccessor<UE::Math::TVector<double>,2,1>::_vector_deleting_destructor__adjustor_16__
          (FPCGControlPointsAccessor<UE::Math::TVector<double>,2,1> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FPCGControlPointsAccessor<UE::Math::TVector<double>,2,1> *)
                      &this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{16}' @ 14989a2d4

/* [thunk]:public: virtual void * __ptr64 __cdecl FPCGControlPointsAccessor<struct
   UE::Math::TVector<double>,2,0>::`vector deleting destructor'`adjustor{16}' (unsigned int) __ptr64
    */

void * __thiscall
FPCGControlPointsAccessor<UE::Math::TVector<double>,2,0>::_vector_deleting_destructor__adjustor_16__
          (FPCGControlPointsAccessor<UE::Math::TVector<double>,2,0> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FPCGControlPointsAccessor<UE::Math::TVector<double>,2,0> *)
                      &this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{16}' @ 14989a2e4

/* [thunk]:public: virtual void * __ptr64 __cdecl FPCGControlPointsAccessor<struct
   UE::Math::TVector<double>,4,0>::`vector deleting destructor'`adjustor{16}' (unsigned int) __ptr64
    */

void * __thiscall
FPCGControlPointsAccessor<UE::Math::TVector<double>,4,0>::_vector_deleting_destructor__adjustor_16__
          (FPCGControlPointsAccessor<UE::Math::TVector<double>,4,0> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FPCGControlPointsAccessor<UE::Math::TVector<double>,4,0> *)
                      &this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{16}' @ 14989a2f4

/* [thunk]:public: virtual void * __ptr64 __cdecl FPCGControlPointsAccessor<struct
   UE::Math::TVector<double>,5,0>::`vector deleting destructor'`adjustor{16}' (unsigned int) __ptr64
    */

void * __thiscall
FPCGControlPointsAccessor<UE::Math::TVector<double>,5,0>::_vector_deleting_destructor__adjustor_16__
          (FPCGControlPointsAccessor<UE::Math::TVector<double>,5,0> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FPCGControlPointsAccessor<UE::Math::TVector<double>,5,0> *)
                      &this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{16}' @ 14989a304

/* [thunk]:public: virtual void * __ptr64 __cdecl FPCGControlPointsAccessor<struct
   UE::Math::TVector<double>,0,1>::`vector deleting destructor'`adjustor{16}' (unsigned int) __ptr64
    */

void * __thiscall
FPCGControlPointsAccessor<UE::Math::TVector<double>,0,1>::_vector_deleting_destructor__adjustor_16__
          (FPCGControlPointsAccessor<UE::Math::TVector<double>,0,1> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FPCGControlPointsAccessor<UE::Math::TVector<double>,0,1> *)
                      &this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{16}' @ 14989a314

/* [thunk]:public: virtual void * __ptr64 __cdecl FPCGControlPointsAccessor<struct
   UE::Math::TVector<double>,0,0>::`vector deleting destructor'`adjustor{16}' (unsigned int) __ptr64
    */

void * __thiscall
FPCGControlPointsAccessor<UE::Math::TVector<double>,0,0>::_vector_deleting_destructor__adjustor_16__
          (FPCGControlPointsAccessor<UE::Math::TVector<double>,0,0> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FPCGControlPointsAccessor<UE::Math::TVector<double>,0,0> *)
                      &this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{16}' @ 14989a324

/* [thunk]:public: virtual void * __ptr64 __cdecl FPCGControlPointsAccessor<__int64,6,0>::`vector
   deleting destructor'`adjustor{16}' (unsigned int) __ptr64 */

void * __thiscall
FPCGControlPointsAccessor<__int64,6,0>::_vector_deleting_destructor__adjustor_16__
          (FPCGControlPointsAccessor<__int64,6,0> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FPCGControlPointsAccessor<__int64,6,0> *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{16}' @ 14989a334

/* [thunk]:public: virtual void * __ptr64 __cdecl FPCGSplineAccessor<struct
   UE::Math::TTransform<double>,0>::`vector deleting destructor'`adjustor{16}' (unsigned int)
   __ptr64 */

void * __thiscall
FPCGSplineAccessor<UE::Math::TTransform<double>,0>::_vector_deleting_destructor__adjustor_16__
          (FPCGSplineAccessor<UE::Math::TTransform<double>,0> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FPCGSplineAccessor<UE::Math::TTransform<double>,0> *)&this[-1]._padding_,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{16}' @ 14989a344

/* [thunk]:public: virtual void * __ptr64 __cdecl FPCGSplineAccessor<bool,1>::`vector deleting
   destructor'`adjustor{16}' (unsigned int) __ptr64 */

void * __thiscall
FPCGSplineAccessor<bool,1>::_vector_deleting_destructor__adjustor_16__
          (FPCGSplineAccessor<bool,1> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FPCGSplineAccessor<bool,1> *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14989a360

void * __thiscall
FPCGControlPointsAccessor<UE::Math::TQuat<double>,1,1>::_scalar_deleting_destructor_
          (FPCGControlPointsAccessor<UE::Math::TQuat<double>,1,1> *this,uint param_1)

{
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989a3b0

void * __thiscall
FPCGControlPointsAccessor<UE::Math::TQuat<double>,1,0>::_scalar_deleting_destructor_
          (FPCGControlPointsAccessor<UE::Math::TQuat<double>,1,0> *this,uint param_1)

{
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989a400

void * __thiscall
FPCGControlPointsAccessor<UE::Math::TTransform<double>,3,1>::_scalar_deleting_destructor_
          (FPCGControlPointsAccessor<UE::Math::TTransform<double>,3,1> *this,uint param_1)

{
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989a450

void * __thiscall
FPCGControlPointsAccessor<UE::Math::TTransform<double>,3,0>::_scalar_deleting_destructor_
          (FPCGControlPointsAccessor<UE::Math::TTransform<double>,3,0> *this,uint param_1)

{
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989a4a0

void * __thiscall
FPCGControlPointsAccessor<UE::Math::TVector<double>,2,1>::_scalar_deleting_destructor_
          (FPCGControlPointsAccessor<UE::Math::TVector<double>,2,1> *this,uint param_1)

{
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989a4f0

void * __thiscall
FPCGControlPointsAccessor<UE::Math::TVector<double>,2,0>::_scalar_deleting_destructor_
          (FPCGControlPointsAccessor<UE::Math::TVector<double>,2,0> *this,uint param_1)

{
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989a540

void * __thiscall
FPCGControlPointsAccessor<UE::Math::TVector<double>,4,0>::_scalar_deleting_destructor_
          (FPCGControlPointsAccessor<UE::Math::TVector<double>,4,0> *this,uint param_1)

{
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989a590

void * __thiscall
FPCGControlPointsAccessor<UE::Math::TVector<double>,5,0>::_scalar_deleting_destructor_
          (FPCGControlPointsAccessor<UE::Math::TVector<double>,5,0> *this,uint param_1)

{
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989a5e0

void * __thiscall
FPCGControlPointsAccessor<UE::Math::TVector<double>,0,1>::_scalar_deleting_destructor_
          (FPCGControlPointsAccessor<UE::Math::TVector<double>,0,1> *this,uint param_1)

{
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989a630

void * __thiscall
FPCGControlPointsAccessor<UE::Math::TVector<double>,0,0>::_scalar_deleting_destructor_
          (FPCGControlPointsAccessor<UE::Math::TVector<double>,0,0> *this,uint param_1)

{
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989a680

void * __thiscall
FPCGControlPointsAccessor<__int64,6,0>::_scalar_deleting_destructor_
          (FPCGControlPointsAccessor<__int64,6,0> *this,uint param_1)

{
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989a6d0

void * __thiscall
FPCGPolygon2DDataAccessor<int,5>::_scalar_deleting_destructor_
          (FPCGPolygon2DDataAccessor<int,5> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989a700

void * __thiscall
FPCGPolygon2DDataAccessor<int,6>::_scalar_deleting_destructor_
          (FPCGPolygon2DDataAccessor<int,6> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989a730

void * __thiscall
FPCGPolygon2DDataAccessor<int,7>::_scalar_deleting_destructor_
          (FPCGPolygon2DDataAccessor<int,7> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989a760

void * __thiscall
FPCGPolygon2DDataAccessor<int,8>::_scalar_deleting_destructor_
          (FPCGPolygon2DDataAccessor<int,8> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989a790

void * __thiscall
FPCGPolygon2DDataAccessor<double,1>::_scalar_deleting_destructor_
          (FPCGPolygon2DDataAccessor<double,1> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989a7c0

void * __thiscall
FPCGPolygon2DDataAccessor<double,2>::_scalar_deleting_destructor_
          (FPCGPolygon2DDataAccessor<double,2> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989a7f0

void * __thiscall
FPCGPolygon2DDataAccessor<UE::Math::TTransform<double>,0>::_scalar_deleting_destructor_
          (FPCGPolygon2DDataAccessor<UE::Math::TTransform<double>,0> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989a820

void * __thiscall
FPCGPolygon2DDataAccessor<UE::Math::TVector2<double>,3>::_scalar_deleting_destructor_
          (FPCGPolygon2DDataAccessor<UE::Math::TVector2<double>,3> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989a850

void * __thiscall
FPCGPolygon2DDataAccessor<UE::Math::TVector2<double>,4>::_scalar_deleting_destructor_
          (FPCGPolygon2DDataAccessor<UE::Math::TVector2<double>,4> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989a880

void * __thiscall
FPCGPolygon2DDataAccessor<bool,9>::_scalar_deleting_destructor_
          (FPCGPolygon2DDataAccessor<bool,9> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989a8b0

void * __thiscall
FPCGPolygon2DVerticesAccessor<int,2>::_scalar_deleting_destructor_
          (FPCGPolygon2DVerticesAccessor<int,2> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989a8e0

void * __thiscall
FPCGPolygon2DVerticesAccessor<int,3>::_scalar_deleting_destructor_
          (FPCGPolygon2DVerticesAccessor<int,3> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989a910

void * __thiscall
FPCGPolygon2DVerticesAccessor<double,4>::_scalar_deleting_destructor_
          (FPCGPolygon2DVerticesAccessor<double,4> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989a940

void * __thiscall
FPCGPolygon2DVerticesAccessor<UE::Math::TQuat<double>,1>::_scalar_deleting_destructor_
          (FPCGPolygon2DVerticesAccessor<UE::Math::TQuat<double>,1> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989a970

void * __thiscall
FPCGPolygon2DVerticesAccessor<UE::Math::TQuat<double>,6>::_scalar_deleting_destructor_
          (FPCGPolygon2DVerticesAccessor<UE::Math::TQuat<double>,6> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989a9a0

void * __thiscall
FPCGPolygon2DVerticesAccessor<UE::Math::TVector2<double>,5>::_scalar_deleting_destructor_
          (FPCGPolygon2DVerticesAccessor<UE::Math::TVector2<double>,5> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989a9d0

void * __thiscall
PCGTemporary::FPCGPolygon2DVerticesAccessor<UE::Math::TVector2<double>,5>::
_scalar_deleting_destructor_
          (FPCGPolygon2DVerticesAccessor<UE::Math::TVector2<double>,5> *this,uint param_1)

{
  ~FPCGPolygon2DVerticesAccessor<UE::Math::TVector2<double>,5>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989aa10

void * __thiscall
FPCGPolygon2DVerticesAccessor<UE::Math::TVector<double>,0>::_scalar_deleting_destructor_
          (FPCGPolygon2DVerticesAccessor<UE::Math::TVector<double>,0> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989aa40

void * __thiscall
PCGTemporary::FPCGPolygon2DVerticesAccessor<UE::Math::TVector<double>,0>::
_scalar_deleting_destructor_
          (FPCGPolygon2DVerticesAccessor<UE::Math::TVector<double>,0> *this,uint param_1)

{
  ~FPCGPolygon2DVerticesAccessor<UE::Math::TVector<double>,0>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989aa80

void * __thiscall
FPCGSplineAccessor<UE::Math::TTransform<double>,0>::_scalar_deleting_destructor_
          (FPCGSplineAccessor<UE::Math::TTransform<double>,0> *this,uint param_1)

{
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989aad0

void * __thiscall
FPCGSplineAccessor<bool,1>::_scalar_deleting_destructor_
          (FPCGSplineAccessor<bool,1> *this,uint param_1)

{
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989ab20

void * __thiscall
IPCGAttributeAccessorT<FPCGControlPointsAccessor<UE::Math::TQuat<double>,1,1>_>::
_scalar_deleting_destructor_
          (IPCGAttributeAccessorT<FPCGControlPointsAccessor<UE::Math::TQuat<double>,1,1>_> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989ab50

void * __thiscall
IPCGAttributeAccessorT<FPCGControlPointsAccessor<UE::Math::TQuat<double>,1,0>_>::
_scalar_deleting_destructor_
          (IPCGAttributeAccessorT<FPCGControlPointsAccessor<UE::Math::TQuat<double>,1,0>_> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989ab80

void * __thiscall
IPCGAttributeAccessorT<FPCGControlPointsAccessor<UE::Math::TTransform<double>,3,1>_>::
_scalar_deleting_destructor_
          (IPCGAttributeAccessorT<FPCGControlPointsAccessor<UE::Math::TTransform<double>,3,1>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989abb0

void * __thiscall
IPCGAttributeAccessorT<FPCGControlPointsAccessor<UE::Math::TTransform<double>,3,0>_>::
_scalar_deleting_destructor_
          (IPCGAttributeAccessorT<FPCGControlPointsAccessor<UE::Math::TTransform<double>,3,0>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989abe0

void * __thiscall
IPCGAttributeAccessorT<FPCGControlPointsAccessor<UE::Math::TVector<double>,2,1>_>::
_scalar_deleting_destructor_
          (IPCGAttributeAccessorT<FPCGControlPointsAccessor<UE::Math::TVector<double>,2,1>_> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989ac10

void * __thiscall
IPCGAttributeAccessorT<FPCGControlPointsAccessor<UE::Math::TVector<double>,2,0>_>::
_scalar_deleting_destructor_
          (IPCGAttributeAccessorT<FPCGControlPointsAccessor<UE::Math::TVector<double>,2,0>_> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989ac40

void * __thiscall
IPCGAttributeAccessorT<FPCGControlPointsAccessor<UE::Math::TVector<double>,4,0>_>::
_scalar_deleting_destructor_
          (IPCGAttributeAccessorT<FPCGControlPointsAccessor<UE::Math::TVector<double>,4,0>_> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989ac70

void * __thiscall
IPCGAttributeAccessorT<FPCGControlPointsAccessor<UE::Math::TVector<double>,5,0>_>::
_scalar_deleting_destructor_
          (IPCGAttributeAccessorT<FPCGControlPointsAccessor<UE::Math::TVector<double>,5,0>_> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989aca0

void * __thiscall
IPCGAttributeAccessorT<FPCGControlPointsAccessor<UE::Math::TVector<double>,0,1>_>::
_scalar_deleting_destructor_
          (IPCGAttributeAccessorT<FPCGControlPointsAccessor<UE::Math::TVector<double>,0,1>_> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989acd0

void * __thiscall
IPCGAttributeAccessorT<FPCGControlPointsAccessor<UE::Math::TVector<double>,0,0>_>::
_scalar_deleting_destructor_
          (IPCGAttributeAccessorT<FPCGControlPointsAccessor<UE::Math::TVector<double>,0,0>_> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989ad00

void * __thiscall
IPCGAttributeAccessorT<FPCGControlPointsAccessor<__int64,6,0>_>::_scalar_deleting_destructor_
          (IPCGAttributeAccessorT<FPCGControlPointsAccessor<__int64,6,0>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989ad30

void * __thiscall
IPCGAttributeAccessorT<FPCGPolygon2DDataAccessor<int,5>_>::_scalar_deleting_destructor_
          (IPCGAttributeAccessorT<FPCGPolygon2DDataAccessor<int,5>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989ad60

void * __thiscall
IPCGAttributeAccessorT<FPCGPolygon2DDataAccessor<int,6>_>::_scalar_deleting_destructor_
          (IPCGAttributeAccessorT<FPCGPolygon2DDataAccessor<int,6>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989ad90

void * __thiscall
IPCGAttributeAccessorT<FPCGPolygon2DDataAccessor<int,7>_>::_scalar_deleting_destructor_
          (IPCGAttributeAccessorT<FPCGPolygon2DDataAccessor<int,7>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989adc0

void * __thiscall
IPCGAttributeAccessorT<FPCGPolygon2DDataAccessor<int,8>_>::_scalar_deleting_destructor_
          (IPCGAttributeAccessorT<FPCGPolygon2DDataAccessor<int,8>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989adf0

void * __thiscall
IPCGAttributeAccessorT<FPCGPolygon2DDataAccessor<double,1>_>::_scalar_deleting_destructor_
          (IPCGAttributeAccessorT<FPCGPolygon2DDataAccessor<double,1>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989ae20

void * __thiscall
IPCGAttributeAccessorT<FPCGPolygon2DDataAccessor<double,2>_>::_scalar_deleting_destructor_
          (IPCGAttributeAccessorT<FPCGPolygon2DDataAccessor<double,2>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989ae50

void * __thiscall
IPCGAttributeAccessorT<FPCGPolygon2DDataAccessor<UE::Math::TTransform<double>,0>_>::
_scalar_deleting_destructor_
          (IPCGAttributeAccessorT<FPCGPolygon2DDataAccessor<UE::Math::TTransform<double>,0>_> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989ae80

void * __thiscall
IPCGAttributeAccessorT<FPCGPolygon2DDataAccessor<UE::Math::TVector2<double>,3>_>::
_scalar_deleting_destructor_
          (IPCGAttributeAccessorT<FPCGPolygon2DDataAccessor<UE::Math::TVector2<double>,3>_> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989aeb0

void * __thiscall
IPCGAttributeAccessorT<FPCGPolygon2DDataAccessor<UE::Math::TVector2<double>,4>_>::
_scalar_deleting_destructor_
          (IPCGAttributeAccessorT<FPCGPolygon2DDataAccessor<UE::Math::TVector2<double>,4>_> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989aee0

void * __thiscall
IPCGAttributeAccessorT<FPCGPolygon2DDataAccessor<bool,9>_>::_scalar_deleting_destructor_
          (IPCGAttributeAccessorT<FPCGPolygon2DDataAccessor<bool,9>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989af10

void * __thiscall
IPCGAttributeAccessorT<FPCGPolygon2DVerticesAccessor<int,2>_>::_scalar_deleting_destructor_
          (IPCGAttributeAccessorT<FPCGPolygon2DVerticesAccessor<int,2>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989af40

void * __thiscall
IPCGAttributeAccessorT<FPCGPolygon2DVerticesAccessor<int,3>_>::_scalar_deleting_destructor_
          (IPCGAttributeAccessorT<FPCGPolygon2DVerticesAccessor<int,3>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989af70

void * __thiscall
IPCGAttributeAccessorT<FPCGPolygon2DVerticesAccessor<double,4>_>::_scalar_deleting_destructor_
          (IPCGAttributeAccessorT<FPCGPolygon2DVerticesAccessor<double,4>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989afa0

void * __thiscall
IPCGAttributeAccessorT<FPCGPolygon2DVerticesAccessor<UE::Math::TQuat<double>,1>_>::
_scalar_deleting_destructor_
          (IPCGAttributeAccessorT<FPCGPolygon2DVerticesAccessor<UE::Math::TQuat<double>,1>_> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989afd0

void * __thiscall
IPCGAttributeAccessorT<FPCGPolygon2DVerticesAccessor<UE::Math::TQuat<double>,6>_>::
_scalar_deleting_destructor_
          (IPCGAttributeAccessorT<FPCGPolygon2DVerticesAccessor<UE::Math::TQuat<double>,6>_> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989b000

void * __thiscall
IPCGAttributeAccessorT<FPCGPolygon2DVerticesAccessor<UE::Math::TVector2<double>,5>_>::
_scalar_deleting_destructor_
          (IPCGAttributeAccessorT<FPCGPolygon2DVerticesAccessor<UE::Math::TVector2<double>,5>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989b030

void * __thiscall
IPCGAttributeAccessorT<PCGTemporary::FPCGPolygon2DVerticesAccessor<UE::Math::TVector2<double>,5>_>::
_scalar_deleting_destructor_
          (IPCGAttributeAccessorT<PCGTemporary::FPCGPolygon2DVerticesAccessor<UE::Math::TVector2<double>,5>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989b060

void * __thiscall
IPCGAttributeAccessorT<FPCGPolygon2DVerticesAccessor<UE::Math::TVector<double>,0>_>::
_scalar_deleting_destructor_
          (IPCGAttributeAccessorT<FPCGPolygon2DVerticesAccessor<UE::Math::TVector<double>,0>_> *this
          ,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989b090

void * __thiscall
IPCGAttributeAccessorT<PCGTemporary::FPCGPolygon2DVerticesAccessor<UE::Math::TVector<double>,0>_>::
_scalar_deleting_destructor_
          (IPCGAttributeAccessorT<PCGTemporary::FPCGPolygon2DVerticesAccessor<UE::Math::TVector<double>,0>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989b0c0

void * __thiscall
IPCGAttributeAccessorT<FPCGSplineAccessor<UE::Math::TTransform<double>,0>_>::
_scalar_deleting_destructor_
          (IPCGAttributeAccessorT<FPCGSplineAccessor<UE::Math::TTransform<double>,0>_> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989b0f0

void * __thiscall
IPCGAttributeAccessorT<FPCGSplineAccessor<bool,1>_>::_scalar_deleting_destructor_
          (IPCGAttributeAccessorT<FPCGSplineAccessor<bool,1>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989b120

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`FPCGDataPtrWrapper::DecRefCount'::__l9::<lambda_1>_>'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnGameThread<`FPCGDataPtrWrapper::DecRefCount'::`9'::<lambda_1>_>'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989b160

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGCollisionWrapperData::CopyInternal'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPCGCollisionWrapperData::CopyInternal'::`2'::<lambda_1>,0,1>::
        _vftable_;
  DestructItems<FString,int>(*(FString **)((longlong)this + 0x40),*(int *)((longlong)this + 0x48));
  if (*(void **)((longlong)this + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x40));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989b1c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGLandscapeData::PrepareForSpatialQuery'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPCGLandscapeData::PrepareForSpatialQuery'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989b200

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGVolumeData::CopyInternal'::__l5::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPCGVolumeData::CopyInternal'::`5'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989b240

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGTextureData::ReadbackFromGPUTexture'::__l20::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPCGTextureData::ReadbackFromGPUTexture'::`20'::<lambda_1>,0,1>::
        _vftable_;
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989b290

void * __thiscall
FPCGAttributePropertyInputSelector::_scalar_deleting_destructor_
          (FPCGAttributePropertyInputSelector *this,uint param_1)

{
  DestructItems<FString,int>(*(FString **)&this->field_0x28,*(int *)&this->field_0x30);
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989b2e0

void * __thiscall
FPCGGraphToolData::_scalar_deleting_destructor_(FPCGGraphToolData *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  
  DestructItems<FString,int>
            ((FString *)(this->CompatibleToolTags).AllocatorInstance.Data,
             (this->CompatibleToolTags).ArrayNum);
  pFVar1 = (this->CompatibleToolTags).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->Tooltip).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar2 = (this->DisplayName).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989b350

void * __thiscall
UPCGBaseTextureData::_scalar_deleting_destructor_(UPCGBaseTextureData *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGBaseTextureData__6B_;
  pFVar1 = (this->ColorData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UPCGSurfaceData__6B_;
  UPCGSpatialDataWithPointCache::~UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x260);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989b3d0

void * __thiscall
UPCGCollisionShapeData::_scalar_deleting_destructor_(UPCGCollisionShapeData *this,uint param_1)

{
  FPhysicsShapeAdapter_Chaos *this_00;
  
  *(undefined ***)this = &___7UPCGCollisionShapeData__6B_;
  this_00 = (this->ShapeAdapter).Ptr;
  if (this_00 != (FPhysicsShapeAdapter_Chaos *)0x0) {
    FPhysicsShapeAdapter_Chaos::~FPhysicsShapeAdapter_Chaos(this_00);
    ::operator_delete(this_00,0x30);
  }
  UPCGSpatialDataWithPointCache::~UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989b470

void * __thiscall
UPCGCollisionWrapperData::_scalar_deleting_destructor_(UPCGCollisionWrapperData *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UPCGCollisionWrapperData__6B_;
  DestructItems<TArray<FPhysicsShapeReference_Chaos,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>,int>
            ((TArray<FPhysicsShapeReference_Chaos,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
              *)(this->CachedShapes).AllocatorInstance.Data,(this->CachedShapes).ArrayNum);
  pFVar1 = (this->CachedShapes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FPCGCollisionWrapper::Uninitialize(&this->CollisionWrapper);
  pFVar1 = (this->CollisionWrapper).IndexToBodyInstance.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CollisionWrapper).BodyInstances.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->CollisionSelector).field_0x28,
             *(int *)&(this->CollisionSelector).field_0x30);
  pvVar2 = *(void **)&(this->CollisionSelector).field_0x28;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  this->_padding_ = (longlong)&___7UPCGSpatialData__6B_;
  DestructItems<FString,int>((FString *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UPCGData::~UPCGData((UPCGData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989b590

void * __thiscall
UPCGDataTypeIdentifierHelpers::_scalar_deleting_destructor_
          (UPCGDataTypeIdentifierHelpers *this,uint param_1)

{
  *(undefined ***)this = &___7UPCGDataTypeIdentifierHelpers__6B_;
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

// `scalar_deleting_destructor' @ 14989b5f0

void * __thiscall
UPCGDifferenceData::_scalar_deleting_destructor_(UPCGDifferenceData *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGDifferenceData__6B_;
  UPCGSpatialDataWithPointCache::~UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x138);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989b650

void * __thiscall
UPCGDynamicMeshData::_scalar_deleting_destructor_(UPCGDynamicMeshData *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGDynamicMeshData__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->DynamicMeshOctreeLock);
  UE::Geometry::FSparseDynamicOctree3::~FSparseDynamicOctree3
            ((FSparseDynamicOctree3 *)&this->DynamicMeshOctree);
  pFVar1 = (this->Materials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UPCGSpatialData__6B_;
  DestructItems<FString,int>((FString *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UPCGData::~UPCGData((UPCGData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x328);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989b710

void * __thiscall
UPCGIntersectionData::_scalar_deleting_destructor_(UPCGIntersectionData *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGIntersectionData__6B_;
  UPCGSpatialDataWithPointCache::~UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x198);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989b770

void * __thiscall
UPCGLandscapeData::_scalar_deleting_destructor_(UPCGLandscapeData *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGLandscapeData__6B_;
  pFVar1 = (this->LandscapeInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoundsToLandscapeInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSoftObjectPtr<ALandscapeProxy>,int>
            ((TSoftObjectPtr<ALandscapeProxy> *)(this->Landscapes).AllocatorInstance.Data,
             (this->Landscapes).ArrayNum);
  pFVar1 = (this->Landscapes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UPCGSurfaceData__6B_;
  UPCGSpatialDataWithPointCache::~UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x220);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989b820

void * __thiscall
UPCGLandscapeSplineData::_scalar_deleting_destructor_(UPCGLandscapeSplineData *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGLandscapeSplineData__6B_;
  if (*(void **)&this->ReparamTable != (void *)0x0) {
    FMemory::Free(*(void **)&this->ReparamTable);
  }
  this->_padding_ = (longlong)&___7UPCGPolyLineData__6B_;
  UPCGSpatialDataWithPointCache::~UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x138);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989b8a0

void * __thiscall
UPCGPointArrayData::_scalar_deleting_destructor_(UPCGPointArrayData *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGPointArrayData__6B_;
  FPCGPointArray::~FPCGPointArray(&this->PointArray);
  UPCGBasePointData::~UPCGBasePointData((UPCGBasePointData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x360);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989b910

void * __thiscall UPCGPointData::_scalar_deleting_destructor_(UPCGPointData *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGPointData__6B_;
  TOctree2<FPCGPointRef,FPCGPointRefSemantics>::~TOctree2<FPCGPointRef,FPCGPointRefSemantics>
            (&this->Octree);
  pFVar1 = (this->Points).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UPCGBasePointData::~UPCGBasePointData((UPCGBasePointData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x280);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989b990

void * __thiscall
UPCGPolyLineData::_scalar_deleting_destructor_(UPCGPolyLineData *this,uint param_1)

{
  *(undefined ***)this = &___7UPCGPolyLineData__6B_;
  UPCGSpatialDataWithPointCache::~UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989b9f0

void * __thiscall
UPCGPolygon2DData::_scalar_deleting_destructor_(UPCGPolygon2DData *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined ***)this = &___7UPCGPolygon2DData__6B_;
  *(undefined4 *)&(this->SegmentAndHoleIndicesToSegmentIndex).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SegmentAndHoleIndicesToSegmentIndex).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<int,int>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<int,int>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<int,int>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SegmentAndHoleIndicesToSegmentIndex);
  *(undefined4 *)&(this->SegmentIndexToSegmentAndHoleIndices).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SegmentIndexToSegmentAndHoleIndices).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TTuple<int,int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TTuple<int,int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TTuple<int,int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SegmentIndexToSegmentAndHoleIndices);
  pFVar2 = (this->VertexEntryKeys).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<UE::Geometry::TPolygon2<double>,int>
            ((TPolygon2<double> *)(this->Polygon).Holes.AllocatorInstance.Data,
             (this->Polygon).Holes.ArrayNum);
  pFVar2 = (this->Polygon).Holes.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Polygon).Outer.Vertices.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined ***)this = &___7UPCGPolyLineData__6B_;
  UPCGSpatialDataWithPointCache::~UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x260);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989bb00

void * __thiscall
UPCGPolygon2DInteriorSurfaceData::_scalar_deleting_destructor_
          (UPCGPolygon2DInteriorSurfaceData *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGSurfaceData__6B_;
  UPCGSpatialDataWithPointCache::~UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989bb60

void * __thiscall
UPCGPrimitiveData::_scalar_deleting_destructor_(UPCGPrimitiveData *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGPrimitiveData__6B_;
  UPCGSpatialDataWithPointCache::~UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989bbc0

void * __thiscall
UPCGProjectionData::_scalar_deleting_destructor_(UPCGProjectionData *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGProjectionData__6B_;
  pFVar1 = (this->ProjectionParams).AttributeList.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UPCGSpatialDataWithPointCache::~UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989bc40

void * __thiscall
UPCGRenderTargetData::_scalar_deleting_destructor_(UPCGRenderTargetData *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGBaseTextureData__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7UPCGSurfaceData__6B_;
  UPCGSpatialDataWithPointCache::~UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x270);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989bcc0

void * __thiscall
UPCGResourceData::_scalar_deleting_destructor_(UPCGResourceData *this,uint param_1)

{
  *(undefined ***)this = &___7UPCGResourceData__6B_;
  UPCGData::~UPCGData((UPCGData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989bd20

void * __thiscall UPCGSpatialData::_scalar_deleting_destructor_(UPCGSpatialData *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGSpatialData__6B_;
  DestructItems<FString,int>
            (*(FString **)&(this->CachedLastSelector).field_0x28,
             *(int *)&(this->CachedLastSelector).field_0x30);
  pvVar1 = *(void **)&(this->CachedLastSelector).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UPCGData::~UPCGData((UPCGData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989bdb0

void * __thiscall
UPCGSpatialDataWithPointCache::_scalar_deleting_destructor_
          (UPCGSpatialDataWithPointCache *this,uint param_1)

{
  ~UPCGSpatialDataWithPointCache(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989be10

void * __thiscall UPCGSplineData::_scalar_deleting_destructor_(UPCGSplineData *this,uint param_1)

{
  *(undefined ***)this = &___7UPCGSplineData__6B_;
  FPCGSplineStruct::~FPCGSplineStruct(&this->SplineStruct);
  *(undefined ***)this = &___7UPCGPolyLineData__6B_;
  UPCGSpatialDataWithPointCache::~UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,800);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989be90

void * __thiscall
UPCGSplineInteriorSurfaceData::_scalar_deleting_destructor_
          (UPCGSplineInteriorSurfaceData *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &___7UPCGSplineInteriorSurfaceData__6B_;
  pFVar1 = (this->CachedSplinePoints2D).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedSplinePoints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FPCGSplineStruct::~FPCGSplineStruct(&this->SplineStruct);
  *(undefined ***)this = &___7UPCGSurfaceData__6B_;
  UPCGSpatialDataWithPointCache::~UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x3e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989bf30

void * __thiscall
UPCGSplineProjectionData::_scalar_deleting_destructor_(UPCGSplineProjectionData *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGSplineProjectionData__6B_;
  if (*(void **)&this->ProjectedPosition != (void *)0x0) {
    FMemory::Free(*(void **)&this->ProjectedPosition);
  }
  this->_padding_ = (longlong)&___7UPCGProjectionData__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UPCGSpatialDataWithPointCache::~UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989bfc0

void * __thiscall
UPCGStaticMeshResourceData::_scalar_deleting_destructor_
          (UPCGStaticMeshResourceData *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGStaticMeshResourceData__6B_;
  pvVar1 = *(void **)&(this->StaticMesh).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UPCGResourceData__6B_;
  UPCGData::~UPCGData((UPCGData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989c040

void * __thiscall UPCGSurfaceData::_scalar_deleting_destructor_(UPCGSurfaceData *this,uint param_1)

{
  *(undefined ***)this = &___7UPCGSurfaceData__6B_;
  UPCGSpatialDataWithPointCache::~UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989c0a0

void * __thiscall UPCGTextureData::_scalar_deleting_destructor_(UPCGTextureData *this,uint param_1)

{
  IPooledRenderTarget *pIVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7UPCGTextureData__6B_;
  pIVar1 = (this->TextureHandle).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  if (*(longlong *)&this->PostInitializeCallback != 0) {
    plVar2 = *(longlong **)&(this->PostInitializeCallback).field_0x28;
    plVar3 = (longlong *)&(this->PostInitializeCallback).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  *(undefined ***)this = &___7UPCGBaseTextureData__6B_;
  if (*(void **)&this->field_0x208 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x208);
  }
  *(undefined ***)this = &___7UPCGSurfaceData__6B_;
  UPCGSpatialDataWithPointCache::~UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989c160

void * __thiscall UPCGUnionData::_scalar_deleting_destructor_(UPCGUnionData *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGUnionData__6B_;
  pFVar1 = (this->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UPCGSpatialDataWithPointCache::~UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1a8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989c1e0

void * __thiscall
UPCGVirtualTextureData::_scalar_deleting_destructor_(UPCGVirtualTextureData *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGSurfaceData__6B_;
  UPCGSpatialDataWithPointCache::~UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989c240

void * __thiscall UPCGVolumeData::_scalar_deleting_destructor_(UPCGVolumeData *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGVolumeData__6B_;
  ReleaseInternalBodyInstance(this);
  UPCGSpatialDataWithPointCache::~UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1a8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989c2b0

/* WARNING: Enum "EPCGWorldQueryFilter": Some values do not have unique names */

void * __thiscall
UPCGWorldRayHitData::_scalar_deleting_destructor_(UPCGWorldRayHitData *this,uint param_1)

{
  ForElementType<FSetElementId> FVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UPCGWorldRayHitData__6B_;
  (this->CachedLandscapeLayerNames).HashSize = 0;
  FVar1 = (this->CachedLandscapeLayerNames).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->CachedLandscapeLayerNames).Elements);
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->ActorFilter).CachedFilterActorsLock);
  (this->ActorFilter).CachedFilterActors.HashSize = 0;
  FVar1 = (this->ActorFilter).CachedFilterActors.Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TObjectKey<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectKey<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ActorFilter).CachedFilterActors.Elements);
  DestructItems<TSoftObjectPtr<AActor>,int>
            ((TSoftObjectPtr<AActor> *)(this->ActorFilter).FilterActors.AllocatorInstance.Data,
             (this->ActorFilter).FilterActors.ArrayNum);
  pFVar2 = (this->ActorFilter).FilterActors.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FPCGWorldCommonQueryParams::~FPCGWorldCommonQueryParams
            ((FPCGWorldCommonQueryParams *)&this->QueryParams);
  this->_padding_ = (longlong)&___7UPCGSurfaceData__6B_;
  UPCGSpatialDataWithPointCache::~UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x430);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14989c3c0

/* WARNING: Enum "EPCGWorldQueryFilter": Some values do not have unique names */

void * __thiscall
UPCGWorldVolumetricData::_scalar_deleting_destructor_(UPCGWorldVolumetricData *this,uint param_1)

{
  ForElementType<FSetElementId> FVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UPCGWorldVolumetricData__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->ActorFilter).CachedFilterActorsLock);
  (this->ActorFilter).CachedFilterActors.HashSize = 0;
  FVar1 = (this->ActorFilter).CachedFilterActors.Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TObjectKey<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectKey<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ActorFilter).CachedFilterActors.Elements);
  DestructItems<TSoftObjectPtr<AActor>,int>
            ((TSoftObjectPtr<AActor> *)(this->ActorFilter).FilterActors.AllocatorInstance.Data,
             (this->ActorFilter).FilterActors.ArrayNum);
  pFVar2 = (this->ActorFilter).FilterActors.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FPCGWorldCommonQueryParams::~FPCGWorldCommonQueryParams
            ((FPCGWorldCommonQueryParams *)&this->QueryParams);
  this->_padding_ = (longlong)&___7UPCGVolumeData__6B_;
  UPCGVolumeData::ReleaseInternalBodyInstance((UPCGVolumeData *)this);
  UPCGSpatialDataWithPointCache::~UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x318);
  }
  return this;
}

// ApplyProjectionColorBlend @ 14989ee70

TVector4<double> * __cdecl
PCGProjectionPrivate::ApplyProjectionColorBlend
          (TVector4<double> *__return_storage_ptr__,TVector4<double> *param_1,
          TVector4<double> *param_2,EPCGProjectionColorBlendMode param_3)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  bool bVar7;
  TVector4<double> *pTVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  if (param_3 == SourceValue) {
    dVar11 = (param_1->field0_0x0)._s_0.Y;
    dVar10 = (param_1->field0_0x0)._s_0.Z;
    dVar9 = (param_1->field0_0x0)._s_0.W;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar11;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar10;
    (__return_storage_ptr__->field0_0x0)._s_0.W = dVar9;
    return __return_storage_ptr__;
  }
  if (param_3 == TargetValue) {
    dVar11 = (param_2->field0_0x0)._s_0.Y;
    dVar10 = (param_2->field0_0x0)._s_0.Z;
    dVar9 = (param_2->field0_0x0)._s_0.W;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar11;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar10;
    (__return_storage_ptr__->field0_0x0)._s_0.W = dVar9;
    return __return_storage_ptr__;
  }
  if (param_3 == Add) {
    dVar10 = (param_1->field0_0x0)._s_0.Y + (param_2->field0_0x0)._s_0.Y;
    dVar11 = (param_1->field0_0x0)._s_0.Z + (param_2->field0_0x0)._s_0.Z;
    dVar9 = (param_1->field0_0x0)._s_0.W + (param_2->field0_0x0)._s_0.W;
    dVar5 = (param_1->field0_0x0)._s_0.X + (param_2->field0_0x0)._s_0.X;
  }
  else {
    if (param_3 != Subtract) {
      if (param_3 == Multiply) {
        dVar9 = (param_1->field0_0x0)._s_0.Z;
        dVar10 = (param_1->field0_0x0)._s_0.W;
        dVar11 = (param_1->field0_0x0)._s_0.Y * (param_2->field0_0x0)._s_0.Y;
        dVar5 = (param_2->field0_0x0)._s_0.Z;
        dVar6 = (param_2->field0_0x0)._s_0.W;
        auVar2._8_4_ = SUB84(dVar11,0);
        auVar2._0_8_ = (param_1->field0_0x0)._s_0.X * (param_2->field0_0x0)._s_0.X;
        auVar2._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
        *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar2;
        dVar10 = dVar10 * dVar6;
        auVar3._8_4_ = SUB84(dVar10,0);
        auVar3._0_8_ = dVar9 * dVar5;
        auVar3._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        *(undefined1 (*) [16])((longlong)&__return_storage_ptr__->field0_0x0 + 0x10) = auVar3;
        return __return_storage_ptr__;
      }
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGProjectionData.cpp"
                         ,0x2d,L"");
      if (bVar7) {
        pcVar1 = (code *)swi(3);
        pTVar8 = (TVector4<double> *)(*pcVar1)();
        return pTVar8;
      }
      (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
      (__return_storage_ptr__->field0_0x0)._s_0.W = 0.0;
      return __return_storage_ptr__;
    }
    dVar10 = (param_1->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y;
    dVar11 = (param_1->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z;
    dVar9 = (param_1->field0_0x0)._s_0.W - (param_2->field0_0x0)._s_0.W;
    dVar5 = (param_1->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X;
  }
  if (__real_3ff0000000000000 <= dVar5) {
    dVar5 = __real_3ff0000000000000;
  }
  if (__real_3ff0000000000000 <= dVar11) {
    dVar11 = __real_3ff0000000000000;
  }
  if (__real_3ff0000000000000 <= dVar10) {
    dVar10 = __real_3ff0000000000000;
  }
  if (__real_3ff0000000000000 <= dVar9) {
    dVar9 = __real_3ff0000000000000;
  }
  if (dVar5 <= 0.0) {
    dVar5 = 0.0;
  }
  if (dVar11 <= 0.0) {
    dVar11 = 0.0;
  }
  if (dVar10 <= 0.0) {
    dVar10 = 0.0;
  }
  if (dVar9 <= 0.0) {
    dVar9 = 0.0;
  }
  auVar4._8_4_ = SUB84(dVar10,0);
  auVar4._0_8_ = dVar5;
  auVar4._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar11;
  (__return_storage_ptr__->field0_0x0)._s_0.W = dVar9;
  return __return_storage_ptr__;
}

// Bilerp @ 14989fb60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
PCGPointHelpers::Bilerp
          (FPCGPoint *param_1,FPCGPoint *param_2,FPCGPoint *param_3,FPCGPoint *param_4,
          UPCGMetadata *param_5,FPCGPoint *param_6,UPCGMetadata *param_7,float param_8,float param_9
          )

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auStackY_298 [32];
  FPCGPoint local_268;
  FPCGPoint local_198;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_298;
  uVar17 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  uVar18 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_198.Density = 1.0;
  local_198.Steepness = 0.5;
  local_198.Seed = 0;
  local_198.MetadataEntry = -1;
  local_268.Density = 1.0;
  uVar15 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  uVar16 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_268.Steepness = 0.5;
  local_268.Seed = 0;
  local_268.MetadataEntry = -1;
  uVar13 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  uVar14 = (undefined4)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  uVar11 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  uVar12 = (undefined4)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  uVar9 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  uVar10 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  uVar7 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  uVar8 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  uVar1 = (uint)__xmm_80000000000000008000000000000000;
  uVar5 = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar1;
  uVar2 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  uVar6 = (uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >> 0x20) ^ uVar2;
  local_198.BoundsMax.field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uVar3 = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar1;
  uVar4 = (uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >> 0x20) ^ uVar2;
  local_268.BoundsMax.field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uVar1 = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar1;
  uVar2 = (uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >> 0x20) ^ uVar2;
  local_198.Transform.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar7;
  local_198.Transform.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
  ;
  local_198.Transform.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar8;
  local_268.Transform.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar7;
  local_268.Transform.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
  ;
  local_268.Transform.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar8;
  local_198.BoundsMin.field0_0x0._s_0.X = (double)CONCAT44(uVar6,uVar5);
  local_198.BoundsMin.field0_0x0._s_0.Y = (double)CONCAT44(uVar4,uVar3);
  local_198.BoundsMin.field0_0x0._s_0.Z = (double)CONCAT44(uVar2,uVar1);
  local_268.BoundsMin.field0_0x0._s_0.X = (double)CONCAT44(uVar6,uVar5);
  local_268.BoundsMin.field0_0x0._s_0.Y = (double)CONCAT44(uVar4,uVar3);
  local_268.BoundsMin.field0_0x0._s_0.Z = (double)CONCAT44(uVar2,uVar1);
  local_198.Transform.Rotation.XY.m128d_f64[1]._0_4_ = uVar17;
  local_198.Transform.Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_198.Transform.Rotation.XY.m128d_f64[1]._4_4_ = uVar18;
  local_198.Transform.Rotation.ZW.m128d_f64[1]._0_4_ = uVar15;
  local_198.Transform.Rotation.ZW.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_198.Transform.Rotation.ZW.m128d_f64[1]._4_4_ = uVar16;
  local_198.Transform.Translation.XY.m128d_f64[1]._0_4_ = uVar13;
  local_198.Transform.Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_198.Transform.Translation.XY.m128d_f64[1]._4_4_ = uVar14;
  local_198.Transform.Translation.ZW.m128d_f64[1]._0_4_ = uVar11;
  local_198.Transform.Translation.ZW.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_198.Transform.Translation.ZW.m128d_f64[1]._4_4_ = uVar12;
  local_198.Transform.Scale3D.XY.m128d_f64[1]._0_4_ = uVar9;
  local_198.Transform.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
  ;
  local_198.Transform.Scale3D.XY.m128d_f64[1]._4_4_ = uVar10;
  local_198.BoundsMax.field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  local_198.BoundsMax.field0_0x0._s_0.Y = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_198.Color.field0_0x0._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
  local_198.Color.field0_0x0._s_0.Y = _UNK_150689688;
  local_198.Color.field0_0x0._s_0.Z = ___xmm_3ff00000000000003ff0000000000000;
  local_198.Color.field0_0x0._s_0.W = _UNK_150689688;
  local_268.Transform.Rotation.XY.m128d_f64[1]._0_4_ = uVar17;
  local_268.Transform.Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_268.Transform.Rotation.XY.m128d_f64[1]._4_4_ = uVar18;
  local_268.Transform.Rotation.ZW.m128d_f64[1]._0_4_ = uVar15;
  local_268.Transform.Rotation.ZW.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_268.Transform.Rotation.ZW.m128d_f64[1]._4_4_ = uVar16;
  local_268.Transform.Translation.XY.m128d_f64[1]._0_4_ = uVar13;
  local_268.Transform.Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_268.Transform.Translation.XY.m128d_f64[1]._4_4_ = uVar14;
  local_268.Transform.Translation.ZW.m128d_f64[1]._0_4_ = uVar11;
  local_268.Transform.Translation.ZW.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_268.Transform.Translation.ZW.m128d_f64[1]._4_4_ = uVar12;
  local_268.Transform.Scale3D.XY.m128d_f64[1]._0_4_ = uVar9;
  local_268.Transform.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
  ;
  local_268.Transform.Scale3D.XY.m128d_f64[1]._4_4_ = uVar10;
  local_268.BoundsMax.field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  local_268.BoundsMax.field0_0x0._s_0.Y = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_268.Color.field0_0x0._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
  local_268.Color.field0_0x0._s_0.Y = _UNK_150689688;
  local_268.Color.field0_0x0._s_0.Z = ___xmm_3ff00000000000003ff0000000000000;
  local_268.Color.field0_0x0._s_0.W = _UNK_150689688;
  Lerp(param_1,param_2,param_8,param_5,&local_198,param_7);
  Lerp(param_3,param_4,param_8,param_5,&local_268,param_7);
  Lerp(&local_198,&local_268,param_9,param_5,param_6,param_7);
  return;
}

// BilerpWithSnapping @ 14989fdd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
PCGPointHelpers::BilerpWithSnapping
          (FPCGPoint *param_1,FPCGPoint *param_2,FPCGPoint *param_3,FPCGPoint *param_4,
          UPCGMetadata *param_5,FPCGPoint *param_6,UPCGMetadata *param_7,float param_8,float param_9
          )

{
  bool bVar1;
  FPCGPoint *pFVar2;
  FPCGPoint *pFVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStackY_2e8 [32];
  FPCGPoint *local_2b8;
  UPCGMetadata **local_2b0;
  UPCGMetadata **local_2a8;
  UPCGMetadata *local_2a0;
  UPCGMetadata *local_298 [2];
  FPCGPoint local_288;
  FPCGPoint local_1b8;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  local_2b0 = &local_2a0;
  local_2a8 = local_298;
  local_298[0] = param_5;
  local_2a0 = param_7;
  local_2b8 = param_6;
  bVar1 = param_9 < __real_38d1b717;
  pFVar2 = param_1;
  if (param_8 < __real_38d1b717) {
    pFVar3 = param_3;
    if (!bVar1) goto joined_r0x0001498a0115;
LAB_1498a0103:
    `PCGPointHelpers::BilerpWithSnapping'::__l2::<lambda_1>::operator()(&local_2b8,param_1);
  }
  else {
    if (param_8 <= __real_3f7ff972) {
      pFVar3 = param_2;
      if ((!bVar1) && (pFVar2 = param_3, pFVar3 = param_4, param_9 <= __real_3f7ff972)) {
        uVar20 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        uVar21 = (undefined4)
                 ((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_1b8.Density = 1.0;
        local_1b8.Steepness = 0.5;
        local_1b8.Seed = 0;
        local_1b8.MetadataEntry = -1;
        uVar18 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        uVar19 = (undefined4)
                 ((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_288.Density = 1.0;
        local_288.Steepness = 0.5;
        local_288.Seed = 0;
        local_288.MetadataEntry = -1;
        uVar16 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        uVar17 = (undefined4)
                 ((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        uVar14 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        uVar15 = (undefined4)
                 ((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        uVar12 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        uVar13 = (undefined4)
                 ((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        uVar10 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        uVar11 = (undefined4)
                 ((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        uVar4 = (uint)__xmm_80000000000000008000000000000000;
        uVar8 = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar4;
        uVar5 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
        uVar9 = (uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >> 0x20) ^
                uVar5;
        local_1b8.Transform.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar10;
        local_1b8.Transform.Scale3D.ZW.m128d_f64[0] =
             (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_1b8.Transform.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar11;
        uVar6 = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar4;
        uVar7 = (uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >> 0x20) ^
                uVar5;
        local_288.Transform.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar10;
        local_288.Transform.Scale3D.ZW.m128d_f64[0] =
             (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_288.Transform.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar11;
        uVar4 = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar4;
        uVar5 = (uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >> 0x20) ^
                uVar5;
        local_1b8.BoundsMin.field0_0x0._s_0.X = (double)CONCAT44(uVar9,uVar8);
        local_1b8.BoundsMin.field0_0x0._s_0.Y = (double)CONCAT44(uVar7,uVar6);
        local_1b8.BoundsMin.field0_0x0._s_0.Z = (double)CONCAT44(uVar5,uVar4);
        local_288.BoundsMin.field0_0x0._s_0.X = (double)CONCAT44(uVar9,uVar8);
        local_288.BoundsMin.field0_0x0._s_0.Y = (double)CONCAT44(uVar7,uVar6);
        local_288.BoundsMin.field0_0x0._s_0.Z = (double)CONCAT44(uVar5,uVar4);
        local_1b8.Transform.Rotation.XY.m128d_f64[1]._0_4_ = uVar20;
        local_1b8.Transform.Rotation.XY.m128d_f64[0] =
             (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_1b8.Transform.Rotation.XY.m128d_f64[1]._4_4_ = uVar21;
        local_1b8.Transform.Rotation.ZW.m128d_f64[1]._0_4_ = uVar18;
        local_1b8.Transform.Rotation.ZW.m128d_f64[0] =
             (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_1b8.Transform.Rotation.ZW.m128d_f64[1]._4_4_ = uVar19;
        local_1b8.Transform.Translation.XY.m128d_f64[1]._0_4_ = uVar16;
        local_1b8.Transform.Translation.XY.m128d_f64[0] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_1b8.Transform.Translation.XY.m128d_f64[1]._4_4_ = uVar17;
        local_1b8.Transform.Translation.ZW.m128d_f64[1]._0_4_ = uVar14;
        local_1b8.Transform.Translation.ZW.m128d_f64[0] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        local_1b8.Transform.Translation.ZW.m128d_f64[1]._4_4_ = uVar15;
        local_1b8.Transform.Scale3D.XY.m128d_f64[1]._0_4_ = uVar12;
        local_1b8.Transform.Scale3D.XY.m128d_f64[0] =
             (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_1b8.Transform.Scale3D.XY.m128d_f64[1]._4_4_ = uVar13;
        local_1b8.BoundsMax.field0_0x0._s_0.X =
             UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
        local_1b8.BoundsMax.field0_0x0._s_0.Y =
             UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
        local_1b8.BoundsMax.field0_0x0._s_0.Z =
             UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
        local_1b8.Color.field0_0x0._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
        local_1b8.Color.field0_0x0._s_0.Y = _UNK_150689688;
        local_1b8.Color.field0_0x0._s_0.Z = ___xmm_3ff00000000000003ff0000000000000;
        local_1b8.Color.field0_0x0._s_0.W = _UNK_150689688;
        local_288.Transform.Rotation.XY.m128d_f64[1]._0_4_ = uVar20;
        local_288.Transform.Rotation.XY.m128d_f64[0] =
             (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_288.Transform.Rotation.XY.m128d_f64[1]._4_4_ = uVar21;
        local_288.Transform.Rotation.ZW.m128d_f64[1]._0_4_ = uVar18;
        local_288.Transform.Rotation.ZW.m128d_f64[0] =
             (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_288.Transform.Rotation.ZW.m128d_f64[1]._4_4_ = uVar19;
        local_288.Transform.Translation.XY.m128d_f64[1]._0_4_ = uVar16;
        local_288.Transform.Translation.XY.m128d_f64[0] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_288.Transform.Translation.XY.m128d_f64[1]._4_4_ = uVar17;
        local_288.Transform.Translation.ZW.m128d_f64[1]._0_4_ = uVar14;
        local_288.Transform.Translation.ZW.m128d_f64[0] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        local_288.Transform.Translation.ZW.m128d_f64[1]._4_4_ = uVar15;
        local_288.Transform.Scale3D.XY.m128d_f64[1]._0_4_ = uVar12;
        local_288.Transform.Scale3D.XY.m128d_f64[0] =
             (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_288.Transform.Scale3D.XY.m128d_f64[1]._4_4_ = uVar13;
        local_288.BoundsMax.field0_0x0._s_0.X =
             UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
        local_288.BoundsMax.field0_0x0._s_0.Y =
             UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
        local_288.BoundsMax.field0_0x0._s_0.Z =
             UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
        local_288.Color.field0_0x0._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
        local_288.Color.field0_0x0._s_0.Y = _UNK_150689688;
        local_288.Color.field0_0x0._s_0.Z = ___xmm_3ff00000000000003ff0000000000000;
        local_288.Color.field0_0x0._s_0.W = _UNK_150689688;
        Lerp(param_1,param_2,param_8,param_5,&local_1b8,param_7);
        Lerp(param_3,param_4,param_8,param_5,&local_288,param_7);
        Lerp(&local_1b8,&local_288,param_9,param_5,param_6,param_7);
        return;
      }
    }
    else {
      pFVar2 = param_2;
      pFVar3 = param_4;
      if (bVar1) {
        `PCGPointHelpers::BilerpWithSnapping'::__l2::<lambda_1>::operator()(&local_2b8,param_2);
        return;
      }
joined_r0x0001498a0115:
      param_1 = pFVar3;
      param_8 = param_9;
      if (__real_3f7ff972 < param_9) goto LAB_1498a0103;
    }
    Lerp(pFVar2,pFVar3,param_8,param_5,param_6,param_7);
  }
  return;
}

// CalcBounds @ 1498a0870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TBoxSphereBounds<double,double> * __cdecl
PCGSplineStruct::CalcBounds
          (TBoxSphereBounds<double,double> *__return_storage_ptr__,FSpline *param_1,bool param_2,
          TTransform<double> *param_3)

{
  double *pdVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FInterpCurveVector *pFVar7;
  TBoxSphereBounds<double,double> *pTVar8;
  TMatrix<double> *pTVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  FInterpCurvePoint<UE::Math::TVector<double>_> *pFVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  undefined1 auStack_258 [32];
  longlong local_238;
  longlong local_230;
  uint local_228;
  uint local_224;
  TVector<double>_u_0 local_220;
  TVector<double>_u_0 local_208;
  longlong local_1f0;
  longlong local_1e8;
  TBoxSphereBounds<double,double> *local_1e0;
  TTransform<double> *local_1d8;
  FInterpCurvePoint<UE::Math::TVector<double>_> local_1c8;
  TVector<double>_u_0 local_168;
  double local_150;
  double local_148;
  double local_140;
  TVector<double>_u_0 local_130;
  double local_118;
  double dStack_110;
  double local_108;
  undefined1 local_100;
  TMatrix<double> local_f8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_258;
  local_1e0 = __return_storage_ptr__;
  local_1d8 = param_3;
  iVar5 = FSpline::GetNumControlPoints(param_1);
  iVar11 = iVar5;
  if (!param_2) {
    iVar11 = iVar5 + -1;
  }
  local_228 = iVar5 - 1;
  local_208._s_0.Z = __real_42a0000000000000;
  local_220._s_0.Z = __real_c2a0000000000000;
  local_208._s_0.X = ___xmm_42a000000000000042a0000000000000;
  local_208._s_0.Y = _UNK_151820658;
  local_220._s_0.X = ___xmm_c2a0000000000000c2a0000000000000;
  local_220._s_0.Y = _UNK_151820678;
  if (iVar11 < 1) {
    if (iVar5 == 1) {
      pFVar7 = FSpline::GetSplinePointsPosition(param_1);
      if (*(int *)&pFVar7->field_0x8 < 1) {
        local_238 = 0;
        local_230 = (longlong)*(int *)&pFVar7->field_0x8;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TBoxSphereBounds<double,double> *)(*pcVar2)();
          return pTVar8;
        }
      }
      lVar14 = *(longlong *)pFVar7;
      local_220._s_0.X = *(double *)(lVar14 + 8);
      local_220._s_0.Y = *(double *)(lVar14 + 0x10);
      local_220._s_0.Z = *(double *)(lVar14 + 0x18);
      local_208._s_0.X = local_220._s_0.X;
      local_208._s_0.Y = local_220._s_0.Y;
      local_208._s_0.Z = local_220._s_0.Z;
    }
    else {
      local_208._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_208._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_208._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_220._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_220._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_220._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
  }
  else {
    local_1e8 = (longlong)iVar11;
    if (0 < iVar11) {
      lVar14 = 0;
      uVar12 = 0;
      do {
        local_1f0 = lVar14 + 1;
        lVar10 = 0;
        if (uVar12 != local_228) {
          lVar10 = local_1f0;
        }
        local_224 = uVar12 + 1;
        uVar13 = 0;
        if (uVar12 != local_228) {
          uVar13 = local_224;
        }
        pFVar7 = FSpline::GetSplinePointsPosition(param_1);
        uVar6 = 0;
        if ((int)uVar12 < *(int *)&pFVar7->field_0x8) {
          uVar6 = ~uVar12 >> 0x1f;
        }
        if (uVar6 == 0) {
          local_238 = (longlong)(int)uVar12;
          local_230 = (longlong)*(int *)&pFVar7->field_0x8;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            pTVar8 = (TBoxSphereBounds<double,double> *)(*pcVar2)();
            return pTVar8;
          }
        }
        pFVar15 = (FInterpCurvePoint<UE::Math::TVector<double>_> *)
                  (lVar14 * 0x58 + *(longlong *)pFVar7);
        pFVar7 = FSpline::GetSplinePointsPosition(param_1);
        uVar6 = 0;
        if ((int)uVar13 < *(int *)&pFVar7->field_0x8) {
          uVar6 = ~uVar13 >> 0x1f;
        }
        if (uVar6 == 0) {
          local_238 = (longlong)(int)uVar13;
          local_230 = (longlong)*(int *)&pFVar7->field_0x8;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            pTVar8 = (TBoxSphereBounds<double,double> *)(*pcVar2)();
            return pTVar8;
          }
        }
        lVar14 = *(longlong *)pFVar7;
        lVar10 = lVar10 * 0x58;
        local_1c8._0_8_ = *(undefined8 *)(lVar10 + lVar14);
        local_1c8.OutVal.field0_0x0._s_0.X = (double)((undefined8 *)(lVar10 + lVar14))[1];
        pdVar1 = (double *)(lVar10 + 0x10 + lVar14);
        local_1c8.OutVal.field0_0x0._s_0.Y = *pdVar1;
        local_1c8.OutVal.field0_0x0._s_0.Z = pdVar1[1];
        pdVar1 = (double *)(lVar10 + 0x20 + lVar14);
        local_1c8.ArriveTangent.field0_0x0._s_0.X = *pdVar1;
        local_1c8.ArriveTangent.field0_0x0._s_0.Y = pdVar1[1];
        pdVar1 = (double *)(lVar10 + 0x30 + lVar14);
        local_1c8.ArriveTangent.field0_0x0._s_0.Z = *pdVar1;
        local_1c8.LeaveTangent.field0_0x0._s_0.X = pdVar1[1];
        pdVar1 = (double *)(lVar10 + 0x40 + lVar14);
        local_1c8.LeaveTangent.field0_0x0._s_0.Y = *pdVar1;
        local_1c8.LeaveTangent.field0_0x0._s_0.Z = pdVar1[1];
        local_1c8._80_8_ = *(undefined8 *)(lVar10 + 0x50 + lVar14);
        if (uVar12 == local_228) {
          pFVar7 = FSpline::GetSplinePointsPosition(param_1);
          local_1c8.InVal = *(float *)&pFVar7->field_0x14 + pFVar15->InVal;
        }
        CurveVectorFindIntervalBounds
                  (pFVar15,&local_1c8,(TVector<double> *)&local_208._s_0,
                   (TVector<double> *)&local_220._s_0);
        __return_storage_ptr__ = local_1e0;
        lVar14 = local_1f0;
        uVar12 = local_224;
      } while (local_1f0 < local_1e8);
    }
  }
  local_130._s_0.Z = local_208._s_0.Z;
  local_100 = 1;
  local_130._s_0.X = local_208._s_0.X;
  local_130._s_0.Y = local_208._s_0.Y;
  local_118 = local_220._s_0.X;
  dStack_110 = local_220._s_0.Y;
  local_108 = local_220._s_0.Z;
  pTVar9 = UE::Math::TTransform<double>::ToMatrixWithScale(local_1d8,&local_f8);
  UE::Math::TBox<double>::TransformBy
            ((TBox<double> *)&local_130._s_0,(TBox<double> *)&local_168._s_0,pTVar9);
  local_140 = local_140 - local_168._s_0.Z;
  local_148 = local_148 - local_168._s_0.Y;
  dVar18 = local_140 * __real_3fe0000000000000;
  dVar3 = (local_150 - local_168._s_0.X) * __real_3fe0000000000000;
  dVar19 = local_148 * __real_3fe0000000000000;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = dVar3 + local_168._s_0.X;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar19 + local_168._s_0.Y;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar18 + local_168._s_0.Z;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar3;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar19;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar18;
  dVar3 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X;
  auVar16._0_8_ = dVar3 * dVar3;
  auVar16._8_8_ = 0;
  auVar17._8_8_ = 0;
  auVar17._0_8_ =
       (local_140 * local_140 + local_148 * local_148) * __real_3fd0000000000000 + auVar16._0_8_;
  auVar17 = sqrtpd(auVar16,auVar17);
  __return_storage_ptr__->SphereRadius = auVar17._0_8_;
  return __return_storage_ptr__;
}

// CalcBounds @ 1498a0ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TBoxSphereBounds<double,double> * __cdecl
PCGSplineStruct::CalcBounds
          (TBoxSphereBounds<double,double> *__return_storage_ptr__,FSplineCurves *param_1,
          bool param_2,TTransform<double> *param_3)

{
  uint uVar1;
  longlong lVar2;
  double *pdVar3;
  int iVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  TBoxSphereBounds<double,double> *pTVar10;
  TMatrix<double> *pTVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  FInterpCurvePoint<UE::Math::TVector<double>_> *pFVar15;
  undefined4 uVar16;
  undefined4 uVar19;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar20;
  double dVar21;
  undefined1 auStack_248 [32];
  longlong local_228;
  longlong local_220;
  uint local_218;
  TVector<double>_u_0 local_210;
  TVector<double>_u_0 local_1f8;
  longlong local_1e0;
  TBoxSphereBounds<double,double> *local_1d8;
  TTransform<double> *local_1d0;
  FInterpCurvePoint<UE::Math::TVector<double>_> local_1c8;
  TVector<double>_u_0 local_168;
  double local_150;
  double local_148;
  double local_140;
  TVector<double>_u_0 local_130;
  double local_118;
  double dStack_110;
  undefined8 local_108;
  undefined1 local_100;
  TMatrix<double> local_f8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_248;
  uVar13 = *(uint *)&(param_1->Position).field_0x8;
  local_1f8._s_0.Z = __real_42a0000000000000;
  local_210._16_8_ = __real_c2a0000000000000;
  uVar1 = uVar13 - 1;
  uVar8 = uVar13;
  if (!param_2) {
    uVar8 = uVar1;
  }
  local_1f8._s_0.X = ___xmm_42a000000000000042a0000000000000;
  local_1f8._s_0.Y = _UNK_151820658;
  local_210._s_0.X = ___xmm_c2a0000000000000c2a0000000000000;
  local_210._s_0.Y = _UNK_151820678;
  local_1d8 = __return_storage_ptr__;
  local_1d0 = param_3;
  if ((int)uVar8 < 1) {
    if (uVar13 == 1) {
      lVar14 = *(longlong *)&param_1->Position;
      local_210._s_0.X = *(double *)(lVar14 + 8);
      local_210._s_0.Y = *(double *)(lVar14 + 0x10);
      local_210._s_0.Z = *(double *)(lVar14 + 0x18);
      uVar16 = SUB84(local_210._s_0.Z,0);
      uVar19 = (undefined4)((ulonglong)local_210._s_0.Z >> 0x20);
      local_1f8._s_0.X = local_210._s_0.X;
      local_1f8._s_0.Y = local_210._s_0.Y;
      local_1f8._16_8_ = local_210._s_0.Z;
    }
    else {
      local_1f8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_1f8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_1f8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_210._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_210._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar16 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar19 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      local_210._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
  }
  else {
    local_1e0 = (longlong)(int)uVar8;
    if (local_1e0 < 1) {
      uVar16 = SUB84(__real_c2a0000000000000,0);
      uVar19 = (undefined4)((ulonglong)__real_c2a0000000000000 >> 0x20);
    }
    else {
      lVar14 = 0;
      uVar13 = 0;
      do {
        iVar4 = *(int *)&(param_1->Position).field_0x8;
        local_218 = uVar13 + 1;
        lVar2 = lVar14 + 1;
        lVar12 = 0;
        if (uVar13 != uVar1) {
          lVar12 = lVar2;
        }
        uVar8 = 0;
        if (uVar13 != uVar1) {
          uVar8 = local_218;
        }
        uVar9 = 0;
        if ((int)uVar13 < iVar4) {
          uVar9 = ~uVar13 >> 0x1f;
        }
        if (uVar9 == 0) {
          local_228 = (longlong)(int)uVar13;
          local_220 = (longlong)iVar4;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            pTVar10 = (TBoxSphereBounds<double,double> *)(*pcVar5)();
            return pTVar10;
          }
        }
        iVar4 = *(int *)&(param_1->Position).field_0x8;
        pFVar15 = (FInterpCurvePoint<UE::Math::TVector<double>_> *)
                  (lVar14 * 0x58 + *(longlong *)&param_1->Position);
        uVar9 = 0;
        if ((int)uVar8 < iVar4) {
          uVar9 = ~uVar8 >> 0x1f;
        }
        if (uVar9 == 0) {
          local_228 = (longlong)(int)uVar8;
          local_220 = (longlong)iVar4;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            pTVar10 = (TBoxSphereBounds<double,double> *)(*pcVar5)();
            return pTVar10;
          }
        }
        lVar14 = *(longlong *)&param_1->Position;
        lVar12 = lVar12 * 0x58;
        local_1c8._0_8_ = *(undefined8 *)(lVar12 + lVar14);
        local_1c8.OutVal.field0_0x0._s_0.X = (double)((undefined8 *)(lVar12 + lVar14))[1];
        pdVar3 = (double *)(lVar12 + 0x10 + lVar14);
        local_1c8.OutVal.field0_0x0._s_0.Y = *pdVar3;
        local_1c8.OutVal.field0_0x0._s_0.Z = pdVar3[1];
        pdVar3 = (double *)(lVar12 + 0x20 + lVar14);
        local_1c8.ArriveTangent.field0_0x0._s_0.X = *pdVar3;
        local_1c8.ArriveTangent.field0_0x0._s_0.Y = pdVar3[1];
        pdVar3 = (double *)(lVar12 + 0x30 + lVar14);
        local_1c8.ArriveTangent.field0_0x0._s_0.Z = *pdVar3;
        local_1c8.LeaveTangent.field0_0x0._s_0.X = pdVar3[1];
        pdVar3 = (double *)(lVar12 + 0x40 + lVar14);
        local_1c8.LeaveTangent.field0_0x0._s_0.Y = *pdVar3;
        local_1c8.LeaveTangent.field0_0x0._s_0.Z = pdVar3[1];
        local_1c8._80_8_ = *(undefined8 *)(lVar12 + 0x50 + lVar14);
        if (uVar13 == uVar1) {
          local_1c8.InVal = *(float *)&(param_1->Position).field_0x14 + pFVar15->InVal;
        }
        CurveVectorFindIntervalBounds
                  (pFVar15,&local_1c8,(TVector<double> *)&local_1f8._s_0,
                   (TVector<double> *)&local_210._s_0);
        lVar14 = lVar2;
        uVar13 = local_218;
      } while (lVar2 < local_1e0);
      uVar16 = SUB84(local_210._s_0.Z,0);
      uVar19 = (undefined4)((ulonglong)local_210._16_8_ >> 0x20);
    }
  }
  pTVar10 = local_1d8;
  local_130._s_0.Z = local_1f8._s_0.Z;
  local_100 = 1;
  local_108 = CONCAT44(uVar19,uVar16);
  local_130._s_0.X = local_1f8._s_0.X;
  local_130._s_0.Y = local_1f8._s_0.Y;
  local_118 = local_210._s_0.X;
  dStack_110 = local_210._s_0.Y;
  pTVar11 = UE::Math::TTransform<double>::ToMatrixWithScale(local_1d0,&local_f8);
  UE::Math::TBox<double>::TransformBy
            ((TBox<double> *)&local_130._s_0,(TBox<double> *)&local_168._s_0,pTVar11);
  local_140 = local_140 - local_168._s_0.Z;
  local_148 = local_148 - local_168._s_0.Y;
  dVar20 = local_140 * __real_3fe0000000000000;
  dVar6 = (local_150 - local_168._s_0.X) * __real_3fe0000000000000;
  dVar21 = local_148 * __real_3fe0000000000000;
  (pTVar10->Origin).field0_0x0._s_0.X = dVar6 + local_168._s_0.X;
  (pTVar10->Origin).field0_0x0._s_0.Y = dVar21 + local_168._s_0.Y;
  (pTVar10->Origin).field0_0x0._s_0.Z = dVar20 + local_168._s_0.Z;
  (pTVar10->BoxExtent).field0_0x0._s_0.X = dVar6;
  (pTVar10->BoxExtent).field0_0x0._s_0.Y = dVar21;
  (pTVar10->BoxExtent).field0_0x0._s_0.Z = dVar20;
  dVar6 = (pTVar10->BoxExtent).field0_0x0._s_0.X;
  auVar17._0_8_ = dVar6 * dVar6;
  auVar17._8_8_ = 0;
  auVar18._8_8_ = 0;
  auVar18._0_8_ =
       (local_140 * local_140 + local_148 * local_148) * __real_3fd0000000000000 + auVar17._0_8_;
  auVar18 = sqrtpd(auVar17,auVar18);
  pTVar10->SphereRadius = auVar18._0_8_;
  return pTVar10;
}

// CanGPUTextureBeCPUAccessed @ 1498a1680

TOptional<bool> __cdecl PCGTextureSamplingHelpers::CanGPUTextureBeCPUAccessed(UTexture2D *param_1)

{
  TOptional<bool> TVar1;
  FTexturePlatformData *pFVar2;
  UTexture2D *in_RDX;
  
  TVar1 = SUB82(param_1,0);
  if ((in_RDX != (UTexture2D *)0x0) && ((in_RDX->_padding_ & 0x1000000000000) == 0)) {
    pFVar2 = UTexture2D::GetPlatformData(in_RDX);
    if ((pFVar2 != (FTexturePlatformData *)0x0) && ((pFVar2->PackedData & 0x20000000) == 0)) {
      if (((pFVar2->Mips).Array.ArrayNum == 1) && (pFVar2->PixelFormat == PF_B8G8R8A8)) {
        *(undefined1 *)&param_1->_padding_ = 1;
        *(undefined1 *)((longlong)&param_1->_padding_ + 1) = 1;
        return TVar1;
      }
      *(undefined1 *)((longlong)&param_1->_padding_ + 1) = 1;
      *(undefined1 *)&param_1->_padding_ = 0;
      return TVar1;
    }
  }
  *(undefined2 *)&param_1->_padding_ = 0x100;
  return TVar1;
}

// ComputeDensity @ 1498a24d0

float __cdecl
PCGIntersectionDataMaths::ComputeDensity
          (float param_1,float param_2,EPCGIntersectionDensityFunction param_3)

{
  if (param_3 == Minimum) {
    if (param_2 <= param_1) {
      param_1 = param_2;
    }
    return param_1;
  }
  return param_1 * param_2;
}

// ComputeDensity @ 1498a24f0

float __cdecl
PCGUnionDataMaths::ComputeDensity(float param_1,float param_2,EPCGUnionDensityFunction param_3)

{
  float fVar1;
  
  if (param_3 == ClampedAddition) {
    fVar1 = param_1 + param_2;
    if (__real_3f800000 <= param_1 + param_2) {
      fVar1 = __real_3f800000;
    }
    return fVar1;
  }
  if (param_3 == Binary) {
    if (0.0 < param_2) {
      return __real_3f800000;
    }
  }
  else if (param_1 <= param_2) {
    param_1 = param_2;
  }
  return param_1;
}

// CreateDataPropertyAccessor @ 1498ad2e0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> __cdecl
PCGPolygon2DData::CreateDataPropertyAccessor
          (EPCGPolygon2DDataProperties param_1,bool param_2,bool param_3)

{
  undefined8 *puVar1;
  undefined7 in_register_00000009;
  IPCGAttributeAccessor *pIVar2;
  char in_R9B;
  
  pIVar2 = (IPCGAttributeAccessor *)CONCAT71(in_register_00000009,param_1);
  if (in_R9B == '\0') {
    if ((!param_2) && (puVar1 = ::operator_new(0x10), puVar1 != (undefined8 *)0x0)) {
      *(undefined1 *)(puVar1 + 1) = 0;
LAB_1498ad337:
      *(undefined2 *)((longlong)puVar1 + 10) = 8;
      *puVar1 = &___7__FPCGPolygon2DDataAccessor_U__TTransform_N_Math_UE___0A___6B_;
      pIVar2->_padding_ = (longlong)puVar1;
      return (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>)pIVar2;
    }
  }
  else {
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(param_2) {
    case false:
      puVar1 = ::operator_new(0x10);
      if (puVar1 != (undefined8 *)0x0) {
        *(char *)(puVar1 + 1) = in_R9B;
        goto LAB_1498ad337;
      }
      break;
    case true:
      puVar1 = ::operator_new(0x10);
      if (puVar1 != (undefined8 *)0x0) {
        *(char *)(puVar1 + 1) = in_R9B;
        *puVar1 = &FPCGPolygon2DDataAccessor<double,1>::_vftable_;
        *(undefined2 *)((longlong)puVar1 + 10) = 1;
        pIVar2->_padding_ = (longlong)puVar1;
        return (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>)pIVar2;
      }
      break;
    case true:
                    /* WARNING: This code block may not be properly labeled as switch case */
      puVar1 = ::operator_new(0x10);
      if (puVar1 != (undefined8 *)0x0) {
        *(char *)(puVar1 + 1) = in_R9B;
        *puVar1 = &FPCGPolygon2DDataAccessor<double,2>::_vftable_;
        *(undefined2 *)((longlong)puVar1 + 10) = 1;
        pIVar2->_padding_ = (longlong)puVar1;
        return (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>)pIVar2;
      }
      break;
    case true:
                    /* WARNING: This code block may not be properly labeled as switch case */
      puVar1 = ::operator_new(0x10);
      if (puVar1 != (undefined8 *)0x0) {
        *(char *)(puVar1 + 1) = in_R9B;
        *puVar1 = &___7__FPCGPolygon2DDataAccessor_U__TVector2_N_Math_UE___02__6B_;
        *(undefined2 *)((longlong)puVar1 + 10) = 4;
        pIVar2->_padding_ = (longlong)puVar1;
        return (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>)pIVar2;
      }
      break;
    case true:
                    /* WARNING: This code block may not be properly labeled as switch case */
      puVar1 = ::operator_new(0x10);
      if (puVar1 != (undefined8 *)0x0) {
        *(char *)(puVar1 + 1) = in_R9B;
        *puVar1 = &___7__FPCGPolygon2DDataAccessor_U__TVector2_N_Math_UE___03__6B_;
        *(undefined2 *)((longlong)puVar1 + 10) = 4;
        pIVar2->_padding_ = (longlong)puVar1;
        return (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>)pIVar2;
      }
      break;
    case true:
                    /* WARNING: This code block may not be properly labeled as switch case */
      puVar1 = ::operator_new(0x10);
      if (puVar1 != (undefined8 *)0x0) {
        *(char *)(puVar1 + 1) = in_R9B;
        *puVar1 = &___7__FPCGPolygon2DDataAccessor_H_04__6B_;
        *(undefined2 *)((longlong)puVar1 + 10) = 2;
        pIVar2->_padding_ = (longlong)puVar1;
        return (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>)pIVar2;
      }
      break;
    case true:
                    /* WARNING: This code block may not be properly labeled as switch case */
      puVar1 = ::operator_new(0x10);
      if (puVar1 != (undefined8 *)0x0) {
        *(char *)(puVar1 + 1) = in_R9B;
        *puVar1 = &___7__FPCGPolygon2DDataAccessor_H_05__6B_;
        *(undefined2 *)((longlong)puVar1 + 10) = 2;
        pIVar2->_padding_ = (longlong)puVar1;
        return (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>)pIVar2;
      }
      break;
    case true:
                    /* WARNING: This code block may not be properly labeled as switch case */
      puVar1 = ::operator_new(0x10);
      if (puVar1 != (undefined8 *)0x0) {
        *(char *)(puVar1 + 1) = in_R9B;
        *puVar1 = &___7__FPCGPolygon2DDataAccessor_H_06__6B_;
        *(undefined2 *)((longlong)puVar1 + 10) = 2;
        pIVar2->_padding_ = (longlong)puVar1;
        return (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>)pIVar2;
      }
      break;
    case true:
                    /* WARNING: This code block may not be properly labeled as switch case */
      puVar1 = ::operator_new(0x10);
      if (puVar1 != (undefined8 *)0x0) {
        *(char *)(puVar1 + 1) = in_R9B;
        *puVar1 = &___7__FPCGPolygon2DDataAccessor_H_07__6B_;
        *(undefined2 *)((longlong)puVar1 + 10) = 2;
        pIVar2->_padding_ = (longlong)puVar1;
        return (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>)pIVar2;
      }
      break;
    case true:
                    /* WARNING: This code block may not be properly labeled as switch case */
      puVar1 = ::operator_new(0x10);
      if (puVar1 != (undefined8 *)0x0) {
        *(char *)(puVar1 + 1) = in_R9B;
        *puVar1 = &___7__FPCGPolygon2DDataAccessor__N_08__6B_;
        *(undefined2 *)((longlong)puVar1 + 10) = 10;
        pIVar2->_padding_ = (longlong)puVar1;
        return (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>)pIVar2;
      }
      break;
    default:
      if ((!param_3) && (1 < (byte)LogPCG._0_1_)) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      }
    }
  }
  pIVar2->_padding_ = 0;
  return (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>)pIVar2;
}

// CreatePropertyAccessor @ 1498afa70

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> __cdecl
PCGPolygon2DData::CreatePropertyAccessor(EPCGPolygon2DProperties param_1,bool param_2,bool param_3)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined7 in_register_00000009;
  IPCGAttributeAccessor *pIVar3;
  FStaticBasicLogRecord *pFVar4;
  char in_R9B;
  
  pIVar3 = (IPCGAttributeAccessor *)CONCAT71(in_register_00000009,param_1);
  if (in_R9B != '\0') {
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(param_2) {
    case false:
      puVar1 = ::operator_new(0x10);
      if (puVar1 != (undefined8 *)0x0) {
        *(char *)(puVar1 + 1) = in_R9B;
        *puVar1 = &___7__FPCGPolygon2DVerticesAccessor_U__TVector_N_Math_UE___0A___6B_;
        *(undefined2 *)((longlong)puVar1 + 10) = 5;
        pIVar3->_padding_ = (longlong)puVar1;
        return (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>)pIVar3;
      }
      break;
    case true:
      puVar1 = ::operator_new(0x10);
      if (puVar1 != (undefined8 *)0x0) {
        *(char *)(puVar1 + 1) = in_R9B;
        *puVar1 = &___7__FPCGPolygon2DVerticesAccessor_U__TQuat_N_Math_UE___00__6B_;
        *(undefined2 *)((longlong)puVar1 + 10) = 7;
        pIVar3->_padding_ = (longlong)puVar1;
        return (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>)pIVar3;
      }
      break;
    case true:
                    /* WARNING: This code block may not be properly labeled as switch case */
      puVar1 = ::operator_new(0x10);
      if (puVar1 != (undefined8 *)0x0) {
        *(char *)(puVar1 + 1) = in_R9B;
        *puVar1 = &___7__FPCGPolygon2DVerticesAccessor_H_01__6B_;
        *(undefined2 *)((longlong)puVar1 + 10) = 2;
        pIVar3->_padding_ = (longlong)puVar1;
        return (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>)pIVar3;
      }
      break;
    case true:
                    /* WARNING: This code block may not be properly labeled as switch case */
      puVar1 = ::operator_new(0x10);
      if (puVar1 != (undefined8 *)0x0) {
        *(char *)(puVar1 + 1) = in_R9B;
        *puVar1 = &___7__FPCGPolygon2DVerticesAccessor_H_02__6B_;
        *(undefined2 *)((longlong)puVar1 + 10) = 2;
        pIVar3->_padding_ = (longlong)puVar1;
        return (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>)pIVar3;
      }
      break;
    case true:
                    /* WARNING: This code block may not be properly labeled as switch case */
      puVar1 = ::operator_new(0x10);
      if (puVar1 != (undefined8 *)0x0) {
        *(char *)(puVar1 + 1) = in_R9B;
        *puVar1 = &___7__FPCGPolygon2DVerticesAccessor_N_03__6B_;
        *(undefined2 *)((longlong)puVar1 + 10) = 1;
        pIVar3->_padding_ = (longlong)puVar1;
        return (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>)pIVar3;
      }
      break;
    case true:
                    /* WARNING: This code block may not be properly labeled as switch case */
      puVar1 = ::operator_new(0x10);
      if (puVar1 != (undefined8 *)0x0) {
        *(char *)(puVar1 + 1) = in_R9B;
        *puVar1 = &___7__FPCGPolygon2DVerticesAccessor_U__TVector2_N_Math_UE___04__6B_;
        *(undefined2 *)((longlong)puVar1 + 10) = 4;
        pIVar3->_padding_ = (longlong)puVar1;
        return (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>)pIVar3;
      }
      break;
    case true:
                    /* WARNING: This code block may not be properly labeled as switch case */
      puVar1 = ::operator_new(0x10);
      if (puVar1 != (undefined8 *)0x0) {
        *(char *)(puVar1 + 1) = in_R9B;
        *puVar1 = &___7__FPCGPolygon2DVerticesAccessor_U__TQuat_N_Math_UE___05__6B_;
        *(undefined2 *)((longlong)puVar1 + 10) = 7;
        pIVar3->_padding_ = (longlong)puVar1;
        return (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>)pIVar3;
      }
      break;
    default:
      if ((param_3) || ((byte)LogPCG._0_1_ < 2)) break;
      pFVar4 = &::LOG_Static;
      goto LAB_1498afd41;
    }
    goto LAB_1498afd4d;
  }
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2) {
  case false:
    puVar1 = ::operator_new(0x68);
    if (puVar1 == (undefined8 *)0x0) {
LAB_1498afcdd:
      pIVar3->_padding_ = 0;
      return (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>)pIVar3;
    }
    *(undefined1 *)(puVar1 + 1) = 0;
    *(undefined2 *)((longlong)puVar1 + 10) = 5;
    ppuVar2 = &___7__FPCGPolygon2DVerticesAccessor_U__TVector_N_Math_UE___0A__PCGTemporary__6B_;
    goto LAB_1498afc9d;
  case true:
  case true:
  case true:
  case true:
  case true:
                    /* WARNING: This code block may not be properly labeled as switch case */
    if ((param_3) || ((byte)LogPCG._0_1_ < 2)) goto LAB_1498afd4d;
    pFVar4 = &::LOG_Static;
    break;
  case true:
                    /* WARNING: This code block may not be properly labeled as switch case */
    puVar1 = ::operator_new(0x68);
    if (puVar1 == (undefined8 *)0x0) goto LAB_1498afcdd;
    *(undefined1 *)(puVar1 + 1) = 0;
    *(undefined2 *)((longlong)puVar1 + 10) = 4;
    ppuVar2 = &___7__FPCGPolygon2DVerticesAccessor_U__TVector2_N_Math_UE___04_PCGTemporary__6B_;
LAB_1498afc9d:
    *puVar1 = ppuVar2;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[6] = 0;
    *(undefined4 *)(puVar1 + 7) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x3c) = 0x80;
    *(undefined4 *)(puVar1 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x44) = 0;
    puVar1[10] = 0;
    *(undefined4 *)(puVar1 + 0xb) = 0;
    *(undefined1 *)(puVar1 + 0xc) = 0;
    pIVar3->_padding_ = (longlong)puVar1;
    return (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>)pIVar3;
  default:
    if ((param_3) || ((byte)LogPCG._0_1_ < 2)) goto LAB_1498afd4d;
    pFVar4 = &::LOG_Static;
  }
LAB_1498afd41:
  UE::Logging::Private::BasicLog<2>(pFVar4,(FLogCategoryBase *)&LogPCG);
LAB_1498afd4d:
  pIVar3->_padding_ = 0;
  return (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>)pIVar3;
}

// EmptyLinkFunctionForGeneratedCodePCGCollisionShape @ 1498b2750

void __cdecl EmptyLinkFunctionForGeneratedCodePCGCollisionShape(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGCollisionShapeData @ 1498b2760

void __cdecl EmptyLinkFunctionForGeneratedCodePCGCollisionShapeData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGCollisionWrapperData @ 1498b2770

void __cdecl EmptyLinkFunctionForGeneratedCodePCGCollisionWrapperData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGDataPtrWrapper @ 1498b2780

void __cdecl EmptyLinkFunctionForGeneratedCodePCGDataPtrWrapper(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGDataType @ 1498b2790

void __cdecl EmptyLinkFunctionForGeneratedCodePCGDataType(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGDataTypeIdentifier @ 1498b27a0

void __cdecl EmptyLinkFunctionForGeneratedCodePCGDataTypeIdentifier(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGDifferenceData @ 1498b27b0

void __cdecl EmptyLinkFunctionForGeneratedCodePCGDifferenceData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGDynamicMeshData @ 1498b27c0

void __cdecl EmptyLinkFunctionForGeneratedCodePCGDynamicMeshData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGIntersectionData @ 1498b27d0

void __cdecl EmptyLinkFunctionForGeneratedCodePCGIntersectionData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGLandscapeData @ 1498b27e0

void __cdecl EmptyLinkFunctionForGeneratedCodePCGLandscapeData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGLandscapeSplineData @ 1498b27f0

void __cdecl EmptyLinkFunctionForGeneratedCodePCGLandscapeSplineData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGPointArrayData @ 1498b2800

void __cdecl EmptyLinkFunctionForGeneratedCodePCGPointArrayData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGPointData @ 1498b2810

void __cdecl EmptyLinkFunctionForGeneratedCodePCGPointData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGPolyLineData @ 1498b2820

void __cdecl EmptyLinkFunctionForGeneratedCodePCGPolyLineData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGPolygon2DData @ 1498b2830

void __cdecl EmptyLinkFunctionForGeneratedCodePCGPolygon2DData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGPolygon2DInteriorData @ 1498b2840

void __cdecl EmptyLinkFunctionForGeneratedCodePCGPolygon2DInteriorData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGPrimitiveData @ 1498b2850

void __cdecl EmptyLinkFunctionForGeneratedCodePCGPrimitiveData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGProjectionData @ 1498b2860

void __cdecl EmptyLinkFunctionForGeneratedCodePCGProjectionData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGRenderTargetData @ 1498b2870

void __cdecl EmptyLinkFunctionForGeneratedCodePCGRenderTargetData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGResourceData @ 1498b2880

void __cdecl EmptyLinkFunctionForGeneratedCodePCGResourceData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGSpatialData @ 1498b2890

void __cdecl EmptyLinkFunctionForGeneratedCodePCGSpatialData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGSplineData @ 1498b28a0

void __cdecl EmptyLinkFunctionForGeneratedCodePCGSplineData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGSplineInteriorSurfaceData @ 1498b28b0

void __cdecl EmptyLinkFunctionForGeneratedCodePCGSplineInteriorSurfaceData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGSplineStruct @ 1498b28c0

void __cdecl EmptyLinkFunctionForGeneratedCodePCGSplineStruct(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGStaticMeshResourceData @ 1498b28d0

void __cdecl EmptyLinkFunctionForGeneratedCodePCGStaticMeshResourceData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGSurfaceData @ 1498b28e0

void __cdecl EmptyLinkFunctionForGeneratedCodePCGSurfaceData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGTextureData @ 1498b28f0

void __cdecl EmptyLinkFunctionForGeneratedCodePCGTextureData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGUnionData @ 1498b2900

void __cdecl EmptyLinkFunctionForGeneratedCodePCGUnionData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGVirtualTextureData @ 1498b2910

void __cdecl EmptyLinkFunctionForGeneratedCodePCGVirtualTextureData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGVolumeData @ 1498b2920

void __cdecl EmptyLinkFunctionForGeneratedCodePCGVolumeData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGWorldData @ 1498b2930

void __cdecl EmptyLinkFunctionForGeneratedCodePCGWorldData(void)

{
  return;
}

// GetDensityInQuad @ 1498b9720

double __cdecl
PCGLandscapeDataHelpers::GetDensityInQuad
          (TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,TVector<double> *param_5)

{
  double dVar1;
  undefined8 uVar2;
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_30;
  
  FMath::GetBaryCentric2D((TVector<double> *)&local_48._s_0,param_5,param_1,param_2,param_3);
  dVar1 = __real_be45798ee0000000;
  if (((local_48._s_0.X < __real_be45798ee0000000) || (local_48._s_0.Y < __real_be45798ee0000000))
     || (local_48._s_0.Z < __real_be45798ee0000000)) {
    FMath::GetBaryCentric2D((TVector<double> *)&local_30._s_0,param_5,param_1,param_3,param_4);
    uVar2 = __real_bff0000000000000;
    if (((dVar1 <= local_30._s_0.X) && (dVar1 <= local_30._s_0.Y)) &&
       ((dVar1 <= local_30._s_0.Z && (uVar2 = local_30._s_0.X, local_30._s_0.X <= 0.0)))) {
      uVar2 = 0.0;
    }
  }
  else {
    if (local_48._s_0.Z <= 0.0) {
      local_48._s_0.Z = 0.0;
    }
    uVar2 = __real_3ff0000000000000 - local_48._s_0.Z;
  }
  return (double)uVar2;
}

// GetStartEndVertexIndices @ 1498c6de0

void __cdecl
PCGPolygon2DData::GetStartEndVertexIndices
          (TGeneralPolygon2<double> *param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  
  iVar6 = (param_1->Outer).Vertices.ArrayNum;
  uVar5 = 0;
  if (param_3 < 0) {
    iVar8 = 0;
  }
  else {
    lVar7 = 0;
    iVar8 = iVar6;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (param_1->Holes).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar6 = *(int *)((param_1->Holes).AllocatorInstance.Data + lVar7 + 8);
      iVar2 = iVar6 + iVar8;
      if (param_3 <= (int)uVar5) {
        iVar2 = iVar8;
      }
      iVar8 = iVar2;
      uVar5 = uVar5 + 1;
      lVar7 = lVar7 + 0x10;
    } while ((int)uVar5 <= param_3);
  }
  *param_4 = iVar8 + param_2;
  *param_5 = (param_2 + 1) % iVar6 + iVar8;
  return;
}

// GetTypeHash @ 1498c9d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __cdecl GetTypeHash(FPCGDataTypeIdentifier *param_1)

{
  FScriptContainerElement *pFVar1;
  ForElementType<int> FVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  ForElementType<int> FVar12;
  uint uVar13;
  undefined1 auStackY_d8 [32];
  undefined1 local_88;
  FIdentityFunctor local_87 [3];
  uint local_84;
  undefined1 local_80 [8];
  ForElementType<int> local_78;
  uint local_30;
  uint local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  uVar10 = 0;
  local_2c = 0x10;
  local_78.SecondaryData = (ForElementType<int>)0x0;
  uVar6 = (param_1->Ids).ArrayNum;
  local_30 = 0;
  if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
  }
  uVar8 = uVar10;
  if (0x10 < (int)uVar6) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,uVar6,&local_78,0,(int *)&local_2c);
    uVar8 = (ulonglong)local_30;
  }
  pFVar11 = (param_1->Ids).AllocatorInstance.Data;
  iVar3 = (param_1->Ids).ArrayNum;
  pFVar1 = pFVar11 + (longlong)iVar3 * 8;
  while( true ) {
    uVar6 = (uint)uVar8;
    if ((param_1->Ids).ArrayNum != iVar3) {
      local_88 = 0;
      `TCheckedPointerIterator<FPCGDataTypeBaseId_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_88);
      uVar6 = local_30;
    }
    if (pFVar11 == pFVar1) break;
    uVar7 = ((uint)(*(ulonglong *)pFVar11 >> 0x14) & 0xffff ^ (uint)(*(ulonglong *)pFVar11 >> 4)) *
            -0x7a143595;
    local_84 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    local_84 = local_84 >> 0x10 ^ local_84;
    FVar12 = (ForElementType<int>)&local_78;
    if (local_78.SecondaryData != (ForElementType<int>)0x0) {
      FVar12 = local_78.SecondaryData;
    }
    if ((ulonglong)FVar12 <= &local_84) {
      FVar12 = (ForElementType<int>)&local_78;
      if (local_78.SecondaryData != (ForElementType<int>)0x0) {
        FVar12 = local_78.SecondaryData;
      }
      if ((&local_84 < (uint *)((longlong)FVar12 + (longlong)(int)local_2c * 4)) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), uVar6 = local_30, bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return uVar6;
      }
    }
    if (uVar6 == local_2c) {
      uVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                        (0x404,&local_78,(int *)&local_2c);
    }
    local_30 = uVar6 + 1;
    FVar12 = (ForElementType<int>)&local_78;
    if (local_78.SecondaryData != (ForElementType<int>)0x0) {
      FVar12 = local_78.SecondaryData;
    }
    pFVar11 = pFVar11 + 8;
    *(uint *)((longlong)FVar12 + (longlong)(int)uVar6 * 4) = local_84;
    uVar8 = (ulonglong)local_30;
  }
  FVar12 = (ForElementType<int>)&local_78;
  if (local_78.SecondaryData != (ForElementType<int>)0x0) {
    FVar12 = local_78.SecondaryData;
  }
  AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
            ((int *)FVar12,uVar6,local_87[0],(TLess<void> *)local_87);
  uVar7 = local_30;
  uVar8 = (ulonglong)(int)local_30;
  uVar6 = param_1->CustomSubtype;
  FVar12 = (ForElementType<int>)&local_78;
  if (local_78.SecondaryData != (ForElementType<int>)0x0) {
    FVar12 = local_78.SecondaryData;
  }
  FVar2 = (ForElementType<int>)((longlong)FVar12 + uVar8 * 4);
  while( true ) {
    if ((uint)uVar8 != uVar7) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_80);
      uVar8 = (ulonglong)local_30;
    }
    uVar9 = (uint)uVar10;
    if (FVar12 == FVar2) break;
    uVar10 = (ulonglong)(uVar9 ^ uVar9 * 0x40 + -0x61c88647 + (int)(uVar10 >> 2) + *(uint *)FVar12);
    FVar12 = (ForElementType<int>)((longlong)FVar12 + 4);
  }
  uVar9 = uVar9 - uVar6 ^ uVar6 >> 0xd;
  uVar7 = (-0x61c88647 - uVar9) - uVar6 ^ uVar9 << 8;
  uVar13 = (uVar6 - uVar7) - uVar9 ^ uVar7 >> 0xd;
  uVar9 = (uVar9 - uVar13) - uVar7 ^ uVar13 >> 0xc;
  uVar6 = (uVar7 - uVar9) - uVar13 ^ uVar9 << 0x10;
  uVar13 = (uVar13 - uVar6) - uVar9 ^ uVar6 >> 5;
  uVar7 = (uVar9 - uVar13) - uVar6 ^ uVar13 >> 3;
  uVar6 = (uVar6 - uVar7) - uVar13 ^ uVar7 << 10;
  if (local_78.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_78.SecondaryData);
  }
  return (uVar13 - uVar6) - uVar7 ^ uVar6 >> 0xf;
}

// GetVertexIndex @ 1498ca440

int __cdecl
PCGPolygon2DData::GetVertexIndex(TGeneralPolygon2<double> *param_1,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  if (param_3 < 0) {
    return param_2;
  }
  uVar5 = 0;
  lVar6 = 0;
  iVar4 = (param_1->Outer).Vertices.ArrayNum;
  do {
    uVar3 = 0;
    if ((int)uVar5 < (param_1->Holes).ArrayNum) {
      uVar3 = ~uVar5 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
    }
    if ((int)uVar5 < param_3) {
      iVar4 = iVar4 + *(int *)((param_1->Holes).AllocatorInstance.Data + lVar6 + 8);
    }
    uVar5 = uVar5 + 1;
    lVar6 = lVar6 + 0x10;
  } while ((int)uVar5 <= param_3);
  return iVar4 + param_2;
}

// IsTextureCPUAccessible @ 1498d1020

TOptional<bool> __cdecl PCGTextureSamplingHelpers::IsTextureCPUAccessible(UTexture2D *param_1)

{
  TOptional<bool> TVar1;
  FTexturePlatformData *pFVar2;
  UTexture2D *in_RDX;
  
  TVar1 = SUB82(param_1,0);
  if (in_RDX == (UTexture2D *)0x0) {
    *(undefined2 *)&param_1->_padding_ = 0x100;
    return TVar1;
  }
  pFVar2 = UTexture2D::GetPlatformData(in_RDX);
  if ((pFVar2 != (FTexturePlatformData *)0x0) && ((pFVar2->PackedData & 0x20000000) != 0)) {
    *(undefined1 *)&param_1->_padding_ = 1;
    *(undefined1 *)((longlong)&param_1->_padding_ + 1) = 1;
    return TVar1;
  }
  *(undefined1 *)((longlong)&param_1->_padding_ + 1) = 1;
  *(undefined1 *)&param_1->_padding_ = 0;
  return TVar1;
}

// Lerp @ 1498d1500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
PCGPointHelpers::Lerp
          (FPCGPoint *param_1,FPCGPoint *param_2,float param_3,UPCGMetadata *param_4,
          FPCGPoint *param_5,UPCGMetadata *param_6)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [16];
  ulonglong uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  float fVar21;
  bool bVar22;
  int iVar23;
  TQuat<double> *pTVar24;
  FPCGPoint *pFVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  double dVar28;
  double dVar32;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  uint uVar35;
  uint uVar36;
  undefined1 auStack_258 [32];
  float local_238;
  double local_230;
  TArrayView<TTuple<FPCGPoint_const_*,float>,int> local_228;
  double local_210;
  double dStack_208;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  TQuat<double> local_1d8;
  TQuat<double> local_1b8 [4];
  TQuat<double> local_138;
  FPCGPoint *local_118;
  float local_110;
  FPCGPoint *local_108;
  float local_100;
  void *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_258;
  local_238 = param_3;
  if ((param_3 < 0.0) || (__real_3f800000 < param_3)) {
    bVar22 = ::FDebug::CheckVerifyFailedImpl2
                       ("Ratio >= 0 && Ratio <= 1.0f",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGPointData.cpp"
                        ,0x1c,L"");
    if (bVar22) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_210 = (param_2->Transform).Scale3D.XY.m128d_f64[0];
  dStack_208 = (param_2->Transform).Scale3D.XY.m128d_f64[1];
  local_1f8 = (param_2->Transform).Scale3D.ZW.m128d_f64[0];
  dStack_1f0 = (param_2->Transform).Scale3D.ZW.m128d_f64[1];
  dVar11 = (param_1->Transform).Scale3D.XY.m128d_f64[0];
  dVar3 = (param_1->Transform).Scale3D.XY.m128d_f64[1];
  dVar12 = (param_2->Transform).Translation.XY.m128d_f64[0];
  dVar13 = (param_2->Transform).Translation.XY.m128d_f64[1];
  dVar14 = (param_2->Transform).Translation.ZW.m128d_f64[0];
  dVar15 = (param_1->Transform).Translation.ZW.m128d_f64[0];
  local_1e8 = (param_1->Transform).Scale3D.ZW.m128d_f64[0];
  dStack_1e0 = (param_1->Transform).Scale3D.ZW.m128d_f64[1];
  local_230 = (double)param_3;
  dVar16 = (param_1->Transform).Translation.XY.m128d_f64[0];
  dVar8 = (param_1->Transform).Translation.XY.m128d_f64[1];
  local_1d8.Z = (param_2->Transform).Rotation.ZW.m128d_f64[0];
  local_1d8.W = (param_2->Transform).Rotation.ZW.m128d_f64[1];
  local_1d8.X = (param_2->Transform).Rotation.XY.m128d_f64[0];
  local_1d8.Y = (param_2->Transform).Rotation.XY.m128d_f64[1];
  local_1b8[0].Z = (param_1->Transform).Rotation.ZW.m128d_f64[0];
  local_1b8[0].W = (param_1->Transform).Rotation.ZW.m128d_f64[1];
  local_1b8[0].X = (param_1->Transform).Rotation.XY.m128d_f64[0];
  local_1b8[0].Y = (param_1->Transform).Rotation.XY.m128d_f64[1];
  pTVar24 = UE::Math::TQuat<double>::Slerp_NotNormalized(&local_138,local_1b8,&local_1d8,local_230);
  fVar21 = local_238;
  dVar17 = pTVar24->Z;
  dVar18 = pTVar24->W;
  dVar19 = pTVar24->X;
  dVar20 = pTVar24->Y;
  dVar28 = dVar17 * dVar17 + dVar19 * dVar19;
  dVar32 = dVar18 * dVar18 + dVar20 * dVar20;
  dVar2 = dVar32 + dVar28;
  dVar28 = dVar28 + dVar32;
  auVar29._8_4_ = SUB84(dVar28,0);
  auVar29._0_8_ = dVar2;
  auVar29._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
  auVar33 = sqrtpd(unaff_XMM8,auVar29);
  uVar26 = -(ulonglong)(__real_3e45798ee0000000 <= dVar2);
  uVar27 = -(ulonglong)(__real_3e45798ee0000000 <= dVar28);
  uVar35 = (uint)(uVar26 >> 0x20);
  uVar36 = (uint)(uVar27 >> 0x20);
  auVar29 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar33);
  auVar34._0_4_ = ~(uint)uVar26 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar34._4_4_ =
       ~uVar35 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar34._8_4_ = ~(uint)uVar27 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar34._12_4_ =
       ~uVar36 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar30._0_8_ = uVar26 & (ulonglong)(auVar29._0_8_ * dVar17);
  uVar10 = uVar27 & (ulonglong)(auVar29._8_8_ * dVar18);
  auVar30._8_4_ = (undefined4)uVar10;
  auVar30._12_4_ = (undefined4)(uVar10 >> 0x20);
  dVar8 = (dVar13 - dVar8) * local_230 + dVar8;
  dVar3 = (dStack_208 - dVar3) * local_230 + dVar3;
  auVar29 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar33);
  auVar31._0_8_ = (ulonglong)(auVar29._0_8_ * dVar19) & uVar26;
  uVar10 = (ulonglong)(auVar29._8_8_ * dVar20) & uVar27;
  auVar31._8_4_ = (undefined4)uVar10;
  auVar31._12_4_ = (undefined4)(uVar10 >> 0x20);
  auVar9._4_4_ = ~uVar35 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                                 0x20);
  auVar9._0_4_ = ~(uint)uVar26 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar9._8_4_ = ~(uint)uVar27 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar9._12_4_ =
       ~uVar36 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(param_5->Transform).Rotation.XY.m128d_f64 = auVar31 | auVar9;
  *(undefined1 (*) [16])(param_5->Transform).Rotation.ZW.m128d_f64 = auVar34 | auVar30;
  auVar7._8_4_ = SUB84(dVar8,0);
  auVar7._0_8_ = (dVar12 - dVar16) * local_230 + dVar16;
  auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *(undefined1 (*) [16])(param_5->Transform).Translation.XY.m128d_f64 = auVar7;
  (param_5->Transform).Translation.ZW.m128d_f64[0] = (dVar14 - dVar15) * local_230 + dVar15;
  (param_5->Transform).Translation.ZW.m128d_f64[1] = 0.0;
  auVar33._8_4_ = SUB84(dVar3,0);
  auVar33._0_8_ = (local_210 - dVar11) * local_230 + dVar11;
  auVar33._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])(param_5->Transform).Scale3D.XY.m128d_f64 = auVar33;
  (param_5->Transform).Scale3D.ZW.m128d_f64[0] = (local_1f8 - local_1e8) * local_230 + local_1e8;
  (param_5->Transform).Scale3D.ZW.m128d_f64[1] = 0.0;
  param_5->Density = (param_2->Density - param_1->Density) * local_238 + param_1->Density;
  dVar3 = (param_1->BoundsMin).field0_0x0._s_0.Y;
  dVar2 = (param_1->BoundsMin).field0_0x0._s_0.Z;
  dVar28 = (param_2->BoundsMin).field0_0x0._s_0.Y;
  dVar8 = (param_2->BoundsMin).field0_0x0._s_0.Z;
  (param_5->BoundsMin).field0_0x0._s_0.X =
       ((param_2->BoundsMin).field0_0x0._s_0.X - (param_1->BoundsMin).field0_0x0._s_0.X) * local_230
       + (param_1->BoundsMin).field0_0x0._s_0.X;
  dVar2 = (dVar8 - dVar2) * local_230 + dVar2;
  auVar4._8_4_ = SUB84(dVar2,0);
  auVar4._0_8_ = (dVar28 - dVar3) * local_230 + dVar3;
  auVar4._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(param_5->BoundsMin).field0_0x0 + 8) = auVar4;
  dVar2 = (param_1->BoundsMax).field0_0x0._s_0.X;
  dVar28 = (param_1->BoundsMax).field0_0x0._s_0.Y;
  dVar3 = (param_1->BoundsMax).field0_0x0._s_0.Z;
  dVar8 = (param_2->BoundsMax).field0_0x0._s_0.Y;
  dVar11 = (param_2->BoundsMax).field0_0x0._s_0.Z;
  (param_5->BoundsMax).field0_0x0._s_0.X =
       ((param_2->BoundsMax).field0_0x0._s_0.X - dVar2) * local_230 + dVar2;
  dVar3 = (dVar11 - dVar3) * local_230 + dVar3;
  auVar5._8_4_ = SUB84(dVar3,0);
  auVar5._0_8_ = (dVar8 - dVar28) * local_230 + dVar28;
  auVar5._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(param_5->BoundsMax).field0_0x0 + 8) = auVar5;
  dVar2 = (param_1->Color).field0_0x0._s_0.W;
  dVar3 = (param_1->Color).field0_0x0._s_0.X;
  dVar28 = (param_2->Color).field0_0x0._s_0.W;
  dVar11 = (param_1->Color).field0_0x0._s_0.Y;
  dVar8 = (param_1->Color).field0_0x0._s_0.Z;
  dVar12 = (param_2->Color).field0_0x0._s_0.Y;
  dVar8 = ((param_2->Color).field0_0x0._s_0.Z - dVar8) * local_230 + dVar8;
  (param_5->Color).field0_0x0._s_0.X =
       ((param_2->Color).field0_0x0._s_0.X - dVar3) * local_230 + dVar3;
  auVar6._8_4_ = SUB84(dVar8,0);
  auVar6._0_8_ = (dVar12 - dVar11) * local_230 + dVar11;
  auVar6._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(param_5->Color).field0_0x0 + 8) = auVar6;
  (param_5->Color).field0_0x0._s_0.W = (dVar28 - dVar2) * local_230 + dVar2;
  param_5->Steepness = (param_2->Steepness - param_1->Steepness) * local_238 + param_1->Steepness;
  if ((param_6 != (UPCGMetadata *)0x0) && (param_4 != (UPCGMetadata *)0x0)) {
    iVar23 = UPCGMetadata::GetAttributeCount(param_4);
    if (0 < iVar23) {
      pFVar25 = param_2;
      if (fVar21 <= __real_3f000000) {
        pFVar25 = param_1;
      }
      UPCGMetadataAccessorHelpers::InitializeMetadataWithParent(param_5,param_6,pFVar25,param_4);
      local_228.DataPtr = (TTuple<FPCGPoint_const_*,float> *)&local_118;
      local_100 = __real_3f800000 - fVar21;
      local_110 = fVar21;
      local_f8 = (void *)0x0;
      local_ec = 2;
      local_f0 = 2;
      local_228.ArrayNum = 2;
      local_118 = param_1;
      local_108 = param_2;
      UPCGMetadata::ComputePointWeightedAttribute(param_6,param_5,&local_228,param_4);
      if (local_f8 != (void *)0x0) {
        FMemory::Free(local_f8);
      }
    }
  }
  return;
}

// PolygonVertexCount @ 1498d2560

int __cdecl PCGPolygon2DData::PolygonVertexCount(TGeneralPolygon2<double> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (param_1->Holes).ArrayNum;
  pFVar2 = (param_1->Holes).AllocatorInstance.Data;
  iVar4 = (param_1->Outer).Vertices.ArrayNum;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((param_1->Holes).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Geometry::TPolygon2<double>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    iVar4 = iVar4 + *(int *)(pFVar2 + 8);
    pFVar2 = pFVar2 + 0x10;
  }
  return iVar4;
}

// ReversePolygon @ 1498d7820

void __cdecl
PCGPolygon2DData::ReversePolygon
          (TGeneralPolygon2<double> *param_1,TArray<__int64,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  iVar1 = (param_1->Outer).Vertices.ArrayNum;
  pFVar15 = (param_1->Outer).Vertices.AllocatorInstance.Data;
  iVar8 = iVar1 / 2;
  lVar16 = (longlong)iVar8;
  if (0 < iVar8) {
    pFVar14 = pFVar15 + (longlong)(iVar1 + -1) * 0x10;
    do {
      uVar2 = *(undefined8 *)(pFVar14 + 8);
      uVar5 = *(undefined8 *)pFVar15;
      uVar6 = *(undefined8 *)(pFVar15 + 8);
      *(undefined8 *)pFVar15 = *(undefined8 *)pFVar14;
      *(undefined8 *)(pFVar15 + 8) = uVar2;
      pFVar15 = pFVar15 + 0x10;
      *(undefined8 *)pFVar14 = uVar5;
      *(undefined8 *)(pFVar14 + 8) = uVar6;
      lVar16 = lVar16 + -1;
      pFVar14 = pFVar14 + -0x10;
    } while (lVar16 != 0);
  }
  param_1->bOuterIsCW = param_1->bOuterIsCW == false;
  iVar1 = (param_1->Holes).ArrayNum;
  pFVar15 = (param_1->Holes).AllocatorInstance.Data;
  pFVar14 = pFVar15 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((param_1->Holes).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::TPolygon2<double>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar15 == pFVar14) break;
    puVar11 = *(undefined8 **)pFVar15;
    iVar8 = *(int *)(pFVar15 + 8) / 2;
    lVar16 = (longlong)iVar8;
    if (0 < iVar8) {
      puVar10 = puVar11 + (longlong)(*(int *)(pFVar15 + 8) + -1) * 2;
      do {
        uVar2 = puVar10[1];
        uVar5 = *puVar11;
        uVar6 = puVar11[1];
        *puVar11 = *puVar10;
        puVar11[1] = uVar2;
        puVar11 = puVar11 + 2;
        *puVar10 = uVar5;
        puVar10[1] = uVar6;
        lVar16 = lVar16 + -1;
        puVar10 = puVar10 + -2;
      } while (lVar16 != 0);
    }
    pFVar15 = pFVar15 + 0x10;
  }
  if (param_2->ArrayNum != 0) {
    uVar13 = (param_1->Outer).Vertices.ArrayNum;
    if ((param_2->ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar15 = (param_2->AllocatorInstance).Data;
    if (0 < (int)uVar13 / 2) {
      lVar16 = 0;
      pFVar14 = pFVar15 + (longlong)(int)(uVar13 - 1) * 8;
      do {
        uVar2 = *(undefined8 *)(pFVar15 + lVar16 * 8);
        *(undefined8 *)(pFVar15 + lVar16 * 8) = *(undefined8 *)pFVar14;
        lVar16 = lVar16 + 1;
        *(undefined8 *)pFVar14 = uVar2;
        pFVar14 = pFVar14 + -8;
      } while (lVar16 < (int)uVar13 / 2);
    }
    iVar1 = (param_1->Holes).ArrayNum;
    pFVar15 = (param_1->Holes).AllocatorInstance.Data;
    pFVar14 = pFVar15 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((param_1->Holes).ArrayNum != iVar1) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<UE::Geometry::TPolygon2<double>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar15 == pFVar14) break;
      iVar8 = *(int *)(pFVar15 + 8);
      uVar9 = 0;
      if ((int)uVar13 < param_2->ArrayNum) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (param_2->AllocatorInstance).Data;
      lVar16 = 0;
      if (0 < iVar8 / 2) {
        pFVar12 = pFVar3 + (longlong)(iVar8 + -1) * 8 + (longlong)(int)uVar13 * 8;
        do {
          uVar2 = *(undefined8 *)(pFVar3 + lVar16 * 8 + (longlong)(int)uVar13 * 8);
          *(undefined8 *)(pFVar3 + lVar16 * 8 + (longlong)(int)uVar13 * 8) = *(undefined8 *)pFVar12;
          lVar16 = lVar16 + 1;
          *(undefined8 *)pFVar12 = uVar2;
          pFVar12 = pFVar12 + -8;
        } while (lVar16 < iVar8 / 2);
      }
      uVar13 = uVar13 + iVar8;
      pFVar15 = pFVar15 + 0x10;
    }
  }
  return;
}

// SampleFloatChannel @ 1498d7a80

float __cdecl
PCGTextureSamplingHelpers::SampleFloatChannel(FLinearColor *param_1,EPCGTextureColorChannel param_2)

{
  if (param_2 == Red) {
    return (param_1->field0_0x0)._s_0.R;
  }
  if (param_2 != Green) {
    if (param_2 != Blue) {
      return (param_1->field0_0x0)._s_0.A;
    }
    return (param_1->field0_0x0)._s_0.B;
  }
  return (param_1->field0_0x0)._s_0.G;
}

// SerializePolygon @ 1498deb80

void __cdecl PCGPolygon2DData::SerializePolygon(TGeneralPolygon2<double> *param_1,FArchive *param_2)

{
  TArray<UE::Geometry::TPolygon2<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar10;
  int iVar11;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar12;
  double dVar13;
  undefined1 local_res10 [8];
  uint local_res18 [2];
  uint local_res20 [2];
  TPolygon2<double> local_78;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_68;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_58;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_48;
  
  pTVar1 = &param_1->Holes;
  if ((param_2->field_0x28 & 1) == 0) {
    TArrayPrivateFriend::Serialize<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>
              (param_2,(TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)param_1);
    plVar3 = *(longlong **)&param_2->field_0x8;
    local_res20[0] = (param_1->Holes).ArrayNum;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_res20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,local_res20);
      }
    }
    else {
      local_res20[0] = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    iVar11 = (param_1->Holes).ArrayNum;
    pTVar10 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
              (pTVar1->AllocatorInstance).Data;
    pTVar12 = pTVar10 + iVar11;
    while( true ) {
      if ((param_1->Holes).ArrayNum != iVar11) {
        `TCheckedPointerIterator<UE::Geometry::TPolygon2<double>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pTVar10 == pTVar12) break;
      TArrayPrivateFriend::Serialize<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>
                (param_2,pTVar10);
      pTVar10 = pTVar10 + 1;
    }
  }
  else {
    DestructItems<UE::Geometry::TPolygon2<double>,int>
              ((TPolygon2<double> *)(pTVar1->AllocatorInstance).Data,(param_1->Holes).ArrayNum);
    iVar11 = 0;
    piVar2 = &(param_1->Holes).ArrayMax;
    (param_1->Holes).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar1->AllocatorInstance,0,piVar2);
    }
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    TArrayPrivateFriend::Serialize<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>
              (param_2,&local_48);
    FVar6.Data = local_48.AllocatorInstance.Data;
    lVar9 = (longlong)local_48.ArrayNum;
    local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.ArrayNum = local_48.ArrayNum;
    if (local_48.ArrayNum == 0) {
      local_68.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,local_48.ArrayNum,0,&local_68.AllocatorInstance,local_48.ArrayNum,
                 &local_68.ArrayMax);
      memcpy(local_68.AllocatorInstance.Data,FVar6.Data,lVar9 << 4);
    }
    TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)param_1,&local_68);
    dVar13 = UE::Geometry::TPolygon2<double>::SignedArea((TPolygon2<double> *)&local_68);
    param_1->bOuterIsCW = dVar13 < 0.0;
    if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
    plVar3 = *(longlong **)&param_2->field_0x8;
    local_res18[0] = 0;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_res18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,local_res18);
      }
    }
    else {
      local_res18[0] = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    if (0 < (int)local_res18[0]) {
      do {
        local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_58.ArrayNum = 0;
        local_58.ArrayMax = 0;
        TArrayPrivateFriend::Serialize<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>
                  (param_2,&local_58);
        FVar6.Data = local_58.AllocatorInstance.Data;
        lVar9 = (longlong)local_58.ArrayNum;
        local_78.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_78.Vertices.ArrayNum = local_58.ArrayNum;
        if (local_58.ArrayNum == 0) {
          local_78.Vertices.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,local_58.ArrayNum,0,(ForAnyElementType *)&local_78,local_58.ArrayNum,
                     &local_78.Vertices.ArrayMax);
          memcpy(local_78.Vertices.AllocatorInstance.Data,FVar6.Data,lVar9 << 4);
        }
        pFVar4 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_78) &&
            ((FScriptContainerElement *)&local_78 < pFVar4 + (longlong)*piVar2 * 0x10)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = (param_1->Holes).ArrayNum;
        if (iVar8 == *piVar2) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&pTVar1->AllocatorInstance,piVar2);
        }
        (param_1->Holes).ArrayNum = iVar8 + 1;
        UE::Geometry::TPolygon2<double>::TPolygon2<double>
                  ((TPolygon2<double> *)((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 0x10),
                   &local_78);
        if (local_78.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Vertices.AllocatorInstance.Data);
        }
        if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.AllocatorInstance.Data);
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < (int)local_res18[0]);
    }
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  return;
}

// ToUnionDensityFunction @ 1498f85c0

EPCGUnionDensityFunction __cdecl
PCGDifferenceDataUtils::ToUnionDensityFunction(EPCGDifferenceDensityFunction param_1)

{
  EPCGUnionDensityFunction EVar1;
  
  if (param_1 == ClampedSubstraction) {
    return ClampedAddition;
  }
  EVar1 = Maximum;
  if (param_1 == Binary) {
    EVar1 = Binary;
  }
  return EVar1;
}

// UpdateDensity @ 1498f95a0

float __cdecl
PCGUnionDataMaths::UpdateDensity(float *param_1,float param_2,EPCGUnionDensityFunction param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *param_1;
  if (param_3 == ClampedAddition) {
    fVar2 = fVar1 + param_2;
    if (__real_3f800000 <= fVar1 + param_2) {
      fVar2 = __real_3f800000;
    }
    *param_1 = fVar2;
    return fVar2;
  }
  if (param_3 == Binary) {
    if (0.0 < param_2) {
      fVar1 = __real_3f800000;
      *param_1 = __real_3f800000;
      return fVar1;
    }
  }
  else if (fVar1 <= param_2) {
    fVar1 = param_2;
  }
  *param_1 = fVar1;
  return fVar1;
}

// Z_Construct_UClass_UPCGBaseTextureData_NoRegister @ 1498fa8f0

UClass * __cdecl Z_Construct_UClass_UPCGBaseTextureData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGBaseTextureData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGBaseTextureData",
               &Z_Registration_Info_UClass_UPCGBaseTextureData.InnerSingleton,
               UPCGBaseTextureData::StaticRegisterNativesUPCGBaseTextureData,0x260,0x10,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGBaseTextureData>,
               InternalVTableHelperCtorCaller<UPCGBaseTextureData>,local_res8,
               UPCGSurfaceData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGBaseTextureData.InnerSingleton;
}

// Z_Construct_UClass_UPCGCollisionShapeData_NoRegister @ 1498fa9b0

UClass * __cdecl Z_Construct_UClass_UPCGCollisionShapeData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCollisionShapeData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCollisionShapeData",
               &Z_Registration_Info_UClass_UPCGCollisionShapeData.InnerSingleton,
               UPCGCollisionShapeData::StaticRegisterNativesUPCGCollisionShapeData,0x200,0x10,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UPCGCollisionShapeData>,
               InternalVTableHelperCtorCaller<UPCGCollisionShapeData>,local_res8,
               UPCGSpatialDataWithPointCache::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCollisionShapeData.InnerSingleton;
}

// Z_Construct_UClass_UPCGCollisionWrapperData_NoRegister @ 1498faa70

UClass * __cdecl Z_Construct_UClass_UPCGCollisionWrapperData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCollisionWrapperData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCollisionWrapperData",
               &Z_Registration_Info_UClass_UPCGCollisionWrapperData.InnerSingleton,
               UPCGCollisionWrapperData::StaticRegisterNativesUPCGCollisionWrapperData,0x120,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGCollisionWrapperData>,
               InternalVTableHelperCtorCaller<UPCGCollisionWrapperData>,local_res8,
               UPCGSpatialData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCollisionWrapperData.InnerSingleton;
}

// Z_Construct_UClass_UPCGDataTypeIdentifierHelpers_NoRegister @ 1498fab30

UClass * __cdecl Z_Construct_UClass_UPCGDataTypeIdentifierHelpers_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDataTypeIdentifierHelpers.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDataTypeIdentifierHelpers",
               &Z_Registration_Info_UClass_UPCGDataTypeIdentifierHelpers.InnerSingleton,
               UPCGDataTypeIdentifierHelpers::StaticRegisterNativesUPCGDataTypeIdentifierHelpers,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGDataTypeIdentifierHelpers>,
               InternalVTableHelperCtorCaller<UPCGDataTypeIdentifierHelpers>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDataTypeIdentifierHelpers.InnerSingleton;
}

// Z_Construct_UClass_UPCGDynamicMeshData_NoRegister @ 1498fabf0

UClass * __cdecl Z_Construct_UClass_UPCGDynamicMeshData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDynamicMeshData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDynamicMeshData",
               &Z_Registration_Info_UClass_UPCGDynamicMeshData.InnerSingleton,
               UPCGDynamicMeshData::StaticRegisterNativesUPCGDynamicMeshData,0x328,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",InternalConstructor<UPCGDynamicMeshData>,
               InternalVTableHelperCtorCaller<UPCGDynamicMeshData>,local_res8,
               UPCGSpatialData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDynamicMeshData.InnerSingleton;
}

// Z_Construct_UClass_UPCGLandscapeData_NoRegister @ 1498facb0

UClass * __cdecl Z_Construct_UClass_UPCGLandscapeData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGLandscapeData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGLandscapeData",
               &Z_Registration_Info_UClass_UPCGLandscapeData.InnerSingleton,
               UPCGLandscapeData::StaticRegisterNativesUPCGLandscapeData,0x220,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGLandscapeData>,
               InternalVTableHelperCtorCaller<UPCGLandscapeData>,local_res8,
               UPCGSurfaceData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGLandscapeData.InnerSingleton;
}

// Z_Construct_UClass_UPCGLandscapeSplineData_NoRegister @ 1498fad70

UClass * __cdecl Z_Construct_UClass_UPCGLandscapeSplineData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGLandscapeSplineData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGLandscapeSplineData",
               &Z_Registration_Info_UClass_UPCGLandscapeSplineData.InnerSingleton,
               UPCGLandscapeSplineData::StaticRegisterNativesUPCGLandscapeSplineData,0x138,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UPCGLandscapeSplineData>
               ,InternalVTableHelperCtorCaller<UPCGLandscapeSplineData>,local_res8,
               UPCGPolyLineData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGLandscapeSplineData.InnerSingleton;
}

// Z_Construct_UClass_UPCGPolyLineData_NoRegister @ 1498fae30

UClass * __cdecl Z_Construct_UClass_UPCGPolyLineData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGPolyLineData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGPolyLineData",
               &Z_Registration_Info_UClass_UPCGPolyLineData.InnerSingleton,
               UPCGPolyLineData::StaticRegisterNativesUPCGPolyLineData,0x110,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGPolyLineData>,
               InternalVTableHelperCtorCaller<UPCGPolyLineData>,local_res8,
               UPCGSpatialDataWithPointCache::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGPolyLineData.InnerSingleton;
}

// Z_Construct_UClass_UPCGPolygon2DInteriorSurfaceData_NoRegister @ 1498faef0

UClass * __cdecl Z_Construct_UClass_UPCGPolygon2DInteriorSurfaceData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGPolygon2DInteriorSurfaceData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGPolygon2DInteriorSurfaceData",
               &Z_Registration_Info_UClass_UPCGPolygon2DInteriorSurfaceData.InnerSingleton,
               UPCGPolygon2DInteriorSurfaceData::
               StaticRegisterNativesUPCGPolygon2DInteriorSurfaceData,0x1b0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGPolygon2DInteriorSurfaceData>,
               InternalVTableHelperCtorCaller<UPCGPolygon2DInteriorSurfaceData>,local_res8,
               UPCGSurfaceData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGPolygon2DInteriorSurfaceData.InnerSingleton;
}

// Z_Construct_UClass_UPCGPrimitiveData_NoRegister @ 1498fafb0

UClass * __cdecl Z_Construct_UClass_UPCGPrimitiveData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGPrimitiveData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGPrimitiveData",
               &Z_Registration_Info_UClass_UPCGPrimitiveData.InnerSingleton,
               UPCGPrimitiveData::StaticRegisterNativesUPCGPrimitiveData,0x1a0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGPrimitiveData>,
               InternalVTableHelperCtorCaller<UPCGPrimitiveData>,local_res8,
               UPCGSpatialDataWithPointCache::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGPrimitiveData.InnerSingleton;
}

// Z_Construct_UClass_UPCGProjectionData_NoRegister @ 1498fb070

UClass * __cdecl Z_Construct_UClass_UPCGProjectionData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGProjectionData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGProjectionData",
               &Z_Registration_Info_UClass_UPCGProjectionData.InnerSingleton,
               UPCGProjectionData::StaticRegisterNativesUPCGProjectionData,0x1b0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGProjectionData>,
               InternalVTableHelperCtorCaller<UPCGProjectionData>,local_res8,
               UPCGSpatialDataWithPointCache::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGProjectionData.InnerSingleton;
}

// Z_Construct_UClass_UPCGRenderTargetData_NoRegister @ 1498fb130

UClass * __cdecl Z_Construct_UClass_UPCGRenderTargetData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGRenderTargetData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGRenderTargetData",
               &Z_Registration_Info_UClass_UPCGRenderTargetData.InnerSingleton,
               UPCGRenderTargetData::StaticRegisterNativesUPCGRenderTargetData,0x270,0x10,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UPCGRenderTargetData>,
               InternalVTableHelperCtorCaller<UPCGRenderTargetData>,local_res8,
               UPCGBaseTextureData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGRenderTargetData.InnerSingleton;
}

// Z_Construct_UClass_UPCGResourceData_NoRegister @ 1498fb1f0

UClass * __cdecl Z_Construct_UClass_UPCGResourceData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGResourceData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGResourceData",
               &Z_Registration_Info_UClass_UPCGResourceData.InnerSingleton,
               UPCGResourceData::StaticRegisterNativesUPCGResourceData,0x48,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGResourceData>,
               InternalVTableHelperCtorCaller<UPCGResourceData>,local_res8,UPCGData::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGResourceData.InnerSingleton;
}

// Z_Construct_UClass_UPCGSpatialDataWithPointCache_NoRegister @ 1498fb2b0

UClass * __cdecl Z_Construct_UClass_UPCGSpatialDataWithPointCache_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSpatialDataWithPointCache.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSpatialDataWithPointCache",
               &Z_Registration_Info_UClass_UPCGSpatialDataWithPointCache.InnerSingleton,
               UPCGSpatialDataWithPointCache::StaticRegisterNativesUPCGSpatialDataWithPointCache,
               0x110,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGSpatialDataWithPointCache>,
               InternalVTableHelperCtorCaller<UPCGSpatialDataWithPointCache>,local_res8,
               UPCGSpatialData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSpatialDataWithPointCache.InnerSingleton;
}

// Z_Construct_UClass_UPCGSplineData_NoRegister @ 1498fb370

UClass * __cdecl Z_Construct_UClass_UPCGSplineData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSplineData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSplineData",
               &Z_Registration_Info_UClass_UPCGSplineData.InnerSingleton,
               UPCGSplineData::StaticRegisterNativesUPCGSplineData,800,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGSplineData>,
               InternalVTableHelperCtorCaller<UPCGSplineData>,local_res8,
               UPCGPolyLineData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSplineData.InnerSingleton;
}

// Z_Construct_UClass_UPCGSplineInteriorSurfaceData_NoRegister @ 1498fb430

UClass * __cdecl Z_Construct_UClass_UPCGSplineInteriorSurfaceData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSplineInteriorSurfaceData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSplineInteriorSurfaceData",
               &Z_Registration_Info_UClass_UPCGSplineInteriorSurfaceData.InnerSingleton,
               UPCGSplineInteriorSurfaceData::StaticRegisterNativesUPCGSplineInteriorSurfaceData,
               0x3e0,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGSplineInteriorSurfaceData>,
               InternalVTableHelperCtorCaller<UPCGSplineInteriorSurfaceData>,local_res8,
               UPCGSurfaceData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSplineInteriorSurfaceData.InnerSingleton;
}

// Z_Construct_UClass_UPCGSplineProjectionData_NoRegister @ 1498fb4f0

UClass * __cdecl Z_Construct_UClass_UPCGSplineProjectionData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSplineProjectionData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSplineProjectionData",
               &Z_Registration_Info_UClass_UPCGSplineProjectionData.InnerSingleton,
               UPCGSplineProjectionData::StaticRegisterNativesUPCGSplineProjectionData,0x1c8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGSplineProjectionData>,
               InternalVTableHelperCtorCaller<UPCGSplineProjectionData>,local_res8,
               UPCGProjectionData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSplineProjectionData.InnerSingleton;
}

// Z_Construct_UClass_UPCGStaticMeshResourceData_NoRegister @ 1498fb5b0

UClass * __cdecl Z_Construct_UClass_UPCGStaticMeshResourceData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGStaticMeshResourceData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGStaticMeshResourceData",
               &Z_Registration_Info_UClass_UPCGStaticMeshResourceData.InnerSingleton,
               UPCGStaticMeshResourceData::StaticRegisterNativesUPCGStaticMeshResourceData,0x70,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGStaticMeshResourceData>,
               InternalVTableHelperCtorCaller<UPCGStaticMeshResourceData>,local_res8,
               UPCGResourceData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGStaticMeshResourceData.InnerSingleton;
}

// Z_Construct_UClass_UPCGSurfaceData_NoRegister @ 1498fb670

UClass * __cdecl Z_Construct_UClass_UPCGSurfaceData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSurfaceData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSurfaceData",
               &Z_Registration_Info_UClass_UPCGSurfaceData.InnerSingleton,
               UPCGSurfaceData::StaticRegisterNativesUPCGSurfaceData,0x1b0,0x10,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGSurfaceData>,InternalVTableHelperCtorCaller<UPCGSurfaceData>,
               local_res8,UPCGSpatialDataWithPointCache::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSurfaceData.InnerSingleton;
}

// Z_Construct_UClass_UPCGTextureData_NoRegister @ 1498fb730

UClass * __cdecl Z_Construct_UClass_UPCGTextureData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGTextureData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGTextureData",
               &Z_Registration_Info_UClass_UPCGTextureData.InnerSingleton,
               UPCGTextureData::StaticRegisterNativesUPCGTextureData,0x2c0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGTextureData>,
               InternalVTableHelperCtorCaller<UPCGTextureData>,local_res8,
               UPCGBaseTextureData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGTextureData.InnerSingleton;
}

// Z_Construct_UClass_UPCGVirtualTextureData_NoRegister @ 1498fb7f0

UClass * __cdecl Z_Construct_UClass_UPCGVirtualTextureData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGVirtualTextureData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGVirtualTextureData",
               &Z_Registration_Info_UClass_UPCGVirtualTextureData.InnerSingleton,
               UPCGVirtualTextureData::StaticRegisterNativesUPCGVirtualTextureData,0x1b0,0x10,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UPCGVirtualTextureData>,
               InternalVTableHelperCtorCaller<UPCGVirtualTextureData>,local_res8,
               UPCGSurfaceData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGVirtualTextureData.InnerSingleton;
}

// Z_Construct_UClass_UPCGVolumeData_NoRegister @ 1498fb8b0

UClass * __cdecl Z_Construct_UClass_UPCGVolumeData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGVolumeData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGVolumeData",
               &Z_Registration_Info_UClass_UPCGVolumeData.InnerSingleton,
               UPCGVolumeData::StaticRegisterNativesUPCGVolumeData,0x1a8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGVolumeData>,
               InternalVTableHelperCtorCaller<UPCGVolumeData>,local_res8,
               UPCGSpatialDataWithPointCache::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGVolumeData.InnerSingleton;
}

// Z_Construct_UClass_UPCGWorldRayHitData_NoRegister @ 1498fb970

UClass * __cdecl Z_Construct_UClass_UPCGWorldRayHitData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGWorldRayHitData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGWorldRayHitData",
               &Z_Registration_Info_UClass_UPCGWorldRayHitData.InnerSingleton,
               UPCGWorldRayHitData::StaticRegisterNativesUPCGWorldRayHitData,0x430,0x10,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UPCGWorldRayHitData>,
               InternalVTableHelperCtorCaller<UPCGWorldRayHitData>,local_res8,
               UPCGSurfaceData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGWorldRayHitData.InnerSingleton;
}

// Z_Construct_UClass_UPCGWorldVolumetricData_NoRegister @ 1498fba30

UClass * __cdecl Z_Construct_UClass_UPCGWorldVolumetricData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGWorldVolumetricData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGWorldVolumetricData",
               &Z_Registration_Info_UClass_UPCGWorldVolumetricData.InnerSingleton,
               UPCGWorldVolumetricData::StaticRegisterNativesUPCGWorldVolumetricData,0x318,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UPCGWorldVolumetricData>
               ,InternalVTableHelperCtorCaller<UPCGWorldVolumetricData>,local_res8,
               UPCGVolumeData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGWorldVolumetricData.InnerSingleton;
}

// Z_Construct_UEnum_PCG_EPCGDifferenceMode @ 1498fbaf0

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGDifferenceMode(void)

{
  if (Z_Registration_Info_UEnum_EPCGDifferenceMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGDifferenceMode.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGDifferenceMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGDifferenceMode.InnerSingleton;
}

// Z_Construct_UEnum_PCG_EPCGPolygon2DDataProperties @ 1498fbb30

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGPolygon2DDataProperties(void)

{
  if (Z_Registration_Info_UEnum_EPCGPolygon2DDataProperties.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGPolygon2DDataProperties.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGPolygon2DDataProperties_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGPolygon2DDataProperties.InnerSingleton;
}

// Z_Construct_UEnum_PCG_EPCGPolygon2DProperties @ 1498fbb70

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGPolygon2DProperties(void)

{
  if (Z_Registration_Info_UEnum_EPCGPolygon2DProperties.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGPolygon2DProperties.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGPolygon2DProperties_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGPolygon2DProperties.InnerSingleton;
}

// Z_Construct_UEnum_PCG_EPCGSplineDataProperties @ 1498fbbb0

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGSplineDataProperties(void)

{
  if (Z_Registration_Info_UEnum_EPCGSplineDataProperties.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGSplineDataProperties.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGSplineDataProperties_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGSplineDataProperties.InnerSingleton;
}

// Z_Construct_UEnum_PCG_EPCGSplineStructProperties @ 1498fbbf0

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGSplineStructProperties(void)

{
  if (Z_Registration_Info_UEnum_EPCGSplineStructProperties.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGSplineStructProperties.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGSplineStructProperties_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGSplineStructProperties.InnerSingleton;
}

// Z_Construct_UEnum_PCG_EPCGTextureAddressMode @ 1498fbc30

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGTextureAddressMode(void)

{
  if (Z_Registration_Info_UEnum_EPCGTextureAddressMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGTextureAddressMode.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGTextureAddressMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGTextureAddressMode.InnerSingleton;
}

// Z_Construct_UEnum_PCG_EPCGWorldQueryFilterByTag @ 1498fbc70

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGWorldQueryFilterByTag(void)

{
  if (Z_Registration_Info_UEnum_EPCGWorldQueryFilterByTag.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGWorldQueryFilterByTag.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGWorldQueryFilterByTag_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGWorldQueryFilterByTag.InnerSingleton;
}

// Z_Construct_UScriptStruct_FPCGDataPtrWrapper @ 1498fbcb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGDataPtrWrapper(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGDataPtrWrapper.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGDataPtrWrapper.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGDataPtrWrapper_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGDataPtrWrapper.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGDataPtrWrapper.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPCGDataTypeInfoComposite @ 1498fbd30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGDataTypeInfoComposite(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoComposite.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoComposite.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGDataTypeInfoComposite_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoComposite.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoComposite.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPCGDataTypeInfoDynamicMesh @ 1498fbdb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGDataTypeInfoDynamicMesh(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoDynamicMesh.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoDynamicMesh.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGDataTypeInfoDynamicMesh_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoDynamicMesh.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoDynamicMesh.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPCGDataTypeInfoLandscape @ 1498fbe30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGDataTypeInfoLandscape(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoLandscape.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoLandscape.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGDataTypeInfoLandscape_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoLandscape.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoLandscape.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPCGDataTypeInfoLandscapeSpline @ 1498fbeb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGDataTypeInfoLandscapeSpline(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoLandscapeSpline.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoLandscapeSpline.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGDataTypeInfoLandscapeSpline_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoLandscapeSpline.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoLandscapeSpline.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPCGDataTypeInfoOther @ 1498fbf30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGDataTypeInfoOther(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoOther.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoOther.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGDataTypeInfoOther_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoOther.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoOther.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPCGDataTypeInfoPolygon2D @ 1498fbfb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGDataTypeInfoPolygon2D(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoPolygon2D.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoPolygon2D.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGDataTypeInfoPolygon2D_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoPolygon2D.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoPolygon2D.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPCGDataTypeInfoPrimitive @ 1498fc030

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGDataTypeInfoPrimitive(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoPrimitive.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoPrimitive.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGDataTypeInfoPrimitive_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoPrimitive.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoPrimitive.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPCGDataTypeInfoRenderTarget2D @ 1498fc0b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGDataTypeInfoRenderTarget2D(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoRenderTarget2D.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoRenderTarget2D.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGDataTypeInfoRenderTarget2D_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoRenderTarget2D.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoRenderTarget2D.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPCGDataTypeInfoSpline @ 1498fc130

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGDataTypeInfoSpline(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoSpline.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoSpline.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGDataTypeInfoSpline_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoSpline.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoSpline.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPCGDataTypeInfoStaticMeshResource @ 1498fc1b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGDataTypeInfoStaticMeshResource(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoStaticMeshResource.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoStaticMeshResource.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGDataTypeInfoStaticMeshResource_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoStaticMeshResource.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoStaticMeshResource.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPCGDataTypeInfoTexture2D @ 1498fc230

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGDataTypeInfoTexture2D(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoTexture2D.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoTexture2D.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGDataTypeInfoTexture2D_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoTexture2D.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoTexture2D.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPCGDataTypeInfoVirtualTexture @ 1498fc2b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGDataTypeInfoVirtualTexture(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoVirtualTexture.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoVirtualTexture.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGDataTypeInfoVirtualTexture_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoVirtualTexture.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoVirtualTexture.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPCGDataTypeInfoVolume @ 1498fc330

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGDataTypeInfoVolume(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoVolume.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoVolume.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGDataTypeInfoVolume_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoVolume.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoVolume.InnerSingleton;
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

// PositionCurve'' @ 150417900

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

// RotationCurve'' @ 150417920

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

// ScaleCurve'' @ 150417940

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

// StaticResource'' @ 150417960

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__0A__00_00_00_0A__00_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
  ;
  if ((GRHIGlobals.IsRHIInitialized) && (GRHIGlobals.SupportsRHIThread)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                       ,99,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRenderResource::ReleaseResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
      ::StaticResource.StateRHI.Reference != (FRHISamplerState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnablePrepareForSpatialQuery'' @ 1504179e0

void __cdecl
PCGSpatialData::_dynamic_atexit_destructor_for__CVarEnablePrepareForSpatialQuery__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnablePrepareForSpatialQuery);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPCGEnablePointArrayDataParenting'' @ 150417a00

void __cdecl _dynamic_atexit_destructor_for__CVarPCGEnablePointArrayDataParenting__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarPCGEnablePointArrayDataParenting);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTriggerReadbackCapture'' @ 150417a20

void __cdecl
PCGTextureSamplingHelpers::_dynamic_atexit_destructor_for__CVarTriggerReadbackCapture__(void)

{
  CVarTriggerReadbackCapture._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarTriggerReadbackCapture);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseSplineCurves'' @ 150417a40

void __cdecl PCGSplineStruct::_dynamic_atexit_destructor_for__CVarUseSplineCurves__(void)

{
  CVarUseSplineCurves._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUseSplineCurves);
  return;
}

// `dynamic_atexit_destructor_for_'EmptyArray'' @ 150417a60

void __cdecl
`UPCGCollisionWrapperData::GetCachedShapes'::__l2::_dynamic_atexit_destructor_for__EmptyArray__
          (void)

{
  ForElementType<FPhysicsShapeReference_Chaos> FVar1;
  FLowLevelMemTracker *this;
  
  FVar1 = ::EmptyArray.AllocatorInstance.SecondaryData;
  if (::EmptyArray.AllocatorInstance.SecondaryData ==
      (ForElementType<FPhysicsShapeReference_Chaos>)0x0) {
    return;
  }
  if (::EmptyArray.AllocatorInstance.SecondaryData !=
      (ForElementType<FPhysicsShapeReference_Chaos>)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,(void *)FVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1);
  }
  return;
}

// `dynamic_atexit_destructor_for_'LogSpline'' @ 150417a80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::Geometry::Spline::_dynamic_atexit_destructor_for__LogSpline__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogSpline);
  return;
}

// `dynamic_atexit_destructor_for_'Prefix'' @ 150417aa0

void __cdecl `FPCGDataTypeBaseId::ToString'::__l11::_dynamic_atexit_destructor_for__Prefix__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Prefix.Data.AllocatorInstance.Data;
  if (Prefix.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Prefix.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// operator() @ 1505460f0

bool __thiscall
`PCGTextureSamplingHelpers::SampleInternal<FLinearColor>'::__l11::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4989331763936362611>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4989331763936362611>,
                       &`public:___cdecl_`struct_FLinearColor___cdecl_PCGTextureSamplingHelpers::SampleInternal<FLinearColor>(UE::Math::TVector2<double>,int,int,EPCGTextureFilter,TFunctionRef<struct_FLinearColor___cdecl(int)>)'::`11'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

