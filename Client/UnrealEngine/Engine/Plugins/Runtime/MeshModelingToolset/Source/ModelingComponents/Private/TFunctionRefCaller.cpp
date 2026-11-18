// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 460

// Call @ 14ca7bbf0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<TFunction<bool___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>_const_,bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
::Call(void *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  UNRECOVERED_JUMPTABLE = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014ca7bc4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(uVar2,param_2,param_3);
  return (bool)uVar1;
}

// Call @ 14ca7bc60

TVector4<float> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<UE::Math::TVector4<float>_(__cdecl*)(int,float_*_&),UE::Math::TVector4<float>,int,float_*_&>
::Call(TVector4<float> *__return_storage_ptr__,void *param_1,int *param_2,float **param_3)

{
  (**(code **)param_1)(__return_storage_ptr__,*param_2,param_3);
  return __return_storage_ptr__;
}

// Call @ 14ca7bc90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(TArray<TUniquePtr<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>,TDefaultDelete<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_>_>,TSizedDefaultAllocator<32>_>_&),void,TArray<TUniquePtr<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>,TDefaultDelete<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_>_>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,
      TArray<TUniquePtr<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>,TDefaultDelete<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_>_>,TSizedDefaultAllocator<32>_>
      *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014ca7bc96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(param_2);
  return;
}

// Call @ 14ca7bca0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(bool,UE::Geometry::FMeshMapEvaluator::FCorrespondenceSample_const_&,UE::Math::TVector2<double>_const_&,UE::Geometry::FVector2i_const_&),void,bool,UE::Geometry::FMeshMapEvaluator::FCorrespondenceSample_const_&,UE::Math::TVector2<double>_const_&,UE::Geometry::FVector2i_const_&>
::Call(void *param_1,bool *param_2,FCorrespondenceSample *param_3,TVector2<double> *param_4,
      FVector2i *param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00014ca7bcbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(*param_2,param_3,param_4,param_5);
  return;
}

// Call @ 14ca7bcd0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<bool_(__cdecl*)(float_const_&,float_const_&),bool,float_const_&,float_const_&>::
Call(void *param_1,float *param_2,float *param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014ca7bcdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)param_1)(param_2,param_3);
  return (bool)uVar1;
}

// Call @ 14ca7bcf0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<bool_(__cdecl*)(FColor_const_&,FColor_const_&),bool,FColor_const_&,FColor_const_&>
::Call(void *param_1,FColor *param_2,FColor *param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014ca7bcfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)param_1)(param_2,param_3);
  return (bool)uVar1;
}

// Call @ 14ca7bd10

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<bool_(__cdecl*)(FName_const_&,FName_const_&),bool,FName_const_&,FName_const_&>::
Call(void *param_1,FName *param_2,FName *param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014ca7bd1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)param_1)(param_2,param_3);
  return (bool)uVar1;
}

// Call @ 14ca7bd30

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<bool_(__cdecl*)(FString_const_&,FString_const_&),bool,FString_const_&,FString_const_&>
::Call(void *param_1,FString *param_2,FString *param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014ca7bd3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)param_1)(param_2,param_3);
  return (bool)uVar1;
}

// Call @ 14ca7bd50

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<bool_(__cdecl*)(enum_EBaseCreateFromSelectedTargetType_const_&,enum_EBaseCreateFromSelectedTargetType_const_&),bool,enum_EBaseCreateFromSelectedTargetType_const_&,enum_EBaseCreateFromSelectedTargetType_const_&>
::Call(void *param_1,EBaseCreateFromSelectedTargetType *param_2,
      EBaseCreateFromSelectedTargetType *param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014ca7bd5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)param_1)(param_2,param_3);
  return (bool)uVar1;
}

// Call @ 14ca7bd70

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<bool_(__cdecl*)(bool_const_&,bool_const_&),bool,bool_const_&,bool_const_&>::Call
          (void *param_1,bool *param_2,bool *param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014ca7bd7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)param_1)(param_2,param_3);
  return (bool)uVar1;
}

// Call @ 14ca7bd90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMeshElementsVisualizer::OnCreated'::__l2::<lambda_10>,void,bool_const_&>::Call
          (void *param_1,bool *param_2)

{
  UMeshElementsVisualizer::UpdateLineDepthBiasScale(*(UMeshElementsVisualizer **)param_1);
  *(undefined1 *)(*(longlong *)param_1 + 0x130) = 1;
  return;
}

// Call @ 14ca7bdc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMeshElementsVisualizer::OnCreated'::__l2::<lambda_11>,void,FColor_const_&>::
Call(void *param_1,FColor *param_2)

{
  *(undefined1 *)(*(longlong *)param_1 + 0x130) = 1;
  return;
}

// Call @ 14ca7bde0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMeshElementsVisualizer::OnCreated'::__l2::<lambda_12>,void,FColor_const_&>::
Call(void *param_1,FColor *param_2)

{
  *(undefined1 *)(*(longlong *)param_1 + 0x130) = 1;
  return;
}

// Call @ 14ca7be00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMeshElementsVisualizer::OnCreated'::__l2::<lambda_13>,void,FColor_const_&>::
Call(void *param_1,FColor *param_2)

{
  *(undefined1 *)(*(longlong *)param_1 + 0x130) = 1;
  return;
}

// Call @ 14ca7be20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMeshElementsVisualizer::OnCreated'::__l2::<lambda_14>,void,FColor_const_&>::
Call(void *param_1,FColor *param_2)

{
  *(undefined1 *)(*(longlong *)param_1 + 0x130) = 1;
  return;
}

// Call @ 14ca7be40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMeshElementsVisualizer::OnCreated'::__l2::<lambda_15>,void,FColor_const_&>::
Call(void *param_1,FColor *param_2)

{
  *(undefined1 *)(*(longlong *)param_1 + 0x130) = 1;
  return;
}

// Call @ 14ca7be60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMeshElementsVisualizer::OnCreated'::__l2::<lambda_16>,void,FColor_const_&>::
Call(void *param_1,FColor *param_2)

{
  *(undefined1 *)(*(longlong *)param_1 + 0x130) = 1;
  return;
}

// Call @ 14ca7be80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::SplineDeformDynamicMesh'::__l8::<lambda_4>::operator()<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>_>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  ``UE::Geometry::SplineDeformDynamicMesh'::__l8::<lambda_4>::
  operator()<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>_>'::__l2::
  <lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14ca7be90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMeshRenderBufferSetConversionUtil::InitializeBuffersFromOverlays<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `FMeshRenderBufferSetConversionUtil::
  InitializeBuffersFromOverlays<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>'
  ::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14ca7bea0

TVector4<float> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`MakeColorEvaluator<1>'::__l2::<lambda_1>,UE::Math::TVector4<float>,UE::Geometry::FMeshMapEvaluator::FCorrespondenceSample_const_&>
::Call(TVector4<float> *__return_storage_ptr__,void *param_1,FCorrespondenceSample *param_2)

{
  `MakeColorEvaluator<1>'::__l2::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Call @ 14ca7bed0

TVector4<float> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`MakeColorEvaluator<2>'::__l2::<lambda_1>,UE::Math::TVector4<float>,UE::Geometry::FMeshMapEvaluator::FCorrespondenceSample_const_&>
::Call(TVector4<float> *__return_storage_ptr__,void *param_1,FCorrespondenceSample *param_2)

{
  float fVar1;
  int local_res8 [8];
  TVector2<double>_u_0 local_18;
  
  local_18._s_0.X = (param_2->DetailBaryCoords).field0_0x0._s_0.X;
  local_18._s_0.Y = (param_2->DetailBaryCoords).field0_0x0._s_0.Y;
  local_res8[0] = param_2->DetailTriID;
  fVar1 = UE::Geometry::TSpatialPhotoSet<float,float>::ComputeSampleNearest
                    ((TSpatialPhotoSet<float,float> *)
                     (*(longlong *)((longlong)param_1 + 0x50) + 0x68),local_res8,
                     (TVector2<double> *)&local_18._s_0,(float *)((longlong)param_1 + 0x18));
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
  return __return_storage_ptr__;
}

// Call @ 14ca7bf30

TVector4<float> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`MakeColorEvaluator<4>'::__l2::<lambda_1>,UE::Math::TVector4<float>,UE::Geometry::FMeshMapEvaluator::FCorrespondenceSample_const_&>
::Call(TVector4<float> *__return_storage_ptr__,void *param_1,FCorrespondenceSample *param_2)

{
  float fVar1;
  int local_res8 [8];
  TVector2<double>_u_0 local_18;
  
  local_18._s_0.X = (param_2->DetailBaryCoords).field0_0x0._s_0.X;
  local_18._s_0.Y = (param_2->DetailBaryCoords).field0_0x0._s_0.Y;
  local_res8[0] = param_2->DetailTriID;
  fVar1 = UE::Geometry::TSpatialPhotoSet<float,float>::ComputeSampleNearest
                    ((TSpatialPhotoSet<float,float> *)
                     (*(longlong *)((longlong)param_1 + 0x50) + 0x88),local_res8,
                     (TVector2<double> *)&local_18._s_0,(float *)((longlong)param_1 + 0x20));
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
  return __return_storage_ptr__;
}

// Call @ 14ca7bfa0

TVector4<float> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`MakeColorEvaluator<8>'::__l2::<lambda_1>,UE::Math::TVector4<float>,UE::Geometry::FMeshMapEvaluator::FCorrespondenceSample_const_&>
::Call(TVector4<float> *__return_storage_ptr__,void *param_1,FCorrespondenceSample *param_2)

{
  float fVar1;
  int local_res8 [8];
  TVector2<double>_u_0 local_18;
  
  local_18._s_0.X = (param_2->DetailBaryCoords).field0_0x0._s_0.X;
  local_18._s_0.Y = (param_2->DetailBaryCoords).field0_0x0._s_0.Y;
  local_res8[0] = param_2->DetailTriID;
  fVar1 = UE::Geometry::TSpatialPhotoSet<float,float>::ComputeSampleNearest
                    ((TSpatialPhotoSet<float,float> *)
                     (*(longlong *)((longlong)param_1 + 0x50) + 0x78),local_res8,
                     (TVector2<double> *)&local_18._s_0,(float *)((longlong)param_1 + 0x1c));
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
  return __return_storage_ptr__;
}

// Call @ 14ca7c000

TVector4<float> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`MakeColorEvaluator<16>'::__l2::<lambda_1>,UE::Math::TVector4<float>,UE::Geometry::FMeshMapEvaluator::FCorrespondenceSample_const_&>
::Call(TVector4<float> *__return_storage_ptr__,void *param_1,FCorrespondenceSample *param_2)

{
  `MakeColorEvaluator<16>'::__l2::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Call @ 14ca7c030

TVector4<float> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`MakeColorEvaluator<256>'::__l2::<lambda_1>,UE::Math::TVector4<float>,UE::Geometry::FMeshMapEvaluator::FCorrespondenceSample_const_&>
::Call(TVector4<float> *__return_storage_ptr__,void *param_1,FCorrespondenceSample *param_2)

{
  float fVar1;
  int local_res8 [8];
  TVector2<double>_u_0 local_18;
  
  local_18._s_0.X = (param_2->DetailBaryCoords).field0_0x0._s_0.X;
  local_18._s_0.Y = (param_2->DetailBaryCoords).field0_0x0._s_0.Y;
  local_res8[0] = param_2->DetailTriID;
  fVar1 = UE::Geometry::TSpatialPhotoSet<float,float>::ComputeSampleNearest
                    ((TSpatialPhotoSet<float,float> *)
                     (*(longlong *)((longlong)param_1 + 0x50) + 200),local_res8,
                     (TVector2<double> *)&local_18._s_0,(float *)((longlong)param_1 + 0x40));
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
  return __return_storage_ptr__;
}

// Call @ 14ca7c0a0

TVector4<float> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`MakeColorEvaluator<512>'::__l2::<lambda_1>,UE::Math::TVector4<float>,UE::Geometry::FMeshMapEvaluator::FCorrespondenceSample_const_&>
::Call(TVector4<float> *__return_storage_ptr__,void *param_1,FCorrespondenceSample *param_2)

{
  `MakeColorEvaluator<512>'::__l2::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Call @ 14ca7c0d0

TVector4<float> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`MakeColorEvaluator<64>'::__l2::<lambda_1>,UE::Math::TVector4<float>,UE::Geometry::FMeshMapEvaluator::FCorrespondenceSample_const_&>
::Call(TVector4<float> *__return_storage_ptr__,void *param_1,FCorrespondenceSample *param_2)

{
  float fVar1;
  int local_res8 [8];
  TVector2<double>_u_0 local_18;
  
  local_18._s_0.X = (param_2->DetailBaryCoords).field0_0x0._s_0.X;
  local_18._s_0.Y = (param_2->DetailBaryCoords).field0_0x0._s_0.Y;
  local_res8[0] = param_2->DetailTriID;
  fVar1 = UE::Geometry::TSpatialPhotoSet<float,float>::ComputeSampleNearest
                    ((TSpatialPhotoSet<float,float> *)
                     (*(longlong *)((longlong)param_1 + 0x50) + 0xe8),local_res8,
                     (TVector2<double> *)&local_18._s_0,(float *)((longlong)param_1 + 0x3c));
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
  return __return_storage_ptr__;
}

// Call @ 14ca7c140

TVector4<float> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`MakeColorEvaluator<128>'::__l2::<lambda_1>,UE::Math::TVector4<float>,UE::Geometry::FMeshMapEvaluator::FCorrespondenceSample_const_&>
::Call(TVector4<float> *__return_storage_ptr__,void *param_1,FCorrespondenceSample *param_2)

{
  `MakeColorEvaluator<128>'::__l2::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Call @ 14ca7c170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLineSetSceneProxy::FLineSetSceneProxy'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  undefined1 auStack_108 [32];
  FDataType FStack_e8;
  ulonglong uStack_10;
  
  uStack_10 = __security_cookie.value ^ (ulonglong)auStack_108;
  (**(code **)(*(longlong *)(*(longlong *)param_1 + 0x580) + 0x18))();
  (**(code **)(*(longlong *)(*(longlong *)param_1 + 0x4c8) + 0x18))
            ((longlong *)(*(longlong *)param_1 + 0x4c8),param_2);
  (**(code **)(*(longlong *)(*(longlong *)param_1 + 0x5d0) + 0x18))
            ((longlong *)(*(longlong *)param_1 + 0x5d0),param_2);
  FStack_e8._padding_._4_4_ = 4;
  FStack_e8._padding_ = 0;
  FStack_e8._padding_ = 0;
  FStack_e8._padding_ = 0;
  FStack_e8._padding_ = 0;
  FStack_e8._padding_ = 0;
  FStack_e8._padding_ = 0;
  FStack_e8._padding_._0_4_ = 0;
  FStack_e8._padding_ = 0;
  FStack_e8._padding_ = 0;
  FStack_e8._padding_ = 0;
  FStack_e8._padding_ = 0;
  FStack_e8._padding_ = 0;
  FStack_e8._padding_ = 0;
  FStack_e8._padding_._0_4_ = 0xffffffff;
  FStack_e8._padding_ = 0;
  FStack_e8._padding_ = 0;
  FStack_e8._padding_._4_2_ = 0xff;
  FStack_e8._padding_._6_1_ = 0;
  FStack_e8.PreSkinPositionComponent.VertexBuffer = (FVertexBuffer *)0x0;
  FStack_e8.PreSkinPositionComponent.StreamOffset = 0;
  FStack_e8.PreSkinPositionComponent.Offset = '\0';
  FStack_e8.PreSkinPositionComponent.Stride = '\0';
  FStack_e8.PreSkinPositionComponent.Type.Value = '\0';
  FStack_e8.PreSkinPositionComponent.VertexStreamUsage = Default;
  FStack_e8.PreSkinPositionComponentSRV = (FRHIShaderResourceView *)0x0;
  FPositionVertexBuffer::BindPositionVertexBuffer
            ((FPositionVertexBuffer *)(*(longlong *)param_1 + 0x580),
             (FVertexFactory *)(*(longlong *)param_1 + 0x298),(FStaticMeshDataType *)&FStack_e8);
  FStaticMeshVertexBuffer::BindTangentVertexBuffer
            ((FStaticMeshVertexBuffer *)(*(longlong *)param_1 + 0x4c8),
             (FVertexFactory *)(*(longlong *)param_1 + 0x298),(FStaticMeshDataType *)&FStack_e8);
  FStaticMeshVertexBuffer::BindTexCoordVertexBuffer
            ((FStaticMeshVertexBuffer *)(*(longlong *)param_1 + 0x4c8),
             (FVertexFactory *)(*(longlong *)param_1 + 0x298),(FStaticMeshDataType *)&FStack_e8,-1);
  FColorVertexBuffer::BindColorVertexBuffer
            ((FColorVertexBuffer *)(*(longlong *)param_1 + 0x5d0),
             (FVertexFactory *)(*(longlong *)param_1 + 0x298),(FStaticMeshDataType *)&FStack_e8);
  FLocalVertexFactory::SetData
            ((FLocalVertexFactory *)(*(longlong *)param_1 + 0x298),(FRHICommandListBase *)param_2,
             &FStack_e8);
  (**(code **)(*(longlong *)(*(longlong *)param_1 + 0x298) + 0x18))
            ((longlong *)(*(longlong *)param_1 + 0x298),param_2);
  (**(code **)(*(longlong *)(*(longlong *)param_1 + 0x620) + 0x18))
            ((longlong *)(*(longlong *)param_1 + 0x620),param_2);
  return;
}

// Call @ 14ca7c180

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMeshWireframeSceneProxy::FMeshWireframeSceneProxy'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `FMeshWireframeSceneProxy::FMeshWireframeSceneProxy'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 14ca7c190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FSceneCapturePhotoSetSampler::FSceneCapturePhotoSetSampler'::__l2::<lambda_1>,bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
::Call(void *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  undefined1 auStack_f8 [32];
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  TVector<double>_u_0 TStack_c0;
  double dStack_98;
  double adStack_88 [2];
  longlong lStack_78;
  longlong alStack_68 [3];
  longlong *plStack_50;
  undefined1 uStack_48;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  TStack_c0._s_0.X = 0.0;
  dVar9 = (param_3->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X;
  dVar2 = (param_3->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y;
  dVar3 = (param_3->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z;
  auVar6._0_8_ = dVar9 * dVar9;
  auVar6._8_8_ = 0;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = dVar2 * dVar2 + auVar6._0_8_ + dVar3 * dVar3;
  auVar7 = sqrtpd(auVar6,auVar7);
  adStack_88[0] = auVar7._0_8_;
  if (adStack_88[0] <= 0.0) {
    TStack_c0._s_0.Z = 0.0;
    TStack_c0._s_0.Y = 0.0;
    adStack_88[0] = 0.0;
  }
  else {
    dVar8 = __real_3ff0000000000000 / adStack_88[0];
    TStack_c0._s_0.X = dVar8 * dVar9;
    TStack_c0._s_0.Y = dVar8 * dVar2;
    TStack_c0._s_0.Z = dVar8 * dVar3;
  }
  dVar2 = *(double *)((longlong)param_1 + 8);
  plVar5 = *(longlong **)(*(longlong *)param_1 + 0x10);
  dStack_d0 = dVar2 * TStack_c0._s_0.Y + (param_2->field0_0x0)._s_0.Y;
  pcVar1 = *(code **)(*plVar5 + 0x40);
  lStack_78 = 0;
  dStack_d8 = dVar2 * TStack_c0._s_0.X + (param_2->field0_0x0)._s_0.X;
  dStack_c8 = dVar2 * TStack_c0._s_0.Z + (param_2->field0_0x0)._s_0.Z;
  plStack_50 = (longlong *)0x0;
  uStack_48 = 0;
  dStack_98 = TStack_c0._s_0.Z;
  UE::Math::TVector<double>::Normalize((TVector<double> *)&TStack_c0._s_0,__real_3e45798ee0000000);
  iVar4 = (*pcVar1)(plVar5,&dStack_d8,adStack_88);
  if (lStack_78 != 0) {
    plVar5 = alStack_68;
    if (plStack_50 != (longlong *)0x0) {
      plVar5 = plStack_50;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  return iVar4 == -1;
}

// Call @ 14ca7c1a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UOctreeDynamicMeshComponent::NotifyMeshUpdated'::__l6::<lambda_1>::operator()'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  ``UOctreeDynamicMeshComponent::NotifyMeshUpdated'::__l6::<lambda_1>::operator()'::__l2::<lambda_1>
  ::operator()(param_1,*param_2);
  return;
}

// Call @ 14ca7c1b0

TVector2<float> __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l17::<lambda_1>::operator()'::__l2::<lambda_1>,UE::Math::TVector2<float>,int_const_&>
::Call(void *param_1,int *param_2)

{
  Conversion::FGeometryCacheMeshBufferWrapper::GetVertexUV
            (*(FGeometryCacheMeshBufferWrapper **)param_2,(int)param_1);
  return (TVector2<float>)(TVector2<float>_u_0)param_1;
}

// Call @ 14ca7c1e0

TVector2<float> __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l17::<lambda_1>::operator()'::__l2::<lambda_1>,UE::Math::TVector2<float>,int_const_&>
::Call(void *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  TVector2<float> TVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\ConversionUtils\\SkinnedMeshToDynamicMesh.cpp"
                     ,0x17d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    TVar3.field0_0x0 = (TVector2<float>_u_0)(*pcVar1)();
    return (TVector2<float>)TVar3.field0_0x0;
  }
  *(undefined8 *)param_1 = 0;
  return (TVector2<float>)(TVector2<float>_u_0)param_1;
}

// Call @ 14ca7c230

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition'::__l6::<lambda_2>::operator()'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_SculptToolOctree_BufferUpload> FVar6;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  LARGE_INTEGER LStackX_8;
  FName FStackX_18;
  FStatMessage FStack_28;
  
  FVar10.Value = 0;
  FVar6 = StatPtr_STAT_SculptToolOctree_BufferUpload;
  if (StatPtr_STAT_SculptToolOctree_BufferUpload ==
      (FThreadSafeStaticStat<FStat_STAT_SculptToolOctree_BufferUpload>)0x0) {
    pFVar5 = ::FName::FName(&FStackX_18,"STAT_SculptToolOctree_BufferUpload");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_SculptToolOctree_BufferUpload>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SculptToolOctree_BufferUpload,
                       *pFVar5,L"SculptToolOctree_BufferUpload","STATGROUP_SculptToolOctree",
                       "STATCAT_Advanced",L"SculptToolOctree",true,true,ST_int64,true,false,
                       MCR_Invalid);
  }
  FVar9 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      LStackX_8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&LStackX_8.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        LStackX_8.s.LowPart = FVar8.Value;
        LStackX_8.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&LStackX_8.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Components\\OctreeDynamicMeshSceneProxy.h"
                   ,0xd8);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      LStackX_8.s.LowPart = FVar8.Value;
      LStackX_8.s.HighPart = uVar7;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      FVar10.Value = FVar8.Value;
      goto LAB_14ca6dcde;
    }
  }
  bVar3 = false;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
LAB_14ca6dcde:
  FMeshRenderBufferSet::Upload(*(FMeshRenderBufferSet **)((longlong)param_1 + 0x10));
  FStack_28.StatData.Pad = (uchar  [8])((longlong)param_1 + 8);
  FStack_28.NameAndInfo = (FStatNameAndInfo)((longlong)param_1 + 0x10);
  TSet<TTuple<int,FMeshRenderBufferSet_*>,TDefaultMapHashableKeyFuncs<int,FMeshRenderBufferSet_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_const_&,FMeshRenderBufferSet_*_const_&>_>
            ((TSet<TTuple<int,FMeshRenderBufferSet_*>,TDefaultMapHashableKeyFuncs<int,FMeshRenderBufferSet_*,0>,FDefaultSetAllocator>
              *)(*(longlong *)param_1 + 0x4e8),
             (TPairInitializer<int_const_&,FMeshRenderBufferSet_*_const_&> *)&LStackX_8.s,
             (bool *)&FStack_28);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      FStack_28.NameAndInfo =
           (FStatNameAndInfo)
           (CONCAT44(FVar9.Number,FVar10.Value) & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&LStackX_8);
      FStack_28.StatData.Pad[4] = '\0';
      FStack_28.StatData.Pad[5] = '\0';
      FStack_28.StatData.Pad[6] = '\0';
      FStack_28.StatData.Pad[7] = '\0';
      FStack_28.StatData.Pad[0] = LStackX_8.s.LowPart._0_1_;
      FStack_28.StatData.Pad[1] = LStackX_8.s.LowPart._1_1_;
      FStack_28.StatData.Pad[2] = LStackX_8.s.LowPart._2_1_;
      FStack_28.StatData.Pad[3] = LStackX_8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&FStack_28);
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
  return;
}

// Call @ 14ca7c240

TVector<float> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l20::<lambda_2>::operator()'::__l2::<lambda_1>,UE::Math::TVector<float>,int_const_&>
::Call(TVector<float> *__return_storage_ptr__,void *param_1,int *param_2)

{
  Conversion::FGeometryCacheMeshBufferWrapper::GetVertexNormal
            (*(FGeometryCacheMeshBufferWrapper **)param_1,__return_storage_ptr__,*param_2);
  return __return_storage_ptr__;
}

// Call @ 14ca7c270

TVector<float> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l20::<lambda_2>::operator()'::__l2::<lambda_1>,UE::Math::TVector<float>,int_const_&>
::Call(TVector<float> *__return_storage_ptr__,void *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  TVector<float> *pTVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\ConversionUtils\\SkinnedMeshToDynamicMesh.cpp"
                     ,0x181,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TVector<float> *)(*pcVar1)();
    return pTVar3;
  }
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  return __return_storage_ptr__;
}

// Call @ 14ca7c2c0

TVector<float> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l23::<lambda_3>::operator()'::__l2::<lambda_1>,UE::Math::TVector<float>,int_const_&>
::Call(TVector<float> *__return_storage_ptr__,void *param_1,int *param_2)

{
  Conversion::FGeometryCacheMeshBufferWrapper::GetVertexTangent
            (*(FGeometryCacheMeshBufferWrapper **)param_1,__return_storage_ptr__,*param_2);
  return __return_storage_ptr__;
}

// Call @ 14ca7c2f0

TVector<float> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l23::<lambda_3>::operator()'::__l2::<lambda_1>,UE::Math::TVector<float>,int_const_&>
::Call(TVector<float> *__return_storage_ptr__,void *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  TVector<float> *pTVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\ConversionUtils\\SkinnedMeshToDynamicMesh.cpp"
                     ,0x185,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TVector<float> *)(*pcVar1)();
    return pTVar3;
  }
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  return __return_storage_ptr__;
}

// Call @ 14ca7c340

TVector<float> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l26::<lambda_4>::operator()'::__l2::<lambda_1>,UE::Math::TVector<float>,int_const_&>
::Call(TVector<float> *__return_storage_ptr__,void *param_1,int *param_2)

{
  Conversion::FGeometryCacheMeshBufferWrapper::GetVertexBiTangent
            (*(FGeometryCacheMeshBufferWrapper **)param_1,__return_storage_ptr__,*param_2);
  return __return_storage_ptr__;
}

// Call @ 14ca7c370

TVector<float> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l26::<lambda_4>::operator()'::__l2::<lambda_1>,UE::Math::TVector<float>,int_const_&>
::Call(TVector<float> *__return_storage_ptr__,void *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  TVector<float> *pTVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\ConversionUtils\\SkinnedMeshToDynamicMesh.cpp"
                     ,0x18a,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TVector<float> *)(*pcVar1)();
    return pTVar3;
  }
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  return __return_storage_ptr__;
}

// Call @ 14ca7c3c0

TVector4<float> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l29::<lambda_5>::operator()'::__l2::<lambda_1>,UE::Math::TVector4<float>,int_const_&>
::Call(TVector4<float> *__return_storage_ptr__,void *param_1,int *param_2)

{
  Conversion::FGeometryCacheMeshBufferWrapper::GetVertexColor
            (*(FGeometryCacheMeshBufferWrapper **)param_1,__return_storage_ptr__,*param_2);
  return __return_storage_ptr__;
}

// Call @ 14ca7c3f0

TVector4<float> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l29::<lambda_5>::operator()'::__l2::<lambda_1>,UE::Math::TVector4<float>,int_const_&>
::Call(TVector4<float> *__return_storage_ptr__,void *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  TVector4<float> *pTVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\ConversionUtils\\SkinnedMeshToDynamicMesh.cpp"
                     ,0x18e,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TVector4<float> *)(*pcVar1)();
    return pTVar3;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  return __return_storage_ptr__;
}

// Call @ 14ca7c440

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDynamicMeshWireframeSourceProvider::AccessMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
  undefined **local_18;
  FDynamicMesh3 *local_10;
  
  local_18 = &___7FTemporaryDynamicMeshWireframeSource__6B_;
  local_10 = param_2;
  (*(code *)**(undefined8 **)param_1)((*(undefined8 **)param_1)[1],&local_18);
  return;
}

// Call @ 14ca7c480

TVector4<float> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FRenderCaptureOcclusionHandler::ApplyInfill'::__l2::<lambda_1>,UE::Math::TVector4<float>,UE::Math::TVector4<float>,int>
::Call(TVector4<float> *__return_storage_ptr__,void *param_1,TVector4<float> *param_2,int *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (param_2->field0_0x0)._s_0.X;
  fVar2 = (param_2->field0_0x0)._s_0.Y;
  fVar3 = (param_2->field0_0x0)._s_0.Z;
  fVar4 = __real_3f800000;
  if (*param_3 != 0) {
    fVar4 = __real_3f800000 / (float)*param_3;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar4 * fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar4 * fVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar4 * fVar2;
  return __return_storage_ptr__;
}

// Call @ 14ca7c4e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FRenderCaptureOcclusionHandler::ComputeInfill'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::FRenderCaptureOcclusionHandler::ComputeInfill'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 14ca7c4f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::MakeRenderCaptureBaker'::__l2::<lambda_1>,void,bool,UE::Geometry::FMeshMapEvaluator::FCorrespondenceSample_const_&,UE::Math::TVector2<double>_const_&,UE::Geometry::FVector2i_const_&>
::Call(void *param_1,bool *param_2,FCorrespondenceSample *param_3,TVector2<double> *param_4,
      FVector2i *param_5)

{
  TDenseGrid2<UE::Geometry::FRenderCaptureOcclusionHandler::FSampleStats> *this;
  FSampleStats *pFVar1;
  longlong lVar2;
  
  this = (TDenseGrid2<UE::Geometry::FRenderCaptureOcclusionHandler::FSampleStats> *)
         (*(int **)param_1 + 2);
  lVar2 = (longlong)(param_5->field0_0x0)._s_0.Y * (longlong)**(int **)param_1 +
          (longlong)(param_5->field0_0x0)._s_0.X;
  if (*param_2 != false) {
    pFVar1 = UE::Geometry::TDenseGrid2<UE::Geometry::FRenderCaptureOcclusionHandler::FSampleStats>::
             operator[](this,lVar2);
    pFVar1->NumValid = pFVar1->NumValid + 1;
    return;
  }
  pFVar1 = UE::Geometry::TDenseGrid2<UE::Geometry::FRenderCaptureOcclusionHandler::FSampleStats>::
           operator[](this,lVar2);
  pFVar1->NumInvalid = pFVar1->NumInvalid + 1;
  return;
}

// Call @ 14ca7c540

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMeshElementsVisualizer::OnCreated'::__l2::<lambda_1>,void,bool_const_&>::Call
          (void *param_1,bool *param_2)

{
  *(undefined1 *)(*(longlong *)param_1 + 0x130) = 1;
  return;
}

// Call @ 14ca7c560

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UBaseCreateFromSelectedTool::Setup'::__l2::<lambda_1>,void,FString_const_&>::
Call(void *param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FString local_18;
  
  pFVar2 = ::FString::FString(&local_18,param_2);
  (**(code **)(**(longlong **)(*(longlong *)param_1 + 0xf0) + 0x2c8))();
  pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// Call @ 14ca7c5b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UBaseMeshProcessingTool::SetupWeightMapPropertySet'::__l2::<lambda_1>,void,FName_const_&>
::Call(void *param_1,FName *param_2)

{
  UBaseMeshProcessingTool::OnSelectedWeightMapChanged(*(UBaseMeshProcessingTool **)param_1,true);
  return;
}

// Call @ 14ca7c5c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  FName FVar4;
  longlong lVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  FMeshRenderBufferSet *pFVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_SculptToolOctree_UpdateDecompDestroy> FVar17;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong lVar18;
  uint uVar19;
  uint *puVar20;
  uint *puVar21;
  FScriptContainerElement *pFVar22;
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_01;
  undefined1 auStackX_20 [8];
  FColor_u_0 aFStack_88 [2];
  uint *puStack_80;
  FName FStack_78;
  FName FStack_70;
  LARGE_INTEGER LStack_68;
  FName FStack_60;
  FName FStack_58;
  FStatMessage FStack_48;
  
  FVar17 = StatPtr_STAT_SculptToolOctree_UpdateDecompDestroy;
  if (StatPtr_STAT_SculptToolOctree_UpdateDecompDestroy ==
      (FThreadSafeStaticStat<FStat_STAT_SculptToolOctree_UpdateDecompDestroy>)0x0) {
    pFVar16 = ::FName::FName(&FStack_60,"STAT_SculptToolOctree_UpdateDecompDestroy");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_SculptToolOctree_UpdateDecompDestroy>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_SculptToolOctree_UpdateDecompDestroy,*pFVar16,
                        L"SculptToolOctree_UpdateDecompDestroy","STATGROUP_SculptToolOctree",
                        "STATCAT_Advanced",L"SculptToolOctree",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar4 = *(FName *)FVar17;
  bVar11 = false;
  bVar10 = false;
  FStack_58.ComparisonIndex.Value = 0;
  FStack_58.Number = 0;
  bVar13 = false;
  bVar12 = false;
  if ((FVar4.ComparisonIndex.Value.Value == 0) && (FVar4.Number == 0)) {
LAB_14ca6e258:
    bVar11 = bVar13;
    bVar10 = bVar12;
    bVar12 = false;
    FStack_70 = FStack_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      aFStack_88[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&aFStack_88[0]._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar11 = false;
      bVar10 = true;
      bVar13 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        FStack_78.ComparisonIndex.Value = FVar4.ComparisonIndex.Value.Value;
        FStack_78.Number = FVar4.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&FStack_78,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Components\\OctreeDynamicMeshSceneProxy.h"
                   ,0xad);
        bVar11 = true;
        bVar10 = true;
        bVar13 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14ca6e258;
    FStack_70 = FVar4;
    FThreadStats::AddMessage(FVar4,CycleScopeStart);
    bVar12 = true;
  }
  iVar3 = *(int *)((longlong)param_1 + 0x10);
  puVar21 = *(uint **)((longlong)param_1 + 8);
  puStack_80 = puVar21 + iVar3;
  puVar20 = puStack_80;
LAB_14ca6e285:
  while( true ) {
    if (*(int *)((longlong)param_1 + 0x10) != iVar3) {
      auStackX_20[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStackX_20);
    }
    FVar4 = FStack_70;
    if (puVar21 == puVar20) {
      if (bVar10) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar11) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar12) && (FVar4 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        this = TlsGetValue(FThreadStats::TlsSlot);
        if (this == (FThreadStats *)0x0) {
          this_00 = FThreadStatsPool::Get();
          this = FThreadStatsPool::GetFromPool(this_00);
        }
        if (this->bWaitForExplicitFlush < this->ScopeCount) {
          FStack_48.NameAndInfo.Index = FVar4.ComparisonIndex.Value;
          FStack_48.NameAndInfo.Number = FVar4.Number & 0xffff6fff | 0x6000;
          QueryPerformanceCounter(&LStack_68);
          FStack_48.StatData.Pad[4] = '\0';
          FStack_48.StatData.Pad[5] = '\0';
          FStack_48.StatData.Pad[6] = '\0';
          FStack_48.StatData.Pad[7] = '\0';
          FStack_48.StatData.Pad[0] = LStack_68.s.LowPart._0_1_;
          FStack_48.StatData.Pad[1] = LStack_68.s.LowPart._1_1_;
          FStack_48.StatData.Pad[2] = LStack_68.s.LowPart._2_1_;
          FStack_48.StatData.Pad[3] = LStack_68.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(this,&FStack_48);
          piVar1 = &this->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(this,false,false);
            return;
          }
          if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this,false,false);
          }
        }
      }
      return;
    }
    lVar5 = *(longlong *)param_1;
    uVar15 = *puVar21;
    this_01 = (TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)(lVar5 + 0x4e8);
    if (*(int *)(lVar5 + 0x4f0) == *(int *)(lVar5 + 0x51c)) break;
    lVar6 = *(longlong *)(lVar5 + 0x528);
    lVar18 = lVar5 + 0x520;
    if (lVar6 != 0) {
      lVar18 = lVar6;
    }
    lVar2 = (ulonglong)(*(int *)(lVar5 + 0x530) - 1U & uVar15) * 4;
    iVar14 = *(int *)(lVar2 + lVar18);
    puVar20 = puStack_80;
    if (iVar14 == -1) break;
    pFVar7 = (this_01->Data).AllocatorInstance.Data;
    do {
      if (*(uint *)(pFVar7 + (longlong)iVar14 * 0x18) == uVar15) {
        lVar18 = lVar5 + 0x520;
        if (lVar6 != 0) {
          lVar18 = lVar6;
        }
        uVar19 = *(uint *)(lVar18 + lVar2);
        goto joined_r0x00014ca6e331;
      }
      iVar14 = *(int *)(pFVar7 + (longlong)iVar14 * 0x18 + 0x10);
    } while (iVar14 != -1);
    puVar21 = puVar21 + 1;
  }
  goto LAB_14ca6e4b1;
joined_r0x00014ca6e331:
  if (uVar19 == 0xffffffff) goto LAB_14ca6e34d;
  if (*(uint *)(pFVar7 + (longlong)(int)uVar19 * 0x18) == uVar15) {
    if (uVar19 == 0xffffffff) goto LAB_14ca6e352;
    goto LAB_14ca6e378;
  }
  uVar19 = *(uint *)(pFVar7 + (longlong)(int)uVar19 * 0x18 + 0x10);
  goto joined_r0x00014ca6e331;
LAB_14ca6e34d:
  uVar19 = 0xffffffff;
LAB_14ca6e352:
  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                     ("PairId.IsValidId()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                      ,0x556,L"");
  if (bVar13) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_14ca6e378:
  lVar6 = (longlong)(int)uVar19 * 0x18;
  pFVar8 = *(FMeshRenderBufferSet **)((this_01->Data).AllocatorInstance.Data + lVar6 + 8);
  if (((int)uVar19 < 0) || (*(int *)(lVar5 + 0x510) <= (int)uVar19)) {
LAB_14ca6e3ef:
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Elements.IsValidIndex(ElementIndex)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                        ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
    if (bVar13) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  else {
    if ((*(int *)(lVar5 + 0x510) <= (int)uVar19) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5c6,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    lVar18 = lVar5 + 0x4f8;
    if (*(longlong *)(lVar5 + 0x508) != 0) {
      lVar18 = *(longlong *)(lVar5 + 0x508);
    }
    uVar15 = uVar19;
    if ((int)uVar19 < 0) {
      uVar15 = uVar19 + 0x1f;
    }
    if ((*(uint *)(lVar18 + (longlong)((int)uVar15 >> 5) * 4) >> (uVar19 & 0x1f) & 1) == 0)
    goto LAB_14ca6e3ef;
  }
  pFVar7 = (this_01->Data).AllocatorInstance.Data;
  lVar18 = lVar5 + 0x520;
  if (*(longlong *)(lVar5 + 0x528) != 0) {
    lVar18 = *(longlong *)(lVar5 + 0x528);
  }
  pFVar22 = (FScriptContainerElement *)(lVar18 + (longlong)*(int *)(pFVar7 + lVar6 + 0x14) * 4);
  while( true ) {
    uVar15 = *(uint *)pFVar22;
    if ((uVar15 == 0xffffffff) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("NextElementIndex != INDEX_NONE",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                            ,0x2b5,L"Corrupt hash"), bVar13)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (uVar15 == uVar19) break;
    pFVar22 = (this_01->Data).AllocatorInstance.Data + (longlong)(int)uVar15 * 0x18 + 0x10;
  }
  *(uint *)pFVar22 = *(uint *)(pFVar7 + lVar6 + 0x10);
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(this_01,uVar19,1);
  FBaseDynamicMeshSceneProxy::ReleaseRenderBufferSet(*(FBaseDynamicMeshSceneProxy **)param_1,pFVar8)
  ;
  puVar20 = puStack_80;
LAB_14ca6e4b1:
  puVar21 = puVar21 + 1;
  goto LAB_14ca6e285;
}

// Call @ 14ca7c5d0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UBaseMeshProcessingTool::Setup'::__l10::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 14ca7c5f0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l17::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 14ca7c610

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l17::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 14ca7c630

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l20::<lambda_2>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 14ca7c650

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l20::<lambda_2>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 14ca7c670

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UBaseMeshProcessingTool::Setup'::__l13::<lambda_2>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 14ca7c690

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l23::<lambda_3>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 14ca7c6b0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l23::<lambda_3>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 14ca7c6d0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l26::<lambda_4>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 14ca7c6f0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l26::<lambda_4>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 14ca7c710

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l29::<lambda_5>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 14ca7c730

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l29::<lambda_5>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 14ca7c750

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l32::<lambda_6>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 14ca7c770

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l32::<lambda_6>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 14ca7c790

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l34::<lambda_7>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 14ca7c7b0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l34::<lambda_7>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 14ca7c7d0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l38::<lambda_8>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 14ca7c7f0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l38::<lambda_8>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 14ca7c810

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l41::<lambda_9>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 14ca7c830

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l41::<lambda_9>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 14ca7c850

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPointSetSceneProxy::FPointSetSceneProxy'::__l5::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `FPointSetSceneProxy::FPointSetSceneProxy'::__l5::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14ca7c860

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMeshWireframeComponent::CreateSceneProxy'::__l5::<lambda_1>,void,IMeshWireframeSource_const_&>
::Call(void *param_1,IMeshWireframeSource *param_2)

{
  FMeshWireframeSceneProxy *pFVar1;
  
  pFVar1 = ::operator_new(0x660);
  if (pFVar1 != (FMeshWireframeSceneProxy *)0x0) {
    pFVar1 = FMeshWireframeSceneProxy::FMeshWireframeSceneProxy
                       (pFVar1,*(UMeshWireframeComponent **)param_1,param_2);
    **(undefined8 **)((longlong)param_1 + 8) = pFVar1;
    return;
  }
  **(undefined8 **)((longlong)param_1 + 8) = 0;
  return;
}

// Call @ 14ca7c8c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::AssetUtils::ForceVirtualTexturePrefetch'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  IRendererModule *pIVar1;
  
  pIVar1 = GetRendererModule();
  (**(code **)((longlong)*pIVar1 + 0x1a8))(pIVar1,param_1,0xffffffff);
  pIVar1 = GetRendererModule();
                    /* WARNING: Could not recover jumptable at 0x00014ca7c914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar1 + 0x1b0))
            (pIVar1,param_2,GMaxRHIFeatureLevel,*(code **)((longlong)*pIVar1 + 0x1b0));
  return;
}

// Call @ 14ca7c920

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMeshElementsVisualizer::UpdateLineDepthBiasScale'::__l5::<lambda_1>,void,IMeshWireframeSource_const_&>
::Call(void *param_1,IMeshWireframeSource *param_2)

{
  longlong lVar1;
  undefined1 local_48 [64];
  
  lVar1 = (**(code **)((longlong)*param_2 + 0x10))(param_2,local_48);
  *(float *)(*(longlong *)(*(longlong *)param_1 + 0x128) + 0x594) =
       (float)(*(double *)(lVar1 + 0x30) * __real_3f947ae147ae147b);
  return;
}

// Call @ 14ca7c970

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMeshWireframeComponent::UpdateWireframe'::__l5::<lambda_1>,void,IMeshWireframeSource_const_&>
::Call(void *param_1,IMeshWireframeSource *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 local_48 [64];
  
  puVar8 = (undefined8 *)(**(code **)((longlong)*param_2 + 0x10))(param_2,local_48);
  uVar3 = puVar8[1];
  uVar4 = puVar8[2];
  uVar5 = puVar8[3];
  uVar6 = puVar8[4];
  uVar7 = puVar8[5];
  uVar1 = puVar8[6];
  lVar2 = *(longlong *)param_1;
  *(undefined8 *)(lVar2 + 0x5f0) = *puVar8;
  *(undefined8 *)(lVar2 + 0x5f8) = uVar3;
  *(undefined8 *)(lVar2 + 0x600) = uVar4;
  *(undefined8 *)(lVar2 + 0x608) = uVar5;
  *(undefined8 *)(lVar2 + 0x610) = uVar6;
  *(undefined8 *)(lVar2 + 0x618) = uVar7;
  *(undefined8 *)(lVar2 + 0x620) = uVar1;
  return;
}

// Call @ 14ca7c9d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UOctreeDynamicMeshComponent::NotifyMeshUpdated'::__l6::<lambda_1>,void,int>::
Call(void *param_1,int *param_2)

{
  `UOctreeDynamicMeshComponent::NotifyMeshUpdated'::__l6::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14ca7c9e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UBaseMeshProcessingTool::Setup'::__l10::<lambda_1>,void>::Call(void *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> **ppTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTStack_18;
  FSharedReferencer<1> FStack_10;
  
  lVar1 = *(longlong *)param_1;
  pTVar4 = ::operator_new(0x28);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    pTStack_18 = ___xmm_00000000000000000000000000000010;
    pTVar6 = (TReferenceControllerBase<1> *)&DAT_00000010;
    FStack_10.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6 = pTVar4 + 1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = lVar1 + 0x170;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFMeshNormals_Geometry_UE___00_SharedPointerInternals__6B_
    ;
    pTVar4[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[2]._padding_ = 0;
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    FStack_10.ReferenceController = pTVar4;
    pTStack_18 = pTVar6;
  }
  lVar1 = *(longlong *)param_1;
  ppTVar5 = (TReferenceControllerBase<1> **)(lVar1 + 0x3a0);
  if (ppTVar5 != &pTStack_18) {
    *ppTVar5 = pTVar6;
    pTStack_18 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(lVar1 + 0x3a8),&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  lVar1 = *(longlong *)param_1;
  if (*(longlong *)(lVar1 + 0x3a0) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  UE::Geometry::FMeshNormals::Compute_FaceAvg(*(FMeshNormals **)(lVar1 + 0x3a0),true,true);
  return;
}

// Call @ 14ca7c9f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FOctreeDynamicMeshSceneProxy::InitializeFromDecomposition'::__l16::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong local_18;
  undefined8 *local_10;
  
  FMeshRenderBufferSet::Upload(*(FMeshRenderBufferSet **)((longlong)param_1 + 0x10));
  local_18 = (longlong)param_1 + 8;
  local_10 = (undefined8 *)((longlong)param_1 + 0x10);
  TSet<TTuple<int,FMeshRenderBufferSet_*>,TDefaultMapHashableKeyFuncs<int,FMeshRenderBufferSet_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_const_&,FMeshRenderBufferSet_*_const_&>_>
            ((TSet<TTuple<int,FMeshRenderBufferSet_*>,TDefaultMapHashableKeyFuncs<int,FMeshRenderBufferSet_*,0>,FDefaultSetAllocator>
              *)(*(longlong *)param_1 + 0x4e8),
             (TPairInitializer<int_const_&,FMeshRenderBufferSet_*_const_&> *)&stack0x00000008,
             (bool *)&local_18);
  return;
}

// Call @ 14ca7ca50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l17::<lambda_1>,void>
::Call(void *param_1)

{
  FDynamicMeshAttributeSet *pFVar1;
  TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper> *this;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar2;
  FDynamicMeshAttributeSet *this_00;
  longlong lVar3;
  longlong lStackX_8;
  longlong lStack_58;
  undefined4 uStack_50;
  longlong lStack_48;
  undefined4 uStack_40;
  code *pcStack_38;
  longlong *plStack_30;
  code *pcStack_28;
  longlong *plStack_20;
  longlong lStack_18;
  undefined4 uStack_10;
  
  pFVar1 = *(FDynamicMeshAttributeSet **)(*(longlong *)((longlong)param_1 + 8) + 0x208);
  this_00 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    this_00 = pFVar1;
  }
  pTVar2 = UE::Geometry::FDynamicMeshAttributeSet::GetUVLayer(this_00,*(int *)param_1);
  lStackX_8 = *(longlong *)((longlong)param_1 + 0x18);
  uStack_50 = *(undefined4 *)param_1;
  this = *(TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper> **)
          ((longlong)param_1 + 0x10);
  pcStack_38 = TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l17::<lambda_1>::operator()'::__l2::<lambda_2>,bool,int_const_&,int_&,int_&,int_&>
               ::Call;
  plStack_30 = &lStack_58;
  pcStack_28 = TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l17::<lambda_1>::operator()'::__l2::<lambda_1>,UE::Math::TVector2<float>,int_const_&>
               ::Call;
  plStack_20 = &lStack_48;
  lVar3 = 0x80;
  if (*(int *)(lStackX_8 + 0x38) == 0) {
    lVar3 = 0xa0;
  }
  lStack_58 = lStackX_8;
  lStack_48 = lStackX_8;
  uStack_40 = uStack_50;
  lStack_18 = lStackX_8;
  uStack_10 = uStack_50;
  UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::
  PopulateOverlayFromSharedAttr<UE::Math::TVector2<float>,int>
            (this,pTVar2,(TArray<int,TSizedDefaultAllocator<32>_> *)(lVar3 + lStackX_8),
             (TFunctionRef<UE::Math::TVector2<float>___cdecl(int_const_&)> *)&pcStack_28,
             (TFunctionRef<bool___cdecl(int_const_&,int_&,int_&,int_&)> *)&pcStack_38);
  pcStack_28 = TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l17::<lambda_1>::operator()'::__l2::<lambda_4>,void,int_const_&,int_&,int_&,int_&>
               ::Call;
  plStack_20 = &lStackX_8;
  pcStack_38 = TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l17::<lambda_1>::operator()'::__l2::<lambda_3>,UE::Math::TVector2<float>,int_const_&>
               ::Call;
  plStack_30 = &lStack_18;
  UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::
  PopulateOverlayFromWedgeAttr<UE::Math::TVector2<float>_>
            (this,pTVar2,(TFunctionRef<UE::Math::TVector2<float>___cdecl(int_const_&)> *)&pcStack_38
             ,(TFunctionRef<void___cdecl(int_const_&,int_&,int_&,int_&)> *)&pcStack_28,true);
  return;
}

// Call @ 14ca7ca60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l17::<lambda_1>,void>
::Call(void *param_1)

{
  FDynamicMeshAttributeSet *pFVar1;
  TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper> *this;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar2;
  FDynamicMeshAttributeSet *this_00;
  longlong lStackX_8;
  longlong lStack_58;
  undefined4 uStack_50;
  longlong lStack_48;
  undefined4 uStack_40;
  code *pcStack_38;
  longlong *plStack_30;
  code *pcStack_28;
  longlong *plStack_20;
  longlong lStack_18;
  undefined4 uStack_10;
  
  pFVar1 = *(FDynamicMeshAttributeSet **)(*(longlong *)((longlong)param_1 + 8) + 0x208);
  this_00 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    this_00 = pFVar1;
  }
  pTVar2 = UE::Geometry::FDynamicMeshAttributeSet::GetUVLayer(this_00,*(int *)param_1);
  lStackX_8 = *(longlong *)((longlong)param_1 + 0x18);
  uStack_50 = *(undefined4 *)param_1;
  this = *(TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper> **)((longlong)param_1 + 0x10);
  pcStack_38 = TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l17::<lambda_1>::operator()'::__l2::<lambda_2>,bool,int_const_&,int_&,int_&,int_&>
               ::Call;
  plStack_30 = &lStack_58;
  pcStack_28 = TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l17::<lambda_1>::operator()'::__l2::<lambda_1>,UE::Math::TVector2<float>,int_const_&>
               ::Call;
  plStack_20 = &lStack_48;
  lStack_58 = lStackX_8;
  lStack_48 = lStackX_8;
  uStack_40 = uStack_50;
  lStack_18 = lStackX_8;
  uStack_10 = uStack_50;
  UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::
  PopulateOverlayFromSharedAttr<UE::Math::TVector2<float>,int>
            (this,pTVar2,(TArray<int,TSizedDefaultAllocator<32>_> *)(lStackX_8 + 0x70),
             (TFunctionRef<UE::Math::TVector2<float>___cdecl(int_const_&)> *)&pcStack_28,
             (TFunctionRef<bool___cdecl(int_const_&,int_&,int_&,int_&)> *)&pcStack_38);
  pcStack_28 = TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l17::<lambda_1>::operator()'::__l2::<lambda_4>,void,int_const_&,int_&,int_&,int_&>
               ::Call;
  plStack_20 = &lStackX_8;
  pcStack_38 = TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l17::<lambda_1>::operator()'::__l2::<lambda_3>,UE::Math::TVector2<float>,int_const_&>
               ::Call;
  plStack_30 = &lStack_18;
  UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::
  PopulateOverlayFromWedgeAttr<UE::Math::TVector2<float>_>
            (this,pTVar2,(TFunctionRef<UE::Math::TVector2<float>___cdecl(int_const_&)> *)&pcStack_38
             ,(TFunctionRef<void___cdecl(int_const_&,int_&,int_&,int_&)> *)&pcStack_28,true);
  return;
}

// Call @ 14ca7ca70

FColor __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Conversion::Private::ConversionHelper::CopyMeshFromStaticMesh_RenderData'::__l20::<lambda_1>,FColor,int>
::Call(void *param_1,int *param_2)

{
  int *in_R8;
  
  *(undefined4 *)param_1 =
       *(undefined4 *)
        ((ulonglong)(uint)(*(int *)(*(longlong *)(*(longlong *)param_2 + 0x40) + 0x40) * *in_R8) +
        *(longlong *)(*(longlong *)(*(longlong *)param_2 + 0x40) + 0x38));
  return (FColor)SUB84(param_1,0);
}

// Call @ 14ca7caa0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Conversion::SkinnedMeshComponentToDynamicMesh'::__l12::<lambda_1>,int,int_const_&>
::Call(void *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = Conversion::FSkinnedComponentWrapper::GetMaterialIndex
                    (*(FSkinnedComponentWrapper **)param_1,*param_2);
  return iVar1 + 1;
}

// Call @ 14ca7cac0

FColor __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UOctreeDynamicMeshComponent::CreateSceneProxy'::__l15::<lambda_1>,FColor,UE::Geometry::FDynamicMesh3_const_*,int>
::Call(void *param_1,FDynamicMesh3 **param_2,int *param_3)

{
  `UOctreeDynamicMeshComponent::CreateSceneProxy'::__l15::<lambda_1>::operator()
            (param_2,param_1,(int)*(undefined8 *)param_3);
  return (FColor)SUB84(param_1,0);
}

// Call @ 14ca7caf0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMeshWireframeSceneProxy::FMeshWireframeSceneProxy'::__l2::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `FMeshWireframeSceneProxy::FMeshWireframeSceneProxy'::__l2::<lambda_2>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 14ca7cb00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPointSetSceneProxy::FPointSetSceneProxy'::__l2::<lambda_2>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  undefined1 auStack_108 [32];
  FDataType FStack_e8;
  ulonglong uStack_10;
  
  uStack_10 = __security_cookie.value ^ (ulonglong)auStack_108;
  (**(code **)(*(longlong *)(*(longlong *)param_1 + 0x580) + 0x18))();
  (**(code **)(*(longlong *)(*(longlong *)param_1 + 0x4c8) + 0x18))
            ((longlong *)(*(longlong *)param_1 + 0x4c8),param_2);
  (**(code **)(*(longlong *)(*(longlong *)param_1 + 0x5d0) + 0x18))
            ((longlong *)(*(longlong *)param_1 + 0x5d0),param_2);
  FStack_e8._padding_._4_4_ = 4;
  FStack_e8._padding_ = 0;
  FStack_e8._padding_ = 0;
  FStack_e8._padding_ = 0;
  FStack_e8._padding_ = 0;
  FStack_e8._padding_ = 0;
  FStack_e8._padding_ = 0;
  FStack_e8._padding_._0_4_ = 0;
  FStack_e8._padding_ = 0;
  FStack_e8._padding_ = 0;
  FStack_e8._padding_ = 0;
  FStack_e8._padding_ = 0;
  FStack_e8._padding_ = 0;
  FStack_e8._padding_ = 0;
  FStack_e8._padding_._0_4_ = 0xffffffff;
  FStack_e8._padding_ = 0;
  FStack_e8._padding_ = 0;
  FStack_e8._padding_._4_2_ = 0xff;
  FStack_e8._padding_._6_1_ = 0;
  FStack_e8.PreSkinPositionComponent.VertexBuffer = (FVertexBuffer *)0x0;
  FStack_e8.PreSkinPositionComponent.StreamOffset = 0;
  FStack_e8.PreSkinPositionComponent.Offset = '\0';
  FStack_e8.PreSkinPositionComponent.Stride = '\0';
  FStack_e8.PreSkinPositionComponent.Type.Value = '\0';
  FStack_e8.PreSkinPositionComponent.VertexStreamUsage = Default;
  FStack_e8.PreSkinPositionComponentSRV = (FRHIShaderResourceView *)0x0;
  FPositionVertexBuffer::BindPositionVertexBuffer
            ((FPositionVertexBuffer *)(*(longlong *)param_1 + 0x580),
             (FVertexFactory *)(*(longlong *)param_1 + 0x298),(FStaticMeshDataType *)&FStack_e8);
  FStaticMeshVertexBuffer::BindTangentVertexBuffer
            ((FStaticMeshVertexBuffer *)(*(longlong *)param_1 + 0x4c8),
             (FVertexFactory *)(*(longlong *)param_1 + 0x298),(FStaticMeshDataType *)&FStack_e8);
  FStaticMeshVertexBuffer::BindTexCoordVertexBuffer
            ((FStaticMeshVertexBuffer *)(*(longlong *)param_1 + 0x4c8),
             (FVertexFactory *)(*(longlong *)param_1 + 0x298),(FStaticMeshDataType *)&FStack_e8,-1);
  FColorVertexBuffer::BindColorVertexBuffer
            ((FColorVertexBuffer *)(*(longlong *)param_1 + 0x5d0),
             (FVertexFactory *)(*(longlong *)param_1 + 0x298),(FStaticMeshDataType *)&FStack_e8);
  FLocalVertexFactory::SetData
            ((FLocalVertexFactory *)(*(longlong *)param_1 + 0x298),(FRHICommandListBase *)param_2,
             &FStack_e8);
  (**(code **)(*(longlong *)(*(longlong *)param_1 + 0x298) + 0x18))
            ((longlong *)(*(longlong *)param_1 + 0x298),param_2);
  (**(code **)(*(longlong *)(*(longlong *)param_1 + 0x620) + 0x18))
            ((longlong *)(*(longlong *)param_1 + 0x620),param_2);
  return;
}

// Call @ 14ca7cb10

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l20::<lambda_2>::operator()'::__l2::<lambda_2>,bool,int_const_&,int_&,int_&,int_&>
::Call(void *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  Conversion::FGeometryCacheMeshBufferWrapper::GetTri
            (*(FGeometryCacheMeshBufferWrapper **)param_1,*param_2,param_3,param_4,param_5);
  return true;
}

// Call @ 14ca7cb40

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l20::<lambda_2>::operator()'::__l2::<lambda_2>,bool,int_const_&,int_&,int_&,int_&>
::Call(void *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  *param_5 = -1;
  *param_4 = -1;
  *param_3 = -1;
  return false;
}

// Call @ 14ca7cb70

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l17::<lambda_1>::operator()'::__l2::<lambda_2>,bool,int_const_&,int_&,int_&,int_&>
::Call(void *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  Conversion::FGeometryCacheMeshBufferWrapper::GetTri
            (*(FGeometryCacheMeshBufferWrapper **)param_1,*param_2,param_3,param_4,param_5);
  return true;
}

// Call @ 14ca7cba0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l17::<lambda_1>::operator()'::__l2::<lambda_2>,bool,int_const_&,int_&,int_&,int_&>
::Call(void *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  *param_5 = -1;
  *param_4 = -1;
  *param_3 = -1;
  return false;
}

// Call @ 14ca7cbd0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l23::<lambda_3>::operator()'::__l2::<lambda_2>,bool,int_const_&,int_&,int_&,int_&>
::Call(void *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  Conversion::FGeometryCacheMeshBufferWrapper::GetTri
            (*(FGeometryCacheMeshBufferWrapper **)param_1,*param_2,param_3,param_4,param_5);
  return true;
}

// Call @ 14ca7cc00

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l23::<lambda_3>::operator()'::__l2::<lambda_2>,bool,int_const_&,int_&,int_&,int_&>
::Call(void *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  *param_5 = -1;
  *param_4 = -1;
  *param_3 = -1;
  return false;
}

// Call @ 14ca7cc30

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l26::<lambda_4>::operator()'::__l2::<lambda_2>,bool,int_const_&,int_&,int_&,int_&>
::Call(void *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  Conversion::FGeometryCacheMeshBufferWrapper::GetTri
            (*(FGeometryCacheMeshBufferWrapper **)param_1,*param_2,param_3,param_4,param_5);
  return true;
}

// Call @ 14ca7cc60

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l26::<lambda_4>::operator()'::__l2::<lambda_2>,bool,int_const_&,int_&,int_&,int_&>
::Call(void *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  *param_5 = -1;
  *param_4 = -1;
  *param_3 = -1;
  return false;
}

// Call @ 14ca7cc90

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l29::<lambda_5>::operator()'::__l2::<lambda_2>,bool,int_const_&,int_&,int_&,int_&>
::Call(void *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  Conversion::FGeometryCacheMeshBufferWrapper::GetTri
            (*(FGeometryCacheMeshBufferWrapper **)param_1,*param_2,param_3,param_4,param_5);
  return true;
}

// Call @ 14ca7ccc0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l29::<lambda_5>::operator()'::__l2::<lambda_2>,bool,int_const_&,int_&,int_&,int_&>
::Call(void *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  *param_5 = -1;
  *param_4 = -1;
  *param_3 = -1;
  return false;
}

// Call @ 14ca7ccf0

FSampleStats __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FRenderCaptureOcclusionHandler::ComputeInfill'::__l2::<lambda_2>,UE::Geometry::FRenderCaptureOcclusionHandler::FSampleStats,UE::Geometry::FRenderCaptureOcclusionHandler::FSampleStats,int>
::Call(void *param_1,FSampleStats *param_2,int *param_3)

{
  FSampleStats FVar1;
  
  FVar1.NumValid = 0xffff;
  FVar1.NumInvalid = 0xffff;
  return FVar1;
}

// Call @ 14ca7cd00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::MakeRenderCaptureBaker'::__l2::<lambda_2>,void,TArray<TUniquePtr<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>,TDefaultDelete<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_>_>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,
      TArray<TUniquePtr<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>,TDefaultDelete<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_>_>,TSizedDefaultAllocator<32>_>
      *param_2)

{
  UE::Geometry::FRenderCaptureOcclusionHandler::ComputeAndApplyInfill
            (*(FRenderCaptureOcclusionHandler **)param_1,param_2);
  return;
}

// Call @ 14ca7cd10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMeshElementsVisualizer::OnCreated'::__l2::<lambda_2>,void,bool_const_&>::Call
          (void *param_1,bool *param_2)

{
  *(undefined1 *)(*(longlong *)param_1 + 0x130) = 1;
  return;
}

// Call @ 14ca7cd30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UBaseMeshProcessingTool::SetupWeightMapPropertySet'::__l2::<lambda_2>,void,bool_const_&>
::Call(void *param_1,bool *param_2)

{
  UBaseMeshProcessingTool::OnSelectedWeightMapChanged(*(UBaseMeshProcessingTool **)param_1,true);
  return;
}

// Call @ 14ca7cd40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition'::__l6::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition'::__l6::<lambda_2>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 14ca7cd50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UOctreeDynamicMeshComponent::CreateSceneProxy'::__l19::<lambda_2>,void,int>::
Call(void *param_1,int *param_2)

{
  `UOctreeDynamicMeshComponent::CreateSceneProxy'::__l19::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 14ca7cd60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l20::<lambda_2>,void>
::Call(void *param_1)

{
  longlong lVar1;
  longlong lStackX_8;
  longlong lStackX_10;
  longlong lStackX_18;
  longlong lStackX_20;
  code *pcStack_48;
  longlong *plStack_40;
  code *pcStack_38;
  longlong *plStack_30;
  code *pcStack_28;
  longlong *plStack_20;
  code *pcStack_18;
  longlong *plStack_10;
  
  lStackX_8 = *(longlong *)((longlong)param_1 + 0x10);
  plStack_40 = &lStackX_8;
  pcStack_48 = TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l20::<lambda_2>::operator()'::__l2::<lambda_4>,void,int_const_&,int_&,int_&,int_&>
               ::Call;
  plStack_30 = &lStackX_10;
  pcStack_38 = TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l20::<lambda_2>::operator()'::__l2::<lambda_3>,UE::Math::TVector<float>,int_const_&>
               ::Call;
  plStack_20 = &lStackX_18;
  pcStack_28 = TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l20::<lambda_2>::operator()'::__l2::<lambda_2>,bool,int_const_&,int_&,int_&,int_&>
               ::Call;
  plStack_10 = &lStackX_20;
  pcStack_18 = TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l20::<lambda_2>::operator()'::__l2::<lambda_1>,UE::Math::TVector<float>,int_const_&>
               ::Call;
  lVar1 = 0x80;
  if (*(int *)(lStackX_8 + 0x18) == 0) {
    lVar1 = 0xa0;
  }
  lStackX_10 = lStackX_8;
  lStackX_18 = lStackX_8;
  lStackX_20 = lStackX_8;
  UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::
  PopulateOverlay<UE::Math::TVector<float>,int>
            (*(TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper> **)param_1,
             (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)
             **(undefined8 **)((longlong)param_1 + 8),
             (TArray<int,TSizedDefaultAllocator<32>_> *)(lVar1 + lStackX_8),
             (TFunctionRef<UE::Math::TVector<float>___cdecl(int_const_&)> *)&pcStack_18,
             (TFunctionRef<bool___cdecl(int_const_&,int_&,int_&,int_&)> *)&pcStack_28,
             (TFunctionRef<UE::Math::TVector<float>___cdecl(int_const_&)> *)&pcStack_38,
             (TFunctionRef<void___cdecl(int_const_&,int_&,int_&,int_&)> *)&pcStack_48);
  return;
}

// Call @ 14ca7cd70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l20::<lambda_2>,void>
::Call(void *param_1)

{
  longlong lStackX_8;
  longlong lStackX_10;
  longlong lStackX_18;
  longlong lStackX_20;
  code *pcStack_48;
  longlong *plStack_40;
  code *pcStack_38;
  longlong *plStack_30;
  code *pcStack_28;
  longlong *plStack_20;
  code *pcStack_18;
  longlong *plStack_10;
  
  lStackX_8 = *(longlong *)((longlong)param_1 + 0x10);
  plStack_40 = &lStackX_8;
  pcStack_48 = TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l20::<lambda_2>::operator()'::__l2::<lambda_4>,void,int_const_&,int_&,int_&,int_&>
               ::Call;
  plStack_30 = &lStackX_10;
  pcStack_38 = TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l20::<lambda_2>::operator()'::__l2::<lambda_3>,UE::Math::TVector<float>,int_const_&>
               ::Call;
  plStack_20 = &lStackX_18;
  pcStack_28 = TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l20::<lambda_2>::operator()'::__l2::<lambda_2>,bool,int_const_&,int_&,int_&,int_&>
               ::Call;
  plStack_10 = &lStackX_20;
  pcStack_18 = TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l20::<lambda_2>::operator()'::__l2::<lambda_1>,UE::Math::TVector<float>,int_const_&>
               ::Call;
  lStackX_10 = lStackX_8;
  lStackX_18 = lStackX_8;
  lStackX_20 = lStackX_8;
  UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::
  PopulateOverlay<UE::Math::TVector<float>,int>
            (*(TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper> **)param_1,
             (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)
             **(undefined8 **)((longlong)param_1 + 8),
             (TArray<int,TSizedDefaultAllocator<32>_> *)(lStackX_8 + 0x70),
             (TFunctionRef<UE::Math::TVector<float>___cdecl(int_const_&)> *)&pcStack_18,
             (TFunctionRef<bool___cdecl(int_const_&,int_&,int_&,int_&)> *)&pcStack_28,
             (TFunctionRef<UE::Math::TVector<float>___cdecl(int_const_&)> *)&pcStack_38,
             (TFunctionRef<void___cdecl(int_const_&,int_&,int_&,int_&)> *)&pcStack_48);
  return;
}

// Call @ 14ca7cd80

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Conversion::SceneComponentToDynamicMesh'::__l67::<lambda_2>,UE::Math::TVector<double>,int,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,int *param_2,TVector<double> *param_3)

{
  `UE::Conversion::SceneComponentToDynamicMesh'::__l67::<lambda_2>::operator()
            (param_1,__return_storage_ptr__,*param_2,param_3);
  return __return_storage_ptr__;
}

// Call @ 14ca7cdb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UOctreeDynamicMeshComponent::NotifyMeshUpdated'::__l12::<lambda_2>,void,int>::
Call(void *param_1,int *param_2)

{
  `UOctreeDynamicMeshComponent::NotifyMeshUpdated'::__l12::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 14ca7cdc0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Conversion::SkinnedMeshComponentToDynamicMesh'::__l12::<lambda_2>,int,int_const_&>
::Call(void *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = Conversion::FSkinnedComponentWrapper::GetMaterialIndex
                    (*(FSkinnedComponentWrapper **)param_1,*param_2);
  return iVar1;
}

// Call @ 14ca7cdd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UBaseMeshProcessingTool::Setup'::__l13::<lambda_2>,void>::Call(void *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> **ppTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTStack_18;
  FSharedReferencer<1> FStack_10;
  
  lVar1 = *(longlong *)param_1;
  pTVar4 = ::operator_new(0xb0);
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTStack_18 = ___xmm_00000000000000000000000000000010;
    pTVar7 = (TReferenceControllerBase<1> *)&DAT_00000010;
    FStack_10.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFMeshBoundaryLoops_Geometry_UE___00_SharedPointerInternals__6B_
    ;
    pTVar4[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[2]._padding_ = 0;
    pTVar4[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[3]._padding_ = 0;
    *(undefined2 *)&pTVar4[3].SharedReferenceCount = 0;
    pTVar4[3].SharedReferenceCount.field_0x2 = 0;
    pTVar4[3].WeakReferenceCount = (atomic<int>)0x2;
    *(undefined4 *)&pTVar4[4]._padding_ = 1;
    pTVar4[5]._padding_ = 0;
    pTVar4[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[8]._padding_ = 0;
    pTVar4[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[8].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)&pTVar4[9]._padding_ = 0;
    pTVar4[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[9].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[10]._padding_ = 0;
    ((FMeshBoundaryLoops *)(pTVar4 + 1))->Mesh = (FDynamicMesh3 *)(lVar1 + 0x170);
    UE::Geometry::FMeshBoundaryLoops::Compute((FMeshBoundaryLoops *)(pTVar4 + 1));
    pTVar7 = pTVar4 + 1;
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    FStack_10.ReferenceController = pTVar4;
    pTVar6 = pTVar4;
    pTStack_18 = pTVar7;
  }
  lVar1 = *(longlong *)param_1;
  ppTVar5 = (TReferenceControllerBase<1> **)(lVar1 + 0x3b0);
  if (ppTVar5 != &pTStack_18) {
    *ppTVar5 = pTVar7;
    pTStack_18 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(lVar1 + 0x3b8),&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// Call @ 14ca7cde0

FString * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<FString>::TPropertyWatcher<FString><FString,void>'::__l1::<lambda_38_>,FString>
::Call(FString *__return_storage_ptr__,void *param_1)

{
  ::FString::FString(__return_storage_ptr__,*(FString **)param_1);
  return __return_storage_ptr__;
}

// Call @ 14ca7ce00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMeshWireframeSceneProxy::FMeshWireframeSceneProxy'::__l2::<lambda_3>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  undefined1 auStack_108 [32];
  FDataType FStack_e8;
  ulonglong uStack_10;
  
  uStack_10 = __security_cookie.value ^ (ulonglong)auStack_108;
  (**(code **)(*(longlong *)(*(longlong *)param_1 + 0x580) + 0x18))();
  (**(code **)(*(longlong *)(*(longlong *)param_1 + 0x4c8) + 0x18))
            ((longlong *)(*(longlong *)param_1 + 0x4c8),param_2);
  (**(code **)(*(longlong *)(*(longlong *)param_1 + 0x5d0) + 0x18))
            ((longlong *)(*(longlong *)param_1 + 0x5d0),param_2);
  FStack_e8._padding_._4_4_ = 4;
  FStack_e8._padding_ = 0;
  FStack_e8._padding_ = 0;
  FStack_e8._padding_ = 0;
  FStack_e8._padding_ = 0;
  FStack_e8._padding_ = 0;
  FStack_e8._padding_ = 0;
  FStack_e8._padding_._0_4_ = 0;
  FStack_e8._padding_ = 0;
  FStack_e8._padding_ = 0;
  FStack_e8._padding_ = 0;
  FStack_e8._padding_ = 0;
  FStack_e8._padding_ = 0;
  FStack_e8._padding_ = 0;
  FStack_e8._padding_._0_4_ = 0xffffffff;
  FStack_e8._padding_ = 0;
  FStack_e8._padding_ = 0;
  FStack_e8._padding_._4_2_ = 0xff;
  FStack_e8._padding_._6_1_ = 0;
  FStack_e8.PreSkinPositionComponent.VertexBuffer = (FVertexBuffer *)0x0;
  FStack_e8.PreSkinPositionComponent.StreamOffset = 0;
  FStack_e8.PreSkinPositionComponent.Offset = '\0';
  FStack_e8.PreSkinPositionComponent.Stride = '\0';
  FStack_e8.PreSkinPositionComponent.Type.Value = '\0';
  FStack_e8.PreSkinPositionComponent.VertexStreamUsage = Default;
  FStack_e8.PreSkinPositionComponentSRV = (FRHIShaderResourceView *)0x0;
  FPositionVertexBuffer::BindPositionVertexBuffer
            ((FPositionVertexBuffer *)(*(longlong *)param_1 + 0x580),
             (FVertexFactory *)(*(longlong *)param_1 + 0x298),(FStaticMeshDataType *)&FStack_e8);
  FStaticMeshVertexBuffer::BindTangentVertexBuffer
            ((FStaticMeshVertexBuffer *)(*(longlong *)param_1 + 0x4c8),
             (FVertexFactory *)(*(longlong *)param_1 + 0x298),(FStaticMeshDataType *)&FStack_e8);
  FStaticMeshVertexBuffer::BindTexCoordVertexBuffer
            ((FStaticMeshVertexBuffer *)(*(longlong *)param_1 + 0x4c8),
             (FVertexFactory *)(*(longlong *)param_1 + 0x298),(FStaticMeshDataType *)&FStack_e8,-1);
  FColorVertexBuffer::BindColorVertexBuffer
            ((FColorVertexBuffer *)(*(longlong *)param_1 + 0x5d0),
             (FVertexFactory *)(*(longlong *)param_1 + 0x298),(FStaticMeshDataType *)&FStack_e8);
  FLocalVertexFactory::SetData
            ((FLocalVertexFactory *)(*(longlong *)param_1 + 0x298),(FRHICommandListBase *)param_2,
             &FStack_e8);
  (**(code **)(*(longlong *)(*(longlong *)param_1 + 0x298) + 0x18))
            ((longlong *)(*(longlong *)param_1 + 0x298),param_2);
  (**(code **)(*(longlong *)(*(longlong *)param_1 + 0x620) + 0x18))
            ((longlong *)(*(longlong *)param_1 + 0x620),param_2);
  return;
}

// Call @ 14ca7ce10

TVector<float> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l23::<lambda_3>::operator()'::__l2::<lambda_3>,UE::Math::TVector<float>,int_const_&>
::Call(TVector<float> *__return_storage_ptr__,void *param_1,int *param_2)

{
  Conversion::FGeometryCacheMeshBufferWrapper::GetVertexTangent
            (*(FGeometryCacheMeshBufferWrapper **)param_1,__return_storage_ptr__,*param_2);
  return __return_storage_ptr__;
}

// Call @ 14ca7ce40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TVector<float> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l23::<lambda_3>::operator()'::__l2::<lambda_3>,UE::Math::TVector<float>,int_const_&>
::Call(TVector<float> *__return_storage_ptr__,void *param_1,int *param_2)

{
  FFinalSkinVertex *pFVar1;
  undefined1 in_XMM1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  
  pFVar1 = Conversion::FSkinnedComponentWrapper::GetWedgeVertexInstance
                     (*(FSkinnedComponentWrapper **)param_1,*param_2);
  auVar2 = pmovsxbd(in_XMM1,(pFVar1->TangentX).Vector.Packed);
  fVar3 = (float)auVar2._8_4_ * _UNK_151040078;
  *(ulonglong *)&__return_storage_ptr__->field0_0x0 =
       CONCAT44((float)auVar2._4_4_ * _UNK_151040074,
                (float)auVar2._0_4_ * ___xmm_3c0102043c0102043c0102043c010204);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar3;
  return __return_storage_ptr__;
}

// Call @ 14ca7ce90

TVector2<float> __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l17::<lambda_1>::operator()'::__l2::<lambda_3>,UE::Math::TVector2<float>,int_const_&>
::Call(void *param_1,int *param_2)

{
  Conversion::FGeometryCacheMeshBufferWrapper::GetVertexUV
            (*(FGeometryCacheMeshBufferWrapper **)param_2,(int)param_1);
  return (TVector2<float>)(TVector2<float>_u_0)param_1;
}

// Call @ 14ca7cec0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TVector2<float> __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l17::<lambda_1>::operator()'::__l2::<lambda_3>,UE::Math::TVector2<float>,int_const_&>
::Call(void *param_1,int *param_2)

{
  double dVar1;
  int iVar2;
  FFinalSkinVertex *pFVar3;
  int *in_R8;
  
  iVar2 = param_2[2];
  pFVar3 = Conversion::FSkinnedComponentWrapper::GetWedgeVertexInstance
                     (*(FSkinnedComponentWrapper **)param_2,*in_R8);
  dVar1 = pFVar3->TextureCoordinates[iVar2].field0_0x0._s_0.Y;
  *(float *)param_1 = (float)pFVar3->TextureCoordinates[iVar2].field0_0x0._s_0.X;
  *(float *)((longlong)param_1 + 4) = (float)dVar1;
  return (TVector2<float>)(TVector2<float>_u_0)param_1;
}

// Call @ 14ca7cf20

TVector<float> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l20::<lambda_2>::operator()'::__l2::<lambda_3>,UE::Math::TVector<float>,int_const_&>
::Call(TVector<float> *__return_storage_ptr__,void *param_1,int *param_2)

{
  Conversion::FGeometryCacheMeshBufferWrapper::GetVertexNormal
            (*(FGeometryCacheMeshBufferWrapper **)param_1,__return_storage_ptr__,*param_2);
  return __return_storage_ptr__;
}

// Call @ 14ca7cf50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TVector<float> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l20::<lambda_2>::operator()'::__l2::<lambda_3>,UE::Math::TVector<float>,int_const_&>
::Call(TVector<float> *__return_storage_ptr__,void *param_1,int *param_2)

{
  FFinalSkinVertex *pFVar1;
  undefined1 in_XMM1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  
  pFVar1 = Conversion::FSkinnedComponentWrapper::GetWedgeVertexInstance
                     (*(FSkinnedComponentWrapper **)param_1,*param_2);
  auVar2 = pmovsxbd(in_XMM1,(pFVar1->TangentZ).Vector.Packed);
  fVar3 = (float)auVar2._8_4_ * _UNK_151040078;
  *(ulonglong *)&__return_storage_ptr__->field0_0x0 =
       CONCAT44((float)auVar2._4_4_ * _UNK_151040074,
                (float)auVar2._0_4_ * ___xmm_3c0102043c0102043c0102043c010204);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar3;
  return __return_storage_ptr__;
}

// Call @ 14ca7cfa0

TVector<float> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l26::<lambda_4>::operator()'::__l2::<lambda_3>,UE::Math::TVector<float>,int_const_&>
::Call(TVector<float> *__return_storage_ptr__,void *param_1,int *param_2)

{
  Conversion::FGeometryCacheMeshBufferWrapper::GetVertexBiTangent
            (*(FGeometryCacheMeshBufferWrapper **)param_1,__return_storage_ptr__,*param_2);
  return __return_storage_ptr__;
}

// Call @ 14ca7cfd0

TVector<float> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l26::<lambda_4>::operator()'::__l2::<lambda_3>,UE::Math::TVector<float>,int_const_&>
::Call(TVector<float> *__return_storage_ptr__,void *param_1,int *param_2)

{
  ``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l26
  ::<lambda_4>::operator()'::__l2::<lambda_3>::operator()(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Call @ 14ca7d000

TVector4<float> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l29::<lambda_5>::operator()'::__l2::<lambda_3>,UE::Math::TVector4<float>,int_const_&>
::Call(TVector4<float> *__return_storage_ptr__,void *param_1,int *param_2)

{
  Conversion::FGeometryCacheMeshBufferWrapper::GetVertexColor
            (*(FGeometryCacheMeshBufferWrapper **)param_1,__return_storage_ptr__,*param_2);
  return __return_storage_ptr__;
}

// Call @ 14ca7d030

TVector4<float> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l29::<lambda_5>::operator()'::__l2::<lambda_3>,UE::Math::TVector4<float>,int_const_&>
::Call(TVector4<float> *__return_storage_ptr__,void *param_1,int *param_2)

{
  ``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l29
  ::<lambda_5>::operator()'::__l2::<lambda_3>::operator()(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Call @ 14ca7d060

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Conversion::GeometryCacheToDynamicMesh'::__l2::<lambda_3>,int,int_const_&>::
Call(void *param_1,int *param_2)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  
  lVar2 = *(longlong *)param_1;
  uVar1 = *param_2;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x78)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  return *(int *)(*(longlong *)(lVar2 + 0x70) + (longlong)(int)uVar1 * 4) + 1;
}

// Call @ 14ca7d0d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMeshElementsVisualizer::OnCreated'::__l2::<lambda_3>,void,bool_const_&>::Call
          (void *param_1,bool *param_2)

{
  *(undefined1 *)(*(longlong *)param_1 + 0x130) = 1;
  return;
}

// Call @ 14ca7d0f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UBaseCreateFromSelectedTool::Setup'::__l2::<lambda_3>,void,enum_EBaseCreateFromSelectedTargetType_const_&>
::Call(void *param_1,EBaseCreateFromSelectedTargetType *param_2)

{
  `UBaseCreateFromSelectedTool::Setup'::__l2::<lambda_3>::operator()(param_1,*param_2);
  return;
}

// Call @ 14ca7d100

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UOctreeDynamicMeshComponent::CreateSceneProxy'::__l20::<lambda_3>,void,int>::
Call(void *param_1,int *param_2)

{
  `UOctreeDynamicMeshComponent::CreateSceneProxy'::__l20::<lambda_3>::operator()(param_1,*param_2);
  return;
}

// Call @ 14ca7d110

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l23::<lambda_3>,void>
::Call(void *param_1)

{
  longlong lVar1;
  longlong lStackX_8;
  longlong lStackX_10;
  longlong lStackX_18;
  longlong lStackX_20;
  code *pcStack_48;
  longlong *plStack_40;
  code *pcStack_38;
  longlong *plStack_30;
  code *pcStack_28;
  longlong *plStack_20;
  code *pcStack_18;
  longlong *plStack_10;
  
  lStackX_8 = *(longlong *)((longlong)param_1 + 0x10);
  plStack_40 = &lStackX_8;
  pcStack_48 = TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l23::<lambda_3>::operator()'::__l2::<lambda_4>,void,int_const_&,int_&,int_&,int_&>
               ::Call;
  plStack_30 = &lStackX_10;
  pcStack_38 = TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l23::<lambda_3>::operator()'::__l2::<lambda_3>,UE::Math::TVector<float>,int_const_&>
               ::Call;
  plStack_20 = &lStackX_18;
  pcStack_28 = TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l23::<lambda_3>::operator()'::__l2::<lambda_2>,bool,int_const_&,int_&,int_&,int_&>
               ::Call;
  plStack_10 = &lStackX_20;
  pcStack_18 = TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l23::<lambda_3>::operator()'::__l2::<lambda_1>,UE::Math::TVector<float>,int_const_&>
               ::Call;
  lVar1 = 0x80;
  if (*(int *)(lStackX_8 + 0x28) == 0) {
    lVar1 = 0xa0;
  }
  lStackX_10 = lStackX_8;
  lStackX_18 = lStackX_8;
  lStackX_20 = lStackX_8;
  UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::
  PopulateOverlay<UE::Math::TVector<float>,int>
            (*(TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper> **)param_1,
             (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)
             **(undefined8 **)((longlong)param_1 + 8),
             (TArray<int,TSizedDefaultAllocator<32>_> *)(lVar1 + lStackX_8),
             (TFunctionRef<UE::Math::TVector<float>___cdecl(int_const_&)> *)&pcStack_18,
             (TFunctionRef<bool___cdecl(int_const_&,int_&,int_&,int_&)> *)&pcStack_28,
             (TFunctionRef<UE::Math::TVector<float>___cdecl(int_const_&)> *)&pcStack_38,
             (TFunctionRef<void___cdecl(int_const_&,int_&,int_&,int_&)> *)&pcStack_48);
  return;
}

// Call @ 14ca7d120

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l23::<lambda_3>,void>
::Call(void *param_1)

{
  longlong lStackX_8;
  longlong lStackX_10;
  longlong lStackX_18;
  longlong lStackX_20;
  code *pcStack_48;
  longlong *plStack_40;
  code *pcStack_38;
  longlong *plStack_30;
  code *pcStack_28;
  longlong *plStack_20;
  code *pcStack_18;
  longlong *plStack_10;
  
  lStackX_8 = *(longlong *)((longlong)param_1 + 0x10);
  plStack_40 = &lStackX_8;
  pcStack_48 = TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l23::<lambda_3>::operator()'::__l2::<lambda_4>,void,int_const_&,int_&,int_&,int_&>
               ::Call;
  plStack_30 = &lStackX_10;
  pcStack_38 = TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l23::<lambda_3>::operator()'::__l2::<lambda_3>,UE::Math::TVector<float>,int_const_&>
               ::Call;
  plStack_20 = &lStackX_18;
  pcStack_28 = TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l23::<lambda_3>::operator()'::__l2::<lambda_2>,bool,int_const_&,int_&,int_&,int_&>
               ::Call;
  plStack_10 = &lStackX_20;
  pcStack_18 = TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l23::<lambda_3>::operator()'::__l2::<lambda_1>,UE::Math::TVector<float>,int_const_&>
               ::Call;
  lStackX_10 = lStackX_8;
  lStackX_18 = lStackX_8;
  lStackX_20 = lStackX_8;
  UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::
  PopulateOverlay<UE::Math::TVector<float>,int>
            (*(TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper> **)param_1,
             (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)
             **(undefined8 **)((longlong)param_1 + 8),
             (TArray<int,TSizedDefaultAllocator<32>_> *)(lStackX_8 + 0x70),
             (TFunctionRef<UE::Math::TVector<float>___cdecl(int_const_&)> *)&pcStack_18,
             (TFunctionRef<bool___cdecl(int_const_&,int_&,int_&,int_&)> *)&pcStack_28,
             (TFunctionRef<UE::Math::TVector<float>___cdecl(int_const_&)> *)&pcStack_38,
             (TFunctionRef<void___cdecl(int_const_&,int_&,int_&,int_&)> *)&pcStack_48);
  return;
}

// Call @ 14ca7d130

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Conversion::SceneComponentToDynamicMesh'::__l67::<lambda_3>,UE::Math::TVector<double>,int,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,int *param_2,TVector<double> *param_3)

{
  `UE::Conversion::SceneComponentToDynamicMesh'::__l67::<lambda_3>::operator()
            (param_1,__return_storage_ptr__,*param_2,param_3);
  return __return_storage_ptr__;
}

// Call @ 14ca7d160

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UOctreeDynamicMeshComponent::NotifyMeshUpdated'::__l13::<lambda_3>,void,int>::
Call(void *param_1,int *param_2)

{
  `UOctreeDynamicMeshComponent::NotifyMeshUpdated'::__l13::<lambda_3>::operator()(param_1,*param_2);
  return;
}

// Call @ 14ca7d170

EBaseCreateFromSelectedTargetType __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<enum_EBaseCreateFromSelectedTargetType>::TPropertyWatcher<enum_EBaseCreateFromSelectedTargetType><enum_EBaseCreateFromSelectedTargetType,void>'::__l1::<lambda_40_>,enum_EBaseCreateFromSelectedTargetType>
::Call(void *param_1)

{
  return **(EBaseCreateFromSelectedTargetType **)param_1;
}

// Call @ 14ca7d180

FName __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<FName>::TPropertyWatcher<FName><FName,void>'::__l1::<lambda_42_>,FName>
::Call(void *param_1)

{
  undefined8 *in_RDX;
  
  *(undefined8 *)param_1 = *(undefined8 *)*in_RDX;
  return (FName)param_1;
}

// Call @ 14ca7d1a0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<bool>::TPropertyWatcher<bool><bool,void>'::__l1::<lambda_44_>,bool>
::Call(void *param_1)

{
  return (bool)**(undefined1 **)param_1;
}

// Call @ 14ca7d1b0

float __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<float>::TPropertyWatcher<float><float,void>'::__l1::<lambda_46_>,float>
::Call(void *param_1)

{
  return **(float **)param_1;
}

// Call @ 14ca7d1c0

FColor __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<FColor>::TPropertyWatcher<FColor><FColor,void>'::__l1::<lambda_48_>,FColor>
::Call(void *param_1)

{
  undefined8 *in_RDX;
  
  *(undefined4 *)param_1 = *(undefined4 *)*in_RDX;
  return (FColor)SUB84(param_1,0);
}

// Call @ 14ca7d1e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l26::<lambda_4>::operator()'::__l2::<lambda_4>,void,int_const_&,int_&,int_&,int_&>
::Call(void *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  Conversion::FGeometryCacheMeshBufferWrapper::GetTri
            (*(FGeometryCacheMeshBufferWrapper **)param_1,*param_2,param_3,param_4,param_5);
  return;
}

// Call @ 14ca7d1f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l26::<lambda_4>::operator()'::__l2::<lambda_4>,void,int_const_&,int_&,int_&,int_&>
::Call(void *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  
  iVar1 = *param_2 * 3;
  *param_3 = iVar1;
  *param_4 = iVar1 + 1;
  *param_5 = iVar1 + 2;
  return;
}

// Call @ 14ca7d210

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l17::<lambda_1>::operator()'::__l2::<lambda_4>,void,int_const_&,int_&,int_&,int_&>
::Call(void *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  Conversion::FGeometryCacheMeshBufferWrapper::GetTri
            (*(FGeometryCacheMeshBufferWrapper **)param_1,*param_2,param_3,param_4,param_5);
  return;
}

// Call @ 14ca7d220

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l17::<lambda_1>::operator()'::__l2::<lambda_4>,void,int_const_&,int_&,int_&,int_&>
::Call(void *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  
  iVar1 = *param_2 * 3;
  *param_3 = iVar1;
  *param_4 = iVar1 + 1;
  *param_5 = iVar1 + 2;
  return;
}

// Call @ 14ca7d240

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l20::<lambda_2>::operator()'::__l2::<lambda_4>,void,int_const_&,int_&,int_&,int_&>
::Call(void *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  Conversion::FGeometryCacheMeshBufferWrapper::GetTri
            (*(FGeometryCacheMeshBufferWrapper **)param_1,*param_2,param_3,param_4,param_5);
  return;
}

// Call @ 14ca7d250

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l20::<lambda_2>::operator()'::__l2::<lambda_4>,void,int_const_&,int_&,int_&,int_&>
::Call(void *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  
  iVar1 = *param_2 * 3;
  *param_3 = iVar1;
  *param_4 = iVar1 + 1;
  *param_5 = iVar1 + 2;
  return;
}

// Call @ 14ca7d270

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l23::<lambda_3>::operator()'::__l2::<lambda_4>,void,int_const_&,int_&,int_&,int_&>
::Call(void *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  Conversion::FGeometryCacheMeshBufferWrapper::GetTri
            (*(FGeometryCacheMeshBufferWrapper **)param_1,*param_2,param_3,param_4,param_5);
  return;
}

// Call @ 14ca7d280

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l23::<lambda_3>::operator()'::__l2::<lambda_4>,void,int_const_&,int_&,int_&,int_&>
::Call(void *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  
  iVar1 = *param_2 * 3;
  *param_3 = iVar1;
  *param_4 = iVar1 + 1;
  *param_5 = iVar1 + 2;
  return;
}

// Call @ 14ca7d2a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l29::<lambda_5>::operator()'::__l2::<lambda_4>,void,int_const_&,int_&,int_&,int_&>
::Call(void *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  Conversion::FGeometryCacheMeshBufferWrapper::GetTri
            (*(FGeometryCacheMeshBufferWrapper **)param_1,*param_2,param_3,param_4,param_5);
  return;
}

// Call @ 14ca7d2b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l29::<lambda_5>::operator()'::__l2::<lambda_4>,void,int_const_&,int_&,int_&,int_&>
::Call(void *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  
  iVar1 = *param_2 * 3;
  *param_3 = iVar1;
  *param_4 = iVar1 + 1;
  *param_5 = iVar1 + 2;
  return;
}

// Call @ 14ca7d2d0

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Conversion::GeometryCacheToDynamicMesh'::__l2::<lambda_4>,int,int_const_&>::
Call(void *param_1,int *param_2)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  
  lVar2 = *(longlong *)param_1;
  uVar1 = *param_2;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x68)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  return *(int *)(*(longlong *)(lVar2 + 0x60) + (longlong)(int)uVar1 * 4);
}

// Call @ 14ca7d340

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMeshElementsVisualizer::OnCreated'::__l2::<lambda_4>,void,bool_const_&>::Call
          (void *param_1,bool *param_2)

{
  *(undefined1 *)(*(longlong *)param_1 + 0x130) = 1;
  return;
}

// Call @ 14ca7d360

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UOctreeDynamicMeshComponent::CreateSceneProxy'::__l20::<lambda_4>,void,int>::
Call(void *param_1,int *param_2)

{
  `UOctreeDynamicMeshComponent::CreateSceneProxy'::__l20::<lambda_4>::operator()(param_1,*param_2);
  return;
}

// Call @ 14ca7d370

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l26::<lambda_4>,void>
::Call(void *param_1)

{
  longlong lVar1;
  longlong lStackX_8;
  longlong lStackX_10;
  longlong lStackX_18;
  longlong lStackX_20;
  code *pcStack_48;
  longlong *plStack_40;
  code *pcStack_38;
  longlong *plStack_30;
  code *pcStack_28;
  longlong *plStack_20;
  code *pcStack_18;
  longlong *plStack_10;
  
  lStackX_8 = *(longlong *)((longlong)param_1 + 0x10);
  plStack_40 = &lStackX_8;
  pcStack_48 = TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l26::<lambda_4>::operator()'::__l2::<lambda_4>,void,int_const_&,int_&,int_&,int_&>
               ::Call;
  plStack_30 = &lStackX_10;
  pcStack_38 = TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l26::<lambda_4>::operator()'::__l2::<lambda_3>,UE::Math::TVector<float>,int_const_&>
               ::Call;
  plStack_20 = &lStackX_18;
  pcStack_28 = TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l26::<lambda_4>::operator()'::__l2::<lambda_2>,bool,int_const_&,int_&,int_&,int_&>
               ::Call;
  plStack_10 = &lStackX_20;
  pcStack_18 = TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l26::<lambda_4>::operator()'::__l2::<lambda_1>,UE::Math::TVector<float>,int_const_&>
               ::Call;
  if ((*(int *)(lStackX_8 + 0x18) == 0) || (lVar1 = 0x80, *(int *)(lStackX_8 + 0x28) == 0)) {
    lVar1 = 0xa0;
  }
  lStackX_10 = lStackX_8;
  lStackX_18 = lStackX_8;
  lStackX_20 = lStackX_8;
  UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::
  PopulateOverlay<UE::Math::TVector<float>,int>
            (*(TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper> **)param_1,
             (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)
             **(undefined8 **)((longlong)param_1 + 8),
             (TArray<int,TSizedDefaultAllocator<32>_> *)(lStackX_8 + lVar1),
             (TFunctionRef<UE::Math::TVector<float>___cdecl(int_const_&)> *)&pcStack_18,
             (TFunctionRef<bool___cdecl(int_const_&,int_&,int_&,int_&)> *)&pcStack_28,
             (TFunctionRef<UE::Math::TVector<float>___cdecl(int_const_&)> *)&pcStack_38,
             (TFunctionRef<void___cdecl(int_const_&,int_&,int_&,int_&)> *)&pcStack_48);
  return;
}

// Call @ 14ca7d380

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l26::<lambda_4>,void>
::Call(void *param_1)

{
  longlong lStackX_8;
  longlong lStackX_10;
  longlong lStackX_18;
  longlong lStackX_20;
  code *pcStack_48;
  longlong *plStack_40;
  code *pcStack_38;
  longlong *plStack_30;
  code *pcStack_28;
  longlong *plStack_20;
  code *pcStack_18;
  longlong *plStack_10;
  
  lStackX_8 = *(longlong *)((longlong)param_1 + 0x10);
  plStack_40 = &lStackX_8;
  pcStack_48 = TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l26::<lambda_4>::operator()'::__l2::<lambda_4>,void,int_const_&,int_&,int_&,int_&>
               ::Call;
  plStack_30 = &lStackX_10;
  pcStack_38 = TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l26::<lambda_4>::operator()'::__l2::<lambda_3>,UE::Math::TVector<float>,int_const_&>
               ::Call;
  plStack_20 = &lStackX_18;
  pcStack_28 = TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l26::<lambda_4>::operator()'::__l2::<lambda_2>,bool,int_const_&,int_&,int_&,int_&>
               ::Call;
  plStack_10 = &lStackX_20;
  pcStack_18 = TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l26::<lambda_4>::operator()'::__l2::<lambda_1>,UE::Math::TVector<float>,int_const_&>
               ::Call;
  lStackX_10 = lStackX_8;
  lStackX_18 = lStackX_8;
  lStackX_20 = lStackX_8;
  UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::
  PopulateOverlay<UE::Math::TVector<float>,int>
            (*(TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper> **)param_1,
             (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)
             **(undefined8 **)((longlong)param_1 + 8),
             (TArray<int,TSizedDefaultAllocator<32>_> *)(lStackX_8 + 0x70),
             (TFunctionRef<UE::Math::TVector<float>___cdecl(int_const_&)> *)&pcStack_18,
             (TFunctionRef<bool___cdecl(int_const_&,int_&,int_&,int_&)> *)&pcStack_28,
             (TFunctionRef<UE::Math::TVector<float>___cdecl(int_const_&)> *)&pcStack_38,
             (TFunctionRef<void___cdecl(int_const_&,int_&,int_&,int_&)> *)&pcStack_48);
  return;
}

// Call @ 14ca7d390

TVector<float> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::MakeRenderCaptureBaker'::__l74::<lambda_4>,UE::Math::TVector<float>,UE::Geometry::FMeshMapEvaluator::FCorrespondenceSample_const_&>
::Call(TVector<float> *__return_storage_ptr__,void *param_1,FCorrespondenceSample *param_2)

{
  `UE::Geometry::MakeRenderCaptureBaker'::__l74::<lambda_4>::operator()
            (param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Call @ 14ca7d3c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Conversion::SceneComponentToDynamicMesh'::__l81::<lambda_4>,void,UE::Geometry::FDynamicMesh3_const_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
  UE::Geometry::FDynamicMesh3::operator=(*(FDynamicMesh3 **)param_1,param_2);
  return;
}

// Call @ 14ca7d3d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UOctreeDynamicMeshComponent::NotifyMeshUpdated'::__l13::<lambda_4>,void,int>::
Call(void *param_1,int *param_2)

{
  `UOctreeDynamicMeshComponent::NotifyMeshUpdated'::__l13::<lambda_4>::operator()(param_1,*param_2);
  return;
}

// Call @ 14ca7d3e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMeshElementsVisualizer::OnCreated'::__l2::<lambda_5>,void,bool_const_&>::Call
          (void *param_1,bool *param_2)

{
  *(undefined1 *)(*(longlong *)param_1 + 0x130) = 1;
  return;
}

// Call @ 14ca7d400

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::SplineDeformDynamicMesh'::__l21::<lambda_5>,void,int>::Call
          (void *param_1,int *param_2)

{
  `UE::Geometry::SplineDeformDynamicMesh'::__l21::<lambda_5>::operator()(param_1,*param_2);
  return;
}

// Call @ 14ca7d410

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l29::<lambda_5>,void>
::Call(void *param_1)

{
  TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper> *this;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *pTVar1;
  longlong lVar2;
  longlong lStackX_8;
  longlong lStackX_10;
  longlong lStackX_18;
  longlong lStackX_20;
  code *pcStack_38;
  longlong *plStack_30;
  code *pcStack_28;
  longlong *plStack_20;
  
  lStackX_8 = *(longlong *)((longlong)param_1 + 0x10);
  this = *(TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper> **)param_1;
  pTVar1 = (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)
           **(undefined8 **)((longlong)param_1 + 8);
  pcStack_38 = TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l29::<lambda_5>::operator()'::__l2::<lambda_2>,bool,int_const_&,int_&,int_&,int_&>
               ::Call;
  plStack_30 = &lStackX_8;
  pcStack_28 = TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l29::<lambda_5>::operator()'::__l2::<lambda_1>,UE::Math::TVector4<float>,int_const_&>
               ::Call;
  plStack_20 = &lStackX_10;
  lVar2 = 0x80;
  if (*(int *)(lStackX_8 + 0x48) == 0) {
    lVar2 = 0xa0;
  }
  lStackX_10 = lStackX_8;
  lStackX_18 = lStackX_8;
  lStackX_20 = lStackX_8;
  UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::
  PopulateOverlayFromSharedAttr<UE::Math::TVector4<float>,int>
            (this,pTVar1,(TArray<int,TSizedDefaultAllocator<32>_> *)(lVar2 + lStackX_8),
             (TFunctionRef<UE::Math::TVector4<float>___cdecl(int_const_&)> *)&pcStack_28,
             (TFunctionRef<bool___cdecl(int_const_&,int_&,int_&,int_&)> *)&pcStack_38);
  pcStack_28 = TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l29::<lambda_5>::operator()'::__l2::<lambda_4>,void,int_const_&,int_&,int_&,int_&>
               ::Call;
  plStack_20 = &lStackX_18;
  pcStack_38 = TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l29::<lambda_5>::operator()'::__l2::<lambda_3>,UE::Math::TVector4<float>,int_const_&>
               ::Call;
  plStack_30 = &lStackX_20;
  UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::
  PopulateOverlayFromWedgeAttr<UE::Math::TVector4<float>_>
            (this,pTVar1,(TFunctionRef<UE::Math::TVector4<float>___cdecl(int_const_&)> *)&pcStack_38
             ,(TFunctionRef<void___cdecl(int_const_&,int_&,int_&,int_&)> *)&pcStack_28,true);
  return;
}

// Call @ 14ca7d420

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l29::<lambda_5>,void>
::Call(void *param_1)

{
  TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper> *this;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *pTVar1;
  longlong lStackX_8;
  longlong lStackX_10;
  longlong lStackX_18;
  longlong lStackX_20;
  code *pcStack_38;
  longlong *plStack_30;
  code *pcStack_28;
  longlong *plStack_20;
  
  lStackX_8 = *(longlong *)((longlong)param_1 + 0x10);
  this = *(TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper> **)param_1;
  pTVar1 = (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)
           **(undefined8 **)((longlong)param_1 + 8);
  pcStack_38 = TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l29::<lambda_5>::operator()'::__l2::<lambda_2>,bool,int_const_&,int_&,int_&,int_&>
               ::Call;
  plStack_30 = &lStackX_8;
  pcStack_28 = TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l29::<lambda_5>::operator()'::__l2::<lambda_1>,UE::Math::TVector4<float>,int_const_&>
               ::Call;
  plStack_20 = &lStackX_10;
  lStackX_10 = lStackX_8;
  lStackX_18 = lStackX_8;
  lStackX_20 = lStackX_8;
  UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::
  PopulateOverlayFromSharedAttr<UE::Math::TVector4<float>,int>
            (this,pTVar1,(TArray<int,TSizedDefaultAllocator<32>_> *)(lStackX_8 + 0x70),
             (TFunctionRef<UE::Math::TVector4<float>___cdecl(int_const_&)> *)&pcStack_28,
             (TFunctionRef<bool___cdecl(int_const_&,int_&,int_&,int_&)> *)&pcStack_38);
  pcStack_28 = TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l29::<lambda_5>::operator()'::__l2::<lambda_4>,void,int_const_&,int_&,int_&,int_&>
               ::Call;
  plStack_20 = &lStackX_18;
  pcStack_38 = TFunctionRefCaller<``UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l29::<lambda_5>::operator()'::__l2::<lambda_3>,UE::Math::TVector4<float>,int_const_&>
               ::Call;
  plStack_30 = &lStackX_20;
  UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::
  PopulateOverlayFromWedgeAttr<UE::Math::TVector4<float>_>
            (this,pTVar1,(TFunctionRef<UE::Math::TVector4<float>___cdecl(int_const_&)> *)&pcStack_38
             ,(TFunctionRef<void___cdecl(int_const_&,int_&,int_&,int_&)> *)&pcStack_28,true);
  return;
}

// Call @ 14ca7d430

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMeshElementsVisualizer::OnCreated'::__l2::<lambda_6>,void,bool_const_&>::Call
          (void *param_1,bool *param_2)

{
  *(undefined1 *)(*(longlong *)param_1 + 0x130) = 1;
  return;
}

// Call @ 14ca7d450

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::SplineDeformDynamicMesh'::__l2::<lambda_6>,void,int>::Call
          (void *param_1,int *param_2)

{
  `UE::Geometry::SplineDeformDynamicMesh'::__l2::<lambda_6>::operator()(param_1,*param_2);
  return;
}

// Call @ 14ca7d460

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l32::<lambda_6>,void>
::Call(void *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined4 auStackX_8 [2];
  
  lVar1 = *(longlong *)param_1;
  uVar10 = 0;
  uVar12 = *(int *)(lVar1 + 0x144) + *(int *)(lVar1 + 0x140) * 0x200;
  if ((uVar12 != 0) &&
     (puVar2 = *(undefined8 **)(lVar1 + 0x148), 0xfffd < (ushort)(*(short *)*puVar2 - 1U))) {
    uVar10 = 1;
    uVar8 = 1;
    if ((int)uVar12 < 2) goto joined_r0x00014ca724b7;
    do {
      lVar3 = (ulonglong)((uint)uVar10 & 0x1ff) * 2;
      if ((*(short *)(lVar3 + puVar2[uVar10 >> 9]) != 0) &&
         (*(short *)(lVar3 + puVar2[uVar10 >> 9]) != -1)) break;
      uVar8 = (uint)uVar10 + 1;
      uVar10 = (ulonglong)uVar8;
    } while ((int)uVar8 < (int)uVar12);
  }
  uVar8 = (uint)uVar10;
joined_r0x00014ca724b7:
  do {
    if (uVar8 == uVar12) {
      return;
    }
    while( true ) {
      lVar3 = *(longlong *)((longlong)param_1 + 8);
      uVar9 = (uint)uVar10;
      uVar8 = 0;
      if ((int)uVar9 < *(int *)(lVar3 + 0x18)) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      auStackX_8[0] = *(undefined4 *)(*(longlong *)(lVar3 + 0x10) + (longlong)(int)uVar9 * 4);
      lVar3 = **(longlong **)((longlong)param_1 + 0x10);
      uVar7 = (*(code *)**(undefined8 **)((longlong)param_1 + 0x18))
                        ((*(undefined8 **)((longlong)param_1 + 0x18))[1],auStackX_8);
      uVar8 = uVar9 + 1;
      uVar11 = (ulonglong)uVar8;
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x20) + (uVar10 >> 9) * 8) +
       (ulonglong)(uVar9 & 0x1ff) * 4) = uVar7;
      uVar10 = uVar11;
      if ((int)uVar12 <= (int)uVar8) break;
      while( true ) {
        lVar3 = (uVar11 >> 9) * 8;
        lVar5 = (ulonglong)((uint)uVar11 & 0x1ff) * 2;
        if ((*(short *)(lVar5 + *(longlong *)(*(longlong *)(lVar1 + 0x148) + lVar3)) != 0) &&
           (uVar10 = uVar11,
           *(short *)(lVar5 + *(longlong *)(lVar3 + *(longlong *)(lVar1 + 0x148))) != -1)) break;
        uVar8 = (uint)uVar11 + 1;
        uVar11 = (ulonglong)uVar8;
        uVar10 = uVar11;
        if ((int)uVar12 <= (int)uVar8) goto joined_r0x00014ca724b7;
      }
    }
  } while( true );
}

// Call @ 14ca7d470

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l32::<lambda_6>,void>
::Call(void *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined4 auStackX_8 [2];
  
  lVar1 = *(longlong *)param_1;
  uVar10 = 0;
  uVar12 = *(int *)(lVar1 + 0x144) + *(int *)(lVar1 + 0x140) * 0x200;
  if ((uVar12 != 0) &&
     (puVar2 = *(undefined8 **)(lVar1 + 0x148), 0xfffd < (ushort)(*(short *)*puVar2 - 1U))) {
    uVar10 = 1;
    uVar8 = 1;
    if ((int)uVar12 < 2) goto joined_r0x00014ca72667;
    do {
      lVar3 = (ulonglong)((uint)uVar10 & 0x1ff) * 2;
      if ((*(short *)(lVar3 + puVar2[uVar10 >> 9]) != 0) &&
         (*(short *)(lVar3 + puVar2[uVar10 >> 9]) != -1)) break;
      uVar8 = (uint)uVar10 + 1;
      uVar10 = (ulonglong)uVar8;
    } while ((int)uVar8 < (int)uVar12);
  }
  uVar8 = (uint)uVar10;
joined_r0x00014ca72667:
  do {
    if (uVar8 == uVar12) {
      return;
    }
    while( true ) {
      lVar3 = *(longlong *)((longlong)param_1 + 8);
      uVar9 = (uint)uVar10;
      uVar8 = 0;
      if ((int)uVar9 < *(int *)(lVar3 + 0x18)) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      auStackX_8[0] = *(undefined4 *)(*(longlong *)(lVar3 + 0x10) + (longlong)(int)uVar9 * 4);
      lVar3 = **(longlong **)((longlong)param_1 + 0x10);
      uVar7 = (*(code *)**(undefined8 **)((longlong)param_1 + 0x18))
                        ((*(undefined8 **)((longlong)param_1 + 0x18))[1],auStackX_8);
      uVar8 = uVar9 + 1;
      uVar11 = (ulonglong)uVar8;
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x20) + (uVar10 >> 9) * 8) +
       (ulonglong)(uVar9 & 0x1ff) * 4) = uVar7;
      uVar10 = uVar11;
      if ((int)uVar12 <= (int)uVar8) break;
      while( true ) {
        lVar3 = (uVar11 >> 9) * 8;
        lVar5 = (ulonglong)((uint)uVar11 & 0x1ff) * 2;
        if ((*(short *)(lVar5 + *(longlong *)(*(longlong *)(lVar1 + 0x148) + lVar3)) != 0) &&
           (uVar10 = uVar11,
           *(short *)(lVar5 + *(longlong *)(lVar3 + *(longlong *)(lVar1 + 0x148))) != -1)) break;
        uVar8 = (uint)uVar11 + 1;
        uVar11 = (ulonglong)uVar8;
        uVar10 = uVar11;
        if ((int)uVar12 <= (int)uVar8) goto joined_r0x00014ca72667;
      }
    }
  } while( true );
}

// Call @ 14ca7d480

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMeshElementsVisualizer::OnCreated'::__l2::<lambda_7>,void,bool_const_&>::Call
          (void *param_1,bool *param_2)

{
  *(undefined1 *)(*(longlong *)param_1 + 0x130) = 1;
  return;
}

// Call @ 14ca7d4a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l34::<lambda_7>,void>
::Call(void *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *pTVar5;
  FDynamicMeshAttributeSet *this;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  FDynamicMeshAttributeSet *pFVar9;
  uint uVar10;
  
  pFVar9 = *(FDynamicMeshAttributeSet **)(*(longlong *)((longlong)param_1 + 0x10) + 0x208);
  this = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar9 != (FDynamicMeshAttributeSet *)0x0) {
    this = pFVar9;
  }
  pTVar5 = UE::Geometry::FDynamicMeshAttributeSet::GetWeightLayer
                     (this,*(int *)((longlong)param_1 + 0x18));
  lVar1 = *(longlong *)((longlong)param_1 + 0x10);
  uVar10 = *(int *)(lVar1 + 0x24) + *(int *)(lVar1 + 0x20) * 0x200;
  pFVar9 = (FDynamicMeshAttributeSet *)0x0;
  if ((uVar10 != 0) &&
     (pFVar9 = (FDynamicMeshAttributeSet *)0x0,
     0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x28) - 1U))) {
    pFVar9 = (FDynamicMeshAttributeSet *)&DAT_00000001;
    uVar7 = 1;
    if ((int)uVar10 < 2) goto joined_r0x00014ca72828;
    do {
      uVar6 = (ulonglong)((uint)pFVar9 & 0x1ff);
      lVar2 = (*(undefined8 **)(lVar1 + 0x28))[(ulonglong)pFVar9 >> 9];
      if ((*(short *)(lVar2 + uVar6 * 2) != 0) && (*(short *)(lVar2 + uVar6 * 2) != -1)) break;
      uVar7 = (uint)pFVar9 + 1;
      pFVar9 = (FDynamicMeshAttributeSet *)(ulonglong)uVar7;
    } while ((int)uVar7 < (int)uVar10);
  }
  uVar7 = (uint)pFVar9;
joined_r0x00014ca72828:
  do {
    if (uVar7 == uVar10) {
      pTVar5->_padding_ = 0;
      return;
    }
    while( true ) {
      uVar8 = (uint)pFVar9;
      uVar7 = 0;
      if ((int)uVar8 < *(int *)(*(longlong *)param_1 + 8)) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar6 = (ulonglong)pFVar9 >> 9;
      uVar7 = uVar8 + 1;
      pFVar9 = (FDynamicMeshAttributeSet *)(ulonglong)uVar7;
      *(undefined4 *)
       (*(longlong *)((pTVar5->AttribValues).Blocks.AllocatorInstance.Data + uVar6 * 8) +
       (ulonglong)(uVar8 & 0x1ff) * 4) = 0;
      if ((int)uVar10 <= (int)uVar7) break;
      while( true ) {
        uVar6 = (ulonglong)((uint)pFVar9 & 0x1ff);
        lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x28) + ((ulonglong)pFVar9 >> 9) * 8);
        if ((*(short *)(lVar2 + uVar6 * 2) != 0) && (*(short *)(lVar2 + uVar6 * 2) != -1)) break;
        uVar7 = (uint)pFVar9 + 1;
        pFVar9 = (FDynamicMeshAttributeSet *)(ulonglong)uVar7;
        if ((int)uVar10 <= (int)uVar7) goto joined_r0x00014ca72828;
      }
    }
  } while( true );
}

// Call @ 14ca7d4b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l34::<lambda_7>,void>
::Call(void *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *pTVar5;
  FDynamicMeshAttributeSet *this;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  FDynamicMeshAttributeSet *pFVar9;
  uint uVar10;
  
  pFVar9 = *(FDynamicMeshAttributeSet **)(*(longlong *)((longlong)param_1 + 0x10) + 0x208);
  this = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar9 != (FDynamicMeshAttributeSet *)0x0) {
    this = pFVar9;
  }
  pTVar5 = UE::Geometry::FDynamicMeshAttributeSet::GetWeightLayer
                     (this,*(int *)((longlong)param_1 + 0x18));
  lVar1 = *(longlong *)((longlong)param_1 + 0x10);
  uVar10 = *(int *)(lVar1 + 0x24) + *(int *)(lVar1 + 0x20) * 0x200;
  pFVar9 = (FDynamicMeshAttributeSet *)0x0;
  if ((uVar10 != 0) &&
     (pFVar9 = (FDynamicMeshAttributeSet *)0x0,
     0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x28) - 1U))) {
    pFVar9 = (FDynamicMeshAttributeSet *)&DAT_00000001;
    uVar7 = 1;
    if ((int)uVar10 < 2) goto joined_r0x00014ca729a8;
    do {
      uVar6 = (ulonglong)((uint)pFVar9 & 0x1ff);
      lVar2 = (*(undefined8 **)(lVar1 + 0x28))[(ulonglong)pFVar9 >> 9];
      if ((*(short *)(lVar2 + uVar6 * 2) != 0) && (*(short *)(lVar2 + uVar6 * 2) != -1)) break;
      uVar7 = (uint)pFVar9 + 1;
      pFVar9 = (FDynamicMeshAttributeSet *)(ulonglong)uVar7;
    } while ((int)uVar7 < (int)uVar10);
  }
  uVar7 = (uint)pFVar9;
joined_r0x00014ca729a8:
  do {
    if (uVar7 == uVar10) {
      pTVar5->_padding_ = 0;
      return;
    }
    while( true ) {
      uVar8 = (uint)pFVar9;
      uVar7 = 0;
      if ((int)uVar8 < *(int *)(*(longlong *)param_1 + 8)) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar6 = (ulonglong)pFVar9 >> 9;
      uVar7 = uVar8 + 1;
      pFVar9 = (FDynamicMeshAttributeSet *)(ulonglong)uVar7;
      *(undefined4 *)
       (*(longlong *)((pTVar5->AttribValues).Blocks.AllocatorInstance.Data + uVar6 * 8) +
       (ulonglong)(uVar8 & 0x1ff) * 4) = 0;
      if ((int)uVar10 <= (int)uVar7) break;
      while( true ) {
        uVar6 = (ulonglong)((uint)pFVar9 & 0x1ff);
        lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x28) + ((ulonglong)pFVar9 >> 9) * 8);
        if ((*(short *)(lVar2 + uVar6 * 2) != 0) && (*(short *)(lVar2 + uVar6 * 2) != -1)) break;
        uVar7 = (uint)pFVar9 + 1;
        pFVar9 = (FDynamicMeshAttributeSet *)(ulonglong)uVar7;
        if ((int)uVar10 <= (int)uVar7) goto joined_r0x00014ca729a8;
      }
    }
  } while( true );
}

// Call @ 14ca7d4c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMeshElementsVisualizer::OnCreated'::__l2::<lambda_8>,void,float_const_&>::Call
          (void *param_1,float *param_2)

{
  *(undefined1 *)(*(longlong *)param_1 + 0x130) = 1;
  return;
}

// Call @ 14ca7d4e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l38::<lambda_8>,void>
::Call(void *param_1)

{
  uchar *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  uint uVar9;
  TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *pTVar10;
  FDynamicMeshAttributeSet *this;
  ForElementType<UE::AnimationCore::FBoneWeight> *pFVar11;
  uint uVar12;
  FDynamicMeshAttributeSet *pFVar13;
  uint uVar14;
  ForElementType<UE::AnimationCore::FBoneWeight> FStack_68;
  
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\ConversionUtils\\GeometryCacheToDynamicMesh.cpp"
                     ,0x110,L"");
  if (bVar8) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar13 = *(FDynamicMeshAttributeSet **)(*(longlong *)((longlong)param_1 + 0x10) + 0x208);
  this = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar13 != (FDynamicMeshAttributeSet *)0x0) {
    this = pFVar13;
  }
  pTVar10 = UE::Geometry::FDynamicMeshAttributeSet::GetSkinWeightsAttribute(this,(FName)0x0);
  if (pTVar10 == (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)0x0) {
    return;
  }
  lVar3 = *(longlong *)((longlong)param_1 + 0x10);
  uVar14 = *(int *)(lVar3 + 0x20) * 0x200 + *(int *)(lVar3 + 0x24);
  pFVar13 = (FDynamicMeshAttributeSet *)0x0;
  if ((uVar14 != 0) &&
     (puVar4 = *(undefined8 **)(lVar3 + 0x28), pFVar13 = (FDynamicMeshAttributeSet *)0x0,
     0xfffd < (ushort)(*(short *)*puVar4 - 1U))) {
    pFVar13 = (FDynamicMeshAttributeSet *)&DAT_00000001;
    uVar12 = 1;
    if ((int)uVar14 < 2) goto joined_r0x00014ca72b77;
    do {
      lVar5 = (ulonglong)((uint)pFVar13 & 0x1ff) * 2;
      if ((*(short *)(lVar5 + puVar4[(ulonglong)pFVar13 >> 9]) != 0) &&
         (*(short *)(lVar5 + puVar4[(ulonglong)pFVar13 >> 9]) != -1)) break;
      uVar12 = (uint)pFVar13 + 1;
      pFVar13 = (FDynamicMeshAttributeSet *)(ulonglong)uVar12;
    } while ((int)uVar12 < (int)uVar14);
  }
  uVar12 = (uint)pFVar13;
joined_r0x00014ca72b77:
  do {
    if (uVar12 == uVar14) {
      return;
    }
    while( true ) {
      uVar12 = (uint)pFVar13;
      uVar9 = 0;
      if ((int)uVar12 < *(int *)(*(longlong *)param_1 + 8)) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\ConversionUtils\\GeometryCacheToDynamicMesh.cpp"
                         ,0x10f,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar11 = (ForElementType<UE::AnimationCore::FBoneWeight> *)
                (*(longlong *)
                  ((pTVar10->VertexBoneWeights).Blocks.AllocatorInstance.Data +
                  ((ulonglong)pFVar13 >> 9) * 8) + (ulonglong)(uVar12 & 0x1ff) * 0x40);
      if (pFVar11 != &FStack_68) {
        iVar2 = *(int *)(pFVar11[1].InlineData + 4);
        puVar1 = pFVar11[1].InlineData + 4;
        pFVar11[1].InlineData[0] = '\0';
        pFVar11[1].InlineData[1] = '\0';
        pFVar11[1].InlineData[2] = '\0';
        pFVar11[1].InlineData[3] = '\0';
        if (iVar2 == 0) {
          puVar1[0] = '\f';
          puVar1[1] = '\0';
          puVar1[2] = '\0';
          puVar1[3] = '\0';
        }
        else {
          ReallocForCopy<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                    (4,2,0,iVar2,pFVar11,0,(int *)puVar1);
        }
      }
      uVar12 = uVar12 + 1;
      pFVar13 = (FDynamicMeshAttributeSet *)(ulonglong)uVar12;
      if ((int)uVar14 <= (int)uVar12) break;
      while( true ) {
        lVar7 = (ulonglong)((uint)pFVar13 & 0x1ff) * 2;
        lVar5 = *(longlong *)(((ulonglong)pFVar13 >> 9) * 8 + *(longlong *)(lVar3 + 0x28));
        if ((*(short *)(lVar7 + lVar5) != 0) && (*(short *)(lVar7 + lVar5) != -1)) break;
        uVar12 = (uint)pFVar13 + 1;
        pFVar13 = (FDynamicMeshAttributeSet *)(ulonglong)uVar12;
        if ((int)uVar14 <= (int)uVar12) goto joined_r0x00014ca72b77;
      }
    }
  } while( true );
}

// Call @ 14ca7d4f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l38::<lambda_8>,void>
::Call(void *param_1)

{
  int *piVar1;
  ushort uVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  FDynamicMeshAttributeSet *this;
  ushort *puVar10;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar11;
  uint uVar12;
  FDynamicMeshAttributeSet *pFVar13;
  int iVar14;
  ushort *puVar15;
  int iVar16;
  longlong lVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  ForElementType<UE::AnimationCore::FBoneWeight> _Src;
  undefined1 auStackY_f8 [32];
  FIdentityFunctor FStack_b8;
  FBoneWeight FStack_b4;
  code *pcStack_98;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  TStack_90;
  TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *pTStack_88;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  TStack_78;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pFVar13 = *(FDynamicMeshAttributeSet **)(*(longlong *)((longlong)param_1 + 0x10) + 0x208);
  this = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar13 != (FDynamicMeshAttributeSet *)0x0) {
    this = pFVar13;
  }
  pTStack_88 = UE::Geometry::FDynamicMeshAttributeSet::GetSkinWeightsAttribute
                         (this,FSkeletalMeshAttributesShared::DefaultSkinWeightProfileName);
  if (pTStack_88 != (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)0x0) {
    lVar3 = *(longlong *)((longlong)param_1 + 0x10);
    uVar18 = *(int *)(lVar3 + 0x24) + *(int *)(lVar3 + 0x20) * 0x200;
    pFVar13 = (FDynamicMeshAttributeSet *)0x0;
    if (((uVar18 != 0) &&
        (pFVar13 = (FDynamicMeshAttributeSet *)0x0,
        0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar3 + 0x28) - 1U))) &&
       (pFVar13 = (FDynamicMeshAttributeSet *)&DAT_00000001, 1 < (int)uVar18)) {
      do {
        lVar17 = (ulonglong)((uint)pFVar13 & 0x1ff) * 2;
        lVar20 = (*(undefined8 **)(lVar3 + 0x28))[(ulonglong)pFVar13 >> 9];
        if ((*(short *)(lVar17 + lVar20) != 0) && (*(short *)(lVar17 + lVar20) != -1)) break;
        uVar12 = (uint)pFVar13 + 1;
        pFVar13 = (FDynamicMeshAttributeSet *)(ulonglong)uVar12;
      } while ((int)uVar12 < (int)uVar18);
    }
    uVar12 = (uint)pFVar13;
joined_r0x00014ca72db5:
    if (uVar12 != uVar18) {
      do {
        plVar4 = *(longlong **)param_1;
        uVar12 = (uint)pFVar13;
        uVar7 = 0;
        if ((int)uVar12 < (int)plVar4[1]) {
          uVar7 = ~uVar12 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar20 = *(longlong *)((longlong)param_1 + 8);
        uVar7 = *(uint *)(*plVar4 + (longlong)(int)uVar12 * 4);
        uVar8 = 0;
        if ((int)uVar7 < *(int *)(lVar20 + 0x88)) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        TStack_90.Container = &TStack_78;
        puVar10 = (ushort *)((longlong)(int)uVar7 * 0x30 + *(longlong *)(lVar20 + 0x80));
        iVar19 = 0;
        puVar15 = puVar10 + 0xc;
        TStack_78.AllocatorInstance.SecondaryData =
             (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
        TStack_78.ArrayNum = 0;
        TStack_78.ArrayMax = 0xc;
        iVar14 = iVar19;
        iVar16 = iVar19;
        do {
          uVar2 = *puVar15;
          iVar9 = iVar14;
          if (uVar2 == 0) break;
          iVar16 = iVar16 + 1;
          puVar15 = puVar15 + 1;
          iVar9 = iVar14 + 1;
          if (uVar2 == 0) {
            iVar9 = iVar14;
          }
          iVar14 = iVar9;
        } while (iVar16 < 0xc);
        AnimationCore::FBoneWeights::
        TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
        ::SetNum(&TStack_78,iVar9);
        iVar14 = 0;
        lVar20 = 0;
        do {
          FStack_b4.RawWeight = puVar10[0xc];
          if (FStack_b4.RawWeight == 0) break;
          FStack_b4.BoneIndex = *puVar10;
          lVar17 = lVar20;
          if (FStack_b4.RawWeight != 0) {
            iVar19 = iVar19 + 1;
            lVar17 = lVar20 + 1;
            FVar11 = (ForElementType<UE::AnimationCore::FBoneWeight>)&TStack_78;
            if (TStack_78.AllocatorInstance.SecondaryData !=
                (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
              FVar11 = TStack_78.AllocatorInstance.SecondaryData;
            }
            *(FBoneWeight *)((longlong)FVar11 + lVar20 * 4) = FStack_b4;
          }
          iVar14 = iVar14 + 1;
          puVar10 = puVar10 + 1;
          lVar20 = lVar17;
        } while (iVar14 < 0xc);
        pcStack_98 = AnimationCore::FBoneWeight::DescSortByWeightPredicate;
        FVar11 = (ForElementType<UE::AnimationCore::FBoneWeight>)&TStack_78;
        if (TStack_78.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
          FVar11 = TStack_78.AllocatorInstance.SecondaryData;
        }
        AlgoImpl::
        IntroSortInternal<UE::AnimationCore::FBoneWeight,int,FIdentityFunctor,TDereferenceWrapper<UE::AnimationCore::FBoneWeight,bool_(__cdecl*)(UE::AnimationCore::FBoneWeight_const_&,UE::AnimationCore::FBoneWeight_const_&)>_>
                  ((FBoneWeight *)FVar11,TStack_78.ArrayNum,FStack_b8,
                   (TDereferenceWrapper<UE::AnimationCore::FBoneWeight,bool_(__cdecl*)(UE::AnimationCore::FBoneWeight_const_&,UE::AnimationCore::FBoneWeight_const_&)>
                    )&pcStack_98);
        if (0xc < iVar19) {
          AnimationCore::FBoneWeights::
          TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
          ::SetNum(&TStack_78,0xc);
        }
        AnimationCore::
        TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
        ::NormalizeWeights(&TStack_90,Always);
        iVar14 = TStack_78.ArrayNum;
        FVar11 = (ForElementType<UE::AnimationCore::FBoneWeight>)
                 (*(longlong *)
                   ((pTStack_88->VertexBoneWeights).Blocks.AllocatorInstance.Data +
                   ((ulonglong)pFVar13 >> 9) * 8) + (ulonglong)(uVar12 & 0x1ff) * 0x40);
        if (FVar11 != (ForElementType<UE::AnimationCore::FBoneWeight>)&TStack_78) {
          lVar20 = (longlong)TStack_78.ArrayNum;
          piVar1 = (int *)((longlong)FVar11 + 0x3c);
          *(int *)((longlong)FVar11 + 0x38) = TStack_78.ArrayNum;
          _Src = (ForElementType<UE::AnimationCore::FBoneWeight>)&TStack_78;
          if (TStack_78.AllocatorInstance.SecondaryData !=
              (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
            _Src = TStack_78.AllocatorInstance.SecondaryData;
          }
          if ((TStack_78.ArrayNum == 0) && (*piVar1 == 0)) {
            *piVar1 = 0xc;
          }
          else {
            ReallocForCopy<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                      (4,2,TStack_78.ArrayNum,*piVar1,
                       (ForElementType<UE::AnimationCore::FBoneWeight> *)FVar11,TStack_78.ArrayNum,
                       piVar1);
            if (*(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar11 + 0x30) !=
                (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
              FVar11 = *(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar11 + 0x30);
            }
            if (iVar14 != 0) {
              memcpy((void *)FVar11,(void *)_Src,lVar20 << 2);
            }
          }
        }
        if (TStack_78.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
          FMemory::Free((void *)TStack_78.AllocatorInstance.SecondaryData);
        }
        uVar12 = uVar12 + 1;
        pFVar13 = (FDynamicMeshAttributeSet *)(ulonglong)uVar12;
        if ((int)uVar18 <= (int)uVar12) goto joined_r0x00014ca72db5;
        while( true ) {
          lVar20 = ((ulonglong)pFVar13 >> 9) * 8;
          lVar17 = (ulonglong)((uint)pFVar13 & 0x1ff) * 2;
          if ((*(short *)(lVar17 + *(longlong *)(lVar20 + *(longlong *)(lVar3 + 0x28))) != 0) &&
             (*(short *)(lVar17 + *(longlong *)(*(longlong *)(lVar3 + 0x28) + lVar20)) != -1))
          break;
          uVar12 = (uint)pFVar13 + 1;
          pFVar13 = (FDynamicMeshAttributeSet *)(ulonglong)uVar12;
          if ((int)uVar18 <= (int)uVar12) goto joined_r0x00014ca72db5;
        }
      } while( true );
    }
  }
  return;
}

// Call @ 14ca7d500

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMeshElementsVisualizer::OnCreated'::__l2::<lambda_9>,void,float_const_&>::Call
          (void *param_1,float *param_2)

{
  *(undefined1 *)(*(longlong *)param_1 + 0x130) = 1;
  return;
}

// Call @ 14ca7d520

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TToDynamicMesh<UE::Conversion::FGeometryCacheMeshBufferWrapper>::PopulateOverlays'::__l41::<lambda_9>,void>
::Call(void *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  __m128d _Var6;
  __m128d _Var7;
  __m128d _Var8;
  __m128d _Var9;
  __m128d _Var10;
  __m128d _Var11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  
  uVar5 = _UNK_15076b1f8;
  uVar4 = ___xmm_3f8000003f8000003f8000003f800000;
  uVar14 = 0;
  if (0 < *(int *)((longlong)param_1 + 0x38)) {
    lVar16 = 0;
    lVar18 = 0;
    lVar19 = 0;
    lVar17 = 0;
    do {
      lVar2 = *(longlong *)((longlong)param_1 + 0x18);
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("!\"Enclosing block should never be called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\ConversionUtils\\GeometryCacheToDynamicMesh.cpp"
                          ,0x112,L"");
      if (bVar12) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar15 = ~uVar14 >> 0x1f;
      uVar13 = 0;
      if ((int)uVar14 < *(int *)(lVar2 + 0x20)) {
        uVar13 = uVar15;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined8 *)(*(longlong *)(lVar2 + 0x18) + lVar17) = 0;
      lVar2 = *(longlong *)((longlong)param_1 + 0x20);
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("!\"Enclosing block should never be called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\ConversionUtils\\GeometryCacheToDynamicMesh.cpp"
                          ,0x113,L"");
      if (bVar12) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar13 = 0;
      if ((int)uVar14 < *(int *)(lVar2 + 0x20)) {
        uVar13 = uVar15;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined4 *)(lVar16 + *(longlong *)(lVar2 + 0x18)) = 0xffffffff;
      lVar2 = *(longlong *)((longlong)param_1 + 0x28);
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("!\"Enclosing block should never be called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\ConversionUtils\\GeometryCacheToDynamicMesh.cpp"
                          ,0x114,L"");
      _Var11 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
      _Var10 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
      _Var9 = UE::Math::TTransform<double>::Identity.Translation.ZW;
      _Var8 = UE::Math::TTransform<double>::Identity.Translation.XY;
      _Var7 = UE::Math::TTransform<double>::Identity.Rotation.ZW;
      _Var6 = UE::Math::TTransform<double>::Identity.Rotation.XY;
      if (bVar12) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar13 = 0;
      if ((int)uVar14 < *(int *)(lVar2 + 0x20)) {
        uVar13 = uVar15;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = *(longlong *)(lVar2 + 0x18);
      *(double (*) [2])(lVar18 + lVar2) = _Var6.m128d_f64;
      *(double (*) [2])(lVar18 + 0x10 + lVar2) = _Var7.m128d_f64;
      *(double (*) [2])(lVar18 + 0x20 + lVar2) = _Var8.m128d_f64;
      *(double (*) [2])(lVar18 + 0x30 + lVar2) = _Var9.m128d_f64;
      *(double (*) [2])(lVar18 + 0x40 + lVar2) = _Var10.m128d_f64;
      *(double (*) [2])(lVar18 + 0x50 + lVar2) = _Var11.m128d_f64;
      lVar2 = *(longlong *)((longlong)param_1 + 0x30);
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("!\"Enclosing block should never be called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\ConversionUtils\\GeometryCacheToDynamicMesh.cpp"
                          ,0x115,L"");
      if (bVar12) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar13 = 0;
      if ((int)uVar14 < *(int *)(lVar2 + 0x20)) {
        uVar13 = uVar15;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar14 = uVar14 + 1;
      lVar17 = lVar17 + 8;
      lVar16 = lVar16 + 4;
      lVar18 = lVar18 + 0x60;
      puVar1 = (undefined8 *)(lVar19 + *(longlong *)(lVar2 + 0x18));
      *puVar1 = uVar4;
      puVar1[1] = uVar5;
      lVar19 = lVar19 + 0x10;
    } while ((int)uVar14 < *(int *)((longlong)param_1 + 0x38));
  }
  return;
}

// Call @ 14ca7d530

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TToDynamicMesh<UE::Conversion::FSkinnedComponentWrapper>::PopulateOverlays'::__l41::<lambda_9>,void>
::Call(void *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
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
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  longlong lStack_108;
  longlong lStack_100;
  
  uVar6 = _UNK_15076b1f8;
  uVar5 = ___xmm_3f8000003f8000003f8000003f800000;
  uVar12 = 0;
  if (0 < *(int *)((longlong)param_1 + 0x38)) {
    lVar16 = 0;
    lVar17 = 0;
    lVar15 = 0;
    lStack_100 = 0;
    lStack_108 = 0;
    do {
      lVar3 = *(longlong *)((longlong)param_1 + 0x18);
      if ((int)uVar12 < 0) {
LAB_14ca73543:
        bVar7 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_8494797445736169126>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\ConversionUtils\\SkinnedMeshToDynamicMesh.cpp"
                           ,0x15a,"BoneIdx >= 0 && BoneIdx < GetNumBones()");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar13 = 0;
      }
      else {
        lVar10 = *(longlong *)((longlong)param_1 + 8);
        lVar8 = (**(code **)(**(longlong **)(lVar10 + 0x20) + 800))();
        if (*(int *)(lVar8 + 8) <= (int)uVar12) goto LAB_14ca73543;
        plVar9 = (longlong *)(**(code **)(**(longlong **)(lVar10 + 0x20) + 800))();
        uVar11 = 0;
        if ((int)uVar12 < (int)plVar9[1]) {
          uVar11 = ~uVar12 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar13 = *(undefined8 *)(lVar15 + *plVar9);
      }
      uVar14 = ~uVar12 >> 0x1f;
      uVar11 = 0;
      if ((int)uVar12 < *(int *)(lVar3 + 0x20)) {
        uVar11 = uVar14;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined8 *)(lStack_108 + *(longlong *)(lVar3 + 0x18)) = uVar13;
      lVar3 = *(longlong *)((longlong)param_1 + 0x20);
      if ((int)uVar12 < 0) {
LAB_14ca73641:
        bVar7 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_8494797445736169116>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\ConversionUtils\\SkinnedMeshToDynamicMesh.cpp"
                           ,0x164,"BoneIdx >= 0 && BoneIdx < GetNumBones()");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar18 = 0xffffffff;
      }
      else {
        lVar10 = *(longlong *)((longlong)param_1 + 8);
        lVar8 = (**(code **)(**(longlong **)(lVar10 + 0x20) + 800))();
        if (*(int *)(lVar8 + 8) <= (int)uVar12) goto LAB_14ca73641;
        plVar9 = (longlong *)(**(code **)(**(longlong **)(lVar10 + 0x20) + 800))();
        uVar11 = 0;
        if ((int)uVar12 < (int)plVar9[1]) {
          uVar11 = uVar14;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar18 = *(undefined4 *)(*plVar9 + 8 + lVar15);
      }
      uVar11 = 0;
      if ((int)uVar12 < *(int *)(lVar3 + 0x20)) {
        uVar11 = uVar14;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined4 *)(*(longlong *)(lVar3 + 0x18) + lVar16) = uVar18;
      lVar3 = *(longlong *)((longlong)param_1 + 0x28);
      if ((int)uVar12 < 0) {
LAB_14ca73760:
        bVar7 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_8494797445736169106>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\ConversionUtils\\SkinnedMeshToDynamicMesh.cpp"
                           ,0x16e,"BoneIdx >= 0 && BoneIdx < GetNumBones()");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar18 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
        uVar19 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
        uVar20 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
        uVar21 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
        uVar22 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
        uVar23 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
        uVar24 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
        uVar25 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
        uVar26 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
        uVar27 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
        uVar28 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
        uVar29 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
        uVar30 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
        uVar31 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
        uVar32 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
        uVar33 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
        uVar34 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
        uVar35 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
        uVar36 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
        uVar37 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
        uVar38 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
        uVar39 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
        uVar40 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
        uVar41 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
      }
      else {
        lVar10 = *(longlong *)((longlong)param_1 + 8);
        lVar8 = (**(code **)(**(longlong **)(lVar10 + 0x20) + 800))();
        if (*(int *)(lVar8 + 8) <= (int)uVar12) goto LAB_14ca73760;
        lVar10 = (**(code **)(**(longlong **)(lVar10 + 0x20) + 800))();
        uVar11 = 0;
        if ((int)uVar12 < *(int *)(lVar10 + 0x18)) {
          uVar11 = uVar14;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar10 = *(longlong *)(lVar10 + 0x10);
        puVar1 = (undefined4 *)(lVar10 + lVar17);
        uVar18 = *puVar1;
        uVar19 = puVar1[1];
        uVar20 = puVar1[2];
        uVar21 = puVar1[3];
        puVar1 = (undefined4 *)(lVar10 + 0x10 + lVar17);
        uVar22 = *puVar1;
        uVar23 = puVar1[1];
        uVar24 = puVar1[2];
        uVar25 = puVar1[3];
        puVar1 = (undefined4 *)(lVar10 + 0x20 + lVar17);
        uVar26 = *puVar1;
        uVar27 = puVar1[1];
        uVar28 = puVar1[2];
        uVar29 = puVar1[3];
        puVar1 = (undefined4 *)(lVar10 + 0x30 + lVar17);
        uVar30 = *puVar1;
        uVar31 = puVar1[1];
        uVar32 = puVar1[2];
        uVar33 = puVar1[3];
        puVar1 = (undefined4 *)(lVar10 + 0x40 + lVar17);
        uVar34 = *puVar1;
        uVar35 = puVar1[1];
        uVar36 = puVar1[2];
        uVar37 = puVar1[3];
        puVar1 = (undefined4 *)(lVar10 + 0x50 + lVar17);
        uVar38 = *puVar1;
        uVar39 = puVar1[1];
        uVar40 = puVar1[2];
        uVar41 = puVar1[3];
      }
      uVar11 = 0;
      if ((int)uVar12 < *(int *)(lVar3 + 0x20)) {
        uVar11 = uVar14;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar3 = *(longlong *)(lVar3 + 0x18);
      puVar1 = (undefined4 *)(lVar17 + lVar3);
      *puVar1 = uVar18;
      puVar1[1] = uVar19;
      puVar1[2] = uVar20;
      puVar1[3] = uVar21;
      puVar1 = (undefined4 *)(lVar17 + 0x10 + lVar3);
      *puVar1 = uVar22;
      puVar1[1] = uVar23;
      puVar1[2] = uVar24;
      puVar1[3] = uVar25;
      puVar1 = (undefined4 *)(lVar17 + 0x20 + lVar3);
      *puVar1 = uVar26;
      puVar1[1] = uVar27;
      puVar1[2] = uVar28;
      puVar1[3] = uVar29;
      puVar1 = (undefined4 *)(lVar17 + 0x30 + lVar3);
      *puVar1 = uVar30;
      puVar1[1] = uVar31;
      puVar1[2] = uVar32;
      puVar1[3] = uVar33;
      puVar1 = (undefined4 *)(lVar17 + 0x40 + lVar3);
      *puVar1 = uVar34;
      puVar1[1] = uVar35;
      puVar1[2] = uVar36;
      puVar1[3] = uVar37;
      puVar1 = (undefined4 *)(lVar17 + 0x50 + lVar3);
      *puVar1 = uVar38;
      puVar1[1] = uVar39;
      puVar1[2] = uVar40;
      puVar1[3] = uVar41;
      lVar3 = *(longlong *)((longlong)param_1 + 0x30);
      uVar11 = 0;
      if ((int)uVar12 < *(int *)(lVar3 + 0x20)) {
        uVar11 = uVar14;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar12 = uVar12 + 1;
      lVar15 = lVar15 + 0xc;
      lStack_108 = lStack_108 + 8;
      lVar16 = lVar16 + 4;
      lVar17 = lVar17 + 0x60;
      puVar2 = (undefined8 *)(*(longlong *)(lVar3 + 0x18) + lStack_100);
      *puVar2 = uVar5;
      puVar2[1] = uVar6;
      lStack_100 = lStack_100 + 0x10;
    } while ((int)uVar12 < *(int *)((longlong)param_1 + 0x38));
  }
  return;
}

// Call @ 14caf0eb0

TFrame3<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<UE::Geometry::TFrame3<double>_(__cdecl*)(int),UE::Geometry::TFrame3<double>,int>
::Call(TFrame3<double> *__return_storage_ptr__,void *param_1,int *param_2)

{
  (**(code **)param_1)(__return_storage_ptr__,*param_2);
  return __return_storage_ptr__;
}

// Call @ 14caf0ed0

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<UE::Math::TVector<double>_(__cdecl*)(int,UE::Math::TVector<double>_const_&),UE::Math::TVector<double>,int,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,int *param_2,TVector<double> *param_3)

{
  (**(code **)param_1)(__return_storage_ptr__,*param_2,param_3);
  return __return_storage_ptr__;
}

// Call @ 14caf0f00

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
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(UCombinedTransformGizmo_&),void,UCombinedTransformGizmo_&>::Call
          (void *param_1,UCombinedTransformGizmo *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014caf0f06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(param_2);
  return;
}

// Call @ 14caf0f10

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<bool_(__cdecl*)(enum_ESpaceCurveControlPointOriginMode_const_&,enum_ESpaceCurveControlPointOriginMode_const_&),bool,enum_ESpaceCurveControlPointOriginMode_const_&,enum_ESpaceCurveControlPointOriginMode_const_&>
::Call(void *param_1,ESpaceCurveControlPointOriginMode *param_2,
      ESpaceCurveControlPointOriginMode *param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014caf0f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)param_1)(param_2,param_3);
  return (bool)uVar1;
}

// Call @ 14caf0f30

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<bool_(__cdecl*)(enum_ESpaceCurveControlPointTransformMode_const_&,enum_ESpaceCurveControlPointTransformMode_const_&),bool,enum_ESpaceCurveControlPointTransformMode_const_&,enum_ESpaceCurveControlPointTransformMode_const_&>
::Call(void *param_1,ESpaceCurveControlPointTransformMode *param_2,
      ESpaceCurveControlPointTransformMode *param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014caf0f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)param_1)(param_2,param_3);
  return (bool)uVar1;
}

// Call @ 14caf0f50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGeometrySelectionVisualizationProperties::Initialize'::__l2::<lambda_10>,void,FColor_const_&>
::Call(void *param_1,FColor *param_2)

{
  *(undefined1 *)(*(longlong *)param_1 + 0x108) = 1;
  return;
}

// Call @ 14caf0f70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGeometrySelectionVisualizationProperties::Initialize'::__l2::<lambda_11>,void,FColor_const_&>
::Call(void *param_1,FColor *param_2)

{
  *(undefined1 *)(*(longlong *)param_1 + 0x108) = 1;
  return;
}

// Call @ 14caf0f90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshTriInfoCache::BuildTriInfoCache<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::FMeshTriInfoCache::
  BuildTriInfoCache<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>'::__l2::<lambda_1>::
  operator()(param_1,*param_2);
  return;
}

// Call @ 14caf0fa0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshTriInfoCache::BuildTriInfoCache<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::FMeshTriInfoCache::
  BuildTriInfoCache<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>'::__l2::<lambda_1>::
  operator()(param_1,*param_2);
  return;
}

// Call @ 14caf0fb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshTriInfoCache::BuildTriInfoCache<UE::Geometry::FColliderMesh>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::FMeshTriInfoCache::BuildTriInfoCache<UE::Geometry::FColliderMesh>'::__l2::
  <lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14caf0fc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FGeometrySet3::ParallelFindAllCurvesSatisfying<`UCollisionPrimitivesMechanic::OnDragRectangleChanged'::__l2::<lambda_1>,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::FGeometrySet3::
  ParallelFindAllCurvesSatisfying<`UCollisionPrimitivesMechanic::OnDragRectangleChanged'::__l2::<lambda_1>,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>'
  ::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14caf0fd0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::ParallelTransformReduce<int,`FastTriWinding::ComputeCoeffs<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>'::__l2::OrderData,`FastTriWinding::ComputeCoeffs<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>'::__l2::<lambda_3>,`FastTriWinding::ComputeCoeffs<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>'::__l2::<lambda_4>_>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::
  ParallelTransformReduce<int,`FastTriWinding::ComputeCoeffs<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>'::__l2::OrderData,`FastTriWinding::ComputeCoeffs<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>'::__l2::<lambda_3>,`FastTriWinding::ComputeCoeffs<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>'::__l2::<lambda_4>_>'
  ::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14caf0fe0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::ParallelTransformReduce<int,`FastTriWinding::ComputeCoeffs<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>'::__l2::OrderData,`FastTriWinding::ComputeCoeffs<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>'::__l2::<lambda_3>,`FastTriWinding::ComputeCoeffs<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>'::__l2::<lambda_4>_>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::
  ParallelTransformReduce<int,`FastTriWinding::ComputeCoeffs<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>'::__l2::OrderData,`FastTriWinding::ComputeCoeffs<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>'::__l2::<lambda_3>,`FastTriWinding::ComputeCoeffs<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>'::__l2::<lambda_4>_>'
  ::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14caf0ff0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::ParallelTransformReduce<int,`FastTriWinding::ComputeCoeffs<UE::Geometry::FColliderMesh>'::__l2::OrderData,`FastTriWinding::ComputeCoeffs<UE::Geometry::FColliderMesh>'::__l2::<lambda_3>,`FastTriWinding::ComputeCoeffs<UE::Geometry::FColliderMesh>'::__l2::<lambda_4>_>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::
  ParallelTransformReduce<int,`FastTriWinding::ComputeCoeffs<UE::Geometry::FColliderMesh>'::__l2::OrderData,`FastTriWinding::ComputeCoeffs<UE::Geometry::FColliderMesh>'::__l2::<lambda_3>,`FastTriWinding::ComputeCoeffs<UE::Geometry::FColliderMesh>'::__l2::<lambda_4>_>'
  ::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14caf1000

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::ParallelTransformReduce<int,`FastTriWinding::ComputeCoeffs<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>'::__l2::PData,`FastTriWinding::ComputeCoeffs<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>'::__l2::<lambda_1>,`FastTriWinding::ComputeCoeffs<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>'::__l2::<lambda_2>_>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::
  ParallelTransformReduce<int,`FastTriWinding::ComputeCoeffs<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>'::__l2::PData,`FastTriWinding::ComputeCoeffs<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>'::__l2::<lambda_1>,`FastTriWinding::ComputeCoeffs<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>'::__l2::<lambda_2>_>'
  ::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14caf1010

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::ParallelTransformReduce<int,`FastTriWinding::ComputeCoeffs<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>'::__l2::PData,`FastTriWinding::ComputeCoeffs<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>'::__l2::<lambda_1>,`FastTriWinding::ComputeCoeffs<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>'::__l2::<lambda_2>_>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::
  ParallelTransformReduce<int,`FastTriWinding::ComputeCoeffs<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>'::__l2::PData,`FastTriWinding::ComputeCoeffs<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>'::__l2::<lambda_1>,`FastTriWinding::ComputeCoeffs<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>'::__l2::<lambda_2>_>'
  ::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14caf1020

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::ParallelTransformReduce<int,`FastTriWinding::ComputeCoeffs<UE::Geometry::FColliderMesh>'::__l2::PData,`FastTriWinding::ComputeCoeffs<UE::Geometry::FColliderMesh>'::__l2::<lambda_1>,`FastTriWinding::ComputeCoeffs<UE::Geometry::FColliderMesh>'::__l2::<lambda_2>_>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::
  ParallelTransformReduce<int,`FastTriWinding::ComputeCoeffs<UE::Geometry::FColliderMesh>'::__l2::PData,`FastTriWinding::ComputeCoeffs<UE::Geometry::FColliderMesh>'::__l2::<lambda_1>,`FastTriWinding::ComputeCoeffs<UE::Geometry::FColliderMesh>'::__l2::<lambda_2>_>'
  ::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14caf1030

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::TMeshWrapperAdapterd<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>'::__l2::<lambda_1>,bool,int>
::Call(void *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter::IsTriangle
                    (*(FMeshDescriptionTriangleMeshSurfaceAdapter **)(*(longlong *)param_1 + 0x1b0),
                     *param_2);
  return bVar1;
}

// Call @ 14caf1050

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::TMeshWrapperAdapterd<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>'::__l2::<lambda_1>,bool,int>
::Call(void *param_1,int *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  
  iVar1 = *param_2;
  if (-1 < iVar1) {
    plVar2 = *(longlong **)(*(longlong *)param_1 + 0x1b0);
    lVar3 = *plVar2;
    if (lVar3 != 0) {
      cVar4 = (**(code **)(*(longlong *)(lVar3 + 0x250) + 0x30))();
      if ((cVar4 != '\0') && (iVar1 < (int)plVar2[0xc])) {
        return true;
      }
    }
  }
  return false;
}

// Call @ 14caf10b0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FColliderMesh>::TMeshWrapperAdapterd<UE::Geometry::FColliderMesh>'::__l2::<lambda_1>,bool,int>
::Call(void *param_1,int *param_2)

{
  if ((-1 < *param_2) && (*param_2 < *(int *)(*(longlong *)(*(longlong *)param_1 + 0x1b0) + 0x18)))
  {
    return true;
  }
  return false;
}

// Call @ 14caf10e0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FAbortableBackgroundTask::FAbortableBackgroundTask'::__l2::<lambda_1>,bool>
::Call(void *param_1)

{
  if ((undefined1 *)**(undefined8 **)param_1 != (undefined1 *)0x0) {
    return (bool)*(undefined1 *)**(undefined8 **)param_1;
  }
  return false;
}

// Call @ 14caf1100

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCollectSurfacePathMechanic::UCollectSurfacePathMechanic'::__l2::<lambda_1>,bool,UE::Math::TVector<double>,UE::Math::TVector<double>_>
::Call(void *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = (param_3->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z;
  dVar1 = (param_3->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X;
  dVar3 = (param_3->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y;
  return dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2 <
         *(double *)(*(longlong *)param_1 + 0x60) * *(double *)(*(longlong *)param_1 + 0x60);
}

// Call @ 14caf1160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<```UCollisionPrimitivesMechanic::RebuildDrawables'::__l29::<lambda_7>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
::Call(void *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_128 [32];
  int *piStack_108;
  TTransform<double> *pTStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  int aiStack_d8 [2];
  undefined4 auStack_d0 [2];
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  TTransform<double> TStack_98;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStack_128;
  dStack_c8 = (param_3->field0_0x0)._s_0.X;
  dStack_c0 = (param_3->field0_0x0)._s_0.Y;
  puVar1 = *(undefined8 **)param_1;
  dStack_b8 = (param_3->field0_0x0)._s_0.Z;
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x38);
  dStack_b0 = (param_2->field0_0x0)._s_0.X;
  dStack_a8 = (param_2->field0_0x0)._s_0.Y;
  dStack_a0 = (param_2->field0_0x0)._s_0.Z;
  TStack_98.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  TStack_98.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  TStack_98.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  TStack_98.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  TStack_98.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  TStack_98.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  TStack_98.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  TStack_98.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  TStack_98.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  TStack_98.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  TStack_98.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  TStack_98.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  TStack_98.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  TStack_98.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  TStack_98.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  TStack_98.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&TStack_98,*(TTransform<double> **)((longlong)param_1 + 0x28),
             (TTransform<double> *)(*(longlong *)((longlong)param_1 + 0x30) + 0xc0));
  aiStack_d8[0] = **(int **)((longlong)param_1 + 0x20);
  **(int **)((longlong)param_1 + 0x20) = aiStack_d8[0] + 1;
  uVar3 = *(undefined8 *)((longlong)param_1 + 0x10);
  uVar4 = *(undefined8 *)((longlong)param_1 + 8);
  auStack_d0[0] = **(undefined4 **)((longlong)param_1 + 0x18);
  CheckCallable((void *)*puVar1);
  pcVar5 = (code *)*puVar1;
  plVar7 = puVar1 + 2;
  if ((longlong *)puVar1[5] != (longlong *)0x0) {
    plVar7 = (longlong *)puVar1[5];
  }
  uVar6 = (**(code **)(*plVar7 + 8))();
  puStack_f0 = &dStack_c8;
  puStack_f8 = &dStack_b0;
  pTStack_100 = &TStack_98;
  piStack_108 = aiStack_d8;
  uStack_e8 = uVar2;
  (*pcVar5)(uVar6,uVar4,uVar3,auStack_d0);
  return;
}

// Call @ 14caf1170

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::ConvertSimpleCollisionToMeshes'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,UE::Math::TVector<double>,int,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,int *param_2,TVector<double> *param_3)

{
  TVector<double>_u_0 local_28;
  
  local_28._s_0.X = (param_3->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_3->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  UE::Geometry::TTransformSequence3<double>::TransformPosition
            (*(TTransformSequence3<double> **)param_1,__return_storage_ptr__,
             (TVector<double> *)&local_28._s_0);
  return __return_storage_ptr__;
}

// Call @ 14caf11b0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::FMeshSceneAdapter::GenerateBaseClosingMesh'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,bool,UE::Math::TVector<double>_const_&>
::Call(void *param_1,TVector<double> *param_2)

{
  double *pdVar1;
  int *piVar2;
  double dVar3;
  ForAnyElementType *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  double dStack_18;
  double dStack_10;
  
  dVar3 = (param_2->field0_0x0)._s_0.Z;
  if ((**(double **)param_1 <= dVar3) &&
     (pdVar1 = *(double **)param_1 + 1, dVar3 < *pdVar1 || dVar3 == *pdVar1)) {
    dStack_18 = (param_2->field0_0x0)._s_0.X;
    dStack_10 = (param_2->field0_0x0)._s_0.Y;
    pFVar4 = *(ForAnyElementType **)((longlong)param_1 + 8);
    if ((pFVar4->Data <= (FScriptContainerElement *)&dStack_18) &&
       ((FScriptContainerElement *)&dStack_18 <
        pFVar4->Data + (longlong)*(int *)((longlong)&pFVar4[1].Data + 4) * 0x10)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
    }
    iVar9 = *(int *)&pFVar4[1].Data;
    piVar2 = (int *)((longlong)&pFVar4[1].Data + 4);
    if (iVar9 == *piVar2) {
      iVar9 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar4,piVar2);
    }
    *(int *)&pFVar4[1].Data = iVar9 + 1;
    pFVar5 = pFVar4->Data;
    *(double *)(pFVar5 + (longlong)iVar9 * 0x10) = dStack_18;
    *(double *)(pFVar5 + (longlong)iVar9 * 0x10 + 8) = dStack_10;
  }
  return true;
}

// Call @ 14caf11c0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::FMeshSceneAdapter::ParallelMeshVertexEnumeration'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,bool,UE::Math::TVector<double>_const_&>
::Call(void *param_1,TVector<double> *param_2)

{
  undefined1 uVar1;
  undefined4 local_res8 [4];
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = (*(undefined8 **)((longlong)param_1 + 0x18))[1];
  local_res20 = *(undefined8 *)**(undefined8 **)((longlong)param_1 + 0x18);
  local_res8[0] = **(undefined4 **)((longlong)param_1 + 0x10);
  uVar1 = (*(code *)**(undefined8 **)((longlong)param_1 + 8))
                    ((*(undefined8 **)((longlong)param_1 + 8))[1],local_res8,&local_res20,
                     &local_res18,param_2);
  **(undefined1 **)param_1 = uVar1;
  return (bool)**(undefined1 **)param_1;
}

// Call @ 14caf1220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UCollisionPrimitivesMechanic::RebuildDrawables'::__l9::<lambda_3>::operator()'::__l2::<lambda_1>,void,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_const_&>
::Call(void *param_1,TVector<float> *param_2,TVector<float> *param_3)

{
  int iVar1;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(UCollisionPrimitivesMechanic::FPrimitiveRenderData_&,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&,int,int,UE::Math::TTransform<double>_const_&,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,FColor_const_&)>
  *this;
  FColor *pFVar2;
  double dVar3;
  undefined1 auStackY_f8 [32];
  TVector<double>_u_0 TStack_a8;
  TVector<double>_u_0 TStack_90;
  TTransform<double> TStack_78;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  dVar3 = (double)(float)((ulonglong)*(undefined8 *)&param_3->field0_0x0 >> 0x20);
  this = *(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(UCollisionPrimitivesMechanic::FPrimitiveRenderData_&,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&,int,int,UE::Math::TTransform<double>_const_&,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,FColor_const_&)>
           **)param_1;
  pFVar2 = *(FColor **)((longlong)param_1 + 0x38);
  TStack_a8._8_4_ = SUB84(dVar3,0);
  TStack_a8._0_8_ = (double)(float)*(undefined8 *)&param_3->field0_0x0;
  TStack_a8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  TStack_a8._s_0.Z = (double)(param_3->field0_0x0)._s_0.Z;
  TStack_78.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  TStack_78.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  dVar3 = (double)(float)((ulonglong)*(undefined8 *)&param_2->field0_0x0 >> 0x20);
  TStack_90._8_4_ = SUB84(dVar3,0);
  TStack_90._0_8_ = (double)(float)*(undefined8 *)&param_2->field0_0x0;
  TStack_90._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  TStack_90._s_0.Z = (double)(param_2->field0_0x0)._s_0.Z;
  TStack_78.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  TStack_78.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  TStack_78.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  TStack_78.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  TStack_78.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  TStack_78.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  TStack_78.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  TStack_78.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  TStack_78.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  TStack_78.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  TStack_78.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  TStack_78.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  TStack_78.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&TStack_78,*(TTransform<double> **)((longlong)param_1 + 0x28),
             (TTransform<double> *)(*(longlong *)((longlong)param_1 + 0x30) + 0xc0));
  iVar1 = **(int **)((longlong)param_1 + 0x20);
  **(int **)((longlong)param_1 + 0x20) = iVar1 + 1;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(UCollisionPrimitivesMechanic::FPrimitiveRenderData_&,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&,int,int,UE::Math::TTransform<double>_const_&,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,FColor_const_&)>
  ::operator()(this,*(FPrimitiveRenderData **)((longlong)param_1 + 8),
               *(TArray<FRenderableLine,TSizedDefaultAllocator<32>_> **)((longlong)param_1 + 0x10),
               **(int **)((longlong)param_1 + 0x18),iVar1,&TStack_78,
               (TVector<double> *)&TStack_90._s_0,(TVector<double> *)&TStack_a8._s_0,pFVar2);
  return;
}

// Call @ 14caf1230

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::FMeshSceneAdapter::BuildSpatialEvaluationCache'::__l14::<lambda_3>::operator()'::__l2::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,TVector<double> *param_2)

{
  ``UE::Geometry::FMeshSceneAdapter::BuildSpatialEvaluationCache'::__l14::<lambda_3>::operator()'::
  __l2::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Call @ 14caf1260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UCollisionPrimitivesMechanic::RebuildDrawables'::__l14::<lambda_4>::operator()'::__l2::<lambda_1>,void,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_const_&>
::Call(void *param_1,TVector<float> *param_2,TVector<float> *param_3)

{
  int iVar1;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(UCollisionPrimitivesMechanic::FPrimitiveRenderData_&,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&,int,int,UE::Math::TTransform<double>_const_&,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,FColor_const_&)>
  *this;
  FColor *pFVar2;
  double dVar3;
  undefined1 auStackY_f8 [32];
  TVector<double>_u_0 TStack_a8;
  TVector<double>_u_0 TStack_90;
  TTransform<double> TStack_78;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  dVar3 = (double)(float)((ulonglong)*(undefined8 *)&param_3->field0_0x0 >> 0x20);
  this = *(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(UCollisionPrimitivesMechanic::FPrimitiveRenderData_&,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&,int,int,UE::Math::TTransform<double>_const_&,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,FColor_const_&)>
           **)param_1;
  pFVar2 = *(FColor **)((longlong)param_1 + 0x38);
  TStack_a8._8_4_ = SUB84(dVar3,0);
  TStack_a8._0_8_ = (double)(float)*(undefined8 *)&param_3->field0_0x0;
  TStack_a8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  TStack_a8._s_0.Z = (double)(param_3->field0_0x0)._s_0.Z;
  TStack_78.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  TStack_78.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  dVar3 = (double)(float)((ulonglong)*(undefined8 *)&param_2->field0_0x0 >> 0x20);
  TStack_90._8_4_ = SUB84(dVar3,0);
  TStack_90._0_8_ = (double)(float)*(undefined8 *)&param_2->field0_0x0;
  TStack_90._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  TStack_90._s_0.Z = (double)(param_2->field0_0x0)._s_0.Z;
  TStack_78.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  TStack_78.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  TStack_78.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  TStack_78.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  TStack_78.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  TStack_78.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  TStack_78.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  TStack_78.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  TStack_78.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  TStack_78.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  TStack_78.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  TStack_78.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  TStack_78.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&TStack_78,*(TTransform<double> **)((longlong)param_1 + 0x28),
             (TTransform<double> *)(*(longlong *)((longlong)param_1 + 0x30) + 0xc0));
  iVar1 = **(int **)((longlong)param_1 + 0x20);
  **(int **)((longlong)param_1 + 0x20) = iVar1 + 1;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(UCollisionPrimitivesMechanic::FPrimitiveRenderData_&,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&,int,int,UE::Math::TTransform<double>_const_&,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,FColor_const_&)>
  ::operator()(this,*(FPrimitiveRenderData **)((longlong)param_1 + 8),
               *(TArray<FRenderableLine,TSizedDefaultAllocator<32>_> **)((longlong)param_1 + 0x10),
               **(int **)((longlong)param_1 + 0x18),iVar1,&TStack_78,
               (TVector<double> *)&TStack_90._s_0,(TVector<double> *)&TStack_a8._s_0,pFVar2);
  return;
}

// Call @ 14caf1270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UCollisionPrimitivesMechanic::RebuildDrawables'::__l19::<lambda_5>::operator()'::__l2::<lambda_1>,void,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_const_&>
::Call(void *param_1,TVector<float> *param_2,TVector<float> *param_3)

{
  int iVar1;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(UCollisionPrimitivesMechanic::FPrimitiveRenderData_&,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&,int,int,UE::Math::TTransform<double>_const_&,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,FColor_const_&)>
  *this;
  FColor *pFVar2;
  double dVar3;
  undefined1 auStackY_f8 [32];
  TVector<double>_u_0 TStack_a8;
  TVector<double>_u_0 TStack_90;
  TTransform<double> TStack_78;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  dVar3 = (double)(float)((ulonglong)*(undefined8 *)&param_3->field0_0x0 >> 0x20);
  this = *(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(UCollisionPrimitivesMechanic::FPrimitiveRenderData_&,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&,int,int,UE::Math::TTransform<double>_const_&,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,FColor_const_&)>
           **)param_1;
  pFVar2 = *(FColor **)((longlong)param_1 + 0x38);
  TStack_a8._8_4_ = SUB84(dVar3,0);
  TStack_a8._0_8_ = (double)(float)*(undefined8 *)&param_3->field0_0x0;
  TStack_a8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  TStack_a8._s_0.Z = (double)(param_3->field0_0x0)._s_0.Z;
  TStack_78.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  TStack_78.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  dVar3 = (double)(float)((ulonglong)*(undefined8 *)&param_2->field0_0x0 >> 0x20);
  TStack_90._8_4_ = SUB84(dVar3,0);
  TStack_90._0_8_ = (double)(float)*(undefined8 *)&param_2->field0_0x0;
  TStack_90._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  TStack_90._s_0.Z = (double)(param_2->field0_0x0)._s_0.Z;
  TStack_78.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  TStack_78.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  TStack_78.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  TStack_78.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  TStack_78.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  TStack_78.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  TStack_78.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  TStack_78.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  TStack_78.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  TStack_78.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  TStack_78.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  TStack_78.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  TStack_78.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&TStack_78,*(TTransform<double> **)((longlong)param_1 + 0x28),
             (TTransform<double> *)(*(longlong *)((longlong)param_1 + 0x30) + 0xc0));
  iVar1 = **(int **)((longlong)param_1 + 0x20);
  **(int **)((longlong)param_1 + 0x20) = iVar1 + 1;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(UCollisionPrimitivesMechanic::FPrimitiveRenderData_&,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&,int,int,UE::Math::TTransform<double>_const_&,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,FColor_const_&)>
  ::operator()(this,*(FPrimitiveRenderData **)((longlong)param_1 + 8),
               *(TArray<FRenderableLine,TSizedDefaultAllocator<32>_> **)((longlong)param_1 + 0x10),
               **(int **)((longlong)param_1 + 0x18),iVar1,&TStack_78,
               (TVector<double> *)&TStack_90._s_0,(TVector<double> *)&TStack_a8._s_0,pFVar2);
  return;
}

// Call @ 14caf1280

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_1>,bool>::Call(void *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014caf1286. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(longlong **)param_1 + 0x18))();
  return (bool)uVar1;
}

// Call @ 14caf1290

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TStaticMeshSpatialWrapperBase<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::AppendMesh'::__l2::<lambda_1>,UE::Math::TVector<double>,int,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,int *param_2,TVector<double> *param_3)

{
  TVector<double>_u_0 local_28;
  
  local_28._s_0.X = (param_3->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_3->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  UE::Geometry::TTransformSequence3<double>::TransformPosition
            (*(TTransformSequence3<double> **)param_1,__return_storage_ptr__,
             (TVector<double> *)&local_28._s_0);
  return __return_storage_ptr__;
}

// Call @ 14caf12d0

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TStaticMeshSpatialWrapperBase<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::AppendMesh'::__l2::<lambda_1>,UE::Math::TVector<double>,int,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,int *param_2,TVector<double> *param_3)

{
  TVector<double>_u_0 local_28;
  
  local_28._s_0.X = (param_3->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_3->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  UE::Geometry::TTransformSequence3<double>::TransformPosition
            (*(TTransformSequence3<double> **)param_1,__return_storage_ptr__,
             (TVector<double> *)&local_28._s_0);
  return __return_storage_ptr__;
}

// Call @ 14caf1310

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshSceneAdapter::Build'::__l2::<lambda_1>,void,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>_>
::Call(void *param_1,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1> *param_2)

{
  TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1> local_18;
  
  local_18.Object = param_2->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  (param_2->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->Object = (FSpatialWrapperInfo *)0x0;
  `UE::Geometry::FMeshSceneAdapter::Build'::__l2::<lambda_1>::operator()(param_1,&local_18);
  return;
}

// Call @ 14caf1350

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshSceneAdapter::BuildSpatialEvaluationCache'::__l2::<lambda_1>,void,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>_>
::Call(void *param_1,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1> *param_2)

{
  TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1> local_18;
  
  local_18.Object = param_2->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  (param_2->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->Object = (FSpatialWrapperInfo *)0x0;
  `UE::Geometry::FMeshSceneAdapter::BuildSpatialEvaluationCache'::__l2::<lambda_1>::operator()
            (param_1,&local_18);
  return;
}

// Call @ 14caf1390

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshSceneAdapter::Build_FullDecompose'::__l2::<lambda_1>,void,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>_>
::Call(void *param_1,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1> *param_2)

{
  TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1> local_18;
  
  local_18.Object = param_2->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  (param_2->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->Object = (FSpatialWrapperInfo *)0x0;
  `UE::Geometry::FMeshSceneAdapter::Build_FullDecompose'::__l2::<lambda_1>::operator()
            (param_1,&local_18);
  return;
}

// Call @ 14caf13d0

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FCompressedMeshSpatialWrapper::CollectSeedPoints'::__l2::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// Call @ 14caf13f0

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FDynamicMeshSpatialWrapper::CollectSeedPoints'::__l2::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// Call @ 14caf1410

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::ToolTarget::Internal::CommitDynamicMeshViaIPersistentDynamicMeshSource'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
  UE::Geometry::FDynamicMesh3::CompactCopy
            (param_2,*(FDynamicMesh3 **)param_1,true,true,true,true,(FCompactMaps *)0x0);
  UE::Geometry::FNonManifoldMappingSupport::RemoveNonManifoldVertexMappingData(param_2);
  return;
}

// Call @ 14caf1460

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::ConvertSimpleCollisionToDynamicMeshes'::__l2::<lambda_1>,bool,FKShapeElem_const_&>
::Call(void *param_1,FKShapeElem *param_2)

{
  return true;
}

// Call @ 14caf1470

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::ConvertSimpleCollisionToMeshes'::__l2::<lambda_1>,void,int,FKShapeElem_const_&,UE::Geometry::FDynamicMesh3_&>
::Call(void *param_1,int *param_2,FKShapeElem *param_3,FDynamicMesh3 *param_4)

{
  `UE::Geometry::ConvertSimpleCollisionToMeshes'::__l2::<lambda_1>::operator()
            (param_1,*param_2,param_3,param_4);
  return;
}

// Call @ 14caf1480

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UUVLayoutPreview::CreateInWorld'::__l2::<lambda_1>,void,TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)>_>
::Call(void *param_1,TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *param_2)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = *(undefined8 *)param_2;
  local_10 = *(undefined8 *)&param_2->field_0x8;
  (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x30) + 0x2b0))
            (*(longlong **)(*(longlong *)param_1 + 0x30),&local_18);
  return;
}

// Call @ 14caf14c0

TAxisAlignedBox3<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshSceneAdapter::FindNearestRayIntersection'::__l2::<lambda_1>,UE::Geometry::TAxisAlignedBox3<double>,int>
::Call(TAxisAlignedBox3<double> *__return_storage_ptr__,void *param_1,int *param_2)

{
  `UE::Geometry::FMeshSceneAdapter::FindNearestRayIntersection'::__l2::<lambda_1>::operator()
            (param_1,__return_storage_ptr__,*param_2);
  return __return_storage_ptr__;
}

// Call @ 14caf14f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UELocal::FindPolylineSelfIntersection'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `UELocal::FindPolylineSelfIntersection'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14caf1500

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshSceneAdapter::GenerateBaseClosingMesh'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::FMeshSceneAdapter::GenerateBaseClosingMesh'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 14caf1510

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshSceneAdapter::GetGeometryStatistics'::__l2::<lambda_1>,void,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>_>
::Call(void *param_1,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1> *param_2)

{
  FSpatialWrapperInfo *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  pFVar1 = param_2->Object;
  pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
  (param_2->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->Object = (FSpatialWrapperInfo *)0x0;
  **(longlong **)param_1 = **(longlong **)param_1 + 1;
  if (pFVar1 == (FSpatialWrapperInfo *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (**(code **)(((pFVar1->SpatialWrapper).Ptr)->_padding_ + 0x10))();
  *(longlong *)(*(longlong *)param_1 + 8) =
       *(longlong *)(*(longlong *)param_1 + 8) + (longlong)iVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// Call @ 14caf15a0

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FCompressedMeshSpatialWrapper::GetWorldBounds'::__l2::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// Call @ 14caf15c0

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FDynamicMeshSpatialWrapper::GetWorldBounds'::__l2::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// Call @ 14caf15e0

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
UE::Core::Private::Function::
TFunctionRefCaller<`UConstructionPlaneMechanic::Initialize'::__l2::<lambda_1>,void,FHitResult_const_&>
::Call(void *param_1,FHitResult *param_2)

{
  TVector<double>_u_0 local_38;
  TVector<double>_u_0 local_20;
  
  local_38._s_0.X = (double)*(undefined8 *)&param_2->ImpactNormal;
  local_38._s_0.Y = (double)*(undefined8 *)&(param_2->ImpactNormal).field_0x8;
  local_38._s_0.Z = (double)*(undefined8 *)&(param_2->ImpactNormal).field_0x10;
  local_20._s_0.X = (double)*(undefined8 *)&param_2->ImpactPoint;
  local_20._s_0.Y = (double)*(undefined8 *)&(param_2->ImpactPoint).field_0x8;
  local_20._s_0.Z = (double)*(undefined8 *)&(param_2->ImpactPoint).field_0x10;
  UConstructionPlaneMechanic::SetDrawPlaneFromWorldPos
            (*(UConstructionPlaneMechanic **)param_1,(TVector<double> *)&local_20._s_0,
             (TVector<double> *)&local_38._s_0,
             (((*(UConstructionPlaneMechanic **)param_1)->SetPlaneCtrlClickBehaviorTarget).Ptr)->
             bShiftModifierToggle);
  return;
}

// Call @ 14caf1640

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGeometrySelectionVisualizationProperties::Initialize'::__l2::<lambda_1>,void,bool_const_&>
::Call(void *param_1,bool *param_2)

{
  *(undefined1 *)(*(longlong *)param_1 + 0x108) = 1;
  return;
}

// Call @ 14caf1660

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UPolyEditPreviewMesh::MakeExtrudeTypeHitTargetMesh'::__l2::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&,UE::Math::TVector<float>_const_&,int>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,TVector<double> *param_2,
      TVector<float> *param_3,int *param_4)

{
  `UPolyEditPreviewMesh::MakeExtrudeTypeHitTargetMesh'::__l2::<lambda_1>::operator()
            (param_1,__return_storage_ptr__,param_2,param_3,*param_4);
  return __return_storage_ptr__;
}

// Call @ 14caf1690

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshSceneAdapter::ParallelMeshVertexEnumeration'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::FMeshSceneAdapter::ParallelMeshVertexEnumeration'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 14caf16a0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCollisionPrimitivesMechanic::Setup'::__l2::<lambda_1>,bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
::Call(void *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (param_3->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z;
  dVar3 = (param_3->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y;
  dVar2 = (param_3->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X;
  return dVar3 * dVar3 + dVar2 * dVar2 + dVar1 * dVar1 <
         (double)(*(float *)param_1 * *(float *)param_1);
}

// Call @ 14caf16f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCurveControlPointsMechanic::Setup'::__l2::<lambda_1>,bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
::Call(void *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  longlong lVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  
  lVar1 = *(longlong *)param_1;
  if (*(char *)(lVar1 + 0x5ec) != '\0') {
    fVar6 = *(float *)(lVar1 + 0x5e4);
    dVar3 = ToolSceneQueriesUtil::GetDefaultVisualAngleSnapThreshD();
    dVar5 = (param_3->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y;
    dVar4 = (param_3->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X;
    fVar6 = (float)(dVar3 * (double)fVar6 * ___real_3f86c16c16c16c17);
    dVar3 = (param_3->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z;
    return dVar5 * dVar5 + dVar4 * dVar4 + dVar3 * dVar3 < (double)(fVar6 * fVar6);
  }
  bVar2 = ToolSceneQueriesUtil::PointSnapQuery
                    ((FViewCameraState *)(lVar1 + 0x5a0),param_2,param_3,0.0);
  return bVar2;
}

// Call @ 14caf1700

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ULatticeControlPointsMechanic::Setup'::__l2::<lambda_1>,bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
::Call(void *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  longlong lVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  
  lVar1 = *(longlong *)param_1;
  if (*(char *)(lVar1 + 0x22c) != '\0') {
    fVar6 = *(float *)(lVar1 + 0x224);
    dVar3 = ToolSceneQueriesUtil::GetDefaultVisualAngleSnapThreshD();
    dVar5 = (param_3->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y;
    dVar4 = (param_3->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X;
    fVar6 = (float)(dVar3 * (double)fVar6 * ___real_3f86c16c16c16c17);
    dVar3 = (param_3->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z;
    return dVar5 * dVar5 + dVar4 * dVar4 + dVar3 * dVar3 < (double)(fVar6 * fVar6);
  }
  bVar2 = ToolSceneQueriesUtil::PointSnapQuery
                    ((FViewCameraState *)(lVar1 + 0x1e0),param_2,param_3,0.0);
  return bVar2;
}

// Call @ 14caf1710

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USpaceCurveDeformationMechanic::Setup'::__l2::<lambda_1>,bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
::Call(void *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  bool bVar1;
  
  bVar1 = ToolSceneQueriesUtil::PointSnapQuery
                    ((FViewCameraState *)(*(longlong *)param_1 + 0x1e0),param_2,param_3,0.0);
  return bVar1;
}

// Call @ 14caf1730

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDragAlignmentBase::SetupInternal'::__l2::<lambda_1>,bool,UE::Math::TRay<double>_const_&,FHitResult_&,TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_>_const_*,TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_>_const_*>
::Call(void *param_1,TRay<double> *param_2,FHitResult *param_3,
      TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> **param_4,
      TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> **param_5)

{
  bool bVar1;
  
  bVar1 = `FDragAlignmentBase::SetupInternal'::__l2::<lambda_1>::operator()
                    (param_1,param_2,param_3,*param_4,*param_5);
  return bVar1;
}

// Call @ 14caf1750

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::TestIntersection'::__l2::<lambda_1>,bool,UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&>
::Call(void *param_1,TTriangle3<double> *param_2,TTriangle3<double> *param_3)

{
  bool bVar1;
  
  bVar1 = UE::Geometry::TIntrTriangle3Triangle3<double>::Intersects
                    (param_2,param_3,__real_3e45798ee2308c3a);
  return bVar1;
}

// Call @ 14caf1770

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::TestIntersection'::__l2::<lambda_1>,bool,UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&>
::Call(void *param_1,TTriangle3<double> *param_2,TTriangle3<double> *param_3)

{
  bool bVar1;
  
  bVar1 = UE::Geometry::TIntrTriangle3Triangle3<double>::Intersects
                    (param_2,param_3,__real_3e45798ee2308c3a);
  return bVar1;
}

// Call @ 14caf1790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::TestSelfIntersection'::__l2::<lambda_1>,bool,UE::Geometry::TIntrTriangle3Triangle3<double>_&>
::Call(void *param_1,TIntrTriangle3Triangle3<double> *param_2)

{
  bool bVar1;
  undefined1 auStack_d8 [32];
  TVector<double>_u_0 TStack_b8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  TVector<double>_u_0 TStack_68;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  TStack_b8._s_0.X = (param_2->Triangle1).V[0].field0_0x0._s_0.X;
  TStack_b8._s_0.Y = (param_2->Triangle1).V[0].field0_0x0._s_0.Y;
  TStack_b8._s_0.Z = (param_2->Triangle1).V[0].field0_0x0._s_0.Z;
  dStack_a0 = (param_2->Triangle1).V[1].field0_0x0._s_0.X;
  dStack_98 = (param_2->Triangle1).V[1].field0_0x0._s_0.Y;
  dStack_90 = (param_2->Triangle1).V[1].field0_0x0._s_0.Z;
  dStack_88 = (param_2->Triangle1).V[2].field0_0x0._s_0.X;
  dStack_80 = (param_2->Triangle1).V[2].field0_0x0._s_0.Y;
  dStack_78 = (param_2->Triangle1).V[2].field0_0x0._s_0.Z;
  TStack_68._s_0.X = (param_2->Triangle0).V[0].field0_0x0._s_0.X;
  TStack_68._s_0.Y = (param_2->Triangle0).V[0].field0_0x0._s_0.Y;
  TStack_68._s_0.Z = (param_2->Triangle0).V[0].field0_0x0._s_0.Z;
  dStack_50 = (param_2->Triangle0).V[1].field0_0x0._s_0.X;
  dStack_48 = (param_2->Triangle0).V[1].field0_0x0._s_0.Y;
  dStack_40 = (param_2->Triangle0).V[1].field0_0x0._s_0.Z;
  dStack_38 = (param_2->Triangle0).V[2].field0_0x0._s_0.X;
  dStack_30 = (param_2->Triangle0).V[2].field0_0x0._s_0.Y;
  dStack_28 = (param_2->Triangle0).V[2].field0_0x0._s_0.Z;
  bVar1 = UE::Geometry::TIntrTriangle3Triangle3<double>::Intersects
                    ((TTriangle3<double> *)&TStack_68._s_0,(TTriangle3<double> *)&TStack_b8._s_0,
                     __real_3e45798ee2308c3a);
  param_2->Quantity = 0;
  param_2->Result = (bVar1 ^ 1) + Intersects;
  param_2->Type = -(uint)bVar1 & Unknown;
  return bVar1;
}

// Call @ 14caf17a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::TestSelfIntersection'::__l2::<lambda_1>,bool,UE::Geometry::TIntrTriangle3Triangle3<double>_&>
::Call(void *param_1,TIntrTriangle3Triangle3<double> *param_2)

{
  bool bVar1;
  undefined1 auStack_d8 [32];
  TVector<double>_u_0 TStack_b8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  TVector<double>_u_0 TStack_68;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  TStack_b8._s_0.X = (param_2->Triangle1).V[0].field0_0x0._s_0.X;
  TStack_b8._s_0.Y = (param_2->Triangle1).V[0].field0_0x0._s_0.Y;
  TStack_b8._s_0.Z = (param_2->Triangle1).V[0].field0_0x0._s_0.Z;
  dStack_a0 = (param_2->Triangle1).V[1].field0_0x0._s_0.X;
  dStack_98 = (param_2->Triangle1).V[1].field0_0x0._s_0.Y;
  dStack_90 = (param_2->Triangle1).V[1].field0_0x0._s_0.Z;
  dStack_88 = (param_2->Triangle1).V[2].field0_0x0._s_0.X;
  dStack_80 = (param_2->Triangle1).V[2].field0_0x0._s_0.Y;
  dStack_78 = (param_2->Triangle1).V[2].field0_0x0._s_0.Z;
  TStack_68._s_0.X = (param_2->Triangle0).V[0].field0_0x0._s_0.X;
  TStack_68._s_0.Y = (param_2->Triangle0).V[0].field0_0x0._s_0.Y;
  TStack_68._s_0.Z = (param_2->Triangle0).V[0].field0_0x0._s_0.Z;
  dStack_50 = (param_2->Triangle0).V[1].field0_0x0._s_0.X;
  dStack_48 = (param_2->Triangle0).V[1].field0_0x0._s_0.Y;
  dStack_40 = (param_2->Triangle0).V[1].field0_0x0._s_0.Z;
  dStack_38 = (param_2->Triangle0).V[2].field0_0x0._s_0.X;
  dStack_30 = (param_2->Triangle0).V[2].field0_0x0._s_0.Y;
  dStack_28 = (param_2->Triangle0).V[2].field0_0x0._s_0.Z;
  bVar1 = UE::Geometry::TIntrTriangle3Triangle3<double>::Intersects
                    ((TTriangle3<double> *)&TStack_68._s_0,(TTriangle3<double> *)&TStack_b8._s_0,
                     __real_3e45798ee2308c3a);
  param_2->Quantity = 0;
  param_2->Result = (bVar1 ^ 1) + Intersects;
  param_2->Type = -(uint)bVar1 & Unknown;
  return bVar1;
}

// Call @ 14caf17b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshSceneAdapter::UpdateActorBounds'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::FMeshSceneAdapter::UpdateActorBounds'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 14caf17c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UPolyEditPreviewMesh::UpdateExtrudeType'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
  FMutex *this;
  uint *puVar1;
  atomic<unsigned_char> aVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  short sVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  double *pdVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  
  uVar18 = 0;
  iVar5 = *(int *)(*(longlong *)param_1 + 0x368);
  if (0 < (longlong)iVar5) {
    lVar20 = 0;
    lVar19 = 0;
    do {
      lVar6 = *(longlong *)param_1;
      uVar16 = ~uVar18 >> 0x1f;
      uVar13 = 0;
      if ((int)uVar18 < *(int *)(lVar6 + 0x368)) {
        uVar13 = uVar16;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar7 = *(longlong *)param_1;
      uVar13 = *(uint *)(*(longlong *)(lVar6 + 0x360) + lVar20 * 4);
      uVar14 = 0;
      if ((int)uVar18 < *(int *)(lVar7 + 0x378)) {
        uVar14 = uVar16;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar6 = *(longlong *)(lVar7 + 0x370);
      lVar7 = *(longlong *)param_1;
      dVar3 = *(double *)(lVar6 + 0x10 + lVar19);
      pdVar17 = (double *)(lVar6 + lVar19);
      dVar10 = *pdVar17;
      dVar9 = pdVar17[1];
      if (**(char **)((longlong)param_1 + 0x10) == '\0') {
        pdVar17 = (double *)(lVar7 + 0x3f0);
      }
      else {
        uVar14 = 0;
        if ((int)uVar18 < *(int *)(lVar7 + 0x388)) {
          uVar14 = uVar16;
        }
        if ((uVar14 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pdVar17 = (double *)(*(longlong *)(lVar7 + 0x380) + (longlong)(int)uVar18 * 0x18);
      }
      dVar4 = **(double **)((longlong)param_1 + 8);
      dVar10 = dVar4 * *pdVar17 + dVar10;
      dVar9 = dVar4 * pdVar17[1] + dVar9;
      dVar3 = dVar4 * pdVar17[2] + dVar3;
      sVar12 = _dclass(dVar10);
      if (((sVar12 < 1) && (sVar12 = _dclass(dVar9), sVar12 < 1)) &&
         (sVar12 = _dclass(dVar3), sVar12 < 1)) {
        uVar15 = (ulonglong)(uVar13 & 0x1ff);
        lVar6 = *(longlong *)
                 ((param_2->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar13 >> 9) * 8);
        *(double *)(lVar6 + uVar15 * 0x18) = dVar10;
        *(double *)(lVar6 + 8 + uVar15 * 0x18) = dVar9;
        *(double *)(lVar6 + 0x10 + uVar15 * 0x18) = dVar3;
        if ((param_2->ChangeStampShape).bIsEnabled != false) {
          this = &(param_2->ChangeStampShape).Mutex;
          LOCK();
          bVar11 = this->State == (atomic<unsigned_char>)0x0;
          if (bVar11) {
            this->State = (atomic<unsigned_char>)0x1;
          }
          UNLOCK();
          if (!bVar11) {
            FMutex::LockSlow(this);
          }
          puVar1 = &(param_2->ChangeStampShape).Value;
          *puVar1 = *puVar1 + 1;
          LOCK();
          aVar2 = this->State;
          this->State = (atomic<unsigned_char>)((char)this->State + -1);
          UNLOCK();
          if (((byte)aVar2 & 2) != 0) {
            FMutex::WakeWaitingThread(this);
          }
        }
      }
      uVar18 = uVar18 + 1;
      lVar20 = lVar20 + 1;
      lVar19 = lVar19 + 0x18;
    } while (lVar20 < iVar5);
  }
  return;
}

// Call @ 14caf17d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UPolyEditPreviewMesh::UpdateExtrudeType_FaceNormalAvg'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
  double *pdVar1;
  undefined8 *puVar2;
  FMutex *this;
  uint *puVar3;
  atomic<unsigned_char> aVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  ForAnyElementType FVar14;
  bool bVar15;
  short sVar16;
  int *piVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  ulonglong uVar24;
  longlong lVar25;
  double dVar26;
  int aiStackX_20 [2];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> TStack_118;
  longlong lStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  code *pcStack_d0;
  double **ppdStack_c8;
  double *pdStack_c0;
  double *pdStack_b8;
  undefined8 uStack_b0;
  longlong lStack_a8;
  int *piStack_a0;
  double dStack_88;
  
  uVar22 = 0;
  iVar6 = *(int *)(*(longlong *)param_1 + 0x368);
  lVar20 = (longlong)iVar6;
  TStack_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_118.ArrayNum = 0;
  TStack_118.ArrayMax = 0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum(&TStack_118,iVar6,Default);
  dVar13 = __real_3ff0000000000000;
  uVar18 = uVar22;
  uVar24 = uVar22;
  lStack_108 = lVar20;
  if (0 < iVar6) {
    do {
      lVar25 = *(longlong *)param_1;
      uVar23 = (uint)uVar18;
      uVar19 = ~uVar23 >> 0x1f;
      uVar21 = 0;
      if ((int)uVar23 < *(int *)(lVar25 + 0x368)) {
        uVar21 = uVar19;
      }
      if ((uVar21 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar7 = *(longlong *)param_1;
      iVar6 = *(int *)(*(longlong *)(lVar25 + 0x360) + uVar24 * 4);
      uVar21 = 0;
      if ((int)uVar23 < *(int *)(lVar7 + 0x378)) {
        uVar21 = uVar19;
      }
      if ((uVar21 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar25 = *(longlong *)(lVar7 + 0x370);
      pdVar1 = (double *)(lVar25 + uVar22);
      dStack_e8 = *pdVar1;
      dStack_e0 = pdVar1[1];
      dStack_d8 = *(double *)(lVar25 + 0x10 + uVar22);
      aiStackX_20[0] = 0;
      dStack_100 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      dStack_f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      piVar17 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
                FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                             *)(*(longlong *)param_1 + 0x3a0),iVar6);
      lStack_a8 = *(longlong *)param_1;
      pdStack_c0 = &dStack_100;
      pdStack_b8 = &dStack_e8;
      uStack_b0 = *(undefined8 *)((longlong)param_1 + 8);
      piStack_a0 = aiStackX_20;
      ppdStack_c8 = &pdStack_c0;
      pcStack_d0 = TFunctionRefCaller<``UPolyEditPreviewMesh::UpdateExtrudeType_FaceNormalAvg'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,void,int>
                   ::Call;
      UE::Geometry::FDynamicMesh3::EnumerateVertexTriangles
                ((FDynamicMesh3 *)(lStack_a8 + 0x130),*piVar17,
                 (TFunctionRef<void___cdecl(int)> *)&pcStack_d0);
      dVar10 = dStack_e8;
      dVar11 = dStack_d8;
      dVar26 = dStack_e0;
      if (aiStackX_20[0] != 0) {
        dVar26 = dVar13 / (double)aiStackX_20[0];
        dStack_88 = dVar26 * dStack_f0;
        dVar10 = dVar26 * dStack_100;
        dVar11 = dStack_88;
        dVar26 = dVar26 * dStack_f8;
      }
      uVar21 = 0;
      if ((int)uVar23 < TStack_118.ArrayNum) {
        uVar21 = uVar19;
      }
      if ((uVar21 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar24 = uVar24 + 1;
      auVar9._8_4_ = SUB84(dVar26,0);
      auVar9._0_8_ = dVar10;
      auVar9._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
      *(undefined1 (*) [16])(TStack_118.AllocatorInstance.Data + uVar22) = auVar9;
      *(double *)(TStack_118.AllocatorInstance.Data + uVar22 + 0x10) = dVar11;
      uVar22 = uVar22 + 0x18;
      uVar18 = (ulonglong)(uVar23 + 1);
    } while ((longlong)uVar24 < lVar20);
    uVar21 = 0;
    lVar25 = 0;
    lVar20 = 0;
    do {
      uVar19 = 0;
      if ((int)uVar21 < TStack_118.ArrayNum) {
        uVar19 = ~uVar21 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FVar14.Data = TStack_118.AllocatorInstance.Data;
      lVar7 = *(longlong *)param_1;
      uVar19 = 0;
      if ((int)uVar21 < *(int *)(lVar7 + 0x368)) {
        uVar19 = ~uVar21 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar19 = *(uint *)(*(longlong *)(lVar7 + 0x360) + lVar25 * 4);
      sVar16 = _dclass(*(undefined8 *)(FVar14.Data + lVar20));
      if (((sVar16 < 1) && (sVar16 = _dclass(*(undefined8 *)(FVar14.Data + lVar20 + 8)), sVar16 < 1)
          ) && (sVar16 = _dclass(*(undefined8 *)(FVar14.Data + lVar20 + 0x10)), sVar16 < 1)) {
        uVar12 = *(undefined8 *)(FVar14.Data + lVar20 + 8);
        uVar18 = (ulonglong)(uVar19 & 0x1ff);
        uVar5 = *(undefined8 *)(FVar14.Data + lVar20 + 0x10);
        lVar7 = *(longlong *)
                 ((param_2->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar19 >> 9) * 8);
        puVar2 = (undefined8 *)(lVar7 + uVar18 * 0x18);
        *puVar2 = *(undefined8 *)(FVar14.Data + lVar20);
        puVar2[1] = uVar12;
        *(undefined8 *)(lVar7 + 0x10 + uVar18 * 0x18) = uVar5;
        if ((param_2->ChangeStampShape).bIsEnabled != false) {
          this = &(param_2->ChangeStampShape).Mutex;
          LOCK();
          bVar15 = this->State == (atomic<unsigned_char>)0x0;
          if (bVar15) {
            this->State = (atomic<unsigned_char>)0x1;
          }
          UNLOCK();
          if (!bVar15) {
            FMutex::LockSlow(this);
          }
          puVar3 = &(param_2->ChangeStampShape).Value;
          *puVar3 = *puVar3 + 1;
          LOCK();
          aVar4 = this->State;
          this->State = (atomic<unsigned_char>)((char)this->State + -1);
          UNLOCK();
          if (((byte)aVar4 & 2) != 0) {
            FMutex::WakeWaitingThread(this);
          }
        }
      }
      uVar21 = uVar21 + 1;
      lVar25 = lVar25 + 1;
      lVar20 = lVar20 + 0x18;
    } while (lVar25 < lStack_108);
  }
  if (TStack_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_118.AllocatorInstance.Data);
  }
  return;
}

// Call @ 14caf17e0

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::FMeshSceneAdapter::UpdateActorBounds'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,TVector<double> *param_2)

{
  TVector<double>_u_0 local_28;
  
  local_28._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  UE::Geometry::TTransformSequence3<double>::TransformPosition
            ((TTransformSequence3<double> *)(**(longlong **)param_1 + 0x20),__return_storage_ptr__,
             (TVector<double> *)&local_28._s_0);
  return __return_storage_ptr__;
}

// Call @ 14caf1830

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UPolyEditPreviewMesh::UpdateExtrudeType_FaceNormalAvg'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  ``UPolyEditPreviewMesh::UpdateExtrudeType_FaceNormalAvg'::__l2::<lambda_1>::operator()'::__l5::
  <lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14caf1840

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FDragAlignmentBase::InitializeDeformedMeshRayCast'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,bool,int>
::Call(void *param_1,int *param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int local_res8 [2];
  
  lVar1 = *(longlong *)param_1;
  local_res8[0] = *param_2;
  CheckCallable(*(void **)(lVar1 + 0x70));
  pcVar2 = *(code **)(lVar1 + 0x70);
  plVar5 = (longlong *)(lVar1 + 0x80);
  if (*(longlong **)(lVar1 + 0x98) != (longlong *)0x0) {
    plVar5 = *(longlong **)(lVar1 + 0x98);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  uVar3 = (*pcVar2)(uVar4,local_res8);
  return (bool)uVar3;
}

// Call @ 14caf18a0

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FDynamicMeshSpatialWrapper::AppendMesh'::__l5::<lambda_1>,UE::Math::TVector<double>,int,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,int *param_2,TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (param_3->field0_0x0)._s_0.Y;
  dVar1 = (param_3->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_3->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// Call @ 14caf18c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::ToolTarget::ApplyIncrementalMeshEditChange'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
  undefined1 uVar1;
  undefined8 local_res8 [4];
  
  local_res8[0] = **(undefined8 **)((longlong)param_1 + 0x10);
  uVar1 = (*(code *)**(undefined8 **)((longlong)param_1 + 8))
                    ((*(undefined8 **)((longlong)param_1 + 8))[1],param_2,local_res8);
  **(undefined1 **)param_1 = uVar1;
  return;
}

// Call @ 14caf1900

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::GetBox'::__l5::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,TVector<double> *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  puVar1 = *(undefined8 **)param_1;
  CheckCallable((void *)*puVar1);
  pcVar2 = (code *)*puVar1;
  plVar4 = puVar1 + 2;
  if ((longlong *)puVar1[5] != (longlong *)0x0) {
    plVar4 = (longlong *)puVar1[5];
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(__return_storage_ptr__,uVar3,param_2);
  return __return_storage_ptr__;
}

// Call @ 14caf1970

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::GetBox'::__l5::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,TVector<double> *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  puVar1 = *(undefined8 **)param_1;
  CheckCallable((void *)*puVar1);
  pcVar2 = (code *)*puVar1;
  plVar4 = puVar1 + 2;
  if ((longlong *)puVar1[5] != (longlong *)0x0) {
    plVar4 = (longlong *)puVar1[5];
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(__return_storage_ptr__,uVar3,param_2);
  return __return_storage_ptr__;
}

// Call @ 14caf19e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMeshOpPreviewWithBackgroundCompute::GetCurrentResultCopy'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
  UE::Geometry::FDynamicMesh3::operator=(*(FDynamicMesh3 **)param_1,param_2);
  return;
}

// Call @ 14caf19f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::ToolTarget::GetDynamicMeshCopy'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
  UE::Geometry::FDynamicMesh3::operator=(*(FDynamicMesh3 **)param_1,param_2);
  return;
}

// Call @ 14caf1a00

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDragAlignmentBase::InitializeDeformedMeshRayCast'::__l5::<lambda_1>,bool,int>::
Call(void *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = `FDragAlignmentBase::InitializeDeformedMeshRayCast'::__l5::<lambda_1>::operator()
                    (param_1,*param_2);
  return bVar1;
}

// Call @ 14caf1a10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCollisionPrimitivesMechanic::RebuildDrawables'::__l5::<lambda_1>,void,UCollisionPrimitivesMechanic::FPrimitiveRenderData_&,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&,int,int,UE::Math::TTransform<double>_const_&,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,FColor_const_&>
::Call(void *param_1,FPrimitiveRenderData *param_2,
      TArray<FRenderableLine,TSizedDefaultAllocator<32>_> *param_3,int *param_4,int *param_5,
      TTransform<double> *param_6,TVector<double> *param_7,TVector<double> *param_8,FColor *param_9)

{
  `UCollisionPrimitivesMechanic::RebuildDrawables'::__l5::<lambda_1>::operator()
            (param_1,param_2,param_3,*param_4,*param_5,param_6,param_7,param_8,param_9);
  return;
}

// Call @ 14caf1a30

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::TestIntersection'::__l6::<lambda_1>,bool,UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&>
::Call(void *param_1,TTriangle3<double> *param_2,TTriangle3<double> *param_3)

{
  bool bVar1;
  
  bVar1 = UE::Geometry::TIntrTriangle3Triangle3<double>::Intersects
                    (param_2,param_3,__real_3e45798ee2308c3a);
  return bVar1;
}

// Call @ 14caf1a50

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::TestIntersection'::__l6::<lambda_1>,bool,UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&>
::Call(void *param_1,TTriangle3<double> *param_2,TTriangle3<double> *param_3)

{
  bool bVar1;
  
  bVar1 = UE::Geometry::TIntrTriangle3Triangle3<double>::Intersects
                    (param_2,param_3,__real_3e45798ee2308c3a);
  return bVar1;
}

// Call @ 14caf1a70

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshSceneAdapter::GetBoundingBox'::__l16::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,TVector<double> *param_2)

{
  TVector<double>_u_0 local_28;
  
  local_28._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  UE::Geometry::TTransformSequence3<double>::TransformPosition
            ((TTransformSequence3<double> *)(**(longlong **)param_1 + 0x20),__return_storage_ptr__,
             (TVector<double> *)&local_28._s_0);
  return __return_storage_ptr__;
}

// Call @ 14caf1ac0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::FMeshSceneAdapter::Build_FullDecompose'::__l2::<lambda_5>::operator()'::__l19::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  ``UE::Geometry::FMeshSceneAdapter::Build_FullDecompose'::__l2::<lambda_5>::operator()'::__l19::
  <lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14caf1ad0

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
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshSceneAdapter::FastUpdateTransforms'::__l21::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  uint uVar1;
  FMeshSceneAdapter *this;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  this = *(FMeshSceneAdapter **)param_1;
  uVar1 = *param_2;
  uVar4 = 0;
  if ((int)uVar1 < (this->SceneActors).ArrayNum) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
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
  UE::Geometry::FMeshSceneAdapter::UpdateActorBounds
            (this,*(FActorAdapter **)
                   ((this->SceneActors).AllocatorInstance.Data + (longlong)(int)uVar1 * 8));
  return;
}

// Call @ 14caf1b50

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshSceneAdapter::GetMeshBoundingBoxes'::__l22::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,TVector<double> *param_2)

{
  TVector<double>_u_0 local_28;
  
  local_28._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  UE::Geometry::TTransformSequence3<double>::TransformPosition
            ((TTransformSequence3<double> *)(**(longlong **)param_1 + 0x20),__return_storage_ptr__,
             (TVector<double> *)&local_28._s_0);
  return __return_storage_ptr__;
}

// Call @ 14caf1ba0

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::TestIntersection'::__l11::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,TVector<double> *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  puVar1 = *(undefined8 **)param_1;
  CheckCallable((void *)*puVar1);
  pcVar2 = (code *)*puVar1;
  plVar4 = puVar1 + 2;
  if ((longlong *)puVar1[5] != (longlong *)0x0) {
    plVar4 = (longlong *)puVar1[5];
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(__return_storage_ptr__,uVar3,param_2);
  return __return_storage_ptr__;
}

// Call @ 14caf1c10

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::TestIntersection'::__l11::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,TVector<double> *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  puVar1 = *(undefined8 **)param_1;
  CheckCallable((void *)*puVar1);
  pcVar2 = (code *)*puVar1;
  plVar4 = puVar1 + 2;
  if ((longlong *)puVar1[5] != (longlong *)0x0) {
    plVar4 = (longlong *)puVar1[5];
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(__return_storage_ptr__,uVar3,param_2);
  return __return_storage_ptr__;
}

// Call @ 14caf1c80

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshSceneAdapter::CollectMeshSeedPoints'::__l13::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,TVector<double> *param_2)

{
  TVector<double>_u_0 local_28;
  
  local_28._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  UE::Geometry::TTransformSequence3<double>::TransformPosition
            ((TTransformSequence3<double> *)(**(longlong **)param_1 + 0x20),__return_storage_ptr__,
             (TVector<double> *)&local_28._s_0);
  return __return_storage_ptr__;
}

// Call @ 14caf1cd0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshSceneAdapter::FastWindingNumber'::__l15::<lambda_1>,bool,int>
::Call(void *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = `UE::Geometry::FMeshSceneAdapter::FastWindingNumber'::__l15::<lambda_1>::operator()
                    (param_1,*param_2);
  return bVar1;
}

// Call @ 14caf1ce0

bool __cdecl
UE::Core::Private::Function::TFunctionRefCaller<UCollisionPrimitivesMechanic::<lambda_26_>,bool>::
Call(void *param_1)

{
  return (bool)*(undefined1 *)(*(longlong *)param_1 + 0x348);
}

// Call @ 14caf1d00

bool __cdecl
UE::Core::Private::Function::TFunctionRefCaller<UCollisionPrimitivesMechanic::<lambda_27_>,bool>::
Call(void *param_1)

{
  return (bool)*(undefined1 *)(*(longlong *)param_1 + 0x349);
}

// Call @ 14caf1d20

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::TMeshWrapperAdapterd<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>'::__l2::<lambda_2>,bool,int>
::Call(void *param_1,int *param_2)

{
  int iVar1;
  FMeshElementContainer *pFVar2;
  
  iVar1 = *param_2;
  if (-1 < iVar1) {
    pFVar2 = FMeshElementChannels::Get
                       (*(FMeshElementChannels **)
                         (**(longlong **)(*(longlong *)param_1 + 0x1b0) + 0x50),0);
    if (iVar1 < (pFVar2->BitArray).NumBits - pFVar2->NumHoles) {
      return true;
    }
  }
  return false;
}

// Call @ 14caf1d70

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::TMeshWrapperAdapterd<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>'::__l2::<lambda_2>,bool,int>
::Call(void *param_1,int *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  
  iVar1 = *param_2;
  if (-1 < iVar1) {
    plVar2 = *(longlong **)(*(longlong *)param_1 + 0x1b0);
    lVar3 = *plVar2;
    if (lVar3 != 0) {
      bVar4 = FPositionVertexBuffer::GetAllowCPUAccess((FPositionVertexBuffer *)(lVar3 + 0x188));
      if (bVar4) {
        iVar5 = FStaticMeshLODResources::GetNumVertices((FStaticMeshLODResources *)*plVar2);
        if (iVar1 < iVar5) {
          return true;
        }
      }
    }
  }
  return false;
}

// Call @ 14caf1dd0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FColliderMesh>::TMeshWrapperAdapterd<UE::Geometry::FColliderMesh>'::__l2::<lambda_2>,bool,int>
::Call(void *param_1,int *param_2)

{
  if ((-1 < *param_2) && (*param_2 < *(int *)(*(longlong *)(*(longlong *)param_1 + 0x1b0) + 8))) {
    return true;
  }
  return false;
}

// Call @ 14caf1e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FTriangleSetSceneProxy::FTriangleSetSceneProxy'::__l2::<lambda_2>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  undefined1 auStack_108 [32];
  FDataType FStack_e8;
  ulonglong uStack_10;
  
  uStack_10 = __security_cookie.value ^ (ulonglong)auStack_108;
  (**(code **)(*(longlong *)(*(longlong *)param_1 + 0x580) + 0x18))();
  (**(code **)(*(longlong *)(*(longlong *)param_1 + 0x4c8) + 0x18))
            ((longlong *)(*(longlong *)param_1 + 0x4c8),param_2);
  (**(code **)(*(longlong *)(*(longlong *)param_1 + 0x5d0) + 0x18))
            ((longlong *)(*(longlong *)param_1 + 0x5d0),param_2);
  FStack_e8._padding_._4_4_ = 4;
  FStack_e8._padding_ = 0;
  FStack_e8._padding_ = 0;
  FStack_e8._padding_ = 0;
  FStack_e8._padding_ = 0;
  FStack_e8._padding_ = 0;
  FStack_e8._padding_ = 0;
  FStack_e8._padding_._0_4_ = 0;
  FStack_e8._padding_ = 0;
  FStack_e8._padding_ = 0;
  FStack_e8._padding_ = 0;
  FStack_e8._padding_ = 0;
  FStack_e8._padding_ = 0;
  FStack_e8._padding_ = 0;
  FStack_e8._padding_._0_4_ = 0xffffffff;
  FStack_e8._padding_ = 0;
  FStack_e8._padding_ = 0;
  FStack_e8._padding_._4_2_ = 0xff;
  FStack_e8._padding_._6_1_ = 0;
  FStack_e8.PreSkinPositionComponent.VertexBuffer = (FVertexBuffer *)0x0;
  FStack_e8.PreSkinPositionComponent.StreamOffset = 0;
  FStack_e8.PreSkinPositionComponent.Offset = '\0';
  FStack_e8.PreSkinPositionComponent.Stride = '\0';
  FStack_e8.PreSkinPositionComponent.Type.Value = '\0';
  FStack_e8.PreSkinPositionComponent.VertexStreamUsage = Default;
  FStack_e8.PreSkinPositionComponentSRV = (FRHIShaderResourceView *)0x0;
  FPositionVertexBuffer::BindPositionVertexBuffer
            ((FPositionVertexBuffer *)(*(longlong *)param_1 + 0x580),
             (FVertexFactory *)(*(longlong *)param_1 + 0x298),(FStaticMeshDataType *)&FStack_e8);
  FStaticMeshVertexBuffer::BindTangentVertexBuffer
            ((FStaticMeshVertexBuffer *)(*(longlong *)param_1 + 0x4c8),
             (FVertexFactory *)(*(longlong *)param_1 + 0x298),(FStaticMeshDataType *)&FStack_e8);
  FStaticMeshVertexBuffer::BindTexCoordVertexBuffer
            ((FStaticMeshVertexBuffer *)(*(longlong *)param_1 + 0x4c8),
             (FVertexFactory *)(*(longlong *)param_1 + 0x298),(FStaticMeshDataType *)&FStack_e8,-1);
  FColorVertexBuffer::BindColorVertexBuffer
            ((FColorVertexBuffer *)(*(longlong *)param_1 + 0x5d0),
             (FVertexFactory *)(*(longlong *)param_1 + 0x298),(FStaticMeshDataType *)&FStack_e8);
  FLocalVertexFactory::SetData
            ((FLocalVertexFactory *)(*(longlong *)param_1 + 0x298),(FRHICommandListBase *)param_2,
             &FStack_e8);
  (**(code **)(*(longlong *)(*(longlong *)param_1 + 0x298) + 0x18))
            ((longlong *)(*(longlong *)param_1 + 0x298),param_2);
  (**(code **)(*(longlong *)(*(longlong *)param_1 + 0x620) + 0x18))
            ((longlong *)(*(longlong *)param_1 + 0x620),param_2);
  return;
}

// Call @ 14caf1e10

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::ConvertSimpleCollisionToMeshes'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>,UE::Math::TVector<double>,int,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,int *param_2,TVector<double> *param_3)

{
  TVector<double>_u_0 local_28;
  
  local_28._s_0.X = (param_3->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_3->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  UE::Geometry::TTransformSequence3<double>::TransformNormal
            (*(TTransformSequence3<double> **)param_1,__return_storage_ptr__,
             (TVector<double> *)&local_28._s_0);
  return __return_storage_ptr__;
}

// Call @ 14caf1e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UCollisionPrimitivesMechanic::RebuildDrawables'::__l9::<lambda_3>::operator()'::__l2::<lambda_2>,void,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_const_&>
::Call(void *param_1,TVector<float> *param_2,TVector<float> *param_3)

{
  int iVar1;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(UCollisionPrimitivesMechanic::FPrimitiveRenderData_&,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&,int,int,UE::Math::TTransform<double>_const_&,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,FColor_const_&)>
  *this;
  FColor *pFVar2;
  double dVar3;
  undefined1 auStackY_f8 [32];
  TVector<double>_u_0 TStack_a8;
  TVector<double>_u_0 TStack_90;
  TTransform<double> TStack_78;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  dVar3 = (double)(float)((ulonglong)*(undefined8 *)&param_3->field0_0x0 >> 0x20);
  this = *(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(UCollisionPrimitivesMechanic::FPrimitiveRenderData_&,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&,int,int,UE::Math::TTransform<double>_const_&,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,FColor_const_&)>
           **)param_1;
  pFVar2 = *(FColor **)((longlong)param_1 + 0x38);
  TStack_a8._8_4_ = SUB84(dVar3,0);
  TStack_a8._0_8_ = (double)(float)*(undefined8 *)&param_3->field0_0x0;
  TStack_a8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  TStack_a8._s_0.Z = (double)(param_3->field0_0x0)._s_0.Z;
  TStack_78.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  TStack_78.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  dVar3 = (double)(float)((ulonglong)*(undefined8 *)&param_2->field0_0x0 >> 0x20);
  TStack_90._8_4_ = SUB84(dVar3,0);
  TStack_90._0_8_ = (double)(float)*(undefined8 *)&param_2->field0_0x0;
  TStack_90._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  TStack_90._s_0.Z = (double)(param_2->field0_0x0)._s_0.Z;
  TStack_78.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  TStack_78.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  TStack_78.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  TStack_78.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  TStack_78.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  TStack_78.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  TStack_78.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  TStack_78.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  TStack_78.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  TStack_78.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  TStack_78.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  TStack_78.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  TStack_78.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&TStack_78,*(TTransform<double> **)((longlong)param_1 + 0x28),
             (TTransform<double> *)(*(longlong *)((longlong)param_1 + 0x30) + 0xc0));
  iVar1 = **(int **)((longlong)param_1 + 0x20);
  **(int **)((longlong)param_1 + 0x20) = iVar1 + 1;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(UCollisionPrimitivesMechanic::FPrimitiveRenderData_&,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&,int,int,UE::Math::TTransform<double>_const_&,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,FColor_const_&)>
  ::operator()(this,*(FPrimitiveRenderData **)((longlong)param_1 + 8),
               *(TArray<FRenderableLine,TSizedDefaultAllocator<32>_> **)((longlong)param_1 + 0x10),
               **(int **)((longlong)param_1 + 0x18),iVar1,&TStack_78,
               (TVector<double> *)&TStack_90._s_0,(TVector<double> *)&TStack_a8._s_0,pFVar2);
  return;
}

// Call @ 14caf1e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UCollisionPrimitivesMechanic::RebuildDrawables'::__l19::<lambda_5>::operator()'::__l2::<lambda_2>,void,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_const_&>
::Call(void *param_1,TVector<float> *param_2,TVector<float> *param_3)

{
  int iVar1;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(UCollisionPrimitivesMechanic::FPrimitiveRenderData_&,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&,int,int,UE::Math::TTransform<double>_const_&,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,FColor_const_&)>
  *this;
  FColor *pFVar2;
  double dVar3;
  undefined1 auStackY_f8 [32];
  TVector<double>_u_0 TStack_a8;
  TVector<double>_u_0 TStack_90;
  TTransform<double> TStack_78;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  dVar3 = (double)(float)((ulonglong)*(undefined8 *)&param_3->field0_0x0 >> 0x20);
  this = *(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(UCollisionPrimitivesMechanic::FPrimitiveRenderData_&,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&,int,int,UE::Math::TTransform<double>_const_&,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,FColor_const_&)>
           **)param_1;
  pFVar2 = *(FColor **)((longlong)param_1 + 0x38);
  TStack_a8._8_4_ = SUB84(dVar3,0);
  TStack_a8._0_8_ = (double)(float)*(undefined8 *)&param_3->field0_0x0;
  TStack_a8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  TStack_a8._s_0.Z = (double)(param_3->field0_0x0)._s_0.Z;
  TStack_78.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  TStack_78.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  dVar3 = (double)(float)((ulonglong)*(undefined8 *)&param_2->field0_0x0 >> 0x20);
  TStack_90._8_4_ = SUB84(dVar3,0);
  TStack_90._0_8_ = (double)(float)*(undefined8 *)&param_2->field0_0x0;
  TStack_90._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  TStack_90._s_0.Z = (double)(param_2->field0_0x0)._s_0.Z;
  TStack_78.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  TStack_78.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  TStack_78.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  TStack_78.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  TStack_78.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  TStack_78.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  TStack_78.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  TStack_78.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  TStack_78.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  TStack_78.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  TStack_78.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  TStack_78.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  TStack_78.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&TStack_78,*(TTransform<double> **)((longlong)param_1 + 0x28),
             (TTransform<double> *)(*(longlong *)((longlong)param_1 + 0x30) + 0xc0));
  iVar1 = **(int **)((longlong)param_1 + 0x20);
  **(int **)((longlong)param_1 + 0x20) = iVar1 + 1;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(UCollisionPrimitivesMechanic::FPrimitiveRenderData_&,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&,int,int,UE::Math::TTransform<double>_const_&,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,FColor_const_&)>
  ::operator()(this,*(FPrimitiveRenderData **)((longlong)param_1 + 8),
               *(TArray<FRenderableLine,TSizedDefaultAllocator<32>_> **)((longlong)param_1 + 0x10),
               **(int **)((longlong)param_1 + 0x18),iVar1,&TStack_78,
               (TVector<double> *)&TStack_90._s_0,(TVector<double> *)&TStack_a8._s_0,pFVar2);
  return;
}

// Call @ 14caf1e70

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_2>,bool>::Call(void *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014caf1e76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(longlong **)param_1 + 0x18))();
  return (bool)uVar1;
}

// Call @ 14caf1e80

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_2>,bool,UE::Math::TRay<double>_const_&,UE::Math::TVector<double>_&>
::Call(void *param_1,TRay<double> *param_2,TVector<double> *param_3)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)param_1 + 0x38))
                    (*(longlong **)param_1,param_2,param_3,*(undefined8 *)((longlong)param_1 + 8),
                     *(undefined8 *)((longlong)param_1 + 0x18),1);
  return (bool)uVar1;
}

// Call @ 14caf1ec0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshSceneAdapter::Build_FullDecompose'::__l2::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::FMeshSceneAdapter::Build_FullDecompose'::__l2::<lambda_2>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 14caf1ed0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::ToolTarget::Internal::CommitDynamicMeshViaIPersistentDynamicMeshSource'::__l2::<lambda_2>,void,UE::Geometry::FDynamicMesh3_const_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  
  plVar1 = *(longlong **)param_1;
  if (*plVar1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  UE::Geometry::FDynamicMesh3::operator=((FDynamicMesh3 *)*plVar1,param_2);
  return;
}

// Call @ 14caf1f30

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::ConvertSimpleCollisionToMeshes'::__l2::<lambda_2>,bool,FKShapeElem_const_&>
::Call(void *param_1,FKShapeElem *param_2)

{
  return true;
}

// Call @ 14caf1f40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UUVLayoutPreview::CreateInWorld'::__l2::<lambda_2>,void,bool_const_&>::Call
          (void *param_1,bool *param_2)

{
  *(undefined1 *)(*(longlong *)param_1 + 0x170) = 1;
  return;
}

// Call @ 14caf1f60

double __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshSceneAdapter::FindNearestRayIntersection'::__l2::<lambda_2>,double,int,UE::Math::TRay<double>_const_&>
::Call(void *param_1,int *param_2,TRay<double> *param_3)

{
  double dVar1;
  
  dVar1 = `UE::Geometry::FMeshSceneAdapter::FindNearestRayIntersection'::__l2::<lambda_2>::
          operator()(param_1,*param_2,param_3);
  return dVar1;
}

// Call @ 14caf1f70

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UConstructionPlaneMechanic::Initialize'::__l2::<lambda_2>,bool>::Call
          (void *param_1)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)param_1;
  CheckCallable(*(void **)(lVar1 + 0x30));
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x30);
  plVar4 = (longlong *)(lVar1 + 0x40);
  if (*(longlong **)(lVar1 + 0x58) != (longlong *)0x0) {
    plVar4 = *(longlong **)(lVar1 + 0x58);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014caf1faf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar3);
  return (bool)uVar2;
}

// Call @ 14caf1fc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGeometrySelectionVisualizationProperties::Initialize'::__l2::<lambda_2>,void,bool_const_&>
::Call(void *param_1,bool *param_2)

{
  *(undefined1 *)(*(longlong *)param_1 + 0x108) = 1;
  return;
}

// Call @ 14caf1fe0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDragAlignmentBase::InitializeDeformedMeshRayCast'::__l2::<lambda_2>,bool,UE::Math::TRay<double>_const_&,FHitResult_&,bool>
::Call(void *param_1,TRay<double> *param_2,FHitResult *param_3,bool *param_4)

{
  bool bVar1;
  
  bVar1 = `FDragAlignmentBase::InitializeDeformedMeshRayCast'::__l2::<lambda_2>::operator()
                    (param_1,param_2,param_3,*param_4);
  return bVar1;
}

// Call @ 14caf1ff0

double __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCurveControlPointsMechanic::Setup'::__l2::<lambda_2>,double,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
::Call(void *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  double dVar1;
  
  dVar1 = ToolSceneQueriesUtil::PointSnapMetric
                    ((FViewCameraState *)(*(longlong *)param_1 + 0x5a0),param_2,param_3);
  return dVar1;
}

// Call @ 14caf2010

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
UE::Core::Private::Function::
TFunctionRefCaller<`USpaceCurveDeformationMechanic::Setup'::__l2::<lambda_2>,void,enum_ESpaceCurveControlPointTransformMode_const_&>
::Call(void *param_1,ESpaceCurveControlPointTransformMode *param_2)

{
  USpaceCurveDeformationMechanic::UpdateGizmoLocation(*(USpaceCurveDeformationMechanic **)param_1);
  return;
}

// Call @ 14caf2020

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FDynamicMeshSpatialWrapper::AppendMesh'::__l5::<lambda_2>,UE::Math::TVector<double>,int,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,int *param_2,TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (param_3->field0_0x0)._s_0.Y;
  dVar1 = (param_3->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_3->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// Call @ 14caf2040

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FCompressedMeshSpatialWrapper::AppendMesh'::__l7::<lambda_2>,UE::Math::TVector<double>,int,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,int *param_2,TVector<double> *param_3)

{
  TVector<double>_u_0 local_28;
  
  local_28._s_0.X = (param_3->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_3->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  UE::Geometry::TTransformSequence3<double>::TransformPosition
            (*(TTransformSequence3<double> **)param_1,__return_storage_ptr__,
             (TVector<double> *)&local_28._s_0);
  return __return_storage_ptr__;
}

// Call @ 14caf2080

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshSceneAdapter::Build'::__l7::<lambda_2>,void,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>_>
::Call(void *param_1,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1> *param_2)

{
  TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1> local_18;
  
  local_18.Object = param_2->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  (param_2->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->Object = (FSpatialWrapperInfo *)0x0;
  `UE::Geometry::FMeshSceneAdapter::Build'::__l7::<lambda_2>::operator()(param_1,&local_18);
  return;
}

// Call @ 14caf20c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCollisionPrimitivesMechanic::RebuildDrawables'::__l7::<lambda_2>,void,UCollisionPrimitivesMechanic::FPrimitiveRenderData_&,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&,int,int,UE::Math::TTransform<double>_const_&,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,FColor_const_&>
::Call(void *param_1,FPrimitiveRenderData *param_2,
      TArray<FRenderableLine,TSizedDefaultAllocator<32>_> *param_3,int *param_4,int *param_5,
      TTransform<double> *param_6,TVector<double> *param_7,TVector<double> *param_8,FColor *param_9)

{
  `UCollisionPrimitivesMechanic::RebuildDrawables'::__l7::<lambda_2>::operator()
            (param_1,param_2,param_3,*param_4,*param_5,param_6,param_7,param_8,param_9);
  return;
}

// Call @ 14caf20e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshSceneAdapter::FastWindingNumber'::__l17::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::FMeshSceneAdapter::FastWindingNumber'::__l17::<lambda_2>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 14caf20f0

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::TMeshWrapperAdapterd<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>'::__l2::<lambda_3>,int>
::Call(void *param_1)

{
  FMeshElementContainer *pFVar1;
  
  pFVar1 = FMeshElementChannels::Get
                     (*(FMeshElementChannels **)
                       (**(longlong **)(*(longlong *)param_1 + 0x1b0) + 0x70),0);
  return (pFVar1->BitArray).NumBits - pFVar1->NumHoles;
}

// Call @ 14caf2120

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::TMeshWrapperAdapterd<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>'::__l2::<lambda_3>,int>
::Call(void *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  
  plVar1 = *(longlong **)(*(longlong *)param_1 + 0x1b0);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    cVar3 = (**(code **)(*(longlong *)(lVar2 + 0x250) + 0x30))();
    if (cVar3 != '\0') {
      return (int)plVar1[0xc];
    }
  }
  return 0;
}

// Call @ 14caf2160

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FColliderMesh>::TMeshWrapperAdapterd<UE::Geometry::FColliderMesh>'::__l2::<lambda_3>,int>
::Call(void *param_1)

{
  return *(int *)(*(longlong *)(*(longlong *)param_1 + 0x1b0) + 0x18);
}

// Call @ 14caf2180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UCollisionPrimitivesMechanic::RebuildDrawables'::__l9::<lambda_3>::operator()'::__l2::<lambda_3>,void,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_const_&>
::Call(void *param_1,TVector<float> *param_2,TVector<float> *param_3)

{
  int iVar1;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(UCollisionPrimitivesMechanic::FPrimitiveRenderData_&,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&,int,int,UE::Math::TTransform<double>_const_&,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,FColor_const_&)>
  *this;
  FColor *pFVar2;
  double dVar3;
  undefined1 auStackY_f8 [32];
  TVector<double>_u_0 TStack_a8;
  TVector<double>_u_0 TStack_90;
  TTransform<double> TStack_78;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  dVar3 = (double)(float)((ulonglong)*(undefined8 *)&param_3->field0_0x0 >> 0x20);
  this = *(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(UCollisionPrimitivesMechanic::FPrimitiveRenderData_&,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&,int,int,UE::Math::TTransform<double>_const_&,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,FColor_const_&)>
           **)param_1;
  pFVar2 = *(FColor **)((longlong)param_1 + 0x38);
  TStack_a8._8_4_ = SUB84(dVar3,0);
  TStack_a8._0_8_ = (double)(float)*(undefined8 *)&param_3->field0_0x0;
  TStack_a8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  TStack_a8._s_0.Z = (double)(param_3->field0_0x0)._s_0.Z;
  TStack_78.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  TStack_78.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  dVar3 = (double)(float)((ulonglong)*(undefined8 *)&param_2->field0_0x0 >> 0x20);
  TStack_90._8_4_ = SUB84(dVar3,0);
  TStack_90._0_8_ = (double)(float)*(undefined8 *)&param_2->field0_0x0;
  TStack_90._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  TStack_90._s_0.Z = (double)(param_2->field0_0x0)._s_0.Z;
  TStack_78.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  TStack_78.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  TStack_78.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  TStack_78.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  TStack_78.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  TStack_78.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  TStack_78.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  TStack_78.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  TStack_78.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  TStack_78.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  TStack_78.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  TStack_78.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  TStack_78.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&TStack_78,*(TTransform<double> **)((longlong)param_1 + 0x28),
             (TTransform<double> *)(*(longlong *)((longlong)param_1 + 0x30) + 0xc0));
  iVar1 = **(int **)((longlong)param_1 + 0x20);
  **(int **)((longlong)param_1 + 0x20) = iVar1 + 1;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(UCollisionPrimitivesMechanic::FPrimitiveRenderData_&,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&,int,int,UE::Math::TTransform<double>_const_&,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,FColor_const_&)>
  ::operator()(this,*(FPrimitiveRenderData **)((longlong)param_1 + 8),
               *(TArray<FRenderableLine,TSizedDefaultAllocator<32>_> **)((longlong)param_1 + 0x10),
               **(int **)((longlong)param_1 + 0x18),iVar1,&TStack_78,
               (TVector<double> *)&TStack_90._s_0,(TVector<double> *)&TStack_a8._s_0,pFVar2);
  return;
}

// Call @ 14caf2190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UCollisionPrimitivesMechanic::RebuildDrawables'::__l19::<lambda_5>::operator()'::__l2::<lambda_3>,void,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_const_&>
::Call(void *param_1,TVector<float> *param_2,TVector<float> *param_3)

{
  int iVar1;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(UCollisionPrimitivesMechanic::FPrimitiveRenderData_&,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&,int,int,UE::Math::TTransform<double>_const_&,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,FColor_const_&)>
  *this;
  FColor *pFVar2;
  double dVar3;
  undefined1 auStackY_f8 [32];
  TVector<double>_u_0 TStack_a8;
  TVector<double>_u_0 TStack_90;
  TTransform<double> TStack_78;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  dVar3 = (double)(float)((ulonglong)*(undefined8 *)&param_3->field0_0x0 >> 0x20);
  this = *(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(UCollisionPrimitivesMechanic::FPrimitiveRenderData_&,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&,int,int,UE::Math::TTransform<double>_const_&,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,FColor_const_&)>
           **)param_1;
  pFVar2 = *(FColor **)((longlong)param_1 + 0x38);
  TStack_a8._8_4_ = SUB84(dVar3,0);
  TStack_a8._0_8_ = (double)(float)*(undefined8 *)&param_3->field0_0x0;
  TStack_a8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  TStack_a8._s_0.Z = (double)(param_3->field0_0x0)._s_0.Z;
  TStack_78.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  TStack_78.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  dVar3 = (double)(float)((ulonglong)*(undefined8 *)&param_2->field0_0x0 >> 0x20);
  TStack_90._8_4_ = SUB84(dVar3,0);
  TStack_90._0_8_ = (double)(float)*(undefined8 *)&param_2->field0_0x0;
  TStack_90._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  TStack_90._s_0.Z = (double)(param_2->field0_0x0)._s_0.Z;
  TStack_78.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  TStack_78.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  TStack_78.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  TStack_78.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  TStack_78.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  TStack_78.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  TStack_78.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  TStack_78.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  TStack_78.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  TStack_78.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  TStack_78.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  TStack_78.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  TStack_78.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&TStack_78,*(TTransform<double> **)((longlong)param_1 + 0x28),
             (TTransform<double> *)(*(longlong *)((longlong)param_1 + 0x30) + 0xc0));
  iVar1 = **(int **)((longlong)param_1 + 0x20);
  **(int **)((longlong)param_1 + 0x20) = iVar1 + 1;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(UCollisionPrimitivesMechanic::FPrimitiveRenderData_&,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&,int,int,UE::Math::TTransform<double>_const_&,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,FColor_const_&)>
  ::operator()(this,*(FPrimitiveRenderData **)((longlong)param_1 + 8),
               *(TArray<FRenderableLine,TSizedDefaultAllocator<32>_> **)((longlong)param_1 + 0x10),
               **(int **)((longlong)param_1 + 0x18),iVar1,&TStack_78,
               (TVector<double> *)&TStack_90._s_0,(TVector<double> *)&TStack_a8._s_0,pFVar2);
  return;
}

// Call @ 14caf21a0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDragAlignmentBase::AddToGizmo'::__l2::<lambda_3>,bool,UE::Math::TRay<double>_const_&,UE::Math::TVector<double>_&>
::Call(void *param_1,TRay<double> *param_2,TVector<double> *param_3)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)param_1 + 0x38))
                    (*(longlong **)param_1,param_2,param_3,*(undefined8 *)((longlong)param_1 + 8),
                     *(undefined8 *)((longlong)param_1 + 0x18),1);
  return (bool)uVar1;
}

// Call @ 14caf21e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UUVLayoutPreview::CreateInWorld'::__l2::<lambda_3>,void,bool_const_&>::Call
          (void *param_1,bool *param_2)

{
  *(undefined1 *)(*(longlong *)param_1 + 0x170) = 1;
  return;
}

// Call @ 14caf2200

FInputRayHit * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UConstructionPlaneMechanic::Initialize'::__l2::<lambda_3>,FInputRayHit,FInputDeviceRay_const_&>
::Call(FInputRayHit *__return_storage_ptr__,void *param_1,FInputDeviceRay *param_2)

{
  bool bVar1;
  TVector<double> local_28;
  
  FInputRayHit::FInputRayHit(__return_storage_ptr__);
  bVar1 = UE::Geometry::TFrame3<double>::RayPlaneIntersection
                    ((TFrame3<double> *)(*(longlong *)param_1 + 0x68),(TVector<double> *)param_2,
                     &(param_2->WorldRay).Direction,2,&local_28);
  __return_storage_ptr__->bHit = bVar1;
  return __return_storage_ptr__;
}

// Call @ 14caf2260

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGeometrySelectionVisualizationProperties::Initialize'::__l2::<lambda_3>,void,bool_const_&>
::Call(void *param_1,bool *param_2)

{
  *(undefined1 *)(*(longlong *)param_1 + 0x108) = 1;
  return;
}

// Call @ 14caf2280

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
UE::Core::Private::Function::
TFunctionRefCaller<`USpaceCurveDeformationMechanic::Setup'::__l2::<lambda_3>,void,enum_ESpaceCurveControlPointOriginMode_const_&>
::Call(void *param_1,ESpaceCurveControlPointOriginMode *param_2)

{
  USpaceCurveDeformationMechanic::UpdateGizmoLocation(*(USpaceCurveDeformationMechanic **)param_1);
  return;
}

// Call @ 14caf2290

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
UE::Core::Private::Function::
TFunctionRefCaller<`UCollisionPrimitivesMechanic::UpdateGizmoLocation'::__l2::<lambda_3>,void,UCombinedTransformGizmo_&>
::Call(void *param_1,UCombinedTransformGizmo *param_2)

{
  UCombinedTransformGizmo::ReinitializeGizmoTransform(param_2,*(TTransform<double> **)param_1,true);
  return;
}

// Call @ 14caf22b0

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FDynamicMeshSpatialWrapper::AppendMesh'::__l7::<lambda_3>,UE::Math::TVector<double>,int,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,int *param_2,TVector<double> *param_3)

{
  TVector<double>_u_0 local_28;
  
  local_28._s_0.X = (param_3->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_3->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  UE::Geometry::TTransformSequence3<double>::TransformPosition
            (*(TTransformSequence3<double> **)param_1,__return_storage_ptr__,
             (TVector<double> *)&local_28._s_0);
  return __return_storage_ptr__;
}

// Call @ 14caf22f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshSceneAdapter::Build'::__l7::<lambda_3>,void,int>::Call
          (void *param_1,int *param_2)

{
  `UE::Geometry::FMeshSceneAdapter::Build'::__l7::<lambda_3>::operator()(param_1,*param_2);
  return;
}

// Call @ 14caf2300

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCollisionPrimitivesMechanic::RebuildDrawables'::__l9::<lambda_3>,void,int,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,int *param_2,TArray<FRenderableLine,TSizedDefaultAllocator<32>_> *param_3)

{
  `UCollisionPrimitivesMechanic::RebuildDrawables'::__l9::<lambda_3>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 14caf2310

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshSceneAdapter::BuildSpatialEvaluationCache'::__l14::<lambda_3>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::FMeshSceneAdapter::BuildSpatialEvaluationCache'::__l14::<lambda_3>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 14caf2320

bool __cdecl
UE::Core::Private::Function::TFunctionRefCaller<ULatticeControlPointsMechanic::<lambda_45_>,bool>::
Call(void *param_1)

{
  return (bool)*(undefined1 *)(*(longlong *)param_1 + 0x274);
}

// Call @ 14caf2340

bool __cdecl
UE::Core::Private::Function::TFunctionRefCaller<ULatticeControlPointsMechanic::<lambda_46_>,bool>::
Call(void *param_1)

{
  return (bool)*(undefined1 *)(*(longlong *)param_1 + 0x275);
}

// Call @ 14caf2360

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::TMeshWrapperAdapterd<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>'::__l2::<lambda_4>,int>
::Call(void *param_1)

{
  FMeshElementContainer *pFVar1;
  
  pFVar1 = FMeshElementChannels::Get
                     (*(FMeshElementChannels **)
                       (**(longlong **)(*(longlong *)param_1 + 0x1b0) + 0x50),0);
  return (pFVar1->BitArray).NumBits - pFVar1->NumHoles;
}

// Call @ 14caf2390

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::TMeshWrapperAdapterd<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>'::__l2::<lambda_4>,int>
::Call(void *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  
  plVar1 = *(longlong **)(*(longlong *)param_1 + 0x1b0);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    bVar3 = FPositionVertexBuffer::GetAllowCPUAccess((FPositionVertexBuffer *)(lVar2 + 0x188));
    if (bVar3) {
      iVar4 = FStaticMeshLODResources::GetNumVertices((FStaticMeshLODResources *)*plVar1);
      return iVar4;
    }
  }
  return 0;
}

// Call @ 14caf23e0

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FColliderMesh>::TMeshWrapperAdapterd<UE::Geometry::FColliderMesh>'::__l2::<lambda_4>,int>
::Call(void *param_1)

{
  return *(int *)(*(longlong *)(*(longlong *)param_1 + 0x1b0) + 8);
}

// Call @ 14caf2400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UCollisionPrimitivesMechanic::RebuildDrawables'::__l19::<lambda_5>::operator()'::__l2::<lambda_4>,void,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_const_&>
::Call(void *param_1,TVector<float> *param_2,TVector<float> *param_3)

{
  int iVar1;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(UCollisionPrimitivesMechanic::FPrimitiveRenderData_&,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&,int,int,UE::Math::TTransform<double>_const_&,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,FColor_const_&)>
  *this;
  FColor *pFVar2;
  double dVar3;
  undefined1 auStackY_f8 [32];
  TVector<double>_u_0 TStack_a8;
  TVector<double>_u_0 TStack_90;
  TTransform<double> TStack_78;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  dVar3 = (double)(float)((ulonglong)*(undefined8 *)&param_3->field0_0x0 >> 0x20);
  this = *(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(UCollisionPrimitivesMechanic::FPrimitiveRenderData_&,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&,int,int,UE::Math::TTransform<double>_const_&,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,FColor_const_&)>
           **)param_1;
  pFVar2 = *(FColor **)((longlong)param_1 + 0x38);
  TStack_a8._8_4_ = SUB84(dVar3,0);
  TStack_a8._0_8_ = (double)(float)*(undefined8 *)&param_3->field0_0x0;
  TStack_a8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  TStack_a8._s_0.Z = (double)(param_3->field0_0x0)._s_0.Z;
  TStack_78.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  TStack_78.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  dVar3 = (double)(float)((ulonglong)*(undefined8 *)&param_2->field0_0x0 >> 0x20);
  TStack_90._8_4_ = SUB84(dVar3,0);
  TStack_90._0_8_ = (double)(float)*(undefined8 *)&param_2->field0_0x0;
  TStack_90._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  TStack_90._s_0.Z = (double)(param_2->field0_0x0)._s_0.Z;
  TStack_78.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  TStack_78.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  TStack_78.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  TStack_78.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  TStack_78.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  TStack_78.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  TStack_78.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  TStack_78.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  TStack_78.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  TStack_78.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  TStack_78.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  TStack_78.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  TStack_78.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&TStack_78,*(TTransform<double> **)((longlong)param_1 + 0x28),
             (TTransform<double> *)(*(longlong *)((longlong)param_1 + 0x30) + 0xc0));
  iVar1 = **(int **)((longlong)param_1 + 0x20);
  **(int **)((longlong)param_1 + 0x20) = iVar1 + 1;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(UCollisionPrimitivesMechanic::FPrimitiveRenderData_&,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&,int,int,UE::Math::TTransform<double>_const_&,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,FColor_const_&)>
  ::operator()(this,*(FPrimitiveRenderData **)((longlong)param_1 + 8),
               *(TArray<FRenderableLine,TSizedDefaultAllocator<32>_> **)((longlong)param_1 + 0x10),
               **(int **)((longlong)param_1 + 0x18),iVar1,&TStack_78,
               (TVector<double> *)&TStack_90._s_0,(TVector<double> *)&TStack_a8._s_0,pFVar2);
  return;
}

// Call @ 14caf2410

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

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UConstructionPlaneMechanic::Initialize'::__l2::<lambda_4>,void,FInputDeviceRay_const_&>
::Call(void *param_1,FInputDeviceRay *param_2)

{
  bool bVar1;
  undefined1 auStackY_c8 [32];
  TVector<double>_u_0 TStack_98;
  TTransform<double> TStack_78;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  bVar1 = UE::Geometry::TFrame3<double>::RayPlaneIntersection
                    ((TFrame3<double> *)(*(longlong *)param_1 + 0x68),(TVector<double> *)param_2,
                     &(param_2->WorldRay).Direction,2,(TVector<double> *)&TStack_98._s_0);
  if (bVar1) {
    UCombinedTransformGizmo::GetGizmoTransform
              (*(UCombinedTransformGizmo **)(*(longlong *)param_1 + 0xc0),&TStack_78);
    TStack_78.Translation.XY.m128d_f64[0]._0_4_ = TStack_98._0_4_;
    TStack_78.Translation.XY.m128d_f64[0]._4_4_ = TStack_98._4_4_;
    TStack_78.Translation.XY.m128d_f64[1]._0_4_ = TStack_98._8_4_;
    TStack_78.Translation.XY.m128d_f64[1]._4_4_ = TStack_98._12_4_;
    TStack_78.Translation.ZW.m128d_f64[0] = TStack_98._s_0.Z;
    TStack_78.Translation.ZW.m128d_f64[1] = 0.0;
    (**(code **)(**(longlong **)(*(longlong *)param_1 + 0xc0) + 0x340))
              (*(longlong **)(*(longlong *)param_1 + 0xc0),&TStack_78,1);
  }
  return;
}

// Call @ 14caf2420

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGeometrySelectionVisualizationProperties::Initialize'::__l2::<lambda_4>,void,bool_const_&>
::Call(void *param_1,bool *param_2)

{
  *(undefined1 *)(*(longlong *)param_1 + 0x108) = 1;
  return;
}

// Call @ 14caf2440

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FDynamicMeshSpatialWrapper::AppendMesh'::__l7::<lambda_4>,UE::Math::TVector<double>,int,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,int *param_2,TVector<double> *param_3)

{
  TVector<double>_u_0 local_28;
  
  local_28._s_0.X = (param_3->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_3->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  UE::Geometry::TTransformSequence3<double>::TransformNormal
            (*(TTransformSequence3<double> **)param_1,__return_storage_ptr__,
             (TVector<double> *)&local_28._s_0);
  return __return_storage_ptr__;
}

// Call @ 14caf2480

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDragAlignmentBase::AddToGizmo'::__l17::<lambda_4>,bool>::Call(void *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014caf2486. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(longlong **)param_1 + 0x18))();
  return (bool)uVar1;
}

// Call @ 14caf2490

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
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshSceneAdapter::Build'::__l29::<lambda_4>,void,int>::Call
          (void *param_1,int *param_2)

{
  uint uVar1;
  FMeshSceneAdapter *this;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  this = *(FMeshSceneAdapter **)param_1;
  uVar1 = *param_2;
  uVar4 = 0;
  if ((int)uVar1 < (this->SceneActors).ArrayNum) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
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
  UE::Geometry::FMeshSceneAdapter::UpdateActorBounds
            (this,*(FActorAdapter **)
                   ((this->SceneActors).AllocatorInstance.Data + (longlong)(int)uVar1 * 8));
  return;
}

// Call @ 14caf2510

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCollisionPrimitivesMechanic::RebuildDrawables'::__l14::<lambda_4>,void,int,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,int *param_2,TArray<FRenderableLine,TSizedDefaultAllocator<32>_> *param_3)

{
  `UCollisionPrimitivesMechanic::RebuildDrawables'::__l14::<lambda_4>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 14caf2520

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<bool>::TPropertyWatcher<bool><bool,void>'::__l1::<lambda_59_>,bool>
::Call(void *param_1)

{
  return (bool)**(undefined1 **)param_1;
}

// Call @ 14caf2530

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::TMeshWrapperAdapterd<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>'::__l2::<lambda_5>,int>
::Call(void *param_1)

{
  longlong *plVar1;
  FMeshElementContainer *pFVar2;
  
  plVar1 = *(longlong **)(*(longlong *)param_1 + 0x1b0);
  if (*(char *)((longlong)plVar1 + 0xa4) != '\0') {
    return (int)plVar1[0x14];
  }
  pFVar2 = FMeshElementChannels::Get(*(FMeshElementChannels **)(*plVar1 + 0x70),0);
  return (pFVar2->BitArray).NumBits - pFVar2->NumHoles;
}

// Call @ 14caf2580

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::TMeshWrapperAdapterd<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>'::__l2::<lambda_5>,int>
::Call(void *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  
  plVar1 = *(longlong **)(*(longlong *)param_1 + 0x1b0);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    cVar3 = (**(code **)(*(longlong *)(lVar2 + 0x250) + 0x30))();
    if (cVar3 != '\0') {
      return (int)plVar1[0xc];
    }
  }
  return 0;
}

// Call @ 14caf25c0

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FColliderMesh>::TMeshWrapperAdapterd<UE::Geometry::FColliderMesh>'::__l2::<lambda_5>,int>
::Call(void *param_1)

{
  return *(int *)(*(longlong *)(*(longlong *)param_1 + 0x1b0) + 0x18);
}

// Call @ 14caf25e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UCollisionPrimitivesMechanic::RebuildDrawables'::__l19::<lambda_5>::operator()'::__l2::<lambda_5>,void,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_const_&>
::Call(void *param_1,TVector<float> *param_2,TVector<float> *param_3)

{
  int iVar1;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(UCollisionPrimitivesMechanic::FPrimitiveRenderData_&,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&,int,int,UE::Math::TTransform<double>_const_&,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,FColor_const_&)>
  *this;
  FColor *pFVar2;
  double dVar3;
  undefined1 auStackY_f8 [32];
  TVector<double>_u_0 TStack_a8;
  TVector<double>_u_0 TStack_90;
  TTransform<double> TStack_78;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  dVar3 = (double)(float)((ulonglong)*(undefined8 *)&param_3->field0_0x0 >> 0x20);
  this = *(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(UCollisionPrimitivesMechanic::FPrimitiveRenderData_&,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&,int,int,UE::Math::TTransform<double>_const_&,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,FColor_const_&)>
           **)param_1;
  pFVar2 = *(FColor **)((longlong)param_1 + 0x38);
  TStack_a8._8_4_ = SUB84(dVar3,0);
  TStack_a8._0_8_ = (double)(float)*(undefined8 *)&param_3->field0_0x0;
  TStack_a8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  TStack_a8._s_0.Z = (double)(param_3->field0_0x0)._s_0.Z;
  TStack_78.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  TStack_78.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  dVar3 = (double)(float)((ulonglong)*(undefined8 *)&param_2->field0_0x0 >> 0x20);
  TStack_90._8_4_ = SUB84(dVar3,0);
  TStack_90._0_8_ = (double)(float)*(undefined8 *)&param_2->field0_0x0;
  TStack_90._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  TStack_90._s_0.Z = (double)(param_2->field0_0x0)._s_0.Z;
  TStack_78.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  TStack_78.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  TStack_78.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  TStack_78.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  TStack_78.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  TStack_78.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  TStack_78.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  TStack_78.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  TStack_78.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  TStack_78.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  TStack_78.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  TStack_78.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  TStack_78.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&TStack_78,*(TTransform<double> **)((longlong)param_1 + 0x28),
             (TTransform<double> *)(*(longlong *)((longlong)param_1 + 0x30) + 0xc0));
  iVar1 = **(int **)((longlong)param_1 + 0x20);
  **(int **)((longlong)param_1 + 0x20) = iVar1 + 1;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(UCollisionPrimitivesMechanic::FPrimitiveRenderData_&,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&,int,int,UE::Math::TTransform<double>_const_&,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,FColor_const_&)>
  ::operator()(this,*(FPrimitiveRenderData **)((longlong)param_1 + 8),
               *(TArray<FRenderableLine,TSizedDefaultAllocator<32>_> **)((longlong)param_1 + 0x10),
               **(int **)((longlong)param_1 + 0x18),iVar1,&TStack_78,
               (TVector<double> *)&TStack_90._s_0,(TVector<double> *)&TStack_a8._s_0,pFVar2);
  return;
}

// Call @ 14caf25f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshSceneAdapter::Build_FullDecompose'::__l2::<lambda_5>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::FMeshSceneAdapter::Build_FullDecompose'::__l2::<lambda_5>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 14caf2600

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGeometrySelectionVisualizationProperties::Initialize'::__l2::<lambda_5>,void,float_const_&>
::Call(void *param_1,float *param_2)

{
  *(undefined1 *)(*(longlong *)param_1 + 0x108) = 1;
  return;
}

// Call @ 14caf2620

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDragAlignmentBase::AddToGizmo'::__l17::<lambda_5>,bool,UE::Math::TRay<double>_const_&,UE::Math::TVector<double>_&>
::Call(void *param_1,TRay<double> *param_2,TVector<double> *param_3)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)param_1 + 0x38))
                    (*(longlong **)param_1,param_2,param_3,*(undefined8 *)((longlong)param_1 + 8),
                     *(undefined8 *)((longlong)param_1 + 0x18),0);
  return (bool)uVar1;
}

// Call @ 14caf2660

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCollisionPrimitivesMechanic::RebuildDrawables'::__l19::<lambda_5>,void,int,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,int *param_2,TArray<FRenderableLine,TSizedDefaultAllocator<32>_> *param_3)

{
  `UCollisionPrimitivesMechanic::RebuildDrawables'::__l19::<lambda_5>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 14caf2670

double __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Private::ConvertCollisionInternal::ConvertSimpleCollisionToMeshesHelper'::__l63::<lambda_5>,double,UE::Math::TVector<double>_>
::Call(void *param_1,TVector<double> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FLevelSet *this;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  
  pTVar1 = *(TReferenceControllerBase<1> **)(*(longlong *)param_1 + 0x98);
  this = *(FLevelSet **)(*(longlong *)param_1 + 0x90);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this == (FLevelSet *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      dVar3 = (double)(*pcVar2)();
      return dVar3;
    }
  }
  dStack_38 = (param_2->field0_0x0)._s_0.X;
  dStack_30 = (param_2->field0_0x0)._s_0.Y;
  dStack_28 = (param_2->field0_0x0)._s_0.Z;
  dVar3 = ::Chaos::FLevelSet::SignedDistance(this,(TVector<double,3> *)&dStack_38);
  uVar5 = SUB84(dVar3,0) ^ (uint)__xmm_80000000000000008000000000000000;
  uVar6 = (uint)((ulonglong)dVar3 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return (double)CONCAT44(uVar6,uVar5);
}

// Call @ 14caf2680

ESpaceCurveControlPointTransformMode __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<enum_ESpaceCurveControlPointTransformMode>::TPropertyWatcher<enum_ESpaceCurveControlPointTransformMode><enum_ESpaceCurveControlPointTransformMode,void>'::__l1::<lambda_61_>,enum_ESpaceCurveControlPointTransformMode>
::Call(void *param_1)

{
  return **(ESpaceCurveControlPointTransformMode **)param_1;
}

// Call @ 14caf2690

ESpaceCurveControlPointOriginMode __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<enum_ESpaceCurveControlPointOriginMode>::TPropertyWatcher<enum_ESpaceCurveControlPointOriginMode><enum_ESpaceCurveControlPointOriginMode,void>'::__l1::<lambda_63_>,enum_ESpaceCurveControlPointOriginMode>
::Call(void *param_1)

{
  return **(ESpaceCurveControlPointOriginMode **)param_1;
}

// Call @ 14caf26a0

float __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<float>::TPropertyWatcher<float><float,void>'::__l1::<lambda_65_>,float>
::Call(void *param_1)

{
  return **(float **)param_1;
}

// Call @ 14caf26b0

FColor __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<FColor>::TPropertyWatcher<FColor><FColor,void>'::__l1::<lambda_67_>,FColor>
::Call(void *param_1)

{
  undefined8 *in_RDX;
  
  *(undefined4 *)param_1 = *(undefined4 *)*in_RDX;
  return (FColor)SUB84(param_1,0);
}

// Call @ 14caf26d0

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::TMeshWrapperAdapterd<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>'::__l2::<lambda_6>,int>
::Call(void *param_1)

{
  FMeshElementContainer *pFVar1;
  
  pFVar1 = FMeshElementChannels::Get
                     (*(FMeshElementChannels **)
                       (**(longlong **)(*(longlong *)param_1 + 0x1b0) + 0x50),0);
  return (pFVar1->BitArray).NumBits - pFVar1->NumHoles;
}

// Call @ 14caf2700

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::TMeshWrapperAdapterd<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>'::__l2::<lambda_6>,int>
::Call(void *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  
  plVar1 = *(longlong **)(*(longlong *)param_1 + 0x1b0);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    bVar3 = FPositionVertexBuffer::GetAllowCPUAccess((FPositionVertexBuffer *)(lVar2 + 0x188));
    if (bVar3) {
      iVar4 = FStaticMeshLODResources::GetNumVertices((FStaticMeshLODResources *)*plVar1);
      return iVar4;
    }
  }
  return 0;
}

// Call @ 14caf2750

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FColliderMesh>::TMeshWrapperAdapterd<UE::Geometry::FColliderMesh>'::__l2::<lambda_6>,int>
::Call(void *param_1)

{
  return *(int *)(*(longlong *)(*(longlong *)param_1 + 0x1b0) + 8);
}

// Call @ 14caf2770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UCollisionPrimitivesMechanic::RebuildDrawables'::__l19::<lambda_5>::operator()'::__l2::<lambda_6>,void,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_const_&>
::Call(void *param_1,TVector<float> *param_2,TVector<float> *param_3)

{
  int iVar1;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(UCollisionPrimitivesMechanic::FPrimitiveRenderData_&,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&,int,int,UE::Math::TTransform<double>_const_&,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,FColor_const_&)>
  *this;
  FColor *pFVar2;
  double dVar3;
  undefined1 auStackY_f8 [32];
  TVector<double>_u_0 TStack_a8;
  TVector<double>_u_0 TStack_90;
  TTransform<double> TStack_78;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  dVar3 = (double)(float)((ulonglong)*(undefined8 *)&param_3->field0_0x0 >> 0x20);
  this = *(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(UCollisionPrimitivesMechanic::FPrimitiveRenderData_&,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&,int,int,UE::Math::TTransform<double>_const_&,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,FColor_const_&)>
           **)param_1;
  pFVar2 = *(FColor **)((longlong)param_1 + 0x38);
  TStack_a8._8_4_ = SUB84(dVar3,0);
  TStack_a8._0_8_ = (double)(float)*(undefined8 *)&param_3->field0_0x0;
  TStack_a8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  TStack_a8._s_0.Z = (double)(param_3->field0_0x0)._s_0.Z;
  TStack_78.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  TStack_78.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  dVar3 = (double)(float)((ulonglong)*(undefined8 *)&param_2->field0_0x0 >> 0x20);
  TStack_90._8_4_ = SUB84(dVar3,0);
  TStack_90._0_8_ = (double)(float)*(undefined8 *)&param_2->field0_0x0;
  TStack_90._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  TStack_90._s_0.Z = (double)(param_2->field0_0x0)._s_0.Z;
  TStack_78.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  TStack_78.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  TStack_78.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  TStack_78.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  TStack_78.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  TStack_78.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  TStack_78.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  TStack_78.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  TStack_78.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  TStack_78.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  TStack_78.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  TStack_78.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  TStack_78.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&TStack_78,*(TTransform<double> **)((longlong)param_1 + 0x28),
             (TTransform<double> *)(*(longlong *)((longlong)param_1 + 0x30) + 0xc0));
  iVar1 = **(int **)((longlong)param_1 + 0x20);
  **(int **)((longlong)param_1 + 0x20) = iVar1 + 1;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(UCollisionPrimitivesMechanic::FPrimitiveRenderData_&,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&,int,int,UE::Math::TTransform<double>_const_&,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,FColor_const_&)>
  ::operator()(this,*(FPrimitiveRenderData **)((longlong)param_1 + 8),
               *(TArray<FRenderableLine,TSizedDefaultAllocator<32>_> **)((longlong)param_1 + 0x10),
               **(int **)((longlong)param_1 + 0x18),iVar1,&TStack_78,
               (TVector<double> *)&TStack_90._s_0,(TVector<double> *)&TStack_a8._s_0,pFVar2);
  return;
}

// Call @ 14caf2780

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGeometrySelectionVisualizationProperties::Initialize'::__l2::<lambda_6>,void,float_const_&>
::Call(void *param_1,float *param_2)

{
  *(undefined1 *)(*(longlong *)param_1 + 0x108) = 1;
  return;
}

// Call @ 14caf27a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCollisionPrimitivesMechanic::RebuildDrawables'::__l24::<lambda_6>,void,int,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,int *param_2,TArray<FRenderableLine,TSizedDefaultAllocator<32>_> *param_3)

{
  `UCollisionPrimitivesMechanic::RebuildDrawables'::__l24::<lambda_6>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 14caf27b0

ulong64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::TMeshWrapperAdapterd<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>'::__l2::<lambda_7>,unsigned___int64>
::Call(void *param_1)

{
  return 1;
}

// Call @ 14caf27c0

ulong64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::TMeshWrapperAdapterd<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>'::__l2::<lambda_7>,unsigned___int64>
::Call(void *param_1)

{
  return 1;
}

// Call @ 14caf27d0

ulong64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FColliderMesh>::TMeshWrapperAdapterd<UE::Geometry::FColliderMesh>'::__l2::<lambda_7>,unsigned___int64>
::Call(void *param_1)

{
  return 0;
}

// Call @ 14caf27e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshSceneAdapter::Build_FullDecompose'::__l2::<lambda_7>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::FMeshSceneAdapter::Build_FullDecompose'::__l2::<lambda_7>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 14caf27f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGeometrySelectionVisualizationProperties::Initialize'::__l2::<lambda_7>,void,float_const_&>
::Call(void *param_1,float *param_2)

{
  *(undefined1 *)(*(longlong *)param_1 + 0x108) = 1;
  return;
}

// Call @ 14caf2810

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCollisionPrimitivesMechanic::RebuildDrawables'::__l29::<lambda_7>,void,int,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,int *param_2,TArray<FRenderableLine,TSizedDefaultAllocator<32>_> *param_3)

{
  `UCollisionPrimitivesMechanic::RebuildDrawables'::__l29::<lambda_7>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 14caf2820

FIndex3i * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::TMeshWrapperAdapterd<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>'::__l2::<lambda_8>,UE::Geometry::FIndex3i,int>
::Call(FIndex3i *__return_storage_ptr__,void *param_1,int *param_2)

{
  FMeshDescriptionTriangleMeshAdapter::GetTriangle
            (*(FMeshDescriptionTriangleMeshAdapter **)(*(longlong *)param_1 + 0x1b0),
             __return_storage_ptr__,*param_2);
  return __return_storage_ptr__;
}

// Call @ 14caf2850

FIndex3i * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::TMeshWrapperAdapterd<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>'::__l2::<lambda_8>,UE::Geometry::FIndex3i,int>
::Call(FIndex3i *__return_storage_ptr__,void *param_1,int *param_2)

{
  FStaticMeshLODResourcesMeshAdapter::GetTriangle
            (*(FStaticMeshLODResourcesMeshAdapter **)(*(longlong *)param_1 + 0x1b0),
             __return_storage_ptr__,*param_2);
  return __return_storage_ptr__;
}

// Call @ 14caf2880

FIndex3i * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FColliderMesh>::TMeshWrapperAdapterd<UE::Geometry::FColliderMesh>'::__l2::<lambda_8>,UE::Geometry::FIndex3i,int>
::Call(FIndex3i *__return_storage_ptr__,void *param_1,int *param_2)

{
  UE::Geometry::FColliderMesh::GetTriangle
            (*(FColliderMesh **)(*(longlong *)param_1 + 0x1b0),__return_storage_ptr__,*param_2);
  return __return_storage_ptr__;
}

// Call @ 14caf28b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGeometrySelectionVisualizationProperties::Initialize'::__l2::<lambda_8>,void,FColor_const_&>
::Call(void *param_1,FColor *param_2)

{
  *(undefined1 *)(*(longlong *)param_1 + 0x108) = 1;
  return;
}

// Call @ 14caf28d0

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::TMeshWrapperAdapterd<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>'::__l2::<lambda_9>,UE::Math::TVector<double>,int>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,int *param_2)

{
  FMeshDescriptionTriangleMeshAdapter::GetVertex
            (*(FMeshDescriptionTriangleMeshAdapter **)(*(longlong *)param_1 + 0x1b0),
             __return_storage_ptr__,*param_2);
  return __return_storage_ptr__;
}

// Call @ 14caf2900

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::TMeshWrapperAdapterd<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>'::__l2::<lambda_9>,UE::Math::TVector<double>,int>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  plVar4 = *(longlong **)(*(longlong *)param_1 + 0x1b0);
  uVar6 = (ulonglong)(uint)(*(int *)(*plVar4 + 0x1c8) * *param_2);
  lVar5 = *(longlong *)(*plVar4 + 0x1c0);
  fVar1 = *(float *)(uVar6 + 4 + lVar5);
  dVar3 = (double)plVar4[2];
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)*(float *)(uVar6 + lVar5) * (double)plVar4[1];
  fVar2 = *(float *)(uVar6 + 8 + lVar5);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1 * dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)fVar2 * (double)plVar4[3];
  return __return_storage_ptr__;
}

// Call @ 14caf2970

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FColliderMesh>::TMeshWrapperAdapterd<UE::Geometry::FColliderMesh>'::__l2::<lambda_9>,UE::Math::TVector<double>,int>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,int *param_2)

{
  UE::Geometry::FColliderMesh::GetVertex
            (*(FColliderMesh **)(*(longlong *)param_1 + 0x1b0),__return_storage_ptr__,*param_2);
  return __return_storage_ptr__;
}

// Call @ 14caf29a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGeometrySelectionVisualizationProperties::Initialize'::__l2::<lambda_9>,void,FColor_const_&>
::Call(void *param_1,FColor *param_2)

{
  *(undefined1 *)(*(longlong *)param_1 + 0x108) = 1;
  return;
}

// Call @ 14cb76610

TMeshAABBTree3<UE::Geometry::FDynamicMesh3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<std::nullptr_t_(__cdecl*)(void),UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_*>
::Call(void *param_1)

{
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014cb76610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pTVar1 = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)(**(code **)param_1)();
  return pTVar1;
}

// Call @ 14cb76620

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<bool_(__cdecl*)(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,double),bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,double>
::Call(void *param_1,TVector<double> *param_2,TVector<double> *param_3,double *param_4)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014cb76631. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)param_1)(param_2,param_3,*param_4);
  return (bool)uVar1;
}

// Call @ 14cb76640

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::InitializeGeometrySelectionVisualization'::__l48::<lambda_10>,void,int,TArray<FRenderablePoint,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,int *param_2,TArray<FRenderablePoint,TSizedDefaultAllocator<32>_> *param_3)

{
  `UE::Geometry::InitializeGeometrySelectionVisualization'::__l48::<lambda_10>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 14cb76650

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::InitializeGeometrySelectionVisualization'::__l51::<lambda_11>,void,int,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,int *param_2,TArray<FRenderableLine,TSizedDefaultAllocator<32>_> *param_3)

{
  `UE::Geometry::InitializeGeometrySelectionVisualization'::__l51::<lambda_11>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 14cb76660

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FGeometrySet3::ParallelFindAllCurvesSatisfying<`FMeshTopologySelector::FindSelectedElement'::__l8::<lambda_2>,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::FGeometrySet3::
  ParallelFindAllCurvesSatisfying<`FMeshTopologySelector::FindSelectedElement'::__l8::<lambda_2>,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>'
  ::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14cb76670

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FGeometrySet3::ParallelFindAllPointsSatisfying<`FMeshTopologySelector::FindSelectedElement'::__l5::<lambda_1>,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::FGeometrySet3::
  ParallelFindAllPointsSatisfying<`FMeshTopologySelector::FindSelectedElement'::__l5::<lambda_1>,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>'
  ::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14cb76680

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Internal::ParallelLoop<`UE::Internal::CopyCaptureDataToOutputImageFormat'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Internal::
  ParallelLoop<`UE::Internal::CopyCaptureDataToOutputImageFormat'::__l2::<lambda_1>_>'::__l2::
  <lambda_1>::operator()(param_1,(longlong)*param_2);
  return;
}

// Call @ 14cb76690

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FBaseDynamicMeshSelector::AccumulateElementsFromPredicate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,bool,UE::Geometry::FGeoSelectionID>
::Call(void *param_1,FGeoSelectionID *param_2)

{
  undefined1 uVar1;
  undefined4 local_res8 [2];
  FGeoSelectionID local_res10 [3];
  
  local_res10[0] = *param_2;
  local_res8[0] = *(undefined4 *)((longlong)param_1 + 8);
  uVar1 = (*(code *)**(undefined8 **)param_1)((*(undefined8 **)param_1)[1],local_res8,local_res10);
  return (bool)uVar1;
}

// Call @ 14cb766d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FDynamicMeshPolygroupTransformer::BeginTransform'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,unsigned___int64,UE::Math::TVector<double>_const_&>
::Call(void *param_1,ulong64 *param_2,TVector<double> *param_3)

{
  undefined4 local_res8 [2];
  int local_res10 [6];
  
  local_res8[0] = (undefined4)*param_2;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
            (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)param_1,local_res10,
             (bool *)local_res8);
  return;
}

// Call @ 14cb76700

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UPolygonSelectionMechanic::FloodSelection'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,bool,UE::Geometry::FGeoSelectionID>
::Call(void *param_1,FGeoSelectionID *param_2)

{
  return true;
}

// Call @ 14cb76710

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UPolygonSelectionMechanic::GrowSelection'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,bool,UE::Geometry::FGeoSelectionID>
::Call(void *param_1,FGeoSelectionID *param_2)

{
  return true;
}

// Call @ 14cb76720

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UPolygonSelectionMechanic::ShrinkSelection'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,bool,UE::Geometry::FGeoSelectionID>
::Call(void *param_1,FGeoSelectionID *param_2)

{
  return true;
}

// Call @ 14cb76730

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FDynamicMeshPolygroupTransformer::UpdateTransform'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,UE::Math::TVector<double>,UE::Geometry::FDynamicMesh3_*,int>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,FDynamicMesh3 **param_2,int *param_3)

{
  ``FDynamicMeshPolygroupTransformer::UpdateTransform'::__l2::<lambda_1>::operator()'::__l2::
  <lambda_1>::operator()(param_1,__return_storage_ptr__,*param_2,*param_3);
  return __return_storage_ptr__;
}

// Call @ 14cb76760

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FBaseDynamicMeshSelector::AccumulateSelectionBounds'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>,void,unsigned___int64,UE::Math::TVector<double>_const_&>
::Call(void *param_1,ulong64 *param_2,TVector<double> *param_3)

{
  double dVar1;
  double *pdVar2;
  
  pdVar2 = *(double **)param_1;
  dVar1 = (param_3->field0_0x0)._s_0.X;
  if (dVar1 < *pdVar2) {
    *pdVar2 = dVar1;
  }
  dVar1 = (param_3->field0_0x0)._s_0.X;
  if (pdVar2[3] <= dVar1 && dVar1 != pdVar2[3]) {
    pdVar2[3] = dVar1;
  }
  dVar1 = (param_3->field0_0x0)._s_0.Y;
  if (dVar1 < pdVar2[1]) {
    pdVar2[1] = dVar1;
  }
  dVar1 = (param_3->field0_0x0)._s_0.Y;
  if (pdVar2[4] <= dVar1 && dVar1 != pdVar2[4]) {
    pdVar2[4] = dVar1;
  }
  dVar1 = (param_3->field0_0x0)._s_0.Z;
  if (dVar1 < pdVar2[2]) {
    pdVar2[2] = dVar1;
  }
  dVar1 = (param_3->field0_0x0)._s_0.Z;
  if (pdVar2[5] <= dVar1 && dVar1 != pdVar2[5]) {
    pdVar2[5] = dVar1;
  }
  **(int **)((longlong)param_1 + 8) = **(int **)((longlong)param_1 + 8) + 1;
  return;
}

// Call @ 14cb767e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::InitializeGeometrySelectionVisualization'::__l48::<lambda_10>::operator()'::__l2::<lambda_1>,void,int,UE::Math::TVector<double>_const_&>
::Call(void *param_1,int *param_2,TVector<double> *param_3)

{
  ``UE::Geometry::InitializeGeometrySelectionVisualization'::__l48::<lambda_10>::operator()'::__l2::
  <lambda_1>::operator()(param_1,*param_2,param_3);
  return;
}

// Call @ 14cb767f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FBaseDynamicMeshSelector::AccumulateSelectionBounds'::__l7::<lambda_2>::operator()'::__l2::<lambda_1>,void,unsigned___int64,UE::Math::TVector<double>_const_&>
::Call(void *param_1,ulong64 *param_2,TVector<double> *param_3)

{
  double dVar1;
  double *pdVar2;
  
  pdVar2 = *(double **)param_1;
  dVar1 = (param_3->field0_0x0)._s_0.X;
  if (dVar1 < *pdVar2) {
    *pdVar2 = dVar1;
  }
  dVar1 = (param_3->field0_0x0)._s_0.X;
  if (pdVar2[3] <= dVar1 && dVar1 != pdVar2[3]) {
    pdVar2[3] = dVar1;
  }
  dVar1 = (param_3->field0_0x0)._s_0.Y;
  if (dVar1 < pdVar2[1]) {
    pdVar2[1] = dVar1;
  }
  dVar1 = (param_3->field0_0x0)._s_0.Y;
  if (pdVar2[4] <= dVar1 && dVar1 != pdVar2[4]) {
    pdVar2[4] = dVar1;
  }
  dVar1 = (param_3->field0_0x0)._s_0.Z;
  if (dVar1 < pdVar2[2]) {
    pdVar2[2] = dVar1;
  }
  dVar1 = (param_3->field0_0x0)._s_0.Z;
  if (pdVar2[5] <= dVar1 && dVar1 != pdVar2[5]) {
    pdVar2[5] = dVar1;
  }
  **(int **)((longlong)param_1 + 8) = **(int **)((longlong)param_1 + 8) + 1;
  return;
}

// Call @ 14cb76870

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::InitializeGeometrySelectionVisualization'::__l22::<lambda_4>::operator()'::__l2::<lambda_1>,void,int,UE::Math::TVector<double>_const_&>
::Call(void *param_1,int *param_2,TVector<double> *param_3)

{
  ``UE::Geometry::InitializeGeometrySelectionVisualization'::__l22::<lambda_4>::operator()'::__l2::
  <lambda_1>::operator()(param_1,*param_2,param_3);
  return;
}

// Call @ 14cb76880

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::InitializeGeometrySelectionVisualization'::__l26::<lambda_5>::operator()'::__l2::<lambda_1>,void,int,UE::Geometry::TSegment3<double>_const_&>
::Call(void *param_1,int *param_2,TSegment3<double> *param_3)

{
  ``UE::Geometry::InitializeGeometrySelectionVisualization'::__l26::<lambda_5>::operator()'::__l2::
  <lambda_1>::operator()(param_1,*param_2,param_3);
  return;
}

// Call @ 14cb76890

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::InitializeGeometrySelectionVisualization'::__l30::<lambda_6>::operator()'::__l2::<lambda_1>,void,int,UE::Geometry::TTriangle3<double>_const_&>
::Call(void *param_1,int *param_2,TTriangle3<double> *param_3)

{
  ``UE::Geometry::InitializeGeometrySelectionVisualization'::__l30::<lambda_6>::operator()'::__l2::
  <lambda_1>::operator()(param_1,*param_2,param_3);
  return;
}

// Call @ 14cb768a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::InitializeGeometrySelectionVisualization'::__l37::<lambda_7>::operator()'::__l2::<lambda_1>,void,int,UE::Math::TVector<double>_const_&>
::Call(void *param_1,int *param_2,TVector<double> *param_3)

{
  ``UE::Geometry::InitializeGeometrySelectionVisualization'::__l37::<lambda_7>::operator()'::__l2::
  <lambda_1>::operator()(param_1,*param_2,param_3);
  return;
}

// Call @ 14cb768b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::InitializeGeometrySelectionVisualization'::__l41::<lambda_8>::operator()'::__l2::<lambda_1>,void,int,UE::Geometry::TSegment3<double>_const_&>
::Call(void *param_1,int *param_2,TSegment3<double> *param_3)

{
  ``UE::Geometry::InitializeGeometrySelectionVisualization'::__l41::<lambda_8>::operator()'::__l2::
  <lambda_1>::operator()(param_1,*param_2,param_3);
  return;
}

// Call @ 14cb768c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::InitializeGeometrySelectionVisualization'::__l45::<lambda_9>::operator()'::__l2::<lambda_1>,void,int,UE::Geometry::TTriangle3<double>_const_&>
::Call(void *param_1,int *param_2,TTriangle3<double> *param_3)

{
  ``UE::Geometry::InitializeGeometrySelectionVisualization'::__l45::<lambda_9>::operator()'::__l2::
  <lambda_1>::operator()(param_1,*param_2,param_3);
  return;
}

// Call @ 14cb768d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ToolSelectionUtil::AccumulateSelectionElements'::__l2::<lambda_1>,void,int,UE::Math::TVector<double>_const_&>
::Call(void *param_1,int *param_2,TVector<double> *param_3)

{
  `ToolSelectionUtil::AccumulateSelectionElements'::__l2::<lambda_1>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 14cb768e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FBasicDynamicMeshSelectionTransformer::BeginTransform'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  FGeometrySelection *pFVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  FDynamicMeshAttributeSet *pFVar8;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTVar9;
  code *pcVar10;
  longlong *plVar11;
  bool bVar12;
  int iVar13;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  ForElementType<FSetElementId> FVar18;
  int iVar19;
  ForAnyElementType *pFVar20;
  uint uVar21;
  uint uVar22;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar23;
  uint *puVar24;
  int iVar25;
  TBitArray<FDefaultBitArrayAllocator> *pTVar26;
  undefined1 auStackY_2c8 [32];
  undefined1 uStack_278;
  undefined1 uStack_277;
  undefined1 auStack_276 [2];
  undefined8 uStack_274;
  int iStack_26c;
  undefined8 uStack_268;
  uint auStack_260 [2];
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  int iStack_240;
  int iStack_23c;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  longlong *plStack_220;
  longlong *plStack_218;
  int iStack_210;
  uint uStack_20c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_208;
  undefined4 uStack_200;
  int iStack_1fc;
  int iStack_1f8;
  undefined4 uStack_1f4;
  int iStack_1f0;
  undefined4 uStack_1ec;
  longlong *plStack_1e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1e0;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined8 *puStack_1b0;
  code *pcStack_1a8;
  undefined8 *puStack_1a0;
  int *piStack_198;
  int iStack_190;
  undefined4 uStack_18c;
  code *pcStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  undefined8 *puStack_170;
  code *pcStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  FDynamicMesh3 *pFStack_150;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTStack_148;
  TArray<int,TSizedDefaultAllocator<32>_> TStack_140;
  TArrayView<int_const_,int> TStack_128;
  TArray<int,TSizedDefaultAllocator<32>_> TStack_118;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> TStack_108;
  undefined4 uStack_9c;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> TStack_98;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  pFVar5 = *(FGeometrySelection **)param_1;
  if (pFVar5->TopologyType == Polygroup) {
    puStack_1b0 = &uStack_238;
    pcStack_1b8 = TFunctionRefCaller<``FBasicDynamicMeshSelectionTransformer::BeginTransform'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,void,unsigned___int64,UE::Math::TVector<double>_const_&>
                  ::Call;
    uStack_238 = *(undefined8 *)((longlong)param_1 + 0x10);
    UE::Geometry::EnumeratePolygroupSelectionVertices
              (pFVar5,param_2,(FGroupTopology *)**(undefined8 **)((longlong)param_1 + 8),
               &UE::Math::TTransform<double>::Identity,
               (TFunctionRef<void___cdecl(unsigned___int64,UE::Math::TVector<double>_const_&)> *)
               &pcStack_1b8);
  }
  else {
    puStack_1a0 = &uStack_230;
    pcStack_1a8 = TFunctionRefCaller<``FBasicDynamicMeshSelectionTransformer::BeginTransform'::__l2::<lambda_1>::operator()'::__l7::<lambda_2>,void,unsigned___int64,UE::Math::TVector<double>_const_&>
                  ::Call;
    uStack_230 = *(undefined8 *)((longlong)param_1 + 0x10);
    UE::Geometry::EnumerateTriangleSelectionVertices
              (pFVar5,param_2,(TTransform<double> *)0x0,
               (TFunctionRef<void___cdecl(unsigned___int64,UE::Math::TVector<double>_const_&)> *)
               &pcStack_1a8);
  }
  pTVar14 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array
                      (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)
                        ((longlong)param_1 + 0x10),&TStack_140);
  lVar17 = *(longlong *)((longlong)param_1 + 0x18);
  pTVar23 = (TArray<int,TSizedDefaultAllocator<32>_> *)(lVar17 + 0x48);
  if (pTVar23 != pTVar14) {
    pFVar6 = (pTVar23->AllocatorInstance).Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pTVar23->AllocatorInstance).Data = (pTVar14->AllocatorInstance).Data;
    (pTVar14->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)(lVar17 + 0x50) = pTVar14->ArrayNum;
    *(int *)(lVar17 + 0x54) = pTVar14->ArrayMax;
    pTVar14->ArrayNum = 0;
    pTVar14->ArrayMax = 0;
  }
  if (TStack_140.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_140.AllocatorInstance.Data);
  }
  lVar17 = *(longlong *)((longlong)param_1 + 0x18);
  uVar22 = *(uint *)(lVar17 + 0x50);
  if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar22);
  }
  if (*(int *)(lVar17 + 100) < (int)uVar22) {
    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar22,(ForAnyElementType *)(lVar17 + 0x58),*(int *)(lVar17 + 0x60),
               (int *)(lVar17 + 100));
  }
  lVar17 = *(longlong *)((longlong)param_1 + 0x18);
  puVar24 = *(uint **)(lVar17 + 0x48);
  iVar25 = *(int *)(lVar17 + 0x50);
  puVar2 = puVar24 + iVar25;
  while( true ) {
    if (*(int *)(lVar17 + 0x50) != iVar25) {
      uStack_278 = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&uStack_278);
    }
    if (puVar24 == puVar2) break;
    lVar16 = *(longlong *)((longlong)param_1 + 0x18);
    uVar15 = (ulonglong)(*puVar24 & 0x1ff);
    lVar7 = *(longlong *)
             ((param_2->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(*puVar24 >> 9) * 8);
    puVar3 = (undefined8 *)(lVar7 + uVar15 * 0x18);
    uStack_258 = *puVar3;
    uStack_250 = puVar3[1];
    uStack_248 = *(undefined8 *)(lVar7 + 0x10 + uVar15 * 0x18);
    if (((*(undefined8 **)(lVar16 + 0x58) <= &uStack_258) &&
        (&uStack_258 < *(undefined8 **)(lVar16 + 0x58) + (longlong)*(int *)(lVar16 + 100) * 3)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar13 = *(int *)(lVar16 + 0x60);
    if (iVar13 == *(int *)(lVar16 + 100)) {
      iVar13 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,(ForAnyElementType *)(lVar16 + 0x58),(int *)(lVar16 + 100));
    }
    puVar24 = puVar24 + 1;
    *(int *)(lVar16 + 0x60) = iVar13 + 1;
    lVar16 = *(longlong *)(lVar16 + 0x58);
    puVar3 = (undefined8 *)(lVar16 + (longlong)iVar13 * 0x18);
    *puVar3 = uStack_258;
    puVar3[1] = uStack_250;
    *(undefined8 *)(lVar16 + 0x10 + (longlong)iVar13 * 0x18) = uStack_248;
  }
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)((longlong)param_1 + 0x18) + 0x118),
             *(int *)(*(longlong *)((longlong)param_1 + 0x18) + 0x50),Default);
  lVar17 = *(longlong *)((longlong)param_1 + 0x18);
  piStack_198 = *(int **)(lVar17 + 0x48);
  iStack_190 = *(int *)(lVar17 + 0x50);
  if ((iStack_190 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  TStack_128._12_4_ = uStack_18c;
  TStack_128.ArrayNum = iStack_190;
  TStack_128.DataPtr = piStack_198;
  UE::Geometry::VertexToTriangleOneRing
            (param_2,&TStack_128,
             (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(lVar17 + 0x68));
  lVar17 = *(longlong *)((longlong)param_1 + 0x18);
  iVar25 = 0;
  *(undefined4 *)(lVar17 + 0x110) = 0;
  if (*(int *)(lVar17 + 0x114) < 0) {
    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)(lVar17 + 0x108),0,(int *)(lVar17 + 0x114));
  }
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
             (*(longlong *)((longlong)param_1 + 0x18) + 0xb8));
  pFVar8 = (param_2->AttributeSet).Ptr;
  if (((pFVar8 != (FDynamicMeshAttributeSet *)0x0) && (0 < (pFVar8->NormalLayers).Array.ArrayNum))
     && (pFVar6 = (pFVar8->NormalLayers).Array.AllocatorInstance.Data, *(longlong *)pFVar6 != 0)) {
    lVar17 = *(longlong *)((longlong)param_1 + 0x18);
    pTVar9 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)pFVar6;
    TStack_108.Elements._0_8_ = 0;
    TStack_108.Elements._8_8_ = 0;
    TStack_108.Elements._32_8_ = 0;
    TStack_108.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
    TStack_108.Elements._48_8_ = _UNK_150631d98;
    TStack_108.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    TStack_108.HashSize = 0;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
              (&TStack_108,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(lVar17 + 0x68))
    ;
    UE::Geometry::
    TrianglesToOverlayElements<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
              (pTVar9,&TStack_108,
               (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(lVar17 + 0xb8));
    pTVar14 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array
                        ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                         (*(longlong *)((longlong)param_1 + 0x18) + 0xb8),&TStack_118);
    lVar17 = *(longlong *)((longlong)param_1 + 0x18);
    pTVar23 = (TArray<int,TSizedDefaultAllocator<32>_> *)(lVar17 + 0x108);
    if (pTVar23 != pTVar14) {
      pFVar6 = (pTVar23->AllocatorInstance).Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      (pTVar23->AllocatorInstance).Data = (pTVar14->AllocatorInstance).Data;
      (pTVar14->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      *(int *)(lVar17 + 0x110) = pTVar14->ArrayNum;
      *(int *)(lVar17 + 0x114) = pTVar14->ArrayMax;
      pTVar14->ArrayNum = 0;
      pTVar14->ArrayMax = 0;
    }
    if (TStack_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_118.AllocatorInstance.Data);
    }
  }
  lVar17 = *(longlong *)((longlong)param_1 + 0x18);
  *(undefined4 *)(lVar17 + 0x138) = 0;
  if (*(int *)(lVar17 + 0x13c) < 0) {
    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)(lVar17 + 0x130),0,(int *)(lVar17 + 0x13c));
  }
  lVar17 = *(longlong *)((longlong)param_1 + 0x18);
  *(undefined4 *)(lVar17 + 0x148) = 0;
  if (*(int *)(lVar17 + 0x14c) < 0) {
    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)(lVar17 + 0x140),0,(int *)(lVar17 + 0x14c));
  }
  puStack_180 = &uStack_277;
  pTStack_148 = &TStack_98;
  pcStack_188 = TFunctionRefCaller<``FBasicDynamicMeshSelectionTransformer::BeginTransform'::__l2::<lambda_1>::operator()'::__l2::<lambda_5>,void,int,UE::Geometry::TTriangle3<double>_const_&>
                ::Call;
  puStack_170 = &uStack_158;
  uStack_228 = *(undefined8 *)((longlong)param_1 + 0x18);
  puStack_160 = &uStack_228;
  pcStack_178 = TFunctionRefCaller<``FBasicDynamicMeshSelectionTransformer::BeginTransform'::__l2::<lambda_1>::operator()'::__l2::<lambda_4>,void,int,UE::Geometry::TSegment3<double>_const_&>
                ::Call;
  pcStack_168 = TFunctionRefCaller<``FBasicDynamicMeshSelectionTransformer::BeginTransform'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>,void,int,UE::Math::TVector<double>_const_&>
                ::Call;
  TStack_98.Elements._0_8_ = 0;
  TStack_98.Elements._8_8_ = 0;
  TStack_98.Elements._32_8_ = 0;
  TStack_98.Elements._40_4_ = 0;
  TStack_98.Elements._44_4_ = 0x80;
  TStack_98.Elements._48_4_ = 0xffffffff;
  TStack_98.Elements._52_4_ = 0;
  TStack_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  TStack_98.HashSize = 0;
  uStack_277 = 0;
  uStack_158 = uStack_228;
  pFStack_150 = param_2;
  UE::Geometry::EnumerateTriangleSelectionElements
            (*(FGeometrySelection **)param_1,param_2,
             (TFunctionRef<void___cdecl(int,UE::Math::TVector<double>_const_&)> *)&pcStack_168,
             (TFunctionRef<void___cdecl(int,UE::Geometry::TSegment3<double>_const_&)> *)&pcStack_178
             ,(TFunctionRef<void___cdecl(int,UE::Geometry::TTriangle3<double>_const_&)> *)
              &pcStack_188,(TTransform<double> *)0x0,true);
  lVar17 = *(longlong *)((longlong)param_1 + 0x18);
  *(undefined4 *)(lVar17 + 0x158) = 0;
  if (*(int *)(lVar17 + 0x15c) < 0) {
    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)(lVar17 + 0x150),0,(int *)(lVar17 + 0x15c));
  }
  lVar17 = *(longlong *)((longlong)param_1 + 0x18);
  iStack_1f8 = 0;
  uStack_20c = 1;
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar17 + 0x78);
  iVar13 = *(int *)(lVar17 + 0x90);
  plStack_220 = (longlong *)(lVar17 + 0x68);
  iStack_1fc = iVar25;
  if (iVar13 != 0) {
    pTVar26 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar17 + 0x88);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar17 + 0x88) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar26 = pTVar1;
    }
    uVar22 = *(uint *)(pTVar26->AllocatorInstance).InlineData;
    iVar25 = 0;
    while (uVar22 == 0) {
      lVar16 = (longlong)iVar25;
      iStack_1f8 = iStack_1f8 + 0x20;
      iVar25 = iVar25 + 1;
      iStack_1fc = iVar13;
      if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar25) goto LAB_14cb6797e;
      uVar22 = *(uint *)((pTVar26->AllocatorInstance).InlineData + lVar16 * 4 + 4);
    }
    uStack_20c = -uVar22 & uVar22;
    uVar15 = (ulonglong)uStack_20c * 2 + 1;
    lVar16 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iStack_240 = (int)lVar16;
    iStack_1fc = iStack_1f8 + -1 + iStack_240;
    if (iVar13 < iStack_1fc) {
      iStack_1fc = iVar13;
    }
  }
LAB_14cb6797e:
  uStack_1f4 = uStack_9c;
  iStack_1f0 = *(int *)(lVar17 + 0x70) - *(int *)(lVar17 + 0x9c);
  uVar22 = *(uint *)(lVar17 + 0x90);
  uStack_200 = 0xffffffff;
  TStack_1e0._padding_ = CONCAT44(uStack_20c,iVar25);
  uVar21 = uVar22 & 0xffffffe0;
  TStack_1e0.CurrentBitIndex = iStack_1fc;
  TStack_1e0.UnvisitedBitMask = 0xffffffff;
  iVar19 = (int)uVar22 >> 5;
  TStack_1e0._28_4_ = uStack_9c;
  TStack_1e0.BaseBitIndex = iStack_1f8;
  uStack_1c0 = CONCAT44(uStack_1ec,iStack_1f0);
  plStack_218 = plStack_220;
  iStack_210 = iVar25;
  pTStack_208 = pTVar1;
  plStack_1e8 = plStack_220;
  TStack_1e0.Array = pTVar1;
  if ((((int)uVar22 < 0) || (iVar13 < (int)uVar22)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar4 = *(uint *)(lVar17 + 0x90);
  if (uVar22 != uVar4) {
    pTVar26 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar17 + 0x88);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar17 + 0x88) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar26 = pTVar1;
    }
    uVar22 = -1 << ((byte)uVar22 & 0x1f) &
             *(uint *)((pTVar26->AllocatorInstance).InlineData + (longlong)iVar19 * 4);
    while (uVar22 == 0) {
      lVar17 = (longlong)iVar19;
      uVar21 = uVar21 + 0x20;
      iVar19 = iVar19 + 1;
      uVar22 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_14cb67a80;
      uVar22 = *(uint *)((pTVar26->AllocatorInstance).InlineData + lVar17 * 4 + 4);
    }
    uVar15 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
    lVar17 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    iStack_23c = (int)lVar17;
    uVar22 = (uVar21 - 1) + iStack_23c;
    if ((int)uVar4 < (int)uVar22) {
      uVar22 = uVar4;
    }
  }
LAB_14cb67a80:
  do {
    plVar11 = plStack_1e8;
    if ((int)plStack_1e8[1] - *(int *)((longlong)plStack_1e8 + 0x34) != (int)uStack_1c0) {
      auStack_276[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStack_276);
    }
    if (((TStack_1e0.CurrentBitIndex == uVar22) && (TStack_1e0.Array == pTVar1)) &&
       (plVar11 == plStack_220)) {
      TStack_98.HashSize = 0;
      if (TStack_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)TStack_98.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&TStack_98.Elements);
      return;
    }
    uVar21 = *(uint *)(*plVar11 + (longlong)TStack_1e0.CurrentBitIndex * 0xc);
    uVar15 = (ulonglong)(uVar21 & 0x1ff);
    lVar17 = *(longlong *)
              ((param_2->TriangleEdges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar21 >> 9) * 8
              );
    uStack_268 = *(undefined8 *)(lVar17 + uVar15 * 0xc);
    uVar21 = *(uint *)(lVar17 + 8 + uVar15 * 0xc);
    auStack_260[0] = uVar21;
    if (TStack_98.Elements._8_4_ != TStack_98.Elements._52_4_) {
      FVar18 = (ForElementType<FSetElementId>)&TStack_98.Hash;
      if (TStack_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar18 = TStack_98.Hash.SecondaryData;
      }
      for (iVar25 = *(int *)((longlong)FVar18 +
                            (ulonglong)(TStack_98.HashSize - 1U & (uint)uStack_268) * 4);
          iVar25 != -1; iVar25 = *(int *)(TStack_98.Elements._0_8_ + 4 + (longlong)iVar25 * 0xc)) {
        if (*(uint *)(TStack_98.Elements._0_8_ + (longlong)iVar25 * 0xc) == (uint)uStack_268)
        goto LAB_14cb67c66;
      }
    }
    lVar17 = *(longlong *)((longlong)param_1 + 0x18);
    pFVar20 = (ForAnyElementType *)(lVar17 + 0x150);
    uStack_274 = *(undefined8 *)
                  (*(longlong *)
                    ((param_2->Edges).Blocks.AllocatorInstance.Data +
                    (ulonglong)((uint)uStack_268 >> 9) * 8) +
                  (ulonglong)((uint)uStack_268 & 0x1ff) * 0x10);
    if (((pFVar20->Data <= (FScriptContainerElement *)&uStack_274) &&
        ((FScriptContainerElement *)&uStack_274 <
         pFVar20->Data + (longlong)*(int *)(lVar17 + 0x15c) * 8)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar25 = *(int *)(lVar17 + 0x158);
    if (iVar25 == *(int *)(lVar17 + 0x15c)) {
      iVar25 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,pFVar20,(int *)(lVar17 + 0x15c));
    }
    *(int *)(lVar17 + 0x158) = iVar25 + 1;
    *(undefined8 *)(pFVar20->Data + (longlong)iVar25 * 8) = uStack_274;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&TStack_98,&iStack_26c,(bool *)&uStack_268);
LAB_14cb67c66:
    if (TStack_98.Elements._8_4_ != TStack_98.Elements._52_4_) {
      FVar18 = (ForElementType<FSetElementId>)&TStack_98.Hash;
      if (TStack_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar18 = TStack_98.Hash.SecondaryData;
      }
      for (iVar25 = *(int *)((longlong)FVar18 +
                            (ulonglong)(TStack_98.HashSize - 1U & uStack_268._4_4_) * 4);
          iVar25 != -1; iVar25 = *(int *)(TStack_98.Elements._0_8_ + 4 + (longlong)iVar25 * 0xc)) {
        iVar13 = TStack_98.Elements._8_4_;
        if (*(uint *)(TStack_98.Elements._0_8_ + (longlong)iVar25 * 0xc) == uStack_268._4_4_)
        goto LAB_14cb67db4;
      }
    }
    lVar17 = *(longlong *)((longlong)param_1 + 0x18);
    pFVar20 = (ForAnyElementType *)(lVar17 + 0x150);
    uStack_274 = *(undefined8 *)
                  (*(longlong *)
                    ((param_2->Edges).Blocks.AllocatorInstance.Data +
                    (ulonglong)(uStack_268._4_4_ >> 9) * 8) +
                  (ulonglong)(uStack_268._4_4_ & 0x1ff) * 0x10);
    if (((pFVar20->Data <= (FScriptContainerElement *)&uStack_274) &&
        ((FScriptContainerElement *)&uStack_274 <
         pFVar20->Data + (longlong)*(int *)(lVar17 + 0x15c) * 8)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar25 = *(int *)(lVar17 + 0x158);
    if (iVar25 == *(int *)(lVar17 + 0x15c)) {
      iVar25 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,pFVar20,(int *)(lVar17 + 0x15c));
    }
    *(int *)(lVar17 + 0x158) = iVar25 + 1;
    *(undefined8 *)(pFVar20->Data + (longlong)iVar25 * 8) = uStack_274;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&TStack_98,&iStack_26c,(bool *)((longlong)&uStack_268 + 4));
    iVar13 = TStack_98.Elements._8_4_;
LAB_14cb67db4:
    if (iVar13 != TStack_98.Elements._52_4_) {
      FVar18 = (ForElementType<FSetElementId>)&TStack_98.Hash;
      if (TStack_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar18 = TStack_98.Hash.SecondaryData;
      }
      for (iVar25 = *(int *)((longlong)FVar18 + (ulonglong)(TStack_98.HashSize - 1U & uVar21) * 4);
          iVar25 != -1; iVar25 = *(int *)(TStack_98.Elements._0_8_ + 4 + (longlong)iVar25 * 0xc)) {
        if (*(uint *)(TStack_98.Elements._0_8_ + (longlong)iVar25 * 0xc) == uVar21)
        goto LAB_14cb67ee0;
      }
    }
    lVar17 = *(longlong *)((longlong)param_1 + 0x18);
    pFVar20 = (ForAnyElementType *)(lVar17 + 0x150);
    uStack_274 = *(undefined8 *)
                  (*(longlong *)
                    ((param_2->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar21 >> 9) * 8)
                  + (ulonglong)(auStack_260[0] & 0x1ff) * 0x10);
    if (((pFVar20->Data <= (FScriptContainerElement *)&uStack_274) &&
        ((FScriptContainerElement *)&uStack_274 <
         pFVar20->Data + (longlong)*(int *)(lVar17 + 0x15c) * 8)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar25 = *(int *)(lVar17 + 0x158);
    if (iVar25 == *(int *)(lVar17 + 0x15c)) {
      iVar25 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,pFVar20,(int *)(lVar17 + 0x15c));
    }
    *(int *)(lVar17 + 0x158) = iVar25 + 1;
    *(undefined8 *)(pFVar20->Data + (longlong)iVar25 * 8) = uStack_274;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&TStack_98,&iStack_26c,(bool *)auStack_260);
LAB_14cb67ee0:
    TStack_1e0.UnvisitedBitMask = TStack_1e0.UnvisitedBitMask & ~TStack_1e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1e0);
  } while( true );
}

// Call @ 14cb768f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDynamicMeshPolygroupTransformer::BeginTransform'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong lVar10;
  longlong lVar11;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar12;
  ulonglong uVar13;
  undefined1 auStackX_8 [8];
  undefined1 auStackX_10 [8];
  uint auStackX_18 [4];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined8 *puStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  longlong lStack_d0;
  uint *puStack_c8;
  undefined8 uStack_c0;
  FDynamicMesh3 *pFStack_b8;
  code *pcStack_b0;
  undefined1 *puStack_a8;
  code *pcStack_a0;
  undefined8 *puStack_98;
  code *pcStack_90;
  undefined8 *puStack_88;
  longlong lStack_80;
  FDynamicMesh3 *pFStack_78;
  TArray<int,TSizedDefaultAllocator<32>_> TStack_70;
  TArray<int,TSizedDefaultAllocator<32>_> aTStack_60 [2];
  
  UE::Geometry::FGroupTopologyDeformer::Initialize
            (*(FGroupTopologyDeformer **)(*(longlong *)param_1 + 0x1b8),param_2,
             (FGroupTopology *)**(undefined8 **)((longlong)param_1 + 8));
  (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x1b8) + 0x20))
            (*(longlong **)(*(longlong *)param_1 + 0x1b8),*(undefined8 *)((longlong)param_1 + 0x10))
  ;
  uStack_108 = *(undefined8 *)((longlong)param_1 + 0x18);
  puStack_e8 = &uStack_108;
  pcStack_f0 = TFunctionRefCaller<``FDynamicMeshPolygroupTransformer::BeginTransform'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,unsigned___int64,UE::Math::TVector<double>_const_&>
               ::Call;
  UE::Geometry::EnumeratePolygroupSelectionVertices
            (*(FGeometrySelection **)((longlong)param_1 + 0x10),param_2,
             (FGroupTopology *)**(undefined8 **)((longlong)param_1 + 8),
             &UE::Math::TTransform<double>::Identity,
             (TFunctionRef<void___cdecl(unsigned___int64,UE::Math::TVector<double>_const_&)> *)
             &pcStack_f0);
  pTVar9 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array
                     (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)
                       ((longlong)param_1 + 0x18),&TStack_70);
  lVar3 = *(longlong *)param_1;
  pTVar12 = (TArray<int,TSizedDefaultAllocator<32>_> *)(lVar3 + 0x48);
  if (pTVar12 != pTVar9) {
    pFVar4 = (pTVar12->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar12->AllocatorInstance).Data = (pTVar9->AllocatorInstance).Data;
    (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)(lVar3 + 0x50) = pTVar9->ArrayNum;
    *(int *)(lVar3 + 0x54) = pTVar9->ArrayMax;
    pTVar9->ArrayNum = 0;
    pTVar9->ArrayMax = 0;
  }
  if (TStack_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_70.AllocatorInstance.Data);
  }
  iVar2 = *(int *)(*(longlong *)param_1 + 0x50);
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)param_1 + 0x58),iVar2,Default);
  auStackX_18[0] = 0;
  if (0 < iVar2) {
    do {
      uVar8 = auStackX_18[0];
      lVar3 = *(longlong *)param_1;
      uVar7 = 0;
      if ((int)auStackX_18[0] < *(int *)(lVar3 + 0x50)) {
        uVar7 = ~auStackX_18[0] >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar7 = auStackX_18[0];
      lVar10 = *(longlong *)param_1;
      uVar8 = *(uint *)(*(longlong *)(lVar3 + 0x48) + (longlong)(int)uVar8 * 4);
      uVar13 = (ulonglong)(uVar8 & 0x1ff);
      lVar3 = *(longlong *)
               ((param_2->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar8 >> 9) * 8);
      puVar1 = (undefined4 *)(lVar3 + uVar13 * 0x18);
      uStack_e0 = *puVar1;
      uStack_dc = puVar1[1];
      uStack_d8 = puVar1[2];
      uStack_d4 = puVar1[3];
      uStack_100 = *(undefined8 *)(lVar3 + 0x10 + uVar13 * 0x18);
      uVar8 = 0;
      if ((int)auStackX_18[0] < *(int *)(lVar10 + 0x60)) {
        uVar8 = ~auStackX_18[0] >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar3 = *(longlong *)(lVar10 + 0x58);
      puVar1 = (undefined4 *)(lVar3 + (longlong)(int)uVar7 * 0x18);
      *puVar1 = uStack_e0;
      puVar1[1] = uStack_dc;
      puVar1[2] = uStack_d8;
      puVar1[3] = uStack_d4;
      *(undefined8 *)(lVar3 + 0x10 + (longlong)(int)uVar7 * 0x18) = uStack_100;
      lVar10 = (longlong)(int)auStackX_18[0];
      lVar3 = *(longlong *)param_1;
      uVar8 = 0;
      if ((int)auStackX_18[0] < *(int *)(lVar3 + 0x50)) {
        uVar8 = ~auStackX_18[0] >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lStack_d0 = *(longlong *)(lVar3 + 0x48) + lVar10 * 4;
      puStack_c8 = auStackX_18;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,int_const_&>_>
                ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  *)(lVar3 + 0x168),(TPairInitializer<int_const_&,int_const_&> *)(auStackX_18 + 2),
                 (bool *)&lStack_d0);
      auStackX_18[0] = auStackX_18[0] + 1;
    } while ((int)auStackX_18[0] < iVar2);
  }
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)param_1 + 0x118),
             (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)param_1 + 0x58));
  pTVar9 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array
                     ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                      (*(longlong *)(*(longlong *)param_1 + 0x1b8) + 0x268),aTStack_60);
  lVar3 = *(longlong *)param_1;
  pTVar12 = (TArray<int,TSizedDefaultAllocator<32>_> *)(lVar3 + 0x108);
  if (pTVar12 != pTVar9) {
    pFVar4 = (pTVar12->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar12->AllocatorInstance).Data = (pTVar9->AllocatorInstance).Data;
    (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)(lVar3 + 0x110) = pTVar9->ArrayNum;
    *(int *)(lVar3 + 0x114) = pTVar9->ArrayMax;
    pTVar9->ArrayNum = 0;
    pTVar9->ArrayMax = 0;
  }
  if (aTStack_60[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(aTStack_60[0].AllocatorInstance.Data);
  }
  lVar3 = *(longlong *)param_1;
  *(undefined4 *)(lVar3 + 0x138) = 0;
  if (*(int *)(lVar3 + 0x13c) < 0) {
    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)(lVar3 + 0x130),0,(int *)(lVar3 + 0x13c));
  }
  lVar3 = *(longlong *)param_1;
  *(undefined4 *)(lVar3 + 0x148) = 0;
  if (*(int *)(lVar3 + 0x14c) < 0) {
    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)(lVar3 + 0x140),0,(int *)(lVar3 + 0x14c));
  }
  puStack_a8 = auStackX_8;
  puStack_98 = &uStack_c0;
  pcStack_b0 = TFunctionRefCaller<``FDynamicMeshPolygroupTransformer::BeginTransform'::__l2::<lambda_1>::operator()'::__l2::<lambda_4>,void,int,UE::Geometry::TTriangle3<double>_const_&>
               ::Call;
  uStack_f8 = *(undefined8 *)param_1;
  puStack_88 = &uStack_f8;
  pcStack_90 = TFunctionRefCaller<``FDynamicMeshPolygroupTransformer::BeginTransform'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>,void,int,UE::Math::TVector<double>_const_&>
               ::Call;
  pcStack_a0 = TFunctionRefCaller<``FDynamicMeshPolygroupTransformer::BeginTransform'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>,void,int,UE::Geometry::TSegment3<double>_const_&>
               ::Call;
  auStackX_8[0] = 0;
  uStack_c0 = uStack_f8;
  pFStack_b8 = param_2;
  UE::Geometry::EnumeratePolygroupSelectionElements
            (*(FGeometrySelection **)((longlong)param_1 + 0x10),param_2,
             (FGroupTopology *)**(undefined8 **)((longlong)param_1 + 8),
             (TFunctionRef<void___cdecl(int,UE::Math::TVector<double>_const_&)> *)&pcStack_90,
             (TFunctionRef<void___cdecl(int,UE::Geometry::TSegment3<double>_const_&)> *)&pcStack_a0,
             (TFunctionRef<void___cdecl(int,UE::Geometry::TTriangle3<double>_const_&)> *)&pcStack_b0
             ,(TTransform<double> *)0x0,true);
  lVar3 = *(longlong *)param_1;
  *(undefined4 *)(lVar3 + 0x158) = 0;
  if (*(int *)(lVar3 + 0x15c) < 0) {
    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)(lVar3 + 0x150),0,(int *)(lVar3 + 0x15c));
  }
  lStack_80 = *(longlong *)param_1;
  lVar10 = *(longlong *)(lStack_80 + 0x1b8);
  iVar2 = *(int *)(lVar10 + 0x2c0);
  lVar11 = *(longlong *)(lVar10 + 0x2b8);
  lVar3 = lVar11 + (longlong)iVar2 * 0x48;
  pFStack_78 = param_2;
  while( true ) {
    if (*(int *)(lVar10 + 0x2c0) != iVar2) {
      `TCheckedPointerIterator<UE::Geometry::FGroupTopologyDeformer::FROIEdge_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(auStackX_10);
    }
    if (lVar11 == lVar3) break;
    ``FDynamicMeshPolygroupTransformer::BeginTransform'::__l2::<lambda_1>::operator()'::__l2::
    <lambda_5>::operator()(&lStack_80,(FEdgeSpan *)(lVar11 + 8));
    lVar11 = lVar11 + 0x48;
  }
  return;
}

// Call @ 14cb76900

TTransformSRT3<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDynamicMeshComponentSelectorFactory::BuildForTarget'::__l2::<lambda_1>,UE::Geometry::TTransformSRT3<double>_>
::Call(TTransformSRT3<double> *__return_storage_ptr__,void *param_1)

{
  `FDynamicMeshComponentSelectorFactory::BuildForTarget'::__l2::<lambda_1>::operator()
            (param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14cb76930

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGeometrySelectionManager::CanExecuteSelectionCommand'::__l2::<lambda_1>,void,FGeometrySelectionHandle>
::Call(void *param_1,FGeometrySelectionHandle *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  EObjectType EVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  
  EVar3 = (param_2->Identifier).ObjectType;
  iVar4 = (param_2->Identifier).TargetObject.WeakPtr.ObjectIndex;
  iVar5 = (param_2->Identifier).TargetObject.WeakPtr.ObjectSerialNumber;
  uVar6 = *(undefined4 *)&param_2->Selection;
  uVar7 = *(undefined4 *)((longlong)&param_2->Selection + 4);
  uVar8 = *(undefined4 *)&param_2->Selector;
  uVar9 = *(undefined4 *)((longlong)&param_2->Selector + 4);
  lVar1 = *(longlong *)(*(longlong *)param_1 + 0x58);
  *(ETargetType *)(lVar1 + 0x30) = (param_2->Identifier).TargetType;
  *(EObjectType *)(lVar1 + 0x34) = EVar3;
  *(int *)(lVar1 + 0x38) = iVar4;
  *(int *)(lVar1 + 0x3c) = iVar5;
  *(undefined4 *)(lVar1 + 0x40) = uVar6;
  *(undefined4 *)(lVar1 + 0x44) = uVar7;
  *(undefined4 *)(lVar1 + 0x48) = uVar8;
  *(undefined4 *)(lVar1 + 0x4c) = uVar9;
  plVar2 = *(longlong **)(*(longlong *)param_1 + 0x58);
  (**(code **)(*plVar2 + 0x2b0))(plVar2,*(undefined8 *)(*(longlong *)param_1 + 0x78));
  if (**(char **)((longlong)param_1 + 8) != '\0') {
    cVar10 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)param_1 + 0x10) + 0x2b8))
                       ((longlong *)**(undefined8 **)((longlong)param_1 + 0x10),
                        *(undefined8 *)(*(longlong *)param_1 + 0x58));
    if (cVar10 != '\0') {
      **(undefined1 **)((longlong)param_1 + 8) = 1;
      **(undefined1 **)((longlong)param_1 + 0x18) = 1;
      return;
    }
  }
  **(undefined1 **)((longlong)param_1 + 8) = 0;
  **(undefined1 **)((longlong)param_1 + 0x18) = 1;
  return;
}

// Call @ 14cb769c0

FLinearColor * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FWorldRenderCapture::CaptureDeviceDepthFromPosition'::__l2::<lambda_1>,FLinearColor,FLinearColor_const_&>
::Call(FLinearColor *__return_storage_ptr__,void *param_1,FLinearColor *param_2)

{
  `UE::Geometry::FWorldRenderCapture::CaptureDeviceDepthFromPosition'::__l2::<lambda_1>::operator()
            (param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Call @ 14cb769f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FWorldRenderCapture::CaptureMRSFromPosition'::__l2::<lambda_1>,void,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&>
::Call(void *param_1,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *param_2)

{
  TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *pTVar1;
  FImagePixelData *pFVar2;
  
  pTVar1 = *(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> **)param_1;
  if (pTVar1 != param_2) {
    pFVar2 = pTVar1->Ptr;
    pTVar1->Ptr = param_2->Ptr;
    param_2->Ptr = (FImagePixelData *)0x0;
    if (pFVar2 != (FImagePixelData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cb76a15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pFVar2->_padding_)(pFVar2,1);
      return;
    }
  }
  return;
}

// Call @ 14cb76a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UPolygonSelectionMechanic::ConvertSelectionToBorderVertices'::__l2::<lambda_1>,bool,UE::Geometry::FGeometrySelection_&>
::Call(void *param_1,FGeometrySelection *param_2)

{
  ulonglong uVar1;
  FGroupTopology *pFVar2;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  byte bVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStackY_248 [32];
  undefined1 uStack_218;
  undefined1 auStack_217 [7];
  longlong *plStack_210;
  uint uStack_208;
  uint uStack_204;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_200;
  undefined4 uStack_1f8;
  uint uStack_1f4;
  uint uStack_1f0;
  uint uStack_1ec;
  int iStack_1e8;
  undefined4 uStack_1e4;
  int iStack_1e0;
  undefined8 uStack_1dc;
  undefined1 auStack_1d4 [12];
  undefined8 uStack_1c8;
  longlong *plStack_1c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1b8;
  undefined8 uStack_198;
  longlong *plStack_190;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_188;
  undefined8 uStack_168;
  uint uStack_144;
  undefined1 auStack_138 [32];
  uint *puStack_118;
  uint uStack_110;
  uint uStack_10c;
  undefined4 uStack_108;
  int iStack_104;
  ForElementType<FSetElementId> FStack_f8;
  int iStack_f0;
  undefined1 auStack_e8 [32];
  uint *puStack_c8;
  uint uStack_c0;
  uint uStack_bc;
  undefined4 uStack_b8;
  int iStack_b4;
  ForElementType<FSetElementId> FStack_a8;
  int iStack_a0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> TStack_98;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_248;
  TStack_98.Elements._0_8_ = 0;
  TStack_98.Elements._8_8_ = 0;
  TStack_98.Elements._32_8_ = 0;
  uVar13 = 0;
  TStack_98.Elements._40_4_ = 0;
  TStack_98.Elements._44_4_ = 0x80;
  TStack_98.Elements._48_4_ = 0xffffffff;
  TStack_98.Elements._52_4_ = 0;
  TStack_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  TStack_98.HashSize = 0;
  uVar15 = 0;
  if (*(char *)((longlong)param_1 + 8) == '\0') {
    auStack_e8._0_8_ = (FScriptContainerElement *)0x0;
    auStack_e8._8_8_ = 0;
    puStack_c8 = (uint *)0x0;
    uStack_c0 = 0;
    uStack_bc = 0x80;
    uStack_b8 = 0xffffffff;
    iStack_b4 = 0;
    FStack_a8 = (ForElementType<FSetElementId>)0x0;
    iStack_a0 = 0;
    pFVar2 = *(FGroupTopology **)(*(longlong *)param_1 + 0xb28);
    bVar5 = UE::Geometry::GetSelectionBoundaryCorners
                      (pFVar2->Mesh,pFVar2,param_2,
                       (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)auStack_e8,
                       &TStack_98);
    if (bVar5) {
      TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::Reset
                (&param_2->Selection);
      uVar13 = uStack_c0;
      uStack_204 = 1;
      param_2->ElementType = Vertex;
      param_2->TopologyType = Polygroup;
      uStack_1f4 = uVar15;
      uStack_1f0 = uVar15;
      if (uStack_c0 != 0) {
        puVar14 = (uint *)(auStack_e8 + 0x10);
        if (puStack_c8 != (uint *)0x0) {
          puVar14 = puStack_c8;
        }
        uVar11 = *puVar14;
        uStack_1f0 = 0;
        uVar15 = 0;
        while (uVar11 == 0) {
          lVar9 = (longlong)(int)uVar15;
          uStack_1f0 = uStack_1f0 + 0x20;
          uVar15 = uVar15 + 1;
          uStack_1f4 = uStack_c0;
          if ((int)((uStack_c0 - 1) + ((int)(uStack_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar15)
          goto LAB_14cb68ae1;
          uVar11 = (puVar14 + 1)[lVar9];
        }
        uStack_204 = -uVar11 & uVar11;
        uVar1 = (ulonglong)uStack_204 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        uStack_1dc._4_4_ = (int)lVar9;
        uStack_1f4 = (uStack_1f0 - 1) + uStack_1dc._4_4_;
        if ((int)uStack_c0 < (int)uStack_1f4) {
          uStack_1f4 = uStack_c0;
        }
      }
LAB_14cb68ae1:
      plStack_210 = (longlong *)auStack_e8;
      pTStack_200 = (TBitArray<FDefaultBitArrayAllocator> *)(auStack_e8 + 0x10);
      uVar11 = uStack_c0 & 0xffffffe0;
      iStack_1e8 = auStack_e8._8_4_ - iStack_b4;
      uStack_1f8 = 0xffffffff;
      TStack_188.CurrentBitIndex = uStack_1f4;
      TStack_188.UnvisitedBitMask = 0xffffffff;
      TStack_188._padding_ = CONCAT44(uStack_204,uVar15);
      iVar12 = (int)uStack_c0 >> 5;
      TStack_188._28_4_ = uStack_1f4;
      TStack_188.BaseBitIndex = uStack_1f0;
      uStack_168 = CONCAT44(uStack_1e4,iStack_1e8);
      bVar8 = (byte)uStack_c0;
      uStack_208 = uVar15;
      uStack_1ec = uStack_1f4;
      plStack_190 = plStack_210;
      TStack_188.Array = pTStack_200;
      if (((int)uStack_c0 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if (uVar13 != uStack_c0) {
        puVar14 = (uint *)(auStack_e8 + 0x10);
        if (puStack_c8 != (uint *)0x0) {
          puVar14 = puStack_c8;
        }
        uVar15 = -1 << (bVar8 & 0x1f) & puVar14[iVar12];
        while (uVar15 == 0) {
          lVar9 = (longlong)iVar12;
          uVar11 = uVar11 + 0x20;
          iVar12 = iVar12 + 1;
          uVar13 = uStack_c0;
          if ((int)((uStack_c0 - 1) + ((int)(uStack_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
          goto LAB_14cb68bef;
          uVar15 = (puVar14 + 1)[lVar9];
        }
        uVar1 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
        lVar9 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        uVar13 = (uVar11 - 1) + (int)lVar9;
        if ((int)uStack_c0 < (int)uVar13) {
          uVar13 = uStack_c0;
        }
      }
LAB_14cb68bef:
      while( true ) {
        plVar4 = plStack_190;
        if ((int)plStack_190[1] - *(int *)((longlong)plStack_190 + 0x34) != (int)uStack_168) {
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStack_217);
        }
        if (((TStack_188.CurrentBitIndex == uVar13) &&
            (TStack_188.Array == (TBitArray<FDefaultBitArrayAllocator> *)(auStack_e8 + 0x10))) &&
           (plVar4 == (longlong *)auStack_e8)) break;
        iVar12 = *(int *)(*plVar4 + (longlong)TStack_188.CurrentBitIndex * 0xc);
        iVar7 = UE::Geometry::FGroupTopology::GetCornerVertexID
                          (*(FGroupTopology **)(*(longlong *)param_1 + 0xb28),iVar12);
        uStack_1c8 = CONCAT44(iVar12,iVar7);
        TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
        Emplace<unsigned___int64>(&param_2->Selection,(ulong64 *)auStack_1d4,(bool *)&uStack_1c8);
        TStack_188.UnvisitedBitMask = TStack_188.UnvisitedBitMask & ~TStack_188._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_188);
      }
      iStack_a0 = 0;
      if (FStack_a8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)FStack_a8);
      }
      this = (TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)auStack_e8;
      goto LAB_14cb68cb2;
    }
    iStack_a0 = 0;
    if (FStack_a8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FStack_a8);
    }
    iVar12 = SUB84(auStack_e8._8_8_,4);
    auStack_e8._8_8_ = auStack_e8._8_8_ & 0xffffffff00000000;
    if (iVar12 != 0) {
      ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)auStack_e8,0,(int *)(auStack_e8 + 0xc));
    }
    uStack_b8 = 0xffffffff;
    iStack_b4 = 0;
    uStack_c0 = 0;
    if (0x80 < uStack_bc) {
      uStack_bc = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(auStack_e8 + 0x10),0);
    }
    pFVar10 = (FScriptContainerElement *)auStack_e8._0_8_;
    if (puStack_c8 != (uint *)0x0) {
      FMemory::Free(puStack_c8);
      pFVar10 = (FScriptContainerElement *)auStack_e8._0_8_;
    }
  }
  else {
    auStack_138._0_8_ = (FScriptContainerElement *)0x0;
    auStack_138._8_8_ = 0;
    puStack_118 = (uint *)0x0;
    uStack_110 = 0;
    uStack_10c = 0x80;
    uStack_108 = 0xffffffff;
    iStack_104 = 0;
    FStack_f8 = (ForElementType<FSetElementId>)0x0;
    iStack_f0 = 0;
    pFVar2 = *(FGroupTopology **)(*(longlong *)param_1 + 0xb28);
    bVar5 = UE::Geometry::GetSelectionBoundaryVertices
                      (pFVar2->Mesh,pFVar2,param_2,
                       (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)auStack_138,
                       &TStack_98);
    if (bVar5) {
      TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::Reset
                (&param_2->Selection);
      uVar11 = uStack_110;
      uStack_204 = 1;
      param_2->ElementType = Vertex;
      param_2->TopologyType = Triangle;
      uStack_1f4 = uVar15;
      if (uStack_110 != 0) {
        puVar14 = (uint *)(auStack_138 + 0x10);
        if (puStack_118 != (uint *)0x0) {
          puVar14 = puStack_118;
        }
        uVar16 = *puVar14;
        uVar15 = 0;
        uVar13 = 0;
        while (uVar16 == 0) {
          lVar9 = (longlong)(int)uVar13;
          uVar15 = uVar15 + 0x20;
          uVar13 = uVar13 + 1;
          uStack_1f4 = uStack_110;
          if ((int)((uStack_110 - 1) + ((int)(uStack_110 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar13)
          goto LAB_14cb687b1;
          uVar16 = (puVar14 + 1)[lVar9];
        }
        uStack_204 = -uVar16 & uVar16;
        uVar1 = (ulonglong)uStack_204 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iStack_1e0 = (int)lVar9;
        uStack_1f4 = (uVar15 - 1) + iStack_1e0;
        if ((int)uStack_110 < (int)uStack_1f4) {
          uStack_1f4 = uStack_110;
        }
      }
LAB_14cb687b1:
      plStack_210 = (longlong *)auStack_138;
      uStack_1ec = uStack_144;
      pTStack_200 = (TBitArray<FDefaultBitArrayAllocator> *)(auStack_138 + 0x10);
      iStack_1e8 = auStack_138._8_4_ - iStack_104;
      uVar16 = uStack_110 & 0xffffffe0;
      uStack_1f8 = 0xffffffff;
      TStack_1b8.CurrentBitIndex = uStack_1f4;
      TStack_1b8.UnvisitedBitMask = 0xffffffff;
      TStack_1b8._padding_ = CONCAT44(uStack_204,uVar13);
      iVar12 = (int)uStack_110 >> 5;
      TStack_1b8._28_4_ = uStack_144;
      TStack_1b8.BaseBitIndex = uVar15;
      uStack_198 = CONCAT44(uStack_1e4,iStack_1e8);
      bVar8 = (byte)uStack_110;
      uStack_208 = uVar13;
      uStack_1f0 = uVar15;
      plStack_1c0 = plStack_210;
      TStack_1b8.Array = pTStack_200;
      if (((int)uStack_110 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if (uVar11 != uStack_110) {
        puVar14 = (uint *)(auStack_138 + 0x10);
        if (puStack_118 != (uint *)0x0) {
          puVar14 = puStack_118;
        }
        uVar15 = -1 << (bVar8 & 0x1f) & puVar14[iVar12];
        while (uVar15 == 0) {
          lVar9 = (longlong)iVar12;
          uVar16 = uVar16 + 0x20;
          iVar12 = iVar12 + 1;
          uVar11 = uStack_110;
          if ((int)((uStack_110 - 1) + ((int)(uStack_110 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
          goto LAB_14cb688c0;
          uVar15 = (puVar14 + 1)[lVar9];
        }
        uVar1 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
        lVar9 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        uVar11 = (uVar16 - 1) + (int)lVar9;
        if ((int)uStack_110 < (int)uVar11) {
          uVar11 = uStack_110;
        }
      }
LAB_14cb688c0:
      while( true ) {
        plVar4 = plStack_1c0;
        if ((int)plStack_1c0[1] - *(int *)((longlong)plStack_1c0 + 0x34) != (int)uStack_198) {
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&uStack_218);
        }
        if (((TStack_1b8.CurrentBitIndex == uVar11) &&
            (TStack_1b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(auStack_138 + 0x10))) &&
           (plVar4 == (longlong *)auStack_138)) break;
        auStack_1d4._4_8_ = ZEXT48(*(uint *)(*plVar4 + (longlong)TStack_1b8.CurrentBitIndex * 0xc));
        TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
        Emplace<unsigned___int64>(&param_2->Selection,&uStack_1dc,(bool *)(auStack_1d4 + 4));
        TStack_1b8.UnvisitedBitMask = TStack_1b8.UnvisitedBitMask & ~TStack_1b8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1b8);
      }
      iStack_f0 = 0;
      if (FStack_f8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)FStack_f8);
      }
      this = (TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)auStack_138;
LAB_14cb68cb2:
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (this);
      bVar5 = true;
      goto LAB_14cb68cb9;
    }
    iStack_f0 = 0;
    if (FStack_f8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FStack_f8);
    }
    iVar12 = SUB84(auStack_138._8_8_,4);
    auStack_138._8_8_ = auStack_138._8_8_ & 0xffffffff00000000;
    if (iVar12 != 0) {
      ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)auStack_138,0,(int *)(auStack_138 + 0xc));
    }
    uStack_108 = 0xffffffff;
    iStack_104 = 0;
    uStack_110 = 0;
    if (0x80 < uStack_10c) {
      uStack_10c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(auStack_138 + 0x10),0);
    }
    pFVar10 = (FScriptContainerElement *)auStack_138._0_8_;
    if (puStack_118 != (uint *)0x0) {
      FMemory::Free(puStack_118);
      pFVar10 = (FScriptContainerElement *)auStack_138._0_8_;
    }
  }
  if (pFVar10 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar10);
  }
  bVar5 = false;
LAB_14cb68cb9:
  TStack_98.HashSize = 0;
  if (TStack_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)TStack_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&TStack_98.Elements);
  return bVar5;
}

// Call @ 14cb76a30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGeometrySelectionManager::CreateOrUpdateAllSets'::__l2::<lambda_1>,void,int,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,int *param_2,TArray<FRenderableLine,TSizedDefaultAllocator<32>_> *param_3)

{
  `UGeometrySelectionManager::CreateOrUpdateAllSets'::__l2::<lambda_1>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 14cb76a40

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMeshTopologySelector::DoCornerBasedSelection'::__l2::<lambda_1>,bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
::Call(void *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  longlong lVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 local_res8;
  
  lVar1 = *(longlong *)param_1;
  local_res8 = __real_3ff0000000000000;
  CheckCallable(*(void **)(lVar1 + 0x10));
  pcVar2 = *(code **)(lVar1 + 0x10);
  plVar5 = (longlong *)(lVar1 + 0x20);
  if (*(longlong **)(lVar1 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(lVar1 + 0x38);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  uVar3 = (*pcVar2)(uVar4,param_2,param_3,&local_res8);
  return (bool)uVar3;
}

// Call @ 14cb76ac0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMeshTopologySelector::DoEdgeBasedSelection'::__l2::<lambda_1>,bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
::Call(void *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  longlong lVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 local_res8;
  
  lVar1 = *(longlong *)param_1;
  local_res8 = __real_3ff0000000000000;
  CheckCallable(*(void **)(lVar1 + 0x10));
  pcVar2 = *(code **)(lVar1 + 0x10);
  plVar5 = (longlong *)(lVar1 + 0x20);
  if (*(longlong **)(lVar1 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(lVar1 + 0x38);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  uVar3 = (*pcVar2)(uVar4,param_2,param_3,&local_res8);
  return (bool)uVar3;
}

// Call @ 14cb76b40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDynamicMeshPolygroupTransformer::EndTransform'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
  FMeshVertexChangeBuilder *this;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> TStack_58;
  
  this = *(FMeshVertexChangeBuilder **)(*(longlong *)param_1 + 0x128);
  TStack_58.Elements._0_8_ = 0;
  TStack_58.Elements._8_8_ = 0;
  TStack_58.Elements._32_8_ = 0;
  TStack_58.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  TStack_58.Elements._48_8_ = _UNK_150631d98;
  TStack_58.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  TStack_58.HashSize = 0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&TStack_58,
             (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
             (*(longlong *)(*(longlong *)param_1 + 0x1b8) + 0x38));
  FMeshVertexChangeBuilder::SaveVertices<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
            (this,param_2,&TStack_58,false);
  FMeshVertexChangeBuilder::SaveOverlayNormals
            (*(FMeshVertexChangeBuilder **)(*(longlong *)param_1 + 0x128),param_2,
             (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
             (*(longlong *)(*(longlong *)param_1 + 0x1b8) + 0x268),false);
  return;
}

// Call @ 14cb76b50

TAxisAlignedBox3<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FSceneGeometrySpatialCache::FindNearestHit'::__l2::<lambda_1>,UE::Geometry::TAxisAlignedBox3<double>,int>
::Call(TAxisAlignedBox3<double> *__return_storage_ptr__,void *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<UE::Geometry::ISceneGeometrySpatial,1> *pTVar3;
  TAxisAlignedBox3<double> *pTVar4;
  FSceneGeometryID local_res8 [2];
  
  local_res8[0].UniqueID = *param_2;
  pTVar3 = TMapBase<UE::Geometry::FSceneGeometryID,TSharedPtr<UE::Geometry::ISceneGeometrySpatial,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FSceneGeometryID,TSharedPtr<UE::Geometry::ISceneGeometrySpatial,1>,0>_>
           ::FindChecked((TMapBase<UE::Geometry::FSceneGeometryID,TSharedPtr<UE::Geometry::ISceneGeometrySpatial,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FSceneGeometryID,TSharedPtr<UE::Geometry::ISceneGeometrySpatial,1>,0>_>
                          *)(*(longlong *)param_1 + 0x60),local_res8);
  if (pTVar3->Object == (ISceneGeometrySpatial *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TAxisAlignedBox3<double> *)(*pcVar1)();
      return pTVar4;
    }
  }
  (**(code **)(pTVar3->Object->_padding_ + 0x20))(pTVar3->Object,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14cb76bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UPolygonSelectionMechanic::FloodSelection'::__l2::<lambda_1>,bool,UE::Geometry::FGeometrySelection_&>
::Call(void *param_1,FGeometrySelection *param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined1 auStackY_d8 [32];
  undefined1 uStack_a8;
  undefined1 auStack_a7 [7];
  code *pcStack_a0;
  undefined1 *puStack_98;
  code *pcStack_90;
  undefined1 *puStack_88;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [32];
  void *pvStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ForElementType<FSetElementId> FStack_30;
  int iStack_28;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  auStack_78._0_4_ = param_2->ElementType;
  auStack_78._4_4_ = param_2->TopologyType;
  puStack_98 = &uStack_a8;
  pcStack_a0 = TFunctionRefCaller<``UPolygonSelectionMechanic::FloodSelection'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>,bool,UE::Geometry::FGeoSelectionID,UE::Geometry::FGeoSelectionID>
               ::Call;
  puStack_88 = auStack_a7;
  pcStack_90 = TFunctionRefCaller<``UPolygonSelectionMechanic::FloodSelection'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,bool,UE::Geometry::FGeoSelectionID>
               ::Call;
  auStack_70._0_8_ = (FScriptContainerElement *)0x0;
  auStack_70._8_8_ = 0;
  pvStack_50 = (void *)0x0;
  uStack_48 = ___xmm_00000000ffffffff0000008000000000;
  uStack_40 = _UNK_150631d98;
  FStack_30 = (ForElementType<FSetElementId>)0x0;
  iStack_28 = 0;
  bVar3 = UE::Geometry::MakeSelectAllConnectedSelection
                    ((*(FGroupTopology **)(*(longlong *)param_1 + 0xb28))->Mesh,
                     *(FGroupTopology **)(*(longlong *)param_1 + 0xb28),param_2,
                     (TFunctionRef<bool___cdecl(UE::Geometry::FGeoSelectionID)> *)&pcStack_90,
                     (TFunctionRef<bool___cdecl(UE::Geometry::FGeoSelectionID,UE::Geometry::FGeoSelectionID)>
                      *)&pcStack_a0,(FGeometrySelection *)auStack_78);
  if (bVar3) {
    param_2->ElementType = auStack_78._0_4_;
    param_2->TopologyType = auStack_78._4_4_;
    TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::operator=
              (&param_2->Selection,
               (TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *)
               auStack_70);
  }
  iStack_28 = 0;
  if (FStack_30 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FStack_30);
  }
  iVar1 = SUB84(auStack_70._8_8_,4);
  auStack_70._8_8_ = auStack_70._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)auStack_70,0,(int *)(auStack_70 + 0xc));
  }
  uVar2 = uStack_48._4_4_;
  uStack_40 = 0xffffffff;
  uStack_48 = (ulonglong)uStack_48._4_4_ << 0x20;
  if (0x80 < uVar2) {
    uStack_48 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(auStack_70 + 0x10),0);
  }
  if (pvStack_50 != (void *)0x0) {
    FMemory::Free(pvStack_50);
  }
  if ((FScriptContainerElement *)auStack_70._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)auStack_70._0_8_);
  }
  return bVar3;
}

// Call @ 14cb76be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UPolygonSelectionMechanic::GrowSelection'::__l2::<lambda_1>,bool,UE::Geometry::FGeometrySelection_&>
::Call(void *param_1,FGeometrySelection *param_2)

{
  ulonglong uVar1;
  int iVar2;
  bool bVar3;
  undefined1 auStackY_c8 [32];
  undefined1 auStack_98 [8];
  code *pcStack_90;
  undefined1 *puStack_88;
  undefined1 auStack_78 [8];
  ForAnyElementType FStack_70;
  undefined8 uStack_68;
  TBitArray<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  ForElementType<FSetElementId> FStack_30;
  int iStack_28;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  auStack_78._0_4_ = param_2->ElementType;
  auStack_78._4_4_ = param_2->TopologyType;
  puStack_88 = auStack_98;
  pcStack_90 = TFunctionRefCaller<``UPolygonSelectionMechanic::GrowSelection'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,bool,UE::Geometry::FGeoSelectionID>
               ::Call;
  FStack_70.Data = (FScriptContainerElement *)0x0;
  uStack_68 = 0;
  TStack_60.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  TStack_60._24_8_ = ___xmm_00000000ffffffff0000008000000000;
  uStack_40 = _UNK_150631d98;
  FStack_30 = (ForElementType<FSetElementId>)0x0;
  iStack_28 = 0;
  bVar3 = UE::Geometry::MakeBoundaryConnectedSelection
                    ((*(FGroupTopology **)(*(longlong *)param_1 + 0xb28))->Mesh,
                     *(FGroupTopology **)(*(longlong *)param_1 + 0xb28),param_2,
                     (TFunctionRef<bool___cdecl(UE::Geometry::FGeoSelectionID)> *)&pcStack_90,
                     (FGeometrySelection *)auStack_78);
  if (bVar3) {
    bVar3 = UE::Geometry::CombineSelectionInPlace(param_2,(FGeometrySelection *)auStack_78,Add);
    if (bVar3) {
      bVar3 = true;
      goto LAB_14cb697cb;
    }
  }
  bVar3 = false;
LAB_14cb697cb:
  iStack_28 = 0;
  if (FStack_30 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FStack_30);
  }
  uVar1 = uStack_68 >> 0x20;
  uStack_68 = uStack_68 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&FStack_70,0,(int *)((longlong)&uStack_68 + 4));
  }
  iVar2 = TStack_60.MaxBits;
  uStack_40 = 0xffffffff;
  TStack_60._24_8_ = (ulonglong)(uint)TStack_60.MaxBits << 0x20;
  if (0x80 < (uint)iVar2) {
    TStack_60.NumBits = 0;
    TStack_60.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&TStack_60,0);
  }
  if (TStack_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)TStack_60.AllocatorInstance.SecondaryData);
  }
  if (FStack_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_70.Data);
  }
  return bVar3;
}

// Call @ 14cb76bf0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMeshTopologySelectionMechanic::Initialize'::__l2::<lambda_1>,bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,double>
::Call(void *param_1,TVector<double> *param_2,TVector<double> *param_3,double *param_4)

{
  bool bVar1;
  
  bVar1 = `UMeshTopologySelectionMechanic::Initialize'::__l2::<lambda_1>::operator()
                    (param_1,param_2,param_3,*param_4);
  return bVar1;
}

// Call @ 14cb76c00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::InitializeGeometrySelectionVisualization'::__l2::<lambda_1>,void,int,UE::Math::TVector<double>_const_&>
::Call(void *param_1,int *param_2,TVector<double> *param_3)

{
  return;
}

// Call @ 14cb76c10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FBaseDynamicMeshSelector::InitializeSelectionFromPredicate'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
  undefined1 auStackX_8 [8];
  undefined1 auStack_38 [16];
  undefined2 uStack_28;
  bool bStack_24;
  TFunctionRef<bool___cdecl(UE::Geometry::FGeoSelectionID)> TStack_20;
  
  if (**(int **)param_1 == 1) {
    auStack_38._8_8_ = auStackX_8;
    auStack_38._0_8_ =
         TFunctionRefCaller<``FBaseDynamicMeshSelector::InitializeSelectionFromPredicate'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,bool,UE::Geometry::FGeoSelectionID,UE::Geometry::FGeoSelectionID>
         ::Call;
    TStack_20._0_8_ = **(undefined8 **)((longlong)param_1 + 0x18);
    TStack_20._8_8_ = (*(undefined8 **)((longlong)param_1 + 0x18))[1];
    UE::Geometry::MakeSelectAllConnectedSelection
              (param_2,(FGroupTopology *)**(undefined8 **)((longlong)param_1 + 8),
               (FGeometrySelection *)**(undefined8 **)((longlong)param_1 + 0x10),&TStack_20,
               (TFunctionRef<bool___cdecl(UE::Geometry::FGeoSelectionID,UE::Geometry::FGeoSelectionID)>
                *)auStack_38,*(FGeometrySelection **)((longlong)param_1 + 0x20));
    return;
  }
  if (**(int **)param_1 == 2) {
    auStack_38._0_8_ = (FGeometrySelection *)0x0;
    auStack_38._8_8_ = &DAT_400000002;
    uStack_28._0_1_ = true;
    uStack_28._1_1_ = false;
    bStack_24 = false;
    UE::Geometry::FGeometrySelectionEditor::Initialize
              ((FGeometrySelectionEditor *)auStack_38,
               (FGeometrySelection *)**(undefined8 **)((longlong)param_1 + 0x10),
               ((FGeometrySelection *)**(undefined8 **)((longlong)param_1 + 0x10))->TopologyType ==
               Polygroup);
    TStack_20._0_8_ = **(undefined8 **)((longlong)param_1 + 0x18);
    TStack_20._8_8_ = (*(undefined8 **)((longlong)param_1 + 0x18))[1];
    UE::Geometry::MakeBoundaryConnectedSelection
              (param_2,(FGroupTopology *)**(undefined8 **)((longlong)param_1 + 8),
               (FGeometrySelection *)**(undefined8 **)((longlong)param_1 + 0x10),&TStack_20,
               *(FGeometrySelection **)((longlong)param_1 + 0x20));
    return;
  }
  TStack_20._0_8_ = **(undefined8 **)((longlong)param_1 + 0x18);
  TStack_20._8_8_ = (*(undefined8 **)((longlong)param_1 + 0x18))[1];
  UE::Geometry::MakeSelectAllSelection
            (param_2,(FGroupTopology *)**(undefined8 **)((longlong)param_1 + 8),&TStack_20,
             *(FGeometrySelection **)((longlong)param_1 + 0x20));
  return;
}

// Call @ 14cb76c20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSceneDynamicMeshSpatial::OnGeometryModified'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  TAxisAlignedBox3<double> *pTVar7;
  TAxisAlignedBox3<double> local_38;
  
  pTVar7 = UE::Geometry::FDynamicMesh3::GetBounds(param_2,&local_38,true);
  dVar2 = (pTVar7->Min).field0_0x0._s_0.Y;
  dVar3 = (pTVar7->Min).field0_0x0._s_0.Z;
  dVar4 = (pTVar7->Max).field0_0x0._s_0.X;
  dVar5 = (pTVar7->Max).field0_0x0._s_0.Y;
  dVar6 = (pTVar7->Max).field0_0x0._s_0.Z;
  lVar1 = *(longlong *)param_1;
  *(double *)(lVar1 + 0x18) = (pTVar7->Min).field0_0x0._s_0.X;
  *(double *)(lVar1 + 0x20) = dVar2;
  *(double *)(lVar1 + 0x28) = dVar3;
  *(double *)(lVar1 + 0x30) = dVar4;
  *(double *)(lVar1 + 0x38) = dVar5;
  *(double *)(lVar1 + 0x40) = dVar6;
  return;
}

// Call @ 14cb76c70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FBasicDynamicMeshSelectionTransformer::PreviewRender'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
  uint *puVar1;
  double *pdVar2;
  ulonglong *puVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  uint *puVar26;
  ulonglong *puVar27;
  ulonglong uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined4 uVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auStackX_8 [8];
  undefined1 auStack_b8 [16];
  double dStack_a8;
  undefined1 auStack_98 [16];
  double dStack_88;
  
  lVar5 = *(longlong *)param_1;
  *(undefined4 *)(lVar5 + 0x28) = 0;
  *(undefined4 *)(lVar5 + 0x2c) = 0x3e99999a;
  *(undefined4 *)(lVar5 + 0x30) = 0x3f733333;
  *(undefined4 *)(lVar5 + 0x34) = 0x3f800000;
  *(undefined4 *)(lVar5 + 0x38) = 0x40a00000;
  lVar5 = *(longlong *)((longlong)param_1 + 8);
  puVar26 = *(uint **)(lVar5 + 0x140);
  iVar4 = *(int *)(lVar5 + 0x148);
  puVar1 = puVar26 + iVar4;
  while( true ) {
    if (*(int *)(lVar5 + 0x148) != iVar4) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(auStackX_8);
    }
    if (puVar26 == puVar1) break;
    plVar6 = *(longlong **)param_1;
    uVar24 = (ulonglong)(*puVar26 & 0x1ff);
    auVar57 = *(undefined1 (*) [16])(plVar6 + 0x1c);
    auVar54 = *(undefined1 (*) [16])(plVar6 + 0x1a);
    lVar7 = *(longlong *)
             ((param_2->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(*puVar26 >> 9) * 8);
    dVar15 = (double)plVar6[0x1d];
    pdVar2 = (double *)(lVar7 + uVar24 * 0x18);
    dVar18 = *(double *)(lVar7 + 0x10 + uVar24 * 0x18) * (double)plVar6[0x24];
    dVar21 = (double)plVar6[0x25] * 0.0;
    dVar13 = (double)plVar6[0x22] * *pdVar2;
    dVar14 = (double)plVar6[0x23] * pdVar2[1];
    uVar66 = (undefined4)((ulonglong)dVar14 >> 0x20);
    auStack_98 = *(undefined1 (*) [16])(plVar6 + 0x1a);
    auVar43 = blendpd(auStack_98,auVar57,2);
    auVar67._8_4_ = SUB84(dVar14,0);
    auVar67._0_8_ = dVar13;
    auVar67._12_4_ = uVar66;
    dVar11 = auVar57._0_8_;
    auVar68._0_8_ = auVar67._8_8_ * auStack_98._0_8_ - auStack_98._8_8_ * dVar13;
    auVar68._8_8_ = dVar18 * auStack_98._8_8_ - dVar11 * dVar14;
    auVar29._8_4_ = SUB84(dVar14,0);
    auVar29._0_8_ = dVar13;
    auVar29._12_4_ = uVar66;
    auVar16._8_4_ = SUB84(dVar21,0);
    auVar16._0_8_ = dVar18;
    auVar16._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
    auVar30 = blendpd(auVar29,auVar16,2);
    auVar31._0_8_ = auVar30._0_8_ * dVar11 - auVar43._0_8_ * dVar18;
    auVar31._8_8_ = auVar30._8_8_ * auVar57._8_8_ - auVar43._8_8_ * dVar21;
    auVar30 = blendpd(auVar68,auVar31,2);
    dVar21 = auVar68._8_8_ + auVar68._8_8_;
    dVar10 = auVar31._0_8_ + auVar31._0_8_;
    uVar66 = (undefined4)((ulonglong)dVar10 >> 0x20);
    auVar69._0_8_ = auVar30._0_8_ + auVar30._0_8_;
    auVar69._8_8_ = auVar30._8_8_ + auVar30._8_8_;
    auVar55._8_4_ = SUB84(dVar10,0);
    auVar55._0_8_ = dVar21;
    auVar55._12_4_ = uVar66;
    auVar44._8_4_ = SUB84(dVar10,0);
    auVar44._0_8_ = dVar21;
    auVar44._12_4_ = uVar66;
    auVar30 = blendpd(auVar44,auVar69,2);
    auVar56._0_8_ = auVar55._8_8_ * auVar54._0_8_ - auVar54._8_8_ * dVar21;
    auVar56._8_8_ = auVar69._0_8_ * auVar54._8_8_ - dVar11 * dVar10;
    auVar54 = blendpd(auVar54,auVar57,2);
    auVar32._8_4_ = SUB84(auVar56._8_8_,0);
    auVar32._0_8_ = auVar56._0_8_;
    auVar32._12_4_ = (int)((ulonglong)auVar56._8_8_ >> 0x20);
    auVar45._0_8_ = auVar30._0_8_ * dVar11 - auVar54._0_8_ * auVar69._0_8_;
    auVar45._8_8_ = auVar30._8_8_ * auVar57._8_8_ - auVar54._8_8_ * auVar69._8_8_;
    auVar57 = blendpd(auVar56,auVar45,2);
    dVar11 = dVar10 * dVar15 + dVar14 + auVar45._0_8_ + (double)plVar6[0x1f];
    dStack_a8 = auVar69._0_8_ * dVar15 + dVar18 + auVar57._0_8_ + (double)plVar6[0x20];
    auStack_b8._8_4_ = SUB84(dVar11,0);
    auStack_b8._0_8_ = dVar21 * dVar15 + dVar13 + auVar32._8_8_ + (double)plVar6[0x1e];
    auStack_b8._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    (**(code **)(*plVar6 + 0x18))
              (plVar6,auStack_b8,plVar6 + 5,*(code **)(*plVar6 + 0x18),(char)plVar6[8]);
    puVar26 = puVar26 + 1;
  }
  lVar5 = *(longlong *)param_1;
  *(undefined4 *)(lVar5 + 0x10) = 0;
  *(undefined4 *)(lVar5 + 0x14) = 0x3e99999a;
  *(undefined4 *)(lVar5 + 0x18) = 0x3f733333;
  *(undefined4 *)(lVar5 + 0x1c) = 0x3f800000;
  *(undefined4 *)(lVar5 + 0x20) = 0x40400000;
  *(undefined4 *)(lVar5 + 0x24) = 0x40800000;
  lVar5 = *(longlong *)((longlong)param_1 + 8);
  puVar27 = *(ulonglong **)(lVar5 + 0x130);
  iVar4 = *(int *)(lVar5 + 0x138);
  puVar3 = puVar27 + iVar4;
  while( true ) {
    if (*(int *)(lVar5 + 0x138) != iVar4) {
      `TCheckedPointerIterator<UE::Geometry::FIndex2i,int,0>::operator!='::__l2::<lambda_1>::
      operator()(auStackX_8);
    }
    if (puVar27 == puVar3) break;
    plVar6 = *(longlong **)param_1;
    uVar24 = *puVar27;
    pFVar8 = (param_2->Vertices).Blocks.AllocatorInstance.Data;
    auVar57 = *(undefined1 (*) [16])(plVar6 + 0x1c);
    auVar54 = *(undefined1 (*) [16])(plVar6 + 0x1a);
    auVar30 = *(undefined1 (*) [16])(plVar6 + 0x1a);
    dVar23 = (double)plVar6[0x1d];
    uVar25 = (ulonglong)((uint)(uVar24 >> 0x20) & 0x1ff);
    auVar43 = blendpd(auVar54,auVar57,2);
    lVar7 = *(longlong *)(pFVar8 + (uVar24 >> 0x29) * 8);
    pdVar2 = (double *)(lVar7 + uVar25 * 0x18);
    dVar19 = *pdVar2 * (double)plVar6[0x22];
    dVar18 = pdVar2[1] * (double)plVar6[0x23];
    uVar66 = (undefined4)((ulonglong)dVar18 >> 0x20);
    uVar28 = (ulonglong)((uint)uVar24 & 0x1ff);
    lVar9 = *(longlong *)(pFVar8 + ((uVar24 & 0xffffffff) >> 9) * 8);
    dVar14 = *(double *)(lVar7 + 0x10 + uVar25 * 0x18) * (double)plVar6[0x24];
    dVar10 = (double)plVar6[0x25] * 0.0;
    auVar70._8_4_ = SUB84(dVar18,0);
    auVar70._0_8_ = dVar19;
    auVar70._12_4_ = uVar66;
    dVar11 = auVar57._0_8_;
    auVar71._0_8_ = auVar70._8_8_ * auVar54._0_8_ - auVar54._8_8_ * dVar19;
    auVar71._8_8_ = dVar14 * auVar54._8_8_ - dVar11 * dVar18;
    auVar33._8_4_ = SUB84(dVar18,0);
    auVar33._0_8_ = dVar19;
    auVar33._12_4_ = uVar66;
    auVar12._8_4_ = SUB84(dVar10,0);
    auVar12._0_8_ = dVar14;
    auVar12._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    auVar54 = blendpd(auVar33,auVar12,2);
    dVar21 = auVar57._8_8_;
    auVar34._0_8_ = auVar54._0_8_ * dVar11 - auVar43._0_8_ * dVar14;
    auVar34._8_8_ = auVar54._8_8_ * dVar21 - auVar43._8_8_ * dVar10;
    auVar54 = blendpd(auVar71,auVar34,2);
    auVar72._0_8_ = auVar54._0_8_ + auVar54._0_8_;
    auVar72._8_8_ = auVar54._8_8_ + auVar54._8_8_;
    dVar10 = auVar71._8_8_ + auVar71._8_8_;
    dVar13 = auVar34._0_8_ + auVar34._0_8_;
    uVar66 = (undefined4)((ulonglong)dVar13 >> 0x20);
    auVar58._8_4_ = SUB84(dVar13,0);
    auVar58._0_8_ = dVar10;
    auVar58._12_4_ = uVar66;
    auVar46._8_4_ = SUB84(dVar13,0);
    auVar46._0_8_ = dVar10;
    auVar46._12_4_ = uVar66;
    auVar54 = blendpd(auVar46,auVar72,2);
    dVar20 = *(double *)(lVar9 + 0x10 + uVar28 * 0x18) * (double)plVar6[0x24];
    dVar22 = (double)plVar6[0x25] * 0.0;
    auVar59._0_8_ = auVar58._8_8_ * auVar30._0_8_ - auVar30._8_8_ * dVar10;
    auVar59._8_8_ = auVar72._0_8_ * auVar30._8_8_ - dVar11 * dVar13;
    auVar35._8_4_ = SUB84(auVar59._8_8_,0);
    auVar35._0_8_ = auVar59._0_8_;
    auVar35._12_4_ = (int)((ulonglong)auVar59._8_8_ >> 0x20);
    auVar30 = blendpd(auVar30,auVar57,2);
    auVar47._0_8_ = auVar54._0_8_ * dVar11 - auVar30._0_8_ * auVar72._0_8_;
    auVar47._8_8_ = auVar54._8_8_ * dVar21 - auVar30._8_8_ * auVar72._8_8_;
    pdVar2 = (double *)(lVar9 + uVar28 * 0x18);
    dVar13 = dVar13 * dVar23 + dVar18 + auVar47._0_8_ + (double)plVar6[0x1f];
    dVar18 = (double)plVar6[0x22] * *pdVar2;
    dVar15 = (double)plVar6[0x23] * pdVar2[1];
    uVar66 = (undefined4)((ulonglong)dVar15 >> 0x20);
    auVar54 = *(undefined1 (*) [16])(plVar6 + 0x1a);
    auVar30 = blendpd(auVar59,auVar47,2);
    dStack_a8 = auVar72._0_8_ * dVar23 + dVar14 + auVar30._0_8_ + (double)plVar6[0x20];
    auStack_b8._8_4_ = SUB84(dVar13,0);
    auStack_b8._0_8_ = dVar10 * dVar23 + dVar19 + auVar35._8_8_ + (double)plVar6[0x1e];
    auStack_b8._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    auVar73._8_4_ = SUB84(dVar15,0);
    auVar73._0_8_ = dVar18;
    auVar73._12_4_ = uVar66;
    auVar30 = *(undefined1 (*) [16])(plVar6 + 0x1a);
    auVar43 = blendpd(auVar54,auVar57,2);
    auVar74._0_8_ = auVar73._8_8_ * auVar54._0_8_ - auVar54._8_8_ * dVar18;
    auVar74._8_8_ = dVar20 * auVar54._8_8_ - dVar11 * dVar15;
    auVar36._8_4_ = SUB84(dVar15,0);
    auVar36._0_8_ = dVar18;
    auVar36._12_4_ = uVar66;
    auVar17._8_4_ = SUB84(dVar22,0);
    auVar17._0_8_ = dVar20;
    auVar17._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
    auVar54 = blendpd(auVar36,auVar17,2);
    auVar37._0_8_ = auVar54._0_8_ * dVar11 - auVar43._0_8_ * dVar20;
    auVar37._8_8_ = auVar54._8_8_ * dVar21 - auVar43._8_8_ * dVar22;
    auVar54 = blendpd(auVar74,auVar37,2);
    dVar10 = auVar74._8_8_ + auVar74._8_8_;
    dVar13 = auVar37._0_8_ + auVar37._0_8_;
    uVar66 = (undefined4)((ulonglong)dVar13 >> 0x20);
    auVar75._0_8_ = auVar54._0_8_ + auVar54._0_8_;
    auVar75._8_8_ = auVar54._8_8_ + auVar54._8_8_;
    auVar60._8_4_ = SUB84(dVar13,0);
    auVar60._0_8_ = dVar10;
    auVar60._12_4_ = uVar66;
    auVar48._8_4_ = SUB84(dVar13,0);
    auVar48._0_8_ = dVar10;
    auVar48._12_4_ = uVar66;
    auVar54 = blendpd(auVar48,auVar75,2);
    auVar61._0_8_ = auVar60._8_8_ * auVar30._0_8_ - auVar30._8_8_ * dVar10;
    auVar61._8_8_ = auVar75._0_8_ * auVar30._8_8_ - dVar11 * dVar13;
    auVar38._8_4_ = SUB84(auVar61._8_8_,0);
    auVar38._0_8_ = auVar61._0_8_;
    auVar38._12_4_ = (int)((ulonglong)auVar61._8_8_ >> 0x20);
    auVar57 = blendpd(auVar30,auVar57,2);
    auVar49._0_8_ = auVar54._0_8_ * dVar11 - auVar57._0_8_ * auVar75._0_8_;
    auVar49._8_8_ = auVar54._8_8_ * dVar21 - auVar57._8_8_ * auVar75._8_8_;
    dVar11 = dVar13 * dVar21 + dVar15 + auVar49._0_8_ + (double)plVar6[0x1f];
    auVar57 = blendpd(auVar61,auVar49,2);
    auStack_98._8_4_ = SUB84(dVar11,0);
    auStack_98._0_8_ = dVar10 * dVar21 + dVar18 + auVar38._8_8_ + (double)plVar6[0x1e];
    auStack_98._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    dStack_88 = auVar75._0_8_ * dVar21 + dVar20 + auVar57._0_8_ + (double)plVar6[0x20];
    (**(code **)(*plVar6 + 8))
              (plVar6,auStack_98,auStack_b8,plVar6 + 2,(int)plVar6[4],(char)plVar6[8]);
    puVar27 = puVar27 + 1;
  }
  lVar5 = *(longlong *)param_1;
  *(undefined4 *)(lVar5 + 0x10) = 0;
  *(undefined4 *)(lVar5 + 0x14) = 0x3e99999a;
  *(undefined4 *)(lVar5 + 0x18) = 0x3f733333;
  *(undefined4 *)(lVar5 + 0x1c) = 0x3f800000;
  *(undefined4 *)(lVar5 + 0x20) = 0x3f800000;
  *(undefined4 *)(lVar5 + 0x24) = 0x40800000;
  lVar5 = *(longlong *)((longlong)param_1 + 8);
  puVar27 = *(ulonglong **)(lVar5 + 0x150);
  iVar4 = *(int *)(lVar5 + 0x158);
  puVar3 = puVar27 + iVar4;
  while( true ) {
    if (*(int *)(lVar5 + 0x158) != iVar4) {
      `TCheckedPointerIterator<UE::Geometry::FIndex2i,int,0>::operator!='::__l2::<lambda_1>::
      operator()(auStackX_8);
    }
    if (puVar27 == puVar3) break;
    plVar6 = *(longlong **)param_1;
    uVar24 = *puVar27;
    pFVar8 = (param_2->Vertices).Blocks.AllocatorInstance.Data;
    auVar57 = *(undefined1 (*) [16])(plVar6 + 0x1c);
    auVar54 = *(undefined1 (*) [16])(plVar6 + 0x1a);
    dVar23 = (double)plVar6[0x1d];
    uVar25 = (ulonglong)((uint)(uVar24 >> 0x20) & 0x1ff);
    lVar7 = *(longlong *)(pFVar8 + (uVar24 >> 0x29) * 8);
    pdVar2 = (double *)(lVar7 + uVar25 * 0x18);
    dVar19 = *(double *)(lVar7 + 0x10 + uVar25 * 0x18) * (double)plVar6[0x24];
    dVar10 = (double)plVar6[0x25] * 0.0;
    uVar25 = (ulonglong)((uint)uVar24 & 0x1ff);
    lVar7 = *(longlong *)(pFVar8 + ((uVar24 & 0xffffffff) >> 9) * 8);
    dVar14 = (double)plVar6[0x22] * *pdVar2;
    dVar18 = (double)plVar6[0x23] * pdVar2[1];
    uVar66 = (undefined4)((ulonglong)dVar18 >> 0x20);
    auVar30 = *(undefined1 (*) [16])(plVar6 + 0x1a);
    auVar76._8_4_ = SUB84(dVar18,0);
    auVar76._0_8_ = dVar14;
    auVar76._12_4_ = uVar66;
    dVar11 = auVar57._0_8_;
    auVar50 = blendpd(auVar30,auVar57,2);
    auVar77._0_8_ = auVar76._8_8_ * auVar30._0_8_ - auVar30._8_8_ * dVar14;
    auVar77._8_8_ = dVar19 * auVar30._8_8_ - dVar11 * dVar18;
    auVar43._8_4_ = SUB84(dVar18,0);
    auVar43._0_8_ = dVar14;
    auVar43._12_4_ = uVar66;
    auVar30._8_4_ = SUB84(dVar10,0);
    auVar30._0_8_ = dVar19;
    auVar30._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    auVar30 = blendpd(auVar43,auVar30,2);
    dVar21 = auVar57._8_8_;
    auVar39._0_8_ = auVar30._0_8_ * dVar11 - auVar50._0_8_ * dVar19;
    auVar39._8_8_ = auVar30._8_8_ * dVar21 - auVar50._8_8_ * dVar10;
    auVar30 = blendpd(auVar77,auVar39,2);
    auVar78._0_8_ = auVar30._0_8_ + auVar30._0_8_;
    auVar78._8_8_ = auVar30._8_8_ + auVar30._8_8_;
    dVar10 = auVar77._8_8_ + auVar77._8_8_;
    dVar13 = auVar39._0_8_ + auVar39._0_8_;
    uVar66 = (undefined4)((ulonglong)dVar13 >> 0x20);
    auVar62._8_4_ = SUB84(dVar13,0);
    auVar62._0_8_ = dVar10;
    auVar62._12_4_ = uVar66;
    auVar51._8_4_ = SUB84(dVar13,0);
    auVar51._0_8_ = dVar10;
    auVar51._12_4_ = uVar66;
    auVar30 = blendpd(auVar51,auVar78,2);
    auVar63._0_8_ = auVar62._8_8_ * auVar54._0_8_ - auVar54._8_8_ * dVar10;
    auVar63._8_8_ = auVar78._0_8_ * auVar54._8_8_ - dVar11 * dVar13;
    auVar50._8_4_ = SUB84(auVar63._8_8_,0);
    auVar50._0_8_ = auVar63._0_8_;
    auVar50._12_4_ = (int)((ulonglong)auVar63._8_8_ >> 0x20);
    auVar54 = blendpd(auVar54,auVar57,2);
    auVar52._0_8_ = auVar30._0_8_ * dVar11 - auVar54._0_8_ * auVar78._0_8_;
    auVar52._8_8_ = auVar30._8_8_ * dVar21 - auVar54._8_8_ * auVar78._8_8_;
    dVar20 = *(double *)(lVar7 + 0x10 + uVar25 * 0x18) * (double)plVar6[0x24];
    dVar22 = (double)plVar6[0x25] * 0.0;
    pdVar2 = (double *)(lVar7 + uVar25 * 0x18);
    dVar13 = dVar13 * dVar23 + dVar18 + auVar52._0_8_ + (double)plVar6[0x1f];
    auVar54 = blendpd(auVar63,auVar52,2);
    dVar18 = (double)plVar6[0x22] * *pdVar2;
    dVar15 = (double)plVar6[0x23] * pdVar2[1];
    uVar66 = (undefined4)((ulonglong)dVar15 >> 0x20);
    dStack_88 = auVar78._0_8_ * dVar23 + dVar19 + auVar54._0_8_ + (double)plVar6[0x20];
    auVar54 = *(undefined1 (*) [16])(plVar6 + 0x1a);
    auVar79._8_4_ = SUB84(dVar15,0);
    auVar79._0_8_ = dVar18;
    auVar79._12_4_ = uVar66;
    auStack_98._8_4_ = SUB84(dVar13,0);
    auStack_98._0_8_ = dVar10 * dVar23 + dVar14 + auVar50._8_8_ + (double)plVar6[0x1e];
    auStack_98._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    auVar30 = *(undefined1 (*) [16])(plVar6 + 0x1a);
    auVar43 = blendpd(auVar54,auVar57,2);
    auVar80._0_8_ = auVar79._8_8_ * auVar54._0_8_ - auVar54._8_8_ * dVar18;
    auVar80._8_8_ = dVar20 * auVar54._8_8_ - dVar11 * dVar15;
    auVar40._8_4_ = SUB84(dVar15,0);
    auVar40._0_8_ = dVar18;
    auVar40._12_4_ = uVar66;
    auVar54._8_4_ = SUB84(dVar22,0);
    auVar54._0_8_ = dVar20;
    auVar54._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
    auVar54 = blendpd(auVar40,auVar54,2);
    auVar41._0_8_ = auVar54._0_8_ * dVar11 - auVar43._0_8_ * dVar20;
    auVar41._8_8_ = auVar54._8_8_ * dVar21 - auVar43._8_8_ * dVar22;
    auVar54 = blendpd(auVar80,auVar41,2);
    dVar10 = auVar80._8_8_ + auVar80._8_8_;
    dVar13 = auVar41._0_8_ + auVar41._0_8_;
    uVar66 = (undefined4)((ulonglong)dVar13 >> 0x20);
    auVar81._0_8_ = auVar54._0_8_ + auVar54._0_8_;
    auVar81._8_8_ = auVar54._8_8_ + auVar54._8_8_;
    auVar64._8_4_ = SUB84(dVar13,0);
    auVar64._0_8_ = dVar10;
    auVar64._12_4_ = uVar66;
    auVar53._8_4_ = SUB84(dVar13,0);
    auVar53._0_8_ = dVar10;
    auVar53._12_4_ = uVar66;
    auVar54 = blendpd(auVar53,auVar81,2);
    auVar65._0_8_ = auVar64._8_8_ * auVar30._0_8_ - auVar30._8_8_ * dVar10;
    auVar65._8_8_ = auVar81._0_8_ * auVar30._8_8_ - dVar11 * dVar13;
    auVar42._8_4_ = SUB84(auVar65._8_8_,0);
    auVar42._0_8_ = auVar65._0_8_;
    auVar42._12_4_ = (int)((ulonglong)auVar65._8_8_ >> 0x20);
    auVar30 = blendpd(auVar30,auVar57,2);
    auVar57._0_8_ = auVar54._0_8_ * dVar11 - auVar30._0_8_ * auVar81._0_8_;
    auVar57._8_8_ = auVar54._8_8_ * dVar21 - auVar30._8_8_ * auVar81._8_8_;
    dVar11 = dVar13 * dVar21 + dVar15 + auVar57._0_8_ + (double)plVar6[0x1f];
    auVar57 = blendpd(auVar65,auVar57,2);
    auStack_b8._8_4_ = SUB84(dVar11,0);
    auStack_b8._0_8_ = dVar10 * dVar21 + dVar18 + auVar42._8_8_ + (double)plVar6[0x1e];
    auStack_b8._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    dStack_a8 = auVar81._0_8_ * dVar21 + dVar20 + auVar57._0_8_ + (double)plVar6[0x20];
    (**(code **)(*plVar6 + 8))
              (plVar6,auStack_b8,auStack_98,plVar6 + 2,(int)plVar6[4],(char)plVar6[8]);
    puVar27 = puVar27 + 1;
  }
  return;
}

// Call @ 14cb76c80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMeshTopologySelectionMechanic::Setup'::__l2::<lambda_1>,void,bool_const_&>::
Call(void *param_1,bool *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014cb76c86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1 + 0x310))();
  return;
}

// Call @ 14cb76ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UPolygonSelectionMechanic::ShrinkSelection'::__l2::<lambda_1>,bool,UE::Geometry::FGeometrySelection_&>
::Call(void *param_1,FGeometrySelection *param_2)

{
  ulonglong uVar1;
  int iVar2;
  bool bVar3;
  undefined1 auStackY_c8 [32];
  undefined1 auStack_98 [8];
  code *pcStack_90;
  undefined1 *puStack_88;
  undefined1 auStack_78 [8];
  ForAnyElementType FStack_70;
  undefined8 uStack_68;
  TBitArray<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  ForElementType<FSetElementId> FStack_30;
  int iStack_28;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  auStack_78._0_4_ = param_2->ElementType;
  auStack_78._4_4_ = param_2->TopologyType;
  puStack_88 = auStack_98;
  pcStack_90 = TFunctionRefCaller<``UPolygonSelectionMechanic::ShrinkSelection'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,bool,UE::Geometry::FGeoSelectionID>
               ::Call;
  FStack_70.Data = (FScriptContainerElement *)0x0;
  uStack_68 = 0;
  TStack_60.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  TStack_60._24_8_ = ___xmm_00000000ffffffff0000008000000000;
  uStack_40 = _UNK_150631d98;
  FStack_30 = (ForElementType<FSetElementId>)0x0;
  iStack_28 = 0;
  bVar3 = UE::Geometry::MakeBoundaryConnectedSelection
                    ((*(FGroupTopology **)(*(longlong *)param_1 + 0xb28))->Mesh,
                     *(FGroupTopology **)(*(longlong *)param_1 + 0xb28),param_2,
                     (TFunctionRef<bool___cdecl(UE::Geometry::FGeoSelectionID)> *)&pcStack_90,
                     (FGeometrySelection *)auStack_78);
  if (bVar3) {
    bVar3 = UE::Geometry::CombineSelectionInPlace(param_2,(FGeometrySelection *)auStack_78,Subtract)
    ;
    if (bVar3) {
      bVar3 = true;
      goto LAB_14cb6ae5b;
    }
  }
  bVar3 = false;
LAB_14cb6ae5b:
  iStack_28 = 0;
  if (FStack_30 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FStack_30);
  }
  uVar1 = uStack_68 >> 0x20;
  uStack_68 = uStack_68 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&FStack_70,0,(int *)((longlong)&uStack_68 + 4));
  }
  iVar2 = TStack_60.MaxBits;
  uStack_40 = 0xffffffff;
  TStack_60._24_8_ = (ulonglong)(uint)TStack_60.MaxBits << 0x20;
  if (0x80 < (uint)iVar2) {
    TStack_60.NumBits = 0;
    TStack_60.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&TStack_60,0);
  }
  if (TStack_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)TStack_60.AllocatorInstance.SecondaryData);
  }
  if (FStack_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_70.Data);
  }
  return bVar3;
}

// Call @ 14cb76cb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FBaseDynamicMeshSelector::UpdateColliderMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  FBuildOptions aFStackX_8 [2];
  longlong alStack_18 [2];
  
  aFStackX_8[0].bBuildVertexMap = true;
  aFStackX_8[0].bBuildTriangleMap = true;
  aFStackX_8[0].bBuildAABBTree = true;
  puVar2 = ::operator_new(0x120);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2[1] = 0;
    *puVar2 = PimplPtr::DeleterFunc<UE::Geometry::FColliderMesh>;
    UE::Geometry::FColliderMesh::FColliderMesh((FColliderMesh *)(puVar2 + 2),param_2,aFStackX_8);
  }
  plVar3 = (longlong *)(*(longlong *)param_1 + 0xa0);
  if (alStack_18 == plVar3) {
    if (puVar2 + 2 != (undefined8 *)0x0) {
      (*(code *)*puVar2)(puVar2);
    }
  }
  else {
    lVar1 = *plVar3;
    *plVar3 = (longlong)(puVar2 + 2);
    if (lVar1 != 0) {
      (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
      return;
    }
  }
  return;
}

// Call @ 14cb76cc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FBaseDynamicMeshSelector::UpdateGroupEdgeSegmentTree'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
  int iVar1;
  int iVar2;
  FSegmentTree3 *this;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  ForAnyElementType *pFVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStackX_8 [8];
  longlong lStack_58;
  ForAnyElementType FStack_50;
  int aiStack_48 [2];
  TArray<int,TSizedDefaultAllocator<32>_> TStack_40;
  
  FStack_50.Data = (FScriptContainerElement *)0x0;
  aiStack_48[0] = 0;
  aiStack_48[1] = 0;
  lVar9 = **(longlong **)param_1;
  lVar11 = *(longlong *)(lVar9 + 0x60);
  iVar1 = *(int *)(lVar9 + 0x68);
  pFVar8 = (ForAnyElementType *)(lVar11 + 0x20);
  lVar10 = (longlong)iVar1 * 0x50 + lVar11;
  while( true ) {
    if (*(int *)(lVar9 + 0x68) != iVar1) {
      auStackX_8[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::FGroupTopology::FGroupEdge_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(auStackX_8);
    }
    if (lVar11 == lVar10) break;
    if (&FStack_50 == pFVar8) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar2 = *(int *)&pFVar8[1].Data;
    if (iVar2 != 0) {
      iVar5 = ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar2,&FStack_50,aiStack_48,aiStack_48 + 1);
      memcpy(FStack_50.Data + (longlong)iVar5 * 4,pFVar8->Data,(longlong)iVar2 << 2);
    }
    lVar11 = lVar11 + 0x50;
    pFVar8 = pFVar8 + 10;
  }
  puVar6 = ::operator_new(0x90);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    *puVar6 = PimplPtr::DeleterFunc<UE::Geometry::FSegmentTree3>;
    puVar6[1] = 0;
    *(undefined8 *)((longlong)puVar6 + 0x14) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x1c) = 0;
    puVar6[5] = 0;
    puVar6[8] = 0;
    *(undefined4 *)(puVar6 + 2) = 8;
    puVar6[4] = 0;
    puVar6[9] = 0;
    puVar6[6] = &
                ___7__TFunction_OwnedObject_P6AHHAEBU__TAxisAlignedBox3_N_Geometry_UE___Z_00_0A__Function_Private_Core_UE__6B_
    ;
    puVar6[7] = `UE::Geometry::FSegmentTree3::MakeDefaultSplitAxisFunc'::__l2::<lambda_1>::
                <lambda_invoker_cdecl>;
    if (puVar6 + 7 != (undefined8 *)0x0) {
      puVar6[4] = TFunctionRefCaller<int_(__cdecl*)(int,UE::Geometry::TAxisAlignedBox3<double>_const_&),int,int,UE::Geometry::TAxisAlignedBox3<double>_const_&>
                  ::Call;
    }
    puVar6[10] = 0;
    puVar6[0x11] = 0x3e45798ee2308c3a;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0xffffffffffffffff;
  }
  plVar7 = (longlong *)(*(longlong *)((longlong)param_1 + 8) + 0xb0);
  if (&lStack_58 == plVar7) {
    if (puVar6 + 2 == (undefined8 *)0x0) goto LAB_14cb6b1a7;
  }
  else {
    lVar9 = *plVar7;
    *plVar7 = (longlong)(puVar6 + 2);
    if (lVar9 == 0) goto LAB_14cb6b1a7;
    puVar6 = (undefined8 *)(lVar9 + -0x10);
  }
  (*(code *)*puVar6)();
LAB_14cb6b1a7:
  _Src.Data = FStack_50.Data;
  lVar9 = (longlong)aiStack_48[0];
  iVar1 = (param_2->EdgeRefCounts).UsedCount;
  this = *(FSegmentTree3 **)(*(longlong *)((longlong)param_1 + 8) + 0xb0);
  TStack_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_40.ArrayNum = aiStack_48[0];
  if (aiStack_48[0] == 0) {
    TStack_40.ArrayMax = aiStack_48[0];
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,aiStack_48[0],0,&TStack_40.AllocatorInstance,aiStack_48[0],&TStack_40.ArrayMax);
    memcpy(TStack_40.AllocatorInstance.Data,_Src.Data,lVar9 << 2);
  }
  UE::Geometry::FSegmentTree3::
  Build<TArray<int,TSizedDefaultAllocator<32>_>,__FBaseDynamicMeshSelector::UpdateGroupEdgeSegmentTree_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
            (this,&TStack_40,(<lambda_1>)param_2,iVar1);
  if (FStack_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_50.Data);
  }
  return;
}

// Call @ 14cb76cd0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FBasicDynamicMeshSelectionTransformer::UpdatePendingVertexChange'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  longlong lVar3;
  FMeshVertexChangeBuilder *this;
  void *_Src;
  ForAnyElementType FVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStackX_8 [8];
  ForAnyElementType FStack_38;
  int iStack_30;
  int iStack_2c;
  
  lVar3 = *(longlong *)param_1;
  this = *(FMeshVertexChangeBuilder **)(lVar3 + 0x128);
  cVar2 = **(char **)((longlong)param_1 + 8);
  FStack_38.Data = (FScriptContainerElement *)0x0;
  iStack_30 = *(int *)(lVar3 + 0x50);
  lVar7 = (longlong)iStack_30;
  _Src = *(void **)(lVar3 + 0x48);
  if (iStack_30 == 0) {
    iStack_2c = 0;
    iVar5 = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iStack_30,0,&FStack_38,iStack_30,&iStack_2c);
    memcpy(FStack_38.Data,_Src,lVar7 << 2);
    iVar5 = iStack_30;
  }
  pFVar1 = FStack_38.Data + (longlong)iVar5 * 4;
  FVar4.Data = FStack_38.Data;
  iVar6 = iVar5;
  if (cVar2 == '\0') {
    while( true ) {
      if (iVar6 != iVar5) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(auStackX_8);
      }
      if (FVar4.Data == pFVar1) break;
      FMeshVertexChangeBuilder::SaveVertexInitial(this,param_2,*(int *)FVar4.Data);
      FVar4.Data = FVar4.Data + 4;
      iVar6 = iStack_30;
    }
  }
  else {
    while( true ) {
      if (iVar6 != iVar5) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(auStackX_8);
      }
      if (FVar4.Data == pFVar1) break;
      FMeshVertexChangeBuilder::SaveVertexFinal(this,param_2,*(int *)FVar4.Data);
      FVar4.Data = FVar4.Data + 4;
      iVar6 = iStack_30;
    }
  }
  if (FStack_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_38.Data);
  }
  FMeshVertexChangeBuilder::SaveOverlayNormals
            (*(FMeshVertexChangeBuilder **)(*(longlong *)param_1 + 0x128),param_2,
             (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(*(longlong *)param_1 + 0xb8),
             **(char **)((longlong)param_1 + 8) == '\0');
  return;
}

// Call @ 14cb76ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FBaseDynamicMeshSelector::UpdateSelectionFromSelection'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
  FGeometrySelection *pFVar1;
  FGeometrySelectionDelta *pFVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  FGroupTopology *pFVar6;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar7;
  undefined1 auStackY_c8 [32];
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> TStack_98;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [32];
  void *pvStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ForElementType<FSetElementId> FStack_40;
  int iStack_38;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  pFVar1 = *(FGeometrySelection **)((longlong)param_1 + 0x18);
  auStack_80._0_8_ = (FScriptContainerElement *)0x0;
  auStack_80._8_8_ = 0;
  pvStack_60 = (void *)0x0;
  uStack_58 = ___xmm_00000000ffffffff0000008000000000;
  uStack_50 = _UNK_150631d98;
  FStack_40 = (ForElementType<FSetElementId>)0x0;
  iStack_38 = 0;
  auStack_88._4_4_ = ((EGeometryElementType *)**(undefined8 **)param_1)[1];
  auStack_88._0_4_ = *(EGeometryElementType *)**(undefined8 **)param_1;
  pFVar6 = FBaseDynamicMeshSelector::GetGroupTopology
                     (*(FBaseDynamicMeshSelector **)((longlong)param_1 + 0x10));
  bVar5 = UE::Geometry::ConvertSelection
                    (param_2,pFVar6,pFVar1,(FGeometrySelection *)auStack_88,ContainSelection);
  *(bool *)*(undefined8 *)((longlong)param_1 + 8) = bVar5;
  if (**(char **)((longlong)param_1 + 8) != '\0') {
    pFVar2 = (FGeometrySelectionDelta *)**(undefined8 **)((longlong)param_1 + 0x28);
    pTVar7 = TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::Array
                       ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                         *)auStack_80,&TStack_98);
    UE::Geometry::UpdateSelectionWithNewElements
              (*(FGeometrySelectionEditor **)param_1,
               **(EGeometrySelectionChangeType **)((longlong)param_1 + 0x20),pTVar7,pFVar2);
    if (TStack_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_98.AllocatorInstance.Data);
    }
  }
  iStack_38 = 0;
  if (FStack_40 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FStack_40);
  }
  iVar3 = SUB84(auStack_80._8_8_,4);
  auStack_80._8_8_ = auStack_80._8_8_ & 0xffffffff00000000;
  if (iVar3 != 0) {
    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)auStack_80,0,(int *)(auStack_80 + 0xc));
  }
  uVar4 = uStack_58._4_4_;
  uStack_50 = 0xffffffff;
  uStack_58 = (ulonglong)uStack_58._4_4_ << 0x20;
  if (0x80 < uVar4) {
    uStack_58 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(auStack_80 + 0x10),0);
  }
  if (pvStack_60 != (void *)0x0) {
    FMemory::Free(pvStack_60);
  }
  if ((FScriptContainerElement *)auStack_80._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)auStack_80._0_8_);
  }
  return;
}

// Call @ 14cb76cf0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FBaseDynamicMeshSelector::UpdateSelectionViaRaycast_GroupEdges'::__l2::<lambda_1>,bool,int,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
::Call(void *param_1,int *param_2,TVector<double> *param_3,TVector<double> *param_4)

{
  bool bVar1;
  
  bVar1 = `FBaseDynamicMeshSelector::UpdateSelectionViaRaycast_GroupEdges'::__l2::<lambda_1>::
          operator()(param_1,*param_2,param_3,param_4);
  return bVar1;
}

// Call @ 14cb76d00

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FPointPlanarSnapSolver::UpdateSnappedPoint'::__l2::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,TVector<double> *param_2)

{
  double dVar1;
  double *pdVar2;
  double dVar3;
  
  pdVar2 = *(double **)param_1;
  dVar3 = pdVar2[1];
  dVar1 = pdVar2[2];
  (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// Call @ 14cb76d20

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FRaySpatialSnapSolver::UpdateSnappedPoint'::__l2::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,TVector<double> *param_2)

{
  UE::Math::TRay<double>::ClosestPoint(*(TRay<double> **)param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Call @ 14cb76d50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FBasicDynamicMeshSelectionTransformer::UpdateTransform'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
  longlong *plVar1;
  FMutex *this;
  uint *puVar2;
  undefined8 *puVar3;
  atomic<unsigned_char> aVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  undefined8 uVar9;
  bool bVar10;
  short sVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  
  plVar1 = (longlong *)((longlong)param_1 + 8);
  uVar15 = 0;
  if (0 < **(int **)param_1) {
    lVar16 = 0;
    lVar14 = 0;
    do {
      lVar6 = *plVar1;
      uVar12 = 0;
      if ((int)uVar15 < *(int *)(lVar6 + 0x120)) {
        uVar12 = ~uVar15 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar7 = *plVar1;
      lVar6 = *(longlong *)(lVar6 + 0x118);
      uVar12 = 0;
      if ((int)uVar15 < *(int *)(lVar7 + 0x50)) {
        uVar12 = ~uVar15 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar12 = *(uint *)(*(longlong *)(lVar7 + 0x48) + lVar16 * 4);
      sVar11 = _dclass(*(undefined8 *)(lVar14 + lVar6));
      if (((sVar11 < 1) && (sVar11 = _dclass(*(undefined8 *)(lVar14 + 8 + lVar6)), sVar11 < 1)) &&
         (sVar11 = _dclass(*(undefined8 *)(lVar14 + 0x10 + lVar6)), sVar11 < 1)) {
        uVar9 = ((undefined8 *)(lVar14 + lVar6))[1];
        uVar13 = (ulonglong)(uVar12 & 0x1ff);
        uVar5 = *(undefined8 *)(lVar14 + 0x10 + lVar6);
        lVar7 = *(longlong *)
                 ((param_2->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar12 >> 9) * 8);
        puVar3 = (undefined8 *)(lVar7 + uVar13 * 0x18);
        *puVar3 = *(undefined8 *)(lVar14 + lVar6);
        puVar3[1] = uVar9;
        *(undefined8 *)(lVar7 + 0x10 + uVar13 * 0x18) = uVar5;
        if ((param_2->ChangeStampShape).bIsEnabled != false) {
          this = &(param_2->ChangeStampShape).Mutex;
          LOCK();
          bVar10 = this->State == (atomic<unsigned_char>)0x0;
          if (bVar10) {
            this->State = (atomic<unsigned_char>)0x1;
          }
          UNLOCK();
          if (!bVar10) {
            FMutex::LockSlow(this);
          }
          puVar2 = &(param_2->ChangeStampShape).Value;
          *puVar2 = *puVar2 + 1;
          LOCK();
          aVar4 = this->State;
          this->State = (atomic<unsigned_char>)((char)this->State + -1);
          UNLOCK();
          if (((byte)aVar4 & 2) != 0) {
            FMutex::WakeWaitingThread(this);
          }
        }
      }
      uVar15 = uVar15 + 1;
      lVar16 = lVar16 + 1;
      lVar14 = lVar14 + 0x18;
    } while ((int)uVar15 < **(int **)param_1);
  }
  UE::Geometry::FMeshNormals::RecomputeOverlayElementNormals
            (param_2,(TArray<int,TSizedDefaultAllocator<32>_> *)(*plVar1 + 0x108),true,true);
  return;
}

// Call @ 14cb76d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDynamicMeshPolygroupTransformer::UpdateTransform'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  longlong *plVar5;
  undefined1 auStack_88 [32];
  code *apcStack_68 [2];
  longlong alStack_58 [3];
  longlong *plStack_40;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)param_1;
  lVar2 = *(longlong *)((longlong)param_1 + 8);
  lVar3 = *(longlong *)((longlong)param_1 + 0x10);
  plVar5 = *(longlong **)(lVar1 + 0x1b8);
  apcStack_68[0] = (code *)0x0;
  pcVar4 = *(code **)(*plVar5 + 0x28);
  plStack_40 = FMemory::Malloc(0x20,8);
  *plStack_40 = (longlong)
                &TFunction_OwnedObject<``FDynamicMeshPolygroupTransformer::UpdateTransform'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,1>
                 ::_vftable_;
  plStack_40[1] = lVar1;
  plStack_40[2] = lVar2;
  plStack_40[3] = lVar3;
  if (plStack_40 + 1 != (longlong *)0x0) {
    apcStack_68[0] =
         TFunctionRefCaller<``FDynamicMeshPolygroupTransformer::UpdateTransform'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,UE::Math::TVector<double>,UE::Geometry::FDynamicMesh3_*,int>
         ::Call;
  }
  (*pcVar4)(plVar5,param_2,apcStack_68);
  if (apcStack_68[0] != (code *)0x0) {
    plVar5 = alStack_58;
    if (plStack_40 != (longlong *)0x0) {
      plVar5 = plStack_40;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  UE::Geometry::FMeshNormals::RecomputeOverlayElementNormals
            (param_2,(TArray<int,TSizedDefaultAllocator<32>_> *)(*(longlong *)param_1 + 0x108),true,
             true);
  return;
}

// Call @ 14cb76d70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FBasicDynamicMeshSelectionTransformer::BeginTransform'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,void,unsigned___int64,UE::Math::TVector<double>_const_&>
::Call(void *param_1,ulong64 *param_2,TVector<double> *param_3)

{
  undefined4 local_res8 [2];
  int local_res10 [6];
  
  local_res8[0] = (undefined4)*param_2;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
            (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)param_1,local_res10,
             (bool *)local_res8);
  return;
}

// Call @ 14cb76da0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FBaseDynamicMeshSelector::InitializeSelectionFromPredicate'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,bool,UE::Geometry::FGeoSelectionID,UE::Geometry::FGeoSelectionID>
::Call(void *param_1,FGeoSelectionID *param_2,FGeoSelectionID *param_3)

{
  return true;
}

// Call @ 14cb76db0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<```FBaseDynamicMeshSelector::UpdateSelectionViaRaycast_MeshTopology'::__l5::<lambda_1>::operator()'::__l6::<lambda_1>::operator()'::__l5::<lambda_1>,void,UE::Geometry::FMeshTriEdgeID>
::Call(void *param_1,FMeshTriEdgeID *param_2)

{
  ```FBaseDynamicMeshSelector::UpdateSelectionViaRaycast_MeshTopology'::__l5::<lambda_1>::
  operator()'::__l6::<lambda_1>::operator()'::__l5::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14cb76dc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FBaseDynamicMeshSelector::AccumulateSelectionBounds'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
  TTransform<double> *pTVar1;
  FGroupTopology *pFVar2;
  undefined8 local_28;
  undefined8 local_20;
  code *local_18;
  undefined8 *local_10;
  
  local_28 = *(undefined8 *)((longlong)param_1 + 0x18);
  pTVar1 = *(TTransform<double> **)((longlong)param_1 + 0x10);
  local_20 = *(undefined8 *)((longlong)param_1 + 0x20);
  local_10 = &local_28;
  local_18 = TFunctionRefCaller<``FBaseDynamicMeshSelector::AccumulateSelectionBounds'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>,void,unsigned___int64,UE::Math::TVector<double>_const_&>
             ::Call;
  pFVar2 = FBaseDynamicMeshSelector::GetGroupTopology
                     (*(FBaseDynamicMeshSelector **)((longlong)param_1 + 8));
  UE::Geometry::EnumeratePolygroupSelectionVertices
            (*(FGeometrySelection **)param_1,param_2,pFVar2,pTVar1,
             (TFunctionRef<void___cdecl(unsigned___int64,UE::Math::TVector<double>_const_&)> *)
             &local_18);
  return;
}

// Call @ 14cb76e40

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMeshTopologySelector::FindSelectedElement'::__l5::<lambda_1>,bool,int>::Call
          (void *param_1,int *param_2)

{
  longlong lVar1;
  TVector<double> *pTVar2;
  TVector<double> local_28;
  
  pTVar2 = UE::Geometry::FDynamicMesh3::GetTriNormal
                     (*(FDynamicMesh3 **)(*(longlong *)param_1 + 8),&local_28,*param_2);
  lVar1 = *(longlong *)((longlong)param_1 + 8);
  return *(double *)(lVar1 + 0x20) * (pTVar2->field0_0x0)._s_0.Y +
         *(double *)(lVar1 + 0x18) * (pTVar2->field0_0x0)._s_0.X +
         *(double *)(lVar1 + 0x28) * (pTVar2->field0_0x0)._s_0.Z < 0.0;
}

// Call @ 14cb76ea0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FBaseDynamicMeshSelector::GetSelectionFrame'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
  UE::Geometry::ConvertPolygroupSelectionToTopologySelection
            (*(FGeometrySelection **)param_1,param_2,
             (FGroupTopology *)**(undefined8 **)((longlong)param_1 + 8),
             *(FGroupTopologySelection **)((longlong)param_1 + 0x10));
  return;
}

// Call @ 14cb76ec0

bool __cdecl
UE::Core::Private::Function::TFunctionRefCaller<`IsOccluded'::__l5::<lambda_1>,bool,int>::Call
          (void *param_1,int *param_2)

{
  longlong lVar1;
  TVector<double> *pTVar2;
  TVector<double> local_28;
  
  pTVar2 = UE::Geometry::FDynamicMesh3::GetTriNormal
                     (*(FDynamicMesh3 **)(*(longlong *)param_1 + 8),&local_28,*param_2);
  lVar1 = *(longlong *)((longlong)param_1 + 8);
  return 0.0 < *(double *)(lVar1 + 0x20) * (pTVar2->field0_0x0)._s_0.Y +
               *(double *)(lVar1 + 0x18) * (pTVar2->field0_0x0)._s_0.X +
               *(double *)(lVar1 + 0x28) * (pTVar2->field0_0x0)._s_0.Z;
}

// Call @ 14cb76f20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FBaseDynamicMeshSelector::UpdateSelectionViaRaycast_MeshTopology'::__l5::<lambda_1>::operator()'::__l6::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  FMeshTriEdgeID FVar5;
  ulonglong uVar6;
  uint uStack_28;
  uint auStack_18 [2];
  undefined8 uStack_10;
  
  auStack_18[0] = *(uint *)param_1;
  if ((int)(auStack_18[0] >> 2) <
      (int)((param_2->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (param_2->TriangleRefCounts).RefCounts.CurBlockUsed)) {
    uVar6 = (ulonglong)(auStack_18[0] >> 2 & 0x1ff);
    lVar1 = (ulonglong)(auStack_18[0] >> 0xb) * 8;
    if ((((ushort)(*(short *)(*(longlong *)
                               ((param_2->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                               + lVar1) + uVar6 * 2) - 1U) < 0xfffe) &&
        (uVar3 = *(uint *)(*(longlong *)
                            ((param_2->TriangleEdges).Blocks.AllocatorInstance.Data + lVar1) +
                          ((ulonglong)(auStack_18[0] & 3) + uVar6 * 3) * 4), -1 < (int)uVar3)) &&
       ((int)uVar3 <
        (int)((param_2->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
             (param_2->EdgeRefCounts).RefCounts.CurBlockUsed))) {
      uVar6 = (ulonglong)(uVar3 & 0x1ff);
      lVar1 = (ulonglong)(uVar3 >> 9) * 8;
      if ((ushort)(*(short *)(*(longlong *)
                               ((param_2->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                               lVar1) + uVar6 * 2) - 1U) < 0xfffe) {
        uStack_10 = *(undefined8 *)((longlong)param_1 + 8);
        uVar4 = *(uint *)(*(longlong *)((param_2->Edges).Blocks.AllocatorInstance.Data + lVar1) + 8
                         + uVar6 * 0x10);
        FVar5 = (FMeshTriEdgeID)(uVar4 * 4);
        uVar2 = *(undefined8 *)
                 (*(longlong *)
                   ((param_2->TriangleEdges).Blocks.AllocatorInstance.Data +
                   (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 0xc);
        uStack_28 = (uint)uVar2;
        if (uStack_28 != uVar3) {
          FVar5 = (FMeshTriEdgeID)((uint)FVar5 | ((uint)((ulonglong)uVar2 >> 0x20) != uVar3) + 1);
        }
        ```FBaseDynamicMeshSelector::UpdateSelectionViaRaycast_MeshTopology'::__l5::<lambda_1>::
        operator()'::__l6::<lambda_1>::operator()'::__l5::<lambda_1>::operator()(auStack_18,FVar5);
        uVar6 = *(ulonglong *)
                 (*(longlong *)((param_2->Edges).Blocks.AllocatorInstance.Data + lVar1) + 8 +
                 uVar6 * 0x10);
        uVar4 = (uint)(uVar6 >> 0x20);
        if (uVar4 != 0xffffffff) {
          FVar5 = (FMeshTriEdgeID)(uVar4 * 4);
          uVar2 = *(undefined8 *)
                   (*(longlong *)
                     ((param_2->TriangleEdges).Blocks.AllocatorInstance.Data + (uVar6 >> 0x29) * 8)
                   + (ulonglong)(uVar4 & 0x1ff) * 0xc);
          uStack_28 = (uint)uVar2;
          if (uStack_28 != uVar3) {
            FVar5 = (FMeshTriEdgeID)((uint)FVar5 | ((uint)((ulonglong)uVar2 >> 0x20) != uVar3) + 1);
          }
          ```FBaseDynamicMeshSelector::UpdateSelectionViaRaycast_MeshTopology'::__l5::<lambda_1>::
          operator()'::__l6::<lambda_1>::operator()'::__l5::<lambda_1>::operator()(auStack_18,FVar5)
          ;
        }
      }
    }
  }
  return;
}

// Call @ 14cb76f30

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
UE::Core::Private::Function::
TFunctionRefCaller<`UMeshTopologySelectionMechanic::OnDragRectangleChanged'::__l7::<lambda_1>,void>
::Call(void *param_1)

{
  UMeshTopologySelectionMechanic::HandleRectangleChanged
            (*(UMeshTopologySelectionMechanic **)param_1,
             (FCameraRectangle *)((longlong)param_1 + 0x10));
  return;
}

// Call @ 14cb76f50

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FBaseDynamicMeshSelector::RayHitTest'::__l7::<lambda_1>,bool,int>::Call
          (void *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  FColliderMesh *this;
  TVector<double> *pTVar3;
  TVector<double> local_28;
  
  iVar1 = *param_2;
  this = FBaseDynamicMeshSelector::GetColliderMesh(*(FBaseDynamicMeshSelector **)param_1);
  pTVar3 = UE::Geometry::FColliderMesh::GetTriNormal(this,&local_28,iVar1);
  lVar2 = *(longlong *)((longlong)param_1 + 8);
  return *(double *)(lVar2 + 0x20) * (pTVar3->field0_0x0)._s_0.Y +
         *(double *)(lVar2 + 0x18) * (pTVar3->field0_0x0)._s_0.X +
         *(double *)(lVar2 + 0x28) * (pTVar3->field0_0x0)._s_0.Z < 0.0;
}

// Call @ 14cb76fc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSceneDynamicMeshSpatial::GetGeometry'::__l8::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
  uint uVar1;
  longlong lVar2;
  double *pdVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  TVector<double> *pTVar10;
  TVector<double>_u_0 TStack_38;
  TVector<double> TStack_20;
  
  uVar1 = **(uint **)param_1;
  if (((-1 < (int)uVar1) &&
      ((int)uVar1 <
       (int)((param_2->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
            (param_2->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
     ((ushort)(*(short *)(*(longlong *)
                           ((param_2->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar1 >> 9) * 8) + (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) <
      0xfffe)) {
    UE::Geometry::FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
              (param_2,uVar1,*(TVector<double> **)((longlong)param_1 + 8),
               *(TVector<double> **)((longlong)param_1 + 0x10),
               *(TVector<double> **)((longlong)param_1 + 0x18));
    if (**(char **)((longlong)param_1 + 0x20) != '\0') {
      lVar2 = *(longlong *)((longlong)param_1 + 0x28);
      pdVar3 = *(double **)((longlong)param_1 + 8);
      TStack_38._s_0.X = *pdVar3 * *(double *)(lVar2 + 0x80);
      TStack_38._s_0.Y = *(double *)(lVar2 + 0x88) * pdVar3[1];
      TStack_38._s_0.Z = *(double *)(lVar2 + 0x90) * pdVar3[2];
      pTVar10 = UE::Geometry::operator*<double>
                          (&TStack_20,(TQuaternion<double> *)(lVar2 + 0x48),
                           (TVector<double> *)&TStack_38._s_0);
      dVar8 = *(double *)(lVar2 + 0x70);
      dVar9 = (pTVar10->field0_0x0)._s_0.Y;
      dVar7 = (pTVar10->field0_0x0)._s_0.Z + *(double *)(lVar2 + 0x78);
      *pdVar3 = *(double *)(lVar2 + 0x68) + (pTVar10->field0_0x0)._s_0.X;
      auVar4._8_4_ = SUB84(dVar7,0);
      auVar4._0_8_ = dVar9 + dVar8;
      auVar4._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      *(undefined1 (*) [16])(pdVar3 + 1) = auVar4;
      lVar2 = *(longlong *)((longlong)param_1 + 0x28);
      pdVar3 = *(double **)((longlong)param_1 + 0x10);
      TStack_38._s_0.X = *(double *)(lVar2 + 0x80) * *pdVar3;
      TStack_38._s_0.Y = *(double *)(lVar2 + 0x88) * pdVar3[1];
      TStack_38._s_0.Z = *(double *)(lVar2 + 0x90) * pdVar3[2];
      pTVar10 = UE::Geometry::operator*<double>
                          (&TStack_20,(TQuaternion<double> *)(lVar2 + 0x48),
                           (TVector<double> *)&TStack_38._s_0);
      dVar8 = *(double *)(lVar2 + 0x70);
      dVar9 = (pTVar10->field0_0x0)._s_0.Y;
      dVar7 = (pTVar10->field0_0x0)._s_0.Z + *(double *)(lVar2 + 0x78);
      *pdVar3 = (pTVar10->field0_0x0)._s_0.X + *(double *)(lVar2 + 0x68);
      auVar5._8_4_ = SUB84(dVar7,0);
      auVar5._0_8_ = dVar9 + dVar8;
      auVar5._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      *(undefined1 (*) [16])(pdVar3 + 1) = auVar5;
      lVar2 = *(longlong *)((longlong)param_1 + 0x28);
      pdVar3 = *(double **)((longlong)param_1 + 0x18);
      TStack_38._s_0.X = *pdVar3 * *(double *)(lVar2 + 0x80);
      TStack_38._s_0.Y = *(double *)(lVar2 + 0x88) * pdVar3[1];
      TStack_38._s_0.Z = *(double *)(lVar2 + 0x90) * pdVar3[2];
      pTVar10 = UE::Geometry::operator*<double>
                          (&TStack_20,(TQuaternion<double> *)(lVar2 + 0x48),
                           (TVector<double> *)&TStack_38._s_0);
      dVar8 = *(double *)(lVar2 + 0x70);
      dVar9 = (pTVar10->field0_0x0)._s_0.Y;
      dVar7 = *(double *)(lVar2 + 0x78) + (pTVar10->field0_0x0)._s_0.Z;
      *pdVar3 = (pTVar10->field0_0x0)._s_0.X + *(double *)(lVar2 + 0x68);
      auVar6._8_4_ = SUB84(dVar7,0);
      auVar6._0_8_ = dVar8 + dVar9;
      auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      *(undefined1 (*) [16])(pdVar3 + 1) = auVar6;
    }
    **(undefined1 **)((longlong)param_1 + 0x30) = 1;
  }
  return;
}

// Call @ 14cb76fd0

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMeshTopologySelectionMechanic::GetSelectionBounds'::__l8::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,TVector<double> *param_2)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined4 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  lVar2 = *(longlong *)param_1;
  auVar1 = *(undefined1 (*) [16])(lVar2 + 0x1d0);
  auVar11 = *(undefined1 (*) [16])(lVar2 + 0x1c0);
  dVar9 = *(double *)(lVar2 + 0x1d8);
  dVar5 = (param_2->field0_0x0)._s_0.X * *(double *)(lVar2 + 0x200);
  dVar6 = (param_2->field0_0x0)._s_0.Y * *(double *)(lVar2 + 0x208);
  uVar18 = (undefined4)((ulonglong)dVar6 >> 0x20);
  auVar19._8_4_ = SUB84(dVar6,0);
  auVar19._0_8_ = dVar5;
  auVar19._12_4_ = uVar18;
  dVar7 = (param_2->field0_0x0)._s_0.Z * *(double *)(lVar2 + 0x210);
  dVar8 = *(double *)(lVar2 + 0x218) * 0.0;
  auVar13 = blendpd(auVar11,auVar1,2);
  dVar4 = auVar1._0_8_;
  auVar20._0_8_ = auVar19._8_8_ * auVar11._0_8_ - auVar11._8_8_ * dVar5;
  auVar20._8_8_ = dVar7 * auVar11._8_8_ - dVar4 * dVar6;
  auVar21._8_4_ = SUB84(dVar6,0);
  auVar21._0_8_ = dVar5;
  auVar21._12_4_ = uVar18;
  auVar11._8_4_ = SUB84(dVar8,0);
  auVar11._0_8_ = dVar7;
  auVar11._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  auVar11 = blendpd(auVar21,auVar11,2);
  auVar12._0_8_ = auVar11._0_8_ * dVar4 - auVar13._0_8_ * dVar7;
  auVar12._8_8_ = auVar11._8_8_ * auVar1._8_8_ - auVar13._8_8_ * dVar8;
  auVar11 = *(undefined1 (*) [16])(lVar2 + 0x1c0);
  auVar21 = blendpd(auVar20,auVar12,2);
  auVar22._0_8_ = auVar21._0_8_ + auVar21._0_8_;
  auVar22._8_8_ = auVar21._8_8_ + auVar21._8_8_;
  dVar8 = auVar20._8_8_ + auVar20._8_8_;
  dVar3 = auVar12._0_8_ + auVar12._0_8_;
  uVar18 = (undefined4)((ulonglong)dVar3 >> 0x20);
  auVar16._8_4_ = SUB84(dVar3,0);
  auVar16._0_8_ = dVar8;
  auVar16._12_4_ = uVar18;
  auVar14._8_4_ = SUB84(dVar3,0);
  auVar14._0_8_ = dVar8;
  auVar14._12_4_ = uVar18;
  auVar21 = blendpd(auVar14,auVar22,2);
  auVar17._0_8_ = auVar16._8_8_ * auVar11._0_8_ - auVar11._8_8_ * dVar8;
  auVar17._8_8_ = auVar22._0_8_ * auVar11._8_8_ - dVar4 * dVar3;
  auVar13._8_4_ = SUB84(auVar17._8_8_,0);
  auVar13._0_8_ = auVar17._0_8_;
  auVar13._12_4_ = (int)((ulonglong)auVar17._8_8_ >> 0x20);
  auVar11 = blendpd(auVar11,auVar1,2);
  dVar10 = *(double *)(lVar2 + 0x1f0);
  auVar15._0_8_ = auVar21._0_8_ * dVar4 - auVar11._0_8_ * auVar22._0_8_;
  auVar15._8_8_ = auVar21._8_8_ * auVar1._8_8_ - auVar11._8_8_ * auVar22._8_8_;
  auVar11 = blendpd(auVar17,auVar15,2);
  dVar4 = dVar3 * dVar9 + dVar6 + auVar15._0_8_ + *(double *)(lVar2 + 0x1e8);
  auVar1._8_4_ = SUB84(dVar4,0);
  auVar1._0_8_ = dVar8 * dVar9 + dVar5 + auVar13._8_8_ + *(double *)(lVar2 + 0x1e0);
  auVar1._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       auVar22._0_8_ * dVar9 + dVar7 + auVar11._0_8_ + dVar10;
  return __return_storage_ptr__;
}

// Call @ 14cb77120

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FBaseDynamicMeshSelector::UpdateSelectionViaShape'::__l10::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
  int *piVar1;
  double *pdVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  TQuaternion<double> *pTVar5;
  ForAnyElementType *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TVector<double> *pTVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float afStackX_10 [2];
  ulonglong uStack_88;
  TVector<double>_u_0 TStack_80;
  TVector<double>_u_0 TStack_68;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  TVector<double> TStack_38;
  
  uVar11 = (param_2->VertexRefCounts).RefCounts.CurBlockUsed +
           (param_2->VertexRefCounts).RefCounts.CurBlock * 0x200;
  uVar13 = 0;
  if ((uVar11 != 0) &&
     (pFVar3 = (param_2->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar13 = 0,
     0xfffd < (ushort)(**(short **)pFVar3 - 1U))) {
    uVar12 = 1;
    uVar13 = 1;
    if (1 < (int)uVar11) {
      do {
        lVar4 = *(longlong *)(pFVar3 + (ulonglong)(uVar12 >> 9) * 8);
        if ((*(short *)(lVar4 + (ulonglong)(uVar12 & 0x1ff) * 2) != 0) &&
           (uVar13 = uVar12, *(short *)(lVar4 + (ulonglong)(uVar12 & 0x1ff) * 2) != -1)) break;
        uVar12 = uVar12 + 1;
        uVar13 = uVar12;
      } while ((int)uVar12 < (int)uVar11);
    }
  }
joined_r0x00014cb6c228:
  do {
    if (uVar13 == uVar11) {
      return;
    }
    while( true ) {
      pTVar5 = *(TQuaternion<double> **)param_1;
      lVar4 = *(longlong *)
               ((param_2->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar13 >> 9) * 8);
      pdVar2 = (double *)(lVar4 + (ulonglong)(uVar13 & 0x1ff) * 0x18);
      dStack_50 = *pdVar2;
      dStack_48 = pdVar2[1];
      dStack_40 = *(double *)(lVar4 + 0x10 + (ulonglong)(uVar13 & 0x1ff) * 0x18);
      TStack_80._s_0.X = dStack_50 * pTVar5[1].field0_0x0._s_0.W;
      TStack_80._s_0.Z = dStack_40 * pTVar5[2].field0_0x0._s_0.Y;
      TStack_80._s_0.Y = dStack_48 * pTVar5[2].field0_0x0._s_0.X;
      pTVar10 = UE::Geometry::operator*<double>
                          (&TStack_38,pTVar5,(TVector<double> *)&TStack_80._s_0);
      TStack_68._s_0.Z = pTVar5[1].field0_0x0._s_0.Z + (pTVar10->field0_0x0)._s_0.Z;
      TStack_68._s_0.Y = pTVar5[1].field0_0x0._s_0.Y + (pTVar10->field0_0x0)._s_0.Y;
      TStack_68._s_0.X = pTVar5[1].field0_0x0._s_0.X + (pTVar10->field0_0x0)._s_0.X;
      afStackX_10[0] = 0.0;
      bVar8 = FConvexVolume::IntersectSphere
                        (*(FConvexVolume **)((longlong)param_1 + 8),
                         (TVector<double> *)&TStack_68._s_0,afStackX_10);
      if (bVar8) {
        pFVar6 = *(ForAnyElementType **)((longlong)param_1 + 0x10);
        uStack_88 = (ulonglong)uVar13;
        if (((pFVar6->Data <= (FScriptContainerElement *)&uStack_88) &&
            ((FScriptContainerElement *)&uStack_88 <
             pFVar6->Data + (longlong)*(int *)((longlong)&pFVar6[1].Data + 4) * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar9 = *(int *)&pFVar6[1].Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        if (iVar9 == *piVar1) {
          iVar9 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,pFVar6,piVar1);
        }
        *(int *)&pFVar6[1].Data = iVar9 + 1;
        *(ulonglong *)(pFVar6->Data + (longlong)iVar9 * 8) = uStack_88;
      }
      uVar13 = uVar13 + 1;
      if ((int)uVar11 <= (int)uVar13) break;
      pFVar3 = (param_2->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
      while( true ) {
        if ((*(short *)(*(longlong *)(pFVar3 + (ulonglong)(uVar13 >> 9) * 8) +
                       (ulonglong)(uVar13 & 0x1ff) * 2) != 0) &&
           (*(short *)(*(longlong *)(pFVar3 + (ulonglong)(uVar13 >> 9) * 8) +
                      (ulonglong)(uVar13 & 0x1ff) * 2) != -1)) break;
        uVar13 = uVar13 + 1;
        if ((int)uVar11 <= (int)uVar13) goto joined_r0x00014cb6c228;
      }
    }
  } while( true );
}

// Call @ 14cb77130

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGroupTopologySelector::DrawSelection'::__l30::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `FGroupTopologySelector::DrawSelection'::__l30::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14cb77140

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGeometrySelectionManager::RebuildSelectableRenderCache'::__l14::<lambda_1>,bool,UE::Geometry::FGeoSelectionID>
::Call(void *param_1,FGeoSelectionID *param_2)

{
  return true;
}

// Call @ 14cb77150

FLinearColor * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<UE::Internal::<lambda_25_>,FLinearColor,FLinearColor_const_&>::Call
          (FLinearColor *__return_storage_ptr__,void *param_1,FLinearColor *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&param_2->field0_0x0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
  return __return_storage_ptr__;
}

// Call @ 14cb77170

bool __cdecl
UE::Core::Private::Function::TFunctionRefCaller<UMeshTopologySelectionMechanic::<lambda_29_>,bool>::
Call(void *param_1)

{
  return (bool)*(undefined1 *)(*(longlong *)param_1 + 0x780);
}

// Call @ 14cb77190

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FDynamicMeshPolygroupTransformer::BeginTransform'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>,void,int,UE::Math::TVector<double>_const_&>
::Call(void *param_1,int *param_2,TVector<double> *param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForAnyElementType *pFVar5;
  int local_18 [4];
  
  local_18[0] = *param_2;
  lVar1 = *(longlong *)param_1;
  pFVar5 = (ForAnyElementType *)(lVar1 + 0x140);
  if ((pFVar5->Data <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar5->Data + (longlong)*(int *)(lVar1 + 0x14c) * 4)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = *(int *)(lVar1 + 0x148);
  if (iVar4 == *(int *)(lVar1 + 0x14c)) {
    iVar4 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar5,(int *)(lVar1 + 0x14c));
  }
  *(int *)(lVar1 + 0x148) = iVar4 + 1;
  *(int *)(pFVar5->Data + (longlong)iVar4 * 4) = local_18[0];
  return;
}

// Call @ 14cb77250

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UPolygonSelectionMechanic::FloodSelection'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>,bool,UE::Geometry::FGeoSelectionID,UE::Geometry::FGeoSelectionID>
::Call(void *param_1,FGeoSelectionID *param_2,FGeoSelectionID *param_3)

{
  return true;
}

// Call @ 14cb77260

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ToolSelectionUtil::AccumulateSelectionElements'::__l2::<lambda_2>,void,int,UE::Geometry::TSegment3<double>_const_&>
::Call(void *param_1,int *param_2,TSegment3<double> *param_3)

{
  `ToolSelectionUtil::AccumulateSelectionElements'::__l2::<lambda_2>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 14cb77270

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDynamicMeshPolygroupTransformer::BeginTransform'::__l2::<lambda_2>,void,UE::Geometry::FDynamicMesh3_const_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
  FMeshVertexChangeBuilder *this;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> TStack_58;
  
  this = *(FMeshVertexChangeBuilder **)(*(longlong *)param_1 + 0x128);
  TStack_58.Elements._0_8_ = 0;
  TStack_58.Elements._8_8_ = 0;
  TStack_58.Elements._32_8_ = 0;
  TStack_58.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  TStack_58.Elements._48_8_ = _UNK_150631d98;
  TStack_58.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  TStack_58.HashSize = 0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&TStack_58,
             (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
             (*(longlong *)(*(longlong *)param_1 + 0x1b8) + 0x38));
  FMeshVertexChangeBuilder::SaveVertices<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
            (this,param_2,&TStack_58,true);
  FMeshVertexChangeBuilder::SaveOverlayNormals
            (*(FMeshVertexChangeBuilder **)(*(longlong *)param_1 + 0x128),param_2,
             (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
             (*(longlong *)(*(longlong *)param_1 + 0x1b8) + 0x268),true);
  return;
}

// Call @ 14cb77280

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGeometrySelectionManager::CreateOrUpdateAllSets'::__l2::<lambda_2>,void,int,TArray<FRenderableTriangle,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,int *param_2,TArray<FRenderableTriangle,TSizedDefaultAllocator<32>_> *param_3)

{
  `UGeometrySelectionManager::CreateOrUpdateAllSets'::__l2::<lambda_2>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 14cb77290

double __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FSceneGeometrySpatialCache::FindNearestHit'::__l2::<lambda_2>,double,int,UE::Math::TRay<double>_const_&>
::Call(void *param_1,int *param_2,TRay<double> *param_3)

{
  double dVar1;
  
  dVar1 = `UE::Geometry::FSceneGeometrySpatialCache::FindNearestHit'::__l2::<lambda_2>::operator()
                    (param_1,*param_2,param_3);
  return dVar1;
}

// Call @ 14cb772a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::InitializeGeometrySelectionVisualization'::__l2::<lambda_2>,void,int,UE::Geometry::TSegment3<double>_const_&>
::Call(void *param_1,int *param_2,TSegment3<double> *param_3)

{
  return;
}

// Call @ 14cb772b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSceneDynamicMeshSpatial::OnGeometryModified'::__l2::<lambda_2>,void,UE::Geometry::FDynamicMesh3_const_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
  longlong lVar1;
  ulong64 uVar2;
  
  lVar1 = *(longlong *)param_1;
  *(FDynamicMesh3 **)(lVar1 + 0xa8) = param_2;
  *(undefined8 *)(lVar1 + 0xb0) = 0;
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown
            ((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)(lVar1 + 0xa0),false);
  uVar2 = UE::Geometry::FDynamicMesh3::GetChangeStamp(*(FDynamicMesh3 **)(lVar1 + 0xa8));
  *(ulong64 *)(lVar1 + 0xb0) = uVar2;
  return;
}

// Call @ 14cb77300

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMeshTopologySelectionMechanic::Setup'::__l2::<lambda_2>,void,bool_const_&>::
Call(void *param_1,bool *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014cb77306. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1 + 0x310))();
  return;
}

// Call @ 14cb77320

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FBaseDynamicMeshSelector::UpdateSelectionViaRaycast_GroupEdges'::__l5::<lambda_2>,bool,int>
::Call(void *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  FColliderMesh *this;
  TVector<double> *pTVar3;
  TVector<double> local_28;
  
  iVar1 = *param_2;
  this = FBaseDynamicMeshSelector::GetColliderMesh(*(FBaseDynamicMeshSelector **)param_1);
  pTVar3 = UE::Geometry::FColliderMesh::GetTriNormal(this,&local_28,iVar1);
  lVar2 = *(longlong *)((longlong)param_1 + 8);
  return *(double *)(lVar2 + 0x20) * (pTVar3->field0_0x0)._s_0.Y +
         *(double *)(lVar2 + 0x18) * (pTVar3->field0_0x0)._s_0.X +
         *(double *)(lVar2 + 0x28) * (pTVar3->field0_0x0)._s_0.Z < 0.0;
}

// Call @ 14cb77390

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FBasicDynamicMeshSelectionTransformer::BeginTransform'::__l2::<lambda_1>::operator()'::__l7::<lambda_2>,void,unsigned___int64,UE::Math::TVector<double>_const_&>
::Call(void *param_1,ulong64 *param_2,TVector<double> *param_3)

{
  undefined4 local_res8 [2];
  int local_res10 [6];
  
  local_res8[0] = (undefined4)*param_2;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
            (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)param_1,local_res10,
             (bool *)local_res8);
  return;
}

// Call @ 14cb773c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FBaseDynamicMeshSelector::AccumulateSelectionBounds'::__l7::<lambda_2>,void,UE::Geometry::FDynamicMesh3_const_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
  undefined8 local_28;
  undefined8 local_20;
  code *local_18;
  undefined8 *local_10;
  
  local_28 = *(undefined8 *)((longlong)param_1 + 0x10);
  local_20 = *(undefined8 *)((longlong)param_1 + 0x18);
  local_10 = &local_28;
  local_18 = TFunctionRefCaller<``FBaseDynamicMeshSelector::AccumulateSelectionBounds'::__l7::<lambda_2>::operator()'::__l2::<lambda_1>,void,unsigned___int64,UE::Math::TVector<double>_const_&>
             ::Call;
  UE::Geometry::EnumerateTriangleSelectionVertices
            (*(FGeometrySelection **)param_1,param_2,*(TTransform<double> **)((longlong)param_1 + 8)
             ,(TFunctionRef<void___cdecl(unsigned___int64,UE::Math::TVector<double>_const_&)> *)
              &local_18);
  return;
}

// Call @ 14cb77410

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FBaseDynamicMeshSelector::GetSelectionFrame'::__l7::<lambda_2>,void,UE::Geometry::FDynamicMesh3_const_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
  UE::Geometry::GetTriangleSelectionFrame
            (*(FGeometrySelection **)param_1,param_2,*(TFrame3<double> **)((longlong)param_1 + 8));
  return;
}

// Call @ 14cb77430

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMeshTopologySelectionMechanic::GetSelectionBounds'::__l10::<lambda_2>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// Call @ 14cb77450

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FBaseDynamicMeshSelector::RayHitTest'::__l14::<lambda_2>,bool,int,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
::Call(void *param_1,int *param_2,TVector<double> *param_3,TVector<double> *param_4)

{
  bool bVar1;
  
  bVar1 = `FBaseDynamicMeshSelector::RayHitTest'::__l14::<lambda_2>::operator()
                    (param_1,*param_2,param_3,param_4);
  return bVar1;
}

// Call @ 14cb77460

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FBaseDynamicMeshSelector::UpdateSelectionViaShape'::__l14::<lambda_2>,void,UE::Geometry::FDynamicMesh3_const_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
  int *piVar1;
  double *pdVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  TQuaternion<double> *pTVar6;
  ulonglong uVar7;
  ForAnyElementType *pFVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  int iVar13;
  ulonglong uVar14;
  TVector<double> *pTVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  float afStackX_10 [2];
  float afStackX_18 [4];
  ulonglong uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  TVector<double>_u_0 TStack_e0;
  TVector<double>_u_0 TStack_c8;
  TVector<double>_u_0 TStack_b0;
  TVector<double>_u_0 TStack_98;
  TVector<double> TStack_80;
  TVector<double> aTStack_68 [2];
  
  uVar18 = (param_2->EdgeRefCounts).RefCounts.CurBlockUsed +
           (param_2->EdgeRefCounts).RefCounts.CurBlock * 0x200;
  uVar17 = 0;
  if ((uVar18 != 0) &&
     (pFVar4 = (param_2->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar17 = 0,
     0xfffd < (ushort)(**(short **)pFVar4 - 1U))) {
    uVar16 = 1;
    uVar17 = 1;
    if (1 < (int)uVar18) {
      do {
        lVar5 = *(longlong *)(pFVar4 + (ulonglong)(uVar16 >> 9) * 8);
        if ((*(short *)(lVar5 + (ulonglong)(uVar16 & 0x1ff) * 2) != 0) &&
           (uVar17 = uVar16, *(short *)(lVar5 + (ulonglong)(uVar16 & 0x1ff) * 2) != -1)) break;
        uVar16 = uVar16 + 1;
        uVar17 = uVar16;
      } while ((int)uVar16 < (int)uVar18);
    }
  }
joined_r0x00014cb6d9ea:
  do {
    if (uVar17 == uVar18) {
      return;
    }
    while( true ) {
      pFVar4 = (param_2->Vertices).Blocks.AllocatorInstance.Data;
      pTVar6 = *(TQuaternion<double> **)param_1;
      uVar7 = *(ulonglong *)
               (*(longlong *)
                 ((param_2->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar17 >> 9) * 8) +
               (ulonglong)(uVar17 & 0x1ff) * 0x10);
      uVar14 = (ulonglong)((uint)uVar7 & 0x1ff);
      lVar5 = *(longlong *)(pFVar4 + ((uVar7 & 0xffffffff) >> 9) * 8);
      pdVar2 = (double *)(lVar5 + uVar14 * 0x18);
      TStack_e0._s_0.X = *pdVar2;
      TStack_e0._s_0.Y = pdVar2[1];
      TStack_e0._s_0.Z = *(double *)(lVar5 + 0x10 + uVar14 * 0x18);
      uVar14 = (ulonglong)((uint)(uVar7 >> 0x20) & 0x1ff);
      lVar5 = *(longlong *)(pFVar4 + (uVar7 >> 0x29) * 8);
      pdVar2 = (double *)(lVar5 + uVar14 * 0x18);
      dVar10 = *pdVar2;
      dVar11 = pdVar2[1];
      TStack_c8._s_0.Z = *(double *)(lVar5 + 0x10 + uVar14 * 0x18);
      TStack_b0._s_0.X = TStack_e0._s_0.X * pTVar6[1].field0_0x0._s_0.W;
      TStack_b0._s_0.Y = TStack_e0._s_0.Y * pTVar6[2].field0_0x0._s_0.X;
      TStack_b0._s_0.Z = TStack_e0._s_0.Z * pTVar6[2].field0_0x0._s_0.Y;
      TStack_c8._s_0.X = dVar10;
      TStack_c8._s_0.Y = dVar11;
      pTVar15 = UE::Geometry::operator*<double>
                          (&TStack_80,pTVar6,(TVector<double> *)&TStack_b0._s_0);
      TStack_e0._s_0.X = pTVar6[1].field0_0x0._s_0.X + (pTVar15->field0_0x0)._s_0.X;
      TStack_e0._s_0.Y = (pTVar15->field0_0x0)._s_0.Y + pTVar6[1].field0_0x0._s_0.Y;
      TStack_e0._s_0.Z = (pTVar15->field0_0x0)._s_0.Z + pTVar6[1].field0_0x0._s_0.Z;
      TStack_98._s_0.X = dVar10 * pTVar6[1].field0_0x0._s_0.W;
      TStack_98._s_0.Y = dVar11 * pTVar6[2].field0_0x0._s_0.X;
      TStack_98._s_0.Z = TStack_c8._s_0.Z * pTVar6[2].field0_0x0._s_0.Y;
      pTVar15 = UE::Geometry::operator*<double>
                          (aTStack_68,pTVar6,(TVector<double> *)&TStack_98._s_0);
      TStack_c8._s_0.Y = (pTVar15->field0_0x0)._s_0.Y + pTVar6[1].field0_0x0._s_0.Y;
      TStack_c8._s_0.Z = (pTVar15->field0_0x0)._s_0.Z + pTVar6[1].field0_0x0._s_0.Z;
      TStack_c8._s_0.X = pTVar6[1].field0_0x0._s_0.X + (pTVar15->field0_0x0)._s_0.X;
      bVar12 = FConvexVolume::IntersectLineSegment
                         (*(FConvexVolume **)((longlong)param_1 + 8),
                          (TVector<double> *)&TStack_e0._s_0,(TVector<double> *)&TStack_c8._s_0);
      if (bVar12) {
        afStackX_10[0] = 0.0;
        bVar12 = FConvexVolume::IntersectSphere
                           (*(FConvexVolume **)((longlong)param_1 + 8),
                            (TVector<double> *)&TStack_e0._s_0,afStackX_10);
        if (bVar12) {
          afStackX_18[0] = 0.0;
          bVar12 = FConvexVolume::IntersectSphere
                             (*(FConvexVolume **)((longlong)param_1 + 8),
                              (TVector<double> *)&TStack_c8._s_0,afStackX_18);
          if (bVar12) {
            pFVar8 = *(ForAnyElementType **)((longlong)param_1 + 0x10);
            uVar3 = *(uint *)(*(longlong *)
                               ((param_2->Edges).Blocks.AllocatorInstance.Data +
                               (ulonglong)(uVar17 >> 9) * 8) + 8 +
                             (ulonglong)(uVar17 & 0x1ff) * 0x10);
            uVar16 = uVar3 * 4;
            lVar5 = *(longlong *)
                     ((param_2->TriangleEdges).Blocks.AllocatorInstance.Data +
                     (ulonglong)(uVar3 >> 9) * 8);
            uStack_f0 = *(undefined8 *)(lVar5 + (ulonglong)(uVar3 & 0x1ff) * 0xc);
            uStack_e8 = *(undefined4 *)(lVar5 + 8 + (ulonglong)(uVar3 & 0x1ff) * 0xc);
            if ((uint)uStack_f0 != uVar17) {
              uVar16 = uVar16 | ((uint)((ulonglong)uStack_f0 >> 0x20) != uVar17) + 1;
            }
            uStack_f8 = (ulonglong)(uVar16 >> 2 | uVar16 << 0x1e);
            if (((pFVar8->Data <= (FScriptContainerElement *)&uStack_f8) &&
                ((FScriptContainerElement *)&uStack_f8 <
                 pFVar8->Data + (longlong)*(int *)((longlong)&pFVar8[1].Data + 4) * 8)) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            iVar13 = *(int *)&pFVar8[1].Data;
            piVar1 = (int *)((longlong)&pFVar8[1].Data + 4);
            if (iVar13 == *piVar1) {
              iVar13 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,pFVar8,piVar1);
            }
            *(int *)&pFVar8[1].Data = iVar13 + 1;
            *(ulonglong *)(pFVar8->Data + (longlong)iVar13 * 8) = uStack_f8;
          }
        }
      }
      uVar17 = uVar17 + 1;
      if ((int)uVar18 <= (int)uVar17) break;
      pFVar4 = (param_2->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
      while( true ) {
        if ((*(short *)(*(longlong *)(pFVar4 + (ulonglong)(uVar17 >> 9) * 8) +
                       (ulonglong)(uVar17 & 0x1ff) * 2) != 0) &&
           (*(short *)(*(longlong *)(pFVar4 + (ulonglong)(uVar17 >> 9) * 8) +
                      (ulonglong)(uVar17 & 0x1ff) * 2) != -1)) break;
        uVar17 = uVar17 + 1;
        if ((int)uVar18 <= (int)uVar17) goto joined_r0x00014cb6d9ea;
      }
    }
  } while( true );
}

// Call @ 14cb77470

bool __cdecl
UE::Core::Private::Function::TFunctionRefCaller<UMeshTopologySelectionMechanic::<lambda_30_>,bool>::
Call(void *param_1)

{
  return (bool)*(undefined1 *)(*(longlong *)param_1 + 0x781);
}

// Call @ 14cb77490

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FBasicDynamicMeshSelectionTransformer::BeginTransform'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>,void,int,UE::Math::TVector<double>_const_&>
::Call(void *param_1,int *param_2,TVector<double> *param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForAnyElementType *pFVar5;
  int local_18 [4];
  
  local_18[0] = *param_2;
  lVar1 = *(longlong *)param_1;
  pFVar5 = (ForAnyElementType *)(lVar1 + 0x140);
  if ((pFVar5->Data <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar5->Data + (longlong)*(int *)(lVar1 + 0x14c) * 4)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = *(int *)(lVar1 + 0x148);
  if (iVar4 == *(int *)(lVar1 + 0x14c)) {
    iVar4 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar5,(int *)(lVar1 + 0x14c));
  }
  *(int *)(lVar1 + 0x148) = iVar4 + 1;
  *(int *)(pFVar5->Data + (longlong)iVar4 * 4) = local_18[0];
  return;
}

// Call @ 14cb77550

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FDynamicMeshPolygroupTransformer::BeginTransform'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>,void,int,UE::Geometry::TSegment3<double>_const_&>
::Call(void *param_1,int *param_2,TSegment3<double> *param_3)

{
  ``FDynamicMeshPolygroupTransformer::BeginTransform'::__l2::<lambda_1>::operator()'::__l2::
  <lambda_3>::operator()(param_1,*param_2,param_3);
  return;
}

// Call @ 14cb77560

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ToolSelectionUtil::AccumulateSelectionElements'::__l2::<lambda_3>,void,int,UE::Geometry::TTriangle3<double>_const_&>
::Call(void *param_1,int *param_2,TTriangle3<double> *param_3)

{
  `ToolSelectionUtil::AccumulateSelectionElements'::__l2::<lambda_3>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 14cb77570

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FSceneCapturePhotoSet::Compute'::__l2::<lambda_3>,void,enum_UE::Geometry::ERenderCaptureType,UE::Geometry::FSpatialPhotoParams_const_&>
::Call(void *param_1,ERenderCaptureType *param_2,FSpatialPhotoParams *param_3)

{
  `UE::Geometry::FSceneCapturePhotoSet::Compute'::__l2::<lambda_3>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 14cb77580

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGeometrySelectionManager::CreateOrUpdateAllSets'::__l2::<lambda_3>,void,int,TArray<FRenderablePoint,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,int *param_2,TArray<FRenderablePoint,TSizedDefaultAllocator<32>_> *param_3)

{
  `UGeometrySelectionManager::CreateOrUpdateAllSets'::__l2::<lambda_3>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 14cb77590

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::InitializeGeometrySelectionVisualization'::__l2::<lambda_3>,void,int,UE::Geometry::TTriangle3<double>_const_&>
::Call(void *param_1,int *param_2,TTriangle3<double> *param_3)

{
  return;
}

// Call @ 14cb775a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMeshTopologySelectionMechanic::Setup'::__l2::<lambda_3>,void,bool_const_&>::
Call(void *param_1,bool *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014cb775a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1 + 0x310))();
  return;
}

// Call @ 14cb775c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FBaseDynamicMeshSelector::UpdateSelectionViaShape'::__l18::<lambda_3>,void,UE::Geometry::FDynamicMesh3_const_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
  int *piVar1;
  double *pdVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  TQuaternion<double> *pTVar5;
  ForAnyElementType *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  int iVar13;
  ulonglong uVar14;
  TVector<double> *pTVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  bool abStackX_10 [8];
  ulonglong uStack_128;
  TVector<double>_u_0 TStack_120;
  TVector<double>_u_0 TStack_108;
  TVector<double>_u_0 TStack_f0;
  TVector<double>_u_0 TStack_d8;
  TVector<double>_u_0 TStack_c0;
  TVector<double>_u_0 TStack_a8;
  TVector<double> TStack_90;
  TVector<double> TStack_78;
  TVector<double> aTStack_60 [2];
  
  uVar17 = (param_2->TriangleRefCounts).RefCounts.CurBlockUsed +
           (param_2->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  uVar19 = 0;
  if ((uVar17 != 0) &&
     (pFVar3 = (param_2->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar19 = 0,
     0xfffd < (ushort)(**(short **)pFVar3 - 1U))) {
    uVar18 = 1;
    uVar19 = 1;
    if (1 < (int)uVar17) {
      do {
        lVar4 = *(longlong *)(pFVar3 + (ulonglong)(uVar18 >> 9) * 8);
        if ((*(short *)(lVar4 + (ulonglong)(uVar18 & 0x1ff) * 2) != 0) &&
           (uVar19 = uVar18, *(short *)(lVar4 + (ulonglong)(uVar18 & 0x1ff) * 2) != -1)) break;
        uVar18 = uVar18 + 1;
        uVar19 = uVar18;
      } while ((int)uVar18 < (int)uVar17);
    }
  }
joined_r0x00014cb6e628:
  do {
    if (uVar19 == uVar17) {
      return;
    }
    while( true ) {
      pFVar3 = (param_2->Vertices).Blocks.AllocatorInstance.Data;
      uVar14 = (ulonglong)(uVar19 & 0x1ff);
      pTVar5 = *(TQuaternion<double> **)param_1;
      lVar4 = *(longlong *)
               ((param_2->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar19 >> 9) * 8);
      uVar18 = *(uint *)(lVar4 + uVar14 * 0xc);
      uVar16 = (ulonglong)(uVar18 & 0x1ff);
      pdVar2 = (double *)(*(longlong *)(pFVar3 + (ulonglong)(uVar18 >> 9) * 8) + uVar16 * 0x18);
      TStack_f0._s_0.X = *pdVar2;
      TStack_f0._s_0.Y = pdVar2[1];
      TStack_f0._s_0.Z =
           *(double *)(*(longlong *)(pFVar3 + (ulonglong)(uVar18 >> 9) * 8) + 0x10 + uVar16 * 0x18);
      uVar18 = *(uint *)(lVar4 + 4 + uVar14 * 0xc);
      uVar16 = (ulonglong)(uVar18 & 0x1ff);
      pdVar2 = (double *)(*(longlong *)(pFVar3 + (ulonglong)(uVar18 >> 9) * 8) + uVar16 * 0x18);
      dVar8 = *pdVar2;
      dVar9 = pdVar2[1];
      TStack_108._s_0.Z =
           *(double *)(*(longlong *)(pFVar3 + (ulonglong)(uVar18 >> 9) * 8) + 0x10 + uVar16 * 0x18);
      uVar18 = *(uint *)(lVar4 + 8 + uVar14 * 0xc);
      uVar14 = (ulonglong)(uVar18 & 0x1ff);
      pdVar2 = (double *)(*(longlong *)(pFVar3 + (ulonglong)(uVar18 >> 9) * 8) + uVar14 * 0x18);
      dVar10 = *pdVar2;
      dVar11 = pdVar2[1];
      TStack_120._s_0.Z =
           *(double *)(*(longlong *)(pFVar3 + (ulonglong)(uVar18 >> 9) * 8) + 0x10 + uVar14 * 0x18);
      TStack_d8._s_0.X = TStack_f0._s_0.X * pTVar5[1].field0_0x0._s_0.W;
      TStack_d8._s_0.Y = TStack_f0._s_0.Y * pTVar5[2].field0_0x0._s_0.X;
      TStack_d8._s_0.Z = TStack_f0._s_0.Z * pTVar5[2].field0_0x0._s_0.Y;
      TStack_120._s_0.X = dVar10;
      TStack_120._s_0.Y = dVar11;
      TStack_108._s_0.X = dVar8;
      TStack_108._s_0.Y = dVar9;
      pTVar15 = UE::Geometry::operator*<double>
                          (&TStack_90,pTVar5,(TVector<double> *)&TStack_d8._s_0);
      TStack_f0._s_0.X = pTVar5[1].field0_0x0._s_0.X + (pTVar15->field0_0x0)._s_0.X;
      TStack_f0._s_0.Y = (pTVar15->field0_0x0)._s_0.Y + pTVar5[1].field0_0x0._s_0.Y;
      TStack_f0._s_0.Z = (pTVar15->field0_0x0)._s_0.Z + pTVar5[1].field0_0x0._s_0.Z;
      TStack_c0._s_0.X = dVar8 * pTVar5[1].field0_0x0._s_0.W;
      TStack_c0._s_0.Y = dVar9 * pTVar5[2].field0_0x0._s_0.X;
      TStack_c0._s_0.Z = TStack_108._s_0.Z * pTVar5[2].field0_0x0._s_0.Y;
      pTVar15 = UE::Geometry::operator*<double>
                          (&TStack_78,pTVar5,(TVector<double> *)&TStack_c0._s_0);
      TStack_108._s_0.X = pTVar5[1].field0_0x0._s_0.X + (pTVar15->field0_0x0)._s_0.X;
      TStack_108._s_0.Y = (pTVar15->field0_0x0)._s_0.Y + pTVar5[1].field0_0x0._s_0.Y;
      TStack_108._s_0.Z = (pTVar15->field0_0x0)._s_0.Z + pTVar5[1].field0_0x0._s_0.Z;
      TStack_a8._s_0.X = dVar10 * pTVar5[1].field0_0x0._s_0.W;
      TStack_a8._s_0.Y = dVar11 * pTVar5[2].field0_0x0._s_0.X;
      TStack_a8._s_0.Z = TStack_120._s_0.Z * pTVar5[2].field0_0x0._s_0.Y;
      pTVar15 = UE::Geometry::operator*<double>
                          (aTStack_60,pTVar5,(TVector<double> *)&TStack_a8._s_0);
      TStack_120._s_0.X = pTVar5[1].field0_0x0._s_0.X + (pTVar15->field0_0x0)._s_0.X;
      TStack_120._s_0.Y = (pTVar15->field0_0x0)._s_0.Y + pTVar5[1].field0_0x0._s_0.Y;
      TStack_120._s_0.Z = (pTVar15->field0_0x0)._s_0.Z + pTVar5[1].field0_0x0._s_0.Z;
      abStackX_10[0] = false;
      bVar12 = FConvexVolume::IntersectTriangle
                         (*(FConvexVolume **)((longlong)param_1 + 8),
                          (TVector<double> *)&TStack_f0._s_0,(TVector<double> *)&TStack_108._s_0,
                          (TVector<double> *)&TStack_120._s_0,abStackX_10);
      if ((bVar12) && (abStackX_10[0] != false)) {
        pFVar6 = *(ForAnyElementType **)((longlong)param_1 + 0x10);
        uStack_128 = (ulonglong)uVar19;
        if ((pFVar6->Data <= (FScriptContainerElement *)&uStack_128) &&
           (((FScriptContainerElement *)&uStack_128 <
             pFVar6->Data + (longlong)*(int *)((longlong)&pFVar6[1].Data + 4) * 8 &&
            (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar12)))) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar13 = *(int *)&pFVar6[1].Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        if (iVar13 == *piVar1) {
          iVar13 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,pFVar6,piVar1);
        }
        *(int *)&pFVar6[1].Data = iVar13 + 1;
        *(ulonglong *)(pFVar6->Data + (longlong)iVar13 * 8) = uStack_128;
      }
      uVar19 = uVar19 + 1;
      if ((int)uVar17 <= (int)uVar19) break;
      pFVar3 = (param_2->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
      while( true ) {
        if ((*(short *)(*(longlong *)(pFVar3 + (ulonglong)(uVar19 >> 9) * 8) +
                       (ulonglong)(uVar19 & 0x1ff) * 2) != 0) &&
           (*(short *)(*(longlong *)(pFVar3 + (ulonglong)(uVar19 >> 9) * 8) +
                      (ulonglong)(uVar19 & 0x1ff) * 2) != -1)) break;
        uVar19 = uVar19 + 1;
        if ((int)uVar17 <= (int)uVar19) goto joined_r0x00014cb6e628;
      }
    }
  } while( true );
}

// Call @ 14cb775d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FBaseDynamicMeshSelector::UpdateSelectionViaRaycast_GroupEdges'::__l20::<lambda_3>,void,UE::Geometry::FDynamicMesh3_const_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uStack_18;
  
  uVar2 = **(uint **)((longlong)param_1 + 8);
  uVar3 = *(uint *)(*(longlong *)
                     ((param_2->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar2 >> 9) * 8)
                    + 8 + (ulonglong)(uVar2 & 0x1ff) * 0x10);
  uVar1 = *(undefined8 *)
           (*(longlong *)
             ((param_2->TriangleEdges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar3 >> 9) * 8)
           + (ulonglong)(uVar3 & 0x1ff) * 0xc);
  uStack_18 = (uint)uVar1;
  if (uStack_18 == uVar2) {
    **(uint **)param_1 = uVar3 * 4;
    return;
  }
  **(uint **)param_1 = ((uint)((ulonglong)uVar1 >> 0x20) != uVar2) + 1 | uVar3 * 4;
  return;
}

// Call @ 14cb775e0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMeshTopologySelector::FindSelectedElement'::__l11::<lambda_3>,bool,UE::Geometry::TAxisAlignedBox3<double>_const_&,int>
::Call(void *param_1,TAxisAlignedBox3<double> *param_2,int *param_3)

{
  bool bVar1;
  
  bVar1 = `FMeshTopologySelector::FindSelectedElement'::__l11::<lambda_3>::operator()
                    (param_1,param_2,*param_3);
  return bVar1;
}

// Call @ 14cb775f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FBasicDynamicMeshSelectionTransformer::BeginTransform'::__l2::<lambda_1>::operator()'::__l2::<lambda_4>,void,int,UE::Geometry::TSegment3<double>_const_&>
::Call(void *param_1,int *param_2,TSegment3<double> *param_3)

{
  ``FBasicDynamicMeshSelectionTransformer::BeginTransform'::__l2::<lambda_1>::operator()'::__l2::
  <lambda_4>::operator()(param_1,*param_2,param_3);
  return;
}

// Call @ 14cb77600

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FDynamicMeshPolygroupTransformer::BeginTransform'::__l2::<lambda_1>::operator()'::__l2::<lambda_4>,void,int,UE::Geometry::TTriangle3<double>_const_&>
::Call(void *param_1,int *param_2,TTriangle3<double> *param_3)

{
  return;
}

// Call @ 14cb77610

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FSceneCapturePhotoSet::Compute'::__l2::<lambda_4>,void,enum_UE::Geometry::ERenderCaptureType,UE::Geometry::FSpatialPhotoParams_const_&>
::Call(void *param_1,ERenderCaptureType *param_2,FSpatialPhotoParams *param_3)

{
  `UE::Geometry::FSceneCapturePhotoSet::Compute'::__l2::<lambda_4>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 14cb77620

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMeshTopologySelectionMechanic::Setup'::__l2::<lambda_4>,void,bool_const_&>::
Call(void *param_1,bool *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014cb77626. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1 + 0x310))();
  return;
}

// Call @ 14cb77640

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::InitializeGeometrySelectionVisualization'::__l22::<lambda_4>,void,int,TArray<FRenderablePoint,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,int *param_2,TArray<FRenderablePoint,TSizedDefaultAllocator<32>_> *param_3)

{
  `UE::Geometry::InitializeGeometrySelectionVisualization'::__l22::<lambda_4>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 14cb77650

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FBaseDynamicMeshSelector::UpdateSelectionViaShape'::__l25::<lambda_4>,void,UE::Geometry::FDynamicMesh3_const_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
  int *piVar1;
  uint *puVar2;
  double *pdVar3;
  int iVar4;
  longlong lVar5;
  TQuaternion<double> *pTVar6;
  longlong lVar7;
  ForAnyElementType *pFVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  TVector<double> *pTVar12;
  ulonglong uVar13;
  uint *puVar14;
  undefined1 auStackX_8 [8];
  float afStackX_18 [2];
  undefined8 uStack_98;
  TVector<double>_u_0 TStack_90;
  TVector<double>_u_0 TStack_78;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  TVector<double> TStack_48;
  
  lVar5 = **(longlong **)param_1;
  iVar4 = *(int *)(lVar5 + 0x48);
  puVar14 = *(uint **)(lVar5 + 0x40);
  puVar2 = puVar14 + (longlong)iVar4 * 6;
  while( true ) {
    if (*(int *)(lVar5 + 0x48) != iVar4) {
      auStackX_8[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::FGroupTopology::FCorner_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(auStackX_8);
    }
    if (puVar14 == puVar2) break;
    pTVar6 = *(TQuaternion<double> **)((longlong)param_1 + 8);
    uVar13 = (ulonglong)(*puVar14 & 0x1ff);
    lVar7 = *(longlong *)
             ((param_2->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(*puVar14 >> 9) * 8);
    pdVar3 = (double *)(lVar7 + uVar13 * 0x18);
    dStack_60 = *pdVar3;
    dStack_58 = pdVar3[1];
    dStack_50 = *(double *)(lVar7 + 0x10 + uVar13 * 0x18);
    TStack_90._s_0.X = dStack_60 * pTVar6[1].field0_0x0._s_0.W;
    TStack_90._s_0.Z = dStack_50 * pTVar6[2].field0_0x0._s_0.Y;
    TStack_90._s_0.Y = dStack_58 * pTVar6[2].field0_0x0._s_0.X;
    pTVar12 = UE::Geometry::operator*<double>(&TStack_48,pTVar6,(TVector<double> *)&TStack_90._s_0);
    TStack_78._s_0.Z = pTVar6[1].field0_0x0._s_0.Z + (pTVar12->field0_0x0)._s_0.Z;
    TStack_78._s_0.Y = pTVar6[1].field0_0x0._s_0.Y + (pTVar12->field0_0x0)._s_0.Y;
    TStack_78._s_0.X = pTVar6[1].field0_0x0._s_0.X + (pTVar12->field0_0x0)._s_0.X;
    afStackX_18[0] = 0.0;
    bVar10 = FConvexVolume::IntersectSphere
                       (*(FConvexVolume **)((longlong)param_1 + 0x10),
                        (TVector<double> *)&TStack_78._s_0,afStackX_18);
    if (bVar10) {
      pFVar8 = *(ForAnyElementType **)((longlong)param_1 + 0x18);
      iVar11 = UE::Geometry::FGroupTopology::GetCornerIDFromVertexID
                         ((FGroupTopology *)**(undefined8 **)param_1,*puVar14);
      uStack_98 = CONCAT44(iVar11,*puVar14);
      if ((pFVar8->Data <= (FScriptContainerElement *)&uStack_98) &&
         ((FScriptContainerElement *)&uStack_98 <
          pFVar8->Data + (longlong)*(int *)((longlong)&pFVar8[1].Data + 4) * 8)) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      iVar11 = *(int *)&pFVar8[1].Data;
      piVar1 = (int *)((longlong)&pFVar8[1].Data + 4);
      if (iVar11 == *piVar1) {
        iVar11 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,pFVar8,piVar1);
      }
      *(int *)&pFVar8[1].Data = iVar11 + 1;
      *(undefined8 *)(pFVar8->Data + (longlong)iVar11 * 8) = uStack_98;
    }
    puVar14 = puVar14 + 6;
  }
  return;
}

// Call @ 14cb77660

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FBaseDynamicMeshSelector::UpdateSelectionViaRaycast_GroupEdges'::__l26::<lambda_4>,void,UE::Geometry::FDynamicMesh3_const_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uStack_18;
  
  uVar2 = **(uint **)((longlong)param_1 + 8);
  uVar3 = *(uint *)(*(longlong *)
                     ((param_2->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar2 >> 9) * 8)
                    + 8 + (ulonglong)(uVar2 & 0x1ff) * 0x10);
  uVar1 = *(undefined8 *)
           (*(longlong *)
             ((param_2->TriangleEdges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar3 >> 9) * 8)
           + (ulonglong)(uVar3 & 0x1ff) * 0xc);
  uStack_18 = (uint)uVar1;
  if (uStack_18 == uVar2) {
    **(uint **)param_1 = uVar3 * 4;
    return;
  }
  **(uint **)param_1 = ((uint)((ulonglong)uVar1 >> 0x20) != uVar2) + 1 | uVar3 * 4;
  return;
}

// Call @ 14cb77670

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMeshTopologySelector::FindSelectedElement'::__l11::<lambda_4>,void,int>::Call
          (void *param_1,int *param_2)

{
  `FMeshTopologySelector::FindSelectedElement'::__l11::<lambda_4>::operator()(param_1,*param_2);
  return;
}

// Call @ 14cb77680

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<bool>::TPropertyWatcher<bool><bool,void>'::__l1::<lambda_54_>,bool>
::Call(void *param_1)

{
  return (bool)**(undefined1 **)param_1;
}

// Call @ 14cb77690

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FBasicDynamicMeshSelectionTransformer::BeginTransform'::__l2::<lambda_1>::operator()'::__l2::<lambda_5>,void,int,UE::Geometry::TTriangle3<double>_const_&>
::Call(void *param_1,int *param_2,TTriangle3<double> *param_3)

{
  return;
}

// Call @ 14cb776a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FDynamicMeshPolygroupTransformer::BeginTransform'::__l2::<lambda_1>::operator()'::__l2::<lambda_5>,void,UE::Geometry::FEdgeSpan_const_&>
::Call(void *param_1,FEdgeSpan *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForAnyElementType *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 auStackX_10 [8];
  undefined8 auStack_28 [2];
  
  pFVar8 = (param_2->Edges).AllocatorInstance.Data;
  iVar2 = (param_2->Edges).ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 4;
  while( true ) {
    if ((param_2->Edges).ArrayNum != iVar2) {
      auStackX_10[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStackX_10);
    }
    if (pFVar8 == pFVar1) break;
    lVar3 = *(longlong *)param_1;
    pFVar7 = (ForAnyElementType *)(lVar3 + 0x150);
    auStack_28[0] =
         *(undefined8 *)
          (*(longlong *)
            (*(longlong *)(*(longlong *)((longlong)param_1 + 8) + 0x1c0) +
            (ulonglong)(*(uint *)pFVar8 >> 9) * 8) + (ulonglong)(*(uint *)pFVar8 & 0x1ff) * 0x10);
    if ((pFVar7->Data <= (FScriptContainerElement *)auStack_28) &&
       ((FScriptContainerElement *)auStack_28 < pFVar7->Data + (longlong)*(int *)(lVar3 + 0x15c) * 8
       )) {
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
    iVar6 = *(int *)(lVar3 + 0x158);
    if (iVar6 == *(int *)(lVar3 + 0x15c)) {
      iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,pFVar7,(int *)(lVar3 + 0x15c));
    }
    *(int *)(lVar3 + 0x158) = iVar6 + 1;
    pFVar8 = pFVar8 + 4;
    *(undefined8 *)(pFVar7->Data + (longlong)iVar6 * 8) = auStack_28[0];
  }
  return;
}

// Call @ 14cb776b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMeshTopologySelectionMechanic::Setup'::__l2::<lambda_5>,void,bool_const_&>::
Call(void *param_1,bool *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014cb776b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1 + 0x310))();
  return;
}

// Call @ 14cb776d0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMeshTopologySelector::FindSelectedElement'::__l18::<lambda_5>,bool,int>::Call
          (void *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = `FMeshTopologySelector::FindSelectedElement'::__l18::<lambda_5>::operator()
                    (param_1,*param_2);
  return bVar1;
}

// Call @ 14cb776e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::InitializeGeometrySelectionVisualization'::__l26::<lambda_5>,void,int,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,int *param_2,TArray<FRenderableLine,TSizedDefaultAllocator<32>_> *param_3)

{
  `UE::Geometry::InitializeGeometrySelectionVisualization'::__l26::<lambda_5>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 14cb776f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FBaseDynamicMeshSelector::UpdateSelectionViaShape'::__l29::<lambda_5>,void,UE::Geometry::FDynamicMesh3_const_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
  int *piVar1;
  double *pdVar2;
  uint uVar3;
  longlong lVar4;
  TQuaternion<double> *pTVar5;
  FScriptContainerElement *pFVar6;
  ulonglong uVar7;
  longlong lVar8;
  ForAnyElementType *pFVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  uint *puVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  TVector<double> *pTVar18;
  uint *puVar19;
  uint uVar20;
  longlong lVar21;
  undefined1 auStackX_8 [8];
  FDynamicMesh3 *pFStackX_10;
  float afStackX_18 [2];
  float afStackX_20 [2];
  undefined8 uStack_118;
  longlong lStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  TVector<double>_u_0 TStack_f8;
  TVector<double>_u_0 TStack_e0;
  uint *puStack_c8;
  TVector<double>_u_0 TStack_c0;
  TVector<double>_u_0 TStack_a8;
  TVector<double> TStack_90;
  TVector<double> aTStack_78 [2];
  
  uVar20 = 0;
  lStack_110 = (longlong)*(int *)(**(longlong **)param_1 + 0x68);
  if (0 < lStack_110) {
    lVar21 = 0;
    pFStackX_10 = param_2;
    do {
      lVar4 = **(longlong **)param_1;
      uVar15 = 0;
      if ((int)uVar20 < *(int *)(lVar4 + 0x68)) {
        uVar15 = ~uVar20 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      lVar4 = *(longlong *)(lVar4 + 0x60);
      puVar19 = *(uint **)(lVar4 + 0x20 + lVar21);
      iVar16 = *(int *)(lVar4 + 0x28 + lVar21);
      puStack_c8 = puVar19 + iVar16;
      while( true ) {
        puVar13 = puStack_c8;
        if (*(int *)(lVar4 + 0x28 + lVar21) != iVar16) {
          auStackX_8[0] = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (auStackX_8);
        }
        if (puVar19 == puVar13) break;
        pTVar5 = *(TQuaternion<double> **)((longlong)param_1 + 8);
        pFVar6 = (pFStackX_10->Vertices).Blocks.AllocatorInstance.Data;
        uVar7 = *(ulonglong *)
                 (*(longlong *)
                   ((pFStackX_10->Edges).Blocks.AllocatorInstance.Data +
                   (ulonglong)(*puVar19 >> 9) * 8) + (ulonglong)(*puVar19 & 0x1ff) * 0x10);
        uVar17 = (ulonglong)((uint)uVar7 & 0x1ff);
        lVar8 = *(longlong *)(pFVar6 + ((uVar7 & 0xffffffff) >> 9) * 8);
        pdVar2 = (double *)(lVar8 + uVar17 * 0x18);
        TStack_f8._s_0.X = *pdVar2;
        TStack_f8._s_0.Y = pdVar2[1];
        TStack_f8._s_0.Z = *(double *)(lVar8 + 0x10 + uVar17 * 0x18);
        uVar17 = (ulonglong)((uint)(uVar7 >> 0x20) & 0x1ff);
        lVar8 = *(longlong *)(pFVar6 + (uVar7 >> 0x29) * 8);
        pdVar2 = (double *)(lVar8 + uVar17 * 0x18);
        dVar11 = *pdVar2;
        dVar12 = pdVar2[1];
        TStack_e0._s_0.Z = *(double *)(lVar8 + 0x10 + uVar17 * 0x18);
        TStack_c0._s_0.X = TStack_f8._s_0.X * pTVar5[1].field0_0x0._s_0.W;
        TStack_c0._s_0.Y = TStack_f8._s_0.Y * pTVar5[2].field0_0x0._s_0.X;
        TStack_c0._s_0.Z = TStack_f8._s_0.Z * pTVar5[2].field0_0x0._s_0.Y;
        TStack_e0._s_0.X = dVar11;
        TStack_e0._s_0.Y = dVar12;
        pTVar18 = UE::Geometry::operator*<double>
                            (&TStack_90,pTVar5,(TVector<double> *)&TStack_c0._s_0);
        TStack_f8._s_0.X = (pTVar18->field0_0x0)._s_0.X + pTVar5[1].field0_0x0._s_0.X;
        TStack_f8._s_0.Y = (pTVar18->field0_0x0)._s_0.Y + pTVar5[1].field0_0x0._s_0.Y;
        TStack_f8._s_0.Z = (pTVar18->field0_0x0)._s_0.Z + pTVar5[1].field0_0x0._s_0.Z;
        TStack_a8._s_0.X = dVar11 * pTVar5[1].field0_0x0._s_0.W;
        TStack_a8._s_0.Y = dVar12 * pTVar5[2].field0_0x0._s_0.X;
        TStack_a8._s_0.Z = TStack_e0._s_0.Z * pTVar5[2].field0_0x0._s_0.Y;
        pTVar18 = UE::Geometry::operator*<double>
                            (aTStack_78,pTVar5,(TVector<double> *)&TStack_a8._s_0);
        TStack_e0._s_0.Y = (pTVar18->field0_0x0)._s_0.Y + pTVar5[1].field0_0x0._s_0.Y;
        TStack_e0._s_0.Z = (pTVar18->field0_0x0)._s_0.Z + pTVar5[1].field0_0x0._s_0.Z;
        TStack_e0._s_0.X = pTVar5[1].field0_0x0._s_0.X + (pTVar18->field0_0x0)._s_0.X;
        bVar14 = FConvexVolume::IntersectLineSegment
                           (*(FConvexVolume **)((longlong)param_1 + 0x10),
                            (TVector<double> *)&TStack_f8._s_0,(TVector<double> *)&TStack_e0._s_0);
        if (!bVar14) goto LAB_14cb7018e;
        afStackX_18[0] = 0.0;
        bVar14 = FConvexVolume::IntersectSphere
                           (*(FConvexVolume **)((longlong)param_1 + 0x10),
                            (TVector<double> *)&TStack_f8._s_0,afStackX_18);
        if (!bVar14) goto LAB_14cb7018e;
        afStackX_20[0] = 0.0;
        bVar14 = FConvexVolume::IntersectSphere
                           (*(FConvexVolume **)((longlong)param_1 + 0x10),
                            (TVector<double> *)&TStack_e0._s_0,afStackX_20);
        if (!bVar14) goto LAB_14cb7018e;
        puVar19 = puVar19 + 1;
      }
      if ((*(int *)(lVar4 + 0x28 + lVar21) < 1) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar3 = **(uint **)(lVar4 + 0x20 + lVar21);
      uVar15 = *(uint *)(*(longlong *)
                          ((pFStackX_10->Edges).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar3 >> 9) * 8) + 8 + (ulonglong)(uVar3 & 0x1ff) * 0x10);
      lVar4 = *(longlong *)
               ((pFStackX_10->TriangleEdges).Blocks.AllocatorInstance.Data +
               (ulonglong)(uVar15 >> 9) * 8);
      uStack_108 = *(undefined8 *)(lVar4 + (ulonglong)(uVar15 & 0x1ff) * 0xc);
      uStack_100 = *(undefined4 *)(lVar4 + 8 + (ulonglong)(uVar15 & 0x1ff) * 0xc);
      uVar15 = uVar15 * 4;
      if ((uint)uStack_108 != uVar3) {
        uVar15 = uVar15 | ((uint)((ulonglong)uStack_108 >> 0x20) != uVar3) + 1;
      }
      pFVar9 = *(ForAnyElementType **)((longlong)param_1 + 0x18);
      uStack_118 = CONCAT44(uVar20,uVar15 >> 2 | uVar15 << 0x1e);
      if (((pFVar9->Data <= (FScriptContainerElement *)&uStack_118) &&
          ((FScriptContainerElement *)&uStack_118 <
           pFVar9->Data + (longlong)*(int *)((longlong)&pFVar9[1].Data + 4) * 8)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar14)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar16 = *(int *)&pFVar9[1].Data;
      piVar1 = (int *)((longlong)&pFVar9[1].Data + 4);
      if (iVar16 == *piVar1) {
        iVar16 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,pFVar9,piVar1);
      }
      *(int *)&pFVar9[1].Data = iVar16 + 1;
      *(undefined8 *)(pFVar9->Data + (longlong)iVar16 * 8) = uStack_118;
LAB_14cb7018e:
      uVar20 = uVar20 + 1;
      lVar21 = lVar21 + 0x50;
      lStack_110 = lStack_110 + -1;
    } while (lStack_110 != 0);
  }
  return;
}

// Call @ 14cb77700

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMeshTopologySelectionMechanic::Setup'::__l2::<lambda_6>,void,bool_const_&>::
Call(void *param_1,bool *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014cb77706. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1 + 0x310))();
  return;
}

// Call @ 14cb77720

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::InitializeGeometrySelectionVisualization'::__l30::<lambda_6>,void,int,TArray<FRenderableTriangle,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,int *param_2,TArray<FRenderableTriangle,TSizedDefaultAllocator<32>_> *param_3)

{
  `UE::Geometry::InitializeGeometrySelectionVisualization'::__l30::<lambda_6>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 14cb77730

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FBaseDynamicMeshSelector::UpdateSelectionViaShape'::__l33::<lambda_6>,void,UE::Geometry::FDynamicMesh3_const_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
  int *piVar1;
  uint *puVar2;
  double *pdVar3;
  uint uVar4;
  undefined4 uVar5;
  TQuaternion<double> *pTVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  ForAnyElementType *pFVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined4 *puVar15;
  bool bVar16;
  int iVar17;
  TVector<double> *pTVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int *piVar21;
  uint *puVar22;
  undefined4 *puVar23;
  bool abStackX_8 [8];
  FDynamicMesh3 *pFStackX_10;
  undefined1 auStackX_18 [8];
  undefined1 auStackX_20 [8];
  undefined8 uStack_168;
  uint uStack_160;
  TVector<double>_u_0 TStack_158;
  TVector<double>_u_0 TStack_140;
  TVector<double>_u_0 TStack_128;
  longlong lStack_110;
  undefined4 *puStack_108;
  TVector<double>_u_0 TStack_100;
  TVector<double>_u_0 TStack_e8;
  TVector<double>_u_0 TStack_d0;
  TVector<double> TStack_b8;
  TVector<double> TStack_a0;
  TVector<double> aTStack_88 [3];
  
  lStack_110 = **(longlong **)param_1;
  uStack_160 = *(uint *)(lStack_110 + 0x58);
  uVar19 = (ulonglong)(int)uStack_160;
  puVar23 = *(undefined4 **)(lStack_110 + 0x50);
  piVar21 = puVar23 + 4;
  puStack_108 = puVar23 + uVar19 * 0xe;
  pFStackX_10 = param_2;
  do {
    puVar15 = puStack_108;
    if (*(int *)(lStack_110 + 0x58) != (int)uVar19) {
      auStackX_18[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::FGroupTopology::FGroup_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(auStackX_18);
    }
    if (puVar23 == puVar15) {
      return;
    }
    puVar22 = *(uint **)(piVar21 + -2);
    iVar17 = *piVar21;
    puVar2 = puVar22 + iVar17;
    while( true ) {
      if (*piVar21 != iVar17) {
        auStackX_20[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (auStackX_20);
      }
      if (puVar22 == puVar2) break;
      pTVar6 = *(TQuaternion<double> **)((longlong)param_1 + 8);
      uVar20 = (ulonglong)(*puVar22 & 0x1ff);
      pFVar7 = (pFStackX_10->Vertices).Blocks.AllocatorInstance.Data;
      lVar8 = *(longlong *)
               ((pFStackX_10->Triangles).Blocks.AllocatorInstance.Data +
               (ulonglong)(*puVar22 >> 9) * 8);
      uVar4 = *(uint *)(lVar8 + uVar20 * 0xc);
      uVar19 = (ulonglong)(uVar4 & 0x1ff);
      pdVar3 = (double *)(*(longlong *)(pFVar7 + (ulonglong)(uVar4 >> 9) * 8) + uVar19 * 0x18);
      TStack_128._s_0.X = *pdVar3;
      TStack_128._s_0.Y = pdVar3[1];
      TStack_128._s_0.Z =
           *(double *)(*(longlong *)(pFVar7 + (ulonglong)(uVar4 >> 9) * 8) + 0x10 + uVar19 * 0x18);
      uVar4 = *(uint *)(lVar8 + 4 + uVar20 * 0xc);
      uVar19 = (ulonglong)(uVar4 & 0x1ff);
      pdVar3 = (double *)(*(longlong *)(pFVar7 + (ulonglong)(uVar4 >> 9) * 8) + uVar19 * 0x18);
      dVar11 = *pdVar3;
      dVar12 = pdVar3[1];
      TStack_140._s_0.Z =
           *(double *)(*(longlong *)(pFVar7 + (ulonglong)(uVar4 >> 9) * 8) + 0x10 + uVar19 * 0x18);
      uVar4 = *(uint *)(lVar8 + 8 + uVar20 * 0xc);
      uVar19 = (ulonglong)(uVar4 & 0x1ff);
      pdVar3 = (double *)(*(longlong *)(pFVar7 + (ulonglong)(uVar4 >> 9) * 8) + uVar19 * 0x18);
      dVar13 = *pdVar3;
      dVar14 = pdVar3[1];
      TStack_158._s_0.Z =
           *(double *)(*(longlong *)(pFVar7 + (ulonglong)(uVar4 >> 9) * 8) + 0x10 + uVar19 * 0x18);
      TStack_100._s_0.X = TStack_128._s_0.X * pTVar6[1].field0_0x0._s_0.W;
      TStack_100._s_0.Y = TStack_128._s_0.Y * pTVar6[2].field0_0x0._s_0.X;
      TStack_100._s_0.Z = TStack_128._s_0.Z * pTVar6[2].field0_0x0._s_0.Y;
      TStack_158._s_0.X = dVar13;
      TStack_158._s_0.Y = dVar14;
      TStack_140._s_0.X = dVar11;
      TStack_140._s_0.Y = dVar12;
      pTVar18 = UE::Geometry::operator*<double>
                          (&TStack_b8,pTVar6,(TVector<double> *)&TStack_100._s_0);
      TStack_128._s_0.X = pTVar6[1].field0_0x0._s_0.X + (pTVar18->field0_0x0)._s_0.X;
      TStack_128._s_0.Y = (pTVar18->field0_0x0)._s_0.Y + pTVar6[1].field0_0x0._s_0.Y;
      TStack_128._s_0.Z = (pTVar18->field0_0x0)._s_0.Z + pTVar6[1].field0_0x0._s_0.Z;
      TStack_e8._s_0.X = dVar11 * pTVar6[1].field0_0x0._s_0.W;
      TStack_e8._s_0.Y = dVar12 * pTVar6[2].field0_0x0._s_0.X;
      TStack_e8._s_0.Z = TStack_140._s_0.Z * pTVar6[2].field0_0x0._s_0.Y;
      pTVar18 = UE::Geometry::operator*<double>
                          (&TStack_a0,pTVar6,(TVector<double> *)&TStack_e8._s_0);
      TStack_140._s_0.Y = (pTVar18->field0_0x0)._s_0.Y + pTVar6[1].field0_0x0._s_0.Y;
      TStack_140._s_0.Z = (pTVar18->field0_0x0)._s_0.Z + pTVar6[1].field0_0x0._s_0.Z;
      TStack_140._s_0.X = pTVar6[1].field0_0x0._s_0.X + (pTVar18->field0_0x0)._s_0.X;
      TStack_d0._s_0.X = dVar13 * pTVar6[1].field0_0x0._s_0.W;
      TStack_d0._s_0.Y = dVar14 * pTVar6[2].field0_0x0._s_0.X;
      TStack_d0._s_0.Z = TStack_158._s_0.Z * pTVar6[2].field0_0x0._s_0.Y;
      pTVar18 = UE::Geometry::operator*<double>
                          (aTStack_88,pTVar6,(TVector<double> *)&TStack_d0._s_0);
      TStack_158._s_0.X = pTVar6[1].field0_0x0._s_0.X + (pTVar18->field0_0x0)._s_0.X;
      TStack_158._s_0.Y = (pTVar18->field0_0x0)._s_0.Y + pTVar6[1].field0_0x0._s_0.Y;
      TStack_158._s_0.Z = (pTVar18->field0_0x0)._s_0.Z + pTVar6[1].field0_0x0._s_0.Z;
      abStackX_8[0] = false;
      bVar16 = FConvexVolume::IntersectTriangle
                         (*(FConvexVolume **)((longlong)param_1 + 0x10),
                          (TVector<double> *)&TStack_128._s_0,(TVector<double> *)&TStack_140._s_0,
                          (TVector<double> *)&TStack_158._s_0,abStackX_8);
      if ((!bVar16) || (abStackX_8[0] == false)) goto LAB_14cb70653;
      puVar22 = puVar22 + 1;
    }
    pFVar9 = *(ForAnyElementType **)((longlong)param_1 + 0x18);
    uVar5 = *puVar23;
    if (*piVar21 < 1) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar16) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    uStack_168 = CONCAT44(uVar5,**(undefined4 **)(piVar21 + -2));
    if ((pFVar9->Data <= (FScriptContainerElement *)&uStack_168) &&
       ((FScriptContainerElement *)&uStack_168 <
        pFVar9->Data + (longlong)*(int *)((longlong)&pFVar9[1].Data + 4) * 8)) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar16) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    iVar17 = *(int *)&pFVar9[1].Data;
    piVar1 = (int *)((longlong)&pFVar9[1].Data + 4);
    if (iVar17 == *piVar1) {
      iVar17 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,pFVar9,piVar1);
    }
    *(int *)&pFVar9[1].Data = iVar17 + 1;
    *(undefined8 *)(pFVar9->Data + (longlong)iVar17 * 8) = uStack_168;
LAB_14cb70653:
    puVar23 = puVar23 + 0xe;
    piVar21 = piVar21 + 0xe;
    uVar19 = (ulonglong)uStack_160;
  } while( true );
}

// Call @ 14cb77740

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::InitializeGeometrySelectionVisualization'::__l37::<lambda_7>,void,int,TArray<FRenderablePoint,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,int *param_2,TArray<FRenderablePoint,TSizedDefaultAllocator<32>_> *param_3)

{
  `UE::Geometry::InitializeGeometrySelectionVisualization'::__l37::<lambda_7>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 14cb77750

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::InitializeGeometrySelectionVisualization'::__l41::<lambda_8>,void,int,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,int *param_2,TArray<FRenderableLine,TSizedDefaultAllocator<32>_> *param_3)

{
  `UE::Geometry::InitializeGeometrySelectionVisualization'::__l41::<lambda_8>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 14cb77760

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::InitializeGeometrySelectionVisualization'::__l45::<lambda_9>,void,int,TArray<FRenderableTriangle,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,int *param_2,TArray<FRenderableTriangle,TSizedDefaultAllocator<32>_> *param_3)

{
  `UE::Geometry::InitializeGeometrySelectionVisualization'::__l45::<lambda_9>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 14cbc3020

double __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FQuickAxisRotator::Initialize'::__l2::<lambda_1>,double,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
::Call(void *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  double dVar1;
  
  dVar1 = ToolSceneQueriesUtil::CalculateNormalizedViewVisualAngleD
                    ((FViewCameraState *)(*(longlong *)param_1 + 0x10),param_2,param_3);
  return dVar1;
}

// Call @ 14cbc3040

double __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FQuickAxisTranslater::Initialize'::__l2::<lambda_1>,double,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
::Call(void *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  double dVar1;
  
  dVar1 = ToolSceneQueriesUtil::CalculateNormalizedViewVisualAngleD
                    ((FViewCameraState *)(*(longlong *)param_1 + 0x10),param_2,param_3);
  return dVar1;
}

