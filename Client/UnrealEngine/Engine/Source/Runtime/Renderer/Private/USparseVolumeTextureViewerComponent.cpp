// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 16

// StaticClass @ 1456520f0

UClass * __cdecl USparseVolumeTextureViewerComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USparseVolumeTextureViewerComponent.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Renderer",L"SparseVolumeTextureViewerComponent",
               &Z_Registration_Info_UClass_USparseVolumeTextureViewerComponent.InnerSingleton,
               StaticRegisterNativesUSparseVolumeTextureViewerComponent,0x580,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<USparseVolumeTextureViewerComponent>,
               InternalVTableHelperCtorCaller<USparseVolumeTextureViewerComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USparseVolumeTextureViewerComponent.InnerSingleton;
}

// USparseVolumeTextureViewerComponent @ 1456667f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

USparseVolumeTextureViewerComponent * __thiscall
USparseVolumeTextureViewerComponent::USparseVolumeTextureViewerComponent
          (USparseVolumeTextureViewerComponent *this,FVTableHelper *param_1)

{
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  this->FrameRate = 24.0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  (this->SparseVolumeTexturePreview).field0_0x0.DebugPtr = (USparseVolumeTexture *)0x0;
  (this->SparseVolumeTextureFrame).field0_0x0.DebugPtr = (USparseVolumeTextureFrame *)0x0;
  this->VoxelSize = 1.0;
  this->Extinction = 0.025;
  return this;
}

// USparseVolumeTextureViewerComponent @ 145666890

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

USparseVolumeTextureViewerComponent * __thiscall
USparseVolumeTextureViewerComponent::USparseVolumeTextureViewerComponent
          (USparseVolumeTextureViewerComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->SparseVolumeTexturePreview).field0_0x0.DebugPtr = (USparseVolumeTexture *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  (this->PreviewAttribute).Value = '\0';
  (this->SparseVolumeTextureFrame).field0_0x0.DebugPtr = (USparseVolumeTextureFrame *)0x0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 | 0x80;
  puVar3 = &this->field_0x558;
  this->bPlaying = 0;
  this->bPivotAtCentroid = 0;
  this->bApplyPerFrameTransforms = 1;
  this->bBlockingStreamingRequests = 0;
  this->bReversePlayback = 0;
  this->bLooping = 0;
  this->Frame = 0.0;
  this->FrameRate = 24.0;
  this->VoxelSize = 1.0;
  this->MipLevel = 0;
  this->Extinction = 0.025;
  this->SparseVolumeTextureViewerSceneProxy = (FSparseVolumeTextureViewerSceneProxy *)0x0;
  *(undefined1 *)&this->_padding_ = 2;
  return this;
}

// ~USparseVolumeTextureViewerComponent @ 145667420

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
USparseVolumeTextureViewerComponent::~USparseVolumeTextureViewerComponent
          (USparseVolumeTextureViewerComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  UPrimitiveComponent::~UPrimitiveComponent((UPrimitiveComponent *)this);
  return;
}

// operator() @ 14566ae80

void __thiscall
`USparseVolumeTextureViewerComponent::SendRenderTransformCommand'::__l5::<lambda_1>::operator()
          (void *this,FRHICommandList *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)this;
  uVar2 = *(undefined8 *)((longlong)this + 0x18);
  *(undefined8 *)(lVar1 + 0x290) = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(lVar1 + 0x298) = uVar2;
  uVar2 = *(undefined8 *)((longlong)this + 0x28);
  *(undefined8 *)(lVar1 + 0x2a0) = *(undefined8 *)((longlong)this + 0x20);
  *(undefined8 *)(lVar1 + 0x2a8) = uVar2;
  uVar2 = *(undefined8 *)((longlong)this + 0x38);
  *(undefined8 *)(lVar1 + 0x2b0) = *(undefined8 *)((longlong)this + 0x30);
  *(undefined8 *)(lVar1 + 0x2b8) = uVar2;
  uVar2 = *(undefined8 *)((longlong)this + 0x48);
  *(undefined8 *)(lVar1 + 0x2c0) = *(undefined8 *)((longlong)this + 0x40);
  *(undefined8 *)(lVar1 + 0x2c8) = uVar2;
  uVar2 = *(undefined8 *)((longlong)this + 0x58);
  *(undefined8 *)(lVar1 + 0x2d0) = *(undefined8 *)((longlong)this + 0x50);
  *(undefined8 *)(lVar1 + 0x2d8) = uVar2;
  uVar2 = *(undefined8 *)((longlong)this + 0x68);
  *(undefined8 *)(lVar1 + 0x2e0) = *(undefined8 *)((longlong)this + 0x60);
  *(undefined8 *)(lVar1 + 0x2e8) = uVar2;
  lVar1 = *(longlong *)this;
  uVar2 = *(undefined8 *)((longlong)this + 0x78);
  *(undefined8 *)(lVar1 + 0x2f0) = *(undefined8 *)((longlong)this + 0x70);
  *(undefined8 *)(lVar1 + 0x2f8) = uVar2;
  uVar2 = *(undefined8 *)((longlong)this + 0x88);
  *(undefined8 *)(lVar1 + 0x300) = *(undefined8 *)((longlong)this + 0x80);
  *(undefined8 *)(lVar1 + 0x308) = uVar2;
  uVar2 = *(undefined8 *)((longlong)this + 0x98);
  *(undefined8 *)(lVar1 + 0x310) = *(undefined8 *)((longlong)this + 0x90);
  *(undefined8 *)(lVar1 + 0x318) = uVar2;
  uVar2 = *(undefined8 *)((longlong)this + 0xa8);
  *(undefined8 *)(lVar1 + 800) = *(undefined8 *)((longlong)this + 0xa0);
  *(undefined8 *)(lVar1 + 0x328) = uVar2;
  uVar2 = *(undefined8 *)((longlong)this + 0xb8);
  *(undefined8 *)(lVar1 + 0x330) = *(undefined8 *)((longlong)this + 0xb0);
  *(undefined8 *)(lVar1 + 0x338) = uVar2;
  uVar2 = *(undefined8 *)((longlong)this + 200);
  *(undefined8 *)(lVar1 + 0x340) = *(undefined8 *)((longlong)this + 0xc0);
  *(undefined8 *)(lVar1 + 0x348) = uVar2;
  lVar1 = *(longlong *)this;
  *(undefined8 *)(lVar1 + 0x350) = *(undefined8 *)((longlong)this + 0xd0);
  *(undefined4 *)(lVar1 + 0x358) = *(undefined4 *)((longlong)this + 0xd8);
  *(undefined4 *)(*(longlong *)this + 0x35c) = *(undefined4 *)((longlong)this + 0xe4);
  *(undefined4 *)(*(longlong *)this + 0x360) = *(undefined4 *)((longlong)this + 0xdc);
  *(undefined4 *)(*(longlong *)this + 0x364) = *(undefined4 *)((longlong)this + 0xe0);
  *(undefined4 *)(*(longlong *)this + 0x368) = *(undefined4 *)((longlong)this + 0xe8);
  *(undefined1 *)(*(longlong *)this + 0x36c) = *(undefined1 *)((longlong)this + 0xec);
  return;
}

// CalcBounds @ 145675490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TBoxSphereBounds<double,double> * __thiscall
USparseVolumeTextureViewerComponent::CalcBounds
          (USparseVolumeTextureViewerComponent *this,
          TBoxSphereBounds<double,double> *__return_storage_ptr__,TTransform<double> *param_1)

{
  USparseVolumeTexture *pUVar1;
  USparseVolumeTextureFrame *pUVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  TTransform<double> *pTVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 unaff_XMM15 [16];
  undefined1 auVar20 [16];
  undefined1 auStack_288 [48];
  double local_258;
  undefined4 local_250;
  undefined4 uStack_24c;
  double dStack_248;
  double local_240;
  undefined8 local_228;
  TMatrix<double> local_218;
  undefined1 local_198 [16];
  TTransform<double> local_188;
  undefined1 local_128 [96];
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_288;
  pUVar1 = (this->SparseVolumeTexturePreview).field0_0x0.DebugPtr;
  dVar14 = __real_4060000000000000;
  dVar15 = __real_4060000000000000;
  dVar17 = __real_4060000000000000;
  if (pUVar1 != (USparseVolumeTexture *)0x0) {
    puVar12 = (undefined8 *)(**(code **)(*(longlong *)pUVar1 + 0x2e0))(pUVar1,local_198);
    local_228 = *puVar12;
    dVar15 = (double)*(int *)(puVar12 + 1);
    dVar14 = (double)(int)((ulonglong)local_228 >> 0x20);
    dVar17 = (double)(int)local_228;
  }
  dVar16 = dVar17 * __real_3fe0000000000000;
  dVar5 = dVar14 * __real_3fe0000000000000;
  local_240 = dVar15 * __real_3fe0000000000000;
  uVar9 = dVar16;
  uVar10 = local_240;
  uVar11 = dVar5;
  dVar8 = local_240;
  if (this->bPivotAtCentroid != 0) {
    uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    dVar8 = local_258;
  }
  local_258 = dVar8;
  pUVar2 = (this->SparseVolumeTextureFrame).field0_0x0.DebugPtr;
  auVar20._0_8_ = (dVar14 * dVar14 + dVar17 * dVar17 + dVar15 * dVar15) * __real_3fd0000000000000;
  auVar20._8_8_ = 0;
  auVar20 = sqrtpd(unaff_XMM15,auVar20);
  if (pUVar2 != (USparseVolumeTextureFrame *)0x0) {
    pTVar13 = (TTransform<double> *)(**(code **)(*(longlong *)pUVar2 + 0x2d8))(pUVar2,local_128);
    local_188.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_188.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_188.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_188.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_188.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_188.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_188.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_188.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_188.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_188.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_188.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_188.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_188.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_188.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_188.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_188.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply(&local_188,pTVar13,param_1);
    param_1 = &local_188;
  }
  UE::Math::TTransform<double>::ToMatrixWithScale(param_1,&local_218);
  dVar15 = (double)CONCAT44((uint)((ulonglong)(local_218.M[1][0] * dVar5) >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(local_218.M[1][0] * dVar5,0) &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
           (double)CONCAT44((uint)((ulonglong)(local_218.M[0][0] * dVar16) >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(local_218.M[0][0] * dVar16,0) &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
           (double)CONCAT44((uint)((ulonglong)(local_218.M[2][0] * local_240) >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(local_218.M[2][0] * local_240,0) &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  dVar8 = (double)CONCAT44((uint)((ulonglong)(local_218.M[1][1] * dVar5) >> 0x20) & _UNK_15061cc8c,
                           SUB84(local_218.M[1][1] * dVar5,0) & _UNK_15061cc88) +
          (double)CONCAT44((uint)((ulonglong)(local_218.M[0][1] * dVar16) >> 0x20) & _UNK_15061cc8c,
                           SUB84(local_218.M[0][1] * dVar16,0) & _UNK_15061cc88) +
          (double)CONCAT44((uint)((ulonglong)(local_218.M[2][1] * local_240) >> 0x20) &
                           _UNK_15061cc8c,SUB84(local_218.M[2][1] * local_240,0) & _UNK_15061cc88);
  dVar14 = (double)CONCAT44((uint)((ulonglong)(local_218.M[1][2] * dVar5) >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(local_218.M[1][2] * dVar5,0) &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
           (double)CONCAT44((uint)((ulonglong)(local_218.M[0][2] * dVar16) >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(local_218.M[0][2] * dVar16,0) &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
           (double)CONCAT44((uint)((ulonglong)(local_218.M[2][2] * local_240) >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(local_218.M[2][2] * local_240,0) &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  local_218.M[3][1] =
       local_218.M[1][1] * (double)uVar11 + local_218.M[0][1] * (double)uVar9 +
       local_218.M[2][1] * (double)uVar10 + local_218.M[3][1];
  auVar7._8_4_ = SUB84(dVar8,0);
  auVar7._0_8_ = dVar15;
  auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  auVar18._0_8_ =
       local_218.M[1][0] * local_218.M[1][0] + local_218.M[0][0] * local_218.M[0][0] +
       local_218.M[2][0] * local_218.M[2][0];
  auVar18._8_8_ =
       local_218.M[1][1] * local_218.M[1][1] + local_218.M[0][1] * local_218.M[0][1] +
       local_218.M[2][1] * local_218.M[2][1];
  auVar19._8_4_ = SUB84(auVar18._8_8_,0);
  auVar19._0_8_ = auVar18._8_8_;
  auVar19._12_4_ = (int)((ulonglong)auVar18._8_8_ >> 0x20);
  auVar19 = maxpd(auVar18,auVar19);
  dVar17 = local_218.M[1][2] * local_218.M[1][2] + local_218.M[0][2] * local_218.M[0][2] +
           local_218.M[2][2] * local_218.M[2][2];
  dStack_248 = auVar7._8_8_;
  dVar16 = SQRT(dVar14 * dVar14 + dVar15 * dVar15 + dVar8 * dVar8);
  auVar6._8_4_ = SUB84(dVar17,0);
  auVar6._0_8_ = dVar17;
  auVar6._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  auVar19 = maxpd(auVar19,auVar6);
  dVar17 = SQRT(auVar19._0_8_) * auVar20._0_8_;
  auVar4._8_4_ = SUB84(local_218.M[3][1],0);
  auVar4._0_8_ = local_218.M[1][0] * (double)uVar11 + local_218.M[0][0] * (double)uVar9 +
                 local_218.M[2][0] * (double)uVar10 + local_218.M[3][0];
  auVar4._12_4_ = (int)((ulonglong)local_218.M[3][1] >> 0x20);
  *(undefined1 (*) [16])&(__return_storage_ptr__->Origin).field0_0x0 = auVar4;
  if (dVar17 <= dVar16) {
    dVar16 = dVar17;
  }
  local_250 = SUB84(dVar15,0);
  uStack_24c = (undefined4)((ulonglong)dVar15 >> 0x20);
  auVar3._8_4_ = local_250;
  auVar3._0_8_ = local_218.M[1][2] * (double)uVar11 + local_218.M[0][2] * (double)uVar9 +
                 local_218.M[2][2] * (double)uVar10 + local_218.M[3][2];
  auVar3._12_4_ = uStack_24c;
  *(undefined1 (*) [16])((longlong)&(__return_storage_ptr__->Origin).field0_0x0 + 0x10) = auVar3;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dStack_248;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar14;
  __return_storage_ptr__->SphereRadius = dVar16;
  return __return_storage_ptr__;
}

// CreateRenderState_Concurrent @ 145679ae0

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
USparseVolumeTextureViewerComponent::CreateRenderState_Concurrent
          (USparseVolumeTextureViewerComponent *this,FRegisterComponentContext *param_1)

{
  USparseVolumeTextureFrame *pUVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  bool bVar15;
  FSparseVolumeTextureViewerSceneProxy *this_00;
  FTextureRenderResources *pFVar16;
  UWorld *pUVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  
  UPrimitiveComponent::CreateRenderState_Concurrent((UPrimitiveComponent *)this,param_1);
  bVar15 = UPrimitiveComponent::ShouldComponentAddToScene((UPrimitiveComponent *)this);
  if (((this->_padding_ & 0x20) != 0) && (bVar15)) {
    bVar15 = UPrimitiveComponent::ShouldComponentAddToScene((UPrimitiveComponent *)this);
    if (bVar15) {
      bVar15 = USceneComponent::ShouldRender((USceneComponent *)this);
      if (((bVar15) && ((this->_padding_ & 1) != 0)) &&
         ((this->_padding_ == 0 || ((*(uint *)(this->_padding_ + 8) & 0x10) == 0)))) {
        this_00 = ::operator_new(0x370);
        if (this_00 == (FSparseVolumeTextureViewerSceneProxy *)0x0) {
          this_00 = (FSparseVolumeTextureViewerSceneProxy *)0x0;
        }
        else {
          FPrimitiveSceneProxy::FPrimitiveSceneProxy
                    ((FPrimitiveSceneProxy *)this_00,(UPrimitiveComponent *)this,(FName)0x0);
          this_00->TextureRenderResources = (FTextureRenderResources *)0x0;
          this_00->_padding_ = (longlong)&___7FSparseVolumeTextureViewerSceneProxy__6B_;
          fVar2 = GlobalVectorConstants::Float0001.m128_f32[0];
          fVar7 = GlobalVectorConstants::Float0001.m128_f32[2];
          fVar10 = GlobalVectorConstants::Float0001.m128_f32[3];
          uVar18 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          uVar19 = (undefined4)
                   ((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          auVar13._8_4_ = uVar18;
          auVar13._0_8_ = (double)fVar2;
          auVar13._12_4_ = uVar19;
          *(undefined1 (*) [16])(this_00->GlobalTransform).Rotation.XY.m128d_f64 = auVar13;
          (this_00->GlobalTransform).Rotation.ZW.m128d_f64[0] = (double)fVar7;
          (this_00->GlobalTransform).Rotation.ZW.m128d_f64[1] = (double)fVar10;
          fVar3 = GlobalVectorConstants::FloatZero.m128_f32[0];
          fVar5 = GlobalVectorConstants::FloatZero.m128_f32[1];
          fVar8 = GlobalVectorConstants::FloatZero.m128_f32[2];
          fVar11 = GlobalVectorConstants::FloatZero.m128_f32[3];
          (this_00->GlobalTransform).Translation.XY.m128d_f64[0] = (double)fVar3;
          (this_00->GlobalTransform).Translation.XY.m128d_f64[1] = (double)fVar5;
          (this_00->GlobalTransform).Translation.ZW.m128d_f64[0] = (double)fVar8;
          (this_00->GlobalTransform).Translation.ZW.m128d_f64[1] = (double)fVar11;
          fVar4 = GlobalVectorConstants::Float1110.m128_f32[0];
          fVar6 = GlobalVectorConstants::Float1110.m128_f32[1];
          fVar9 = GlobalVectorConstants::Float1110.m128_f32[2];
          fVar12 = GlobalVectorConstants::Float1110.m128_f32[3];
          (this_00->GlobalTransform).Scale3D.XY.m128d_f64[0] = (double)fVar4;
          (this_00->GlobalTransform).Scale3D.XY.m128d_f64[1] = (double)fVar6;
          (this_00->GlobalTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar9;
          (this_00->GlobalTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar12;
          auVar14._8_4_ = uVar18;
          auVar14._0_8_ = (double)fVar2;
          auVar14._12_4_ = uVar19;
          *(undefined1 (*) [16])(this_00->FrameTransform).Rotation.XY.m128d_f64 = auVar14;
          (this_00->FrameTransform).Rotation.ZW.m128d_f64[0] = (double)fVar7;
          (this_00->FrameTransform).Rotation.ZW.m128d_f64[1] = (double)fVar10;
          (this_00->FrameTransform).Translation.XY.m128d_f64[0] = (double)fVar3;
          (this_00->FrameTransform).Translation.XY.m128d_f64[1] = (double)fVar5;
          (this_00->FrameTransform).Translation.ZW.m128d_f64[0] = (double)fVar8;
          (this_00->FrameTransform).Translation.ZW.m128d_f64[1] = (double)fVar11;
          (this_00->FrameTransform).Scale3D.XY.m128d_f64[0] = (double)fVar4;
          (this_00->FrameTransform).Scale3D.XY.m128d_f64[1] = (double)fVar6;
          (this_00->FrameTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar9;
          (this_00->FrameTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar12;
          pUVar1 = (this->SparseVolumeTextureFrame).field0_0x0.DebugPtr;
          if (pUVar1 != (USparseVolumeTextureFrame *)0x0) {
            pFVar16 = (FTextureRenderResources *)(**(code **)(*(longlong *)pUVar1 + 0x310))();
            this_00->TextureRenderResources = pFVar16;
          }
        }
        pUVar17 = (UWorld *)this->_padding_;
        this->SparseVolumeTextureViewerSceneProxy = this_00;
        if (pUVar17 == (UWorld *)0x0) {
          pUVar17 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
        }
        (**(code **)(pUVar17->Scene->_padding_ + 0x2f0))
                  (pUVar17->Scene,this->SparseVolumeTextureViewerSceneProxy);
        SendRenderTransformCommand(this);
        return;
      }
    }
  }
  return;
}

// DestroyRenderState_Concurrent @ 14567a740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
USparseVolumeTextureViewerComponent::DestroyRenderState_Concurrent
          (USparseVolumeTextureViewerComponent *this)

{
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FSparseVolumeTextureViewerSceneProxy *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FSparseVolumeTextureViewerSceneProxy *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  UPrimitiveComponent::DestroyRenderState_Concurrent((UPrimitiveComponent *)this);
  if (this->SparseVolumeTextureViewerSceneProxy != (FSparseVolumeTextureViewerSceneProxy *)0x0) {
    pUVar3 = (UWorld *)this->_padding_;
    if (pUVar3 == (UWorld *)0x0) {
      pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    (**(code **)(pUVar3->Scene->_padding_ + 0x2f8))
              (pUVar3->Scene,this->SparseVolumeTextureViewerSceneProxy);
    local_60 = (undefined ***)0x0;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`USparseVolumeTextureViewerComponent::DestroyRenderState_Concurrent'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    pFStack_70 = this->SparseVolumeTextureViewerSceneProxy;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`USparseVolumeTextureViewerComponent::DestroyRenderState_Concurrent'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_USparseVolumeTextureViewerComponent::DestroyRenderState_Concurrent_::__l5::TSTR_FDestroySparseVolumeTextureViewerSceneProxyCommand156>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_48 = local_78;
      pFStack_40 = pFStack_70;
      local_38 = local_68;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar4 = (FRenderCommandTag *)
               TRenderCommandTag<`USparseVolumeTextureViewerComponent::DestroyRenderState_Concurrent'::__l5::TSTR_FDestroySparseVolumeTextureViewerSceneProxyCommand156>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar4);
      uVar6 = (ulonglong)local_28;
      if (2 < uVar6) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar6] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          pppuVar5 = (undefined ***)(local_58 + 0x10);
          if (local_30 != (undefined ***)0x0) {
            pppuVar5 = local_30;
          }
          (*(code *)(*pppuVar5)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar6])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar5 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar5 = local_60;
      }
      (*(code *)(*pppuVar5)[2])();
    }
    this->SparseVolumeTextureViewerSceneProxy = (FSparseVolumeTextureViewerSceneProxy *)0x0;
  }
  return;
}

// GetPrivateStaticClass @ 145683c20

UClass * __cdecl USparseVolumeTextureViewerComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USparseVolumeTextureViewerComponent.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Renderer",L"SparseVolumeTextureViewerComponent",
               &Z_Registration_Info_UClass_USparseVolumeTextureViewerComponent.InnerSingleton,
               StaticRegisterNativesUSparseVolumeTextureViewerComponent,0x580,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<USparseVolumeTextureViewerComponent>,
               InternalVTableHelperCtorCaller<USparseVolumeTextureViewerComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USparseVolumeTextureViewerComponent.InnerSingleton;
}

// SendRenderTransformCommand @ 14569f540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
USparseVolumeTextureViewerComponent::SendRenderTransformCommand
          (USparseVolumeTextureViewerComponent *this)

{
  USparseVolumeTextureFrame *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar6;
  code **ppcVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
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
  undefined1 auStack_2a8 [32];
  undefined8 local_288;
  FSparseVolumeTextureViewerSceneProxy *local_278;
  code *pcStack_270;
  code *local_268;
  code *pcStack_260;
  code *local_258;
  code *pcStack_250;
  code *local_248;
  code *pcStack_240;
  code *local_238;
  code *pcStack_230;
  code *local_228;
  code *pcStack_220;
  code *local_218;
  code *pcStack_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  uint uStack_19c;
  float local_198;
  int iStack_194;
  float fStack_190;
  uint uStack_18c;
  undefined1 local_188 [16];
  code *local_178 [2];
  code *local_168 [3];
  code **local_150;
  undefined1 local_148 [40];
  code **local_120;
  byte local_118;
  undefined1 local_108 [96];
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_2a8;
  if (this->SparseVolumeTextureViewerSceneProxy != (FSparseVolumeTextureViewerSceneProxy *)0x0) {
    pUVar1 = (this->SparseVolumeTextureFrame).field0_0x0.DebugPtr;
    uVar12 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
    uVar13 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
    uVar14 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
    uVar15 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
    uVar16 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
    uVar17 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
    uVar18 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
    uVar19 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
    uVar20 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
    uVar21 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
    uVar22 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
    uVar23 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
    uVar24 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
    uVar25 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
    uVar26 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
    uVar27 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
    uVar28 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
    uVar29 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
    uVar30 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
    uVar31 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
    uVar32 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
    uVar33 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
    uVar34 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
    uVar35 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
    dVar9 = __real_4060000000000000;
    dVar11 = __real_4060000000000000;
    dVar10 = __real_4060000000000000;
    if (pUVar1 != (USparseVolumeTextureFrame *)0x0) {
      puVar4 = (undefined8 *)(**(code **)(*(longlong *)pUVar1 + 0x2e0))(pUVar1,local_188);
      local_288 = *puVar4;
      dVar9 = (double)(int)local_288;
      dVar10 = (double)(int)((ulonglong)local_288 >> 0x20);
      dVar11 = (double)*(int *)(puVar4 + 1);
      if (this->bApplyPerFrameTransforms != 0) {
        pUVar1 = (this->SparseVolumeTextureFrame).field0_0x0.DebugPtr;
        puVar5 = (undefined4 *)(**(code **)(*(longlong *)pUVar1 + 0x2d8))(pUVar1,local_108);
        uVar12 = *puVar5;
        uVar13 = puVar5[1];
        uVar14 = puVar5[2];
        uVar15 = puVar5[3];
        uVar16 = puVar5[4];
        uVar17 = puVar5[5];
        uVar18 = puVar5[6];
        uVar19 = puVar5[7];
        uVar20 = puVar5[8];
        uVar21 = puVar5[9];
        uVar22 = puVar5[10];
        uVar23 = puVar5[0xb];
        uVar24 = puVar5[0xc];
        uVar25 = puVar5[0xd];
        uVar26 = puVar5[0xe];
        uVar27 = puVar5[0xf];
        uVar28 = puVar5[0x10];
        uVar29 = puVar5[0x11];
        uVar30 = puVar5[0x12];
        uVar31 = puVar5[0x13];
        uVar32 = puVar5[0x14];
        uVar33 = puVar5[0x15];
        uVar34 = puVar5[0x16];
        uVar35 = puVar5[0x17];
      }
    }
    local_268 = (code *)this->_padding_;
    pcStack_260 = (code *)this->_padding_;
    local_258 = (code *)this->_padding_;
    pcStack_250 = (code *)this->_padding_;
    local_278 = this->SparseVolumeTextureViewerSceneProxy;
    local_248 = (code *)this->_padding_;
    pcStack_240 = (code *)this->_padding_;
    local_228 = (code *)this->_padding_;
    pcStack_220 = (code *)this->_padding_;
    uStack_19c = (uint)(this->PreviewAttribute).Value;
    iStack_194 = this->MipLevel;
    local_238 = (code *)this->_padding_;
    pcStack_230 = (code *)this->_padding_;
    local_1a8 = (float)dVar9;
    local_178[0] = (code *)0x0;
    uStack_18c = CONCAT31(uStack_18c._1_3_,(char)(*(uint *)&this->field_0x558 >> 5)) & 0xffffff01;
    local_218 = (code *)this->_padding_;
    pcStack_210 = (code *)this->_padding_;
    fStack_1a0 = (float)dVar11;
    local_198 = this->Extinction;
    fStack_1a4 = (float)dVar10;
    fStack_190 = this->VoxelSize;
    local_208 = uVar12;
    uStack_204 = uVar13;
    uStack_200 = uVar14;
    uStack_1fc = uVar15;
    local_1f8 = uVar16;
    uStack_1f4 = uVar17;
    uStack_1f0 = uVar18;
    uStack_1ec = uVar19;
    local_1e8 = uVar20;
    uStack_1e4 = uVar21;
    uStack_1e0 = uVar22;
    uStack_1dc = uVar23;
    local_1d8 = uVar24;
    uStack_1d4 = uVar25;
    uStack_1d0 = uVar26;
    uStack_1cc = uVar27;
    local_1c8 = uVar28;
    uStack_1c4 = uVar29;
    uStack_1c0 = uVar30;
    uStack_1bc = uVar31;
    local_1b8 = uVar32;
    uStack_1b4 = uVar33;
    uStack_1b0 = uVar34;
    uStack_1ac = uVar35;
    local_150 = FMemory::Malloc(0x100,0x10);
    *local_150 = (code *)&UE::Core::Private::Function::
                          TFunction_OwnedObject<`USparseVolumeTextureViewerComponent::SendRenderTransformCommand'::`5'::<lambda_1>,1,1>
                          ::_vftable_;
    local_150[2] = (code *)local_278;
    local_150[3] = pcStack_270;
    local_150[4] = local_268;
    local_150[5] = pcStack_260;
    local_150[6] = local_258;
    local_150[7] = pcStack_250;
    local_150[8] = local_248;
    local_150[9] = pcStack_240;
    local_150[10] = local_238;
    local_150[0xb] = pcStack_230;
    local_150[0xc] = local_228;
    local_150[0xd] = pcStack_220;
    local_150[0xe] = local_218;
    local_150[0xf] = pcStack_210;
    local_150[0x10] = (code *)CONCAT44(uStack_204,local_208);
    local_150[0x11] = (code *)CONCAT44(uStack_1fc,uStack_200);
    local_150[0x12] = (code *)CONCAT44(uStack_1f4,local_1f8);
    local_150[0x13] = (code *)CONCAT44(uStack_1ec,uStack_1f0);
    local_150[0x14] = (code *)CONCAT44(uStack_1e4,local_1e8);
    local_150[0x15] = (code *)CONCAT44(uStack_1dc,uStack_1e0);
    local_150[0x16] = (code *)CONCAT44(uStack_1d4,local_1d8);
    local_150[0x17] = (code *)CONCAT44(uStack_1cc,uStack_1d0);
    local_150[0x18] = (code *)CONCAT44(uStack_1c4,local_1c8);
    local_150[0x19] = (code *)CONCAT44(uStack_1bc,uStack_1c0);
    local_150[0x1a] = (code *)CONCAT44(uStack_1b4,local_1b8);
    local_150[0x1b] = (code *)CONCAT44(uStack_1ac,uStack_1b0);
    local_150[0x1c] = (code *)CONCAT44(fStack_1a4,local_1a8);
    local_150[0x1d] = (code *)CONCAT44(uStack_19c,fStack_1a0);
    local_150[0x1e] = (code *)CONCAT44(iStack_194,local_198);
    local_150[0x1f] = (code *)CONCAT44(uStack_18c,fStack_190);
    if (local_150 + 2 != (code **)0x0) {
      local_178[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`USparseVolumeTextureViewerComponent::SendRenderTransformCommand'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                     ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_USparseVolumeTextureViewerComponent::SendRenderTransformCommand_::__l5::TSTR_FUpdateSparseVolumeTextureViewerProxyTransformCommand192>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_178);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_148._0_8_ = local_178[0];
      local_120 = local_150;
      local_150 = (code **)0x0;
      local_148._16_8_ = local_168[0];
      local_148._24_8_ = local_168[1];
      local_148._32_8_ = local_168[2];
      local_178[0] = (code *)0x0;
      local_118 = 2;
      pFVar6 = (FRenderCommandTag *)
               TRenderCommandTag<`USparseVolumeTextureViewerComponent::SendRenderTransformCommand'::__l5::TSTR_FUpdateSparseVolumeTextureViewerProxyTransformCommand192>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_148,pFVar6);
      uVar8 = (ulonglong)local_118;
      if (2 < uVar8) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_148._0_8_ != (code *)0x0) {
          ppcVar7 = (code **)(local_148 + 0x10);
          if (local_120 != (code **)0x0) {
            ppcVar7 = local_120;
          }
          (**(code **)(*ppcVar7 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8])(local_148);
      }
    }
    if (local_178[0] != (code *)0x0) {
      ppcVar7 = local_178 + 2;
      if (local_150 != (code **)0x0) {
        ppcVar7 = local_150;
      }
      (**(code **)(*ppcVar7 + 0x10))();
    }
  }
  return;
}

// SendRenderTransform_Concurrent @ 14569f980

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
USparseVolumeTextureViewerComponent::SendRenderTransform_Concurrent
          (USparseVolumeTextureViewerComponent *this)

{
  UPrimitiveComponent::SendRenderTransform_Concurrent((UPrimitiveComponent *)this);
  SendRenderTransformCommand(this);
  return;
}

// Serialize @ 14569f9b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
USparseVolumeTextureViewerComponent::Serialize
          (USparseVolumeTextureViewerComponent *this,FArchive *param_1)

{
  bool bVar1;
  int iVar2;
  
  USceneComponent::Serialize((USceneComponent *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FRenderingObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5SpecialProjectStreamObjectVersion::GUID);
  if ((param_1->field_0x28 & 1) != 0) {
    bVar1 = UObjectBaseUtility::IsTemplate
                      ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
    if (bVar1) {
      FBodyInstance::FixupData((FBodyInstance *)&this->_padding_,(UObject *)this);
    }
  }
  iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRenderingObjectVersion::GUID);
  if ((iVar2 < 0x18) && (*(char *)((longlong)&this->_padding_ + 7) < '\0')) {
    *(undefined1 *)((longlong)&this->_padding_ + 7) = 1;
  }
  return;
}

// Serialize @ 14569f9c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
USparseVolumeTextureViewerComponent::Serialize
          (USparseVolumeTextureViewerComponent *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UPrimitiveComponent::Serialize((UPrimitiveComponent *)this,pFVar1);
  return;
}

// StaticRegisterNativesUSparseVolumeTextureViewerComponent @ 1456a3e50

void __cdecl
USparseVolumeTextureViewerComponent::StaticRegisterNativesUSparseVolumeTextureViewerComponent(void)

{
  return;
}

// SupportsStaticLighting @ 1456a4260

bool __thiscall
USparseVolumeTextureViewerComponent::SupportsStaticLighting
          (USparseVolumeTextureViewerComponent *this)

{
  return false;
}

// TickComponent @ 1456a4650

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
USparseVolumeTextureViewerComponent::TickComponent
          (USparseVolumeTextureViewerComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  undefined1 *puVar1;
  float fVar2;
  USparseVolumeTexture *pUVar3;
  int iVar4;
  USparseVolumeTextureFrame *pUVar5;
  uint uVar6;
  undefined4 in_register_00000084;
  float fVar7;
  undefined1 in_register_00001244 [12];
  undefined1 auVar8 [16];
  
  auVar8._4_12_ = in_register_00001244;
  auVar8._0_4_ = param_1;
  pUVar3 = (this->SparseVolumeTexturePreview).field0_0x0.DebugPtr;
  if (pUVar3 == (USparseVolumeTexture *)0x0) {
    pUVar5 = (USparseVolumeTextureFrame *)0x0;
  }
  else {
    iVar4 = (**(code **)(*(longlong *)pUVar3 + 0x2c8))
                      (pUVar3,auVar8._0_8_,CONCAT44(in_register_00000084,param_2));
    if (this->bPlaying != 0) {
      if (this->bReversePlayback != 0) {
        param_1 = (float)((uint)param_1 ^ __xmm_80000000800000008000000080000000);
      }
      this->Frame = param_1 * this->FrameRate + this->Frame;
    }
    fVar2 = this->Frame;
    if (this->bLooping == 0) {
      fVar7 = (float)(iVar4 + -1);
      if (fVar2 <= (float)(iVar4 + -1)) {
        fVar7 = fVar2;
      }
      if (fVar7 <= 0.0) {
        fVar7 = 0.0;
      }
    }
    else {
      fVar7 = FGenericPlatformMath::Fmod((float)iVar4 + fVar2,(float)iVar4);
    }
    this->Frame = fVar7;
    uVar6 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) * -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    pUVar5 = USparseVolumeTextureFrame::GetFrameAndIssueStreamingRequest
                       ((this->SparseVolumeTexturePreview).field0_0x0.DebugPtr,uVar6 >> 0x10 ^ uVar6
                        ,this->FrameRate,fVar7,(float)this->MipLevel,
                        this->bBlockingStreamingRequests,this->bPlaying);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (USparseVolumeTextureFrame *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
  }
  (this->SparseVolumeTextureFrame).field0_0x0.DebugPtr = pUVar5;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

