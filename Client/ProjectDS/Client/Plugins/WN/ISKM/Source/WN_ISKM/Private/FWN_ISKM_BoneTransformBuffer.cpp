// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_ISKM
// Functions: 7

// ~FWN_ISKM_BoneTransformBuffer @ 14a83fb30

void __thiscall
FWN_ISKM_BoneTransformBuffer::~FWN_ISKM_BoneTransformBuffer(FWN_ISKM_BoneTransformBuffer *this)

{
  FStaticMeshVertexDataInterface *pFVar1;
  FRHIShaderResourceView *this_00;
  FRHIBuffer *this_01;
  
  this->_padding_ = (longlong)&___7FWN_ISKM_BoneTransformBuffer__6B_;
  pFVar1 = this->DataInterface;
  if (pFVar1 != (FStaticMeshVertexDataInterface *)0x0) {
    (**(code **)*pFVar1)(pFVar1,1);
    this->DataInterface = (FStaticMeshVertexDataInterface *)0x0;
  }
  this_00 = (this->SRVRHI).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->BufferRHI).Reference;
  if (this_01 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// DeallocBuffer @ 14a847230

void __thiscall FWN_ISKM_BoneTransformBuffer::DeallocBuffer(FWN_ISKM_BoneTransformBuffer *this)

{
  FStaticMeshVertexDataInterface *pFVar1;
  
  pFVar1 = this->DataInterface;
  if (pFVar1 != (FStaticMeshVertexDataInterface *)0x0) {
    (**(code **)*pFVar1)(pFVar1,1);
    this->DataInterface = (FStaticMeshVertexDataInterface *)0x0;
  }
  return;
}

// InitBuffer @ 14a84f120

void __thiscall
FWN_ISKM_BoneTransformBuffer::InitBuffer
          (FWN_ISKM_BoneTransformBuffer *this,TArrayView<UE::Math::TTransform<float>,int> *param_1)

{
  float *pfVar1;
  int iVar2;
  TTransform<float> *pTVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ushort *puVar19;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  
  ReallocBuffer(this);
  iVar2 = param_1->ArrayNum;
  (**(code **)((longlong)*this->DataInterface + 8))(this->DataInterface,iVar2,0);
  lVar14 = (**(code **)((longlong)*this->DataInterface + 0x30))();
  uVar16 = 0;
  if (0 < iVar2) {
    lVar15 = 0;
    lVar18 = 0;
    puVar19 = (ushort *)(lVar14 + 4);
    uVar17 = (longlong)iVar2;
    do {
      uVar13 = 0;
      if ((int)uVar16 < (int)uVar17) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar3 = param_1->DataPtr;
      pfVar1 = (float *)((longlong)&pTVar3->Rotation + lVar18);
      fVar5 = *pfVar1;
      fVar6 = pfVar1[1];
      fVar7 = pfVar1[2];
      fVar8 = pfVar1[3];
      auVar25 = blendps(*(undefined1 (*) [16])((longlong)&pTVar3->Translation + lVar18),
                        (undefined1  [16])GlobalVectorConstants::FloatOne,8);
      fVar21 = fVar6 + fVar6;
      fVar23 = fVar7 + fVar7;
      fVar24 = (fVar5 + fVar5) * fVar5;
      fVar22 = (fVar5 + fVar5) * fVar8;
      pfVar1 = (float *)((longlong)&pTVar3->Scale3D + lVar18);
      fVar9 = *pfVar1;
      fVar10 = pfVar1[1];
      fVar11 = pfVar1[2];
      auVar20._0_4_ =
           (GlobalVectorConstants::FloatOne.m128_f32[0] - (fVar23 * fVar7 + fVar21 * fVar6)) * fVar9
      ;
      auVar20._4_4_ =
           (GlobalVectorConstants::FloatOne.m128_f32[1] - (fVar23 * fVar7 + fVar24)) * fVar10;
      auVar20._8_4_ =
           (GlobalVectorConstants::FloatOne.m128_f32[2] - (fVar21 * fVar6 + fVar24)) * fVar11;
      auVar20._12_4_ = (GlobalVectorConstants::FloatOne.m128_f32[3] - (fVar24 + fVar24)) * pfVar1[3]
      ;
      auVar20 = insertps(auVar20,auVar20,8);
      FGenericPlatformMath::StoreHalf(puVar19 + -2,auVar20._0_4_);
      FGenericPlatformMath::StoreHalf(puVar19 + -1,fVar10 * (fVar21 * fVar5 - fVar23 * fVar8));
      FGenericPlatformMath::StoreHalf(puVar19,(fVar21 * fVar8 + fVar23 * fVar5) * fVar11);
      FGenericPlatformMath::StoreHalf(puVar19 + 1,auVar25._0_4_);
      FGenericPlatformMath::StoreHalf(puVar19 + 2,(fVar23 * fVar8 + fVar21 * fVar5) * fVar9);
      FGenericPlatformMath::StoreHalf(puVar19 + 3,auVar20._4_4_);
      FGenericPlatformMath::StoreHalf(puVar19 + 4,fVar11 * (fVar23 * fVar6 - fVar22));
      FGenericPlatformMath::StoreHalf(puVar19 + 5,auVar25._4_4_);
      FGenericPlatformMath::StoreHalf(puVar19 + 6,fVar9 * (fVar23 * fVar5 - fVar21 * fVar8));
      FGenericPlatformMath::StoreHalf(puVar19 + 7,(fVar22 + fVar23 * fVar6) * fVar10);
      FGenericPlatformMath::StoreHalf(puVar19 + 8,auVar20._8_4_);
      FGenericPlatformMath::StoreHalf(puVar19 + 9,auVar25._8_4_);
      uVar16 = uVar16 + 1;
      lVar15 = lVar15 + 1;
      puVar19 = puVar19 + 0xc;
      lVar18 = lVar18 + 0x30;
      uVar17 = uVar17 & 0xffffffff;
    } while (lVar15 < iVar2);
  }
  return;
}

// InitRHI @ 14a84f5e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FWN_ISKM_BoneTransformBuffer::InitRHI
          (FWN_ISKM_BoneTransformBuffer *this,FRHICommandListBase *param_1)

{
  TRefCountPtr<FRHIBuffer> *pTVar1;
  TRefCountPtr<FRHIShaderResourceView> *pTVar2;
  FStaticMeshVertexDataInterface *pFVar3;
  FRHIBuffer *this_00;
  FRHIShaderResourceView *this_01;
  code *pcVar4;
  bool bVar5;
  TRefCountPtr<FRHIBuffer> TVar6;
  TRefCountPtr<FRHIShaderResourceView> TVar7;
  FRHIResource *local_res8;
  FRHIResource *local_res18;
  
  pFVar3 = this->DataInterface;
  (**(code **)((longlong)*pFVar3 + 0x28))(pFVar3);
  (**(code **)((longlong)*pFVar3 + 0x20))(pFVar3);
  RHIGetDefaultResourceState(VertexBuffer|ShaderResource|Static,false);
  (**(code **)((longlong)*this->DataInterface + 0x38))();
  TVar6 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)&local_res8);
  pTVar1 = &this->BufferRHI;
  if ((FRHIBuffer *)pTVar1 != TVar6.Reference) {
    this_00 = pTVar1->Reference;
    pTVar1->Reference = (FRHIBuffer *)(TVar6.Reference)->_padding_;
    (TVar6.Reference)->_padding_ = 0;
    if (this_00 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  if (pTVar1->Reference != (FRHIBuffer *)0x0) {
    if (GPixelFormats[10].BlockBytes != 8) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("sizeof(uint16[4]) == GPixelFormats[PF_FloatRGBA].BlockBytes",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_RenderResources.cpp"
                         ,0xc3,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    TVar7 = FRHICommandListBase::CreateShaderResourceView
                      (param_1,(FRHIBuffer *)&local_res18,(FInitializer *)pTVar1->Reference);
    pTVar2 = &this->SRVRHI;
    if ((FRHIShaderResourceView *)pTVar2 != TVar7.Reference) {
      this_01 = pTVar2->Reference;
                    /* WARNING: Load size is inaccurate */
      pTVar2->Reference = *TVar7.Reference;
      *(undefined8 *)TVar7.Reference = 0;
      if (this_01 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)this_01);
      }
    }
    if (local_res18 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res18);
    }
  }
  pFVar3 = this->DataInterface;
  if (pFVar3 != (FStaticMeshVertexDataInterface *)0x0) {
    (**(code **)*pFVar3)(pFVar3,1);
    this->DataInterface = (FStaticMeshVertexDataInterface *)0x0;
  }
  return;
}

// ReallocBuffer @ 14a850bc0

void __thiscall FWN_ISKM_BoneTransformBuffer::ReallocBuffer(FWN_ISKM_BoneTransformBuffer *this)

{
  FStaticMeshVertexDataInterface *pFVar1;
  
  pFVar1 = this->DataInterface;
  if (pFVar1 != (FStaticMeshVertexDataInterface *)0x0) {
    (**(code **)*pFVar1)(pFVar1,1);
    this->DataInterface = (FStaticMeshVertexDataInterface *)0x0;
  }
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStaticMeshVertexDataInterface *)0x0) {
    pFVar1[2] = (FStaticMeshVertexDataInterface)0x0;
    *pFVar1 = (FStaticMeshVertexDataInterface)&___7__TStaticMeshVertexData_UFWN_Matrix3x4H____6B_;
    pFVar1[1] = (FStaticMeshVertexDataInterface)&___7__TResourceArray_UFWN_Matrix3x4H___0A___6B_;
    pFVar1[3] = (FStaticMeshVertexDataInterface)0x0;
    *(undefined1 *)(pFVar1 + 4) = 0;
    this->DataInterface = pFVar1;
    return;
  }
  this->DataInterface = (FStaticMeshVertexDataInterface *)0x0;
  return;
}

// ReleaseRHI @ 14a852740

void __thiscall FWN_ISKM_BoneTransformBuffer::ReleaseRHI(FWN_ISKM_BoneTransformBuffer *this)

{
  FRHIShaderResourceView *this_00;
  FRHIBuffer *this_01;
  
  this_00 = (this->SRVRHI).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    (this->SRVRHI).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->BufferRHI).Reference;
  if (this_01 != (FRHIBuffer *)0x0) {
    (this->BufferRHI).Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)this_01);
    return;
  }
  return;
}

// Serialize @ 14a8539f0

void __thiscall
FWN_ISKM_BoneTransformBuffer::Serialize(FWN_ISKM_BoneTransformBuffer *this,FArchive *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  ulonglong *puVar3;
  FStaticMeshVertexDataInterface *pFVar4;
  bool bVar5;
  uint local_res8 [2];
  
  bVar5 = this->DataInterface != (FStaticMeshVertexDataInterface *)0x0;
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = &param_1->field_0x28;
  piVar2 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar2) {
    local_res8[0] = 0;
    if ((*puVar1 & 1) == 0) {
      local_res8[0] = (uint)(this->DataInterface != (FStaticMeshVertexDataInterface *)0x0);
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    if ((*puVar1 & 1) != 0) {
      bVar5 = local_res8[0] != 0;
    }
  }
  else {
    bVar5 = *(int *)*puVar3 != 0;
    *puVar3 = (ulonglong)piVar2;
  }
  if ((*puVar1 & 4) == 0) {
    if (!bVar5) {
      return;
    }
    ReallocBuffer(this);
    pFVar4 = this->DataInterface;
  }
  else {
    pFVar4 = this->DataInterface;
    if (pFVar4 == (FStaticMeshVertexDataInterface *)0x0) {
      return;
    }
  }
  (**(code **)((longlong)*pFVar4 + 0x40))(pFVar4,param_1,0);
  return;
}

