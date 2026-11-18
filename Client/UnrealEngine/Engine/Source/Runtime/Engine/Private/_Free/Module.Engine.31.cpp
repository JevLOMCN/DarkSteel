// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 643

// ActiveTrackers'' @ 1410f2610

void __cdecl `dynamic_initializer_for_'FScopedRPCTimingTracker::ActiveTrackers__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FScopedRPCTimingTracker::ActiveTrackers__);
  return;
}

// ClassNetCacheSuffix'' @ 1410f2630

void __cdecl `dynamic_initializer_for_'UActorChannel::ClassNetCacheSuffix__(void)

{
  ::FString::FString(&UActorChannel::ClassNetCacheSuffix,L"_ClassNetCache");
  atexit(`dynamic_atexit_destructor_for_'UActorChannel::ClassNetCacheSuffix__);
  return;
}

// CriticalSection'' @ 1410f2660

void __cdecl
`dynamic_initializer_for_'`anonymous_namespace'::FScopedCurveTableChange::CriticalSection__(void)

{
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&::FScopedCurveTableChange::CriticalSection,4000);
  atexit(`dynamic_atexit_destructor_for_'`anonymous_namespace'::FScopedCurveTableChange::
         CriticalSection__);
  return;
}

// Name'' @ 1410f2690

void __cdecl
`dynamic_initializer_for_'UE::Geometry::Spline::TSplineValueTypeTraits<int>::Name__(void)

{
  ::FString::FString(&UE::Geometry::Spline::TSplineValueTypeTraits<int>::Name,L"Int32");
  atexit(`dynamic_atexit_destructor_for_'UE::Geometry::Spline::TSplineValueTypeTraits<int>::Name__);
  return;
}

// Name'' @ 1410f26c0

void __cdecl
`dynamic_initializer_for_'UE::Geometry::Spline::TSplineValueTypeTraits<float>::Name__(void)

{
  ::FString::FString(&UE::Geometry::Spline::TSplineValueTypeTraits<float>::Name,L"Float");
  atexit(`dynamic_atexit_destructor_for_'UE::Geometry::Spline::TSplineValueTypeTraits<float>::Name__
        );
  return;
}

// Name'' @ 1410f26f0

void __cdecl
`dynamic_initializer_for_'UE::Geometry::Spline::TSplineValueTypeTraits<double>::Name__(void)

{
  ::FString::FString(&UE::Geometry::Spline::TSplineValueTypeTraits<double>::Name,L"Double");
  atexit(`dynamic_atexit_destructor_for_'UE::Geometry::Spline::TSplineValueTypeTraits<double>::
         Name__);
  return;
}

// Name'' @ 1410f2720

void __cdecl
`dynamic_initializer_for_'UE::Geometry::Spline::TSplineValueTypeTraits<UE::Math::TQuat<double>_>::
Name__(void)

{
  ::FString::FString(&UE::Geometry::Spline::TSplineValueTypeTraits<UE::Math::TQuat<double>_>::Name,
                     L"Quat");
  atexit(`dynamic_atexit_destructor_for_'UE::Geometry::Spline::
         TSplineValueTypeTraits<UE::Math::TQuat<double>_>::Name__);
  return;
}

// Name'' @ 1410f2750

void __cdecl
`dynamic_initializer_for_'UE::Geometry::Spline::TSplineValueTypeTraits<UE::Math::TRotator<double>_>
::Name__(void)

{
  ::FString::FString(&UE::Geometry::Spline::TSplineValueTypeTraits<UE::Math::TRotator<double>_>::
                      Name,L"Rotator");
  atexit(`dynamic_atexit_destructor_for_'UE::Geometry::Spline::
         TSplineValueTypeTraits<UE::Math::TRotator<double>_>::Name__);
  return;
}

// Name'' @ 1410f2780

void __cdecl
`dynamic_initializer_for_'UE::Geometry::Spline::
TSplineValueTypeTraits<UE::Math::TTransform<double>_>::Name__(void)

{
  ::FString::FString(&UE::Geometry::Spline::TSplineValueTypeTraits<UE::Math::TTransform<double>_>::
                      Name,L"Transform");
  atexit(`dynamic_atexit_destructor_for_'UE::Geometry::Spline::
         TSplineValueTypeTraits<UE::Math::TTransform<double>_>::Name__);
  return;
}

// Name'' @ 1410f27b0

void __cdecl
`dynamic_initializer_for_'UE::Geometry::Spline::TSplineValueTypeTraits<UE::Math::TVector2<double>_>
::Name__(void)

{
  ::FString::FString(&UE::Geometry::Spline::TSplineValueTypeTraits<UE::Math::TVector2<double>_>::
                      Name,L"Vector2D");
  atexit(`dynamic_atexit_destructor_for_'UE::Geometry::Spline::
         TSplineValueTypeTraits<UE::Math::TVector2<double>_>::Name__);
  return;
}

// Name'' @ 1410f27e0

void __cdecl
`dynamic_initializer_for_'UE::Geometry::Spline::TSplineValueTypeTraits<UE::Math::TVector4<double>_>
::Name__(void)

{
  ::FString::FString(&UE::Geometry::Spline::TSplineValueTypeTraits<UE::Math::TVector4<double>_>::
                      Name,L"Vector4");
  atexit(`dynamic_atexit_destructor_for_'UE::Geometry::Spline::
         TSplineValueTypeTraits<UE::Math::TVector4<double>_>::Name__);
  return;
}

// Name'' @ 1410f2810

void __cdecl
`dynamic_initializer_for_'UE::Geometry::Spline::TSplineValueTypeTraits<UE::Math::TVector<float>_>::
Name__(void)

{
  ::FString::FString(&UE::Geometry::Spline::TSplineValueTypeTraits<UE::Math::TVector<float>_>::Name,
                     L"Vector3f");
  atexit(`dynamic_atexit_destructor_for_'UE::Geometry::Spline::
         TSplineValueTypeTraits<UE::Math::TVector<float>_>::Name__);
  return;
}

// Name'' @ 1410f2840

void __cdecl
`dynamic_initializer_for_'UE::Geometry::Spline::TSplineValueTypeTraits<UE::Math::TVector<double>_>::
Name__(void)

{
  ::FString::FString(&UE::Geometry::Spline::TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name
                     ,L"Vector");
  atexit(`dynamic_atexit_destructor_for_'UE::Geometry::Spline::
         TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name__);
  return;
}

// Name'' @ 1410f2870

void __cdecl
`dynamic_initializer_for_'UE::Geometry::Spline::TSplineValueTypeTraits<FColor>::Name__(void)

{
  ::FString::FString(&UE::Geometry::Spline::TSplineValueTypeTraits<FColor>::Name,L"Color");
  atexit(`dynamic_atexit_destructor_for_'UE::Geometry::Spline::TSplineValueTypeTraits<FColor>::
         Name__);
  return;
}

// Name'' @ 1410f28a0

void __cdecl
`dynamic_initializer_for_'UE::Geometry::Spline::TSplineValueTypeTraits<FLinearColor>::Name__(void)

{
  ::FString::FString(&UE::Geometry::Spline::TSplineValueTypeTraits<FLinearColor>::Name,
                     L"LinearColor");
  atexit(`dynamic_atexit_destructor_for_'UE::Geometry::Spline::TSplineValueTypeTraits<FLinearColor>
         ::Name__);
  return;
}

// Name'' @ 1410f28d0

void __cdecl
`dynamic_initializer_for_'UE::Geometry::Spline::TSplineValueTypeTraits<FName>::Name__(void)

{
  ::FString::FString(&UE::Geometry::Spline::TSplineValueTypeTraits<FName>::Name,L"Name");
  atexit(`dynamic_atexit_destructor_for_'UE::Geometry::Spline::TSplineValueTypeTraits<FName>::Name__
        );
  return;
}

// Name'' @ 1410f2900

void __cdecl
`dynamic_initializer_for_'UE::Geometry::Spline::TSplineValueTypeTraits<FString>::Name__(void)

{
  ::FString::FString(&UE::Geometry::Spline::TSplineValueTypeTraits<FString>::Name,L"String");
  atexit(`dynamic_atexit_destructor_for_'UE::Geometry::Spline::TSplineValueTypeTraits<FString>::
         Name__);
  return;
}

// Name'' @ 1410f2930

void __cdecl
`dynamic_initializer_for_'UE::Geometry::Spline::TSplineValueTypeTraits<FText>::Name__(void)

{
  ::FString::FString(&UE::Geometry::Spline::TSplineValueTypeTraits<FText>::Name,L"Text");
  atexit(`dynamic_atexit_destructor_for_'UE::Geometry::Spline::TSplineValueTypeTraits<FText>::Name__
        );
  return;
}

// Name'' @ 1410f2960

void __cdecl
`dynamic_initializer_for_'UE::Geometry::Spline::TSplineValueTypeTraits<bool>::Name__(void)

{
  ::FString::FString(&UE::Geometry::Spline::TSplineValueTypeTraits<bool>::Name,L"Bool");
  atexit(`dynamic_atexit_destructor_for_'UE::Geometry::Spline::TSplineValueTypeTraits<bool>::Name__)
  ;
  return;
}

// PositionCurve'' @ 1410f2990

void __cdecl `dynamic_initializer_for_'FSpline::PositionCurve__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSpline::PositionCurve__);
  return;
}

// RotationAttrName'' @ 1410f29b0

void __cdecl `dynamic_initializer_for_'FNewSpline::RotationAttrName__(void)

{
  ::FName::FName(&FNewSpline::RotationAttrName,"Rotation");
  return;
}

// RotationCurve'' @ 1410f29d0

void __cdecl `dynamic_initializer_for_'FSpline::RotationCurve__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSpline::RotationCurve__);
  return;
}

// ScaleAttrName'' @ 1410f29f0

void __cdecl `dynamic_initializer_for_'FNewSpline::ScaleAttrName__(void)

{
  ::FName::FName(&FNewSpline::ScaleAttrName,"Scale");
  return;
}

// ScaleCurve'' @ 1410f2a10

void __cdecl `dynamic_initializer_for_'FSpline::ScaleCurve__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSpline::ScaleCurve__);
  return;
}

// ScopeCount'' @ 1410f2a30

void __cdecl
`dynamic_initializer_for_'`anonymous_namespace'::FScopedCurveTableChange::ScopeCount__(void)

{
  atexit(`dynamic_atexit_destructor_for_'`anonymous_namespace'::FScopedCurveTableChange::
         ScopeCount__);
  return;
}

// ShaderTypeRegistration'' @ 1410f2a50

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl `dynamic_initializer_for_'FCubemapTexturePropertiesPS::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FCubemapTexturePropertiesPS::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FCubemapTexturePropertiesPS::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FCubemapTexturePropertiesPS::ShaderTypeRegistration__);
  return;
}

// ShaderTypeRegistration'' @ 1410f2aa0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl `dynamic_initializer_for_'FCubemapTexturePropertiesVS::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FCubemapTexturePropertiesVS::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FCubemapTexturePropertiesVS::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FCubemapTexturePropertiesVS::ShaderTypeRegistration__);
  return;
}

// ShaderTypeRegistration'' @ 1410f2af0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl `dynamic_initializer_for_'FIESLightProfilePS::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FIESLightProfilePS::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FIESLightProfilePS::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FIESLightProfilePS::ShaderTypeRegistration__);
  return;
}

// StaticResource'' @ 1410f2b40

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

// StaticResource'' @ 1410f2c00

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

// TypeName'' @ 1410f2cc0

void __cdecl
`dynamic_initializer_for_'UE::Geometry::Spline::TSplineInterface<float>::TypeName__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UE::Geometry::Spline::TSplineInterface<float>::TypeName__);
  return;
}

// TypeName'' @ 1410f2ce0

void __cdecl
`dynamic_initializer_for_'UE::Geometry::Spline::TSplineInterface<UE::Math::TQuat<double>_>::
TypeName__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UE::Geometry::Spline::
         TSplineInterface<UE::Math::TQuat<double>_>::TypeName__);
  return;
}

// TypeName'' @ 1410f2d00

void __cdecl
`dynamic_initializer_for_'UE::Geometry::Spline::TSplineInterface<UE::Math::TVector<double>_>::
TypeName__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UE::Geometry::Spline::
         TSplineInterface<UE::Math::TVector<double>_>::TypeName__);
  return;
}

// `dynamic_initializer_for_'AlphaCurveName'' @ 1410f2d20

void __cdecl _dynamic_initializer_for__AlphaCurveName__(void)

{
  FName::FName(&AlphaCurveName,L"A");
  return;
}

// `dynamic_initializer_for_'BlueCurveName'' @ 1410f2d40

void __cdecl _dynamic_initializer_for__BlueCurveName__(void)

{
  FName::FName(&BlueCurveName,L"B");
  return;
}

// `dynamic_initializer_for_'CVarAllowLevelRequestsWhileAsyncLoadingInMatch'' @ 1410f2d60

void __cdecl _dynamic_initializer_for__CVarAllowLevelRequestsWhileAsyncLoadingInMatch__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAllowLevelRequestsWhileAsyncLoadingInMatch,
             L"s.AllowLevelRequestsWhileAsyncLoadingInMatch",
             &GLevelStreamingAllowLevelRequestsWhileAsyncLoadingInMatch,
             L"Enables level streaming requests while async loading (of anything) while the match is already in progress and no loading screen is up."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAllowLevelRequestsWhileAsyncLoadingInMatch__);
  return;
}

// `dynamic_initializer_for_'CVarApproximateTangents'' @ 1410f2db0

void __cdecl UE::Spline::_dynamic_initializer_for__CVarApproximateTangents__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarApproximateTangents,L"Spline.ApproximateTangents",&GApproximateTangents,
             L"True if we should approximate tangents using the central difference formula.",0);
  atexit(_dynamic_atexit_destructor_for__CVarApproximateTangents__);
  return;
}

// `dynamic_initializer_for_'CVarAsyncLoadingTimeLimit'' @ 1410f2e00

void __cdecl _dynamic_initializer_for__CVarAsyncLoadingTimeLimit__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAsyncLoadingTimeLimit,L"s.AsyncLoadingTimeLimit",&GAsyncLoadingTimeLimit,
             L"Maximum amount of time to spend doing asynchronous asset loading (ms per frame).",0);
  atexit(_dynamic_atexit_destructor_for__CVarAsyncLoadingTimeLimit__);
  return;
}

// `dynamic_initializer_for_'CVarAsyncLoadingUseFullTimeLimit'' @ 1410f2e50

void __cdecl _dynamic_initializer_for__CVarAsyncLoadingUseFullTimeLimit__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAsyncLoadingUseFullTimeLimit,L"s.AsyncLoadingUseFullTimeLimit",
             &GAsyncLoadingUseFullTimeLimit,
             L"Whether to use the entire time limit for async asset loading even if blocked on I/O."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAsyncLoadingUseFullTimeLimit__);
  return;
}

// `dynamic_initializer_for_'CVarCompareSubObjectsReplicated'' @ 1410f2ea0

void __cdecl UE::Net::_dynamic_initializer_for__CVarCompareSubObjectsReplicated__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarCompareSubObjectsReplicated,L"net.SubObjects.CompareWithLegacy",
             &GCVarCompareSubObjectsReplicated,
             L"When turned on we will collect the subobjects replicated by the ReplicateSubObjects method and compare them with the ones replicated via the Actor\'s registered list. If a divergence is detected it will trigger an ensure."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarCompareSubObjectsReplicated__);
  return;
}

// `dynamic_initializer_for_'CVarContinuouslyIncrementalGCWhileLevelsPendingPurge'' @ 1410f2ef0

void __cdecl _dynamic_initializer_for__CVarContinuouslyIncrementalGCWhileLevelsPendingPurge__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarContinuouslyIncrementalGCWhileLevelsPendingPurge,
             L"s.ContinuouslyIncrementalGCWhileLevelsPendingPurge",
             &GLevelStreamingContinuouslyIncrementalGCWhileLevelsPendingPurge,
             L"Whether to repeatedly kick off incremental GC when there are levels still waiting to be purged."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarContinuouslyIncrementalGCWhileLevelsPendingPurge__);
  return;
}

// `dynamic_initializer_for_'CVarCurveTableRemoveRedundantKeys'' @ 1410f2f40

void __cdecl _dynamic_initializer_for__CVarCurveTableRemoveRedundantKeys__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarCurveTableRemoveRedundantKeys,L"CurveTable.RemoveRedundantKeys",
             &CVar_CurveTable_RemoveRedundantKeys,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarCurveTableRemoveRedundantKeys__);
  return;
}

// `dynamic_initializer_for_'CVarDelayUnmappedRPCs'' @ 1410f2f90

void __cdecl _dynamic_initializer_for__CVarDelayUnmappedRPCs__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarDelayUnmappedRPCs,L"net.DelayUnmappedRPCs",local_res8,
             L"If true delay received RPCs with unmapped object references until they are received or loaded, if false RPCs will execute immediately with null parameters. This can be used with net.AllowAsyncLoading to avoid null asset parameters during async loads."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDelayUnmappedRPCs__);
  return;
}

// `dynamic_initializer_for_'CVarDetectDeprecatedReplicateSubObjects'' @ 1410f2fe0

void __cdecl UE::Net::_dynamic_initializer_for__CVarDetectDeprecatedReplicateSubObjects__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDetectDeprecatedReplicateSubObjects,
             L"net.SubObjects.DetectDeprecatedReplicatedSubObjects",
             &GCVarDetectDeprecatedReplicateSubObjects,
             L"When turned on, we trigger an ensure if we detect a ReplicateSubObjects() function is still implemented in a class that is using the new SubObject list."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDetectDeprecatedReplicateSubObjects__);
  return;
}

// `dynamic_initializer_for_'CVarDormancyHysteresis'' @ 1410f3030

void __cdecl _dynamic_initializer_for__CVarDormancyHysteresis__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDormancyHysteresis,L"net.DormancyHysteresis",&DormancyHysteresis,
             L"When > 0, represents the time we\'ll wait before letting a channel become fully dormant (in seconds). This can prevent churn when objects are going in and out of dormant more frequently than normal."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDormancyHysteresis__);
  return;
}

// `dynamic_initializer_for_'CVarEnableNetInitialSubObjects'' @ 1410f3080

void __cdecl UE::Net::_dynamic_initializer_for__CVarEnableNetInitialSubObjects__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableNetInitialSubObjects,L"net.EnableNetInitialSubObjects",
             &bEnableNetInitialSubObjects,
             L"Enables new SubObjects to set bNetInitial to true to make sure all replicated properties are replicated."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableNetInitialSubObjects__);
  return;
}

// `dynamic_initializer_for_'CVarFallbackFindNearest'' @ 1410f30d0

void __cdecl UE::Spline::_dynamic_initializer_for__CVarFallbackFindNearest__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarFallbackFindNearest,L"Spline.FallbackFindNearest",&GFallbackFindNearest,
             L"True if we should implement FindNearest and FindNearestOnSegment using an intermediate spline representation. Only applies if Spline.Implementation == 2."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarFallbackFindNearest__);
  return;
}

// `dynamic_initializer_for_'CVarForceGCAfterLevelStreamedOut'' @ 1410f3120

void __cdecl _dynamic_initializer_for__CVarForceGCAfterLevelStreamedOut__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarForceGCAfterLevelStreamedOut,L"s.ForceGCAfterLevelStreamedOut",
             &GLevelStreamingForceGCAfterLevelStreamedOut,
             L"Whether to force a GC after levels are streamed out to instantly reclaim the memory at the expensive of a hitch."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarForceGCAfterLevelStreamedOut__);
  return;
}

// `dynamic_initializer_for_'CVarForceRouteActorInitializeNextFrame'' @ 1410f3170

void __cdecl _dynamic_initializer_for__CVarForceRouteActorInitializeNextFrame__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarForceRouteActorInitializeNextFrame,L"s.ForceRouteActorInitializeNextFrame",
             &GLevelStreamingForceRouteActorInitializeNextFrame,
             L"Whether to force routing actor initialize phase in its own frame.",0);
  atexit(_dynamic_atexit_destructor_for__CVarForceRouteActorInitializeNextFrame__);
  return;
}

// `dynamic_initializer_for_'CVarForceVerifyLevelsGotRemovedByGC'' @ 1410f31c0

void __cdecl _dynamic_initializer_for__CVarForceVerifyLevelsGotRemovedByGC__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarForceVerifyLevelsGotRemovedByGC,L"s.ForceVerifyLevelsGotRemovedByGC",
             &GLevelStreamingForceVerifyLevelsGotRemovedByGC,
             L"Whether to force a verification of objects residing in a GC\'ed level package (ignored in shipping builds)."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarForceVerifyLevelsGotRemovedByGC__);
  return;
}

// `dynamic_initializer_for_'CVarImmediatelyUpdateLegacyCurves'' @ 1410f3210

void __cdecl UE::Spline::_dynamic_initializer_for__CVarImmediatelyUpdateLegacyCurves__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarImmediatelyUpdateLegacyCurves,L"Spline.ImmediatelyUpdateLegacyCurves",
             &GImmediatelyUpdateLegacyCurves,
             L"If true, mutating operations immediately rebuild legacy curves. If false, legacy curves are updated only when requested."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarImmediatelyUpdateLegacyCurves__);
  return;
}

// `dynamic_initializer_for_'CVarLevelStreamingActorsUpdateTimeLimit'' @ 1410f3260

void __cdecl _dynamic_initializer_for__CVarLevelStreamingActorsUpdateTimeLimit__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLevelStreamingActorsUpdateTimeLimit,L"s.LevelStreamingActorsUpdateTimeLimit",
             &GLevelStreamingActorsUpdateTimeLimit,
             L"Maximum allowed time to spend for actor registration steps during level streaming (ms per frame)."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarLevelStreamingActorsUpdateTimeLimit__);
  return;
}

// `dynamic_initializer_for_'CVarLevelStreamingAddPrimitiveGranularity'' @ 1410f32b0

void __cdecl _dynamic_initializer_for__CVarLevelStreamingAddPrimitiveGranularity__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLevelStreamingAddPrimitiveGranularity,L"s.LevelStreamingAddPrimitiveGranularity",
             &GLevelStreamingAddPrimitiveGranularity,
             L"Batching granularity used to add primitives to scene in parallel when registering actor components during level streaming."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarLevelStreamingAddPrimitiveGranularity__);
  return;
}

// `dynamic_initializer_for_'CVarLevelStreamingComponentsRegistrationGranularity'' @ 1410f3300

void __cdecl _dynamic_initializer_for__CVarLevelStreamingComponentsRegistrationGranularity__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLevelStreamingComponentsRegistrationGranularity,
             L"s.LevelStreamingComponentsRegistrationGranularity",
             &GLevelStreamingComponentsRegistrationGranularity,
             L"Batching granularity used to register actor components during level streaming.",0);
  atexit(_dynamic_atexit_destructor_for__CVarLevelStreamingComponentsRegistrationGranularity__);
  return;
}

// `dynamic_initializer_for_'CVarLevelStreamingComponentsUnregistrationGranularity'' @ 1410f3350

void __cdecl _dynamic_initializer_for__CVarLevelStreamingComponentsUnregistrationGranularity__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLevelStreamingComponentsUnregistrationGranularity,
             L"s.LevelStreamingComponentsUnregistrationGranularity",
             &GLevelStreamingComponentsUnregistrationGranularity,
             L"Batching granularity used to unregister actor components during level unstreaming.",0
            );
  atexit(_dynamic_atexit_destructor_for__CVarLevelStreamingComponentsUnregistrationGranularity__);
  return;
}

// `dynamic_initializer_for_'CVarLevelStreamingLowMemoryPendingPurgeCount'' @ 1410f33a0

void __cdecl _dynamic_initializer_for__CVarLevelStreamingLowMemoryPendingPurgeCount__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLevelStreamingLowMemoryPendingPurgeCount,
             L"s.LevelStreamingLowMemoryPendingPurgeCount",
             &GLevelStreamingLowMemoryPendingPurgeCount,
             L"When system is in low memory state, if the number of streaming levels to purge meets or exceeds this value, perform a \'soft\' GC."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarLevelStreamingLowMemoryPendingPurgeCount__);
  return;
}

// `dynamic_initializer_for_'CVarLevelStreamingRouteActorEndPlayForRemoveFromWorldGranularity'' @ 1410f33f0

void __cdecl
_dynamic_initializer_for__CVarLevelStreamingRouteActorEndPlayForRemoveFromWorldGranularity__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLevelStreamingRouteActorEndPlayForRemoveFromWorldGranularity,
             L"s.LevelStreamingRouteActorEndPlayForRemoveFromWorldGranularity",
             &GLevelStreamingRouteActorEndPlayForRemoveFromWorldGranularity,
             L"Batching granularity used to call EndPlay on actors when removing streaming level. If this is zero, we process all actors in one pass."
             ,0);
  atexit(
        _dynamic_atexit_destructor_for__CVarLevelStreamingRouteActorEndPlayForRemoveFromWorldGranularity__
        );
  return;
}

// `dynamic_initializer_for_'CVarLevelStreamingRouteActorInitializationGranularity'' @ 1410f3440

void __cdecl _dynamic_initializer_for__CVarLevelStreamingRouteActorInitializationGranularity__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLevelStreamingRouteActorInitializationGranularity,
             L"s.LevelStreamingRouteActorInitializationGranularity",
             &GLevelStreamingRouteActorInitializationGranularity,
             L"Batching granularity used to initialize actors during level streaming. If this is zero, we process all actors and stages in one pass."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarLevelStreamingRouteActorInitializationGranularity__);
  return;
}

// `dynamic_initializer_for_'CVarLevelStreamingUnregisterComponentsTimeLimit'' @ 1410f3490

void __cdecl _dynamic_initializer_for__CVarLevelStreamingUnregisterComponentsTimeLimit__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLevelStreamingUnregisterComponentsTimeLimit,L"s.UnregisterComponentsTimeLimit",
             &GLevelStreamingUnregisterComponentsTimeLimit,
             L"Maximum allowed time to spend for actor unregistration steps during level streaming (ms per frame). If this is zero then we don\'t timeslice"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarLevelStreamingUnregisterComponentsTimeLimit__);
  return;
}

// `dynamic_initializer_for_'CVarLogAllSubObjectComparisonErrors'' @ 1410f34e0

void __cdecl UE::Net::_dynamic_initializer_for__CVarLogAllSubObjectComparisonErrors__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarLogAllSubObjectComparisonErrors,L"net.SubObjects.LogAllComparisonErrors",
             local_res8,
             L"If enabled log all the errors detected by the CompareWithLegacy cheat. Otherwise only the first ensure triggered gets logged."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarLogAllSubObjectComparisonErrors__);
  return;
}

// `dynamic_initializer_for_'CVarMaxLevelRequestsAtOnceWhileInMatch'' @ 1410f3530

void __cdecl _dynamic_initializer_for__CVarMaxLevelRequestsAtOnceWhileInMatch__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMaxLevelRequestsAtOnceWhileInMatch,L"s.MaxLevelRequestsAtOnceWhileInMatch",
             &GLevelStreamingMaxLevelRequestsAtOnceWhileInMatch,
             L"When we\'re already loading this many levels and actively in match, don\'t allow any more requests until one of those completes.  Set to zero to disable."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarMaxLevelRequestsAtOnceWhileInMatch__);
  return;
}

// `dynamic_initializer_for_'CVarMaxRPCPerNetUpdate'' @ 1410f3580

void __cdecl _dynamic_initializer_for__CVarMaxRPCPerNetUpdate__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 2;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMaxRPCPerNetUpdate,L"net.MaxRPCPerNetUpdate",local_res8,
             L"Maximum number of unreliable multicast RPC calls allowed per net update, additional ones will be dropped"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarMaxRPCPerNetUpdate__);
  return;
}

// `dynamic_initializer_for_'CVarNetInstantReplayProcessQueuedBunchesMillisecondLimit'' @ 1410f35d0

void __cdecl
_dynamic_initializer_for__CVarNetInstantReplayProcessQueuedBunchesMillisecondLimit__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 8;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNetInstantReplayProcessQueuedBunchesMillisecondLimit,
             L"net.InstantReplayProcessQueuedBunchesMillisecondLimit",local_res8,
             L"Time threshold for processing queued bunches during instant replays. If it takes longer than this in a single frame, wait until the next frame to continue processing queued bunches. For unlimited time, set to 0."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNetInstantReplayProcessQueuedBunchesMillisecondLimit__)
  ;
  return;
}

// `dynamic_initializer_for_'CVarNetMaxConstructedPartialBunchSizeBytes'' @ 1410f3620

void __cdecl _dynamic_initializer_for__CVarNetMaxConstructedPartialBunchSizeBytes__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNetMaxConstructedPartialBunchSizeBytes,L"net.MaxConstructedPartialBunchSizeBytes",
             &NetMaxConstructedPartialBunchSizeBytes,
             L"The maximum size allowed for Partial Bunches.",0);
  atexit(_dynamic_atexit_destructor_for__CVarNetMaxConstructedPartialBunchSizeBytes__);
  return;
}

// `dynamic_initializer_for_'CVarNetPartialBunchReliableThreshold'' @ 1410f3670

void __cdecl _dynamic_initializer_for__CVarNetPartialBunchReliableThreshold__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNetPartialBunchReliableThreshold,L"net.PartialBunchReliableThreshold",
             &GCVarNetPartialBunchReliableThreshold,
             L"If a bunch is broken up into this many partial bunches are more, we will send it reliable even if the original bunch was not reliable. Partial bunches are atonmic and must all make it over to be used"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNetPartialBunchReliableThreshold__);
  return;
}

// `dynamic_initializer_for_'CVarNetProcessQueuedBunchesMillisecondLimit'' @ 1410f36c0

void __cdecl _dynamic_initializer_for__CVarNetProcessQueuedBunchesMillisecondLimit__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0x1e;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNetProcessQueuedBunchesMillisecondLimit,
             L"net.ProcessQueuedBunchesMillisecondLimit",local_res8,
             L"Time threshold for processing queued bunches. If it takes longer than this in a single frame, wait until the next frame to continue processing queued bunches. For unlimited time, set to 0."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNetProcessQueuedBunchesMillisecondLimit__);
  return;
}

// `dynamic_initializer_for_'CVarNetPushModelValidateSkipUpdate'' @ 1410f3710

void __cdecl UE::Net::_dynamic_initializer_for__CVarNetPushModelValidateSkipUpdate__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNetPushModelValidateSkipUpdate,L"net.PushModelValidateSkipUpdate",
             &bPushModelValidateSkipUpdate,
             L"If enabled, detect when we thought we could skip an object replication based on push model state, but we sent data anyway."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNetPushModelValidateSkipUpdate__);
  return;
}

// `dynamic_initializer_for_'CVarNetQueuedBunchTimeFailsafeSeconds'' @ 1410f3760

void __cdecl UE::Net::_dynamic_initializer_for__CVarNetQueuedBunchTimeFailsafeSeconds__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNetQueuedBunchTimeFailsafeSeconds,L"net.QueuedBunchTimeFailsafeSeconds",
             &QueuedBunchTimeFailsafeSeconds,
             L"Amount of time in seconds to wait with queued bunches before forcibly processing them all, ignoring the NetDriver\'s HasExceededIncomingBunchFrameProcessingTime."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNetQueuedBunchTimeFailsafeSeconds__);
  return;
}

// `dynamic_initializer_for_'CVarNetRPCDebug'' @ 1410f37b0

void __cdecl _dynamic_initializer_for__CVarNetRPCDebug__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNetRPCDebug,L"net.RPC.Debug",&GNetRPCDebug,
             L"Print all RPC bunches sent over the network\n 0: no print.\n 1: Print bunches as they are sent."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNetRPCDebug__);
  return;
}

// `dynamic_initializer_for_'CVarNetReliableDebug'' @ 1410f3800

void __cdecl _dynamic_initializer_for__CVarNetReliableDebug__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNetReliableDebug,L"net.Reliable.Debug",local_res8,
             L"Print all reliable bunches sent over the network\n 0: no print.\n 1: Print bunches as they are sent.\n 2: Print reliable bunch buffer each net update"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNetReliableDebug__);
  return;
}

// `dynamic_initializer_for_'CVarNetReplicateOnlyBeginPlay'' @ 1410f3850

void __cdecl UE::Net::_dynamic_initializer_for__CVarNetReplicateOnlyBeginPlay__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNetReplicateOnlyBeginPlay,L"net.ReplicateOnlyBeginPlay",
             &bNetReplicateOnlyBeginPlay,
             L"Only allow property replication of actors that had BeginPlay called on them.",0);
  atexit(_dynamic_atexit_destructor_for__CVarNetReplicateOnlyBeginPlay__);
  return;
}

// `dynamic_initializer_for_'CVarNetReplicationDebugProperty'' @ 1410f38a0

void __cdecl _dynamic_initializer_for__CVarNetReplicationDebugProperty__(void)

{
  FString local_18;
  
  FString::FString(&local_18,L"");
  TAutoConsoleVariable<FString>::TAutoConsoleVariable<FString>
            (&CVarNetReplicationDebugProperty,L"net.Replication.DebugProperty",&local_18,
             L"Debugs Replication of property by name, this should be set to the partial name of the property to debug"
             ,0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__CVarNetReplicationDebugProperty__);
  return;
}

// `dynamic_initializer_for_'CVarNetSkipReplicatorForDestructionInfos'' @ 1410f3910

void __cdecl _dynamic_initializer_for__CVarNetSkipReplicatorForDestructionInfos__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNetSkipReplicatorForDestructionInfos,L"net.SkipReplicatorForDestructionInfos",
             &GSkipReplicatorForDestructionInfos,
             L"If enabled, skip creation of object replicator in SetChannelActor when we know there is no content payload and we\'re going to immediately destroy the actor."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNetSkipReplicatorForDestructionInfos__);
  return;
}

// `dynamic_initializer_for_'CVarPriorityAsyncLoadingExtraTime'' @ 1410f3960

void __cdecl _dynamic_initializer_for__CVarPriorityAsyncLoadingExtraTime__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPriorityAsyncLoadingExtraTime,L"s.PriorityAsyncLoadingExtraTime",
             &GPriorityAsyncLoadingExtraTime,
             L"Additional time to spend asynchronous loading during a high priority load.",0);
  atexit(_dynamic_atexit_destructor_for__CVarPriorityAsyncLoadingExtraTime__);
  return;
}

// `dynamic_initializer_for_'CVarPriorityLevelStreamingActorsUpdateExtraTime'' @ 1410f39b0

void __cdecl _dynamic_initializer_for__CVarPriorityLevelStreamingActorsUpdateExtraTime__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPriorityLevelStreamingActorsUpdateExtraTime,
             L"s.PriorityLevelStreamingActorsUpdateExtraTime",
             &GPriorityLevelStreamingActorsUpdateExtraTime,
             L"Additional time to spend on actor registration steps during a high priority load.",0)
  ;
  atexit(_dynamic_atexit_destructor_for__CVarPriorityLevelStreamingActorsUpdateExtraTime__);
  return;
}

// `dynamic_initializer_for_'CVarPushModelSkipUndirtiedFastArrays'' @ 1410f3a00

void __cdecl _dynamic_initializer_for__CVarPushModelSkipUndirtiedFastArrays__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPushModelSkipUndirtiedFastArrays,L"net.PushModelSkipUndirtiedFastArrays",
             &GbPushModelSkipUndirtiedFastArrays,
             L"When true, include fast arrays when skipping objects that we can safely see aren\'t dirty."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarPushModelSkipUndirtiedFastArrays__);
  return;
}

// `dynamic_initializer_for_'CVarPushModelSkipUndirtiedReplicators'' @ 1410f3a50

void __cdecl _dynamic_initializer_for__CVarPushModelSkipUndirtiedReplicators__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPushModelSkipUndirtiedReplicators,L"net.PushModelSkipUndirtiedReplication",
             &GbPushModelSkipUndirtiedReplicators,
             L"When true, skip replicating any objects that we can safely see aren\'t dirty.",0);
  atexit(_dynamic_atexit_destructor_for__CVarPushModelSkipUndirtiedReplicators__);
  return;
}

// `dynamic_initializer_for_'CVarQueueRpcsForTransactions'' @ 1410f3aa0

void __cdecl _dynamic_initializer_for__CVarQueueRpcsForTransactions__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarQueueRpcsForTransactions,L"net.QueueRpcsForTransactions",local_res8,
             L"When set to 1, any transactional connection will queue RPCs and execute them in transactions allowing for rescheduling"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarQueueRpcsForTransactions__);
  return;
}

// `dynamic_initializer_for_'CVarQueuedBunchTimeoutSeconds'' @ 1410f3af0

void __cdecl UE::Net::_dynamic_initializer_for__CVarQueuedBunchTimeoutSeconds__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarQueuedBunchTimeoutSeconds,L"net.QueuedBunchTimeoutSeconds",
             &QueuedBunchTimeoutSeconds,
             L"Time in seconds to wait for queued bunches on a channel to flush before logging a warning."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarQueuedBunchTimeoutSeconds__);
  return;
}

// `dynamic_initializer_for_'CVarSkipDestroyNetStartupActorsOnChannelCloseDueToLevelUnloaded'' @ 1410f3b40

void __cdecl
UE::Net::_dynamic_initializer_for__CVarSkipDestroyNetStartupActorsOnChannelCloseDueToLevelUnloaded__
          (void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSkipDestroyNetStartupActorsOnChannelCloseDueToLevelUnloaded,
             L"net.SkipDestroyNetStartupActorsOnChannelCloseDueToLevelUnloaded",
             &bSkipDestroyNetStartupActorsOnChannelCloseDueToLevelUnloaded,
             L"Controls if Actor that is a NetStartUpActor assosciated with the channel is destroyed or not when we receive a channel close with ECloseReason::LevelUnloaded."
             ,0);
  atexit(
        _dynamic_atexit_destructor_for__CVarSkipDestroyNetStartupActorsOnChannelCloseDueToLevelUnloaded__
        );
  return;
}

// `dynamic_initializer_for_'CVarSplineImplementation'' @ 1410f3b90

void __cdecl UE::Spline::_dynamic_initializer_for__CVarSplineImplementation__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSplineImplementation,L"Spline.Implementation",&GImplementation,
             L"0) Not Implemented - 1) Legacy Implementation - 2) New Implementation",4);
  atexit(_dynamic_atexit_destructor_for__CVarSplineImplementation__);
  return;
}

// `dynamic_initializer_for_'CVarSupportsFastArrayDelta'' @ 1410f3be0

void __cdecl _dynamic_initializer_for__CVarSupportsFastArrayDelta__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSupportsFastArrayDelta,L"net.SupportFastArrayDelta",&GSupportsFastArrayDelta,
             L"Whether or not Fast Array Struct Delta Serialization is enabled.",0);
  atexit(_dynamic_atexit_destructor_for__CVarSupportsFastArrayDelta__);
  return;
}

// `dynamic_initializer_for_'CVarUseBackgroundLevelStreaming'' @ 1410f3c30

void __cdecl _dynamic_initializer_for__CVarUseBackgroundLevelStreaming__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUseBackgroundLevelStreaming,L"s.UseBackgroundLevelStreaming",
             &GUseBackgroundLevelStreaming,
             L"Whether to allow background level streaming. If this is 0, all level loading will block the game thread until it completes."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarUseBackgroundLevelStreaming__);
  return;
}

// `dynamic_initializer_for_'CVarUseLegacyPositionEvaluation'' @ 1410f3c80

void __cdecl UE::Spline::_dynamic_initializer_for__CVarUseLegacyPositionEvaluation__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUseLegacyPositionEvaluation,L"Spline.UseLegacyPositionEvaluation",
             &GUseLegacyPositionEvaluation,
             L"If true, evaluating the position channel always routes through an interp curve.",0);
  atexit(_dynamic_atexit_destructor_for__CVarUseLegacyPositionEvaluation__);
  return;
}

// `dynamic_initializer_for_'CVarUseLegacyRotationEvaluation'' @ 1410f3cd0

void __cdecl UE::Spline::_dynamic_initializer_for__CVarUseLegacyRotationEvaluation__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUseLegacyRotationEvaluation,L"Spline.UseLegacyRotationEvaluation",
             &GUseLegacyRotationEvaluation,
             L"If true, evaluating the rotation channel always routes through an interp curve.",0);
  atexit(_dynamic_atexit_destructor_for__CVarUseLegacyRotationEvaluation__);
  return;
}

// `dynamic_initializer_for_'CVarUseLegacyScaleEvaluation'' @ 1410f3d20

void __cdecl UE::Spline::_dynamic_initializer_for__CVarUseLegacyScaleEvaluation__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUseLegacyScaleEvaluation,L"Spline.UseLegacyScaleEvaluation",
             &GUseLegacyScaleEvaluation,
             L"If true, evaluating the scale channel always routes through an interp curve.",0);
  atexit(_dynamic_atexit_destructor_for__CVarUseLegacyScaleEvaluation__);
  return;
}

// `dynamic_initializer_for_'CVarUseUnifiedTimeBudgetForStreaming'' @ 1410f3d70

void __cdecl _dynamic_initializer_for__CVarUseUnifiedTimeBudgetForStreaming__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUseUnifiedTimeBudgetForStreaming,L"s.UseUnifiedTimeBudgetForStreaming",
             &GUseUnifiedTimeBudgetForStreaming,
             L"Whether to use unified time budgets and logic for async loading and level streaming.\nIf 0 (current default), cvars like s.AsyncLoadingTimeLimit and s.LevelStreamingActorsUpdateTimeLimit will separately control each phase and can be modified by game-specific code.\nIf 1, the time budgets are added together in GetUnifiedTimeBudgetForStreaming, and asset streaming will run immediately before level streaming with a shared budget."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarUseUnifiedTimeBudgetForStreaming__);
  return;
}

// `dynamic_initializer_for_'CVarValidateRotScale'' @ 1410f3dc0

void __cdecl UE::Spline::_dynamic_initializer_for__CVarValidateRotScale__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarValidateRotScale,L"Spline.ValidateRotScale",&GValidateRotScale,
             L"True if we should validate rotation and scale attributes when structurally modifying the spline."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarValidateRotScale__);
  return;
}

// `dynamic_initializer_for_'DeleteDormantActorCommand'' @ 1410f3e10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__DeleteDormantActorCommand__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = DeleteDormantActor;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x98))
                     (IConsoleManager::Singleton,L"net.DeleteDormantActor",
                      L"Lists open actor channels",&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&DeleteDormantActorCommand,pIVar5);
  DeleteDormantActorCommand._0_8_ = &___7FAutoConsoleCommandWithWorld__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(_dynamic_atexit_destructor_for__DeleteDormantActorCommand__);
  return;
}

// `dynamic_initializer_for_'DormantActorCommand'' @ 1410f3fb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__DormantActorCommand__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = DebugNetGUIDs;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x98))
                     (IConsoleManager::Singleton,L"net.ListNetGUIDs",L"Lists NetGUIDs for actors",
                      &local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&DormantActorCommand,pIVar5);
  DormantActorCommand._0_8_ = &___7FAutoConsoleCommandWithWorld__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(_dynamic_atexit_destructor_for__DormantActorCommand__);
  return;
}

// `dynamic_initializer_for_'Dummy_FNetControlMessage_Abort'' @ 1410f4150

void __cdecl _dynamic_initializer_for__Dummy_FNetControlMessage_Abort__(void)

{
  wchar_t **ppwVar1;
  longlong lVar2;
  
  if (!FNetControlMessageInfo::bInitialized) {
    lVar2 = 0x20;
    ppwVar1 = FNetControlMessageInfo::Names;
    do {
      *ppwVar1 = L"";
      ppwVar1[1] = L"";
      ppwVar1[2] = L"";
      ppwVar1[3] = L"";
      ppwVar1[4] = L"";
      ppwVar1[5] = L"";
      ppwVar1[6] = L"";
      ppwVar1[7] = L"";
      lVar2 = lVar2 + -1;
      ppwVar1 = ppwVar1 + 8;
    } while (lVar2 != 0);
    FNetControlMessageInfo::bInitialized = true;
  }
  FNetControlMessageInfo::Names[0xd] = L"Abort";
  return;
}

// `dynamic_initializer_for_'Dummy_FNetControlMessage_ActorChannelFailure'' @ 1410f41c0

void __cdecl _dynamic_initializer_for__Dummy_FNetControlMessage_ActorChannelFailure__(void)

{
  wchar_t **ppwVar1;
  longlong lVar2;
  
  if (!FNetControlMessageInfo::bInitialized) {
    lVar2 = 0x20;
    ppwVar1 = FNetControlMessageInfo::Names;
    do {
      *ppwVar1 = L"";
      ppwVar1[1] = L"";
      ppwVar1[2] = L"";
      ppwVar1[3] = L"";
      ppwVar1[4] = L"";
      ppwVar1[5] = L"";
      ppwVar1[6] = L"";
      ppwVar1[7] = L"";
      lVar2 = lVar2 + -1;
      ppwVar1 = ppwVar1 + 8;
    } while (lVar2 != 0);
    FNetControlMessageInfo::bInitialized = true;
  }
  FNetControlMessageInfo::Names[0x10] = L"ActorChannelFailure";
  return;
}

// `dynamic_initializer_for_'Dummy_FNetControlMessage_BeaconAssignGUID'' @ 1410f4230

void __cdecl _dynamic_initializer_for__Dummy_FNetControlMessage_BeaconAssignGUID__(void)

{
  wchar_t **ppwVar1;
  longlong lVar2;
  
  if (!FNetControlMessageInfo::bInitialized) {
    lVar2 = 0x20;
    ppwVar1 = FNetControlMessageInfo::Names;
    do {
      *ppwVar1 = L"";
      ppwVar1[1] = L"";
      ppwVar1[2] = L"";
      ppwVar1[3] = L"";
      ppwVar1[4] = L"";
      ppwVar1[5] = L"";
      ppwVar1[6] = L"";
      ppwVar1[7] = L"";
      lVar2 = lVar2 + -1;
      ppwVar1 = ppwVar1 + 8;
    } while (lVar2 != 0);
    FNetControlMessageInfo::bInitialized = true;
  }
  FNetControlMessageInfo::Names[0x1b] = L"BeaconAssignGUID";
  return;
}

// `dynamic_initializer_for_'Dummy_FNetControlMessage_BeaconJoin'' @ 1410f42a0

void __cdecl _dynamic_initializer_for__Dummy_FNetControlMessage_BeaconJoin__(void)

{
  wchar_t **ppwVar1;
  longlong lVar2;
  
  if (!FNetControlMessageInfo::bInitialized) {
    lVar2 = 0x20;
    ppwVar1 = FNetControlMessageInfo::Names;
    do {
      *ppwVar1 = L"";
      ppwVar1[1] = L"";
      ppwVar1[2] = L"";
      ppwVar1[3] = L"";
      ppwVar1[4] = L"";
      ppwVar1[5] = L"";
      ppwVar1[6] = L"";
      ppwVar1[7] = L"";
      lVar2 = lVar2 + -1;
      ppwVar1 = ppwVar1 + 8;
    } while (lVar2 != 0);
    FNetControlMessageInfo::bInitialized = true;
  }
  FNetControlMessageInfo::Names[0x1a] = L"BeaconJoin";
  return;
}

// `dynamic_initializer_for_'Dummy_FNetControlMessage_BeaconNetGUIDAck'' @ 1410f4310

void __cdecl _dynamic_initializer_for__Dummy_FNetControlMessage_BeaconNetGUIDAck__(void)

{
  wchar_t **ppwVar1;
  longlong lVar2;
  
  if (!FNetControlMessageInfo::bInitialized) {
    lVar2 = 0x20;
    ppwVar1 = FNetControlMessageInfo::Names;
    do {
      *ppwVar1 = L"";
      ppwVar1[1] = L"";
      ppwVar1[2] = L"";
      ppwVar1[3] = L"";
      ppwVar1[4] = L"";
      ppwVar1[5] = L"";
      ppwVar1[6] = L"";
      ppwVar1[7] = L"";
      lVar2 = lVar2 + -1;
      ppwVar1 = ppwVar1 + 8;
    } while (lVar2 != 0);
    FNetControlMessageInfo::bInitialized = true;
  }
  FNetControlMessageInfo::Names[0x1c] = L"BeaconNetGUIDAck";
  return;
}

// `dynamic_initializer_for_'Dummy_FNetControlMessage_BeaconWelcome'' @ 1410f4380

void __cdecl _dynamic_initializer_for__Dummy_FNetControlMessage_BeaconWelcome__(void)

{
  wchar_t **ppwVar1;
  longlong lVar2;
  
  if (!FNetControlMessageInfo::bInitialized) {
    lVar2 = 0x20;
    ppwVar1 = FNetControlMessageInfo::Names;
    do {
      *ppwVar1 = L"";
      ppwVar1[1] = L"";
      ppwVar1[2] = L"";
      ppwVar1[3] = L"";
      ppwVar1[4] = L"";
      ppwVar1[5] = L"";
      ppwVar1[6] = L"";
      ppwVar1[7] = L"";
      lVar2 = lVar2 + -1;
      ppwVar1 = ppwVar1 + 8;
    } while (lVar2 != 0);
    FNetControlMessageInfo::bInitialized = true;
  }
  FNetControlMessageInfo::Names[0x19] = L"BeaconWelcome";
  return;
}

// `dynamic_initializer_for_'Dummy_FNetControlMessage_Challenge'' @ 1410f43f0

void __cdecl _dynamic_initializer_for__Dummy_FNetControlMessage_Challenge__(void)

{
  wchar_t **ppwVar1;
  longlong lVar2;
  
  if (!FNetControlMessageInfo::bInitialized) {
    lVar2 = 0x20;
    ppwVar1 = FNetControlMessageInfo::Names;
    do {
      *ppwVar1 = L"";
      ppwVar1[1] = L"";
      ppwVar1[2] = L"";
      ppwVar1[3] = L"";
      ppwVar1[4] = L"";
      ppwVar1[5] = L"";
      ppwVar1[6] = L"";
      ppwVar1[7] = L"";
      lVar2 = lVar2 + -1;
      ppwVar1 = ppwVar1 + 8;
    } while (lVar2 != 0);
    FNetControlMessageInfo::bInitialized = true;
  }
  FNetControlMessageInfo::Names[3] = L"Challenge";
  return;
}

// `dynamic_initializer_for_'Dummy_FNetControlMessage_CloseReason'' @ 1410f4460

void __cdecl _dynamic_initializer_for__Dummy_FNetControlMessage_CloseReason__(void)

{
  wchar_t **ppwVar1;
  longlong lVar2;
  
  if (!FNetControlMessageInfo::bInitialized) {
    lVar2 = 0x20;
    ppwVar1 = FNetControlMessageInfo::Names;
    do {
      *ppwVar1 = L"";
      ppwVar1[1] = L"";
      ppwVar1[2] = L"";
      ppwVar1[3] = L"";
      ppwVar1[4] = L"";
      ppwVar1[5] = L"";
      ppwVar1[6] = L"";
      ppwVar1[7] = L"";
      lVar2 = lVar2 + -1;
      ppwVar1 = ppwVar1 + 8;
    } while (lVar2 != 0);
    FNetControlMessageInfo::bInitialized = true;
  }
  FNetControlMessageInfo::Names[0x17] = L"CloseReason";
  return;
}

// `dynamic_initializer_for_'Dummy_FNetControlMessage_DebugText'' @ 1410f44d0

void __cdecl _dynamic_initializer_for__Dummy_FNetControlMessage_DebugText__(void)

{
  wchar_t **ppwVar1;
  longlong lVar2;
  
  if (!FNetControlMessageInfo::bInitialized) {
    lVar2 = 0x20;
    ppwVar1 = FNetControlMessageInfo::Names;
    do {
      *ppwVar1 = L"";
      ppwVar1[1] = L"";
      ppwVar1[2] = L"";
      ppwVar1[3] = L"";
      ppwVar1[4] = L"";
      ppwVar1[5] = L"";
      ppwVar1[6] = L"";
      ppwVar1[7] = L"";
      lVar2 = lVar2 + -1;
      ppwVar1 = ppwVar1 + 8;
    } while (lVar2 != 0);
    FNetControlMessageInfo::bInitialized = true;
  }
  FNetControlMessageInfo::Names[0x11] = L"DebugText";
  return;
}

// `dynamic_initializer_for_'Dummy_FNetControlMessage_DestructionInfo'' @ 1410f4540

void __cdecl _dynamic_initializer_for__Dummy_FNetControlMessage_DestructionInfo__(void)

{
  wchar_t **ppwVar1;
  longlong lVar2;
  
  if (!FNetControlMessageInfo::bInitialized) {
    lVar2 = 0x20;
    ppwVar1 = FNetControlMessageInfo::Names;
    do {
      *ppwVar1 = L"";
      ppwVar1[1] = L"";
      ppwVar1[2] = L"";
      ppwVar1[3] = L"";
      ppwVar1[4] = L"";
      ppwVar1[5] = L"";
      ppwVar1[6] = L"";
      ppwVar1[7] = L"";
      lVar2 = lVar2 + -1;
      ppwVar1 = ppwVar1 + 8;
    } while (lVar2 != 0);
    FNetControlMessageInfo::bInitialized = true;
  }
  FNetControlMessageInfo::Names[0x16] = L"DestructionInfo";
  return;
}

// `dynamic_initializer_for_'Dummy_FNetControlMessage_EncryptionAck'' @ 1410f45b0

void __cdecl _dynamic_initializer_for__Dummy_FNetControlMessage_EncryptionAck__(void)

{
  wchar_t **ppwVar1;
  longlong lVar2;
  
  if (!FNetControlMessageInfo::bInitialized) {
    lVar2 = 0x20;
    ppwVar1 = FNetControlMessageInfo::Names;
    do {
      *ppwVar1 = L"";
      ppwVar1[1] = L"";
      ppwVar1[2] = L"";
      ppwVar1[3] = L"";
      ppwVar1[4] = L"";
      ppwVar1[5] = L"";
      ppwVar1[6] = L"";
      ppwVar1[7] = L"";
      lVar2 = lVar2 + -1;
      ppwVar1 = ppwVar1 + 8;
    } while (lVar2 != 0);
    FNetControlMessageInfo::bInitialized = true;
  }
  FNetControlMessageInfo::Names[0x15] = L"EncryptionAck";
  return;
}

// `dynamic_initializer_for_'Dummy_FNetControlMessage_Failure'' @ 1410f4620

void __cdecl _dynamic_initializer_for__Dummy_FNetControlMessage_Failure__(void)

{
  wchar_t **ppwVar1;
  longlong lVar2;
  
  if (!FNetControlMessageInfo::bInitialized) {
    lVar2 = 0x20;
    ppwVar1 = FNetControlMessageInfo::Names;
    do {
      *ppwVar1 = L"";
      ppwVar1[1] = L"";
      ppwVar1[2] = L"";
      ppwVar1[3] = L"";
      ppwVar1[4] = L"";
      ppwVar1[5] = L"";
      ppwVar1[6] = L"";
      ppwVar1[7] = L"";
      lVar2 = lVar2 + -1;
      ppwVar1 = ppwVar1 + 8;
    } while (lVar2 != 0);
    FNetControlMessageInfo::bInitialized = true;
  }
  FNetControlMessageInfo::Names[6] = L"Failure";
  return;
}

// `dynamic_initializer_for_'Dummy_FNetControlMessage_GameSpecific'' @ 1410f4690

void __cdecl _dynamic_initializer_for__Dummy_FNetControlMessage_GameSpecific__(void)

{
  wchar_t **ppwVar1;
  longlong lVar2;
  
  if (!FNetControlMessageInfo::bInitialized) {
    lVar2 = 0x20;
    ppwVar1 = FNetControlMessageInfo::Names;
    do {
      *ppwVar1 = L"";
      ppwVar1[1] = L"";
      ppwVar1[2] = L"";
      ppwVar1[3] = L"";
      ppwVar1[4] = L"";
      ppwVar1[5] = L"";
      ppwVar1[6] = L"";
      ppwVar1[7] = L"";
      lVar2 = lVar2 + -1;
      ppwVar1 = ppwVar1 + 8;
    } while (lVar2 != 0);
    FNetControlMessageInfo::bInitialized = true;
  }
  FNetControlMessageInfo::Names[0x14] = L"GameSpecific";
  return;
}

// `dynamic_initializer_for_'Dummy_FNetControlMessage_Hello'' @ 1410f4700

void __cdecl _dynamic_initializer_for__Dummy_FNetControlMessage_Hello__(void)

{
  wchar_t **ppwVar1;
  longlong lVar2;
  
  if (!FNetControlMessageInfo::bInitialized) {
    lVar2 = 0x20;
    ppwVar1 = FNetControlMessageInfo::Names;
    do {
      *ppwVar1 = L"";
      ppwVar1[1] = L"";
      ppwVar1[2] = L"";
      ppwVar1[3] = L"";
      ppwVar1[4] = L"";
      ppwVar1[5] = L"";
      ppwVar1[6] = L"";
      ppwVar1[7] = L"";
      lVar2 = lVar2 + -1;
      ppwVar1 = ppwVar1 + 8;
    } while (lVar2 != 0);
    FNetControlMessageInfo::bInitialized = true;
  }
  FNetControlMessageInfo::Names[0] = L"Hello";
  return;
}

// `dynamic_initializer_for_'Dummy_FNetControlMessage_IrisNetRefHandleError'' @ 1410f4770

void __cdecl _dynamic_initializer_for__Dummy_FNetControlMessage_IrisNetRefHandleError__(void)

{
  wchar_t **ppwVar1;
  longlong lVar2;
  
  if (!FNetControlMessageInfo::bInitialized) {
    lVar2 = 0x20;
    ppwVar1 = FNetControlMessageInfo::Names;
    do {
      *ppwVar1 = L"";
      ppwVar1[1] = L"";
      ppwVar1[2] = L"";
      ppwVar1[3] = L"";
      ppwVar1[4] = L"";
      ppwVar1[5] = L"";
      ppwVar1[6] = L"";
      ppwVar1[7] = L"";
      lVar2 = lVar2 + -1;
      ppwVar1 = ppwVar1 + 8;
    } while (lVar2 != 0);
    FNetControlMessageInfo::bInitialized = true;
  }
  FNetControlMessageInfo::Names[0x1e] = L"IrisNetRefHandleError";
  return;
}

// `dynamic_initializer_for_'Dummy_FNetControlMessage_IrisProtocolMismatch'' @ 1410f47e0

void __cdecl _dynamic_initializer_for__Dummy_FNetControlMessage_IrisProtocolMismatch__(void)

{
  wchar_t **ppwVar1;
  longlong lVar2;
  
  if (!FNetControlMessageInfo::bInitialized) {
    lVar2 = 0x20;
    ppwVar1 = FNetControlMessageInfo::Names;
    do {
      *ppwVar1 = L"";
      ppwVar1[1] = L"";
      ppwVar1[2] = L"";
      ppwVar1[3] = L"";
      ppwVar1[4] = L"";
      ppwVar1[5] = L"";
      ppwVar1[6] = L"";
      ppwVar1[7] = L"";
      lVar2 = lVar2 + -1;
      ppwVar1 = ppwVar1 + 8;
    } while (lVar2 != 0);
    FNetControlMessageInfo::bInitialized = true;
  }
  FNetControlMessageInfo::Names[0x1d] = L"IrisProtocolMismatch";
  return;
}

// `dynamic_initializer_for_'Dummy_FNetControlMessage_Join'' @ 1410f4850

void __cdecl _dynamic_initializer_for__Dummy_FNetControlMessage_Join__(void)

{
  wchar_t **ppwVar1;
  longlong lVar2;
  
  if (!FNetControlMessageInfo::bInitialized) {
    lVar2 = 0x20;
    ppwVar1 = FNetControlMessageInfo::Names;
    do {
      *ppwVar1 = L"";
      ppwVar1[1] = L"";
      ppwVar1[2] = L"";
      ppwVar1[3] = L"";
      ppwVar1[4] = L"";
      ppwVar1[5] = L"";
      ppwVar1[6] = L"";
      ppwVar1[7] = L"";
      lVar2 = lVar2 + -1;
      ppwVar1 = ppwVar1 + 8;
    } while (lVar2 != 0);
    FNetControlMessageInfo::bInitialized = true;
  }
  FNetControlMessageInfo::Names[9] = L"Join";
  return;
}

// `dynamic_initializer_for_'Dummy_FNetControlMessage_JoinSplit'' @ 1410f48c0

void __cdecl _dynamic_initializer_for__Dummy_FNetControlMessage_JoinSplit__(void)

{
  wchar_t **ppwVar1;
  longlong lVar2;
  
  if (!FNetControlMessageInfo::bInitialized) {
    lVar2 = 0x20;
    ppwVar1 = FNetControlMessageInfo::Names;
    do {
      *ppwVar1 = L"";
      ppwVar1[1] = L"";
      ppwVar1[2] = L"";
      ppwVar1[3] = L"";
      ppwVar1[4] = L"";
      ppwVar1[5] = L"";
      ppwVar1[6] = L"";
      ppwVar1[7] = L"";
      lVar2 = lVar2 + -1;
      ppwVar1 = ppwVar1 + 8;
    } while (lVar2 != 0);
    FNetControlMessageInfo::bInitialized = true;
  }
  FNetControlMessageInfo::Names[10] = L"JoinSplit";
  return;
}

// `dynamic_initializer_for_'Dummy_FNetControlMessage_Login'' @ 1410f4930

void __cdecl _dynamic_initializer_for__Dummy_FNetControlMessage_Login__(void)

{
  wchar_t **ppwVar1;
  longlong lVar2;
  
  if (!FNetControlMessageInfo::bInitialized) {
    lVar2 = 0x20;
    ppwVar1 = FNetControlMessageInfo::Names;
    do {
      *ppwVar1 = L"";
      ppwVar1[1] = L"";
      ppwVar1[2] = L"";
      ppwVar1[3] = L"";
      ppwVar1[4] = L"";
      ppwVar1[5] = L"";
      ppwVar1[6] = L"";
      ppwVar1[7] = L"";
      lVar2 = lVar2 + -1;
      ppwVar1 = ppwVar1 + 8;
    } while (lVar2 != 0);
    FNetControlMessageInfo::bInitialized = true;
  }
  FNetControlMessageInfo::Names[5] = L"Login";
  return;
}

// `dynamic_initializer_for_'Dummy_FNetControlMessage_NetGUIDAssign'' @ 1410f49a0

void __cdecl _dynamic_initializer_for__Dummy_FNetControlMessage_NetGUIDAssign__(void)

{
  wchar_t **ppwVar1;
  longlong lVar2;
  
  if (!FNetControlMessageInfo::bInitialized) {
    lVar2 = 0x20;
    ppwVar1 = FNetControlMessageInfo::Names;
    do {
      *ppwVar1 = L"";
      ppwVar1[1] = L"";
      ppwVar1[2] = L"";
      ppwVar1[3] = L"";
      ppwVar1[4] = L"";
      ppwVar1[5] = L"";
      ppwVar1[6] = L"";
      ppwVar1[7] = L"";
      lVar2 = lVar2 + -1;
      ppwVar1 = ppwVar1 + 8;
    } while (lVar2 != 0);
    FNetControlMessageInfo::bInitialized = true;
  }
  FNetControlMessageInfo::Names[0x12] = L"NetGUIDAssign";
  return;
}

// `dynamic_initializer_for_'Dummy_FNetControlMessage_NetPing'' @ 1410f4a10

void __cdecl _dynamic_initializer_for__Dummy_FNetControlMessage_NetPing__(void)

{
  wchar_t **ppwVar1;
  longlong lVar2;
  
  if (!FNetControlMessageInfo::bInitialized) {
    lVar2 = 0x20;
    ppwVar1 = FNetControlMessageInfo::Names;
    do {
      *ppwVar1 = L"";
      ppwVar1[1] = L"";
      ppwVar1[2] = L"";
      ppwVar1[3] = L"";
      ppwVar1[4] = L"";
      ppwVar1[5] = L"";
      ppwVar1[6] = L"";
      ppwVar1[7] = L"";
      lVar2 = lVar2 + -1;
      ppwVar1 = ppwVar1 + 8;
    } while (lVar2 != 0);
    FNetControlMessageInfo::bInitialized = true;
  }
  FNetControlMessageInfo::Names[0x18] = L"NetPing";
  return;
}

// `dynamic_initializer_for_'Dummy_FNetControlMessage_Netspeed'' @ 1410f4a80

void __cdecl _dynamic_initializer_for__Dummy_FNetControlMessage_Netspeed__(void)

{
  wchar_t **ppwVar1;
  longlong lVar2;
  
  if (!FNetControlMessageInfo::bInitialized) {
    lVar2 = 0x20;
    ppwVar1 = FNetControlMessageInfo::Names;
    do {
      *ppwVar1 = L"";
      ppwVar1[1] = L"";
      ppwVar1[2] = L"";
      ppwVar1[3] = L"";
      ppwVar1[4] = L"";
      ppwVar1[5] = L"";
      ppwVar1[6] = L"";
      ppwVar1[7] = L"";
      lVar2 = lVar2 + -1;
      ppwVar1 = ppwVar1 + 8;
    } while (lVar2 != 0);
    FNetControlMessageInfo::bInitialized = true;
  }
  FNetControlMessageInfo::Names[4] = L"Netspeed";
  return;
}

// `dynamic_initializer_for_'Dummy_FNetControlMessage_PCSwap'' @ 1410f4af0

void __cdecl _dynamic_initializer_for__Dummy_FNetControlMessage_PCSwap__(void)

{
  wchar_t **ppwVar1;
  longlong lVar2;
  
  if (!FNetControlMessageInfo::bInitialized) {
    lVar2 = 0x20;
    ppwVar1 = FNetControlMessageInfo::Names;
    do {
      *ppwVar1 = L"";
      ppwVar1[1] = L"";
      ppwVar1[2] = L"";
      ppwVar1[3] = L"";
      ppwVar1[4] = L"";
      ppwVar1[5] = L"";
      ppwVar1[6] = L"";
      ppwVar1[7] = L"";
      lVar2 = lVar2 + -1;
      ppwVar1 = ppwVar1 + 8;
    } while (lVar2 != 0);
    FNetControlMessageInfo::bInitialized = true;
  }
  FNetControlMessageInfo::Names[0xf] = L"PCSwap";
  return;
}

// `dynamic_initializer_for_'Dummy_FNetControlMessage_SecurityViolation'' @ 1410f4b60

void __cdecl _dynamic_initializer_for__Dummy_FNetControlMessage_SecurityViolation__(void)

{
  wchar_t **ppwVar1;
  longlong lVar2;
  
  if (!FNetControlMessageInfo::bInitialized) {
    lVar2 = 0x20;
    ppwVar1 = FNetControlMessageInfo::Names;
    do {
      *ppwVar1 = L"";
      ppwVar1[1] = L"";
      ppwVar1[2] = L"";
      ppwVar1[3] = L"";
      ppwVar1[4] = L"";
      ppwVar1[5] = L"";
      ppwVar1[6] = L"";
      ppwVar1[7] = L"";
      lVar2 = lVar2 + -1;
      ppwVar1 = ppwVar1 + 8;
    } while (lVar2 != 0);
    FNetControlMessageInfo::bInitialized = true;
  }
  FNetControlMessageInfo::Names[0x13] = L"SecurityViolation";
  return;
}

// `dynamic_initializer_for_'Dummy_FNetControlMessage_Skip'' @ 1410f4bd0

void __cdecl _dynamic_initializer_for__Dummy_FNetControlMessage_Skip__(void)

{
  wchar_t **ppwVar1;
  longlong lVar2;
  
  if (!FNetControlMessageInfo::bInitialized) {
    lVar2 = 0x20;
    ppwVar1 = FNetControlMessageInfo::Names;
    do {
      *ppwVar1 = L"";
      ppwVar1[1] = L"";
      ppwVar1[2] = L"";
      ppwVar1[3] = L"";
      ppwVar1[4] = L"";
      ppwVar1[5] = L"";
      ppwVar1[6] = L"";
      ppwVar1[7] = L"";
      lVar2 = lVar2 + -1;
      ppwVar1 = ppwVar1 + 8;
    } while (lVar2 != 0);
    FNetControlMessageInfo::bInitialized = true;
  }
  FNetControlMessageInfo::Names[0xc] = L"Skip";
  return;
}

// `dynamic_initializer_for_'Dummy_FNetControlMessage_Upgrade'' @ 1410f4c40

void __cdecl _dynamic_initializer_for__Dummy_FNetControlMessage_Upgrade__(void)

{
  wchar_t **ppwVar1;
  longlong lVar2;
  
  if (!FNetControlMessageInfo::bInitialized) {
    lVar2 = 0x20;
    ppwVar1 = FNetControlMessageInfo::Names;
    do {
      *ppwVar1 = L"";
      ppwVar1[1] = L"";
      ppwVar1[2] = L"";
      ppwVar1[3] = L"";
      ppwVar1[4] = L"";
      ppwVar1[5] = L"";
      ppwVar1[6] = L"";
      ppwVar1[7] = L"";
      lVar2 = lVar2 + -1;
      ppwVar1 = ppwVar1 + 8;
    } while (lVar2 != 0);
    FNetControlMessageInfo::bInitialized = true;
  }
  FNetControlMessageInfo::Names[2] = L"Upgrade";
  return;
}

// `dynamic_initializer_for_'Dummy_FNetControlMessage_Welcome'' @ 1410f4cb0

void __cdecl _dynamic_initializer_for__Dummy_FNetControlMessage_Welcome__(void)

{
  wchar_t **ppwVar1;
  longlong lVar2;
  
  if (!FNetControlMessageInfo::bInitialized) {
    lVar2 = 0x20;
    ppwVar1 = FNetControlMessageInfo::Names;
    do {
      *ppwVar1 = L"";
      ppwVar1[1] = L"";
      ppwVar1[2] = L"";
      ppwVar1[3] = L"";
      ppwVar1[4] = L"";
      ppwVar1[5] = L"";
      ppwVar1[6] = L"";
      ppwVar1[7] = L"";
      lVar2 = lVar2 + -1;
      ppwVar1 = ppwVar1 + 8;
    } while (lVar2 != 0);
    FNetControlMessageInfo::bInitialized = true;
  }
  FNetControlMessageInfo::Names[1] = L"Welcome";
  return;
}

// `dynamic_initializer_for_'FindNetGUIDCommand'' @ 1410f4d20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__FindNetGUIDCommand__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = FindNetGUID;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x90))
                     (IConsoleManager::Singleton,L"net.Packagemap.FindNetGUID",
                      L"Looks up object that was assigned a given NetGUID",&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&FindNetGUIDCommand,pIVar5);
  FindNetGUIDCommand._0_8_ = &___7FAutoConsoleCommandWithWorldAndArgs__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(_dynamic_atexit_destructor_for__FindNetGUIDCommand__);
  return;
}

// `dynamic_initializer_for_'GreenCurveName'' @ 1410f4ec0

void __cdecl _dynamic_initializer_for__GreenCurveName__(void)

{
  FName::FName(&GreenCurveName,L"G");
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_NetChannel'' @ 1410f4ee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_NetChannel__(void)

{
  FName FVar1;
  FName FVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_NetworkingSummaryLLM> FVar4;
  FThreadSafeStaticStat<FStat_STAT_NetChannelLLM> FVar5;
  FName local_res8;
  FName local_res10;
  undefined8 local_res18;
  FName local_res20;
  
  FVar4 = StatPtr_STAT_NetworkingSummaryLLM;
  if (StatPtr_STAT_NetworkingSummaryLLM ==
      (FThreadSafeStaticStat<FStat_STAT_NetworkingSummaryLLM>)0x0) {
    pFVar3 = FName::FName(&local_res8,"STAT_NetworkingSummaryLLM");
    FVar4 = (FThreadSafeStaticStat<FStat_STAT_NetworkingSummaryLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetworkingSummaryLLM,*pFVar3,
                       L"Networking","STATGROUP_LLM","STATCAT_Advanced",L"LLM Summary",true,false,
                       ST_int64,false,false,MCR_PhysicalLLM);
  }
  local_res8.ComparisonIndex.Value = (uint)*(undefined8 *)FVar4;
  local_res8.Number = (uint)((ulonglong)*(undefined8 *)FVar4 >> 0x20);
  FVar5 = StatPtr_STAT_NetChannelLLM;
  if (StatPtr_STAT_NetChannelLLM == (FThreadSafeStaticStat<FStat_STAT_NetChannelLLM>)0x0) {
    pFVar3 = FName::FName(&local_res10,"STAT_NetChannelLLM");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_NetChannelLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetChannelLLM,*pFVar3,
                       L"NetChannel","STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,
                       ST_int64,false,false,MCR_PhysicalLLM);
  }
  local_res10.ComparisonIndex.Value = (uint)*(undefined8 *)FVar5;
  local_res10.Number = (uint)((ulonglong)*(undefined8 *)FVar5 >> 0x20);
  pFVar3 = FName::FName(&local_res20,L"Networking");
  local_res18 = 0;
  FVar1.Number = local_res8.Number;
  FVar1.ComparisonIndex.Value = local_res8.ComparisonIndex.Value;
  FVar2.Number = local_res10.Number;
  FVar2.ComparisonIndex.Value = local_res10.ComparisonIndex.Value;
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_NetChannel,L"NetChannel",(FName)0x0,*pFVar3,FVar2,FVar1,None);
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_NetObjReplicator'' @ 1410f5050

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_NetObjReplicator__(void)

{
  FName FVar1;
  FName FVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_NetworkingSummaryLLM> FVar4;
  FThreadSafeStaticStat<FStat_STAT_NetObjReplicatorLLM> FVar5;
  FName local_res8;
  FName local_res10;
  undefined8 local_res18;
  FName local_res20;
  
  FVar4 = StatPtr_STAT_NetworkingSummaryLLM;
  if (StatPtr_STAT_NetworkingSummaryLLM ==
      (FThreadSafeStaticStat<FStat_STAT_NetworkingSummaryLLM>)0x0) {
    pFVar3 = FName::FName(&local_res8,"STAT_NetworkingSummaryLLM");
    FVar4 = (FThreadSafeStaticStat<FStat_STAT_NetworkingSummaryLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetworkingSummaryLLM,*pFVar3,
                       L"Networking","STATGROUP_LLM","STATCAT_Advanced",L"LLM Summary",true,false,
                       ST_int64,false,false,MCR_PhysicalLLM);
  }
  local_res8.ComparisonIndex.Value = (uint)*(undefined8 *)FVar4;
  local_res8.Number = (uint)((ulonglong)*(undefined8 *)FVar4 >> 0x20);
  FVar5 = StatPtr_STAT_NetObjReplicatorLLM;
  if (StatPtr_STAT_NetObjReplicatorLLM == (FThreadSafeStaticStat<FStat_STAT_NetObjReplicatorLLM>)0x0
     ) {
    pFVar3 = FName::FName(&local_res10,"STAT_NetObjReplicatorLLM");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_NetObjReplicatorLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetObjReplicatorLLM,*pFVar3,
                       L"NetObjReplicator","STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,
                       false,ST_int64,false,false,MCR_PhysicalLLM);
  }
  local_res10.ComparisonIndex.Value = (uint)*(undefined8 *)FVar5;
  local_res10.Number = (uint)((ulonglong)*(undefined8 *)FVar5 >> 0x20);
  pFVar3 = FName::FName(&local_res20,L"Networking");
  local_res18 = 0;
  FVar1.Number = local_res8.Number;
  FVar1.ComparisonIndex.Value = local_res8.ComparisonIndex.Value;
  FVar2.Number = local_res10.Number;
  FVar2.ComparisonIndex.Value = local_res10.ComparisonIndex.Value;
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_NetObjReplicator,L"NetObjReplicator",(FName)0x0,*pFVar3,FVar2,FVar1,
             None);
  return;
}

// `dynamic_initializer_for_'LegacySubObjectsCollected'' @ 1410f51c0

void __cdecl DataChannelInternal::_dynamic_initializer_for__LegacySubObjectsCollected__(void)

{
  atexit(_dynamic_atexit_destructor_for__LegacySubObjectsCollected__);
  return;
}

// `dynamic_initializer_for_'ListOpenActorChannelsCommand'' @ 1410f51e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__ListOpenActorChannelsCommand__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = ListOpenActorChannels;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x98))
                     (IConsoleManager::Singleton,L"net.ListActorChannels",
                      L"Lists open actor channels",&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&ListOpenActorChannelsCommand,pIVar5)
  ;
  ListOpenActorChannelsCommand._0_8_ = &___7FAutoConsoleCommandWithWorld__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(_dynamic_atexit_destructor_for__ListOpenActorChannelsCommand__);
  return;
}

// `dynamic_initializer_for_'LogCoreSettings'' @ 1410f5380

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogCoreSettings__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogCoreSettings,L"LogCoreSettings",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogCoreSettings__);
  return;
}

// `dynamic_initializer_for_'LogCurveTable'' @ 1410f53c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogCurveTable__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogCurveTable,L"LogCurveTable",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogCurveTable__);
  return;
}

// `dynamic_initializer_for_'LogNet'' @ 1410f5400

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogNet__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogNet,L"LogNet",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogNet__);
  return;
}

// `dynamic_initializer_for_'LogNetDormancy'' @ 1410f5440

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogNetDormancy__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogNetDormancy,L"LogNetDormancy",Warning,All);
  atexit(_dynamic_atexit_destructor_for__LogNetDormancy__);
  return;
}

// `dynamic_initializer_for_'LogNetLifecycle'' @ 1410f5480

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogNetLifecycle__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogNetLifecycle,L"LogNetLifecycle",Warning,All);
  atexit(_dynamic_atexit_destructor_for__LogNetLifecycle__);
  return;
}

// `dynamic_initializer_for_'LogNetPartialBunch'' @ 1410f54c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogNetPartialBunch__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogNetPartialBunch,L"LogNetPartialBunch",Warning,All);
  atexit(_dynamic_atexit_destructor_for__LogNetPartialBunch__);
  return;
}

// `dynamic_initializer_for_'LogNetPlayerMovement'' @ 1410f5500

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogNetPlayerMovement__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogNetPlayerMovement,L"LogNetPlayerMovement",Warning,All);
  atexit(_dynamic_atexit_destructor_for__LogNetPlayerMovement__);
  return;
}

// `dynamic_initializer_for_'LogNetSubObject'' @ 1410f5540

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogNetSubObject__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogNetSubObject,L"LogNetSubObject",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogNetSubObject__);
  return;
}

// `dynamic_initializer_for_'LogNetTraffic'' @ 1410f5580

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogNetTraffic__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogNetTraffic,L"LogNetTraffic",Warning,All);
  atexit(_dynamic_atexit_destructor_for__LogNetTraffic__);
  return;
}

// `dynamic_initializer_for_'LogRep'' @ 1410f55c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogRep__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogRep,L"LogRep",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogRep__);
  return;
}

// `dynamic_initializer_for_'LogRepTraffic'' @ 1410f5600

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogRepTraffic__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogRepTraffic,L"LogRepTraffic",Warning,All);
  atexit(_dynamic_atexit_destructor_for__LogRepTraffic__);
  return;
}

// `dynamic_initializer_for_'LogSecurity'' @ 1410f5640

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogSecurity__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogSecurity,L"LogSecurity",Warning,All);
  atexit(_dynamic_atexit_destructor_for__LogSecurity__);
  return;
}

// `dynamic_initializer_for_'LogSpline'' @ 1410f5680

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::Geometry::Spline::_dynamic_initializer_for__LogSpline__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogSpline,L"LogSpline",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogSpline__);
  return;
}

// `dynamic_initializer_for_'ModuleName'' @ 1410f56c0

void __cdecl AssetRegistryConstants::_dynamic_initializer_for__ModuleName__(void)

{
  ::FName::FName(&ModuleName,"AssetRegistry");
  return;
}

// `dynamic_initializer_for_'NAME_GradientBias'' @ 1410f56e0

void __cdecl _dynamic_initializer_for__NAME_GradientBias__(void)

{
  FName::FName(&NAME_GradientBias,L"GradientBias");
  return;
}

// `dynamic_initializer_for_'NAME_GradientCount'' @ 1410f5700

void __cdecl _dynamic_initializer_for__NAME_GradientCount__(void)

{
  FName::FName(&NAME_GradientCount,L"GradientCount");
  return;
}

// `dynamic_initializer_for_'NAME_GradientScale'' @ 1410f5720

void __cdecl _dynamic_initializer_for__NAME_GradientScale__(void)

{
  FName::FName(&NAME_GradientScale,L"GradientScale");
  return;
}

// `dynamic_initializer_for_'NAME_GradientTexture'' @ 1410f5740

void __cdecl _dynamic_initializer_for__NAME_GradientTexture__(void)

{
  FName::FName(&NAME_GradientTexture,L"GradientTexture");
  return;
}

// `dynamic_initializer_for_'RedCurveName'' @ 1410f5760

void __cdecl _dynamic_initializer_for__RedCurveName__(void)

{
  FName::FName(&RedCurveName,L"R");
  return;
}

// `dynamic_initializer_for_'ReplicatedSubObjectsTracker'' @ 1410f5780

void __cdecl DataChannelInternal::_dynamic_initializer_for__ReplicatedSubObjectsTracker__(void)

{
  atexit(_dynamic_atexit_destructor_for__ReplicatedSubObjectsTracker__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_CurveTableRowHandleEval'' @ 1410f57a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_CurveTableRowHandleEval__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_CurveTableRowHandleEval ==
      (FThreadSafeStaticStat<FStat_STAT_CurveTableRowHandleEval>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_CurveTableRowHandleEval");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CurveTableRowHandleEval,*pFVar1,
               L"CurveTableRowHandle Eval","STATGROUP_Engine","STATCAT_Advanced",L"Engine",true,true
               ,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NetChannelLLM'' @ 1410f5830

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NetChannelLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NetChannelLLM == (FThreadSafeStaticStat<FStat_STAT_NetChannelLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NetChannelLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetChannelLLM,*pFVar1,L"NetChannel",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NetObjReplicatorLLM'' @ 1410f58c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NetObjReplicatorLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NetObjReplicatorLLM == (FThreadSafeStaticStat<FStat_STAT_NetObjReplicatorLLM>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_NetObjReplicatorLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetObjReplicatorLLM,*pFVar1,
               L"NetObjReplicator","STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,
               ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NetReceiveRPC'' @ 1410f5950

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NetReceiveRPC__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NetReceiveRPC == (FThreadSafeStaticStat<FStat_STAT_NetReceiveRPC>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NetReceiveRPC");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetReceiveRPC,*pFVar1,L"ReceiveRPC",
               "STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,ST_int64,true,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NetReplicateCustomDeltaPropTime'' @ 1410f59e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NetReplicateCustomDeltaPropTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NetReplicateCustomDeltaPropTime ==
      (FThreadSafeStaticStat<FStat_STAT_NetReplicateCustomDeltaPropTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NetReplicateCustomDeltaPropTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetReplicateCustomDeltaPropTime,*pFVar1,
               L"Custom Delta Property Rep Time","STATGROUP_Game","STATCAT_Advanced",L"Game",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_Stat_ActorChanCleanUp'' @ 1410f5a70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_Stat_ActorChanCleanUp__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_Stat_ActorChanCleanUp == (FThreadSafeStaticStat<FStat_Stat_ActorChanCleanUp>)0x0) {
    pFVar1 = FName::FName(local_res8,"Stat_ActorChanCleanUp");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_Stat_ActorChanCleanUp,*pFVar1,
               L"ActorChan_CleanUp","STATGROUP_Net","STATCAT_Advanced",L"Net",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_Stat_ActorChanFindOrCreateRep'' @ 1410f5b00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_Stat_ActorChanFindOrCreateRep__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_Stat_ActorChanFindOrCreateRep ==
      (FThreadSafeStaticStat<FStat_Stat_ActorChanFindOrCreateRep>)0x0) {
    pFVar1 = FName::FName(local_res8,"Stat_ActorChanFindOrCreateRep");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_Stat_ActorChanFindOrCreateRep,*pFVar1,
               L"ActorChan_FindOrCreateRep","STATGROUP_Net","STATCAT_Advanced",L"Net",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_Stat_ChannelReceivedRawBunch'' @ 1410f5b90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_Stat_ChannelReceivedRawBunch__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_Stat_ChannelReceivedRawBunch ==
      (FThreadSafeStaticStat<FStat_Stat_ChannelReceivedRawBunch>)0x0) {
    pFVar1 = FName::FName(local_res8,"Stat_ChannelReceivedRawBunch");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_Stat_ChannelReceivedRawBunch,*pFVar1,
               L"Channel ReceivedRawBunch","STATGROUP_Net","STATCAT_Advanced",L"Net",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_Stat_PostNetInit'' @ 1410f5c20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_Stat_PostNetInit__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_Stat_PostNetInit == (FThreadSafeStaticStat<FStat_Stat_PostNetInit>)0x0) {
    pFVar1 = FName::FName(local_res8,"Stat_PostNetInit");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_Stat_PostNetInit,*pFVar1,
               L"ActorChan_PostNetInit","STATGROUP_Net","STATCAT_Advanced",L"Net",true,true,ST_int64
               ,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'TestObjectRefSerializeCommand'' @ 1410f5cb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__TestObjectRefSerializeCommand__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = TestObjectRefSerialize;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x90))
                     (IConsoleManager::Singleton,L"net.TestObjRefSerialize",
                      L"Attempts to replicate an object reference to all clients",&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject
            ((FAutoConsoleObject *)&TestObjectRefSerializeCommand,pIVar5);
  TestObjectRefSerializeCommand._0_8_ = &___7FAutoConsoleCommandWithWorldAndArgs__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(_dynamic_atexit_destructor_for__TestObjectRefSerializeCommand__);
  return;
}

// `dynamic_initializer_for_'ToRichCurveMap'' @ 1410f5e50

void __cdecl _dynamic_initializer_for__ToRichCurveMap__(void)

{
  atexit(_dynamic_atexit_destructor_for__ToRichCurveMap__);
  return;
}

// `dynamic_initializer_for_'XCurveName'' @ 1410f5e70

void __cdecl _dynamic_initializer_for__XCurveName__(void)

{
  FName::FName(&XCurveName,L"X");
  return;
}

// `dynamic_initializer_for_'YCurveName'' @ 1410f5e90

void __cdecl _dynamic_initializer_for__YCurveName__(void)

{
  FName::FName(&YCurveName,L"Y");
  return;
}

// `dynamic_initializer_for_'ZCurveName'' @ 1410f5eb0

void __cdecl _dynamic_initializer_for__ZCurveName__(void)

{
  FName::FName(&ZCurveName,L"Z");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveBase_h__Script_Engine_4125435611'' @ 1410f5ed0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveBase_h__Script_Engine_4125435611__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveBase_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveEdPresetCurve_h__Script_Engine_1615098568'' @ 1410f5f10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveEdPresetCurve_h__Script_Engine_1615098568__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveEdPresetCurve_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h__Script_Engine_2290009080'' @ 1410f5f50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h__Script_Engine_2290009080__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h__Script_Engine_1331551821'' @ 1410f5fa0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h__Script_Engine_1331551821__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColor_h__Script_Engine_2050887614'' @ 1410f5ff0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColor_h__Script_Engine_2050887614__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColor_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColor_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h__Script_Engine_424394699'' @ 1410f6040

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h__Script_Engine_424394699__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_IndexedCurve_h__Script_Engine_397503856'' @ 1410f6090

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_IndexedCurve_h__Script_Engine_397503856__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_IndexedCurve_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_IntegralCurve_h__Script_Engine_2637577102'' @ 1410f60d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_IntegralCurve_h__Script_Engine_2637577102__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_IntegralCurve_h__Script_Engine_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_KeyHandle_h__Script_Engine_825602310'' @ 1410f6110

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_KeyHandle_h__Script_Engine_825602310__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_KeyHandle_h__Script_Engine_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_NameCurve_h__Script_Engine_1719969145'' @ 1410f6150

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_NameCurve_h__Script_Engine_1719969145__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_NameCurve_h__Script_Engine_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_RealCurve_h__Script_Engine_1319114675'' @ 1410f6190

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_RealCurve_h__Script_Engine_1319114675__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_RealCurve_h__Script_Engine_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_RealCurve_h__Script_Engine_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_RichCurve_h__Script_Engine_2749393764'' @ 1410f61e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_RichCurve_h__Script_Engine_2749393764__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_RichCurve_h__Script_Engine_Statics
             ::ScriptStructInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_RichCurve_h__Script_Engine_Statics
             ::EnumInfo,4);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_SimpleCurve_h__Script_Engine_393933560'' @ 1410f6230

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_SimpleCurve_h__Script_Engine_393933560__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_SimpleCurve_h__Script_Engine_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_Spline_h__Script_Engine_2879168237'' @ 1410f6270

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_Spline_h__Script_Engine_2879168237__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_Spline_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_StringCurve_h__Script_Engine_2537266883'' @ 1410f62b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_StringCurve_h__Script_Engine_2537266883__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_StringCurve_h__Script_Engine_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h__Script_Engine_256824476'' @ 1410f62f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h__Script_Engine_256824476__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h__Script_Engine_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h__Script_Engine_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h__Script_Engine_734417621'' @ 1410f6340

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h__Script_Engine_734417621__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h__Script_Engine_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CullDistanceVolume_h__Script_Engine_213833923'' @ 1410f6380

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CullDistanceVolume_h__Script_Engine_213833923__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CullDistanceVolume_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CullDistanceVolume_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h__Script_Engine_2625103167'' @ 1410f63d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h__Script_Engine_2625103167__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h__Script_Engine_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h__Script_Engine_168074290'' @ 1410f6420

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h__Script_Engine_168074290__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h__Script_Engine_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_DamageType_h__Script_Engine_3172923690'' @ 1410f6460

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_DamageType_h__Script_Engine_3172923690__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_DamageType_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// NewProp_ReturnValue_SetBit @ 147a0b980

void __cdecl
Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition @ 147a0b990

UFunction * __cdecl Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UCurveVector_NoRegister @ 147a0ba80

UClass * __cdecl Z_Construct_UClass_UCurveVector_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCurveVector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CurveVector",
               &Z_Registration_Info_UClass_UCurveVector.InnerSingleton,
               UCurveVector::StaticRegisterNativesUCurveVector,0x1b0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCurveVector>,
               InternalVTableHelperCtorCaller<UCurveVector>,local_res8,UCurveBase::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCurveVector.InnerSingleton;
}

// Z_Construct_UClass_UCurveVector @ 147a0bd10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCurveVector(void)

{
  if (Z_Registration_Info_UClass_UCurveVector.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCurveVector.OuterSingleton,
               &Z_Construct_UClass_UCurveVector_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCurveVector.OuterSingleton;
}

// NewStructOps @ 147a0bd50

void * __cdecl Z_Construct_UScriptStruct_FRuntimeVectorCurve_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x188;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRuntimeVectorCurve,&UE::CoreUObject::Private::Construct<FRuntimeVectorCurve>,&UE::CoreUObject::Private::ConstructForTests<FRuntimeVectorCurve>,&UE::CoreUObject::Private::Destruct<FRuntimeVectorCurve>,&UE::CoreUObject::Private::Copy<FRuntimeVectorCurve>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UCurveVector_GetVectorValue @ 147a0bd90

UFunction * __cdecl Z_Construct_UFunction_UCurveVector_GetVectorValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCurveVector_GetVectorValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UDamageType @ 147a0bf10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDamageType(void)

{
  if (Z_Registration_Info_UClass_UDamageType.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDamageType.OuterSingleton,
               &Z_Construct_UClass_UDamageType_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDamageType.OuterSingleton;
}

// NewProp_bCausedByWorld_SetBit @ 147a0bf50

void __cdecl Z_Construct_UClass_UDamageType_Statics::NewProp_bCausedByWorld_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x28) = *(uint *)((longlong)param_1 + 0x28) | 1;
  return;
}

// NewProp_bScaleMomentumByMass_SetBit @ 147a0bf60

void __cdecl
Z_Construct_UClass_UDamageType_Statics::NewProp_bScaleMomentumByMass_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x28) = *(uint *)((longlong)param_1 + 0x28) | 2;
  return;
}

// NewProp_bRadialDamageVelChange_SetBit @ 147a0bf70

void __cdecl
Z_Construct_UClass_UDamageType_Statics::NewProp_bRadialDamageVelChange_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x28) = *(uint *)((longlong)param_1 + 0x28) | 4;
  return;
}

// Z_Construct_UScriptStruct_FIndexedCurve @ 147a0bf80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIndexedCurve(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIndexedCurve.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIndexedCurve.InnerSingleton,
               &Z_Construct_UScriptStruct_FIndexedCurve_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIndexedCurve.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIndexedCurve.InnerSingleton;
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

// Z_Construct_UScriptStruct_FKeyHandleMap @ 147a0c000

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FKeyHandleMap(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FKeyHandleMap.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FKeyHandleMap.InnerSingleton,
               &Z_Construct_UScriptStruct_FKeyHandleMap_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FKeyHandleMap.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FKeyHandleMap.InnerSingleton;
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

// NewStructOps @ 147a0c080

void * __cdecl Z_Construct_UScriptStruct_FIndexedCurve_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIndexedCurve,&UE::CoreUObject::Private::Construct<FIndexedCurve>,&UE::CoreUObject::Private::ConstructForTests<FIndexedCurve>,&UE::CoreUObject::Private::Destruct<FIndexedCurve>,&UE::CoreUObject::Private::Copy<FIndexedCurve>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UDataAsset_NoRegister @ 147a0c0c0

UClass * __cdecl Z_Construct_UClass_UDataAsset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DataAsset",&Z_Registration_Info_UClass_UDataAsset.InnerSingleton,
               UDataAsset::StaticRegisterNativesUDataAsset,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UDataAsset>,
               InternalVTableHelperCtorCaller<UDataAsset>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataAsset.InnerSingleton;
}

// Z_Construct_UClass_UCurveBase @ 147a0c680

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCurveBase(void)

{
  if (Z_Registration_Info_UClass_UCurveBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCurveBase.OuterSingleton,
               &Z_Construct_UClass_UCurveBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCurveBase.OuterSingleton;
}

// Z_Construct_UFunction_UCurveBase_GetTimeRange @ 147a0c750

UFunction * __cdecl Z_Construct_UFunction_UCurveBase_GetTimeRange(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UCurveBase_GetTimeRange_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UCurveFloat_NoRegister @ 147a0c790

UClass * __cdecl Z_Construct_UClass_UCurveFloat_NoRegister(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UCurveFloat.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CurveFloat",
               &Z_Registration_Info_UClass_UCurveFloat.InnerSingleton,
               UCurveFloat::StaticRegisterNativesUCurveFloat,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCurveFloat>,
               InternalVTableHelperCtorCaller<UCurveFloat>,aFStackX_8,UCurveBase::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCurveFloat.InnerSingleton;
}

// Z_Construct_UFunction_UCurveBase_GetValueRange @ 147a0c820

UFunction * __cdecl Z_Construct_UFunction_UCurveBase_GetValueRange(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UCurveBase_GetValueRange_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 147a0c950

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FRichCurveKey_(__cdecl*)(FCompressedRichCurve::TConstantValueNumKeys,unsigned_char_const_*,int),0,0>
::_scalar_deleting_destructor_
          (TFunction_OwnedObject<FRichCurveKey_(__cdecl*)(FCompressedRichCurve::TConstantValueNumKeys,unsigned_char_const_*,int),0,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AUFRichCurveKey__TTConstantValueNumKeys_FCompressedRichCurve__PEBEH_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// Z_Construct_UScriptStruct_FIntegralKey @ 147a0cb10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIntegralKey(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIntegralKey.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIntegralKey.InnerSingleton,
               &Z_Construct_UScriptStruct_FIntegralKey_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIntegralKey.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIntegralKey.InnerSingleton;
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

// NewStructOps @ 147a0ccc0

void * __cdecl Z_Construct_UScriptStruct_FIntegralKey_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIntegralKey,&UE::CoreUObject::Private::Construct<FIntegralKey>,&UE::CoreUObject::Private::ConstructForTests<FIntegralKey>,&UE::CoreUObject::Private::Destruct<FIntegralKey>,&UE::CoreUObject::Private::Copy<FIntegralKey>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bUseDefaultValueBeforeFirstKey_SetBit @ 147a0ce10

void __cdecl
Z_Construct_UScriptStruct_FIntegralCurve_Statics::NewProp_bUseDefaultValueBeforeFirstKey_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x7c) = 1;
  return;
}

// NewStructOps @ 147a0ce20

void * __cdecl Z_Construct_UScriptStruct_FIntegralCurve_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIntegralCurve,&UE::CoreUObject::Private::Construct<FIntegralCurve>,&UE::CoreUObject::Private::ConstructForTests<FIntegralCurve>,&UE::CoreUObject::Private::Destruct<FIntegralCurve>,&UE::CoreUObject::Private::Copy<FIntegralCurve>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 147a0d4c0

void * __cdecl Z_Construct_UScriptStruct_FKeyHandleMap_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FKeyHandleMap,&UE::CoreUObject::Private::Construct<FKeyHandleMap>,&UE::CoreUObject::Private::ConstructForTests<FKeyHandleMap>,&UE::CoreUObject::Private::Destruct<FKeyHandleMap>,&UE::CoreUObject::Private::SerializeArchive<FKeyHandleMap>,&UE::CoreUObject::Private::Identical<FKeyHandleMap>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FSimpleCurveKey @ 147a0d540

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSimpleCurveKey(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSimpleCurveKey.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSimpleCurveKey.InnerSingleton,
               &Z_Construct_UScriptStruct_FSimpleCurveKey_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSimpleCurveKey.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSimpleCurveKey.InnerSingleton;
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

// NewStructOps @ 147a0d5c0

void * __cdecl Z_Construct_UScriptStruct_FKeyHandleLookupTable_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x88;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FKeyHandleLookupTable,&UE::CoreUObject::Private::Construct<FKeyHandleLookupTable>,&UE::CoreUObject::Private::ConstructForTests<FKeyHandleLookupTable>,&UE::CoreUObject::Private::Destruct<FKeyHandleLookupTable>,&UE::CoreUObject::Private::SerializeArchive<FKeyHandleLookupTable>,&UE::CoreUObject::Private::Copy<FKeyHandleLookupTable>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 147a0d600

void * __cdecl Z_Construct_UScriptStruct_FSimpleCurveKey_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSimpleCurveKey,&UE::CoreUObject::Private::Construct<FSimpleCurveKey>,&UE::CoreUObject::Private::ConstructForTests<FSimpleCurveKey>,&UE::CoreUObject::Private::SerializeArchive<FSimpleCurveKey>,&UE::CoreUObject::Private::Identical<FSimpleCurveKey>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 147a0d640

void * __cdecl Z_Construct_UScriptStruct_FSimpleCurve_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x88;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSimpleCurve,&UE::CoreUObject::Private::Construct<FSimpleCurve>,&UE::CoreUObject::Private::ConstructForTests<FSimpleCurve>,&UE::CoreUObject::Private::Destruct<FSimpleCurve>,&UE::CoreUObject::Private::Copy<FSimpleCurve>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UCurveTable @ 147a0e370

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCurveTable(void)

{
  if (Z_Registration_Info_UClass_UCurveTable.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCurveTable.OuterSingleton,
               &Z_Construct_UClass_UCurveTable_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCurveTable.OuterSingleton;
}

// ECurveTableMode_StaticEnum @ 147a0e3b0

UEnum * __cdecl ECurveTableMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECurveTableMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ECurveTableMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ECurveTableMode,(UObject *)pUVar1,L"ECurveTableMode"
                      );
  }
  return Z_Registration_Info_UEnum_ECurveTableMode.OuterSingleton;
}

// Z_Construct_UClass_UDataDrivenConsoleVariableSettings @ 147a0e3f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDataDrivenConsoleVariableSettings(void)

{
  if (Z_Registration_Info_UClass_UDataDrivenConsoleVariableSettings.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDataDrivenConsoleVariableSettings.OuterSingleton,
               &Z_Construct_UClass_UDataDrivenConsoleVariableSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDataDrivenConsoleVariableSettings.OuterSingleton;
}

// Z_Construct_UClass_UDataDrivenCVarEngineSubsystem @ 147a0e430

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDataDrivenCVarEngineSubsystem(void)

{
  if (Z_Registration_Info_UClass_UDataDrivenCVarEngineSubsystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDataDrivenCVarEngineSubsystem.OuterSingleton,
               &Z_Construct_UClass_UDataDrivenCVarEngineSubsystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDataDrivenCVarEngineSubsystem.OuterSingleton;
}

// Z_Construct_UEnum_Engine_FDataDrivenCVarType @ 147a0e470

UEnum * __cdecl Z_Construct_UEnum_Engine_FDataDrivenCVarType(void)

{
  if (Z_Registration_Info_UEnum_FDataDrivenCVarType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_FDataDrivenCVarType.InnerSingleton,
               &Z_Construct_UEnum_Engine_FDataDrivenCVarType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_FDataDrivenCVarType.InnerSingleton;
}

// Z_Construct_UDelegateFunction_UDataDrivenCVarEngineSubsystem_OnDataDrivenCVarChanged__DelegateSignature @ 147a0e4b0

UFunction * __cdecl
Z_Construct_UDelegateFunction_UDataDrivenCVarEngineSubsystem_OnDataDrivenCVarChanged__DelegateSignature
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_UDataDrivenCVarEngineSubsystem_OnDataDrivenCVarChanged__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FDataDrivenConsoleVariable @ 147a0e4f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataDrivenConsoleVariable(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataDrivenConsoleVariable.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataDrivenConsoleVariable.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataDrivenConsoleVariable.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataDrivenConsoleVariable.InnerSingleton;
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

// NewStructOps @ 147a0e570

void * __cdecl Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCurveTableRowHandle,&UE::CoreUObject::Private::Construct<FCurveTableRowHandle>,&UE::CoreUObject::Private::ConstructForTests<FCurveTableRowHandle>,&UE::CoreUObject::Private::Destruct<FCurveTableRowHandle>,&UE::CoreUObject::Private::PostSerialize<FCurveTableRowHandle>,&UE::CoreUObject::Private::Copy<FCurveTableRowHandle>,&UE::CoreUObject::Private::GetStructTypeHash<FCurveTableRowHandle>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// FDataDrivenCVarType_StaticEnum @ 147a0e6c0

UEnum * __cdecl FDataDrivenCVarType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_FDataDrivenCVarType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_FDataDrivenCVarType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_FDataDrivenCVarType,(UObject *)pUVar1,
                       L"FDataDrivenCVarType");
  }
  return Z_Registration_Info_UEnum_FDataDrivenCVarType.OuterSingleton;
}

// NewProp_DefaultValueBool_SetBit @ 147a0e700

void __cdecl
Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_DefaultValueBool_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewStructOps @ 147a0e710

void * __cdecl Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataDrivenConsoleVariable,&UE::CoreUObject::Private::Construct<FDataDrivenConsoleVariable>,&UE::CoreUObject::Private::ConstructForTests<FDataDrivenConsoleVariable>,&UE::CoreUObject::Private::Destruct<FDataDrivenConsoleVariable>,&UE::CoreUObject::Private::Copy<FDataDrivenConsoleVariable>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UDEPRECATED_CurveEdPresetCurve @ 147a0e750

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDEPRECATED_CurveEdPresetCurve(void)

{
  if (Z_Registration_Info_UClass_UDEPRECATED_CurveEdPresetCurve.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDEPRECATED_CurveEdPresetCurve.OuterSingleton,
               &Z_Construct_UClass_UDEPRECATED_CurveEdPresetCurve_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_CurveEdPresetCurve.OuterSingleton;
}

// Z_Construct_UClass_ACullDistanceVolume @ 147a0e790

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ACullDistanceVolume(void)

{
  if (Z_Registration_Info_UClass_ACullDistanceVolume.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ACullDistanceVolume.OuterSingleton,
               &Z_Construct_UClass_ACullDistanceVolume_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ACullDistanceVolume.OuterSingleton;
}

// Z_Construct_UScriptStruct_FCullDistanceSizePair @ 147a0e7d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCullDistanceSizePair(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCullDistanceSizePair.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCullDistanceSizePair.InnerSingleton,
               &Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCullDistanceSizePair.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FCullDistanceSizePair.InnerSingleton;
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

// NewStructOps @ 147a0e850

void * __cdecl Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCullDistanceSizePair,&UE::CoreUObject::Private::Construct<FCullDistanceSizePair>,&UE::CoreUObject::Private::ConstructForTests<FCullDistanceSizePair>,&UE::CoreUObject::Private::Destruct<FCullDistanceSizePair>,&UE::CoreUObject::Private::Copy<FCullDistanceSizePair>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FNameCurveKey @ 147a0e890

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNameCurveKey(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNameCurveKey.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNameCurveKey.InnerSingleton,
               &Z_Construct_UScriptStruct_FNameCurveKey_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNameCurveKey.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNameCurveKey.InnerSingleton;
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

// NewStructOps @ 147a0e910

void * __cdecl Z_Construct_UScriptStruct_FNameCurveKey_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNameCurveKey,&UE::CoreUObject::Private::Construct<FNameCurveKey>,&UE::CoreUObject::Private::ConstructForTests<FNameCurveKey>,&UE::CoreUObject::Private::SerializeArchive<FNameCurveKey>,&UE::CoreUObject::Private::Identical<FNameCurveKey>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 147a0e950

void * __cdecl Z_Construct_UScriptStruct_FNameCurve_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x78;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNameCurve,&UE::CoreUObject::Private::Construct<FNameCurve>,&UE::CoreUObject::Private::ConstructForTests<FNameCurve>,&UE::CoreUObject::Private::Destruct<FNameCurve>,&UE::CoreUObject::Private::Copy<FNameCurve>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 147a0e9d0

void * __cdecl Z_Construct_UScriptStruct_FSpline_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSpline,&UE::CoreUObject::Private::Construct<FSpline>,&UE::CoreUObject::Private::ConstructForTests<FSpline>,&UE::CoreUObject::Private::Destruct<FSpline>,&UE::CoreUObject::Private::SerializeArchive<FSpline>,&UE::CoreUObject::Private::Copy<FSpline>,&UE::CoreUObject::Private::Identical<FSpline>,&UE::CoreUObject::Private::ExportTextItem<FSpline>,&UE::CoreUObject::Private::ImportTextItem<FSpline>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bEnabled_SetBit @ 147a0ea10

void __cdecl Z_Construct_UClass_ACullDistanceVolume_Statics::NewProp_bEnabled_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x308) = *(uint *)((longlong)param_1 + 0x308) | 1;
  return;
}

// Z_Construct_UScriptStruct_FStringCurveKey @ 147a0eb20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStringCurveKey(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStringCurveKey.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStringCurveKey.InnerSingleton,
               &Z_Construct_UScriptStruct_FStringCurveKey_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStringCurveKey.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStringCurveKey.InnerSingleton;
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

// NewStructOps @ 147a0eba0

void * __cdecl Z_Construct_UScriptStruct_FStringCurveKey_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStringCurveKey,&UE::CoreUObject::Private::Construct<FStringCurveKey>,&UE::CoreUObject::Private::ConstructForTests<FStringCurveKey>,&UE::CoreUObject::Private::Destruct<FStringCurveKey>,&UE::CoreUObject::Private::SerializeArchive<FStringCurveKey>,&UE::CoreUObject::Private::Identical<FStringCurveKey>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 147a0ec20

void * __cdecl Z_Construct_UScriptStruct_FStringCurve_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x88;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStringCurve,&UE::CoreUObject::Private::Construct<FStringCurve>,&UE::CoreUObject::Private::ConstructForTests<FStringCurve>,&UE::CoreUObject::Private::Destruct<FStringCurve>,&UE::CoreUObject::Private::Copy<FStringCurve>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UEnum_Engine_ERichCurveExtrapolation @ 147a0ec60

UEnum * __cdecl Z_Construct_UEnum_Engine_ERichCurveExtrapolation(void)

{
  if (Z_Registration_Info_UEnum_ERichCurveExtrapolation.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERichCurveExtrapolation.InnerSingleton,
               &Z_Construct_UEnum_Engine_ERichCurveExtrapolation_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERichCurveExtrapolation.InnerSingleton;
}

// Z_Construct_UEnum_Engine_ERichCurveInterpMode @ 147a0eca0

UEnum * __cdecl Z_Construct_UEnum_Engine_ERichCurveInterpMode(void)

{
  if (Z_Registration_Info_UEnum_ERichCurveInterpMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERichCurveInterpMode.InnerSingleton,
               &Z_Construct_UEnum_Engine_ERichCurveInterpMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERichCurveInterpMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FRealCurve @ 147a0ece0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRealCurve(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRealCurve.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRealCurve.InnerSingleton,
               &Z_Construct_UScriptStruct_FRealCurve_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRealCurve.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRealCurve.InnerSingleton;
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

// ERichCurveInterpMode_StaticEnum @ 147a0ed60

UEnum * __cdecl ERichCurveInterpMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERichCurveInterpMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ERichCurveInterpMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ERichCurveInterpMode,(UObject *)pUVar1,
                       L"ERichCurveInterpMode");
  }
  return Z_Registration_Info_UEnum_ERichCurveInterpMode.OuterSingleton;
}

// ERichCurveExtrapolation_StaticEnum @ 147a0eda0

UEnum * __cdecl ERichCurveExtrapolation_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERichCurveExtrapolation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ERichCurveExtrapolation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ERichCurveExtrapolation,(UObject *)pUVar1,
                       L"ERichCurveExtrapolation");
  }
  return Z_Registration_Info_UEnum_ERichCurveExtrapolation.OuterSingleton;
}

// NewStructOps @ 147a0ede0

void * __cdecl Z_Construct_UScriptStruct_FRealCurve_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRealCurve,&UE::CoreUObject::Private::Construct<FRealCurve>,&UE::CoreUObject::Private::ConstructForTests<FRealCurve>,&UE::CoreUObject::Private::Destruct<FRealCurve>,&UE::CoreUObject::Private::Copy<FRealCurve>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UCurveFloat @ 147a0ee60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCurveFloat(void)

{
  if (Z_Registration_Info_UClass_UCurveFloat.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCurveFloat.OuterSingleton,
               &Z_Construct_UClass_UCurveFloat_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCurveFloat.OuterSingleton;
}

// Z_Construct_UScriptStruct_FRichCurve @ 147a0eea0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRichCurve(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRichCurve.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRichCurve.InnerSingleton,
               &Z_Construct_UScriptStruct_FRichCurve_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRichCurve.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRichCurve.InnerSingleton;
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

// NewStructOps @ 147a0ef20

void * __cdecl Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x88;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRuntimeFloatCurve,&UE::CoreUObject::Private::Construct<FRuntimeFloatCurve>,&UE::CoreUObject::Private::ConstructForTests<FRuntimeFloatCurve>,&UE::CoreUObject::Private::Destruct<FRuntimeFloatCurve>,&UE::CoreUObject::Private::Copy<FRuntimeFloatCurve>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UEnum_Engine_ERichCurveTangentMode @ 147a0ef60

UEnum * __cdecl Z_Construct_UEnum_Engine_ERichCurveTangentMode(void)

{
  if (Z_Registration_Info_UEnum_ERichCurveTangentMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERichCurveTangentMode.InnerSingleton,
               &Z_Construct_UEnum_Engine_ERichCurveTangentMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERichCurveTangentMode.InnerSingleton;
}

// Z_Construct_UEnum_Engine_ERichCurveTangentWeightMode @ 147a0efa0

UEnum * __cdecl Z_Construct_UEnum_Engine_ERichCurveTangentWeightMode(void)

{
  if (Z_Registration_Info_UEnum_ERichCurveTangentWeightMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERichCurveTangentWeightMode.InnerSingleton,
               &Z_Construct_UEnum_Engine_ERichCurveTangentWeightMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERichCurveTangentWeightMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FRichCurveKey @ 147a0f010

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRichCurveKey(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRichCurveKey.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRichCurveKey.InnerSingleton,
               &Z_Construct_UScriptStruct_FRichCurveKey_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRichCurveKey.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRichCurveKey.InnerSingleton;
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

// ERichCurveTangentMode_StaticEnum @ 147a0f0a0

UEnum * __cdecl ERichCurveTangentMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERichCurveTangentMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ERichCurveTangentMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ERichCurveTangentMode,(UObject *)pUVar1,
                       L"ERichCurveTangentMode");
  }
  return Z_Registration_Info_UEnum_ERichCurveTangentMode.OuterSingleton;
}

// Z_Construct_UClass_UCurveTable_NoRegister @ 147a0f390

UClass * __cdecl Z_Construct_UClass_UCurveTable_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCurveTable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CurveTable",
               &Z_Registration_Info_UClass_UCurveTable.InnerSingleton,
               UCurveTable::StaticRegisterNativesUCurveTable,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCurveTable>,
               InternalVTableHelperCtorCaller<UCurveTable>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCurveTable.InnerSingleton;
}

// ERichCurveTangentWeightMode_StaticEnum @ 147a0f440

UEnum * __cdecl ERichCurveTangentWeightMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERichCurveTangentWeightMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ERichCurveTangentWeightMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ERichCurveTangentWeightMode,(UObject *)pUVar1,
                       L"ERichCurveTangentWeightMode");
  }
  return Z_Registration_Info_UEnum_ERichCurveTangentWeightMode.OuterSingleton;
}

// ERichCurveCompressionFormat_StaticEnum @ 147a0f480

UEnum * __cdecl ERichCurveCompressionFormat_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERichCurveCompressionFormat.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ERichCurveCompressionFormat.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ERichCurveCompressionFormat,(UObject *)pUVar1,
                       L"ERichCurveCompressionFormat");
  }
  return Z_Registration_Info_UEnum_ERichCurveCompressionFormat.OuterSingleton;
}

// Z_Construct_UFunction_UCurveFloat_GetFloatValue @ 147a0f4c0

UFunction * __cdecl Z_Construct_UFunction_UCurveFloat_GetFloatValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UCurveFloat_GetFloatValue_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// ERichCurveKeyTimeCompressionFormat_StaticEnum @ 147a0f500

UEnum * __cdecl ERichCurveKeyTimeCompressionFormat_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERichCurveKeyTimeCompressionFormat.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ERichCurveKeyTimeCompressionFormat.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ERichCurveKeyTimeCompressionFormat,(UObject *)pUVar1
                       ,L"ERichCurveKeyTimeCompressionFormat");
  }
  return Z_Registration_Info_UEnum_ERichCurveKeyTimeCompressionFormat.OuterSingleton;
}

// NewProp_bIsEventCurve_SetBit @ 147a0f540

void __cdecl Z_Construct_UClass_UCurveFloat_Statics::NewProp_bIsEventCurve_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb0) = 1;
  return;
}

// NewStructOps @ 147a0f550

void * __cdecl Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1c;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRichCurveKey,&UE::CoreUObject::Private::Construct<FRichCurveKey>,&UE::CoreUObject::Private::ConstructForTests<FRichCurveKey>,&UE::CoreUObject::Private::SerializeArchive<FRichCurveKey>,&UE::CoreUObject::Private::Identical<FRichCurveKey>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 147a0f590

void * __cdecl Z_Construct_UScriptStruct_FRichCurve_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRichCurve,&UE::CoreUObject::Private::Construct<FRichCurve>,&UE::CoreUObject::Private::ConstructForTests<FRichCurve>,&UE::CoreUObject::Private::Destruct<FRichCurve>,&UE::CoreUObject::Private::Copy<FRichCurve>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 147a0f610

void * __cdecl Z_Construct_UScriptStruct_FCompressedRichCurve_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCompressedRichCurve,&UE::CoreUObject::Private::Construct<FCompressedRichCurve>,&UE::CoreUObject::Private::ConstructForTests<FCompressedRichCurve>,&UE::CoreUObject::Private::Destruct<FCompressedRichCurve>,&UE::CoreUObject::Private::SerializeArchive<FCompressedRichCurve>,&UE::CoreUObject::Private::Identical<FCompressedRichCurve>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UCurveLinearColor_NoRegister @ 147a0f720

UClass * __cdecl Z_Construct_UClass_UCurveLinearColor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCurveLinearColor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CurveLinearColor",
               &Z_Registration_Info_UClass_UCurveLinearColor.InnerSingleton,
               UCurveLinearColor::StaticRegisterNativesUCurveLinearColor,0x250,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCurveLinearColor>,
               InternalVTableHelperCtorCaller<UCurveLinearColor>,local_res8,UCurveBase::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCurveLinearColor.InnerSingleton;
}

// Z_Construct_UClass_UDataAsset @ 147a0fb00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDataAsset(void)

{
  if (Z_Registration_Info_UClass_UDataAsset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDataAsset.OuterSingleton,
               &Z_Construct_UClass_UDataAsset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDataAsset.OuterSingleton;
}

// Z_Construct_UClass_UPrimaryDataAsset @ 147a0fb40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPrimaryDataAsset(void)

{
  if (Z_Registration_Info_UClass_UPrimaryDataAsset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPrimaryDataAsset.OuterSingleton,
               &Z_Construct_UClass_UPrimaryDataAsset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPrimaryDataAsset.OuterSingleton;
}

// Z_Construct_UClass_UCurveLinearColor @ 147a0fb80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCurveLinearColor(void)

{
  if (Z_Registration_Info_UClass_UCurveLinearColor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCurveLinearColor.OuterSingleton,
               &Z_Construct_UClass_UCurveLinearColor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCurveLinearColor.OuterSingleton;
}

// NewStructOps @ 147a0fbc0

void * __cdecl Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x208;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRuntimeCurveLinearColor,&UE::CoreUObject::Private::Construct<FRuntimeCurveLinearColor>,&UE::CoreUObject::Private::ConstructForTests<FRuntimeCurveLinearColor>,&UE::CoreUObject::Private::Destruct<FRuntimeCurveLinearColor>,&UE::CoreUObject::Private::Copy<FRuntimeCurveLinearColor>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UCurveLinearColor_GetClampedLinearColorValue @ 147a0fc00

UFunction * __cdecl Z_Construct_UFunction_UCurveLinearColor_GetClampedLinearColorValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCurveLinearColor_GetClampedLinearColorValue_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCurveLinearColor_GetLinearColorValue @ 147a0ffb0

UFunction * __cdecl Z_Construct_UFunction_UCurveLinearColor_GetLinearColorValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCurveLinearColor_GetLinearColorValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCurveLinearColor_GetUnadjustedLinearColorValue @ 147a0fff0

UFunction * __cdecl Z_Construct_UFunction_UCurveLinearColor_GetUnadjustedLinearColorValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCurveLinearColor_GetUnadjustedLinearColorValue_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UGarbageCollectionSettings @ 147a106a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGarbageCollectionSettings(void)

{
  if (Z_Registration_Info_UClass_UGarbageCollectionSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGarbageCollectionSettings.OuterSingleton,
               &Z_Construct_UClass_UGarbageCollectionSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGarbageCollectionSettings.OuterSingleton;
}

// Z_Construct_UClass_UStreamingSettings @ 147a106e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UStreamingSettings(void)

{
  if (Z_Registration_Info_UClass_UStreamingSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UStreamingSettings.OuterSingleton,
               &Z_Construct_UClass_UStreamingSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UStreamingSettings.OuterSingleton;
}

// NewProp_AsyncLoadingThreadEnabled_SetBit @ 147a107b0

void __cdecl
Z_Construct_UClass_UStreamingSettings_Statics::NewProp_AsyncLoadingThreadEnabled_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x38) = *(uint *)((longlong)param_1 + 0x38) | 1;
  return;
}

// NewProp_WarnIfTimeLimitExceeded_SetBit @ 147a107c0

void __cdecl
Z_Construct_UClass_UStreamingSettings_Statics::NewProp_WarnIfTimeLimitExceeded_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x38) = *(uint *)((longlong)param_1 + 0x38) | 2;
  return;
}

// NewProp_UseBackgroundLevelStreaming_SetBit @ 147a107d0

void __cdecl
Z_Construct_UClass_UStreamingSettings_Statics::NewProp_UseBackgroundLevelStreaming_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x48) = *(uint *)((longlong)param_1 + 0x48) | 1;
  return;
}

// NewProp_AsyncLoadingUseFullTimeLimit_SetBit @ 147a107e0

void __cdecl
Z_Construct_UClass_UStreamingSettings_Statics::NewProp_AsyncLoadingUseFullTimeLimit_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x48) = *(uint *)((longlong)param_1 + 0x48) | 2;
  return;
}

// NewProp_FlushStreamingOnExit_SetBit @ 147a107f0

void __cdecl
Z_Construct_UClass_UStreamingSettings_Statics::NewProp_FlushStreamingOnExit_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x6c) = *(uint *)((longlong)param_1 + 0x6c) | 1;
  return;
}

// NewProp_EventDrivenLoaderEnabled_SetBit @ 147a10800

void __cdecl
Z_Construct_UClass_UStreamingSettings_Statics::NewProp_EventDrivenLoaderEnabled_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x6c) = *(uint *)((longlong)param_1 + 0x6c) | 2;
  return;
}

// NewProp_FlushStreamingOnGC_SetBit @ 147a10810

void __cdecl
Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_FlushStreamingOnGC_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x3c) = *(uint *)((longlong)param_1 + 0x3c) | 1;
  return;
}

// NewProp_AllowParallelGC_SetBit @ 147a10820

void __cdecl
Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_AllowParallelGC_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x3c) = *(uint *)((longlong)param_1 + 0x3c) | 2;
  return;
}

// NewProp_IncrementalBeginDestroyEnabled_SetBit @ 147a10830

void __cdecl
Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_IncrementalBeginDestroyEnabled_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x3c) = *(uint *)((longlong)param_1 + 0x3c) | 4;
  return;
}

// NewProp_CreateGCClusters_SetBit @ 147a10840

void __cdecl
Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_CreateGCClusters_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x3c) = *(uint *)((longlong)param_1 + 0x3c) | 8;
  return;
}

// NewProp_AssetClusteringEnabled_SetBit @ 147a10850

void __cdecl
Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_AssetClusteringEnabled_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x3c) = *(uint *)((longlong)param_1 + 0x3c) | 0x10;
  return;
}

// NewProp_ActorClusteringEnabled_SetBit @ 147a10860

void __cdecl
Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_ActorClusteringEnabled_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x3c) = *(uint *)((longlong)param_1 + 0x3c) | 0x20;
  return;
}

// NewProp_VerifyUObjectsAreNotFGCObjects_SetBit @ 147a10870

void __cdecl
Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_VerifyUObjectsAreNotFGCObjects_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x3c) = *(uint *)((longlong)param_1 + 0x3c) | 0x40;
  return;
}

// NewProp_GarbageEliminationEnabled_SetBit @ 147a10880

void __cdecl
Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_GarbageEliminationEnabled_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x3c) = *(uint *)((longlong)param_1 + 0x3c) | 0x80;
  return;
}

// NewProp_DumpObjectCountsToLogWhenMaxObjectLimitExceeded_SetBit @ 147a10890

void __cdecl
Z_Construct_UClass_UGarbageCollectionSettings_Statics::
NewProp_DumpObjectCountsToLogWhenMaxObjectLimitExceeded_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x3c) = *(uint *)((longlong)param_1 + 0x3c) | 0x100;
  return;
}

// Z_Construct_UClass_UCurveLinearColorAtlas @ 147a10930

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCurveLinearColorAtlas(void)

{
  if (Z_Registration_Info_UClass_UCurveLinearColorAtlas.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCurveLinearColorAtlas.OuterSingleton,
               &Z_Construct_UClass_UCurveLinearColorAtlas_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCurveLinearColorAtlas.OuterSingleton;
}

// NewProp_bChromaKeyTexture_SetBit @ 147a10a30

void __cdecl
Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_bChromaKeyTexture_SetBit
          (void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 1;
  return;
}

// NewStructOps @ 147a10a40

void * __cdecl Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x24;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCurveAtlasColorAdjustments,&UE::CoreUObject::Private::Construct<FCurveAtlasColorAdjustments>,&UE::CoreUObject::Private::ConstructForTests<FCurveAtlasColorAdjustments>,&UE::CoreUObject::Private::Destruct<FCurveAtlasColorAdjustments>,&UE::CoreUObject::Private::Copy<FCurveAtlasColorAdjustments>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// <lambda_invoker_cdecl> @ 147a10e80

FRichCurveKey * __cdecl
<lambda_25>::<lambda_invoker_cdecl>
          (FRichCurveKey *__return_storage_ptr__,TConstantValueNumKeys param_1,uchar *param_2,
          int param_3)

{
  __return_storage_ptr__->Time = 0.0;
  __return_storage_ptr__->ArriveTangent = 0.0;
  __return_storage_ptr__->ArriveTangentWeight = 0.0;
  __return_storage_ptr__->LeaveTangent = 0.0;
  __return_storage_ptr__->LeaveTangentWeight = 0.0;
  __return_storage_ptr__->Value = (float)param_1;
  __return_storage_ptr__->InterpMode = '\0';
  __return_storage_ptr__->TangentMode = '\0';
  (__return_storage_ptr__->TangentWeightMode).Value = '\0';
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 147a10eb0

FRichCurveKey * __cdecl
<lambda_26>::<lambda_invoker_cdecl>
          (FRichCurveKey *__return_storage_ptr__,TConstantValueNumKeys param_1,uchar *param_2,
          int param_3)

{
  __return_storage_ptr__->Time = 0.0;
  __return_storage_ptr__->ArriveTangent = 0.0;
  __return_storage_ptr__->ArriveTangentWeight = 0.0;
  __return_storage_ptr__->LeaveTangent = 0.0;
  __return_storage_ptr__->LeaveTangentWeight = 0.0;
  __return_storage_ptr__->Value = (float)param_1;
  __return_storage_ptr__->InterpMode = '\0';
  __return_storage_ptr__->TangentMode = '\0';
  (__return_storage_ptr__->TangentWeightMode).Value = '\0';
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 147a10ee0

FRichCurveKey * __cdecl
<lambda_27>::<lambda_invoker_cdecl>
          (FRichCurveKey *__return_storage_ptr__,TConstantValueNumKeys param_1,uchar *param_2,
          int param_3)

{
  __return_storage_ptr__->Time = 0.0;
  __return_storage_ptr__->ArriveTangent = 0.0;
  __return_storage_ptr__->ArriveTangentWeight = 0.0;
  __return_storage_ptr__->LeaveTangent = 0.0;
  __return_storage_ptr__->LeaveTangentWeight = 0.0;
  __return_storage_ptr__->Value = (float)param_1;
  __return_storage_ptr__->InterpMode = '\0';
  __return_storage_ptr__->TangentMode = '\0';
  (__return_storage_ptr__->TangentWeightMode).Value = '\0';
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 147a10f10

FRichCurveKey * __cdecl
<lambda_28>::<lambda_invoker_cdecl>
          (FRichCurveKey *__return_storage_ptr__,TConstantValueNumKeys param_1,uchar *param_2,
          int param_3)

{
  __return_storage_ptr__->Time = 0.0;
  __return_storage_ptr__->ArriveTangent = 0.0;
  __return_storage_ptr__->ArriveTangentWeight = 0.0;
  __return_storage_ptr__->LeaveTangent = 0.0;
  __return_storage_ptr__->LeaveTangentWeight = 0.0;
  __return_storage_ptr__->Value = (float)param_1;
  __return_storage_ptr__->InterpMode = '\0';
  __return_storage_ptr__->TangentMode = '\0';
  (__return_storage_ptr__->TangentWeightMode).Value = '\0';
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 147a10f40

FRichCurveKey * __cdecl
<lambda_29>::<lambda_invoker_cdecl>
          (FRichCurveKey *__return_storage_ptr__,TConstantValueNumKeys param_1,uchar *param_2,
          int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ulonglong uVar4;
  float fVar5;
  
  uVar4 = (longlong)(param_1.NumKeys * 2 + 3) & 0xfffffffffffffffc;
  fVar1 = *(float *)(param_2 + uVar4 + (longlong)param_3 * 4 + 8);
  fVar5 = (float)*(ushort *)(param_2 + (longlong)param_3 * 2) * __real_37800080;
  fVar2 = *(float *)(param_2 + uVar4 + 4);
  fVar3 = *(float *)(param_2 + uVar4);
  __return_storage_ptr__->ArriveTangent = 0.0;
  __return_storage_ptr__->ArriveTangentWeight = 0.0;
  __return_storage_ptr__->LeaveTangent = 0.0;
  __return_storage_ptr__->LeaveTangentWeight = 0.0;
  __return_storage_ptr__->Value = fVar1;
  __return_storage_ptr__->InterpMode = '\0';
  __return_storage_ptr__->TangentMode = '\0';
  __return_storage_ptr__->Time = fVar5 * fVar2 + fVar3;
  (__return_storage_ptr__->TangentWeightMode).Value = '\0';
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 147a10fb0

FRichCurveKey * __cdecl
<lambda_30>::<lambda_invoker_cdecl>
          (FRichCurveKey *__return_storage_ptr__,TConstantValueNumKeys param_1,uchar *param_2,
          int param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_2 + (longlong)param_3 * 4);
  fVar2 = *(float *)(param_2 + (longlong)(param_1.NumKeys * 4) + (longlong)param_3 * 4);
  __return_storage_ptr__->ArriveTangent = 0.0;
  __return_storage_ptr__->ArriveTangentWeight = 0.0;
  __return_storage_ptr__->LeaveTangent = 0.0;
  __return_storage_ptr__->LeaveTangentWeight = 0.0;
  __return_storage_ptr__->Time = fVar1;
  __return_storage_ptr__->Value = fVar2;
  __return_storage_ptr__->InterpMode = '\0';
  __return_storage_ptr__->TangentMode = '\0';
  (__return_storage_ptr__->TangentWeightMode).Value = '\0';
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 147a11000

FRichCurveKey * __cdecl
<lambda_31>::<lambda_invoker_cdecl>
          (FRichCurveKey *__return_storage_ptr__,TConstantValueNumKeys param_1,uchar *param_2,
          int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  ulonglong uVar7;
  float fVar8;
  
  lVar6 = (longlong)(param_3 * 3);
  uVar7 = (longlong)(param_1.NumKeys * 2 + 3) & 0xfffffffffffffffc;
  fVar1 = *(float *)(param_2 + lVar6 * 4 + uVar7 + 0x10);
  fVar2 = *(float *)(param_2 + lVar6 * 4 + uVar7 + 0xc);
  fVar3 = *(float *)(param_2 + lVar6 * 4 + uVar7 + 8);
  fVar8 = (float)*(ushort *)(param_2 + (longlong)param_3 * 2) * __real_37800080;
  fVar4 = *(float *)(param_2 + uVar7 + 4);
  fVar5 = *(float *)(param_2 + uVar7);
  __return_storage_ptr__->ArriveTangentWeight = 0.0;
  __return_storage_ptr__->LeaveTangentWeight = 0.0;
  __return_storage_ptr__->Value = fVar3;
  __return_storage_ptr__->ArriveTangent = fVar2;
  __return_storage_ptr__->Time = fVar8 * fVar4 + fVar5;
  __return_storage_ptr__->LeaveTangent = fVar1;
  __return_storage_ptr__->InterpMode = '\x02';
  __return_storage_ptr__->TangentMode = '\0';
  (__return_storage_ptr__->TangentWeightMode).Value = '\0';
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 147a11090

FRichCurveKey * __cdecl
<lambda_32>::<lambda_invoker_cdecl>
          (FRichCurveKey *__return_storage_ptr__,TConstantValueNumKeys param_1,uchar *param_2,
          int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  
  lVar5 = (longlong)(param_3 * 3);
  fVar1 = *(float *)(param_2 + lVar5 * 4 + (longlong)(param_1.NumKeys * 4) + 8);
  fVar2 = *(float *)(param_2 + (longlong)param_3 * 4);
  fVar3 = *(float *)(param_2 + lVar5 * 4 + (longlong)(param_1.NumKeys * 4) + 4);
  fVar4 = *(float *)(param_2 + lVar5 * 4 + (longlong)(param_1.NumKeys * 4));
  __return_storage_ptr__->ArriveTangentWeight = 0.0;
  __return_storage_ptr__->LeaveTangentWeight = 0.0;
  __return_storage_ptr__->Time = fVar2;
  __return_storage_ptr__->Value = fVar4;
  __return_storage_ptr__->ArriveTangent = fVar3;
  __return_storage_ptr__->LeaveTangent = fVar1;
  __return_storage_ptr__->InterpMode = '\x02';
  __return_storage_ptr__->TangentMode = '\0';
  (__return_storage_ptr__->TangentWeightMode).Value = '\0';
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 147a110f0

FRichCurveKey * __cdecl
<lambda_33>::<lambda_invoker_cdecl>
          (FRichCurveKey *__return_storage_ptr__,TConstantValueNumKeys param_1,uchar *param_2,
          int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  ERichCurveInterpMode EVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  float fVar10;
  
  uVar9 = param_1.NumKeys + 1U & 0xfffffffe;
  uVar7 = (longlong)(int)(param_1.NumKeys * 2 + 3 + uVar9) & 0xfffffffffffffffc;
  fVar1 = *(float *)(param_2 + uVar7);
  fVar2 = *(float *)(param_2 + uVar7 + 4);
  EVar6 = GetKeyInterpMode((uint)param_2[param_3]);
  lVar8 = (longlong)(param_3 * 3);
  fVar3 = *(float *)(param_2 + lVar8 * 4 + uVar7 + 0x10);
  fVar4 = *(float *)(param_2 + lVar8 * 4 + uVar7 + 0xc);
  fVar10 = *(float *)(param_2 + lVar8 * 4 + uVar7 + 8);
  uVar5 = *(ushort *)(param_2 + (longlong)param_3 * 2 + (longlong)(int)uVar9);
  (__return_storage_ptr__->InterpMode).Value = (uchar)EVar6;
  __return_storage_ptr__->ArriveTangentWeight = 0.0;
  __return_storage_ptr__->LeaveTangentWeight = 0.0;
  __return_storage_ptr__->TangentMode = '\0';
  __return_storage_ptr__->TangentWeightMode = '\0';
  __return_storage_ptr__->Value = fVar10;
  fVar10 = (float)uVar5 * __real_37800080;
  __return_storage_ptr__->ArriveTangent = fVar4;
  __return_storage_ptr__->LeaveTangent = fVar3;
  __return_storage_ptr__->Time = fVar10 * fVar2 + fVar1;
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 147a111e0

FRichCurveKey * __cdecl
<lambda_34>::<lambda_invoker_cdecl>
          (FRichCurveKey *__return_storage_ptr__,TConstantValueNumKeys param_1,uchar *param_2,
          int param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ERichCurveInterpMode EVar6;
  longlong lVar7;
  uint uVar8;
  
  uVar8 = param_1.NumKeys + 3U & 0xfffffffc;
  iVar1 = uVar8 + param_1.NumKeys * 4;
  EVar6 = GetKeyInterpMode((uint)param_2[param_3]);
  lVar7 = (longlong)(param_3 * 3);
  fVar2 = *(float *)(param_2 + lVar7 * 4 + (longlong)iVar1 + 8);
  fVar3 = *(float *)(param_2 + lVar7 * 4 + (longlong)iVar1 + 4);
  fVar4 = *(float *)(param_2 + (longlong)param_3 * 4 + (longlong)(int)uVar8);
  fVar5 = *(float *)(param_2 + lVar7 * 4 + (longlong)iVar1);
  (__return_storage_ptr__->InterpMode).Value = (uchar)EVar6;
  __return_storage_ptr__->ArriveTangentWeight = 0.0;
  __return_storage_ptr__->LeaveTangentWeight = 0.0;
  __return_storage_ptr__->Time = fVar4;
  __return_storage_ptr__->Value = fVar5;
  __return_storage_ptr__->ArriveTangent = fVar3;
  __return_storage_ptr__->LeaveTangent = fVar2;
  __return_storage_ptr__->TangentMode = '\0';
  __return_storage_ptr__->TangentWeightMode = '\0';
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 147a11290

FRichCurveKey * __cdecl
<lambda_35>::<lambda_invoker_cdecl>
          (FRichCurveKey *__return_storage_ptr__,TConstantValueNumKeys param_1,uchar *param_2,
          int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort uVar6;
  ERichCurveInterpMode EVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar8 = (longlong)(param_1.NumKeys << 2);
  fVar1 = *(float *)(param_2 + lVar8);
  fVar2 = *(float *)(param_2 + lVar8 + 4);
  EVar7 = GetKeyInterpMode((uint)param_2[param_3 * 2]);
  lVar9 = (longlong)(param_3 * 5);
  uVar6 = *(ushort *)(param_2 + (longlong)param_3 * 2 + (longlong)(param_1.NumKeys * 2));
  fVar3 = *(float *)(param_2 + lVar9 * 4 + lVar8 + 0x10);
  fVar4 = *(float *)(param_2 + lVar9 * 4 + lVar8 + 0xc);
  fVar5 = *(float *)(param_2 + lVar9 * 4 + lVar8 + 8);
  (__return_storage_ptr__->InterpMode).Value = (uchar)EVar7;
  __return_storage_ptr__->ArriveTangentWeight = 0.0;
  __return_storage_ptr__->LeaveTangentWeight = 0.0;
  __return_storage_ptr__->TangentMode = '\x01';
  __return_storage_ptr__->TangentWeightMode = '\0';
  __return_storage_ptr__->Value = fVar5;
  __return_storage_ptr__->ArriveTangent = fVar4;
  __return_storage_ptr__->LeaveTangent = fVar3;
  __return_storage_ptr__->Time = (float)uVar6 * __real_37800080 * fVar2 + fVar1;
  (__return_storage_ptr__->TangentWeightMode).Value = param_2[(longlong)(param_3 * 2) + 1];
  __return_storage_ptr__->ArriveTangentWeight = *(float *)(param_2 + lVar9 * 4 + lVar8 + 0x14);
  __return_storage_ptr__->LeaveTangentWeight = *(float *)(param_2 + lVar9 * 4 + lVar8 + 0x18);
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 147a113a0

FRichCurveKey * __cdecl
<lambda_36>::<lambda_invoker_cdecl>
          (FRichCurveKey *__return_storage_ptr__,TConstantValueNumKeys param_1,uchar *param_2,
          int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  ERichCurveInterpMode EVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  uVar7 = (longlong)(param_1.NumKeys * 2 + 3) & 0xfffffffffffffffc;
  iVar5 = (int)uVar7 + param_1.NumKeys * 4;
  EVar6 = GetKeyInterpMode((uint)param_2[param_3 * 2]);
  fVar1 = *(float *)(param_2 + uVar7 + (longlong)param_3 * 4);
  lVar8 = (longlong)(param_3 * 5);
  fVar2 = *(float *)(param_2 + lVar8 * 4 + (longlong)iVar5 + 8);
  fVar3 = *(float *)(param_2 + lVar8 * 4 + (longlong)iVar5 + 4);
  fVar4 = *(float *)(param_2 + lVar8 * 4 + (longlong)iVar5);
  (__return_storage_ptr__->InterpMode).Value = (uchar)EVar6;
  __return_storage_ptr__->ArriveTangentWeight = 0.0;
  __return_storage_ptr__->LeaveTangentWeight = 0.0;
  __return_storage_ptr__->TangentMode = '\x01';
  __return_storage_ptr__->TangentWeightMode = '\0';
  __return_storage_ptr__->Time = fVar1;
  __return_storage_ptr__->Value = fVar4;
  __return_storage_ptr__->ArriveTangent = fVar3;
  __return_storage_ptr__->LeaveTangent = fVar2;
  (__return_storage_ptr__->TangentWeightMode).Value = param_2[(longlong)(param_3 * 2) + 1];
  __return_storage_ptr__->ArriveTangentWeight =
       *(float *)(param_2 + lVar8 * 4 + (longlong)iVar5 + 0xc);
  __return_storage_ptr__->LeaveTangentWeight =
       *(float *)(param_2 + lVar8 * 4 + (longlong)iVar5 + 0x10);
  return __return_storage_ptr__;
}

// TQuat<double>,TSizedDefaultAllocator<32>_> @ 147a11480

FArchive * __cdecl
operator<<<UE::Math::TQuat<double>_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FArchive *pFVar7;
  int iVar8;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 5);
  iVar8 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,0x10,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x80001)) {
        param_2->ArrayNum = auStackX_8[0];
        if ((((param_1->field_0x28 & 1) != 0) &&
            (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x20,0x10,auStackX_8[0],*piVar1,&param_2->AllocatorInstance,auStackX_8[0],
                        piVar1), (param_1->field_0x28 & 1) != 0)) &&
           ((int)((ulonglong)*(undefined8 *)&param_1->field_0x40 >> 0x20) < 0x3ec)) {
          TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if ((int)auStackX_8[0] < 1) {
            return param_1;
          }
          do {
            iVar6 = param_2->ArrayNum;
            if (iVar6 == *piVar1) {
              iVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x1020,&param_2->AllocatorInstance,piVar1);
            }
            pFVar3 = (param_2->AllocatorInstance).Data;
            param_2->ArrayNum = iVar6 + 1;
            UE::Math::operator<<(param_1,(TQuat<double> *)(pFVar3 + (longlong)iVar6 * 0x20));
            iVar8 = iVar8 + 1;
          } while (iVar8 < (int)auStackX_8[0]);
          return param_1;
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,(param_2->AllocatorInstance).Data,(longlong)param_2->ArrayNum << 5);
        return param_1;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar4)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator> @ 147a11490

FArchive * __cdecl
operator<<<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint uVar12;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar9 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar12 = 1;
  uVar6 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar6) {
    uVar7 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((int)uVar6 < 1) {
    return param_1;
  }
  if ((int)uVar12 < 1) {
    return param_1;
  }
  *piVar1 = uVar12;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar6 = uVar12;
  if (uVar12 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_147a1d88e;
    uVar6 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar6,4);
LAB_147a1d88e:
  uVar10 = (ulonglong)uVar12;
  uVar7 = uVar9;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar5 = FVar2;
    }
    uVar4 = uVar7 & (longlong)(int)uVar12 - 1U;
    uVar7 = uVar7 + 1;
    *(undefined4 *)((longlong)FVar5 + uVar4 * 4) = 0xffffffff;
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0);
  if (*piVar1 != 0) {
    uVar6 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar6 != 0) {
      puVar11 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)TStack_50.Array;
      }
      uVar12 = *puVar11;
      uVar7 = uVar9;
      while (uVar12 == 0) {
        iVar8 = (int)uVar9;
        uStack_60 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_60;
        uStack_78 = iVar8 + 1;
        uVar9 = (ulonglong)uStack_78;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_147a1d96b;
        uVar12 = puVar11[(longlong)iVar8 + 1];
      }
      uStack_74 = -uVar12 & uVar12;
      uVar9 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar9 = (ulonglong)uStack_64;
      if ((int)uVar6 < (int)uStack_64) {
LAB_147a1d96b:
        uVar9 = (ulonglong)uVar6;
        uStack_64 = uVar6;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar9 < (int)uVar6) {
      do {
        puVar11 = (uint *)((longlong)(int)uVar9 * 0x10 + *(longlong *)&param_2->Elements);
        uVar6 = *piVar1 - 1U & *puVar11;
        puVar11[3] = uVar6;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar5 = FVar2;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar6;
        puVar11[2] = *(uint *)((longlong)FVar5 + uVar7 * 4);
        *(int *)((longlong)FVar5 + uVar7 * 4) = (int)uVar9;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar9 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// operator<<<FKeyHandle,int> @ 147a114a0

FArchive * __cdecl operator<<<FKeyHandle,int>(FArchive *param_1,TTuple<FKeyHandle,int> *param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    *(undefined4 *)param_2 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &param_2->field_0x4;
  puVar2 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if (puVar2 + 1 <= (undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *(undefined4 *)puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)puVar1);
  return param_1;
}

// operator<<<FKeyHandle,TSizedDefaultAllocator<32>_> @ 147a11570

FArchive * __cdecl
operator<<<FKeyHandle,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FKeyHandle,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint *puVar3;
  undefined4 *puVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FArchive *pFVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 2);
  uVar12 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x400001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar14 = uVar12;
          uVar11 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar13 = (uint)uVar12;
              uVar8 = 0;
              if ((int)uVar13 < (int)uVar11) {
                uVar8 = ~uVar13 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                pFVar9 = (FArchive *)(*pcVar5)();
                return pFVar9;
              }
              pFVar10 = (param_2->AllocatorInstance).Data + uVar14;
              puVar4 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
              if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
                if ((param_1->field_0x2a & 1) == 0) {
                  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar10,4);
                }
                else {
                  FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar10);
                }
              }
              else {
                *(undefined4 *)pFVar10 = *puVar4;
                **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
              }
              uVar12 = (ulonglong)(uVar13 + 1);
              uVar14 = uVar14 + 4;
              uVar11 = param_2->ArrayNum;
            } while ((int)(uVar13 + 1) < param_2->ArrayNum);
          }
        }
        else {
          TArray<FKeyHandle,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar7 = param_2->ArrayNum;
              if (iVar7 == *piVar1) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar7 + 1;
              pFVar10 = (param_2->AllocatorInstance).Data + (longlong)iVar7 * 4;
              DefaultConstructItems<FKeyHandle,int>(pFVar10,1);
              puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
              if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
                if ((param_1->field_0x2a & 1) == 0) {
                  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar10,4);
                }
                else {
                  FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar10);
                }
              }
              else {
                *(uint *)pFVar10 = *puVar3;
                **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
              }
              uVar11 = (int)uVar12 + 1;
              uVar12 = (ulonglong)uVar11;
            } while ((int)uVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FArchive *)(*pcVar5)();
        return pFVar9;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<FInterpCurvePoint<float>,TSizedDefaultAllocator<32>_> @ 147a11580

FArchive * __cdecl
operator<<<FInterpCurvePoint<float>,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FInterpCurvePoint<float>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x14);
  iVar9 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0xccccd)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar8 = auStackX_8[0];
          if ((int)auStackX_8[0] < 1) {
            return param_1;
          }
          while( true ) {
            uVar6 = 0;
            if ((int)uVar10 < (int)uVar8) {
              uVar6 = ~uVar10 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) break;
            operator<<(param_1,(FInterpCurvePoint<float> *)
                               ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x14));
            uVar8 = param_2->ArrayNum;
            uVar10 = uVar10 + 1;
            if ((int)uVar8 <= (int)uVar10) {
              return param_1;
            }
          }
          pcVar3 = (code *)swi(3);
          pFVar7 = (FArchive *)(*pcVar3)();
          return pFVar7;
        }
        TArray<FInterpCurvePoint<float>,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar5 = param_2->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x414,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar5 + 1;
          operator<<(param_1,(FInterpCurvePoint<float> *)
                             ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x14));
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)auStackX_8[0]);
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// TQuat<double>_>,TSizedDefaultAllocator<32>_> @ 147a11590

FArchive * __cdecl
operator<<<FInterpCurvePoint<UE::Math::TQuat<double>_>_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FInterpCurvePoint<UE::Math::TQuat<double>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 7);
  iVar10 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x80,0x10,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x20001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar11 = 0;
          uVar9 = auStackX_8[0];
          if ((int)auStackX_8[0] < 1) {
            return param_1;
          }
          while( true ) {
            uVar7 = 0;
            if ((int)uVar11 < (int)uVar9) {
              uVar7 = ~uVar11 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) break;
            ::operator<<(param_1,(FInterpCurvePoint<UE::Math::TQuat<double>_> *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x80))
            ;
            uVar11 = uVar11 + 1;
            uVar9 = param_2->ArrayNum;
            if (param_2->ArrayNum <= (int)uVar11) {
              return param_1;
            }
          }
          pcVar4 = (code *)swi(3);
          pFVar8 = (FArchive *)(*pcVar4)();
          return pFVar8;
        }
        TArray<FInterpCurvePoint<UE::Math::TQuat<double>_>,TSizedDefaultAllocator<32>_>::Empty
                  (param_2,auStackX_8[0]);
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar6 = param_2->ArrayNum;
          if (iVar6 == *piVar1) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x1080,&param_2->AllocatorInstance,piVar1);
          }
          pFVar3 = (param_2->AllocatorInstance).Data;
          param_2->ArrayNum = iVar6 + 1;
          ::operator<<(param_1,(FInterpCurvePoint<UE::Math::TQuat<double>_> *)
                               (pFVar3 + (longlong)iVar6 * 0x80));
          iVar10 = iVar10 + 1;
        } while (iVar10 < (int)auStackX_8[0]);
        return param_1;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FArchive *)(*pcVar4)();
        return pFVar8;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// TVector<double>_>,TSizedDefaultAllocator<32>_> @ 147a115a0

FArchive * __cdecl
operator<<<FInterpCurvePoint<UE::Math::TVector<double>_>_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FInterpCurvePoint<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_> *param_2
          )

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x58);
  iVar9 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x2e8bb)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar8 = auStackX_8[0];
          if ((int)auStackX_8[0] < 1) {
            return param_1;
          }
          while( true ) {
            uVar6 = 0;
            if ((int)uVar10 < (int)uVar8) {
              uVar6 = ~uVar10 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) break;
            ::operator<<(param_1,(FInterpCurvePoint<UE::Math::TVector<double>_> *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x58))
            ;
            uVar8 = param_2->ArrayNum;
            uVar10 = uVar10 + 1;
            if ((int)uVar8 <= (int)uVar10) {
              return param_1;
            }
          }
          pcVar3 = (code *)swi(3);
          pFVar7 = (FArchive *)(*pcVar3)();
          return pFVar7;
        }
        TArray<FInterpCurvePoint<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>::Empty
                  (param_2,auStackX_8[0]);
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar5 = param_2->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x858,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar5 + 1;
          ::operator<<(param_1,(FInterpCurvePoint<UE::Math::TVector<double>_> *)
                               ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x58));
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)auStackX_8[0]);
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 147a115b0

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  code *pcVar6;
  void *pvVar7;
  bool bVar8;
  int iVar9;
  FArchive *pFVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  TTuple<FKeyHandle,int> *pTVar14;
  uint *puVar15;
  TTuple<FKeyHandle,int> *pTVar16;
  uint local_res8 [2];
  uint local_res10 [2];
  FSparseArrayAllocationInfo local_98;
  int local_88;
  uint uStack_84;
  undefined1 *puStack_80;
  undefined4 local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 << 4,(longlong)*(int *)&param_2->field_0xc << 4);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&param_2->field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&param_2->field_0x2c + 0x1fU >> 5) << 2);
  plVar5 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res10[0] = *(int *)puVar2 - *(int *)&param_2->field_0x34;
    if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res10);
      }
    }
    else {
      local_res10[0] = *(uint *)*plVar5;
      *plVar5 = *plVar5 + 4;
    }
    iVar9 = *(int *)&param_2->field_0x28;
    puStack_80 = &param_2->field_0x10;
    uStack_84 = 1;
    local_88 = 0;
    iStack_74 = 0;
    iStack_70 = 0;
    if (iVar9 != 0) {
      puVar15 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar15 = (uint *)puStack_80;
      }
      uVar13 = *puVar15;
      iStack_70 = 0;
      local_88 = 0;
      while (uVar13 == 0) {
        lVar12 = (longlong)local_88;
        iStack_70 = iStack_70 + 0x20;
        local_88 = local_88 + 1;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_147a118cc;
        uVar13 = puVar15[lVar12 + 1];
      }
      uStack_84 = -uVar13 & uVar13;
      uVar3 = (ulonglong)uStack_84 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iStack_74 = iStack_70 + -1 + (int)lVar12;
      if (iVar9 < iStack_74) {
LAB_147a118cc:
        iStack_74 = iVar9;
      }
    }
    local_78 = 0xffffffff;
    local_60._padding_._0_4_ = local_88;
    local_60._padding_._4_4_ = uStack_84;
    local_60.UnvisitedBitMask = 0xffffffff;
    local_60.CurrentBitIndex = iStack_74;
    local_60._28_4_ = uStack_6c;
    local_60.BaseBitIndex = iStack_70;
    local_68 = param_2;
    local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_80;
    if (iStack_74 < iVar9) {
      do {
        operator<<<FKeyHandle,int>
                  (param_1,(TTuple<FKeyHandle,int> *)
                           ((longlong)local_60.CurrentBitIndex * 0x10 + *(longlong *)local_68));
        local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
      } while (local_60.CurrentBitIndex < (local_60.Array)->NumBits);
    }
  }
  else {
    local_res8[0] = 0;
    if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar5;
      *plVar5 = *plVar5 + 4;
    }
    uVar13 = local_res8[0];
    if ((int)local_res8[0] < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != local_res8[0]) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,local_res8[0],(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar13 = uVar13 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar13) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar11 = 0x80;
      if (0x80 < (int)uVar13) {
        uVar11 = uVar13;
      }
      *(uint *)&param_2->field_0x2c = uVar11;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    pTVar16 = (TTuple<FKeyHandle,int> *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar9 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,4,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar9 = *(int *)&param_2->field_0x30;
          iVar4 = *(int *)(*(longlong *)param_2 + 4 + (longlong)iVar9 * 0x10);
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          *(int *)&param_2->field_0x30 = iVar4;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)(*(longlong *)param_2 + (longlong)iVar4 * 0x10) = 0xffffffff;
          }
        }
        TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_98,iVar9);
        pvVar7 = local_98.Pointer;
        pTVar14 = (TTuple<FKeyHandle,int> *)0x0;
        if (local_98.Pointer != (TTuple<FKeyHandle,int> *)0x0) {
          LOCK();
          UNLOCK();
          iVar9 = (int)LastKeyHandleIndex + 1;
          LastKeyHandleIndex = (atomic<unsigned_int>)((int)LastKeyHandleIndex + 1);
          *(int *)local_98.Pointer = iVar9;
          if ((iVar9 == 0) &&
             (bVar8 = FDebug::CheckVerifyFailedImpl2
                                ("Index != 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\KeyHandle.cpp"
                                 ,0x1c,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            pFVar10 = (FArchive *)(*pcVar6)();
            return pFVar10;
          }
          *(undefined4 *)((longlong)pvVar7 + 4) = 0;
          *(int *)((longlong)pvVar7 + 8) = -1;
          pTVar14 = pvVar7;
        }
        operator<<<FKeyHandle,int>(param_1,pTVar14);
        uVar13 = (int)pTVar16 + 1;
        pTVar16 = (TTuple<FKeyHandle,int> *)(ulonglong)uVar13;
      } while ((int)uVar13 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// operator<<<unsigned___int64,TSizedDefaultAllocator<32>_> @ 147a11940

FArchive * __cdecl
operator<<<unsigned___int64,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FArchive *pFVar5;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)param_2->ArrayNum << 3,(longlong)param_2->ArrayMax << 3);
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  else {
    auStackX_8[0] = 0;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,auStackX_8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x200001)) {
        param_2->ArrayNum = auStackX_8[0];
        if ((param_1->field_0x28 & 1) != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,auStackX_8[0],*piVar1,&param_2->AllocatorInstance,auStackX_8[0],piVar1);
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,(param_2->AllocatorInstance).Data,(longlong)param_2->ArrayNum << 3);
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FArchive *)(*pcVar3)();
        return pFVar5;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// Cast<UPackageMapClient,UPackageMap> @ 147a129c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPackageMapClient * __cdecl Cast<UPackageMapClient,UPackageMap>(TObjectPtr<UPackageMap> *param_1)

{
  bool bVar1;
  UClass *pUVar2;
  
  if ((param_1->field0_0x0).DebugPtr != (UPackageMap *)0x0) {
    pUVar2 = Z_Construct_UClass_UPackageMapClient_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)param_1,pUVar2);
    if (bVar1) {
      return (UPackageMapClient *)(param_1->field0_0x0).DebugPtr;
    }
  }
  return (UPackageMapClient *)0x0;
}

// CastChecked<UActorChannel,UObject> @ 147a12a00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UActorChannel * __cdecl CastChecked<UActorChannel,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UActorChannel>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UActorChannel_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UActorChannel *)param_1;
  }
  pFVar3 = GetTypeName<UActorChannel>(&local_28);
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

// CastChecked<UPackageMapClient,UPackageMap> @ 147a12ac0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPackageMapClient * __cdecl
CastChecked<UPackageMapClient,UPackageMap>(TObjectPtr<UPackageMap> *param_1,Type param_2)

{
  bool bVar1;
  UClass *pUVar2;
  FString *pFVar3;
  UPackageMapClient *pUVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  if ((param_1->field0_0x0).DebugPtr == (UPackageMap *)0x0) {
    if (param_2 == NullChecked) {
      pFVar3 = GetTypeName<UPackageMapClient>(&local_18);
      if ((pFVar3->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar5);
    }
    pUVar4 = (UPackageMapClient *)0x0;
  }
  else {
    pUVar2 = Z_Construct_UClass_UPackageMapClient_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)param_1,pUVar2);
    if ((!bVar1) ||
       (pUVar4 = (UPackageMapClient *)(param_1->field0_0x0).DebugPtr,
       pUVar4 == (UPackageMapClient *)0x0)) {
      pFVar3 = GetTypeName<UPackageMapClient>(&local_28);
      pwVar5 = L"";
      if ((pFVar3->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
      pFVar3 = GetFullNameForCastLogError<UPackageMap>(&local_18,(param_1->field0_0x0).DebugPtr);
      if ((pFVar3->Data).ArrayNum != 0) {
        pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar5,pwVar6);
    }
  }
  return pUVar4;
}

// CompareItems<UE::Math::TQuat<double>,int> @ 147a12bf0

bool __cdecl
CompareItems<UE::Math::TQuat<double>,int>(TQuat<double> *param_1,TQuat<double> *param_2,int param_3)

{
  double *pdVar1;
  double *pdVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint in_EAX;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_1 - (longlong)param_2;
    do {
      pdVar2 = (double *)(lVar6 + 0x10 + (longlong)param_2);
      lVar7 = -(ulonglong)(pdVar2[1] == param_2->W);
      pdVar1 = (double *)(lVar6 + (longlong)param_2);
      lVar8 = -(ulonglong)(pdVar1[1] == param_2->Y);
      auVar3._8_4_ = (int)lVar7;
      auVar3._0_8_ = -(ulonglong)(*pdVar2 == param_2->Z);
      auVar3._12_4_ = (int)((ulonglong)lVar7 >> 0x20);
      iVar5 = movmskpd((int)param_1,auVar3);
      auVar4._8_4_ = (int)lVar8;
      auVar4._0_8_ = -(ulonglong)(*pdVar1 == param_2->X);
      auVar4._12_4_ = (int)((ulonglong)lVar8 >> 0x20);
      in_EAX = movmskpd(in_EAX,auVar4);
      if ((iVar5 << 2 | in_EAX) != 0xf) {
        return false;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
      param_1 = (TQuat<double> *)&DAT_0000000f;
    } while (param_3 != 0);
  }
  return true;
}

// CompareItems<FKeyHandle,int> @ 147a12c40

bool __cdecl CompareItems<FKeyHandle,int>(FKeyHandle *param_1,FKeyHandle *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      if (*(uint *)(lVar1 + (longlong)param_2) != param_2->Index) {
        return false;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// CopyRowsToTable<FRichCurve,FRichCurveKey> @ 147a12d10

void __cdecl
CopyRowsToTable<FRichCurve,FRichCurveKey>
          (TMap<FName,FRichCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurve_*,0>_>
           *param_1,
          TMap<FName,FRealCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>_>
          *param_2,TArray<FString,TSizedDefaultAllocator<32>_> *param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  TMap<FName,FRichCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurve_*,0>_>
  *pTVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FRichCurve *this;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  undefined4 uStack_8c;
  TPairInitializer<FName_const_&,FRealCurve_*_&&> local_88;
  TMap<FName,FRichCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurve_*,0>_>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  longlong local_48;
  FRealCurve ***local_40;
  
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iVar12 = 0;
  iVar14 = 0;
  uVar7 = 1;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_147a12dad;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar8 = (int)lVar9 + -1 + iVar14;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_147a12dad:
  uVar11 = *(uint *)&param_1->field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar7,iVar12);
  TStack_70.CurrentBitIndex = iVar8;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_70._28_4_ = iVar8;
  TStack_70.BaseBitIndex = iVar14;
  uStack_50 = CONCAT44(uStack_8c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  local_78 = param_1;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar7 = *(uint *)&param_1->field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_147a12eb0;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_147a12eb0:
  while( true ) {
    pTVar5 = local_78;
    if (*(int *)&local_78->field_0x8 - *(int *)&local_78->field_0x34 != (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FRichCurve_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_70.CurrentBitIndex == uVar11) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar5 == param_1))
    break;
    lVar9 = *(longlong *)pTVar5 + (longlong)TStack_70.CurrentBitIndex * 0x18;
    this = operator_new(0x80);
    if (this == (FRichCurve *)0x0) {
      this = (FRichCurve *)0x0;
    }
    else {
      this->_padding_ = 0;
      this->_padding_ = 0;
      this->_padding_ = 0;
      this->_padding_ = 0;
      *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x404;
      this->_padding_ = 0;
      this->_padding_ = 0;
      this->_padding_ = 0;
      *(undefined4 *)&this->_padding_ = 0;
      *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
      *(undefined4 *)&this->_padding_ = 0xffffffff;
      *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
      this->_padding_ = 0;
      this->_padding_ = 0;
      this->_padding_ = 0;
      *(undefined4 *)&this->_padding_ = 0x7f7fffff;
      this->_padding_ = (longlong)&___7FRichCurve__6B_;
      (this->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->Keys).ArrayNum = 0;
      (this->Keys).ArrayMax = 0;
    }
    FRichCurve::SetKeys(this,(TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *)
                             (*(longlong *)(lVar9 + 8) + 0x70));
    local_40 = &local_88.Value;
    local_88.Value = (FRealCurve **)this;
    local_48 = lVar9;
    TSet<TTuple<FName,FRealCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,FRealCurve_*_&&>_>
              ((TSet<TTuple<FName,FRealCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>,FDefaultSetAllocator>
                *)param_2,&local_88,(bool *)&local_48);
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  return;
}

// CopyRowsToTable<FSimpleCurve,FSimpleCurveKey> @ 147a12fd0

void __cdecl
CopyRowsToTable<FSimpleCurve,FSimpleCurveKey>
          (TMap<FName,FSimpleCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSimpleCurve_*,0>_>
           *param_1,
          TMap<FName,FRealCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>_>
          *param_2,TArray<FString,TSizedDefaultAllocator<32>_> *param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  FSimpleCurve *pFVar4;
  code *pcVar5;
  TMap<FName,FSimpleCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSimpleCurve_*,0>_>
  *pTVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FSimpleCurve *this;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  undefined4 uStack_8c;
  TPairInitializer<FName_const_&,FRealCurve_*_&&> local_88;
  TMap<FName,FSimpleCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSimpleCurve_*,0>_>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  longlong local_48;
  FRealCurve ***local_40;
  
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iVar13 = 0;
  iVar15 = 0;
  uVar8 = 1;
  iVar9 = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar9 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_147a1306d;
      uVar12 = puVar16[lVar10 + 1];
    }
    uVar8 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar9 = (int)lVar10 + -1 + iVar15;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
  }
LAB_147a1306d:
  uVar12 = *(uint *)&param_1->field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar8,iVar13);
  TStack_70.CurrentBitIndex = iVar9;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_70._28_4_ = iVar9;
  TStack_70.BaseBitIndex = iVar15;
  uStack_50 = CONCAT44(uStack_8c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  local_78 = param_1;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar8 = *(uint *)&param_1->field_0x28;
  if (uVar12 != uVar8) {
    puVar14 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      uVar11 = uVar11 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_147a13170;
      uVar12 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar11;
    if ((int)uVar8 < (int)uVar12) {
      uVar12 = uVar8;
    }
  }
LAB_147a13170:
  while( true ) {
    pTVar6 = local_78;
    if (*(int *)&local_78->field_0x8 - *(int *)&local_78->field_0x34 != (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FSimpleCurve_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_70.CurrentBitIndex == uVar12) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == param_1))
    break;
    lVar10 = *(longlong *)pTVar6 + (longlong)TStack_70.CurrentBitIndex * 0x18;
    this = operator_new(0x88);
    if (this == (FSimpleCurve *)0x0) {
      this = (FSimpleCurve *)0x0;
    }
    else {
      this->_padding_ = 0;
      this->_padding_ = 0;
      this->_padding_ = 0;
      *(undefined4 *)&this->_padding_ = 0;
      *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
      *(undefined4 *)&this->_padding_ = 0xffffffff;
      *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
      this->_padding_ = 0;
      *(undefined4 *)&this->_padding_ = 0;
      this->_padding_ = 0;
      this->_padding_ = 0;
      *(undefined4 *)&this->_padding_ = 0x7f7fffff;
      *(undefined2 *)((longlong)&this->_padding_ + 4) = 0x404;
      this->_padding_ = (longlong)&___7FSimpleCurve__6B_;
      (this->InterpMode).Value = '\0';
      (this->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->Keys).ArrayNum = 0;
      (this->Keys).ArrayMax = 0;
    }
    pFVar4 = *(FSimpleCurve **)(lVar10 + 8);
    FSimpleCurve::SetKeys(this,&pFVar4->Keys);
    CopySharedInterpolationMode<FSimpleCurve>(pFVar4,this);
    local_40 = &local_88.Value;
    local_88.Value = (FRealCurve **)this;
    local_48 = lVar10;
    TSet<TTuple<FName,FRealCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,FRealCurve_*_&&>_>
              ((TSet<TTuple<FName,FRealCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>,FDefaultSetAllocator>
                *)param_2,&local_88,(bool *)&local_48);
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  return;
}

// CopySharedInterpolationMode<FRichCurve> @ 147a13290

void __cdecl CopySharedInterpolationMode<FRichCurve>(FRichCurve *param_1,FRichCurve *param_2)

{
  return;
}

// CopySharedInterpolationMode<FSimpleCurve> @ 147a132a0

void __cdecl CopySharedInterpolationMode<FSimpleCurve>(FSimpleCurve *param_1,FSimpleCurve *param_2)

{
  uchar uVar1;
  bool bVar2;
  undefined1 local_res8 [8];
  
  if (((param_1 != (FSimpleCurve *)0x0) && (param_2 != (FSimpleCurve *)0x0)) &&
     ((uVar1 = (param_1->InterpMode).Value, uVar1 != '\x02' ||
      (bVar2 = `FSimpleCurve::SetKeyInterpMode'::__l3::<lambda_1>::operator()(local_res8), bVar2))))
  {
    (param_2->InterpMode).Value = uVar1;
  }
  return;
}

// DefaultConstructItems<UE::Geometry::Spline::TTangentBezierControlPoint<UE::Math::TVector<double>_>,int> @ 147a142a0

void __cdecl
DefaultConstructItems<UE::Geometry::Spline::TTangentBezierControlPoint<UE::Math::TVector<double>_>,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x30);
    do {
      puVar1[-6] = 0;
      puVar1[-5] = 0;
      puVar1[-4] = 0;
      puVar1[-3] = 0;
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *(undefined1 *)(puVar1 + 3) = 0;
      param_2 = param_2 + -1;
      puVar1 = puVar1 + 10;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FPropertyRetirement,int> @ 147a142f0

void __cdecl DefaultConstructItems<FPropertyRetirement,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0xffffffffffffffff;
      *(undefined4 *)(puVar1 + 2) = 0;
      puVar1 = puVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FRichCurveKey,int> @ 147a14330

void __cdecl DefaultConstructItems<FRichCurveKey,int>(void *param_1,int param_2)

{
  undefined1 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined1 *)((longlong)param_1 + 2);
    do {
      *(undefined2 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      *(undefined8 *)(puVar1 + 2) = 0;
      *(undefined8 *)(puVar1 + 10) = 0;
      *(undefined8 *)(puVar1 + 0x12) = 0;
      puVar1 = puVar1 + 0x1c;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FInterpCurvePoint<float>,int> @ 147a14370

void __cdecl DefaultConstructItems<FInterpCurvePoint<float>,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<FInterpCurvePoint<UE::Math::TQuat<double>_>,int> @ 147a14380

void __cdecl
DefaultConstructItems<FInterpCurvePoint<UE::Math::TQuat<double>_>,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<FInterpCurvePoint<UE::Math::TVector<double>_>,int> @ 147a14390

void __cdecl
DefaultConstructItems<FInterpCurvePoint<UE::Math::TVector<double>_>,int>(void *param_1,int param_2)

{
  return;
}

// DestructItems<FDataDrivenConsoleVariable,int> @ 147a143a0

void __cdecl
DestructItems<FDataDrivenConsoleVariable,int>(FDataDrivenConsoleVariable *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  IConsoleManager *pIVar5;
  wchar_t *pwVar6;
  int *piVar7;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_38;
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if (param_2 != 0) {
    piVar7 = &(param_1->Name).Data.ArrayNum;
    do {
      if (1 < *piVar7) {
        if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
            (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            )) && (bVar3 = FDebug::CheckVerifyFailedImpl2
                                     ("Singleton != nullptr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                      ,0x4fb,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (*piVar7 == 0) {
          pwVar6 = L"";
        }
        else {
          pwVar6 = (wchar_t *)
                   (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)(piVar7 + -2))->
                   AllocatorInstance).Data;
        }
        plVar4 = (longlong *)
                 (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                           (IConsoleManager::Singleton,pwVar6,1);
        if (plVar4 != (longlong *)0x0) {
          local_38.AccessDetector.State =
               (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
          local_30.Data = (FScriptContainerElement *)0x0;
          local_28 = 0;
          (**(code **)(*plVar4 + 0xe0))(plVar4,&local_38);
          pIVar5 = IConsoleManager::Get();
          (**(code **)((longlong)*pIVar5 + 0xb8))(pIVar5,plVar4);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_38,(FWriteAccessScope *)&local_20);
          if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)local_30.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10)
            ;
            local_28 = 0;
          }
          if (local_20.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
          }
          if (local_30.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_30.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_38.AccessDetector);
        }
      }
      if (*(void **)(piVar7 + 0xe) != (void *)0x0) {
        FMemory::Free(*(void **)(piVar7 + 0xe));
      }
      if (*(void **)(piVar7 + 10) != (void *)0x0) {
        FMemory::Free(*(void **)(piVar7 + 10));
      }
      if (*(void **)(piVar7 + 2) != (void *)0x0) {
        FMemory::Free(*(void **)(piVar7 + 2));
      }
      pFVar1 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)(piVar7 + -2))->AllocatorInstance).
               Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      piVar7 = piVar7 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FPropertyRetirement,int> @ 147a14550

void __cdecl DestructItems<FPropertyRetirement,int>(FPropertyRetirement *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->DynamicState).SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FObjectReplicator::FRPCPendingLocalCall,int> @ 147a14590

void __cdecl
DestructItems<FObjectReplicator::FRPCPendingLocalCall,int>
          (FRPCPendingLocalCall *param_1,int param_2)

{
  ForElementType<FSetElementId> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->UnmappedGuids).Hash.SecondaryData;
    do {
      *(undefined4 *)(pFVar1 + 1) = 0;
      if (*pFVar1 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      TSparseArray<TSparseSetElement<FNetworkGUID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FNetworkGUID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FNetworkGUID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(pFVar1 + -8));
      if (pFVar1[-0xc] != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)pFVar1[-0xc]);
      }
      pFVar1 = pFVar1 + 0xf;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<INetDeltaBaseState,1>,int> @ 147a14600

void __cdecl
DestructItems<TSharedPtr<INetDeltaBaseState,1>,int>
          (TSharedPtr<INetDeltaBaseState,1> *param_1,int param_2)

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

// DestructItems<FRepChangedHistory,int> @ 147a14640

void __cdecl DestructItems<FRepChangedHistory,int>(FRepChangedHistory *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Changed;
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

// Do<`UE::Net::TNetControlMessageImpl<2,unsigned_int,enum_EEngineNetworkRuntimeFeatures>::Discard'::__l2::<lambda_1>,TTuple<unsigned_int,enum_EEngineNetworkRuntimeFeatures>_&> @ 147a146f0

void __cdecl
UE::Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1>_>::
Do<_UE::Net::TNetControlMessageImpl<2,unsigned_int,enum_EEngineNetworkRuntimeFeatures>::Discard_::__l2::<lambda_1>,TTuple<unsigned_int,enum_EEngineNetworkRuntimeFeatures>_&>
          (<lambda_1> *param_1,TTuple<unsigned_int,EEngineNetworkRuntimeFeatures> *param_2)

{
  undefined1 *puVar1;
  FArchive *pFVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  
  pFVar2 = *(FArchive **)param_1;
  puVar3 = (undefined4 *)**(undefined8 **)&pFVar2->field_0x8;
  if ((undefined4 *)(*(undefined8 **)&pFVar2->field_0x8)[1] < puVar3 + 1) {
    if ((pFVar2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar2,(uint *)param_2);
    }
  }
  else {
    *(undefined4 *)param_2 = *puVar3;
    **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 4;
  }
  pFVar2 = *(FArchive **)param_1;
  puVar1 = &param_2->field_0x4;
  puVar4 = (undefined2 *)**(undefined8 **)&pFVar2->field_0x8;
  if (puVar4 + 1 <= (undefined2 *)(*(undefined8 **)&pFVar2->field_0x8)[1]) {
    *(undefined2 *)puVar1 = *puVar4;
    **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 2;
    return;
  }
  if ((pFVar2->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147a14790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,puVar1,2);
    return;
  }
  FArchive::SerializeByteOrderSwapped(pFVar2,(ushort *)puVar1);
  return;
}

// Do<`UE::Net::TNetControlMessageImpl<0,unsigned_char,unsigned_int,FString,enum_EEngineNetworkRuntimeFeatures>::Discard'::__l2::<lambda_1>,TTuple<unsigned_char,unsigned_int,FString,enum_EEngineNetworkRuntimeFeatures>_&> @ 147a147b0

void __cdecl
UE::Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3>_>::
Do<_UE::Net::TNetControlMessageImpl<0,unsigned_char,unsigned_int,FString,enum_EEngineNetworkRuntimeFeatures>::Discard_::__l2::<lambda_1>,TTuple<unsigned_char,unsigned_int,FString,enum_EEngineNetworkRuntimeFeatures>_&>
          (<lambda_1> *param_1,
          TTuple<unsigned_char,unsigned_int,FString,EEngineNetworkRuntimeFeatures> *param_2)

{
  longlong *plVar1;
  undefined1 *puVar2;
  FArchive *pFVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  
  plVar1 = *(longlong **)param_1;
  puVar2 = *(undefined1 **)plVar1[1];
  if ((undefined1 *)((undefined8 *)plVar1[1])[1] < puVar2 + 1) {
    (**(code **)(*plVar1 + 0x188))(plVar1,param_2,1);
  }
  else {
    *(undefined1 *)param_2 = *puVar2;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 1;
  }
  pFVar3 = *(FArchive **)param_1;
  puVar2 = &param_2->field_0x4;
  puVar4 = (undefined4 *)**(undefined8 **)&pFVar3->field_0x8;
  if ((undefined4 *)(*(undefined8 **)&pFVar3->field_0x8)[1] < puVar4 + 1) {
    if ((pFVar3->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,puVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar3,(uint *)puVar2);
    }
  }
  else {
    *(undefined4 *)puVar2 = *puVar4;
    **(longlong **)&pFVar3->field_0x8 = **(longlong **)&pFVar3->field_0x8 + 4;
  }
  ::operator<<(*(FArchive **)param_1,(FString *)&param_2->field_0x8);
  pFVar3 = *(FArchive **)param_1;
  puVar2 = &param_2->field_0x18;
  puVar5 = (undefined2 *)**(undefined8 **)&pFVar3->field_0x8;
  if (puVar5 + 1 <= (undefined2 *)(*(undefined8 **)&pFVar3->field_0x8)[1]) {
    *(undefined2 *)puVar2 = *puVar5;
    **(longlong **)&pFVar3->field_0x8 = **(longlong **)&pFVar3->field_0x8 + 2;
    return;
  }
  if ((pFVar3->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147a14896. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,puVar2,2);
    return;
  }
  FArchive::SerializeByteOrderSwapped(pFVar3,(ushort *)puVar2);
  return;
}

// Do<`UE::Net::TNetControlMessageImpl<30,enum_UE::Net::ENetRefHandleError,unsigned___int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>::Discard'::__l2::<lambda_1>,TTuple<enum_UE::Net::ENetRefHandleError,unsigned___int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>_&> @ 147a148c0

void __cdecl
UE::Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2>_>::
Do<_UE::Net::TNetControlMessageImpl<30,enum_UE::Net::ENetRefHandleError,unsigned___int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>::Discard_::__l2::<lambda_1>,TTuple<enum_UE::Net::ENetRefHandleError,unsigned___int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>_&>
          (<lambda_1> *param_1,
          TTuple<UE::Net::ENetRefHandleError,unsigned___int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  undefined1 *puVar1;
  FArchive *pFVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  
  pFVar2 = *(FArchive **)param_1;
  puVar3 = (undefined4 *)**(undefined8 **)&pFVar2->field_0x8;
  if ((undefined4 *)(*(undefined8 **)&pFVar2->field_0x8)[1] < puVar3 + 1) {
    if ((pFVar2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar2,(uint *)param_2);
    }
  }
  else {
    *(undefined4 *)param_2 = *puVar3;
    **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 4;
  }
  pFVar2 = *(FArchive **)param_1;
  puVar1 = &param_2->field_0x8;
  puVar4 = (undefined8 *)**(longlong **)&pFVar2->field_0x8;
  if ((undefined8 *)(*(longlong **)&pFVar2->field_0x8)[1] < puVar4 + 1) {
    if ((pFVar2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,puVar1,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar2,(ulong64 *)puVar1);
    }
  }
  else {
    *(undefined8 *)puVar1 = *puVar4;
    **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 8;
  }
  TArrayPrivateFriend::Serialize<unsigned___int64,TSizedDefaultAllocator<32>_>
            (*(FArchive **)param_1,
             (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)&param_2->field_0x10);
  return;
}

// FeaturePointMethod<FRichCurve_const_> @ 147a169a0

void __cdecl
FeaturePointMethod<FRichCurve_const_>
          (FRichCurve *param_1,float param_2,float param_3,float param_4,float param_5,int param_6,
          int param_7,float *param_8,float *param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (param_6 < param_7) {
    fVar3 = FRichCurve::Eval(param_1,param_2 - param_5,0.0);
    fVar2 = __real_bf800000;
    fVar1 = __real_3f800000;
    fVar3 = param_4 - fVar3;
    while (param_2 = param_2 + param_5, param_2 < param_3 + param_5) {
      fVar4 = FRichCurve::Eval(param_1,param_2,0.0);
      fVar6 = *param_8;
      if (*param_8 <= fVar4) {
        fVar6 = fVar4;
      }
      fVar7 = fVar4 - param_4;
      *param_8 = fVar6;
      fVar6 = *param_9;
      if (fVar4 <= *param_9) {
        fVar6 = fVar4;
      }
      *param_9 = fVar6;
      fVar6 = fVar1;
      if ((fVar7 <= 0.0) && (fVar6 = fVar2, 0.0 <= fVar7)) {
        fVar6 = 0.0;
      }
      fVar5 = fVar1;
      if ((fVar3 <= 0.0) && (fVar5 = fVar2, 0.0 <= fVar3)) {
        fVar5 = 0.0;
      }
      fVar3 = fVar7;
      param_4 = fVar4;
      if (fVar6 != fVar5) {
        fVar4 = param_5 * __real_3ecccccd;
        fVar7 = param_2 - (param_5 + param_5);
        fVar6 = FRichCurve::Eval(param_1,fVar7,0.0);
        FeaturePointMethod<FRichCurve_const_>
                  (param_1,fVar7,param_2,fVar6,fVar4,param_6 + 1,param_7,param_8,param_9);
      }
    }
  }
  return;
}

// GetFullNameForCastLogError<UPackageMap> @ 147a190b0

FString * __cdecl
GetFullNameForCastLogError<UPackageMap>(FString *__return_storage_ptr__,UPackageMap *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetTableAsCSV_Internal<FRichCurve> @ 147a19140

void __cdecl
GetTableAsCSV_Internal<FRichCurve>
          (TMap<FName,FRichCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurve_*,0>_>
           *param_1,FString *param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FString *pFVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  TArray<FRichCurve_*,TSizedDefaultAllocator<32>_> local_88;
  TArray<FName,TSizedDefaultAllocator<32>_> local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  uVar5 = 0;
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  TMapBase<FName,FRichCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurve_*,0>_>
  ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,FRichCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurve_*,0>_>
              *)param_1,&local_78);
  TMapBase<FName,FRichCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurve_*,0>_>
  ::GenerateValueArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,FRichCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurve_*,0>_>
              *)param_1,&local_88);
  uVar13 = 1;
  if (1 < local_88.ArrayNum) {
    uVar8 = 0;
    uVar10 = 0;
    uVar14 = 8;
    iVar7 = local_88.ArrayNum;
    do {
      uVar5 = 0;
      if ((int)(uint)uVar8 < iVar7) {
        uVar5 = ~(uint)uVar8 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = local_88.ArrayNum;
      }
      iVar1 = *(int *)(*(longlong *)(local_88.AllocatorInstance.Data + uVar10) + 0x78);
      uVar5 = 0;
      if ((int)uVar13 < iVar7) {
        uVar5 = ~uVar13 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = local_88.ArrayNum;
      }
      uVar9 = (ulonglong)uVar13;
      if (*(int *)(*(longlong *)(local_88.AllocatorInstance.Data + uVar14) + 0x78) <= iVar1) {
        uVar9 = uVar8;
      }
      uVar5 = (uint)uVar9;
      uVar13 = uVar13 + 1;
      uVar12 = uVar14;
      if (*(int *)(*(longlong *)(local_88.AllocatorInstance.Data + uVar14) + 0x78) <= iVar1) {
        uVar12 = uVar10;
      }
      uVar8 = uVar9;
      uVar10 = uVar12;
      uVar14 = uVar14 + 8;
    } while ((int)uVar13 < iVar7);
  }
  uVar8 = 0;
  FString::AppendChars(param_2,L"---",3);
  uVar13 = 0;
  if ((int)uVar5 < local_88.ArrayNum) {
    uVar13 = ~uVar5 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar2 = *(longlong *)(local_88.AllocatorInstance.Data + (longlong)(int)uVar5 * 8);
  uVar10 = uVar8;
  while ((iVar7 = (int)uVar10, -1 < iVar7 && (iVar7 < *(int *)(lVar2 + 0x78)))) {
    if ((iVar7 < 0) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FString::PrintfImpl(&local_68,L",%f");
    uVar5 = local_68.Data.ArrayNum - 1;
    if (local_68.Data.ArrayNum == 0) {
      uVar5 = 0;
    }
    FString::AppendChars(param_2,(wchar_t *)local_68.Data.AllocatorInstance.Data,uVar5);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    uVar10 = (ulonglong)(iVar7 + 1);
  }
  FString::AppendChars(param_2,L"\n",1);
  uVar10 = uVar8;
  uVar14 = uVar8;
  if (0 < local_88.ArrayNum) {
    do {
      uVar11 = (uint)uVar10;
      uVar13 = 0;
      uVar5 = uVar13;
      if ((int)uVar11 < local_78.ArrayNum) {
        uVar5 = ~uVar11 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar6 = FName::ToString((FName *)(local_78.AllocatorInstance.Data + (longlong)(int)uVar11 * 8
                                        ),&local_48);
      iVar7 = (pFVar6->Data).ArrayNum;
      uVar5 = iVar7 - 1;
      if (iVar7 == 0) {
        uVar5 = uVar13;
      }
      FString::AppendChars(param_2,(wchar_t *)(pFVar6->Data).AllocatorInstance.Data,uVar5);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      uVar5 = uVar13;
      if ((int)uVar11 < local_88.ArrayNum) {
        uVar5 = ~uVar11 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = *(longlong *)(local_88.AllocatorInstance.Data + uVar14);
      uVar10 = uVar8;
      while ((iVar7 = (int)uVar10, -1 < iVar7 && (iVar7 < *(int *)(lVar2 + 0x78)))) {
        if ((iVar7 < 0) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FString::PrintfImpl(&local_58,L",%f");
        uVar5 = local_58.Data.ArrayNum - 1;
        if (local_58.Data.ArrayNum == 0) {
          uVar5 = uVar13;
        }
        FString::AppendChars(param_2,(wchar_t *)local_58.Data.AllocatorInstance.Data,uVar5);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        uVar10 = (ulonglong)(iVar7 + 1);
      }
      FString::AppendChars(param_2,L"\n",1);
      uVar10 = (ulonglong)(uVar11 + 1);
      uVar14 = uVar14 + 8;
    } while ((int)(uVar11 + 1) < local_88.ArrayNum);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return;
}

// GetTableAsCSV_Internal<FSimpleCurve> @ 147a195f0

void __cdecl
GetTableAsCSV_Internal<FSimpleCurve>
          (TMap<FName,FSimpleCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSimpleCurve_*,0>_>
           *param_1,FString *param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong uVar4;
  bool bVar5;
  uint uVar6;
  FString *pFVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  TArray<FSimpleCurve_*,TSizedDefaultAllocator<32>_> local_88;
  TArray<FName,TSizedDefaultAllocator<32>_> local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  uVar10 = 0;
  uVar6 = 0;
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  TMapBase<FName,FSimpleCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSimpleCurve_*,0>_>
  ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,FSimpleCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSimpleCurve_*,0>_>
              *)param_1,&local_78);
  TMapBase<FName,FSimpleCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSimpleCurve_*,0>_>
  ::GenerateValueArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,FSimpleCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSimpleCurve_*,0>_>
              *)param_1,&local_88);
  uVar13 = 1;
  if (1 < local_88.ArrayNum) {
    uVar14 = 8;
    uVar11 = uVar10;
    iVar9 = local_88.ArrayNum;
    do {
      uVar8 = (uint)uVar10;
      uVar6 = 0;
      if ((int)uVar8 < iVar9) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar9 = local_88.ArrayNum;
      }
      iVar1 = *(int *)(*(longlong *)(local_88.AllocatorInstance.Data + uVar11) + 0x80);
      uVar6 = 0;
      if ((int)uVar13 < iVar9) {
        uVar6 = ~uVar13 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar9 = local_88.ArrayNum;
      }
      uVar12 = uVar14;
      uVar6 = uVar13;
      uVar4 = (ulonglong)uVar13;
      if (*(int *)(*(longlong *)(local_88.AllocatorInstance.Data + uVar14) + 0x80) <= iVar1) {
        uVar12 = uVar11;
        uVar6 = uVar8;
        uVar4 = uVar10;
      }
      uVar10 = uVar4;
      uVar13 = uVar13 + 1;
      uVar14 = uVar14 + 8;
      uVar11 = uVar12;
    } while ((int)uVar13 < iVar9);
  }
  uVar10 = 0;
  FString::AppendChars(param_2,L"---",3);
  uVar13 = 0;
  if ((int)uVar6 < local_88.ArrayNum) {
    uVar13 = ~uVar6 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar2 = *(longlong *)(local_88.AllocatorInstance.Data + (longlong)(int)uVar6 * 8);
  uVar14 = uVar10;
  while ((iVar9 = (int)uVar14, -1 < iVar9 && (iVar9 < *(int *)(lVar2 + 0x80)))) {
    if ((iVar9 < 0) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FString::PrintfImpl(&local_68,L",%f");
    uVar13 = local_68.Data.ArrayNum - 1;
    if (local_68.Data.ArrayNum == 0) {
      uVar13 = 0;
    }
    FString::AppendChars(param_2,(wchar_t *)local_68.Data.AllocatorInstance.Data,uVar13);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    uVar14 = (ulonglong)(iVar9 + 1);
  }
  FString::AppendChars(param_2,L"\n",1);
  uVar14 = uVar10;
  uVar11 = uVar10;
  if (0 < local_88.ArrayNum) {
    do {
      uVar8 = (uint)uVar14;
      uVar6 = 0;
      uVar13 = uVar6;
      if ((int)uVar8 < local_78.ArrayNum) {
        uVar13 = ~uVar8 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar7 = FName::ToString((FName *)(local_78.AllocatorInstance.Data + (longlong)(int)uVar8 * 8)
                               ,&local_48);
      iVar9 = (pFVar7->Data).ArrayNum;
      uVar13 = iVar9 - 1;
      if (iVar9 == 0) {
        uVar13 = uVar6;
      }
      FString::AppendChars(param_2,(wchar_t *)(pFVar7->Data).AllocatorInstance.Data,uVar13);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      uVar13 = uVar6;
      if ((int)uVar8 < local_88.ArrayNum) {
        uVar13 = ~uVar8 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = *(longlong *)(local_88.AllocatorInstance.Data + uVar11);
      uVar14 = uVar10;
      while ((iVar9 = (int)uVar14, -1 < iVar9 && (iVar9 < *(int *)(lVar2 + 0x80)))) {
        if ((iVar9 < 0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FString::PrintfImpl(&local_58,L",%f");
        uVar13 = local_58.Data.ArrayNum - 1;
        if (local_58.Data.ArrayNum == 0) {
          uVar13 = uVar6;
        }
        FString::AppendChars(param_2,(wchar_t *)local_58.Data.AllocatorInstance.Data,uVar13);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        uVar14 = (ulonglong)(iVar9 + 1);
      }
      FString::AppendChars(param_2,L"\n",1);
      uVar14 = (ulonglong)(uVar8 + 1);
      uVar11 = uVar11 + 8;
    } while ((int)(uVar8 + 1) < local_88.ArrayNum);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return;
}

// GetTableAsString_Internal<FRichCurve> @ 147a19aa0

void __cdecl
GetTableAsString_Internal<FRichCurve>
          (TMap<FName,FRichCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurve_*,0>_>
           *param_1,FString *param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FString *pFVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  TArray<FRichCurve_*,TSizedDefaultAllocator<32>_> local_88;
  TArray<FName,TSizedDefaultAllocator<32>_> local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  uVar5 = 0;
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  TMapBase<FName,FRichCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurve_*,0>_>
  ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,FRichCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurve_*,0>_>
              *)param_1,&local_78);
  TMapBase<FName,FRichCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurve_*,0>_>
  ::GenerateValueArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,FRichCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurve_*,0>_>
              *)param_1,&local_88);
  uVar13 = 1;
  if (1 < local_88.ArrayNum) {
    uVar8 = 0;
    uVar10 = 0;
    uVar14 = 8;
    iVar7 = local_88.ArrayNum;
    do {
      uVar5 = 0;
      if ((int)(uint)uVar8 < iVar7) {
        uVar5 = ~(uint)uVar8 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = local_88.ArrayNum;
      }
      iVar1 = *(int *)(*(longlong *)(local_88.AllocatorInstance.Data + uVar10) + 0x78);
      uVar5 = 0;
      if ((int)uVar13 < iVar7) {
        uVar5 = ~uVar13 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = local_88.ArrayNum;
      }
      uVar9 = (ulonglong)uVar13;
      if (*(int *)(*(longlong *)(local_88.AllocatorInstance.Data + uVar14) + 0x78) <= iVar1) {
        uVar9 = uVar8;
      }
      uVar5 = (uint)uVar9;
      uVar13 = uVar13 + 1;
      uVar12 = uVar14;
      if (*(int *)(*(longlong *)(local_88.AllocatorInstance.Data + uVar14) + 0x78) <= iVar1) {
        uVar12 = uVar10;
      }
      uVar8 = uVar9;
      uVar10 = uVar12;
      uVar14 = uVar14 + 8;
    } while ((int)uVar13 < iVar7);
  }
  uVar8 = 0;
  FString::AppendChars(param_2,L"---",3);
  uVar13 = 0;
  if ((int)uVar5 < local_88.ArrayNum) {
    uVar13 = ~uVar5 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar2 = *(longlong *)(local_88.AllocatorInstance.Data + (longlong)(int)uVar5 * 8);
  uVar10 = uVar8;
  while ((iVar7 = (int)uVar10, -1 < iVar7 && (iVar7 < *(int *)(lVar2 + 0x78)))) {
    if ((iVar7 < 0) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FString::PrintfImpl(&local_68,L",%f");
    uVar5 = local_68.Data.ArrayNum - 1;
    if (local_68.Data.ArrayNum == 0) {
      uVar5 = 0;
    }
    FString::AppendChars(param_2,(wchar_t *)local_68.Data.AllocatorInstance.Data,uVar5);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    uVar10 = (ulonglong)(iVar7 + 1);
  }
  FString::AppendChars(param_2,L"\n",1);
  uVar10 = uVar8;
  uVar14 = uVar8;
  if (0 < local_88.ArrayNum) {
    do {
      uVar11 = (uint)uVar10;
      uVar13 = 0;
      uVar5 = uVar13;
      if ((int)uVar11 < local_78.ArrayNum) {
        uVar5 = ~uVar11 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar6 = FName::ToString((FName *)(local_78.AllocatorInstance.Data + (longlong)(int)uVar11 * 8
                                        ),&local_48);
      iVar7 = (pFVar6->Data).ArrayNum;
      uVar5 = iVar7 - 1;
      if (iVar7 == 0) {
        uVar5 = uVar13;
      }
      FString::AppendChars(param_2,(wchar_t *)(pFVar6->Data).AllocatorInstance.Data,uVar5);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      uVar5 = uVar13;
      if ((int)uVar11 < local_88.ArrayNum) {
        uVar5 = ~uVar11 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = *(longlong *)(local_88.AllocatorInstance.Data + uVar14);
      uVar10 = uVar8;
      while ((iVar7 = (int)uVar10, -1 < iVar7 && (iVar7 < *(int *)(lVar2 + 0x78)))) {
        if ((iVar7 < 0) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FString::PrintfImpl(&local_58,L",%f");
        uVar5 = local_58.Data.ArrayNum - 1;
        if (local_58.Data.ArrayNum == 0) {
          uVar5 = uVar13;
        }
        FString::AppendChars(param_2,(wchar_t *)local_58.Data.AllocatorInstance.Data,uVar5);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        uVar10 = (ulonglong)(iVar7 + 1);
      }
      FString::AppendChars(param_2,L"\n",1);
      uVar10 = (ulonglong)(uVar11 + 1);
      uVar14 = uVar14 + 8;
    } while ((int)(uVar11 + 1) < local_88.ArrayNum);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return;
}

// GetTableAsString_Internal<FSimpleCurve> @ 147a19f50

void __cdecl
GetTableAsString_Internal<FSimpleCurve>
          (TMap<FName,FSimpleCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSimpleCurve_*,0>_>
           *param_1,FString *param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong uVar4;
  bool bVar5;
  uint uVar6;
  FString *pFVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  TArray<FSimpleCurve_*,TSizedDefaultAllocator<32>_> local_88;
  TArray<FName,TSizedDefaultAllocator<32>_> local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  uVar10 = 0;
  uVar6 = 0;
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  TMapBase<FName,FSimpleCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSimpleCurve_*,0>_>
  ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,FSimpleCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSimpleCurve_*,0>_>
              *)param_1,&local_78);
  TMapBase<FName,FSimpleCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSimpleCurve_*,0>_>
  ::GenerateValueArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,FSimpleCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSimpleCurve_*,0>_>
              *)param_1,&local_88);
  uVar13 = 1;
  if (1 < local_88.ArrayNum) {
    uVar14 = 8;
    uVar11 = uVar10;
    iVar9 = local_88.ArrayNum;
    do {
      uVar8 = (uint)uVar10;
      uVar6 = 0;
      if ((int)uVar8 < iVar9) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar9 = local_88.ArrayNum;
      }
      iVar1 = *(int *)(*(longlong *)(local_88.AllocatorInstance.Data + uVar11) + 0x80);
      uVar6 = 0;
      if ((int)uVar13 < iVar9) {
        uVar6 = ~uVar13 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar9 = local_88.ArrayNum;
      }
      uVar12 = uVar14;
      uVar6 = uVar13;
      uVar4 = (ulonglong)uVar13;
      if (*(int *)(*(longlong *)(local_88.AllocatorInstance.Data + uVar14) + 0x80) <= iVar1) {
        uVar12 = uVar11;
        uVar6 = uVar8;
        uVar4 = uVar10;
      }
      uVar10 = uVar4;
      uVar13 = uVar13 + 1;
      uVar14 = uVar14 + 8;
      uVar11 = uVar12;
    } while ((int)uVar13 < iVar9);
  }
  uVar10 = 0;
  FString::AppendChars(param_2,L"---",3);
  uVar13 = 0;
  if ((int)uVar6 < local_88.ArrayNum) {
    uVar13 = ~uVar6 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar2 = *(longlong *)(local_88.AllocatorInstance.Data + (longlong)(int)uVar6 * 8);
  uVar14 = uVar10;
  while ((iVar9 = (int)uVar14, -1 < iVar9 && (iVar9 < *(int *)(lVar2 + 0x80)))) {
    if ((iVar9 < 0) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FString::PrintfImpl(&local_68,L",%f");
    uVar13 = local_68.Data.ArrayNum - 1;
    if (local_68.Data.ArrayNum == 0) {
      uVar13 = 0;
    }
    FString::AppendChars(param_2,(wchar_t *)local_68.Data.AllocatorInstance.Data,uVar13);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    uVar14 = (ulonglong)(iVar9 + 1);
  }
  FString::AppendChars(param_2,L"\n",1);
  uVar14 = uVar10;
  uVar11 = uVar10;
  if (0 < local_88.ArrayNum) {
    do {
      uVar8 = (uint)uVar14;
      uVar6 = 0;
      uVar13 = uVar6;
      if ((int)uVar8 < local_78.ArrayNum) {
        uVar13 = ~uVar8 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar7 = FName::ToString((FName *)(local_78.AllocatorInstance.Data + (longlong)(int)uVar8 * 8)
                               ,&local_48);
      iVar9 = (pFVar7->Data).ArrayNum;
      uVar13 = iVar9 - 1;
      if (iVar9 == 0) {
        uVar13 = uVar6;
      }
      FString::AppendChars(param_2,(wchar_t *)(pFVar7->Data).AllocatorInstance.Data,uVar13);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      uVar13 = uVar6;
      if ((int)uVar8 < local_88.ArrayNum) {
        uVar13 = ~uVar8 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = *(longlong *)(local_88.AllocatorInstance.Data + uVar11);
      uVar14 = uVar10;
      while ((iVar9 = (int)uVar14, -1 < iVar9 && (iVar9 < *(int *)(lVar2 + 0x80)))) {
        if ((iVar9 < 0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FString::PrintfImpl(&local_58,L",%f");
        uVar13 = local_58.Data.ArrayNum - 1;
        if (local_58.Data.ArrayNum == 0) {
          uVar13 = uVar6;
        }
        FString::AppendChars(param_2,(wchar_t *)local_58.Data.AllocatorInstance.Data,uVar13);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        uVar14 = (ulonglong)(iVar9 + 1);
      }
      FString::AppendChars(param_2,L"\n",1);
      uVar14 = (ulonglong)(uVar8 + 1);
      uVar11 = uVar11 + 8;
    } while ((int)(uVar8 + 1) < local_88.ArrayNum);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return;
}

// GetTypeHash<FQueuedBunchObjectReference_const_,1> @ 147a1a400

uint __cdecl
GetTypeHash<FQueuedBunchObjectReference_const_,1>
          (TSharedRef<FQueuedBunchObjectReference_const_,1> *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// GetTypeName<UActorChannel> @ 147a1a430

FString * __cdecl GetTypeName<UActorChannel>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UActorChannel_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UPackageMapClient> @ 147a1a470

FString * __cdecl GetTypeName<UPackageMapClient>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UPackageMapClient_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<UClass_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UClass_*,int>,TDefaultMapHashableKeyFuncs<UClass_*,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UClass_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,int,0>_>::FValueComparisonClass<`ListOpenActorChannels'::__l2::FCompareActorClassCount>_>_>_> @ 147a1a930

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<UClass_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UClass_*,int>,TDefaultMapHashableKeyFuncs<UClass_*,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UClass_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,int,0>_>::FValueComparisonClass<_ListOpenActorChannels_::__l2::FCompareActorClassCount>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<UClass_*,int>,TDefaultMapHashableKeyFuncs<UClass_*,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UClass_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,int,0>_>::FValueComparisonClass<_void___cdecl_ListOpenActorChannels(UWorld_*)_::_2_::FCompareActorClassCount>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_s_1 TVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar14;
  int iVar15;
  
  if (param_2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar8 = (param_2 + -2) / 2;
  iVar9 = iVar8 * 2 + 1;
  iVar15 = iVar9;
  iVar10 = iVar8;
  do {
    while (param_2 <= iVar9) {
LAB_147a1aa3d:
      if (iVar10 == 0) {
        iVar9 = param_2 + -1;
        lVar11 = (longlong)iVar9;
        if (0 < iVar9) {
          pTVar14 = param_1 + lVar11;
          do {
            uVar4 = *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 8);
            uVar2 = *(undefined8 *)((param_1->ElementData).Pad + 0x10);
            TVar5 = param_1->_s_1;
            uVar6 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            param_1->_s_1 = pTVar14->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar4;
            *(undefined8 *)((param_1->ElementData).Pad + 0x10) =
                 *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 0x10);
            pTVar14->_s_1 = TVar5;
            *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 8) = uVar6;
            *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 0x10) = uVar2;
            iVar15 = 0;
            if (1 < iVar9) {
              do {
                iVar8 = iVar15 * 2;
                iVar10 = iVar8 + 1;
                if (iVar8 + 2 < iVar9) {
                  if (*(int *)((longlong)param_1 + (longlong)iVar8 * 0x18 + 0x38) <
                      *(int *)((longlong)param_1 + (longlong)iVar10 * 0x18 + 8)) {
                    iVar10 = iVar8;
                  }
                  iVar10 = iVar10 + 1;
                }
                lVar12 = (longlong)iVar15;
                pTVar1 = param_1 + iVar10;
                if (*(int *)((pTVar1->ElementData).Pad + 8) <=
                    *(int *)((longlong)param_1 + lVar12 * 0x18 + 8)) break;
                uVar4 = *(undefined8 *)((pTVar1->ElementData).Pad + 8);
                uVar2 = *(undefined8 *)((longlong)param_1 + lVar12 * 0x18 + 0x10);
                TVar5 = param_1[lVar12]._s_1;
                uVar6 = *(undefined8 *)((longlong)param_1[lVar12].ElementData.Pad + 8);
                param_1[lVar12]._s_1 = pTVar1->_s_1;
                *(undefined8 *)((longlong)param_1[lVar12].ElementData.Pad + 8) = uVar4;
                *(undefined8 *)((longlong)param_1 + lVar12 * 0x18 + 0x10) =
                     *(undefined8 *)((pTVar1->ElementData).Pad + 0x10);
                pTVar1->_s_1 = TVar5;
                *(undefined8 *)((pTVar1->ElementData).Pad + 8) = uVar6;
                *(undefined8 *)((pTVar1->ElementData).Pad + 0x10) = uVar2;
                iVar15 = iVar10;
              } while (iVar10 * 2 + 1 < iVar9);
            }
            iVar9 = iVar9 + -1;
            lVar11 = lVar11 + -1;
            pTVar14 = pTVar14 + -1;
          } while (0 < lVar11);
        }
        return;
      }
      iVar8 = iVar10 + -1;
      iVar9 = iVar15 + -2;
      iVar15 = iVar9;
      iVar10 = iVar8;
    }
    iVar9 = iVar8 * 2;
    iVar13 = iVar9 + 1;
    if (iVar9 + 2 < param_2) {
      if (*(int *)((longlong)param_1 + (longlong)iVar9 * 0x18 + 0x38) <
          *(int *)((longlong)param_1 + (longlong)iVar13 * 0x18 + 8)) {
        iVar13 = iVar9;
      }
      iVar13 = iVar13 + 1;
    }
    lVar11 = (longlong)iVar8;
    pTVar14 = param_1 + iVar13;
    if (*(int *)((pTVar14->ElementData).Pad + 8) <= *(int *)((longlong)param_1 + lVar11 * 0x18 + 8))
    goto LAB_147a1aa3d;
    uVar4 = *(undefined8 *)((pTVar14->ElementData).Pad + 8);
    iVar9 = iVar13 * 2 + 1;
    uVar2 = *(undefined8 *)((longlong)param_1 + lVar11 * 0x18 + 0x10);
    TVar5 = param_1[lVar11]._s_1;
    uVar6 = *(undefined8 *)((longlong)param_1[lVar11].ElementData.Pad + 8);
    param_1[lVar11]._s_1 = pTVar14->_s_1;
    *(undefined8 *)((longlong)param_1[lVar11].ElementData.Pad + 8) = uVar4;
    *(undefined8 *)((longlong)param_1 + lVar11 * 0x18 + 0x10) =
         *(undefined8 *)((pTVar14->ElementData).Pad + 0x10);
    pTVar14->_s_1 = TVar5;
    *(undefined8 *)((pTVar14->ElementData).Pad + 8) = uVar6;
    *(undefined8 *)((pTVar14->ElementData).Pad + 0x10) = uVar2;
    iVar8 = iVar13;
  } while( true );
}

// InternalConstructor<ACullDistanceVolume> @ 147a1ab50

void __cdecl InternalConstructor<ACullDistanceVolume>(FObjectInitializer *param_1)

{
  if ((ACullDistanceVolume *)param_1->Obj != (ACullDistanceVolume *)0x0) {
    ACullDistanceVolume::ACullDistanceVolume((ACullDistanceVolume *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UCurveBase> @ 147a1ab70

void __cdecl InternalConstructor<UCurveBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &UCurveBase::_vftable__for__UObject__;
    *(undefined ***)(this + 1) = &UCurveBase::_vftable__for__FCurveOwnerInterface__;
  }
  return;
}

// InternalConstructor<UCurveFloat> @ 147a1abb0

void __cdecl InternalConstructor<UCurveFloat>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &UCurveFloat::_vftable__for__UObject__;
    *(undefined ***)(this + 1) = &UCurveFloat::_vftable__for__FCurveOwnerInterface__;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined4 *)&this[2].field_0x10 = 0;
    *(undefined4 *)&this[2].field_0x14 = 0x80;
    *(undefined4 *)&this[2].field_0x18 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x1c = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined4 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined4 *)&this[3].field_0x20 = 0x7f7fffff;
    *(undefined2 *)&this[3].field_0x24 = 0x404;
    *(undefined ***)&this[1].field_0x8 = &___7FRichCurve__6B_;
    *(undefined8 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UCurveLinearColor> @ 147a1ac60

void __cdecl InternalConstructor<UCurveLinearColor>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &UCurveLinearColor::_vftable__for__UObject__;
    *(undefined ***)(this + 1) = &UCurveLinearColor::_vftable__for__FCurveOwnerInterface__;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined4 *)&this[2].field_0x10 = 0;
    *(undefined4 *)&this[2].field_0x14 = 0x80;
    *(undefined4 *)&this[2].field_0x18 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x1c = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined4 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined4 *)&this[3].field_0x20 = 0x7f7fffff;
    *(undefined2 *)&this[3].field_0x24 = 0x404;
    *(undefined ***)&this[1].field_0x8 = &___7FRichCurve__6B_;
    *(undefined8 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x18 = 0;
    *(undefined8 *)&this[4].field_0x20 = 0;
    *(undefined8 *)&this[5].field_0x10 = 0;
    *(undefined4 *)&this[5].field_0x18 = 0;
    *(undefined4 *)&this[5].field_0x1c = 0x80;
    *(undefined4 *)&this[5].field_0x20 = 0xffffffff;
    *(undefined4 *)&this[5].field_0x24 = 0;
    *(undefined8 *)&this[6].field_0x8 = 0;
    *(undefined4 *)&this[6].field_0x10 = 0;
    *(undefined8 *)&this[6].field_0x18 = 0;
    *(undefined8 *)&this[6].field_0x20 = 0;
    *(undefined4 *)(this + 7) = 0x7f7fffff;
    *(undefined2 *)&this[7].field_0x4 = 0x404;
    *(undefined ***)&this[4].field_0x10 = &___7FRichCurve__6B_;
    *(undefined8 *)&this[7].field_0x8 = 0;
    *(undefined8 *)&this[7].field_0x10 = 0;
    *(undefined8 *)&this[7].field_0x20 = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)&this[8].field_0x18 = 0;
    *(undefined4 *)&this[8].field_0x20 = 0;
    *(undefined4 *)&this[8].field_0x24 = 0x80;
    *(undefined4 *)(this + 9) = 0xffffffff;
    *(undefined4 *)&this[9].field_0x4 = 0;
    *(undefined8 *)&this[9].field_0x10 = 0;
    *(undefined4 *)&this[9].field_0x18 = 0;
    *(undefined8 *)&this[9].field_0x20 = 0;
    *(undefined8 *)(this + 10) = 0;
    *(undefined4 *)&this[10].field_0x8 = 0x7f7fffff;
    *(undefined2 *)&this[10].field_0xc = 0x404;
    *(undefined ***)&this[7].field_0x18 = &___7FRichCurve__6B_;
    *(undefined8 *)&this[10].field_0x10 = 0;
    *(undefined8 *)&this[10].field_0x18 = 0;
    *(undefined8 *)(this + 0xb) = 0;
    *(undefined8 *)&this[0xb].field_0x8 = 0;
    *(undefined8 *)&this[0xb].field_0x20 = 0;
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)&this[0xc].field_0x4 = 0x80;
    *(undefined4 *)&this[0xc].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[0xc].field_0xc = 0;
    *(undefined8 *)&this[0xc].field_0x18 = 0;
    *(undefined4 *)&this[0xc].field_0x20 = 0;
    *(undefined8 *)(this + 0xd) = 0;
    *(undefined8 *)&this[0xd].field_0x8 = 0;
    *(undefined4 *)&this[0xd].field_0x10 = 0x7f7fffff;
    *(undefined2 *)&this[0xd].field_0x14 = 0x404;
    *(undefined ***)&this[10].field_0x20 = &___7FRichCurve__6B_;
    *(undefined8 *)&this[0xd].field_0x18 = 0;
    *(undefined8 *)&this[0xd].field_0x20 = 0;
    *(undefined4 *)(this + 0xe) = 0;
    *(undefined4 *)&this[0xe].field_0x4 = 0x3f800000;
    *(undefined4 *)&this[0xe].field_0x8 = 0x3f800000;
    *(undefined8 *)&this[0xe].field_0xc = 0x3f800000;
    *(undefined4 *)&this[0xe].field_0x14 = 0;
    *(undefined4 *)&this[0xe].field_0x18 = 0x3f800000;
  }
  return;
}

// InternalConstructor<UCurveLinearColorAtlas> @ 147a1aeb0

void __cdecl InternalConstructor<UCurveLinearColorAtlas>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  UTexture2D *this;
  
  this = (UTexture2D *)param_1->Obj;
  if (this != (UTexture2D *)0x0) {
    UTexture2D::UTexture2D(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0x100;
    this->_padding_ = (longlong)&UCurveLinearColorAtlas::_vftable__for__UStreamableRenderAsset__;
    this->_padding_ = (longlong)&UCurveLinearColorAtlas::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UCurveLinearColorAtlas::_vftable__for__IInterface_AsyncCompilation__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    pbVar1 = (byte *)((longlong)&this->_padding_ + 6);
    *pbVar1 = *pbVar1 & 0xfe;
    *(undefined2 *)&this->_padding_ = 0x106;
    this->AddressX = '\x01';
    this->AddressY = '\x01';
  }
  return;
}

// InternalConstructor<UCurveTable> @ 147a1af30

void __cdecl InternalConstructor<UCurveTable>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &UCurveTable::_vftable__for__UObject__;
    *(undefined ***)(this + 1) = &UCurveTable::_vftable__for__FCurveOwnerInterface__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x8 = 0;
    *(undefined4 *)&this[2].field_0xc = 0x80;
    *(undefined4 *)&this[2].field_0x10 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x14 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined4 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 2;
  }
  return;
}

// InternalConstructor<UCurveVector> @ 147a1afc0

void __cdecl InternalConstructor<UCurveVector>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &UCurveVector::_vftable__for__UObject__;
    *(undefined ***)(this + 1) = &UCurveVector::_vftable__for__FCurveOwnerInterface__;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined4 *)&this[2].field_0x10 = 0;
    *(undefined4 *)&this[2].field_0x14 = 0x80;
    *(undefined4 *)&this[2].field_0x18 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x1c = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined4 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined4 *)&this[3].field_0x20 = 0x7f7fffff;
    *(undefined2 *)&this[3].field_0x24 = 0x404;
    *(undefined ***)&this[1].field_0x8 = &___7FRichCurve__6B_;
    *(undefined8 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x18 = 0;
    *(undefined8 *)&this[4].field_0x20 = 0;
    *(undefined8 *)&this[5].field_0x10 = 0;
    *(undefined4 *)&this[5].field_0x18 = 0;
    *(undefined4 *)&this[5].field_0x1c = 0x80;
    *(undefined4 *)&this[5].field_0x20 = 0xffffffff;
    *(undefined4 *)&this[5].field_0x24 = 0;
    *(undefined8 *)&this[6].field_0x8 = 0;
    *(undefined4 *)&this[6].field_0x10 = 0;
    *(undefined8 *)&this[6].field_0x18 = 0;
    *(undefined8 *)&this[6].field_0x20 = 0;
    *(undefined4 *)(this + 7) = 0x7f7fffff;
    *(undefined2 *)&this[7].field_0x4 = 0x404;
    *(undefined ***)&this[4].field_0x10 = &___7FRichCurve__6B_;
    *(undefined8 *)&this[7].field_0x8 = 0;
    *(undefined8 *)&this[7].field_0x10 = 0;
    *(undefined8 *)&this[7].field_0x20 = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)&this[8].field_0x18 = 0;
    *(undefined4 *)&this[8].field_0x20 = 0;
    *(undefined4 *)&this[8].field_0x24 = 0x80;
    *(undefined4 *)(this + 9) = 0xffffffff;
    *(undefined4 *)&this[9].field_0x4 = 0;
    *(undefined8 *)&this[9].field_0x10 = 0;
    *(undefined4 *)&this[9].field_0x18 = 0;
    *(undefined8 *)&this[9].field_0x20 = 0;
    *(undefined8 *)(this + 10) = 0;
    *(undefined4 *)&this[10].field_0x8 = 0x7f7fffff;
    *(undefined2 *)&this[10].field_0xc = 0x404;
    *(undefined ***)&this[7].field_0x18 = &___7FRichCurve__6B_;
    *(undefined8 *)&this[10].field_0x10 = 0;
    *(undefined8 *)&this[10].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<UDEPRECATED_CurveEdPresetCurve> @ 147a1b160

void __cdecl InternalConstructor<UDEPRECATED_CurveEdPresetCurve>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UDEPRECATED_CurveEdPresetCurve__6B_;
  }
  return;
}

// InternalConstructor<UDamageType> @ 147a1b190

void __cdecl InternalConstructor<UDamageType>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(uint *)(this + 1) = *(uint *)(this + 1) | 2;
    *(undefined ***)this = &___7UDamageType__6B_;
    *(undefined4 *)&this[1].field_0x4 = 0x44480000;
    *(undefined4 *)&this[1].field_0x8 = 0x44480000;
    *(undefined4 *)&this[1].field_0xc = 0x3f800000;
    *(undefined4 *)&this[1].field_0x10 = 0x3f800000;
  }
  return;
}

// InternalConstructor<UDataAsset> @ 147a1b1e0

void __cdecl InternalConstructor<UDataAsset>(FObjectInitializer *param_1)

{
  UObject *this;
  UObject *pUVar1;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    pUVar1 = *(UObject **)&this->field_0x10;
    *(undefined ***)this = &___7UDataAsset__6B_;
    *(undefined8 *)(this + 1) = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    *(UObject **)(this + 1) = pUVar1;
  }
  return;
}

// InternalConstructor<UDataDrivenCVarEngineSubsystem> @ 147a1b240

void __cdecl InternalConstructor<UDataDrivenCVarEngineSubsystem>(FObjectInitializer *param_1)

{
  UEngineSubsystem *this;
  
  this = (UEngineSubsystem *)param_1->Obj;
  if (this != (UEngineSubsystem *)0x0) {
    UEngineSubsystem::UEngineSubsystem(this);
    *(undefined ***)this = &___7UDataDrivenCVarEngineSubsystem__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<UDataDrivenConsoleVariableSettings> @ 147a1b280

void __cdecl InternalConstructor<UDataDrivenConsoleVariableSettings>(FObjectInitializer *param_1)

{
  UDeveloperSettings *this;
  
  this = (UDeveloperSettings *)param_1->Obj;
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    this->_padding_ = (longlong)&___7UDataDrivenConsoleVariableSettings__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].CategoryName.ComparisonIndex = 0;
    this[1].CategoryName.Number = 0;
    this[1].SectionName.ComparisonIndex = 0;
    this[1].SectionName.Number = 0;
    this[2]._padding_ = 0;
    this[1]._padding_ = 2;
  }
  return;
}

// InternalConstructor<UGarbageCollectionSettings> @ 147a1b2e0

void __cdecl InternalConstructor<UGarbageCollectionSettings>(FObjectInitializer *param_1)

{
  uint uVar1;
  UDeveloperSettings *this;
  FObjectInitializer *pFVar2;
  FName local_res8 [4];
  
  this = (UDeveloperSettings *)param_1->Obj;
  if (this != (UDeveloperSettings *)0x0) {
    pFVar2 = FObjectInitializer::Get();
    UDeveloperSettings::UDeveloperSettings(this,pFVar2);
    this->_padding_ = (longlong)&___7UGarbageCollectionSettings__6B_;
    FName::FName(local_res8,L"Garbage Collection");
    this->SectionName = local_res8[0];
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    uVar1 = *(uint *)((longlong)&this[1]._padding_ + 4);
    *(undefined4 *)&this[1]._padding_ = 0x42700000;
    *(undefined4 *)&this[1]._padding_ = 0xc00000;
    *(uint *)((longlong)&this[1]._padding_ + 4) = uVar1 & 0xfffffe7e | 0x7e;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x200000;
    *(undefined4 *)&this[1]._padding_ = 5;
  }
  return;
}

// InternalConstructor<UPrimaryDataAsset> @ 147a1b360

void __cdecl InternalConstructor<UPrimaryDataAsset>(FObjectInitializer *param_1)

{
  UObject *this;
  UObject *pUVar1;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    pUVar1 = *(UObject **)&this->field_0x10;
    *(undefined ***)this = &___7UDataAsset__6B_;
    *(undefined8 *)(this + 1) = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    *(UObject **)(this + 1) = pUVar1;
    *(undefined ***)this = &___7UPrimaryDataAsset__6B_;
  }
  return;
}

// InternalConstructor<UStreamingSettings> @ 147a1b3d0

void __cdecl InternalConstructor<UStreamingSettings>(FObjectInitializer *param_1)

{
  uint *puVar1;
  UDeveloperSettings *this;
  FObjectInitializer *pFVar2;
  FName local_res8 [4];
  
  this = (UDeveloperSettings *)param_1->Obj;
  if (this != (UDeveloperSettings *)0x0) {
    pFVar2 = FObjectInitializer::Get();
    UDeveloperSettings::UDeveloperSettings(this,pFVar2);
    this->_padding_ = (longlong)&___7UStreamingSettings__6B_;
    FName::FName(local_res8,L"Streaming");
    *(uint *)&this[1]._padding_ = (uint)this[1]._padding_ & 0xfffffffc;
    *(uint *)&this[1]._padding_ = (uint)this[1]._padding_ | 3;
    puVar1 = &this[1].SectionName.Number;
    *puVar1 = *puVar1 & 0xfffffffd;
    puVar1 = &this[1].SectionName.Number;
    *puVar1 = *puVar1 | 1;
    this->SectionName = local_res8[0];
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3fc00000;
    *(undefined4 *)&this[1]._padding_ = 0x3ba3d70a;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x20000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x40a00000;
    *(undefined4 *)&this[1]._padding_ = 0x41700000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x40a00000;
    *(undefined4 *)&this[1]._padding_ = 0x40a00000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 10;
    this[1].CategoryName.ComparisonIndex.Value = 0x78;
    this[1].CategoryName.Number = 0x3f800000;
    this[1].SectionName.ComparisonIndex.Value = 5;
  }
  return;
}

// InternalVTableHelperCtorCaller<ACullDistanceVolume> @ 147a1b480

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ACullDistanceVolume>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AVolume *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ACullDistanceVolume::GetPrivateStaticClass();
  this = (AVolume *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AVolume *)0x0) {
    AVolume::AVolume(this,param_1);
    *(undefined ***)this = &___7ACullDistanceVolume__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCurveBase> @ 147a1b540

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UCurveBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCurveBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &UCurveBase::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &UCurveBase::_vftable__for__FCurveOwnerInterface__;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCurveFloat> @ 147a1b600

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UCurveFloat>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCurveFloat::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined ***)pUVar1 = &UCurveFloat::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &UCurveFloat::_vftable__for__FCurveOwnerInterface__;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined4 *)&pUVar1[2].field_0x10 = 0;
    *(undefined4 *)&pUVar1[2].field_0x14 = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x18 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0x1c = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined4 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined ***)&pUVar1[1].field_0x8 = &___7FRichCurve__6B_;
    *(undefined4 *)&pUVar1[3].field_0x20 = 0x7f7fffff;
    *(undefined2 *)&pUVar1[3].field_0x24 = 0x404;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCurveLinearColor> @ 147a1b720

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UCurveLinearColor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCurveLinearColor::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &UCurveLinearColor::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &UCurveLinearColor::_vftable__for__FCurveOwnerInterface__;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined4 *)&pUVar1[2].field_0x10 = 0;
    *(undefined4 *)&pUVar1[2].field_0x14 = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x18 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0x1c = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined4 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined ***)&pUVar1[1].field_0x8 = &___7FRichCurve__6B_;
    *(undefined4 *)&pUVar1[3].field_0x20 = 0x7f7fffff;
    *(undefined2 *)&pUVar1[3].field_0x24 = 0x404;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    *(undefined8 *)&pUVar1[5].field_0x10 = 0;
    *(undefined4 *)&pUVar1[5].field_0x18 = 0;
    *(undefined4 *)&pUVar1[5].field_0x1c = 0x80;
    *(undefined4 *)&pUVar1[5].field_0x20 = 0xffffffff;
    *(undefined4 *)&pUVar1[5].field_0x24 = 0;
    *(undefined8 *)&pUVar1[6].field_0x8 = 0;
    *(undefined4 *)&pUVar1[6].field_0x10 = 0;
    *(undefined8 *)&pUVar1[6].field_0x18 = 0;
    *(undefined8 *)&pUVar1[6].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 7) = 0x7f7fffff;
    *(undefined2 *)&pUVar1[7].field_0x4 = 0x404;
    *(undefined ***)&pUVar1[4].field_0x10 = &___7FRichCurve__6B_;
    *(undefined8 *)&pUVar1[7].field_0x8 = 0;
    *(undefined8 *)&pUVar1[7].field_0x10 = 0;
    *(undefined8 *)&pUVar1[7].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 8) = 0;
    *(undefined8 *)&pUVar1[8].field_0x18 = 0;
    *(undefined4 *)&pUVar1[8].field_0x20 = 0;
    *(undefined4 *)&pUVar1[8].field_0x24 = 0x80;
    *(undefined4 *)(pUVar1 + 9) = 0xffffffff;
    *(undefined4 *)&pUVar1[9].field_0x4 = 0;
    *(undefined8 *)&pUVar1[9].field_0x10 = 0;
    *(undefined4 *)&pUVar1[9].field_0x18 = 0;
    *(undefined8 *)&pUVar1[9].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 10) = 0;
    *(undefined4 *)&pUVar1[10].field_0x8 = 0x7f7fffff;
    *(undefined2 *)&pUVar1[10].field_0xc = 0x404;
    *(undefined ***)&pUVar1[7].field_0x18 = &___7FRichCurve__6B_;
    *(undefined8 *)&pUVar1[10].field_0x10 = 0;
    *(undefined8 *)&pUVar1[10].field_0x18 = 0;
    *(undefined8 *)(pUVar1 + 0xb) = 0;
    *(undefined8 *)&pUVar1[0xb].field_0x8 = 0;
    *(undefined8 *)&pUVar1[0xb].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 0xc) = 0;
    *(undefined4 *)&pUVar1[0xc].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[0xc].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[0xc].field_0xc = 0;
    *(undefined8 *)&pUVar1[0xc].field_0x18 = 0;
    *(undefined4 *)&pUVar1[0xc].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 0xd) = 0;
    *(undefined8 *)&pUVar1[0xd].field_0x8 = 0;
    *(undefined4 *)&pUVar1[0xd].field_0x10 = 0x7f7fffff;
    *(undefined2 *)&pUVar1[0xd].field_0x14 = 0x404;
    *(undefined ***)&pUVar1[10].field_0x20 = &___7FRichCurve__6B_;
    *(undefined8 *)&pUVar1[0xd].field_0x18 = 0;
    *(undefined8 *)&pUVar1[0xd].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCurveLinearColorAtlas> @ 147a1b730

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UCurveLinearColorAtlas>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UTexture2D *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCurveLinearColorAtlas::GetPrivateStaticClass();
  this = (UTexture2D *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UTexture2D *)0x0) {
    UTexture2D::UTexture2D(this,param_1);
    this->_padding_ = (longlong)&UCurveLinearColorAtlas::_vftable__for__UStreamableRenderAsset__;
    this->_padding_ = (longlong)&UCurveLinearColorAtlas::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UCurveLinearColorAtlas::_vftable__for__IInterface_AsyncCompilation__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCurveTable> @ 147a1b810

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UCurveTable>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCurveTable::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UCurveTable::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &UCurveTable::_vftable__for__FCurveOwnerInterface__;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined4 *)&pUVar1[2].field_0x8 = 0;
    *(undefined4 *)&pUVar1[2].field_0xc = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x10 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0x14 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 2;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCurveVector> @ 147a1b910

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UCurveVector>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCurveVector::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &UCurveVector::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &UCurveVector::_vftable__for__FCurveOwnerInterface__;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined4 *)&pUVar1[2].field_0x10 = 0;
    *(undefined4 *)&pUVar1[2].field_0x14 = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x18 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0x1c = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined4 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined ***)&pUVar1[1].field_0x8 = &___7FRichCurve__6B_;
    *(undefined4 *)&pUVar1[3].field_0x20 = 0x7f7fffff;
    *(undefined2 *)&pUVar1[3].field_0x24 = 0x404;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    *(undefined8 *)&pUVar1[5].field_0x10 = 0;
    *(undefined4 *)&pUVar1[5].field_0x18 = 0;
    *(undefined4 *)&pUVar1[5].field_0x1c = 0x80;
    *(undefined4 *)&pUVar1[5].field_0x20 = 0xffffffff;
    *(undefined4 *)&pUVar1[5].field_0x24 = 0;
    *(undefined8 *)&pUVar1[6].field_0x8 = 0;
    *(undefined4 *)&pUVar1[6].field_0x10 = 0;
    *(undefined8 *)&pUVar1[6].field_0x18 = 0;
    *(undefined8 *)&pUVar1[6].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 7) = 0x7f7fffff;
    *(undefined2 *)&pUVar1[7].field_0x4 = 0x404;
    *(undefined ***)&pUVar1[4].field_0x10 = &___7FRichCurve__6B_;
    *(undefined8 *)&pUVar1[7].field_0x8 = 0;
    *(undefined8 *)&pUVar1[7].field_0x10 = 0;
    *(undefined8 *)&pUVar1[7].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 8) = 0;
    *(undefined8 *)&pUVar1[8].field_0x18 = 0;
    *(undefined4 *)&pUVar1[8].field_0x20 = 0;
    *(undefined4 *)&pUVar1[8].field_0x24 = 0x80;
    *(undefined4 *)(pUVar1 + 9) = 0xffffffff;
    *(undefined4 *)&pUVar1[9].field_0x4 = 0;
    *(undefined8 *)&pUVar1[9].field_0x10 = 0;
    *(undefined4 *)&pUVar1[9].field_0x18 = 0;
    *(undefined8 *)&pUVar1[9].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 10) = 0;
    *(undefined4 *)&pUVar1[10].field_0x8 = 0x7f7fffff;
    *(undefined2 *)&pUVar1[10].field_0xc = 0x404;
    *(undefined ***)&pUVar1[7].field_0x18 = &___7FRichCurve__6B_;
    *(undefined8 *)&pUVar1[10].field_0x10 = 0;
    *(undefined8 *)&pUVar1[10].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDEPRECATED_CurveEdPresetCurve> @ 147a1bb20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDEPRECATED_CurveEdPresetCurve>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDEPRECATED_CurveEdPresetCurve::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UDEPRECATED_CurveEdPresetCurve__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDamageType> @ 147a1bbd0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDamageType>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDamageType::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UDamageType__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDataAsset> @ 147a1bc80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDataAsset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDataAsset::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UDataAsset__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDataDrivenCVarEngineSubsystem> @ 147a1bd30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDataDrivenCVarEngineSubsystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UEngineSubsystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDataDrivenCVarEngineSubsystem::GetPrivateStaticClass();
  this = (UEngineSubsystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UEngineSubsystem *)0x0) {
    UEngineSubsystem::UEngineSubsystem(this,param_1);
    *(undefined ***)this = &___7UDataDrivenCVarEngineSubsystem__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDataDrivenConsoleVariableSettings> @ 147a1bdf0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDataDrivenConsoleVariableSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDeveloperSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDataDrivenConsoleVariableSettings::GetPrivateStaticClass();
  this = (UDeveloperSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    this->_padding_ = (longlong)&___7UDataDrivenConsoleVariableSettings__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 2;
    this[1]._padding_ = 0;
    this[1].CategoryName.ComparisonIndex = 0;
    this[1].CategoryName.Number = 0;
    this[1].SectionName.ComparisonIndex = 0;
    this[1].SectionName.Number = 0;
    this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGarbageCollectionSettings> @ 147a1bec0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGarbageCollectionSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDeveloperSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGarbageCollectionSettings::GetPrivateStaticClass();
  this = (UDeveloperSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    this->_padding_ = (longlong)&___7UGarbageCollectionSettings__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPrimaryDataAsset> @ 147a1bf70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPrimaryDataAsset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPrimaryDataAsset::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UPrimaryDataAsset__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UStreamingSettings> @ 147a1c020

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UStreamingSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDeveloperSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UStreamingSettings::GetPrivateStaticClass();
  this = (UDeveloperSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    this->_padding_ = (longlong)&___7UStreamingSettings__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<UClass_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UClass_*,int>,TDefaultMapHashableKeyFuncs<UClass_*,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UClass_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,int,0>_>::FValueComparisonClass<`ListOpenActorChannels'::__l2::FCompareActorClassCount>_>_>_> @ 147a1c0d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<UClass_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UClass_*,int>,TDefaultMapHashableKeyFuncs<UClass_*,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UClass_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,int,0>_>::FValueComparisonClass<_ListOpenActorChannels_::__l2::FCompareActorClassCount>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<UClass_*,int>,TDefaultMapHashableKeyFuncs<UClass_*,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UClass_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,int,0>_>::FValueComparisonClass<_void___cdecl_ListOpenActorChannels(UWorld_*)_::_2_::FCompareActorClassCount>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_s_1 TVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar8;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar9;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar10;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar13;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> **ppTVar14;
  float fVar15;
  undefined1 auStack_378 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *local_348;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *local_338;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar15 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar15;
    memset(local_320,0,0x2e8);
    ppTVar14 = &local_338;
    do {
      pTVar8 = ppTVar14[1];
      pTVar13 = *ppTVar14;
      pTVar1 = ppTVar14[2];
      local_348._0_4_ = (int)pTVar1;
      iVar7 = (int)(((longlong)pTVar8 - (longlong)pTVar13) / 0x18) + 1;
      pTVar12 = pTVar13;
      if ((int)local_348 != 0) {
LAB_147a1c1a0:
        if (8 < iVar7) {
          uVar3 = *(undefined8 *)((pTVar12->ElementData).Pad + 8);
          pTVar10 = pTVar8 + 1;
          lVar6 = (longlong)(iVar7 / 2);
          TVar4 = pTVar12[lVar6]._s_1;
          uVar5 = *(undefined8 *)((longlong)pTVar12[lVar6].ElementData.Pad + 8);
          uVar2 = *(undefined8 *)((longlong)pTVar12 + lVar6 * 0x18 + 0x10);
          pTVar12[lVar6]._s_1 = pTVar12->_s_1;
          *(undefined8 *)((longlong)pTVar12[lVar6].ElementData.Pad + 8) = uVar3;
          *(undefined8 *)((longlong)pTVar12 + lVar6 * 0x18 + 0x10) =
               *(undefined8 *)((pTVar12->ElementData).Pad + 0x10);
          pTVar12->_s_1 = TVar4;
          *(undefined8 *)((pTVar12->ElementData).Pad + 8) = uVar5;
          *(undefined8 *)((pTVar12->ElementData).Pad + 0x10) = uVar2;
          pTVar13 = pTVar12;
LAB_147a1c1f0:
          pTVar9 = pTVar13;
          pTVar13 = pTVar9 + 1;
          if (pTVar13 <= pTVar8) goto code_r0x000147a1c1f9;
          goto LAB_147a1c203;
        }
        for (; pTVar13 = pTVar12, pTVar1 = pTVar12, pTVar12 < pTVar8; pTVar8 = pTVar8 + -1) {
          while (pTVar1 = pTVar1 + 1, pTVar1 <= pTVar8) {
            if (*(int *)((pTVar13->ElementData).Pad + 8) < *(int *)((pTVar1->ElementData).Pad + 8))
            {
              pTVar13 = pTVar1;
            }
          }
          TVar4 = pTVar13->_s_1;
          uVar3 = *(undefined8 *)((pTVar13->ElementData).Pad + 8);
          uVar2 = *(undefined8 *)((pTVar13->ElementData).Pad + 0x10);
          uVar5 = *(undefined8 *)((pTVar8->ElementData).Pad + 8);
          pTVar13->_s_1 = pTVar8->_s_1;
          *(undefined8 *)((pTVar13->ElementData).Pad + 8) = uVar5;
          *(undefined8 *)((pTVar13->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar8->ElementData).Pad + 0x10);
          pTVar8->_s_1 = TVar4;
          *(undefined8 *)((pTVar8->ElementData).Pad + 8) = uVar3;
          *(undefined8 *)((pTVar8->ElementData).Pad + 0x10) = uVar2;
        }
        goto LAB_147a1c325;
      }
LAB_147a1c316:
      local_348 = pTVar1;
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<UClass_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UClass_*,int>,TDefaultMapHashableKeyFuncs<UClass_*,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UClass_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,int,0>_>::FValueComparisonClass<_ListOpenActorChannels_::__l2::FCompareActorClassCount>_>_>_>
                (pTVar13,iVar7,param_3,param_4);
LAB_147a1c325:
      ppTVar14 = ppTVar14 + -3;
    } while (&local_338 <= ppTVar14);
  }
  return;
code_r0x000147a1c1f9:
  if (*(int *)((longlong)pTVar9 + 0x20) <= *(int *)((pTVar12->ElementData).Pad + 8))
  goto LAB_147a1c1f0;
LAB_147a1c203:
  do {
    pTVar11 = pTVar10;
    pTVar10 = pTVar11 + -1;
    if (pTVar10 <= pTVar12) break;
  } while (*(int *)((pTVar12->ElementData).Pad + 8) <= *(int *)((longlong)pTVar11 + -0x10));
  uVar2 = *(undefined8 *)((longlong)pTVar11 + -0x10);
  if (pTVar13 <= pTVar10) {
    TVar4 = pTVar13->_s_1;
    uVar5 = *(undefined8 *)((longlong)pTVar9 + 0x20);
    uVar3 = *(undefined8 *)((longlong)pTVar9 + 0x28);
    pTVar13->_s_1 = pTVar10->_s_1;
    *(undefined8 *)((longlong)pTVar9 + 0x20) = uVar2;
    *(undefined8 *)((longlong)pTVar9 + 0x28) = *(undefined8 *)((longlong)pTVar11 + -8);
    pTVar10->_s_1 = TVar4;
    *(undefined8 *)((longlong)pTVar11 + -0x10) = uVar5;
    *(undefined8 *)((longlong)pTVar11 + -8) = uVar3;
    goto LAB_147a1c1f0;
  }
  TVar4 = pTVar12->_s_1;
  uVar5 = *(undefined8 *)((pTVar12->ElementData).Pad + 8);
  uVar3 = *(undefined8 *)((pTVar12->ElementData).Pad + 0x10);
  lVar6 = (longlong)pTVar10 + (-0x18 - (longlong)pTVar12);
  local_348._0_4_ = (int)local_348 + -1;
  lVar6 = lVar6 / 6 + (lVar6 >> 0x3f);
  pTVar12->_s_1 = pTVar10->_s_1;
  *(undefined8 *)((pTVar12->ElementData).Pad + 8) = uVar2;
  *(undefined8 *)((pTVar12->ElementData).Pad + 0x10) = *(undefined8 *)((longlong)pTVar11 + -8);
  pTVar10->_s_1 = TVar4;
  *(undefined8 *)((longlong)pTVar11 + -0x10) = uVar5;
  *(undefined8 *)((longlong)pTVar11 + -8) = uVar3;
  if ((lVar6 >> 2) - (lVar6 >> 0x3f) < ((longlong)pTVar8 - (longlong)pTVar13) / 0x18) {
    if (pTVar13 < pTVar8) {
      *ppTVar14 = pTVar13;
      ppTVar14[1] = pTVar8;
      *(int *)(ppTVar14 + 2) = (int)local_348;
      ppTVar14 = ppTVar14 + 3;
    }
    if (pTVar10 <= pTVar12 + 1) goto LAB_147a1c325;
    pTVar8 = pTVar11 + -2;
    pTVar13 = pTVar12;
  }
  else {
    if (pTVar12 + 1 < pTVar10) {
      *ppTVar14 = pTVar12;
      ppTVar14[1] = pTVar11 + -2;
      *(int *)(ppTVar14 + 2) = (int)local_348;
      ppTVar14 = ppTVar14 + 3;
    }
    if (pTVar8 <= pTVar13) goto LAB_147a1c325;
  }
  iVar7 = (int)(((longlong)pTVar8 - (longlong)pTVar13) / 0x18) + 1;
  pTVar12 = pTVar13;
  if ((int)local_348 == 0) goto LAB_147a1c316;
  goto LAB_147a1c1a0;
}

// IsObjectPtrEqual<AActor,UObject_*,0> @ 147a1c3e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<AActor,UObject_*,0>
          (TObjectPtr<AActor> *param_1,UObject **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (AActor *)0x0) {
    return (AActor *)*param_2 == (AActor *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == (AActor *)*param_2;
}

// IsObjectPtrEqual<UActorChannel,UActorChannel_*,0> @ 147a1c400

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UActorChannel,UActorChannel_*,0>
          (TObjectPtr<UActorChannel> *param_1,UActorChannel **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UActorChannel *)0x0) {
    return *param_2 == (UActorChannel *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UChannel,UChannel_*,0> @ 147a1c420

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UChannel,UChannel_*,0>
          (TObjectPtr<UChannel> *param_1,UChannel **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UChannel *)0x0) {
    return *param_2 == (UChannel *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UNetConnection,UNetConnection_*,0> @ 147a1c440

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UNetConnection,UNetConnection_*,0>
          (TObjectPtr<UNetConnection> *param_1,UNetConnection **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UNetConnection *)0x0) {
    return *param_2 == (UNetConnection *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UNetDriver,UDemoNetDriver_*,0> @ 147a1c460

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UNetDriver,UDemoNetDriver_*,0>
          (TObjectPtr<UNetDriver> *param_1,UDemoNetDriver **param_2)

{
  if ((UDemoNetDriver *)(param_1->field0_0x0).DebugPtr == (UDemoNetDriver *)0x0) {
    return *param_2 == (UDemoNetDriver *)0x0;
  }
  return (UDemoNetDriver *)(param_1->field0_0x0).DebugPtr == *param_2;
}

// MakeShared<FLegacySpline,1> @ 147a1c480

TSharedRef<FLegacySpline,1> * __cdecl
MakeShared<FLegacySpline,1>(TSharedRef<FLegacySpline,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FLegacySpline,1> *pTVar4;
  
  pTVar3 = operator_new(0x70);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FLegacySpline *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFLegacySpline___00_SharedPointerInternals__6B_;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[3]._padding_ = 0;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[4]._padding_ = 0;
    pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[5]._padding_ = 0;
    pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[6]._padding_ = 0;
    pTVar3[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[6].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)((longlong)&pTVar3[2]._padding_ + 4) = 0;
    pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)((longlong)&pTVar3[5]._padding_ + 4) = 0;
    pTVar3[6].WeakReferenceCount = (atomic<int>)0x0;
    __return_storage_ptr__->Object = (FLegacySpline *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((FLegacySpline *)(pTVar3 + 1) == (FLegacySpline *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<FLegacySpline,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<FNewSpline,1> @ 147a1c540

TSharedRef<FNewSpline,1> * __cdecl
MakeShared<FNewSpline,1>(TSharedRef<FNewSpline,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FNewSpline,1> *pTVar4;
  
  pTVar3 = operator_new(0x198);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FNewSpline *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_VFNewSpline___00_SharedPointerInternals__6B_
    ;
    FNewSpline::FNewSpline((FNewSpline *)(pTVar3 + 1));
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    __return_storage_ptr__->Object = (FNewSpline *)(pTVar3 + 1);
    if ((FNewSpline *)(pTVar3 + 1) == (FNewSpline *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<FNewSpline,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// ObjectPtrWrap<UActorChannel_*,TObjectPtr<UActorChannel>_> @ 147a1c6d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TObjectPtr<UActorChannel> * __cdecl
ObjectPtrWrap<UActorChannel_*,TObjectPtr<UActorChannel>_>(UActorChannel **param_1)

{
  return (TObjectPtr<UActorChannel> *)param_1;
}

// SetShaderValue<UE::Math::TMatrix<float>_[2]> @ 147a20a40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
SetShaderValue<UE::Math::TMatrix<float>_[2]>
          (FRHIBatchedShaderParameters *param_1,FShaderParameter *param_2,
          TMatrix<float> (*param_3) [2],uint param_4)

{
  uint uVar1;
  
  uVar1 = (uint)param_2->NumBytes + param_4 * -0x80;
  if (0x80 < (int)uVar1) {
    uVar1 = 0x80;
  }
  if (0 < (int)uVar1) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)param_2->BufferIndex,(uint)param_2->BaseIndex + param_4 * 0x80,uVar1,
               param_3);
  }
  return;
}

// StaticEnum<enum_ECurveTableMode> @ 147a20b50

UEnum * __cdecl StaticEnum<enum_ECurveTableMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECurveTableMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ECurveTableMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ECurveTableMode,(UObject *)pUVar1,L"ECurveTableMode"
                      );
  }
  return Z_Registration_Info_UEnum_ECurveTableMode.OuterSingleton;
}

// StaticEnum<enum_ERichCurveCompressionFormat> @ 147a20b90

UEnum * __cdecl StaticEnum<enum_ERichCurveCompressionFormat>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERichCurveCompressionFormat.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ERichCurveCompressionFormat.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ERichCurveCompressionFormat,(UObject *)pUVar1,
                       L"ERichCurveCompressionFormat");
  }
  return Z_Registration_Info_UEnum_ERichCurveCompressionFormat.OuterSingleton;
}

// StaticEnum<enum_ERichCurveExtrapolation> @ 147a20bd0

UEnum * __cdecl StaticEnum<enum_ERichCurveExtrapolation>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERichCurveExtrapolation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ERichCurveExtrapolation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ERichCurveExtrapolation,(UObject *)pUVar1,
                       L"ERichCurveExtrapolation");
  }
  return Z_Registration_Info_UEnum_ERichCurveExtrapolation.OuterSingleton;
}

// StaticEnum<enum_ERichCurveInterpMode> @ 147a20c10

UEnum * __cdecl StaticEnum<enum_ERichCurveInterpMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERichCurveInterpMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ERichCurveInterpMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ERichCurveInterpMode,(UObject *)pUVar1,
                       L"ERichCurveInterpMode");
  }
  return Z_Registration_Info_UEnum_ERichCurveInterpMode.OuterSingleton;
}

// StaticEnum<enum_ERichCurveKeyTimeCompressionFormat> @ 147a20c50

UEnum * __cdecl StaticEnum<enum_ERichCurveKeyTimeCompressionFormat>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERichCurveKeyTimeCompressionFormat.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ERichCurveKeyTimeCompressionFormat.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ERichCurveKeyTimeCompressionFormat,(UObject *)pUVar1
                       ,L"ERichCurveKeyTimeCompressionFormat");
  }
  return Z_Registration_Info_UEnum_ERichCurveKeyTimeCompressionFormat.OuterSingleton;
}

// StaticEnum<enum_ERichCurveTangentMode> @ 147a20c90

UEnum * __cdecl StaticEnum<enum_ERichCurveTangentMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERichCurveTangentMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ERichCurveTangentMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ERichCurveTangentMode,(UObject *)pUVar1,
                       L"ERichCurveTangentMode");
  }
  return Z_Registration_Info_UEnum_ERichCurveTangentMode.OuterSingleton;
}

// StaticEnum<enum_ERichCurveTangentWeightMode> @ 147a20cd0

UEnum * __cdecl StaticEnum<enum_ERichCurveTangentWeightMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERichCurveTangentWeightMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ERichCurveTangentWeightMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ERichCurveTangentWeightMode,(UObject *)pUVar1,
                       L"ERichCurveTangentWeightMode");
  }
  return Z_Registration_Info_UEnum_ERichCurveTangentWeightMode.OuterSingleton;
}

// StaticEnum<enum_FDataDrivenCVarType> @ 147a20d10

UEnum * __cdecl StaticEnum<enum_FDataDrivenCVarType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_FDataDrivenCVarType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_FDataDrivenCVarType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_FDataDrivenCVarType,(UObject *)pUVar1,
                       L"FDataDrivenCVarType");
  }
  return Z_Registration_Info_UEnum_FDataDrivenCVarType.OuterSingleton;
}

// WriteTableAsJSON_Internal<char,FRichCurve> @ 147a20ff0

void __cdecl
WriteTableAsJSON_Internal<char,FRichCurve>
          (TMap<FName,FRichCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurve_*,0>_>
           *param_1,TSharedRef<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,1> *param_2,
          bool param_3)

{
  int *piVar1;
  int iVar2;
  EJsonToken EVar3;
  TJsonWriter<char,TPrettyJsonPrintPolicy<char>_> *pTVar4;
  FArchive *pFVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  FString *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined1 local_res20 [8];
  undefined1 local_188 [8];
  undefined1 local_180 [8];
  undefined1 local_178 [8];
  undefined1 local_170 [8];
  undefined1 local_168 [8];
  undefined1 local_160 [8];
  TArray<FRichCurve_*,TSizedDefaultAllocator<32>_> local_158;
  uint local_148;
  int local_144;
  TArray<FName,TSizedDefaultAllocator<32>_> local_140;
  uint local_130;
  longlong local_128;
  longlong local_120;
  FString local_118;
  wchar_t *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  wchar_t *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  FScriptContainerElement *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  wchar_t *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  TStringView<wchar_t> local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  FString local_88;
  FString local_78;
  TStringView<wchar_t> local_68;
  FString local_58;
  TStringView<wchar_t> local_48;
  
  uVar14 = 0;
  local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_140.ArrayNum = 0;
  local_140.ArrayMax = 0;
  local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.ArrayNum = 0;
  local_158.ArrayMax = 0;
  TMapBase<FName,FRichCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurve_*,0>_>
  ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,FRichCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurve_*,0>_>
              *)param_1,&local_140);
  TMapBase<FName,FRichCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurve_*,0>_>
  ::GenerateValueArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,FRichCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurve_*,0>_>
              *)param_1,&local_158);
  uVar11 = 1;
  local_144 = 0;
  uVar12 = uVar14;
  iVar17 = local_158.ArrayNum;
  if (1 < local_158.ArrayNum) {
    uVar13 = 8;
    uVar18 = uVar14;
    do {
      uVar19 = 0;
      if ((int)(uint)uVar12 < iVar17) {
        uVar19 = ~(uint)uVar12 >> 0x1f;
      }
      if (uVar19 == 0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar17 = local_158.ArrayNum;
      }
      iVar2 = *(int *)(*(longlong *)(local_158.AllocatorInstance.Data + uVar18) + 0x78);
      uVar19 = 0;
      if ((int)uVar11 < iVar17) {
        uVar19 = ~uVar11 >> 0x1f;
      }
      if (uVar19 == 0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar17 = local_158.ArrayNum;
      }
      if (iVar2 < *(int *)(*(longlong *)(local_158.AllocatorInstance.Data + uVar13) + 0x78)) {
        uVar12 = (ulonglong)uVar11;
        uVar18 = uVar13;
      }
      uVar11 = uVar11 + 1;
      uVar13 = uVar13 + 8;
    } while ((int)uVar11 < iVar17);
    local_144 = (int)uVar12;
  }
  if (param_3) {
    TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::WriteArrayStart(param_2->Object);
    iVar17 = local_158.ArrayNum;
  }
  local_148 = 0;
  if (0 < iVar17) {
    uVar18 = (ulonglong)(int)(uint)uVar12;
    local_130 = ~(uint)uVar12 >> 0x1f;
    local_128 = 0;
    do {
      pTVar4 = param_2->Object;
      uVar11 = (uint)uVar14;
      uVar19 = ~uVar11 >> 0x1f;
      if (param_3) {
        TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::WriteObjectStart(pTVar4);
        pTVar4 = param_2->Object;
        uVar16 = 0;
        if ((int)uVar11 < local_140.ArrayNum) {
          uVar16 = uVar19;
        }
        if ((uVar16 == 0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar10 = FName::ToString((FName *)(local_140.AllocatorInstance.Data +
                                           (longlong)(int)uVar11 * 8),&local_88);
        iVar17 = (pTVar4->Stack).ArrayNum;
        uVar15 = iVar17 - 1;
        uVar16 = 0;
        if ((int)uVar15 < iVar17) {
          uVar16 = ~uVar15 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((*(int *)((pTVar4->Stack).AllocatorInstance.Data +
                     (longlong)(pTVar4->Stack).ArrayNum * 4 + -4) != 6) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("Stack.Top() == EJson::Object",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                               ,0x110,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        EVar3 = pTVar4->PreviousTokenWritten;
        if ((EVar3 != CurlyOpen) && ((Identifier < EVar3 || ((0x1013U >> (EVar3 & 0x1f) & 1) == 0)))
           ) {
          local_res20[0] = 0x2c;
          (**(code **)(*(longlong *)pTVar4->Stream + 0x188))(pTVar4->Stream,local_res20,1);
          pTVar4->PreviousTokenWritten = Comma;
        }
        local_108 = L"\r\n";
        uStack_100 = 2;
        local_b8._12_4_ = uStack_fc;
        local_b8.Size = 2;
        local_b8.DataPtr = L"\r\n";
        TJsonPrintPolicy<char>::WriteString(pTVar4->Stream,&local_b8);
        pFVar5 = pTVar4->Stream;
        if (0 < pTVar4->IndentLevel) {
          uVar14 = (ulonglong)(uint)pTVar4->IndentLevel;
          do {
            local_188[0] = 9;
            (**(code **)(*(longlong *)pFVar5 + 0x188))(pFVar5,local_188,1);
            uVar14 = uVar14 - 1;
            uVar11 = local_148;
          } while (uVar14 != 0);
        }
        uStack_f0 = 4;
        local_f8 = L"Name";
        local_a8 = 0x50641bc8;
        uStack_a4 = 1;
        uStack_a0 = 4;
        uStack_9c = uStack_ec;
        (**(code **)(pTVar4->_padding_ + 0x28))(pTVar4,&local_a8);
        local_180[0] = 0x3a;
        (**(code **)(*(longlong *)pTVar4->Stream + 0x188))(pTVar4->Stream,local_180,1);
        pTVar4->PreviousTokenWritten = Identifier;
        local_178[0] = 0x20;
        (**(code **)(*(longlong *)pTVar4->Stream + 0x188))(pTVar4->Stream,local_178);
        pFVar6 = (pFVar10->Data).AllocatorInstance.Data;
        iVar17 = (pFVar10->Data).ArrayNum;
        iStack_e0 = iVar17 + -1;
        if (iVar17 == 0) {
          iStack_e0 = 0;
        }
        local_e8._0_4_ = SUB84(pFVar6,0);
        local_e8._4_4_ = (undefined4)((ulonglong)pFVar6 >> 0x20);
        local_98 = (undefined4)local_e8;
        uStack_94 = local_e8._4_4_;
        uStack_8c = uStack_dc;
        local_e8 = pFVar6;
        iStack_90 = iStack_e0;
        (**(code **)(pTVar4->_padding_ + 0x28))(pTVar4,&local_98);
        pTVar4->PreviousTokenWritten = String;
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        uVar18 = (ulonglong)(int)uVar12;
      }
      else {
        uVar16 = 0;
        if ((int)uVar11 < local_140.ArrayNum) {
          uVar16 = uVar19;
        }
        if ((uVar16 == 0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar10 = FName::ToString((FName *)(local_140.AllocatorInstance.Data +
                                           (longlong)(int)uVar11 * 8),&local_78);
        TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::WriteObjectStart<FString>(pTVar4,pFVar10);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
      }
      uVar16 = 0;
      if ((int)uVar12 < local_158.ArrayNum) {
        uVar16 = local_130;
      }
      if (uVar16 == 0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      lVar7 = *(longlong *)(local_158.AllocatorInstance.Data + uVar18 * 8);
      uVar16 = 0;
      if ((int)uVar11 < local_158.ArrayNum) {
        uVar16 = uVar19;
      }
      if ((uVar16 == 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_120 = *(longlong *)(local_158.AllocatorInstance.Data + local_128);
      piVar1 = (int *)(local_120 + 0x78);
      for (uVar11 = 0; (-1 < (int)uVar11 && ((int)uVar11 < *piVar1)); uVar11 = uVar11 + 1) {
        pTVar4 = param_2->Object;
        if (((int)uVar11 < 0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar19 = 0;
        if ((int)uVar11 < *(int *)(lVar7 + 0x78)) {
          uVar19 = ~uVar11 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar10 = FString::SanitizeFloat
                            (&local_58,
                             (double)*(float *)(*(longlong *)(lVar7 + 0x70) + 4 +
                                               (longlong)(int)uVar11 * 0x1c),0);
        iVar17 = (pTVar4->Stack).ArrayNum;
        uVar16 = iVar17 - 1;
        uVar19 = 0;
        if ((int)uVar16 < iVar17) {
          uVar19 = ~uVar16 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((*(int *)((pTVar4->Stack).AllocatorInstance.Data +
                     (longlong)(pTVar4->Stack).ArrayNum * 4 + -4) != 6) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("Stack.Top() == EJson::Object",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                               ,0x110,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::WriteIdentifier(pTVar4,pFVar10);
        local_170[0] = 0x20;
        (**(code **)(*(longlong *)pTVar4->Stream + 0x188))(pTVar4->Stream,local_170,1);
        pFVar5 = pTVar4->Stream;
        FString::PrintfImpl(&local_118,L"%g");
        local_d8 = local_118.Data.AllocatorInstance.Data;
        iStack_d0 = local_118.Data.ArrayNum + -1;
        if (local_118.Data.ArrayNum == 0) {
          iStack_d0 = 0;
        }
        local_68._12_4_ = uStack_cc;
        local_68.Size = iStack_d0;
        local_68.DataPtr = (wchar_t *)local_118.Data.AllocatorInstance.Data;
        TJsonPrintPolicy<char>::WriteString(pFVar5,&local_68);
        if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
        }
        pTVar4->PreviousTokenWritten = Number;
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      pTVar4 = param_2->Object;
      iVar17 = (pTVar4->Stack).ArrayNum;
      uVar19 = iVar17 - 1;
      uVar11 = 0;
      if ((int)uVar19 < iVar17) {
        uVar11 = ~uVar19 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((*(int *)((pTVar4->Stack).AllocatorInstance.Data +
                   (longlong)(pTVar4->Stack).ArrayNum * 4 + -4) != 6) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("Stack.Top() == EJson::Object",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                             ,0x8e,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_c8 = L"\r\n";
      uStack_c0 = 2;
      local_48._12_4_ = uStack_bc;
      local_48.Size = 2;
      local_48.DataPtr = L"\r\n";
      TJsonPrintPolicy<char>::WriteString(pTVar4->Stream,&local_48);
      pTVar4->IndentLevel = pTVar4->IndentLevel + -1;
      pFVar5 = pTVar4->Stream;
      if (0 < pTVar4->IndentLevel) {
        uVar12 = (ulonglong)(uint)pTVar4->IndentLevel;
        do {
          local_168[0] = 9;
          (**(code **)(*(longlong *)pFVar5 + 0x188))(pFVar5,local_168,1);
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      local_160[0] = 0x7d;
      (**(code **)(*(longlong *)pTVar4->Stream + 0x188))(pTVar4->Stream,local_160,1);
      if (((pTVar4->Stack).ArrayNum < 1) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar17 = (pTVar4->Stack).ArrayNum;
      uVar11 = iVar17 - 1;
      pFVar6 = (pTVar4->Stack).AllocatorInstance.Data + (longlong)(int)uVar11 * 4;
      iVar17 = ~uVar11 + iVar17;
      if (iVar17 != 0) {
        memmove(pFVar6,pFVar6 + 4,(longlong)iVar17 << 2);
      }
      iVar17 = (pTVar4->Stack).ArrayNum + -1;
      (pTVar4->Stack).ArrayNum = iVar17;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,&(pTVar4->Stack).AllocatorInstance,iVar17,&(pTVar4->Stack).ArrayMax);
      local_128 = local_128 + 8;
      uVar18 = (ulonglong)local_144;
      pTVar4->PreviousTokenWritten = CurlyClose;
      local_148 = local_148 + 1;
      uVar14 = (ulonglong)local_148;
      uVar12 = uVar18;
    } while ((int)local_148 < local_158.ArrayNum);
  }
  if (param_3) {
    TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::WriteArrayEnd(param_2->Object);
  }
  if (local_158.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.AllocatorInstance.Data);
  }
  if (local_140.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.AllocatorInstance.Data);
  }
  return;
}

// WriteTableAsJSON_Internal<char,FSimpleCurve> @ 147a21950

void __cdecl
WriteTableAsJSON_Internal<char,FSimpleCurve>
          (TMap<FName,FSimpleCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSimpleCurve_*,0>_>
           *param_1,TSharedRef<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,1> *param_2,
          bool param_3)

{
  int *piVar1;
  int iVar2;
  EJsonToken EVar3;
  TJsonWriter<char,TPrettyJsonPrintPolicy<char>_> *pTVar4;
  FArchive *pFVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  FString *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined1 local_res20 [8];
  undefined1 local_188 [8];
  undefined1 local_180 [8];
  undefined1 local_178 [8];
  undefined1 local_170 [8];
  undefined1 local_168 [8];
  undefined1 local_160 [8];
  TArray<FSimpleCurve_*,TSizedDefaultAllocator<32>_> local_158;
  uint local_148;
  int local_144;
  TArray<FName,TSizedDefaultAllocator<32>_> local_140;
  uint local_130;
  longlong local_128;
  longlong local_120;
  FString local_118;
  wchar_t *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  wchar_t *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  FScriptContainerElement *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  wchar_t *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  TStringView<wchar_t> local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  FString local_88;
  FString local_78;
  TStringView<wchar_t> local_68;
  FString local_58;
  TStringView<wchar_t> local_48;
  
  uVar14 = 0;
  local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_140.ArrayNum = 0;
  local_140.ArrayMax = 0;
  local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.ArrayNum = 0;
  local_158.ArrayMax = 0;
  TMapBase<FName,FSimpleCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSimpleCurve_*,0>_>
  ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,FSimpleCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSimpleCurve_*,0>_>
              *)param_1,&local_140);
  TMapBase<FName,FSimpleCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSimpleCurve_*,0>_>
  ::GenerateValueArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,FSimpleCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSimpleCurve_*,0>_>
              *)param_1,&local_158);
  uVar11 = 1;
  local_144 = 0;
  uVar12 = uVar14;
  iVar17 = local_158.ArrayNum;
  if (1 < local_158.ArrayNum) {
    uVar13 = 8;
    uVar18 = uVar14;
    do {
      uVar19 = 0;
      if ((int)(uint)uVar12 < iVar17) {
        uVar19 = ~(uint)uVar12 >> 0x1f;
      }
      if (uVar19 == 0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar17 = local_158.ArrayNum;
      }
      iVar2 = *(int *)(*(longlong *)(local_158.AllocatorInstance.Data + uVar18) + 0x80);
      uVar19 = 0;
      if ((int)uVar11 < iVar17) {
        uVar19 = ~uVar11 >> 0x1f;
      }
      if (uVar19 == 0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar17 = local_158.ArrayNum;
      }
      if (iVar2 < *(int *)(*(longlong *)(local_158.AllocatorInstance.Data + uVar13) + 0x80)) {
        uVar12 = (ulonglong)uVar11;
        uVar18 = uVar13;
      }
      uVar11 = uVar11 + 1;
      uVar13 = uVar13 + 8;
    } while ((int)uVar11 < iVar17);
    local_144 = (int)uVar12;
  }
  if (param_3) {
    TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::WriteArrayStart(param_2->Object);
    iVar17 = local_158.ArrayNum;
  }
  local_148 = 0;
  if (0 < iVar17) {
    uVar18 = (ulonglong)(int)(uint)uVar12;
    local_130 = ~(uint)uVar12 >> 0x1f;
    local_128 = 0;
    do {
      pTVar4 = param_2->Object;
      uVar11 = (uint)uVar14;
      uVar19 = ~uVar11 >> 0x1f;
      if (param_3) {
        TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::WriteObjectStart(pTVar4);
        pTVar4 = param_2->Object;
        uVar16 = 0;
        if ((int)uVar11 < local_140.ArrayNum) {
          uVar16 = uVar19;
        }
        if ((uVar16 == 0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar10 = FName::ToString((FName *)(local_140.AllocatorInstance.Data +
                                           (longlong)(int)uVar11 * 8),&local_88);
        iVar17 = (pTVar4->Stack).ArrayNum;
        uVar15 = iVar17 - 1;
        uVar16 = 0;
        if ((int)uVar15 < iVar17) {
          uVar16 = ~uVar15 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((*(int *)((pTVar4->Stack).AllocatorInstance.Data +
                     (longlong)(pTVar4->Stack).ArrayNum * 4 + -4) != 6) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("Stack.Top() == EJson::Object",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                               ,0x110,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        EVar3 = pTVar4->PreviousTokenWritten;
        if ((EVar3 != CurlyOpen) && ((Identifier < EVar3 || ((0x1013U >> (EVar3 & 0x1f) & 1) == 0)))
           ) {
          local_res20[0] = 0x2c;
          (**(code **)(*(longlong *)pTVar4->Stream + 0x188))(pTVar4->Stream,local_res20,1);
          pTVar4->PreviousTokenWritten = Comma;
        }
        local_108 = L"\r\n";
        uStack_100 = 2;
        local_b8._12_4_ = uStack_fc;
        local_b8.Size = 2;
        local_b8.DataPtr = L"\r\n";
        TJsonPrintPolicy<char>::WriteString(pTVar4->Stream,&local_b8);
        pFVar5 = pTVar4->Stream;
        if (0 < pTVar4->IndentLevel) {
          uVar14 = (ulonglong)(uint)pTVar4->IndentLevel;
          do {
            local_188[0] = 9;
            (**(code **)(*(longlong *)pFVar5 + 0x188))(pFVar5,local_188,1);
            uVar14 = uVar14 - 1;
            uVar11 = local_148;
          } while (uVar14 != 0);
        }
        uStack_f0 = 4;
        local_f8 = L"Name";
        local_a8 = 0x50641bc8;
        uStack_a4 = 1;
        uStack_a0 = 4;
        uStack_9c = uStack_ec;
        (**(code **)(pTVar4->_padding_ + 0x28))(pTVar4,&local_a8);
        local_180[0] = 0x3a;
        (**(code **)(*(longlong *)pTVar4->Stream + 0x188))(pTVar4->Stream,local_180,1);
        pTVar4->PreviousTokenWritten = Identifier;
        local_178[0] = 0x20;
        (**(code **)(*(longlong *)pTVar4->Stream + 0x188))(pTVar4->Stream,local_178);
        pFVar6 = (pFVar10->Data).AllocatorInstance.Data;
        iVar17 = (pFVar10->Data).ArrayNum;
        iStack_e0 = iVar17 + -1;
        if (iVar17 == 0) {
          iStack_e0 = 0;
        }
        local_e8._0_4_ = SUB84(pFVar6,0);
        local_e8._4_4_ = (undefined4)((ulonglong)pFVar6 >> 0x20);
        local_98 = (undefined4)local_e8;
        uStack_94 = local_e8._4_4_;
        uStack_8c = uStack_dc;
        local_e8 = pFVar6;
        iStack_90 = iStack_e0;
        (**(code **)(pTVar4->_padding_ + 0x28))(pTVar4,&local_98);
        pTVar4->PreviousTokenWritten = String;
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        uVar18 = (ulonglong)(int)uVar12;
      }
      else {
        uVar16 = 0;
        if ((int)uVar11 < local_140.ArrayNum) {
          uVar16 = uVar19;
        }
        if ((uVar16 == 0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar10 = FName::ToString((FName *)(local_140.AllocatorInstance.Data +
                                           (longlong)(int)uVar11 * 8),&local_78);
        TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::WriteObjectStart<FString>(pTVar4,pFVar10);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
      }
      uVar16 = 0;
      if ((int)uVar12 < local_158.ArrayNum) {
        uVar16 = local_130;
      }
      if (uVar16 == 0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      lVar7 = *(longlong *)(local_158.AllocatorInstance.Data + uVar18 * 8);
      uVar16 = 0;
      if ((int)uVar11 < local_158.ArrayNum) {
        uVar16 = uVar19;
      }
      if ((uVar16 == 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_120 = *(longlong *)(local_158.AllocatorInstance.Data + local_128);
      piVar1 = (int *)(local_120 + 0x80);
      for (uVar11 = 0; (-1 < (int)uVar11 && ((int)uVar11 < *piVar1)); uVar11 = uVar11 + 1) {
        pTVar4 = param_2->Object;
        if (((int)uVar11 < 0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar19 = 0;
        if ((int)uVar11 < *(int *)(lVar7 + 0x80)) {
          uVar19 = ~uVar11 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar10 = FString::SanitizeFloat
                            (&local_58,
                             (double)*(float *)(*(longlong *)(lVar7 + 0x78) +
                                               (longlong)(int)uVar11 * 8),0);
        iVar17 = (pTVar4->Stack).ArrayNum;
        uVar16 = iVar17 - 1;
        uVar19 = 0;
        if ((int)uVar16 < iVar17) {
          uVar19 = ~uVar16 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((*(int *)((pTVar4->Stack).AllocatorInstance.Data +
                     (longlong)(pTVar4->Stack).ArrayNum * 4 + -4) != 6) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("Stack.Top() == EJson::Object",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                               ,0x110,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::WriteIdentifier(pTVar4,pFVar10);
        local_170[0] = 0x20;
        (**(code **)(*(longlong *)pTVar4->Stream + 0x188))(pTVar4->Stream,local_170,1);
        pFVar5 = pTVar4->Stream;
        FString::PrintfImpl(&local_118,L"%g");
        local_d8 = local_118.Data.AllocatorInstance.Data;
        iStack_d0 = local_118.Data.ArrayNum + -1;
        if (local_118.Data.ArrayNum == 0) {
          iStack_d0 = 0;
        }
        local_68._12_4_ = uStack_cc;
        local_68.Size = iStack_d0;
        local_68.DataPtr = (wchar_t *)local_118.Data.AllocatorInstance.Data;
        TJsonPrintPolicy<char>::WriteString(pFVar5,&local_68);
        if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
        }
        pTVar4->PreviousTokenWritten = Number;
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      pTVar4 = param_2->Object;
      iVar17 = (pTVar4->Stack).ArrayNum;
      uVar19 = iVar17 - 1;
      uVar11 = 0;
      if ((int)uVar19 < iVar17) {
        uVar11 = ~uVar19 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((*(int *)((pTVar4->Stack).AllocatorInstance.Data +
                   (longlong)(pTVar4->Stack).ArrayNum * 4 + -4) != 6) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("Stack.Top() == EJson::Object",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                             ,0x8e,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_c8 = L"\r\n";
      uStack_c0 = 2;
      local_48._12_4_ = uStack_bc;
      local_48.Size = 2;
      local_48.DataPtr = L"\r\n";
      TJsonPrintPolicy<char>::WriteString(pTVar4->Stream,&local_48);
      pTVar4->IndentLevel = pTVar4->IndentLevel + -1;
      pFVar5 = pTVar4->Stream;
      if (0 < pTVar4->IndentLevel) {
        uVar12 = (ulonglong)(uint)pTVar4->IndentLevel;
        do {
          local_168[0] = 9;
          (**(code **)(*(longlong *)pFVar5 + 0x188))(pFVar5,local_168,1);
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      local_160[0] = 0x7d;
      (**(code **)(*(longlong *)pTVar4->Stream + 0x188))(pTVar4->Stream,local_160,1);
      if (((pTVar4->Stack).ArrayNum < 1) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar17 = (pTVar4->Stack).ArrayNum;
      uVar11 = iVar17 - 1;
      pFVar6 = (pTVar4->Stack).AllocatorInstance.Data + (longlong)(int)uVar11 * 4;
      iVar17 = ~uVar11 + iVar17;
      if (iVar17 != 0) {
        memmove(pFVar6,pFVar6 + 4,(longlong)iVar17 << 2);
      }
      iVar17 = (pTVar4->Stack).ArrayNum + -1;
      (pTVar4->Stack).ArrayNum = iVar17;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,&(pTVar4->Stack).AllocatorInstance,iVar17,&(pTVar4->Stack).ArrayMax);
      local_128 = local_128 + 8;
      uVar18 = (ulonglong)local_144;
      pTVar4->PreviousTokenWritten = CurlyClose;
      local_148 = local_148 + 1;
      uVar14 = (ulonglong)local_148;
      uVar12 = uVar18;
    } while ((int)local_148 < local_158.ArrayNum);
  }
  if (param_3) {
    TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::WriteArrayEnd(param_2->Object);
  }
  if (local_158.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.AllocatorInstance.Data);
  }
  if (local_140.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.AllocatorInstance.Data);
  }
  return;
}

// WriteTableAsJSON_Internal<wchar_t,FRichCurve> @ 147a222c0

void __cdecl
WriteTableAsJSON_Internal<wchar_t,FRichCurve>
          (TMap<FName,FRichCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurve_*,0>_>
           *param_1,TSharedRef<TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>,1> *param_2,
          bool param_3)

{
  int *piVar1;
  int iVar2;
  EJsonToken EVar3;
  FArchive *pFVar4;
  FScriptContainerElement *pFVar5;
  longlong *plVar6;
  bool bVar7;
  FString *pFVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  ForAnyElementType FVar12;
  ulonglong uVar13;
  code *pcVar14;
  ulonglong uVar15;
  longlong lVar16;
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *pTVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  undefined2 local_res20 [4];
  TArray<FRichCurve_*,TSizedDefaultAllocator<32>_> local_138;
  undefined2 local_128 [4];
  undefined2 local_120 [4];
  undefined2 local_118 [4];
  undefined2 local_110 [4];
  undefined2 local_108 [4];
  undefined2 local_100 [4];
  uint local_f8;
  uint local_f4;
  longlong local_f0;
  TArray<FName,TSizedDefaultAllocator<32>_> local_e8;
  uint local_d8;
  longlong local_d0;
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *local_c8;
  longlong *local_c0;
  FString local_b8;
  wchar_t *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  int iStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  FString local_68;
  FString local_58;
  FString local_48;
  
  uVar11 = 0;
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.ArrayNum = 0;
  local_138.ArrayMax = 0;
  TMapBase<FName,FRichCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurve_*,0>_>
  ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,FRichCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurve_*,0>_>
              *)param_1,&local_e8);
  TMapBase<FName,FRichCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurve_*,0>_>
  ::GenerateValueArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,FRichCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurve_*,0>_>
              *)param_1,&local_138);
  uVar10 = 1;
  local_f8 = 0;
  iVar9 = local_138.ArrayNum;
  if (1 < local_138.ArrayNum) {
    uVar15 = 8;
    uVar13 = uVar11;
    uVar22 = uVar11;
    do {
      uVar21 = 0;
      if ((int)(uint)uVar22 < iVar9) {
        uVar21 = ~(uint)uVar22 >> 0x1f;
      }
      if (uVar21 == 0) {
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        iVar9 = local_138.ArrayNum;
      }
      iVar2 = *(int *)(*(longlong *)(local_138.AllocatorInstance.Data + uVar13) + 0x78);
      uVar21 = 0;
      if ((int)uVar10 < iVar9) {
        uVar21 = ~uVar10 >> 0x1f;
      }
      if (uVar21 == 0) {
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        iVar9 = local_138.ArrayNum;
      }
      if (iVar2 < *(int *)(*(longlong *)(local_138.AllocatorInstance.Data + uVar15) + 0x78)) {
        uVar13 = uVar15;
        local_f8 = uVar10;
      }
      uVar22 = (ulonglong)local_f8;
      uVar10 = uVar10 + 1;
      uVar15 = uVar15 + 8;
    } while ((int)uVar10 < iVar9);
  }
  uVar10 = local_f8;
  if (param_3) {
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayStart(param_2->Object);
    iVar9 = local_138.ArrayNum;
  }
  local_f4 = 0;
  if (0 < iVar9) {
    local_d0 = (longlong)(int)uVar10;
    local_d8 = ~uVar10 >> 0x1f;
    local_f0 = 0;
    do {
      lVar20 = local_d0;
      lVar16 = local_f0;
      pTVar17 = param_2->Object;
      uVar10 = (uint)uVar11;
      uVar21 = ~uVar10 >> 0x1f;
      if (param_3) {
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart(pTVar17);
        pTVar17 = param_2->Object;
        uVar19 = 0;
        if ((int)uVar10 < local_e8.ArrayNum) {
          uVar19 = uVar21;
        }
        if ((uVar19 == 0) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        pFVar8 = FName::ToString((FName *)(local_e8.AllocatorInstance.Data +
                                          (longlong)(int)uVar10 * 8),&local_68);
        iVar9 = (pTVar17->Stack).ArrayNum;
        uVar18 = iVar9 - 1;
        uVar19 = 0;
        if ((int)uVar18 < iVar9) {
          uVar19 = ~uVar18 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        if ((*(int *)((pTVar17->Stack).AllocatorInstance.Data +
                     (longlong)(pTVar17->Stack).ArrayNum * 4 + -4) != 6) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("Stack.Top() == EJson::Object",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                               ,0x110,L""), bVar7)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        EVar3 = pTVar17->PreviousTokenWritten;
        if ((EVar3 != CurlyOpen) && ((Identifier < EVar3 || ((0x1013U >> (EVar3 & 0x1f) & 1) == 0)))
           ) {
          local_res20[0] = 0x2c;
          (**(code **)(*(longlong *)pTVar17->Stream + 0x188))(pTVar17->Stream,local_res20,2);
          pTVar17->PreviousTokenWritten = Comma;
        }
        (**(code **)(*(longlong *)pTVar17->Stream + 0x188))(pTVar17->Stream,L"\r\n",4);
        pFVar4 = pTVar17->Stream;
        if (0 < pTVar17->IndentLevel) {
          uVar11 = (ulonglong)(uint)pTVar17->IndentLevel;
          do {
            local_128[0] = 9;
            (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,local_128,2);
            uVar11 = uVar11 - 1;
            uVar10 = local_f4;
          } while (uVar11 != 0);
        }
        uStack_a0 = 4;
        local_a8 = L"Name";
        local_88 = 0x50641bc8;
        uStack_84 = 1;
        uStack_80 = 4;
        uStack_7c = uStack_9c;
        (**(code **)(pTVar17->_padding_ + 0x28))(pTVar17,&local_88);
        local_120[0] = 0x3a;
        (**(code **)(*(longlong *)pTVar17->Stream + 0x188))(pTVar17->Stream,local_120,2);
        pTVar17->PreviousTokenWritten = Identifier;
        local_118[0] = 0x20;
        (**(code **)(*(longlong *)pTVar17->Stream + 0x188))(pTVar17->Stream,local_118);
        pFVar5 = (pFVar8->Data).AllocatorInstance.Data;
        iVar9 = (pFVar8->Data).ArrayNum;
        iStack_90 = iVar9 + -1;
        if (iVar9 == 0) {
          iStack_90 = 0;
        }
        local_98._0_4_ = SUB84(pFVar5,0);
        local_98._4_4_ = (undefined4)((ulonglong)pFVar5 >> 0x20);
        local_78 = (undefined4)local_98;
        uStack_74 = local_98._4_4_;
        uStack_6c = uStack_8c;
        local_98 = pFVar5;
        iStack_70 = iStack_90;
        (**(code **)(pTVar17->_padding_ + 0x28))(pTVar17,&local_78);
        pTVar17->PreviousTokenWritten = String;
        lVar16 = local_f0;
        lVar20 = local_d0;
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
          lVar16 = local_f0;
          lVar20 = local_d0;
        }
      }
      else {
        uVar19 = 0;
        if ((int)uVar10 < local_e8.ArrayNum) {
          uVar19 = uVar21;
        }
        if ((uVar19 == 0) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        pFVar8 = FName::ToString((FName *)(local_e8.AllocatorInstance.Data +
                                          (longlong)(int)uVar10 * 8),&local_58);
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart<FString>
                  (pTVar17,pFVar8);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      uVar19 = 0;
      if ((int)local_f8 < local_138.ArrayNum) {
        uVar19 = local_d8;
      }
      if (uVar19 == 0) {
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
      }
      local_c0 = (longlong *)(*(longlong *)(local_138.AllocatorInstance.Data + lVar20 * 8) + 0x70);
      uVar19 = 0;
      if ((int)uVar10 < local_138.ArrayNum) {
        uVar19 = uVar21;
      }
      if ((uVar19 == 0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      local_c8 = *(TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> **)
                  (local_138.AllocatorInstance.Data + lVar16);
      piVar1 = (int *)((longlong)local_c8 + 0x78);
      for (uVar10 = 0; (-1 < (int)uVar10 && ((int)uVar10 < *piVar1)); uVar10 = uVar10 + 1) {
        pTVar17 = param_2->Object;
        if (((int)uVar10 < 0) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        plVar6 = local_c0;
        uVar21 = 0;
        if ((int)uVar10 < (int)local_c0[1]) {
          uVar21 = ~uVar10 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        pFVar8 = FString::SanitizeFloat
                           (&local_48,(double)*(float *)(*plVar6 + 4 + (longlong)(int)uVar10 * 0x1c)
                            ,0);
        iVar9 = (pTVar17->Stack).ArrayNum;
        uVar19 = iVar9 - 1;
        uVar21 = 0;
        if ((int)uVar19 < iVar9) {
          uVar21 = ~uVar19 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        if ((*(int *)((pTVar17->Stack).AllocatorInstance.Data +
                     (longlong)(pTVar17->Stack).ArrayNum * 4 + -4) != 6) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("Stack.Top() == EJson::Object",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                               ,0x110,L""), bVar7)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier(pTVar17,pFVar8);
        local_110[0] = 0x20;
        (**(code **)(*(longlong *)pTVar17->Stream + 0x188))(pTVar17->Stream,local_110,2);
        pFVar4 = pTVar17->Stream;
        FString::PrintfImpl(&local_b8,L"%g");
        FVar12.Data = local_b8.Data.AllocatorInstance.Data;
        iVar9 = local_b8.Data.ArrayNum + -1;
        if (local_b8.Data.ArrayNum == 0) {
          iVar9 = 0;
        }
        if (local_b8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          FVar12.Data = (FScriptContainerElement *)0x0;
          pcVar14 = *(code **)(*(longlong *)pFVar4 + 0x188);
        }
        else {
          if ((0 < iVar9) &&
             (*(short *)(local_b8.Data.AllocatorInstance.Data + (longlong)iVar9 * 2 + -2) == 0)) {
            iVar9 = iVar9 + -1;
          }
          pcVar14 = *(code **)(*(longlong *)pFVar4 + 0x188);
          if (iVar9 == -1) {
            wcslen((wchar_t *)local_b8.Data.AllocatorInstance.Data);
          }
        }
        (*pcVar14)(pFVar4,FVar12.Data);
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        pTVar17->PreviousTokenWritten = Number;
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      pTVar17 = param_2->Object;
      iVar9 = (pTVar17->Stack).ArrayNum;
      uVar21 = iVar9 - 1;
      uVar10 = 0;
      if ((int)uVar21 < iVar9) {
        uVar10 = ~uVar21 >> 0x1f;
      }
      local_c8 = pTVar17;
      if ((uVar10 == 0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      if ((*(int *)((pTVar17->Stack).AllocatorInstance.Data +
                   (longlong)(pTVar17->Stack).ArrayNum * 4 + -4) != 6) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("Stack.Top() == EJson::Object",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                             ,0x8e,L""), bVar7)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      (**(code **)(*(longlong *)pTVar17->Stream + 0x188))(pTVar17->Stream,L"\r\n",4);
      pTVar17->IndentLevel = pTVar17->IndentLevel + -1;
      pFVar4 = pTVar17->Stream;
      if (0 < pTVar17->IndentLevel) {
        uVar11 = (ulonglong)(uint)pTVar17->IndentLevel;
        do {
          local_108[0] = 9;
          (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,local_108,2);
          uVar11 = uVar11 - 1;
          pTVar17 = local_c8;
        } while (uVar11 != 0);
      }
      local_100[0] = 0x7d;
      (**(code **)(*(longlong *)pTVar17->Stream + 0x188))(pTVar17->Stream,local_100,2);
      if (((pTVar17->Stack).ArrayNum < 1) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      iVar9 = (pTVar17->Stack).ArrayNum;
      uVar10 = iVar9 - 1;
      pFVar5 = (pTVar17->Stack).AllocatorInstance.Data + (longlong)(int)uVar10 * 4;
      iVar9 = ~uVar10 + iVar9;
      if (iVar9 != 0) {
        memmove(pFVar5,pFVar5 + 4,(longlong)iVar9 << 2);
      }
      iVar9 = (pTVar17->Stack).ArrayNum + -1;
      (pTVar17->Stack).ArrayNum = iVar9;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,&(pTVar17->Stack).AllocatorInstance,iVar9,&(pTVar17->Stack).ArrayMax);
      local_f4 = local_f4 + 1;
      uVar11 = (ulonglong)local_f4;
      pTVar17->PreviousTokenWritten = CurlyClose;
      local_f0 = local_f0 + 8;
    } while ((int)local_f4 < local_138.ArrayNum);
  }
  if (param_3) {
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayEnd(param_2->Object);
  }
  if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.AllocatorInstance.Data);
  }
  if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  return;
}

// WriteTableAsJSON_Internal<wchar_t,FSimpleCurve> @ 147a22c80

void __cdecl
WriteTableAsJSON_Internal<wchar_t,FSimpleCurve>
          (TMap<FName,FSimpleCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSimpleCurve_*,0>_>
           *param_1,TSharedRef<TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>,1> *param_2,
          bool param_3)

{
  int *piVar1;
  int iVar2;
  EJsonToken EVar3;
  FArchive *pFVar4;
  FScriptContainerElement *pFVar5;
  longlong *plVar6;
  bool bVar7;
  FString *pFVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  ForAnyElementType FVar12;
  ulonglong uVar13;
  code *pcVar14;
  ulonglong uVar15;
  longlong lVar16;
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *pTVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  undefined2 local_res20 [4];
  TArray<FSimpleCurve_*,TSizedDefaultAllocator<32>_> local_138;
  undefined2 local_128 [4];
  undefined2 local_120 [4];
  undefined2 local_118 [4];
  undefined2 local_110 [4];
  undefined2 local_108 [4];
  undefined2 local_100 [4];
  uint local_f8;
  uint local_f4;
  longlong local_f0;
  TArray<FName,TSizedDefaultAllocator<32>_> local_e8;
  uint local_d8;
  longlong local_d0;
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *local_c8;
  longlong *local_c0;
  FString local_b8;
  wchar_t *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  int iStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  FString local_68;
  FString local_58;
  FString local_48;
  
  uVar11 = 0;
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.ArrayNum = 0;
  local_138.ArrayMax = 0;
  TMapBase<FName,FSimpleCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSimpleCurve_*,0>_>
  ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,FSimpleCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSimpleCurve_*,0>_>
              *)param_1,&local_e8);
  TMapBase<FName,FSimpleCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSimpleCurve_*,0>_>
  ::GenerateValueArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,FSimpleCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSimpleCurve_*,0>_>
              *)param_1,&local_138);
  uVar10 = 1;
  local_f8 = 0;
  iVar9 = local_138.ArrayNum;
  if (1 < local_138.ArrayNum) {
    uVar15 = 8;
    uVar13 = uVar11;
    uVar22 = uVar11;
    do {
      uVar21 = 0;
      if ((int)(uint)uVar22 < iVar9) {
        uVar21 = ~(uint)uVar22 >> 0x1f;
      }
      if (uVar21 == 0) {
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        iVar9 = local_138.ArrayNum;
      }
      iVar2 = *(int *)(*(longlong *)(local_138.AllocatorInstance.Data + uVar13) + 0x80);
      uVar21 = 0;
      if ((int)uVar10 < iVar9) {
        uVar21 = ~uVar10 >> 0x1f;
      }
      if (uVar21 == 0) {
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        iVar9 = local_138.ArrayNum;
      }
      if (iVar2 < *(int *)(*(longlong *)(local_138.AllocatorInstance.Data + uVar15) + 0x80)) {
        uVar13 = uVar15;
        local_f8 = uVar10;
      }
      uVar22 = (ulonglong)local_f8;
      uVar10 = uVar10 + 1;
      uVar15 = uVar15 + 8;
    } while ((int)uVar10 < iVar9);
  }
  uVar10 = local_f8;
  if (param_3) {
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayStart(param_2->Object);
    iVar9 = local_138.ArrayNum;
  }
  local_f4 = 0;
  if (0 < iVar9) {
    local_d0 = (longlong)(int)uVar10;
    local_d8 = ~uVar10 >> 0x1f;
    local_f0 = 0;
    do {
      lVar20 = local_d0;
      lVar16 = local_f0;
      pTVar17 = param_2->Object;
      uVar10 = (uint)uVar11;
      uVar21 = ~uVar10 >> 0x1f;
      if (param_3) {
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart(pTVar17);
        pTVar17 = param_2->Object;
        uVar19 = 0;
        if ((int)uVar10 < local_e8.ArrayNum) {
          uVar19 = uVar21;
        }
        if ((uVar19 == 0) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        pFVar8 = FName::ToString((FName *)(local_e8.AllocatorInstance.Data +
                                          (longlong)(int)uVar10 * 8),&local_68);
        iVar9 = (pTVar17->Stack).ArrayNum;
        uVar18 = iVar9 - 1;
        uVar19 = 0;
        if ((int)uVar18 < iVar9) {
          uVar19 = ~uVar18 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        if ((*(int *)((pTVar17->Stack).AllocatorInstance.Data +
                     (longlong)(pTVar17->Stack).ArrayNum * 4 + -4) != 6) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("Stack.Top() == EJson::Object",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                               ,0x110,L""), bVar7)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        EVar3 = pTVar17->PreviousTokenWritten;
        if ((EVar3 != CurlyOpen) && ((Identifier < EVar3 || ((0x1013U >> (EVar3 & 0x1f) & 1) == 0)))
           ) {
          local_res20[0] = 0x2c;
          (**(code **)(*(longlong *)pTVar17->Stream + 0x188))(pTVar17->Stream,local_res20,2);
          pTVar17->PreviousTokenWritten = Comma;
        }
        (**(code **)(*(longlong *)pTVar17->Stream + 0x188))(pTVar17->Stream,L"\r\n",4);
        pFVar4 = pTVar17->Stream;
        if (0 < pTVar17->IndentLevel) {
          uVar11 = (ulonglong)(uint)pTVar17->IndentLevel;
          do {
            local_128[0] = 9;
            (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,local_128,2);
            uVar11 = uVar11 - 1;
            uVar10 = local_f4;
          } while (uVar11 != 0);
        }
        uStack_a0 = 4;
        local_a8 = L"Name";
        local_88 = 0x50641bc8;
        uStack_84 = 1;
        uStack_80 = 4;
        uStack_7c = uStack_9c;
        (**(code **)(pTVar17->_padding_ + 0x28))(pTVar17,&local_88);
        local_120[0] = 0x3a;
        (**(code **)(*(longlong *)pTVar17->Stream + 0x188))(pTVar17->Stream,local_120,2);
        pTVar17->PreviousTokenWritten = Identifier;
        local_118[0] = 0x20;
        (**(code **)(*(longlong *)pTVar17->Stream + 0x188))(pTVar17->Stream,local_118);
        pFVar5 = (pFVar8->Data).AllocatorInstance.Data;
        iVar9 = (pFVar8->Data).ArrayNum;
        iStack_90 = iVar9 + -1;
        if (iVar9 == 0) {
          iStack_90 = 0;
        }
        local_98._0_4_ = SUB84(pFVar5,0);
        local_98._4_4_ = (undefined4)((ulonglong)pFVar5 >> 0x20);
        local_78 = (undefined4)local_98;
        uStack_74 = local_98._4_4_;
        uStack_6c = uStack_8c;
        local_98 = pFVar5;
        iStack_70 = iStack_90;
        (**(code **)(pTVar17->_padding_ + 0x28))(pTVar17,&local_78);
        pTVar17->PreviousTokenWritten = String;
        lVar16 = local_f0;
        lVar20 = local_d0;
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
          lVar16 = local_f0;
          lVar20 = local_d0;
        }
      }
      else {
        uVar19 = 0;
        if ((int)uVar10 < local_e8.ArrayNum) {
          uVar19 = uVar21;
        }
        if ((uVar19 == 0) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        pFVar8 = FName::ToString((FName *)(local_e8.AllocatorInstance.Data +
                                          (longlong)(int)uVar10 * 8),&local_58);
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart<FString>
                  (pTVar17,pFVar8);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      uVar19 = 0;
      if ((int)local_f8 < local_138.ArrayNum) {
        uVar19 = local_d8;
      }
      if (uVar19 == 0) {
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
      }
      local_c0 = (longlong *)(*(longlong *)(local_138.AllocatorInstance.Data + lVar20 * 8) + 0x78);
      uVar19 = 0;
      if ((int)uVar10 < local_138.ArrayNum) {
        uVar19 = uVar21;
      }
      if ((uVar19 == 0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      local_c8 = *(TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> **)
                  (local_138.AllocatorInstance.Data + lVar16);
      piVar1 = (int *)((longlong)local_c8 + 0x80);
      for (uVar10 = 0; (-1 < (int)uVar10 && ((int)uVar10 < *piVar1)); uVar10 = uVar10 + 1) {
        pTVar17 = param_2->Object;
        if (((int)uVar10 < 0) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        plVar6 = local_c0;
        uVar21 = 0;
        if ((int)uVar10 < (int)local_c0[1]) {
          uVar21 = ~uVar10 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        pFVar8 = FString::SanitizeFloat
                           (&local_48,(double)*(float *)(*plVar6 + (longlong)(int)uVar10 * 8),0);
        iVar9 = (pTVar17->Stack).ArrayNum;
        uVar19 = iVar9 - 1;
        uVar21 = 0;
        if ((int)uVar19 < iVar9) {
          uVar21 = ~uVar19 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        if ((*(int *)((pTVar17->Stack).AllocatorInstance.Data +
                     (longlong)(pTVar17->Stack).ArrayNum * 4 + -4) != 6) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("Stack.Top() == EJson::Object",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                               ,0x110,L""), bVar7)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier(pTVar17,pFVar8);
        local_110[0] = 0x20;
        (**(code **)(*(longlong *)pTVar17->Stream + 0x188))(pTVar17->Stream,local_110,2);
        pFVar4 = pTVar17->Stream;
        FString::PrintfImpl(&local_b8,L"%g");
        FVar12.Data = local_b8.Data.AllocatorInstance.Data;
        iVar9 = local_b8.Data.ArrayNum + -1;
        if (local_b8.Data.ArrayNum == 0) {
          iVar9 = 0;
        }
        if (local_b8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          FVar12.Data = (FScriptContainerElement *)0x0;
          pcVar14 = *(code **)(*(longlong *)pFVar4 + 0x188);
        }
        else {
          if ((0 < iVar9) &&
             (*(short *)(local_b8.Data.AllocatorInstance.Data + (longlong)iVar9 * 2 + -2) == 0)) {
            iVar9 = iVar9 + -1;
          }
          pcVar14 = *(code **)(*(longlong *)pFVar4 + 0x188);
          if (iVar9 == -1) {
            wcslen((wchar_t *)local_b8.Data.AllocatorInstance.Data);
          }
        }
        (*pcVar14)(pFVar4,FVar12.Data);
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        pTVar17->PreviousTokenWritten = Number;
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      pTVar17 = param_2->Object;
      iVar9 = (pTVar17->Stack).ArrayNum;
      uVar21 = iVar9 - 1;
      uVar10 = 0;
      if ((int)uVar21 < iVar9) {
        uVar10 = ~uVar21 >> 0x1f;
      }
      local_c8 = pTVar17;
      if ((uVar10 == 0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      if ((*(int *)((pTVar17->Stack).AllocatorInstance.Data +
                   (longlong)(pTVar17->Stack).ArrayNum * 4 + -4) != 6) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("Stack.Top() == EJson::Object",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                             ,0x8e,L""), bVar7)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      (**(code **)(*(longlong *)pTVar17->Stream + 0x188))(pTVar17->Stream,L"\r\n",4);
      pTVar17->IndentLevel = pTVar17->IndentLevel + -1;
      pFVar4 = pTVar17->Stream;
      if (0 < pTVar17->IndentLevel) {
        uVar11 = (ulonglong)(uint)pTVar17->IndentLevel;
        do {
          local_108[0] = 9;
          (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,local_108,2);
          uVar11 = uVar11 - 1;
          pTVar17 = local_c8;
        } while (uVar11 != 0);
      }
      local_100[0] = 0x7d;
      (**(code **)(*(longlong *)pTVar17->Stream + 0x188))(pTVar17->Stream,local_100,2);
      if (((pTVar17->Stack).ArrayNum < 1) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      iVar9 = (pTVar17->Stack).ArrayNum;
      uVar10 = iVar9 - 1;
      pFVar5 = (pTVar17->Stack).AllocatorInstance.Data + (longlong)(int)uVar10 * 4;
      iVar9 = ~uVar10 + iVar9;
      if (iVar9 != 0) {
        memmove(pFVar5,pFVar5 + 4,(longlong)iVar9 << 2);
      }
      iVar9 = (pTVar17->Stack).ArrayNum + -1;
      (pTVar17->Stack).ArrayNum = iVar9;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,&(pTVar17->Stack).AllocatorInstance,iVar9,&(pTVar17->Stack).ArrayMax);
      local_f4 = local_f4 + 1;
      uVar11 = (ulonglong)local_f4;
      pTVar17->PreviousTokenWritten = CurlyClose;
      local_f0 = local_f0 + 8;
    } while ((int)local_f4 < local_138.ArrayNum);
  }
  if (param_3) {
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayEnd(param_2->Object);
  }
  if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.AllocatorInstance.Data);
  }
  if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  return;
}

// ~TFunction_OwnedObject<`UActorChannel::ReplicateActor'::__l2::<lambda_5>,0,0> @ 147a28810

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UActorChannel::ReplicateActor'::__l2::<lambda_5>,0,0>::
~TFunction_OwnedObject<_UActorChannel::ReplicateActor_::__l2::<lambda_5>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UActorChannel::ReplicateActor'::`2'::<lambda_5>,0,0>::_vftable_;
  return;
}

// ~TScopeGuard<`UE::Geometry::Spline::TPolyBezierSpline<float>::AppendBezierSegment'::__l2::<lambda_1>_> @ 147a28950

void __thiscall
ScopeExitSupport::
TScopeGuard<`UE::Geometry::Spline::TPolyBezierSpline<float>::AppendBezierSegment'::__l2::<lambda_1>_>
::
~TScopeGuard<_UE::Geometry::Spline::TPolyBezierSpline<float>::AppendBezierSegment_::__l2::<lambda_1>_>
          (void *this)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined4 uVar6;
  
  if (*(char *)(*(longlong *)this + 4) != '\0') {
    (**(code **)(**(longlong **)((longlong)this + 8) + 0x38))(*(longlong **)((longlong)this + 8),1);
    plVar2 = *(longlong **)((longlong)this + 8);
    puVar3 = *(undefined4 **)this;
    pcVar4 = *(code **)(*plVar2 + 0xa0);
    if (*(char *)(puVar3 + 1) == '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar1 = *puVar3;
    uVar6 = (**(code **)(**(longlong **)((longlong)this + 8) + 0x50))();
    (*pcVar4)(plVar2,uVar6,uVar1);
  }
  return;
}

// ~TScopeGuard<`UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::AppendBezierSegment'::__l2::<lambda_1>_> @ 147a28a00

void __thiscall
ScopeExitSupport::
TScopeGuard<`UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::AppendBezierSegment'::__l2::<lambda_1>_>
::
~TScopeGuard<_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::AppendBezierSegment_::__l2::<lambda_1>_>
          (void *this)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined4 uVar6;
  
  if (*(char *)(*(longlong *)this + 4) != '\0') {
    (**(code **)(**(longlong **)((longlong)this + 8) + 0x38))(*(longlong **)((longlong)this + 8),1);
    plVar2 = *(longlong **)((longlong)this + 8);
    puVar3 = *(undefined4 **)this;
    pcVar4 = *(code **)(*plVar2 + 0xa0);
    if (*(char *)(puVar3 + 1) == '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar1 = *puVar3;
    uVar6 = (**(code **)(**(longlong **)((longlong)this + 8) + 0x50))();
    (*pcVar4)(plVar2,uVar6,uVar1);
  }
  return;
}

// ~TScopeGuard<`UE::Geometry::Spline::TPolyBezierSpline<float>::AppendPoint'::__l2::<lambda_1>_> @ 147a28ab0

void __thiscall
ScopeExitSupport::
TScopeGuard<`UE::Geometry::Spline::TPolyBezierSpline<float>::AppendPoint'::__l2::<lambda_1>_>::
~TScopeGuard<_UE::Geometry::Spline::TPolyBezierSpline<float>::AppendPoint_::__l2::<lambda_1>_>
          (void *this)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined4 uVar6;
  
  if (*(char *)(*(longlong *)this + 4) != '\0') {
    (**(code **)(**(longlong **)((longlong)this + 8) + 0x38))(*(longlong **)((longlong)this + 8),1);
    plVar2 = *(longlong **)((longlong)this + 8);
    puVar3 = *(undefined4 **)this;
    pcVar4 = *(code **)(*plVar2 + 0xa0);
    if (*(char *)(puVar3 + 1) == '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar1 = *puVar3;
    uVar6 = (**(code **)(**(longlong **)((longlong)this + 8) + 0x50))();
    (*pcVar4)(plVar2,uVar6,uVar1);
  }
  return;
}

// ~TScopeGuard<`UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::AppendPoint'::__l2::<lambda_1>_> @ 147a28b60

void __thiscall
ScopeExitSupport::
TScopeGuard<`UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::AppendPoint'::__l2::<lambda_1>_>
::
~TScopeGuard<_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::AppendPoint_::__l2::<lambda_1>_>
          (void *this)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined4 uVar6;
  
  if (*(char *)(*(longlong *)this + 4) != '\0') {
    (**(code **)(**(longlong **)((longlong)this + 8) + 0x38))(*(longlong **)((longlong)this + 8),1);
    plVar2 = *(longlong **)((longlong)this + 8);
    puVar3 = *(undefined4 **)this;
    pcVar4 = *(code **)(*plVar2 + 0xa0);
    if (*(char *)(puVar3 + 1) == '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar1 = *puVar3;
    uVar6 = (**(code **)(**(longlong **)((longlong)this + 8) + 0x50))();
    (*pcVar4)(plVar2,uVar6,uVar1);
  }
  return;
}

// ~TScopeGuard<`UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::AppendPoint'::__l2::<lambda_1>_> @ 147a28c10

void __thiscall
ScopeExitSupport::
TScopeGuard<`UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::AppendPoint'::__l2::<lambda_1>_>
::
~TScopeGuard<_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::AppendPoint_::__l2::<lambda_1>_>
          (void *this)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined4 uVar6;
  
  if (*(char *)(*(longlong *)this + 4) != '\0') {
    (**(code **)(**(longlong **)((longlong)this + 8) + 0x38))(*(longlong **)((longlong)this + 8),1);
    plVar2 = *(longlong **)((longlong)this + 8);
    puVar3 = *(undefined4 **)this;
    pcVar4 = *(code **)(*plVar2 + 0xa0);
    if (*(char *)(puVar3 + 1) == '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar1 = *puVar3;
    uVar6 = (**(code **)(**(longlong **)((longlong)this + 8) + 0x50))();
    (*pcVar4)(plVar2,uVar6,uVar1);
  }
  return;
}

// ~TScopeGuard<`UE::Geometry::Spline::TPolyBezierSpline<float>::PrependBezierSegment'::__l2::<lambda_1>_> @ 147a28cc0

void __thiscall
ScopeExitSupport::
TScopeGuard<`UE::Geometry::Spline::TPolyBezierSpline<float>::PrependBezierSegment'::__l2::<lambda_1>_>
::
~TScopeGuard<_UE::Geometry::Spline::TPolyBezierSpline<float>::PrependBezierSegment_::__l2::<lambda_1>_>
          (void *this)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined4 uVar6;
  
  if (*(char *)(*(longlong *)this + 4) != '\0') {
    (**(code **)(**(longlong **)((longlong)this + 8) + 0x38))(*(longlong **)((longlong)this + 8),1);
    plVar2 = *(longlong **)((longlong)this + 8);
    puVar3 = *(undefined4 **)this;
    pcVar4 = *(code **)(*plVar2 + 0xa0);
    if (*(char *)(puVar3 + 1) == '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar1 = *puVar3;
    uVar6 = (**(code **)(**(longlong **)((longlong)this + 8) + 0x50))();
    (*pcVar4)(plVar2,uVar6,uVar1);
  }
  return;
}

// ~TScopeGuard<`UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::PrependBezierSegment'::__l2::<lambda_1>_> @ 147a28d70

void __thiscall
ScopeExitSupport::
TScopeGuard<`UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::PrependBezierSegment'::__l2::<lambda_1>_>
::
~TScopeGuard<_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::PrependBezierSegment_::__l2::<lambda_1>_>
          (void *this)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined4 uVar6;
  
  if (*(char *)(*(longlong *)this + 4) != '\0') {
    (**(code **)(**(longlong **)((longlong)this + 8) + 0x38))(*(longlong **)((longlong)this + 8),1);
    plVar2 = *(longlong **)((longlong)this + 8);
    puVar3 = *(undefined4 **)this;
    pcVar4 = *(code **)(*plVar2 + 0xa0);
    if (*(char *)(puVar3 + 1) == '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar1 = *puVar3;
    uVar6 = (**(code **)(**(longlong **)((longlong)this + 8) + 0x50))();
    (*pcVar4)(plVar2,uVar6,uVar1);
  }
  return;
}

// ~TScopeGuard<`UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::PrependBezierSegment'::__l2::<lambda_1>_> @ 147a28e20

void __thiscall
ScopeExitSupport::
TScopeGuard<`UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::PrependBezierSegment'::__l2::<lambda_1>_>
::
~TScopeGuard<_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::PrependBezierSegment_::__l2::<lambda_1>_>
          (void *this)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined4 uVar6;
  
  if (*(char *)(*(longlong *)this + 4) != '\0') {
    (**(code **)(**(longlong **)((longlong)this + 8) + 0x38))(*(longlong **)((longlong)this + 8),1);
    plVar2 = *(longlong **)((longlong)this + 8);
    puVar3 = *(undefined4 **)this;
    pcVar4 = *(code **)(*plVar2 + 0xa0);
    if (*(char *)(puVar3 + 1) == '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar1 = *puVar3;
    uVar6 = (**(code **)(**(longlong **)((longlong)this + 8) + 0x50))();
    (*pcVar4)(plVar2,uVar6,uVar1);
  }
  return;
}

// ~TScopeGuard<`UE::Geometry::Spline::TPolyBezierSpline<float>::PrependPoint'::__l2::<lambda_1>_> @ 147a28ed0

void __thiscall
ScopeExitSupport::
TScopeGuard<`UE::Geometry::Spline::TPolyBezierSpline<float>::PrependPoint'::__l2::<lambda_1>_>::
~TScopeGuard<_UE::Geometry::Spline::TPolyBezierSpline<float>::PrependPoint_::__l2::<lambda_1>_>
          (void *this)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined4 uVar6;
  
  if (*(char *)(*(longlong *)this + 4) != '\0') {
    (**(code **)(**(longlong **)((longlong)this + 8) + 0x38))(*(longlong **)((longlong)this + 8),1);
    plVar2 = *(longlong **)((longlong)this + 8);
    puVar3 = *(undefined4 **)this;
    pcVar4 = *(code **)(*plVar2 + 0xa0);
    if (*(char *)(puVar3 + 1) == '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar1 = *puVar3;
    uVar6 = (**(code **)(**(longlong **)((longlong)this + 8) + 0x50))();
    (*pcVar4)(plVar2,uVar6,uVar1);
  }
  return;
}

// ~TScopeGuard<`UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::PrependPoint'::__l2::<lambda_1>_> @ 147a28f80

void __thiscall
ScopeExitSupport::
TScopeGuard<`UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::PrependPoint'::__l2::<lambda_1>_>
::
~TScopeGuard<_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::PrependPoint_::__l2::<lambda_1>_>
          (void *this)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined4 uVar6;
  
  if (*(char *)(*(longlong *)this + 4) != '\0') {
    (**(code **)(**(longlong **)((longlong)this + 8) + 0x38))(*(longlong **)((longlong)this + 8),1);
    plVar2 = *(longlong **)((longlong)this + 8);
    puVar3 = *(undefined4 **)this;
    pcVar4 = *(code **)(*plVar2 + 0xa0);
    if (*(char *)(puVar3 + 1) == '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar1 = *puVar3;
    uVar6 = (**(code **)(**(longlong **)((longlong)this + 8) + 0x50))();
    (*pcVar4)(plVar2,uVar6,uVar1);
  }
  return;
}

// ~TScopeGuard<`UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::PrependPoint'::__l2::<lambda_1>_> @ 147a29030

void __thiscall
ScopeExitSupport::
TScopeGuard<`UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::PrependPoint'::__l2::<lambda_1>_>
::
~TScopeGuard<_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::PrependPoint_::__l2::<lambda_1>_>
          (void *this)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined4 uVar6;
  
  if (*(char *)(*(longlong *)this + 4) != '\0') {
    (**(code **)(**(longlong **)((longlong)this + 8) + 0x38))(*(longlong **)((longlong)this + 8),1);
    plVar2 = *(longlong **)((longlong)this + 8);
    puVar3 = *(undefined4 **)this;
    pcVar4 = *(code **)(*plVar2 + 0xa0);
    if (*(char *)(puVar3 + 1) == '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar1 = *puVar3;
    uVar6 = (**(code **)(**(longlong **)((longlong)this + 8) + 0x50))();
    (*pcVar4)(plVar2,uVar6,uVar1);
  }
  return;
}

// operator<< @ 147a2bcc0

FArchive * __cdecl operator<<(FArchive *param_1,FInterpCurve<UE::Math::TVector<double>_> *param_2)

{
  float *pfVar1;
  
  TArrayPrivateFriend::
  Serialize<FInterpCurvePoint<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->Points);
  if (0x1c3 < *(int *)&param_1->field_0x40) {
    operator<<(param_1,&param_2->bIsLooped);
    pfVar1 = (float *)**(undefined8 **)&param_1->field_0x8;
    if (pfVar1 + 1 <= (float *)(*(undefined8 **)&param_1->field_0x8)[1]) {
      param_2->LoopKeyOffset = *pfVar1;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      return param_1;
    }
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->LoopKeyOffset,4);
      return param_1;
    }
    FArchive::SerializeByteOrderSwapped(param_1,(uint *)&param_2->LoopKeyOffset);
  }
  return param_1;
}

// operator<< @ 147a2bd60

FArchive * __cdecl operator<<(FArchive *param_1,FInterpCurvePoint<float> *param_2)

{
  undefined1 *puVar1;
  float *pfVar2;
  float *pfVar3;
  uchar *puVar4;
  
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    param_2->InVal = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar2 = &param_2->OutVal;
  puVar1 = &param_1->field_0x2a;
  pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar3 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar2);
    }
  }
  else {
    *pfVar2 = *pfVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar2 = &param_2->ArriveTangent;
  pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar3 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar2);
    }
  }
  else {
    *pfVar2 = *pfVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar2 = &param_2->LeaveTangent;
  pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar3 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar2);
    }
  }
  else {
    *pfVar2 = *pfVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar4 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if (puVar4 + 1 <= (uchar *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    (param_2->InterpMode).Value = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    return param_1;
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->InterpMode,1);
  return param_1;
}

// operator<< @ 147a2bef0

FArchive * __cdecl
operator<<(FArchive *param_1,FInterpCurvePoint<UE::Math::TQuat<double>_> *param_2)

{
  float *pfVar1;
  uchar *puVar2;
  FArchive *pFVar3;
  
  pfVar1 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    param_2->InVal = *pfVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  UE::Math::operator<<(param_1,&param_2->OutVal);
  pFVar3 = UE::Math::operator<<(param_1,&param_2->ArriveTangent);
  UE::Math::operator<<(pFVar3,&param_2->LeaveTangent);
  puVar2 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if (puVar2 + 1 <= (uchar *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    (param_2->InterpMode).Value = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    return param_1;
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->InterpMode,1);
  return param_1;
}

// operator<< @ 147a2bfd0

FArchive * __cdecl
operator<<(FArchive *param_1,FInterpCurvePoint<UE::Math::TVector<double>_> *param_2)

{
  float *pfVar1;
  uchar *puVar2;
  FArchive *pFVar3;
  
  pfVar1 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    param_2->InVal = *pfVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  UE::Math::operator<<(param_1,&param_2->OutVal);
  pFVar3 = UE::Math::operator<<(param_1,&param_2->ArriveTangent);
  UE::Math::operator<<(pFVar3,&param_2->LeaveTangent);
  puVar2 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if (puVar2 + 1 <= (uchar *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    (param_2->InterpMode).Value = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    return param_1;
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->InterpMode,1);
  return param_1;
}

// operator<< @ 147a2c0b0

FArchive * __cdecl operator<<(FArchive *param_1,FLegacySpline *param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  operator<<(param_1,(FInterpCurve<UE::Math::TVector<double>_> *)param_2);
  TArrayPrivateFriend::
  Serialize<FInterpCurvePoint<UE::Math::TQuat<double>_>,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<FInterpCurvePoint<UE::Math::TQuat<double>_>,TSizedDefaultAllocator<32>_>
                      *)&param_2->RotationCurve);
  if (0x1c3 < *(int *)&param_1->field_0x40) {
    operator<<(param_1,(bool *)&(param_2->RotationCurve).field_0x10);
    puVar1 = &(param_2->RotationCurve).field_0x14;
    puVar2 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
    if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)puVar1);
      }
    }
    else {
      *(undefined4 *)puVar1 = *puVar2;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
  }
  operator<<(param_1,(FInterpCurve<UE::Math::TVector<double>_> *)&param_2->ScaleCurve);
  TArrayPrivateFriend::Serialize<FInterpCurvePoint<float>,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<FInterpCurvePoint<float>,TSizedDefaultAllocator<32>_> *)
                     &param_2->ReparamTable);
  if (0x1c3 < *(int *)&param_1->field_0x40) {
    operator<<(param_1,(bool *)&(param_2->ReparamTable).field_0x10);
    puVar1 = &(param_2->ReparamTable).field_0x14;
    puVar2 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
    if (puVar2 + 1 <= (undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1]) {
      *(undefined4 *)puVar1 = *puVar2;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      return param_1;
    }
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
      return param_1;
    }
    FArchive::SerializeByteOrderSwapped(param_1,(uint *)puVar1);
  }
  return param_1;
}

// `vector_deleting_destructor'`adjustor{16}' @ 147a2d858

/* [thunk]:public: virtual void * __ptr64 __cdecl UE::Geometry::Spline::TBSpline<float,3>::`vector
   deleting destructor'`adjustor{16}' (unsigned int) __ptr64 */

void * __thiscall
UE::Geometry::Spline::TBSpline<float,3>::_vector_deleting_destructor__adjustor_16__
          (TBSpline<float,3> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((TBSpline<float,3> *)&this[-1].FlatKnots.ArrayNum,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{16}' @ 147a2d868

/* [thunk]:public: virtual void * __ptr64 __cdecl UE::Geometry::Spline::TBSpline<struct
   UE::Math::TQuat<double>,3>::`vector deleting destructor'`adjustor{16}' (unsigned int) __ptr64 */

void * __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::
_vector_deleting_destructor__adjustor_16__(TBSpline<UE::Math::TQuat<double>,3> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((TBSpline<UE::Math::TQuat<double>,3> *)&this[-1].FlatKnots.ArrayNum,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{16}' @ 147a2d878

/* [thunk]:public: virtual void * __ptr64 __cdecl
   UE::Geometry::Spline::TPolyBezierSpline<float>::`vector deleting destructor'`adjustor{16}'
   (unsigned int) __ptr64 */

void * __thiscall
UE::Geometry::Spline::TPolyBezierSpline<float>::_vector_deleting_destructor__adjustor_16__
          (TPolyBezierSpline<float> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((TPolyBezierSpline<float> *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{80}' @ 147a2d888

/* [thunk]:public: virtual void * __ptr64 __cdecl
   UE::Geometry::Spline::TPolyBezierSpline<float>::`vector deleting destructor'`adjustor{80}'
   (unsigned int) __ptr64 */

void * __thiscall
UE::Geometry::Spline::TPolyBezierSpline<float>::_vector_deleting_destructor__adjustor_80__
          (TPolyBezierSpline<float> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((TPolyBezierSpline<float> *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{16}' @ 147a2d898

/* [thunk]:public: virtual void * __ptr64 __cdecl UE::Geometry::Spline::TPolyBezierSpline<struct
   UE::Math::TQuat<double> >::`vector deleting destructor'`adjustor{16}' (unsigned int) __ptr64 */

void * __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::
_vector_deleting_destructor__adjustor_16__
          (TPolyBezierSpline<UE::Math::TQuat<double>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((TPolyBezierSpline<UE::Math::TQuat<double>_> *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{80}' @ 147a2d8a8

/* [thunk]:public: virtual void * __ptr64 __cdecl UE::Geometry::Spline::TPolyBezierSpline<struct
   UE::Math::TQuat<double> >::`vector deleting destructor'`adjustor{80}' (unsigned int) __ptr64 */

void * __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::
_vector_deleting_destructor__adjustor_80__
          (TPolyBezierSpline<UE::Math::TQuat<double>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((TPolyBezierSpline<UE::Math::TQuat<double>_> *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{112}' @ 147a2d8b8

/* [thunk]:public: virtual void * __ptr64 __cdecl
   UE::Geometry::Spline::TTangentBezierSpline<float>::`vector deleting destructor'`adjustor{112}'
   (unsigned int) __ptr64 */

void * __thiscall
UE::Geometry::Spline::TTangentBezierSpline<float>::_vector_deleting_destructor__adjustor_112__
          (TTangentBezierSpline<float> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((TTangentBezierSpline<float> *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{112}' @ 147a2d8c8

/* [thunk]:public: virtual void * __ptr64 __cdecl UE::Geometry::Spline::TTangentBezierSpline<struct
   UE::Math::TQuat<double> >::`vector deleting destructor'`adjustor{112}' (unsigned int) __ptr64 */

void * __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::
_vector_deleting_destructor__adjustor_112__
          (TTangentBezierSpline<UE::Math::TQuat<double>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((TTangentBezierSpline<UE::Math::TQuat<double>_> *)&this[-1]._padding_,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{168}' @ 147a2d8d8

/* [thunk]:public: virtual void * __ptr64 __cdecl FNewSpline::`vector deleting
   destructor'`adjustor{168}' (unsigned int) __ptr64 */

void * __thiscall
FNewSpline::_vector_deleting_destructor__adjustor_168__(FNewSpline *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FNewSpline *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 147a2d8ec

/* [thunk]:public: virtual void * __ptr64 __cdecl UCurveBase::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UCurveBase::_vector_deleting_destructor__adjustor_40__(UCurveBase *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UCurveBase *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 147a2d8fc

/* [thunk]:public: virtual void * __ptr64 __cdecl UCurveFloat::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UCurveFloat::_vector_deleting_destructor__adjustor_40__(UCurveFloat *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UCurveFloat *)&this[-1].FloatCurve._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 147a2d90c

/* [thunk]:public: virtual void * __ptr64 __cdecl UCurveLinearColor::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UCurveLinearColor::_vector_deleting_destructor__adjustor_40__(UCurveLinearColor *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UCurveLinearColor *)&this[-1].FloatCurves[3].Keys.ArrayNum,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{224}' @ 147a2d91c

/* [thunk]:public: virtual void * __ptr64 __cdecl UCurveLinearColorAtlas::`vector deleting
   destructor'`adjustor{224}' (unsigned int) __ptr64 */

void * __thiscall
UCurveLinearColorAtlas::_vector_deleting_destructor__adjustor_224__
          (UCurveLinearColorAtlas *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UCurveLinearColorAtlas *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{232}' @ 147a2d930

/* [thunk]:public: virtual void * __ptr64 __cdecl UCurveLinearColorAtlas::`vector deleting
   destructor'`adjustor{232}' (unsigned int) __ptr64 */

void * __thiscall
UCurveLinearColorAtlas::_vector_deleting_destructor__adjustor_232__
          (UCurveLinearColorAtlas *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UCurveLinearColorAtlas *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 147a2d944

/* [thunk]:public: virtual void * __ptr64 __cdecl UCurveTable::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UCurveTable::_vector_deleting_destructor__adjustor_40__(UCurveTable *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UCurveTable *)&this[-1].OnCurveTableChangedDelegate,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 147a2d954

/* [thunk]:public: virtual void * __ptr64 __cdecl UCurveVector::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UCurveVector::_vector_deleting_destructor__adjustor_40__(UCurveVector *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UCurveVector *)&this[-1].FloatCurves[2]._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 147a2d970

void * __thiscall
UE::Geometry::Spline::TBSpline<float,3>::_scalar_deleting_destructor_
          (TBSpline<float,3> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->FlatKnots).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PairKnots).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147a2d9d0

void * __thiscall
UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::_scalar_deleting_destructor_
          (TBSpline<UE::Math::TQuat<double>,3> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->FlatKnots).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PairKnots).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147a2da30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::TBSpline<float,3>,TDefaultDelete<UE::Geometry::Spline::TBSpline<float,3>_>_>_(__cdecl*)(void),0,0>
::_scalar_deleting_destructor_
          (TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::TBSpline<float,3>,TDefaultDelete<UE::Geometry::Spline::TBSpline<float,3>_>_>_(__cdecl*)(void),0,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr_V__TBSpline_M_02_Spline_Geometry_UE__U__TDefaultDelete_V__TBSpline_M_02_Spline_Geometry_UE______XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147a2da70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>,TDefaultDelete<UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>_>_>_(__cdecl*)(void),0,0>
::_scalar_deleting_destructor_
          (TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>,TDefaultDelete<UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>_>_>_(__cdecl*)(void),0,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr_V__TBSpline_U__TQuat_N_Math_UE___02_Spline_Geometry_UE__U__TDefaultDelete_V__TBSpline_U__TQuat_N_Math_UE___02_Spline_Geometry_UE______XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147a2dab0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::TPolyBezierSpline<float>,TDefaultDelete<UE::Geometry::Spline::TPolyBezierSpline<float>_>_>_(__cdecl*)(void),0,0>
::_scalar_deleting_destructor_
          (TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::TPolyBezierSpline<float>,TDefaultDelete<UE::Geometry::Spline::TPolyBezierSpline<float>_>_>_(__cdecl*)(void),0,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr_V__TPolyBezierSpline_M_Spline_Geometry_UE__U__TDefaultDelete_V__TPolyBezierSpline_M_Spline_Geometry_UE______XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147a2daf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>,TDefaultDelete<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>_>_>_(__cdecl*)(void),0,0>
::_scalar_deleting_destructor_
          (TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>,TDefaultDelete<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>_>_>_(__cdecl*)(void),0,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr_V__TPolyBezierSpline_U__TQuat_N_Math_UE___Spline_Geometry_UE__U__TDefaultDelete_V__TPolyBezierSpline_U__TQuat_N_Math_UE___Spline_Geometry_UE______XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147a2db30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::TTangentBezierSpline<float>,TDefaultDelete<UE::Geometry::Spline::TTangentBezierSpline<float>_>_>_(__cdecl*)(void),0,0>
::_scalar_deleting_destructor_
          (TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::TTangentBezierSpline<float>,TDefaultDelete<UE::Geometry::Spline::TTangentBezierSpline<float>_>_>_(__cdecl*)(void),0,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr_V__TTangentBezierSpline_M_Spline_Geometry_UE__U__TDefaultDelete_V__TTangentBezierSpline_M_Spline_Geometry_UE______XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147a2db70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>,TDefaultDelete<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>_>_>_(__cdecl*)(void),0,0>
::_scalar_deleting_destructor_
          (TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>,TDefaultDelete<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>_>_>_(__cdecl*)(void),0,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr_V__TTangentBezierSpline_U__TQuat_N_Math_UE___Spline_Geometry_UE__U__TDefaultDelete_V__TTangentBezierSpline_U__TQuat_N_Math_UE___Spline_Geometry_UE______XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147a2dbb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UActorChannel::ReplicateActor'::__l2::<lambda_5>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UActorChannel::ReplicateActor'::`2'::<lambda_5>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147a2dbf0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FLegacySpline,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FLegacySpline,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147a2dc30

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNewSpline,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FNewSpline,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x198);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147a2dc70

void * __thiscall
UE::Geometry::Spline::TPolyBezierSpline<float>::_scalar_deleting_destructor_
          (TPolyBezierSpline<float> *this,uint param_1)

{
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147a2dcd0

void * __thiscall
UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::_scalar_deleting_destructor_
          (TPolyBezierSpline<UE::Math::TQuat<double>_> *this,uint param_1)

{
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147a2dd30

void * __thiscall
UE::Geometry::Spline::TSelfRegisteringSpline<UE::Geometry::Spline::TBSpline<float,3>,float>::
_scalar_deleting_destructor_
          (TSelfRegisteringSpline<UE::Geometry::Spline::TBSpline<float,3>,float> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147a2dd60

void * __thiscall
UE::Geometry::Spline::
TSelfRegisteringSpline<UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>,UE::Math::TQuat<double>_>
::_scalar_deleting_destructor_
          (TSelfRegisteringSpline<UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>,UE::Math::TQuat<double>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147a2dd90

void * __thiscall
UE::Geometry::Spline::TSelfRegisteringSpline<UE::Geometry::Spline::TPolyBezierSpline<float>,float>::
_scalar_deleting_destructor_
          (TSelfRegisteringSpline<UE::Geometry::Spline::TPolyBezierSpline<float>,float> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147a2ddc0

void * __thiscall
UE::Geometry::Spline::
TSelfRegisteringSpline<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>,UE::Math::TQuat<double>_>
::_scalar_deleting_destructor_
          (TSelfRegisteringSpline<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>,UE::Math::TQuat<double>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147a2ddf0

void * __thiscall
UE::Geometry::Spline::
TSelfRegisteringSpline<UE::Geometry::Spline::TTangentBezierSpline<float>,float>::
_scalar_deleting_destructor_
          (TSelfRegisteringSpline<UE::Geometry::Spline::TTangentBezierSpline<float>,float> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147a2de20

void * __thiscall
UE::Geometry::Spline::
TSelfRegisteringSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>,UE::Math::TQuat<double>_>
::_scalar_deleting_destructor_
          (TSelfRegisteringSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>,UE::Math::TQuat<double>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147a2de50

void * __thiscall
UE::Geometry::Spline::TSplineInterface<float>::_scalar_deleting_destructor_
          (TSplineInterface<float> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147a2de80

void * __thiscall
UE::Geometry::Spline::TSplineInterface<UE::Math::TQuat<double>_>::_scalar_deleting_destructor_
          (TSplineInterface<UE::Math::TQuat<double>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147a2deb0

void * __thiscall
UE::Geometry::Spline::TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<float>_>::
_scalar_deleting_destructor_
          (TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<float>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(this->InternalSpline)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->InternalSpline)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->InternalSpline)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147a2df10

void * __thiscall
UE::Geometry::Spline::
TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>_>::
_scalar_deleting_destructor_
          (TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>_> *this,
          uint param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(this->InternalSpline)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->InternalSpline)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->InternalSpline)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147a2df70

void * __thiscall
UE::Geometry::Spline::TTangentBezierSpline<float>::_scalar_deleting_destructor_
          (TTangentBezierSpline<float> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->TangentModes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147a2dff0

void * __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::_scalar_deleting_destructor_
          (TTangentBezierSpline<UE::Math::TQuat<double>_> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->TangentModes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147a2e070

void * __thiscall
ACullDistanceVolume::_scalar_deleting_destructor_(ACullDistanceVolume *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ACullDistanceVolume__6B_;
  pFVar1 = (this->CullDistances).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AVolume::~AVolume((AVolume *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x310);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147a2e0f0

void * __thiscall
FBatchedElementParameters::_scalar_deleting_destructor_
          (FBatchedElementParameters *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  *(undefined ***)this = &___7FRefCountedObject__6B_;
  if (*(int *)&this->field_0x8 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!NumRefs",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0xff,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147a2e160

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
FControlChannelOutBunch::_scalar_deleting_destructor_(FControlChannelOutBunch *this,uint param_1)

{
  FOutBunch::~FOutBunch((FOutBunch *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147a2e1a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall FInBunch::_scalar_deleting_destructor_(FInBunch *this,uint param_1)

{
  FNetBitReader::~FNetBitReader((FNetBitReader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147a2e1e0

void * __thiscall
FMipLevelBatchedElementParameters::_scalar_deleting_destructor_
          (FMipLevelBatchedElementParameters *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  *(undefined ***)this = &___7FRefCountedObject__6B_;
  if (*(int *)&this->field_0x8 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!NumRefs",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0xff,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147a2e250

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall FNetSerializeCB::_scalar_deleting_destructor_(FNetSerializeCB *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ChangelistMgr).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CachedRequestState).RepLayout.SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7INetSerializeCB__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147a2e2b0

void * __thiscall FNewSpline::_scalar_deleting_destructor_(FNewSpline *this,uint param_1)

{
  ~FNewSpline(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x188);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147a2e2f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall FOutBunch::_scalar_deleting_destructor_(FOutBunch *this,uint param_1)

{
  ~FOutBunch(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147a2e330

void * __thiscall
FUniqueNetIdWrapper::_scalar_deleting_destructor_(FUniqueNetIdWrapper *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(this->Variant).TypeIndex;
  if (1 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(&this->Variant);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147a2e3c0

void * __thiscall INetSerializeCB::_scalar_deleting_destructor_(INetSerializeCB *this,uint param_1)

{
  *this = (INetSerializeCB)&___7INetSerializeCB__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147a2e400

void * __thiscall UCurveBase::_scalar_deleting_destructor_(UCurveBase *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &___7FCurveOwnerInterface__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147a2e470

void * __thiscall UCurveFloat::_scalar_deleting_destructor_(UCurveFloat *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FCurveOwnerInterface__;
  pFVar1 = (this->FloatCurve).Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->FloatCurve)._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->FloatCurve)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->FloatCurve)._padding_ = 0;
  pvVar2 = (void *)(this->FloatCurve)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->FloatCurve)._padding_);
  this->_padding_ = (longlong)&UCurveBase::_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7FCurveOwnerInterface__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147a2e550

void * __thiscall
UCurveLinearColor::_scalar_deleting_destructor_(UCurveLinearColor *this,uint param_1)

{
  ~UCurveLinearColor(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x250);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147a2e5b0

void * __thiscall
UCurveLinearColorAtlas::_scalar_deleting_destructor_(UCurveLinearColorAtlas *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  pFVar1 = (this->GradientCurves).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UTexture2D::~UTexture2D((UTexture2D *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x188);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147a2e640

void * __thiscall UCurveTable::_scalar_deleting_destructor_(UCurveTable *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FCurveOwnerInterface__;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnCurveTableChangedDelegate).field_0x8,
             *(int *)&(this->OnCurveTableChangedDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnCurveTableChangedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCurveTableChangedDelegate);
  *(undefined4 *)&(this->RowMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->RowMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FRealCurve_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FRealCurve_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FRealCurve_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RowMap);
  this->_padding_ = (longlong)&___7FCurveOwnerInterface__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147a2e720

void * __thiscall UCurveVector::_scalar_deleting_destructor_(UCurveVector *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FCurveOwnerInterface__;
  pFVar1 = this->FloatCurves[2].Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->FloatCurves[2]._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)this->FloatCurves[2]._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&this->FloatCurves[2]._padding_ = 0;
  pvVar2 = (void *)this->FloatCurves[2]._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FloatCurves[2]._padding_);
  pFVar1 = this->FloatCurves[1].Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->FloatCurves[1]._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)this->FloatCurves[1]._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&this->FloatCurves[1]._padding_ = 0;
  pvVar2 = (void *)this->FloatCurves[1]._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FloatCurves[1]._padding_);
  pFVar1 = this->FloatCurves[0].Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->FloatCurves[0]._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)this->FloatCurves[0]._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&this->FloatCurves[0]._padding_ = 0;
  pvVar2 = (void *)this->FloatCurves[0]._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FloatCurves[0]._padding_);
  this->_padding_ = (longlong)&UCurveBase::_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7FCurveOwnerInterface__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
    }
    else {
      __empty_global_delete(this,0x1b0);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 147a2e8a0

void * __thiscall
UDEPRECATED_CurveEdPresetCurve::_scalar_deleting_destructor_
          (UDEPRECATED_CurveEdPresetCurve *this,uint param_1)

{
  *(undefined ***)this = &___7UDEPRECATED_CurveEdPresetCurve__6B_;
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

// `scalar_deleting_destructor' @ 147a2e900

void * __thiscall UDamageType::_scalar_deleting_destructor_(UDamageType *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UDamageType__6B_;
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

// `scalar_deleting_destructor' @ 147a2e960

void * __thiscall UDataAsset::_scalar_deleting_destructor_(UDataAsset *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UDataAsset__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147a2e9c0

void * __thiscall
UDataDrivenCVarEngineSubsystem::_scalar_deleting_destructor_
          (UDataDrivenCVarEngineSubsystem *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDataDrivenCVarEngineSubsystem__6B_;
  pvVar1 = *(void **)&(this->OnDataDrivenCVarDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDataDrivenCVarDelegate);
  UEngineSubsystem::~UEngineSubsystem((UEngineSubsystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147a2ea50

void * __thiscall
UDataDrivenConsoleVariableSettings::_scalar_deleting_destructor_
          (UDataDrivenConsoleVariableSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UDataDrivenConsoleVariableSettings__6B_;
  DestructItems<FString,int>
            ((FString *)(this->ShadowCVars).AllocatorInstance.Data,(this->ShadowCVars).ArrayNum);
  pFVar1 = (this->ShadowCVars).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDataDrivenConsoleVariable,int>
            ((FDataDrivenConsoleVariable *)(this->CVarsArray).AllocatorInstance.Data,
             (this->CVarsArray).ArrayNum);
  pFVar1 = (this->CVarsArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnStageChanged).field_0x8,*(int *)&(this->OnStageChanged).field_0x10);
  pvVar2 = *(void **)&(this->OnStageChanged).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnStageChanged);
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147a2eb20

void * __thiscall
UGarbageCollectionSettings::_scalar_deleting_destructor_
          (UGarbageCollectionSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UGarbageCollectionSettings__6B_;
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147a2eb80

void * __thiscall
UPrimaryDataAsset::_scalar_deleting_destructor_(UPrimaryDataAsset *this,uint param_1)

{
  *(undefined ***)this = &___7UDataAsset__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147a2ebe0

void * __thiscall
UStreamingSettings::_scalar_deleting_destructor_(UStreamingSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UStreamingSettings__6B_;
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// ConvertInterpCurveModeToTangentMode @ 147a3a4e0

ETangentMode __cdecl ConvertInterpCurveModeToTangentMode(EInterpCurveMode param_1)

{
  switch(param_1) {
  case CIM_Linear:
    return Linear;
  case CIM_CurveAuto:
    return Auto;
  case CIM_Constant:
    return Constant;
  case CIM_CurveUser:
    return User;
  case CIM_CurveBreak:
    return Broken;
  case CIM_CurveAutoClamped:
    return AutoClamped;
  default:
    return Unknown;
  }
}

// ConvertTangentModeToInterpCurveMode @ 147a3a670

EInterpCurveMode __cdecl ConvertTangentModeToInterpCurveMode(ETangentMode param_1)

{
  switch(param_1) {
  case Auto:
    return CIM_CurveAuto;
  case AutoClamped:
    return CIM_CurveAutoClamped;
  case User:
    return CIM_CurveUser;
  case Broken:
    return CIM_CurveBreak;
  case Linear:
    return CIM_Linear;
  case Constant:
    return CIM_Constant;
  default:
    return CIM_Unknown;
  }
}

// CycleTime @ 147a3ddf0

void __cdecl CycleTime(float param_1,float param_2,float *param_3,int *param_4)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *param_3;
  fVar4 = param_2 - param_1;
  if (fVar1 <= param_2) {
    fVar3 = fVar1;
    if (fVar1 < param_1) {
      iVar2 = (int)ROUND((fVar1 - param_1) * (__real_40000000 / fVar4) - __real_3f000000) >> 1;
      *param_4 = iVar2;
      fVar3 = *param_3 - (float)iVar2 * fVar4;
      goto LAB_147a3de8a;
    }
  }
  else {
    iVar2 = (int)ROUND((param_2 - fVar1) * (__real_40000000 / fVar4) - __real_3f000000) >> 1;
    *param_4 = iVar2;
    fVar3 = (float)iVar2 * fVar4 + *param_3;
LAB_147a3de8a:
    *param_3 = fVar3;
  }
  if ((fVar3 != param_2) || (param_1 <= fVar1)) {
    if (fVar3 != param_1) goto LAB_147a3deaf;
  }
  else {
    *param_3 = param_1;
  }
  if (param_2 < fVar1) {
    *param_3 = param_2;
  }
LAB_147a3deaf:
  iVar2 = -*param_4;
  if (-*param_4 < 0) {
    iVar2 = *param_4;
  }
  *param_4 = iVar2;
  return;
}

// DebugNetGUIDs @ 147a3e030

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl DebugNetGUIDs(UWorld *param_1)

{
  UNetDriver *pUVar1;
  UPackageMap *pUVar2;
  code *pcVar3;
  FOutputDeviceRedirector *pFVar4;
  UNetConnection *pUVar5;
  
  pUVar1 = (param_1->NetDriver).field0_0x0.DebugPtr;
  if ((pUVar1 != (UNetDriver *)0x0) &&
     ((pUVar5 = (pUVar1->ServerConnection).field0_0x0.DebugPtr, pUVar5 != (UNetConnection *)0x0 ||
      ((0 < (pUVar1->ClientConnections).ArrayNum &&
       (pUVar5 = *(UNetConnection **)(pUVar1->ClientConnections).AllocatorInstance.Data,
       pUVar5 != (UNetConnection *)0x0)))))) {
    pUVar2 = (pUVar5->PackageMap).field0_0x0.DebugPtr;
    pcVar3 = *(code **)(pUVar2->_padding_ + 0x328);
    pFVar4 = GetGlobalLogSingleton();
    (*pcVar3)(pUVar2,pFVar4);
  }
  return;
}

// DeleteDormantActor @ 147a3e0a0

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

void __cdecl DeleteDormantActor(UWorld *param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  UNetDriver *pUVar4;
  undefined8 *puVar5;
  AActor *this;
  UNetConnection *pUVar6;
  longlong lVar7;
  uint *puVar8;
  undefined1 auStackY_128 [32];
  TVector<double>_u_0 local_d8;
  undefined4 uStack_c0;
  int iStack_bc;
  int local_b8;
  undefined4 uStack_b4;
  undefined1 local_a8 [24];
  uint uStack_90;
  int iStack_8c;
  undefined8 local_88;
  FName local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_128;
  pUVar4 = (param_1->NetDriver).field0_0x0.DebugPtr;
  if ((pUVar4 != (UNetDriver *)0x0) &&
     ((pUVar6 = (pUVar4->ServerConnection).field0_0x0.DebugPtr, pUVar6 != (UNetConnection *)0x0 ||
      ((0 < (pUVar4->ClientConnections).ArrayNum &&
       (pUVar6 = *(UNetConnection **)(pUVar4->ClientConnections).AllocatorInstance.Data,
       pUVar6 != (UNetConnection *)0x0)))))) {
    local_d8._s_0.X = (double)UNetDriver::GetNetworkObjectList((pUVar6->Driver).field0_0x0.DebugPtr)
    ;
    iVar2 = *(int *)&(((FNetworkObjectList *)local_d8._s_0.X)->AllNetworkObjects).Elements.
                     field_0x28;
    local_d8._8_4_ = 0;
    local_d8._12_4_ = 1;
    local_b8 = 0;
    local_d8._s_0.Z =
         (double)&(((FNetworkObjectList *)local_d8._s_0.X)->AllNetworkObjects).Elements.field_0x10;
    iStack_bc = local_d8._8_4_;
    if (iVar2 != 0) {
      puVar8 = *(uint **)&(((FNetworkObjectList *)local_d8._s_0.X)->AllNetworkObjects).Elements.
                          field_0x20;
      if (puVar8 == (uint *)0x0) {
        puVar8 = (uint *)local_d8._s_0.Z;
      }
      uVar3 = *puVar8;
      local_b8 = 0;
      while (uVar3 == 0) {
        lVar7 = (longlong)(int)local_d8._8_4_;
        local_b8 = local_b8 + 0x20;
        local_d8._8_4_ = local_d8._8_4_ + 1;
        iStack_bc = iVar2;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_d8._8_4_)
        goto LAB_147a3e19a;
        uVar3 = puVar8[lVar7 + 1];
      }
      local_d8._12_4_ = -uVar3 & uVar3;
      uVar1 = (ulonglong)(uint)local_d8._12_4_ * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_bc = local_b8 + -1 + (int)lVar7;
      if (iVar2 < iStack_bc) {
        iStack_bc = iVar2;
      }
    }
LAB_147a3e19a:
    uStack_c0 = 0xffffffff;
    uStack_90 = 0xffffffff;
    local_a8._8_8_ = local_d8._s_0.Y;
    uStack_b4 = iStack_8c;
    local_88 = CONCAT44(iStack_8c,local_b8);
    local_a8._0_8_ = local_d8._s_0.X;
    local_a8._16_8_ = local_d8._s_0.Z;
    iStack_8c = iStack_bc;
    if (iStack_bc <
        *(int *)&(((FNetworkObjectList *)local_d8._s_0.X)->AllNetworkObjects).Elements.field_0x28) {
      do {
        puVar5 = *(undefined8 **)(*(longlong *)local_a8._0_8_ + (longlong)iStack_8c * 0x18);
        if (*(int *)(puVar5 + 7) != *(int *)((longlong)puVar5 + 100)) {
          this = (AActor *)*puVar5;
          if (2 < (byte)LogNet._0_1_) {
            local_80 = (FName)this->_padding_;
            FName::ToString(&local_80,(FString *)&local_d8._s_0);
            UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogNet);
            if ((FNetworkObjectList *)local_d8._s_0.X != (FNetworkObjectList *)0x0) {
              FMemory::Free((void *)local_d8._s_0.X);
            }
          }
          (**(code **)(this->_padding_ + 0x670))(this,&local_78,0,0);
          local_d8._s_0.X = (local_60 - local_78) * __real_3fe0000000000000;
          local_d8._s_0.Z = (local_50 - local_68) * __real_3fe0000000000000;
          local_a8._0_8_ = (local_60 + local_78) * __real_3fe0000000000000;
          local_a8._16_8_ = (local_50 + local_68) * __real_3fe0000000000000;
          local_d8._s_0.Y = (local_58 - local_70) * __real_3fe0000000000000;
          local_a8._8_8_ = (local_58 + local_70) * __real_3fe0000000000000;
          DrawDebugBox(param_1,(TVector<double> *)local_a8,(TVector<double> *)&local_d8._s_0,
                       &UE::Math::TQuat<double>::Identity,&FColor::Red,true,__real_41f00000,'\0',0.0
                      );
          AActor::Destroy(this,false,true);
          return;
        }
        uStack_90 = uStack_90 & ~local_a8._12_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_a8 + 8));
      } while (iStack_8c < *(int *)(local_a8._16_8_ + 0x18));
    }
  }
  return;
}

// EmptyLinkFunctionForGeneratedCodeCoreSettings @ 147a40470

void __cdecl EmptyLinkFunctionForGeneratedCodeCoreSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCullDistanceVolume @ 147a40480

void __cdecl EmptyLinkFunctionForGeneratedCodeCullDistanceVolume(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCurveBase @ 147a40490

void __cdecl EmptyLinkFunctionForGeneratedCodeCurveBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCurveEdPresetCurve @ 147a404a0

void __cdecl EmptyLinkFunctionForGeneratedCodeCurveEdPresetCurve(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCurveFloat @ 147a404b0

void __cdecl EmptyLinkFunctionForGeneratedCodeCurveFloat(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCurveLinearColor @ 147a404c0

void __cdecl EmptyLinkFunctionForGeneratedCodeCurveLinearColor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCurveLinearColorAtlas @ 147a404d0

void __cdecl EmptyLinkFunctionForGeneratedCodeCurveLinearColorAtlas(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCurveTable @ 147a404e0

void __cdecl EmptyLinkFunctionForGeneratedCodeCurveTable(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCurveVector @ 147a404f0

void __cdecl EmptyLinkFunctionForGeneratedCodeCurveVector(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDamageType @ 147a40500

void __cdecl EmptyLinkFunctionForGeneratedCodeDamageType(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDataAsset @ 147a40510

void __cdecl EmptyLinkFunctionForGeneratedCodeDataAsset(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDataDrivenCVars @ 147a40520

void __cdecl EmptyLinkFunctionForGeneratedCodeDataDrivenCVars(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeIndexedCurve @ 147a40530

void __cdecl EmptyLinkFunctionForGeneratedCodeIndexedCurve(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeIntegralCurve @ 147a40540

void __cdecl EmptyLinkFunctionForGeneratedCodeIntegralCurve(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeKeyHandle @ 147a40550

void __cdecl EmptyLinkFunctionForGeneratedCodeKeyHandle(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNameCurve @ 147a40560

void __cdecl EmptyLinkFunctionForGeneratedCodeNameCurve(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRealCurve @ 147a40570

void __cdecl EmptyLinkFunctionForGeneratedCodeRealCurve(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRichCurve @ 147a40580

void __cdecl EmptyLinkFunctionForGeneratedCodeRichCurve(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSimpleCurve @ 147a40590

void __cdecl EmptyLinkFunctionForGeneratedCodeSimpleCurve(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSpline @ 147a405a0

void __cdecl EmptyLinkFunctionForGeneratedCodeSpline(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeStringCurve @ 147a405b0

void __cdecl EmptyLinkFunctionForGeneratedCodeStringCurve(void)

{
  return;
}

// FindDuplicateXValues @ 147a445d0

/* WARNING: Removing unreachable block (ram,0x000147a44855) */

bool __cdecl
FindDuplicateXValues
          (TArray<float,TSizedDefaultAllocator<32>_> *param_1,FString *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  bool local_res8;
  FString local_48;
  
  local_res8 = false;
  lVar8 = (longlong)param_1->ArrayNum;
  if (lVar8 < 1) {
    return false;
  }
  lVar1 = 0;
  uVar6 = 0;
  do {
    uVar11 = uVar6;
    lVar13 = lVar1;
    lVar1 = lVar13 + 1;
    if (lVar8 <= lVar1) {
      return local_res8;
    }
    lVar12 = lVar1;
    uVar10 = uVar11 + 1;
    do {
      uVar6 = 0;
      if ((int)uVar11 < param_1->ArrayNum) {
        uVar6 = ~uVar11 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      uVar6 = 0;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if (*(float *)((param_1->AllocatorInstance).Data + lVar12 * 4) ==
          *(float *)(pFVar2 + lVar13 * 4)) {
        local_res8 = true;
        uVar6 = 0;
        if ((int)uVar11 < param_1->ArrayNum) {
          uVar6 = ~uVar11 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        FString::PrintfImpl(&local_48,
                            L"Found duplicate columns in %s. %f is used in columns %d and %d");
        pFVar2 = (param_3->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_48) &&
            ((FScriptContainerElement *)&local_48 < pFVar2 + (longlong)param_3->ArrayMax * 0x10)) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        iVar7 = param_3->ArrayNum;
        if (iVar7 == param_3->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_3->AllocatorInstance,&param_3->ArrayMax);
        }
        lVar9 = (longlong)iVar7;
        param_3->ArrayNum = iVar7 + 1;
        pFVar2 = (param_3->AllocatorInstance).Data;
        *(undefined8 *)(pFVar2 + lVar9 * 0x10) = 0;
        *(FScriptContainerElement **)(pFVar2 + lVar9 * 0x10) = local_48.Data.AllocatorInstance.Data;
        local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar2 + lVar9 * 0x10 + 8) = local_48.Data.ArrayNum;
        *(int *)(pFVar2 + lVar9 * 0x10 + 0xc) = local_48.Data.ArrayMax;
        local_48.Data.ArrayNum = 0;
        local_48.Data.ArrayMax = 0;
      }
      uVar10 = uVar10 + 1;
      lVar12 = lVar12 + 1;
      uVar6 = uVar11 + 1;
    } while (lVar12 < lVar8);
  } while( true );
}

// FindNetGUID @ 147a46aa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl FindNetGUID(TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FUObjectItem *pFVar4;
  bool bVar5;
  int iVar6;
  UClass *pUVar7;
  FUObjectItem *pFVar8;
  UClass *pUVar9;
  ulonglong uVar10;
  _func___cdecl_void_UObject_ptr_FReferenceCollector_ptr *p_Var11;
  wchar_t *_Str;
  FScriptContainerElement *pFVar12;
  FUObjectCppClassStaticFunctions *pFVar13;
  UObjectBase *pUVar14;
  longlong lVar15;
  uint uVar16;
  UObjectBase *pUVar17;
  ForAnyElementType local_f8;
  undefined8 local_f0;
  ForAnyElementType local_e8;
  int local_e0;
  int local_dc;
  TIterator local_d8;
  UClass *local_c0;
  EObjectFlags local_b8;
  EInternalObjectFlags local_b4;
  longlong *local_a8;
  undefined1 auStack_a0 [16];
  uint uStack_90;
  int iStack_8c;
  longlong local_88;
  TSet<TTuple<FNetworkGUID,FString>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FString,0>,FDefaultSetAllocator>
  *pTStack_80;
  TSet<TTuple<FNetworkGUID,FString>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FString,0>,FDefaultSetAllocator>
  *local_78;
  undefined2 local_70;
  FString local_68;
  undefined1 local_58 [32];
  longlong local_38;
  TSet<TTuple<FNetworkGUID,FString>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FString,0>,FDefaultSetAllocator>
  *pTStack_30;
  
  pUVar7 = Z_Construct_UClass_UNetDriver_NoRegister();
  local_d8.Index = -1;
  pUVar17 = (UObjectBase *)0x0;
  local_d8.Array = &GUObjectArray;
  local_d8.CurrentObject = (FUObjectItem *)0x0;
  FUObjectArray::TIterator::Advance(&local_d8);
  local_b8 = RF_NoFlags;
  local_c0 = pUVar7;
  local_b4 = UE::GetAsyncLoadingInternalFlagsExclusion();
  local_b4 = local_b4 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted);
  if ((pUVar7 == (UClass *)0x0) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("Class",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectIterator.h"
                         ,0x70,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&(local_d8.Array)->ObjObjectsCritical);
  do {
    pFVar4 = local_d8.CurrentObject;
    pUVar14 = pUVar17;
    if (local_d8.CurrentObject != (FUObjectItem *)0x0) {
      pUVar14 = ((local_d8.CurrentObject)->field1_0x8).Object;
    }
    if (((local_b8 & pUVar14->ObjectFlags) == RF_NoFlags) &&
       (pFVar8 = FUObjectArray::IndexToObject(&GUObjectArray,pUVar14->InternalIndex),
       (local_b4 & (EInternalObjectFlags)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20))
       == Borrowed)) {
      pUVar9 = Z_Construct_UClass_UObject_NoRegister();
      if (pUVar7 == pUVar9) break;
      pUVar9 = (pUVar14->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
      iVar6 = (int)pUVar7->_padding_;
      if ((iVar6 <= (int)pUVar9->_padding_) &&
         ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar6 * 8) ==
          &pUVar7->_padding_)) break;
    }
    bVar5 = FUObjectArray::TIterator::Advance(&local_d8);
    pUVar7 = local_c0;
    pFVar4 = local_d8.CurrentObject;
  } while (bVar5);
joined_r0x000147a46bc0:
  do {
    if (pFVar4 == (FUObjectItem *)0x0) {
LAB_147a4708e:
                    /* WARNING: Could not recover jumptable at 0x000147a470ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)&(local_d8.Array)->ObjObjectsCritical);
      return;
    }
    pUVar14 = (pFVar4->field1_0x8).Object;
    if (pUVar14 == (UObjectBase *)0x0) {
LAB_147a46bf2:
      pUVar14 = pUVar17;
    }
    else {
      pUVar9 = Z_Construct_UClass_UNetDriver_NoRegister();
      pUVar7 = (pUVar14->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
      iVar6 = (int)pUVar9->_padding_;
      if (((int)pUVar7->_padding_ < iVar6) ||
         ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar6 * 8) !=
          &pUVar9->_padding_)) goto LAB_147a46bf2;
    }
    if ((pUVar14->ObjectFlags & (RF_ArchetypeObject|RF_ClassDefaultObject)) == RF_NoFlags) {
      bVar5 = FNetGUIDCache::IsHistoryEnabled();
      if (!bVar5) {
        if (2 < (byte)LogNet._0_1_) {
          UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogNet);
        }
        goto LAB_147a4708e;
      }
      if (param_1->ArrayNum < 1) {
        if ((pUVar14[0xb].ClassPrivate.ObjectPtr.field0_0x0.DebugPtr == (UClass *)0x0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar13 = &pUVar14[0xb].ClassPrivate.ObjectPtr.field0_0x0.DebugPtr[1].
                   CppClassStaticFunctions;
        TSet<TTuple<FNetworkGUID,FString>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FString,0>,FDefaultSetAllocator>
        ::TIterator::TIterator
                  ((TIterator *)local_58,
                   (TSet<TTuple<FNetworkGUID,FString>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FString,0>,FDefaultSetAllocator>
                    *)pFVar13);
        local_70 = 0;
        stack0xffffffffffffff68 = local_58._16_16_;
        local_a8 = (longlong *)local_58._0_8_;
        auStack_a0._0_8_ = local_58._8_8_;
        local_88 = local_38;
        pTStack_80 = pTStack_30;
        iVar6 = local_58._28_4_;
        local_78 = (TSet<TTuple<FNetworkGUID,FString>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FString,0>,FDefaultSetAllocator>
                    *)pFVar13;
        if (iVar6 < *(int *)(local_58._16_8_ + 0x18)) {
          do {
            local_e8.Data = (FScriptContainerElement *)0x0;
            local_e0 = *(int *)((longlong)iVar6 * 0x20 + 0x10 + *local_a8);
            lVar15 = (longlong)local_e0;
            pvVar1 = *(void **)((longlong)iVar6 * 0x20 + 8 + *local_a8);
            if (local_e0 == 0) {
              local_dc = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_e0,0,&local_e8,local_e0,&local_dc);
              memcpy(local_e8.Data,pvVar1,lVar15 * 2);
            }
            if (2 < (byte)LogNet._0_1_) {
              FString::PrintfImpl(&local_68,L"%llu");
              UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogNet);
              if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_68.Data.AllocatorInstance.Data);
              }
            }
            if (local_e8.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e8.Data);
            }
            uStack_90 = uStack_90 & ~auStack_a0._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_a0);
            iVar6 = iStack_8c;
          } while (iStack_8c < *(int *)(auStack_a0._8_8_ + 0x18));
          if (((char)local_70 != '\0') && (local_70._1_1_ != '\0')) {
            uVar16 = *(int *)&(local_78->Elements).field_0x8 -
                     *(int *)&(local_78->Elements).field_0x34;
            if (uVar16 < 4) {
              iVar6 = 1;
            }
            else {
              uVar10 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
              lVar15 = 0x3f;
              if (uVar10 != 0) {
                for (; uVar10 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                }
              }
              iVar6 = 1 << ((byte)lVar15 & 0x1f);
            }
            if (((0 < (int)uVar16) && (local_78->HashSize < iVar6)) || (iVar6 < local_78->HashSize))
            {
              local_78->HashSize = iVar6;
              TSet<TTuple<FNetworkGUID,FString>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FString,0>,FDefaultSetAllocator>
              ::Rehash(local_78);
            }
          }
        }
      }
      else {
        pFVar2 = (param_1->AllocatorInstance).Data;
        if (*(int *)(pFVar2 + 8) == 0) {
          _Str = L"";
        }
        else {
          _Str = *(wchar_t **)pFVar2;
        }
        uVar10 = _wcstoui64(_Str,(wchar_t **)0x0,0);
        if ((pUVar14[0xb].ClassPrivate.ObjectPtr.field0_0x0.DebugPtr == (UClass *)0x0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pUVar7 = pUVar14[0xb].ClassPrivate.ObjectPtr.field0_0x0.DebugPtr;
        if (pUVar7[1].ClassUnique !=
            *(int *)((longlong)&pUVar7[1].ClassReps.AllocatorInstance.Data + 4)) {
          pFVar2 = pUVar7[1].NetFields.AllocatorInstance.Data;
          pFVar12 = (FScriptContainerElement *)&pUVar7[1].ClassReps.ArrayNum;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            pFVar12 = pFVar2;
          }
          iVar6 = *(int *)(pFVar12 +
                          ((ulonglong)(pUVar7[1].NetFields.ArrayNum - 1) &
                          (uVar10 >> 0x20) * 0x17 + uVar10) * 4);
          if (iVar6 != -1) {
            p_Var11 = pUVar7[1].CppClassStaticFunctions.AddReferencedObjects;
            do {
              if (*(ulonglong *)(p_Var11 + (longlong)iVar6 * 0x20) == uVar10) {
                if ((iVar6 != -1) &&
                   (p_Var11 = p_Var11 + (longlong)iVar6 * 0x20,
                   p_Var11 != (_func___cdecl_void_UObject_ptr_FReferenceCollector_ptr *)0x0)) {
                  local_f8.Data = (FScriptContainerElement *)0x0;
                  iVar6 = *(int *)(p_Var11 + 0x10);
                  pvVar1 = *(void **)(p_Var11 + 8);
                  local_f0 = CONCAT44(local_f0._4_4_,iVar6);
                  if (iVar6 == 0) {
                    local_f0 = 0;
                    local_f0._0_4_ = 0;
                  }
                  else {
                    UE::Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (2,2,iVar6,0,&local_f8,iVar6,(int *)((longlong)&local_f0 + 4));
                    memcpy(local_f8.Data,pvVar1,(longlong)iVar6 * 2);
                  }
                  if ((int)local_f0 < 2) goto LAB_147a46f05;
                  if (2 < (byte)LogNet._0_1_) {
                    UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogNet);
                  }
                  goto LAB_147a46f26;
                }
                break;
              }
              iVar6 = *(int *)(p_Var11 + (longlong)iVar6 * 0x20 + 0x18);
            } while (iVar6 != -1);
          }
        }
        local_f0 = 0;
        local_f8.Data = (FScriptContainerElement *)0x0;
LAB_147a46f05:
        if (2 < (byte)LogNet._0_1_) {
          UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogNet);
        }
LAB_147a46f26:
        if (local_f8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data);
        }
      }
    }
LAB_147a46f30:
    do {
      do {
        bVar5 = FUObjectArray::TIterator::Advance(&local_d8);
        pFVar4 = local_d8.CurrentObject;
        if (!bVar5) goto joined_r0x000147a46bc0;
        pUVar14 = pUVar17;
        if (local_d8.CurrentObject != (FUObjectItem *)0x0) {
          pUVar14 = ((local_d8.CurrentObject)->field1_0x8).Object;
        }
      } while ((local_b8 & pUVar14->ObjectFlags) != RF_NoFlags);
      pUVar7 = Z_Construct_UClass_UObject_NoRegister();
      if (local_c0 != pUVar7) {
        pUVar7 = (pUVar14->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
        iVar6 = (int)local_c0->_padding_;
        if (((int)pUVar7->_padding_ < iVar6) ||
           ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar6 * 8) !=
            &local_c0->_padding_)) goto LAB_147a46f30;
      }
      pFVar8 = FUObjectArray::IndexToObject(&GUObjectArray,pUVar14->InternalIndex);
    } while ((local_b4 &
             (EInternalObjectFlags)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20)) !=
             Borrowed);
  } while( true );
}

// FindRichCurveKeyFormat @ 147a47560

ERichCurveKeyTimeCompressionFormat __cdecl
FindRichCurveKeyFormat
          (FRichCurve *param_1,float param_2,float param_3,ERichCurveCompressionFormat param_4)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  FScriptContainerElement FVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  ERichCurveKeyTimeCompressionFormat EVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  longlong lVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  longlong local_f8;
  longlong local_f0;
  
  uVar6 = (param_1->Keys).ArrayNum;
  if ((((uVar6 != 0) && (RCCF_Constant < param_4)) && (0.0 < param_2)) && (0.0 < param_3)) {
    if (((int)uVar6 < 1) &&
       (bVar12 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar9 = (code *)swi(3);
      EVar15 = (*pcVar9)();
      return EVar15;
    }
    iVar7 = (param_1->Keys).ArrayNum;
    uVar18 = iVar7 - 1;
    fVar2 = *(float *)((param_1->Keys).AllocatorInstance.Data + 4);
    uVar22 = 0;
    uVar20 = uVar22;
    if ((int)uVar18 < iVar7) {
      uVar20 = ~uVar18 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar12 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar9 = (code *)swi(3);
      EVar15 = (*pcVar9)();
      return EVar15;
    }
    fVar11 = __real_477fff00;
    fVar10 = __real_3f800000;
    fVar26 = __real_3f800000 / param_3;
    fVar3 = *(float *)((param_1->Keys).AllocatorInstance.Data +
                      (longlong)(param_1->Keys).ArrayNum * 0x1c + -0x18);
    bVar12 = true;
    fVar30 = fVar3 - fVar2;
    fVar31 = __real_3f800000 / fVar30;
    bVar14 = true;
    if (fVar2 <= fVar3) {
      uVar18 = 1;
      uVar20 = 1;
      lVar21 = 0x1c;
      lVar19 = 0x1c;
      local_f8 = 0;
      local_f0 = 0;
      fVar29 = fVar2;
      do {
        fVar25 = __real_37800080;
        bVar14 = bVar12;
        if (!bVar12) break;
        uVar16 = uVar22;
        if ((int)uVar20 < (param_1->Keys).ArrayNum) {
          uVar16 = ~uVar20 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar13 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          EVar15 = (*pcVar9)();
          return EVar15;
        }
        pFVar1 = (param_1->Keys).AllocatorInstance.Data + lVar19 + 4;
        if (*(float *)pFVar1 <= fVar29 && fVar29 != *(float *)pFVar1) {
          local_f8 = local_f8 + 1;
          uVar20 = uVar20 + 1;
          lVar19 = lVar19 + 0x1c;
          if ((int)uVar6 <= local_f8) break;
        }
        uVar16 = uVar22;
        if ((int)uVar18 < (param_1->Keys).ArrayNum) {
          uVar16 = ~uVar18 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar13 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          EVar15 = (*pcVar9)();
          return EVar15;
        }
        fVar23 = (*(float *)((param_1->Keys).AllocatorInstance.Data + lVar21 + 4) - fVar2) * fVar31;
        if (fVar10 <= fVar23) {
          fVar23 = fVar10;
        }
        if (fVar23 <= 0.0) {
          fVar23 = 0.0;
        }
        fVar23 = FMath::RoundHalfFromZero(fVar23 * fVar11);
        fVar23 = fVar23 * fVar25 * fVar30 + fVar2;
        uVar16 = 0;
        if (fVar29 <= fVar23) {
          uVar17 = uVar16;
          if ((int)(uVar18 - 1) < (param_1->Keys).ArrayNum) {
            uVar17 = ~(uVar18 - 1) >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar14 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar9 = (code *)swi(3);
            EVar15 = (*pcVar9)();
            return EVar15;
          }
          fVar24 = (*(float *)((param_1->Keys).AllocatorInstance.Data + lVar21 + -0x18) - fVar2) *
                   fVar31;
          if (fVar10 <= fVar24) {
            fVar24 = fVar10;
          }
          if (fVar24 <= 0.0) {
            fVar24 = 0.0;
          }
          fVar24 = FMath::RoundHalfFromZero(fVar24 * fVar11);
          fVar24 = fVar24 * fVar25 * fVar30 + fVar2;
          fVar25 = fVar23;
        }
        else {
          local_f0 = local_f0 + 1;
          uVar18 = uVar18 + 1;
          if ((int)uVar6 <= local_f0) break;
          uVar17 = uVar22;
          if ((int)uVar18 < (param_1->Keys).ArrayNum) {
            uVar17 = ~uVar18 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar14 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar9 = (code *)swi(3);
            EVar15 = (*pcVar9)();
            return EVar15;
          }
          fVar24 = (*(float *)((param_1->Keys).AllocatorInstance.Data + lVar21 + 0x20) - fVar2) *
                   fVar31;
          if (fVar10 <= fVar24) {
            fVar24 = fVar10;
          }
          if (fVar24 <= 0.0) {
            fVar24 = 0.0;
          }
          fVar24 = FMath::RoundHalfFromZero(fVar24 * fVar11);
          lVar21 = lVar21 + 0x1c;
          fVar25 = fVar24 * fVar25 * fVar30 + fVar2;
          fVar24 = fVar23;
        }
        uVar17 = uVar16;
        if ((int)uVar18 < (param_1->Keys).ArrayNum) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar14 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar9 = (code *)swi(3);
          EVar15 = (*pcVar9)();
          return EVar15;
        }
        pFVar1 = (param_1->Keys).AllocatorInstance.Data;
        uVar17 = uVar16;
        if ((int)(uVar18 - 1) < (param_1->Keys).ArrayNum) {
          uVar17 = ~(uVar18 - 1) >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar14 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar9 = (code *)swi(3);
          EVar15 = (*pcVar9)();
          return EVar15;
        }
        pFVar8 = (param_1->Keys).AllocatorInstance.Data;
        fVar23 = fVar25 - fVar24;
        if ((fVar23 <= 0.0) || (pFVar8[lVar21 + -0x1c] == (FScriptContainerElement)0x1)) {
          fVar28 = *(float *)(pFVar8 + lVar21 + -0x14);
        }
        else {
          fVar28 = *(float *)(pFVar8 + lVar21 + -0x14);
          fVar4 = *(float *)(pFVar1 + lVar21 + 8);
          fVar27 = (fVar29 - fVar24) / fVar23;
          if (pFVar8[lVar21 + -0x1c] == (FScriptContainerElement)0x0) {
            fVar28 = (fVar4 - fVar28) * fVar27 + fVar28;
          }
          else {
            FVar5 = pFVar8[lVar21 + -0x1a];
            if (((FVar5 == (FScriptContainerElement)0x0) || (FVar5 == (FScriptContainerElement)0x1))
               && ((pFVar1[lVar21 + 2] == (FScriptContainerElement)0x0 ||
                   (pFVar1[lVar21 + 2] == (FScriptContainerElement)0x2)))) {
              fVar28 = UE::Curves::BezierInterp<float>
                                 (fVar28,fVar23 * *(float *)(pFVar8 + lVar21 + -8) * __real_3eaaaaab
                                         + fVar28,
                                  fVar4 - fVar23 * *(float *)(pFVar1 + lVar21 + 0xc) *
                                          __real_3eaaaaab,fVar4,fVar27);
            }
            else {
              fVar28 = UE::Curves::WeightedEvalForTwoKeys
                                 (fVar28,fVar24,*(float *)(pFVar8 + lVar21 + -8),
                                  *(float *)(pFVar8 + lVar21 + -4),(uint)(byte)FVar5,fVar4,fVar25,
                                  *(float *)(pFVar1 + lVar21 + 0xc),
                                  *(float *)(pFVar1 + lVar21 + 0x10),(uint)(byte)pFVar1[lVar21 + 2],
                                  fVar29);
            }
          }
        }
        if ((int)uVar20 < (param_1->Keys).ArrayNum) {
          uVar16 = ~uVar20 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar14 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar9 = (code *)swi(3);
          EVar15 = (*pcVar9)();
          return EVar15;
        }
        pFVar1 = (param_1->Keys).AllocatorInstance.Data;
        uVar16 = 0;
        if ((int)(uVar20 - 1) < (param_1->Keys).ArrayNum) {
          uVar16 = ~(uVar20 - 1) >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar14 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar9 = (code *)swi(3);
          EVar15 = (*pcVar9)();
          return EVar15;
        }
        fVar25 = UE::Curves::EvalForTwoKeys
                           ((FRichCurveKey *)
                            ((param_1->Keys).AllocatorInstance.Data +
                            (longlong)(int)(uVar20 - 1) * 0x1c),
                            (FRichCurveKey *)(pFVar1 + (longlong)(int)uVar20 * 0x1c),fVar29);
        fVar29 = fVar29 + fVar26;
        bVar14 = false;
        if ((float)((uint)(fVar25 - fVar28) & __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_2) {
          bVar14 = bVar12;
        }
        bVar12 = bVar14;
        bVar14 = bVar12;
      } while (fVar29 <= fVar3);
    }
    uVar20 = uVar6;
    if ((param_4 != RCCF_Mixed) && (uVar20 = 0, param_4 == RCCF_Weighted)) {
      uVar20 = uVar6 * 2;
    }
    if ((bVar14) &&
       ((int)(((uVar20 + 1 & 0xfffffffe) + 3 + uVar6 * 2 & 0xfffffffc) + 8) <
        (int)((uVar20 + 3 & 0xfffffffc) + uVar6 * 4))) {
      return RCKTCF_uint16;
    }
  }
  return RCKTCF_float32;
}

// FindScopedRPCTrackers @ 147a47d40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<UFunction_*,TSizedDefaultAllocator<32>_> * __cdecl
FindScopedRPCTrackers
          (TArray<UFunction_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UNetConnection *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  TArray<UFunction_*,TSizedDefaultAllocator<32>_> *pTVar9;
  ForAnyElementType FVar10;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  iVar6 = FScopedRPCTimingTracker::ActiveTrackers.ArrayNum;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar2 = FScopedRPCTimingTracker::ActiveTrackers.AllocatorInstance.Data +
           (longlong)FScopedRPCTimingTracker::ActiveTrackers.ArrayNum * 8;
  FVar10 = FScopedRPCTimingTracker::ActiveTrackers.AllocatorInstance;
  while( true ) {
    if (FScopedRPCTimingTracker::ActiveTrackers.ArrayNum != iVar6) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FScopedRPCTimingTracker_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar10.Data == pFVar2) break;
    plVar3 = *(longlong **)FVar10.Data;
    if ((plVar3 != (longlong *)0x0) &&
       ((param_1 == (UNetConnection *)0x0 || ((UNetConnection *)*plVar3 == param_1)))) {
      pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
      pFVar1 = (FScriptContainerElement *)(plVar3 + 1);
      if ((pFVar4 <= pFVar1) && (pFVar1 < pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 8))
      {
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar9 = (TArray<UFunction_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar9;
        }
      }
      iVar8 = __return_storage_ptr__->ArrayNum;
      if (iVar8 == __return_storage_ptr__->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar8 + 1;
      *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) =
           *(longlong *)pFVar1;
    }
    FVar10.Data = FVar10.Data + 8;
  }
  return __return_storage_ptr__;
}

// GenerateLongLatUnwrap @ 147a4da50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __cdecl
CubemapHelpers::GenerateLongLatUnwrap
          (FTextureResource *param_1,uint param_2,EPixelFormat param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<64>_> *param_4,TIntPoint<int> *param_5,
          EPixelFormat *param_6)

{
  long64 *plVar1;
  TSharedPtr<FCanvasWordWrapper,1> *pTVar2;
  code *pcVar3;
  TIntPoint<int>_u_0 TVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  FCanvas *pFVar11;
  UObject *pUVar12;
  UTextureRenderTarget2D *this;
  FUObjectItem *pFVar13;
  FTextureRenderTargetResource *pFVar14;
  FCanvas *this_00;
  FCanvas *this_01;
  ulong64 uVar15;
  FCanvas *pFVar16;
  EPixelFormat EVar17;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined2 local_1e8;
  ushort uStack_1e6;
  undefined4 uStack_1e4;
  void *local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined2 local_1b8;
  ushort uStack_1b6;
  undefined4 uStack_1b4;
  TVector2<double>_u_0 local_1a8;
  ulong64 local_198;
  FGameTime local_190;
  undefined8 local_178;
  undefined8 uStack_170;
  longlong local_168;
  undefined4 local_160;
  FReadSurfaceDataFlags local_158;
  FLinearColor_u_0 local_138;
  TVector2<double>_u_0 local_128;
  TIntRect<int>_u_0 local_118;
  undefined2 local_ff;
  undefined1 local_fd;
  ushort local_f6;
  FCanvasTileItem local_e8;
  
  this_01 = (FCanvas *)0x0;
  pFVar11 = ::operator_new(0x70);
  pFVar16 = this_01;
  if (pFVar11 != (FCanvas *)0x0) {
    *(undefined1 *)&(pFVar11->WordWrapper).SharedReferenceCount.ReferenceController = 1;
    *(undefined ***)pFVar11 = &___7FMipLevelBatchedElementParameters__6B_;
    *(undefined4 *)((longlong)&(pFVar11->WordWrapper).SharedReferenceCount.ReferenceController + 4)
         = 0;
    *(undefined4 *)&(pFVar11->DepthSortKeyStack).AllocatorInstance.Data = 0xbf800000;
    uVar6 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
    fVar5 = UE::Math::TMatrix<float>::Identity.M[0][1];
    (pFVar11->DepthSortKeyStack).ArrayNum = (int)UE::Math::TMatrix<float>::Identity.M[0][0];
    (pFVar11->DepthSortKeyStack).ArrayMax = (int)fVar5;
    (pFVar11->TransformStack).AllocatorInstance.Data = (FScriptContainerElement *)uVar6;
    uVar6 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
    fVar5 = UE::Math::TMatrix<float>::Identity.M[1][1];
    (pFVar11->TransformStack).ArrayNum = (int)UE::Math::TMatrix<float>::Identity.M[1][0];
    (pFVar11->TransformStack).ArrayMax = (int)fVar5;
    (pFVar11->ViewRect).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)uVar6;
    uVar6 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
    (pFVar11->ViewRect).field0_0x0._s_0.Max.field0_0x0 =
         (TIntPoint<int>_u_0)UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
    (pFVar11->ScissorRect).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)uVar6;
    uVar7 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
    uVar6 = UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
    *(undefined1 *)((longlong)&pFVar11->HitProxyConsumer + 2) = 0;
    (pFVar11->ScissorRect).field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)uVar6;
    pFVar11->RenderTarget = (FRenderTarget *)uVar7;
    *(undefined2 *)&pFVar11->HitProxyConsumer = 1;
    *(undefined4 *)&(pFVar11->WordWrapper).Object = 1;
    pFVar16 = pFVar11;
  }
  local_198 = CalculateImageBytes(1,1,0,param_3);
  EVar17 = PF_FloatRGBA;
  if (local_198 < 5) {
    EVar17 = PF_B8G8R8A8;
  }
  pUVar12 = GetTransientPackageAsObject();
  this = NewObject<UTextureRenderTarget2D>(pUVar12);
  if (this == (UTextureRenderTarget2D *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("RenderTargetLongLat",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\CubemapUnwrapUtils.cpp"
                       ,0x33,L"");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      uVar9 = (*pcVar3)();
      return (bool)uVar9;
    }
  }
  pFVar13 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4));
  FUObjectItem::SetRootFlags(pFVar13,RootSet);
  *(undefined8 *)&(this->ClearColor).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->ClearColor).field0_0x0 + 8) = 0;
  UTextureRenderTarget2D::InitCustomFormat(this,param_2 * 2,param_2,EVar17,false);
  *(undefined4 *)&this->_padding_ = 0;
  pFVar14 = UTextureRenderTarget::GameThread_GetRenderTargetResource((UTextureRenderTarget *)this);
  pFVar11 = (FCanvas *)&pFVar14->_padding_;
  if (pFVar14 == (FTextureRenderTargetResource *)0x0) {
    pFVar11 = this_01;
  }
  this_00 = ::operator_new(0x120);
  if (this_00 != (FCanvas *)0x0) {
    local_190.DeltaRealTimeSeconds = 0.0;
    local_190.DeltaWorldTimeSeconds = 0.0;
    local_190.RealTimeSeconds = 0.0;
    local_190.WorldTimeSeconds = 0.0;
    this_01 = FCanvas::FCanvas(this_00,(FRenderTarget *)pFVar11,(FHitProxyConsumer *)0x0,&local_190,
                               GMaxRHIFeatureLevel,__real_3f800000);
  }
  FCanvas::SetRenderTarget_GameThread(this_01,(FRenderTarget *)pFVar11);
  local_138._0_8_ = 0;
  local_138._8_8_ = 0;
  FCanvas::Clear(this_01,(FLinearColor *)&local_138._s_0);
  local_1a8._s_0.X = (double)(int)(param_2 * 2);
  local_1a8._s_0.Y = (double)(int)param_2;
  local_128._s_0.X = 0.0;
  local_128._s_0.Y = 0.0;
  FCanvasTileItem::FCanvasTileItem
            (&local_e8,(TVector2<double> *)&local_128._s_0,(FTexture *)param_1,
             (TVector2<double> *)&local_1a8._s_0,&FLinearColor::White);
  local_e8._padding_._4_4_ = 0;
  local_e8._padding_ = (longlong)pFVar16;
  FCanvas::DrawItem(this_01,(FCanvasItem *)&local_e8);
  FCanvas::Flush_GameThread(this_01,false);
  FlushRenderingCommands();
  FCanvas::SetRenderTarget_GameThread(this_01,(FRenderTarget *)0x0);
  FlushRenderingCommands();
  uVar15 = CalculateImageBytes(param_2 * 2,param_2,0,EVar17);
  local_1a8._s_0.X = (double)(longlong)(int)uVar15;
  plVar1 = &param_4->ArrayMax;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
            (1,1,(long64)local_1a8._s_0.X,&param_4->AllocatorInstance,&param_4->ArrayNum,plVar1);
  if (local_198 < 5) {
    local_1e8 = 0;
    uStack_1e4 = 0;
    local_118._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
    local_118._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
    uStack_1e6 = local_f6;
    local_158._16_8_ = (ulonglong)local_f6 << 0x10;
    local_158.GPUIndex = 0;
    local_1f8 = 6;
    uStack_1f0._1_7_ = (uint7)CONCAT12(local_fd,local_ff);
    uStack_1f0 = CONCAT71(uStack_1f0._1_7_,1);
    uStack_1f0._4_4_ = 16000.0;
    uVar6 = uStack_1f0;
    local_158.CubeFace = CubeFace_MAX;
    local_158.CompressionMode = RCM_UNorm;
    local_158.bLinearToGamma = uStack_1f0._0_1_;
    local_158._9_3_ = uStack_1f0._1_3_;
    local_158.MaxDepthRange = 16000.0;
    uStack_1f0 = uVar6;
    cVar10 = FRenderTarget::ReadPixelsPtr
                       ((FRenderTarget *)pFVar11,(FColor *)(param_4->AllocatorInstance).Data,
                        &local_158,(TIntRect<int> *)&local_118._s_0);
  }
  else {
    local_1c8 = 6;
    local_1b8 = 0;
    uStack_1b4 = 0;
    local_168 = (ulonglong)uStack_1b6 << 0x10;
    local_1d8 = (void *)0x0;
    local_1d0 = 0;
    local_160 = 0;
    local_1f8 = 0;
    uStack_1f0._0_1_ = false;
    uStack_1f0._1_3_ = 0;
    uStack_1f0._4_4_ = 0.0;
    uStack_1c0 = CONCAT31(uStack_1c0._1_3_,1);
    uStack_1bc = 0x467a0000;
    uStack_170 = CONCAT44(0x467a0000,uStack_1c0);
    local_178 = 6;
    cVar10 = (**(code **)(*(longlong *)pFVar11 + 0x68))(pFVar11,&local_1d8,&local_178,&local_1f8);
    memcpy((param_4->AllocatorInstance).Data,local_1d8,(size_t)local_1a8._s_0.X);
    if (local_1d8 != (void *)0x0) {
      FMemory::Free(local_1d8);
    }
  }
  UTexture::ReleaseResource((UTexture *)this);
  pFVar13 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4));
  FUObjectItem::ClearRootFlags(pFVar13,RootSet);
  if (this_01 != (FCanvas *)0x0) {
    FCanvas::~FCanvas(this_01);
    ::operator_delete(this_01,0x120);
  }
  TVar4._s_0.Y = param_2;
  TVar4._s_0.X = param_2 * 2;
  param_5->field0_0x0 = TVar4;
  *param_6 = EVar17;
  if ((cVar10 == '\0') && (param_4->ArrayNum = 0, *plVar1 != 0)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,0,&param_4->AllocatorInstance,0,plVar1);
  }
  local_e8._padding_ = (longlong)&___7FCanvasItem__6B_;
  if (pFVar16 != (FCanvas *)0x0) {
    pTVar2 = &pFVar16->WordWrapper;
    *(int *)&pTVar2->Object = *(int *)&pTVar2->Object + -1;
    if (*(int *)&pTVar2->Object == 0) {
      (*(code *)**(undefined8 **)pFVar16)(pFVar16,1);
    }
  }
  return (bool)cVar10;
}

// GenerateLongLatUnwrap @ 147a4deb0

bool __cdecl
CubemapHelpers::GenerateLongLatUnwrap
          (UTextureCube *param_1,TArray<unsigned_char,TSizedDefaultAllocator<64>_> *param_2,
          TIntPoint<int> *param_3,EPixelFormat *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  EPixelFormat EVar4;
  uint uVar5;
  FTextureResource *pFVar6;
  
  if (param_1 == (UTextureCube *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CubeTexture != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\CubemapUnwrapUtils.cpp"
                       ,0x6f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  EVar4 = UTextureCube::GetPixelFormat(param_1);
  uVar5 = UTextureCube::GetSizeX(param_1);
  pFVar6 = UTexture::GetResource((UTexture *)param_1);
  bVar2 = GenerateLongLatUnwrap(pFVar6,uVar5,EVar4,param_2,param_3,param_4);
  return bVar2;
}

// GenerateLongLatUnwrap @ 147a4df60

bool __cdecl
CubemapHelpers::GenerateLongLatUnwrap
          (UTextureRenderTargetCube *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<64>_> *param_2,TIntPoint<int> *param_3,
          EPixelFormat *param_4)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  EPixelFormat EVar5;
  FTextureResource *pFVar6;
  
  if (param_1 == (UTextureRenderTargetCube *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CubeTarget != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\CubemapUnwrapUtils.cpp"
                       ,0x75,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  EVar5 = (**(code **)(param_1->_padding_ + 0x3d0))(param_1);
  uVar1 = param_1->SizeX;
  pFVar6 = UTexture::GetResource((UTexture *)param_1);
  bVar3 = GenerateLongLatUnwrap(pFVar6,uVar1,EVar5,param_2,param_3,param_4);
  return bVar3;
}

// GetBitStreamPositionForNetTrace @ 147a4e9d0

uint __cdecl GetBitStreamPositionForNetTrace(FBitReader *param_1)

{
  return (uint)param_1->Pos;
}

// GetCurveValues @ 147a4eef0

void __cdecl
GetCurveValues(TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *param_1,
              TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  double dVar9;
  float local_18 [4];
  
  if (1 < param_1->ArrayNum) {
    uVar7 = param_2->ArrayNum + -1 + param_1->ArrayNum;
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    piVar1 = &param_2->ArrayMax;
    if (*piVar1 < (int)uVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar7,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
    }
    iVar6 = param_1->ArrayNum;
    uVar7 = 1;
    if (1 < iVar6) {
      lVar8 = 8;
      do {
        uVar5 = 0;
        if ((int)uVar7 < iVar6) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        dVar9 = _wtof(*(wchar_t **)((param_1->AllocatorInstance).Data + lVar8));
        pFVar2 = (param_2->AllocatorInstance).Data;
        local_18[0] = (float)dVar9;
        if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
            ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)*piVar1 * 4)) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = param_2->ArrayNum;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_2->AllocatorInstance,piVar1);
        }
        param_2->ArrayNum = iVar6 + 1;
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 8;
        *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_18[0];
        iVar6 = param_1->ArrayNum;
      } while ((int)uVar7 < iVar6);
    }
  }
  return;
}

// GetKeyInterpMode @ 147a51fa0

ERichCurveInterpMode __cdecl GetKeyInterpMode(ERichCurveCompressionFormat param_1)

{
  code *pcVar1;
  bool bVar2;
  ERichCurveInterpMode EVar3;
  
  switch(param_1) {
  case RCCF_Constant:
    return RCIM_Constant;
  case RCCF_Linear:
    return RCIM_Linear;
  case RCCF_Cubic:
  case RCCF_Weighted:
    return RCIM_Cubic;
  case RCCF_Mixed:
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\RichCurve.cpp"
                       ,0x8de,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  return RCIM_None;
}

// GetTypeHash @ 147a5af30

uint __cdecl GetTypeHash(FCurveTableRowHandle *param_1)

{
  UCurveTable *pUVar1;
  FName FVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  pUVar1 = (param_1->CurveTable).field0_0x0.DebugPtr;
  FVar2 = param_1->RowName;
  uVar3 = ((uint)((ulonglong)pUVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar1 >> 4)) *
          -0x7a143595;
  uVar4 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  uVar3 = GetTypeHash(FVar2.ComparisonIndex.Value);
  uVar5 = (FVar2.Number - uVar4) + uVar3 ^ uVar4 >> 0xd;
  uVar3 = (-0x61c88647 - uVar5) - uVar4 ^ uVar5 << 8;
  uVar4 = (uVar4 - uVar5) - uVar3 ^ uVar3 >> 0xd;
  uVar5 = (uVar5 - uVar4) - uVar3 ^ uVar4 >> 0xc;
  uVar3 = (uVar3 - uVar5) - uVar4 ^ uVar5 << 0x10;
  uVar4 = (uVar4 - uVar3) - uVar5 ^ uVar3 >> 5;
  uVar5 = (uVar5 - uVar4) - uVar3 ^ uVar4 >> 3;
  uVar3 = (uVar3 - uVar5) - uVar4 ^ uVar5 << 10;
  return (uVar4 - uVar3) - uVar5 ^ uVar3 >> 0xf;
}

// ListOpenActorChannels @ 147a63750

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

void __cdecl ListOpenActorChannels(UWorld *param_1)

{
  UNetDriver *pUVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  UNetConnection *pUVar6;
  UClass *pUVar7;
  ulonglong uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  ForAnyElementType FVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_s_1 TVar18;
  ulonglong uVar19;
  ForElementType<unsigned_int> FVar20;
  undefined1 *puVar21;
  int iVar22;
  undefined1 auStack_258 [32];
  undefined8 local_238;
  longlong local_230;
  FIdentityFunctor local_228 [8];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_s_1 local_220;
  int local_218 [2];
  uint local_210;
  uint uStack_20c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_208;
  undefined4 local_200;
  undefined8 uStack_1fc;
  undefined4 uStack_1f4;
  TMap<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,FDefaultSetAllocator,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>_>
  *local_1f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1e8;
  longlong *local_1c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1c0;
  longlong *local_198;
  undefined1 auStack_190 [16];
  uint uStack_180;
  int iStack_17c;
  longlong local_178;
  TSet<TTuple<UClass_*,int>,TDefaultMapHashableKeyFuncs<UClass_*,int,0>,FDefaultSetAllocator>
  *pTStack_170;
  TSet<TTuple<UClass_*,int>,TDefaultMapHashableKeyFuncs<UClass_*,int,0>,FDefaultSetAllocator>
  *local_168;
  undefined2 local_160;
  int local_158;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_s_1 *local_150;
  FIdentityFunctor *local_148;
  FIdentityFunctor **local_140;
  FName local_138;
  FString local_130;
  TMap<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,FDefaultSetAllocator,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>_>
  *local_120;
  int iStack_118;
  uint uStack_114;
  undefined1 *local_110;
  undefined4 uStack_108;
  int iStack_104;
  int local_100;
  undefined4 uStack_fc;
  FString local_f0;
  undefined1 local_e0 [32];
  longlong local_c0;
  TSet<TTuple<UClass_*,int>,TDefaultMapHashableKeyFuncs<UClass_*,int,0>,FDefaultSetAllocator>
  *pTStack_b8;
  undefined4 local_94;
  undefined1 local_88 [32];
  ForElementType<unsigned_int> local_68;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined1 local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_258;
  pUVar1 = (param_1->NetDriver).field0_0x0.DebugPtr;
  if (pUVar1 == (UNetDriver *)0x0) {
    return;
  }
  pUVar6 = (pUVar1->ServerConnection).field0_0x0.DebugPtr;
  if (pUVar6 == (UNetConnection *)0x0) {
    if ((pUVar1->ClientConnections).ArrayNum < 1) {
      return;
    }
    iVar15 = (pUVar1->ClientConnections).ArrayNum;
    if (iVar15 < 1) {
      local_238 = 0;
      local_230 = (longlong)iVar15;
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pUVar6 = *(UNetConnection **)(pUVar1->ClientConnections).AllocatorInstance.Data;
    if (pUVar6 == (UNetConnection *)0x0) {
      return;
    }
  }
  local_88._8_4_ = 0;
  iStack_118 = 0;
  iVar22 = 1;
  local_1f0 = &pUVar6->ActorChannels;
  local_110 = &(pUVar6->ActorChannels).field_0x10;
  local_88._0_8_ = (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *)0x0;
  local_88._8_8_ = 0;
  local_68 = (ForElementType<unsigned_int>)0x0;
  local_60 = 0;
  local_100 = 0;
  local_5c = 0x80;
  local_58 = -1;
  local_54 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  iVar15 = *(int *)&(pUVar6->ActorChannels).field_0x28;
  uStack_114 = 1;
  TStack_1e8.CurrentBitIndex = 0;
  if (iVar15 != 0) {
    puVar21 = *(undefined1 **)&(pUVar6->ActorChannels).field_0x20;
    if (puVar21 == (undefined1 *)0x0) {
      puVar21 = local_110;
    }
    uStack_114 = *(uint *)puVar21;
    local_100 = 0;
    while (uStack_114 == 0) {
      iStack_118 = iStack_118 + 1;
      local_100 = local_100 + 0x20;
      uStack_114 = 1;
      TStack_1e8.CurrentBitIndex = iVar15;
      if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_118) goto LAB_147a638ed;
      uStack_114 = *(uint *)(puVar21 + (longlong)iStack_118 * 4);
    }
    uStack_114 = ~(uStack_114 - 1) & uStack_114;
    uVar12 = (ulonglong)uStack_114 * 2 + 1;
    lVar2 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    local_158 = (int)lVar2;
    TStack_1e8.CurrentBitIndex = local_100 + -1 + local_158;
    if (iVar15 < TStack_1e8.CurrentBitIndex) {
      TStack_1e8.CurrentBitIndex = iVar15;
    }
  }
LAB_147a638ed:
  uStack_fc = local_94;
  uVar16 = 0;
  uVar12 = 0;
  uStack_108 = 0xffffffff;
  TStack_1e8._padding_ = CONCAT44(uStack_114,iStack_118);
  TStack_1e8.UnvisitedBitMask = 0xffffffff;
  TStack_1e8._28_4_ = local_94;
  TStack_1e8.BaseBitIndex = local_100;
  local_120 = local_1f0;
  iStack_104 = TStack_1e8.CurrentBitIndex;
  TStack_1e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_110;
  if (TStack_1e8.CurrentBitIndex < *(int *)&(pUVar6->ActorChannels).field_0x28) {
    do {
      lVar2 = *(longlong *)
               (*(longlong *)local_1f0 + 8 + (longlong)TStack_1e8.CurrentBitIndex * 0x18);
      TVar18 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_s_1 *)
                (*(longlong *)(lVar2 + 0x68) + 0x10);
      while (local_220 = TVar18,
            TVar18 != (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_s_1)0x0) {
        pUVar7 = Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister();
        iVar15 = (int)pUVar7->_padding_;
        if ((*(int *)(*(longlong *)((longlong)TVar18 + 0x10) + 0x38) < iVar15) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)((longlong)TVar18 + 0x10) + 0x30) + (longlong)iVar15 * 8)
            != &pUVar7->_padding_)) break;
        TVar18 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_s_1 *)
                  ((longlong)local_220 + 0x40);
      }
      if (2 < (byte)LogNet._0_1_) {
        UObjectBaseUtility::GetFullName
                  (*(UObjectBaseUtility **)(lVar2 + 0x68),&local_f0,(UObject *)0x0,None);
        UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogNet);
        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        }
      }
      uVar9 = ((uint)((ulonglong)local_220 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_220 >> 4)) *
              -0x7a143595;
      uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
      uVar9 = uVar9 >> 0x10 ^ uVar9;
      if (local_88._8_4_ != local_54) {
        FVar11.Data = (FScriptContainerElement *)local_50;
        if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0) {
          FVar11.Data = local_48.Data;
        }
        for (iVar15 = *(int *)((longlong)FVar11.Data + (ulonglong)(local_40 - 1 & uVar9) * 4);
            iVar15 != -1; iVar15 = *(int *)(local_88._0_8_ + (longlong)iVar15 * 0x18 + 0x10)) {
          if (*(TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_s_1 *)
               (local_88._0_8_ + (longlong)iVar15 * 0x18) == local_220) {
            if ((iVar15 != -1) &&
               (pFVar10 = (FScriptContainerElement *)(local_88._0_8_ + (longlong)iVar15 * 0x18),
               pFVar10 != (FScriptContainerElement *)0x0)) goto LAB_147a63ae8;
            break;
          }
        }
      }
      local_150 = &local_220;
      local_238 = 0;
      TSet<TTuple<UClass_*,int>,TDefaultMapHashableKeyFuncs<UClass_*,int,0>,FDefaultSetAllocator>::
      EmplaceByHash<TKeyInitializer<UClass_*_const_&>_>
                ((TSet<TTuple<UClass_*,int>,TDefaultMapHashableKeyFuncs<UClass_*,int,0>,FDefaultSetAllocator>
                  *)local_88,(uint)local_218,(TKeyInitializer<UClass_*_const_&> *)(ulonglong)uVar9,
                 (bool *)&local_150);
      pFVar10 = (FScriptContainerElement *)(local_88._0_8_ + (longlong)local_218[0] * 0x18);
LAB_147a63ae8:
      *(int *)(pFVar10 + 8) = *(int *)(pFVar10 + 8) + 1;
      TStack_1e8.UnvisitedBitMask = TStack_1e8.UnvisitedBitMask & ~TStack_1e8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1e8);
    } while (TStack_1e8.CurrentBitIndex < (TStack_1e8.Array)->NumBits);
  }
  local_148 = local_228;
  local_140 = &local_148;
  if (0 < local_88._8_4_ - local_54) {
    TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_88);
    uVar4 = local_88._0_8_;
    iVar15 = local_88._8_4_ - local_54;
    if (iVar15 < 0) {
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<UClass_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UClass_*,int>,TDefaultMapHashableKeyFuncs<UClass_*,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UClass_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,int,0>_>::FValueComparisonClass<_ListOpenActorChannels_::__l2::FCompareActorClassCount>_>_>_>
              ((TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *)uVar4,iVar15,local_228[0],
               (FElementCompareClass<TSortableMapBase<UClass_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,int,0>_>::FValueComparisonClass<_void___cdecl_ListOpenActorChannels(UWorld_*)_::_2_::FCompareActorClassCount>_>
                *)&local_140);
  }
  uVar9 = local_40;
  uVar19 = (ulonglong)local_40;
  if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
  }
  if (uVar9 == 0) goto LAB_147a63c52;
  uVar17 = uVar9;
  if (uVar9 < 2) {
    if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0) {
      uVar17 = 0;
      goto LAB_147a63bee;
    }
  }
  else {
LAB_147a63bee:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar17,4);
  }
  if (0 < (int)uVar9) {
    uVar14 = uVar12;
    do {
      FVar11.Data = (FScriptContainerElement *)local_50;
      if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0) {
        FVar11.Data = local_48.Data;
      }
      uVar8 = (longlong)(int)uVar9 - 1U & uVar14;
      uVar14 = uVar14 + 1;
      *(undefined4 *)((longlong)FVar11.Data + uVar8 * 4) = 0xffffffff;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
LAB_147a63c52:
  if (local_40 != 0) {
    uStack_20c = 1;
    local_210 = 0;
    pTStack_208 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
    uStack_1fc = 0;
    if (local_60 != 0) {
      FVar20 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
      if (local_68 != (ForElementType<unsigned_int>)0x0) {
        FVar20 = local_68;
      }
      uVar9 = *(uint *)FVar20;
      uVar19 = uVar12;
      while (uVar9 == 0) {
        uVar16 = (int)uVar19 + 0x20;
        uVar19 = (ulonglong)uVar16;
        iVar15 = (int)uVar12;
        local_210 = iVar15 + 1;
        uVar12 = (ulonglong)local_210;
        uStack_1fc = (ulonglong)uVar16 << 0x20;
        if ((int)(local_60 + -1 + (local_60 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_210) {
          uStack_1fc = CONCAT44(uVar16,local_60);
          goto LAB_147a63d12;
        }
        uVar9 = ((uint *)((longlong)FVar20 + 4))[iVar15];
      }
      uStack_20c = -uVar9 & uVar9;
      uVar12 = (ulonglong)uStack_20c * 2 + 1;
      lVar2 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar15 = (uVar16 - 1) + (int)lVar2;
      if (local_60 < iVar15) {
        iVar15 = local_60;
      }
      uStack_1fc._4_4_ = (int)((ulonglong)uStack_1fc >> 0x20);
      uStack_1fc = CONCAT44(uStack_1fc._4_4_,iVar15);
    }
LAB_147a63d12:
    local_200 = 0xffffffff;
    local_1c8 = (longlong *)local_88;
    local_1c0._padding_ = CONCAT44(uStack_20c,local_210);
    local_1c0.UnvisitedBitMask = 0xffffffff;
    local_1c0.CurrentBitIndex = (int)uStack_1fc;
    local_1c0.BaseBitIndex = uStack_1fc._4_4_;
    local_1c0._28_4_ = uStack_1f4;
    local_1c0.Array = pTStack_208;
    if ((int)uStack_1fc < local_60) {
      do {
        lVar2 = *local_1c8 + (longlong)local_1c0.CurrentBitIndex * 0x18;
        uVar12 = *(ulonglong *)(*local_1c8 + (longlong)local_1c0.CurrentBitIndex * 0x18);
        uVar16 = ((uint)(uVar12 >> 0x14) & 0xffff ^ (uint)(uVar12 >> 4)) * -0x7a143595;
        uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
        uVar16 = (uVar16 >> 0x10 ^ uVar16) & local_40 - 1;
        *(uint *)(lVar2 + 0x14) = uVar16;
        FVar11.Data = (FScriptContainerElement *)local_50;
        if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0) {
          FVar11.Data = local_48.Data;
        }
        lVar13 = (longlong)(int)(local_40 - 1 & uVar16);
        *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)((longlong)FVar11.Data + lVar13 * 4);
        *(int *)((longlong)FVar11.Data + lVar13 * 4) = local_1c0.CurrentBitIndex;
        local_1c0.UnvisitedBitMask = local_1c0.UnvisitedBitMask & ~local_1c0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1c0);
      } while (local_1c0.CurrentBitIndex < (local_1c0.Array)->NumBits);
    }
  }
  if (2 < (byte)LogNet._0_1_) {
    UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogNet);
  }
  TSet<TTuple<UClass_*,int>,TDefaultMapHashableKeyFuncs<UClass_*,int,0>,FDefaultSetAllocator>::
  TIterator::TIterator
            ((TIterator *)local_e0,
             (TSet<TTuple<UClass_*,int>,TDefaultMapHashableKeyFuncs<UClass_*,int,0>,FDefaultSetAllocator>
              *)local_88);
  local_168 = (TSet<TTuple<UClass_*,int>,TDefaultMapHashableKeyFuncs<UClass_*,int,0>,FDefaultSetAllocator>
               *)local_88;
  local_160 = 0;
  stack0xfffffffffffffe78 = local_e0._16_16_;
  local_198 = (longlong *)local_e0._0_8_;
  auStack_190._0_8_ = local_e0._8_8_;
  local_178 = local_c0;
  pTStack_170 = pTStack_b8;
  iVar15 = local_e0._28_4_;
  if (iVar15 < *(int *)(local_e0._16_8_ + 0x18)) {
    do {
      if (2 < (byte)LogNet._0_1_) {
        local_138 = *(FName *)(*(longlong *)((longlong)iVar15 * 0x18 + *local_198) + 0x18);
        FName::ToString(&local_138,&local_130);
        UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogNet);
        if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130.Data.AllocatorInstance.Data);
        }
      }
      uStack_180 = uStack_180 & ~auStack_190._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_190);
      iVar15 = iStack_17c;
    } while (iStack_17c < *(int *)(auStack_190._8_8_ + 0x18));
    if (((char)local_160 != '\0') && (local_160._1_1_ != '\0')) {
      uVar16 = *(int *)&(local_168->Elements).field_0x8 - *(int *)&(local_168->Elements).field_0x34;
      if (3 < uVar16) {
        uVar12 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar22 = 1 << ((byte)lVar2 & 0x1f);
      }
      if (((0 < (int)uVar16) && (local_168->HashSize < iVar22)) || (iVar22 < local_168->HashSize)) {
        local_168->HashSize = iVar22;
        TSet<TTuple<UClass_*,int>,TDefaultMapHashableKeyFuncs<UClass_*,int,0>,FDefaultSetAllocator>
        ::Rehash(local_168);
      }
    }
  }
  local_40 = 0;
  if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_48.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<UClass_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UClass_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UClass_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  return;
}

// LogPartialBunch @ 147a63fb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl LogPartialBunch(FString *param_1,FInBunch *param_2,FInBunch *param_3)

{
  if (5 < (byte)LogNetPartialBunch._0_1_) {
    FCrc::MemCrc_DEPRECATED((void *)param_3->_padding_,(int)(param_3->_padding_ + 7 >> 3),0);
    UE::Logging::Private::BasicLog<6>(&LOG_Static,(FLogCategoryBase *)&LogNetPartialBunch);
  }
  return;
}

// ReadContentBlockHeader @ 147a6bd10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000147a6c7b6) */
/* WARNING: Removing unreachable block (ram,0x000147a6c0ef) */
/* WARNING: Removing unreachable block (ram,0x000147a6c114) */
/* WARNING: Removing unreachable block (ram,0x000147a6c11c) */
/* WARNING: Removing unreachable block (ram,0x000147a6bfb7) */
/* WARNING: Removing unreachable block (ram,0x000147a6bfe2) */
/* WARNING: Removing unreachable block (ram,0x000147a6bfea) */
/* WARNING: Removing unreachable block (ram,0x000147a6c1d9) */
/* WARNING: Removing unreachable block (ram,0x000147a6c1f3) */
/* WARNING: Removing unreachable block (ram,0x000147a6c204) */
/* WARNING: Removing unreachable block (ram,0x000147a6c211) */
/* WARNING: Removing unreachable block (ram,0x000147a6c243) */
/* WARNING: Removing unreachable block (ram,0x000147a6c24b) */
/* WARNING: Removing unreachable block (ram,0x000147a6c274) */
/* WARNING: Removing unreachable block (ram,0x000147a6c27c) */
/* WARNING: Removing unreachable block (ram,0x000147a6c290) */
/* WARNING: Removing unreachable block (ram,0x000147a6c295) */
/* WARNING: Removing unreachable block (ram,0x000147a6c2a1) */
/* WARNING: Removing unreachable block (ram,0x000147a6c2a6) */
/* WARNING: Removing unreachable block (ram,0x000147a6c2de) */
/* WARNING: Removing unreachable block (ram,0x000147a6c2e8) */
/* WARNING: Removing unreachable block (ram,0x000147a6c2f8) */
/* WARNING: Removing unreachable block (ram,0x000147a6c304) */
/* WARNING: Removing unreachable block (ram,0x000147a6c312) */
/* WARNING: Removing unreachable block (ram,0x000147a6c32c) */
/* WARNING: Removing unreachable block (ram,0x000147a6c33d) */
/* WARNING: Removing unreachable block (ram,0x000147a6c353) */
/* WARNING: Removing unreachable block (ram,0x000147a6c360) */
/* WARNING: Removing unreachable block (ram,0x000147a6c381) */
/* WARNING: Removing unreachable block (ram,0x000147a6c37c) */
/* WARNING: Removing unreachable block (ram,0x000147a6c384) */
/* WARNING: Removing unreachable block (ram,0x000147a6c3a6) */
/* WARNING: Removing unreachable block (ram,0x000147a6c3a1) */
/* WARNING: Removing unreachable block (ram,0x000147a6c3a9) */
/* WARNING: Removing unreachable block (ram,0x000147a6c3cb) */
/* WARNING: Removing unreachable block (ram,0x000147a6c3d0) */
/* WARNING: Removing unreachable block (ram,0x000147a6c3dc) */
/* WARNING: Removing unreachable block (ram,0x000147a6c3e1) */
/* WARNING: Removing unreachable block (ram,0x000147a6c3ea) */
/* WARNING: Removing unreachable block (ram,0x000147a6c422) */
/* WARNING: Removing unreachable block (ram,0x000147a6c42c) */
/* WARNING: Removing unreachable block (ram,0x000147a6c43c) */
/* WARNING: Removing unreachable block (ram,0x000147a6c784) */
/* WARNING: Removing unreachable block (ram,0x000147a6c78d) */
/* WARNING: Removing unreachable block (ram,0x000147a6c796) */
/* WARNING: Removing unreachable block (ram,0x000147a6c79e) */
/* WARNING: Removing unreachable block (ram,0x000147a6c7b1) */
/* WARNING: Removing unreachable block (ram,0x000147a6c7c3) */
/* WARNING: Removing unreachable block (ram,0x000147a6c7d4) */
/* WARNING: Removing unreachable block (ram,0x000147a6c7e9) */
/* WARNING: Removing unreachable block (ram,0x000147a6c837) */
/* WARNING: Removing unreachable block (ram,0x000147a6c838) */
/* WARNING: Removing unreachable block (ram,0x000147a6c83d) */
/* WARNING: Removing unreachable block (ram,0x000147a6c84c) */
/* WARNING: Removing unreachable block (ram,0x000147a6c870) */
/* WARNING: Removing unreachable block (ram,0x000147a6c87d) */
/* WARNING: Removing unreachable block (ram,0x000147a6c881) */
/* WARNING: Removing unreachable block (ram,0x000147a6c88f) */
/* WARNING: Removing unreachable block (ram,0x000147a6c899) */
/* WARNING: Removing unreachable block (ram,0x000147a6c8a7) */
/* WARNING: Removing unreachable block (ram,0x000147a6c8ac) */
/* WARNING: Removing unreachable block (ram,0x000147a6c8d0) */
/* WARNING: Removing unreachable block (ram,0x000147a6c8d2) */
/* WARNING: Removing unreachable block (ram,0x000147a6c8db) */
/* WARNING: Removing unreachable block (ram,0x000147a6c8e9) */
/* WARNING: Removing unreachable block (ram,0x000147a6c8f2) */
/* WARNING: Removing unreachable block (ram,0x000147a6c8fb) */
/* WARNING: Removing unreachable block (ram,0x000147a6c905) */
/* WARNING: Removing unreachable block (ram,0x000147a6ca0f) */
/* WARNING: Removing unreachable block (ram,0x000147a6c912) */
/* WARNING: Removing unreachable block (ram,0x000147a6c938) */
/* WARNING: Removing unreachable block (ram,0x000147a6c940) */
/* WARNING: Removing unreachable block (ram,0x000147a6c945) */
/* WARNING: Removing unreachable block (ram,0x000147a6c957) */
/* WARNING: Removing unreachable block (ram,0x000147a6c96c) */
/* WARNING: Removing unreachable block (ram,0x000147a6c97e) */
/* WARNING: Removing unreachable block (ram,0x000147a6c983) */
/* WARNING: Removing unreachable block (ram,0x000147a6c9a4) */
/* WARNING: Removing unreachable block (ram,0x000147a6c9ac) */
/* WARNING: Removing unreachable block (ram,0x000147a6c9e9) */
/* WARNING: Removing unreachable block (ram,0x000147a6c9ee) */
/* WARNING: Removing unreachable block (ram,0x000147a6c9f7) */
/* WARNING: Removing unreachable block (ram,0x000147a6c9fc) */
/* WARNING: Removing unreachable block (ram,0x000147a6ca08) */
/* WARNING: Removing unreachable block (ram,0x000147a6ca15) */
/* WARNING: Removing unreachable block (ram,0x000147a6ca1b) */
/* WARNING: Removing unreachable block (ram,0x000147a6c012) */
/* WARNING: Removing unreachable block (ram,0x000147a6c01e) */
/* WARNING: Removing unreachable block (ram,0x000147a6c144) */
/* WARNING: Removing unreachable block (ram,0x000147a6c150) */
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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __thiscall
UActorChannel::ReadContentBlockHeader
          (UActorChannel *this,FInBunch *param_1,bool *param_2,bool *param_3)

{
  int *piVar1;
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  AActor *pAVar4;
  TObjectPtr<AActor>_u_0 *pTVar5;
  bool bVar6;
  char cVar7;
  uchar uVar8;
  char cVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  UClass *pUVar13;
  FNetGUIDCache *pFVar14;
  UClass *pUVar15;
  UClass *pUVar16;
  UObject *pUVar17;
  TObjectPtr<AActor>_u_0 TVar18;
  longlong *plVar19;
  undefined1 auStackY_6e8 [32];
  undefined1 local_688;
  char local_687;
  undefined4 local_684 [5];
  TObjectPtr<AActor>_u_0 local_670;
  FNetworkGUID_u_0 local_668;
  TObjectPtr<AActor>_u_0 local_660;
  FName local_658;
  UClass *local_650;
  longlong local_648;
  undefined8 local_640;
  undefined8 local_638;
  FString local_620;
  FString local_610;
  FString local_600;
  FString local_5f0;
  FName local_5e0 [4];
  FName local_5c0;
  FName local_5b8 [3];
  bool *local_5a0;
  FName local_598;
  FName local_590;
  FName local_588;
  FName local_580;
  FName local_578;
  FName local_570;
  FName local_568;
  FName local_560;
  FName local_558;
  FName local_550;
  FName local_548;
  FName local_540;
  FName local_538;
  FName local_530;
  FName local_528;
  FName local_520;
  FName local_518;
  FName local_510;
  UActorChannel *local_508;
  FName local_500;
  FMemScope local_4f8;
  undefined1 local_4f0 [4];
  FName local_4ec;
  FName local_4e4;
  FName local_4dc [2];
  FString local_4c8;
  FString local_4b8 [2];
  FString local_498 [2];
  FString local_478 [3];
  FString local_448;
  FString local_438;
  FString local_428 [3];
  FString local_3f8;
  FString local_3e8;
  FString local_3d8;
  FString local_3c8;
  FString local_3b8;
  FString local_3a8;
  FString local_398;
  FString local_388;
  FString local_378;
  FString local_368;
  FString local_358;
  FString local_348;
  FString local_338;
  FString local_328 [3];
  FString local_2f8;
  undefined1 local_2e8 [40];
  longlong local_2c0;
  undefined1 local_2b8 [40];
  longlong local_290;
  undefined1 local_288 [40];
  longlong local_260;
  undefined1 local_258 [40];
  longlong local_230;
  undefined1 local_1c8 [40];
  longlong local_1a0;
  undefined1 local_198 [40];
  longlong local_170;
  undefined1 local_168 [40];
  longlong local_140;
  undefined1 local_138 [40];
  longlong local_110;
  undefined1 local_108 [40];
  longlong local_e0;
  undefined1 local_d8 [128];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_6e8;
  pUVar16 = (UClass *)0x0;
  local_684[0] = 0;
  local_5a0 = param_2;
  cVar7 = (**(code **)(**(longlong **)(this->_padding_ + 0x58) + 0x3f8))();
  *param_2 = false;
  local_687 = cVar7;
  uVar8 = FBitReader::ReadBit((FBitReader *)param_1);
  *param_3 = uVar8 != '\0';
  if ((param_1->_padding_ & 0x200) != 0) {
    if (1 < (byte)LogNetTraffic._0_1_) {
      local_4ec = (FName)((this->Actor).field0_0x0.DebugPtr)->_padding_;
      ::FName::ToString(&local_4ec,&local_4c8);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
      if (local_4c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4c8.Data.AllocatorInstance.Data);
      }
    }
    UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
              (local_2e8,ContentBlockHeaderRepLayoutFail);
    UE::Net::AddToChainResultPtr
              ((TPimplPtr<UE::Net::FNetResult,1> *)&param_1->_padding_,
               (TNetResult<ENetCloseResult> *)local_2e8);
    if (local_2c0 != 0) {
      (**(code **)(local_2c0 + -0x10))(local_2c0 + -0x10);
    }
    if ((void *)local_2e8._24_8_ == (void *)0x0) {
      return (UObject *)0x0;
    }
    FMemory::Free((void *)local_2e8._24_8_);
    return (UObject *)0x0;
  }
  uVar8 = FBitReader::ReadBit((FBitReader *)param_1);
  if ((param_1->_padding_ & 0x200) != 0) {
    if (1 < (byte)LogNetTraffic._0_1_) {
      local_4e4 = (FName)((this->Actor).field0_0x0.DebugPtr)->_padding_;
      ::FName::ToString(&local_4e4,local_4b8);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
      if (local_4b8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4b8[0].Data.AllocatorInstance.Data);
      }
    }
    UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
              (local_2b8,ContentBlockHeaderIsActorFail);
    UE::Net::AddToChainResultPtr
              ((TPimplPtr<UE::Net::FNetResult,1> *)&param_1->_padding_,
               (TNetResult<ENetCloseResult> *)local_2b8);
    if (local_290 != 0) {
      (**(code **)(local_290 + -0x10))(local_290 + -0x10);
    }
    if ((void *)local_2b8._24_8_ == (void *)0x0) {
      return (UObject *)0x0;
    }
    FMemory::Free((void *)local_2b8._24_8_);
    return (UObject *)0x0;
  }
  if (uVar8 != '\0') {
    return (UObject *)(this->Actor).field0_0x0.DebugPtr;
  }
  local_668.ObjectId = 0;
  plVar19 = *(longlong **)(this->_padding_ + 0x68);
  pcVar3 = *(code **)(*plVar19 + 0x2b8);
  pUVar13 = Z_Construct_UClass_UObject_NoRegister();
  (*pcVar3)(plVar19,param_1,pUVar13);
  if ((param_1->_padding_ & 0x200) != 0) {
    if (1 < (byte)LogNetTraffic._0_1_) {
      local_4dc[0] = (FName)((this->Actor).field0_0x0.DebugPtr)->_padding_;
      ::FName::ToString(local_4dc,local_498);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
      if (local_498[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_498[0].Data.AllocatorInstance.Data);
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
    UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
              (local_288,ContentBlockHeaderObjFail);
    UE::Net::AddToChainResultPtr
              ((TPimplPtr<UE::Net::FNetResult,1> *)&param_1->_padding_,
               (TNetResult<ENetCloseResult> *)local_288);
    if (local_260 != 0) {
      (**(code **)(local_260 + -0x10))(local_260 + -0x10);
    }
    if ((void *)local_288._24_8_ == (void *)0x0) {
      return (UObject *)0x0;
    }
    FMemory::Free((void *)local_288._24_8_);
    return (UObject *)0x0;
  }
  cVar9 = (**(code **)(param_1->_padding_ + 0x38))(param_1);
  if (cVar9 != '\0') {
    if (1 < (byte)LogNetTraffic._0_1_) {
      local_5e0[0] = (FName)((this->Actor).field0_0x0.DebugPtr)->_padding_;
      ::FName::ToString(local_5e0,local_478);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
      if (local_478[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_478[0].Data.AllocatorInstance.Data);
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
    UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
              (local_258,ContentBlockHeaderPrematureEnd);
    UE::Net::AddToChainResultPtr
              ((TPimplPtr<UE::Net::FNetResult,1> *)&param_1->_padding_,
               (TNetResult<ENetCloseResult> *)local_258);
    if (local_230 != 0) {
      (**(code **)(local_230 + -0x10))(local_230 + -0x10);
    }
    if ((void *)local_258._24_8_ == (void *)0x0) {
      return (UObject *)0x0;
    }
    FMemory::Free((void *)local_258._24_8_);
    return (UObject *)0x0;
  }
  if (cVar7 != '\0') {
    if (1 < (byte)LogNetTraffic._0_1_) {
      local_5c0 = (FName)((this->Actor).field0_0x0.DebugPtr)->_padding_;
      ::FName::ToString(&local_5c0,&local_448);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
      if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_448.Data.AllocatorInstance.Data);
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
    UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
              (local_1c8,ContentBlockHeaderInvalidCreate);
    UE::Net::AddToChainResultPtr
              ((TPimplPtr<UE::Net::FNetResult,1> *)&param_1->_padding_,
               (TNetResult<ENetCloseResult> *)local_1c8);
    if (local_1a0 != 0) {
      (**(code **)(local_1a0 + -0x10))(local_1a0 + -0x10);
    }
    if ((void *)local_1c8._24_8_ == (void *)0x0) {
      return (UObject *)0x0;
    }
    FMemory::Free((void *)local_1c8._24_8_);
    return (UObject *)0x0;
  }
  uVar8 = FBitReader::ReadBit((FBitReader *)param_1);
  if ((param_1->_padding_ & 0x200) != 0) {
    if (1 < (byte)LogNetTraffic._0_1_) {
      local_5b8[0] = (FName)((this->Actor).field0_0x0.DebugPtr)->_padding_;
      ::FName::ToString(local_5b8,&local_438);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
      if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_438.Data.AllocatorInstance.Data);
      }
    }
    UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
              (local_198,ContentBlockHeaderStablyNamedFail);
    UE::Net::AddToChainResultPtr
              ((TPimplPtr<UE::Net::FNetResult,1> *)&param_1->_padding_,
               (TNetResult<ENetCloseResult> *)local_198);
    if (local_170 != 0) {
      (**(code **)(local_170 + -0x10))(local_170 + -0x10);
    }
    if ((void *)local_198._24_8_ == (void *)0x0) {
      return (UObject *)0x0;
    }
    FMemory::Free((void *)local_198._24_8_);
    return (UObject *)0x0;
  }
  if (uVar8 != '\0') {
    if ((*(byte *)(this->_padding_ + 0xfc) & 1) != 0) {
      return (UObject *)0x0;
    }
    if ((byte)LogNetTraffic._0_1_ < 5) {
      return (UObject *)0x0;
    }
    local_658 = (FName)((this->Actor).field0_0x0.DebugPtr)->_padding_;
    ::FName::ToString(&local_658,local_428);
    pFVar14 = TSharedPtr<FNetGUIDCache,1>::operator->
                        ((TSharedPtr<FNetGUIDCache,1> *)
                         (*(longlong *)(this->_padding_ + 0x58) + 0x1c8));
    FNetGUIDCache::FullNetGUIDPath(pFVar14,&local_2f8,(FNetworkGUID *)&local_668);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
    if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
    }
    if (local_428[0].Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return (UObject *)0x0;
    }
    FMemory::Free(local_428[0].Data.AllocatorInstance.Data);
    return (UObject *)0x0;
  }
  bVar10 = false;
  bVar6 = true;
  uVar11 = (**(code **)(param_1->_padding_ + 0x48))(param_1);
  if (uVar11 < 0x1e) {
LAB_147a6c730:
    local_650 = (UClass *)0x0;
    local_648 = 0;
    plVar19 = *(longlong **)(this->_padding_ + 0x68);
    pcVar3 = *(code **)(*plVar19 + 0x2b8);
    pUVar13 = Z_Construct_UClass_UObject_NoRegister();
    (*pcVar3)(plVar19,param_1,pUVar13);
    bVar10 = local_648 == 0;
  }
  else {
    uVar8 = FBitReader::ReadBit((FBitReader *)param_1);
    if (uVar8 != '\0') {
      plVar19 = (longlong *)param_1->_padding_;
      bVar10 = true;
      bVar6 = false;
      if ((undefined1 *)plVar19[1] < (undefined1 *)*plVar19 + 1) {
        (**(code **)(param_1->_padding_ + 0x188))(param_1,&local_688,1);
      }
      else {
        local_688 = *(undefined1 *)*plVar19;
        *plVar19 = *plVar19 + 1;
        bVar10 = true;
      }
    }
    local_650 = (UClass *)0x0;
    if (bVar6) goto LAB_147a6c730;
  }
  pUVar13 = local_650;
  if (bVar10) {
    *local_5a0 = true;
    return (UObject *)0x0;
  }
  if (local_650 != (UClass *)0x0) {
    pUVar15 = Z_Construct_UClass_UClass_NoRegister();
    iVar12 = (int)pUVar15->_padding_;
    if ((iVar12 <= *(int *)(pUVar13->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar13->_padding_ + 0x30) + (longlong)iVar12 * 8) ==
        &pUVar15->_padding_)) {
      pUVar16 = Z_Construct_UClass_UObject_NoRegister();
      if (pUVar13 == pUVar16) {
        if (1 < (byte)LogNetTraffic._0_1_) {
          local_598 = (FName)((this->Actor).field0_0x0.DebugPtr)->_padding_;
          ::FName::ToString(&local_598,&local_3f8);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
          if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
          }
        }
        FArchiveState::SetError((FArchiveState *)param_1);
        UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                  (local_168,ContentBlockHeaderUObjectSubObject);
        UE::Net::AddToChainResultPtr
                  ((TPimplPtr<UE::Net::FNetResult,1> *)&param_1->_padding_,
                   (TNetResult<ENetCloseResult> *)local_168);
        if (local_140 != 0) {
          (**(code **)(local_140 + -0x10))(local_140 + -0x10);
        }
        if ((void *)local_168._24_8_ == (void *)0x0) {
          return (UObject *)0x0;
        }
        FMemory::Free((void *)local_168._24_8_);
        return (UObject *)0x0;
      }
      pUVar15 = Z_Construct_UClass_AActor_NoRegister();
      pUVar16 = pUVar13;
      if (pUVar15 != (UClass *)0x0) {
        iVar12 = (int)pUVar15->_padding_;
        if (((int)pUVar13->_padding_ < iVar12) ||
           ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar12 * 8) !=
            &pUVar15->_padding_)) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if (bVar10) {
          if (1 < (byte)LogNetTraffic._0_1_) {
            local_590 = (FName)((this->Actor).field0_0x0.DebugPtr)->_padding_;
            ::FName::ToString(&local_590,&local_3e8);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
            if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
            }
          }
          FArchiveState::SetError((FArchiveState *)param_1);
          UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                    (local_138,ContentBlockHeaderAActorSubObject);
          UE::Net::AddToChainResultPtr
                    ((TPimplPtr<UE::Net::FNetResult,1> *)&param_1->_padding_,
                     (TNetResult<ENetCloseResult> *)local_138);
          if (local_110 != 0) {
            (**(code **)(local_110 + -0x10))(local_110 + -0x10);
          }
          if ((void *)local_138._24_8_ == (void *)0x0) {
            return (UObject *)0x0;
          }
          FMemory::Free((void *)local_138._24_8_);
          return (UObject *)0x0;
        }
      }
      goto LAB_147a6cd70;
    }
  }
  if (2 < (byte)LogNetTraffic._0_1_) {
    local_588 = (FName)((this->Actor).field0_0x0.DebugPtr)->_padding_;
    ::FName::ToString(&local_588,&local_3d8);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
    if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
    }
  }
  if ((*(byte *)(this->_padding_ + 0xfc) & 1) == 0) {
    if (1 < (byte)LogNetTraffic._0_1_) {
      local_580 = (FName)((this->Actor).field0_0x0.DebugPtr)->_padding_;
      ::FName::ToString(&local_580,&local_3c8);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
      if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
    UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
              (local_108,ContentBlockHeaderNoSubObjectClass);
    UE::Net::AddToChainResultPtr
              ((TPimplPtr<UE::Net::FNetResult,1> *)&param_1->_padding_,
               (TNetResult<ENetCloseResult> *)local_108);
    if (local_e0 != 0) {
      (**(code **)(local_e0 + -0x10))(local_e0 + -0x10);
    }
    if ((void *)local_108._24_8_ == (void *)0x0) {
      return (UObject *)0x0;
    }
    FMemory::Free((void *)local_108._24_8_);
    return (UObject *)0x0;
  }
LAB_147a6cd70:
  local_670 = (TObjectPtr<AActor>_u_0)(this->Actor).field0_0x0.DebugPtr;
  uVar11 = (**(code **)(param_1->_padding_ + 0x48))(param_1);
  if (0x11 < uVar11) {
    uVar8 = FBitReader::ReadBit((FBitReader *)param_1);
    if ((param_1->_padding_ & 0x200) != 0) {
      if ((byte)LogNetTraffic._0_1_ < 2) {
        return (UObject *)0x0;
      }
      local_578 = (FName)((this->Actor).field0_0x0.DebugPtr)->_padding_;
      ::FName::ToString(&local_578,&local_3b8);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
      if (local_3b8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return (UObject *)0x0;
      }
      FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
      return (UObject *)0x0;
    }
    if (uVar8 == '\0') {
      (**(code **)(param_1->_padding_ + 0x168))(param_1,&local_670);
      if ((param_1->_padding_ & 0x200) != 0) {
        if ((byte)LogNetTraffic._0_1_ < 2) {
          return (UObject *)0x0;
        }
        local_570 = (FName)((this->Actor).field0_0x0.DebugPtr)->_padding_;
        ::FName::ToString(&local_570,&local_3a8);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
        if (local_3a8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return (UObject *)0x0;
        }
        FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
        return (UObject *)0x0;
      }
      if (local_670.DebugPtr == (AActor *)0x0) {
        if (4 < (byte)LogNetTraffic._0_1_) {
          pAVar4 = (this->Actor).field0_0x0.DebugPtr;
          if (pAVar4 == (AActor *)0x0) {
            ::FString::FString(&local_610,L"None");
          }
          else {
            local_568 = (FName)pAVar4->_padding_;
            ::FName::ToString(&local_568,&local_610);
          }
          if (pUVar16 == (UClass *)0x0) {
            ::FString::FString(&local_620,L"None");
          }
          else {
            local_560 = (FName)pUVar16->_padding_;
            ::FName::ToString(&local_560,&local_620);
          }
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
          if (local_620.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_620.Data.AllocatorInstance.Data);
          }
          if (local_610.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_610.Data.AllocatorInstance.Data);
          }
        }
        local_670 = (TObjectPtr<AActor>_u_0)(this->Actor).field0_0x0.DebugPtr;
      }
    }
  }
  if ((pUVar16 == (UClass *)0x0) && ((*(byte *)(this->_padding_ + 0xfc) & 1) != 0)) {
    return (UObject *)0x0;
  }
  if ((local_687 != '\0') &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!IsServer",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                          ,0x13bf,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    pUVar17 = (UObject *)(*pcVar3)();
    return pUVar17;
  }
  if (4 < (byte)LogNetTraffic._0_1_) {
    local_558 = (FName)(local_670.DebugPtr)->_padding_;
    ::FName::ToString(&local_558,&local_388);
    local_550 = (FName)((this->Actor).field0_0x0.DebugPtr)->_padding_;
    ::FName::ToString(&local_550,&local_398);
    if (pUVar16 == (UClass *)0x0) {
      ::FString::FString(&local_600,L"None");
    }
    else {
      local_548 = (FName)pUVar16->_padding_;
      ::FName::ToString(&local_548,&local_600);
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
    if (local_600.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_600.Data.AllocatorInstance.Data);
    }
    if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_398.Data.AllocatorInstance.Data);
    }
    if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_388.Data.AllocatorInstance.Data);
    }
  }
  TVar18 = local_670;
  local_640 = 0;
  local_638 = 0;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)local_670.DebugPtr,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar13 = Z_Construct_UClass_UObject_NoRegister();
  CheckIsClassChildOf_Internal(pUVar13,pUVar16);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_d8,pUVar16);
  local_d8._8_8_ = TVar18;
  local_d8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_d8._56_8_ = (UPackage *)0x0;
  local_d8._16_4_ = 0;
  local_d8._20_4_ = 0;
  local_d8._24_4_ = RF_NoFlags;
  local_d8._40_8_ = (UObject *)0x0;
  local_d8[0x20] = false;
  TVar18.DebugPtr =
       (AActor *)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_d8);
  if (local_d8._64_8_ != 0) {
    plVar19 = (longlong *)(local_d8 + 0x50);
    if ((longlong *)local_d8._104_8_ != (longlong *)0x0) {
      plVar19 = (longlong *)local_d8._104_8_;
    }
    (**(code **)(*plVar19 + 0x10))();
  }
  if (TVar18.DebugPtr == (AActor *)0x0) {
    local_540 = (FName)((this->Actor).field0_0x0.DebugPtr)->_padding_;
    ::FName::ToString(&local_540,&local_378);
    if (pUVar16 == (UClass *)0x0) {
      ::FString::FString(&local_5f0,L"None");
    }
    else {
      local_538 = (FName)pUVar16->_padding_;
      ::FName::ToString(&local_538,&local_5f0);
    }
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("SubObj != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                        ,0x13c7,
                        L"UActorChannel::ReadContentBlockHeader: Subobject is NULL after instantiating. Class: %s, Actor %s"
                       );
    if (local_5f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5f0.Data.AllocatorInstance.Data);
    }
    if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.Data.AllocatorInstance.Data);
    }
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      pUVar17 = (UObject *)(*pcVar3)();
      return pUVar17;
    }
  }
  bVar10 = UObjectBaseUtility::IsIn
                     ((UObjectBaseUtility *)TVar18.DebugPtr,(UObject *)local_670.DebugPtr);
  if (!bVar10) {
    local_530 = (FName)(local_670.DebugPtr)->_padding_;
    ::FName::ToString(&local_530,&local_348);
    local_528 = (FName)((this->Actor).field0_0x0.DebugPtr)->_padding_;
    ::FName::ToString(&local_528,&local_358);
    local_520 = (FName)(TVar18.DebugPtr)->_padding_;
    ::FName::ToString(&local_520,&local_368);
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("SubObj->IsIn(ObjOuter)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                        ,0x13c8,
                        L"UActorChannel::ReadContentBlockHeader: Subobject is not in Outer. SubObject: %s, Actor: %s, Outer: %s"
                       );
    if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_368.Data.AllocatorInstance.Data);
    }
    if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_358.Data.AllocatorInstance.Data);
    }
    if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_348.Data.AllocatorInstance.Data);
    }
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      pUVar17 = (UObject *)(*pcVar3)();
      return pUVar17;
    }
  }
  if (TVar18.DebugPtr != (AActor *)0x0) {
    pUVar16 = Z_Construct_UClass_AActor_NoRegister();
    iVar12 = (int)pUVar16->_padding_;
    if ((iVar12 <= *(int *)((TVar18.DebugPtr)->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)((TVar18.DebugPtr)->_padding_ + 0x30) + (longlong)iVar12 * 8)
        == &pUVar16->_padding_)) {
      local_518 = (FName)((this->Actor).field0_0x0.DebugPtr)->_padding_;
      ::FName::ToString(&local_518,local_328);
      local_510 = (FName)(TVar18.DebugPtr)->_padding_;
      ::FName::ToString(&local_510,&local_338);
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Cast< AActor >(SubObj) == nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                          ,0x13c9,
                          L"UActorChannel::ReadContentBlockHeader: Subobject is an Actor. SubObject: %s, Actor: %s"
                         );
      if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_338.Data.AllocatorInstance.Data);
      }
      if (local_328[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_328[0].Data.AllocatorInstance.Data);
      }
      if (bVar10) {
        pcVar3 = (code *)swi(3);
        pUVar17 = (UObject *)(*pcVar3)();
        return pUVar17;
      }
    }
  }
  pFVar14 = TSharedPtr<FNetGUIDCache,1>::operator->
                      ((TSharedPtr<FNetGUIDCache,1> *)
                       (*(longlong *)(this->_padding_ + 0x58) + 0x1c8));
  FNetGUIDCache::RegisterNetGUID_Client
            (pFVar14,(FNetworkGUID *)&local_668,(UObject *)TVar18.DebugPtr);
  pAVar4 = (this->Actor).field0_0x0.DebugPtr;
  (**(code **)(pAVar4->_padding_ + 0x300))(pAVar4,TVar18.DebugPtr);
  pTVar2 = &this->CreateSubObjects;
  local_660.DebugPtr = TVar18.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar18.DebugPtr != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar18.DebugPtr);
  }
  pTVar5 = (TObjectPtr<AActor>_u_0 *)(pTVar2->AllocatorInstance).Data;
  if (((pTVar5 <= &local_660) && (&local_660 < pTVar5 + (this->CreateSubObjects).ArrayMax)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar10)) {
    pcVar3 = (code *)swi(3);
    pUVar17 = (UObject *)(*pcVar3)();
    return pUVar17;
  }
  iVar12 = (this->CreateSubObjects).ArrayNum;
  piVar1 = &(this->CreateSubObjects).ArrayMax;
  if (iVar12 == *piVar1) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->CreateSubObjects).ArrayNum = iVar12 + 1;
  ((TObjectPtr<AActor>_u_0 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 8))->DebugPtr =
       (AActor *)local_660;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_660.DebugPtr != (AActor *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_660.DebugPtr);
  }
  if ((local_668.ObjectId == 0) &&
     (local_508 = this,
     bVar10 = `UActorChannel::ReadContentBlockHeader'::__l467::<lambda_1>::operator()(&local_508),
     !bVar10)) {
    return (UObject *)(AActor *)TVar18;
  }
  FLLMScope::FLLMScope
            ((FLLMScope *)local_684,LLMTagDeclaration_GuidCache.UniqueName,false,None,Default,true);
  local_500 = LLMTagDeclaration_GuidCache.UniqueName;
  FMemScope::FMemScope(&local_4f8,&local_500,true);
  pFVar14 = TSharedPtr<FNetGUIDCache,1>::operator->
                      ((TSharedPtr<FNetGUIDCache,1> *)
                       (*(longlong *)(this->_padding_ + 0x58) + 0x1c8));
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::
  Emplace<FNetworkGUID_const_&>
            (&pFVar14->ImportedNetGuids,(FNetworkGUID *)local_4f0,(bool *)&local_668);
  FMemScope::~FMemScope(&local_4f8);
  FLLMScope::~FLLMScope((FLLMScope *)local_684);
  return (UObject *)(AActor *)TVar18;
}

// TestObjectRefSerialize @ 147a982d0

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
TestObjectRefSerialize(TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  UNetDriver *pUVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  size_t sVar7;
  UClass *pUVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  UObject *local_res10;
  FName local_res18 [2];
  wchar_t *local_158;
  undefined4 uStack_14c;
  wchar_t *local_148;
  undefined4 uStack_13c;
  FString local_138;
  wchar_t *local_128;
  int iStack_120;
  undefined4 uStack_11c;
  TStringView<wchar_t> local_118;
  TStringView<wchar_t> local_108;
  TStringView<wchar_t> local_f8;
  FBitWriter local_e8;
  
  if (param_2 == (UWorld *)0x0) {
    return;
  }
  if (param_1->ArrayNum < 1) {
    return;
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  uVar11 = 0;
  iVar13 = 0;
  if (*(int *)(pFVar1 + 8) == 0) {
    local_158 = L"";
LAB_147a9832a:
    sVar7 = wcslen(local_158);
    iVar13 = (int)sVar7;
  }
  else {
    local_158 = *(wchar_t **)pFVar1;
    if (local_158 != (wchar_t *)0x0) goto LAB_147a9832a;
  }
  pUVar8 = Z_Construct_UClass_UObject_NoRegister();
  local_118._12_4_ = uStack_14c;
  local_118.Size = iVar13;
  local_118.DataPtr = local_158;
  local_res10 = StaticFindObject(pUVar8,(UObject *)0x0,&local_118,None);
  uVar14 = 0;
  if (local_res10 != (UObject *)0x0) goto LAB_147a984a5;
  local_128 = (wchar_t *)0x0;
  iStack_120 = 0;
  if ((param_1->ArrayNum < 1) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (*(int *)(pFVar1 + 8) == 0) {
    local_148 = L"";
LAB_147a983d1:
    sVar7 = wcslen(local_148);
    uVar6 = (uint)sVar7;
  }
  else {
    local_148 = *(wchar_t **)pFVar1;
    uVar6 = uVar14;
    if (local_148 != (wchar_t *)0x0) goto LAB_147a983d1;
  }
  pUVar8 = Z_Construct_UClass_UObject_NoRegister();
  local_108._12_4_ = uStack_11c;
  local_108.Size = iStack_120;
  local_f8._12_4_ = uStack_13c;
  local_f8.Size = uVar6;
  local_108.DataPtr = local_128;
  local_f8.DataPtr = local_148;
  local_res10 = StaticLoadObject(pUVar8,(UObject *)0x0,&local_f8,&local_108,2,(UPackageMap *)0x0,
                                 true,(FLinkerInstancingContext *)0x0);
  if (local_res10 == (UObject *)0x0) {
    if ((byte)LogNet._0_1_ < 3) {
      return;
    }
    if ((param_1->ArrayNum < 1) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogNet);
    return;
  }
LAB_147a984a5:
  if (2 < (byte)LogNet._0_1_) {
    local_res18[0].ComparisonIndex.Value = *(uint *)&local_res10->field_0x18;
    local_res18[0].Number = *(uint *)&local_res10->field_0x1c;
    FName::ToString(local_res18,&local_138);
    UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogNet);
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
  }
  pUVar2 = (param_2->NetDriver).field0_0x0.DebugPtr;
  uVar12 = uVar11;
  if (0 < (pUVar2->ClientConnections).ArrayNum) {
    do {
      uVar10 = (uint)uVar11;
      uVar9 = ~uVar10 >> 0x1f;
      uVar6 = uVar14;
      if ((int)uVar10 < (pUVar2->ClientConnections).ArrayNum) {
        uVar6 = uVar9;
      }
      if ((uVar6 == 0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*(longlong *)((pUVar2->ClientConnections).AllocatorInstance.Data + uVar12) != 0) {
        uVar6 = uVar14;
        if ((int)uVar10 < (pUVar2->ClientConnections).ArrayNum) {
          uVar6 = uVar9;
        }
        if ((uVar6 == 0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (*(longlong *)
             (*(longlong *)((pUVar2->ClientConnections).AllocatorInstance.Data + uVar12) + 0x68) !=
            0) {
          FBitWriter::FBitWriter(&local_e8,0x2800,true);
          uVar6 = 0;
          if ((int)uVar10 < (pUVar2->ClientConnections).ArrayNum) {
            uVar6 = uVar9;
          }
          if ((uVar6 == 0) &&
             (bVar5 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          plVar3 = *(longlong **)
                    (*(longlong *)((pUVar2->ClientConnections).AllocatorInstance.Data + uVar12) +
                    0x68);
          pcVar4 = *(code **)(*plVar3 + 0x2b8);
          pUVar8 = Z_Construct_UClass_UObject_NoRegister();
          (*pcVar4)(plVar3,&local_e8,pUVar8,&local_res10,0);
          FBitWriter::~FBitWriter(&local_e8);
        }
      }
      uVar11 = (ulonglong)(uVar10 + 1);
      uVar12 = uVar12 + 8;
    } while ((int)(uVar10 + 1) < (pUVar2->ClientConnections).ArrayNum);
  }
  return;
}

// ValidateRetirementHistory @ 147a9fb00

void __cdecl ValidateRetirementHistory(FPropertyRetirement *param_1,UObject *param_2)

{
  FPacketIdRange *pFVar1;
  code *pcVar2;
  bool bVar3;
  FPropertyRetirement *pFVar4;
  int iStackX_c;
  FString local_28;
  FString local_18;
  
  pFVar4 = param_1->Next;
  iStackX_c = -1;
  if (pFVar4 != (FPropertyRetirement *)0x0) {
    while( true ) {
      if ((pFVar4->OutPacketIdRange).Last < (pFVar4->OutPacketIdRange).First) {
        if ((param_2 == (UObject *)0x0) || (*(longlong *)&param_2->field_0x10 == 0)) {
          FString::FString(&local_28,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)param_2,&local_28,(UObject *)0x0,None);
        }
        bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("Rec->OutPacketIdRange.Last >= Rec->OutPacketIdRange.First",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                           ,0x2e2,L"Invalid packet id range (Last < First). Object: %s");
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if ((pFVar4->OutPacketIdRange).First < iStackX_c) {
        if ((param_2 == (UObject *)0x0) || (*(longlong *)&param_2->field_0x10 == 0)) {
          FString::FString(&local_18,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)param_2,&local_18,(UObject *)0x0,None);
        }
        bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("Rec->OutPacketIdRange.First >= LastRange.Last",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                           ,0x2e3,L"Invalid packet id range (First < LastRange.Last). Object: %s");
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pFVar1 = &pFVar4->OutPacketIdRange;
      pFVar4 = pFVar4->Next;
      if (pFVar4 == (FPropertyRetirement *)0x0) break;
      iStackX_c = (*pFVar1).Last;
    }
  }
  return;
}

// Z_Construct_UClass_ACullDistanceVolume_NoRegister @ 147aa1ef0

UClass * __cdecl Z_Construct_UClass_ACullDistanceVolume_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ACullDistanceVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CullDistanceVolume",
               &Z_Registration_Info_UClass_ACullDistanceVolume.InnerSingleton,
               ACullDistanceVolume::StaticRegisterNativesACullDistanceVolume,0x310,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ACullDistanceVolume>,
               InternalVTableHelperCtorCaller<ACullDistanceVolume>,local_res8,AVolume::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ACullDistanceVolume.InnerSingleton;
}

// Z_Construct_UClass_UCurveBase_NoRegister @ 147aa1fb0

UClass * __cdecl Z_Construct_UClass_UCurveBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCurveBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CurveBase",&Z_Registration_Info_UClass_UCurveBase.InnerSingleton,
               UCurveBase::StaticRegisterNativesUCurveBase,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UCurveBase>,
               InternalVTableHelperCtorCaller<UCurveBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCurveBase.InnerSingleton;
}

// Z_Construct_UClass_UCurveLinearColorAtlas_NoRegister @ 147aa2060

UClass * __cdecl Z_Construct_UClass_UCurveLinearColorAtlas_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCurveLinearColorAtlas.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CurveLinearColorAtlas",
               &Z_Registration_Info_UClass_UCurveLinearColorAtlas.InnerSingleton,
               UCurveLinearColorAtlas::StaticRegisterNativesUCurveLinearColorAtlas,0x188,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UCurveLinearColorAtlas>,
               InternalVTableHelperCtorCaller<UCurveLinearColorAtlas>,local_res8,
               UTexture2D::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCurveLinearColorAtlas.InnerSingleton;
}

// Z_Construct_UClass_UDEPRECATED_CurveEdPresetCurve_NoRegister @ 147aa2120

UClass * __cdecl Z_Construct_UClass_UDEPRECATED_CurveEdPresetCurve_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_CurveEdPresetCurve.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CurveEdPresetCurve",
               &Z_Registration_Info_UClass_UDEPRECATED_CurveEdPresetCurve.InnerSingleton,
               UDEPRECATED_CurveEdPresetCurve::StaticRegisterNativesUDEPRECATED_CurveEdPresetCurve,
               0x28,8,CLASS_Intrinsic|CLASS_Deprecated,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_CurveEdPresetCurve>,
               InternalVTableHelperCtorCaller<UDEPRECATED_CurveEdPresetCurve>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_CurveEdPresetCurve.InnerSingleton;
}

// Z_Construct_UClass_UDamageType_NoRegister @ 147aa21d0

UClass * __cdecl Z_Construct_UClass_UDamageType_NoRegister(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UDamageType.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DamageType",
               &Z_Registration_Info_UClass_UDamageType.InnerSingleton,
               UDamageType::StaticRegisterNativesUDamageType,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDamageType>,
               InternalVTableHelperCtorCaller<UDamageType>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDamageType.InnerSingleton;
}

// Z_Construct_UClass_UDataDrivenCVarEngineSubsystem_NoRegister @ 147aa21e0

UClass * __cdecl Z_Construct_UClass_UDataDrivenCVarEngineSubsystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataDrivenCVarEngineSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DataDrivenCVarEngineSubsystem",
               &Z_Registration_Info_UClass_UDataDrivenCVarEngineSubsystem.InnerSingleton,
               UDataDrivenCVarEngineSubsystem::StaticRegisterNativesUDataDrivenCVarEngineSubsystem,
               0x48,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDataDrivenCVarEngineSubsystem>,
               InternalVTableHelperCtorCaller<UDataDrivenCVarEngineSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataDrivenCVarEngineSubsystem.InnerSingleton;
}

// Z_Construct_UClass_UDataDrivenConsoleVariableSettings_NoRegister @ 147aa22a0

UClass * __cdecl Z_Construct_UClass_UDataDrivenConsoleVariableSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataDrivenConsoleVariableSettings.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DataDrivenConsoleVariableSettings",
               &Z_Registration_Info_UClass_UDataDrivenConsoleVariableSettings.InnerSingleton,
               UDataDrivenConsoleVariableSettings::
               StaticRegisterNativesUDataDrivenConsoleVariableSettings,0x78,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UDataDrivenConsoleVariableSettings>,
               InternalVTableHelperCtorCaller<UDataDrivenConsoleVariableSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataDrivenConsoleVariableSettings.InnerSingleton;
}

// Z_Construct_UClass_UGarbageCollectionSettings_NoRegister @ 147aa2360

UClass * __cdecl Z_Construct_UClass_UGarbageCollectionSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGarbageCollectionSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"GarbageCollectionSettings",
               &Z_Registration_Info_UClass_UGarbageCollectionSettings.InnerSingleton,
               UGarbageCollectionSettings::StaticRegisterNativesUGarbageCollectionSettings,0x58,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UGarbageCollectionSettings>,
               InternalVTableHelperCtorCaller<UGarbageCollectionSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGarbageCollectionSettings.InnerSingleton;
}

// Z_Construct_UClass_UPrimaryDataAsset_NoRegister @ 147aa2420

UClass * __cdecl Z_Construct_UClass_UPrimaryDataAsset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPrimaryDataAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PrimaryDataAsset",
               &Z_Registration_Info_UClass_UPrimaryDataAsset.InnerSingleton,
               UPrimaryDataAsset::StaticRegisterNativesUPrimaryDataAsset,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPrimaryDataAsset>,
               InternalVTableHelperCtorCaller<UPrimaryDataAsset>,local_res8,UDataAsset::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPrimaryDataAsset.InnerSingleton;
}

// Z_Construct_UClass_UStreamingSettings_NoRegister @ 147aa24e0

UClass * __cdecl Z_Construct_UClass_UStreamingSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStreamingSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"StreamingSettings",
               &Z_Registration_Info_UClass_UStreamingSettings.InnerSingleton,
               UStreamingSettings::StaticRegisterNativesUStreamingSettings,0x70,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UStreamingSettings>,
               InternalVTableHelperCtorCaller<UStreamingSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStreamingSettings.InnerSingleton;
}

// Z_Construct_UEnum_Engine_ECurveTableMode @ 147aa25a0

UEnum * __cdecl Z_Construct_UEnum_Engine_ECurveTableMode(void)

{
  if (Z_Registration_Info_UEnum_ECurveTableMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ECurveTableMode.InnerSingleton,
               &Z_Construct_UEnum_Engine_ECurveTableMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ECurveTableMode.InnerSingleton;
}

// Z_Construct_UEnum_Engine_ERichCurveCompressionFormat @ 147aa25e0

UEnum * __cdecl Z_Construct_UEnum_Engine_ERichCurveCompressionFormat(void)

{
  if (Z_Registration_Info_UEnum_ERichCurveCompressionFormat.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERichCurveCompressionFormat.InnerSingleton,
               &Z_Construct_UEnum_Engine_ERichCurveCompressionFormat_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERichCurveCompressionFormat.InnerSingleton;
}

// Z_Construct_UEnum_Engine_ERichCurveKeyTimeCompressionFormat @ 147aa2620

UEnum * __cdecl Z_Construct_UEnum_Engine_ERichCurveKeyTimeCompressionFormat(void)

{
  if (Z_Registration_Info_UEnum_ERichCurveKeyTimeCompressionFormat.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERichCurveKeyTimeCompressionFormat.InnerSingleton,
               &Z_Construct_UEnum_Engine_ERichCurveKeyTimeCompressionFormat_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERichCurveKeyTimeCompressionFormat.InnerSingleton;
}

// Z_Construct_UScriptStruct_FCompressedRichCurve @ 147aa2660

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCompressedRichCurve(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCompressedRichCurve.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCompressedRichCurve.InnerSingleton,
               &Z_Construct_UScriptStruct_FCompressedRichCurve_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCompressedRichCurve.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FCompressedRichCurve.InnerSingleton;
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

// Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments @ 147aa26e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCurveAtlasColorAdjustments.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCurveAtlasColorAdjustments.InnerSingleton,
               &Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCurveAtlasColorAdjustments.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCurveAtlasColorAdjustments.InnerSingleton;
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

// Z_Construct_UScriptStruct_FCurveTableRowHandle @ 147aa2760

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCurveTableRowHandle(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCurveTableRowHandle.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCurveTableRowHandle.InnerSingleton,
               &Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCurveTableRowHandle.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FCurveTableRowHandle.InnerSingleton;
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

// Z_Construct_UScriptStruct_FIntegralCurve @ 147aa27e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIntegralCurve(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIntegralCurve.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIntegralCurve.InnerSingleton,
               &Z_Construct_UScriptStruct_FIntegralCurve_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIntegralCurve.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIntegralCurve.InnerSingleton;
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

// Z_Construct_UScriptStruct_FKeyHandleLookupTable @ 147aa2860

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FKeyHandleLookupTable(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FKeyHandleLookupTable.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FKeyHandleLookupTable.InnerSingleton,
               &Z_Construct_UScriptStruct_FKeyHandleLookupTable_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FKeyHandleLookupTable.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FKeyHandleLookupTable.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNameCurve @ 147aa28e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNameCurve(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNameCurve.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNameCurve.InnerSingleton,
               &Z_Construct_UScriptStruct_FNameCurve_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNameCurve.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNameCurve.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRuntimeCurveLinearColor @ 147aa2960

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRuntimeCurveLinearColor(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRuntimeCurveLinearColor.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRuntimeCurveLinearColor.InnerSingleton,
               &Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRuntimeCurveLinearColor.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRuntimeCurveLinearColor.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRuntimeFloatCurve @ 147aa29e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRuntimeFloatCurve(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRuntimeFloatCurve.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRuntimeFloatCurve.InnerSingleton,
               &Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRuntimeFloatCurve.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRuntimeFloatCurve.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRuntimeVectorCurve @ 147aa2a60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRuntimeVectorCurve(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRuntimeVectorCurve.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRuntimeVectorCurve.InnerSingleton,
               &Z_Construct_UScriptStruct_FRuntimeVectorCurve_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRuntimeVectorCurve.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FRuntimeVectorCurve.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSimpleCurve @ 147aa2ae0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSimpleCurve(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSimpleCurve.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSimpleCurve.InnerSingleton,
               &Z_Construct_UScriptStruct_FSimpleCurve_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSimpleCurve.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSimpleCurve.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSpline @ 147aa2b60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSpline(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSpline.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSpline.InnerSingleton,
               &Z_Construct_UScriptStruct_FSpline_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSpline.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSpline.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStringCurve @ 147aa2be0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStringCurve(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStringCurve.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStringCurve.InnerSingleton,
               &Z_Construct_UScriptStruct_FStringCurve_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStringCurve.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStringCurve.InnerSingleton;
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

// ActiveTrackers'' @ 1503ec310

void __cdecl `dynamic_atexit_destructor_for_'FScopedRPCTimingTracker::ActiveTrackers__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FScopedRPCTimingTracker::ActiveTrackers.AllocatorInstance.Data;
  if (FScopedRPCTimingTracker::ActiveTrackers.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FScopedRPCTimingTracker::ActiveTrackers.AllocatorInstance.Data !=
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

// ClassNetCacheSuffix'' @ 1503ec330

void __cdecl `dynamic_atexit_destructor_for_'UActorChannel::ClassNetCacheSuffix__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UActorChannel::ClassNetCacheSuffix.Data.AllocatorInstance.Data;
  if (UActorChannel::ClassNetCacheSuffix.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UActorChannel::ClassNetCacheSuffix.Data.AllocatorInstance.Data !=
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

// CriticalSection'' @ 1503ec350

void __cdecl
`dynamic_atexit_destructor_for_'`anonymous_namespace'::FScopedCurveTableChange::CriticalSection__
          (void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503ec357. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::FScopedCurveTableChange::CriticalSection);
  return;
}

// Name'' @ 1503ec370

void __cdecl
`dynamic_atexit_destructor_for_'UE::Geometry::Spline::TSplineValueTypeTraits<int>::Name__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UE::Geometry::Spline::TSplineValueTypeTraits<int>::Name.Data.AllocatorInstance.Data;
  if (UE::Geometry::Spline::TSplineValueTypeTraits<int>::Name.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UE::Geometry::Spline::TSplineValueTypeTraits<int>::Name.Data.AllocatorInstance.Data !=
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

// Name'' @ 1503ec390

void __cdecl
`dynamic_atexit_destructor_for_'UE::Geometry::Spline::TSplineValueTypeTraits<float>::Name__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UE::Geometry::Spline::TSplineValueTypeTraits<float>::Name.Data.AllocatorInstance.Data
  ;
  if (UE::Geometry::Spline::TSplineValueTypeTraits<float>::Name.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UE::Geometry::Spline::TSplineValueTypeTraits<float>::Name.Data.AllocatorInstance.Data !=
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

// Name'' @ 1503ec3b0

void __cdecl
`dynamic_atexit_destructor_for_'UE::Geometry::Spline::TSplineValueTypeTraits<double>::Name__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UE::Geometry::Spline::TSplineValueTypeTraits<double>::Name.Data.AllocatorInstance.
               Data;
  if (UE::Geometry::Spline::TSplineValueTypeTraits<double>::Name.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UE::Geometry::Spline::TSplineValueTypeTraits<double>::Name.Data.AllocatorInstance.Data !=
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

// Name'' @ 1503ec3d0

void __cdecl
`dynamic_atexit_destructor_for_'UE::Geometry::Spline::
TSplineValueTypeTraits<UE::Math::TQuat<double>_>::Name__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UE::Geometry::Spline::TSplineValueTypeTraits<UE::Math::TQuat<double>_>::Name.Data.
               AllocatorInstance.Data;
  if (UE::Geometry::Spline::TSplineValueTypeTraits<UE::Math::TQuat<double>_>::Name.Data.
      AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (UE::Geometry::Spline::TSplineValueTypeTraits<UE::Math::TQuat<double>_>::Name.Data.
      AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// Name'' @ 1503ec3f0

void __cdecl
`dynamic_atexit_destructor_for_'UE::Geometry::Spline::
TSplineValueTypeTraits<UE::Math::TRotator<double>_>::Name__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UE::Geometry::Spline::TSplineValueTypeTraits<UE::Math::TRotator<double>_>::Name.Data.
               AllocatorInstance.Data;
  if (UE::Geometry::Spline::TSplineValueTypeTraits<UE::Math::TRotator<double>_>::Name.Data.
      AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (UE::Geometry::Spline::TSplineValueTypeTraits<UE::Math::TRotator<double>_>::Name.Data.
      AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// Name'' @ 1503ec410

void __cdecl
`dynamic_atexit_destructor_for_'UE::Geometry::Spline::
TSplineValueTypeTraits<UE::Math::TTransform<double>_>::Name__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UE::Geometry::Spline::TSplineValueTypeTraits<UE::Math::TTransform<double>_>::Name.
               Data.AllocatorInstance.Data;
  if (UE::Geometry::Spline::TSplineValueTypeTraits<UE::Math::TTransform<double>_>::Name.Data.
      AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (UE::Geometry::Spline::TSplineValueTypeTraits<UE::Math::TTransform<double>_>::Name.Data.
      AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// Name'' @ 1503ec430

void __cdecl
`dynamic_atexit_destructor_for_'UE::Geometry::Spline::
TSplineValueTypeTraits<UE::Math::TVector2<double>_>::Name__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UE::Geometry::Spline::TSplineValueTypeTraits<UE::Math::TVector2<double>_>::Name.Data.
               AllocatorInstance.Data;
  if (UE::Geometry::Spline::TSplineValueTypeTraits<UE::Math::TVector2<double>_>::Name.Data.
      AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (UE::Geometry::Spline::TSplineValueTypeTraits<UE::Math::TVector2<double>_>::Name.Data.
      AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// Name'' @ 1503ec450

void __cdecl
`dynamic_atexit_destructor_for_'UE::Geometry::Spline::
TSplineValueTypeTraits<UE::Math::TVector4<double>_>::Name__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UE::Geometry::Spline::TSplineValueTypeTraits<UE::Math::TVector4<double>_>::Name.Data.
               AllocatorInstance.Data;
  if (UE::Geometry::Spline::TSplineValueTypeTraits<UE::Math::TVector4<double>_>::Name.Data.
      AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (UE::Geometry::Spline::TSplineValueTypeTraits<UE::Math::TVector4<double>_>::Name.Data.
      AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// Name'' @ 1503ec470

void __cdecl
`dynamic_atexit_destructor_for_'UE::Geometry::Spline::
TSplineValueTypeTraits<UE::Math::TVector<float>_>::Name__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UE::Geometry::Spline::TSplineValueTypeTraits<UE::Math::TVector<float>_>::Name.Data.
               AllocatorInstance.Data;
  if (UE::Geometry::Spline::TSplineValueTypeTraits<UE::Math::TVector<float>_>::Name.Data.
      AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (UE::Geometry::Spline::TSplineValueTypeTraits<UE::Math::TVector<float>_>::Name.Data.
      AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// Name'' @ 1503ec490

void __cdecl
`dynamic_atexit_destructor_for_'UE::Geometry::Spline::
TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UE::Geometry::Spline::TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name.Data.
               AllocatorInstance.Data;
  if (UE::Geometry::Spline::TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name.Data.
      AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (UE::Geometry::Spline::TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name.Data.
      AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// Name'' @ 1503ec4b0

void __cdecl
`dynamic_atexit_destructor_for_'UE::Geometry::Spline::TSplineValueTypeTraits<FColor>::Name__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UE::Geometry::Spline::TSplineValueTypeTraits<FColor>::Name.Data.AllocatorInstance.
               Data;
  if (UE::Geometry::Spline::TSplineValueTypeTraits<FColor>::Name.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UE::Geometry::Spline::TSplineValueTypeTraits<FColor>::Name.Data.AllocatorInstance.Data !=
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

// Name'' @ 1503ec4d0

void __cdecl
`dynamic_atexit_destructor_for_'UE::Geometry::Spline::TSplineValueTypeTraits<FLinearColor>::Name__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UE::Geometry::Spline::TSplineValueTypeTraits<FLinearColor>::Name.Data.
               AllocatorInstance.Data;
  if (UE::Geometry::Spline::TSplineValueTypeTraits<FLinearColor>::Name.Data.AllocatorInstance.Data
      == (FScriptContainerElement *)0x0) {
    return;
  }
  if (UE::Geometry::Spline::TSplineValueTypeTraits<FLinearColor>::Name.Data.AllocatorInstance.Data
      != (FScriptContainerElement *)0x0) {
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

// Name'' @ 1503ec4f0

void __cdecl
`dynamic_atexit_destructor_for_'UE::Geometry::Spline::TSplineValueTypeTraits<FName>::Name__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UE::Geometry::Spline::TSplineValueTypeTraits<FName>::Name.Data.AllocatorInstance.Data
  ;
  if (UE::Geometry::Spline::TSplineValueTypeTraits<FName>::Name.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UE::Geometry::Spline::TSplineValueTypeTraits<FName>::Name.Data.AllocatorInstance.Data !=
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

// Name'' @ 1503ec510

void __cdecl
`dynamic_atexit_destructor_for_'UE::Geometry::Spline::TSplineValueTypeTraits<FString>::Name__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UE::Geometry::Spline::TSplineValueTypeTraits<FString>::Name.Data.AllocatorInstance.
               Data;
  if (UE::Geometry::Spline::TSplineValueTypeTraits<FString>::Name.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UE::Geometry::Spline::TSplineValueTypeTraits<FString>::Name.Data.AllocatorInstance.Data !=
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

// Name'' @ 1503ec530

void __cdecl
`dynamic_atexit_destructor_for_'UE::Geometry::Spline::TSplineValueTypeTraits<FText>::Name__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UE::Geometry::Spline::TSplineValueTypeTraits<FText>::Name.Data.AllocatorInstance.Data
  ;
  if (UE::Geometry::Spline::TSplineValueTypeTraits<FText>::Name.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UE::Geometry::Spline::TSplineValueTypeTraits<FText>::Name.Data.AllocatorInstance.Data !=
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

// Name'' @ 1503ec550

void __cdecl
`dynamic_atexit_destructor_for_'UE::Geometry::Spline::TSplineValueTypeTraits<bool>::Name__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UE::Geometry::Spline::TSplineValueTypeTraits<bool>::Name.Data.AllocatorInstance.Data;
  if (UE::Geometry::Spline::TSplineValueTypeTraits<bool>::Name.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UE::Geometry::Spline::TSplineValueTypeTraits<bool>::Name.Data.AllocatorInstance.Data !=
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

// PositionCurve'' @ 1503ec570

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

// RotationCurve'' @ 1503ec590

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

// ScaleCurve'' @ 1503ec5b0

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

// ScopeCount'' @ 1503ec5d0

void __cdecl
`dynamic_atexit_destructor_for_'`anonymous_namespace'::FScopedCurveTableChange::ScopeCount__(void)

{
  ::FScopedCurveTableChange::ScopeCount._72_4_ = 0;
  if (::FScopedCurveTableChange::ScopeCount._64_8_ != 0) {
    FMemory::Free((void *)::FScopedCurveTableChange::ScopeCount._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UCurveTable_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UCurveTable_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UCurveTable_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&::FScopedCurveTableChange::ScopeCount);
  return;
}

// ShaderTypeRegistration'' @ 1503ec610

void __cdecl
`dynamic_atexit_destructor_for_'FCubemapTexturePropertiesPS::ShaderTypeRegistration__(void)

{
  return;
}

// ShaderTypeRegistration'' @ 1503ec620

void __cdecl
`dynamic_atexit_destructor_for_'FCubemapTexturePropertiesVS::ShaderTypeRegistration__(void)

{
  return;
}

// ShaderTypeRegistration'' @ 1503ec630

void __cdecl `dynamic_atexit_destructor_for_'FIESLightProfilePS::ShaderTypeRegistration__(void)

{
  return;
}

// StaticResource'' @ 1503ec640

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

// StaticResource'' @ 1503ec6c0

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

// TypeName'' @ 1503ec740

void __cdecl
`dynamic_atexit_destructor_for_'UE::Geometry::Spline::TSplineInterface<float>::TypeName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UE::Geometry::Spline::TSplineInterface<float>::TypeName.Data.AllocatorInstance.Data;
  if (UE::Geometry::Spline::TSplineInterface<float>::TypeName.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UE::Geometry::Spline::TSplineInterface<float>::TypeName.Data.AllocatorInstance.Data !=
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

// TypeName'' @ 1503ec760

void __cdecl
`dynamic_atexit_destructor_for_'UE::Geometry::Spline::TSplineInterface<UE::Math::TQuat<double>_>::
TypeName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UE::Geometry::Spline::TSplineInterface<UE::Math::TQuat<double>_>::TypeName.Data.
               AllocatorInstance.Data;
  if (UE::Geometry::Spline::TSplineInterface<UE::Math::TQuat<double>_>::TypeName.Data.
      AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (UE::Geometry::Spline::TSplineInterface<UE::Math::TQuat<double>_>::TypeName.Data.
      AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// TypeName'' @ 1503ec780

void __cdecl
`dynamic_atexit_destructor_for_'UE::Geometry::Spline::TSplineInterface<UE::Math::TVector<double>_>::
TypeName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UE::Geometry::Spline::TSplineInterface<UE::Math::TVector<double>_>::TypeName.Data.
               AllocatorInstance.Data;
  if (UE::Geometry::Spline::TSplineInterface<UE::Math::TVector<double>_>::TypeName.Data.
      AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (UE::Geometry::Spline::TSplineInterface<UE::Math::TVector<double>_>::TypeName.Data.
      AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'CVarAllowLevelRequestsWhileAsyncLoadingInMatch'' @ 1503ec7a0

void __cdecl _dynamic_atexit_destructor_for__CVarAllowLevelRequestsWhileAsyncLoadingInMatch__(void)

{
  CVarAllowLevelRequestsWhileAsyncLoadingInMatch._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAllowLevelRequestsWhileAsyncLoadingInMatch);
  return;
}

// `dynamic_atexit_destructor_for_'CVarApproximateTangents'' @ 1503ec7c0

void __cdecl UE::Spline::_dynamic_atexit_destructor_for__CVarApproximateTangents__(void)

{
  CVarApproximateTangents._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarApproximateTangents);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAsyncLoadingTimeLimit'' @ 1503ec7e0

void __cdecl _dynamic_atexit_destructor_for__CVarAsyncLoadingTimeLimit__(void)

{
  CVarAsyncLoadingTimeLimit._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAsyncLoadingTimeLimit);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAsyncLoadingUseFullTimeLimit'' @ 1503ec800

void __cdecl _dynamic_atexit_destructor_for__CVarAsyncLoadingUseFullTimeLimit__(void)

{
  CVarAsyncLoadingUseFullTimeLimit._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAsyncLoadingUseFullTimeLimit);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCompareSubObjectsReplicated'' @ 1503ec820

void __cdecl UE::Net::_dynamic_atexit_destructor_for__CVarCompareSubObjectsReplicated__(void)

{
  CVarCompareSubObjectsReplicated._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCompareSubObjectsReplicated);
  return;
}

// `dynamic_atexit_destructor_for_'CVarContinuouslyIncrementalGCWhileLevelsPendingPurge'' @ 1503ec840

void __cdecl
_dynamic_atexit_destructor_for__CVarContinuouslyIncrementalGCWhileLevelsPendingPurge__(void)

{
  CVarContinuouslyIncrementalGCWhileLevelsPendingPurge._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarContinuouslyIncrementalGCWhileLevelsPendingPurge);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCurveTableRemoveRedundantKeys'' @ 1503ec860

void __cdecl _dynamic_atexit_destructor_for__CVarCurveTableRemoveRedundantKeys__(void)

{
  CVarCurveTableRemoveRedundantKeys._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCurveTableRemoveRedundantKeys);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDelayUnmappedRPCs'' @ 1503ec880

void __cdecl _dynamic_atexit_destructor_for__CVarDelayUnmappedRPCs__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDelayUnmappedRPCs);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDetectDeprecatedReplicateSubObjects'' @ 1503ec8a0

void __cdecl
UE::Net::_dynamic_atexit_destructor_for__CVarDetectDeprecatedReplicateSubObjects__(void)

{
  CVarDetectDeprecatedReplicateSubObjects._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarDetectDeprecatedReplicateSubObjects);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDormancyHysteresis'' @ 1503ec8c0

void __cdecl _dynamic_atexit_destructor_for__CVarDormancyHysteresis__(void)

{
  CVarDormancyHysteresis._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDormancyHysteresis);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableNetInitialSubObjects'' @ 1503ec8e0

void __cdecl UE::Net::_dynamic_atexit_destructor_for__CVarEnableNetInitialSubObjects__(void)

{
  CVarEnableNetInitialSubObjects._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableNetInitialSubObjects);
  return;
}

// `dynamic_atexit_destructor_for_'CVarFallbackFindNearest'' @ 1503ec900

void __cdecl UE::Spline::_dynamic_atexit_destructor_for__CVarFallbackFindNearest__(void)

{
  CVarFallbackFindNearest._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarFallbackFindNearest);
  return;
}

// `dynamic_atexit_destructor_for_'CVarForceGCAfterLevelStreamedOut'' @ 1503ec920

void __cdecl _dynamic_atexit_destructor_for__CVarForceGCAfterLevelStreamedOut__(void)

{
  CVarForceGCAfterLevelStreamedOut._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarForceGCAfterLevelStreamedOut);
  return;
}

// `dynamic_atexit_destructor_for_'CVarForceRouteActorInitializeNextFrame'' @ 1503ec940

void __cdecl _dynamic_atexit_destructor_for__CVarForceRouteActorInitializeNextFrame__(void)

{
  CVarForceRouteActorInitializeNextFrame._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarForceRouteActorInitializeNextFrame);
  return;
}

// `dynamic_atexit_destructor_for_'CVarForceVerifyLevelsGotRemovedByGC'' @ 1503ec960

void __cdecl _dynamic_atexit_destructor_for__CVarForceVerifyLevelsGotRemovedByGC__(void)

{
  CVarForceVerifyLevelsGotRemovedByGC._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarForceVerifyLevelsGotRemovedByGC);
  return;
}

// `dynamic_atexit_destructor_for_'CVarImmediatelyUpdateLegacyCurves'' @ 1503ec980

void __cdecl UE::Spline::_dynamic_atexit_destructor_for__CVarImmediatelyUpdateLegacyCurves__(void)

{
  CVarImmediatelyUpdateLegacyCurves._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarImmediatelyUpdateLegacyCurves);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLevelStreamingActorsUpdateTimeLimit'' @ 1503ec9a0

void __cdecl _dynamic_atexit_destructor_for__CVarLevelStreamingActorsUpdateTimeLimit__(void)

{
  CVarLevelStreamingActorsUpdateTimeLimit._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarLevelStreamingActorsUpdateTimeLimit);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLevelStreamingAddPrimitiveGranularity'' @ 1503ec9c0

void __cdecl _dynamic_atexit_destructor_for__CVarLevelStreamingAddPrimitiveGranularity__(void)

{
  CVarLevelStreamingAddPrimitiveGranularity._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarLevelStreamingAddPrimitiveGranularity);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLevelStreamingComponentsRegistrationGranularity'' @ 1503ec9e0

void __cdecl
_dynamic_atexit_destructor_for__CVarLevelStreamingComponentsRegistrationGranularity__(void)

{
  CVarLevelStreamingComponentsRegistrationGranularity._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarLevelStreamingComponentsRegistrationGranularity);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLevelStreamingComponentsUnregistrationGranularity'' @ 1503eca00

void __cdecl
_dynamic_atexit_destructor_for__CVarLevelStreamingComponentsUnregistrationGranularity__(void)

{
  CVarLevelStreamingComponentsUnregistrationGranularity._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarLevelStreamingComponentsUnregistrationGranularity);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLevelStreamingLowMemoryPendingPurgeCount'' @ 1503eca20

void __cdecl _dynamic_atexit_destructor_for__CVarLevelStreamingLowMemoryPendingPurgeCount__(void)

{
  CVarLevelStreamingLowMemoryPendingPurgeCount._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarLevelStreamingLowMemoryPendingPurgeCount);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLevelStreamingRouteActorEndPlayForRemoveFromWorldGranularity'' @ 1503eca40

void __cdecl
_dynamic_atexit_destructor_for__CVarLevelStreamingRouteActorEndPlayForRemoveFromWorldGranularity__
          (void)

{
  CVarLevelStreamingRouteActorEndPlayForRemoveFromWorldGranularity._0_8_ =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarLevelStreamingRouteActorEndPlayForRemoveFromWorldGranularity
            );
  return;
}

// `dynamic_atexit_destructor_for_'CVarLevelStreamingRouteActorInitializationGranularity'' @ 1503eca60

void __cdecl
_dynamic_atexit_destructor_for__CVarLevelStreamingRouteActorInitializationGranularity__(void)

{
  CVarLevelStreamingRouteActorInitializationGranularity._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarLevelStreamingRouteActorInitializationGranularity);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLevelStreamingUnregisterComponentsTimeLimit'' @ 1503eca80

void __cdecl _dynamic_atexit_destructor_for__CVarLevelStreamingUnregisterComponentsTimeLimit__(void)

{
  CVarLevelStreamingUnregisterComponentsTimeLimit._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarLevelStreamingUnregisterComponentsTimeLimit);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLogAllSubObjectComparisonErrors'' @ 1503ecaa0

void __cdecl UE::Net::_dynamic_atexit_destructor_for__CVarLogAllSubObjectComparisonErrors__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarLogAllSubObjectComparisonErrors);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaxLevelRequestsAtOnceWhileInMatch'' @ 1503ecac0

void __cdecl _dynamic_atexit_destructor_for__CVarMaxLevelRequestsAtOnceWhileInMatch__(void)

{
  CVarMaxLevelRequestsAtOnceWhileInMatch._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarMaxLevelRequestsAtOnceWhileInMatch);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaxRPCPerNetUpdate'' @ 1503ecae0

void __cdecl _dynamic_atexit_destructor_for__CVarMaxRPCPerNetUpdate__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMaxRPCPerNetUpdate);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetInstantReplayProcessQueuedBunchesMillisecondLimit'' @ 1503ecb00

void __cdecl
_dynamic_atexit_destructor_for__CVarNetInstantReplayProcessQueuedBunchesMillisecondLimit__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNetInstantReplayProcessQueuedBunchesMillisecondLimit);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetMaxConstructedPartialBunchSizeBytes'' @ 1503ecb20

void __cdecl _dynamic_atexit_destructor_for__CVarNetMaxConstructedPartialBunchSizeBytes__(void)

{
  CVarNetMaxConstructedPartialBunchSizeBytes._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNetMaxConstructedPartialBunchSizeBytes);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetPartialBunchReliableThreshold'' @ 1503ecb40

void __cdecl _dynamic_atexit_destructor_for__CVarNetPartialBunchReliableThreshold__(void)

{
  CVarNetPartialBunchReliableThreshold._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNetPartialBunchReliableThreshold);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetProcessQueuedBunchesMillisecondLimit'' @ 1503ecb60

void __cdecl _dynamic_atexit_destructor_for__CVarNetProcessQueuedBunchesMillisecondLimit__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNetProcessQueuedBunchesMillisecondLimit);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetPushModelValidateSkipUpdate'' @ 1503ecb80

void __cdecl UE::Net::_dynamic_atexit_destructor_for__CVarNetPushModelValidateSkipUpdate__(void)

{
  CVarNetPushModelValidateSkipUpdate._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNetPushModelValidateSkipUpdate)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetQueuedBunchTimeFailsafeSeconds'' @ 1503ecba0

void __cdecl UE::Net::_dynamic_atexit_destructor_for__CVarNetQueuedBunchTimeFailsafeSeconds__(void)

{
  CVarNetQueuedBunchTimeFailsafeSeconds._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNetQueuedBunchTimeFailsafeSeconds);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetRPCDebug'' @ 1503ecbc0

void __cdecl _dynamic_atexit_destructor_for__CVarNetRPCDebug__(void)

{
  CVarNetRPCDebug._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNetRPCDebug);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetReliableDebug'' @ 1503ecbe0

void __cdecl _dynamic_atexit_destructor_for__CVarNetReliableDebug__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNetReliableDebug);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetReplicateOnlyBeginPlay'' @ 1503ecc00

void __cdecl UE::Net::_dynamic_atexit_destructor_for__CVarNetReplicateOnlyBeginPlay__(void)

{
  CVarNetReplicateOnlyBeginPlay._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNetReplicateOnlyBeginPlay);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetReplicationDebugProperty'' @ 1503ecc20

void __cdecl _dynamic_atexit_destructor_for__CVarNetReplicationDebugProperty__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNetReplicationDebugProperty);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetSkipReplicatorForDestructionInfos'' @ 1503ecc40

void __cdecl _dynamic_atexit_destructor_for__CVarNetSkipReplicatorForDestructionInfos__(void)

{
  CVarNetSkipReplicatorForDestructionInfos._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNetSkipReplicatorForDestructionInfos);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPriorityAsyncLoadingExtraTime'' @ 1503ecc60

void __cdecl _dynamic_atexit_destructor_for__CVarPriorityAsyncLoadingExtraTime__(void)

{
  CVarPriorityAsyncLoadingExtraTime._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPriorityAsyncLoadingExtraTime);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPriorityLevelStreamingActorsUpdateExtraTime'' @ 1503ecc80

void __cdecl _dynamic_atexit_destructor_for__CVarPriorityLevelStreamingActorsUpdateExtraTime__(void)

{
  CVarPriorityLevelStreamingActorsUpdateExtraTime._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarPriorityLevelStreamingActorsUpdateExtraTime);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPushModelSkipUndirtiedFastArrays'' @ 1503ecca0

void __cdecl _dynamic_atexit_destructor_for__CVarPushModelSkipUndirtiedFastArrays__(void)

{
  CVarPushModelSkipUndirtiedFastArrays._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarPushModelSkipUndirtiedFastArrays);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPushModelSkipUndirtiedReplicators'' @ 1503eccc0

void __cdecl _dynamic_atexit_destructor_for__CVarPushModelSkipUndirtiedReplicators__(void)

{
  CVarPushModelSkipUndirtiedReplicators._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarPushModelSkipUndirtiedReplicators);
  return;
}

// `dynamic_atexit_destructor_for_'CVarQueueRpcsForTransactions'' @ 1503ecce0

void __cdecl _dynamic_atexit_destructor_for__CVarQueueRpcsForTransactions__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarQueueRpcsForTransactions);
  return;
}

// `dynamic_atexit_destructor_for_'CVarQueuedBunchTimeoutSeconds'' @ 1503ecd00

void __cdecl UE::Net::_dynamic_atexit_destructor_for__CVarQueuedBunchTimeoutSeconds__(void)

{
  CVarQueuedBunchTimeoutSeconds._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarQueuedBunchTimeoutSeconds);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSkipDestroyNetStartupActorsOnChannelCloseDueToLevelUnloaded'' @ 1503ecd20

void __cdecl
UE::Net::
_dynamic_atexit_destructor_for__CVarSkipDestroyNetStartupActorsOnChannelCloseDueToLevelUnloaded__
          (void)

{
  CVarSkipDestroyNetStartupActorsOnChannelCloseDueToLevelUnloaded._0_8_ =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSkipDestroyNetStartupActorsOnChannelCloseDueToLevelUnloaded)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarSplineImplementation'' @ 1503ecd40

void __cdecl UE::Spline::_dynamic_atexit_destructor_for__CVarSplineImplementation__(void)

{
  CVarSplineImplementation._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSplineImplementation);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSupportsFastArrayDelta'' @ 1503ecd60

void __cdecl _dynamic_atexit_destructor_for__CVarSupportsFastArrayDelta__(void)

{
  CVarSupportsFastArrayDelta._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSupportsFastArrayDelta);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseBackgroundLevelStreaming'' @ 1503ecd80

void __cdecl _dynamic_atexit_destructor_for__CVarUseBackgroundLevelStreaming__(void)

{
  CVarUseBackgroundLevelStreaming._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUseBackgroundLevelStreaming);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseLegacyPositionEvaluation'' @ 1503ecda0

void __cdecl UE::Spline::_dynamic_atexit_destructor_for__CVarUseLegacyPositionEvaluation__(void)

{
  CVarUseLegacyPositionEvaluation._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUseLegacyPositionEvaluation);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseLegacyRotationEvaluation'' @ 1503ecdc0

void __cdecl UE::Spline::_dynamic_atexit_destructor_for__CVarUseLegacyRotationEvaluation__(void)

{
  CVarUseLegacyRotationEvaluation._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUseLegacyRotationEvaluation);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseLegacyScaleEvaluation'' @ 1503ecde0

void __cdecl UE::Spline::_dynamic_atexit_destructor_for__CVarUseLegacyScaleEvaluation__(void)

{
  CVarUseLegacyScaleEvaluation._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUseLegacyScaleEvaluation);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseUnifiedTimeBudgetForStreaming'' @ 1503ece00

void __cdecl _dynamic_atexit_destructor_for__CVarUseUnifiedTimeBudgetForStreaming__(void)

{
  CVarUseUnifiedTimeBudgetForStreaming._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarUseUnifiedTimeBudgetForStreaming);
  return;
}

// `dynamic_atexit_destructor_for_'CVarValidateRotScale'' @ 1503ece20

void __cdecl UE::Spline::_dynamic_atexit_destructor_for__CVarValidateRotScale__(void)

{
  CVarValidateRotScale._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarValidateRotScale);
  return;
}

// `dynamic_atexit_destructor_for_'DeleteDormantActorCommand'' @ 1503ece40

void __cdecl _dynamic_atexit_destructor_for__DeleteDormantActorCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&DeleteDormantActorCommand);
  return;
}

// `dynamic_atexit_destructor_for_'DormantActorCommand'' @ 1503ece60

void __cdecl _dynamic_atexit_destructor_for__DormantActorCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&DormantActorCommand);
  return;
}

// `dynamic_atexit_destructor_for_'FindNetGUIDCommand'' @ 1503ece80

void __cdecl _dynamic_atexit_destructor_for__FindNetGUIDCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&FindNetGUIDCommand);
  return;
}

// `dynamic_atexit_destructor_for_'LegacySubObjectsCollected'' @ 1503ecea0

void __cdecl DataChannelInternal::_dynamic_atexit_destructor_for__LegacySubObjectsCollected__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = LegacySubObjectsCollected.AllocatorInstance.Data;
  if (LegacySubObjectsCollected.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (LegacySubObjectsCollected.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'ListOpenActorChannelsCommand'' @ 1503ecec0

void __cdecl _dynamic_atexit_destructor_for__ListOpenActorChannelsCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&ListOpenActorChannelsCommand);
  return;
}

// `dynamic_atexit_destructor_for_'LogCoreSettings'' @ 1503ecee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogCoreSettings__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogCoreSettings);
  return;
}

// `dynamic_atexit_destructor_for_'LogCurveTable'' @ 1503ecf00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogCurveTable__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogCurveTable);
  return;
}

// `dynamic_atexit_destructor_for_'LogNet'' @ 1503ecf20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogNet__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogNet);
  return;
}

// `dynamic_atexit_destructor_for_'LogNetDormancy'' @ 1503ecf40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogNetDormancy__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogNetDormancy);
  return;
}

// `dynamic_atexit_destructor_for_'LogNetLifecycle'' @ 1503ecf60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogNetLifecycle__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogNetLifecycle);
  return;
}

// `dynamic_atexit_destructor_for_'LogNetPartialBunch'' @ 1503ecf80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogNetPartialBunch__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogNetPartialBunch);
  return;
}

// `dynamic_atexit_destructor_for_'LogNetPlayerMovement'' @ 1503ecfa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogNetPlayerMovement__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogNetPlayerMovement);
  return;
}

// `dynamic_atexit_destructor_for_'LogNetSubObject'' @ 1503ecfc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogNetSubObject__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogNetSubObject);
  return;
}

// `dynamic_atexit_destructor_for_'LogNetTraffic'' @ 1503ecfe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogNetTraffic__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogNetTraffic);
  return;
}

// `dynamic_atexit_destructor_for_'LogRep'' @ 1503ed000

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogRep__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogRep);
  return;
}

// `dynamic_atexit_destructor_for_'LogRepTraffic'' @ 1503ed020

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogRepTraffic__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogRepTraffic);
  return;
}

// `dynamic_atexit_destructor_for_'LogSecurity'' @ 1503ed040

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogSecurity__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogSecurity);
  return;
}

// `dynamic_atexit_destructor_for_'LogSpline'' @ 1503ed060

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::Geometry::Spline::_dynamic_atexit_destructor_for__LogSpline__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogSpline);
  return;
}

// `dynamic_atexit_destructor_for_'ReplicatedSubObjectsTracker'' @ 1503ed080

void __cdecl
DataChannelInternal::_dynamic_atexit_destructor_for__ReplicatedSubObjectsTracker__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ReplicatedSubObjectsTracker.AllocatorInstance.Data;
  if (ReplicatedSubObjectsTracker.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ReplicatedSubObjectsTracker.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'RowNameJsonKey'' @ 1503ed0a0

void __cdecl
`UCurveTable::CreateTableFromJSONString'::__l11::_dynamic_atexit_destructor_for__RowNameJsonKey__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = RowNameJsonKey.Data.AllocatorInstance.Data;
  if (RowNameJsonKey.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (RowNameJsonKey.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'StaticType'' @ 1503ed0c0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`FCubemapTexturePropertiesPS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__
          (void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 1503ed0e0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`FCubemapTexturePropertiesVS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__
          (void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 1503ed100

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`FIESLightProfilePS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'TestObjectRefSerializeCommand'' @ 1503ed120

void __cdecl _dynamic_atexit_destructor_for__TestObjectRefSerializeCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&TestObjectRefSerializeCommand);
  return;
}

// `dynamic_atexit_destructor_for_'ToRichCurveMap'' @ 1503ed140

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__ToRichCurveMap__(void)

{
  char **ppcVar1;
  FStructParams *pFVar2;
  longlong lVar3;
  
  lVar3 = 0xc;
  pFVar2 = &Z_Construct_UScriptStruct_FSimpleCurveKey_Statics::StructParams;
  do {
    lVar3 = lVar3 + -1;
    if (pFVar2[-1].SuperFunc != (_func___cdecl_UScriptStruct_ptr *)0x0) {
      ppcVar1 = *(char ***)&pFVar2[-1].ObjectFlags;
      if (*(char ***)&pFVar2[-1].ObjectFlags == (char **)0x0) {
        ppcVar1 = &pFVar2[-1].NameUTF8;
      }
      (**(code **)(*ppcVar1 + 0x10))();
    }
    pFVar2 = (FStructParams *)&pFVar2[-1].SuperFunc;
  } while (lVar3 != 0);
  return;
}

