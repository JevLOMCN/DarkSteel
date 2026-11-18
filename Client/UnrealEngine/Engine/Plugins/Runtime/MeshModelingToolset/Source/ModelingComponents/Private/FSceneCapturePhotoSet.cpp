// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 37

// ComputeSampleNearest<1> @ 14ca54060

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TVector4<float> * __thiscall
UE::Geometry::FSceneCapturePhotoSet::ComputeSampleNearest<1>
          (FSceneCapturePhotoSet *this,TVector4<float> *__return_storage_ptr__,int *param_1,
          TVector2<double> *param_2,FSceneSample *param_3)

{
  TVector<float>_u_0 local_18;
  
  TSpatialPhotoSet<UE::Math::TVector<float>,float>::ComputeSampleNearest
            (&this->BaseColorPhotoSet,(TVector<float> *)&local_18._s_0,param_1,param_2,
             &param_3->BaseColor);
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_18._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_18._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = local_18._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
  return __return_storage_ptr__;
}

// ComputeSampleNearest<2> @ 14ca540c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TVector4<float> * __thiscall
UE::Geometry::FSceneCapturePhotoSet::ComputeSampleNearest<2>
          (FSceneCapturePhotoSet *this,TVector4<float> *__return_storage_ptr__,int *param_1,
          TVector2<double> *param_2,FSceneSample *param_3)

{
  float fVar1;
  
  fVar1 = TSpatialPhotoSet<float,float>::ComputeSampleNearest
                    (&this->RoughnessPhotoSet,param_1,param_2,&param_3->Roughness);
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
  return __return_storage_ptr__;
}

// ComputeSampleNearest<4> @ 14ca54110

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TVector4<float> * __thiscall
UE::Geometry::FSceneCapturePhotoSet::ComputeSampleNearest<4>
          (FSceneCapturePhotoSet *this,TVector4<float> *__return_storage_ptr__,int *param_1,
          TVector2<double> *param_2,FSceneSample *param_3)

{
  float fVar1;
  
  fVar1 = TSpatialPhotoSet<float,float>::ComputeSampleNearest
                    (&this->MetallicPhotoSet,param_1,param_2,&param_3->Metallic);
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
  return __return_storage_ptr__;
}

// ComputeSampleNearest<8> @ 14ca54160

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TVector4<float> * __thiscall
UE::Geometry::FSceneCapturePhotoSet::ComputeSampleNearest<8>
          (FSceneCapturePhotoSet *this,TVector4<float> *__return_storage_ptr__,int *param_1,
          TVector2<double> *param_2,FSceneSample *param_3)

{
  float fVar1;
  
  fVar1 = TSpatialPhotoSet<float,float>::ComputeSampleNearest
                    (&this->SpecularPhotoSet,param_1,param_2,&param_3->Specular);
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
  return __return_storage_ptr__;
}

// ComputeSampleNearest<16> @ 14ca541b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TVector4<float> * __thiscall
UE::Geometry::FSceneCapturePhotoSet::ComputeSampleNearest<16>
          (FSceneCapturePhotoSet *this,TVector4<float> *__return_storage_ptr__,int *param_1,
          TVector2<double> *param_2,FSceneSample *param_3)

{
  TVector<float>_u_0 local_18;
  
  TSpatialPhotoSet<UE::Math::TVector<float>,float>::ComputeSampleNearest
            (&this->EmissivePhotoSet,(TVector<float> *)&local_18._s_0,param_1,param_2,
             &param_3->Emissive);
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_18._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_18._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = local_18._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
  return __return_storage_ptr__;
}

// ComputeSampleNearest<256> @ 14ca54210

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TVector4<float> * __thiscall
UE::Geometry::FSceneCapturePhotoSet::ComputeSampleNearest<256>
          (FSceneCapturePhotoSet *this,TVector4<float> *__return_storage_ptr__,int *param_1,
          TVector2<double> *param_2,FSceneSample *param_3)

{
  float fVar1;
  
  fVar1 = TSpatialPhotoSet<float,float>::ComputeSampleNearest
                    (&this->OpacityPhotoSet,param_1,param_2,&param_3->Opacity);
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
  return __return_storage_ptr__;
}

// ComputeSampleNearest<32> @ 14ca54260

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TVector4<float> * __thiscall
UE::Geometry::FSceneCapturePhotoSet::ComputeSampleNearest<32>
          (FSceneCapturePhotoSet *this,TVector4<float> *__return_storage_ptr__,int *param_1,
          TVector2<double> *param_2,FSceneSample *param_3)

{
  TVector<float>_u_0 local_18;
  
  TSpatialPhotoSet<UE::Math::TVector<float>,float>::ComputeSampleNearest
            (&this->WorldNormalPhotoSet,(TVector<float> *)&local_18._s_0,param_1,param_2,
             &param_3->WorldNormal);
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_18._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_18._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = local_18._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
  return __return_storage_ptr__;
}

// ComputeSampleNearest<512> @ 14ca542c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TVector4<float> * __thiscall
UE::Geometry::FSceneCapturePhotoSet::ComputeSampleNearest<512>
          (FSceneCapturePhotoSet *this,TVector4<float> *__return_storage_ptr__,int *param_1,
          TVector2<double> *param_2,FSceneSample *param_3)

{
  TVector<float>_u_0 local_18;
  
  TSpatialPhotoSet<UE::Math::TVector<float>,float>::ComputeSampleNearest
            (&this->SubsurfaceColorPhotoSet,(TVector<float> *)&local_18._s_0,param_1,param_2,
             &param_3->SubsurfaceColor);
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_18._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_18._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = local_18._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
  return __return_storage_ptr__;
}

// ComputeSampleNearest<64> @ 14ca54320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TVector4<float> * __thiscall
UE::Geometry::FSceneCapturePhotoSet::ComputeSampleNearest<64>
          (FSceneCapturePhotoSet *this,TVector4<float> *__return_storage_ptr__,int *param_1,
          TVector2<double> *param_2,FSceneSample *param_3)

{
  float fVar1;
  
  fVar1 = TSpatialPhotoSet<float,float>::ComputeSampleNearest
                    (&this->DeviceDepthPhotoSet,param_1,param_2,&param_3->DeviceDepth);
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
  return __return_storage_ptr__;
}

// ComputeSampleNearest<128> @ 14ca54370

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TVector4<float> * __thiscall
UE::Geometry::FSceneCapturePhotoSet::ComputeSampleNearest<128>
          (FSceneCapturePhotoSet *this,TVector4<float> *__return_storage_ptr__,int *param_1,
          TVector2<double> *param_2,FSceneSample *param_3)

{
  undefined8 uVar1;
  TVector<float> *pTVar2;
  TVector<float>_u_0 local_28;
  TVector<float> local_18;
  
  local_28._s_0.X = param_3->Metallic;
  local_28._s_0.Y = param_3->Roughness;
  local_28._s_0.Z = param_3->Specular;
  pTVar2 = TSpatialPhotoSet<UE::Math::TVector<float>,float>::ComputeSampleNearest
                     (&this->PackedMRSPhotoSet,&local_18,param_1,param_2,
                      (TVector<float> *)&local_28._s_0);
  (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
  uVar1 = *(undefined8 *)&pTVar2->field0_0x0;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (float)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (float)((ulonglong)uVar1 >> 0x20);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (pTVar2->field0_0x0)._s_0.Z;
  return __return_storage_ptr__;
}

// FSceneCapturePhotoSet @ 14cb621b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSceneCapturePhotoSet * __thiscall
UE::Geometry::FSceneCapturePhotoSet::FSceneCapturePhotoSet(FSceneCapturePhotoSet *this)

{
  (this->RenderCaptureConfig).BaseColor = true;
  (this->RenderCaptureConfig).Roughness = true;
  (this->RenderCaptureConfig).Specular = true;
  (this->RenderCaptureConfig).Metallic = true;
  this->TargetWorld = (UWorld *)0x0;
  (this->VisibleActors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VisibleActors).ArrayNum = 0;
  (this->VisibleActors).ArrayMax = 0;
  (this->VisibleComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VisibleComponents).ArrayNum = 0;
  (this->VisibleComponents).ArrayMax = 0;
  this->bEnforceVisibilityViaUnregister = false;
  (this->BaseColorPhotoSet).Photos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BaseColorPhotoSet).Photos.ArrayNum = 0;
  (this->BaseColorPhotoSet).Photos.ArrayMax = 0;
  (this->RoughnessPhotoSet).Photos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RoughnessPhotoSet).Photos.ArrayNum = 0;
  (this->RoughnessPhotoSet).Photos.ArrayMax = 0;
  (this->SpecularPhotoSet).Photos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpecularPhotoSet).Photos.ArrayNum = 0;
  (this->SpecularPhotoSet).Photos.ArrayMax = 0;
  (this->MetallicPhotoSet).Photos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MetallicPhotoSet).Photos.ArrayNum = 0;
  (this->MetallicPhotoSet).Photos.ArrayMax = 0;
  (this->PackedMRSPhotoSet).Photos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PackedMRSPhotoSet).Photos.ArrayNum = 0;
  (this->PackedMRSPhotoSet).Photos.ArrayMax = 0;
  (this->WorldNormalPhotoSet).Photos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorldNormalPhotoSet).Photos.ArrayNum = 0;
  (this->WorldNormalPhotoSet).Photos.ArrayMax = 0;
  (this->EmissivePhotoSet).Photos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmissivePhotoSet).Photos.ArrayNum = 0;
  (this->EmissivePhotoSet).Photos.ArrayMax = 0;
  (this->OpacityPhotoSet).Photos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OpacityPhotoSet).Photos.ArrayNum = 0;
  (this->OpacityPhotoSet).Photos.ArrayMax = 0;
  (this->SubsurfaceColorPhotoSet).Photos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubsurfaceColorPhotoSet).Photos.ArrayNum = 0;
  (this->SubsurfaceColorPhotoSet).Photos.ArrayMax = 0;
  (this->DeviceDepthPhotoSet).Photos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeviceDepthPhotoSet).Photos.ArrayNum = 0;
  (this->DeviceDepthPhotoSet).Photos.ArrayMax = 0;
  (this->PhotoSetParams).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PhotoSetParams).ArrayNum = 0;
  (this->PhotoSetParams).ArrayMax = 0;
  this->bWriteDebugImages = false;
  (this->RenderCaptureConfig).CombinedMRS = true;
  (this->RenderCaptureConfig).WorldNormal = true;
  (this->RenderCaptureConfig).Emissive = true;
  (this->RenderCaptureConfig).Opacity = true;
  (this->RenderCaptureConfig).SubsurfaceColor = true;
  (this->RenderCaptureConfig).DeviceDepth = true;
  ::FString::FString(&this->DebugImagesFolderName,L"SceneCapturePhotoSet");
  this->bAllowCancel = false;
  this->bWasCancelled = false;
  (this->PhotoSetStatus).BaseColor = Pending;
  (this->PhotoSetStatus).Roughness = Disabled;
  (this->RenderCaptureConfig).BaseColor = true;
  (this->RenderCaptureConfig).Roughness = true;
  (this->RenderCaptureConfig).Specular = true;
  (this->RenderCaptureConfig).Metallic = true;
  (this->PhotoSetStatus).Specular = Disabled;
  (this->PhotoSetStatus).Metallic = Disabled;
  (this->PhotoSetStatus).CombinedMRS = Pending;
  (this->RenderCaptureConfig).CombinedMRS = true;
  (this->RenderCaptureConfig).WorldNormal = true;
  (this->RenderCaptureConfig).Emissive = true;
  (this->RenderCaptureConfig).Opacity = true;
  (this->PhotoSetStatus).WorldNormal = Pending;
  (this->PhotoSetStatus).Emissive = Pending;
  (this->PhotoSetStatus).Opacity = Pending;
  (this->PhotoSetStatus).SubsurfaceColor = Pending;
  (this->PhotoSetStatus).DeviceDepth = Disabled;
  (this->RenderCaptureConfig).SubsurfaceColor = true;
  (this->RenderCaptureConfig).DeviceDepth = false;
  return this;
}

// operator() @ 14cb6df20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
`UE::Geometry::FSceneCapturePhotoSet::Compute'::__l2::<lambda_3>::operator()
          (void *this,ERenderCaptureType param_1,FSpatialPhotoParams *param_2)

{
  FWorldRenderCapture *this_00;
  code *pcVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  FRenderCaptureConfig *pFVar5;
  longlong lVar6;
  longlong lVar7;
  FName local_res8;
  FRenderCaptureConfig local_res10 [8];
  FImageAdapter local_118;
  TVector<double>_u_0 local_f8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  FImageDimensions local_b0;
  TImageBuilder<UE::Math::TVector<float>_> local_a8;
  FScopedCapture local_78;
  
  local_a8.Image.DimensionX = 0;
  local_a8.Image.DimensionY = 0;
  local_f8._s_0.Z = (param_2->Frame).Origin.field0_0x0._s_0.Z;
  dStack_e0 = (param_2->Frame).Rotation.field0_0x0._s_0.X;
  local_a8.Image.Buffer.ArrayNum = 0;
  local_a8.Image.Buffer.ArrayMax = 0;
  local_f8._s_0.X = (param_2->Frame).Origin.field0_0x0._s_0.X;
  local_f8._s_0.Y = (param_2->Frame).Origin.field0_0x0._s_0.Y;
  local_a8.Dimensions.Width = 0;
  local_a8.Dimensions.Height = 0;
  local_c8 = (param_2->Frame).Rotation.field0_0x0._s_0.W;
  dStack_c0 = param_2->NearPlaneDist;
  local_a8.Image.Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0 = param_2->Dimensions;
  local_118.Image1f = (TImageBuilder<float> *)0x0;
  local_118.Image4f = (TImageBuilder<UE::Math::TVector4<float>_> *)0x0;
  local_d8 = (param_2->Frame).Rotation.field0_0x0._s_0.Y;
  dStack_d0 = (param_2->Frame).Rotation.field0_0x0._s_0.Z;
  local_118.Image3f = &local_a8;
  local_b8 = param_2->HorzFOVDegrees;
  local_118.ImageType = Float3;
  pFVar5 = UE::Geometry::TRenderCaptureTypeData<UE::Geometry::FRenderCaptureConfig>::operator[]
                     ((TRenderCaptureTypeData<UE::Geometry::FRenderCaptureConfig> *)
                      (*(longlong *)this + 0xf8),param_1);
  dVar3 = local_b8;
  dVar2 = dStack_c0;
  local_res10[0].bAntiAliasing = pFVar5->bAntiAliasing;
  *(FImageDimensions *)(*(longlong *)((longlong)this + 8) + 0xa0) = param_2->Dimensions;
  this_00 = *(FWorldRenderCapture **)((longlong)this + 8);
  RenderCaptureInterface::FScopedCapture::FScopedCapture
            (&local_78,0 < RenderCaptureDraws,L"RenderCaptureFromPosition",(wchar_t *)0x0);
  RenderCaptureDraws = RenderCaptureDraws + -1;
  if (param_1 == CombinedMRS) {
    UE::Geometry::FWorldRenderCapture::CaptureMRSFromPosition
              (this_00,(TFrame3<double> *)&local_f8._s_0,dVar3,dVar2,&local_118,local_res10);
    RenderCaptureInterface::FScopedCapture::~FScopedCapture(&local_78);
    lVar7 = *(longlong *)this;
LAB_14cb6e041:
    lVar6 = 0x98;
    goto LAB_14cb6e122;
  }
  if (param_1 == DeviceDepth) {
    UE::Geometry::FWorldRenderCapture::CaptureDeviceDepthFromPosition
              (this_00,(TFrame3<double> *)&local_f8._s_0,dVar3,dVar2,&local_118,local_res10);
    RenderCaptureInterface::FScopedCapture::~FScopedCapture(&local_78);
    lVar7 = *(longlong *)this;
LAB_14cb6e0f0:
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3311711688373306098>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\SceneCapturePhotoSet.cpp"
                       ,0x2f2,"false");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    UE::Internal::GetBufferVisualizationModeName((ERenderCaptureType)&local_res8);
    UE::Geometry::FWorldRenderCapture::CaptureBufferVisualizationFromPosition
              (this_00,&local_res8,(TFrame3<double> *)&local_f8._s_0,dVar3,dVar2,&local_118,
               local_res10);
    RenderCaptureInterface::FScopedCapture::~FScopedCapture(&local_78);
    lVar7 = *(longlong *)this;
    if (param_1 != BaseColor) {
      if (param_1 == Emissive) {
        lVar6 = 0xb8;
        goto LAB_14cb6e122;
      }
      if (param_1 == WorldNormal) {
        lVar6 = 0xa8;
        goto LAB_14cb6e122;
      }
      if (param_1 == CombinedMRS) goto LAB_14cb6e041;
      if (param_1 == SubsurfaceColor) {
        lVar6 = 0xd8;
        goto LAB_14cb6e122;
      }
      goto LAB_14cb6e0f0;
    }
  }
  lVar6 = 0x58;
LAB_14cb6e122:
  UE::Geometry::TSpatialPhotoSet<UE::Math::TVector<float>,float>::Add
            ((TSpatialPhotoSet<UE::Math::TVector<float>,float> *)(lVar7 + lVar6),
             (TSpatialPhoto<UE::Math::TVector<float>_> *)&local_f8._s_0);
  if (local_a8.Image.Buffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Image.Buffer.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14cb6ec50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
`UE::Geometry::FSceneCapturePhotoSet::Compute'::__l2::<lambda_4>::operator()
          (void *this,ERenderCaptureType param_1,FSpatialPhotoParams *param_2)

{
  FWorldRenderCapture *this_00;
  code *pcVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  FRenderCaptureConfig *pFVar5;
  longlong lVar6;
  longlong lVar7;
  FName local_res8;
  FRenderCaptureConfig local_res10 [8];
  FImageAdapter local_118;
  TVector<double>_u_0 local_f8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  FImageDimensions local_b0;
  TImageBuilder<float> local_a8;
  FScopedCapture local_78;
  
  local_a8.Image.Buffer.ArrayNum = 0;
  local_a8.Image.Buffer.ArrayMax = 0;
  local_f8._s_0.X = (param_2->Frame).Origin.field0_0x0._s_0.X;
  local_f8._s_0.Y = (param_2->Frame).Origin.field0_0x0._s_0.Y;
  local_a8.Image.DimensionX = 0;
  local_a8.Image.DimensionY = 0;
  local_f8._s_0.Z = (param_2->Frame).Origin.field0_0x0._s_0.Z;
  dStack_e0 = (param_2->Frame).Rotation.field0_0x0._s_0.X;
  local_a8.Dimensions.Width = 0;
  local_a8.Dimensions.Height = 0;
  local_d8 = (param_2->Frame).Rotation.field0_0x0._s_0.Y;
  dStack_d0 = (param_2->Frame).Rotation.field0_0x0._s_0.Z;
  local_a8.Image.Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8 = (param_2->Frame).Rotation.field0_0x0._s_0.W;
  dStack_c0 = param_2->NearPlaneDist;
  local_118.ImageType = Float1;
  local_b0 = param_2->Dimensions;
  local_b8 = param_2->HorzFOVDegrees;
  local_118.Image1f = &local_a8;
  local_118.Image3f = (TImageBuilder<UE::Math::TVector<float>_> *)0x0;
  local_118.Image4f = (TImageBuilder<UE::Math::TVector4<float>_> *)0x0;
  pFVar5 = UE::Geometry::TRenderCaptureTypeData<UE::Geometry::FRenderCaptureConfig>::operator[]
                     ((TRenderCaptureTypeData<UE::Geometry::FRenderCaptureConfig> *)
                      (*(longlong *)this + 0xf8),param_1);
  dVar3 = local_b8;
  dVar2 = dStack_c0;
  local_res10[0].bAntiAliasing = pFVar5->bAntiAliasing;
  *(FImageDimensions *)(*(longlong *)((longlong)this + 8) + 0xa0) = param_2->Dimensions;
  this_00 = *(FWorldRenderCapture **)((longlong)this + 8);
  RenderCaptureInterface::FScopedCapture::FScopedCapture
            (&local_78,0 < RenderCaptureDraws,L"RenderCaptureFromPosition",(wchar_t *)0x0);
  RenderCaptureDraws = RenderCaptureDraws + -1;
  if (param_1 == CombinedMRS) {
    UE::Geometry::FWorldRenderCapture::CaptureMRSFromPosition
              (this_00,(TFrame3<double> *)&local_f8._s_0,dVar3,dVar2,&local_118,local_res10);
    RenderCaptureInterface::FScopedCapture::~FScopedCapture(&local_78);
    lVar7 = *(longlong *)this;
LAB_14cb6ee11:
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3311711688373306078>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\SceneCapturePhotoSet.cpp"
                       ,0x2de,"false");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    if (param_1 == DeviceDepth) {
      UE::Geometry::FWorldRenderCapture::CaptureDeviceDepthFromPosition
                (this_00,(TFrame3<double> *)&local_f8._s_0,dVar3,dVar2,&local_118,local_res10);
      RenderCaptureInterface::FScopedCapture::~FScopedCapture(&local_78);
      lVar7 = *(longlong *)this;
      lVar6 = 0xe8;
      goto LAB_14cb6ee43;
    }
    UE::Internal::GetBufferVisualizationModeName((ERenderCaptureType)&local_res8);
    UE::Geometry::FWorldRenderCapture::CaptureBufferVisualizationFromPosition
              (this_00,&local_res8,(TFrame3<double> *)&local_f8._s_0,dVar3,dVar2,&local_118,
               local_res10);
    RenderCaptureInterface::FScopedCapture::~FScopedCapture(&local_78);
    lVar7 = *(longlong *)this;
    if (param_1 != Roughness) {
      if (param_1 == Metallic) {
        lVar6 = 0x88;
        goto LAB_14cb6ee43;
      }
      if (param_1 == Specular) {
        lVar6 = 0x78;
        goto LAB_14cb6ee43;
      }
      if (param_1 == Opacity) {
        lVar6 = 200;
        goto LAB_14cb6ee43;
      }
      goto LAB_14cb6ee11;
    }
  }
  lVar6 = 0x68;
LAB_14cb6ee43:
  UE::Geometry::TSpatialPhotoSet<float,float>::Add
            ((TSpatialPhotoSet<float,float> *)(lVar7 + lVar6),(TSpatialPhoto<float> *)&local_f8._s_0
            );
  if (local_a8.Image.Buffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Image.Buffer.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14cb6f9e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
`UE::Geometry::FSceneCapturePhotoSet::Compute'::__l2::<lambda_5>::operator()
          (void *this,
          TFunctionRef<void___cdecl(UE::Geometry::ERenderCaptureType,UE::Geometry::FSpatialPhotoParams_const_&)>
          *param_1,ERenderCaptureType param_2,FText *param_3)

{
  int iVar1;
  FSlowTask *this_00;
  longlong lVar2;
  float fVar3;
  bool bVar4;
  ECaptureTypeStatus *pEVar5;
  FText *pFVar6;
  longlong lVar7;
  longlong lVar8;
  ERenderCaptureType local_res8 [2];
  FText local_a8;
  FSlowTask local_98;
  
  pEVar5 = UE::Geometry::
           TRenderCaptureTypeData<enum_UE::Geometry::FSceneCapturePhotoSet::ECaptureTypeStatus>::
           operator[]((void *)(*(longlong *)this + 0x2c),param_2);
  if (*pEVar5 == Pending) {
    this_00 = *(FSlowTask **)((longlong)this + 8);
    pFVar6 = FText::FText(&local_a8);
    fVar3 = __real_3f800000;
    FSlowTask::EnterProgressFrame(this_00,__real_3f800000,pFVar6);
    if (local_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
    }
    FSlowTask::FSlowTask(&local_98,(float)*(int *)(*(longlong *)this + 0x110),param_3,true,GWarn);
    FSlowTask::Initialize(&local_98);
    UE::Geometry::FSceneCapturePhotoSet::EmptyPhotoSet(*(FSceneCapturePhotoSet **)this,param_2);
    lVar2 = *(longlong *)this;
    iVar1 = *(int *)(lVar2 + 0x110);
    lVar7 = *(longlong *)(lVar2 + 0x108);
    lVar8 = (longlong)iVar1 * 0x50 + lVar7;
    while( true ) {
      if (*(int *)(lVar2 + 0x110) != iVar1) {
        `TCheckedPointerIterator<UE::Geometry::FSpatialPhotoParams,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (lVar7 == lVar8) {
        pEVar5 = UE::Geometry::
                 TRenderCaptureTypeData<enum_UE::Geometry::FSceneCapturePhotoSet::ECaptureTypeStatus>
                 ::operator[]((void *)(*(longlong *)this + 0x2c),param_2);
        *pEVar5 = Computed;
        goto LAB_14cb6fb9d;
      }
      bVar4 = FSlowTask::ShouldCancel(*(FSlowTask **)((longlong)this + 8));
      if (bVar4) break;
      pFVar6 = FText::FText(&local_a8);
      FSlowTask::EnterProgressFrame(&local_98,fVar3,pFVar6);
      if (local_a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
      }
      local_res8[0] = param_2;
      (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,local_res8,lVar7);
      FSlowTask::TickProgress(*(FSlowTask **)((longlong)this + 8));
      lVar7 = lVar7 + 0x50;
    }
    if (3 < (byte)LogGeometry._0_1_) {
      FText::ToString(param_3);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    *(undefined1 *)(*(longlong *)this + 0x131) = 1;
LAB_14cb6fb9d:
    FSlowTask::Destroy(&local_98);
    if (local_98.FrameMessage.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_98.FrameMessage.TextData.Reference + 0x10))();
    }
    if (local_98.DefaultMessage.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_98.DefaultMessage.TextData.Reference + 0x10))();
    }
  }
  return;
}

// Compute @ 14cb7a960

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

void __thiscall UE::Geometry::FSceneCapturePhotoSet::Compute(FSceneCapturePhotoSet *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FFeedbackContext *pFVar3;
  bool bVar4;
  FText *pFVar5;
  AActor *pAVar6;
  FString *pFVar7;
  ulonglong uVar8;
  uint uVar9;
  ForElementType<FSetElementId> FVar10;
  ForAnyElementType FVar11;
  int iVar12;
  wchar_t *pwVar13;
  int iVar14;
  bool bVar15;
  undefined1 auStackY_d38 [32];
  ForAnyElementType local_ce8;
  undefined8 local_ce0;
  undefined1 local_cd8;
  undefined1 local_cd7 [7];
  FSceneCapturePhotoSet *local_cd0;
  FSlowTask *local_cc8;
  AActor *local_cc0;
  FSceneCapturePhotoSet *local_cb8;
  undefined ***local_cb0;
  FSceneCapturePhotoSet *local_ca8;
  undefined ***local_ca0;
  UClass *local_c98 [2];
  FScriptContainerElement *local_c88;
  int iStack_c80;
  undefined4 uStack_c7c;
  code *local_c78;
  FSceneCapturePhotoSet **local_c70;
  code *local_c68;
  FSceneCapturePhotoSet **local_c60;
  code *local_c58;
  FSceneCapturePhotoSet **local_c50;
  code *local_c48;
  FSceneCapturePhotoSet **local_c40;
  code *local_c38;
  FSceneCapturePhotoSet **local_c30;
  code *local_c28;
  FSceneCapturePhotoSet **local_c20;
  code *local_c18;
  FSceneCapturePhotoSet **local_c10;
  code *local_c08;
  FSceneCapturePhotoSet **local_c00;
  code *local_bf8;
  FSceneCapturePhotoSet **local_bf0;
  code *local_be8;
  FSceneCapturePhotoSet **local_be0;
  TActorIteratorBase<TActorIterator<AActor>_> local_bd8;
  TArrayView<AActor_*_const,int> local_b78;
  FText local_b68;
  FText local_b58;
  FText local_b48;
  FText local_b38;
  FText local_b28;
  FText local_b18;
  FText local_b08;
  FText local_af8;
  FText local_ae8;
  FText local_ad8;
  FText local_ac8;
  FSlowTask local_ab8;
  FString local_a58;
  FString local_a48;
  FString local_a38;
  FString local_a28;
  TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> local_a18;
  FWorldRenderCapture local_9c8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d38;
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId145,"SceneCapturePhotoSet::Compute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\SceneCapturePhotoSet.cpp"
               ,0x91);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId145);
  }
  this->bWasCancelled = false;
  pFVar3 = GWarn;
  iVar12 = (uint)((this->PhotoSetStatus).SubsurfaceColor == Pending) +
           (uint)((this->PhotoSetStatus).DeviceDepth == Pending) +
           (uint)((this->PhotoSetStatus).Opacity == Pending) +
           (uint)((this->PhotoSetStatus).Emissive == Pending) +
           (uint)((this->PhotoSetStatus).WorldNormal == Pending) +
           (uint)((this->PhotoSetStatus).CombinedMRS == Pending) +
           (uint)((this->PhotoSetStatus).Metallic == Pending) +
           (uint)((this->PhotoSetStatus).Specular == Pending) +
           (uint)((this->PhotoSetStatus).Roughness == Pending) +
           (uint)((this->PhotoSetStatus).BaseColor == Pending);
  if (iVar12 != 0) {
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_ac8,L"SceneCapture",L"CapturingScene",L"Capturing Scene...");
    FSlowTask::FSlowTask(&local_ab8,(float)iVar12,pFVar5,true,pFVar3);
    FSlowTask::Initialize(&local_ab8);
    if (local_ac8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_ac8.TextData.Reference + 0x10))();
    }
    FSlowTask::MakeDialog(&local_ab8,this->bAllowCancel,false);
    pwVar13 = L"";
    if ((this->TargetWorld == (UWorld *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("this->TargetWorld != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\SceneCapturePhotoSet.cpp"
                           ,0xa3,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_c88 = (this->VisibleActors).AllocatorInstance.Data;
    iVar12 = (this->VisibleActors).ArrayNum;
    if ((iVar12 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_b78._12_4_ = uStack_c7c;
    local_b78.ArrayNum = iVar12;
    local_b78.DataPtr = (AActor **)local_c88;
    local_a18.Elements._0_8_ = 0;
    local_a18.Elements._8_8_ = 0;
    local_a18.Elements._32_8_ = 0;
    local_a18.Elements._40_4_ = 0;
    local_a18.Elements._44_4_ = 0x80;
    local_a18.Elements._48_4_ = 0xffffffff;
    local_a18.Elements._52_4_ = 0;
    local_a18.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_a18.HashSize = 0;
    iStack_c80 = iVar12;
    TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::Append(&local_a18,&local_b78);
    local_ce8.Data = (FScriptContainerElement *)0x0;
    local_ce0 = 0;
    if (this->bEnforceVisibilityViaUnregister != false) {
      local_c98[0] = Z_Construct_UClass_AActor_NoRegister();
      if ((GC::GIsIncrementalReachabilityPending != false) && (local_c98[0] != (UClass *)0x0)) {
        GC::MarkAsReachable((UObject *)local_c98[0]);
      }
      TActorIterator<AActor>::TActorIterator<AActor>
                ((TActorIterator<AActor> *)&local_bd8,this->TargetWorld,
                 (TSubclassOf<AActor>)local_c98,OnlyActiveLevels|SkipPendingKill);
      while( true ) {
        if ((local_bd8.State.bIsSet == false) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (local_bd8.State.TypedValue.ReachedEnd != false) break;
        if ((local_bd8.State.bIsSet == false) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pAVar6 = FActorIteratorState::GetActorChecked(&local_bd8.State.TypedValue);
        if (pAVar6 == (AActor *)0x0) {
          pFVar7 = GetTypeName<AActor>(&local_a48);
          if ((pFVar7->Data).ArrayNum != 0) {
            pwVar13 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(L"nullptr",pwVar13);
        }
        uVar9 = ((uint)((ulonglong)pAVar6 >> 0x14) & 0xffff ^ (uint)((ulonglong)pAVar6 >> 4)) *
                -0x7a143595;
        uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
        if (local_a18.Elements._8_4_ != local_a18.Elements._52_4_) {
          FVar10 = (ForElementType<FSetElementId>)&local_a18.Hash;
          if (local_a18.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar10 = local_a18.Hash.SecondaryData;
          }
          for (iVar12 = *(int *)((longlong)FVar10 +
                                (ulonglong)(local_a18.HashSize - 1U & (uVar9 >> 0x10 ^ uVar9)) * 4);
              iVar12 != -1;
              iVar12 = *(int *)(local_a18.Elements._0_8_ + 8 + (longlong)iVar12 * 0x10)) {
            if (*(AActor **)(local_a18.Elements._0_8_ + (longlong)iVar12 * 0x10) == pAVar6)
            goto LAB_14cb7ae4b;
          }
        }
        if ((local_bd8.State.bIsSet == false) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pAVar6 = FActorIteratorState::GetActorChecked(&local_bd8.State.TypedValue);
        if (pAVar6 == (AActor *)0x0) {
          pFVar7 = GetTypeName<AActor>(&local_a58);
          if ((pFVar7->Data).ArrayNum != 0) {
            pwVar13 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(L"nullptr",pwVar13);
        }
        (**(code **)(pAVar6->_padding_ + 0x5c8))(pAVar6,0);
        if ((local_bd8.State.bIsSet == false) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pAVar6 = FActorIteratorState::GetActorChecked(&local_bd8.State.TypedValue);
        if (pAVar6 == (AActor *)0x0) {
          pFVar7 = GetTypeName<AActor>(&local_a28);
          if ((pFVar7->Data).ArrayNum != 0) {
            pwVar13 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(L"nullptr",pwVar13);
        }
        local_cc0 = pAVar6;
        if (((local_ce8.Data <= (FScriptContainerElement *)&local_cc0) &&
            ((FScriptContainerElement *)&local_cc0 < local_ce8.Data + (longlong)local_ce0._4_4_ * 8)
            ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar12 = (int)local_ce0;
        if ((int)local_ce0 == local_ce0._4_4_) {
          iVar12 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_ce8,(int *)((longlong)&local_ce0 + 4));
        }
        local_ce0 = CONCAT44(local_ce0._4_4_,iVar12 + 1);
        *(AActor **)(local_ce8.Data + (longlong)iVar12 * 8) = local_cc0;
LAB_14cb7ae4b:
        TActorIteratorBase<TActorIterator<AActor>_>::operator++(&local_bd8);
      }
      if (local_bd8.State.bIsSet != false) {
        UWorld::RemoveOnActorSpawnedHandler
                  (local_bd8.State.TypedValue.CurrentWorld,
                   local_bd8.State.TypedValue.ActorSpawnedDelegateHandle);
        if (local_bd8.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_bd8.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
        }
        if (local_bd8.State.TypedValue.ActorArray.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_bd8.State.TypedValue.ActorArray.AllocatorInstance.Data);
        }
      }
    }
    FWorldRenderCapture::FWorldRenderCapture(&local_9c8);
    local_9c8.World = this->TargetWorld;
    FWorldRenderCapture::SetVisibleActorsAndComponents
              (&local_9c8,&this->VisibleActors,&this->VisibleComponents);
    pFVar7 = ::FString::FString(&local_a38,&this->DebugImagesFolderName);
    local_9c8.bWriteDebugImage = this->bWriteDebugImages;
    iVar12 = (pFVar7->Data).ArrayNum;
    iVar14 = iVar12 + -1;
    if (iVar12 == 0) {
      iVar14 = 0;
    }
    if (0 < iVar14) {
      ::FString::AssignRange
                ((FString *)((longlong)&local_9c8 + 0x968),
                 (wchar_t *)(pFVar7->Data).AllocatorInstance.Data,iVar14);
    }
    pFVar1 = (pFVar7->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    local_ca0 = (undefined ***)&local_9c8;
    local_cb0 = (undefined ***)&local_9c8;
    local_cc8 = &local_ab8;
    bVar4 = -1 < CpuChannel->Enabled;
    local_cd0 = this;
    local_cb8 = this;
    local_ca8 = this;
    if (bVar4) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId259,"FSceneCapturePhotoSet::Compute_DeviceDepth",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\SceneCapturePhotoSet.cpp"
                 ,0x103);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId259);
    }
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_b68,L"SceneCapture",L"CapturingScene_DeviceDepth",
                        L"Capturing Device Depth");
    local_c70 = &local_cb8;
    local_c78 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FSceneCapturePhotoSet::Compute'::__l2::<lambda_4>,void,enum_UE::Geometry::ERenderCaptureType,UE::Geometry::FSpatialPhotoParams_const_&>
                ::Call;
    `UE::Geometry::FSceneCapturePhotoSet::Compute'::__l2::<lambda_5>::operator()
              (&local_cd0,
               (TFunctionRef<void___cdecl(UE::Geometry::ERenderCaptureType,UE::Geometry::FSpatialPhotoParams_const_&)>
                *)&local_c78,DeviceDepth,pFVar5);
    if (local_b68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b68.TextData.Reference + 0x10))();
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    bVar4 = -1 < CpuChannel->Enabled;
    if (bVar4) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId264,"FSceneCapturePhotoSet::Compute_BaseColor",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\SceneCapturePhotoSet.cpp"
                 ,0x108);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId264);
    }
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_b58,L"SceneCapture",L"CapturingScene_BaseColor",
                        L"Capturing Base Color");
    local_c60 = &local_ca8;
    local_c68 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FSceneCapturePhotoSet::Compute'::__l2::<lambda_3>,void,enum_UE::Geometry::ERenderCaptureType,UE::Geometry::FSpatialPhotoParams_const_&>
                ::Call;
    `UE::Geometry::FSceneCapturePhotoSet::Compute'::__l2::<lambda_5>::operator()
              (&local_cd0,
               (TFunctionRef<void___cdecl(UE::Geometry::ERenderCaptureType,UE::Geometry::FSpatialPhotoParams_const_&)>
                *)&local_c68,BaseColor,pFVar5);
    if (local_b58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b58.TextData.Reference + 0x10))();
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    bVar4 = -1 < CpuChannel->Enabled;
    if (bVar4) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId269,"FSceneCapturePhotoSet::Compute_WorldNormal",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\SceneCapturePhotoSet.cpp"
                 ,0x10d);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId269);
    }
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_b48,L"SceneCapture",L"CapturingScene_WorldNormal",
                        L"Capturing World Normal");
    local_c50 = &local_ca8;
    local_c58 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FSceneCapturePhotoSet::Compute'::__l2::<lambda_3>,void,enum_UE::Geometry::ERenderCaptureType,UE::Geometry::FSpatialPhotoParams_const_&>
                ::Call;
    `UE::Geometry::FSceneCapturePhotoSet::Compute'::__l2::<lambda_5>::operator()
              (&local_cd0,
               (TFunctionRef<void___cdecl(UE::Geometry::ERenderCaptureType,UE::Geometry::FSpatialPhotoParams_const_&)>
                *)&local_c58,WorldNormal,pFVar5);
    if (local_b48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b48.TextData.Reference + 0x10))();
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    bVar4 = -1 < CpuChannel->Enabled;
    if (bVar4) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId274,"FSceneCapturePhotoSet::Compute_CombinedMRS",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\SceneCapturePhotoSet.cpp"
                 ,0x112);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId274);
    }
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_b38,L"SceneCapture",L"CapturingScene_CombinedMRS",
                        L"Capturing Packed MRS");
    local_c40 = &local_ca8;
    local_c48 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FSceneCapturePhotoSet::Compute'::__l2::<lambda_3>,void,enum_UE::Geometry::ERenderCaptureType,UE::Geometry::FSpatialPhotoParams_const_&>
                ::Call;
    `UE::Geometry::FSceneCapturePhotoSet::Compute'::__l2::<lambda_5>::operator()
              (&local_cd0,
               (TFunctionRef<void___cdecl(UE::Geometry::ERenderCaptureType,UE::Geometry::FSpatialPhotoParams_const_&)>
                *)&local_c48,CombinedMRS,pFVar5);
    if (local_b38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b38.TextData.Reference + 0x10))();
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    bVar4 = -1 < CpuChannel->Enabled;
    if (bVar4) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId279,"FSceneCapturePhotoSet::Compute_Metallic",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\SceneCapturePhotoSet.cpp"
                 ,0x117);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId279);
    }
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_b28,L"SceneCapture",L"CapturingScene_Metallic",L"Capturing Metallic")
    ;
    local_c30 = &local_cb8;
    local_c38 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FSceneCapturePhotoSet::Compute'::__l2::<lambda_4>,void,enum_UE::Geometry::ERenderCaptureType,UE::Geometry::FSpatialPhotoParams_const_&>
                ::Call;
    `UE::Geometry::FSceneCapturePhotoSet::Compute'::__l2::<lambda_5>::operator()
              (&local_cd0,
               (TFunctionRef<void___cdecl(UE::Geometry::ERenderCaptureType,UE::Geometry::FSpatialPhotoParams_const_&)>
                *)&local_c38,Metallic,pFVar5);
    if (local_b28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b28.TextData.Reference + 0x10))();
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    bVar4 = -1 < CpuChannel->Enabled;
    if (bVar4) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId284,"FSceneCapturePhotoSet::Compute_Roughness",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\SceneCapturePhotoSet.cpp"
                 ,0x11c);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId284);
    }
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_b18,L"SceneCapture",L"CapturingScene_Roughness",
                        L"Capturing Roughness");
    local_c20 = &local_cb8;
    local_c28 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FSceneCapturePhotoSet::Compute'::__l2::<lambda_4>,void,enum_UE::Geometry::ERenderCaptureType,UE::Geometry::FSpatialPhotoParams_const_&>
                ::Call;
    `UE::Geometry::FSceneCapturePhotoSet::Compute'::__l2::<lambda_5>::operator()
              (&local_cd0,
               (TFunctionRef<void___cdecl(UE::Geometry::ERenderCaptureType,UE::Geometry::FSpatialPhotoParams_const_&)>
                *)&local_c28,Roughness,pFVar5);
    if (local_b18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b18.TextData.Reference + 0x10))();
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    bVar4 = -1 < CpuChannel->Enabled;
    if (bVar4) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId289,"FSceneCapturePhotoSet::Compute_Specular",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\SceneCapturePhotoSet.cpp"
                 ,0x121);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId289);
    }
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_b08,L"SceneCapture",L"CapturingScene_Specular",L"Capturing Specular")
    ;
    local_c10 = &local_cb8;
    local_c18 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FSceneCapturePhotoSet::Compute'::__l2::<lambda_4>,void,enum_UE::Geometry::ERenderCaptureType,UE::Geometry::FSpatialPhotoParams_const_&>
                ::Call;
    `UE::Geometry::FSceneCapturePhotoSet::Compute'::__l2::<lambda_5>::operator()
              (&local_cd0,
               (TFunctionRef<void___cdecl(UE::Geometry::ERenderCaptureType,UE::Geometry::FSpatialPhotoParams_const_&)>
                *)&local_c18,Specular,pFVar5);
    if (local_b08.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b08.TextData.Reference + 0x10))();
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    bVar4 = -1 < CpuChannel->Enabled;
    if (bVar4) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId294,"FSceneCapturePhotoSet::Compute_Emissive",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\SceneCapturePhotoSet.cpp"
                 ,0x126);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId294);
    }
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_af8,L"SceneCapture",L"CapturingScene_Emissive",L"Capturing Emissive")
    ;
    local_c00 = &local_ca8;
    local_c08 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FSceneCapturePhotoSet::Compute'::__l2::<lambda_3>,void,enum_UE::Geometry::ERenderCaptureType,UE::Geometry::FSpatialPhotoParams_const_&>
                ::Call;
    `UE::Geometry::FSceneCapturePhotoSet::Compute'::__l2::<lambda_5>::operator()
              (&local_cd0,
               (TFunctionRef<void___cdecl(UE::Geometry::ERenderCaptureType,UE::Geometry::FSpatialPhotoParams_const_&)>
                *)&local_c08,Emissive,pFVar5);
    if (local_af8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_af8.TextData.Reference + 0x10))();
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    bVar4 = -1 < CpuChannel->Enabled;
    if (bVar4) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&::__CpuProfilerEventSpecId299,"FSceneCapturePhotoSet::Compute_Opacity",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\SceneCapturePhotoSet.cpp"
                 ,299);
      FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId299);
    }
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_ae8,L"SceneCapture",L"CapturingScene_Opacity",L"Capturing Opacity");
    local_bf0 = &local_cb8;
    local_bf8 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FSceneCapturePhotoSet::Compute'::__l2::<lambda_4>,void,enum_UE::Geometry::ERenderCaptureType,UE::Geometry::FSpatialPhotoParams_const_&>
                ::Call;
    `UE::Geometry::FSceneCapturePhotoSet::Compute'::__l2::<lambda_5>::operator()
              (&local_cd0,
               (TFunctionRef<void___cdecl(UE::Geometry::ERenderCaptureType,UE::Geometry::FSpatialPhotoParams_const_&)>
                *)&local_bf8,Opacity,pFVar5);
    if (local_ae8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_ae8.TextData.Reference + 0x10))();
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    bVar4 = -1 < CpuChannel->Enabled;
    if (bVar4) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId304,"FSceneCapturePhotoSet::Compute_SubsurfaceColor",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\SceneCapturePhotoSet.cpp"
                 ,0x130);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId304);
    }
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_ad8,L"SceneCapture",L"CapturingScene_SubsurfaceColor",
                        L"Capturing Subsurface Color");
    local_be0 = &local_ca8;
    local_be8 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FSceneCapturePhotoSet::Compute'::__l2::<lambda_3>,void,enum_UE::Geometry::ERenderCaptureType,UE::Geometry::FSpatialPhotoParams_const_&>
                ::Call;
    `UE::Geometry::FSceneCapturePhotoSet::Compute'::__l2::<lambda_5>::operator()
              (&local_cd0,
               (TFunctionRef<void___cdecl(UE::Geometry::ERenderCaptureType,UE::Geometry::FSpatialPhotoParams_const_&)>
                *)&local_be8,SubsurfaceColor,pFVar5);
    if (local_ad8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_ad8.TextData.Reference + 0x10))();
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    iVar12 = local_9c8.ComponentsRestoreMaxDrawDistance.ArrayNum;
    uVar8 = (ulonglong)local_9c8.ComponentsRestoreMaxDrawDistance.ArrayNum;
    local_9c8._0_8_ = &___7FWorldRenderCapture_Geometry_UE__6B_;
    pFVar1 = local_9c8.ComponentsRestoreMaxDrawDistance.AllocatorInstance.Data + uVar8 * 8;
    FVar11.Data = local_9c8.ComponentsRestoreMaxDrawDistance.AllocatorInstance.Data;
    while( true ) {
      if ((uint)uVar8 != iVar12) {
        `TCheckedPointerIterator<TObjectPtr<UPrimitiveComponent>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_cd8);
      }
      if (FVar11.Data == pFVar1) break;
      UPrimitiveComponent::SetCachedMaxDrawDistance
                (*(UPrimitiveComponent **)FVar11.Data,
                 (*(UPrimitiveComponent **)FVar11.Data)->LDMaxDrawDistance);
      uVar8 = (ulonglong)(uint)local_9c8.ComponentsRestoreMaxDrawDistance.ArrayNum;
      FVar11.Data = FVar11.Data + 8;
    }
    local_9c8.ComponentsRestoreMaxDrawDistance.ArrayNum = 0;
    if (local_9c8.ComponentsRestoreMaxDrawDistance.ArrayMax < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)((longlong)&local_9c8 + 0x978),0,
                 (int *)((longlong)&local_9c8 + 0x984));
    }
    if (local_9c8.ComponentsRestoreMaxDrawDistance.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9c8.ComponentsRestoreMaxDrawDistance.AllocatorInstance.Data);
    }
    if (local_9c8.DebugImageFolderName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
       ) {
      FMemory::Free(local_9c8.DebugImageFolderName.Data.AllocatorInstance.Data);
    }
    if (local_9c8.ReadImageBuffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9c8.ReadImageBuffer.AllocatorInstance.Data);
    }
    local_9c8.VisiblePrimitives.HashSize = 0;
    if (local_9c8.VisiblePrimitives.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_9c8.VisiblePrimitives.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)((longlong)&local_9c8 + 0x18));
    local_9c8._0_8_ = &___7FGCObject__6B_;
    FGCObject::UnregisterGCObject((FGCObject *)&local_9c8);
    iVar12 = (int)local_ce0;
    uVar8 = (ulonglong)(int)local_ce0;
    pFVar1 = local_ce8.Data + uVar8 * 8;
    FVar11.Data = local_ce8.Data;
    while( true ) {
      if ((int)uVar8 != iVar12) {
        `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_cd7);
      }
      if (FVar11.Data == pFVar1) break;
      (**(code **)((*(AActor **)FVar11.Data)->_padding_ + 0x5b0))();
      uVar8 = local_ce0 & 0xffffffff;
      FVar11.Data = FVar11.Data + 8;
    }
    if (local_ce8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ce8.Data);
    }
    local_a18.HashSize = 0;
    if (local_a18.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_a18.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<AActor_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<AActor_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_a18.Elements);
    FSlowTask::Destroy(&local_ab8);
    if (local_ab8.FrameMessage.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_ab8.FrameMessage.TextData.Reference + 0x10))();
    }
    if (local_ab8.DefaultMessage.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_ab8.DefaultMessage.TextData.Reference + 0x10))();
    }
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ComputeSample @ 14cb7bfb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UE::Geometry::FSceneCapturePhotoSet::ComputeSample
          (FSceneCapturePhotoSet *this,FRenderCaptureTypeFlags *param_1,TVector<double> *param_2,
          TVector<double> *param_3,
          TFunctionRef<bool___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
          *param_4,FSceneSample *param_5)

{
  undefined8 uVar1;
  TVector<float> *pTVar2;
  undefined1 *puVar3;
  float fVar4;
  TVector<float>_u_0 local_58;
  undefined1 local_48 [16];
  TFunctionRef<bool___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
  local_38;
  
  if (param_1->bBaseColor != false) {
    local_48._0_8_ = *(undefined8 *)param_4;
    local_48._8_8_ = *(undefined8 *)&param_4->field_0x8;
    pTVar2 = TSpatialPhotoSet<UE::Math::TVector<float>,float>::ComputeSample
                       (&this->BaseColorPhotoSet,(TVector<float> *)&local_58._s_0,param_2,param_3,
                        (TFunctionRef<bool___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
                         *)local_48,&param_5->BaseColor);
    *(undefined8 *)&(param_5->BaseColor).field0_0x0 = *(undefined8 *)&pTVar2->field0_0x0;
    (param_5->BaseColor).field0_0x0._s_0.Z = (pTVar2->field0_0x0)._s_0.Z;
    (param_5->HaveValues).bBaseColor = true;
  }
  puVar3 = &param_4->field_0x8;
  if (param_1->bRoughness != false) {
    local_48._0_8_ = *(undefined8 *)param_4;
    local_48._8_8_ = *(undefined8 *)puVar3;
    fVar4 = TSpatialPhotoSet<float,float>::ComputeSample
                      (&this->RoughnessPhotoSet,param_2,param_3,
                       (TFunctionRef<bool___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
                        *)local_48,&param_5->Roughness);
    (param_5->HaveValues).bRoughness = true;
    param_5->Roughness = fVar4;
  }
  if (param_1->bSpecular != false) {
    local_48._0_8_ = *(undefined8 *)param_4;
    local_48._8_8_ = *(undefined8 *)puVar3;
    fVar4 = TSpatialPhotoSet<float,float>::ComputeSample
                      (&this->SpecularPhotoSet,param_2,param_3,
                       (TFunctionRef<bool___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
                        *)local_48,&param_5->Specular);
    param_5->Specular = fVar4;
    (param_5->HaveValues).bSpecular = true;
  }
  if (param_1->bMetallic != false) {
    local_48._0_8_ = *(undefined8 *)param_4;
    local_48._8_8_ = *(undefined8 *)puVar3;
    fVar4 = TSpatialPhotoSet<float,float>::ComputeSample
                      (&this->MetallicPhotoSet,param_2,param_3,
                       (TFunctionRef<bool___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
                        *)local_48,&param_5->Metallic);
    param_5->Metallic = fVar4;
    (param_5->HaveValues).bMetallic = true;
  }
  if (param_1->bCombinedMRS != false) {
    local_58._s_0.Y = param_5->Roughness;
    local_58._s_0.X = param_5->Metallic;
    local_38._0_8_ = *(undefined8 *)param_4;
    local_38._8_8_ = *(undefined8 *)&param_4->field_0x8;
    local_58._s_0.Z = param_5->Specular;
    pTVar2 = TSpatialPhotoSet<UE::Math::TVector<float>,float>::ComputeSample
                       (&this->PackedMRSPhotoSet,(TVector<float> *)local_48,param_2,param_3,
                        &local_38,(TVector<float> *)&local_58._s_0);
    uVar1 = *(undefined8 *)&pTVar2->field0_0x0;
    fVar4 = (pTVar2->field0_0x0)._s_0.Z;
    param_5->Metallic = (float)uVar1;
    param_5->Specular = fVar4;
    param_5->Roughness = (float)((ulonglong)uVar1 >> 0x20);
    (param_5->HaveValues).bRoughness = true;
    (param_5->HaveValues).bMetallic = true;
    (param_5->HaveValues).bSpecular = true;
  }
  if (param_1->bEmissive != false) {
    local_38._0_8_ = *(undefined8 *)param_4;
    local_38._8_8_ = *(undefined8 *)&param_4->field_0x8;
    pTVar2 = TSpatialPhotoSet<UE::Math::TVector<float>,float>::ComputeSample
                       (&this->EmissivePhotoSet,(TVector<float> *)local_48,param_2,param_3,&local_38
                        ,&param_5->Emissive);
    *(undefined8 *)&(param_5->Emissive).field0_0x0 = *(undefined8 *)&pTVar2->field0_0x0;
    (param_5->Emissive).field0_0x0._s_0.Z = (pTVar2->field0_0x0)._s_0.Z;
    (param_5->HaveValues).bEmissive = true;
  }
  if (param_1->bOpacity != false) {
    local_38._0_8_ = *(undefined8 *)param_4;
    local_38._8_8_ = *(undefined8 *)&param_4->field_0x8;
    fVar4 = TSpatialPhotoSet<float,float>::ComputeSample
                      (&this->OpacityPhotoSet,param_2,param_3,&local_38,&param_5->Opacity);
    param_5->Opacity = fVar4;
    (param_5->HaveValues).bOpacity = true;
  }
  if (param_1->bSubsurfaceColor != false) {
    local_38._0_8_ = *(undefined8 *)param_4;
    local_38._8_8_ = *(undefined8 *)&param_4->field_0x8;
    pTVar2 = TSpatialPhotoSet<UE::Math::TVector<float>,float>::ComputeSample
                       (&this->SubsurfaceColorPhotoSet,(TVector<float> *)local_48,param_2,param_3,
                        &local_38,&param_5->SubsurfaceColor);
    *(undefined8 *)&(param_5->SubsurfaceColor).field0_0x0 = *(undefined8 *)&pTVar2->field0_0x0;
    (param_5->SubsurfaceColor).field0_0x0._s_0.Z = (pTVar2->field0_0x0)._s_0.Z;
    (param_5->HaveValues).bSubsurfaceColor = true;
  }
  if (param_1->bWorldNormal != false) {
    local_38._0_8_ = *(undefined8 *)param_4;
    local_38._8_8_ = *(undefined8 *)&param_4->field_0x8;
    pTVar2 = TSpatialPhotoSet<UE::Math::TVector<float>,float>::ComputeSample
                       (&this->WorldNormalPhotoSet,(TVector<float> *)local_48,param_2,param_3,
                        &local_38,&param_5->WorldNormal);
    *(undefined8 *)&(param_5->WorldNormal).field0_0x0 = *(undefined8 *)&pTVar2->field0_0x0;
    (param_5->WorldNormal).field0_0x0._s_0.Z = (pTVar2->field0_0x0)._s_0.Z;
    (param_5->HaveValues).bWorldNormal = true;
  }
  return true;
}

// ComputeSampleLocation @ 14cb7d080

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

bool __thiscall
UE::Geometry::FSceneCapturePhotoSet::ComputeSampleLocation
          (FSceneCapturePhotoSet *this,TVector<double> *param_1,TVector<double> *param_2,
          float param_3,
          TFunctionRef<bool___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
          *param_4,int *param_5,TVector2<double> *param_6)

{
  double dVar1;
  double dVar2;
  int iVar3;
  code *pcVar4;
  double dVar5;
  undefined1 auVar6 [12];
  double dVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 uVar10;
  char cVar11;
  uint uVar12;
  TSpatialPhoto<float> *pTVar13;
  float *pfVar14;
  TFrame3<double> *pTVar15;
  uint uVar16;
  longlong lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auStackY_b18 [32];
  double local_ae8;
  longlong local_ab8;
  TQuaternion<double>_u_0 local_ab0;
  TVector<double> *local_a90;
  double local_a88;
  double local_a80;
  double local_a78;
  double local_a70;
  double local_a68;
  double local_a60;
  double local_a58;
  double local_a50;
  double local_a48;
  double local_a40;
  double local_a38;
  double local_a30;
  TFunctionRef<bool___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
  *local_a28;
  double local_a20;
  double dStack_a18;
  double local_a10;
  TVector<double>_u_0 local_a08;
  double local_9f0;
  double local_9e8;
  double local_9e0;
  double local_9d8;
  double local_9d0;
  double local_9c8;
  double local_9b0;
  double local_988;
  double dStack_980;
  FViewMatrices local_968;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_b18;
  local_a28 = param_4;
  local_a90 = param_2;
  if (((0.0 < param_3) &&
      ((this->DeviceDepthPhotoSet).Photos.ArrayNum != (this->PhotoSetParams).ArrayNum)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("DeviceDepthPhotoSet.Num() == PhotoSetParams.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\SceneCapturePhotoSet.cpp"
                         ,0x195,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  *param_5 = -1;
  uVar16 = 0;
  (param_6->field0_0x0)._s_0.X = 0.0;
  (param_6->field0_0x0)._s_0.Y = 0.0;
  dVar7 = __real_3ff0000000000000;
  local_ab8 = (longlong)(this->PhotoSetParams).ArrayNum;
  local_ae8 = __real_3ff0000000000000;
  if (0 < local_ab8) {
    lVar17 = 0;
    dVar19 = __real_3ff0000000000000;
    do {
      uVar12 = 0;
      if ((int)uVar16 < (this->PhotoSetParams).ArrayNum) {
        uVar12 = ~uVar16 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
      pTVar15 = (TFrame3<double> *)((this->PhotoSetParams).AllocatorInstance.Data + lVar17);
      if ((*(int *)((longlong)&pTVar15[1].Origin.field0_0x0 + 0x10) !=
           *(int *)((longlong)&pTVar15[1].Origin.field0_0x0 + 0x14)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Params.Dimensions.IsSquare()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\SceneCapturePhotoSet.cpp"
                             ,0x1a1,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
      GetRenderCaptureViewMatrices
                (&local_968,pTVar15,pTVar15[1].Origin.field0_0x0._s_0.Y,
                 pTVar15[1].Origin.field0_0x0._s_0.X,
                 (FImageDimensions)pTVar15[1].Origin.field0_0x0._s_0.Z);
      dVar20 = (pTVar15->Rotation).field0_0x0._s_0.X;
      dVar1 = (pTVar15->Rotation).field0_0x0._s_0.Y;
      dVar30 = (pTVar15->Rotation).field0_0x0._s_0.Z;
      dVar2 = (pTVar15->Rotation).field0_0x0._s_0.W;
      dVar33 = (pTVar15->Origin).field0_0x0._s_0.X;
      dVar24 = (pTVar15->Origin).field0_0x0._s_0.Y;
      dVar18 = dVar30 + dVar30;
      local_ab0._s_0.X = 0.0;
      local_ab0._s_0.W = dVar7;
      dVar23 = dVar1 + dVar1;
      local_ab0._s_0.Y = 0.0;
      local_ab0._s_0.Z = 0.0;
      local_9d8 = dVar2 * (dVar20 + dVar20);
      dVar5 = dVar20 * (dVar20 + dVar20);
      local_a88 = (pTVar15->Origin).field0_0x0._s_0.Z;
      local_a08._s_0.Y = dVar2 * dVar23 + dVar20 * dVar18;
      local_9c8 = dVar20 * dVar18 - dVar2 * dVar23;
      local_a08._s_0.X = dVar20 * dVar23 - dVar2 * dVar18;
      local_9e0 = dVar20 * dVar23 + dVar2 * dVar18;
      local_a08._s_0.Z = dVar7 - (dVar30 * dVar18 + dVar1 * dVar23);
      local_9f0 = dVar7 - (dVar5 + dVar30 * dVar18);
      local_9e8 = dVar1 * dVar18 - local_9d8;
      local_9d8 = local_9d8 + dVar1 * dVar18;
      local_9d0 = dVar7 - (dVar5 + dVar1 * dVar23);
      local_9b0 = local_a88;
      TQuaternion<double>::SetFromRotationMatrix
                ((TQuaternion<double> *)&local_ab0._s_0,(TMatrix3<double> *)&local_a08._s_0);
      uVar8 = local_ab0._s_0.X;
      local_a78 = local_ab0._s_0.Z + local_ab0._s_0.Z;
      local_a80 = local_ab0._s_0.Z;
      local_a50 = local_ab0._s_0.X * local_a78;
      local_a70 = local_ab0._s_0.Y + local_ab0._s_0.Y;
      local_a68 = local_ab0._s_0.W;
      local_a30 = local_ab0._s_0.Y * local_a78;
      local_a58 = local_ab0._s_0.Y * local_a70;
      local_a48 = local_ab0._s_0.W * local_a70;
      dVar20 = local_a48 + local_a50;
      local_a38 = local_ab0._s_0.W * (local_ab0._s_0.X + local_ab0._s_0.X);
      dVar1 = local_a30 - local_a38;
      local_a40 = local_ab0._s_0.X * (local_ab0._s_0.X + local_ab0._s_0.X);
      auVar22._0_8_ = dVar7 - (local_a58 + local_a40);
      auVar22._8_8_ = 0;
      dVar30 = dVar1 * (local_a90->field0_0x0)._s_0.Y + dVar20 * (local_a90->field0_0x0)._s_0.X +
               auVar22._0_8_ * (local_a90->field0_0x0)._s_0.Z;
      if ((dVar30 <= __real_bfb999999999999a) && (dVar30 <= dVar19)) {
        dVar19 = pTVar15[1].Origin.field0_0x0._s_0.X;
        dVar32 = dVar19 * dVar20 + dVar33;
        dVar5 = dVar19 * dVar1 + dVar24;
        dVar23 = dVar19 * auVar22._0_8_ + local_9b0;
        auVar28 = auVar22;
        local_a60 = tan(pTVar15[1].Origin.field0_0x0._s_0.Y * __real_3f81df46a2529d39);
        dVar31 = (param_1->field0_0x0)._s_0.X - dVar33;
        local_a60 = local_a60 * dVar19;
        dVar2 = (param_1->field0_0x0)._s_0.Y - dVar24;
        dVar18 = (param_1->field0_0x0)._s_0.Z - local_9b0;
        local_a10 = local_a88;
        auVar29._8_8_ = 0;
        auVar29._0_8_ = dVar31 * dVar31 + dVar2 * dVar2 + dVar18 * dVar18;
        auVar29 = sqrtpd(auVar28,auVar29);
        if (auVar29._0_8_ <= 0.0) {
          dVar31 = 0.0;
          dVar2 = 0.0;
          dVar18 = 0.0;
        }
        else {
          dVar19 = dVar7 / auVar29._0_8_;
          dVar31 = dVar31 * dVar19;
          dVar2 = dVar2 * dVar19;
          dVar18 = dVar18 * dVar19;
        }
        dVar27 = dVar1 * dVar2 + dVar20 * dVar31 + auVar22._0_8_ * dVar18;
        local_a20 = dVar33;
        dStack_a18 = dVar24;
        dVar19 = local_ae8;
        if ((__real_3e45798ee2308c3a <
             (double)CONCAT44((uint)((ulonglong)dVar27 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar27,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
           (dVar27 = ((dVar20 * dVar32 + dVar1 * dVar5 + auVar22._0_8_ * dVar23) -
                     (dVar33 * dVar20 + dVar24 * dVar1 + local_9b0 * auVar22._0_8_)) / dVar27,
           0.0 <= dVar27)) {
          dVar32 = (dVar31 * dVar27 + dVar33) - dVar32;
          dVar23 = (dVar18 * dVar27 + local_9b0) - dVar23;
          dVar5 = (dVar2 * dVar27 + dVar24) - dVar5;
          dVar1 = ((dVar7 - (local_a80 * local_a78 + local_a58)) * dVar32 +
                   (local_a68 * local_a78 + (double)uVar8 * local_a70) * dVar5 +
                  (local_a50 - local_a48) * dVar23) * (dVar7 / local_a60);
          dVar20 = ((dVar7 - (local_a80 * local_a78 + local_a40)) * dVar5 +
                    ((double)uVar8 * local_a70 - local_a68 * local_a78) * dVar32 +
                   (local_a38 + local_a30) * dVar23) * (dVar7 / local_a60);
          if (((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
               dVar7) &&
             (((double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar20,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
               dVar7 && (cVar11 = (**(code **)local_a28)
                                            (*(undefined8 *)&local_a28->field_0x8,param_1,&local_a20
                                            ), cVar11 != '\0')))) {
            dVar2 = (dVar1 + dVar7) * __real_3fe0000000000000;
            dVar5 = __real_3fe0000000000000 - dVar20 * __real_3fe0000000000000;
            if (param_3 <= 0.0) {
LAB_14cb7d8f2:
              (param_6->field0_0x0)._s_0.X =
                   (double)*(int *)((longlong)&pTVar15[1].Origin.field0_0x0 + 0x10) * dVar2;
              (param_6->field0_0x0)._s_0.Y =
                   (double)*(int *)((longlong)&pTVar15[1].Origin.field0_0x0 + 0x14) * dVar5;
              *param_5 = uVar16;
              local_ae8 = dVar30;
              dVar19 = dVar30;
            }
            else {
              pTVar13 = TSpatialPhotoSet<float,float>::Get(&this->DeviceDepthPhotoSet,uVar16);
              if (0.0 <= dVar2) {
                dVar33 = dVar2;
                if (dVar7 <= dVar2) {
                  dVar33 = dVar7;
                }
              }
              else {
                dVar33 = 0.0;
              }
              if (0.0 <= dVar5) {
                dVar24 = dVar5;
                if (dVar7 <= dVar5) {
                  dVar24 = dVar7;
                }
              }
              else {
                dVar24 = 0.0;
              }
              iVar3 = (pTVar13->Image).Dimensions.Width;
              pfVar14 = TDenseGrid2<float>::operator[]
                                  (&(pTVar13->Image).Image,
                                   (longlong)
                                   (int)((double)(pTVar13->Image).Dimensions.Height * dVar24) *
                                   (longlong)iVar3 + (longlong)(int)((double)iVar3 * dVar33));
              if (0.0 < *pfVar14) {
                dVar33 = (double)*pfVar14;
                local_988 = local_968.InvViewProjectionMatrix.M[1][0] * dVar20 +
                            local_968.InvViewProjectionMatrix.M[0][0] * dVar1 +
                            local_968.InvViewProjectionMatrix.M[2][0] * dVar33 +
                            local_968.InvViewProjectionMatrix.M[3][0] * dVar7;
                dStack_980 = local_968.InvViewProjectionMatrix.M[1][1] * dVar20 +
                             local_968.InvViewProjectionMatrix.M[0][1] * dVar1 +
                             local_968.InvViewProjectionMatrix.M[2][1] * dVar33 +
                             local_968.InvViewProjectionMatrix.M[3][1] * dVar7;
                dVar24 = local_968.InvViewProjectionMatrix.M[1][2] * dVar20 +
                         local_968.InvViewProjectionMatrix.M[0][2] * dVar1 +
                         local_968.InvViewProjectionMatrix.M[2][2] * dVar33 +
                         local_968.InvViewProjectionMatrix.M[3][2] * dVar7;
                dVar20 = local_968.InvViewProjectionMatrix.M[1][3] * dVar20 +
                         local_968.InvViewProjectionMatrix.M[0][3] * dVar1 +
                         local_968.InvViewProjectionMatrix.M[2][3] * dVar33 +
                         local_968.InvViewProjectionMatrix.M[3][3] * dVar7;
                auVar6._4_8_ = local_968.InvViewProjectionMatrix.M[2][3] * dVar33;
                auVar6._0_4_ = (int)((ulonglong)dVar24 >> 0x20);
                auVar25._0_8_ = auVar6._0_8_ << 0x20;
                auVar25._8_4_ = SUB84(dVar20,0);
                auVar25._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
                dVar20 = dVar7 / auVar25._8_8_;
                dVar33 = dStack_a18 - (param_1->field0_0x0)._s_0.Y;
                dVar32 = local_a20 - (param_1->field0_0x0)._s_0.X;
                dVar18 = dStack_a18 - dStack_980 * dVar20;
                dVar1 = local_a20 - local_988 * dVar20;
                dVar23 = local_a10 - (param_1->field0_0x0)._s_0.Z;
                dVar20 = local_a10 - dVar24 * dVar20;
                auVar21._0_8_ = dVar20 * dVar20;
                auVar21._8_8_ = 0;
                auVar26._0_8_ = dVar18 * dVar18 + dVar1 * dVar1 + auVar21._0_8_;
                auVar26._8_8_ = 0;
                auVar22 = sqrtpd(auVar21,auVar26);
                auVar28._8_8_ = 0;
                auVar28._0_8_ = dVar33 * dVar33 + dVar32 * dVar32 + dVar23 * dVar23;
                auVar29 = sqrtpd(auVar22,auVar28);
                if ((float)((uint)((float)auVar22._0_8_ - (float)auVar29._0_8_) &
                           __xmm_7fffffff7fffffff7fffffff7fffffff) < param_3) goto LAB_14cb7d8f2;
              }
            }
          }
        }
      }
      uVar16 = uVar16 + 1;
      lVar17 = lVar17 + 0x50;
      local_ab8 = local_ab8 + -1;
    } while (local_ab8 != 0);
  }
  return *param_5 != -1;
}

// DisableAllCaptureTypes @ 14cb82240

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Geometry::FSceneCapturePhotoSet::DisableAllCaptureTypes(FSceneCapturePhotoSet *this)

{
  int *piVar1;
  
  (this->PhotoSetStatus).BaseColor = Disabled;
  TSpatialPhotoSet<UE::Math::TVector<float>,float>::Empty(&this->BaseColorPhotoSet);
  (this->PhotoSetStatus).Roughness = Disabled;
  TSpatialPhotoSet<float,float>::Empty(&this->RoughnessPhotoSet);
  (this->PhotoSetStatus).Specular = Disabled;
  TSpatialPhotoSet<float,float>::Empty(&this->SpecularPhotoSet);
  (this->PhotoSetStatus).Metallic = Disabled;
  TSpatialPhotoSet<float,float>::Empty(&this->MetallicPhotoSet);
  (this->PhotoSetStatus).CombinedMRS = Disabled;
  TSpatialPhotoSet<UE::Math::TVector<float>,float>::Empty(&this->PackedMRSPhotoSet);
  (this->PhotoSetStatus).WorldNormal = Disabled;
  DestructItems<TSharedPtr<UE::Geometry::TSpatialPhoto<UE::Math::TVector<float>_>,1>,int>
            ((TSharedPtr<UE::Geometry::TSpatialPhoto<UE::Math::TVector<float>_>,1> *)
             (this->WorldNormalPhotoSet).Photos.AllocatorInstance.Data,
             (this->WorldNormalPhotoSet).Photos.ArrayNum);
  piVar1 = &(this->WorldNormalPhotoSet).Photos.ArrayMax;
  (this->WorldNormalPhotoSet).Photos.ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)&this->WorldNormalPhotoSet,0,piVar1);
  }
  (this->PhotoSetStatus).Emissive = Disabled;
  TSpatialPhotoSet<UE::Math::TVector<float>,float>::Empty(&this->EmissivePhotoSet);
  (this->PhotoSetStatus).Opacity = Disabled;
  TSpatialPhotoSet<float,float>::Empty(&this->OpacityPhotoSet);
  (this->PhotoSetStatus).SubsurfaceColor = Disabled;
  TSpatialPhotoSet<UE::Math::TVector<float>,float>::Empty(&this->SubsurfaceColorPhotoSet);
  (this->PhotoSetStatus).DeviceDepth = Disabled;
  TSpatialPhotoSet<float,float>::Empty(&this->DeviceDepthPhotoSet);
  return;
}

// EmptyAllPhotoSets @ 14cb885b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UE::Geometry::FSceneCapturePhotoSet::EmptyAllPhotoSets(FSceneCapturePhotoSet *this)

{
  int *piVar1;
  
  TSpatialPhotoSet<UE::Math::TVector<float>,float>::Empty(&this->BaseColorPhotoSet);
  TSpatialPhotoSet<float,float>::Empty(&this->RoughnessPhotoSet);
  TSpatialPhotoSet<float,float>::Empty(&this->SpecularPhotoSet);
  TSpatialPhotoSet<float,float>::Empty(&this->MetallicPhotoSet);
  TSpatialPhotoSet<UE::Math::TVector<float>,float>::Empty(&this->PackedMRSPhotoSet);
  DestructItems<TSharedPtr<UE::Geometry::TSpatialPhoto<UE::Math::TVector<float>_>,1>,int>
            ((TSharedPtr<UE::Geometry::TSpatialPhoto<UE::Math::TVector<float>_>,1> *)
             (this->WorldNormalPhotoSet).Photos.AllocatorInstance.Data,
             (this->WorldNormalPhotoSet).Photos.ArrayNum);
  piVar1 = &(this->WorldNormalPhotoSet).Photos.ArrayMax;
  (this->WorldNormalPhotoSet).Photos.ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)&this->WorldNormalPhotoSet,0,piVar1);
  }
  TSpatialPhotoSet<UE::Math::TVector<float>,float>::Empty(&this->EmissivePhotoSet);
  TSpatialPhotoSet<float,float>::Empty(&this->OpacityPhotoSet);
  TSpatialPhotoSet<UE::Math::TVector<float>,float>::Empty(&this->SubsurfaceColorPhotoSet);
  TSpatialPhotoSet<float,float>::Empty(&this->DeviceDepthPhotoSet);
  return;
}

// EmptyPhotoSet @ 14cb886f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Geometry::FSceneCapturePhotoSet::EmptyPhotoSet
          (FSceneCapturePhotoSet *this,ERenderCaptureType param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((int)param_1 < 0x21) {
    if (param_1 == WorldNormal) {
      DestructItems<TSharedPtr<UE::Geometry::TSpatialPhoto<UE::Math::TVector<float>_>,1>,int>
                ((TSharedPtr<UE::Geometry::TSpatialPhoto<UE::Math::TVector<float>_>,1> *)
                 (this->WorldNormalPhotoSet).Photos.AllocatorInstance.Data,
                 (this->WorldNormalPhotoSet).Photos.ArrayNum);
      piVar1 = &(this->WorldNormalPhotoSet).Photos.ArrayMax;
      (this->WorldNormalPhotoSet).Photos.ArrayNum = 0;
      if (*piVar1 == 0) {
        return;
      }
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&this->WorldNormalPhotoSet,0,piVar1);
      return;
    }
    if (param_1 == BaseColor) {
      TSpatialPhotoSet<UE::Math::TVector<float>,float>::Empty(&this->BaseColorPhotoSet);
      return;
    }
    if (param_1 == Roughness) {
      TSpatialPhotoSet<float,float>::Empty(&this->RoughnessPhotoSet);
      return;
    }
    if (param_1 == Metallic) {
      TSpatialPhotoSet<float,float>::Empty(&this->MetallicPhotoSet);
      return;
    }
    if (param_1 == Specular) {
      TSpatialPhotoSet<float,float>::Empty(&this->SpecularPhotoSet);
      return;
    }
    if (param_1 == Emissive) {
      TSpatialPhotoSet<UE::Math::TVector<float>,float>::Empty(&this->EmissivePhotoSet);
      return;
    }
  }
  else {
    if (param_1 == DeviceDepth) {
      TSpatialPhotoSet<float,float>::Empty(&this->DeviceDepthPhotoSet);
      return;
    }
    if (param_1 == CombinedMRS) {
      TSpatialPhotoSet<UE::Math::TVector<float>,float>::Empty(&this->PackedMRSPhotoSet);
      return;
    }
    if (param_1 == Opacity) {
      TSpatialPhotoSet<float,float>::Empty(&this->OpacityPhotoSet);
      return;
    }
    if (param_1 == SubsurfaceColor) {
      TSpatialPhotoSet<UE::Math::TVector<float>,float>::Empty(&this->SubsurfaceColorPhotoSet);
      return;
    }
  }
  bVar3 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<3311711688373306140>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\SceneCapturePhotoSet.cpp"
                     ,0x31c,"false");
  if (!bVar3) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// GetCaptureConfig @ 14cb951a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FRenderCaptureConfig __thiscall
UE::Geometry::FSceneCapturePhotoSet::GetCaptureConfig
          (FSceneCapturePhotoSet *this,ERenderCaptureType param_1)

{
  FRenderCaptureConfig *pFVar1;
  undefined4 in_register_00000014;
  ERenderCaptureType in_R8D;
  
  pFVar1 = TRenderCaptureTypeData<UE::Geometry::FRenderCaptureConfig>::operator[]
                     (&this->RenderCaptureConfig,in_R8D);
  *(bool *)CONCAT44(in_register_00000014,param_1) = pFVar1->bAntiAliasing;
  return (FRenderCaptureConfig)SUB41(param_1,0);
}

// GetCaptureTargetWorld @ 14cb951d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall
UE::Geometry::FSceneCapturePhotoSet::GetCaptureTargetWorld(FSceneCapturePhotoSet *this)

{
  return this->TargetWorld;
}

// GetCaptureTypeStatus @ 14cb951e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ECaptureTypeStatus __thiscall
UE::Geometry::FSceneCapturePhotoSet::GetCaptureTypeStatus
          (FSceneCapturePhotoSet *this,ERenderCaptureType param_1)

{
  ECaptureTypeStatus *pEVar1;
  
  pEVar1 = TRenderCaptureTypeData<enum_UE::Geometry::FSceneCapturePhotoSet::ECaptureTypeStatus>::
           operator[](&this->PhotoSetStatus,param_1);
  return *pEVar1;
}

// GetPhotoSet1f @ 14cb98c80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSpatialPhotoSet<float,float> * __thiscall
UE::Geometry::FSceneCapturePhotoSet::GetPhotoSet1f
          (FSceneCapturePhotoSet *this,ERenderCaptureType param_1)

{
  code *pcVar1;
  bool bVar2;
  TSpatialPhotoSet<float,float> *pTVar3;
  
  if (param_1 != Roughness) {
    if (param_1 == Metallic) {
      return &this->MetallicPhotoSet;
    }
    if (param_1 == Specular) {
      return &this->SpecularPhotoSet;
    }
    if (param_1 == DeviceDepth) {
      return &this->DeviceDepthPhotoSet;
    }
    if (param_1 == Opacity) {
      return &this->OpacityPhotoSet;
    }
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3311711688373306078>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\SceneCapturePhotoSet.cpp"
                       ,0x2de,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSpatialPhotoSet<float,float> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return &this->RoughnessPhotoSet;
}

// GetPhotoSet3f @ 14cb98d20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSpatialPhotoSet<UE::Math::TVector<float>,float> * __thiscall
UE::Geometry::FSceneCapturePhotoSet::GetPhotoSet3f
          (FSceneCapturePhotoSet *this,ERenderCaptureType param_1)

{
  code *pcVar1;
  bool bVar2;
  TSpatialPhotoSet<UE::Math::TVector<float>,float> *pTVar3;
  
  if (param_1 != BaseColor) {
    if (param_1 == Emissive) {
      return &this->EmissivePhotoSet;
    }
    if (param_1 == WorldNormal) {
      return &this->WorldNormalPhotoSet;
    }
    if (param_1 == CombinedMRS) {
      return &this->PackedMRSPhotoSet;
    }
    if (param_1 == SubsurfaceColor) {
      return &this->SubsurfaceColorPhotoSet;
    }
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3311711688373306098>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\SceneCapturePhotoSet.cpp"
                       ,0x2f2,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSpatialPhotoSet<UE::Math::TVector<float>,float> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return &this->BaseColorPhotoSet;
}

// GetSceneCaptureStatus @ 14cb99c50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TRenderCaptureTypeData<UE::Geometry::FSceneCapturePhotoSet::ECaptureTypeStatus> * __thiscall
UE::Geometry::FSceneCapturePhotoSet::GetSceneCaptureStatus
          (FSceneCapturePhotoSet *this,
          TRenderCaptureTypeData<UE::Geometry::FSceneCapturePhotoSet::ECaptureTypeStatus>
          *__return_storage_ptr__)

{
  ECaptureTypeStatus EVar1;
  ECaptureTypeStatus EVar2;
  ECaptureTypeStatus EVar3;
  ECaptureTypeStatus EVar4;
  ECaptureTypeStatus EVar5;
  ECaptureTypeStatus EVar6;
  ECaptureTypeStatus EVar7;
  
  EVar1 = (this->PhotoSetStatus).Roughness;
  EVar2 = (this->PhotoSetStatus).Specular;
  EVar3 = (this->PhotoSetStatus).Metallic;
  EVar4 = (this->PhotoSetStatus).CombinedMRS;
  EVar5 = (this->PhotoSetStatus).WorldNormal;
  EVar6 = (this->PhotoSetStatus).Emissive;
  EVar7 = (this->PhotoSetStatus).Opacity;
  __return_storage_ptr__->BaseColor = (this->PhotoSetStatus).BaseColor;
  __return_storage_ptr__->Roughness = EVar1;
  __return_storage_ptr__->Specular = EVar2;
  __return_storage_ptr__->Metallic = EVar3;
  EVar1 = (this->PhotoSetStatus).SubsurfaceColor;
  EVar2 = (this->PhotoSetStatus).DeviceDepth;
  __return_storage_ptr__->CombinedMRS = EVar4;
  __return_storage_ptr__->WorldNormal = EVar5;
  __return_storage_ptr__->Emissive = EVar6;
  __return_storage_ptr__->Opacity = EVar7;
  __return_storage_ptr__->SubsurfaceColor = EVar1;
  __return_storage_ptr__->DeviceDepth = EVar2;
  return __return_storage_ptr__;
}

// GetSceneSamples @ 14cb99c80

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

void __thiscall
UE::Geometry::FSceneCapturePhotoSet::GetSceneSamples
          (FSceneCapturePhotoSet *this,FSceneSamples *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FScriptContainerElement *pFVar4;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar5;
  TVector<float>_u_0 *pTVar6;
  TArray<UE::Geometry::TFrame3<float>,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar8;
  code *pcVar9;
  undefined1 auVar10 [12];
  bool bVar11;
  double dVar12;
  float fVar13;
  double dVar14;
  float fVar15;
  bool bVar16;
  bool bVar17;
  uint uVar18;
  int iVar19;
  float *pfVar20;
  TVector<float> *pTVar21;
  FScriptContainerElement *pFVar22;
  longlong lVar23;
  longlong lVar24;
  uint uVar25;
  TFrame3<double> *pTVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar30;
  undefined1 auVar29 [16];
  double dVar31;
  undefined1 auVar32 [16];
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auVar36 [16];
  double dVar37;
  undefined1 auStackY_9e8 [32];
  long64 local_990;
  float local_988;
  float fStack_984;
  float local_980;
  TVector<float>_u_0 local_978;
  TFrame3<double> *local_968;
  uint local_960;
  longlong local_958;
  undefined8 local_950;
  float fStack_948;
  TQuaternion<float>_u_0 TStack_944;
  TVector<float>_u_0 local_934;
  FViewMatrices local_928;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_9e8;
  if ((this->PhotoSetStatus).DeviceDepth == Computed) {
    bVar16 = -1 < CpuChannel->Enabled;
    if (bVar16) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&::__CpuProfilerEventSpecId582,"SceneCapturePhotoSet::GetSceneSamples",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\SceneCapturePhotoSet.cpp"
                 ,0x246);
      FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId582);
    }
    fVar15 = __real_3f000000;
    dVar14 = __real_3fe0000000000000;
    fVar13 = __real_3f800000;
    dVar12 = __real_3ff0000000000000;
    uVar25 = 0;
    if (0 < (this->PhotoSetParams).ArrayNum) {
      lVar24 = 0;
      do {
        local_960 = ~uVar25 >> 0x1f;
        uVar18 = 0;
        if ((int)uVar25 < (this->PhotoSetParams).ArrayNum) {
          uVar18 = local_960;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pTVar26 = (TFrame3<double> *)((this->PhotoSetParams).AllocatorInstance.Data + lVar24 * 0x50)
        ;
        local_968 = pTVar26;
        GetRenderCaptureViewMatrices
                  (&local_928,pTVar26,pTVar26[1].Origin.field0_0x0._s_0.Y,
                   pTVar26[1].Origin.field0_0x0._s_0.X,
                   (FImageDimensions)pTVar26[1].Origin.field0_0x0._s_0.Z);
        local_990 = 0;
        if (0 < (longlong)*(int *)((longlong)&pTVar26[1].Origin.field0_0x0 + 0x14) *
                (longlong)*(int *)((longlong)&pTVar26[1].Origin.field0_0x0 + 0x10)) {
          local_958 = lVar24 << 4;
          do {
            uVar18 = 0;
            if ((int)uVar25 < (this->DeviceDepthPhotoSet).Photos.ArrayNum) {
              uVar18 = local_960;
            }
            if ((uVar18 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar4 = (this->DeviceDepthPhotoSet).Photos.AllocatorInstance.Data;
            if ((*(longlong *)(pFVar4 + local_958) == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x44d,L""), bVar17)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pfVar20 = TDenseGrid2<float>::operator[]
                                ((TDenseGrid2<float> *)(*(longlong *)(pFVar4 + local_958) + 0x58),
                                 local_990);
            fVar1 = *pfVar20;
            if ((0.0 < fVar1) && (fVar1 < fVar13)) {
              bVar17 = param_1->WorldPoint !=
                       (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)0x0;
              bVar11 = false;
              if ((this->PhotoSetStatus).WorldNormal == Computed) {
                if ((param_1->WorldPoint ==
                     (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)0x0) &&
                   (param_1->WorldOrientedPoints ==
                    (TArray<UE::Geometry::TFrame3<float>,TSizedDefaultAllocator<32>_> *)0x0)) {
                  bVar17 = false;
                }
                else {
                  bVar17 = true;
                }
                if ((param_1->WorldNormal !=
                     (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)0x0) ||
                   (param_1->WorldOrientedPoints !=
                    (TArray<UE::Geometry::TFrame3<float>,TSizedDefaultAllocator<32>_> *)0x0)) {
                  bVar11 = true;
                }
              }
              if (bVar17) {
                iVar19 = *(int *)((longlong)&pTVar26[1].Origin.field0_0x0 + 0x10);
                dVar34 = (double)(int)(local_990 % (longlong)iVar19) + dVar14;
                dVar31 = (double)(int)(local_990 / (longlong)iVar19) + dVar14;
                dVar37 = (double)fVar1;
                dVar35 = (dVar34 + dVar34) / (double)iVar19 - dVar12;
                dVar33 = dVar12 - (dVar31 + dVar31) /
                                  (double)*(int *)((longlong)&pTVar26[1].Origin.field0_0x0 + 0x14);
                auVar32._8_4_ = SUB84(dVar37,0);
                auVar32._0_8_ = dVar37;
                auVar32._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
                auVar27._8_4_ = SUB84(dVar35,0);
                auVar27._0_8_ = dVar35;
                auVar27._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
                auVar36._8_4_ = SUB84(dVar33,0);
                auVar36._0_8_ = dVar33;
                auVar36._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
                auVar28._8_4_ = SUB84(dVar12,0);
                auVar28._0_8_ = dVar12;
                auVar28._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
                dVar30 = auVar28._8_8_ * local_928.InvViewProjectionMatrix.M[3][1];
                dVar31 = dVar33 * local_928.InvViewProjectionMatrix.M[1][2] +
                         dVar35 * local_928.InvViewProjectionMatrix.M[0][2] +
                         dVar37 * local_928.InvViewProjectionMatrix.M[2][2] +
                         dVar12 * local_928.InvViewProjectionMatrix.M[3][2];
                dVar34 = dVar33 * local_928.InvViewProjectionMatrix.M[1][3] +
                         dVar35 * local_928.InvViewProjectionMatrix.M[0][3] +
                         dVar37 * local_928.InvViewProjectionMatrix.M[2][3] +
                         dVar12 * local_928.InvViewProjectionMatrix.M[3][3];
                auVar10._4_8_ = dVar30;
                auVar10._0_4_ = (int)((ulonglong)dVar31 >> 0x20);
                auVar29._0_8_ = auVar10._0_8_ << 0x20;
                auVar29._8_4_ = SUB84(dVar34,0);
                auVar29._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
                dVar34 = dVar12 / auVar29._8_8_;
                local_988 = (float)(dVar34 * (dVar33 * local_928.InvViewProjectionMatrix.M[1][0] +
                                              dVar35 * local_928.InvViewProjectionMatrix.M[0][0] +
                                              dVar37 * local_928.InvViewProjectionMatrix.M[2][0] +
                                             dVar12 * local_928.InvViewProjectionMatrix.M[3][0]));
                fStack_984 = (float)(dVar34 * (auVar36._8_8_ *
                                               local_928.InvViewProjectionMatrix.M[1][1] +
                                               auVar27._8_8_ *
                                               local_928.InvViewProjectionMatrix.M[0][1] +
                                               auVar32._8_8_ *
                                               local_928.InvViewProjectionMatrix.M[2][1] + dVar30));
                local_980 = (float)(dVar34 * dVar31);
              }
              if (bVar11) {
                uVar18 = 0;
                if ((int)uVar25 < (this->WorldNormalPhotoSet).Photos.ArrayNum) {
                  uVar18 = ~uVar25 >> 0x1f;
                }
                if ((uVar18 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pFVar4 = (this->WorldNormalPhotoSet).Photos.AllocatorInstance.Data;
                if ((*(longlong *)(pFVar4 + lVar24 * 0x10) == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x44d,L""), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pTVar21 = TDenseGrid2<UE::Math::TVector<float>_>::operator[]
                                    ((TDenseGrid2<UE::Math::TVector<float>_> *)
                                     (*(longlong *)(pFVar4 + lVar24 * 0x10) + 0x58),local_990);
                fVar1 = (pTVar21->field0_0x0)._s_0.X;
                fVar2 = (pTVar21->field0_0x0)._s_0.Y;
                fVar3 = (pTVar21->field0_0x0)._s_0.Z;
                local_978._s_0.X = ((fVar1 - fVar15) + fVar1) - fVar15;
                local_978._s_0.Y = ((fVar2 - fVar15) + fVar2) - fVar15;
                local_978._s_0.Z = ((fVar3 - fVar15) + fVar3) - fVar15;
              }
              pTVar5 = param_1->WorldPoint;
              if (pTVar5 != (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)0x0) {
                pFVar4 = (pTVar5->AllocatorInstance).Data;
                if (((pFVar4 <= (FScriptContainerElement *)&local_988) &&
                    ((FScriptContainerElement *)&local_988 <
                     pFVar4 + (longlong)pTVar5->ArrayMax * 0xc)) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                iVar19 = pTVar5->ArrayNum;
                if (iVar19 == pTVar5->ArrayMax) {
                  iVar19 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
                }
                pTVar5->ArrayNum = iVar19 + 1;
                pFVar4 = (pTVar5->AllocatorInstance).Data;
                *(ulonglong *)(pFVar4 + (longlong)iVar19 * 0xc) = CONCAT44(fStack_984,local_988);
                *(float *)(pFVar4 + (longlong)iVar19 * 0xc + 8) = local_980;
              }
              if ((this->PhotoSetStatus).WorldNormal == Computed) {
                pTVar5 = param_1->WorldNormal;
                if (pTVar5 != (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)0x0) {
                  pTVar6 = (TVector<float>_u_0 *)(pTVar5->AllocatorInstance).Data;
                  if (((pTVar6 <= &local_978) && (&local_978 < pTVar6 + pTVar5->ArrayMax)) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar17)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  iVar19 = pTVar5->ArrayNum;
                  if (iVar19 == pTVar5->ArrayMax) {
                    iVar19 = Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
                  }
                  pTVar5->ArrayNum = iVar19 + 1;
                  pFVar4 = (pTVar5->AllocatorInstance).Data;
                  *(ulonglong *)(pFVar4 + (longlong)iVar19 * 0xc) =
                       CONCAT44(local_978._s_0.Y,local_978._s_0.X);
                  *(float *)(pFVar4 + (longlong)iVar19 * 0xc + 8) = local_978._s_0.Z;
                }
                pTVar7 = param_1->WorldOrientedPoints;
                if (pTVar7 != (TArray<UE::Geometry::TFrame3<float>,TSizedDefaultAllocator<32>_> *)
                              0x0) {
                  local_950 = CONCAT44(fStack_984,local_988);
                  fStack_948 = local_980;
                  local_934._0_8_ = UE::Math::TVector<float>::ZAxisVector.field0_0x0._0_8_;
                  TStack_944._4_8_ = 0;
                  TStack_944._s_0.X = 0.0;
                  TStack_944._s_0.W = 1.0;
                  local_934._s_0.Z = UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Z;
                  TQuaternion<float>::SetFromTo
                            ((TQuaternion<float> *)&TStack_944._s_0,
                             (TVector<float> *)&local_934._s_0,(TVector<float> *)&local_978._s_0);
                  pFVar4 = (pTVar7->AllocatorInstance).Data;
                  if (((pFVar4 <= (FScriptContainerElement *)&local_950) &&
                      ((FScriptContainerElement *)&local_950 <
                       pFVar4 + (longlong)pTVar7->ArrayMax * 0x1c)) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar17)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  iVar19 = pTVar7->ArrayNum;
                  if (iVar19 == pTVar7->ArrayMax) {
                    iVar19 = Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x41c,&pTVar7->AllocatorInstance,&pTVar7->ArrayMax);
                  }
                  pTVar7->ArrayNum = iVar19 + 1;
                  pFVar4 = (pTVar7->AllocatorInstance).Data;
                  lVar23 = (longlong)iVar19 * 0x1c;
                  *(undefined8 *)(pFVar4 + lVar23) = local_950;
                  *(ulonglong *)(pFVar4 + lVar23 + 8) = CONCAT44(TStack_944._s_0.X,fStack_948);
                  *(undefined8 *)(pFVar4 + lVar23 + 0x10) = TStack_944._4_8_;
                  *(float *)(pFVar4 + lVar23 + 0x18) = TStack_944._s_0.W;
                }
              }
              if (((this->PhotoSetStatus).Metallic == Computed) &&
                 (pTVar8 = param_1->Metallic,
                 pTVar8 != (TArray<float,TSizedDefaultAllocator<32>_> *)0x0)) {
                uVar18 = 0;
                if ((int)uVar25 < (this->MetallicPhotoSet).Photos.ArrayNum) {
                  uVar18 = ~uVar25 >> 0x1f;
                }
                if ((uVar18 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pFVar4 = (this->MetallicPhotoSet).Photos.AllocatorInstance.Data;
                if ((*(longlong *)(pFVar4 + lVar24 * 0x10) == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x44d,L""), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pFVar22 = (FScriptContainerElement *)
                          TDenseGrid2<float>::operator[]
                                    ((TDenseGrid2<float> *)
                                     (*(longlong *)(pFVar4 + lVar24 * 0x10) + 0x58),local_990);
                pFVar4 = (pTVar8->AllocatorInstance).Data;
                if (((pFVar4 <= pFVar22) && (pFVar22 < pFVar4 + (longlong)pTVar8->ArrayMax * 4)) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                iVar19 = pTVar8->ArrayNum;
                if (iVar19 == pTVar8->ArrayMax) {
                  iVar19 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
                }
                pTVar8->ArrayNum = iVar19 + 1;
                *(undefined4 *)((pTVar8->AllocatorInstance).Data + (longlong)iVar19 * 4) =
                     *(undefined4 *)pFVar22;
              }
              if (((this->PhotoSetStatus).Roughness == Computed) &&
                 (pTVar8 = param_1->Roughness,
                 pTVar8 != (TArray<float,TSizedDefaultAllocator<32>_> *)0x0)) {
                uVar18 = 0;
                if ((int)uVar25 < (this->RoughnessPhotoSet).Photos.ArrayNum) {
                  uVar18 = ~uVar25 >> 0x1f;
                }
                if ((uVar18 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pFVar4 = (this->RoughnessPhotoSet).Photos.AllocatorInstance.Data;
                if ((*(longlong *)(pFVar4 + lVar24 * 0x10) == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x44d,L""), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pFVar22 = (FScriptContainerElement *)
                          TDenseGrid2<float>::operator[]
                                    ((TDenseGrid2<float> *)
                                     (*(longlong *)(pFVar4 + lVar24 * 0x10) + 0x58),local_990);
                pFVar4 = (pTVar8->AllocatorInstance).Data;
                if (((pFVar4 <= pFVar22) && (pFVar22 < pFVar4 + (longlong)pTVar8->ArrayMax * 4)) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                iVar19 = pTVar8->ArrayNum;
                if (iVar19 == pTVar8->ArrayMax) {
                  iVar19 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
                }
                pTVar8->ArrayNum = iVar19 + 1;
                *(undefined4 *)((pTVar8->AllocatorInstance).Data + (longlong)iVar19 * 4) =
                     *(undefined4 *)pFVar22;
              }
              if (((this->PhotoSetStatus).Specular == Computed) &&
                 (pTVar8 = param_1->Specular,
                 pTVar8 != (TArray<float,TSizedDefaultAllocator<32>_> *)0x0)) {
                uVar18 = 0;
                if ((int)uVar25 < (this->SpecularPhotoSet).Photos.ArrayNum) {
                  uVar18 = ~uVar25 >> 0x1f;
                }
                if ((uVar18 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pFVar4 = (this->SpecularPhotoSet).Photos.AllocatorInstance.Data;
                if ((*(longlong *)(pFVar4 + lVar24 * 0x10) == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x44d,L""), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pFVar22 = (FScriptContainerElement *)
                          TDenseGrid2<float>::operator[]
                                    ((TDenseGrid2<float> *)
                                     (*(longlong *)(pFVar4 + lVar24 * 0x10) + 0x58),local_990);
                pFVar4 = (pTVar8->AllocatorInstance).Data;
                if (((pFVar4 <= pFVar22) && (pFVar22 < pFVar4 + (longlong)pTVar8->ArrayMax * 4)) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                iVar19 = pTVar8->ArrayNum;
                if (iVar19 == pTVar8->ArrayMax) {
                  iVar19 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
                }
                pTVar8->ArrayNum = iVar19 + 1;
                *(undefined4 *)((pTVar8->AllocatorInstance).Data + (longlong)iVar19 * 4) =
                     *(undefined4 *)pFVar22;
              }
              if (((this->PhotoSetStatus).CombinedMRS == Computed) &&
                 (pTVar5 = param_1->PackedMRS,
                 pTVar5 != (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)0x0)) {
                uVar18 = 0;
                if ((int)uVar25 < (this->PackedMRSPhotoSet).Photos.ArrayNum) {
                  uVar18 = ~uVar25 >> 0x1f;
                }
                if ((uVar18 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pFVar4 = (this->PackedMRSPhotoSet).Photos.AllocatorInstance.Data;
                if ((*(longlong *)(pFVar4 + lVar24 * 0x10) == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x44d,L""), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pFVar22 = (FScriptContainerElement *)
                          TDenseGrid2<UE::Math::TVector<float>_>::operator[]
                                    ((TDenseGrid2<UE::Math::TVector<float>_> *)
                                     (*(longlong *)(pFVar4 + lVar24 * 0x10) + 0x58),local_990);
                pFVar4 = (pTVar5->AllocatorInstance).Data;
                if (((pFVar4 <= pFVar22) && (pFVar22 < pFVar4 + (longlong)pTVar5->ArrayMax * 0xc))
                   && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                iVar19 = pTVar5->ArrayNum;
                if (iVar19 == pTVar5->ArrayMax) {
                  iVar19 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
                }
                pTVar5->ArrayNum = iVar19 + 1;
                pFVar4 = (pTVar5->AllocatorInstance).Data;
                *(undefined8 *)(pFVar4 + (longlong)iVar19 * 0xc) = *(undefined8 *)pFVar22;
                *(undefined4 *)(pFVar4 + (longlong)iVar19 * 0xc + 8) = *(undefined4 *)(pFVar22 + 8);
              }
              if (((this->PhotoSetStatus).Emissive == Computed) &&
                 (pTVar5 = param_1->Emissive,
                 pTVar5 != (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)0x0)) {
                uVar18 = 0;
                if ((int)uVar25 < (this->EmissivePhotoSet).Photos.ArrayNum) {
                  uVar18 = ~uVar25 >> 0x1f;
                }
                if ((uVar18 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pFVar4 = (this->EmissivePhotoSet).Photos.AllocatorInstance.Data;
                if ((*(longlong *)(pFVar4 + lVar24 * 0x10) == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x44d,L""), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pFVar22 = (FScriptContainerElement *)
                          TDenseGrid2<UE::Math::TVector<float>_>::operator[]
                                    ((TDenseGrid2<UE::Math::TVector<float>_> *)
                                     (*(longlong *)(pFVar4 + lVar24 * 0x10) + 0x58),local_990);
                pFVar4 = (pTVar5->AllocatorInstance).Data;
                if (((pFVar4 <= pFVar22) && (pFVar22 < pFVar4 + (longlong)pTVar5->ArrayMax * 0xc))
                   && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                iVar19 = pTVar5->ArrayNum;
                if (iVar19 == pTVar5->ArrayMax) {
                  iVar19 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
                }
                pTVar5->ArrayNum = iVar19 + 1;
                pFVar4 = (pTVar5->AllocatorInstance).Data;
                *(undefined8 *)(pFVar4 + (longlong)iVar19 * 0xc) = *(undefined8 *)pFVar22;
                *(undefined4 *)(pFVar4 + (longlong)iVar19 * 0xc + 8) = *(undefined4 *)(pFVar22 + 8);
              }
              if (((this->PhotoSetStatus).BaseColor == Computed) &&
                 (pTVar5 = param_1->BaseColor,
                 pTVar5 != (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)0x0)) {
                uVar18 = 0;
                if ((int)uVar25 < (this->BaseColorPhotoSet).Photos.ArrayNum) {
                  uVar18 = ~uVar25 >> 0x1f;
                }
                if ((uVar18 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pFVar4 = (this->BaseColorPhotoSet).Photos.AllocatorInstance.Data;
                if ((*(longlong *)(pFVar4 + lVar24 * 0x10) == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x44d,L""), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pFVar22 = (FScriptContainerElement *)
                          TDenseGrid2<UE::Math::TVector<float>_>::operator[]
                                    ((TDenseGrid2<UE::Math::TVector<float>_> *)
                                     (*(longlong *)(pFVar4 + lVar24 * 0x10) + 0x58),local_990);
                pFVar4 = (pTVar5->AllocatorInstance).Data;
                if (((pFVar4 <= pFVar22) && (pFVar22 < pFVar4 + (longlong)pTVar5->ArrayMax * 0xc))
                   && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                iVar19 = pTVar5->ArrayNum;
                if (iVar19 == pTVar5->ArrayMax) {
                  iVar19 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
                }
                pTVar5->ArrayNum = iVar19 + 1;
                pFVar4 = (pTVar5->AllocatorInstance).Data;
                *(undefined8 *)(pFVar4 + (longlong)iVar19 * 0xc) = *(undefined8 *)pFVar22;
                *(undefined4 *)(pFVar4 + (longlong)iVar19 * 0xc + 8) = *(undefined4 *)(pFVar22 + 8);
              }
              if (((this->PhotoSetStatus).SubsurfaceColor == Computed) &&
                 (pTVar5 = param_1->SubsurfaceColor,
                 pTVar5 != (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)0x0)) {
                uVar18 = 0;
                if ((int)uVar25 < (this->SubsurfaceColorPhotoSet).Photos.ArrayNum) {
                  uVar18 = ~uVar25 >> 0x1f;
                }
                if ((uVar18 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pFVar4 = (this->SubsurfaceColorPhotoSet).Photos.AllocatorInstance.Data;
                if ((*(longlong *)(pFVar4 + lVar24 * 0x10) == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x44d,L""), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pFVar22 = (FScriptContainerElement *)
                          TDenseGrid2<UE::Math::TVector<float>_>::operator[]
                                    ((TDenseGrid2<UE::Math::TVector<float>_> *)
                                     (*(longlong *)(pFVar4 + lVar24 * 0x10) + 0x58),local_990);
                pFVar4 = (pTVar5->AllocatorInstance).Data;
                if (((pFVar4 <= pFVar22) && (pFVar22 < pFVar4 + (longlong)pTVar5->ArrayMax * 0xc))
                   && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                iVar19 = pTVar5->ArrayNum;
                if (iVar19 == pTVar5->ArrayMax) {
                  iVar19 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
                }
                pTVar5->ArrayNum = iVar19 + 1;
                pFVar4 = (pTVar5->AllocatorInstance).Data;
                *(undefined8 *)(pFVar4 + (longlong)iVar19 * 0xc) = *(undefined8 *)pFVar22;
                *(undefined4 *)(pFVar4 + (longlong)iVar19 * 0xc + 8) = *(undefined4 *)(pFVar22 + 8);
              }
              pTVar26 = local_968;
              if (((this->PhotoSetStatus).Opacity == Computed) &&
                 (pTVar8 = param_1->Opacity,
                 pTVar8 != (TArray<float,TSizedDefaultAllocator<32>_> *)0x0)) {
                uVar18 = 0;
                if ((int)uVar25 < (this->OpacityPhotoSet).Photos.ArrayNum) {
                  uVar18 = ~uVar25 >> 0x1f;
                }
                if ((uVar18 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pFVar4 = (this->OpacityPhotoSet).Photos.AllocatorInstance.Data;
                if ((*(longlong *)(pFVar4 + lVar24 * 0x10) == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x44d,L""), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pFVar22 = (FScriptContainerElement *)
                          TDenseGrid2<float>::operator[]
                                    ((TDenseGrid2<float> *)
                                     (*(longlong *)(pFVar4 + lVar24 * 0x10) + 0x58),local_990);
                pFVar4 = (pTVar8->AllocatorInstance).Data;
                if (((pFVar4 <= pFVar22) && (pFVar22 < pFVar4 + (longlong)pTVar8->ArrayMax * 4)) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                iVar19 = pTVar8->ArrayNum;
                if (iVar19 == pTVar8->ArrayMax) {
                  iVar19 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
                }
                pTVar8->ArrayNum = iVar19 + 1;
                *(undefined4 *)((pTVar8->AllocatorInstance).Data + (longlong)iVar19 * 4) =
                     *(undefined4 *)pFVar22;
                pTVar26 = local_968;
              }
            }
            local_990 = local_990 + 1;
          } while (local_990 <
                   (longlong)*(int *)((longlong)&pTVar26[1].Origin.field0_0x0 + 0x14) *
                   (longlong)*(int *)((longlong)&pTVar26[1].Origin.field0_0x0 + 0x10));
        }
        uVar25 = uVar25 + 1;
        lVar24 = lVar24 + 1;
      } while ((int)uVar25 < (this->PhotoSetParams).ArrayNum);
    }
    if (bVar16) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  else {
    bVar16 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<3311711688373305921>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\SceneCapturePhotoSet.cpp"
                        ,0x241,"PhotoSetStatus.DeviceDepth == ECaptureTypeStatus::Computed");
    if (bVar16) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  return;
}

// GetSpatialPhotoParams @ 14cb9ff30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<UE::Geometry::FSpatialPhotoParams,TSizedDefaultAllocator<32>_> * __thiscall
UE::Geometry::FSceneCapturePhotoSet::GetSpatialPhotoParams(FSceneCapturePhotoSet *this)

{
  return &this->PhotoSetParams;
}

// OptimizePhotoSets @ 14cba6bf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UE::Geometry::FSceneCapturePhotoSet::OptimizePhotoSets(FSceneCapturePhotoSet *this)

{
  return;
}

// SetCaptureConfig @ 14cbae930

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Geometry::FSceneCapturePhotoSet::SetCaptureConfig
          (FSceneCapturePhotoSet *this,ERenderCaptureType param_1,FRenderCaptureConfig *param_2)

{
  bool bVar1;
  FRenderCaptureConfig *pFVar2;
  ECaptureTypeStatus *pEVar3;
  
  pFVar2 = TRenderCaptureTypeData<UE::Geometry::FRenderCaptureConfig>::operator[]
                     (&this->RenderCaptureConfig,param_1);
  if (pFVar2->bAntiAliasing != param_2->bAntiAliasing) {
    pEVar3 = TRenderCaptureTypeData<enum_UE::Geometry::FSceneCapturePhotoSet::ECaptureTypeStatus>::
             operator[](&this->PhotoSetStatus,param_1);
    if (*pEVar3 != Disabled) {
      pEVar3 = TRenderCaptureTypeData<enum_UE::Geometry::FSceneCapturePhotoSet::ECaptureTypeStatus>
               ::operator[](&this->PhotoSetStatus,param_1);
      *pEVar3 = Pending;
    }
    EmptyPhotoSet(this,param_1);
    bVar1 = param_2->bAntiAliasing;
    pFVar2 = TRenderCaptureTypeData<UE::Geometry::FRenderCaptureConfig>::operator[]
                       (&this->RenderCaptureConfig,param_1);
    pFVar2->bAntiAliasing = bVar1;
  }
  return;
}

// SetCaptureSceneActors @ 14cbae9d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Geometry::FSceneCapturePhotoSet::SetCaptureSceneActors
          (FSceneCapturePhotoSet *this,UWorld *param_1,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  SetCaptureSceneActorsAndComponents(this,param_1,param_2,&local_18);
  return;
}

// SetCaptureSceneActorsAndComponents @ 14cbaea00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Geometry::FSceneCapturePhotoSet::SetCaptureSceneActorsAndComponents
          (FSceneCapturePhotoSet *this,UWorld *param_1,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *pTVar5;
  
  if (this->TargetWorld == param_1) {
    iVar4 = (this->VisibleActors).ArrayNum;
    if ((iVar4 == param_2->ArrayNum) &&
       ((iVar4 == 0 ||
        (iVar4 = memcmp((this->VisibleActors).AllocatorInstance.Data,
                        (param_2->AllocatorInstance).Data,(longlong)iVar4 << 3), iVar4 == 0)))) {
      iVar4 = (this->VisibleComponents).ArrayNum;
      if ((iVar4 == param_3->ArrayNum) &&
         ((iVar4 == 0 ||
          (iVar4 = memcmp((this->VisibleComponents).AllocatorInstance.Data,
                          (param_3->AllocatorInstance).Data,(longlong)iVar4 << 3), iVar4 == 0))))
      goto LAB_14cbaeb33;
    }
  }
  if ((this->PhotoSetStatus).BaseColor != Disabled) {
    (this->PhotoSetStatus).BaseColor = Pending;
  }
  if ((this->PhotoSetStatus).Roughness != Disabled) {
    (this->PhotoSetStatus).Roughness = Pending;
  }
  if ((this->PhotoSetStatus).Specular != Disabled) {
    (this->PhotoSetStatus).Specular = Pending;
  }
  if ((this->PhotoSetStatus).Metallic != Disabled) {
    (this->PhotoSetStatus).Metallic = Pending;
  }
  if ((this->PhotoSetStatus).CombinedMRS != Disabled) {
    (this->PhotoSetStatus).CombinedMRS = Pending;
  }
  if ((this->PhotoSetStatus).WorldNormal != Disabled) {
    (this->PhotoSetStatus).WorldNormal = Pending;
  }
  if ((this->PhotoSetStatus).Emissive != Disabled) {
    (this->PhotoSetStatus).Emissive = Pending;
  }
  if ((this->PhotoSetStatus).Opacity != Disabled) {
    (this->PhotoSetStatus).Opacity = Pending;
  }
  if ((this->PhotoSetStatus).SubsurfaceColor != Disabled) {
    (this->PhotoSetStatus).SubsurfaceColor = Pending;
  }
  if ((this->PhotoSetStatus).DeviceDepth != Disabled) {
    (this->PhotoSetStatus).DeviceDepth = Pending;
  }
  EmptyAllPhotoSets(this);
  piVar1 = &(this->PhotoSetParams).ArrayMax;
  (this->PhotoSetParams).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,0,&(this->PhotoSetParams).AllocatorInstance,0,piVar1);
  }
LAB_14cbaeb33:
  this->TargetWorld = param_1;
  pTVar2 = &this->VisibleActors;
  if (pTVar2 != param_2) {
    iVar4 = param_2->ArrayNum;
    piVar1 = &(this->VisibleActors).ArrayMax;
    pFVar3 = (param_2->AllocatorInstance).Data;
    (this->VisibleActors).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar4,*piVar1,&pTVar2->AllocatorInstance,iVar4,piVar1);
      if (iVar4 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,pFVar3,(longlong)iVar4 << 3);
      }
    }
  }
  pTVar5 = &this->VisibleComponents;
  if (pTVar5 != param_3) {
    iVar4 = param_3->ArrayNum;
    piVar1 = &(this->VisibleComponents).ArrayMax;
    pFVar3 = (param_3->AllocatorInstance).Data;
    (this->VisibleComponents).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar4,*piVar1,&pTVar5->AllocatorInstance,iVar4,piVar1);
      if (iVar4 != 0) {
        memcpy((pTVar5->AllocatorInstance).Data,pFVar3,(longlong)iVar4 << 3);
      }
    }
  }
  return;
}

// SetCaptureSceneComponents @ 14cbaec20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Geometry::FSceneCapturePhotoSet::SetCaptureSceneComponents
          (FSceneCapturePhotoSet *this,UWorld *param_1,
          TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  SetCaptureSceneActorsAndComponents(this,param_1,&local_18,param_2);
  return;
}

// SetCaptureTypeEnabled @ 14cbaec50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Geometry::FSceneCapturePhotoSet::SetCaptureTypeEnabled
          (FSceneCapturePhotoSet *this,ERenderCaptureType param_1,bool param_2)

{
  ECaptureTypeStatus *pEVar1;
  
  if (param_2) {
    pEVar1 = TRenderCaptureTypeData<enum_UE::Geometry::FSceneCapturePhotoSet::ECaptureTypeStatus>::
             operator[](&this->PhotoSetStatus,param_1);
    if (*pEVar1 == Disabled) {
      pEVar1 = TRenderCaptureTypeData<enum_UE::Geometry::FSceneCapturePhotoSet::ECaptureTypeStatus>
               ::operator[](&this->PhotoSetStatus,param_1);
      *pEVar1 = Pending;
      return;
    }
  }
  else {
    pEVar1 = TRenderCaptureTypeData<enum_UE::Geometry::FSceneCapturePhotoSet::ECaptureTypeStatus>::
             operator[](&this->PhotoSetStatus,param_1);
    *pEVar1 = Disabled;
    EmptyPhotoSet(this,param_1);
  }
  return;
}

// SetEnableVisibilityByUnregisterMode @ 14cbaf3c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Geometry::FSceneCapturePhotoSet::SetEnableVisibilityByUnregisterMode
          (FSceneCapturePhotoSet *this,bool param_1)

{
  this->bEnforceVisibilityViaUnregister = param_1;
  return;
}

// SetEnableWriteDebugImages @ 14cbaf430

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Geometry::FSceneCapturePhotoSet::SetEnableWriteDebugImages
          (FSceneCapturePhotoSet *this,bool param_1,FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  this->bWriteDebugImages = param_1;
  iVar1 = (param_2->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  if (0 < iVar3) {
    ::FString::AssignRange
              (&this->DebugImagesFolderName,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar3)
    ;
  }
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// SetSpatialPhotoParams @ 14cbb1e60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Geometry::FSceneCapturePhotoSet::SetSpatialPhotoParams
          (FSceneCapturePhotoSet *this,
          TArray<UE::Geometry::FSpatialPhotoParams,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TArray<UE::Geometry::FSpatialPhotoParams,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  bool bVar4;
  
  pTVar2 = &this->PhotoSetParams;
  iVar3 = (this->PhotoSetParams).ArrayNum;
  if ((iVar3 == param_1->ArrayNum) &&
     (bVar4 = CompareItems<UE::Geometry::FSpatialPhotoParams,int>
                        ((FSpatialPhotoParams *)(pTVar2->AllocatorInstance).Data,
                         (FSpatialPhotoParams *)(param_1->AllocatorInstance).Data,iVar3), bVar4)) {
    return;
  }
  if ((this->PhotoSetStatus).BaseColor != Disabled) {
    (this->PhotoSetStatus).BaseColor = Pending;
  }
  if ((this->PhotoSetStatus).Roughness != Disabled) {
    (this->PhotoSetStatus).Roughness = Pending;
  }
  if ((this->PhotoSetStatus).Specular != Disabled) {
    (this->PhotoSetStatus).Specular = Pending;
  }
  if ((this->PhotoSetStatus).Metallic != Disabled) {
    (this->PhotoSetStatus).Metallic = Pending;
  }
  if ((this->PhotoSetStatus).CombinedMRS != Disabled) {
    (this->PhotoSetStatus).CombinedMRS = Pending;
  }
  if ((this->PhotoSetStatus).WorldNormal != Disabled) {
    (this->PhotoSetStatus).WorldNormal = Pending;
  }
  if ((this->PhotoSetStatus).Emissive != Disabled) {
    (this->PhotoSetStatus).Emissive = Pending;
  }
  if ((this->PhotoSetStatus).Opacity != Disabled) {
    (this->PhotoSetStatus).Opacity = Pending;
  }
  if ((this->PhotoSetStatus).SubsurfaceColor != Disabled) {
    (this->PhotoSetStatus).SubsurfaceColor = Pending;
  }
  if ((this->PhotoSetStatus).DeviceDepth != Disabled) {
    (this->PhotoSetStatus).DeviceDepth = Pending;
  }
  EmptyAllPhotoSets(this);
  if (pTVar2 != param_1) {
    iVar3 = param_1->ArrayNum;
    piVar1 = &(this->PhotoSetParams).ArrayMax;
    _Src = (param_1->AllocatorInstance).Data;
    (this->PhotoSetParams).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return;
    }
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
    if (iVar3 != 0) {
      memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar3 * 0x50);
    }
  }
  return;
}

