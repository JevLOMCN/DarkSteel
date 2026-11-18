// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// FHeterogeneousVolumeSceneProxy @ 1478a71a0

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FHeterogeneousVolumeSceneProxy * __thiscall
FHeterogeneousVolumeSceneProxy::FHeterogeneousVolumeSceneProxy
          (FHeterogeneousVolumeSceneProxy *this,UHeterogeneousVolumeComponent *param_1)

{
  byte *pbVar1;
  char cVar2;
  FScriptContainerElement *pFVar3;
  UMaterialInstanceDynamic *pUVar4;
  uchar *puVar5;
  uchar *puVar6;
  code *pcVar7;
  bool bVar8;
  FString *pFVar9;
  UMaterialInterface *pUVar10;
  TMatrix<double> *pTVar11;
  FMaterialRelevance FVar12;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar13;
  FHeterogeneousVolumeSceneProxy *pFVar14;
  ulonglong uVar15;
  undefined ***pppuVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_188 [32];
  TVector2<float>_u_0 local_150;
  TVector2<float>_u_0 local_148;
  TVector2<float>_u_0 local_140;
  TVector2<float>_u_0 local_138;
  undefined1 local_130 [8];
  undefined1 local_128 [16];
  TMatrix<double> local_118;
  code *local_98 [2];
  undefined **local_88;
  FHeterogeneousVolumeSceneProxy *pFStack_80;
  undefined8 local_78;
  undefined ***local_70;
  undefined1 local_68 [16];
  undefined **local_58;
  FHeterogeneousVolumeSceneProxy *pFStack_50;
  undefined8 local_48;
  undefined ***local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_188;
  FPrimitiveSceneProxy::FPrimitiveSceneProxy
            ((FPrimitiveSceneProxy *)this,(UPrimitiveComponent *)param_1,(FName)0x0);
  this->_padding_ = (longlong)&___7FHeterogeneousVolumeSceneProxy__6B_;
  FLocalVertexFactory::FLocalVertexFactory
            (&this->VertexFactory,*(Type *)(this->_padding_ + 8),"FHeterogeneousVolumeSceneProxy");
  FStaticMeshVertexBuffer::FStaticMeshVertexBuffer
            (&(this->StaticMeshVertexBuffers).StaticMeshVertexBuffer);
  FPositionVertexBuffer::FPositionVertexBuffer
            (&(this->StaticMeshVertexBuffers).PositionVertexBuffer);
  FColorVertexBuffer::FColorVertexBuffer(&(this->StaticMeshVertexBuffers).ColorVertexBuffer);
  pFVar9 = (FString *)(**(code **)(param_1->_padding_ + 0x478))(param_1,local_128);
  (this->HeterogeneousVolumeData).PrimitiveSceneProxy = (FPrimitiveSceneProxy *)this;
  *(undefined ***)&this->HeterogeneousVolumeData =
       &FHeterogeneousVolumeData::_vftable__for__IHeterogeneousVolumeInterface__;
  *(undefined ***)&(this->HeterogeneousVolumeData).field_0x8 =
       &FHeterogeneousVolumeData::_vftable__for__FOneFrameResource__;
  dVar18 = UE::Math::TMatrix<double>::Identity.M[0][1];
  (this->HeterogeneousVolumeData).InstanceToLocal.M[0][0] =
       UE::Math::TMatrix<double>::Identity.M[0][0];
  (this->HeterogeneousVolumeData).InstanceToLocal.M[0][1] = dVar18;
  dVar18 = UE::Math::TMatrix<double>::Identity.M[0][3];
  (this->HeterogeneousVolumeData).InstanceToLocal.M[0][2] =
       UE::Math::TMatrix<double>::Identity.M[0][2];
  (this->HeterogeneousVolumeData).InstanceToLocal.M[0][3] = dVar18;
  dVar18 = UE::Math::TMatrix<double>::Identity.M[1][1];
  (this->HeterogeneousVolumeData).InstanceToLocal.M[1][0] =
       UE::Math::TMatrix<double>::Identity.M[1][0];
  (this->HeterogeneousVolumeData).InstanceToLocal.M[1][1] = dVar18;
  dVar18 = UE::Math::TMatrix<double>::Identity.M[1][3];
  (this->HeterogeneousVolumeData).InstanceToLocal.M[1][2] =
       UE::Math::TMatrix<double>::Identity.M[1][2];
  (this->HeterogeneousVolumeData).InstanceToLocal.M[1][3] = dVar18;
  dVar18 = UE::Math::TMatrix<double>::Identity.M[2][1];
  (this->HeterogeneousVolumeData).InstanceToLocal.M[2][0] =
       UE::Math::TMatrix<double>::Identity.M[2][0];
  (this->HeterogeneousVolumeData).InstanceToLocal.M[2][1] = dVar18;
  dVar18 = UE::Math::TMatrix<double>::Identity.M[2][3];
  (this->HeterogeneousVolumeData).InstanceToLocal.M[2][2] =
       UE::Math::TMatrix<double>::Identity.M[2][2];
  (this->HeterogeneousVolumeData).InstanceToLocal.M[2][3] = dVar18;
  dVar18 = UE::Math::TMatrix<double>::Identity.M[3][1];
  (this->HeterogeneousVolumeData).InstanceToLocal.M[3][0] =
       UE::Math::TMatrix<double>::Identity.M[3][0];
  (this->HeterogeneousVolumeData).InstanceToLocal.M[3][1] = dVar18;
  dVar18 = UE::Math::TMatrix<double>::Identity.M[3][3];
  (this->HeterogeneousVolumeData).InstanceToLocal.M[3][2] =
       UE::Math::TMatrix<double>::Identity.M[3][2];
  (this->HeterogeneousVolumeData).InstanceToLocal.M[3][3] = dVar18;
  *(undefined8 *)&(this->HeterogeneousVolumeData).VoxelResolution.field0_0x0 =
       UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  (this->HeterogeneousVolumeData).VoxelResolution.field0_0x0._s_0.Z =
       UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  (this->HeterogeneousVolumeData).MinimumVoxelSize = 0.1;
  (this->HeterogeneousVolumeData).StepFactor = 1.0;
  (this->HeterogeneousVolumeData).ShadowStepFactor = 8.0;
  (this->HeterogeneousVolumeData).ShadowBiasFactor = 0.0;
  (this->HeterogeneousVolumeData).LightingDownsampleFactor = 1.0;
  (this->HeterogeneousVolumeData).MipBias = 0.0;
  (this->HeterogeneousVolumeData).bPivotAtCentroid = false;
  (this->HeterogeneousVolumeData).bHoldout = false;
  ::FString::FString(&(this->HeterogeneousVolumeData).ReadableName,pFVar9);
  pFVar3 = (pFVar9->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pUVar10 = (UMaterialInterface *)(**(code **)(param_1->_padding_ + 0x690))(param_1,0);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 | 8;
  this->MaterialInterface = pUVar10;
  (this->MaterialRelevance).field0_0x0.Raw = 0;
  cVar2 = *(char *)((longlong)&param_1->_padding_ + 6);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 & 0x7f;
  *(undefined1 *)((longlong)&this->_padding_ + 6) = 3;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 ^ (cVar2 * '\x02' ^ *(byte *)((longlong)&this->_padding_ + 5)) & 2;
  *(undefined8 *)&(this->HeterogeneousVolumeData).VoxelResolution.field0_0x0 =
       *(undefined8 *)&(param_1->VolumeResolution).field0_0x0;
  (this->HeterogeneousVolumeData).VoxelResolution.field0_0x0._s_0.Z =
       (param_1->VolumeResolution).field0_0x0._s_0.Z;
  pTVar11 = UE::Math::TTransform<double>::ToMatrixWithScale(&param_1->FrameTransform,&local_118);
  dVar18 = pTVar11->M[0][1];
  (this->HeterogeneousVolumeData).InstanceToLocal.M[0][0] = pTVar11->M[0][0];
  (this->HeterogeneousVolumeData).InstanceToLocal.M[0][1] = dVar18;
  dVar18 = pTVar11->M[0][3];
  (this->HeterogeneousVolumeData).InstanceToLocal.M[0][2] = pTVar11->M[0][2];
  (this->HeterogeneousVolumeData).InstanceToLocal.M[0][3] = dVar18;
  dVar18 = pTVar11->M[1][1];
  (this->HeterogeneousVolumeData).InstanceToLocal.M[1][0] = pTVar11->M[1][0];
  (this->HeterogeneousVolumeData).InstanceToLocal.M[1][1] = dVar18;
  dVar18 = pTVar11->M[1][3];
  (this->HeterogeneousVolumeData).InstanceToLocal.M[1][2] = pTVar11->M[1][2];
  (this->HeterogeneousVolumeData).InstanceToLocal.M[1][3] = dVar18;
  dVar18 = pTVar11->M[2][1];
  (this->HeterogeneousVolumeData).InstanceToLocal.M[2][0] = pTVar11->M[2][0];
  (this->HeterogeneousVolumeData).InstanceToLocal.M[2][1] = dVar18;
  dVar18 = pTVar11->M[2][3];
  (this->HeterogeneousVolumeData).InstanceToLocal.M[2][2] = pTVar11->M[2][2];
  (this->HeterogeneousVolumeData).InstanceToLocal.M[2][3] = dVar18;
  dVar18 = pTVar11->M[3][1];
  (this->HeterogeneousVolumeData).InstanceToLocal.M[3][0] = pTVar11->M[3][0];
  (this->HeterogeneousVolumeData).InstanceToLocal.M[3][1] = dVar18;
  dVar18 = pTVar11->M[3][3];
  (this->HeterogeneousVolumeData).InstanceToLocal.M[3][2] = pTVar11->M[3][2];
  (this->HeterogeneousVolumeData).InstanceToLocal.M[3][3] = dVar18;
  dVar18 = ((double)param_1->_padding_ + (double)param_1->_padding_) /
           (double)(param_1->VolumeResolution).field0_0x0._s_0.Y;
  dVar17 = ((double)param_1->_padding_ + (double)param_1->_padding_) /
           (double)(param_1->VolumeResolution).field0_0x0._s_0.X;
  if (dVar17 <= dVar18) {
    dVar18 = dVar17;
  }
  dVar17 = ((double)param_1->_padding_ + (double)param_1->_padding_) /
           (double)(param_1->VolumeResolution).field0_0x0._s_0.Z;
  if (dVar17 <= dVar18) {
    dVar18 = dVar17;
  }
  if (dVar18 <= __real_3f50624dd2f1a9fc) {
    dVar18 = __real_3f50624dd2f1a9fc;
  }
  (this->HeterogeneousVolumeData).MinimumVoxelSize = (float)dVar18;
  pUVar4 = (param_1->MaterialInstanceDynamic).field0_0x0.DebugPtr;
  if (pUVar4 != (UMaterialInstanceDynamic *)0x0) {
    this->MaterialInterface = (UMaterialInterface *)pUVar4;
  }
  pUVar10 = this->MaterialInterface;
  if (pUVar10 != (UMaterialInterface *)0x0) {
    FSceneInterface::GetShaderPlatform((FSceneInterface *)this->_padding_);
    FVar12 = UMaterialInterface::GetRelevance_Concurrent(pUVar10,(EShaderPlatform)local_130);
                    /* WARNING: Load size is inaccurate */
    (this->MaterialRelevance).field0_0x0 = (FMaterialRelevance_u_0)*FVar12.field0_0x0;
  }
  (this->HeterogeneousVolumeData).StepFactor = param_1->StepFactor;
  (this->HeterogeneousVolumeData).ShadowStepFactor = param_1->ShadowStepFactor;
  (this->HeterogeneousVolumeData).ShadowBiasFactor = param_1->ShadowBiasFactor;
  (this->HeterogeneousVolumeData).LightingDownsampleFactor = param_1->LightingDownsampleFactor;
  (this->HeterogeneousVolumeData).MipBias = param_1->StreamingMipBias;
  (this->HeterogeneousVolumeData).bPivotAtCentroid = param_1->bPivotAtCentroid;
  (this->HeterogeneousVolumeData).bHoldout =
       (bool)(*(byte *)((longlong)&param_1->_padding_ + 4) >> 7);
  FPositionVertexBuffer::Init(&(this->StaticMeshVertexBuffers).PositionVertexBuffer,4,true);
  FStaticMeshVertexBuffer::Init(&(this->StaticMeshVertexBuffers).StaticMeshVertexBuffer,4,1,true);
  FColorVertexBuffer::Init(&(this->StaticMeshVertexBuffers).ColorVertexBuffer,4,true);
  ((FColor_u_0 *)(this->StaticMeshVertexBuffers).ColorVertexBuffer.Data)->_s_0 =
       (FColor_u_0_s_0)FColor::White.field0_0x0;
  ((FColor_u_0 *)
  ((this->StaticMeshVertexBuffers).ColorVertexBuffer.Data +
  (this->StaticMeshVertexBuffers).ColorVertexBuffer.Stride))->_s_0 =
       (FColor_u_0_s_0)FColor::White.field0_0x0;
  ((FColor_u_0 *)
  ((this->StaticMeshVertexBuffers).ColorVertexBuffer.Data +
  (this->StaticMeshVertexBuffers).ColorVertexBuffer.Stride * 2))->_s_0 =
       (FColor_u_0_s_0)FColor::White.field0_0x0;
  ((FColor_u_0 *)
  ((this->StaticMeshVertexBuffers).ColorVertexBuffer.Data +
  (this->StaticMeshVertexBuffers).ColorVertexBuffer.Stride * 3))->_s_0 =
       (FColor_u_0_s_0)FColor::White.field0_0x0;
  puVar5 = (this->StaticMeshVertexBuffers).PositionVertexBuffer.Data;
  puVar5[0] = '\0';
  puVar5[1] = '\0';
  puVar5[2] = 0x80;
  puVar5[3] = 0xbf;
  puVar5[4] = '\0';
  puVar5[5] = '\0';
  puVar5[6] = 0x80;
  puVar5[7] = 0xbf;
  puVar5[8] = '\0';
  puVar5[9] = '\0';
  puVar5[10] = 0x80;
  puVar5[0xb] = 0xbf;
  puVar6 = (this->StaticMeshVertexBuffers).PositionVertexBuffer.Data;
  uVar15 = (ulonglong)(this->StaticMeshVertexBuffers).PositionVertexBuffer.Stride;
  puVar5 = puVar6 + uVar15;
  puVar5[0] = '\0';
  puVar5[1] = '\0';
  puVar5[2] = 0x80;
  puVar5[3] = 0xbf;
  puVar5 = puVar6 + uVar15 + 4;
  puVar5[0] = '\0';
  puVar5[1] = '\0';
  puVar5[2] = 0x80;
  puVar5[3] = '?';
  puVar6 = puVar6 + uVar15 + 8;
  puVar6[0] = '\0';
  puVar6[1] = '\0';
  puVar6[2] = 0x80;
  puVar6[3] = 0xbf;
  uVar15 = (ulonglong)((this->StaticMeshVertexBuffers).PositionVertexBuffer.Stride * 2);
  puVar6 = (this->StaticMeshVertexBuffers).PositionVertexBuffer.Data;
  puVar5 = puVar6 + uVar15;
  puVar5[0] = '\0';
  puVar5[1] = '\0';
  puVar5[2] = 0x80;
  puVar5[3] = '?';
  puVar5 = puVar6 + uVar15 + 4;
  puVar5[0] = '\0';
  puVar5[1] = '\0';
  puVar5[2] = 0x80;
  puVar5[3] = 0xbf;
  puVar6 = puVar6 + uVar15 + 8;
  puVar6[0] = '\0';
  puVar6[1] = '\0';
  puVar6[2] = 0x80;
  puVar6[3] = 0xbf;
  uVar15 = (ulonglong)((this->StaticMeshVertexBuffers).PositionVertexBuffer.Stride * 3);
  puVar6 = (this->StaticMeshVertexBuffers).PositionVertexBuffer.Data;
  puVar5 = puVar6 + uVar15;
  puVar5[0] = '\0';
  puVar5[1] = '\0';
  puVar5[2] = 0x80;
  puVar5[3] = '?';
  puVar5 = puVar6 + uVar15 + 4;
  puVar5[0] = '\0';
  puVar5[1] = '\0';
  puVar5[2] = 0x80;
  puVar5[3] = '?';
  puVar6 = puVar6 + uVar15 + 8;
  puVar6[0] = '\0';
  puVar6[1] = '\0';
  puVar6[2] = 0x80;
  puVar6[3] = 0xbf;
  local_150 = (TVector2<float>_u_0)0x0;
  FStaticMeshVertexBuffer::SetVertexUV
            (&(this->StaticMeshVertexBuffers).StaticMeshVertexBuffer,0,0,
             (TVector2<float> *)&local_150._s_0,false);
  local_148._s_0.X = 0.0;
  local_148._s_0.Y = 1.0;
  FStaticMeshVertexBuffer::SetVertexUV
            (&(this->StaticMeshVertexBuffers).StaticMeshVertexBuffer,1,0,
             (TVector2<float> *)&local_148._s_0,false);
  local_140 = (TVector2<float>_u_0)0x3f800000;
  FStaticMeshVertexBuffer::SetVertexUV
            (&(this->StaticMeshVertexBuffers).StaticMeshVertexBuffer,2,0,
             (TVector2<float> *)&local_140._s_0,false);
  local_138._s_0.X = 1.0;
  local_138._s_0.Y = 1.0;
  FStaticMeshVertexBuffer::SetVertexUV
            (&(this->StaticMeshVertexBuffers).StaticMeshVertexBuffer,3,0,
             (TVector2<float> *)&local_138._s_0,false);
  local_70 = (undefined ***)0x0;
  local_88 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FHeterogeneousVolumeSceneProxy::FHeterogeneousVolumeSceneProxy'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_98[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FHeterogeneousVolumeSceneProxy::FHeterogeneousVolumeSceneProxy'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_80 = this;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FHeterogeneousVolumeSceneProxy::FHeterogeneousVolumeSceneProxy_::__l2::TSTR_FHeterogeneousVolumeSceneProxyInit140>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_68._0_8_ = local_98[0];
    local_40 = local_70;
    local_58 = local_88;
    pFStack_50 = pFStack_80;
    local_48 = local_78;
    local_98[0] = (code *)0x0;
    local_38 = 2;
    pFVar13 = (FRenderCommandTag *)
              TRenderCommandTag<`FHeterogeneousVolumeSceneProxy::FHeterogeneousVolumeSceneProxy'::__l2::TSTR_FHeterogeneousVolumeSceneProxyInit140>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_68,pFVar13);
    uVar15 = (ulonglong)local_38;
    if (2 < uVar15) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pFVar14 = (FHeterogeneousVolumeSceneProxy *)(*pcVar7)();
        return pFVar14;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar15] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_68._0_8_ != (code *)0x0) {
        pppuVar16 = (undefined ***)(local_68 + 0x10);
        if (local_40 != (undefined ***)0x0) {
          pppuVar16 = local_40;
        }
        (*(code *)(*pppuVar16)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar15])(local_68);
    }
  }
  if (local_98[0] != (code *)0x0) {
    pppuVar16 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar16 = local_70;
    }
    (*(code *)(*pppuVar16)[2])();
  }
  return this;
}

// ~FHeterogeneousVolumeSceneProxy @ 1478ab7a0

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
FHeterogeneousVolumeSceneProxy::~FHeterogeneousVolumeSceneProxy
          (FHeterogeneousVolumeSceneProxy *this)

{
  FStaticMeshVertexBuffers *this_00;
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FHeterogeneousVolumeSceneProxy__6B_;
  (**(code **)((this->VertexFactory)._padding_ + 0x20))(&this->VertexFactory);
  this_00 = &this->StaticMeshVertexBuffers;
  (**(code **)((this->StaticMeshVertexBuffers).PositionVertexBuffer._padding_ + 0x20))
            (&(this->StaticMeshVertexBuffers).PositionVertexBuffer);
  (**(code **)((this_00->StaticMeshVertexBuffer)._padding_ + 0x20))(this_00);
  (**(code **)((this->StaticMeshVertexBuffers).ColorVertexBuffer._padding_ + 0x20))
            (&(this->StaticMeshVertexBuffers).ColorVertexBuffer);
  *(undefined ***)&this->HeterogeneousVolumeData =
       &FHeterogeneousVolumeData::_vftable__for__IHeterogeneousVolumeInterface__;
  *(undefined ***)&(this->HeterogeneousVolumeData).field_0x8 =
       &FHeterogeneousVolumeData::_vftable__for__FOneFrameResource__;
  pFVar1 = (this->HeterogeneousVolumeData).ReadableName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined ***)&(this->HeterogeneousVolumeData).field_0x8 = &___7FOneFrameResource__6B_;
  *(undefined ***)&this->HeterogeneousVolumeData = &___7IHeterogeneousVolumeInterface__6B_;
  FColorVertexBuffer::~FColorVertexBuffer(&(this->StaticMeshVertexBuffers).ColorVertexBuffer);
  FPositionVertexBuffer::~FPositionVertexBuffer
            (&(this->StaticMeshVertexBuffers).PositionVertexBuffer);
  FStaticMeshVertexBuffer::~FStaticMeshVertexBuffer(&this_00->StaticMeshVertexBuffer);
  FLocalVertexFactory::~FLocalVertexFactory(&this->VertexFactory);
  FPrimitiveSceneProxy::~FPrimitiveSceneProxy((FPrimitiveSceneProxy *)this);
  return;
}

// operator() @ 1478ada40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FHeterogeneousVolumeSceneProxy::FHeterogeneousVolumeSceneProxy'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  undefined1 auStack_108 [32];
  FDataType local_e8;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_108;
  (**(code **)(*(longlong *)(*(longlong *)this + 0x568) + 0x18))();
  (**(code **)(*(longlong *)(*(longlong *)this + 0x4b0) + 0x18))
            ((longlong *)(*(longlong *)this + 0x4b0),param_1);
  (**(code **)(*(longlong *)(*(longlong *)this + 0x5b8) + 0x18))
            ((longlong *)(*(longlong *)this + 0x5b8),param_1);
  local_e8._padding_._4_4_ = 4;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_._0_4_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_._0_4_ = 0xffffffff;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_._4_2_ = 0xff;
  local_e8._padding_._6_1_ = 0;
  local_e8.PreSkinPositionComponent.VertexBuffer = (FVertexBuffer *)0x0;
  local_e8.PreSkinPositionComponent.StreamOffset = 0;
  local_e8.PreSkinPositionComponent.Offset = '\0';
  local_e8.PreSkinPositionComponent.Stride = '\0';
  local_e8.PreSkinPositionComponent.Type.Value = '\0';
  local_e8.PreSkinPositionComponent.VertexStreamUsage = Default;
  local_e8.PreSkinPositionComponentSRV = (FRHIShaderResourceView *)0x0;
  FPositionVertexBuffer::BindPositionVertexBuffer
            ((FPositionVertexBuffer *)(*(longlong *)this + 0x568),
             (FVertexFactory *)(*(longlong *)this + 0x280),(FStaticMeshDataType *)&local_e8);
  FStaticMeshVertexBuffer::BindTangentVertexBuffer
            ((FStaticMeshVertexBuffer *)(*(longlong *)this + 0x4b0),
             (FVertexFactory *)(*(longlong *)this + 0x280),(FStaticMeshDataType *)&local_e8);
  FStaticMeshVertexBuffer::BindPackedTexCoordVertexBuffer
            ((FStaticMeshVertexBuffer *)(*(longlong *)this + 0x4b0),
             (FVertexFactory *)(*(longlong *)this + 0x280),(FStaticMeshDataType *)&local_e8,-1);
  FStaticMeshVertexBuffer::BindLightMapVertexBuffer
            ((FStaticMeshVertexBuffer *)(*(longlong *)this + 0x4b0),
             (FVertexFactory *)(*(longlong *)this + 0x280),(FStaticMeshDataType *)&local_e8,0);
  FColorVertexBuffer::BindColorVertexBuffer
            ((FColorVertexBuffer *)(*(longlong *)this + 0x5b8),
             (FVertexFactory *)(*(longlong *)this + 0x280),(FStaticMeshDataType *)&local_e8);
  FLocalVertexFactory::SetData
            ((FLocalVertexFactory *)(*(longlong *)this + 0x280),(FRHICommandListBase *)param_1,
             &local_e8);
  (**(code **)(*(longlong *)(*(longlong *)this + 0x280) + 0x18))
            ((longlong *)(*(longlong *)this + 0x280),param_1);
  return;
}

// GetDynamicMeshElements @ 1478d1f80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FHeterogeneousVolumeSceneProxy::GetDynamicMeshElements
          (FHeterogeneousVolumeSceneProxy *this,
          TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,FSceneViewFamily *param_2,
          uint param_3,FMeshElementCollector *param_4)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  bool bVar7;
  uint uVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_HeterogeneousVolumeComponentGetDynamicMeshElements> FVar10;
  ForElementType<FMeshBatchElement> FVar11;
  FMaterialRenderProxy *pFVar12;
  FPrimitiveDrawInterface *pFVar13;
  uint uVar14;
  ForElementType<FMeshBatchElement> FVar15;
  longlong lVar16;
  FName FVar17;
  uint uVar18;
  uint uVar19;
  FColor_u_0 local_res10 [4];
  uint local_res20;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  
  local_res20 = param_3;
  if (!__CsvProfilerStat190) {
    FCsvProfilerTrace::OutputInlineStatExclusive("Effects");
    __CsvProfilerStat190 = true;
  }
  FCsvProfiler::BeginExclusiveStat("Effects","CSV_Effects");
  uVar18 = 0;
  FVar10 = StatPtr_STAT_HeterogeneousVolumeComponentGetDynamicMeshElements;
  if (StatPtr_STAT_HeterogeneousVolumeComponentGetDynamicMeshElements ==
      (FThreadSafeStaticStat<FStat_STAT_HeterogeneousVolumeComponentGetDynamicMeshElements>)0x0) {
    pFVar9 = ::FName::FName(&local_58,"STAT_HeterogeneousVolumeComponentGetDynamicMeshElements");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_HeterogeneousVolumeComponentGetDynamicMeshElements>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_HeterogeneousVolumeComponentGetDynamicMeshElements,*pFVar9,
                        L"Get Dynamic Mesh Elements","STATGROUP_HeterogeneousVolumesRT",
                        "STATCAT_HeterogeneousVolumes",L"Heterogeneous Volumes RT",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar10;
  bVar3 = false;
  bVar5 = false;
  local_50.ComparisonIndex.Value = 0;
  local_50.Number = 0;
  if ((FVar17.ComparisonIndex.Value.Value != 0) || (FVar17.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_68.ComparisonIndex.Value = FVar17.ComparisonIndex.Value.Value;
        local_68.Number = FVar17.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_68,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\HeterogeneousVolumeComponent.cpp"
                   ,0xbf);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_60 = FVar17;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar4 = true;
      goto LAB_1478d2111;
    }
  }
  bVar4 = false;
  local_60 = local_50;
  FVar17 = local_50;
LAB_1478d2111:
  if (((param_1->ArrayNum != 0) && ((param_2->EngineShowFlags).HeterogeneousVolumes != 0)) &&
     (lVar16 = 0, 0 < param_1->ArrayNum)) {
    uVar19 = 1;
    uVar8 = local_res20;
    do {
      if ((uVar8 & uVar19) != 0) {
        if (this->MaterialInterface != (UMaterialInterface *)0x0) {
          FVar11 = (ForElementType<FMeshBatchElement>)FMeshElementCollector::AllocateMesh(param_4);
          *(FLocalVertexFactory **)((longlong)FVar11 + 0xa8) = &this->VertexFactory;
          pFVar12 = (FMaterialRenderProxy *)
                    (**(code **)(this->MaterialInterface->_padding_ + 0x310))();
          *(FMaterialRenderProxy **)((longlong)FVar11 + 0xb0) = pFVar12;
          uVar8 = *(uint *)((longlong)FVar11 + 0xd4);
          *(FLightCacheInterface **)((longlong)FVar11 + 0xb8) = (FLightCacheInterface *)0x0;
          uVar14 = (byte)this->_padding_ & 1;
          *(uint *)((longlong)FVar11 + 0xd4) = uVar14 | uVar8 & 0xfffffffe;
          *(uint *)((longlong)FVar11 + 0xd4) =
               ((*(byte *)((longlong)&this->_padding_ + 5) & 2) * 2 ^ (uVar14 | uVar8 & 0xfffffffa))
               & 0xfffffcff | 0x82;
          if ((*(int *)((longlong)FVar11 + 0xa0) < 1) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          FVar15 = FVar11;
          if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar11 + 0x98) !=
              (ForElementType<FMeshBatchElement>)0x0) {
            FVar15 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar11 + 0x98);
          }
          *(FHeterogeneousVolumeData **)((longlong)FVar15 + 0x38) = &this->HeterogeneousVolumeData;
          *(undefined8 *)((longlong)FVar15 + 0x18) = 0;
          *(undefined4 *)((longlong)FVar15 + 0x58) = 0;
          *(undefined4 *)((longlong)FVar15 + 0x68) = 0;
          *(undefined4 *)((longlong)FVar15 + 100) = 0;
          *(undefined4 *)((longlong)FVar15 + 0x6c) = 3;
          *(undefined4 *)((longlong)FVar15 + 0x5c) = 2;
          *(uint *)((longlong)FVar11 + 0xd4) = *(uint *)((longlong)FVar11 + 0xd4) | 0x2000;
          *(uint *)((longlong)FVar11 + 0xd4) =
               -(uint)((this->_padding_ & 0x600) != 0) & 0x4000 |
               *(uint *)((longlong)FVar11 + 0xd4) & 0xfffe3fff;
          FMeshElementCollector::AddMesh(param_4,uVar18,(FMeshBatch *)FVar11);
        }
        uVar8 = 0;
        if ((int)uVar18 < param_1->ArrayNum) {
          uVar8 = ~uVar18 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar6 = this->_padding_;
        lVar1 = *(longlong *)(*(longlong *)((param_1->AllocatorInstance).Data + lVar16) + 8);
        pFVar13 = FMeshElementCollector::GetPDI(param_4,uVar18);
        FPrimitiveSceneProxy::RenderBounds
                  ((FPrimitiveSceneProxy *)this,pFVar13,(FEngineShowFlags *)(lVar1 + 0x48),
                   (TBoxSphereBounds<double,double> *)&this->_padding_,(lVar6 & 0x600) != 0);
        uVar8 = local_res20;
      }
      uVar18 = uVar18 + 1;
      uVar19 = uVar19 << 1 | (uint)((int)uVar19 < 0);
      lVar16 = lVar16 + 8;
      FVar17 = local_60;
    } while ((int)uVar18 < param_1->ArrayNum);
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar4) {
    FThreadStats::AddMessage(FVar17,CycleScopeEnd);
  }
  FCsvProfiler::EndExclusiveStat("Effects");
  return;
}

// GetMemoryFootprint @ 1478d6360

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uint __thiscall
FHeterogeneousVolumeSceneProxy::GetMemoryFootprint(FHeterogeneousVolumeSceneProxy *this)

{
  return *(int *)((longlong)&this->_padding_ + 4) * 4 + 0x700;
}

// GetTypeHash @ 1478ddab0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ulong64 __thiscall FHeterogeneousVolumeSceneProxy::GetTypeHash(FHeterogeneousVolumeSceneProxy *this)

{
  return 0x1551f7660;
}

// GetViewRelevance @ 1478deb60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveViewRelevance * __thiscall
FHeterogeneousVolumeSceneProxy::GetViewRelevance
          (FHeterogeneousVolumeSceneProxy *this,FPrimitiveViewRelevance *__return_storage_ptr__,
          FSceneView *param_1)

{
  byte *pbVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  
  __return_storage_ptr__->_padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  __return_storage_ptr__->bRenderInMainPass = 1;
  FMaterialRelevance::SetPrimitiveViewRelevance(&this->MaterialRelevance,__return_storage_ptr__);
  bVar3 = FPrimitiveSceneProxy::IsShown((FPrimitiveSceneProxy *)this,param_1);
  if ((bVar3) && ((param_1->Family->EngineShowFlags).HeterogeneousVolumes != 0)) {
    uVar4 = 4;
  }
  else {
    uVar4 = 0;
  }
  __return_storage_ptr__->bDrawRelevance = 0;
  uVar2 = *(uint *)&__return_storage_ptr__->field_0x8;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 & 0xfb;
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar4 | uVar2 & 0xfffffffe | 2;
  bVar3 = FPrimitiveSceneProxy::IsShadowCast((FPrimitiveSceneProxy *)this,param_1);
  __return_storage_ptr__->bShadowRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar3 << 3;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 ^
       ((uint)*(byte *)((longlong)&this->_padding_ + 3) << 4 ^
       *(uint *)&__return_storage_ptr__->field_0x8) & 0x80;
  return __return_storage_ptr__;
}

// HasRayTracingRepresentation @ 1478df450

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
FHeterogeneousVolumeSceneProxy::HasRayTracingRepresentation(FHeterogeneousVolumeSceneProxy *this)

{
  return true;
}

// IsRayTracingRelevant @ 1478e1910

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
FHeterogeneousVolumeSceneProxy::IsRayTracingRelevant(FHeterogeneousVolumeSceneProxy *this)

{
  return true;
}

