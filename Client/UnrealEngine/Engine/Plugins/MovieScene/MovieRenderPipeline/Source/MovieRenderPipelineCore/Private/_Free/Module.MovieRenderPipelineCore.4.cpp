// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 604

// CategoryMetaDataKey'' @ 1413fa0e0

void __cdecl
`dynamic_initializer_for_'UMovieJobVariableAssignmentContainer::CategoryMetaDataKey__(void)

{
  ::FName::FName(&UMovieJobVariableAssignmentContainer::CategoryMetaDataKey,L"Category");
  return;
}

// CurveGroupName'' @ 1413fa100

void __cdecl `dynamic_initializer_for_'FDataflowCurveSelection::CurveGroupName__(void)

{
  ::FName::FName(&FDataflowCurveSelection::CurveGroupName,"Curves");
  return;
}

// CustomEntryName'' @ 1413fa120

void __cdecl `dynamic_initializer_for_'FMovieGraphNamedResolution::CustomEntryName__(void)

{
  ::FName::FName(&FMovieGraphNamedResolution::CustomEntryName,L"Custom");
  return;
}

// DefaultResolutionName'' @ 1413fa140

void __cdecl `dynamic_initializer_for_'FMovieGraphNamedResolution::DefaultResolutionName__(void)

{
  ::FName::FName(&FMovieGraphNamedResolution::DefaultResolutionName,L"1080p (FHD)");
  return;
}

// DisplayNameMetaDataKey'' @ 1413fa160

void __cdecl
`dynamic_initializer_for_'UMovieJobVariableAssignmentContainer::DisplayNameMetaDataKey__(void)

{
  ::FName::FName(&UMovieJobVariableAssignmentContainer::DisplayNameMetaDataKey,L"DisplayName");
  return;
}

// EnableCategoriesMetaDataKey'' @ 1413fa180

void __cdecl
`dynamic_initializer_for_'UMovieJobVariableAssignmentContainer::EnableCategoriesMetaDataKey__(void)

{
  ::FName::FName(&UMovieJobVariableAssignmentContainer::EnableCategoriesMetaDataKey,
                 L"EnableCategories");
  return;
}

// FacesGroupName'' @ 1413fa1a0

void __cdecl `dynamic_initializer_for_'FDataflowFaceSelection::FacesGroupName__(void)

{
  ::FName::FName(&FDataflowFaceSelection::FacesGroupName,"Faces");
  return;
}

// GeometryGroupName'' @ 1413fa1c0

void __cdecl `dynamic_initializer_for_'FDataflowGeometrySelection::GeometryGroupName__(void)

{
  ::FName::FName(&FDataflowGeometrySelection::GeometryGroupName,"Geometry");
  return;
}

// MaterialGroupName'' @ 1413fa1e0

void __cdecl `dynamic_initializer_for_'FDataflowMaterialSelection::MaterialGroupName__(void)

{
  ::FName::FName(&FDataflowMaterialSelection::MaterialGroupName,"Material");
  return;
}

// ModularFeatureName'' @ 1413fa200

void __cdecl `dynamic_initializer_for_'IMoviePipelineBurnInExtension::ModularFeatureName__(void)

{
  ::FName::FName(&IMoviePipelineBurnInExtension::ModularFeatureName,
                 "ModularFeature_MoviePipelineBurnInExt");
  return;
}

// PropertyBagDefaultPropertyName'' @ 1413fa220

void __cdecl
`dynamic_initializer_for_'UMovieGraphValueContainer::PropertyBagDefaultPropertyName__(void)

{
  ::FName::FName(&UMovieGraphValueContainer::PropertyBagDefaultPropertyName,"Value");
  return;
}

// QuickRenderSettingsPackagePath'' @ 1413fa240

void __cdecl
`dynamic_initializer_for_'UMovieGraphQuickRenderSettings::QuickRenderSettingsPackagePath__(void)

{
  ::FString::FString(&UMovieGraphQuickRenderSettings::QuickRenderSettingsPackagePath,
                     L"/Temp/MovieRenderPipeline/QuickRenderSettings");
  atexit(`dynamic_atexit_destructor_for_'UMovieGraphQuickRenderSettings::
         QuickRenderSettingsPackagePath__);
  return;
}

// SimulationTag'' @ 1413fa270

void __cdecl `dynamic_initializer_for_'UDataflow::SimulationTag__(void)

{
  ::FString::FString(&UDataflow::SimulationTag,L"DataflowSimulationTag");
  atexit(`dynamic_atexit_destructor_for_'UDataflow::SimulationTag__);
  return;
}

// StaticResource'' @ 1413fa2a0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHIBlendState> this;
  TRefCountPtr<FRHIBlendState> TVar1;
  FRHIResource *local_res8;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticBlendState__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHIBlendState____PEAVFRHIBlendState____6B_
  ;
  TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource.StateRHI.Reference = (FRHIBlendState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    TVar1 = TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>
            ::CreateRHI();
    this = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
           ::StaticResource.StateRHI;
    if (TVar1.Reference !=
        (FRHIBlendState *)
        &TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI) {
                    /* WARNING: Load size is inaccurate */
      TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
      ::StaticResource.StateRHI.Reference = *TVar1.Reference;
      *(undefined8 *)TVar1.Reference = 0;
      if (this.Reference != (FRHIBlendState *)0x0) {
        FRHIResource::Release((FRHIResource *)this.Reference);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
      atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
             ::StaticResource__);
      return;
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 1413fa360

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHIDepthStencilState> this;
  TRefCountPtr<FRHIDepthStencilState> TVar1;
  FRHIResource *local_res8;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticDepthStencilState__0A__06_0A__06_0A__0A__0A__0A__06_0A__0A__0A__0PP__0PP___V__TRefCountPtr_VFRHIDepthStencilState____PEAVFRHIDepthStencilState____6B_
  ;
  TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
  ::StaticResource.StateRHI.Reference = (FRHIDepthStencilState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    TVar1 = TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>::CreateRHI();
    this = TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
           ::StaticResource.StateRHI;
    if (TVar1.Reference !=
        (FRHIDepthStencilState *)
        &TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
         ::StaticResource.StateRHI) {
      TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
      ::StaticResource.StateRHI.Reference = (FRHIDepthStencilState *)(TVar1.Reference)->_padding_;
      (TVar1.Reference)->_padding_ = 0;
      if (this.Reference != (FRHIDepthStencilState *)0x0) {
        FRHIResource::Release((FRHIResource *)this.Reference);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
      atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
             ::StaticResource__);
      return;
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 1413fa420

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHIRasterizerState> this;
  TRefCountPtr<FRHIRasterizerState> TVar1;
  FRHIResource *local_res8;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticRasterizerState__01_0A__0A__00__V__TRefCountPtr_VFRHIRasterizerState____PEAVFRHIRasterizerState____6B_
  ;
  TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
  ::StaticResource.StateRHI.Reference = (FRHIRasterizerState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    TVar1 = TStaticRasterizerState<2,0,0,1>::CreateRHI();
    this = TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
           ::StaticResource.StateRHI;
    if (TVar1.Reference !=
        (FRHIRasterizerState *)
        &TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
         ::StaticResource.StateRHI) {
                    /* WARNING: Load size is inaccurate */
      TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
      ::StaticResource.StateRHI.Reference = *TVar1.Reference;
      *(undefined8 *)TVar1.Reference = 0;
      if (this.Reference != (FRHIRasterizerState *)0x0) {
        FRHIResource::Release((FRHIResource *)this.Reference);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
      atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
             ::StaticResource__);
      return;
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 1413fa4e0

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

// ToolTipMetaDataKey'' @ 1413fa5a0

void __cdecl
`dynamic_initializer_for_'UMovieJobVariableAssignmentContainer::ToolTipMetaDataKey__(void)

{
  ::FName::FName(&UMovieJobVariableAssignmentContainer::ToolTipMetaDataKey,L"ToolTip");
  return;
}

// TransformGroupName'' @ 1413fa5c0

void __cdecl `dynamic_initializer_for_'FDataflowTransformSelection::TransformGroupName__(void)

{
  ::FName::FName(&FDataflowTransformSelection::TransformGroupName,"Transform");
  return;
}

// TypeName'' @ 1413fa5e0

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<signed_char>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<signed_char>::TypeName,L"int8");
  return;
}

// TypeName'' @ 1413fa600

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<unsigned_char>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<unsigned_char>::TypeName,L"uint8");
  return;
}

// TypeName'' @ 1413fa620

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<short>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<short>::TypeName,L"int16");
  return;
}

// TypeName'' @ 1413fa640

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<unsigned_short>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<unsigned_short>::TypeName,L"uint16");
  return;
}

// TypeName'' @ 1413fa660

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<int>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<int>::TypeName,L"int32");
  return;
}

// TypeName'' @ 1413fa680

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<unsigned_int>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<unsigned_int>::TypeName,L"uint32");
  return;
}

// TypeName'' @ 1413fa6a0

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<float>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<float>::TypeName,L"float");
  return;
}

// TypeName'' @ 1413fa6c0

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<double>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<double>::TypeName,L"double");
  return;
}

// TypeName'' @ 1413fa6e0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TIntPoint<int>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TIntPoint<int>_>::TypeName,L"FIntPoint");
  return;
}

// TypeName'' @ 1413fa700

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TIntVector3<int>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TIntVector3<int>_>::TypeName,L"FIntVector3");
  return;
}

// TypeName'' @ 1413fa720

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TIntVector4<int>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TIntVector4<int>_>::TypeName,L"FIntVector4");
  return;
}

// TypeName'' @ 1413fa740

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TObjectPtr<UObject>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TObjectPtr<UObject>_>::TypeName,L"TObjectPtr<UObject>");
  return;
}

// TypeName'' @ 1413fa760

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TQuat<float>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TQuat<float>_>::TypeName,L"FQuat4f");
  return;
}

// TypeName'' @ 1413fa780

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TQuat<double>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TQuat<double>_>::TypeName,L"FQuat");
  return;
}

// TypeName'' @ 1413fa7a0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TRotator<double>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TRotator<double>_>::TypeName,L"FRotator");
  return;
}

// TypeName'' @ 1413fa7c0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TTransform<double>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TTransform<double>_>::TypeName,L"FTransform");
  return;
}

// TypeName'' @ 1413fa7e0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TVector2<float>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TVector2<float>_>::TypeName,L"FVector2f");
  return;
}

// TypeName'' @ 1413fa800

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TVector2<double>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TVector2<double>_>::TypeName,L"FVector2D");
  return;
}

// TypeName'' @ 1413fa820

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TVector4<float>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TVector4<float>_>::TypeName,L"FVector4f");
  return;
}

// TypeName'' @ 1413fa840

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TVector4<double>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TVector4<double>_>::TypeName,L"FVector4");
  return;
}

// TypeName'' @ 1413fa860

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TVector<float>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TVector<float>_>::TypeName,L"FVector3f");
  return;
}

// TypeName'' @ 1413fa880

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TVector<double>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TVector<double>_>::TypeName,L"FVector");
  return;
}

// TypeName'' @ 1413fa8a0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<FDataflowCurveSelection>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FDataflowCurveSelection>::TypeName,
                 L"FDataflowCurveSelection");
  return;
}

// TypeName'' @ 1413fa8c0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<FDataflowFaceSelection>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FDataflowFaceSelection>::TypeName,
                 L"FDataflowFaceSelection");
  return;
}

// TypeName'' @ 1413fa8e0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<FDataflowGeometrySelection>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FDataflowGeometrySelection>::TypeName,
                 L"FDataflowGeometrySelection");
  return;
}

// TypeName'' @ 1413fa900

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<FDataflowMaterialSelection>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FDataflowMaterialSelection>::TypeName,
                 L"FDataflowMaterialSelection");
  return;
}

// TypeName'' @ 1413fa920

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<FDataflowTransformSelection>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FDataflowTransformSelection>::TypeName,
                 L"FDataflowTransformSelection");
  return;
}

// TypeName'' @ 1413fa940

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<FDataflowVertexSelection>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FDataflowVertexSelection>::TypeName,
                 L"FDataflowVertexSelection");
  return;
}

// TypeName'' @ 1413fa960

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<FLinearColor>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FLinearColor>::TypeName,L"FLinearColor");
  return;
}

// TypeName'' @ 1413fa980

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<signed_char,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<signed_char,TSizedDefaultAllocator<32>_>_>::
                  TypeName,L"TArray<int8>");
  return;
}

// TypeName'' @ 1413fa9a0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>::
                  TypeName,L"TArray<uint8>");
  return;
}

// TypeName'' @ 1413fa9c0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<short,TSizedDefaultAllocator<32>_>_>::
TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<short,TSizedDefaultAllocator<32>_>_>::TypeName,
                 L"TArray<int16>");
  return;
}

// TypeName'' @ 1413fa9e0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>::
                  TypeName,L"TArray<uint16>");
  return;
}

// TypeName'' @ 1413faa00

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<int,TSizedDefaultAllocator<32>_>_>::
TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<int,TSizedDefaultAllocator<32>_>_>::TypeName,
                 L"TArray<int32>");
  return;
}

// TypeName'' @ 1413faa20

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>::
                  TypeName,L"TArray<uint32>");
  return;
}

// TypeName'' @ 1413faa40

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<float,TSizedDefaultAllocator<32>_>_>::
TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<float,TSizedDefaultAllocator<32>_>_>::TypeName,
                 L"TArray<float>");
  return;
}

// TypeName'' @ 1413faa60

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<double,TSizedDefaultAllocator<32>_>_>::
TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<double,TSizedDefaultAllocator<32>_>_>::TypeName,
                 L"TArray<double>");
  return;
}

// TypeName'' @ 1413faa80

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FIntPoint>");
  return;
}

// TypeName'' @ 1413faaa0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FIntVector3>");
  return;
}

// TypeName'' @ 1413faac0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FIntVector4>");
  return;
}

// TypeName'' @ 1413faae0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FQuat4f>");
  return;
}

// TypeName'' @ 1413fab00

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FQuat>");
  return;
}

// TypeName'' @ 1413fab20

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FRotator>");
  return;
}

// TypeName'' @ 1413fab40

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FVector2f>");
  return;
}

// TypeName'' @ 1413fab60

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FVector2D>");
  return;
}

// TypeName'' @ 1413fab80

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FVector4f>");
  return;
}

// TypeName'' @ 1413faba0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FVector4>");
  return;
}

// TypeName'' @ 1413fabc0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FVector3f>");
  return;
}

// TypeName'' @ 1413fabe0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FVector>");
  return;
}

// TypeName'' @ 1413fac00

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>::
                  TypeName,L"TArray<FLinearColor>");
  return;
}

// TypeName'' @ 1413fac20

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<FName,TSizedDefaultAllocator<32>_>_>::
TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<FName,TSizedDefaultAllocator<32>_>_>::TypeName,
                 L"TArray<FName>");
  return;
}

// TypeName'' @ 1413fac40

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<FString,TSizedDefaultAllocator<32>_>_>::
TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<FString,TSizedDefaultAllocator<32>_>_>::TypeName,
                 L"TArray<FString>");
  return;
}

// TypeName'' @ 1413fac60

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<__int64,TSizedDefaultAllocator<32>_>_>::
TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<__int64,TSizedDefaultAllocator<32>_>_>::TypeName,
                 L"TArray<int64>");
  return;
}

// TypeName'' @ 1413fac80

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>::
                  TypeName,L"TArray<uint64>");
  return;
}

// TypeName'' @ 1413faca0

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<FName>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FName>::TypeName,L"FName");
  return;
}

// TypeName'' @ 1413facc0

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<FString>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FString>::TypeName,L"FString");
  return;
}

// TypeName'' @ 1413face0

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<FText>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FText>::TypeName,L"FText");
  return;
}

// TypeName'' @ 1413fad00

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<__int64>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<__int64>::TypeName,L"int64");
  return;
}

// TypeName'' @ 1413fad20

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<unsigned___int64>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<unsigned___int64>::TypeName,L"uint64");
  return;
}

// TypeName'' @ 1413fad40

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<bool>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<bool>::TypeName,L"bool");
  return;
}

// VariableGuidMetaDataKey'' @ 1413fad60

void __cdecl
`dynamic_initializer_for_'UMovieJobVariableAssignmentContainer::VariableGuidMetaDataKey__(void)

{
  ::FName::FName(&UMovieJobVariableAssignmentContainer::VariableGuidMetaDataKey,L"VariableGUID");
  return;
}

// VerticesGroupName'' @ 1413fad80

void __cdecl `dynamic_initializer_for_'FDataflowVertexSelection::VerticesGroupName__(void)

{
  ::FName::FName(&FDataflowVertexSelection::VerticesGroupName,"Vertices");
  return;
}

// `dynamic_initializer_for_'CVarMoviePipelineAlphaOutputOverride'' @ 1413fada0

void __cdecl _dynamic_initializer_for__CVarMoviePipelineAlphaOutputOverride__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarMoviePipelineAlphaOutputOverride,L"MoviePipeline.AlphaOutputOverride",local_res8,
             L"Always overrides the \"Alpha Output\" renderer project setting by controlling r.PostProcessing.PropagateAlpha during movie pipeline renders.\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarMoviePipelineAlphaOutputOverride__);
  return;
}

// `dynamic_initializer_for_'CVarMoviePipelineDisableMaxResolutionCheck'' @ 1413fadf0

void __cdecl _dynamic_initializer_for__CVarMoviePipelineDisableMaxResolutionCheck__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarMoviePipelineDisableMaxResolutionCheck,L"MoviePipeline.DisableMaxResolutionCheck",
             local_res8,
             L"When true, the Movie Pipeline will not consider an output resolution higher than the maximum texture size an error. When using high resolution tiles the system can calculate the size of an individual tile to correctly detect an overly large render, but when using panoramic renders the system cannot, artificially limiting the resolution to 16k. Set this true to disable the check, with the understanding that user settings can then choose crash-inducing values."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarMoviePipelineDisableMaxResolutionCheck__);
  return;
}

// `dynamic_initializer_for_'CVarMoviePipelineDisableShaderFlushing'' @ 1413fae40

void __cdecl _dynamic_initializer_for__CVarMoviePipelineDisableShaderFlushing__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarMoviePipelineDisableShaderFlushing,L"MoviePipeline.DisableShaderFlushingDebug",
             local_res8,
             L"If true, the Movie Pipeline won\'t wait for any outstanding shader or asset compilation.If false (default), any outstanding shaders and assets will be flushed each frame before rendering.If true, rendered frames may be missing objects (meshes, particles, etc.) or objects may show the default checkerboard material."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarMoviePipelineDisableShaderFlushing__);
  return;
}

// `dynamic_initializer_for_'CVarMoviePipelinePanoramicMaxPoolsPerFrame'' @ 1413fae90

void __cdecl _dynamic_initializer_for__CVarMoviePipelinePanoramicMaxPoolsPerFrame__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 4;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMoviePipelinePanoramicMaxPoolsPerFrame,
             L"MoviePipeline.Panoramic.MaxConcurrentBlendingPoolCount",local_res8,
             L"When blending panoramic images, this determines the maximum number of concurrent blending pools. A larger number may result in better CPU usage, but can come at a significant cost to CPU memory. Lowering this value can reduce the amount of memory needed for panoramic blending, but will result in blending taking longer."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarMoviePipelinePanoramicMaxPoolsPerFrame__);
  return;
}

// `dynamic_initializer_for_'CVarMoviePipelineThrottleFrameCount'' @ 1413faee0

void __cdecl _dynamic_initializer_for__CVarMoviePipelineThrottleFrameCount__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 2;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMoviePipelineThrottleFrameCount,L"MoviePipeline.ThrottleFrameCount",local_res8,
             L"Number of rendered frames that can be submitted to the rendering thread before waiting. A value of 0 will allow the CPU to submit all work without waiting on the GPU.\nThe default value of 2 tries to balance between performance and memory usage. The maximum value is 4.\nThis option only applies to path traced renders, as deferred rendering is synchronized through pixel readbacks.\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarMoviePipelineThrottleFrameCount__);
  return;
}

// `dynamic_initializer_for_'CVarMoviePipelineVTNaniteAutoLOD'' @ 1413faf30

void __cdecl _dynamic_initializer_for__CVarMoviePipelineVTNaniteAutoLOD__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMoviePipelineVTNaniteAutoLOD,L"MoviePipeline.EnableVTInvalidateOnNaniteLOD",
             local_res8,
             L"If true, the Movie Pipeline Game Overrides will automatically apply \'r.Nanite.VSMInvalidateOnLODDelta\' during renders.\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarMoviePipelineVTNaniteAutoLOD__);
  return;
}

// `dynamic_initializer_for_'ErrorNamespace'' @ 1413faf80

void __cdecl EHttpResponseCodes::_dynamic_initializer_for__ErrorNamespace__(void)

{
  ::FString::FString(&ErrorNamespace,L"errors.com.epicgames.httpresponse");
  atexit(_dynamic_atexit_destructor_for__ErrorNamespace__);
  return;
}

// `dynamic_initializer_for_'GRegisterMovieRenderPipelineCoreObjectVersion'' @ 1413fafb0

void __cdecl _dynamic_initializer_for__GRegisterMovieRenderPipelineCoreObjectVersion__(void)

{
  FGuid local_18;
  
  local_18 = FMovieRenderPipelineCoreObjectVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_18,1,L"MovieRenderPipelineCoreObjectVersion",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  atexit(_dynamic_atexit_destructor_for__GRegisterMovieRenderPipelineCoreObjectVersion__);
  return;
}

// `dynamic_initializer_for_'HttpVersion'' @ 1413faff0

void __cdecl HttpRequestOptions::_dynamic_initializer_for__HttpVersion__(void)

{
  ::FName::FName(&HttpVersion,"HttpVersion");
  return;
}

// `dynamic_initializer_for_'LogMovieRenderPipeline'' @ 1413fb010

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogMovieRenderPipeline__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogMovieRenderPipeline,L"LogMovieRenderPipeline",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogMovieRenderPipeline__);
  return;
}

// `dynamic_initializer_for_'LogMovieRenderPipelineIO'' @ 1413fb050

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogMovieRenderPipelineIO__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogMovieRenderPipelineIO,L"LogMovieRenderPipelineIO",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogMovieRenderPipelineIO__);
  return;
}

// `dynamic_initializer_for_'ModuleName'' @ 1413fb090

void __cdecl AssetRegistryConstants::_dynamic_initializer_for__ModuleName__(void)

{
  ::FName::FName(&ModuleName,"AssetRegistry");
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantMovieRenderPipelineCore'' @ 1413fb0b0

void __cdecl _dynamic_initializer_for__ModuleRegistrantMovieRenderPipelineCore__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "MovieRenderPipelineCore";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"MovieRenderPipelineCore",0x17);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FMovieRenderPipelineCoreModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'NAME_UMoviePipelineExecutorJob_GetStatusMessage'' @ 1413fb100

void __cdecl _dynamic_initializer_for__NAME_UMoviePipelineExecutorJob_GetStatusMessage__(void)

{
  FName::FName(&NAME_UMoviePipelineExecutorJob_GetStatusMessage,L"GetStatusMessage");
  return;
}

// `dynamic_initializer_for_'NAME_UMoviePipelineExecutorJob_GetStatusProgress'' @ 1413fb120

void __cdecl _dynamic_initializer_for__NAME_UMoviePipelineExecutorJob_GetStatusProgress__(void)

{
  FName::FName(&NAME_UMoviePipelineExecutorJob_GetStatusProgress,L"GetStatusProgress");
  return;
}

// `dynamic_initializer_for_'NAME_UMoviePipelineExecutorJob_IsConsumed'' @ 1413fb140

void __cdecl _dynamic_initializer_for__NAME_UMoviePipelineExecutorJob_IsConsumed__(void)

{
  FName::FName(&NAME_UMoviePipelineExecutorJob_IsConsumed,L"IsConsumed");
  return;
}

// `dynamic_initializer_for_'NAME_UMoviePipelineExecutorJob_IsEnabled'' @ 1413fb160

void __cdecl _dynamic_initializer_for__NAME_UMoviePipelineExecutorJob_IsEnabled__(void)

{
  FName::FName(&NAME_UMoviePipelineExecutorJob_IsEnabled,L"IsEnabled");
  return;
}

// `dynamic_initializer_for_'NAME_UMoviePipelineExecutorJob_OnDuplicated'' @ 1413fb180

void __cdecl _dynamic_initializer_for__NAME_UMoviePipelineExecutorJob_OnDuplicated__(void)

{
  FName::FName(&NAME_UMoviePipelineExecutorJob_OnDuplicated,L"OnDuplicated");
  return;
}

// `dynamic_initializer_for_'NAME_UMoviePipelineExecutorJob_SetConsumed'' @ 1413fb1a0

void __cdecl _dynamic_initializer_for__NAME_UMoviePipelineExecutorJob_SetConsumed__(void)

{
  FName::FName(&NAME_UMoviePipelineExecutorJob_SetConsumed,L"SetConsumed");
  return;
}

// `dynamic_initializer_for_'NAME_UMoviePipelineExecutorJob_SetIsEnabled'' @ 1413fb1c0

void __cdecl _dynamic_initializer_for__NAME_UMoviePipelineExecutorJob_SetIsEnabled__(void)

{
  FName::FName(&NAME_UMoviePipelineExecutorJob_SetIsEnabled,L"SetIsEnabled");
  return;
}

// `dynamic_initializer_for_'NAME_UMoviePipelineExecutorJob_SetStatusMessage'' @ 1413fb1e0

void __cdecl _dynamic_initializer_for__NAME_UMoviePipelineExecutorJob_SetStatusMessage__(void)

{
  FName::FName(&NAME_UMoviePipelineExecutorJob_SetStatusMessage,L"SetStatusMessage");
  return;
}

// `dynamic_initializer_for_'NAME_UMoviePipelineExecutorJob_SetStatusProgress'' @ 1413fb200

void __cdecl _dynamic_initializer_for__NAME_UMoviePipelineExecutorJob_SetStatusProgress__(void)

{
  FName::FName(&NAME_UMoviePipelineExecutorJob_SetStatusProgress,L"SetStatusProgress");
  return;
}

// `dynamic_initializer_for_'NAME_UMoviePipelineExecutorShot_GetStatusMessage'' @ 1413fb220

void __cdecl _dynamic_initializer_for__NAME_UMoviePipelineExecutorShot_GetStatusMessage__(void)

{
  FName::FName(&NAME_UMoviePipelineExecutorShot_GetStatusMessage,L"GetStatusMessage");
  return;
}

// `dynamic_initializer_for_'NAME_UMoviePipelineExecutorShot_GetStatusProgress'' @ 1413fb240

void __cdecl _dynamic_initializer_for__NAME_UMoviePipelineExecutorShot_GetStatusProgress__(void)

{
  FName::FName(&NAME_UMoviePipelineExecutorShot_GetStatusProgress,L"GetStatusProgress");
  return;
}

// `dynamic_initializer_for_'NAME_UMoviePipelineExecutorShot_SetStatusMessage'' @ 1413fb260

void __cdecl _dynamic_initializer_for__NAME_UMoviePipelineExecutorShot_SetStatusMessage__(void)

{
  FName::FName(&NAME_UMoviePipelineExecutorShot_SetStatusMessage,L"SetStatusMessage");
  return;
}

// `dynamic_initializer_for_'NAME_UMoviePipelineExecutorShot_SetStatusProgress'' @ 1413fb280

void __cdecl _dynamic_initializer_for__NAME_UMoviePipelineExecutorShot_SetStatusProgress__(void)

{
  FName::FName(&NAME_UMoviePipelineExecutorShot_SetStatusProgress,L"SetStatusProgress");
  return;
}

// `dynamic_initializer_for_'NAME_UMoviePipelinePythonHostExecutor_ExecuteDelayed'' @ 1413fb2a0

void __cdecl _dynamic_initializer_for__NAME_UMoviePipelinePythonHostExecutor_ExecuteDelayed__(void)

{
  FName::FName(&NAME_UMoviePipelinePythonHostExecutor_ExecuteDelayed,L"ExecuteDelayed");
  return;
}

// `dynamic_initializer_for_'NAME_UMoviePipelinePythonHostExecutor_OnMapLoad'' @ 1413fb2c0

void __cdecl _dynamic_initializer_for__NAME_UMoviePipelinePythonHostExecutor_OnMapLoad__(void)

{
  FName::FName(&NAME_UMoviePipelinePythonHostExecutor_OnMapLoad,L"OnMapLoad");
  return;
}

// `dynamic_initializer_for_'NAME_UMoviePipelineSetting_BlueprintBase_OnEngineTickBeginFrame'' @ 1413fb2e0

void __cdecl
_dynamic_initializer_for__NAME_UMoviePipelineSetting_BlueprintBase_OnEngineTickBeginFrame__(void)

{
  FName::FName(&NAME_UMoviePipelineSetting_BlueprintBase_OnEngineTickBeginFrame,
               L"OnEngineTickBeginFrame");
  return;
}

// `dynamic_initializer_for_'NAME_UMoviePipelineSetting_BlueprintBase_ReceiveGetFormatArguments'' @ 1413fb300

void __cdecl
_dynamic_initializer_for__NAME_UMoviePipelineSetting_BlueprintBase_ReceiveGetFormatArguments__(void)

{
  FName::FName(&NAME_UMoviePipelineSetting_BlueprintBase_ReceiveGetFormatArguments,
               L"ReceiveGetFormatArguments");
  return;
}

// `dynamic_initializer_for_'NAME_UMoviePipelineSetting_BlueprintBase_ReceiveSetupForPipelineImpl'' @ 1413fb320

void __cdecl
_dynamic_initializer_for__NAME_UMoviePipelineSetting_BlueprintBase_ReceiveSetupForPipelineImpl__
          (void)

{
  FName::FName(&NAME_UMoviePipelineSetting_BlueprintBase_ReceiveSetupForPipelineImpl,
               L"ReceiveSetupForPipelineImpl");
  return;
}

// `dynamic_initializer_for_'NAME_UMoviePipelineSetting_BlueprintBase_ReceiveTeardownForPipelineImpl'' @ 1413fb340

void __cdecl
_dynamic_initializer_for__NAME_UMoviePipelineSetting_BlueprintBase_ReceiveTeardownForPipelineImpl__
          (void)

{
  FName::FName(&NAME_UMoviePipelineSetting_BlueprintBase_ReceiveTeardownForPipelineImpl,
               L"ReceiveTeardownForPipelineImpl");
  return;
}

// `dynamic_initializer_for_'RequestMode'' @ 1413fb360

void __cdecl HttpRequestOptions::_dynamic_initializer_for__RequestMode__(void)

{
  ::FName::FName(&RequestMode,"RequestMode");
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_PersistentData_Access'' @ 1413fb380

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneEval_PersistentData_Access__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_PersistentData_Access ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_PersistentData_Access>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneEval_PersistentData_Access");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_PersistentData_Access,*pFVar1,
               L"Persistent Data Access","STATGROUP_MovieSceneEval","STATCAT_Advanced",
               L"Movie Scene Evaluation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AccumulatePixelData'' @ 1413fb410

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AccumulatePixelData__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AccumulatePixelData == (FThreadSafeStaticStat<FStat_STAT_AccumulatePixelData>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_AccumulatePixelData");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AccumulatePixelData,*pFVar1,
               L"OverlapAccumulator_AccumulatePixelData","STATGROUP_MoviePipeline",
               "STATCAT_Advanced",L"MovieRenderPipeline",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AccumulateSinglePlane'' @ 1413fb4a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AccumulateSinglePlane__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AccumulateSinglePlane ==
      (FThreadSafeStaticStat<FStat_STAT_AccumulateSinglePlane>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AccumulateSinglePlane");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AccumulateSinglePlane,*pFVar1,
               L"OverlapAccumulator_AccumulateSinglePlane","STATGROUP_MoviePipeline",
               "STATCAT_Advanced",L"MovieRenderPipeline",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ClothSubstepAdjust'' @ 1413fb530

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::MoviePipeline::_dynamic_initializer_for__StatPtr_STAT_ClothSubstepAdjust__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ClothSubstepAdjust ==
      (FThreadSafeStaticStat<UE::MoviePipeline::FStat_STAT_ClothSubstepAdjust>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_ClothSubstepAdjust");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ClothSubstepAdjust,*pFVar1,
               L"STAT_MoviePipeline_ClothAdjust","STATGROUP_MoviePipeline","STATCAT_Advanced",
               L"MovieRenderPipeline",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_CreateWidget'' @ 1413fb5c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_CreateWidget__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_CreateWidget == (FThreadSafeStaticStat<FStat_STAT_CreateWidget>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_CreateWidget");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CreateWidget,*pFVar1,L"UserWidget Create",
               "STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FetchFinalPixelData16bit'' @ 1413fb650

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FetchFinalPixelData16bit__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FetchFinalPixelData16bit ==
      (FThreadSafeStaticStat<FStat_STAT_FetchFinalPixelData16bit>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FetchFinalPixelData16bit");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FetchFinalPixelData16bit,*pFVar1,
               L"OverlapAccumulator_FetchPixelData16","STATGROUP_MoviePipeline","STATCAT_Advanced",
               L"MovieRenderPipeline",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FetchFinalPixelData32bit'' @ 1413fb6e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FetchFinalPixelData32bit__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FetchFinalPixelData32bit ==
      (FThreadSafeStaticStat<FStat_STAT_FetchFinalPixelData32bit>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FetchFinalPixelData32bit");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FetchFinalPixelData32bit,*pFVar1,
               L"OverlapAccumulator_FetchPixelData32","STATGROUP_MoviePipeline","STATCAT_Advanced",
               L"MovieRenderPipeline",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FetchFinalPixelData8bit'' @ 1413fb770

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FetchFinalPixelData8bit__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FetchFinalPixelData8bit ==
      (FThreadSafeStaticStat<FStat_STAT_FetchFinalPixelData8bit>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FetchFinalPixelData8bit");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FetchFinalPixelData8bit,*pFVar1,
               L"OverlapAccumulator_FetchPixelData8","STATGROUP_MoviePipeline","STATCAT_Advanced",
               L"MovieRenderPipeline",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FetchFullImageValue'' @ 1413fb800

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FetchFullImageValue__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FetchFullImageValue == (FThreadSafeStaticStat<FStat_STAT_FetchFullImageValue>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_FetchFullImageValue");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FetchFullImageValue,*pFVar1,
               L"OverlapAccumulator_FetchFull","STATGROUP_MoviePipeline","STATCAT_Advanced",
               L"MovieRenderPipeline",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_HardwareMetadata'' @ 1413fb890

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::MoviePipeline::_dynamic_initializer_for__StatPtr_STAT_HardwareMetadata__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_HardwareMetadata ==
      (FThreadSafeStaticStat<UE::MoviePipeline::FStat_STAT_HardwareMetadata>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_HardwareMetadata");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_HardwareMetadata,*pFVar1,
               L"STAT_MoviePipeline_HardwareMetadata","STATGROUP_MoviePipeline","STATCAT_Advanced",
               L"MovieRenderPipeline",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ImageQuantization'' @ 1413fb920

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::MoviePipeline::_dynamic_initializer_for__StatPtr_STAT_ImageQuantization__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ImageQuantization ==
      (FThreadSafeStaticStat<UE::MoviePipeline::FStat_STAT_ImageQuantization>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_ImageQuantization");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ImageQuantization,*pFVar1,
               L"STAT_MoviePipeline_ImageQuantization","STATGROUP_MoviePipeline","STATCAT_Advanced",
               L"MovieRenderPipeline",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_InitMemory'' @ 1413fb9b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_InitMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_InitMemory == (FThreadSafeStaticStat<FStat_STAT_InitMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_InitMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InitMemory,*pFVar1,
               L"OverlapAccumulator_InitMemory","STATGROUP_MoviePipeline","STATCAT_Advanced",
               L"MovieRenderPipeline",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MoviePipeline_PanoBlend'' @ 1413fba40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MoviePipeline::_dynamic_initializer_for__StatPtr_STAT_MoviePipeline_PanoBlend__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MoviePipeline_PanoBlend ==
      (FThreadSafeStaticStat<UE::MoviePipeline::FStat_STAT_MoviePipeline_PanoBlend>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_MoviePipeline_PanoBlend");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MoviePipeline_PanoBlend,*pFVar1,
               L"STAT_MoviePipeline_PanoBlend","STATGROUP_MoviePipeline","STATCAT_Advanced",
               L"MovieRenderPipeline",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MoviePipeline_PanoBlendActual'' @ 1413fbad0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MoviePipeline::_dynamic_initializer_for__StatPtr_STAT_MoviePipeline_PanoBlendActual__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MoviePipeline_PanoBlendActual ==
      (FThreadSafeStaticStat<UE::MoviePipeline::FStat_STAT_MoviePipeline_PanoBlendActual>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_MoviePipeline_PanoBlendActual");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MoviePipeline_PanoBlendActual,*pFVar1,
               L"STAT_MoviePipeline_PanoBlendActual","STATGROUP_MoviePipeline","STATCAT_Advanced",
               L"MovieRenderPipeline",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MoviePipeline_PanoBlendJoin'' @ 1413fbb60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MoviePipeline::_dynamic_initializer_for__StatPtr_STAT_MoviePipeline_PanoBlendJoin__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MoviePipeline_PanoBlendJoin ==
      (FThreadSafeStaticStat<UE::MoviePipeline::FStat_STAT_MoviePipeline_PanoBlendJoin>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_MoviePipeline_PanoBlendJoin");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MoviePipeline_PanoBlendJoin,*pFVar1,
               L"STAT_MoviePipeline_PanoBlendJoin","STATGROUP_MoviePipeline","STATCAT_Advanced",
               L"MovieRenderPipeline",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MoviePipeline_SurfaceReadback'' @ 1413fbbf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MoviePipeline_SurfaceReadback__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MoviePipeline_SurfaceReadback ==
      (FThreadSafeStaticStat<FStat_STAT_MoviePipeline_SurfaceReadback>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MoviePipeline_SurfaceReadback");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MoviePipeline_SurfaceReadback,*pFVar1,
               L"STAT_MoviePipeline_SurfaceReadback","STATGROUP_MoviePipeline","STATCAT_Advanced",
               L"MovieRenderPipeline",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SampleReadback'' @ 1413fbc80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SampleReadback__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SampleReadback == (FThreadSafeStaticStat<FStat_STAT_SampleReadback>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SampleReadback");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SampleReadback,*pFVar1,
               L"MoviePipeline_SampleReadback","STATGROUP_MoviePipeline","STATCAT_Advanced",
               L"MovieRenderPipeline",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ZeroPlanes'' @ 1413fbd10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ZeroPlanes__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ZeroPlanes == (FThreadSafeStaticStat<FStat_STAT_ZeroPlanes>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ZeroPlanes");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ZeroPlanes,*pFVar1,
               L"OverlapAccumulator_ZeroPlanes","STATGROUP_MoviePipeline","STATCAT_Advanced",
               L"MovieRenderPipeline",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'UnixSocketPath'' @ 1413fbda0

void __cdecl HttpRequestOptions::_dynamic_initializer_for__UnixSocketPath__(void)

{
  ::FName::FName(&UnixSocketPath,"UnixSocketPath");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphValueContainer_h__Script_MovieRenderPipelineCore_3874221282'' @ 1413fbdc0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphValueContainer_h__Script_MovieRenderPipelineCore_3874221282__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphValueContainer_h__Script_MovieRenderPipelineCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineFCPXMLExporterSetting_h__Script_MovieRenderPipelineCore_3420804692'' @ 1413fbe00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineFCPXMLExporterSetting_h__Script_MovieRenderPipelineCore_3420804692__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineFCPXMLExporterSetting_h__Script_MovieRenderPipelineCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineFCPXMLExporterSetting_h__Script_MovieRenderPipelineCore_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineGameOverrideSetting_h__Script_MovieRenderPipelineCore_3874731800'' @ 1413fbe50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineGameOverrideSetting_h__Script_MovieRenderPipelineCore_3874731800__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineGameOverrideSetting_h__Script_MovieRenderPipelineCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineGameOverrideSetting_h__Script_MovieRenderPipelineCore_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineInProcessExecutor_h__Script_MovieRenderPipelineCore_100970891'' @ 1413fbea0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineInProcessExecutor_h__Script_MovieRenderPipelineCore_100970891__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineInProcessExecutor_h__Script_MovieRenderPipelineCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineLinearExecutor_h__Script_MovieRenderPipelineCore_1994467529'' @ 1413fbee0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineLinearExecutor_h__Script_MovieRenderPipelineCore_1994467529__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineLinearExecutor_h__Script_MovieRenderPipelineCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineOutputSetting_h__Script_MovieRenderPipelineCore_2658198114'' @ 1413fbf20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineOutputSetting_h__Script_MovieRenderPipelineCore_2658198114__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineOutputSetting_h__Script_MovieRenderPipelineCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePanoramicBlenderBase_h__Script_MovieRenderPipelineCore_3519740508'' @ 1413fbf60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePanoramicBlenderBase_h__Script_MovieRenderPipelineCore_3519740508__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineCore",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePanoramicBlenderBase_h__Script_MovieRenderPipelineCore_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePostRenderSettings_h__Script_MovieRenderPipelineCore_4222822383'' @ 1413fbfb0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePostRenderSettings_h__Script_MovieRenderPipelineCore_4222822383__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePostRenderSettings_h__Script_MovieRenderPipelineCore_Statics
             ::ScriptStructInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePostRenderSettings_h__Script_MovieRenderPipelineCore_Statics
             ::EnumInfo,6);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePrimaryConfig_h__Script_MovieRenderPipelineCore_3530180000'' @ 1413fc000

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePrimaryConfig_h__Script_MovieRenderPipelineCore_3530180000__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePrimaryConfig_h__Script_MovieRenderPipelineCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePythonHostExecutor_h__Script_MovieRenderPipelineCore_731300684'' @ 1413fc040

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePythonHostExecutor_h__Script_MovieRenderPipelineCore_731300684__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePythonHostExecutor_h__Script_MovieRenderPipelineCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueueEngineSubsystem_h__Script_MovieRenderPipelineCore_819151746'' @ 1413fc080

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueueEngineSubsystem_h__Script_MovieRenderPipelineCore_819151746__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueueEngineSubsystem_h__Script_MovieRenderPipelineCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h__Script_MovieRenderPipelineCore_2864215443'' @ 1413fc0c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h__Script_MovieRenderPipelineCore_2864215443__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h__Script_MovieRenderPipelineCore_Statics
             ::ClassInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h__Script_MovieRenderPipelineCore_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineSettingBlueprintBase_h__Script_MovieRenderPipelineCore_2233165318'' @ 1413fc110

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineSettingBlueprintBase_h__Script_MovieRenderPipelineCore_2233165318__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineSettingBlueprintBase_h__Script_MovieRenderPipelineCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineSetting_h__Script_MovieRenderPipelineCore_1327359528'' @ 1413fc150

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineSetting_h__Script_MovieRenderPipelineCore_1327359528__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineSetting_h__Script_MovieRenderPipelineCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineShotConfig_h__Script_MovieRenderPipelineCore_2730739743'' @ 1413fc190

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineShotConfig_h__Script_MovieRenderPipelineCore_2730739743__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineShotConfig_h__Script_MovieRenderPipelineCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineVideoOutputBase_h__Script_MovieRenderPipelineCore_1812458685'' @ 1413fc1d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineVideoOutputBase_h__Script_MovieRenderPipelineCore_1812458685__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineVideoOutputBase_h__Script_MovieRenderPipelineCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieRenderPipelineDataTypes_h__Script_MovieRenderPipelineCore_3516454475'' @ 1413fc210

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieRenderPipelineDataTypes_h__Script_MovieRenderPipelineCore_3516454475__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieRenderPipelineDataTypes_h__Script_MovieRenderPipelineCore_Statics
             ::ScriptStructInfo,9,
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieRenderPipelineDataTypes_h__Script_MovieRenderPipelineCore_Statics
             ::EnumInfo,3);
  return;
}

// Z_Construct_UClass_UMovieGraphValueContainer @ 14dd5ade0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphValueContainer(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphValueContainer.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphValueContainer.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphValueContainer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphValueContainer.OuterSingleton;
}

// NewProp_bOutValue_SetBit @ 14dd5ae20

void __cdecl
Z_Construct_UFunction_UMovieGraphValueContainer_GetValueBool_Statics::NewProp_bOutValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14dd5ae30

void __cdecl
Z_Construct_UFunction_UMovieGraphValueContainer_GetValueBool_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphValueContainer_GetValueBool @ 14dd5ae40

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphValueContainer_GetValueBool(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphValueContainer_GetValueBool_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14dd5ae80

void __cdecl
Z_Construct_UFunction_UMovieGraphValueContainer_GetValueByte_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphValueContainer_GetValueByte @ 14dd5ae90

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphValueContainer_GetValueByte(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphValueContainer_GetValueByte_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14dd5aed0

void __cdecl
Z_Construct_UFunction_UMovieGraphValueContainer_GetValueClass_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphValueContainer_GetValueClass @ 14dd5aee0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphValueContainer_GetValueClass(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphValueContainer_GetValueClass_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMoviePipelineOutputSetting_NoRegister @ 14dd5af20

UClass * __cdecl Z_Construct_UClass_UMoviePipelineOutputSetting_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineOutputSetting.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineOutputSetting",
               &Z_Registration_Info_UClass_UMoviePipelineOutputSetting.InnerSingleton,
               UMoviePipelineOutputSetting::StaticRegisterNativesUMoviePipelineOutputSetting,0xb0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMoviePipelineOutputSetting>,
               InternalVTableHelperCtorCaller<UMoviePipelineOutputSetting>,local_res8,
               UMoviePipelineSetting::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineOutputSetting.InnerSingleton;
}

// Z_Construct_UClass_UMoviePipelineQueueEngineSubsystem @ 14dd5afe0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMoviePipelineQueueEngineSubsystem(void)

{
  if (Z_Registration_Info_UClass_UMoviePipelineQueueEngineSubsystem.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMoviePipelineQueueEngineSubsystem.OuterSingleton,
               &Z_Construct_UClass_UMoviePipelineQueueEngineSubsystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMoviePipelineQueueEngineSubsystem.OuterSingleton;
}

// Z_Construct_UScriptStruct_FMoviePipelinePassIdentifier @ 14dd5b180

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMoviePipelinePassIdentifier(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMoviePipelinePassIdentifier.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMoviePipelinePassIdentifier.InnerSingleton,
               &Z_Construct_UScriptStruct_FMoviePipelinePassIdentifier_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMoviePipelinePassIdentifier.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMoviePipelinePassIdentifier.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMoviePipelineRenderPassOutputData @ 14dd5b200

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMoviePipelineRenderPassOutputData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMoviePipelineRenderPassOutputData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMoviePipelineRenderPassOutputData.InnerSingleton,
               &Z_Construct_UScriptStruct_FMoviePipelineRenderPassOutputData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMoviePipelineRenderPassOutputData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMoviePipelineRenderPassOutputData.InnerSingleton;
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

// Z_Construct_UFunction_UMovieGraphValueContainer_GetValueContainerType @ 14dd5b280

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphValueContainer_GetValueContainerType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphValueContainer_GetValueContainerType_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FMoviePipelineShotOutputData @ 14dd5b2c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMoviePipelineShotOutputData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMoviePipelineShotOutputData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMoviePipelineShotOutputData.InnerSingleton,
               &Z_Construct_UScriptStruct_FMoviePipelineShotOutputData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMoviePipelineShotOutputData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMoviePipelineShotOutputData.InnerSingleton;
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

// Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_AllocateJob @ 14dd5b340

UFunction * __cdecl Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_AllocateJob(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_AllocateJob_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// EMovieRenderPipelineState_StaticEnum @ 14dd5b380

UEnum * __cdecl EMovieRenderPipelineState_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieRenderPipelineState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UEnum_EMovieRenderPipelineState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMovieRenderPipelineState,
                       (UObject *)pUVar1,L"EMovieRenderPipelineState");
  }
  return Z_Registration_Info_UEnum_EMovieRenderPipelineState.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 14dd5b470

void __cdecl
Z_Construct_UFunction_UMovieGraphValueContainer_GetValueDouble_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// EMovieRenderShotState_StaticEnum @ 14dd5b480

UEnum * __cdecl EMovieRenderShotState_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieRenderShotState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UEnum_EMovieRenderShotState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMovieRenderShotState,
                       (UObject *)pUVar1,L"EMovieRenderShotState");
  }
  return Z_Registration_Info_UEnum_EMovieRenderShotState.OuterSingleton;
}

// Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_GetActiveExecutor @ 14dd5b4c0

UFunction * __cdecl Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_GetActiveExecutor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_GetActiveExecutor_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphValueContainer_GetValueDouble @ 14dd5b500

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphValueContainer_GetValueDouble(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphValueContainer_GetValueDouble_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14dd5b540

void __cdecl
Z_Construct_UFunction_UMovieGraphValueContainer_GetValueEnum_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_GetQueue @ 14dd5b550

UFunction * __cdecl Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_GetQueue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_GetQueue_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14dd5b590

void * __cdecl Z_Construct_UScriptStruct_FMoviePipelinePassIdentifier_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMoviePipelinePassIdentifier,&UE::CoreUObject::Private::Construct<FMoviePipelinePassIdentifier>,&UE::CoreUObject::Private::ConstructForTests<FMoviePipelinePassIdentifier>,&UE::CoreUObject::Private::Destruct<FMoviePipelinePassIdentifier>,&UE::CoreUObject::Private::Copy<FMoviePipelinePassIdentifier>,&UE::CoreUObject::Private::GetStructTypeHash<FMoviePipelinePassIdentifier>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_ReturnValue_SetBit @ 14dd5b5d0

void __cdecl
Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_IsRendering_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphValueContainer_GetValueEnum @ 14dd5b5e0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphValueContainer_GetValueEnum(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphValueContainer_GetValueEnum_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_IsRendering @ 14dd5b620

UFunction * __cdecl Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_IsRendering(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_IsRendering_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14dd5b660

void __cdecl
Z_Construct_UFunction_UMovieGraphValueContainer_GetValueFloat_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphValueContainer_GetValueFloat @ 14dd5b670

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphValueContainer_GetValueFloat(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphValueContainer_GetValueFloat_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_RenderJob @ 14dd5b6b0

UFunction * __cdecl Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_RenderJob(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_RenderJob_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsEnabled_SetBit @ 14dd5b6f0

void __cdecl
Z_Construct_UScriptStruct_FMoviePipelineConsoleVariableEntry_Statics::NewProp_bIsEnabled_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14dd5b700

void __cdecl
Z_Construct_UFunction_UMovieGraphValueContainer_GetValueInt32_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// NewStructOps @ 14dd5b710

void * __cdecl
Z_Construct_UScriptStruct_FMoviePipelineConsoleVariableEntry_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMoviePipelineConsoleVariableEntry,&UE::CoreUObject::Private::Construct<FMoviePipelineConsoleVariableEntry>,&UE::CoreUObject::Private::ConstructForTests<FMoviePipelineConsoleVariableEntry>,&UE::CoreUObject::Private::Destruct<FMoviePipelineConsoleVariableEntry>,&UE::CoreUObject::Private::Copy<FMoviePipelineConsoleVariableEntry>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMovieGraphValueContainer_GetValueInt32 @ 14dd5b750

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphValueContainer_GetValueInt32(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphValueContainer_GetValueInt32_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14dd5b790

void __cdecl
Z_Construct_UFunction_UMovieGraphValueContainer_GetValueInt64_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_RenderQueueWithExecutor @ 14dd5b7a0

UFunction * __cdecl
Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_RenderQueueWithExecutor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_RenderQueueWithExecutor_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphValueContainer_GetValueInt64 @ 14dd5b7e0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphValueContainer_GetValueInt64(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphValueContainer_GetValueInt64_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_RenderQueueWithExecutorInstance @ 14dd5b820

UFunction * __cdecl
Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_RenderQueueWithExecutorInstance(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_RenderQueueWithExecutorInstance_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14dd5b860

void __cdecl
Z_Construct_UFunction_UMovieGraphValueContainer_GetValueName_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewStructOps @ 14dd5b870

void * __cdecl
Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMoviePipelineSegmentWorkMetrics,&UE::CoreUObject::Private::Construct<FMoviePipelineSegmentWorkMetrics>,&UE::CoreUObject::Private::ConstructForTests<FMoviePipelineSegmentWorkMetrics>,&UE::CoreUObject::Private::Destruct<FMoviePipelineSegmentWorkMetrics>,&UE::CoreUObject::Private::Copy<FMoviePipelineSegmentWorkMetrics>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bRenderPlayerViewport_SetBit @ 14dd5b8b0

void __cdecl
Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_SetConfiguration_Statics::
NewProp_bRenderPlayerViewport_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphValueContainer_GetValueName @ 14dd5b8c0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphValueContainer_GetValueName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphValueContainer_GetValueName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_SetConfiguration @ 14dd5b920

UFunction * __cdecl Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_SetConfiguration(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_SetConfiguration_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14dd5b9c0

void __cdecl
Z_Construct_UFunction_UMovieGraphValueContainer_GetValueObject_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphValueContainer_GetValueObject @ 14dd5ba70

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphValueContainer_GetValueObject(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphValueContainer_GetValueObject_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EMoviePipelineShutterTiming_StaticEnum @ 14dd5bab0

UEnum * __cdecl EMoviePipelineShutterTiming_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMoviePipelineShutterTiming.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UEnum_EMoviePipelineShutterTiming.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineShutterTiming,
                       (UObject *)pUVar1,L"EMoviePipelineShutterTiming");
  }
  return Z_Registration_Info_UEnum_EMoviePipelineShutterTiming.OuterSingleton;
}

// Z_Construct_UFunction_UMovieGraphValueContainer_GetValueSerializedString @ 14dd5baf0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphValueContainer_GetValueSerializedString(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphValueContainer_GetValueSerializedString_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14dd5bb30

void * __cdecl Z_Construct_UScriptStruct_FMoviePipelineCameraCutInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xd8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMoviePipelineCameraCutInfo,&UE::CoreUObject::Private::Construct<FMoviePipelineCameraCutInfo>,&UE::CoreUObject::Private::ConstructForTests<FMoviePipelineCameraCutInfo>,&UE::CoreUObject::Private::Destruct<FMoviePipelineCameraCutInfo>,&UE::CoreUObject::Private::Copy<FMoviePipelineCameraCutInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_ReturnValue_SetBit @ 14dd5bb70

void __cdecl
Z_Construct_UFunction_UMovieGraphValueContainer_GetValueString_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphValueContainer_GetValueString @ 14dd5bb80

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphValueContainer_GetValueString(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphValueContainer_GetValueString_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14dd5bbc0

void __cdecl
Z_Construct_UFunction_UMovieGraphValueContainer_GetValueText_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphValueContainer_GetValueText @ 14dd5bbd0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphValueContainer_GetValueText(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphValueContainer_GetValueText_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14dd5bc10

void * __cdecl Z_Construct_UScriptStruct_FMoviePipelineFormatArgs_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMoviePipelineFormatArgs,&UE::CoreUObject::Private::Construct<FMoviePipelineFormatArgs>,&UE::CoreUObject::Private::ConstructForTests<FMoviePipelineFormatArgs>,&UE::CoreUObject::Private::Destruct<FMoviePipelineFormatArgs>,&UE::CoreUObject::Private::Copy<FMoviePipelineFormatArgs>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMovieGraphValueContainer_GetValueType @ 14dd5bc50

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphValueContainer_GetValueType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphValueContainer_GetValueType_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphValueContainer_GetValueTypeObject @ 14dd5bc90

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphValueContainer_GetValueTypeObject(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphValueContainer_GetValueTypeObject_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInValue_SetBit @ 14dd5bcd0

void __cdecl
Z_Construct_UFunction_UMovieGraphValueContainer_SetValueBool_Statics::NewProp_bInValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14dd5bce0

void __cdecl
Z_Construct_UFunction_UMovieGraphValueContainer_SetValueBool_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// NewProp_bForceRelativeFrameNumbers_SetBit @ 14dd5bcf0

void __cdecl
Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::
NewProp_bForceRelativeFrameNumbers_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x34) = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphValueContainer_SetValueBool @ 14dd5bd00

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphValueContainer_SetValueBool(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphValueContainer_SetValueBool_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14dd5bd40

void * __cdecl
Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x120;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMoviePipelineFilenameResolveParams,&UE::CoreUObject::Private::Construct<FMoviePipelineFilenameResolveParams>,&UE::CoreUObject::Private::ConstructForTests<FMoviePipelineFilenameResolveParams>,&UE::CoreUObject::Private::Destruct<FMoviePipelineFilenameResolveParams>,&UE::CoreUObject::Private::Copy<FMoviePipelineFilenameResolveParams>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_ReturnValue_SetBit @ 14dd5bd80

void __cdecl
Z_Construct_UFunction_UMovieGraphValueContainer_SetValueByte_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphValueContainer_SetValueByte @ 14dd5bd90

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphValueContainer_SetValueByte(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphValueContainer_SetValueByte_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14dd5bdd0

void __cdecl
Z_Construct_UFunction_UMovieGraphValueContainer_SetValueClass_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphValueContainer_SetValueClass @ 14dd5bde0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphValueContainer_SetValueClass(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphValueContainer_SetValueClass_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphValueContainer_SetValueContainerType @ 14dd5be20

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphValueContainer_SetValueContainerType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphValueContainer_SetValueContainerType_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14dd5be60

void * __cdecl
Z_Construct_UScriptStruct_FMoviePipelineRenderPassOutputData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMoviePipelineRenderPassOutputData,&UE::CoreUObject::Private::Construct<FMoviePipelineRenderPassOutputData>,&UE::CoreUObject::Private::ConstructForTests<FMoviePipelineRenderPassOutputData>,&UE::CoreUObject::Private::Destruct<FMoviePipelineRenderPassOutputData>,&UE::CoreUObject::Private::Copy<FMoviePipelineRenderPassOutputData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_ReturnValue_SetBit @ 14dd5bea0

void __cdecl
Z_Construct_UFunction_UMovieGraphValueContainer_SetValueDouble_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphValueContainer_SetValueDouble @ 14dd5beb0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphValueContainer_SetValueDouble(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphValueContainer_SetValueDouble_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14dd5bef0

void __cdecl
Z_Construct_UFunction_UMovieGraphValueContainer_SetValueEnum_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphValueContainer_SetValueEnum @ 14dd5bf00

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphValueContainer_SetValueEnum(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphValueContainer_SetValueEnum_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14dd5bf40

void * __cdecl Z_Construct_UScriptStruct_FMoviePipelineShotOutputData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMoviePipelineShotOutputData,&UE::CoreUObject::Private::Construct<FMoviePipelineShotOutputData>,&UE::CoreUObject::Private::ConstructForTests<FMoviePipelineShotOutputData>,&UE::CoreUObject::Private::Destruct<FMoviePipelineShotOutputData>,&UE::CoreUObject::Private::Copy<FMoviePipelineShotOutputData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_ReturnValue_SetBit @ 14dd5bf80

void __cdecl
Z_Construct_UFunction_UMovieGraphValueContainer_SetValueFloat_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphValueContainer_SetValueFloat @ 14dd5bf90

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphValueContainer_SetValueFloat(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphValueContainer_SetValueFloat_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14dd5bfd0

void __cdecl
Z_Construct_UFunction_UMovieGraphValueContainer_SetValueInt32_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphValueContainer_SetValueInt32 @ 14dd5bfe0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphValueContainer_SetValueInt32(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphValueContainer_SetValueInt32_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSuccess_SetBit @ 14dd5c020

void __cdecl
Z_Construct_UScriptStruct_FMoviePipelineOutputData_Statics::NewProp_bSuccess_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewStructOps @ 14dd5c030

void * __cdecl Z_Construct_UScriptStruct_FMoviePipelineOutputData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMoviePipelineOutputData,&UE::CoreUObject::Private::Construct<FMoviePipelineOutputData>,&UE::CoreUObject::Private::ConstructForTests<FMoviePipelineOutputData>,&UE::CoreUObject::Private::Destruct<FMoviePipelineOutputData>,&UE::CoreUObject::Private::Copy<FMoviePipelineOutputData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_ReturnValue_SetBit @ 14dd5c070

void __cdecl
Z_Construct_UFunction_UMovieGraphValueContainer_SetValueInt64_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphValueContainer_SetValueInt64 @ 14dd5c080

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphValueContainer_SetValueInt64(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphValueContainer_SetValueInt64_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14dd5c0c0

void __cdecl
Z_Construct_UFunction_UMovieGraphValueContainer_SetValueName_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UClass_UMoviePipelineExecutorShot_NoRegister @ 14dd5c0d0

UClass * __cdecl Z_Construct_UClass_UMoviePipelineExecutorShot_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineExecutorShot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineExecutorShot",
               &Z_Registration_Info_UClass_UMoviePipelineExecutorShot.InnerSingleton,
               UMoviePipelineExecutorShot::StaticRegisterNativesUMoviePipelineExecutorShot,0x1f8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMoviePipelineExecutorShot>,
               InternalVTableHelperCtorCaller<UMoviePipelineExecutorShot>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineExecutorShot.InnerSingleton;
}

// Z_Construct_UFunction_UMovieGraphValueContainer_SetValueName @ 14dd5c180

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphValueContainer_SetValueName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphValueContainer_SetValueName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister @ 14dd5c1c0

UClass * __cdecl Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineExecutorJob.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineExecutorJob",
               &Z_Registration_Info_UClass_UMoviePipelineExecutorJob.InnerSingleton,
               UMoviePipelineExecutorJob::StaticRegisterNativesUMoviePipelineExecutorJob,0x170,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMoviePipelineExecutorJob>,
               InternalVTableHelperCtorCaller<UMoviePipelineExecutorJob>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineExecutorJob.InnerSingleton;
}

// Z_Construct_UClass_UMoviePipelineQueue_NoRegister @ 14dd5c270

UClass * __cdecl Z_Construct_UClass_UMoviePipelineQueue_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineQueue.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineQueue",
               &Z_Registration_Info_UClass_UMoviePipelineQueue.InnerSingleton,
               UMoviePipelineQueue::StaticRegisterNativesUMoviePipelineQueue,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineQueue>,
               InternalVTableHelperCtorCaller<UMoviePipelineQueue>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineQueue.InnerSingleton;
}

// NewProp_ReturnValue_SetBit @ 14dd5c360

void __cdecl
Z_Construct_UFunction_UMovieGraphValueContainer_SetValueObject_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphValueContainer_SetValueObject @ 14dd5c370

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphValueContainer_SetValueObject(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphValueContainer_SetValueObject_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14dd5c460

void __cdecl
Z_Construct_UFunction_UMovieGraphValueContainer_SetValueSerializedString_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UClass_UMoviePipelinePythonHostExecutor @ 14dd5c470

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMoviePipelinePythonHostExecutor(void)

{
  if (Z_Registration_Info_UClass_UMoviePipelinePythonHostExecutor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMoviePipelinePythonHostExecutor.OuterSingleton,
               &Z_Construct_UClass_UMoviePipelinePythonHostExecutor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMoviePipelinePythonHostExecutor.OuterSingleton;
}

// Z_Construct_UFunction_UMovieGraphValueContainer_SetValueSerializedString @ 14dd5c4b0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphValueContainer_SetValueSerializedString(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphValueContainer_SetValueSerializedString_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14dd5c4f0

void __cdecl
Z_Construct_UFunction_UMovieGraphValueContainer_SetValueString_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphValueContainer_SetValueString @ 14dd5c5c0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphValueContainer_SetValueString(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphValueContainer_SetValueString_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMoviePipelinePythonHostExecutor_ExecuteDelayed @ 14dd5c600

UFunction * __cdecl Z_Construct_UFunction_UMoviePipelinePythonHostExecutor_ExecuteDelayed(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelinePythonHostExecutor_ExecuteDelayed_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14dd5c640

void __cdecl
Z_Construct_UFunction_UMovieGraphValueContainer_SetValueText_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UMoviePipelinePythonHostExecutor_GetLastLoadedWorld @ 14dd5c650

UFunction * __cdecl Z_Construct_UFunction_UMoviePipelinePythonHostExecutor_GetLastLoadedWorld(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelinePythonHostExecutor_GetLastLoadedWorld_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphValueContainer_SetValueText @ 14dd5c690

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphValueContainer_SetValueText(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphValueContainer_SetValueText_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphValueContainer_SetValueType @ 14dd5c6d0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphValueContainer_SetValueType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphValueContainer_SetValueType_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMoviePipelinePrimaryConfig_NoRegister @ 14dd5c710

UClass * __cdecl Z_Construct_UClass_UMoviePipelinePrimaryConfig_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelinePrimaryConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelinePrimaryConfig",
               &Z_Registration_Info_UClass_UMoviePipelinePrimaryConfig.InnerSingleton,
               UMoviePipelinePrimaryConfig::StaticRegisterNativesUMoviePipelinePrimaryConfig,0xe0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMoviePipelinePrimaryConfig>,
               InternalVTableHelperCtorCaller<UMoviePipelinePrimaryConfig>,local_res8,
               UMoviePipelineConfigBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelinePrimaryConfig.InnerSingleton;
}

// Z_Construct_UFunction_UMoviePipelinePythonHostExecutor_OnMapLoad @ 14dd5c7d0

UFunction * __cdecl Z_Construct_UFunction_UMoviePipelinePythonHostExecutor_OnMapLoad(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelinePythonHostExecutor_OnMapLoad_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphValueContainer_SetValueTypeObject @ 14dd5c8d0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphValueContainer_SetValueTypeObject(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphValueContainer_SetValueTypeObject_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMoviePipelineSetting_BuildNewProcessCommandLineArgs @ 14dd5ca40

UFunction * __cdecl Z_Construct_UFunction_UMoviePipelineSetting_BuildNewProcessCommandLineArgs(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineSetting_BuildNewProcessCommandLineArgs_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14dd5cc20

void __cdecl
Z_Construct_UFunction_UMoviePipelineSetting_IsEnabled_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMoviePipelineSetting_IsEnabled @ 14dd5cc30

UFunction * __cdecl Z_Construct_UFunction_UMoviePipelineSetting_IsEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineSetting_IsEnabled_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInEnabled_SetBit @ 14dd5cc70

void __cdecl
Z_Construct_UFunction_UMoviePipelineSetting_SetIsEnabled_Statics::NewProp_bInEnabled_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMoviePipelineSetting_SetIsEnabled @ 14dd5cc80

UFunction * __cdecl Z_Construct_UFunction_UMoviePipelineSetting_SetIsEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineSetting_SetIsEnabled_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnabled_SetBit @ 14dd5ccc0

void __cdecl
Z_Construct_UClass_UMoviePipelineSetting_Statics::NewProp_bEnabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// Z_Construct_UClass_UMoviePipelineExecutorJob @ 14dd5ccd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMoviePipelineExecutorJob(void)

{
  if (Z_Registration_Info_UClass_UMoviePipelineExecutorJob.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMoviePipelineExecutorJob.OuterSingleton,
               &Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMoviePipelineExecutorJob.OuterSingleton;
}

// Z_Construct_UClass_UMoviePipelineExecutorShot @ 14dd5cd10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMoviePipelineExecutorShot(void)

{
  if (Z_Registration_Info_UClass_UMoviePipelineExecutorShot.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMoviePipelineExecutorShot.OuterSingleton,
               &Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMoviePipelineExecutorShot.OuterSingleton;
}

// Z_Construct_UClass_UMoviePipelineQueue @ 14dd5cd50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMoviePipelineQueue(void)

{
  if (Z_Registration_Info_UClass_UMoviePipelineQueue.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMoviePipelineQueue.OuterSingleton,
               &Z_Construct_UClass_UMoviePipelineQueue_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMoviePipelineQueue.OuterSingleton;
}

// Z_Construct_UScriptStruct_FMoviePipelineConsoleVariableEntry @ 14dd5cd90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMoviePipelineConsoleVariableEntry(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMoviePipelineConsoleVariableEntry.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMoviePipelineConsoleVariableEntry.InnerSingleton,
               &Z_Construct_UScriptStruct_FMoviePipelineConsoleVariableEntry_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMoviePipelineConsoleVariableEntry.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMoviePipelineConsoleVariableEntry.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMoviePipelineSidecarCamera @ 14dd5ce10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMoviePipelineSidecarCamera(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMoviePipelineSidecarCamera.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMoviePipelineSidecarCamera.InnerSingleton,
               &Z_Construct_UScriptStruct_FMoviePipelineSidecarCamera_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMoviePipelineSidecarCamera.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMoviePipelineSidecarCamera.InnerSingleton;
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

// NewStructOps @ 14dd5ce90

void * __cdecl Z_Construct_UScriptStruct_FMoviePipelineSidecarCamera_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMoviePipelineSidecarCamera,&UE::CoreUObject::Private::Construct<FMoviePipelineSidecarCamera>,&UE::CoreUObject::Private::ConstructForTests<FMoviePipelineSidecarCamera>,&UE::CoreUObject::Private::Destruct<FMoviePipelineSidecarCamera>,&UE::CoreUObject::Private::Copy<FMoviePipelineSidecarCamera>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UMoviePipelineVideoOutputBase @ 14dd5cf90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMoviePipelineVideoOutputBase(void)

{
  if (Z_Registration_Info_UClass_UMoviePipelineVideoOutputBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMoviePipelineVideoOutputBase.OuterSingleton,
               &Z_Construct_UClass_UMoviePipelineVideoOutputBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMoviePipelineVideoOutputBase.OuterSingleton;
}

// Z_Construct_UFunction_UMoviePipelineExecutorShot_AllocateNewShotOverrideConfig @ 14dd5cfd0

UFunction * __cdecl
Z_Construct_UFunction_UMoviePipelineExecutorShot_AllocateNewShotOverrideConfig(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineExecutorShot_AllocateNewShotOverrideConfig_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMoviePipelineExecutorShot_GetCameraName @ 14dd5d010

UFunction * __cdecl Z_Construct_UFunction_UMoviePipelineExecutorShot_GetCameraName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineExecutorShot_GetCameraName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase @ 14dd5d050

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase(void)

{
  if (Z_Registration_Info_UClass_UMoviePipelineSetting_BlueprintBase.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMoviePipelineSetting_BlueprintBase.OuterSingleton,
               &Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMoviePipelineSetting_BlueprintBase.OuterSingleton;
}

// Z_Construct_UScriptStruct_FMoviePipelineFormatArgs @ 14dd5d090

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMoviePipelineFormatArgs(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMoviePipelineFormatArgs.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMoviePipelineFormatArgs.InnerSingleton,
               &Z_Construct_UScriptStruct_FMoviePipelineFormatArgs_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMoviePipelineFormatArgs.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMoviePipelineFormatArgs.InnerSingleton;
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

// Z_Construct_UFunction_UMoviePipelineExecutorShot_GetGraphPreset @ 14dd5d150

UFunction * __cdecl Z_Construct_UFunction_UMoviePipelineExecutorShot_GetGraphPreset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineExecutorShot_GetGraphPreset_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_OnEngineTickBeginFrame @ 14dd5d190

UFunction * __cdecl
Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_OnEngineTickBeginFrame(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_OnEngineTickBeginFrame_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsForPrimaryOverrides_SetBit @ 14dd5d210

void __cdecl
Z_Construct_UFunction_UMoviePipelineExecutorShot_GetOrCreateJobVariableAssignmentsForGraph_Statics::
NewProp_bIsForPrimaryOverrides_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UMoviePipelineExecutorShot_GetOrCreateJobVariableAssignmentsForGraph @ 14dd5d220

UFunction * __cdecl
Z_Construct_UFunction_UMoviePipelineExecutorShot_GetOrCreateJobVariableAssignmentsForGraph(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineExecutorShot_GetOrCreateJobVariableAssignmentsForGraph_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveGetFormatArguments @ 14dd5d260

UFunction * __cdecl
Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveGetFormatArguments(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveGetFormatArguments_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMoviePipelineExecutorShot_GetShotOverrideConfiguration @ 14dd5d2a0

UFunction * __cdecl
Z_Construct_UFunction_UMoviePipelineExecutorShot_GetShotOverrideConfiguration(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineExecutorShot_GetShotOverrideConfiguration_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveSetupForPipelineImpl @ 14dd5d2e0

UFunction * __cdecl
Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveSetupForPipelineImpl(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveSetupForPipelineImpl_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMoviePipelineExecutorShot_GetShotOverridePresetOrigin @ 14dd5d320

UFunction * __cdecl
Z_Construct_UFunction_UMoviePipelineExecutorShot_GetShotOverridePresetOrigin(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineExecutorShot_GetShotOverridePresetOrigin_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveTeardownForPipelineImpl @ 14dd5d420

UFunction * __cdecl
Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveTeardownForPipelineImpl(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveTeardownForPipelineImpl_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMoviePipelineExecutorShot_GetStatusMessage @ 14dd5d460

UFunction * __cdecl Z_Construct_UFunction_UMoviePipelineExecutorShot_GetStatusMessage(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineExecutorShot_GetStatusMessage_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsValidOnPrimary_SetBit @ 14dd5d540

void __cdecl
Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_Statics::NewProp_bIsValidOnPrimary_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x58) = 1;
  return;
}

// NewProp_bIsValidOnShots_SetBit @ 14dd5d550

void __cdecl
Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_Statics::NewProp_bIsValidOnShots_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x59) = 1;
  return;
}

// NewProp_bCanBeDisabled_SetBit @ 14dd5d560

void __cdecl
Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_Statics::NewProp_bCanBeDisabled_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x5a) = 1;
  return;
}

// Z_Construct_UFunction_UMoviePipelineExecutorShot_GetStatusProgress @ 14dd5d570

UFunction * __cdecl Z_Construct_UFunction_UMoviePipelineExecutorShot_GetStatusProgress(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineExecutorShot_GetStatusProgress_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14dd5d5b0

void __cdecl
Z_Construct_UFunction_UMoviePipelineExecutorShot_IsUsingGraphConfiguration_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMoviePipelineExecutorShot_IsUsingGraphConfiguration @ 14dd5d5c0

UFunction * __cdecl Z_Construct_UFunction_UMoviePipelineExecutorShot_IsUsingGraphConfiguration(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineExecutorShot_IsUsingGraphConfiguration_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bUpdateVariableAssignments_SetBit @ 14dd5d600

void __cdecl
Z_Construct_UFunction_UMoviePipelineExecutorShot_SetGraphPreset_Statics::
NewProp_bUpdateVariableAssignments_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UMoviePipelineExecutorShot_SetGraphPreset @ 14dd5d610

UFunction * __cdecl Z_Construct_UFunction_UMoviePipelineExecutorShot_SetGraphPreset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineExecutorShot_SetGraphPreset_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMoviePipelineExecutorShot_SetShotOverrideConfiguration @ 14dd5d650

UFunction * __cdecl
Z_Construct_UFunction_UMoviePipelineExecutorShot_SetShotOverrideConfiguration(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineExecutorShot_SetShotOverrideConfiguration_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMoviePipelineExecutorShot_SetShotOverridePresetOrigin @ 14dd5d690

UFunction * __cdecl
Z_Construct_UFunction_UMoviePipelineExecutorShot_SetShotOverridePresetOrigin(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineExecutorShot_SetShotOverridePresetOrigin_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMoviePipelineShotConfig @ 14dd5d6d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMoviePipelineShotConfig(void)

{
  if (Z_Registration_Info_UClass_UMoviePipelineShotConfig.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMoviePipelineShotConfig.OuterSingleton,
               &Z_Construct_UClass_UMoviePipelineShotConfig_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMoviePipelineShotConfig.OuterSingleton;
}

// Z_Construct_UFunction_UMoviePipelineExecutorShot_SetStatusMessage @ 14dd5d710

UFunction * __cdecl Z_Construct_UFunction_UMoviePipelineExecutorShot_SetStatusMessage(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineExecutorShot_SetStatusMessage_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMoviePipelineShotConfig_NoRegister @ 14dd5d750

UClass * __cdecl Z_Construct_UClass_UMoviePipelineShotConfig_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineShotConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineShotConfig",
               &Z_Registration_Info_UClass_UMoviePipelineShotConfig.InnerSingleton,
               UMoviePipelineShotConfig::StaticRegisterNativesUMoviePipelineShotConfig,0x78,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMoviePipelineShotConfig>,
               InternalVTableHelperCtorCaller<UMoviePipelineShotConfig>,local_res8,
               UMoviePipelineConfigBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineShotConfig.InnerSingleton;
}

// Z_Construct_UFunction_UMoviePipelineExecutorShot_SetStatusProgress @ 14dd5d930

UFunction * __cdecl Z_Construct_UFunction_UMoviePipelineExecutorShot_SetStatusProgress(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineExecutorShot_SetStatusProgress_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14dd5d970

void __cdecl
Z_Construct_UFunction_UMoviePipelineExecutorShot_ShouldRender_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMoviePipelineExecutorShot_ShouldRender @ 14dd5d9d0

UFunction * __cdecl Z_Construct_UFunction_UMoviePipelineExecutorShot_ShouldRender(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineExecutorShot_ShouldRender_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnabled_SetBit @ 14dd5da10

void __cdecl
Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::NewProp_bEnabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Z_Construct_UClass_UMoviePipelinePrimaryConfig @ 14dd5dc80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMoviePipelinePrimaryConfig(void)

{
  if (Z_Registration_Info_UClass_UMoviePipelinePrimaryConfig.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMoviePipelinePrimaryConfig.OuterSingleton,
               &Z_Construct_UClass_UMoviePipelinePrimaryConfig_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMoviePipelinePrimaryConfig.OuterSingleton;
}

// NewProp_bIncludeDisabledSettings_SetBit @ 14dd5dcc0

void __cdecl
Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetAllSettings_Statics::
NewProp_bIncludeDisabledSettings_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMoviePipelineExecutorJob_GetConfiguration @ 14dd5dcd0

UFunction * __cdecl Z_Construct_UFunction_UMoviePipelineExecutorJob_GetConfiguration(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineExecutorJob_GetConfiguration_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_bIncludeTransientSettings_SetBit @ 14dd5dd10

void __cdecl
Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetAllSettings_Statics::
NewProp_bIncludeTransientSettings_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// Z_Construct_UFunction_UMoviePipelineExecutorJob_GetGraphPreset @ 14dd5dd20

UFunction * __cdecl Z_Construct_UFunction_UMoviePipelineExecutorJob_GetGraphPreset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineExecutorJob_GetGraphPreset_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetAllSettings @ 14dd5dd60

UFunction * __cdecl Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetAllSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetAllSettings_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMoviePipelineExecutorJob_GetOrCreateJobVariableAssignmentsForGraph @ 14dd5dda0

UFunction * __cdecl
Z_Construct_UFunction_UMoviePipelineExecutorJob_GetOrCreateJobVariableAssignmentsForGraph(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineExecutorJob_GetOrCreateJobVariableAssignmentsForGraph_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMoviePipelineExecutorJob_GetPresetOrigin @ 14dd5dde0

UFunction * __cdecl Z_Construct_UFunction_UMoviePipelineExecutorJob_GetPresetOrigin(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineExecutorJob_GetPresetOrigin_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetEffectiveFrameRate @ 14dd5de20

UFunction * __cdecl Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetEffectiveFrameRate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetEffectiveFrameRate_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMoviePipelineExecutorJob_GetStatusMessage @ 14dd5de60

UFunction * __cdecl Z_Construct_UFunction_UMoviePipelineExecutorJob_GetStatusMessage(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineExecutorJob_GetStatusMessage_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetTransientSettings @ 14dd5dea0

UFunction * __cdecl Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetTransientSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetTransientSettings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMoviePipelinePrimaryConfig_InitializeTransientSettings @ 14dd5dee0

UFunction * __cdecl
Z_Construct_UFunction_UMoviePipelinePrimaryConfig_InitializeTransientSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelinePrimaryConfig_InitializeTransientSettings_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMoviePipelineExecutorJob_GetStatusProgress @ 14dd5df20

UFunction * __cdecl Z_Construct_UFunction_UMoviePipelineExecutorJob_GetStatusProgress(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineExecutorJob_GetStatusProgress_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14dd5e0a0

void __cdecl
Z_Construct_UFunction_UMoviePipelineExecutorJob_IsConsumed_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMoviePipelineExecutorJob_IsConsumed @ 14dd5e160

UFunction * __cdecl Z_Construct_UFunction_UMoviePipelineExecutorJob_IsConsumed(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineExecutorJob_IsConsumed_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14dd5e1a0

void __cdecl
Z_Construct_UFunction_UMoviePipelineExecutorJob_IsEnabled_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMoviePipelineExecutorJob_IsEnabled @ 14dd5e1b0

UFunction * __cdecl Z_Construct_UFunction_UMoviePipelineExecutorJob_IsEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineExecutorJob_IsEnabled_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14dd5e1f0

void __cdecl
Z_Construct_UFunction_UMoviePipelineExecutorJob_IsUsingGraphConfiguration_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMoviePipelineExecutorJob_IsUsingGraphConfiguration @ 14dd5e200

UFunction * __cdecl Z_Construct_UFunction_UMoviePipelineExecutorJob_IsUsingGraphConfiguration(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineExecutorJob_IsUsingGraphConfiguration_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMoviePipelineExecutorJob_OnDuplicated @ 14dd5e240

UFunction * __cdecl Z_Construct_UFunction_UMoviePipelineExecutorJob_OnDuplicated(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineExecutorJob_OnDuplicated_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMoviePipelineExecutorJob_SetConfiguration @ 14dd5e280

UFunction * __cdecl Z_Construct_UFunction_UMoviePipelineExecutorJob_SetConfiguration(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineExecutorJob_SetConfiguration_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_bInConsumed_SetBit @ 14dd5e300

void __cdecl
Z_Construct_UFunction_UMoviePipelineExecutorJob_SetConsumed_Statics::NewProp_bInConsumed_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMoviePipelineExecutorJob_SetConsumed @ 14dd5e350

UFunction * __cdecl Z_Construct_UFunction_UMoviePipelineExecutorJob_SetConsumed(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineExecutorJob_SetConsumed_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bUpdateVariableAssignments_SetBit @ 14dd5e450

void __cdecl
Z_Construct_UFunction_UMoviePipelineExecutorJob_SetGraphPreset_Statics::
NewProp_bUpdateVariableAssignments_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UMoviePipelineExecutorJob_SetGraphPreset @ 14dd5e460

UFunction * __cdecl Z_Construct_UFunction_UMoviePipelineExecutorJob_SetGraphPreset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineExecutorJob_SetGraphPreset_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInEnabled_SetBit @ 14dd5e4a0

void __cdecl
Z_Construct_UFunction_UMoviePipelineExecutorJob_SetIsEnabled_Statics::NewProp_bInEnabled_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMoviePipelineExecutorJob_SetIsEnabled @ 14dd5e520

UFunction * __cdecl Z_Construct_UFunction_UMoviePipelineExecutorJob_SetIsEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineExecutorJob_SetIsEnabled_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMoviePipelineExecutorJob_SetPresetOrigin @ 14dd5e790

UFunction * __cdecl Z_Construct_UFunction_UMoviePipelineExecutorJob_SetPresetOrigin(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineExecutorJob_SetPresetOrigin_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMoviePipelineExecutorJob_SetSequence @ 14dd5e890

UFunction * __cdecl Z_Construct_UFunction_UMoviePipelineExecutorJob_SetSequence(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineExecutorJob_SetSequence_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMoviePipelineGameOverrideSetting @ 14dd5e8d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMoviePipelineGameOverrideSetting(void)

{
  if (Z_Registration_Info_UClass_UMoviePipelineGameOverrideSetting.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMoviePipelineGameOverrideSetting.OuterSingleton,
               &Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMoviePipelineGameOverrideSetting.OuterSingleton;
}

// Z_Construct_UClass_UMoviePipelineSetting @ 14dd5e910

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMoviePipelineSetting(void)

{
  if (Z_Registration_Info_UClass_UMoviePipelineSetting.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMoviePipelineSetting.OuterSingleton,
               &Z_Construct_UClass_UMoviePipelineSetting_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMoviePipelineSetting.OuterSingleton;
}

// Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineTextureStreamingMethod @ 14dd5e950

UEnum * __cdecl Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineTextureStreamingMethod(void)

{
  if (Z_Registration_Info_UEnum_EMoviePipelineTextureStreamingMethod.InnerSingleton == (UEnum *)0x0)
  {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMoviePipelineTextureStreamingMethod.InnerSingleton,
               &Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineTextureStreamingMethod_Statics
                ::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMoviePipelineTextureStreamingMethod.InnerSingleton;
}

// EMoviePipelineTextureStreamingMethod_StaticEnum @ 14dd5e990

UEnum * __cdecl EMoviePipelineTextureStreamingMethod_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMoviePipelineTextureStreamingMethod.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UEnum_EMoviePipelineTextureStreamingMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineTextureStreamingMethod
                       ,(UObject *)pUVar1,L"EMoviePipelineTextureStreamingMethod");
  }
  return Z_Registration_Info_UEnum_EMoviePipelineTextureStreamingMethod.OuterSingleton;
}

// Z_Construct_UFunction_UMoviePipelineExecutorJob_SetStatusMessage @ 14dd5ea10

UFunction * __cdecl Z_Construct_UFunction_UMoviePipelineExecutorJob_SetStatusMessage(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineExecutorJob_SetStatusMessage_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_bCinematicQualitySettings_SetBit @ 14dd5ea50

void __cdecl
Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::
NewProp_bCinematicQualitySettings_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x78) = 1;
  return;
}

// NewProp_bUseLODZero_SetBit @ 14dd5ea60

void __cdecl
Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bUseLODZero_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x7a) = 1;
  return;
}

// NewProp_bDisableHLODs_SetBit @ 14dd5ea70

void __cdecl
Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bDisableHLODs_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x7b) = 1;
  return;
}

// NewProp_bUseHighQualityShadows_SetBit @ 14dd5ea80

void __cdecl
Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bUseHighQualityShadows_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x7c) = 1;
  return;
}

// NewProp_bOverrideViewDistanceScale_SetBit @ 14dd5ea90

void __cdecl
Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::
NewProp_bOverrideViewDistanceScale_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x88) = 1;
  return;
}

// NewProp_bFlushGrassStreaming_SetBit @ 14dd5eaa0

void __cdecl
Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bFlushGrassStreaming_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x90) = 1;
  return;
}

// NewProp_bOverrideGrassCullDistanceScale_SetBit @ 14dd5eab0

void __cdecl
Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::
NewProp_bOverrideGrassCullDistanceScale_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x91) = 1;
  return;
}

// NewProp_bOverrideGrassDensityScale_SetBit @ 14dd5eac0

void __cdecl
Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::
NewProp_bOverrideGrassDensityScale_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x98) = 1;
  return;
}

// NewProp_bFlushStreamingManagers_SetBit @ 14dd5ead0

void __cdecl
Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bFlushStreamingManagers_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xa0) = 1;
  return;
}

// NewProp_bOverrideVirtualTextureFeedbackFactor_SetBit @ 14dd5eae0

void __cdecl
Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::
NewProp_bOverrideVirtualTextureFeedbackFactor_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xa1) = 1;
  return;
}

// Z_Construct_UFunction_UMoviePipelineExecutorJob_SetStatusProgress @ 14dd5eaf0

UFunction * __cdecl Z_Construct_UFunction_UMoviePipelineExecutorJob_SetStatusProgress(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineExecutorJob_SetStatusProgress_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsConsumed_SetBit @ 14dd5ebe0

void __cdecl
Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_bIsConsumed_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xfc) = 1;
  return;
}

// NewProp_bEnabled_SetBit @ 14dd5ebf0

void __cdecl
Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_bEnabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x130) = 1;
  return;
}

// Z_Construct_UClass_UMoviePipelineOutputSetting @ 14dd5ecc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMoviePipelineOutputSetting(void)

{
  if (Z_Registration_Info_UClass_UMoviePipelineOutputSetting.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMoviePipelineOutputSetting.OuterSingleton,
               &Z_Construct_UClass_UMoviePipelineOutputSetting_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMoviePipelineOutputSetting.OuterSingleton;
}

// NewProp_bUseCustomFrameRate_SetBit @ 14dd5ed00

void __cdecl
Z_Construct_UClass_UMoviePipelineOutputSetting_Statics::NewProp_bUseCustomFrameRate_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x70) = 1;
  return;
}

// NewProp_bOverrideExistingOutput_SetBit @ 14dd5ed10

void __cdecl
Z_Construct_UClass_UMoviePipelineOutputSetting_Statics::NewProp_bOverrideExistingOutput_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x80) = 1;
  return;
}

// NewProp_bUseCustomPlaybackRange_SetBit @ 14dd5ed20

void __cdecl
Z_Construct_UClass_UMoviePipelineOutputSetting_Statics::NewProp_bUseCustomPlaybackRange_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x8c) = 1;
  return;
}

// NewProp_bAutoVersion_SetBit @ 14dd5ed30

void __cdecl
Z_Construct_UClass_UMoviePipelineOutputSetting_Statics::NewProp_bAutoVersion_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x9c) = 1;
  return;
}

// NewProp_bFlushDiskWritesPerShot_SetBit @ 14dd5ed40

void __cdecl
Z_Construct_UClass_UMoviePipelineOutputSetting_Statics::NewProp_bFlushDiskWritesPerShot_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xa8) = 1;
  return;
}

// Z_Construct_UFunction_UMoviePipelineQueue_AllocateNewJob @ 14dd5ee70

UFunction * __cdecl Z_Construct_UFunction_UMoviePipelineQueue_AllocateNewJob(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineQueue_AllocateNewJob_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMoviePipelineQueue_CopyFrom @ 14dd5eeb0

UFunction * __cdecl Z_Construct_UFunction_UMoviePipelineQueue_CopyFrom(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineQueue_CopyFrom_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMoviePipelineQueue_DeleteAllJobs @ 14dd5ef30

UFunction * __cdecl Z_Construct_UFunction_UMoviePipelineQueue_DeleteAllJobs(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineQueue_DeleteAllJobs_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphFrameRangeNotation @ 14dd5f030

UEnum * __cdecl Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphFrameRangeNotation(void)

{
  if (Z_Registration_Info_UEnum_EMovieGraphFrameRangeNotation.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMovieGraphFrameRangeNotation.InnerSingleton,
               &Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphFrameRangeNotation_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EMovieGraphFrameRangeNotation.InnerSingleton;
}

// Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphImageSequencePlaybackRange @ 14dd5f070

UEnum * __cdecl
Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphImageSequencePlaybackRange(void)

{
  if (Z_Registration_Info_UEnum_EMovieGraphImageSequencePlaybackRange.InnerSingleton == (UEnum *)0x0
     ) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMovieGraphImageSequencePlaybackRange.InnerSingleton,
               &Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphImageSequencePlaybackRange_Statics
                ::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMovieGraphImageSequencePlaybackRange.InnerSingleton;
}

// Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphJobPlaybackRange @ 14dd5f0b0

UEnum * __cdecl Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphJobPlaybackRange(void)

{
  if (Z_Registration_Info_UEnum_EMovieGraphJobPlaybackRange.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMovieGraphJobPlaybackRange.InnerSingleton,
               &Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphJobPlaybackRange_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EMovieGraphJobPlaybackRange.InnerSingleton;
}

// Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphOutputTypePlayback @ 14dd5f0f0

UEnum * __cdecl Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphOutputTypePlayback(void)

{
  if (Z_Registration_Info_UEnum_EMovieGraphOutputTypePlayback.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMovieGraphOutputTypePlayback.InnerSingleton,
               &Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphOutputTypePlayback_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EMovieGraphOutputTypePlayback.InnerSingleton;
}

// Z_Construct_UFunction_UMoviePipelineQueue_DeleteJob @ 14dd5f130

UFunction * __cdecl Z_Construct_UFunction_UMoviePipelineQueue_DeleteJob(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineQueue_DeleteJob_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphPlaybackMethod @ 14dd5f170

UEnum * __cdecl Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphPlaybackMethod(void)

{
  if (Z_Registration_Info_UEnum_EMovieGraphPlaybackMethod.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMovieGraphPlaybackMethod.InnerSingleton,
               &Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphPlaybackMethod_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EMovieGraphPlaybackMethod.InnerSingleton;
}

// Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphRenderLayerPlaybackRange @ 14dd5f1b0

UEnum * __cdecl Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphRenderLayerPlaybackRange(void)

{
  if (Z_Registration_Info_UEnum_EMovieGraphRenderLayerPlaybackRange.InnerSingleton == (UEnum *)0x0)
  {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMovieGraphRenderLayerPlaybackRange.InnerSingleton,
               &Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphRenderLayerPlaybackRange_Statics
                ::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMovieGraphRenderLayerPlaybackRange.InnerSingleton;
}

// Z_Construct_UScriptStruct_FMovieGraphPostRenderImageSequencePlayOptions @ 14dd5f210

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl
Z_Construct_UScriptStruct_FMovieGraphPostRenderImageSequencePlayOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieGraphPostRenderImageSequencePlayOptions.InnerSingleton
      == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieGraphPostRenderImageSequencePlayOptions.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieGraphPostRenderImageSequencePlayOptions_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieGraphPostRenderImageSequencePlayOptions.InnerSingleton
      != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieGraphPostRenderImageSequencePlayOptions.
           InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieGraphPostRenderVideoPlayOptions @ 14dd5f290

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieGraphPostRenderVideoPlayOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieGraphPostRenderVideoPlayOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieGraphPostRenderVideoPlayOptions.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieGraphPostRenderVideoPlayOptions_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieGraphPostRenderVideoPlayOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieGraphPostRenderVideoPlayOptions.InnerSingleton;
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

// EMovieGraphPlaybackMethod_StaticEnum @ 14dd5f310

UEnum * __cdecl EMovieGraphPlaybackMethod_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieGraphPlaybackMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UEnum_EMovieGraphPlaybackMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphPlaybackMethod,
                       (UObject *)pUVar1,L"EMovieGraphPlaybackMethod");
  }
  return Z_Registration_Info_UEnum_EMovieGraphPlaybackMethod.OuterSingleton;
}

// EMovieGraphImageSequencePlaybackRange_StaticEnum @ 14dd5f3d0

UEnum * __cdecl EMovieGraphImageSequencePlaybackRange_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieGraphImageSequencePlaybackRange.OuterSingleton == (UEnum *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UEnum_EMovieGraphImageSequencePlaybackRange.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphImageSequencePlaybackRange
                       ,(UObject *)pUVar1,L"EMovieGraphImageSequencePlaybackRange");
  }
  return Z_Registration_Info_UEnum_EMovieGraphImageSequencePlaybackRange.OuterSingleton;
}

// Z_Construct_UFunction_UMoviePipelineQueue_DuplicateJob @ 14dd5f410

UFunction * __cdecl Z_Construct_UFunction_UMoviePipelineQueue_DuplicateJob(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineQueue_DuplicateJob_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EMovieGraphJobPlaybackRange_StaticEnum @ 14dd5f450

UEnum * __cdecl EMovieGraphJobPlaybackRange_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieGraphJobPlaybackRange.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UEnum_EMovieGraphJobPlaybackRange.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphJobPlaybackRange,
                       (UObject *)pUVar1,L"EMovieGraphJobPlaybackRange");
  }
  return Z_Registration_Info_UEnum_EMovieGraphJobPlaybackRange.OuterSingleton;
}

// Z_Construct_UFunction_UMoviePipelineQueue_GetJobs @ 14dd5f490

UFunction * __cdecl Z_Construct_UFunction_UMoviePipelineQueue_GetJobs(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineQueue_GetJobs_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EMovieGraphRenderLayerPlaybackRange_StaticEnum @ 14dd5f4d0

UEnum * __cdecl EMovieGraphRenderLayerPlaybackRange_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieGraphRenderLayerPlaybackRange.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UEnum_EMovieGraphRenderLayerPlaybackRange.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphRenderLayerPlaybackRange
                       ,(UObject *)pUVar1,L"EMovieGraphRenderLayerPlaybackRange");
  }
  return Z_Registration_Info_UEnum_EMovieGraphRenderLayerPlaybackRange.OuterSingleton;
}

// EMovieGraphFrameRangeNotation_StaticEnum @ 14dd5f510

UEnum * __cdecl EMovieGraphFrameRangeNotation_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieGraphFrameRangeNotation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UEnum_EMovieGraphFrameRangeNotation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphFrameRangeNotation,
                       (UObject *)pUVar1,L"EMovieGraphFrameRangeNotation");
  }
  return Z_Registration_Info_UEnum_EMovieGraphFrameRangeNotation.OuterSingleton;
}

// EMovieGraphOutputTypePlayback_StaticEnum @ 14dd5f550

UEnum * __cdecl EMovieGraphOutputTypePlayback_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieGraphOutputTypePlayback.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UEnum_EMovieGraphOutputTypePlayback.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphOutputTypePlayback,
                       (UObject *)pUVar1,L"EMovieGraphOutputTypePlayback");
  }
  return Z_Registration_Info_UEnum_EMovieGraphOutputTypePlayback.OuterSingleton;
}

// Z_Construct_UFunction_UMoviePipelineQueue_GetQueueOrigin @ 14dd5f590

UFunction * __cdecl Z_Construct_UFunction_UMoviePipelineQueue_GetQueueOrigin(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineQueue_GetQueueOrigin_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14dd5f5d0

void * __cdecl
Z_Construct_UScriptStruct_FMovieGraphPostRenderVideoPlayOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieGraphPostRenderVideoPlayOptions,&UE::CoreUObject::Private::Construct<FMovieGraphPostRenderVideoPlayOptions>,&UE::CoreUObject::Private::ConstructForTests<FMovieGraphPostRenderVideoPlayOptions>,&UE::CoreUObject::Private::Destruct<FMovieGraphPostRenderVideoPlayOptions>,&UE::CoreUObject::Private::Copy<FMovieGraphPostRenderVideoPlayOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMoviePipelineQueue_SetJobIndex @ 14dd5f610

UFunction * __cdecl Z_Construct_UFunction_UMoviePipelineQueue_SetJobIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineQueue_SetJobIndex_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMoviePipelineQueue_SetQueueOrigin @ 14dd5f650

UFunction * __cdecl Z_Construct_UFunction_UMoviePipelineQueue_SetQueueOrigin(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineQueue_SetQueueOrigin_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMoviePipelineInProcessExecutor @ 14dd5f690

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMoviePipelineInProcessExecutor(void)

{
  if (Z_Registration_Info_UClass_UMoviePipelineInProcessExecutor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMoviePipelineInProcessExecutor.OuterSingleton,
               &Z_Construct_UClass_UMoviePipelineInProcessExecutor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMoviePipelineInProcessExecutor.OuterSingleton;
}

// Z_Construct_UClass_UMoviePipelineLinearExecutorBase @ 14dd5f6d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMoviePipelineLinearExecutorBase(void)

{
  if (Z_Registration_Info_UClass_UMoviePipelineLinearExecutorBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMoviePipelineLinearExecutorBase.OuterSingleton,
               &Z_Construct_UClass_UMoviePipelineLinearExecutorBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMoviePipelineLinearExecutorBase.OuterSingleton;
}

// Z_Construct_UClass_UMoviePipelinePythonHostExecutor_NoRegister @ 14dd5f710

UClass * __cdecl Z_Construct_UClass_UMoviePipelinePythonHostExecutor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelinePythonHostExecutor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelinePythonHostExecutor",
               &Z_Registration_Info_UClass_UMoviePipelinePythonHostExecutor.InnerSingleton,
               UMoviePipelinePythonHostExecutor::
               StaticRegisterNativesUMoviePipelinePythonHostExecutor,0x160,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelinePythonHostExecutor>,
               InternalVTableHelperCtorCaller<UMoviePipelinePythonHostExecutor>,local_res8,
               UMoviePipelineExecutorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelinePythonHostExecutor.InnerSingleton;
}

// NewProp_bUseCurrentLevel_SetBit @ 14dd5f890

void __cdecl
Z_Construct_UClass_UMoviePipelineInProcessExecutor_Statics::NewProp_bUseCurrentLevel_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x170) = 1;
  return;
}

// NewStructOps @ 14dd5f8a0

void * __cdecl
Z_Construct_UScriptStruct_FMovieGraphPostRenderImageSequencePlayOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieGraphPostRenderImageSequencePlayOptions,&UE::CoreUObject::Private::Construct<FMovieGraphPostRenderImageSequencePlayOptions>,&UE::CoreUObject::Private::ConstructForTests<FMovieGraphPostRenderImageSequencePlayOptions>,&UE::CoreUObject::Private::Destruct<FMovieGraphPostRenderImageSequencePlayOptions>,&UE::CoreUObject::Private::Copy<FMovieGraphPostRenderImageSequencePlayOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EMoviePipelinePanoramicFilterType_StaticEnum @ 14dd5fa50

UEnum * __cdecl EMoviePipelinePanoramicFilterType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMoviePipelinePanoramicFilterType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UEnum_EMoviePipelinePanoramicFilterType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelinePanoramicFilterType,
                       (UObject *)pUVar1,L"EMoviePipelinePanoramicFilterType");
  }
  return Z_Registration_Info_UEnum_EMoviePipelinePanoramicFilterType.OuterSingleton;
}

// NewStructOps @ 14dd5fb40

void * __cdecl Z_Construct_UScriptStruct_FMovieGraphPostRenderSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xe0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieGraphPostRenderSettings,&UE::CoreUObject::Private::Construct<FMovieGraphPostRenderSettings>,&UE::CoreUObject::Private::ConstructForTests<FMovieGraphPostRenderSettings>,&UE::CoreUObject::Private::Destruct<FMovieGraphPostRenderSettings>,&UE::CoreUObject::Private::Copy<FMovieGraphPostRenderSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14dd5fc00

void * __thiscall
FMovieRenderPipelineCoreModule::_scalar_deleting_destructor_
          (FMovieRenderPipelineCoreModule *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->SettingsAssetValue).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SequenceAssetValue).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MoviePipelineClassType).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MoviePipelineLocalExecutorClassType).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// Z_Construct_UClass_UMoviePipelineFCPXMLExporter @ 14dd5fc80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMoviePipelineFCPXMLExporter(void)

{
  if (Z_Registration_Info_UClass_UMoviePipelineFCPXMLExporter.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMoviePipelineFCPXMLExporter.OuterSingleton,
               &Z_Construct_UClass_UMoviePipelineFCPXMLExporter_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMoviePipelineFCPXMLExporter.OuterSingleton;
}

// Z_Construct_UEnum_MovieRenderPipelineCore_FCPXMLExportDataSource @ 14dd5fcc0

UEnum * __cdecl Z_Construct_UEnum_MovieRenderPipelineCore_FCPXMLExportDataSource(void)

{
  if (Z_Registration_Info_UEnum_FCPXMLExportDataSource.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_FCPXMLExportDataSource.InnerSingleton,
               &Z_Construct_UEnum_MovieRenderPipelineCore_FCPXMLExportDataSource_Statics::EnumParams
              );
  }
  return Z_Registration_Info_UEnum_FCPXMLExportDataSource.InnerSingleton;
}

// FCPXMLExportDataSource_StaticEnum @ 14dd5fd00

UEnum * __cdecl FCPXMLExportDataSource_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_FCPXMLExportDataSource.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UEnum_FCPXMLExportDataSource.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_FCPXMLExportDataSource,
                       (UObject *)pUVar1,L"FCPXMLExportDataSource");
  }
  return Z_Registration_Info_UEnum_FCPXMLExportDataSource.OuterSingleton;
}

// Z_Construct_UClass_UMoviePipelineSetting_NoRegister @ 14dd5fd40

UClass * __cdecl Z_Construct_UClass_UMoviePipelineSetting_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineSetting.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineSetting",
               &Z_Registration_Info_UClass_UMoviePipelineSetting.InnerSingleton,
               UMoviePipelineSetting::StaticRegisterNativesUMoviePipelineSetting,0x48,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMoviePipelineSetting>,
               InternalVTableHelperCtorCaller<UMoviePipelineSetting>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineSetting.InnerSingleton;
}

// BinarySearchBy<TArray<TTuple<FMoviePipelineFrameOutputState,FMoviePipelineMergerOutputFrame>,TSizedDefaultAllocator<32>_>,FMoviePipelineFrameOutputState,TSortedMap<FMoviePipelineFrameOutputState,FMoviePipelineMergerOutputFrame,TSizedDefaultAllocator<32>,TLess<FMoviePipelineFrameOutputState_const_&>_>::FKeyForward,TLess<FMoviePipelineFrameOutputState_const_&>_> @ 14dd61f40

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<FMoviePipelineFrameOutputState,FMoviePipelineMergerOutputFrame>,TSizedDefaultAllocator<32>_>,FMoviePipelineFrameOutputState,TSortedMap<FMoviePipelineFrameOutputState,FMoviePipelineMergerOutputFrame,TSizedDefaultAllocator<32>,TLess<FMoviePipelineFrameOutputState_const_&>_>::FKeyForward,TLess<FMoviePipelineFrameOutputState_const_&>_>
          (TArray<TTuple<FMoviePipelineFrameOutputState,FMoviePipelineMergerOutputFrame>,TSizedDefaultAllocator<32>_>
           *param_1,FMoviePipelineFrameOutputState *param_2,FKeyForward param_3,
          TLess<FMoviePipelineFrameOutputState_const_&> param_4)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  pFVar2 = (param_1->AllocatorInstance).Data;
  iVar5 = 0;
  uVar1 = param_1->ArrayNum;
  if (0 < (int)uVar1) {
    uVar6 = uVar1;
    do {
      iVar4 = (uVar6 >> 1) + iVar5;
      if (*(int *)(pFVar2 + (longlong)iVar4 * 0x2a8) < param_2->OutputFrameNumber) {
        iVar5 = iVar4 + (uVar6 & 1);
      }
      uVar3 = uVar6 >> 1;
      uVar6 = uVar6 >> 1;
    } while (uVar3 != 0);
  }
  if ((int)uVar1 <= iVar5) {
    return -1;
  }
  iVar4 = -1;
  if (*(int *)(pFVar2 + (longlong)iVar5 * 0x2a8) <= param_2->OutputFrameNumber) {
    iVar4 = iVar5;
  }
  return iVar4;
}

// Cast<UMovieGraphPipeline,UMoviePipelineBase> @ 14dd61fd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMovieGraphPipeline * __cdecl
Cast<UMovieGraphPipeline,UMoviePipelineBase>(TObjectPtr<UMoviePipelineBase> *param_1)

{
  bool bVar1;
  UClass *pUVar2;
  
  if ((param_1->field0_0x0).DebugPtr != (UMoviePipelineBase *)0x0) {
    pUVar2 = Z_Construct_UClass_UMovieGraphPipeline_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)param_1,pUVar2);
    if (bVar1) {
      return (UMovieGraphPipeline *)(param_1->field0_0x0).DebugPtr;
    }
  }
  return (UMovieGraphPipeline *)0x0;
}

// CastChecked<ULevelSequence,UObject> @ 14dd62010

ULevelSequence * __cdecl CastChecked<ULevelSequence,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<ULevelSequence>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_ULevelSequence_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (ULevelSequence *)param_1;
  }
  pFVar3 = GetTypeName<ULevelSequence>(&local_28);
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

// CastChecked<UMoviePipelineExecutorJob,UObject> @ 14dd620d0

UMoviePipelineExecutorJob * __cdecl CastChecked<UMoviePipelineExecutorJob,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UMoviePipelineExecutorJob>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UMoviePipelineExecutorJob::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UMoviePipelineExecutorJob *)param_1;
  }
  pFVar3 = GetTypeName<UMoviePipelineExecutorJob>(&local_28);
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

// CastChecked<UMoviePipelinePrimaryConfig,UMoviePipelineConfigBase> @ 14dd62190

UMoviePipelinePrimaryConfig * __cdecl
CastChecked<UMoviePipelinePrimaryConfig,UMoviePipelineConfigBase>(UMoviePipelineConfigBase *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UMoviePipelineConfigBase *)0x0) {
    pFVar3 = GetTypeName<UMoviePipelinePrimaryConfig>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UMoviePipelinePrimaryConfig::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UMoviePipelinePrimaryConfig *)param_1;
  }
  pFVar3 = GetTypeName<UMoviePipelinePrimaryConfig>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UMoviePipelineConfigBase>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UMoviePipelineRenderPass,UMoviePipelineSetting> @ 14dd62250

UMoviePipelineRenderPass * __cdecl
CastChecked<UMoviePipelineRenderPass,UMoviePipelineSetting>(UMoviePipelineSetting *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UMoviePipelineSetting *)0x0) {
    pFVar3 = GetTypeName<UMoviePipelineRenderPass>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UMoviePipelineRenderPass_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UMoviePipelineRenderPass *)param_1;
  }
  pFVar3 = GetTypeName<UMoviePipelineRenderPass>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UMoviePipelineSetting>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UMovieSceneSubTrack,UMovieSceneTrack_const_> @ 14dd62310

UMovieSceneSubTrack * __cdecl
CastChecked<UMovieSceneSubTrack,UMovieSceneTrack_const_>(UMovieSceneTrack *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UMovieSceneTrack *)0x0) {
    pFVar3 = GetTypeName<UMovieSceneSubTrack>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UMovieSceneSubTrack_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UMovieSceneSubTrack *)param_1;
  }
  pFVar3 = GetTypeName<UMovieSceneSubTrack>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UMovieSceneTrack_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// ConstructItems<FMoviePipelinePassIdentifier,FMoviePipelinePassIdentifier,int> @ 14dd623d0

void __cdecl
ConstructItems<FMoviePipelinePassIdentifier,FMoviePipelinePassIdentifier,int>
          (void *param_1,FMoviePipelinePassIdentifier *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      FString::FString((FString *)(lVar1 + (longlong)param_2),&param_2->Name);
      FString::FString((FString *)(lVar1 + 0x10 + (longlong)param_2),&param_2->CameraName);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>,TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>,int> @ 14dd62430

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
ConstructItems<TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>,TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>,int>
          (void *param_1,TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *param_2,
          int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FCameraCutSubSectionHierarchyNode **)(lVar2 + (longlong)param_2) = param_2->Object;
      pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)param_2) = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<MoviePipeline::FCompositePassInfo,int> @ 14dd62a10

void __cdecl DefaultConstructItems<MoviePipeline::FCompositePassInfo,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      lVar1 = lVar1 + 0x28;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FImageOverlappedPlane,__int64> @ 14dd62a50

void __cdecl DefaultConstructItems<FImageOverlappedPlane,__int64>(void *param_1,long64 param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FImageTilePlane,__int64> @ 14dd62a80

void __cdecl DefaultConstructItems<FImageTilePlane,__int64>(void *param_1,long64 param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      puVar1 = puVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<TUniquePtr<MovieRenderPipeline::IVideoCodecWriter,TDefaultDelete<MovieRenderPipeline::IVideoCodecWriter>_>,TPromise<bool>_>,int> @ 14dd62b60

void __cdecl
DestructItems<TTuple<TUniquePtr<MovieRenderPipeline::IVideoCodecWriter,TDefaultDelete<MovieRenderPipeline::IVideoCodecWriter>_>,TPromise<bool>_>,int>
          (TTuple<TUniquePtr<MovieRenderPipeline::IVideoCodecWriter,TDefaultDelete<MovieRenderPipeline::IVideoCodecWriter>_>,TPromise<bool>_>
           *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)&param_1->field_0x8;
    do {
      if (((*plVar3 != 0) && (*(char *)(*plVar3 + 0x68) == '\0')) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)plVar3[1]);
      TDefaultDelete<MovieRenderPipeline::IVideoCodecWriter>::operator()
                ((TDefaultDelete<MovieRenderPipeline::IVideoCodecWriter> *)(plVar3 + -1),
                 (IVideoCodecWriter *)plVar3[-1]);
      plVar3 = plVar3 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<MoviePipeline::FCompositePassInfo,int> @ 14dd62be0

void __cdecl
DestructItems<MoviePipeline::FCompositePassInfo,int>(FCompositePassInfo *param_1,int param_2)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  
  if (param_2 != 0) {
    pFVar3 = &(param_1->PassIdentifier).CameraName;
    do {
      puVar1 = *(undefined8 **)(pFVar3 + 1);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      pFVar2 = (((FMoviePipelinePassIdentifier *)(pFVar3 + -1))->Name).Data.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      pFVar3 = (FString *)((longlong)(pFVar3 + 2) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FImageOverlappedPlane,__int64> @ 14dd62c40

void __cdecl
DestructItems<FImageOverlappedPlane,__int64>(FImageOverlappedPlane *param_1,long64 param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->ChannelData).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FImageTilePlane,__int64> @ 14dd62c80

void __cdecl DestructItems<FImageTilePlane,__int64>(FImageTilePlane *param_1,long64 param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->ChannelData).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FMoviePipelineConsoleVariableEntry,int> @ 14dd62cc0

void __cdecl
DestructItems<FMoviePipelineConsoleVariableEntry,int>
          (FMoviePipelineConsoleVariableEntry *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Name).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FMoviePipelineFrameOutputState,int> @ 14dd62d00

void __cdecl
DestructItems<FMoviePipelineFrameOutputState,int>
          (FMoviePipelineFrameOutputState *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->FileMetadata).field_0x40;
    do {
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      if ((void *)puVar1[-0x12] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0x12]);
      }
      if ((void *)puVar1[-0x14] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0x14]);
      }
      if ((void *)puVar1[-0x16] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0x16]);
      }
      puVar1 = puVar1 + 0x24;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FMoviePipelineSurfaceQueue::FResolveSurface,int> @ 14dd62d90

void __cdecl
DestructItems<FMoviePipelineSurfaceQueue::FResolveSurface,int>(FResolveSurface *param_1,int param_2)

{
  longlong *plVar1;
  TUniqueFunction<void___cdecl(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&)>
  *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->FunctionCallback;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((((TSharedPtr<FImagePixelDataPayload,1> *)(pTVar2 + 1))->SharedReferenceCount).
                 ReferenceController);
      if (*(longlong *)pTVar2 != 0) {
        plVar1 = (longlong *)&pTVar2->field_0x10;
        if (*(longlong **)&pTVar2->field_0x28 != (longlong *)0x0) {
          plVar1 = *(longlong **)&pTVar2->field_0x28;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)((longlong)(pTVar2 + -1) + 0x28));
      pTVar2 = (TUniqueFunction<void___cdecl(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&)>
                *)((TSharedPtr<FImagePixelDataPayload,1> *)(pTVar2 + 1) + 2);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// Enqueue<TRenderCommandTag<`FMoviePipelineSurfaceReader::ResizeImpl'::__l2::TSTR_CreateCaptureFrameTexture47>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14dd63e70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FMoviePipelineSurfaceReader::ResizeImpl_::__l2::TSTR_CreateCaptureFrameTexture47>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FMoviePipelineSurfaceReader::ResizeImpl'::__l2::TSTR_CreateCaptureFrameTexture47>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_14dd63fc1;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_14dd641b5;
  }
LAB_14dd63fc1:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14dd6409f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14dd6409f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_14dd641b5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UMoviePipeline::RenderFrame'::__l122::TSTR_MRQFrameThrottle489>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14dd641f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UMoviePipeline::RenderFrame_::__l122::TSTR_MRQFrameThrottle489>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UMoviePipeline::RenderFrame'::__l122::TSTR_MRQFrameThrottle489>::Get
                      ();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_14dd64341;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_14dd64535;
  }
LAB_14dd64341:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14dd6441f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14dd6441f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_14dd64535:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FMoviePipelineSurfaceQueue::Shutdown'::__l4::TSTR_PerformReadback302>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14dd64570

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FMoviePipelineSurfaceQueue::Shutdown_::__l4::TSTR_PerformReadback302>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FMoviePipelineSurfaceQueue::Shutdown'::__l4::TSTR_PerformReadback302>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_14dd646c1;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_14dd648b5;
  }
LAB_14dd646c1:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14dd6479f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14dd6479f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_14dd648b5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UMoviePipeline::FlushAsyncEngineSystems'::__l2::TSTR_VirtualTextureSystemFlushCommand678>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14dd648f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UMoviePipeline::FlushAsyncEngineSystems_::__l2::TSTR_VirtualTextureSystemFlushCommand678>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UMoviePipeline::FlushAsyncEngineSystems'::__l2::TSTR_VirtualTextureSystemFlushCommand678>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_14dd64a41;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_14dd64c35;
  }
LAB_14dd64a41:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14dd64b1f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14dd64b1f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_14dd64c35:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ForEachComponent_Internal<UChaosClothComponent,1,1,`AActor::GetComponents<UChaosClothComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_> @ 14dd65660

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
ForEachComponent_Internal<UChaosClothComponent,1,1,_AActor::GetComponents<UChaosClothComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
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
  UChaosClothComponent *pUVar8;
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
  local_res18.OutComponents = param_2.OutComponents;
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
  pUVar14 = Z_Construct_UClass_UChaosClothComponent_NoRegister();
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
    if (bVar12) goto LAB_14dd65783;
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
LAB_14dd65783:
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
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_180) goto LAB_14dd6581d;
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
LAB_14dd6581d:
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
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar16) goto LAB_14dd65920;
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
LAB_14dd65920:
  do {
    pTVar11 = local_158;
    if (*(int *)&(local_158->Elements).field_0x8 - *(int *)&(local_158->Elements).field_0x34 !=
        (int)uStack_130) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar5 = local_40;
    <Var10.OutComponents = local_res18.OutComponents;
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
        ForEachComponent_Internal<UChaosClothComponent,1,1,_AActor::GetComponents<UChaosClothComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_190,<Var10);
        FVar19 = (ForElementType<AActor_*>)((longlong)FVar19 + 8);
      }
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_108.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UChaosClothComponent **)
              (*(longlong *)&pTVar11->Elements + (longlong)TStack_150.CurrentBitIndex * 0x10);
    if (pUVar8 != (UChaosClothComponent *)0x0) {
      `AActor::GetComponents<UChaosClothComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>::
      operator()(&local_res18,pUVar8);
      pUVar13 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar5 = (int)pUVar13->_padding_;
      if (((iVar5 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
           &pUVar13->_padding_)) && (local_1a0 = pUVar8->_padding_, local_1a0 != 0)) {
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

// ForEachComponent_Internal<UChaosClothComponent,1,0,`AActor::GetComponents<UChaosClothComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_> @ 14dd65b90

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
ForEachComponent_Internal<UChaosClothComponent,1,0,_AActor::GetComponents<UChaosClothComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  UChaosClothComponent *pUVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res10 [8];
  TArray<UChaosClothComponent_*,TSizedDefaultAllocator<32>_> *local_res18;
  int local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar11 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar11 == 0) {
    return;
  }
  local_res18 = param_2.OutComponents;
  pUVar9 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar9 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar9->_padding_;
  if ((*(int *)(lVar11 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar9->_padding_)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (!bVar6) {
    return;
  }
  pUVar9 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar9 == (UClass *)0x0) {
    return;
  }
  pUVar10 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar9 != pUVar10) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                         ,0xf1c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pUVar10 = Z_Construct_UClass_UChaosClothComponent_NoRegister();
  if (pUVar10 != (UClass *)0x0) {
    iVar3 = (int)pUVar10->_padding_;
    if (((int)pUVar9->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar3 * 8) != &pUVar10->_padding_
       )) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_14dd65c96;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14dd65c96:
  iVar14 = 0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uVar7 = 1;
  iVar16 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14dd65d1d;
      uVar13 = puVar17[lVar11 + 1];
    }
    uVar7 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iVar8 = local_res20 + -1 + iVar16;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14dd65d1d:
  uVar13 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar14);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar13 != uVar7) {
    puVar15 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      uVar12 = uVar12 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14dd65e21;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar7 < (int)uVar13) {
      uVar13 = uVar7;
    }
  }
LAB_14dd65e21:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pUVar4 = *(UChaosClothComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar4 != (UChaosClothComponent *)0x0) {
      `AActor::GetComponents<UChaosClothComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>::
      operator()(&local_res18,pUVar4);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachComponent_Internal<UChaosClothComponent,0,1,`AActor::GetComponents<UChaosClothComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_> @ 14dd65ea0

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
ForEachComponent_Internal<UChaosClothComponent,0,1,_AActor::GetComponents<UChaosClothComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  UChaosClothComponent *pUVar8;
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
  local_res18.OutComponents = param_2.OutComponents;
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
  pUVar14 = Z_Construct_UClass_UChaosClothComponent_NoRegister();
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
    if (bVar13) goto LAB_14dd65f93;
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
LAB_14dd65f93:
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
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_178) goto LAB_14dd66040;
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
LAB_14dd66040:
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
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar17) goto LAB_14dd66150;
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
LAB_14dd66150:
  do {
    pTVar12 = local_150;
    if (*(int *)&(local_150->Elements).field_0x8 - *(int *)&(local_150->Elements).field_0x34 !=
        (int)uStack_128) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar4 = local_38;
    <Var10.OutComponents = local_res18.OutComponents;
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
        ForEachComponent_Internal<UChaosClothComponent,0,1,_AActor::GetComponents<UChaosClothComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_188,<Var10);
        FVar18 = (ForElementType<AActor_*>)((longlong)FVar18 + 8);
      }
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_100.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UChaosClothComponent **)
              (*(longlong *)&pTVar12->Elements + (longlong)TStack_148.CurrentBitIndex * 0x10);
    if (pUVar8 != (UChaosClothComponent *)0x0) {
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(pUVar8->_padding_ + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        `AActor::GetComponents<UChaosClothComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>
        ::operator()(&local_res18,pUVar8);
      }
      pUVar14 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar4 = (int)pUVar14->_padding_;
      if (((iVar4 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar14->_padding_)) && (local_1a0 = pUVar8->_padding_, local_1a0 != 0)) {
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

// ForEachComponent_Internal<UChaosClothComponent,0,0,`AActor::GetComponents<UChaosClothComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_> @ 14dd663e0

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
ForEachComponent_Internal<UChaosClothComponent,0,0,_AActor::GetComponents<UChaosClothComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  UChaosClothComponent *pUVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  UClass *pUVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res10 [8];
  TArray<UChaosClothComponent_*,TSizedDefaultAllocator<32>_> *local_res18;
  int local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
    return;
  }
  local_res18 = param_2.OutComponents;
  pUVar12 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar12 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar12->_padding_;
  if ((*(int *)(lVar4 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar12->_padding_)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if (!bVar9) {
    return;
  }
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
    return;
  }
  pUVar12 = Z_Construct_UClass_UChaosClothComponent_NoRegister();
  if (pUVar12 != (UClass *)0x0) {
    iVar3 = (int)pUVar12->_padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar12->_padding_)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (bVar9) goto LAB_14dd664be;
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar9) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_14dd664be:
  iVar14 = 0;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  puVar2 = &(this->OwnedComponents).Elements.field_0x10;
  uVar10 = 1;
  iVar16 = 0;
  iVar11 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar2;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      iVar14 = iVar14 + 1;
      iVar16 = iVar16 + 0x20;
      iVar11 = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar14) goto LAB_14dd6654f;
      uVar13 = puVar17[iVar14];
    }
    uVar10 = ~(uVar13 - 1) & uVar13;
    uVar1 = (ulonglong)uVar10 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res20 = (int)lVar7;
    iVar11 = local_res20 + -1 + iVar16;
    if (iVar3 < iVar11) {
      iVar11 = iVar3;
    }
  }
LAB_14dd6654f:
  uVar13 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar18 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar10,iVar14);
  TStack_60.CurrentBitIndex = iVar11;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar10 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar13 != uVar10) {
    puVar5 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar15 = puVar2;
    if (puVar5 != (undefined1 *)0x0) {
      puVar15 = puVar5;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      iVar14 = iVar14 + 1;
      uVar18 = uVar18 + 0x20;
      uVar13 = uVar10;
      if ((int)(((int)(uVar10 - 1) >> 0x1f & 0x1fU) + (uVar10 - 1)) >> 5 < iVar14)
      goto LAB_14dd66660;
      uVar13 = *(uint *)(puVar15 + (longlong)iVar14 * 4);
    }
    uVar1 = (ulonglong)(~(uVar13 - 1) & uVar13) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar13 = (int)lVar7 + -1 + uVar18;
    if ((int)uVar10 < (int)uVar13) {
      uVar13 = uVar10;
    }
  }
LAB_14dd66660:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    pUVar6 = *(UChaosClothComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar6 != (UChaosClothComponent *)0x0) {
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(pUVar6->_padding_ + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        `AActor::GetComponents<UChaosClothComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>
        ::operator()(&local_res18,pUVar6);
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// FormatNamed<wchar_t_const_(&)[16],FText> @ 14dd66700

void __cdecl
TextFormatUtil::FormatNamed<wchar_t_const_(&)[16],FText>
          (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           *param_1,wchar_t (*param_2) [16],FText *param_3)

{
  code *pcVar1;
  bool bVar2;
  TTuple<FString,FFormatArgumentValue> *this;
  
  this = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
         AllocateMemoryForEmplace<wchar_t_const_(&)[16]>(param_1,param_2);
  ::FString::FString((FString *)this,*param_2);
  *(undefined4 *)&this->field_0x10 = 4;
  FText::FText((FText *)&this->field_0x20,param_3);
  if (*(longlong *)&this->field_0x20 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// FormatNamed<wchar_t_const_(&)[11],FText> @ 14dd66780

void __cdecl
TextFormatUtil::FormatNamed<wchar_t_const_(&)[11],FText>
          (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           *param_1,wchar_t (*param_2) [11],FText *param_3)

{
  code *pcVar1;
  bool bVar2;
  TTuple<FString,FFormatArgumentValue> *this;
  
  this = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
         AllocateMemoryForEmplace<wchar_t_const_(&)[11]>(param_1,param_2);
  ::FString::FString((FString *)this,*param_2);
  *(undefined4 *)&this->field_0x10 = 4;
  FText::FText((FText *)&this->field_0x20,param_3);
  if (*(longlong *)&this->field_0x20 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// FormatNamed<wchar_t_const_(&)[11],FText,wchar_t_const_(&)[16],FText> @ 14dd66800

void __cdecl
TextFormatUtil::FormatNamed<wchar_t_const_(&)[11],FText,wchar_t_const_(&)[16],FText>
          (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           *param_1,wchar_t (*param_2) [11],FText *param_3,wchar_t (*param_4) [16],FText *param_5)

{
  code *pcVar1;
  bool bVar2;
  TTuple<FString,FFormatArgumentValue> *pTVar3;
  
  pTVar3 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[11]>(param_1,param_2);
  ::FString::FString((FString *)pTVar3,*param_2);
  *(undefined4 *)&pTVar3->field_0x10 = 4;
  FText::FText((FText *)&pTVar3->field_0x20,param_3);
  if (*(longlong *)&pTVar3->field_0x20 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar3 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[16]>(param_1,param_4);
  ::FString::FString((FString *)pTVar3,*param_4);
  *(undefined4 *)&pTVar3->field_0x10 = 4;
  FText::FText((FText *)&pTVar3->field_0x20,param_5);
  if (*(longlong *)&pTVar3->field_0x20 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// FormatNamed<wchar_t_const_(&)[13],FText> @ 14dd66900

void __cdecl
TextFormatUtil::FormatNamed<wchar_t_const_(&)[13],FText>
          (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           *param_1,wchar_t (*param_2) [13],FText *param_3)

{
  code *pcVar1;
  bool bVar2;
  TTuple<FString,FFormatArgumentValue> *this;
  
  this = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
         AllocateMemoryForEmplace<wchar_t_const_(&)[13]>(param_1,param_2);
  ::FString::FString((FString *)this,*param_2);
  *(undefined4 *)&this->field_0x10 = 4;
  FText::FText((FText *)&this->field_0x20,param_3);
  if (*(longlong *)&this->field_0x20 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// FormatNamed<wchar_t_const_(&)[13],FText,wchar_t_const_(&)[11],FText,wchar_t_const_(&)[16],FText> @ 14dd66b60

void __cdecl
TextFormatUtil::
FormatNamed<wchar_t_const_(&)[13],FText,wchar_t_const_(&)[11],FText,wchar_t_const_(&)[16],FText>
          (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           *param_1,wchar_t (*param_2) [13],FText *param_3,wchar_t (*param_4) [11],FText *param_5,
          wchar_t (*param_6) [16],FText *param_7)

{
  code *pcVar1;
  bool bVar2;
  TTuple<FString,FFormatArgumentValue> *pTVar3;
  
  pTVar3 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[13]>(param_1,param_2);
  ::FString::FString((FString *)pTVar3,*param_2);
  *(undefined4 *)&pTVar3->field_0x10 = 4;
  FText::FText((FText *)&pTVar3->field_0x20,param_3);
  if (*(longlong *)&pTVar3->field_0x20 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar3 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[11]>(param_1,param_4);
  ::FString::FString((FString *)pTVar3,*param_4);
  *(undefined4 *)&pTVar3->field_0x10 = 4;
  FText::FText((FText *)&pTVar3->field_0x20,param_5);
  if (*(longlong *)&pTVar3->field_0x20 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar3 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[16]>(param_1,param_6);
  ::FString::FString((FString *)pTVar3,*param_6);
  *(undefined4 *)&pTVar3->field_0x10 = 4;
  FText::FText((FText *)&pTVar3->field_0x20,param_7);
  if (*(longlong *)&pTVar3->field_0x20 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// GetFullNameForCastLogError<UMovieSceneTrack_const_> @ 14dd66cc0

FString * __cdecl
GetFullNameForCastLogError<UMovieSceneTrack_const_>
          (FString *__return_storage_ptr__,UMovieSceneTrack *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetFullNameForCastLogError<UMoviePipelineConfigBase> @ 14dd66cf0

FString * __cdecl
GetFullNameForCastLogError<UMoviePipelineConfigBase>
          (FString *__return_storage_ptr__,UMoviePipelineConfigBase *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetTypeName<ULevelSequence> @ 14dd66dd0

FString * __cdecl GetTypeName<ULevelSequence>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_ULevelSequence_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UMoviePipelineExecutorJob> @ 14dd66e10

FString * __cdecl GetTypeName<UMoviePipelineExecutorJob>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UMoviePipelineExecutorJob::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UMoviePipelinePrimaryConfig> @ 14dd66e50

FString * __cdecl GetTypeName<UMoviePipelinePrimaryConfig>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UMoviePipelinePrimaryConfig::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UMoviePipelineRenderPass> @ 14dd66e90

FString * __cdecl GetTypeName<UMoviePipelineRenderPass>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UMoviePipelineRenderPass_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UMovieSceneSubTrack> @ 14dd66ed0

FString * __cdecl GetTypeName<UMovieSceneSubTrack>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UMovieSceneSubTrack_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// InternalConstructor<UMovieGraphValueContainer> @ 14dd66f10

/* WARNING: Enum "EPropertyBagAlterationResult": Some values do not have unique names */

void __cdecl InternalConstructor<UMovieGraphValueContainer>(FObjectInitializer *param_1)

{
  UObject *this;
  FName FVar1;
  uint uVar2;
  int iVar3;
  
  this = param_1->Obj;
  if (this == (UObject *)0x0) {
    return;
  }
  UObject::UObject(this);
  *(undefined ***)this = &___7UMovieGraphValueContainer__6B_;
  *(undefined8 *)(this + 1) = 0;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&this[1].field_0x8);
  uVar2 = UMovieGraphValueContainer::PropertyBagDefaultPropertyName.Number;
  *(uint *)&this[1].field_0x0 =
       UMovieGraphValueContainer::PropertyBagDefaultPropertyName.ComparisonIndex.Value;
  *(uint *)&this[1].field_0x4 = uVar2;
  if ((*(uint *)&this->field_0x8 & 0x10) == 0) {
    iVar3 = FInstancedPropertyBag::GetNumPropertiesInBag
                      ((FInstancedPropertyBag *)&this[1].field_0x8);
    if (iVar3 == 0) {
      FVar1.ComparisonIndex.Value = *(uint *)&this[1].field_0x0;
      FVar1.Number = *(uint *)&this[1].field_0x4;
      FInstancedPropertyBag::AddProperty
                ((FInstancedPropertyBag *)&this[1].field_0x8,FVar1,Double,(UObject *)0x0,true);
    }
  }
  return;
}

// InternalConstructor<UMoviePipelineExecutorJob> @ 14dd66f30

void __cdecl InternalConstructor<UMoviePipelineExecutorJob>(FObjectInitializer *param_1)

{
  UObject *this;
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FName FStackX_8;
  
  this = param_1->Obj;
  if (this == (UObject *)0x0) {
    return;
  }
  UObject::UObject(this);
  *(undefined ***)this = &___7UMoviePipelineExecutorJob__6B_;
  *(undefined8 *)(this + 1) = 0;
  *(undefined8 *)&this[1].field_0x8 = 0;
  *(undefined8 *)&this[1].field_0x10 = 0;
  *(undefined8 *)&this[1].field_0x18 = 0;
  *(undefined8 *)&this[1].field_0x20 = 0;
  *(undefined8 *)(this + 2) = 0;
  *(undefined8 *)&this[2].field_0x8 = 0;
  *(undefined8 *)&this[2].field_0x10 = 0;
  *(undefined8 *)&this[2].field_0x18 = 0;
  *(undefined8 *)&this[2].field_0x20 = 0;
  *(undefined8 *)(this + 3) = 0;
  *(undefined8 *)&this[3].field_0x8 = 0;
  *(undefined8 *)&this[3].field_0x10 = 0;
  *(undefined8 *)&this[3].field_0x18 = 0;
  *(undefined8 *)&this[3].field_0x20 = 0;
  *(undefined8 *)(this + 4) = 0;
  *(undefined8 *)&this[4].field_0x8 = 0;
  *(undefined8 *)&this[4].field_0x10 = 0;
  *(undefined8 *)&this[4].field_0x18 = 0;
  *(undefined8 *)&this[4].field_0x20 = 0;
  *(undefined8 *)(this + 5) = 0;
  *(undefined8 *)&this[5].field_0x8 = 2;
  *(undefined8 *)&this[5].field_0x10 = 0;
  *(undefined8 *)&this[5].field_0x18 = 0;
  *(undefined8 *)&this[5].field_0x20 = 0;
  *(undefined8 *)(this + 6) = 0;
  *(undefined8 *)&this[6].field_0x10 = 0;
  *(undefined8 *)&this[7].field_0x8 = 0;
  *(undefined8 *)&this[7].field_0x10 = 0;
  *(undefined8 *)&this[6].field_0x18 = 0;
  *(undefined8 *)(this + 7) = 0;
  *(undefined8 *)&this[6].field_0x20 = 0;
  FUtf8String::Reset((FUtf8String *)&this[7].field_0x8,0);
  *(undefined8 *)&this[7].field_0x20 = 0;
  *(undefined8 *)&this[8].field_0x10 = 0;
  *(undefined8 *)&this[8].field_0x18 = 0;
  *(undefined8 *)&this[8].field_0x8 = 0;
  *(undefined8 *)(this + 8) = 0;
  FUtf8String::Reset((FUtf8String *)&this[8].field_0x10,0);
  *(undefined8 *)&this[8].field_0x20 = 0;
  *(undefined8 *)(this + 9) = 0;
  this[7].field_0x18 = 1;
  *(undefined4 *)&this[6].field_0x8 = 0;
  this[6].field_0xc = 0;
  pFVar2 = FName::FName(&FStackX_8,"DefaultConfig");
  FVar1 = *pFVar2;
  pUVar3 = UMoviePipelinePrimaryConfig::StaticClass();
  pUVar4 = UObject::CreateDefaultSubobject(this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  *(UObject **)&this[6].field_0x10 = pUVar4;
  return;
}

// InternalConstructor<UMoviePipelineExecutorShot> @ 14dd66f50

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl InternalConstructor<UMoviePipelineExecutorShot>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined1 *)(this + 1) = 1;
    *(undefined ***)this = &___7UMoviePipelineExecutorShot__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 2;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    FMoviePipelineCameraCutInfo::FMoviePipelineCameraCutInfo
              ((FMoviePipelineCameraCutInfo *)&this[3].field_0x18);
    *(undefined8 *)&this[9].field_0x8 = 0;
    *(undefined8 *)&this[10].field_0x10 = 0;
    *(undefined8 *)&this[10].field_0x18 = 0;
    *(undefined8 *)&this[9].field_0x10 = 0;
    *(undefined8 *)&this[9].field_0x18 = 0;
    *(undefined8 *)&this[9].field_0x20 = 0;
    *(undefined8 *)&this[10].field_0x8 = 0;
    *(undefined8 *)(this + 10) = 0;
    FUtf8String::Reset((FUtf8String *)&this[10].field_0x10,0);
    *(undefined8 *)&this[10].field_0x20 = 0;
    *(undefined8 *)&this[0xb].field_0x10 = 0;
    *(undefined8 *)&this[0xb].field_0x18 = 0;
    *(undefined8 *)&this[0xb].field_0x8 = 0;
    *(undefined8 *)(this + 0xb) = 0;
    FUtf8String::Reset((FUtf8String *)&this[0xb].field_0x10,0);
    *(undefined8 *)&this[0xb].field_0x20 = 0;
    *(undefined8 *)(this + 0xc) = 0;
    *(undefined8 *)&this[0xc].field_0x8 = 0;
    *(undefined8 *)&this[0xc].field_0x10 = 0;
    *(undefined4 *)(this + 9) = 0;
  }
  return;
}

// InternalConstructor<UMoviePipelineFCPXMLExporter> @ 14dd67070

void __cdecl InternalConstructor<UMoviePipelineFCPXMLExporter>(FObjectInitializer *param_1)

{
  UMoviePipelineOutputBase *this;
  
  this = (UMoviePipelineOutputBase *)param_1->Obj;
  if (this != (UMoviePipelineOutputBase *)0x0) {
    UMoviePipelineOutputBase::UMoviePipelineOutputBase(this);
    this[1].field_0x18 = 1;
    *(undefined ***)this = &___7UMoviePipelineFCPXMLExporter__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    this[1].field_0x30 = 0;
  }
  return;
}

// InternalConstructor<UMoviePipelineGameOverrideSetting> @ 14dd670c0

void __cdecl InternalConstructor<UMoviePipelineGameOverrideSetting>(FObjectInitializer *param_1)

{
  UObject *this;
  UClass *pUVar1;
  UClass *local_res8;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    this[1].field_0x8 = 1;
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this = &___7UMoviePipelineGameOverrideSetting__6B_;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    pUVar1 = Z_Construct_UClass_AMoviePipelineGameMode_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    FUtf8String::Reset((FUtf8String *)&this[2].field_0x18,0);
    local_res8 = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    FSoftObjectPtr::operator=((FSoftObjectPtr *)(this + 2),(FObjectPtr)&local_res8);
    *(undefined4 *)(this + 3) = 0x1010101;
    *(undefined4 *)&this[5].field_0x18 = 0xbf800000;
    *(undefined4 *)&this[5].field_0x1c = 0xbf800000;
    *(undefined8 *)&this[5].field_0x20 = 0;
    *(undefined8 *)(this + 6) = 0;
    *(undefined8 *)&this[6].field_0x8 = 0;
    *(undefined8 *)&this[6].field_0x10 = 0;
    this[3].field_0x4 = 1;
    *(undefined4 *)&this[3].field_0x8 = 10;
    *(undefined4 *)&this[3].field_0xc = 0x3a83126f;
    this[3].field_0x10 = 1;
    *(undefined4 *)&this[3].field_0x14 = 0x32;
    *(undefined2 *)&this[3].field_0x18 = 0x101;
    *(undefined4 *)&this[3].field_0x1c = 0x42480000;
    this[3].field_0x20 = 0;
    *(undefined4 *)&this[3].field_0x24 = 0x3f800000;
    *(undefined2 *)(this + 4) = 0x101;
    *(undefined4 *)&this[4].field_0x4 = 1;
    this[4].field_0x8 = 1;
    Scalability::FQualityLevels::SetDefaults((FQualityLevels *)&this[4].field_0x10);
  }
  return;
}

// InternalConstructor<UMoviePipelineInProcessExecutor> @ 14dd67230

void __cdecl InternalConstructor<UMoviePipelineInProcessExecutor>(FObjectInitializer *param_1)

{
  UMoviePipelineExecutorBase *this;
  
  this = (UMoviePipelineExecutorBase *)param_1->Obj;
  if (this != (UMoviePipelineExecutorBase *)0x0) {
    UMoviePipelineExecutorBase::UMoviePipelineExecutorBase(this);
    *(undefined4 *)&this[1].OnExecutorFinishedDelegate.field_0x4 = 0xffffffff;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UMoviePipelineInProcessExecutor__6B_;
    *(undefined8 *)&this[1].OnExecutorFinishedDelegate.field_0x10 = 0x3ff0000000000000;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1].OnExecutorFinishedDelegate = 0;
    *(undefined4 *)&this[1].OnExecutorFinishedDelegate.field_0x8 = 0;
    *(undefined8 *)&this[1].OnExecutorFinishedDelegateNative = 0;
    *(undefined4 *)&this[1].OnExecutorFinishedDelegateNative.field_0x8 = 0;
    *(undefined8 *)&this[1].OnExecutorFinishedDelegateNative.field_0x10 = 0;
    *(undefined8 *)&this[1].OnExecutorFinishedDelegateNative.field_0x18 = 0;
    *(undefined8 *)&this[1].OnExecutorErroredDelegate = 0;
    *(undefined8 *)&this[1].OnExecutorErroredDelegate.field_0x8 = 2;
  }
  return;
}

// InternalConstructor<UMoviePipelineLinearExecutorBase> @ 14dd672e0

void __cdecl InternalConstructor<UMoviePipelineLinearExecutorBase>(FObjectInitializer *param_1)

{
  UMoviePipelineExecutorBase *this;
  
  this = (UMoviePipelineExecutorBase *)param_1->Obj;
  if (this != (UMoviePipelineExecutorBase *)0x0) {
    UMoviePipelineExecutorBase::UMoviePipelineExecutorBase(this);
    this->_padding_ = (longlong)&___7UMoviePipelineLinearExecutorBase__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UMoviePipelineOutputSetting> @ 14dd67330

void __cdecl InternalConstructor<UMoviePipelineOutputSetting>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    this[1].field_0x8 = 1;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    this[2].field_0x20 = 0;
    *(undefined4 *)&this[3].field_0xc = 0;
    this[3].field_0x14 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    this[4].field_0x8 = 0;
    *(undefined ***)this = &___7UMoviePipelineOutputSetting__6B_;
    *(undefined4 *)&this[2].field_0x18 = 0x780;
    *(undefined4 *)&this[2].field_0x1c = 0x438;
    *(undefined4 *)&this[2].field_0x24 = 0x18;
    *(undefined8 *)(this + 3) = 1;
    this[3].field_0x8 = 1;
    *(undefined4 *)&this[3].field_0x10 = 1;
    *(undefined4 *)&this[3].field_0x20 = 1;
    this[3].field_0x24 = 1;
    *(undefined8 *)(this + 4) = 4;
    FString::operator=((FString *)&this[2].field_0x8,L"{sequence_name}.{frame_number}");
    FString::operator=((FString *)&this[1].field_0x20,L"{project_dir}/Saved/MovieRenders/");
  }
  return;
}

// InternalConstructor<UMoviePipelinePrimaryConfig> @ 14dd67420

void __cdecl InternalConstructor<UMoviePipelinePrimaryConfig>(FObjectInitializer *param_1)

{
  UMoviePipelineConfigBase *this;
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FName local_res8;
  
  this = (UMoviePipelineConfigBase *)param_1->Obj;
  if (this != (UMoviePipelineConfigBase *)0x0) {
    UMoviePipelineConfigBase::UMoviePipelineConfigBase(this);
    this->_padding_ = (longlong)&___7UMoviePipelinePrimaryConfig__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1].DisplayName.Data.AllocatorInstance.Data = 0;
    *(undefined4 *)((longlong)&this[1].DisplayName.Data.AllocatorInstance.Data + 4) = 0x80;
    this[1].DisplayName.Data.ArrayNum = -1;
    this[1].DisplayName.Data.ArrayMax = 0;
    this[1].Settings.ArrayNum = 0;
    this[1].Settings.ArrayMax = 0;
    *(undefined4 *)&this[1].ConfigOrigin.SoftObjectPtr = 0;
    *(undefined8 *)&this[1].ConfigOrigin.SoftObjectPtr.field_0x8 = 0;
    *(undefined8 *)&this[1].ConfigOrigin.SoftObjectPtr.field_0x10 = 0;
    *(undefined8 *)&this[1].ConfigOrigin.SoftObjectPtr.field_0x18 = 0;
    pFVar2 = FName::FName(&local_res8,"DefaultOutputSetting");
    FVar1 = *pFVar2;
    pUVar3 = UMoviePipelineOutputSetting::StaticClass();
    pUVar4 = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    *(UObject **)&this[1].ConfigOrigin.SoftObjectPtr.field_0x8 = pUVar4;
  }
  return;
}

// InternalConstructor<UMoviePipelinePythonHostExecutor> @ 14dd67510

void __cdecl InternalConstructor<UMoviePipelinePythonHostExecutor>(FObjectInitializer *param_1)

{
  UMoviePipelineExecutorBase *this;
  
  this = (UMoviePipelineExecutorBase *)param_1->Obj;
  if (this != (UMoviePipelineExecutorBase *)0x0) {
    UMoviePipelineExecutorBase::UMoviePipelineExecutorBase(this);
    this->_padding_ = (longlong)&___7UMoviePipelinePythonHostExecutor__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UMoviePipelineQueue> @ 14dd67560

void __cdecl InternalConstructor<UMoviePipelineQueue>(FObjectInitializer *param_1)

{
  UObjectBase *this;
  
  this = (UObjectBase *)param_1->Obj;
  if (this != (UObjectBase *)0x0) {
    UObject::UObject((UObject *)this);
    this->_padding_ = (longlong)&___7UMoviePipelineQueue__6B_;
    this[1]._padding_ = 0;
    this[1].ObjectFlags = RF_NoFlags;
    this[1].InternalIndex = 0;
    (((TArray<char8_t,TSizedDefaultAllocator<32>_> *)&this[2]._padding_)->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    this[2].ObjectFlags = RF_NoFlags;
    this[2].InternalIndex = 0;
    this[1].ClassPrivate.ObjectPtr.field0_0x0.DebugPtr = (UClass *)0x0;
    this[1].OuterPrivate.ObjectPtr.field0_0x0.DebugPtr = (UObject *)0x0;
    this[1].NamePrivate.Name = (FName)0x0;
    FUtf8String::Reset((FUtf8String *)(this + 2),0);
    *(undefined4 *)&this[2].ClassPrivate.ObjectPtr.field0_0x0 = 0;
    *(undefined1 *)((longlong)&this[2].ClassPrivate.ObjectPtr.field0_0x0 + 4) = 0;
    if ((this->ObjectFlags & RF_ClassDefaultObject) == RF_NoFlags) {
      UObjectBase::AtomicallySetFlags(this,RF_Transactional);
      return;
    }
  }
  return;
}

// InternalConstructor<UMoviePipelineQueueEngineSubsystem> @ 14dd675e0

void __cdecl InternalConstructor<UMoviePipelineQueueEngineSubsystem>(FObjectInitializer *param_1)

{
  UEngineSubsystem *this;
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FName local_res8;
  
  this = (UEngineSubsystem *)param_1->Obj;
  if (this != (UEngineSubsystem *)0x0) {
    UEngineSubsystem::UEngineSubsystem(this);
    *(undefined ***)this = &___7UMoviePipelineQueueEngineSubsystem__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined1 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    pFVar2 = FName::FName(&local_res8,"EngineMoviePipelineQueue");
    FVar1 = *pFVar2;
    pUVar3 = UMoviePipelineQueue::StaticClass();
    pUVar4 = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    *(UObject **)&this[1].field_0x20 = pUVar4;
    *(undefined8 *)&this[3].field_0x8 = 0;
    this[3].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<UMoviePipelineSetting> @ 14dd676b0

void __cdecl InternalConstructor<UMoviePipelineSetting>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    this[1].field_0x8 = 1;
    *(undefined ***)this = &___7UMoviePipelineSetting__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<UMoviePipelineSetting_BlueprintBase> @ 14dd676f0

void __cdecl InternalConstructor<UMoviePipelineSetting_BlueprintBase>(FObjectInitializer *param_1)

{
  UObject *this;
  FText *pFVar1;
  FText local_18;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    this[1].field_0x8 = 1;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined ***)this = &___7UMoviePipelineSetting_BlueprintBase__6B_;
    FText::FText((FText *)&this[1].field_0x20);
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"MovieRenderPipelineBP",L"DefaultCategoryName_Text",
                        L"Custom Settings");
    FText::operator=((FText *)&this[1].field_0x20,pFVar1);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    *(undefined2 *)&this[2].field_0x8 = 0x101;
    this[2].field_0xa = 1;
  }
  return;
}

// InternalConstructor<UMoviePipelineShotConfig> @ 14dd67790

void __cdecl InternalConstructor<UMoviePipelineShotConfig>(FObjectInitializer *param_1)

{
  UMoviePipelineConfigBase *this;
  
  this = (UMoviePipelineConfigBase *)param_1->Obj;
  if (this != (UMoviePipelineConfigBase *)0x0) {
    UMoviePipelineConfigBase::UMoviePipelineConfigBase(this);
    this->_padding_ = (longlong)&___7UMoviePipelineShotConfig__6B_;
  }
  return;
}

// InternalConstructor<UMoviePipelineVideoOutputBase> @ 14dd677c0

void __cdecl InternalConstructor<UMoviePipelineVideoOutputBase>(FObjectInitializer *param_1)

{
  UMoviePipelineOutputBase *this;
  
  this = (UMoviePipelineOutputBase *)param_1->Obj;
  if (this != (UMoviePipelineOutputBase *)0x0) {
    UMoviePipelineOutputBase::UMoviePipelineOutputBase(this);
    *(undefined ***)this = &___7UMoviePipelineVideoOutputBase__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x38 = 0;
    *(undefined4 *)&this[1].field_0x40 = 0;
    *(undefined4 *)&this[1].field_0x44 = 4;
  }
  return;
}

// InternalVTableHelperCtorCaller<UMovieGraphValueContainer> @ 14dd67810

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieGraphValueContainer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphValueContainer::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieGraphValueContainer__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    FInstancedStruct::FInstancedStruct((FInstancedStruct *)&pUVar1[1].field_0x8);
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMoviePipelineExecutorJob> @ 14dd678d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMoviePipelineExecutorJob>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMoviePipelineExecutorJob::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMoviePipelineExecutorJob__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 5) = 0;
    *(undefined8 *)&pUVar1[5].field_0x8 = 2;
    *(undefined8 *)&pUVar1[5].field_0x10 = 0;
    *(undefined8 *)&pUVar1[5].field_0x18 = 0;
    *(undefined8 *)&pUVar1[5].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 6) = 0;
    *(undefined8 *)&pUVar1[6].field_0x10 = 0;
    *(undefined8 *)&pUVar1[7].field_0x8 = 0;
    *(undefined8 *)&pUVar1[7].field_0x10 = 0;
    *(undefined8 *)&pUVar1[6].field_0x18 = 0;
    *(undefined8 *)(pUVar1 + 7) = 0;
    *(undefined8 *)&pUVar1[6].field_0x20 = 0;
    FUtf8String::Reset((FUtf8String *)&pUVar1[7].field_0x8,0);
    *(undefined8 *)&pUVar1[7].field_0x20 = 0;
    *(undefined8 *)&pUVar1[8].field_0x10 = 0;
    *(undefined8 *)&pUVar1[8].field_0x18 = 0;
    *(undefined8 *)&pUVar1[8].field_0x8 = 0;
    *(undefined8 *)(pUVar1 + 8) = 0;
    FUtf8String::Reset((FUtf8String *)&pUVar1[8].field_0x10,0);
    *(undefined8 *)&pUVar1[8].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 9) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMoviePipelineExecutorShot> @ 14dd678e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMoviePipelineExecutorShot>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMoviePipelineExecutorShot::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMoviePipelineExecutorShot__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 2;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    FMoviePipelineCameraCutInfo::FMoviePipelineCameraCutInfo
              ((FMoviePipelineCameraCutInfo *)&pUVar1[3].field_0x18);
    *(undefined8 *)&pUVar1[9].field_0x8 = 0;
    *(undefined8 *)&pUVar1[10].field_0x10 = 0;
    *(undefined8 *)&pUVar1[10].field_0x18 = 0;
    *(undefined8 *)&pUVar1[9].field_0x10 = 0;
    *(undefined8 *)&pUVar1[9].field_0x18 = 0;
    *(undefined8 *)&pUVar1[9].field_0x20 = 0;
    *(undefined8 *)&pUVar1[10].field_0x8 = 0;
    *(undefined8 *)(pUVar1 + 10) = 0;
    FUtf8String::Reset((FUtf8String *)&pUVar1[10].field_0x10,0);
    *(undefined8 *)&pUVar1[10].field_0x20 = 0;
    *(undefined8 *)&pUVar1[0xb].field_0x10 = 0;
    *(undefined8 *)&pUVar1[0xb].field_0x18 = 0;
    *(undefined8 *)&pUVar1[0xb].field_0x8 = 0;
    *(undefined8 *)(pUVar1 + 0xb) = 0;
    FUtf8String::Reset((FUtf8String *)&pUVar1[0xb].field_0x10,0);
    *(undefined8 *)&pUVar1[0xb].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 0xc) = 0;
    *(undefined8 *)&pUVar1[0xc].field_0x8 = 0;
    *(undefined8 *)&pUVar1[0xc].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMoviePipelineFCPXMLExporter> @ 14dd67a60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMoviePipelineFCPXMLExporter>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMoviePipelineOutputBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMoviePipelineFCPXMLExporter::GetPrivateStaticClass();
  this = (UMoviePipelineOutputBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMoviePipelineOutputBase *)0x0) {
    UMoviePipelineOutputBase::UMoviePipelineOutputBase(this,param_1);
    *(undefined ***)this = &___7UMoviePipelineFCPXMLExporter__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMoviePipelineGameOverrideSetting> @ 14dd67b20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMoviePipelineGameOverrideSetting>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMoviePipelineGameOverrideSetting::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined ***)pUVar1 = &___7UMoviePipelineGameOverrideSetting__6B_;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    FUtf8String::Reset((FUtf8String *)&pUVar1[2].field_0x18,0);
    *(undefined4 *)&pUVar1[5].field_0x18 = 0xbf800000;
    *(undefined4 *)&pUVar1[5].field_0x1c = 0xbf800000;
    *(undefined8 *)&pUVar1[5].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 6) = 0;
    *(undefined8 *)&pUVar1[6].field_0x8 = 0;
    *(undefined8 *)&pUVar1[6].field_0x10 = 0;
    Scalability::FQualityLevels::SetDefaults((FQualityLevels *)&pUVar1[4].field_0x10);
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMoviePipelineInProcessExecutor> @ 14dd67c30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMoviePipelineInProcessExecutor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMoviePipelineExecutorBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMoviePipelineInProcessExecutor::GetPrivateStaticClass();
  this = (UMoviePipelineExecutorBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMoviePipelineExecutorBase *)0x0) {
    UMoviePipelineExecutorBase::UMoviePipelineExecutorBase(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UMoviePipelineInProcessExecutor__6B_;
    *(undefined8 *)&this[1].OnExecutorFinishedDelegate.field_0x10 = 0x3ff0000000000000;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1].OnExecutorFinishedDelegate.field_0x8 = 0;
    *(undefined8 *)&this[1].OnExecutorFinishedDelegateNative = 0;
    *(undefined4 *)&this[1].OnExecutorFinishedDelegateNative.field_0x8 = 0;
    *(undefined8 *)&this[1].OnExecutorFinishedDelegateNative.field_0x10 = 0;
    *(undefined8 *)&this[1].OnExecutorFinishedDelegateNative.field_0x18 = 0;
    *(undefined8 *)&this[1].OnExecutorErroredDelegate = 0;
    *(undefined8 *)&this[1].OnExecutorErroredDelegate.field_0x8 = 2;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMoviePipelineLinearExecutorBase> @ 14dd67d40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMoviePipelineLinearExecutorBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMoviePipelineExecutorBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMoviePipelineLinearExecutorBase::GetPrivateStaticClass();
  this = (UMoviePipelineExecutorBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMoviePipelineExecutorBase *)0x0) {
    UMoviePipelineExecutorBase::UMoviePipelineExecutorBase(this,param_1);
    this->_padding_ = (longlong)&___7UMoviePipelineLinearExecutorBase__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMoviePipelineOutputSetting> @ 14dd67e00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMoviePipelineOutputSetting>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMoviePipelineOutputSetting::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UMoviePipelineOutputSetting__6B_;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined4 *)&pUVar1[2].field_0x24 = 60000;
    *(undefined4 *)(pUVar1 + 3) = 1;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMoviePipelinePrimaryConfig> @ 14dd67ee0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMoviePipelinePrimaryConfig>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMoviePipelineConfigBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMoviePipelinePrimaryConfig::GetPrivateStaticClass();
  this = (UMoviePipelineConfigBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMoviePipelineConfigBase *)0x0) {
    UMoviePipelineConfigBase::UMoviePipelineConfigBase(this,param_1);
    this->_padding_ = (longlong)&___7UMoviePipelinePrimaryConfig__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1].DisplayName.Data.AllocatorInstance.Data = 0;
    *(undefined4 *)((longlong)&this[1].DisplayName.Data.AllocatorInstance.Data + 4) = 0x80;
    this[1].DisplayName.Data.ArrayNum = -1;
    this[1].DisplayName.Data.ArrayMax = 0;
    this[1].Settings.ArrayNum = 0;
    this[1].Settings.ArrayMax = 0;
    *(undefined4 *)&this[1].ConfigOrigin.SoftObjectPtr = 0;
    *(undefined8 *)&this[1].ConfigOrigin.SoftObjectPtr.field_0x8 = 0;
    *(undefined8 *)&this[1].ConfigOrigin.SoftObjectPtr.field_0x10 = 0;
    *(undefined8 *)&this[1].ConfigOrigin.SoftObjectPtr.field_0x18 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMoviePipelinePythonHostExecutor> @ 14dd67fe0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMoviePipelinePythonHostExecutor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMoviePipelineExecutorBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMoviePipelinePythonHostExecutor::GetPrivateStaticClass();
  this = (UMoviePipelineExecutorBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMoviePipelineExecutorBase *)0x0) {
    UMoviePipelineExecutorBase::UMoviePipelineExecutorBase(this,param_1);
    this->_padding_ = (longlong)&___7UMoviePipelinePythonHostExecutor__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMoviePipelineQueue> @ 14dd680a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMoviePipelineQueue>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMoviePipelineQueue::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMoviePipelineQueue__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    FUtf8String::Reset((FUtf8String *)(pUVar1 + 2),0);
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMoviePipelineQueueEngineSubsystem> @ 14dd68170

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMoviePipelineQueueEngineSubsystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UEngineSubsystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMoviePipelineQueueEngineSubsystem::GetPrivateStaticClass();
  this = (UEngineSubsystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UEngineSubsystem *)0x0) {
    UEngineSubsystem::UEngineSubsystem(this,param_1);
    *(undefined ***)this = &___7UMoviePipelineQueueEngineSubsystem__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined1 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMoviePipelineSetting> @ 14dd68240

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMoviePipelineSetting>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMoviePipelineSetting::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMoviePipelineSetting__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMoviePipelineSetting_BlueprintBase> @ 14dd68300

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMoviePipelineSetting_BlueprintBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMoviePipelineSetting_BlueprintBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UMoviePipelineSetting_BlueprintBase__6B_;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    FText::FText((FText *)&pUVar1[1].field_0x20);
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMoviePipelineShotConfig> @ 14dd683c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMoviePipelineShotConfig>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMoviePipelineConfigBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMoviePipelineShotConfig::GetPrivateStaticClass();
  this = (UMoviePipelineConfigBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMoviePipelineConfigBase *)0x0) {
    UMoviePipelineConfigBase::UMoviePipelineConfigBase(this,param_1);
    this->_padding_ = (longlong)&___7UMoviePipelineShotConfig__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMoviePipelineVideoOutputBase> @ 14dd68470

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMoviePipelineVideoOutputBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMoviePipelineOutputBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMoviePipelineVideoOutputBase::GetPrivateStaticClass();
  this = (UMoviePipelineOutputBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMoviePipelineOutputBase *)0x0) {
    UMoviePipelineOutputBase::UMoviePipelineOutputBase(this,param_1);
    *(undefined ***)this = &___7UMoviePipelineVideoOutputBase__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x38 = 0;
    *(undefined4 *)&this[1].field_0x40 = 0;
    *(undefined4 *)&this[1].field_0x44 = 4;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IsObjectPtrEqual<UMovieGraphConfig,UMovieGraphConfig_*,0> @ 14dd68590

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UMovieGraphConfig,UMovieGraphConfig_*,0>
          (TObjectPtr<UMovieGraphConfig> *param_1,UMovieGraphConfig **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UMovieGraphConfig *)0x0) {
    return *param_2 == (UMovieGraphConfig *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UMoviePipelineCustomTimeStep,UEngineCustomTimeStep_*,0> @ 14dd685b0

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UMoviePipelineCustomTimeStep,UEngineCustomTimeStep_*,0>
          (TObjectPtr<UMoviePipelineCustomTimeStep> *param_1,UEngineCustomTimeStep **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UMoviePipelineCustomTimeStep *)0x0) {
    return (UMoviePipelineCustomTimeStep *)*param_2 == (UMoviePipelineCustomTimeStep *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == (UMoviePipelineCustomTimeStep *)*param_2;
}

// LowerBoundInternal<TTuple<FMoviePipelineFrameOutputState,FMoviePipelineMergerOutputFrame>_const_,int,FMoviePipelineFrameOutputState,TSortedMap<FMoviePipelineFrameOutputState,FMoviePipelineMergerOutputFrame,TSizedDefaultAllocator<32>,TLess<FMoviePipelineFrameOutputState_const_&>_>::FKeyForward,TLess<FMoviePipelineFrameOutputState_const_&>_> @ 14dd685d0

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<FMoviePipelineFrameOutputState,FMoviePipelineMergerOutputFrame>_const_,int,FMoviePipelineFrameOutputState,TSortedMap<FMoviePipelineFrameOutputState,FMoviePipelineMergerOutputFrame,TSizedDefaultAllocator<32>,TLess<FMoviePipelineFrameOutputState_const_&>_>::FKeyForward,TLess<FMoviePipelineFrameOutputState_const_&>_>
          (TTuple<FMoviePipelineFrameOutputState,FMoviePipelineMergerOutputFrame> *param_1,
          int param_2,FMoviePipelineFrameOutputState *param_3,FKeyForward param_4,
          TLess<FMoviePipelineFrameOutputState_const_&> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (*(int *)(param_1 + iVar1) < param_3->OutputFrameNumber) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// LowerBoundInternal<TTuple<FString,FFormatArgumentValue>_const_,int,wchar_t_[13],TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::FKeyForward,FLocKeySortedMapLess> @ 14dd68630

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<FString,FFormatArgumentValue>_const_,int,wchar_t_[13],TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::FKeyForward,FLocKeySortedMapLess>
          (TTuple<FString,FFormatArgumentValue> *param_1,int param_2,wchar_t (*param_3) [13],
          FKeyForward param_4,FLocKeySortedMapLess param_5)

{
  int iVar1;
  uint uVar2;
  ForAnyElementType FVar3;
  int iVar4;
  wchar_t *_Str1;
  ForAnyElementType _Str2;
  int iVar5;
  FString local_38;
  
  iVar5 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar5;
      ::FString::FString(&local_38,*param_3);
      FVar3.Data = local_38.Data.AllocatorInstance.Data;
      _Str2.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        _Str2.Data = local_38.Data.AllocatorInstance.Data;
      }
      if (*(int *)&param_1[iVar1].field_0x8 == 0) {
        _Str1 = L"";
      }
      else {
        _Str1 = *(wchar_t **)(param_1 + iVar1);
      }
      iVar4 = wcscmp(_Str1,(wchar_t *)_Str2.Data);
      if (iVar4 < 0) {
        iVar5 = iVar1 + (param_2 & 1U);
      }
      if (FVar3.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar3.Data);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar5;
}

// Merge<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>::FValueComparisonClass<`FMoviePipelineOutputMerger::OnCompleteRenderPassDataAvailable_AnyThread'::__l29::<lambda_3>_>_>_>_> @ 14dd68700

void __cdecl
AlgoImpl::
Merge<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>::FValueComparisonClass<_FMoviePipelineOutputMerger::OnCompleteRenderPassDataAvailable_AnyThread_::__l29::<lambda_3>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_> *param_1,int param_2,int param_3,
          FIdentityFunctor param_4,
          FElementCompareClass<TSet<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>::FValueComparisonClass<_public:_virtual_void___cdecl_FMoviePipelineOutputMerger::OnCompleteRenderPassDataAvailable_AnyThread(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&)_::_29_::<lambda_3>_>_>_>
          param_5)

{
  undefined8 uVar1;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>_s_1 TVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_> *pTVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_> *pTVar13;
  uint uVar14;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_> *pTVar15;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_> *pTVar16;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_> *pTVar17;
  int iVar18;
  uint uVar19;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_> *pTVar12;
  
  if (0 < param_2) {
    iVar10 = 0;
    do {
      if (param_3 <= param_2) {
        return;
      }
      iVar18 = 0;
      if (0 < param_2 - iVar10) {
        uVar14 = param_2 - iVar10;
        do {
          iVar8 = (uVar14 >> 1) + iVar18;
          if (*(int *)(*(longlong *)
                        (*(longlong *)
                          ((longlong)param_1 + ((longlong)iVar8 + (longlong)iVar10) * 0x30 + 0x20) +
                        0x18) + 0x2d4) <=
              *(int *)(*(longlong *)
                        (*(longlong *)((longlong)param_1 + (longlong)param_2 * 0x30 + 0x20) + 0x18)
                      + 0x2d4)) {
            iVar18 = iVar8 + (uVar14 & 1);
          }
          uVar19 = uVar14 >> 1;
          uVar14 = uVar14 >> 1;
        } while (uVar19 != 0);
      }
      iVar10 = iVar10 + iVar18;
      if (param_2 <= iVar10) {
        return;
      }
      iVar18 = 0;
      pTVar15 = param_1 + iVar10;
      if (0 < param_3 - param_2) {
        uVar14 = param_3 - param_2;
        iVar18 = 0;
        do {
          uVar19 = uVar14 >> 1;
          if (*(int *)(*(longlong *)
                        (*(longlong *)
                          ((longlong)param_1 +
                          ((longlong)(int)(uVar19 + iVar18) + (longlong)param_2) * 0x30 + 0x20) +
                        0x18) + 0x2d4) <
              *(int *)(*(longlong *)(*(longlong *)((pTVar15->ElementData).Pad + 0x20) + 0x18) +
                      0x2d4)) {
            iVar18 = uVar19 + iVar18 + (uVar14 & 1);
          }
          uVar14 = uVar19;
        } while (uVar19 != 0);
      }
      iVar9 = (iVar18 - iVar10) + param_2;
      iVar8 = param_2 - iVar10;
      if ((iVar8 != 0) && (iVar8 < iVar9)) {
        pTVar11 = pTVar15 + iVar8;
        pTVar16 = pTVar15;
        pTVar12 = pTVar15 + iVar8;
        do {
          while( true ) {
            pTVar13 = pTVar11 + 1;
            pTVar17 = pTVar16 + 1;
            uVar1 = *(undefined8 *)((longlong)(pTVar11->ElementData).Pad + 8);
            TVar2 = pTVar16->_s_1;
            uVar3 = *(undefined8 *)((pTVar16->ElementData).Pad + 8);
            uVar4 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x10);
            uVar5 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x18);
            uVar6 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x20);
            uVar7 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x28);
            pTVar16->_s_1 = pTVar11->_s_1;
            *(undefined8 *)((pTVar16->ElementData).Pad + 8) = uVar1;
            uVar1 = *(undefined8 *)((longlong)(pTVar11->ElementData).Pad + 0x18);
            *(undefined8 *)((pTVar16->ElementData).Pad + 0x10) =
                 *(undefined8 *)((longlong)(pTVar11->ElementData).Pad + 0x10);
            *(undefined8 *)((pTVar16->ElementData).Pad + 0x18) = uVar1;
            uVar1 = *(undefined8 *)((longlong)(pTVar11->ElementData).Pad + 0x28);
            *(undefined8 *)((pTVar16->ElementData).Pad + 0x20) =
                 *(undefined8 *)((longlong)(pTVar11->ElementData).Pad + 0x20);
            *(undefined8 *)((pTVar16->ElementData).Pad + 0x28) = uVar1;
            pTVar11->_s_1 = TVar2;
            *(undefined8 *)((longlong)(pTVar11->ElementData).Pad + 8) = uVar3;
            *(undefined8 *)((longlong)(pTVar11->ElementData).Pad + 0x10) = uVar4;
            *(undefined8 *)((longlong)(pTVar11->ElementData).Pad + 0x18) = uVar5;
            *(undefined8 *)((longlong)(pTVar11->ElementData).Pad + 0x20) = uVar6;
            *(undefined8 *)((longlong)(pTVar11->ElementData).Pad + 0x28) = uVar7;
            pTVar16 = pTVar17;
            if (pTVar13 == pTVar15 + iVar9) break;
            pTVar11 = pTVar13;
            if (pTVar17 == pTVar12) {
              pTVar12 = pTVar13;
            }
          }
          pTVar11 = pTVar12;
        } while (pTVar17 != pTVar12);
      }
      param_2 = param_2 + iVar18;
      iVar10 = iVar10 + 1 + iVar18;
    } while (iVar10 < param_2);
  }
  return;
}

// NewObject<UMovieJobVariableAssignmentContainer> @ 14dd689e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieJobVariableAssignmentContainer * __cdecl
NewObject<UMovieJobVariableAssignmentContainer>(UObject *param_1)

{
  UClass *pUVar1;
  UMovieJobVariableAssignmentContainer *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UMovieJobVariableAssignmentContainer_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UMovieJobVariableAssignmentContainer *)
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

// NewObject<UMoviePipelineBase> @ 14dd68a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMoviePipelineBase * __cdecl
NewObject<UMoviePipelineBase>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UMoviePipelineBase *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UMoviePipelineBase_NoRegister();
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
  pUVar2 = (UMoviePipelineBase *)
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

// NewObject<UMoviePipelineExecutorBase> @ 14dd68b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMoviePipelineExecutorBase * __cdecl
NewObject<UMoviePipelineExecutorBase>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UMoviePipelineExecutorBase *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UMoviePipelineExecutorBase_NoRegister();
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
  pUVar2 = (UMoviePipelineExecutorBase *)
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

// NewObject<UMoviePipelineExecutorJob> @ 14dd68c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMoviePipelineExecutorJob * __cdecl
NewObject<UMoviePipelineExecutorJob>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UMoviePipelineExecutorJob *pUVar2;
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
  pUVar1 = UMoviePipelineExecutorJob::StaticClass();
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
  pUVar2 = (UMoviePipelineExecutorJob *)
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

// NewObject<UMoviePipelineInProcessExecutor> @ 14dd68d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMoviePipelineInProcessExecutor * __cdecl
NewObject<UMoviePipelineInProcessExecutor>(UObject *param_1)

{
  UClass *pUVar1;
  UMoviePipelineInProcessExecutor *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UMoviePipelineInProcessExecutor::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UMoviePipelineInProcessExecutor *)
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

// NewObject<UMoviePipelineQueue> @ 14dd68e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMoviePipelineQueue * __cdecl NewObject<UMoviePipelineQueue>(UObject *param_1)

{
  UClass *pUVar1;
  UMoviePipelineQueue *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UMoviePipelineQueue::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UMoviePipelineQueue *)
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

// NewObject<UMoviePipelineShotConfig> @ 14dd68ec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMoviePipelineShotConfig * __cdecl
NewObject<UMoviePipelineShotConfig>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UMoviePipelineShotConfig *pUVar2;
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
  pUVar1 = UMoviePipelineShotConfig::StaticClass();
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
  pUVar2 = (UMoviePipelineShotConfig *)
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

// Push<`UE::MoviePipeline::FMoviePipelinePanoramicBlenderBase::BlendSample_AnyThread'::__l2::<lambda_1>_> @ 14dd69020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::
Push<_UE::MoviePipeline::FMoviePipelinePanoramicBlenderBase::BlendSample_AnyThread_::__l2::<lambda_1>_>
          (FPimpl *this,wchar_t *param_1,<lambda_1> *param_2)

{
  FPimpl *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  ETaskPriority EVar5;
  int iVar6;
  FPimpl *pFVar7;
  void *this_00;
  FTask *pFVar8;
  longlong *plVar9;
  FPimpl *pFVar10;
  FPimpl *pFVar11;
  FTask *pFVar12;
  FPimpl *pFVar13;
  undefined1 auStack_3a8 [32];
  uint local_388;
  wchar_t *local_378;
  undefined1 local_368 [352];
  FPimpl *local_208;
  FPimpl *local_200;
  FPimpl *local_1f8;
  FTask *local_1f0;
  FPimpl *local_1e8;
  <lambda_1> local_1d8;
  FPimpl *local_78;
  FPimpl *local_70;
  FPimpl *local_68;
  FTask *local_60;
  FPimpl *local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_3a8;
  local_378 = param_1;
  pFVar7 = ::operator_new(0x50);
  pFVar13 = (FPimpl *)0x0;
  if (pFVar7 == (FPimpl *)0x0) {
    pFVar12 = (FTask *)&DAT_00000010;
    pFVar7 = pFVar13;
  }
  else {
    *(undefined4 *)&pFVar7->field_0x8 = 1;
    pFVar12 = (FTask *)&pFVar7->field_0x10;
    *(undefined4 *)&pFVar7->field_0xc = 1;
    *(undefined ***)pFVar7 =
         &___7__TIntrusiveReferenceController_VFTask_LowLevelTasks___00_SharedPointerInternals__6B_;
    *(undefined8 *)&pFVar7->field_0x10 = 0;
    *(undefined8 *)&pFVar7->field_0x18 = 0;
    *(undefined8 *)&pFVar7->field_0x20 = 0;
    *(undefined8 *)&pFVar7->field_0x28 = 0;
    *(undefined8 *)&pFVar7->field_0x30 = 0;
    *(undefined ***)&pFVar7->field_0x38 =
         &
         ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(undefined8 *)&(pFVar7->ConcurrencySlots).FreeSlots.field_0x8 = 0xe800000000000020;
    *(undefined8 *)&(pFVar7->ConcurrencySlots).FreeSlots = 0;
    if ((pFVar12 == (FTask *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    LOCK();
    *(int *)&pFVar7->field_0x8 = *(int *)&pFVar7->field_0x8 + 1;
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar7);
  if ((pFVar12 == (FTask *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = *(FPimpl **)&this->field_0x8;
  pFVar10 = pFVar13;
  pFVar11 = pFVar1;
  if (pFVar1 != (FPimpl *)0x0) {
    iVar3 = *(int *)&pFVar1->field_0x8;
    do {
      pFVar11 = pFVar13;
      if (iVar3 == 0) goto LAB_14dd69155;
      LOCK();
      iVar6 = *(int *)&pFVar1->field_0x8;
      bVar4 = iVar3 == iVar6;
      if (bVar4) {
        *(int *)&pFVar1->field_0x8 = iVar3 + 1;
        iVar6 = iVar3;
      }
      UNLOCK();
      iVar3 = iVar6;
    } while (!bVar4);
    pFVar10 = *(FPimpl **)this;
    pFVar11 = pFVar1;
  }
LAB_14dd69155:
  if ((pFVar10 != this) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (pFVar10 == (FPimpl *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  `UE::MoviePipeline::FMoviePipelinePanoramicBlenderBase::BlendSample_AnyThread'::__l2::<lambda_1>::
  <lambda_1>(local_368,param_2);
  if (pFVar11 != (FPimpl *)0x0) {
    LOCK();
    *(int *)&pFVar11->field_0x8 = *(int *)&pFVar11->field_0x8 + 1;
    UNLOCK();
  }
  if (pFVar7 != (FPimpl *)0x0) {
    LOCK();
    *(int *)&pFVar7->field_0x8 = *(int *)&pFVar7->field_0x8 + 1;
    UNLOCK();
  }
  EVar5 = this->TaskPriority;
  local_208 = this;
  local_200 = pFVar10;
  local_1f8 = pFVar11;
  local_1f0 = pFVar12;
  local_1e8 = pFVar7;
  if ((*(ulonglong *)&pFVar12->field_0x38 & 0x20) == 0) {
    local_388 = (uint)*(undefined8 *)&pFVar12->field_0x38 & 0x3f;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsCompleted()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                       ,0x1dd,L"State: %d");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  `UE::MoviePipeline::FMoviePipelinePanoramicBlenderBase::BlendSample_AnyThread'::__l2::<lambda_1>::
  <lambda_1>(&local_1d8,(<lambda_1> *)local_368);
  local_70 = local_200;
  local_78 = local_208;
  local_68 = local_1f8;
  if (local_1f8 != (FPimpl *)0x0) {
    LOCK();
    *(int *)&local_1f8->field_0x8 = *(int *)&local_1f8->field_0x8 + 1;
    UNLOCK();
  }
  local_60 = local_1f0;
  local_58 = local_1e8;
  local_1e8 = (FPimpl *)0x0;
  local_1f0 = (FTask *)0x0;
  (**(code **)(*(longlong *)&pFVar12->field_0x28 + 0x18))(&pFVar12->field_0x28,pFVar12);
  *(undefined ***)&pFVar12->field_0x28 =
       &LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
        TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Push<`UE::MoviePipeline::FMoviePipelinePanoramicBlenderBase::BlendSample_AnyThread'::`2'::<lambda_1>_>'::`2'::<lambda_1>_>'::`13'::<lambda_1>,1>
        ::_vftable_;
  this_00 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc
                      (400,0x10);
  *(void **)pFVar12 = this_00;
  `UE::MoviePipeline::FMoviePipelinePanoramicBlenderBase::BlendSample_AnyThread'::__l2::<lambda_1>::
  <lambda_1>(this_00,&local_1d8);
  *(FPimpl **)((longlong)this_00 + 0x160) = local_78;
  *(FPimpl **)((longlong)this_00 + 0x168) = local_70;
  *(FPimpl **)((longlong)this_00 + 0x170) = local_68;
  if (local_68 != (FPimpl *)0x0) {
    LOCK();
    *(int *)&local_68->field_0x8 = *(int *)&local_68->field_0x8 + 1;
    UNLOCK();
  }
  *(FTask **)((longlong)this_00 + 0x178) = local_60;
  *(FPimpl **)((longlong)this_00 + 0x180) = local_58;
  local_58 = (FPimpl *)0x0;
  local_60 = (FTask *)0x0;
  `UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::
  Push<`UE::MoviePipeline::FMoviePipelinePanoramicBlenderBase::BlendSample_AnyThread'::__l2::<lambda_1>_>'
  ::__l2::<lambda_1>::~<lambda_1>(&local_1d8);
  pFVar8 = LowLevelTasks::FTask::GetActiveTask();
  if (pFVar8 == (FTask *)0x0) {
    if (EVar5 == Inherit) {
      EVar5 = Default;
    }
  }
  else {
    if (EVar5 == Inherit) {
      EVar5 = (ETaskPriority)((ulonglong)*(undefined8 *)&pFVar8->field_0x38 >> 0x3b);
    }
    pFVar13 = *(FPimpl **)&pFVar8->field_0x30;
  }
  *(FPimpl **)&pFVar12->field_0x30 = pFVar13;
  *(ulonglong *)&pFVar12->field_0x38 =
       ((longlong)(char)EVar5 << 0x35 | (ulonglong)local_378 & 0x1fffffffffffff | 0xff00000000000000
       ) << 6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1f8);
  if (local_368._304_8_ != 0) {
    plVar9 = (longlong *)(local_368 + 0x140);
    if ((longlong *)local_368._344_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_368._344_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if ((FImagePixelData *)local_368._288_8_ != (FImagePixelData *)0x0) {
    (**(code **)*(longlong *)local_368._288_8_)(local_368._288_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar11);
  AddWorkItem(this,pFVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar7);
  return;
}

// RotateInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>_> @ 14dd69480

int __cdecl
AlgoImpl::RotateInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_> *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>_s_1 TVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_> *pTVar8;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_> *pTVar10;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_> *pTVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_> *pTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_> *pTVar9;
  
  if (param_3 != 0) {
    if (param_2 <= param_3) {
      return 0;
    }
    pTVar8 = param_1 + param_3;
    pTVar11 = param_1;
    pTVar9 = param_1 + param_3;
    do {
      while( true ) {
        pTVar10 = pTVar8 + 1;
        pTVar12 = pTVar11 + 1;
        uVar1 = *(undefined8 *)((longlong)(pTVar8->ElementData).Pad + 8);
        TVar2 = pTVar11->_s_1;
        uVar3 = *(undefined8 *)((pTVar11->ElementData).Pad + 8);
        uVar4 = *(undefined8 *)((pTVar11->ElementData).Pad + 0x10);
        uVar5 = *(undefined8 *)((pTVar11->ElementData).Pad + 0x18);
        uVar6 = *(undefined8 *)((pTVar11->ElementData).Pad + 0x20);
        uVar7 = *(undefined8 *)((pTVar11->ElementData).Pad + 0x28);
        pTVar11->_s_1 = pTVar8->_s_1;
        *(undefined8 *)((pTVar11->ElementData).Pad + 8) = uVar1;
        uVar1 = *(undefined8 *)((longlong)(pTVar8->ElementData).Pad + 0x18);
        *(undefined8 *)((pTVar11->ElementData).Pad + 0x10) =
             *(undefined8 *)((longlong)(pTVar8->ElementData).Pad + 0x10);
        *(undefined8 *)((pTVar11->ElementData).Pad + 0x18) = uVar1;
        uVar1 = *(undefined8 *)((longlong)(pTVar8->ElementData).Pad + 0x28);
        *(undefined8 *)((pTVar11->ElementData).Pad + 0x20) =
             *(undefined8 *)((longlong)(pTVar8->ElementData).Pad + 0x20);
        *(undefined8 *)((pTVar11->ElementData).Pad + 0x28) = uVar1;
        pTVar8->_s_1 = TVar2;
        *(undefined8 *)((longlong)(pTVar8->ElementData).Pad + 8) = uVar3;
        *(undefined8 *)((longlong)(pTVar8->ElementData).Pad + 0x10) = uVar4;
        *(undefined8 *)((longlong)(pTVar8->ElementData).Pad + 0x18) = uVar5;
        *(undefined8 *)((longlong)(pTVar8->ElementData).Pad + 0x20) = uVar6;
        *(undefined8 *)((longlong)(pTVar8->ElementData).Pad + 0x28) = uVar7;
        pTVar11 = pTVar12;
        if (pTVar10 == param_1 + param_2) break;
        pTVar8 = pTVar10;
        if (pTVar12 == pTVar9) {
          pTVar9 = pTVar10;
        }
      }
      pTVar8 = pTVar9;
    } while (pTVar12 != pTVar9);
    param_2 = param_2 - param_3;
  }
  return param_2;
}

// StableSort<TSortableMapBase<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>::FValueComparisonClass<`FMoviePipelineOutputMerger::OnCompleteRenderPassDataAvailable_AnyThread'::__l29::<lambda_3>_>_> @ 14dd69530

void __thiscall
TSet<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>
::
StableSort<TSortableMapBase<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>::FValueComparisonClass<_FMoviePipelineOutputMerger::OnCompleteRenderPassDataAvailable_AnyThread_::__l29::<lambda_3>_>_>
          (TSet<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>
           *this,FValueComparisonClass<_public:_virtual_void___cdecl_FMoviePipelineOutputMerger::OnCompleteRenderPassDataAvailable_AnyThread(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&)_::_29_::<lambda_3>_>
                 *param_1)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FValueComparisonClass<_public:_virtual_void___cdecl_FMoviePipelineOutputMerger::OnCompleteRenderPassDataAvailable_AnyThread(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&)_::_29_::<lambda_3>_>
  *local_res8;
  
  local_res8 = param_1;
  if (0 < *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34) {
    TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::CompactStable(&this->Elements);
    iVar4 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    pTVar1 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_> **)&this->Elements;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    AlgoImpl::
    StableSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>::FValueComparisonClass<_FMoviePipelineOutputMerger::OnCompleteRenderPassDataAvailable_AnyThread_::__l29::<lambda_3>_>_>_>_>
              (pTVar1,iVar4,local_res8._0_1_,
               (FElementCompareClass<TSortableMapBase<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>::FValueComparisonClass<_public:_virtual_void___cdecl_FMoviePipelineOutputMerger::OnCompleteRenderPassDataAvailable_AnyThread(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&)_::_29_::<lambda_3>_>_>
                *)&local_res8);
  }
  Rehash(this);
  return;
}

// StableSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>::FValueComparisonClass<`FMoviePipelineOutputMerger::OnCompleteRenderPassDataAvailable_AnyThread'::__l29::<lambda_3>_>_>_>_> @ 14dd695c0

void __cdecl
AlgoImpl::
StableSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>::FValueComparisonClass<_FMoviePipelineOutputMerger::OnCompleteRenderPassDataAvailable_AnyThread_::__l29::<lambda_3>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>::FValueComparisonClass<_public:_virtual_void___cdecl_FMoviePipelineOutputMerger::OnCompleteRenderPassDataAvailable_AnyThread(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&)_::_29_::<lambda_3>_>_>_>
          param_4)

{
  int iVar1;
  undefined8 uVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>_s_1 TVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_> *pTVar12;
  int iVar13;
  longlong lVar14;
  
  if (0 < param_2) {
    pTVar12 = param_1 + 1;
    iVar13 = 1;
    lVar14 = ((longlong)param_2 - 1U >> 1) + 1;
    do {
      if ((iVar13 < param_2) &&
         (*(int *)(*(longlong *)(*(longlong *)((pTVar12->ElementData).Pad + 0x20) + 0x18) + 0x2d4) <
          *(int *)(*(longlong *)(*(longlong *)((longlong)pTVar12 + -0x10) + 0x18) + 0x2d4))) {
        uVar2 = *(undefined8 *)((pTVar12->ElementData).Pad + 8);
        TVar3 = pTVar12[-1]._s_1;
        uVar4 = *(undefined8 *)((longlong)pTVar12 + -0x28);
        uVar5 = *(undefined8 *)((longlong)pTVar12 + -0x20);
        uVar6 = *(undefined8 *)((longlong)pTVar12 + -0x18);
        uVar7 = *(undefined8 *)((longlong)pTVar12 + -0x10);
        uVar8 = *(undefined8 *)((longlong)pTVar12 + -8);
        pTVar12[-1]._s_1 = pTVar12->_s_1;
        *(undefined8 *)((longlong)pTVar12 + -0x28) = uVar2;
        uVar2 = *(undefined8 *)((pTVar12->ElementData).Pad + 0x18);
        *(undefined8 *)((longlong)pTVar12 + -0x20) =
             *(undefined8 *)((pTVar12->ElementData).Pad + 0x10);
        *(undefined8 *)((longlong)pTVar12 + -0x18) = uVar2;
        uVar2 = *(undefined8 *)((pTVar12->ElementData).Pad + 0x28);
        *(undefined8 *)((longlong)pTVar12 + -0x10) =
             *(undefined8 *)((pTVar12->ElementData).Pad + 0x20);
        *(undefined8 *)((longlong)pTVar12 + -8) = uVar2;
        pTVar12->_s_1 = TVar3;
        *(undefined8 *)((pTVar12->ElementData).Pad + 8) = uVar4;
        *(undefined8 *)((pTVar12->ElementData).Pad + 0x10) = uVar5;
        *(undefined8 *)((pTVar12->ElementData).Pad + 0x18) = uVar6;
        *(undefined8 *)((pTVar12->ElementData).Pad + 0x20) = uVar7;
        *(undefined8 *)((pTVar12->ElementData).Pad + 0x28) = uVar8;
      }
      iVar13 = iVar13 + 2;
      pTVar12 = pTVar12 + 2;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  iVar13 = 2;
  if (2 < param_2) {
    do {
      iVar1 = iVar13 * 2;
      iVar9 = 0;
      iVar10 = param_2;
      do {
        iVar11 = iVar10;
        if (iVar1 <= iVar10) {
          iVar11 = iVar1;
        }
        Merge<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>::FValueComparisonClass<_FMoviePipelineOutputMerger::OnCompleteRenderPassDataAvailable_AnyThread_::__l29::<lambda_3>_>_>_>_>
                  (param_1 + iVar9,iVar13,iVar11,param_3,param_4);
        iVar9 = iVar9 + iVar1;
        iVar10 = iVar10 + iVar13 * -2;
      } while (iVar9 < param_2);
      iVar13 = iVar1;
    } while (iVar1 < param_2);
  }
  return;
}

// StaticEnum<enum_EMovieGraphFrameRangeNotation> @ 14dd69720

UEnum * __cdecl StaticEnum<enum_EMovieGraphFrameRangeNotation>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieGraphFrameRangeNotation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UEnum_EMovieGraphFrameRangeNotation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphFrameRangeNotation,
                       (UObject *)pUVar1,L"EMovieGraphFrameRangeNotation");
  }
  return Z_Registration_Info_UEnum_EMovieGraphFrameRangeNotation.OuterSingleton;
}

// StaticEnum<enum_EMovieGraphImageSequencePlaybackRange> @ 14dd69760

UEnum * __cdecl StaticEnum<enum_EMovieGraphImageSequencePlaybackRange>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieGraphImageSequencePlaybackRange.OuterSingleton == (UEnum *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UEnum_EMovieGraphImageSequencePlaybackRange.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphImageSequencePlaybackRange
                       ,(UObject *)pUVar1,L"EMovieGraphImageSequencePlaybackRange");
  }
  return Z_Registration_Info_UEnum_EMovieGraphImageSequencePlaybackRange.OuterSingleton;
}

// StaticEnum<enum_EMovieGraphJobPlaybackRange> @ 14dd697a0

UEnum * __cdecl StaticEnum<enum_EMovieGraphJobPlaybackRange>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieGraphJobPlaybackRange.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UEnum_EMovieGraphJobPlaybackRange.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphJobPlaybackRange,
                       (UObject *)pUVar1,L"EMovieGraphJobPlaybackRange");
  }
  return Z_Registration_Info_UEnum_EMovieGraphJobPlaybackRange.OuterSingleton;
}

// StaticEnum<enum_EMovieGraphOutputTypePlayback> @ 14dd697e0

UEnum * __cdecl StaticEnum<enum_EMovieGraphOutputTypePlayback>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieGraphOutputTypePlayback.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UEnum_EMovieGraphOutputTypePlayback.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphOutputTypePlayback,
                       (UObject *)pUVar1,L"EMovieGraphOutputTypePlayback");
  }
  return Z_Registration_Info_UEnum_EMovieGraphOutputTypePlayback.OuterSingleton;
}

// StaticEnum<enum_EMovieGraphPlaybackMethod> @ 14dd69820

UEnum * __cdecl StaticEnum<enum_EMovieGraphPlaybackMethod>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieGraphPlaybackMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UEnum_EMovieGraphPlaybackMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphPlaybackMethod,
                       (UObject *)pUVar1,L"EMovieGraphPlaybackMethod");
  }
  return Z_Registration_Info_UEnum_EMovieGraphPlaybackMethod.OuterSingleton;
}

// StaticEnum<enum_EMovieGraphRenderLayerPlaybackRange> @ 14dd69860

UEnum * __cdecl StaticEnum<enum_EMovieGraphRenderLayerPlaybackRange>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieGraphRenderLayerPlaybackRange.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UEnum_EMovieGraphRenderLayerPlaybackRange.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphRenderLayerPlaybackRange
                       ,(UObject *)pUVar1,L"EMovieGraphRenderLayerPlaybackRange");
  }
  return Z_Registration_Info_UEnum_EMovieGraphRenderLayerPlaybackRange.OuterSingleton;
}

// StaticEnum<enum_EMoviePipelinePanoramicFilterType> @ 14dd698a0

UEnum * __cdecl StaticEnum<enum_EMoviePipelinePanoramicFilterType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMoviePipelinePanoramicFilterType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UEnum_EMoviePipelinePanoramicFilterType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelinePanoramicFilterType,
                       (UObject *)pUVar1,L"EMoviePipelinePanoramicFilterType");
  }
  return Z_Registration_Info_UEnum_EMoviePipelinePanoramicFilterType.OuterSingleton;
}

// StaticEnum<enum_EMoviePipelineShutterTiming> @ 14dd698e0

UEnum * __cdecl StaticEnum<enum_EMoviePipelineShutterTiming>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMoviePipelineShutterTiming.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UEnum_EMoviePipelineShutterTiming.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineShutterTiming,
                       (UObject *)pUVar1,L"EMoviePipelineShutterTiming");
  }
  return Z_Registration_Info_UEnum_EMoviePipelineShutterTiming.OuterSingleton;
}

// StaticEnum<enum_EMoviePipelineTextureStreamingMethod> @ 14dd69920

UEnum * __cdecl StaticEnum<enum_EMoviePipelineTextureStreamingMethod>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMoviePipelineTextureStreamingMethod.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UEnum_EMoviePipelineTextureStreamingMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineTextureStreamingMethod
                       ,(UObject *)pUVar1,L"EMoviePipelineTextureStreamingMethod");
  }
  return Z_Registration_Info_UEnum_EMoviePipelineTextureStreamingMethod.OuterSingleton;
}

// StaticEnum<enum_EMovieRenderPipelineState> @ 14dd69960

UEnum * __cdecl StaticEnum<enum_EMovieRenderPipelineState>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieRenderPipelineState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UEnum_EMovieRenderPipelineState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMovieRenderPipelineState,
                       (UObject *)pUVar1,L"EMovieRenderPipelineState");
  }
  return Z_Registration_Info_UEnum_EMovieRenderPipelineState.OuterSingleton;
}

// StaticEnum<enum_EMovieRenderShotState> @ 14dd699a0

UEnum * __cdecl StaticEnum<enum_EMovieRenderShotState>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieRenderShotState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UEnum_EMovieRenderShotState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMovieRenderShotState,
                       (UObject *)pUVar1,L"EMovieRenderShotState");
  }
  return Z_Registration_Info_UEnum_EMovieRenderShotState.OuterSingleton;
}

// StaticEnum<enum_FCPXMLExportDataSource> @ 14dd699e0

UEnum * __cdecl StaticEnum<enum_FCPXMLExportDataSource>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_FCPXMLExportDataSource.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UEnum_FCPXMLExportDataSource.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_FCPXMLExportDataSource,
                       (UObject *)pUVar1,L"FCPXMLExportDataSource");
  }
  return Z_Registration_Info_UEnum_FCPXMLExportDataSource.OuterSingleton;
}

// ~TFunction_OwnedObject<`UMoviePipeline::FlushAsyncEngineSystems'::__l2::<lambda_1>,1,0> @ 14dd6b950

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMoviePipeline::FlushAsyncEngineSystems'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UMoviePipeline::FlushAsyncEngineSystems_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMoviePipeline::FlushAsyncEngineSystems'::`2'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FMoviePipelineOutputMerger::OnSingleSampleDataAvailable_AnyThread'::__l2::<lambda_1>,1,0> @ 14dd6b970

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMoviePipelineOutputMerger::OnSingleSampleDataAvailable_AnyThread'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_FMoviePipelineOutputMerger::OnSingleSampleDataAvailable_AnyThread_::__l2::<lambda_1>,1,0>
          (void *this)

{
  undefined8 *puVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMoviePipelineOutputMerger::OnSingleSampleDataAvailable_AnyThread'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  puVar1 = *(undefined8 **)((longlong)this + 8);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014dd6b98b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FMoviePipelineSurfaceReader::ResizeImpl'::__l2::<lambda_1>,1,0> @ 14dd6b9a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMoviePipelineSurfaceReader::ResizeImpl'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FMoviePipelineSurfaceReader::ResizeImpl_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMoviePipelineSurfaceReader::ResizeImpl'::`2'::<lambda_1>,1,0>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`FMoviePipelineSurfaceQueue::Shutdown'::__l4::<lambda_1>,1,0> @ 14dd6b9c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMoviePipelineSurfaceQueue::Shutdown'::__l4::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FMoviePipelineSurfaceQueue::Shutdown_::__l4::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMoviePipelineSurfaceQueue::Shutdown'::`4'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UMoviePipeline::RenderFrame'::__l122::<lambda_1>,1,0> @ 14dd6b9e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMoviePipeline::RenderFrame'::__l122::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UMoviePipeline::RenderFrame_::__l122::<lambda_1>,1,0>(void *this)

{
  FAtomicFlags *pFVar1;
  atomic<unsigned_int> aVar2;
  FRHIResource *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMoviePipeline::RenderFrame'::`122'::<lambda_1>,1,0>::_vftable_;
  this_00 = *(FRHIResource **)((longlong)this + 8);
  if (this_00 == (FRHIResource *)0x0) {
    return;
  }
  LOCK();
  pFVar1 = &this_00->AtomicFlags;
  aVar2 = pFVar1->Packed;
  pFVar1->Packed = (atomic<unsigned_int>)((int)pFVar1->Packed + -1);
  UNLOCK();
  if ((int)aVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(OldPacked & DeletingBit) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa2,L"Resource is being deleted.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = (uint)aVar2 & 0x3fffffff;
  if ((int)(uVar5 - 1) < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumRefs >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa4,L"Reference count has underflowed.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewValue >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0x53,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (uVar5 == 1) {
    FRHIResource::MarkForDelete(this_00);
  }
  return;
}

// ~TScopeGuard<`UMoviePipeline::TickProducingFrames'::__l2::<lambda_1>_> @ 14dd6ba20

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
ScopeExitSupport::TScopeGuard<`UMoviePipeline::TickProducingFrames'::__l2::<lambda_1>_>::
~TScopeGuard<_UMoviePipeline::TickProducingFrames_::__l2::<lambda_1>_>(void *this)

{
  UMoviePipeline *this_00;
  longlong *plVar1;
  code *pcVar2;
  IModuleInterface IVar3;
  IModuleInterface IVar4;
  bool bVar5;
  UMoviePipelinePrimaryConfig *this_01;
  UMoviePipelineOutputSetting *pUVar6;
  longlong lVar7;
  FFrameRate FVar8;
  FName *pFVar9;
  FModuleManager *this_02;
  IModuleInterface *pIVar10;
  int iVar11;
  FName local_res8;
  FName local_res10;
  FString local_38;
  undefined4 local_28;
  int iStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  IModuleInterface local_18;
  
  local_28 = CONCAT31(local_28._1_3_,1);
  this_00 = *(UMoviePipeline **)this;
  iStack_24 = (this_00->CachedOutputState).TemporalSampleCount;
  iStack_20 = (this_00->CachedOutputState).TemporalSampleIndex;
  this_01 = UMoviePipeline::GetPipelinePrimaryConfig(this_00);
  plVar1 = *(longlong **)(*(longlong *)this + 0xb8);
  pUVar6 = UMoviePipelineConfigBase::FindSetting<UMoviePipelineOutputSetting>
                     ((UMoviePipelineConfigBase *)this_01,false);
  if ((pUVar6 == (UMoviePipelineOutputSetting *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutputSettings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelinePrimaryConfig.cpp"
                         ,0xa4,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (pUVar6->bUseCustomFrameRate == false) {
    if (plVar1 == (longlong *)0x0) {
      FVar8.Numerator = 60000;
      FVar8.Denominator = 0;
      iVar11 = 1;
    }
    else {
      lVar7 = (**(code **)(*plVar1 + 0x2f8))(plVar1);
      FVar8 = (FFrameRate)(*(ulonglong *)(lVar7 + 0x140) & 0xffffffff);
      iVar11 = (int)(*(ulonglong *)(lVar7 + 0x140) >> 0x20);
    }
  }
  else {
    FVar8 = pUVar6->OutputFrameRate;
    iVar11 = FVar8.Denominator;
  }
  local_18 = (IModuleInterface)((double)FVar8.Numerator / (double)iVar11);
  FModuleManager::Get();
  pFVar9 = ::FName::FName(&local_res10,"MovieRenderPipelineCore");
  local_res8 = *pFVar9;
  this_02 = FModuleManager::Get();
  bVar5 = FModuleManager::IsModuleLoaded(this_02,local_res8);
  if (!bVar5) {
    ::FName::ToString(&local_res8,&local_38);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ModuleManager.IsModuleLoaded(ModuleName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Modules\\ModuleManager.h"
                       ,0x15a,L"Tried to get module interface for unloaded module: \'%s\'");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar10 = FModuleManager::GetModule(this_02,local_res8);
  IVar3._4_4_ = iStack_24;
  IVar3._0_4_ = local_28;
  IVar4._4_4_ = uStack_1c;
  IVar4._0_4_ = iStack_20;
  pIVar10[1] = IVar3;
  pIVar10[2] = IVar4;
  pIVar10[3] = local_18;
  return;
}

// operator() @ 14dd6caa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
``UE::MoviePipeline::FMoviePipelinePanoramicBlenderBase::BlendSample_AnyThread'::__l2::<lambda_1>::
operator()'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  double dVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  double *pdVar6;
  longlong lVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  bool bVar21;
  uint uVar22;
  FName *pFVar23;
  FThreadSafeStaticStat<UE::MoviePipeline::FStat_STAT_MoviePipeline_PanoBlendActual> FVar24;
  TVector<double> *pTVar25;
  FLinearColor *pFVar26;
  int iVar27;
  FNameEntryId FVar28;
  FName FVar29;
  longlong lVar30;
  int iVar31;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  float fVar35;
  double dVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  float fVar39;
  float fVar40;
  uint local_res8;
  uint uStackX_c;
  int local_res10;
  undefined1 local_res18 [8];
  FColor_u_0 local_res20 [2];
  FName local_1b8;
  double local_1b0;
  FName local_1a8;
  TVector2<double>_u_0 local_198;
  TVector<double>_u_0 local_188;
  FName local_170;
  FLinearColor local_168;
  FLinearColor local_158;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  TVector<double> local_108 [8];
  
  iVar31 = 0;
  FVar24 = UE::MoviePipeline::StatPtr_STAT_MoviePipeline_PanoBlendActual;
  local_res10 = param_1;
  if (UE::MoviePipeline::StatPtr_STAT_MoviePipeline_PanoBlendActual ==
      (FThreadSafeStaticStat<UE::MoviePipeline::FStat_STAT_MoviePipeline_PanoBlendActual>)0x0) {
    pFVar23 = ::FName::FName(&local_170,"STAT_MoviePipeline_PanoBlendActual");
    FVar24 = (FThreadSafeStaticStat<UE::MoviePipeline::FStat_STAT_MoviePipeline_PanoBlendActual>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &UE::MoviePipeline::StatPtr_STAT_MoviePipeline_PanoBlendActual,*pFVar23,
                        L"STAT_MoviePipeline_PanoBlendActual","STATGROUP_MoviePipeline",
                        "STATCAT_Advanced",L"MovieRenderPipeline",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar29 = *(FName *)FVar24;
  bVar15 = false;
  bVar17 = false;
  local_1a8.ComparisonIndex.Value = 0;
  local_1a8.Number = 0;
  FVar28 = FVar29.ComparisonIndex.Value;
  uVar22 = FVar29.Number;
  if ((FVar28.Value != 0) || (uVar22 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar24 + 0x10));
      bVar15 = false;
      bVar17 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1b8.ComparisonIndex.Value = FVar28.Value;
        local_1b8.Number = uVar22;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1b8,(wchar_t *)*(FName *)((longlong)FVar24 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Public\\MoviePipelinePanoramicBlenderBase.cpp"
                   ,0x15d);
        bVar15 = true;
        bVar17 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = FVar28.Value;
      uStackX_c = uVar22;
      FThreadStats::AddMessage(FVar29,CycleScopeStart);
      bVar16 = true;
      goto LAB_14dd6cbff;
    }
  }
  bVar16 = false;
  FVar29 = local_1a8;
LAB_14dd6cbff:
  fVar20 = __real_3ea8f5c3;
  fVar19 = __real_3f000000;
  fVar18 = __real_3f800000;
  if (0 < *(int *)(*(longlong *)((longlong)this + 0x80) + 0x20)) {
    local_1b0 = __real_3ff0000000000000;
    fVar40 = __real_38d1b717;
    do {
      iVar27 = *(int *)((longlong)this + 0xc);
      iVar3 = *(int *)((longlong)this + 8);
      iVar4 = *(int *)(*(longlong *)this + 0x88);
      __libm_sse2_sincosf4_();
      local_188._s_0.Z = (double)extraout_XMM0_Da;
      local_188._s_0.Y = (double)(extraout_XMM0_Dc * extraout_XMM0_Db);
      local_188._s_0.X = (double)(extraout_XMM0_Dd * extraout_XMM0_Db);
      fVar39 = (float)((double)extraout_XMM0_Dd * *(double *)((longlong)this + 0x38) +
                      (double)extraout_XMM0_Dc * *(double *)((longlong)this + 0x40)) -
               *(float *)((longlong)this + 0x50);
      if (fVar39 <= 0.0) {
        fVar39 = 0.0;
      }
      fVar34 = (float)((double)extraout_XMM0_Db * *(double *)((longlong)this + 0x20) +
                      local_188._s_0.Z * *(double *)((longlong)this + 0x30)) -
               *(float *)((longlong)this + 0x54);
      if (fVar34 <= 0.0) {
        fVar34 = 0.0;
      }
      fVar39 = (fVar39 / (fVar18 - *(float *)((longlong)this + 0x50))) *
               (fVar34 / (fVar18 - *(float *)((longlong)this + 0x54)));
      fVar39 = fVar39 * fVar39;
      if (fVar40 < fVar39) {
        pTVar25 = UE::Math::TRotator<double>::UnrotateVector
                            (*(TRotator<double> **)((longlong)this + 0x58),local_108,
                             (TVector<double> *)&local_188._s_0);
        auVar33 = *(undefined1 (*) [16])&pTVar25->field0_0x0;
        dVar36 = auVar33._0_8_;
        dVar9 = auVar33._8_8_;
        dVar1 = (pTVar25->field0_0x0)._s_0.Z;
        pdVar6 = *(double **)((longlong)this + 0x60);
        auVar32._8_4_ = auVar33._0_4_;
        auVar32._0_8_ = dVar36;
        auVar32._12_4_ = auVar33._4_4_;
        auVar33._8_4_ = SUB84(local_1b0,0);
        auVar33._0_8_ = local_1b0;
        auVar33._12_4_ = (int)((ulonglong)local_1b0 >> 0x20);
        dVar10 = dVar9 * UnrealCoordinateConversion.M[1][0] +
                 dVar36 * UnrealCoordinateConversion.M[0][0] +
                 dVar1 * UnrealCoordinateConversion.M[2][0] +
                 local_1b0 * UnrealCoordinateConversion.M[3][0];
        dVar11 = dVar9 * UnrealCoordinateConversion.M[1][1] +
                 auVar32._8_8_ * UnrealCoordinateConversion.M[0][1] +
                 dVar1 * UnrealCoordinateConversion.M[2][1] +
                 auVar33._8_8_ * UnrealCoordinateConversion.M[3][1];
        uVar37 = (undefined4)((ulonglong)dVar11 >> 0x20);
        dVar12 = dVar9 * UnrealCoordinateConversion.M[1][2] +
                 dVar36 * UnrealCoordinateConversion.M[0][2] +
                 dVar1 * UnrealCoordinateConversion.M[2][2] +
                 local_1b0 * UnrealCoordinateConversion.M[3][2];
        dVar1 = dVar9 * UnrealCoordinateConversion.M[1][3] +
                dVar36 * UnrealCoordinateConversion.M[0][3] +
                dVar1 * UnrealCoordinateConversion.M[2][3] +
                local_1b0 * UnrealCoordinateConversion.M[3][3];
        uVar38 = (undefined4)((ulonglong)dVar1 >> 0x20);
        local_148._8_4_ = SUB84(dVar11,0);
        local_148._0_8_ = dVar10;
        local_148._12_4_ = uVar37;
        local_128._8_4_ = SUB84(dVar11,0);
        local_128._0_8_ = dVar10;
        local_128._12_4_ = uVar37;
        local_138._8_4_ = SUB84(dVar1,0);
        local_138._0_8_ = dVar12;
        local_138._12_4_ = uVar38;
        local_118._8_4_ = SUB84(dVar1,0);
        local_118._0_8_ = dVar12;
        local_118._12_4_ = uVar38;
        iVar5 = (*(int **)((longlong)this + 0x68))[1];
        dVar36 = local_1b0 /
                 (pdVar6[7] * dVar11 + pdVar6[3] * dVar10 + pdVar6[0xb] * dVar12 +
                 pdVar6[0xf] * dVar1);
        local_198._s_0.X =
             ((*pdVar6 * dVar10 + pdVar6[4] * dVar11 + pdVar6[8] * dVar12 + pdVar6[0xc] * dVar1) *
              dVar36 + local_1b0) * __real_3fe0000000000000 *
             (double)**(int **)((longlong)this + 0x68);
        local_res8 = local_res8 & 0xffffff00;
        cVar2 = *(char *)(*(longlong *)((longlong)this + 0x70) + 0x10c);
        local_198._s_0.Y =
             ((double)iVar5 -
             ((pdVar6[1] * dVar10 + pdVar6[5] * dVar11 + pdVar6[9] * dVar12 + pdVar6[0xd] * dVar1) *
              dVar36 + local_1b0) * __real_3fe0000000000000 * (double)iVar5) - local_1b0;
        if (cVar2 == '\0') {
          pFVar26 = UE::MoviePipeline::GetColorBilinearFiltered
                              (&local_168,*(FImagePixelData **)((longlong)this + 0x78),
                               (TVector2<double> *)&local_198._s_0,(bool *)&local_res8,true);
        }
        else {
          fVar34 = fVar19;
          if (cVar2 == '\x01') {
LAB_14dd6d005:
            fVar35 = 0.0;
          }
          else {
            fVar35 = fVar20;
            fVar34 = fVar20;
            if (cVar2 != '\x02') {
              local_res18[0] = 0;
              `UE::MoviePipeline::FPanoramicPane::FCubicInterpolationParams::GetParamsForType'::__l4
              ::<lambda_1>::operator()(local_res18);
              fVar34 = 0.0;
              goto LAB_14dd6d005;
            }
          }
          pFVar26 = UE::MoviePipeline::GetColorCubicFiltered
                              (&local_158,*(FImagePixelData **)((longlong)this + 0x78),
                               (TVector2<double> *)&local_198._s_0,fVar35,fVar34,(bool *)&local_res8
                               ,true);
        }
        fVar34 = (pFVar26->field0_0x0)._s_0.R;
        fVar35 = (pFVar26->field0_0x0)._s_0.G;
        fVar13 = (pFVar26->field0_0x0)._s_0.B;
        fVar14 = (pFVar26->field0_0x0)._s_0.A;
        if (local_res8._0_1_ == false) {
          lVar7 = *(longlong *)((longlong)this + 0x80);
          iVar5 = *(int *)(lVar7 + 0x20);
          iVar27 = (iVar5 + ((iVar4 + (iVar27 + iVar31) % iVar4) % iVar4 - *(int *)(lVar7 + 0x28)) %
                            iVar5) % iVar5 + ((iVar3 + param_1) - *(int *)(lVar7 + 0x2c)) * iVar5;
          lVar30 = (longlong)iVar27;
          uVar22 = 0;
          if (lVar30 < *(longlong *)(lVar7 + 0x10)) {
            uVar22 = (uint)(iVar27 >> 0x1f) >> 0x1f ^ 1;
          }
          if ((uVar22 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar7 = *(longlong *)(lVar7 + 8);
          *(float *)(lVar7 + lVar30 * 0x10) = fVar39 * fVar34 + *(float *)(lVar7 + lVar30 * 0x10);
          *(float *)(lVar7 + 4 + lVar30 * 0x10) =
               fVar39 * fVar35 + *(float *)(lVar7 + 4 + lVar30 * 0x10);
          *(float *)(lVar7 + 8 + lVar30 * 0x10) =
               fVar39 * fVar13 + *(float *)(lVar7 + 8 + lVar30 * 0x10);
          fVar40 = __real_38d1b717;
          *(float *)(lVar7 + 0xc + lVar30 * 0x10) =
               fVar39 * fVar14 + *(float *)(lVar7 + 0xc + lVar30 * 0x10);
          param_1 = local_res10;
        }
      }
      iVar31 = iVar31 + 1;
    } while (iVar31 < *(int *)(*(longlong *)((longlong)this + 0x80) + 0x20));
  }
  if (bVar17) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar16) {
    FThreadStats::AddMessage(FVar29,CycleScopeEnd);
  }
  return;
}

// operator() @ 14dd6e6b0

bool __thiscall
`MoviePipeline::RefreshVariableAssignments'::__l2::<lambda_1>::operator()
          (void *this,TObjectPtr<UMovieJobVariableAssignmentContainer> *param_1)

{
  longlong *plVar1;
  int iVar2;
  TSoftObjectPtr<UMovieGraphConfig> *this_00;
  UMovieGraphConfig *pUVar3;
  uint uVar4;
  longlong *plVar5;
  undefined1 local_38 [48];
  
  plVar1 = *(longlong **)this;
  this_00 = UMovieJobVariableAssignmentContainer::GetGraphConfig
                      ((param_1->field0_0x0).DebugPtr,(TSoftObjectPtr<UMovieGraphConfig> *)local_38)
  ;
  pUVar3 = TSoftObjectPtr<UMovieGraphConfig>::LoadSynchronous(this_00);
  uVar4 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
          -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    plVar5 = (longlong *)plVar1[8];
    if ((longlong *)plVar1[8] == (longlong *)0x0) {
      plVar5 = plVar1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar5 +
                    (ulonglong)((int)plVar1[9] - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
    if (iVar2 != -1) {
      do {
        if (*(UMovieGraphConfig **)(*plVar1 + (longlong)iVar2 * 0x10) == pUVar3) goto LAB_14dd6e74a;
        iVar2 = *(int *)(*plVar1 + 8 + (longlong)iVar2 * 0x10);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_14dd6e74a:
  if ((void *)local_38._24_8_ != (void *)0x0) {
    FMemory::Free((void *)local_38._24_8_);
  }
  return iVar2 == -1;
}

// operator() @ 14dd6f230

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
``UE::MoviePipeline::FMoviePipelinePanoramicBlenderBase::BlendSample_AnyThread'::__l2::<lambda_1>::
operator()'::__l24::<lambda_2>::operator()(void *this,int param_1)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<UE::MoviePipeline::FStat_STAT_MoviePipeline_PanoBlendJoin> FVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  FColor_u_0 local_res8 [2];
  int local_res10;
  uint local_res18;
  uint uStackX_1c;
  FName local_res20;
  FName local_88;
  LARGE_INTEGER local_80;
  FName local_78;
  FName local_70;
  FStatMessage local_60 [2];
  
  FVar12 = UE::MoviePipeline::StatPtr_STAT_MoviePipeline_PanoBlendJoin;
  local_res10 = param_1;
  if (UE::MoviePipeline::StatPtr_STAT_MoviePipeline_PanoBlendJoin ==
      (FThreadSafeStaticStat<UE::MoviePipeline::FStat_STAT_MoviePipeline_PanoBlendJoin>)0x0) {
    pFVar11 = ::FName::FName(&local_78,"STAT_MoviePipeline_PanoBlendJoin");
    FVar12 = (FThreadSafeStaticStat<UE::MoviePipeline::FStat_STAT_MoviePipeline_PanoBlendJoin>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &UE::MoviePipeline::StatPtr_STAT_MoviePipeline_PanoBlendJoin,*pFVar11,
                        L"STAT_MoviePipeline_PanoBlendJoin","STATGROUP_MoviePipeline",
                        "STATCAT_Advanced",L"MovieRenderPipeline",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  local_88 = *(FName *)FVar12;
  bVar4 = false;
  bVar6 = false;
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  FVar13 = local_88.ComparisonIndex.Value;
  uVar10 = local_88.Number;
  if ((FVar13.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar13.Value;
        local_res20.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Public\\MoviePipelinePanoramicBlenderBase.cpp"
                   ,0x1c8);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18 = FVar13.Value;
      uStackX_1c = uVar10;
      FThreadStats::AddMessage(local_88,CycleScopeStart);
      bVar5 = true;
      goto LAB_14dd6f398;
    }
  }
  bVar5 = false;
  local_88 = local_70;
LAB_14dd6f398:
  iVar7 = local_res10;
  lVar15 = *(longlong *)((longlong)this + 8);
  iVar17 = 0;
  if (0 < *(int *)(lVar15 + 0x20)) {
    do {
      iVar9 = *(int *)(*(longlong *)this + 0x88);
      local_res18 = (iVar9 + (*(int *)(lVar15 + 0x28) + iVar17) % iVar9) % iVar9 +
                    (*(int *)(lVar15 + 0x2c) + iVar7) * iVar9;
      iVar9 = iVar7 * *(int *)(lVar15 + 0x20) + iVar17;
      lVar14 = (longlong)iVar9;
      uVar10 = 0;
      if (lVar14 < *(longlong *)(lVar15 + 0x10)) {
        uVar10 = (uint)(iVar9 >> 0x1f) >> 0x1f ^ 1;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar15 = *(longlong *)(lVar15 + 8);
      lVar16 = (longlong)(int)local_res18;
      lVar2 = *(longlong *)this;
      uVar10 = 0;
      if (lVar16 < *(longlong *)(lVar2 + 0x78)) {
        uVar10 = (uint)((int)local_res18 >> 0x1f) >> 0x1f ^ 1;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = *(longlong *)(lVar2 + 0x70);
      iVar17 = iVar17 + 1;
      *(float *)(lVar2 + lVar16 * 0x10) =
           *(float *)(lVar2 + lVar16 * 0x10) + *(float *)(lVar15 + lVar14 * 0x10);
      *(float *)(lVar2 + 4 + lVar16 * 0x10) =
           *(float *)(lVar15 + 4 + lVar14 * 0x10) + *(float *)(lVar2 + 4 + lVar16 * 0x10);
      *(float *)(lVar2 + 8 + lVar16 * 0x10) =
           *(float *)(lVar15 + 8 + lVar14 * 0x10) + *(float *)(lVar2 + 8 + lVar16 * 0x10);
      *(float *)(lVar2 + 0xc + lVar16 * 0x10) =
           *(float *)(lVar15 + 0xc + lVar14 * 0x10) + *(float *)(lVar2 + 0xc + lVar16 * 0x10);
      lVar15 = *(longlong *)((longlong)this + 8);
    } while (iVar17 < *(int *)(lVar15 + 0x20));
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (local_88 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_60[0].NameAndInfo.Index = local_88.ComparisonIndex.Value;
      local_60[0].NameAndInfo.Number = local_88.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_80);
      local_60[0].StatData.Pad[4] = '\0';
      local_60[0].StatData.Pad[5] = '\0';
      local_60[0].StatData.Pad[6] = '\0';
      local_60[0].StatData.Pad[7] = '\0';
      local_60[0].StatData.Pad[0] = local_80.s.LowPart._0_1_;
      local_60[0].StatData.Pad[1] = local_80.s.LowPart._1_1_;
      local_60[0].StatData.Pad[2] = local_80.s.LowPart._2_1_;
      local_60[0].StatData.Pad[3] = local_80.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_60);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// `scalar_deleting_destructor' @ 14dd6fc90

void * __thiscall
IBaseDelegateInstance<void___cdecl(UMoviePipelineExecutorBase_*,UMoviePipeline_*,bool,FText),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UMoviePipelineExecutorBase_*,UMoviePipeline_*,bool,FText),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dd6fcc0

void * __thiscall
IBaseDelegateInstance<void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dd6fcf0

void * __thiscall
IBaseDelegateInstance<void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dd6fd20

void * __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UMoviePipelineExecutorBase_*,UMoviePipeline_*,bool,FText),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UMoviePipelineExecutorBase_*,UMoviePipeline_*,bool,FText),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dd6fd50

void * __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dd6fd80

void * __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dd6fdb0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dd6fde0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,UWorld_*>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,UWorld_*>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dd6fe10

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dd6fe40

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dd6fe70

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dd6fea0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(void),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(void),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dd6fed0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelinePythonHostExecutor,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UMoviePipelinePythonHostExecutor,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dd6ff00

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineQueueEngineSubsystem,void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UMoviePipelineQueueEngineSubsystem,void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dd6ff30

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineQueueEngineSubsystem,void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UMoviePipelineQueueEngineSubsystem,void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dd6ff60

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineSetting_BlueprintBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UMoviePipelineSetting_BlueprintBase,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dd6ff90

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UMoviePipelineExecutorBase_*,UMoviePipeline_*,bool,FText),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UMoviePipelineExecutorBase_*,UMoviePipeline_*,bool,FText),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dd6ffc0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dd6fff0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dd70020

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,UWorld_*>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,UWorld_*>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dd70050

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMoviePipeline::FlushAsyncEngineSystems'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMoviePipeline::FlushAsyncEngineSystems'::`2'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dd70090

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMoviePipelineOutputMerger::OnSingleSampleDataAvailable_AnyThread'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  undefined8 *puVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMoviePipelineOutputMerger::OnSingleSampleDataAvailable_AnyThread'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  puVar1 = *(undefined8 **)((longlong)this + 8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dd700f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMoviePipelineSurfaceReader::ResizeImpl'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMoviePipelineSurfaceReader::ResizeImpl'::`2'::<lambda_1>,1,0>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dd70140

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMoviePipelineSurfaceQueue::Shutdown'::__l4::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMoviePipelineSurfaceQueue::Shutdown'::`4'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dd70180

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMoviePipeline::RenderFrame'::__l122::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMoviePipeline::RenderFrame'::`122'::<lambda_1>,1,0>::_vftable_;
  if (*(FRHIResource **)((longlong)this + 8) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dd701d0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMoviePipelineSurfaceReader,SharedPointerInternals::DefaultDeleter<FMoviePipelineSurfaceReader>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FMoviePipelineSurfaceReader,SharedPointerInternals::DefaultDeleter<FMoviePipelineSurfaceReader>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dd70210

void * __thiscall
FMoviePipelineSurfaceReader::_scalar_deleting_destructor_
          (FMoviePipelineSurfaceReader *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  FEvent *pFVar3;
  FRHIGPUTextureReadback *pFVar4;
  FRHITexture *this_00;
  longlong *plVar5;
  longlong lVar6;
  FRHIGPUTextureReadback *pFVar7;
  
  pFVar3 = this->AvailableEvent;
  if (pFVar3 != (FEvent *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x20))(pFVar3,0xffffffff,0);
    FGenericPlatformProcess::ReturnSynchEventToPool(this->AvailableEvent);
    this->AvailableEvent = (FEvent *)0x0;
  }
  TUniquePtr<FRHIGPUTextureReadback,TDefaultDelete<FRHIGPUTextureReadback>_>::operator=
            (&this->ReadbackTexture,(void *)0x0);
  pFVar4 = (this->ReadbackTexture).Ptr;
  if (pFVar4 != (FRHIGPUTextureReadback *)0x0) {
    lVar6 = 8;
    pFVar7 = pFVar4 + 1;
    do {
      this_00 = pFVar7[-1].DestinationStagingTextures[7].Reference;
      pFVar7 = (FRHIGPUTextureReadback *)(pFVar7[-1].DestinationStagingTextures + 7);
      lVar6 = lVar6 + -1;
      if (this_00 != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)this_00);
      }
    } while (lVar6 != 0);
    pFVar4->_padding_ = (longlong)&___7FRHIGPUMemoryReadback__6B_;
    if ((FRHIResource *)pFVar4->_padding_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar4->_padding_);
    }
    ::operator_delete(pFVar4,0x58);
  }
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dd70320

void * __thiscall
UMovieGraphValueContainer::_scalar_deleting_destructor_
          (UMovieGraphValueContainer *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMovieGraphValueContainer__6B_;
  FInstancedStruct::Reset(&(this->Value).Value);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dd70390

void * __thiscall
UMoviePipelineExecutorJob::_scalar_deleting_destructor_
          (UMoviePipelineExecutorJob *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UMoviePipelineExecutorJob__6B_;
  pFVar1 = (this->GraphVariableAssignments).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->GraphPreset).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->PresetOrigin).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pFVar1 = (this->StatusMessage).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMoviePipelineConsoleVariableEntry,int>
            ((FMoviePipelineConsoleVariableEntry *)
             (this->ConsoleVariableOverrides).AllocatorInstance.Data,
             (this->ConsoleVariableOverrides).ArrayNum);
  pFVar1 = (this->ConsoleVariableOverrides).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnJobGraphPresetChanged).field_0x8,
             *(int *)&(this->OnJobGraphPresetChanged).field_0x10);
  pvVar2 = *(void **)&(this->OnJobGraphPresetChanged).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnJobGraphPresetChanged);
  pFVar1 = (this->UserData).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ShotInfo).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Comment).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Author).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Map).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Sequence).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->JobName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dd70510

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void * __thiscall
UMoviePipelineExecutorShot::_scalar_deleting_destructor_
          (UMoviePipelineExecutorShot *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UMoviePipelineExecutorShot__6B_;
  pFVar1 = (this->PrimaryGraphVariableAssignments).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GraphVariableAssignments).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->GraphPreset).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->ShotOverridePresetOrigin).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pFVar1 = (this->StatusMessage).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ShotInfo).WorkMetrics.SegmentName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMovieSceneNestedSequenceTransform,int>
            ((FMovieSceneNestedSequenceTransform *)
             (this->ShotInfo).OuterToInnerTransform.NestedTransforms.AllocatorInstance.Data,
             (this->ShotInfo).OuterToInnerTransform.NestedTransforms.ArrayNum);
  pFVar1 = (this->ShotInfo).OuterToInnerTransform.NestedTransforms.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ShotInfo).SubSectionHierarchy.SharedReferenceCount.ReferenceController);
  DestructItems<FMoviePipelineConsoleVariableEntry,int>
            ((FMoviePipelineConsoleVariableEntry *)
             (this->ConsoleVariableOverrides).AllocatorInstance.Data,
             (this->ConsoleVariableOverrides).ArrayNum);
  pFVar1 = (this->ConsoleVariableOverrides).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnShotGraphPresetChanged).field_0x8,
             *(int *)&(this->OnShotGraphPresetChanged).field_0x10);
  pvVar2 = *(void **)&(this->OnShotGraphPresetChanged).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnShotGraphPresetChanged);
  DestructItems<FMoviePipelineSidecarCamera,int>
            ((FMoviePipelineSidecarCamera *)(this->SidecarCameras).AllocatorInstance.Data,
             (this->SidecarCameras).ArrayNum);
  pFVar1 = (this->SidecarCameras).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InnerName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OuterName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dd706a0

void * __thiscall
UMoviePipelineFCPXMLExporter::_scalar_deleting_destructor_
          (UMoviePipelineFCPXMLExporter *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMoviePipelineFCPXMLExporter__6B_;
  pFVar1 = (this->FilePath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FileNameFormatOverride).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMoviePipelineOutputBase::~UMoviePipelineOutputBase((UMoviePipelineOutputBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dd70720

void * __thiscall
UMoviePipelineGameOverrideSetting::_scalar_deleting_destructor_
          (UMoviePipelineGameOverrideSetting *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UMoviePipelineGameOverrideSetting__6B_;
  pFVar1 = (this->PreviousQualityLevels).GPUBenchmarkSteps.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PreviousQualityLevels).CPUBenchmarkSteps.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->SoftGameModeOverride).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  this->_padding_ = (longlong)&___7UMoviePipelineSetting__6B_;
  DestructItems<FText,int>((FText *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x180);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dd707e0

void * __thiscall
UMoviePipelineInProcessExecutor::_scalar_deleting_destructor_
          (UMoviePipelineInProcessExecutor *this,uint param_1)

{
  void *pvVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&___7UMoviePipelineInProcessExecutor__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnIndividualJobFinishedDelegateNative).field_0x8,
             *(int *)&(this->OnIndividualJobFinishedDelegateNative).field_0x10);
  pvVar1 = *(void **)&(this->OnIndividualJobFinishedDelegateNative).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnIndividualJobFinishedDelegateNative);
  plVar2 = *(longlong **)&(this->SavedState).WindowTitle.field0_0x0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
  }
  this->_padding_ = (longlong)&___7UMoviePipelineLinearExecutorBase__6B_;
  UMoviePipelineExecutorBase::~UMoviePipelineExecutorBase((UMoviePipelineExecutorBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dd708a0

void * __thiscall
UMoviePipelineLinearExecutorBase::_scalar_deleting_destructor_
          (UMoviePipelineLinearExecutorBase *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMoviePipelineLinearExecutorBase__6B_;
  UMoviePipelineExecutorBase::~UMoviePipelineExecutorBase((UMoviePipelineExecutorBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dd70900

void * __thiscall
UMoviePipelineOutputSetting::_scalar_deleting_destructor_
          (UMoviePipelineOutputSetting *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMoviePipelineOutputSetting__6B_;
  pFVar1 = (this->FileNameFormat).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OutputDirectory).Path.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UMoviePipelineSetting__6B_;
  DestructItems<FText,int>((FText *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dd709b0

void * __thiscall
UMoviePipelinePrimaryConfig::_scalar_deleting_destructor_
          (UMoviePipelinePrimaryConfig *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UMoviePipelinePrimaryConfig__6B_;
  pFVar1 = (this->TransientSettings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->PerShotConfigMapping).field_0x48 = 0;
  pvVar2 = *(void **)&(this->PerShotConfigMapping).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UMoviePipelineShotConfig>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UMoviePipelineShotConfig>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UMoviePipelineShotConfig>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PerShotConfigMapping);
  UMoviePipelineConfigBase::~UMoviePipelineConfigBase((UMoviePipelineConfigBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dd70a60

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
UMoviePipelinePythonHostExecutor::_scalar_deleting_destructor_
          (UMoviePipelinePythonHostExecutor *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMoviePipelinePythonHostExecutor__6B_;
  UMoviePipelineExecutorBase::~UMoviePipelineExecutorBase((UMoviePipelineExecutorBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dd70ac0

void * __thiscall
UMoviePipelineQueue::_scalar_deleting_destructor_(UMoviePipelineQueue *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UMoviePipelineQueue__6B_;
  pvVar1 = *(void **)&(this->QueueOrigin).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pFVar2 = (this->Jobs).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dd70b40

void * __thiscall
UMoviePipelineQueueEngineSubsystem::_scalar_deleting_destructor_
          (UMoviePipelineQueueEngineSubsystem *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UMoviePipelineQueueEngineSubsystem__6B_;
  if ((this->CachedRenderJobResults).bIsSet != false) {
    DestructItems<FMovieGraphRenderOutputData,int>
              ((FMovieGraphRenderOutputData *)
               (this->CachedRenderJobResults).TypedValue.GraphData.AllocatorInstance.Data,
               (this->CachedRenderJobResults).TypedValue.GraphData.ArrayNum);
    pFVar1 = (this->CachedRenderJobResults).TypedValue.GraphData.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    DestructItems<FMoviePipelineShotOutputData,int>
              ((FMoviePipelineShotOutputData *)
               (this->CachedRenderJobResults).TypedValue.ShotData.AllocatorInstance.Data,
               (this->CachedRenderJobResults).TypedValue.ShotData.ArrayNum);
    pFVar1 = (this->CachedRenderJobResults).TypedValue.ShotData.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  }
  pvVar2 = *(void **)&(this->OnRenderFinished).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRenderFinished);
  UEngineSubsystem::~UEngineSubsystem((UEngineSubsystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dd70c10

void * __thiscall
UMoviePipelineSetting::_scalar_deleting_destructor_(UMoviePipelineSetting *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMoviePipelineSetting__6B_;
  DestructItems<FText,int>
            ((FText *)(this->ValidationResults).AllocatorInstance.Data,
             (this->ValidationResults).ArrayNum);
  pFVar1 = (this->ValidationResults).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
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

// `scalar_deleting_destructor' @ 14dd70c90

void * __thiscall
UMoviePipelineSetting_BlueprintBase::_scalar_deleting_destructor_
          (UMoviePipelineSetting_BlueprintBase *this,uint param_1)

{
  ITextData *pIVar1;
  
  this->_padding_ = (longlong)&___7UMoviePipelineSetting_BlueprintBase__6B_;
  pIVar1 = (this->CategoryText).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  this->_padding_ = (longlong)&___7UMoviePipelineSetting__6B_;
  DestructItems<FText,int>((FText *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dd70d30

void * __thiscall
UMoviePipelineShotConfig::_scalar_deleting_destructor_(UMoviePipelineShotConfig *this,uint param_1)

{
  *(undefined ***)this = &___7UMoviePipelineShotConfig__6B_;
  UMoviePipelineConfigBase::~UMoviePipelineConfigBase((UMoviePipelineConfigBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dd70d90

void * __thiscall
UMoviePipelineVideoOutputBase::_scalar_deleting_destructor_
          (UMoviePipelineVideoOutputBase *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar2;
  
  this->_padding_ = (longlong)&___7UMoviePipelineVideoOutputBase__6B_;
  FVar2 = (this->OutstandingTasks).AllocatorInstance.SecondaryData;
  if (FVar2 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar2 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&this->OutstandingTasks;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)FVar2,(this->OutstandingTasks).ArrayNum);
  FVar2 = (this->OutstandingTasks).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  DestructItems<TTuple<TUniquePtr<MovieRenderPipeline::IVideoCodecWriter,TDefaultDelete<MovieRenderPipeline::IVideoCodecWriter>_>,TPromise<bool>_>,int>
            ((TTuple<TUniquePtr<MovieRenderPipeline::IVideoCodecWriter,TDefaultDelete<MovieRenderPipeline::IVideoCodecWriter>_>,TPromise<bool>_>
              *)(this->AllWriters).AllocatorInstance.Data,(this->AllWriters).ArrayNum);
  pFVar1 = (this->AllWriters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMoviePipelineOutputBase::~UMoviePipelineOutputBase((UMoviePipelineOutputBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x90);
  }
  return this;
}

// BuildCompleteSequenceHierarchyRecursive @ 14dd78050

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
MoviePipeline::BuildCompleteSequenceHierarchyRecursive
          (UMovieSceneSequence *param_1,
          TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FCameraCutSubSectionHierarchyNode *pFVar4;
  UMovieSceneSubSection *this;
  FCameraCutSubSectionHierarchyNode *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  longlong lVar9;
  longlong *plVar10;
  FWeakObjectPtr FVar11;
  FSharedReferencer<1> FVar12;
  bool bVar13;
  int iVar14;
  UObject *pUVar15;
  FCameraCutSubSectionHierarchyNode *pFVar16;
  UMovieScene *pUVar17;
  UMovieSceneTrack *pUVar18;
  UClass *pUVar19;
  longlong *plVar20;
  TReferenceControllerBase<1> *pTVar21;
  UObject *pUVar22;
  TSharedRef<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *pTVar23;
  UMovieSceneSequence *pUVar24;
  ulonglong uVar25;
  atomic<int> *paVar26;
  undefined8 *puVar27;
  longlong *plVar28;
  ForAnyElementType FVar29;
  undefined8 *puVar30;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_168;
  undefined1 local_167 [7];
  longlong *local_160;
  uint local_158;
  uint local_154;
  FWeakObjectPtr local_150;
  FWeakObjectPtr local_148;
  FWeakObjectPtr local_140;
  FWeakObjectPtr local_138;
  TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> local_130;
  TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> local_120;
  FCameraCutSubSectionHierarchyNode *local_110;
  FSharedReferencer<1> local_108;
  FCameraCutSubSectionHierarchyNode *local_100;
  FSharedReferencer<1> local_f8;
  TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> local_f0;
  longlong local_e0;
  longlong lStack_d8;
  undefined8 uStack_d0;
  UObject *local_c8;
  UObject *local_c0;
  UObject *local_b8;
  UObject *local_b0;
  UMovieSceneSubSection *local_a8;
  undefined8 *local_a0;
  longlong local_98;
  longlong *local_90;
  TSharedRef<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> local_88;
  TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> local_78;
  TSharedRef<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> local_68;
  TSharedRef<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> local_58;
  
  pUVar15 = (UObject *)(**(code **)(param_1->_padding_ + 0x2f8))();
  pFVar16 = TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>::operator->(param_2);
  local_c8 = pUVar15;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar15);
  }
  FWeakObjectPtr::operator=(&(pFVar16->MovieScene).WeakPtr,(FObjectPtr)&local_c8);
  pUVar17 = (UMovieScene *)(**(code **)(param_1->_padding_ + 0x2f8))(param_1);
  pUVar18 = UMovieScene::GetCameraCutTrack(pUVar17);
  if (pUVar18 != (UMovieSceneTrack *)0x0) {
    pUVar19 = Z_Construct_UClass_UMovieSceneCameraCutTrack_NoRegister();
    iVar3 = (int)pUVar19->_padding_;
    if ((iVar3 <= *(int *)(pUVar18->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar18->_padding_ + 0x30) + (longlong)iVar3 * 8)
        == &pUVar19->_padding_)) {
      plVar20 = (longlong *)(**(code **)(pUVar18->_padding_ + 0x360))(pUVar18);
      plVar28 = (longlong *)*plVar20;
      lVar9 = plVar20[1];
      local_160 = plVar28 + (int)lVar9;
      while( true ) {
        plVar10 = local_160;
        if ((int)plVar20[1] != (int)lVar9) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<UMovieSceneSection_*_const,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res18);
        }
        if (plVar28 == plVar10) break;
        pUVar15 = (UObject *)*plVar28;
        pTVar21 = ::operator_new(0xa8);
        if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
          pTVar21->SharedReferenceCount = (atomic<int>)0x1;
          pTVar21->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_UFCameraCutSubSectionHierarchyNode_MoviePipeline___00_SharedPointerInternals__6B_
          ;
          pTVar21[1]._padding_ = 0;
          pTVar21[1].SharedReferenceCount = (atomic<int>)0x0;
          pTVar21[1].WeakReferenceCount = (atomic<int>)0x0;
          pTVar21[2]._padding_ = 0;
          pTVar21[2].SharedReferenceCount = (atomic<int>)0x0;
          pTVar21[2].WeakReferenceCount = (atomic<int>)0x0;
          pTVar21[3]._padding_ = 0;
          pTVar21[3].WeakReferenceCount = (atomic<int>)0x0;
          *(undefined8 *)((longlong)&pTVar21[4]._padding_ + 4) = 0;
          *(undefined4 *)&pTVar21[5]._padding_ = 0;
          pTVar21[5].SharedReferenceCount = (atomic<int>)0x0;
          *(undefined4 *)&pTVar21[6]._padding_ = 0;
          pTVar21[6].SharedReferenceCount = (atomic<int>)0x0;
          pTVar21[7]._padding_ = 0;
          pTVar21[7].SharedReferenceCount = (atomic<int>)0x0;
          pTVar21[7].WeakReferenceCount = (atomic<int>)0x0;
          pTVar21->WeakReferenceCount = (atomic<int>)0x1;
          *(undefined1 *)&pTVar21[3].SharedReferenceCount = 2;
          *(undefined1 *)&pTVar21[4]._padding_ = 2;
          *(undefined1 *)&pTVar21[4].WeakReferenceCount = 2;
          *(undefined1 *)((longlong)&pTVar21[5]._padding_ + 4) = 2;
          *(undefined1 *)&pTVar21[5].WeakReferenceCount = 2;
          *(undefined1 *)((longlong)&pTVar21[6]._padding_ + 4) = 2;
          *(undefined4 *)((longlong)&pTVar21[8]._padding_ + 4) = 0xffffffff;
          *(undefined2 *)&pTVar21[6].WeakReferenceCount = 0;
          pTVar21[6].WeakReferenceCount.field_0x2 = 0;
          *(undefined1 *)&pTVar21[8]._padding_ = 1;
          pTVar21[8].SharedReferenceCount = (atomic<int>)0x0;
          pTVar21[8].WeakReferenceCount = (atomic<int>)0x0;
          pTVar21[9]._padding_ = 0;
          pTVar21[9].SharedReferenceCount = (atomic<int>)0x0;
          pTVar21[9].WeakReferenceCount = (atomic<int>)0x0;
          pTVar21[10]._padding_ = 0;
        }
        TSharedRef<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>::
        TSharedRef<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>
                  (&local_88,(FCameraCutSubSectionHierarchyNode *)(pTVar21 + 1),pTVar21);
        FVar12.ReferenceController = local_88.SharedReferenceCount.ReferenceController;
        pFVar16 = local_88.Object;
        if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_88.SharedReferenceCount.ReferenceController);
        pUVar22 = (UObject *)(**(code **)(param_1->_padding_ + 0x2f8))();
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar22 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar22);
        }
        local_150.ObjectIndex = 0;
        local_150.ObjectSerialNumber = 0;
        local_c0 = pUVar22;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar22 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar22);
        }
        FWeakObjectPtr::operator=(&local_150,(FObjectPtr)&local_c0);
        FVar11 = local_150;
        if ((pFVar16 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        (pFVar16->MovieScene).WeakPtr = FVar11;
        if (pUVar15 == (UObject *)0x0) {
LAB_14dd782cf:
          pUVar15 = (UObject *)0x0;
        }
        else {
          pUVar19 = Z_Construct_UClass_UMovieSceneCameraCutSection_NoRegister();
          iVar3 = (int)pUVar19->_padding_;
          if ((*(int *)(*(longlong *)&pUVar15->field_0x10 + 0x38) < iVar3) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar15->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
              &pUVar19->_padding_)) goto LAB_14dd782cf;
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar15);
        }
        local_148.ObjectIndex = 0;
        local_148.ObjectSerialNumber = 0;
        local_b8 = pUVar15;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar15);
        }
        FWeakObjectPtr::operator=(&local_148,(FObjectPtr)&local_b8);
        (pFVar16->CameraCutSection).WeakPtr = local_148;
        if ((param_2->Object == (FCameraCutSubSectionHierarchyNode *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar4 = param_2->Object;
        local_130.SharedReferenceCount.ReferenceController = FVar12.ReferenceController;
        local_130.Object = pFVar16;
        if (FVar12.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar12.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar12.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (pFVar16 != (FCameraCutSubSectionHierarchyNode *)0x0) {
          pTVar23 = TSharedFromThis<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>::AsShared
                              ((TSharedFromThis<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>
                                *)pFVar4,&local_68);
          local_108.ReferenceController = (pTVar23->SharedReferenceCount).ReferenceController;
          pFVar16 = pTVar23->Object;
          if (local_108.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_108.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(local_108.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_110 = pFVar16;
          if ((local_130.Object == (FCameraCutSubSectionHierarchyNode *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (&(local_130.Object)->Parent !=
              (TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *)&local_110) {
            ((local_130.Object)->Parent).Object = pFVar16;
            local_110 = (FCameraCutSubSectionHierarchyNode *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&((local_130.Object)->Parent).SharedReferenceCount,&local_108);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_108.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_68.SharedReferenceCount.ReferenceController);
          TArray<TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>,TSizedDefaultAllocator<32>_>
          ::AddUniqueImpl<TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>_const_&>
                    (&pFVar4->Children,&local_130);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_130.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar12.ReferenceController);
        plVar28 = plVar28 + 1;
      }
    }
  }
  local_98 = (**(code **)(param_1->_padding_ + 0x2f8))(param_1);
  local_154 = *(uint *)(local_98 + 0x100);
  uVar25 = (ulonglong)(int)local_154;
  plVar28 = *(longlong **)(local_98 + 0xf8);
  local_90 = plVar28 + uVar25;
  do {
    plVar20 = local_90;
    local_160 = plVar28;
    if (*(int *)(local_98 + 0x100) != (int)uVar25) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<UMovieSceneTrack_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (plVar28 == plVar20) {
      pUVar17 = (UMovieScene *)(**(code **)(param_1->_padding_ + 0x2f8))();
      UMovieScene::GetAllSections(pUVar17,&local_f0);
      iVar3 = local_f0.ArrayNum;
      pFVar2 = local_f0.AllocatorInstance.Data + (longlong)local_f0.ArrayNum * 8;
      FVar29.Data = local_f0.AllocatorInstance.Data;
      do {
        if (local_f0.ArrayNum != iVar3) {
          local_167[0] = 0;
          `TCheckedPointerIterator<UMovieSceneSection_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_167);
        }
        if (FVar29.Data == pFVar2) {
          if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f0.AllocatorInstance.Data);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((param_2->SharedReferenceCount).ReferenceController);
          return;
        }
        lVar9 = *(longlong *)FVar29.Data;
        if (*(char *)(lVar9 + 0xf0) != '\0') {
          if ((param_2->Object == (FCameraCutSubSectionHierarchyNode *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar16 = param_2->Object;
          lStack_d8 = *(longlong *)(lVar9 + 0xb0);
          uStack_d0 = *(undefined8 *)(lVar9 + 0xb8);
          pFVar6 = (pFVar16->AdditionalSectionsToExpand).AllocatorInstance.Data;
          local_e0 = lVar9;
          if (((pFVar6 <= (FScriptContainerElement *)&local_e0) &&
              ((FScriptContainerElement *)&local_e0 <
               pFVar6 + (longlong)(pFVar16->AdditionalSectionsToExpand).ArrayMax * 0x18)) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar14 = (pFVar16->AdditionalSectionsToExpand).ArrayNum;
          piVar1 = &(pFVar16->AdditionalSectionsToExpand).ArrayMax;
          if (iVar14 == *piVar1) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x818,&(pFVar16->AdditionalSectionsToExpand).AllocatorInstance,
                                piVar1);
          }
          (pFVar16->AdditionalSectionsToExpand).ArrayNum = iVar14 + 1;
          pFVar7 = (pFVar16->AdditionalSectionsToExpand).AllocatorInstance.Data;
          pFVar6 = pFVar7 + (longlong)iVar14 * 0x18;
          *(longlong *)pFVar6 = local_e0;
          *(longlong *)(pFVar6 + 8) = lStack_d8;
          *(undefined8 *)(pFVar7 + (longlong)iVar14 * 0x18 + 0x10) = uStack_d0;
        }
        FVar29.Data = FVar29.Data + 8;
      } while( true );
    }
    plVar20 = (longlong *)*plVar28;
    if (plVar20 != (longlong *)0x0) {
      pUVar19 = Z_Construct_UClass_UMovieSceneSubTrack_NoRegister();
      iVar3 = (int)pUVar19->_padding_;
      if ((iVar3 <= *(int *)(plVar20[2] + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(plVar20[2] + 0x30) + (longlong)iVar3 * 8) ==
          &pUVar19->_padding_)) {
        plVar20 = (longlong *)(**(code **)(*plVar20 + 0x360))(plVar20);
        puVar30 = (undefined8 *)*plVar20;
        local_158 = *(uint *)(plVar20 + 1);
        uVar25 = (ulonglong)(int)local_158;
        puVar27 = puVar30 + uVar25;
        local_a0 = puVar27;
        while( true ) {
          if ((int)plVar20[1] != (int)uVar25) {
            local_168 = 0;
            `TCheckedPointerIterator<UMovieSceneSection_*_const,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_168);
          }
          plVar28 = local_160;
          if (puVar30 == puVar27) break;
          this = (UMovieSceneSubSection *)*puVar30;
          if (this != (UMovieSceneSubSection *)0x0) {
            pUVar19 = Z_Construct_UClass_UMovieSceneSubSection_NoRegister();
            iVar3 = (int)pUVar19->_padding_;
            if ((iVar3 <= *(int *)(this->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
                &pUVar19->_padding_)) {
              pTVar21 = ::operator_new(0xa8);
              if (pTVar21 == (TReferenceControllerBase<1> *)0x0) {
                pFVar16 = (FCameraCutSubSectionHierarchyNode *)&DAT_00000010;
                pTVar21 = (TReferenceControllerBase<1> *)0x0;
LAB_14dd78641:
                if (((pFVar16->_padding_ == 0) || (*(longlong *)&pFVar16->_padding_ == 0)) ||
                   (*(int *)(*(longlong *)&pFVar16->_padding_ + 8) < 1)) {
                  paVar26 = (atomic<int> *)&pFVar16->_padding_;
                  if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    pTVar21->SharedReferenceCount =
                         (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  pFVar16->_padding_ = (longlong)pFVar16;
                  if (pTVar21 != *(TReferenceControllerBase<1> **)paVar26) {
                    if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
                      LOCK();
                      pTVar21->WeakReferenceCount =
                           (atomic<int>)((int)pTVar21->WeakReferenceCount + 1);
                      UNLOCK();
                    }
                    plVar28 = *(longlong **)paVar26;
                    if (plVar28 != (longlong *)0x0) {
                      LOCK();
                      piVar1 = (int *)((longlong)plVar28 + 0xc);
                      iVar3 = *piVar1;
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (iVar3 == 1) {
                        (**(code **)(*plVar28 + 8))(plVar28,1);
                      }
                    }
                    *(TReferenceControllerBase<1> **)paVar26 = pTVar21;
                  }
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(pTVar21);
                }
                if (pTVar21 != (TReferenceControllerBase<1> *)0x0) goto LAB_14dd786ad;
              }
              else {
                pTVar21->SharedReferenceCount = (atomic<int>)0x1;
                pFVar16 = (FCameraCutSubSectionHierarchyNode *)(pTVar21 + 1);
                pTVar21->WeakReferenceCount = (atomic<int>)0x1;
                *(undefined1 *)&pTVar21[3].SharedReferenceCount = 2;
                pTVar21->_padding_ =
                     (longlong)
                     &
                     ___7__TIntrusiveReferenceController_UFCameraCutSubSectionHierarchyNode_MoviePipeline___00_SharedPointerInternals__6B_
                ;
                pTVar21[1]._padding_ = 0;
                pTVar21[1].SharedReferenceCount = (atomic<int>)0x0;
                pTVar21[1].WeakReferenceCount = (atomic<int>)0x0;
                pTVar21[2]._padding_ = 0;
                pTVar21[2].SharedReferenceCount = (atomic<int>)0x0;
                pTVar21[2].WeakReferenceCount = (atomic<int>)0x0;
                pTVar21[3]._padding_ = 0;
                pTVar21[3].WeakReferenceCount = (atomic<int>)0x0;
                *(undefined8 *)((longlong)&pTVar21[4]._padding_ + 4) = 0;
                *(undefined4 *)&pTVar21[5]._padding_ = 0;
                pTVar21[5].SharedReferenceCount = (atomic<int>)0x0;
                *(undefined4 *)&pTVar21[6]._padding_ = 0;
                pTVar21[6].SharedReferenceCount = (atomic<int>)0x0;
                pTVar21[7]._padding_ = 0;
                pTVar21[7].SharedReferenceCount = (atomic<int>)0x0;
                pTVar21[7].WeakReferenceCount = (atomic<int>)0x0;
                *(undefined1 *)&pTVar21[4]._padding_ = 2;
                *(undefined1 *)&pTVar21[4].WeakReferenceCount = 2;
                *(undefined1 *)((longlong)&pTVar21[5]._padding_ + 4) = 2;
                *(undefined1 *)&pTVar21[5].WeakReferenceCount = 2;
                *(undefined1 *)((longlong)&pTVar21[6]._padding_ + 4) = 2;
                *(undefined2 *)&pTVar21[6].WeakReferenceCount = 0;
                pTVar21[6].WeakReferenceCount.field_0x2 = 0;
                *(undefined4 *)((longlong)&pTVar21[8]._padding_ + 4) = 0xffffffff;
                *(undefined1 *)&pTVar21[8]._padding_ = 1;
                pTVar21[8].SharedReferenceCount = (atomic<int>)0x0;
                pTVar21[8].WeakReferenceCount = (atomic<int>)0x0;
                pTVar21[9]._padding_ = 0;
                pTVar21[9].SharedReferenceCount = (atomic<int>)0x0;
                pTVar21[9].WeakReferenceCount = (atomic<int>)0x0;
                pTVar21[10]._padding_ = 0;
                if (pFVar16 != (FCameraCutSubSectionHierarchyNode *)0x0) goto LAB_14dd78641;
                bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InObject != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x246,L"");
                if (bVar13) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
LAB_14dd786ad:
                LOCK();
                pTVar21->SharedReferenceCount =
                     (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
                UNLOCK();
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar21);
              pUVar15 = (UObject *)(**(code **)(param_1->_padding_ + 0x2f8))();
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar15 != (UObject *)0x0)) {
                UE::GC::MarkAsReachable(pUVar15);
              }
              local_140.ObjectIndex = 0;
              local_140.ObjectSerialNumber = 0;
              local_b0 = pUVar15;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar15 != (UObject *)0x0)) {
                UE::GC::MarkAsReachable(pUVar15);
              }
              FWeakObjectPtr::operator=(&local_140,(FObjectPtr)&local_b0);
              FVar11 = local_140;
              if ((pFVar16 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar13)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              (pFVar16->MovieScene).WeakPtr = FVar11;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)this);
              }
              local_138.ObjectIndex = 0;
              local_138.ObjectSerialNumber = 0;
              local_a8 = this;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)this);
              }
              FWeakObjectPtr::operator=(&local_138,(FObjectPtr)&local_a8);
              (pFVar16->Section).WeakPtr = local_138;
              if ((param_2->Object == (FCameraCutSubSectionHierarchyNode *)0x0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar13)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pFVar4 = param_2->Object;
              if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar21->SharedReferenceCount =
                     (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_120.Object = pFVar16;
              local_120.SharedReferenceCount.ReferenceController = pTVar21;
              if (pFVar16 != (FCameraCutSubSectionHierarchyNode *)0x0) {
                pTVar23 = TSharedFromThis<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>::
                          AsShared((TSharedFromThis<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>
                                    *)pFVar4,&local_58);
                local_f8.ReferenceController = (pTVar23->SharedReferenceCount).ReferenceController;
                pFVar5 = pTVar23->Object;
                if (local_f8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (local_f8.ReferenceController)->SharedReferenceCount =
                       (atomic<int>)((int)(local_f8.ReferenceController)->SharedReferenceCount + 1);
                  UNLOCK();
                }
                local_100 = pFVar5;
                if ((local_120.Object == (FCameraCutSubSectionHierarchyNode *)0x0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar13)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                if (&(local_120.Object)->Parent !=
                    (TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *)&local_100) {
                  ((local_120.Object)->Parent).Object = pFVar5;
                  local_100 = (FCameraCutSubSectionHierarchyNode *)0x0;
                  SharedPointerInternals::FSharedReferencer<1>::operator=
                            (&((local_120.Object)->Parent).SharedReferenceCount,&local_f8);
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_f8.ReferenceController);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_58.SharedReferenceCount.ReferenceController);
                TArray<TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>,TSizedDefaultAllocator<32>_>
                ::
                AddUniqueImpl<TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>_const_&>
                          (&pFVar4->Children,&local_120);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_120.SharedReferenceCount.ReferenceController);
              pUVar24 = UMovieSceneSubSection::GetSequence(this);
              if (pUVar24 != (UMovieSceneSequence *)0x0) {
                if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar21->SharedReferenceCount =
                       (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
                  UNLOCK();
                }
                local_78.Object = pFVar16;
                local_78.SharedReferenceCount.ReferenceController = pTVar21;
                pUVar24 = UMovieSceneSubSection::GetSequence(this);
                BuildCompleteSequenceHierarchyRecursive(pUVar24,&local_78);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar21);
              puVar27 = local_a0;
            }
          }
          uVar25 = (ulonglong)local_158;
          puVar30 = puVar30 + 1;
        }
      }
    }
    plVar28 = plVar28 + 1;
    uVar25 = (ulonglong)local_154;
  } while( true );
}

// BuildSectionHierarchyRecursive @ 14dd79370

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
MoviePipeline::BuildSectionHierarchyRecursive
          (FMovieSceneSequenceHierarchy *param_1,UMovieSceneSequence *param_2,
          FMovieSceneSequenceID param_3,FMovieSceneSequenceID param_4,
          TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *param_5)

{
  undefined8 *puVar1;
  void *_Src;
  UMovieSceneTrack *pUVar2;
  UObject *pUVar3;
  TReferenceControllerBase<1> *pTVar4;
  FCameraCutSubSectionHierarchyNode *this;
  FCameraCutSubSectionHierarchyNode *pFVar5;
  code *pcVar6;
  FScriptContainerElement *pFVar7;
  FWeakObjectPtr FVar8;
  bool bVar9;
  longlong lVar10;
  longlong lVar11;
  UClass *pUVar12;
  longlong *plVar13;
  TSharedRef<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *pTVar14;
  FCameraCutSubSectionHierarchyNode *this_00;
  FString *pFVar15;
  FMovieSceneSubSequenceData *this_01;
  ulonglong uVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  FScriptContainerElement *pFVar19;
  wchar_t *pwVar20;
  int iVar21;
  UMovieSceneSequence *pUVar22;
  FMovieSceneSequenceHierarchy *pFVar23;
  wchar_t *pwVar24;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_118 [8];
  FScriptContainerElement *local_110;
  UMovieSceneSequence *local_108;
  ForAnyElementType local_100;
  uint local_f8;
  int local_f4;
  uint local_f0;
  longlong local_e8;
  FWeakObjectPtr local_e0;
  FWeakObjectPtr local_d8;
  FScriptContainerElement *local_d0;
  UObject *local_c8;
  UObject *local_c0;
  TSharedRef<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> local_b8;
  TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> local_a8;
  TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> local_98;
  TSharedRef<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> local_88;
  int local_78;
  int iStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  FString local_68;
  FString local_58;
  
  pFVar23 = param_1;
  local_108 = param_2;
  if (param_3.Value != 0) {
    if (*(int *)&(param_1->Hierarchy).field_0x8 != *(int *)&(param_1->Hierarchy).field_0x34) {
      puVar17 = *(undefined1 **)&(param_1->Hierarchy).field_0x40;
      if (puVar17 == (undefined1 *)0x0) {
        puVar17 = &(param_1->Hierarchy).field_0x38;
      }
      iVar21 = *(int *)(puVar17 +
                       (ulonglong)(*(int *)&(param_1->Hierarchy).field_0x48 - 1U & param_3.Value) *
                       4);
      if (iVar21 != -1) {
        lVar11 = *(longlong *)&param_1->Hierarchy;
        do {
          if (*(uint *)(lVar11 + (longlong)iVar21 * 0x28) == param_3.Value) {
            if ((iVar21 != -1) && (lVar11 = lVar11 + (longlong)iVar21 * 0x28, lVar11 != 0)) {
              pFVar23 = (FMovieSceneSequenceHierarchy *)(lVar11 + 8);
              goto LAB_14dd7940e;
            }
            break;
          }
          iVar21 = *(int *)(lVar11 + 0x20 + (longlong)iVar21 * 0x28);
        } while (iVar21 != -1);
      }
    }
    pFVar23 = (FMovieSceneSequenceHierarchy *)0x0;
LAB_14dd7940e:
    if (*(int *)&(param_1->SubSequences).field_0x8 != *(int *)&(param_1->SubSequences).field_0x34) {
      puVar17 = *(undefined1 **)&(param_1->SubSequences).field_0x40;
      if (puVar17 == (undefined1 *)0x0) {
        puVar17 = &(param_1->SubSequences).field_0x38;
      }
      iVar21 = *(int *)(puVar17 +
                       (ulonglong)(*(int *)&(param_1->SubSequences).field_0x48 - 1U & param_3.Value)
                       * 4);
      if (iVar21 != -1) {
        lVar11 = *(longlong *)&param_1->SubSequences;
        do {
          if (*(uint *)((longlong)iVar21 * 0x120 + lVar11) == param_3.Value) {
            if (((iVar21 != -1) && (lVar11 = (longlong)iVar21 * 0x120 + lVar11, lVar11 != 0)) &&
               (this_01 = (FMovieSceneSubSequenceData *)(lVar11 + 8),
               this_01 != (FMovieSceneSubSequenceData *)0x0)) {
              local_108 = FMovieSceneSubSequenceData::GetSequence(this_01);
              goto LAB_14dd7947a;
            }
            break;
          }
          iVar21 = *(int *)((longlong)iVar21 * 0x120 + 0x118 + lVar11);
        } while (iVar21 != -1);
      }
    }
    local_108 = (UMovieSceneSequence *)0x0;
  }
LAB_14dd7947a:
  pUVar22 = local_108;
  if ((param_4.Value != 0) &&
     (*(int *)&(param_1->SubSequences).field_0x8 != *(int *)&(param_1->SubSequences).field_0x34)) {
    puVar17 = *(undefined1 **)&(param_1->SubSequences).field_0x40;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = &(param_1->SubSequences).field_0x38;
    }
    iVar21 = *(int *)(puVar17 +
                     (ulonglong)(*(int *)&(param_1->SubSequences).field_0x48 - 1U & param_4.Value) *
                     4);
    if (iVar21 != -1) {
      lVar11 = *(longlong *)&param_1->SubSequences;
      do {
        if (*(uint *)((longlong)iVar21 * 0x120 + lVar11) == param_4.Value) {
          if ((iVar21 != -1) && (lVar11 = (longlong)iVar21 * 0x120 + lVar11, lVar11 != 0)) {
            lVar11 = lVar11 + 8;
            goto LAB_14dd794e4;
          }
          break;
        }
        iVar21 = *(int *)((longlong)iVar21 * 0x120 + 0x118 + lVar11);
      } while (iVar21 != -1);
    }
  }
  lVar11 = 0;
LAB_14dd794e4:
  local_e8 = lVar11;
  if (((pFVar23 == (FMovieSceneSequenceHierarchy *)0x0) || (local_108 == (UMovieSceneSequence *)0x0)
      ) || (lVar10 = (**(code **)(local_108->_padding_ + 0x2f8))(local_108), lVar10 == 0)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_5->SharedReferenceCount).ReferenceController);
    return;
  }
  if (lVar11 != 0) {
    lVar11 = (**(code **)(pUVar22->_padding_ + 0x2f8))();
    local_100.Data = (FScriptContainerElement *)0x0;
    local_110 = (FScriptContainerElement *)0x0;
    local_f8 = *(uint *)(lVar11 + 0x100);
    lVar10 = (longlong)(int)local_f8;
    _Src = *(void **)(lVar11 + 0xf8);
    if (local_f8 == 0) {
      local_f4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_f8,0,&local_100,local_f8,&local_f4);
      memcpy(local_100.Data,_Src,lVar10 << 3);
    }
    uVar16 = (ulonglong)(int)local_f8;
    local_f0 = local_f8;
    pFVar19 = local_100.Data + uVar16 * 8;
    local_110 = local_100.Data;
    local_d0 = pFVar19;
LAB_14dd79650:
    pFVar7 = local_110;
    pwVar24 = L"";
    if (local_f8 != (uint)uVar16) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<UMovieSceneTrack_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar7 != pFVar19) {
      pUVar2 = *(UMovieSceneTrack **)pFVar7;
      if (pUVar2 != (UMovieSceneTrack *)0x0) {
        pUVar12 = Z_Construct_UClass_UMovieSceneSubTrack_NoRegister();
        iVar21 = (int)pUVar12->_padding_;
        if ((iVar21 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar21 * 8) ==
            &pUVar12->_padding_)) {
          pUVar12 = Z_Construct_UClass_UMovieSceneSubTrack_NoRegister();
          iVar21 = (int)pUVar12->_padding_;
          if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar21) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar21 * 8) !=
              &pUVar12->_padding_)) {
            pFVar15 = GetTypeName<UMovieSceneSubTrack>(&local_68);
            if ((pFVar15->Data).ArrayNum == 0) {
              pwVar20 = L"";
            }
            else {
              pwVar20 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
            }
            pFVar15 = GetFullNameForCastLogError<UMovieSceneTrack_const_>(&local_58,pUVar2);
            if ((pFVar15->Data).ArrayNum != 0) {
              pwVar24 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
            }
                    /* WARNING: Subroutine does not return */
            CastLogError(pwVar24,pwVar20);
          }
          plVar13 = (longlong *)(**(code **)(pUVar2->_padding_ + 0x360))(pUVar2);
          puVar18 = (undefined8 *)*plVar13;
          lVar11 = plVar13[1];
          puVar1 = puVar18 + (int)lVar11;
          do {
            if ((int)plVar13[1] != (int)lVar11) {
              local_res20[0] = 0;
              `TCheckedPointerIterator<UMovieSceneSection_*_const,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_res20);
            }
            pFVar19 = local_d0;
            if (puVar18 == puVar1) break;
            pUVar3 = (UObject *)*puVar18;
            if (pUVar3 != (UObject *)0x0) {
              pUVar12 = Z_Construct_UClass_UMovieSceneSubSection_NoRegister();
              iVar21 = (int)pUVar12->_padding_;
              if ((iVar21 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar21 * 8)
                  == &pUVar12->_padding_)) {
                local_78 = *(int *)(local_e8 + 0x100);
                iStack_74 = *(int *)(local_e8 + 0x104);
                uStack_70 = *(undefined4 *)(local_e8 + 0x108);
                uStack_6c = *(undefined4 *)(local_e8 + 0x10c);
                if ((((int)((ulonglong)*(undefined8 *)(local_e8 + 0x108) >> 0x20) ==
                      *(int *)&pUVar3[1].field_0x10 && iStack_74 == *(int *)&pUVar3[1].field_0x8) &&
                    (int)*(undefined8 *)(local_e8 + 0x108) == *(int *)&pUVar3[1].field_0xc) &&
                    local_78 == *(int *)&pUVar3[1].field_0x4) goto LAB_14dd7977a;
              }
            }
            puVar18 = puVar18 + 1;
          } while( true );
        }
      }
      goto LAB_14dd79808;
    }
    pUVar22 = local_108;
    if (local_100.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data);
      pUVar22 = local_108;
    }
  }
  local_c0 = (UObject *)(**(code **)(pUVar22->_padding_ + 0x2f8))(pUVar22);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_c0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_c0);
  }
  local_d8.ObjectIndex = 0;
  local_d8.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_c0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_c0);
  }
  FWeakObjectPtr::operator=(&local_d8,(FObjectPtr)&local_c0);
  FVar8 = local_d8;
  if ((param_5->Object == (FCameraCutSubSectionHierarchyNode *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  (param_5->Object->MovieScene).WeakPtr = FVar8;
  if ((param_5->Object == (FCameraCutSubSectionHierarchyNode *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  (param_5->Object->NodeID).Value = param_3.Value;
  if (param_3.Value != 0) {
    pTVar14 = MakeShared<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>(&local_b8);
    pTVar4 = (pTVar14->SharedReferenceCount).ReferenceController;
    this = pTVar14->Object;
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b8.SharedReferenceCount.ReferenceController);
      this_00 = TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>::operator->(param_5);
    }
    else {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b8.SharedReferenceCount.ReferenceController);
      this_00 = TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>::operator->(param_5);
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((this != (FCameraCutSubSectionHierarchyNode *)0x0) &&
       (pFVar5 = (this_00->Parent).Object, this != pFVar5)) {
      if (pFVar5 != (FCameraCutSubSectionHierarchyNode *)0x0) {
        `MoviePipeline::FCameraCutSubSectionHierarchyNode::SetParent'::__l2::<lambda_1>::operator()
                  (local_118);
      }
      pTVar14 = TSharedFromThis<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>::AsShared
                          ((TSharedFromThis<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *)
                           this_00,&local_88);
      local_a8.Object = pTVar14->Object;
      local_a8.SharedReferenceCount.ReferenceController =
           (pTVar14->SharedReferenceCount).ReferenceController;
      if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FCameraCutSubSectionHierarchyNode::AddChild(this,&local_a8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.SharedReferenceCount.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_98.Object = this;
    local_98.SharedReferenceCount.ReferenceController = pTVar4;
    BuildSectionHierarchyRecursive
              (param_1,param_2,(FMovieSceneSequenceID)(pFVar23->RootNode).ParentID.Value,param_3,
               &local_98);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_5->SharedReferenceCount).ReferenceController);
  return;
LAB_14dd7977a:
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  local_e0.ObjectIndex = 0;
  local_e0.ObjectSerialNumber = 0;
  local_c8 = pUVar3;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=(&local_e0,(FObjectPtr)&local_c8);
  FVar8 = local_e0;
  if ((param_5->Object == (FCameraCutSubSectionHierarchyNode *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  (param_5->Object->Section).WeakPtr = FVar8;
  pFVar19 = local_d0;
LAB_14dd79808:
  uVar16 = (ulonglong)local_f0;
  local_110 = local_110 + 8;
  goto LAB_14dd79650;
}

// CacheCompleteSequenceHierarchy @ 14dd79a70

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
MoviePipeline::CacheCompleteSequenceHierarchy
          (UMovieSceneSequence *param_1,
          TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  int iVar2;
  TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *pTVar3;
  ForAnyElementType FVar4;
  undefined1 local_res10 [8];
  TArray<TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>,TSizedDefaultAllocator<32>_>
  local_38;
  TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> local_28;
  
  local_28.Object = param_2->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  BuildCompleteSequenceHierarchyRecursive(param_1,&local_28);
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  local_28.Object = param_2->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  GatherLeafNodesRecursive(&local_28,&local_38);
  iVar2 = local_38.ArrayNum;
  pTVar3 = (TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *)
           (local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 0x10);
  FVar4.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if (local_38.ArrayNum != iVar2) {
      `TCheckedPointerIterator<TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *)FVar4.Data == pTVar3)
    break;
    pTVar1 = (((TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *)FVar4.Data)->
             SharedReferenceCount).ReferenceController;
    local_28.Object =
         ((TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *)FVar4.Data)->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28.SharedReferenceCount.ReferenceController = pTVar1;
    SaveOrRestoreSubSectionHierarchy(&local_28,true);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    FVar4.Data = FVar4.Data + 0x10;
  }
  DestructItems<TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>,int>
            ((TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *)
             local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if ((TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *)
      local_38.AllocatorInstance.Data !=
      (TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// CheckPartialSectionEvaluationAndWarn @ 14dd7aa60

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
MoviePipeline::CheckPartialSectionEvaluationAndWarn
          (FFrameNumber *param_1,
          TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *param_2,
          UMoviePipelineExecutorShot *param_3,FFrameRate *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  UMovieSceneSection *pUVar3;
  code *pcVar4;
  FFrameRate FVar5;
  FFrameRate FVar6;
  UMoviePipelineExecutorShot *pUVar7;
  uint uVar8;
  bool bVar9;
  char cVar10;
  UMovieScene *pUVar11;
  UObject *pUVar12;
  FText *this;
  FString *pFVar13;
  ulonglong uVar14;
  int *piVar15;
  undefined8 *puVar16;
  ForAnyElementType FVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  FScriptContainerElement *pFVar21;
  undefined1 local_res8 [8];
  TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *local_res10;
  UMoviePipelineExecutorShot *local_res18;
  FFrameRate *local_res20;
  undefined1 local_138;
  undefined1 local_137 [7];
  undefined8 local_130;
  undefined8 local_128;
  FString local_120;
  uint local_110;
  uint local_10c;
  uint local_108;
  uint local_104;
  undefined1 local_100;
  int local_fc;
  undefined1 local_f8;
  int local_f4;
  uint local_f0;
  uint uStack_ec;
  undefined4 local_e8;
  uint uStack_e4;
  uint local_e0;
  undefined4 uStack_dc;
  uint local_d8;
  undefined4 uStack_d4;
  FScriptContainerElement *local_d0;
  FScriptContainerElement *local_c8;
  TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> local_c0;
  FName local_b0;
  UMovieSceneSection *local_a8;
  FString local_a0;
  undefined1 local_90 [8];
  undefined1 local_88 [8];
  uchar local_80;
  undefined1 uStack_7f;
  undefined1 uStack_7e;
  undefined1 uStack_7d;
  undefined1 uStack_7c;
  undefined1 uStack_7b;
  undefined1 uStack_7a;
  undefined1 uStack_79;
  uchar uStack_78;
  undefined1 uStack_77;
  undefined1 uStack_76;
  undefined1 uStack_75;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined1 uStack_72;
  undefined1 uStack_71;
  FText local_70;
  uchar local_60;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  undefined1 uStack_5d;
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  uchar uStack_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (0 < param_1->Value) {
    if ((param_2->Object == (FCameraCutSubSectionHierarchyNode *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar9 = FWeakObjectPtr::IsValid(&(param_2->Object->MovieScene).WeakPtr);
    if (bVar9) {
      iVar2 = param_1->Value;
      if (((param_3->ShotInfo).TotalOutputRangeRoot.LowerBound.Type.Value == '\x02') &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar19 = (param_3->ShotInfo).TotalOutputRangeRoot.LowerBound.Value.Value - iVar2;
      local_10c = uVar19;
      if (((param_3->ShotInfo).TotalOutputRangeRoot.LowerBound.Type.Value == '\x02') &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar8 = local_f0;
      local_108 = (param_3->ShotInfo).TotalOutputRangeRoot.LowerBound.Value.Value;
      local_f0 = local_f0 & 0xffffff00;
      local_130 = CONCAT44(uVar19,uVar8) & 0xffffffffffffff00;
      local_e8 = CONCAT31(local_e8._1_3_,1);
      local_128 = CONCAT44(local_108,local_e8);
      uStack_ec = uVar19;
      uStack_e4 = local_108;
      if ((param_2->Object == (FCameraCutSubSectionHierarchyNode *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pUVar11 = (UMovieScene *)FWeakObjectPtr::Get(&(param_2->Object->MovieScene).WeakPtr);
      UMovieScene::GetAllSections(pUVar11,&local_c0);
      uVar14 = (ulonglong)local_c0.ArrayNum;
      local_104 = local_c0.ArrayNum;
      pFVar21 = local_c0.AllocatorInstance.Data + uVar14 * 8;
      FVar17.Data = local_c0.AllocatorInstance.Data;
      local_d0 = pFVar21;
      while( true ) {
        local_c8 = FVar17.Data;
        if (local_c0.ArrayNum != (uint)uVar14) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<UMovieSceneSection_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (FVar17.Data == pFVar21) break;
        pUVar3 = *(UMovieSceneSection **)FVar17.Data;
        local_a8 = pUVar3;
        if ((pUVar3 != (UMovieSceneSection *)0x0) && (pUVar3->bSupportsInfiniteRange == false)) {
          if ((param_2->Object == (FCameraCutSubSectionHierarchyNode *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          bVar9 = TWeakObjectPtr<UMovieSceneSubSection,FWeakObjectPtr>::
                  UEOpEquals<UMovieSceneSection,bool>(&param_2->Object->Section,pUVar3);
          if (!bVar9) {
            if ((param_2->Object == (FCameraCutSubSectionHierarchyNode *)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar9)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            bVar9 = TWeakObjectPtr<UMovieSceneCameraCutSection,FWeakObjectPtr>::
                    UEOpEquals<UMovieSceneSection,bool>(&param_2->Object->CameraCutSection,pUVar3);
            if (!bVar9) {
              local_60 = (pUVar3->SectionRange).Value.LowerBound.Type.Value;
              uStack_5f = (pUVar3->SectionRange).Value.LowerBound.field_0x1;
              uStack_5e = (pUVar3->SectionRange).Value.LowerBound.field_0x2;
              uStack_5d = (pUVar3->SectionRange).Value.LowerBound.field_0x3;
              uStack_5c = (undefined1)(pUVar3->SectionRange).Value.LowerBound.Value.Value;
              uStack_5b = *(undefined1 *)
                           ((longlong)&(pUVar3->SectionRange).Value.LowerBound.Value.Value + 1);
              uStack_5a = *(undefined1 *)
                           ((longlong)&(pUVar3->SectionRange).Value.LowerBound.Value.Value + 2);
              uStack_59 = *(undefined1 *)
                           ((longlong)&(pUVar3->SectionRange).Value.LowerBound.Value.Value + 3);
              uStack_58 = (pUVar3->SectionRange).Value.UpperBound.Type.Value;
              uStack_57 = (pUVar3->SectionRange).Value.UpperBound.field_0x1;
              uStack_56 = (pUVar3->SectionRange).Value.UpperBound.field_0x2;
              uStack_55 = (pUVar3->SectionRange).Value.UpperBound.field_0x3;
              uStack_54 = (undefined1)(pUVar3->SectionRange).Value.UpperBound.Value.Value;
              uStack_53 = *(undefined1 *)
                           ((longlong)&(pUVar3->SectionRange).Value.UpperBound.Value.Value + 1);
              uStack_52 = *(undefined1 *)
                           ((longlong)&(pUVar3->SectionRange).Value.UpperBound.Value.Value + 2);
              uStack_51 = *(undefined1 *)
                           ((longlong)&(pUVar3->SectionRange).Value.UpperBound.Value.Value + 3);
              if (local_60 != '\x02') {
                local_80 = local_60;
                uStack_7f = uStack_5f;
                uStack_7e = uStack_5e;
                uStack_7d = uStack_5d;
                uStack_7c = uStack_5c;
                uStack_7b = uStack_5b;
                uStack_7a = uStack_5a;
                uStack_79 = uStack_59;
                uStack_78 = uStack_58;
                uStack_77 = uStack_57;
                uStack_76 = uStack_56;
                uStack_75 = uStack_55;
                uStack_74 = uStack_54;
                uStack_73 = uStack_53;
                uStack_72 = uStack_52;
                uStack_71 = uStack_51;
                if ((local_60 == '\x02') &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Type != ERangeBoundTypes::Open",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                       ,99,L""), bVar9)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                local_fc = CONCAT13(uStack_79,CONCAT12(uStack_7a,CONCAT11(uStack_7b,uStack_7c)));
                local_100 = 1;
                if ((char)local_130 == '\x02') {
                  cVar10 = '\x02';
                  piVar15 = (int *)((longlong)&local_130 + 4);
LAB_14dd7ad3c:
                  if (cVar10 != (char)local_130) goto LAB_14dd7b088;
                }
                else {
                  if (local_fc <= local_130._4_4_) {
                    if ((local_fc < local_130._4_4_) ||
                       (piVar15 = (int *)((longlong)&local_130 + 4), (char)local_130 != '\x01')) {
                      piVar15 = &local_fc;
                    }
                    cVar10 = '\x01';
                    goto LAB_14dd7ad3c;
                  }
                  piVar15 = (int *)((longlong)&local_130 + 4);
                  cVar10 = (char)local_130;
                }
                if ((cVar10 == '\x02') || (*piVar15 == local_130._4_4_)) {
                  local_f8 = 1;
                  local_f4 = local_fc;
                  if ((char)local_128 == '\x02') {
                    cVar10 = '\x02';
                    piVar15 = (int *)((longlong)&local_128 + 4);
LAB_14dd7ad93:
                    if (cVar10 != (char)local_128) goto LAB_14dd7b088;
                  }
                  else {
                    if (local_128._4_4_ <= local_fc) {
                      if ((local_128._4_4_ < local_fc) ||
                         (piVar15 = (int *)((longlong)&local_128 + 4), (char)local_128 != '\x01')) {
                        piVar15 = &local_f4;
                      }
                      cVar10 = '\x01';
                      goto LAB_14dd7ad93;
                    }
                    piVar15 = (int *)((longlong)&local_128 + 4);
                    cVar10 = (char)local_128;
                  }
                  if ((cVar10 == '\x02') || (*piVar15 == local_128._4_4_)) {
                    local_b0 = (FName)pUVar3->_padding_;
                    ::FName::ToString(&local_b0,&local_a0);
                    ::FString::FString(&local_120,L"None");
                    if ((param_2->Object == (FCameraCutSubSectionHierarchyNode *)0x0) &&
                       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("IsValid()",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                           ,0x458,L""), bVar9)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    pUVar12 = FWeakObjectPtr::Get(&(param_2->Object->MovieScene).WeakPtr);
                    lVar20 = *(longlong *)&pUVar12[3].field_0x20;
                    local_110 = *(uint *)(pUVar12 + 4);
                    uVar14 = (ulonglong)(int)local_110;
                    lVar18 = uVar14 * 0x40 + lVar20;
                    piVar15 = (int *)(lVar20 + 0x38);
                    while( true ) {
                      if (*(int *)(pUVar12 + 4) != (int)uVar14) {
                        local_138 = 0;
                        `TCheckedPointerIterator<FMovieSceneBinding_const_,int,0>::operator!='::__l2
                        ::<lambda_1>::operator()(&local_138);
                      }
                      pUVar7 = local_res18;
                      if (lVar20 == lVar18) break;
                      puVar16 = *(undefined8 **)(piVar15 + -2);
                      iVar2 = *piVar15;
                      puVar1 = puVar16 + iVar2;
                      while( true ) {
                        if (*piVar15 != iVar2) {
                          local_137[0] = 0;
                          `TCheckedPointerIterator<UMovieSceneTrack_*_const,int,0>::operator!='::
                          __l2::<lambda_1>::operator()(local_137);
                        }
                        param_2 = local_res10;
                        if (puVar16 == puVar1) goto LAB_14dd7af7f;
                        cVar10 = (**(code **)(*(longlong *)*puVar16 + 0x368))
                                           ((longlong *)*puVar16,local_a8);
                        param_2 = local_res10;
                        if (cVar10 != '\0') break;
                        puVar16 = puVar16 + 1;
                      }
                      if ((local_res10->Object == (FCameraCutSubSectionHierarchyNode *)0x0) &&
                         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                            ("IsValid()",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                             ,0x458,L""), bVar9)) {
                        pcVar4 = (code *)swi(3);
                        (*pcVar4)();
                        return;
                      }
                      pUVar11 = (UMovieScene *)
                                FWeakObjectPtr::Get(&(param_2->Object->MovieScene).WeakPtr);
                      this = UMovieScene::GetObjectDisplayName
                                       (pUVar11,&local_70,(FGuid *)(piVar15 + -10));
                      pFVar13 = FText::ToString(this);
                      if (&local_120 != pFVar13) {
                        iVar2 = (pFVar13->Data).ArrayNum;
                        pFVar21 = (pFVar13->Data).AllocatorInstance.Data;
                        local_120.Data.ArrayNum = iVar2;
                        if (((iVar2 != 0) || (local_120.Data.ArrayMax != 0)) &&
                           (UE::Core::Private::
                            ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (2,2,iVar2,local_120.Data.ArrayMax,
                                       (ForAnyElementType *)&local_120,iVar2,
                                       &local_120.Data.ArrayMax), iVar2 != 0)) {
                          memcpy(local_120.Data.AllocatorInstance.Data,pFVar21,(longlong)iVar2 * 2);
                        }
                      }
                      if (local_70.TextData.Reference == (ITextData *)0x0) {
LAB_14dd7af7f:
                        uVar14 = (ulonglong)local_110;
                        lVar20 = lVar20 + 0x40;
                        piVar15 = piVar15 + 0x10;
                      }
                      else {
                        (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
                        uVar14 = (ulonglong)local_110;
                        lVar20 = lVar20 + 0x40;
                        piVar15 = piVar15 + 0x10;
                      }
                    }
                    local_e0 = local_10c;
                    uStack_dc = 0;
                    FVar5.Denominator = 0;
                    FVar5.Numerator = local_10c;
                    FFrameRate::TransformTime
                              ((FFrameTime)local_90,FVar5,
                               (local_res18->ShotInfo).CachedTickResolution);
                    local_d8 = local_108;
                    uStack_d4 = 0;
                    FVar6.Denominator = 0;
                    FVar6.Numerator = local_108;
                    FFrameRate::TransformTime
                              ((FFrameTime)local_88,FVar6,(pUVar7->ShotInfo).CachedTickResolution);
                    if (2 < (byte)LogMovieRenderPipeline._0_1_) {
                      UE::Logging::Private::BasicLog<3>
                                (&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
                    }
                    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_120.Data.AllocatorInstance.Data);
                    }
                    pFVar21 = local_d0;
                    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
                      pFVar21 = local_d0;
                    }
                  }
                }
              }
            }
          }
        }
LAB_14dd7b088:
        uVar14 = (ulonglong)local_104;
        FVar17.Data = local_c8 + 8;
      }
      if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.AllocatorInstance.Data);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// DuplicateConfigRecursive @ 14dd7ecf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieGraphConfig * __cdecl
MoviePipeline::DuplicateConfigRecursive
          (UMovieGraphConfig *param_1,
          TMap<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>,0>_>
          *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  UMovieGraphSubgraphNode *this;
  UMovieGraphConfig *pUVar3;
  UObject *pUVar4;
  longlong lVar5;
  code *pcVar6;
  TMap<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>,0>_>
  *pTVar7;
  bool bVar8;
  int iVar9;
  TObjectPtr<UMovieGraphConfig> *pTVar10;
  UPackage *pUVar11;
  FString *pFVar12;
  FName *pFVar13;
  TObjectPtr<UMovieGraphConfig>_u_0 TVar14;
  UClass *pUVar15;
  UMovieGraphConfig *pUVar16;
  TTuple<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>_> *pTVar17;
  uint uVar18;
  ulonglong uVar19;
  int iVar20;
  undefined8 *puVar21;
  FScriptContainerElement *pFVar22;
  uint uVar23;
  FScriptContainerElement *this_00;
  undefined1 *puVar24;
  uint *puVar25;
  undefined1 auStackY_2b8 [32];
  undefined1 local_278;
  undefined1 local_277 [7];
  TObjectPtr<UMovieGraphConfig>_u_0 local_270;
  FScriptContainerElement *local_268;
  FScriptContainerElement *local_260;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_258;
  uint local_248;
  UMovieGraphSubgraphNode *local_240;
  undefined8 local_238;
  undefined1 local_230 [24];
  FUtf8String local_218;
  TPairInitializer<TObjectPtr<UMovieGraphConfig>_&&,TObjectPtr<UMovieGraphConfig>_&&> local_208;
  TObjectPtr<UMovieGraphConfig_const_>_u_0 local_1f8;
  UMovieGraphConfig *local_1f0;
  FName local_1e8;
  UMovieGraphConfig *local_1e0;
  TObjectPtr<UMovieGraphConfig>_u_0 local_1d8;
  UMovieGraphConfig *local_1d0;
  UObject *local_1c8;
  FString local_1c0;
  TMap<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>,0>_>
  *local_1b0;
  int iStack_1a8;
  uint uStack_1a4;
  undefined1 *local_1a0;
  undefined4 uStack_198;
  int iStack_194;
  int local_190;
  undefined4 uStack_18c;
  int iStack_188;
  undefined4 uStack_184;
  TMap<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>,0>_>
  *local_180;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_178;
  undefined8 uStack_158;
  UMovieGraphConfig **local_150;
  TObjectPtr<UMovieGraphConfig>_u_0 *local_148;
  FName local_140;
  FStringFormatArg local_138;
  FString local_118 [2];
  undefined4 local_ec;
  undefined1 local_e8 [128];
  void *local_68;
  undefined4 local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMovieGraphConfig *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_1f8.DebugPtr = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (param_1 != (UMovieGraphConfig *)0x0) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UMovieGraphConfig *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
  }
  uVar18 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
           -0x7a143595;
  uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
  iVar9 = TSet<TTuple<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TObjectPtr<UMovieGraphConfig_const_>_>
                    ((TSet<TTuple<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>,0>,FDefaultSetAllocator>
                      *)param_2,uVar18 >> 0x10 ^ uVar18,
                     (TObjectPtr<UMovieGraphConfig_const_> *)&local_1f8.ObjectPtr);
  if (iVar9 != -1) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UMovieGraphConfig *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_1f0 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UMovieGraphConfig *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    pTVar10 = TMapBase<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>,0>_>
              ::FindChecked((TMapBase<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>,0>_>
                             *)param_2,(TObjectPtr<UMovieGraphConfig_const_>)&local_1f0);
    TVar14.ObjectPtr.field0_0x0 = (FObjectPtr)(pTVar10->field0_0x0).DebugPtr;
    local_270.ObjectPtr.field0_0x0 = TVar14.ObjectPtr.field0_0x0;
    goto LAB_14dd7efe3;
  }
  pUVar11 = GetTransientPackage();
  FObjectDuplicationParameters::FObjectDuplicationParameters
            ((FObjectDuplicationParameters *)local_e8,(UObject *)param_1,(UObject *)pUVar11);
  local_1e8 = (FName)param_1->_padding_;
  pFVar12 = ::FName::ToString(&local_1e8,local_118);
  FStringFormatArg::FStringFormatArg(&local_138,pFVar12);
  local_258.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_258.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_258.AllocatorInstance,1,&local_258.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>
            (local_258.AllocatorInstance.Data,&local_138,1);
  ::FString::FormatImpl(&local_1c0,L"{0}_Duplicate",&local_258);
  iVar9 = 0;
  if (local_1c0.Data.ArrayNum != 0) {
    iVar9 = local_1c0.Data.ArrayNum + -1;
  }
  pFVar13 = ::FName::FName(&local_140,iVar9,(wchar_t *)local_1c0.Data.AllocatorInstance.Data,
                           FNAME_Add);
  local_e8._16_8_ = *pFVar13;
  if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
  }
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_258.AllocatorInstance.Data,local_258.ArrayNum);
  if ((FStringFormatArg *)local_258.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_258.AllocatorInstance.Data);
  }
  if (local_138.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.StringValue.Data.AllocatorInstance.Data);
  }
  local_e8._24_4_ =
       RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset|RF_HasExternalPackage|
       RF_WillBeLoaded|RF_ImmutableDefaultObject|RF_NonPIEDuplicateTransient|RF_StrongRefOnFrame|
       RF_DuplicateTransient|RF_InheritableComponentTemplate|RF_LoadCompleted|RF_TextExportTransient
       |RF_WasLoaded|RF_DefaultSubObject|RF_BeingRegenerated|RF_FinishDestroyed|RF_BeginDestroyed|
       RF_NewerVersionExists|RF_NeedPostLoadSubobjects|RF_NeedPostLoad|RF_KeepForCooker|RF_NeedLoad|
       RF_NeedInitialization|RF_TagGarbageTemp|RF_MarkAsRootSet|RF_Transient|RF_ArchetypeObject|
       RF_ClassDefaultObject|RF_MarkAsNative|RF_Public;
  local_e8._32_4_ = RF_Transient;
  TVar14.DebugPtr =
       (UMovieGraphConfig *)StaticDuplicateObjectEx((FObjectDuplicationParameters *)local_e8);
  if (TVar14.DebugPtr == (UMovieGraphConfig *)0x0) {
LAB_14dd7ef61:
    local_270.DebugPtr = (UMovieGraphConfig *)0x0;
    TVar14.DebugPtr = (UMovieGraphConfig *)0x0;
  }
  else {
    local_270.DebugPtr = TVar14.DebugPtr;
    pUVar15 = Z_Construct_UClass_UMovieGraphConfig_NoRegister();
    iVar9 = (int)pUVar15->_padding_;
    if ((*(int *)((TVar14.DebugPtr)->_padding_ + 0x38) < iVar9) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)((TVar14.DebugPtr)->_padding_ + 0x30) + (longlong)iVar9 * 8)
        != &pUVar15->_padding_)) goto LAB_14dd7ef61;
  }
  local_1d8 = TVar14;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (TVar14.DebugPtr != (UMovieGraphConfig *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar14.DebugPtr);
  }
  local_1e0 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_150 = &local_1e0;
  local_148 = &local_1d8;
  TSet<TTuple<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<TObjectPtr<UMovieGraphConfig>_&&,TObjectPtr<UMovieGraphConfig>_&&>_>
            ((TSet<TTuple<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>,0>,FDefaultSetAllocator>
              *)param_2,&local_208,(bool *)&local_150);
  local_60 = 0;
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_e8 + 0x40));
LAB_14dd7efe3:
  local_248 = ((TVar14.DebugPtr)->AllNodes).ArrayNum;
  uVar19 = (ulonglong)(int)local_248;
  this_00 = (((TArray<TObjectPtr<UMovieGraphNode>,TSizedDefaultAllocator<32>_> *)
             ((longlong)TVar14 + 0x28))->AllocatorInstance).Data;
  pFVar22 = this_00 + uVar19 * 8;
  local_268 = pFVar22;
  do {
    local_260 = this_00;
    if (((TVar14.DebugPtr)->AllNodes).ArrayNum != (int)uVar19) {
      local_278 = 0;
      `TCheckedPointerIterator<TObjectPtr<UMovieGraphNode>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_278);
    }
    if (this_00 == pFVar22) {
      return TVar14.DebugPtr;
    }
    if (*(longlong *)this_00 != 0) {
      pUVar15 = Z_Construct_UClass_UMovieGraphSubgraphNode_NoRegister();
      bVar8 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar15);
      if (((bVar8) &&
          (this = *(UMovieGraphSubgraphNode **)this_00, pFVar22 = local_268,
          this != (UMovieGraphSubgraphNode *)0x0)) &&
         (pUVar16 = UMovieGraphSubgraphNode::GetSubgraphAsset(this), pFVar22 = local_268,
         pUVar16 != (UMovieGraphConfig *)0x0)) {
        iVar9 = *(int *)&param_2->field_0x28;
        puVar1 = &param_2->field_0x10;
        iStack_1a8 = 0;
        uStack_1a4 = 1;
        local_190 = 0;
        iStack_194 = iStack_1a8;
        if (iVar9 != 0) {
          puVar25 = (uint *)puVar1;
          if (*(uint **)&param_2->field_0x20 != (uint *)0x0) {
            puVar25 = *(uint **)&param_2->field_0x20;
          }
          uVar18 = *puVar25;
          iStack_1a8 = 0;
          local_190 = 0;
          while (uVar18 == 0) {
            iStack_1a8 = iStack_1a8 + 1;
            local_190 = local_190 + 0x20;
            iStack_194 = iVar9;
            if ((int)((iVar9 + -1 >> 0x1f & 0x1fU) + iVar9 + -1) >> 5 < iStack_1a8)
            goto LAB_14dd7f0ed;
            uVar18 = puVar25[iStack_1a8];
          }
          uStack_1a4 = -uVar18 & uVar18;
          uVar19 = (ulonglong)uStack_1a4 * 2 + 1;
          lVar5 = 0x3f;
          if (uVar19 != 0) {
            for (; uVar19 >> lVar5 == 0; lVar5 = lVar5 + -1) {
            }
          }
          local_208.Key._4_4_ = (int)lVar5;
          iStack_194 = local_208.Key._4_4_ + -1 + local_190;
          if (iVar9 < iStack_194) {
            iStack_194 = iVar9;
          }
        }
LAB_14dd7f0ed:
        uVar18 = *(uint *)&param_2->field_0x28;
        uStack_18c = local_ec;
        iStack_188 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
        uVar23 = uVar18 & 0xffffffe0;
        TStack_178._padding_ = CONCAT44(uStack_1a4,iStack_1a8);
        uStack_198 = 0xffffffff;
        TStack_178.CurrentBitIndex = iStack_194;
        TStack_178.UnvisitedBitMask = 0xffffffff;
        iVar20 = (int)uVar18 >> 5;
        TStack_178._28_4_ = local_ec;
        TStack_178.BaseBitIndex = local_190;
        uStack_158 = CONCAT44(uStack_184,iStack_188);
        local_240 = this;
        local_1b0 = param_2;
        local_1a0 = puVar1;
        local_180 = param_2;
        TStack_178.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
        if ((((int)uVar18 < 0) || (iVar9 < (int)uVar18)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          pUVar16 = (UMovieGraphConfig *)(*pcVar6)();
          return pUVar16;
        }
        uVar2 = *(uint *)&param_2->field_0x28;
        if (uVar18 != uVar2) {
          puVar24 = puVar1;
          if (*(undefined1 **)&param_2->field_0x20 != (undefined1 *)0x0) {
            puVar24 = *(undefined1 **)&param_2->field_0x20;
          }
          uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar20 * 4);
          while (uVar18 == 0) {
            iVar20 = iVar20 + 1;
            uVar23 = uVar23 + 0x20;
            uVar18 = uVar2;
            if ((int)(((int)(uVar2 - 1) >> 0x1f & 0x1fU) + (uVar2 - 1)) >> 5 < iVar20)
            goto LAB_14dd7f1f0;
            uVar18 = *(uint *)(puVar24 + (longlong)iVar20 * 4);
          }
          uVar19 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
          lVar5 = 0x3f;
          if (uVar19 != 0) {
            for (; uVar19 >> lVar5 == 0; lVar5 = lVar5 + -1) {
            }
          }
          local_208.Value._0_4_ = (int)lVar5;
          uVar18 = (int)local_208.Value + -1 + uVar23;
          if ((int)uVar2 < (int)uVar18) {
            uVar18 = uVar2;
          }
        }
LAB_14dd7f1f0:
        pTVar7 = local_180;
        if (*(int *)&local_180->field_0x8 - *(int *)&local_180->field_0x34 != (int)uStack_158) {
          local_277[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_277);
        }
        if (((TStack_178.CurrentBitIndex != uVar18) ||
            (TStack_178.Array != (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) ||
           (pTVar7 != param_2)) {
          lVar5 = *(longlong *)pTVar7;
          pUVar3 = *(UMovieGraphConfig **)(lVar5 + (longlong)TStack_178.CurrentBitIndex * 0x18);
          if (((pUVar3 != (UMovieGraphConfig *)0x0) && (pUVar3 == pUVar16)) ||
             ((pUVar3 = *(UMovieGraphConfig **)
                         (lVar5 + (longlong)TStack_178.CurrentBitIndex * 0x18 + 8),
              pUVar3 != (UMovieGraphConfig *)0x0 && (pUVar3 == pUVar16)))) goto LAB_14dd7f271;
          TStack_178.UnvisitedBitMask = TStack_178.UnvisitedBitMask & ~TStack_178._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_178);
          goto LAB_14dd7f1f0;
        }
        DuplicateConfigRecursive(pUVar16,param_2);
LAB_14dd7f271:
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar16);
        }
        local_1d0 = pUVar16;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar16);
        }
        pTVar17 = TSet<TTuple<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>,0>,FDefaultSetAllocator>
                          *)param_2,(TObjectPtr<UMovieGraphConfig_const_>)&local_1d0);
        puVar21 = (undefined8 *)&pTVar17->field_0x8;
        if (pTVar17 == (TTuple<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>_> *)0x0)
        {
          puVar21 = (undefined8 *)0x0;
        }
        pFVar22 = local_268;
        TVar14 = local_270;
        this_00 = local_260;
        if (puVar21 != (undefined8 *)0x0) {
          pUVar4 = (UObject *)*puVar21;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            if (pUVar4 != (UObject *)0x0) {
              UE::GC::MarkAsReachable(pUVar4);
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar4);
            }
          }
          local_218.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_230._16_8_ = 0;
          local_230._8_8_ = 0;
          local_218.Data.ArrayNum = 0;
          local_218.Data.ArrayMax = 0;
          local_230._0_8_ = 0;
          local_238 = 0;
          FUtf8String::Reset(&local_218,0);
          local_1c8 = pUVar4;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar4);
          }
          FSoftObjectPtr::operator=((FSoftObjectPtr *)local_230,(FObjectPtr)&local_1c8);
          UMovieGraphSubgraphNode::SetSubGraphAsset
                    (local_240,(TSoftObjectPtr<UMovieGraphConfig> *)local_230);
          pFVar22 = local_268;
          TVar14 = local_270;
          this_00 = local_260;
          if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_218.Data.AllocatorInstance.Data);
            pFVar22 = local_268;
            TVar14 = local_270;
            this_00 = local_260;
          }
        }
      }
    }
    uVar19 = (ulonglong)local_248;
    this_00 = this_00 + 8;
  } while( true );
}

// EmptyLinkFunctionForGeneratedCodeMovieGraphValueContainer @ 14dd7f7c0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieGraphValueContainer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMoviePipelineFCPXMLExporterSetting @ 14dd7f7d0

void __cdecl EmptyLinkFunctionForGeneratedCodeMoviePipelineFCPXMLExporterSetting(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMoviePipelineGameOverrideSetting @ 14dd7f7e0

void __cdecl EmptyLinkFunctionForGeneratedCodeMoviePipelineGameOverrideSetting(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMoviePipelineInProcessExecutor @ 14dd7f7f0

void __cdecl EmptyLinkFunctionForGeneratedCodeMoviePipelineInProcessExecutor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMoviePipelineLinearExecutor @ 14dd7f800

void __cdecl EmptyLinkFunctionForGeneratedCodeMoviePipelineLinearExecutor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMoviePipelineOutputSetting @ 14dd7f810

void __cdecl EmptyLinkFunctionForGeneratedCodeMoviePipelineOutputSetting(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMoviePipelinePanoramicBlenderBase @ 14dd7f820

void __cdecl EmptyLinkFunctionForGeneratedCodeMoviePipelinePanoramicBlenderBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMoviePipelinePostRenderSettings @ 14dd7f830

void __cdecl EmptyLinkFunctionForGeneratedCodeMoviePipelinePostRenderSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMoviePipelinePrimaryConfig @ 14dd7f840

void __cdecl EmptyLinkFunctionForGeneratedCodeMoviePipelinePrimaryConfig(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMoviePipelinePythonHostExecutor @ 14dd7f850

void __cdecl EmptyLinkFunctionForGeneratedCodeMoviePipelinePythonHostExecutor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMoviePipelineQueue @ 14dd7f860

void __cdecl EmptyLinkFunctionForGeneratedCodeMoviePipelineQueue(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMoviePipelineQueueEngineSubsystem @ 14dd7f870

void __cdecl EmptyLinkFunctionForGeneratedCodeMoviePipelineQueueEngineSubsystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMoviePipelineSetting @ 14dd7f880

void __cdecl EmptyLinkFunctionForGeneratedCodeMoviePipelineSetting(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMoviePipelineSettingBlueprintBase @ 14dd7f890

void __cdecl EmptyLinkFunctionForGeneratedCodeMoviePipelineSettingBlueprintBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMoviePipelineShotConfig @ 14dd7f8a0

void __cdecl EmptyLinkFunctionForGeneratedCodeMoviePipelineShotConfig(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMoviePipelineVideoOutputBase @ 14dd7f8b0

void __cdecl EmptyLinkFunctionForGeneratedCodeMoviePipelineVideoOutputBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieRenderPipelineDataTypes @ 14dd7f8c0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieRenderPipelineDataTypes(void)

{
  return;
}

// FindCurrentWorld @ 14dd827c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __cdecl MoviePipeline::FindCurrentWorld(void)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  UWorld *pUVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  pUVar4 = (UWorld *)0x0;
  piVar1 = &(GEngine->WorldList).Array.ArrayNum;
  pFVar5 = (GEngine->WorldList).Array.AllocatorInstance.Data;
  iVar3 = *piVar1;
  pFVar2 = pFVar5 + (longlong)iVar3 * 8;
  while( true ) {
    if (*piVar1 != iVar3) {
      `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar5 == pFVar2) break;
    if (**(char **)pFVar5 == '\x01') {
      pUVar4 = *(UWorld **)(*(char **)pFVar5 + 0x2c0);
    }
    pFVar5 = pFVar5 + 8;
  }
  return pUVar4;
}

// GatherLeafNodesRecursive @ 14dd83b40

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
MoviePipeline::GatherLeafNodesRecursive
          (TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *param_1,
          TArray<TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  ForAnyElementType FVar6;
  TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *pTVar7;
  undefined1 local_res8 [8];
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> local_38;
  
  if ((param_1->Object == (FCameraCutSubSectionHierarchyNode *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_58.Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->Object->Children).ArrayNum;
  pTVar7 = (TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *)
           (param_1->Object->Children).AllocatorInstance.Data;
  local_50 = iVar4;
  if (iVar4 == 0) {
    local_4c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar4,0,&local_58,iVar4,&local_4c);
    ConstructItems<TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>,TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>,int>
              (local_58.Data,pTVar7,iVar4);
  }
  iVar4 = local_50;
  pTVar7 = (TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *)
           (local_58.Data + (longlong)local_50 * 0x10);
  FVar6.Data = local_58.Data;
  while( true ) {
    if (local_50 != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *)FVar6.Data == pTVar7)
    break;
    pTVar1 = (((TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *)FVar6.Data)->
             SharedReferenceCount).ReferenceController;
    local_38.Object =
         ((TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *)FVar6.Data)->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38.SharedReferenceCount.ReferenceController = pTVar1;
    GatherLeafNodesRecursive(&local_38,param_2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    FVar6.Data = FVar6.Data + 0x10;
  }
  DestructItems<TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>,int>
            ((TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *)local_58.Data,
             local_50);
  if ((TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *)local_58.Data !=
      (TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *)0x0) {
    FMemory::Free(local_58.Data);
  }
  if ((param_1->Object == (FCameraCutSubSectionHierarchyNode *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_48.Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->Object->Children).ArrayNum;
  pTVar7 = (TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *)
           (param_1->Object->Children).AllocatorInstance.Data;
  local_40 = iVar4;
  if (iVar4 == 0) {
    local_3c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar4,0,&local_48,iVar4,&local_3c);
    ConstructItems<TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>,TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>,int>
              (local_48.Data,pTVar7,iVar4);
  }
  iVar4 = local_40;
  DestructItems<TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>,int>
            ((TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *)local_48.Data,
             local_40);
  if ((TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *)local_48.Data !=
      (TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *)0x0) {
    FMemory::Free(local_48.Data);
  }
  if (iVar4 == 0) {
    pTVar7 = (TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *)
             (param_2->AllocatorInstance).Data;
    if (((pTVar7 <= param_1) && (param_1 < pTVar7 + param_2->ArrayMax)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = param_2->ArrayNum;
    if (iVar4 == param_2->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar4 + 1;
    pFVar5 = (param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
    *(FCameraCutSubSectionHierarchyNode **)pFVar5 = param_1->Object;
    pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)(pFVar5 + 8) = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// GetLocalExecutorClass @ 14dd89190

/* WARNING: Enum "Type": Some values do not have unique names */

UClass * __cdecl GetLocalExecutorClass(FString *param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  UPackage *pUVar5;
  UClass *pUVar6;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  iVar3 = (param_1->Data).ArrayNum;
  iVar2 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar2 = 0;
  }
  if (iVar2 < 1) {
    if (4 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
    pUVar6 = UMoviePipelineInProcessExecutor::StaticClass();
    goto LAB_14dd89305;
  }
  local_28.Size = 0;
  local_28._12_4_ = 0;
  local_28.DataPtr = (wchar_t *)0x0;
  if (iVar3 == 0) {
    local_18.DataPtr = L"";
LAB_14dd891f3:
    sVar4 = wcslen(local_18.DataPtr);
    iVar3 = (int)sVar4;
  }
  else {
    local_18.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    iVar3 = 0;
    if ((FScriptContainerElement *)local_18.DataPtr != (FScriptContainerElement *)0x0)
    goto LAB_14dd891f3;
  }
  local_18.Size = iVar3;
  pUVar5 = GetTransientPackage();
  pUVar6 = Z_Construct_UClass_UMoviePipelineExecutorBase_NoRegister();
  pUVar6 = StaticLoadClass(pUVar6,(UObject *)pUVar5,&local_18,&local_28,0,(UPackageMap *)0x0);
  if (pUVar6 == (UClass *)0x0) {
    UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    if (2 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
    pFVar1 = (param_2->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    return (UClass *)0x0;
  }
  if (4 < (byte)LogMovieRenderPipeline._0_1_) {
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
  }
LAB_14dd89305:
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return pUVar6;
}

// GetMoviePipelineClass @ 14dd89fb0

/* WARNING: Enum "Type": Some values do not have unique names */

UClass * __cdecl GetMoviePipelineClass(FString *param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  UPackage *pUVar5;
  UClass *pUVar6;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  iVar3 = (param_1->Data).ArrayNum;
  iVar2 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar2 = 0;
  }
  if (iVar2 < 1) {
    if (4 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
    pUVar6 = Z_Construct_UClass_UMoviePipeline_NoRegister();
    goto LAB_14dd8a125;
  }
  local_28.Size = 0;
  local_28._12_4_ = 0;
  local_28.DataPtr = (wchar_t *)0x0;
  if (iVar3 == 0) {
    local_18.DataPtr = L"";
LAB_14dd8a013:
    sVar4 = wcslen(local_18.DataPtr);
    iVar3 = (int)sVar4;
  }
  else {
    local_18.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    iVar3 = 0;
    if ((FScriptContainerElement *)local_18.DataPtr != (FScriptContainerElement *)0x0)
    goto LAB_14dd8a013;
  }
  local_18.Size = iVar3;
  pUVar5 = GetTransientPackage();
  pUVar6 = Z_Construct_UClass_UMoviePipeline_NoRegister();
  pUVar6 = StaticLoadClass(pUVar6,(UObject *)pUVar5,&local_18,&local_28,0,(UPackageMap *)0x0);
  if (pUVar6 == (UClass *)0x0) {
    UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    if (2 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
    pFVar1 = (param_2->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    return (UClass *)0x0;
  }
  if (4 < (byte)LogMovieRenderPipeline._0_1_) {
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
  }
LAB_14dd8a125:
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return pUVar6;
}

// GetNameForShot @ 14dd8a160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TTuple<FString,FString> * __cdecl
MoviePipeline::GetNameForShot
          (TTuple<FString,FString> *__return_storage_ptr__,FMovieSceneSequenceHierarchy *param_1,
          UMovieSceneSequence *param_2,
          TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  FCameraCutSubSectionHierarchyNode *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TTuple<FString,FString> *pTVar7;
  UObject *pUVar8;
  UMovieSceneSequence *pUVar9;
  longlong lVar10;
  UMovieScene *this;
  FText *this_00;
  FString *pFVar11;
  UMovieSceneCinematicShotSection *this_01;
  UClass *pUVar12;
  FScriptContainerElement *pFVar13;
  UMovieSceneSubSection *this_02;
  size_t sVar14;
  void *pvVar15;
  FMovieSceneSubSequenceData *this_03;
  FMovieSceneSubSequenceData *this_04;
  ForAnyElementType FVar16;
  FScriptContainerElement *pFVar17;
  ulong64 uVar18;
  wchar_t *pwVar19;
  wchar_t *_Str;
  undefined1 *puVar20;
  int iVar21;
  undefined1 auStackY_218 [32];
  ForAnyElementType local_1c8;
  undefined8 local_1c0;
  uint local_1b8 [2];
  FString local_1b0;
  FCameraCutSubSectionHierarchyNode *local_1a0;
  FSharedReferencer<1> local_198;
  FString local_190;
  TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *local_180;
  TTuple<FString,FString> *local_178;
  undefined8 local_170;
  FSharedReferencer<1> local_168 [2];
  FText local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  TStringBuilderBase<wchar_t> local_f8;
  wchar_t local_d8 [64];
  ulonglong local_58 [3];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStackY_218;
  this_04 = (FMovieSceneSubSequenceData *)0x0;
  local_1b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b0.Data.ArrayNum = 0;
  local_1b0.Data.ArrayMax = 0;
  local_190.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_190.Data.ArrayNum = 0;
  local_190.Data.ArrayMax = 0;
  local_180 = param_3;
  local_178 = __return_storage_ptr__;
  if ((param_3->Object == (FCameraCutSubSectionHierarchyNode *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TTuple<FString,FString> *)(*pcVar4)();
    return pTVar7;
  }
  bVar5 = FWeakObjectPtr::IsValid(&(param_3->Object->CameraCutSection).WeakPtr);
  if (!bVar5) {
    if ((param_3->Object == (FCameraCutSubSectionHierarchyNode *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TTuple<FString,FString> *)(*pcVar4)();
      return pTVar7;
    }
    bVar5 = FWeakObjectPtr::IsValid(&(param_3->Object->MovieScene).WeakPtr);
    if (bVar5) {
      if ((param_3->Object == (FCameraCutSubSectionHierarchyNode *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TTuple<FString,FString> *)(*pcVar4)();
        return pTVar7;
      }
      pUVar8 = FWeakObjectPtr::Get(&(param_3->Object->MovieScene).WeakPtr);
      pFVar11 = UObjectBaseUtility::GetPathName
                          ((UObjectBaseUtility *)pUVar8,&local_138,(UObject *)0x0);
      pFVar11 = FPaths::GetBaseFilename(&local_148,pFVar11,true);
      if (&local_1b0 != pFVar11) {
        if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
        }
        local_1b0.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
        (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1b0.Data.ArrayNum = (pFVar11->Data).ArrayNum;
        local_1b0.Data.ArrayMax = (pFVar11->Data).ArrayMax;
        (pFVar11->Data).ArrayNum = 0;
        (pFVar11->Data).ArrayMax = 0;
      }
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
    }
    goto LAB_14dd8a546;
  }
  if ((param_3->Object == (FCameraCutSubSectionHierarchyNode *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TTuple<FString,FString> *)(*pcVar4)();
    return pTVar7;
  }
  pUVar8 = FWeakObjectPtr::Get(&(param_3->Object->CameraCutSection).WeakPtr);
  puVar1 = &pUVar8[7].field_0x14;
  if (((*(int *)&pUVar8[7].field_0x20 == 0 && *(int *)&pUVar8[7].field_0x1c == 0) &&
      *(int *)&pUVar8[7].field_0x18 == 0) && *(int *)puVar1 == 0) goto LAB_14dd8a546;
  if ((param_3->Object == (FCameraCutSubSectionHierarchyNode *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TTuple<FString,FString> *)(*pcVar4)();
    return pTVar7;
  }
  uVar2 = (param_3->Object->NodeID).Value;
  if ((uVar2 != 0xffffffff) &&
     (FMovieSceneObjectBindingID::ResolveSequenceID
                ((FMovieSceneObjectBindingID *)puVar1,(FMovieSceneSequenceID)(uint)local_1b8,
                 (FMovieSceneSequenceHierarchy *)(ulonglong)uVar2), local_1b8[0] != 0)) {
    this_03 = this_04;
    if (*(int *)&(param_1->SubSequences).field_0x8 != *(int *)&(param_1->SubSequences).field_0x34) {
      puVar20 = *(undefined1 **)&(param_1->SubSequences).field_0x40;
      if (puVar20 == (undefined1 *)0x0) {
        puVar20 = &(param_1->SubSequences).field_0x38;
      }
      iVar6 = *(int *)(puVar20 +
                      (ulonglong)(*(int *)&(param_1->SubSequences).field_0x48 - 1U & local_1b8[0]) *
                      4);
      if (iVar6 != -1) {
        lVar10 = *(longlong *)&param_1->SubSequences;
        do {
          if (*(uint *)((longlong)iVar6 * 0x120 + lVar10) == local_1b8[0]) {
            if ((iVar6 != -1) && (lVar10 = (longlong)iVar6 * 0x120 + lVar10, lVar10 != 0)) {
              this_03 = (FMovieSceneSubSequenceData *)(lVar10 + 8);
            }
            break;
          }
          iVar6 = *(int *)((longlong)iVar6 * 0x120 + 0x118 + lVar10);
        } while (iVar6 != -1);
      }
    }
    if ((this_03 != (FMovieSceneSubSequenceData *)0x0) &&
       (pUVar9 = FMovieSceneSubSequenceData::GetSequence(this_03),
       pUVar9 != (UMovieSceneSequence *)0x0)) {
      if (local_1b8[0] != 0) {
        if (*(int *)&(param_1->SubSequences).field_0x8 !=
            *(int *)&(param_1->SubSequences).field_0x34) {
          puVar20 = *(undefined1 **)&(param_1->SubSequences).field_0x40;
          if (puVar20 == (undefined1 *)0x0) {
            puVar20 = &(param_1->SubSequences).field_0x38;
          }
          iVar6 = *(int *)(puVar20 +
                          (ulonglong)
                          (*(int *)&(param_1->SubSequences).field_0x48 - 1U & local_1b8[0]) * 4);
          if (iVar6 != -1) {
            lVar10 = *(longlong *)&param_1->SubSequences;
            do {
              if (*(uint *)((longlong)iVar6 * 0x120 + lVar10) == local_1b8[0]) {
                if ((iVar6 != -1) && (lVar10 = (longlong)iVar6 * 0x120 + lVar10, lVar10 != 0)) {
                  this_04 = (FMovieSceneSubSequenceData *)(lVar10 + 8);
                }
                break;
              }
              iVar6 = *(int *)((longlong)iVar6 * 0x120 + 0x118 + lVar10);
            } while (iVar6 != -1);
          }
        }
        if (this_04 != (FMovieSceneSubSequenceData *)0x0) {
          param_2 = FMovieSceneSubSequenceData::GetSequence(this_04);
          goto LAB_14dd8a3f7;
        }
      }
      param_2 = (UMovieSceneSequence *)0x0;
    }
  }
LAB_14dd8a3f7:
  if ((param_2 != (UMovieSceneSequence *)0x0) &&
     (lVar10 = (**(code **)(param_2->_padding_ + 0x2f8))(param_2), lVar10 != 0)) {
    this = (UMovieScene *)(**(code **)(param_2->_padding_ + 0x2f8))(param_2);
    this_00 = UMovieScene::GetObjectDisplayName(this,&local_158,(FGuid *)puVar1);
    pFVar11 = FText::ToString(this_00);
    ::FString::operator=(&local_1b0,pFVar11);
    if (local_158.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
    }
  }
LAB_14dd8a546:
  local_198.ReferenceController = (param_3->SharedReferenceCount).ReferenceController;
  pFVar3 = param_3->Object;
  local_1c8.Data = (FScriptContainerElement *)0x0;
  local_1c0 = 0;
  if (local_198.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_198.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_198.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  while (pFVar3 != (FCameraCutSubSectionHierarchyNode *)0x0) {
    local_1a0 = pFVar3;
    this_01 = (UMovieSceneCinematicShotSection *)FWeakObjectPtr::Get(&(pFVar3->Section).WeakPtr);
    if (this_01 == (UMovieSceneCinematicShotSection *)0x0) {
LAB_14dd8a69b:
      if ((pFVar3 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TTuple<FString,FString> *)(*pcVar4)();
        return pTVar7;
      }
      this_02 = (UMovieSceneSubSection *)FWeakObjectPtr::Get(&(pFVar3->Section).WeakPtr);
      if ((this_02 != (UMovieSceneSubSection *)0x0) &&
         (pUVar9 = UMovieSceneSubSection::GetSequence(this_02), pUVar9 != (UMovieSceneSequence *)0x0
         )) {
        pUVar9 = UMovieSceneSubSection::GetSequence(this_02);
        pFVar11 = UObjectBaseUtility::GetPathName
                            ((UObjectBaseUtility *)pUVar9,&local_108,(UObject *)0x0);
        pFVar13 = (FScriptContainerElement *)FPaths::GetBaseFilename(&local_118,pFVar11,true);
        if ((local_1c8.Data <= pFVar13) &&
           ((pFVar13 < local_1c8.Data + (longlong)local_1c0._4_4_ * 0x10 &&
            (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar5)))) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TTuple<FString,FString> *)(*pcVar4)();
          return pTVar7;
        }
        lVar10 = (longlong)(int)local_1c0;
        if ((int)local_1c0 == local_1c0._4_4_) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_1c8,(int *)((longlong)&local_1c0 + 4));
          pFVar17 = local_1c8.Data + (longlong)iVar6 * 0x10;
          local_1c0 = CONCAT44(local_1c0._4_4_,iVar6 + 1);
        }
        else {
          local_1c0 = CONCAT44(local_1c0._4_4_,(int)local_1c0 + 1);
          pFVar17 = local_1c8.Data + lVar10 * 0x10;
        }
        *(undefined8 *)pFVar17 = 0;
        *(undefined8 *)pFVar17 = *(undefined8 *)pFVar13;
        *(undefined8 *)pFVar13 = 0;
        *(int *)(pFVar17 + 8) = *(int *)(pFVar13 + 8);
        *(int *)(pFVar17 + 0xc) = *(int *)(pFVar13 + 0xc);
        *(undefined8 *)(pFVar13 + 8) = 0;
        FVar16.Data = local_108.Data.AllocatorInstance.Data;
        if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
          FVar16.Data = local_108.Data.AllocatorInstance.Data;
        }
        goto LAB_14dd8a7fd;
      }
    }
    else {
      pUVar12 = Z_Construct_UClass_UMovieSceneCinematicShotSection_NoRegister();
      iVar6 = (int)pUVar12->_padding_;
      if ((*(int *)(this_01->_padding_ + 0x38) < iVar6) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar6 * 8) !=
          &pUVar12->_padding_)) goto LAB_14dd8a69b;
      pFVar13 = (FScriptContainerElement *)
                UMovieSceneCinematicShotSection::GetShotDisplayName(this_01,&local_128);
      if (((local_1c8.Data <= pFVar13) &&
          (pFVar13 < local_1c8.Data + (longlong)local_1c0._4_4_ * 0x10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TTuple<FString,FString> *)(*pcVar4)();
        return pTVar7;
      }
      lVar10 = (longlong)(int)local_1c0;
      if ((int)local_1c0 == local_1c0._4_4_) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_1c8,(int *)((longlong)&local_1c0 + 4));
        pFVar17 = local_1c8.Data + (longlong)iVar6 * 0x10;
        local_1c0 = CONCAT44(local_1c0._4_4_,iVar6 + 1);
      }
      else {
        local_1c0 = CONCAT44(local_1c0._4_4_,(int)local_1c0 + 1);
        pFVar17 = local_1c8.Data + lVar10 * 0x10;
      }
      *(undefined8 *)pFVar17 = 0;
      *(undefined8 *)pFVar17 = *(undefined8 *)pFVar13;
      *(undefined8 *)pFVar13 = 0;
      *(int *)(pFVar17 + 8) = *(int *)(pFVar13 + 8);
      *(int *)(pFVar17 + 0xc) = *(int *)(pFVar13 + 0xc);
      *(undefined8 *)(pFVar13 + 8) = 0;
      FVar16.Data = local_128.Data.AllocatorInstance.Data;
LAB_14dd8a7fd:
      if (FVar16.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar16.Data);
      }
    }
    if ((pFVar3 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TTuple<FString,FString> *)(*pcVar4)();
      return pTVar7;
    }
    local_168[0].ReferenceController = (pFVar3->Parent).SharedReferenceCount.ReferenceController;
    local_1a0 = (pFVar3->Parent).Object;
    if (local_168[0].ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_168[0].ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_168[0].ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_170 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_198,local_168);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_168[0].ReferenceController);
    pFVar3 = local_1a0;
  }
  local_f8.Base = local_d8;
  iVar6 = (int)local_1c0 + -1;
  pwVar19 = local_d8;
  local_f8.bIsDynamic = false;
  local_f8.bIsExternal = false;
  local_f8.End = (wchar_t *)local_58;
  local_1a0 = (FCameraCutSubSectionHierarchyNode *)0x0;
  local_f8.CurPos = pwVar19;
  if (-1 < iVar6) {
    lVar10 = (longlong)iVar6 << 4;
    do {
      if (((int)local_1c0 <= iVar6) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         pwVar19 = local_f8.CurPos, bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TTuple<FString,FString> *)(*pcVar4)();
        return pTVar7;
      }
      if (*(int *)(local_1c8.Data + lVar10 + 8) == 0) {
        _Str = L"";
LAB_14dd8a91f:
        sVar14 = wcslen(_Str);
        iVar21 = (int)sVar14;
      }
      else {
        _Str = *(wchar_t **)(local_1c8.Data + lVar10);
        iVar21 = 0;
        if (_Str != (wchar_t *)0x0) goto LAB_14dd8a91f;
      }
      uVar18 = (ulong64)iVar21;
      if (local_f8.End < pwVar19 + uVar18) {
        TStringBuilderBase<wchar_t>::Extend(&local_f8,uVar18);
        pwVar19 = local_f8.CurPos;
      }
      if (iVar21 != 0) {
        pvVar15 = FGenericPlatformString::Memcpy(pwVar19,_Str,uVar18 * 2);
        pwVar19 = (wchar_t *)((longlong)pvVar15 + uVar18 * 2);
        local_f8.CurPos = pwVar19;
      }
      if (iVar6 != 0) {
        if (local_f8.End < pwVar19 + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_f8,1);
          pwVar19 = local_f8.CurPos;
        }
        pvVar15 = FGenericPlatformString::Memcpy(pwVar19,L".",2);
        pwVar19 = (wchar_t *)((longlong)pvVar15 + 2);
        local_f8.CurPos = pwVar19;
      }
      lVar10 = lVar10 + -0x10;
      iVar6 = iVar6 + -1;
      param_3 = local_180;
      __return_storage_ptr__ = local_178;
    } while (-1 < iVar6);
  }
  if ((int)((longlong)pwVar19 - (longlong)local_f8.Base >> 1) == 0) {
    if (local_f8.End < pwVar19 + 7) {
      TStringBuilderBase<wchar_t>::Extend(&local_f8,7);
      pwVar19 = local_f8.CurPos;
    }
    pvVar15 = FGenericPlatformString::Memcpy(pwVar19,L"no shot",0xe);
    pwVar19 = (wchar_t *)((longlong)pvVar15 + 0xe);
    local_f8.CurPos = pwVar19;
  }
  if (local_f8.End < pwVar19 + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_f8,1);
    pwVar19 = local_f8.CurPos;
  }
  *pwVar19 = L'\0';
  ::FString::operator=(&local_190,local_f8.Base);
  FVar16.Data = local_1b0.Data.AllocatorInstance.Data;
  lVar10 = (longlong)local_1b0.Data.ArrayNum;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(int *)&__return_storage_ptr__->field_0x8 = local_1b0.Data.ArrayNum;
  if (local_1b0.Data.ArrayNum == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0xc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_1b0.Data.ArrayNum,0,(ForAnyElementType *)__return_storage_ptr__,
               local_1b0.Data.ArrayNum,(int *)&__return_storage_ptr__->field_0xc);
    memcpy(*(void **)__return_storage_ptr__,FVar16.Data,lVar10 * 2);
  }
  FVar16.Data = local_190.Data.AllocatorInstance.Data;
  lVar10 = (longlong)local_190.Data.ArrayNum;
  puVar1 = &__return_storage_ptr__->field_0x10;
  *(undefined8 *)puVar1 = 0;
  *(int *)&__return_storage_ptr__->field_0x18 = local_190.Data.ArrayNum;
  if (local_190.Data.ArrayNum == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x1c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_190.Data.ArrayNum,0,(ForAnyElementType *)puVar1,local_190.Data.ArrayNum,
               (int *)&__return_storage_ptr__->field_0x1c);
    memcpy(*(void **)puVar1,FVar16.Data,lVar10 * 2);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_f8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_198.ReferenceController);
  DestructItems<FString,int>((FString *)local_1c8.Data,(int)local_1c0);
  if (local_1c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data);
  }
  if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.Data.AllocatorInstance.Data);
  }
  if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// GetOrCreateJobVariableAssignmentsForGraph @ 14dd8ac50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TObjectPtr<UMovieJobVariableAssignmentContainer> __cdecl
MoviePipeline::GetOrCreateJobVariableAssignmentsForGraph
          (UMovieGraphConfig *param_1,
          TArray<TObjectPtr<UMovieJobVariableAssignmentContainer>,TSizedDefaultAllocator<32>_>
          *param_2,UObject *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  UMovieJobVariableAssignmentContainer **ppUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  TObjectPtr<UMovieJobVariableAssignmentContainer> TVar9;
  UMovieJobVariableAssignmentContainer *this;
  undefined8 *puVar10;
  longlong *plVar11;
  UObject *in_R9;
  undefined1 auStack_198 [32];
  UMovieJobVariableAssignmentContainer **local_178;
  UMovieJobVariableAssignmentContainer **local_170;
  longlong local_168;
  longlong local_160;
  undefined8 local_158;
  undefined1 local_148 [8];
  UMovieJobVariableAssignmentContainer *local_140;
  UObject *local_138;
  undefined1 local_130 [24];
  FUtf8String local_118;
  TArray<TObjectPtr<UMovieJobVariableAssignmentContainer>,TSizedDefaultAllocator<32>_> *local_108;
  TPersistentObjectPtr<FSoftObjectPath> local_100;
  undefined1 local_d8 [128];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_198;
  puVar10 = *(undefined8 **)param_3;
  iVar6 = *(int *)&param_3->field_0x8;
  puVar1 = puVar10 + iVar6;
  local_138 = in_R9;
  do {
    if (*(int *)&param_3->field_0x8 != iVar6) {
      local_148[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UMovieJobVariableAssignmentContainer>,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_148);
    }
    if (puVar10 == puVar1) {
      FObjectInitializer::AssertIfInConstructor
                (local_138,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar8 = Z_Construct_UClass_UMovieJobVariableAssignmentContainer_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_d8,pUVar8);
      local_d8._8_8_ = local_138;
      local_140 = (UMovieJobVariableAssignmentContainer *)
                  StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_d8);
      if (local_d8._64_8_ != 0) {
        plVar11 = (longlong *)(local_d8 + 0x50);
        if ((longlong *)local_d8._104_8_ != (longlong *)0x0) {
          plVar11 = (longlong *)local_d8._104_8_;
        }
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_140 != (UMovieJobVariableAssignmentContainer *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_140);
      }
      ppUVar3 = *(UMovieJobVariableAssignmentContainer ***)param_3;
      if ((ppUVar3 <= &local_140) && (&local_140 < ppUVar3 + *(int *)&param_3->field_0xc)) {
        local_160 = (longlong)*(int *)&param_3->field_0x8;
        local_158 = 8;
        local_178 = &local_140;
        local_170 = ppUVar3;
        local_168 = (longlong)*(int *)&param_3->field_0xc;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          TVar9.field0_0x0 = (TObjectPtr<UMovieJobVariableAssignmentContainer>_u_0)(*pcVar4)();
          return (TObjectPtr<UMovieJobVariableAssignmentContainer>)TVar9.field0_0x0;
        }
      }
      iVar6 = *(int *)&param_3->field_0x8;
      if (iVar6 == *(int *)&param_3->field_0xc) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)param_3,(int *)&param_3->field_0xc);
      }
      *(int *)&param_3->field_0x8 = iVar6 + 1;
      *(UMovieJobVariableAssignmentContainer **)(*(longlong *)param_3 + (longlong)iVar6 * 8) =
           local_140;
      this = local_140;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (local_140 != (UMovieJobVariableAssignmentContainer *)0x0) {
          UE::GC::MarkAsReachable((UObject *)local_140);
        }
        this = local_140;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (param_2 !=
            (TArray<TObjectPtr<UMovieJobVariableAssignmentContainer>,TSizedDefaultAllocator<32>_> *)
            0x0)) {
          UE::GC::MarkAsReachable((UObject *)param_2);
        }
      }
      local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.Data.ArrayNum = 0;
      local_118.Data.ArrayMax = 0;
      local_130._0_8_ = 0;
      local_138 = (UObject *)0x0;
      local_130._16_8_ = 0;
      local_130._8_8_ = 0;
      FUtf8String::Reset(&local_118,0);
      local_108 = param_2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (param_2 !=
          (TArray<TObjectPtr<UMovieJobVariableAssignmentContainer>,TSizedDefaultAllocator<32>_> *)
          0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      FSoftObjectPtr::operator=((FSoftObjectPtr *)local_130,(FObjectPtr)&local_108);
      UMovieJobVariableAssignmentContainer::SetGraphConfig
                (this,(TSoftObjectPtr<UMovieGraphConfig> *)local_130);
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      param_1->_padding_ = (longlong)local_140;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        return (TObjectPtr<UMovieJobVariableAssignmentContainer>)
               (TObjectPtr<UMovieJobVariableAssignmentContainer>_u_0)param_1;
      }
      if (local_140 == (UMovieJobVariableAssignmentContainer *)0x0) {
        return (TObjectPtr<UMovieJobVariableAssignmentContainer>)
               (TObjectPtr<UMovieJobVariableAssignmentContainer>_u_0)param_1;
      }
      UE::GC::MarkAsReachable((UObject *)local_140);
      return (TObjectPtr<UMovieJobVariableAssignmentContainer>)
             (TObjectPtr<UMovieJobVariableAssignmentContainer>_u_0)param_1;
    }
    UMovieJobVariableAssignmentContainer::GetGraphConfig
              ((UMovieJobVariableAssignmentContainer *)*puVar10,
               (TSoftObjectPtr<UMovieGraphConfig> *)&local_100);
    pUVar7 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_100);
    if (pUVar7 == (UObject *)0x0) {
LAB_14dd8acf5:
      pUVar7 = (UObject *)0x0;
    }
    else {
      pUVar8 = Z_Construct_UClass_UMovieGraphConfig_NoRegister();
      iVar2 = (int)pUVar8->_padding_;
      if ((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar2) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar8->_padding_)) goto LAB_14dd8acf5;
    }
    if (pUVar7 == (UObject *)param_2) {
      pUVar7 = (UObject *)*puVar10;
      param_1->_padding_ = (longlong)pUVar7;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar7);
      }
      if (local_100.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.ObjectID.SubPathString.Data.AllocatorInstance.Data);
      }
      return (TObjectPtr<UMovieJobVariableAssignmentContainer>)
             (TObjectPtr<UMovieJobVariableAssignmentContainer>_u_0)param_1;
    }
    if (local_100.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.ObjectID.SubPathString.Data.AllocatorInstance.Data);
    }
    puVar10 = puVar10 + 1;
  } while( true );
}

// GetOutputStateFormatArgs @ 14dd8b2a0

void __cdecl
MoviePipeline::GetOutputStateFormatArgs
          (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
           *param_1,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_2,FString *param_3,FString *param_4,FString *param_5,FString *param_6,
          FString *param_7,FString *param_8)

{
  FScriptContainerElement *pFVar1;
  FString local_38;
  
  ::FString::FString(&local_38,L"frame_number");
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString_const_&>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)param_1,&local_38,param_3);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_38,L"frame_number_shot");
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString_const_&>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)param_1,&local_38,param_4);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_38,L"frame_number_rel");
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString_const_&>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)param_1,&local_38,param_5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_38,L"frame_number_shot_rel");
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString_const_&>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)param_1,&local_38,param_6);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_38,L"camera_name");
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString_const_&>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)param_1,&local_38,param_7);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_38,L"shot_name");
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString_const_&>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)param_1,&local_38,param_8);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_38,L"unreal/sequenceFrameNumber");
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString_const_&>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)param_2,&local_38,param_3);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_38,L"unreal/shotFrameNumber");
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString_const_&>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)param_2,&local_38,param_4);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_38,L"unreal/sequenceFrameNumberRelative");
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString_const_&>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)param_2,&local_38,param_5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_38,L"unreal/shotFrameNumberRelative");
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString_const_&>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)param_2,&local_38,param_6);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_38,L"unreal/cameraName");
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString_const_&>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)param_2,&local_38,param_7);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_38,L"unreal/shotName");
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString_const_&>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)param_2,&local_38,param_8);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pFVar1 = (param_3->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_4->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_5->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_6->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_7->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_8->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// GetPassCompositeData @ 14dd8b5c0

void __cdecl
MoviePipeline::GetPassCompositeData
          (FMoviePipelineMergerOutputFrame *param_1,
          TArray<MoviePipeline::FCompositePassInfo,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined1 *puVar1;
  TMap<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
  *pTVar2;
  ulonglong uVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TMap<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
  *pTVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  uint uVar14;
  FString *pFVar15;
  undefined1 *puVar16;
  uint *puVar17;
  undefined1 local_res8 [8];
  ForAnyElementType local_a8;
  TMap<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
  *local_a0;
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  TMap<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
  *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  puVar1 = &(param_1->ImageOutputData).field_0x10;
  iStack_98 = 0;
  iVar9 = *(int *)&(param_1->ImageOutputData).field_0x28;
  pTVar2 = &param_1->ImageOutputData;
  local_80 = 0;
  uStack_94 = 1;
  iStack_84 = 0;
  if (iVar9 != 0) {
    puVar17 = *(uint **)&(param_1->ImageOutputData).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar14 = *puVar17;
    while (uVar14 == 0) {
      lVar10 = (longlong)iStack_98;
      local_80 = local_80 + 0x20;
      iStack_98 = iStack_98 + 1;
      iStack_84 = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_14dd8b66d;
      uVar14 = puVar17[lVar10 + 1];
    }
    uStack_94 = -uVar14 & uVar14;
    uVar3 = (ulonglong)uStack_94 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iStack_84 = local_80 + -1 + (int)lVar10;
    if (iVar9 < iStack_84) {
      iStack_84 = iVar9;
    }
  }
LAB_14dd8b66d:
  iStack_78 = *(int *)&(param_1->ImageOutputData).field_0x8 -
              *(int *)&(param_1->ImageOutputData).field_0x34;
  uVar14 = *(uint *)&(param_1->ImageOutputData).field_0x28;
  uStack_88 = 0xffffffff;
  uVar13 = uVar14 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uStack_94,iStack_98);
  TStack_68.CurrentBitIndex = iStack_84;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar14 >> 5;
  TStack_68._28_4_ = iStack_84;
  TStack_68.BaseBitIndex = local_80;
  uStack_48 = CONCAT44(uStack_74,iStack_78);
  local_a0 = pTVar2;
  local_90 = puVar1;
  iStack_7c = iStack_84;
  local_70 = pTVar2;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar9 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&(param_1->ImageOutputData).field_0x28;
  if (uVar14 != uVar4) {
    puVar16 = *(undefined1 **)&(param_1->ImageOutputData).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar11 * 4);
    while (uVar14 == 0) {
      lVar10 = (longlong)iVar11;
      uVar13 = uVar13 + 0x20;
      iVar11 = iVar11 + 1;
      uVar14 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14dd8b770;
      uVar14 = *(uint *)(puVar16 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar14 = (int)lVar10 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar14) {
      uVar14 = uVar4;
    }
  }
LAB_14dd8b770:
  while( true ) {
    pTVar7 = local_70;
    if (*(int *)&local_70->field_0x8 - *(int *)&local_70->field_0x34 != (int)uStack_48) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_68.CurrentBitIndex == uVar14) &&
        (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar2))
    break;
    pFVar15 = (FString *)((longlong)TStack_68.CurrentBitIndex * 0x30 + *(longlong *)pTVar7);
    pFVar12 = pFVar15[2].Data.AllocatorInstance.Data;
    if (*(char *)(*(longlong *)(pFVar12 + 0x18) + 0x2d8) != '\0') {
      if ((*(int *)(pFVar12 + 0x10) != 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("RenderPassData.Value->GetType() == EImagePixelType::Color",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineUtils.cpp"
                             ,0xee,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = param_2->ArrayNum;
      if (iVar9 == param_2->ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x828,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar9 + 1;
      pFVar12 = (param_2->AllocatorInstance).Data + (longlong)iVar9 * 0x28;
      DefaultConstructItems<MoviePipeline::FCompositePassInfo,int>(pFVar12,1);
      ::FString::operator=((FString *)pFVar12,pFVar15);
      ::FString::operator=((FString *)(pFVar12 + 0x10),pFVar15 + 1);
      pFVar5 = pFVar15[2].Data.AllocatorInstance.Data;
      (**(code **)(*(longlong *)pFVar5 + 0x10))(pFVar5,&local_a8);
      pFVar12 = pFVar12 + 0x20;
      if (pFVar12 != (FScriptContainerElement *)&local_a8) {
        pFVar5 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar12->field_0x0)->
                 AllocatorInstance).Data;
        (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar12->field_0x0)->AllocatorInstance).
        Data = local_a8.Data;
        local_a8.Data = (FScriptContainerElement *)0x0;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
        }
      }
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        (*(code *)**(undefined8 **)local_a8.Data)(local_a8.Data,1);
      }
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return;
}

// RefreshVariableAssignments @ 14dd98740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
MoviePipeline::RefreshVariableAssignments
          (UMovieGraphConfig *param_1,
          TArray<TObjectPtr<UMovieJobVariableAssignmentContainer>,TSizedDefaultAllocator<32>_>
          *param_2,UObject *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  ForAnyElementType FVar8;
  byte bVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  ForElementType<unsigned_int> FVar16;
  ulonglong *puVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  undefined1 auStackY_1b8 [32];
  undefined1 local_188 [8];
  int local_180;
  uint uStack_17c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_178;
  undefined4 local_170;
  uint uStack_16c;
  int iStack_168;
  undefined4 uStack_164;
  undefined8 *local_160;
  longlong *local_158;
  int iStack_150;
  uint uStack_14c;
  TBitArray<FDefaultBitArrayAllocator> *local_148;
  undefined4 uStack_140;
  uint uStack_13c;
  uint local_138;
  uint uStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  int local_128;
  undefined8 local_124;
  UMovieGraphConfig *local_118;
  UObject *local_110;
  TArray<TObjectPtr<UMovieJobVariableAssignmentContainer>,TSizedDefaultAllocator<32>_> *local_108;
  longlong *local_100;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_f8;
  longlong *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  TObjectPtr<UMovieGraphNode>_u_0 local_70;
  TObjectPtr<UMovieGraphNode>_u_0 local_68;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  iVar15 = 0;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_98._8_4_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70._0_4_ = 0;
  local_70._4_4_ = 0x80;
  local_68._0_4_ = -1;
  local_68._4_4_ = 0;
  uVar7 = 1;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  uVar18 = 0;
  local_110 = param_3;
  local_108 = param_2;
  if (param_1 != (UMovieGraphConfig *)0x0) {
    local_118 = param_1;
    TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_98,1);
    if (local_50 < 1) {
      local_50 = 1;
      if ((local_58.Data != (FScriptContainerElement *)0x0) &&
         (TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4),
         local_58.Data != (FScriptContainerElement *)0x0)) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
      }
      FVar8.Data = local_60;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FVar8.Data = local_58.Data;
      }
      *(undefined4 *)FVar8.Data = 0xffffffff;
      if (local_50 != 0) {
        pTStack_178 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
        local_180 = 0;
        uStack_17c = 1;
        uStack_16c = 0;
        iStack_168 = 0;
        if (local_70._0_4_ != 0) {
          FVar16 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
          if (local_78 != (ForElementType<unsigned_int>)0x0) {
            FVar16 = local_78;
          }
          uVar20 = *(uint *)FVar16;
          iStack_168 = iVar15;
          local_180 = iVar15;
          while (uVar20 == 0) {
            iStack_168 = iStack_168 + 0x20;
            lVar12 = (longlong)local_180;
            local_180 = local_180 + 1;
            if ((int)((local_70._0_4_ - 1) + ((int)(local_70._0_4_ - 1) >> 0x1f & 0x1fU)) >> 5 <
                local_180) goto LAB_14dd988de;
            uVar20 = ((uint *)((longlong)FVar16 + 4))[lVar12];
          }
          uStack_17c = -uVar20 & uVar20;
          uVar11 = (ulonglong)uStack_17c * 2 + 1;
          lVar12 = 0x3f;
          if (uVar11 != 0) {
            for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          local_128 = (int)lVar12;
          uStack_16c = local_128 + -1 + iStack_168;
          if ((int)local_70._0_4_ < (int)uStack_16c) {
LAB_14dd988de:
            uStack_16c = local_70._0_4_;
          }
        }
        local_170 = 0xffffffff;
        local_100 = (longlong *)local_98;
        local_f8._padding_ = CONCAT44(uStack_17c,local_180);
        local_f8.CurrentBitIndex = uStack_16c;
        local_f8.UnvisitedBitMask = 0xffffffff;
        local_f8._28_4_ = uStack_164;
        local_f8.BaseBitIndex = iStack_168;
        local_f8.Array = pTStack_178;
        uVar20 = uStack_16c;
        if ((int)uStack_16c < (int)local_70._0_4_) {
          do {
            puVar17 = (ulonglong *)((longlong)(int)uVar20 * 0x10 + *local_100);
            uVar10 = ((uint)(*puVar17 >> 0x14) & 0xffff ^ (uint)(*puVar17 >> 4)) * -0x7a143595;
            uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
            uVar10 = (uVar10 >> 0x10 ^ uVar10) & local_50 - 1U;
            *(uint *)((longlong)puVar17 + 0xc) = uVar10;
            FVar8.Data = local_60;
            if (local_58.Data != (FScriptContainerElement *)0x0) {
              FVar8.Data = local_58.Data;
            }
            uVar11 = (longlong)local_50 - 1U & (longlong)(int)uVar10;
            *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(FVar8.Data + uVar11 * 4);
            *(uint *)(FVar8.Data + uVar11 * 4) = uVar20;
            local_f8.UnvisitedBitMask = local_f8.UnvisitedBitMask & ~local_f8._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_f8);
            uVar20 = local_f8.CurrentBitIndex;
          } while (local_f8.CurrentBitIndex < (local_f8.Array)->NumBits);
        }
      }
    }
    TSet<UMovieGraphConfig_*,DefaultKeyFuncs<UMovieGraphConfig_*,0>,FDefaultSetAllocator>::
    Emplace<UMovieGraphConfig_*_const_&>
              ((TSet<UMovieGraphConfig_*,DefaultKeyFuncs<UMovieGraphConfig_*,0>,FDefaultSetAllocator>
                *)local_98,(UMovieGraphConfig **)&local_124,(bool *)&local_118);
    UMovieGraphConfig::GetAllContainedSubgraphs
              (param_1,(TSet<UMovieGraphConfig_*,DefaultKeyFuncs<UMovieGraphConfig_*,0>,FDefaultSetAllocator>
                        *)local_98);
  }
  uVar14 = local_70._0_4_;
  uStack_13c = uVar18;
  iStack_150 = iVar15;
  if (local_70._0_4_ != 0) {
    FVar16 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
    if (local_78 != (ForElementType<unsigned_int>)0x0) {
      FVar16 = local_78;
    }
    uVar20 = *(uint *)FVar16;
    while (uVar20 == 0) {
      lVar12 = (longlong)iStack_150;
      uVar18 = uVar18 + 0x20;
      iStack_150 = iStack_150 + 1;
      uStack_13c = local_70._0_4_;
      if ((int)((local_70._0_4_ - 1) + ((int)(local_70._0_4_ - 1) >> 0x1f & 0x1fU)) >> 5 <
          iStack_150) goto LAB_14dd98a50;
      uVar20 = ((uint *)((longlong)FVar16 + 4))[lVar12];
    }
    uVar7 = -uVar20 & uVar20;
    uVar11 = (ulonglong)uVar7 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_124._4_4_ = (int)lVar12;
    uStack_13c = (uVar18 - 1) + local_124._4_4_;
    if ((int)local_70._0_4_ < (int)uStack_13c) {
      uStack_13c = local_70._0_4_;
    }
  }
LAB_14dd98a50:
  iStack_130 = local_98._8_4_ - local_68._4_4_;
  local_158 = (longlong *)local_98;
  local_148 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  uStack_140 = 0xffffffff;
  TStack_d0.CurrentBitIndex = uStack_13c;
  TStack_d0.UnvisitedBitMask = 0xffffffff;
  uVar20 = local_70._0_4_ & 0xffffffe0;
  TStack_d0._padding_ = CONCAT44(uVar7,iStack_150);
  iVar15 = (int)local_70._0_4_ >> 5;
  TStack_d0._28_4_ = uStack_13c;
  TStack_d0.BaseBitIndex = uVar18;
  uStack_b0 = CONCAT44(uStack_12c,iStack_130);
  bVar9 = (byte)local_70._0_4_;
  uStack_14c = uVar7;
  local_138 = uVar18;
  uStack_134 = uStack_13c;
  local_d8 = local_158;
  TStack_d0.Array = local_148;
  if (((int)local_70._0_4_ < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar14 != local_70._0_4_) {
    FVar16 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
    if (local_78 != (ForElementType<unsigned_int>)0x0) {
      FVar16 = local_78;
    }
    uVar18 = -1 << (bVar9 & 0x1f) & *(uint *)((longlong)FVar16 + (longlong)iVar15 * 4);
    while (uVar18 == 0) {
      lVar12 = (longlong)iVar15;
      uVar20 = uVar20 + 0x20;
      iVar15 = iVar15 + 1;
      uVar14 = local_70._0_4_;
      if ((int)((local_70._0_4_ - 1) + ((int)(local_70._0_4_ - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
      goto LAB_14dd98b51;
      uVar18 = ((uint *)((longlong)FVar16 + 4))[lVar12];
    }
    uVar11 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar14 = (int)lVar12 + -1 + uVar20;
    if ((int)local_70._0_4_ < (int)uVar14) {
      uVar14 = local_70._0_4_;
    }
  }
LAB_14dd98b51:
  while( true ) {
    plVar4 = local_d8;
    if ((int)local_d8[1] - *(int *)((longlong)local_d8 + 0x34) != (int)uStack_b0) {
      `TSparseArray<TSparseSetElement<UMovieGraphConfig_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_188);
    }
    if (((TStack_d0.CurrentBitIndex == uVar14) &&
        (TStack_d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
       (plVar4 == (longlong *)local_98)) break;
    GetOrCreateJobVariableAssignmentsForGraph
              ((UMovieGraphConfig *)&stack0xffffffffffffff58,
               *(TArray<TObjectPtr<UMovieJobVariableAssignmentContainer>,TSizedDefaultAllocator<32>_>
                 **)(*plVar4 + (longlong)TStack_d0.CurrentBitIndex * 0x10),(UObject *)param_2);
    TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
  }
  iVar15 = param_2->ArrayNum;
  local_160 = (undefined8 *)local_98;
  if (iVar15 != 0) {
    pFVar1 = (param_2->AllocatorInstance).Data;
    iVar19 = 0;
    bVar5 = `MoviePipeline::RefreshVariableAssignments'::__l2::<lambda_1>::operator()
                      (&local_160,(TObjectPtr<UMovieJobVariableAssignmentContainer> *)pFVar1);
    bVar5 = !bVar5;
    iVar13 = 0;
    do {
      iVar3 = iVar13;
      do {
        iVar3 = iVar3 + 1;
        if (iVar15 <= iVar3) break;
        bVar6 = `MoviePipeline::RefreshVariableAssignments'::__l2::<lambda_1>::operator()
                          (&local_160,
                           (TObjectPtr<UMovieJobVariableAssignmentContainer> *)
                           (pFVar1 + (longlong)iVar3 * 8));
      } while (bVar5 == !bVar6);
      if (bVar5 != false) {
        if (iVar19 != iVar13) {
          memmove(pFVar1 + (longlong)iVar19 * 8,pFVar1 + (longlong)iVar13 * 8,
                  (longlong)(iVar3 - iVar13) << 3);
        }
        iVar19 = iVar19 + (iVar3 - iVar13);
      }
      bVar5 = (bool)(bVar5 ^ 1);
      iVar13 = iVar3;
    } while (iVar3 < iVar15);
    local_108->ArrayNum = iVar19;
  }
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  iVar15 = SUB84(local_98._8_8_,4);
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  if (iVar15 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_68._0_4_ = -1;
  local_68._4_4_ = 0;
  local_70._0_4_ = 0;
  if (0x80 < (uint)local_70._4_4_) {
    local_70._4_4_ = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  return;
}

// RestoreCompleteSequenceHierarchy @ 14dd9c750

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
MoviePipeline::RestoreCompleteSequenceHierarchy
          (UMovieSceneSequence *param_1,
          TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  int iVar2;
  TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *pTVar3;
  ForAnyElementType FVar4;
  undefined1 local_res10 [8];
  TArray<TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>,TSizedDefaultAllocator<32>_>
  local_38;
  TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> local_28;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  local_28.Object = param_2->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  GatherLeafNodesRecursive(&local_28,&local_38);
  iVar2 = local_38.ArrayNum;
  pTVar3 = (TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *)
           (local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 0x10);
  FVar4.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if (local_38.ArrayNum != iVar2) {
      `TCheckedPointerIterator<TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *)FVar4.Data == pTVar3)
    break;
    pTVar1 = (((TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *)FVar4.Data)->
             SharedReferenceCount).ReferenceController;
    local_28.Object =
         ((TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *)FVar4.Data)->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28.SharedReferenceCount.ReferenceController = pTVar1;
    SaveOrRestoreSubSectionHierarchy(&local_28,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    FVar4.Data = FVar4.Data + 0x10;
  }
  DestructItems<TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>,int>
            ((TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *)
             local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if ((TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *)
      local_38.AllocatorInstance.Data !=
      (TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// SaveOrRestoreSubSectionHierarchy @ 14dd9cdc0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
MoviePipeline::SaveOrRestoreSubSectionHierarchy
          (TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  EMovieSceneEvaluationType EVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  undefined3 uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  undefined3 uVar9;
  undefined4 uVar10;
  bool bVar11;
  bool bVar12;
  UObject *pUVar13;
  UPackage *pUVar14;
  UClass *pUVar15;
  UMovieScene *this;
  UMovieSceneSignedObject *pUVar16;
  UMovieSceneSection *pUVar17;
  FScriptContainerElement *pFVar18;
  FCameraCutSubSectionHierarchyNode *pFVar19;
  undefined1 local_res8 [8];
  FSharedReferencer<1> local_50;
  undefined8 local_48;
  FSharedReferencer<1> local_40;
  undefined4 local_38;
  int iStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pFVar19 = param_1->Object;
  local_50.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  if (local_50.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_50.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_50.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar19 != (FCameraCutSubSectionHierarchyNode *)0x0) {
    if ((pFVar19 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    do {
      bVar11 = FWeakObjectPtr::IsValid(&(pFVar19->MovieScene).WeakPtr);
      if ((bVar11) && (param_2)) {
        if ((pFVar19 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pUVar13 = FWeakObjectPtr::Get(&(pFVar19->MovieScene).WeakPtr);
        local_38 = *(undefined4 *)&pUVar13[7].field_0x10;
        iStack_34 = *(int *)&pUVar13[7].field_0x14;
        uStack_30 = *(undefined4 *)&pUVar13[7].field_0x18;
        iStack_2c = *(int *)&pUVar13[7].field_0x1c;
        if ((pFVar19 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(undefined4 *)&(pFVar19->OriginalMovieScenePlaybackRange).LowerBound = local_38;
        (pFVar19->OriginalMovieScenePlaybackRange).LowerBound.Value.Value = iStack_34;
        *(undefined4 *)&(pFVar19->OriginalMovieScenePlaybackRange).UpperBound = uStack_30;
        (pFVar19->OriginalMovieScenePlaybackRange).UpperBound.Value.Value = iStack_2c;
        pUVar13 = FWeakObjectPtr::Get(&(pFVar19->MovieScene).WeakPtr);
        pUVar14 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)pUVar13);
        if (pUVar14 != (UPackage *)0x0) {
          pFVar19->bOriginalMovieScenePackageDirty = pUVar14->bDirty;
        }
        pUVar13 = FWeakObjectPtr::Get(&(pFVar19->MovieScene).WeakPtr);
        pFVar19->EvaluationType = pUVar13[8].field_0x8;
        pUVar13 = FWeakObjectPtr::Get(&(pFVar19->MovieScene).WeakPtr);
        pUVar15 = Z_Construct_UClass_ULevelSequence_NoRegister();
        pUVar13 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)pUVar13,pUVar15);
        if (pUVar13 != (UObject *)0x0) {
          pFVar19->OriginalSequenceFlags = pUVar13[2].field_0x1b;
        }
      }
      if ((pFVar19 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      bVar11 = FWeakObjectPtr::IsValid(&(pFVar19->Section).WeakPtr);
      if (bVar11) {
        if (param_2) {
          if ((pFVar19 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pUVar13 = FWeakObjectPtr::Get(&(pFVar19->Section).WeakPtr);
          uVar3 = *(uint *)&pUVar13[5].field_0x10;
          if ((pFVar19 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar19->bOriginalShotSectionIsLocked = (bool)((byte)(uVar3 >> 1) & 1);
          pUVar13 = FWeakObjectPtr::Get(&(pFVar19->Section).WeakPtr);
          uVar6 = *(undefined3 *)&pUVar13[4].field_0x11;
          uVar7 = *(undefined4 *)&pUVar13[4].field_0x14;
          uVar8 = pUVar13[4].field_0x18;
          uVar9 = *(undefined3 *)&pUVar13[4].field_0x19;
          uVar10 = *(undefined4 *)&pUVar13[4].field_0x1c;
          (pFVar19->OriginalShotSectionRange).LowerBound.Type =
               (TEnumAsByte<ERangeBoundTypes::Type>)pUVar13[4].field_0x10;
          *(undefined3 *)&(pFVar19->OriginalShotSectionRange).LowerBound.field_0x1 = uVar6;
          (pFVar19->OriginalShotSectionRange).LowerBound.Value = (FFrameNumber)uVar7;
          (pFVar19->OriginalShotSectionRange).UpperBound.Type =
               (TEnumAsByte<ERangeBoundTypes::Type>)uVar8;
          *(undefined3 *)&(pFVar19->OriginalShotSectionRange).UpperBound.field_0x1 = uVar9;
          (pFVar19->OriginalShotSectionRange).UpperBound.Value = (FFrameNumber)uVar10;
          pUVar13 = FWeakObjectPtr::Get(&(pFVar19->Section).WeakPtr);
          pFVar19->bOriginalShotSectionIsActive = (bool)(pUVar13[5].field_0x10 & 1);
        }
        else {
          if ((pFVar19 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pUVar13 = FWeakObjectPtr::Get(&(pFVar19->Section).WeakPtr);
          pcVar5 = *(code **)(*(longlong *)pUVar13 + 0x2c8);
          if ((pFVar19 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          (*pcVar5)(pUVar13,&pFVar19->OriginalShotSectionRange);
          if ((pFVar19 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pUVar17 = (UMovieSceneSection *)FWeakObjectPtr::Get(&(pFVar19->Section).WeakPtr);
          if ((pFVar19 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          bVar11 = pFVar19->bOriginalShotSectionIsActive;
          bVar12 = UMovieSceneSection::TryModify(pUVar17,true);
          if (bVar12) {
            *(uint *)&pUVar17->field_0xd8 =
                 ((uint)bVar11 ^ ZPULL(*(undefined4 *)&pUVar17->field_0xd8,0,1)) & 1 ^
                 *(undefined4 *)&pUVar17->field_0xd8;
          }
          pUVar13 = FWeakObjectPtr::Get(&(pFVar19->Section).WeakPtr);
          *(uint *)&pUVar13[5].field_0x10 =
               ((uint)pFVar19->bOriginalShotSectionIsLocked * 2 ^ *(uint *)&pUVar13[5].field_0x10) &
               2 ^ *(uint *)&pUVar13[5].field_0x10;
          pUVar16 = (UMovieSceneSignedObject *)FWeakObjectPtr::Get(&(pFVar19->Section).WeakPtr);
          UMovieSceneSignedObject::MarkAsChanged(pUVar16);
        }
      }
      if ((pFVar19 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      bVar11 = FWeakObjectPtr::IsValid(&(pFVar19->CameraCutSection).WeakPtr);
      if (bVar11) {
        if (param_2) {
          if ((pFVar19 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pUVar13 = FWeakObjectPtr::Get(&(pFVar19->CameraCutSection).WeakPtr);
          local_38 = *(undefined4 *)&pUVar13[4].field_0x10;
          iStack_34 = *(int *)&pUVar13[4].field_0x14;
          uStack_30 = *(undefined4 *)&pUVar13[4].field_0x18;
          iStack_2c = *(int *)&pUVar13[4].field_0x1c;
          if ((pFVar19 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(undefined4 *)&(pFVar19->OriginalCameraCutSectionRange).LowerBound = local_38;
          (pFVar19->OriginalCameraCutSectionRange).LowerBound.Value.Value = iStack_34;
          *(undefined4 *)&(pFVar19->OriginalCameraCutSectionRange).UpperBound = uStack_30;
          (pFVar19->OriginalCameraCutSectionRange).UpperBound.Value.Value = iStack_2c;
          pUVar13 = FWeakObjectPtr::Get(&(pFVar19->CameraCutSection).WeakPtr);
          pFVar19->bOriginalCameraCutIsActive = (bool)(pUVar13[5].field_0x10 & 1);
        }
        else {
          if ((pFVar19 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pUVar13 = FWeakObjectPtr::Get(&(pFVar19->CameraCutSection).WeakPtr);
          pcVar5 = *(code **)(*(longlong *)pUVar13 + 0x2c8);
          if ((pFVar19 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          (*pcVar5)(pUVar13,&pFVar19->OriginalCameraCutSectionRange);
          if ((pFVar19 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pUVar17 = (UMovieSceneSection *)FWeakObjectPtr::Get(&(pFVar19->CameraCutSection).WeakPtr);
          if ((pFVar19 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          bVar11 = pFVar19->bOriginalCameraCutIsActive;
          bVar12 = UMovieSceneSection::TryModify(pUVar17,true);
          if (bVar12) {
            *(uint *)&pUVar17->field_0xd8 =
                 ((uint)bVar11 ^ ZPULL(*(undefined4 *)&pUVar17->field_0xd8,0,1)) & 1 ^
                 *(undefined4 *)&pUVar17->field_0xd8;
          }
          pUVar16 = (UMovieSceneSignedObject *)
                    FWeakObjectPtr::Get(&(pFVar19->CameraCutSection).WeakPtr);
          UMovieSceneSignedObject::MarkAsChanged(pUVar16);
LAB_14dd9d5bb:
          if ((pFVar19 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar4 = (pFVar19->AdditionalSectionsToExpand).ArrayNum;
          pFVar18 = (pFVar19->AdditionalSectionsToExpand).AllocatorInstance.Data;
          pFVar1 = pFVar18 + (longlong)iVar4 * 0x18;
          while( true ) {
            if ((pFVar19->AdditionalSectionsToExpand).ArrayNum != iVar4) {
              local_res8[0] = 0;
              `TCheckedPointerIterator<TTuple<UMovieSceneSection_*,TRange<FFrameNumber>_>,int,0>::
              operator!='::__l2::<lambda_1>::operator()(local_res8);
            }
            if (pFVar18 == pFVar1) break;
            (**(code **)(**(longlong **)pFVar18 + 0x2c8))(*(longlong **)pFVar18,pFVar18 + 8);
            UMovieSceneSignedObject::MarkAsChanged(*(UMovieSceneSignedObject **)pFVar18);
            pFVar18 = pFVar18 + 0x18;
          }
        }
      }
      else if (!param_2) goto LAB_14dd9d5bb;
      if ((pFVar19 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      bVar11 = FWeakObjectPtr::IsValid(&(pFVar19->MovieScene).WeakPtr);
      if ((bVar11) && (!param_2)) {
        if ((pFVar19 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        this = (UMovieScene *)FWeakObjectPtr::Get(&(pFVar19->MovieScene).WeakPtr);
        if ((pFVar19 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        UMovieScene::SetPlaybackRange(this,&pFVar19->OriginalMovieScenePlaybackRange,true);
        if ((pFVar19 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pUVar13 = FWeakObjectPtr::Get(&(pFVar19->MovieScene).WeakPtr);
        if ((pFVar19 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        EVar2 = pFVar19->EvaluationType;
        pUVar13[8].field_0x8 = EVar2;
        if ((EVar2 == FrameLocked) && (pUVar13[8].field_0x9 == '\0')) {
          pUVar13[8].field_0x9 = 1;
        }
        pUVar13 = FWeakObjectPtr::Get(&(pFVar19->MovieScene).WeakPtr);
        pUVar15 = Z_Construct_UClass_ULevelSequence_NoRegister();
        pUVar13 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)pUVar13,pUVar15);
        if (pUVar13 != (UObject *)0x0) {
          pUVar13[2].field_0x1b = pFVar19->OriginalSequenceFlags;
        }
        pUVar16 = (UMovieSceneSignedObject *)FWeakObjectPtr::Get(&(pFVar19->MovieScene).WeakPtr);
        UMovieSceneSignedObject::MarkAsChanged(pUVar16);
        pUVar13 = FWeakObjectPtr::Get(&(pFVar19->MovieScene).WeakPtr);
        pUVar14 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)pUVar13);
        if (pUVar14 != (UPackage *)0x0) {
          UPackage::SetDirtyFlag(pUVar14,pFVar19->bOriginalMovieScenePackageDirty);
        }
      }
      if ((pFVar19 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_40.ReferenceController = (pFVar19->Parent).SharedReferenceCount.ReferenceController;
      pFVar19 = (pFVar19->Parent).Object;
      if (local_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_40.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_40.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_48 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_50,&local_40);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_40.ReferenceController);
    } while (pFVar19 != (FCameraCutSubSectionHierarchyNode *)0x0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_50.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetSubSectionHierarchyActive @ 14dda4790

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
MoviePipeline::SetSubSectionHierarchyActive
          (TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  UMovieSceneSection *pUVar4;
  UMovieSceneSignedObject *pUVar5;
  FCameraCutSubSectionHierarchyNode *pFVar6;
  FName local_res8;
  FName local_res18 [2];
  FSharedReferencer<1> local_60;
  FString local_58;
  FString local_48;
  undefined8 local_38;
  FSharedReferencer<1> local_30;
  
  pFVar6 = param_1->Object;
  local_60.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  if (local_60.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_60.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_60.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar6 != (FCameraCutSubSectionHierarchyNode *)0x0) {
    if ((pFVar6 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    do {
      bVar2 = FWeakObjectPtr::IsValid(&(pFVar6->MovieScene).WeakPtr);
      if (bVar2) {
        if ((pFVar6 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pUVar3 = FWeakObjectPtr::Get(&(pFVar6->MovieScene).WeakPtr);
        pUVar3[8].field_0x8 = 1;
      }
      if ((pFVar6 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      bVar2 = FWeakObjectPtr::IsValid(&(pFVar6->Section).WeakPtr);
      if (bVar2) {
        if ((pFVar6 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pUVar3 = FWeakObjectPtr::Get(&(pFVar6->Section).WeakPtr);
        *(uint *)&pUVar3[5].field_0x10 = *(uint *)&pUVar3[5].field_0x10 & 0xfffffffd;
      }
      if ((pFVar6 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      bVar2 = FWeakObjectPtr::IsValid(&(pFVar6->CameraCutSection).WeakPtr);
      if (bVar2) {
        if ((pFVar6 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pUVar4 = (UMovieSceneSection *)FWeakObjectPtr::Get(&(pFVar6->CameraCutSection).WeakPtr);
        bVar2 = UMovieSceneSection::TryModify(pUVar4,true);
        if (bVar2) {
          pUVar4->bIsActive = 0;
          *(uint *)&pUVar4->field_0xd8 = *(uint *)&pUVar4->field_0xd8 | (uint)param_2;
        }
        if ((pFVar6 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pUVar5 = (UMovieSceneSignedObject *)FWeakObjectPtr::Get(&(pFVar6->CameraCutSection).WeakPtr)
        ;
        UMovieSceneSignedObject::MarkAsChanged(pUVar5);
        if (5 < (byte)LogMovieRenderPipeline._0_1_) {
          if ((pFVar6 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pUVar3 = FWeakObjectPtr::Get(&(pFVar6->CameraCutSection).WeakPtr);
          if (pUVar3 == (UObject *)0x0) {
            ::FString::FString(&local_58,L"None");
          }
          else {
            local_res8.ComparisonIndex.Value = *(uint *)&pUVar3->field_0x18;
            local_res8.Number = *(uint *)&pUVar3->field_0x1c;
            ::FName::ToString(&local_res8,&local_58);
          }
          UE::Logging::Private::BasicLog<6>
                    (&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
        }
      }
      if ((pFVar6 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      bVar2 = FWeakObjectPtr::IsValid(&(pFVar6->Section).WeakPtr);
      if (bVar2) {
        if ((pFVar6 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pUVar4 = (UMovieSceneSection *)FWeakObjectPtr::Get(&(pFVar6->Section).WeakPtr);
        bVar2 = UMovieSceneSection::TryModify(pUVar4,true);
        if (bVar2) {
          pUVar4->bIsActive = 0;
          *(uint *)&pUVar4->field_0xd8 = *(uint *)&pUVar4->field_0xd8 | (uint)param_2;
        }
        if ((pFVar6 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pUVar5 = (UMovieSceneSignedObject *)FWeakObjectPtr::Get(&(pFVar6->Section).WeakPtr);
        UMovieSceneSignedObject::MarkAsChanged(pUVar5);
        if (5 < (byte)LogMovieRenderPipeline._0_1_) {
          if ((pFVar6 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pUVar3 = FWeakObjectPtr::Get(&(pFVar6->Section).WeakPtr);
          if (pUVar3 == (UObject *)0x0) {
            ::FString::FString(&local_48,L"None");
          }
          else {
            local_res18[0].ComparisonIndex.Value = *(uint *)&pUVar3->field_0x18;
            local_res18[0].Number = *(uint *)&pUVar3->field_0x1c;
            ::FName::ToString(local_res18,&local_48);
          }
          UE::Logging::Private::BasicLog<6>
                    (&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
        }
      }
      if ((pFVar6 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_30.ReferenceController = (pFVar6->Parent).SharedReferenceCount.ReferenceController;
      pFVar6 = (pFVar6->Parent).Object;
      if (local_30.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_30.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_30.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_38 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_60,&local_30);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_30.ReferenceController);
    } while (pFVar6 != (FCameraCutSubSectionHierarchyNode *)0x0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Z_Construct_UClass_UMovieGraphValueContainer_NoRegister @ 14dda9480

UClass * __cdecl Z_Construct_UClass_UMovieGraphValueContainer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphValueContainer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphValueContainer",
               &Z_Registration_Info_UClass_UMovieGraphValueContainer.InnerSingleton,
               UMovieGraphValueContainer::StaticRegisterNativesUMovieGraphValueContainer,0x40,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphValueContainer>,
               InternalVTableHelperCtorCaller<UMovieGraphValueContainer>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphValueContainer.InnerSingleton;
}

// Z_Construct_UClass_UMoviePipelineFCPXMLExporter_NoRegister @ 14dda9530

UClass * __cdecl Z_Construct_UClass_UMoviePipelineFCPXMLExporter_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineFCPXMLExporter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineFCPXMLExporter",
               &Z_Registration_Info_UClass_UMoviePipelineFCPXMLExporter.InnerSingleton,
               UMoviePipelineFCPXMLExporter::StaticRegisterNativesUMoviePipelineFCPXMLExporter,0x80,
               8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMoviePipelineFCPXMLExporter>,
               InternalVTableHelperCtorCaller<UMoviePipelineFCPXMLExporter>,local_res8,
               UMoviePipelineOutputBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineFCPXMLExporter.InnerSingleton;
}

// Z_Construct_UClass_UMoviePipelineGameOverrideSetting_NoRegister @ 14dda95f0

UClass * __cdecl Z_Construct_UClass_UMoviePipelineGameOverrideSetting_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineGameOverrideSetting.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineGameOverrideSetting",
               &Z_Registration_Info_UClass_UMoviePipelineGameOverrideSetting.InnerSingleton,
               UMoviePipelineGameOverrideSetting::
               StaticRegisterNativesUMoviePipelineGameOverrideSetting,0x180,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineGameOverrideSetting>,
               InternalVTableHelperCtorCaller<UMoviePipelineGameOverrideSetting>,local_res8,
               UMoviePipelineSetting::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineGameOverrideSetting.InnerSingleton;
}

// Z_Construct_UClass_UMoviePipelineInProcessExecutor_NoRegister @ 14dda96b0

UClass * __cdecl Z_Construct_UClass_UMoviePipelineInProcessExecutor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineInProcessExecutor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineInProcessExecutor",
               &Z_Registration_Info_UClass_UMoviePipelineInProcessExecutor.InnerSingleton,
               UMoviePipelineInProcessExecutor::StaticRegisterNativesUMoviePipelineInProcessExecutor
               ,0x1b8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMoviePipelineInProcessExecutor>,
               InternalVTableHelperCtorCaller<UMoviePipelineInProcessExecutor>,local_res8,
               UMoviePipelineLinearExecutorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineInProcessExecutor.InnerSingleton;
}

// Z_Construct_UClass_UMoviePipelineLinearExecutorBase_NoRegister @ 14dda9770

UClass * __cdecl Z_Construct_UClass_UMoviePipelineLinearExecutorBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineLinearExecutorBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineLinearExecutorBase",
               &Z_Registration_Info_UClass_UMoviePipelineLinearExecutorBase.InnerSingleton,
               UMoviePipelineLinearExecutorBase::
               StaticRegisterNativesUMoviePipelineLinearExecutorBase,0x170,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMoviePipelineLinearExecutorBase>,
               InternalVTableHelperCtorCaller<UMoviePipelineLinearExecutorBase>,local_res8,
               UMoviePipelineExecutorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineLinearExecutorBase.InnerSingleton;
}

// Z_Construct_UClass_UMoviePipelineQueueEngineSubsystem_NoRegister @ 14dda9830

UClass * __cdecl Z_Construct_UClass_UMoviePipelineQueueEngineSubsystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineQueueEngineSubsystem.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineQueueEngineSubsystem",
               &Z_Registration_Info_UClass_UMoviePipelineQueueEngineSubsystem.InnerSingleton,
               UMoviePipelineQueueEngineSubsystem::
               StaticRegisterNativesUMoviePipelineQueueEngineSubsystem,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineQueueEngineSubsystem>,
               InternalVTableHelperCtorCaller<UMoviePipelineQueueEngineSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineQueueEngineSubsystem.InnerSingleton;
}

// Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_NoRegister @ 14dda98f0

UClass * __cdecl Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineSetting_BlueprintBase.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineSetting_BlueprintBase",
               &Z_Registration_Info_UClass_UMoviePipelineSetting_BlueprintBase.InnerSingleton,
               UMoviePipelineSetting_BlueprintBase::
               StaticRegisterNativesUMoviePipelineSetting_BlueprintBase,0x60,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMoviePipelineSetting_BlueprintBase>,
               InternalVTableHelperCtorCaller<UMoviePipelineSetting_BlueprintBase>,local_res8,
               UMoviePipelineSetting::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineSetting_BlueprintBase.InnerSingleton;
}

// Z_Construct_UClass_UMoviePipelineVideoOutputBase_NoRegister @ 14dda99b0

UClass * __cdecl Z_Construct_UClass_UMoviePipelineVideoOutputBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineVideoOutputBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineVideoOutputBase",
               &Z_Registration_Info_UClass_UMoviePipelineVideoOutputBase.InnerSingleton,
               UMoviePipelineVideoOutputBase::StaticRegisterNativesUMoviePipelineVideoOutputBase,
               0x90,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMoviePipelineVideoOutputBase>,
               InternalVTableHelperCtorCaller<UMoviePipelineVideoOutputBase>,local_res8,
               UMoviePipelineOutputBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineVideoOutputBase.InnerSingleton;
}

// Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelinePanoramicFilterType @ 14dda9a70

UEnum * __cdecl Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelinePanoramicFilterType(void)

{
  if (Z_Registration_Info_UEnum_EMoviePipelinePanoramicFilterType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMoviePipelinePanoramicFilterType.InnerSingleton,
               &Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelinePanoramicFilterType_Statics
                ::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMoviePipelinePanoramicFilterType.InnerSingleton;
}

// Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineShutterTiming @ 14dda9ab0

UEnum * __cdecl Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineShutterTiming(void)

{
  if (Z_Registration_Info_UEnum_EMoviePipelineShutterTiming.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMoviePipelineShutterTiming.InnerSingleton,
               &Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineShutterTiming_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EMoviePipelineShutterTiming.InnerSingleton;
}

// Z_Construct_UEnum_MovieRenderPipelineCore_EMovieRenderPipelineState @ 14dda9af0

UEnum * __cdecl Z_Construct_UEnum_MovieRenderPipelineCore_EMovieRenderPipelineState(void)

{
  if (Z_Registration_Info_UEnum_EMovieRenderPipelineState.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMovieRenderPipelineState.InnerSingleton,
               &Z_Construct_UEnum_MovieRenderPipelineCore_EMovieRenderPipelineState_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EMovieRenderPipelineState.InnerSingleton;
}

// Z_Construct_UEnum_MovieRenderPipelineCore_EMovieRenderShotState @ 14dda9b30

UEnum * __cdecl Z_Construct_UEnum_MovieRenderPipelineCore_EMovieRenderShotState(void)

{
  if (Z_Registration_Info_UEnum_EMovieRenderShotState.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMovieRenderShotState.InnerSingleton,
               &Z_Construct_UEnum_MovieRenderPipelineCore_EMovieRenderShotState_Statics::EnumParams)
    ;
  }
  return Z_Registration_Info_UEnum_EMovieRenderShotState.InnerSingleton;
}

// Z_Construct_UScriptStruct_FMovieGraphPostRenderSettings @ 14dda9b70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieGraphPostRenderSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieGraphPostRenderSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieGraphPostRenderSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieGraphPostRenderSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieGraphPostRenderSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieGraphPostRenderSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMoviePipelineCameraCutInfo @ 14dda9bf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMoviePipelineCameraCutInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMoviePipelineCameraCutInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMoviePipelineCameraCutInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FMoviePipelineCameraCutInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMoviePipelineCameraCutInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMoviePipelineCameraCutInfo.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams @ 14dda9c70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMoviePipelineFilenameResolveParams.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMoviePipelineFilenameResolveParams.InnerSingleton
               ,&Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FMoviePipelineFilenameResolveParams.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMoviePipelineFilenameResolveParams.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMoviePipelineOutputData @ 14dda9cf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMoviePipelineOutputData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMoviePipelineOutputData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMoviePipelineOutputData.InnerSingleton,
               &Z_Construct_UScriptStruct_FMoviePipelineOutputData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMoviePipelineOutputData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMoviePipelineOutputData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics @ 14dda9d70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMoviePipelineSegmentWorkMetrics.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMoviePipelineSegmentWorkMetrics.InnerSingleton,
               &Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMoviePipelineSegmentWorkMetrics.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMoviePipelineSegmentWorkMetrics.InnerSingleton;
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

// IMPLEMENT_MODULE_MovieRenderPipelineCore @ 14ddaf920

void __cdecl IMPLEMENT_MODULE_MovieRenderPipelineCore(void)

{
  return;
}

// QuickRenderSettingsPackagePath'' @ 15045e3e0

void __cdecl
`dynamic_atexit_destructor_for_'UMovieGraphQuickRenderSettings::QuickRenderSettingsPackagePath__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UMovieGraphQuickRenderSettings::QuickRenderSettingsPackagePath.Data.AllocatorInstance
               .Data;
  if (UMovieGraphQuickRenderSettings::QuickRenderSettingsPackagePath.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UMovieGraphQuickRenderSettings::QuickRenderSettingsPackagePath.Data.AllocatorInstance.Data !=
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

// SimulationTag'' @ 15045e400

void __cdecl `dynamic_atexit_destructor_for_'UDataflow::SimulationTag__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UDataflow::SimulationTag.Data.AllocatorInstance.Data;
  if (UDataflow::SimulationTag.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (UDataflow::SimulationTag.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// StaticResource'' @ 15045e420

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticBlendState__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHIBlendState____PEAVFRHIBlendState____6B_
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
             &TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
      ::StaticResource.StateRHI.Reference != (FRHIBlendState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 15045e4a0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticDepthStencilState__0A__06_0A__06_0A__0A__0A__0A__06_0A__0A__0A__0PP__0PP___V__TRefCountPtr_VFRHIDepthStencilState____PEAVFRHIDepthStencilState____6B_
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
             &TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
      ::StaticResource.StateRHI.Reference != (FRHIDepthStencilState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 15045e520

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticRasterizerState__01_0A__0A__00__V__TRefCountPtr_VFRHIRasterizerState____PEAVFRHIRasterizerState____6B_
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
             &TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
      ::StaticResource.StateRHI.Reference != (FRHIRasterizerState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 15045e5a0

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

// `dynamic_atexit_destructor_for_'CVarMoviePipelineAlphaOutputOverride'' @ 15045e620

void __cdecl _dynamic_atexit_destructor_for__CVarMoviePipelineAlphaOutputOverride__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarMoviePipelineAlphaOutputOverride);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMoviePipelineDisableMaxResolutionCheck'' @ 15045e640

void __cdecl _dynamic_atexit_destructor_for__CVarMoviePipelineDisableMaxResolutionCheck__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarMoviePipelineDisableMaxResolutionCheck);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMoviePipelineDisableShaderFlushing'' @ 15045e660

void __cdecl _dynamic_atexit_destructor_for__CVarMoviePipelineDisableShaderFlushing__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarMoviePipelineDisableShaderFlushing);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMoviePipelinePanoramicMaxPoolsPerFrame'' @ 15045e680

void __cdecl _dynamic_atexit_destructor_for__CVarMoviePipelinePanoramicMaxPoolsPerFrame__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarMoviePipelinePanoramicMaxPoolsPerFrame);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMoviePipelineThrottleFrameCount'' @ 15045e6a0

void __cdecl _dynamic_atexit_destructor_for__CVarMoviePipelineThrottleFrameCount__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarMoviePipelineThrottleFrameCount);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMoviePipelineVTNaniteAutoLOD'' @ 15045e6c0

void __cdecl _dynamic_atexit_destructor_for__CVarMoviePipelineVTNaniteAutoLOD__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMoviePipelineVTNaniteAutoLOD);
  return;
}

// `dynamic_atexit_destructor_for_'CachedInfo'' @ 15045e6e0

void __cdecl
`UE::MoviePipeline::GetCachedGPUDriverInfo'::__l2::_dynamic_atexit_destructor_for__CachedInfo__
          (void)

{
  CachedInfo._72_4_ = 0;
  if (CachedInfo._64_8_ != 0) {
    FMemory::Free((void *)CachedInfo._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&CachedInfo);
  return;
}

// `dynamic_atexit_destructor_for_'ErrorNamespace'' @ 15045e720

void __cdecl EHttpResponseCodes::_dynamic_atexit_destructor_for__ErrorNamespace__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ErrorNamespace.Data.AllocatorInstance.Data;
  if (ErrorNamespace.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ErrorNamespace.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'FrameNumberIdentifiers'' @ 15045e740

void __cdecl
`UE::MoviePipeline::ConformOutputFormatStringToken'::__l2::
_dynamic_atexit_destructor_for__FrameNumberIdentifiers__(void)

{
  int *piVar1;
  longlong lVar2;
  int *piVar3;
  
  piVar3 = &::_TSS0;
  lVar2 = 4;
  do {
    piVar1 = piVar3 + -4;
    piVar3 = piVar3 + -4;
    lVar2 = lVar2 + -1;
    if (*(void **)piVar1 != (void *)0x0) {
      FMemory::Free(*(void **)piVar1);
    }
  } while (lVar2 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterMovieRenderPipelineCoreObjectVersion'' @ 15045e790

void __cdecl _dynamic_atexit_destructor_for__GRegisterMovieRenderPipelineCoreObjectVersion__(void)

{
  FCurrentCustomVersions::Unregister(&GRegisterMovieRenderPipelineCoreObjectVersion.Key);
  return;
}

// `dynamic_atexit_destructor_for_'LogMovieRenderPipeline'' @ 15045e7b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogMovieRenderPipeline__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogMovieRenderPipeline);
  return;
}

// `dynamic_atexit_destructor_for_'LogMovieRenderPipelineIO'' @ 15045e7d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogMovieRenderPipelineIO__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogMovieRenderPipelineIO);
  return;
}

// `dynamic_atexit_destructor_for_'OnSequenceSetEvent'' @ 15045e7f0

void __cdecl
`UMoviePipelineExecutorJob::OnSequenceSetEvent'::__l2::
_dynamic_atexit_destructor_for__OnSequenceSetEvent__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)OnSequenceSetEvent._8_8_,
             OnSequenceSetEvent._16_4_);
  if (OnSequenceSetEvent._8_8_ != 0) {
    FMemory::Free((void *)OnSequenceSetEvent._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&OnSequenceSetEvent);
  return;
}

// operator() @ 15058e870

bool __thiscall
``FMoviePipelineOutputMerger::OnSingleSampleDataAvailable_AnyThread'::__l2::<lambda_1>::operator()'
::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<5889326003146194983>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5889326003146194983>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

