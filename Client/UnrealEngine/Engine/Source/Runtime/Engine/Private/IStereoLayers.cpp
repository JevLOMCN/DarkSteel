// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// GetDebugCanvasLayerDesc @ 147da5490

FLayerDesc * __thiscall
IStereoLayers::GetDebugCanvasLayerDesc
          (IStereoLayers *this,FLayerDesc *__return_storage_ptr__,UTextureRenderTarget2D *param_1)

{
  UTextureRenderTarget2D *local_res10;
  
  local_res10 = (UTextureRenderTarget2D *)0x0;
  GetDebugCanvasLayerDesc(this,__return_storage_ptr__,(FRHITexture *)&local_res10);
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UTextureRenderTarget2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(__return_storage_ptr__->TextureObj).WeakPtr,(FObjectPtr)&local_res10);
  return __return_storage_ptr__;
}

// GetDebugCanvasLayerDesc @ 147da5500

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FLayerDesc * __thiscall
IStereoLayers::GetDebugCanvasLayerDesc
          (IStereoLayers *this,FLayerDesc *__return_storage_ptr__,TRefCountPtr<FRHITexture> param_1)

{
  FRHITexture *this_00;
  FRHITexture *this_01;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  __m128 _Var6;
  double dVar7;
  IStereoLayerShape *pIVar8;
  IStereoLayerShape *pIVar9;
  undefined8 local_res10;
  
  pIVar9 = (IStereoLayerShape *)0x0;
  __return_storage_ptr__->Id = 0;
  *&(__return_storage_ptr__->Transform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(__return_storage_ptr__->Transform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Transform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(__return_storage_ptr__->Transform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Transform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(__return_storage_ptr__->Transform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (__return_storage_ptr__->QuadSize).field0_0x0._s_0.X = 1.0;
  (__return_storage_ptr__->QuadSize).field0_0x0._s_0.Y = 1.0;
  (__return_storage_ptr__->UVRect).Min.field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->UVRect).Min.field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->UVRect).Max.field0_0x0._s_0.X = 1.0;
  (__return_storage_ptr__->UVRect).Max.field0_0x0._s_0.Y = 1.0;
  (__return_storage_ptr__->UVRect).bIsValid = true;
  (__return_storage_ptr__->LayerSize).field0_0x0 = (TIntPoint<int>_u_0)0x0;
  __return_storage_ptr__->PositionType = FaceLocked;
  __return_storage_ptr__->Priority = 0;
  (__return_storage_ptr__->TextureObj).WeakPtr = (FWeakObjectPtr)0x0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&(__return_storage_ptr__->TextureObj).WeakPtr,(FObjectPtr)&local_res10);
  (__return_storage_ptr__->Texture).Reference = (FRHITexture *)0x0;
  (__return_storage_ptr__->LeftTextureObj).WeakPtr = (FWeakObjectPtr)0x0;
  local_res10 = 0;
  FWeakObjectPtr::operator=
            (&(__return_storage_ptr__->LeftTextureObj).WeakPtr,(FObjectPtr)&local_res10);
  (__return_storage_ptr__->LeftTexture).Reference = (FRHITexture *)0x0;
  __return_storage_ptr__->Flags = 0;
  pIVar8 = ::operator_new(8);
  if (pIVar8 != (IStereoLayerShape *)0x0) {
    *pIVar8 = (IStereoLayerShape)&___7FQuadLayer__6B_;
    pIVar9 = pIVar8;
  }
  (__return_storage_ptr__->Shape).Wrapped.Ptr = pIVar9;
  _Var6 = GlobalVectorConstants::Float1110;
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Transform).Rotation.XY.m128d_f64 = auVar5;
  (__return_storage_ptr__->Transform).Rotation.ZW.m128d_f64[0] = (double)fVar3;
  (__return_storage_ptr__->Transform).Rotation.ZW.m128d_f64[1] = (double)fVar4;
  dVar7 = _UNK_150f34e18;
  (__return_storage_ptr__->Transform).Translation.XY.m128d_f64[0] =
       ___xmm_00000000000000004059000000000000;
  (__return_storage_ptr__->Transform).Translation.XY.m128d_f64[1] = dVar7;
  (__return_storage_ptr__->Transform).Translation.ZW.m128d_f64[0] = 0.0;
  (__return_storage_ptr__->Transform).Translation.ZW.m128d_f64[1] = 0.0;
  (__return_storage_ptr__->Transform).Scale3D.XY.m128d_f64[0] = (double)fVar2;
  (__return_storage_ptr__->Transform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (__return_storage_ptr__->Transform).Scale3D.ZW.m128d_f64[0] = (double)_Var6.m128_f32[2];
  (__return_storage_ptr__->Transform).Scale3D.ZW.m128d_f64[1] = (double)_Var6.m128_f32[3];
  (__return_storage_ptr__->QuadSize).field0_0x0._s_0.X = 120.0;
  (__return_storage_ptr__->QuadSize).field0_0x0._s_0.Y = 120.0;
  __return_storage_ptr__->PositionType = FaceLocked;
  this_00 = (FRHITexture *)(param_1.Reference)->_padding_;
  this_01 = (__return_storage_ptr__->Texture).Reference;
  if (this_01 != this_00) {
    (__return_storage_ptr__->Texture).Reference = this_00;
    if (this_00 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_00);
    }
    if (this_01 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
  }
  __return_storage_ptr__->Flags = 5;
  if ((FRHIResource *)(param_1.Reference)->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)(param_1.Reference)->_padding_);
  }
  return __return_storage_ptr__;
}

