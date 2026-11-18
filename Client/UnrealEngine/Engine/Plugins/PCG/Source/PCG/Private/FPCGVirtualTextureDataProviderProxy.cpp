// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// FPCGVirtualTextureDataProviderProxy @ 14973a1c0

FPCGVirtualTextureDataProviderProxy * __thiscall
FPCGVirtualTextureDataProviderProxy::FPCGVirtualTextureDataProviderProxy
          (FPCGVirtualTextureDataProviderProxy *this,
          TArray<TObjectPtr<URuntimeVirtualTexture_const_>,TSizedDefaultAllocator<32>_> *param_1)

{
  URuntimeVirtualTexture *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FVirtualTextureLayer *pFVar5;
  double *pdVar6;
  FPCGVirtualTextureDataProviderProxy *pFVar7;
  FVirtualTexturePageTable *pFVar8;
  uint uVar9;
  ERuntimeVirtualTextureMaterialType EVar10;
  uint uVar11;
  longlong lVar12;
  ERuntimeVirtualTextureMaterialType *pEVar13;
  TIntVector4<unsigned_int>_u_0 *pTVar14;
  longlong lVar15;
  int iVar16;
  int local_res18;
  longlong local_58;
  
  lVar15 = 0xc;
  *(undefined ***)this = &_vftable_;
  pFVar5 = this->Layers;
  lVar12 = 0xc;
  uVar9 = 0;
  pTVar14 = (TIntVector4<unsigned_int>_u_0 *)this;
  do {
    pTVar14 = (TIntVector4<unsigned_int>_u_0 *)((longlong)pTVar14 + 0x18);
    (pFVar5->TextureSRV).Reference = (FRHIShaderResourceView *)0x0;
    pFVar5 = pFVar5 + 1;
    pTVar14->_s_0 =
         (TIntVector4<unsigned_int>_u_0_s_0)
         UE::Math::TIntVector4<unsigned_int>::ZeroValue.field0_0x0;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  pFVar8 = this->PageTables;
  pdVar6 = &this->PageTables[0].WorldToUVParameters[0].field0_0x0._s_0.Z;
  do {
    *(undefined1 *)(pdVar6 + -8) = 0;
    ((TVector4<double>_u_0_s_0 *)(pdVar6 + -2))->X = 0.0;
    pdVar6[-1] = 0.0;
    *pdVar6 = 0.0;
    pdVar6[1] = 1.0;
    pdVar6[2] = 0.0;
    pdVar6[3] = 0.0;
    pdVar6[4] = 0.0;
    pdVar6[5] = 1.0;
    pdVar6[6] = 0.0;
    pdVar6[7] = 0.0;
    pdVar6[8] = 0.0;
    pdVar6[9] = 1.0;
    pdVar6[10] = 0.0;
    pdVar6[0xb] = 0.0;
    pdVar6[0xc] = 0.0;
    pdVar6[0xd] = 1.0;
    (pFVar8->PageTableRef).Reference = (FRHITexture *)0x0;
    pFVar8 = pFVar8 + 1;
    pdVar6[-9] = 0.0;
    pdVar6 = pdVar6 + 0x18;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  this->NumVirtualTextures = 0;
  iVar16 = param_1->ArrayNum;
  this->NumVirtualTextures = iVar16;
  if (0 < iVar16) {
    pEVar13 = this->MaterialTypes;
    local_58 = 0;
    local_res18 = 0;
    do {
      uVar11 = 0;
      EVar10 = Count;
      uVar3 = 0;
      if ((int)uVar9 < param_1->ArrayNum) {
        uVar3 = ~uVar9 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar7 = (FPCGVirtualTextureDataProviderProxy *)(*pcVar1)();
        return pFVar7;
      }
      this_00 = *(URuntimeVirtualTexture **)((param_1->AllocatorInstance).Data + local_58);
      if (this_00 != (URuntimeVirtualTexture *)0x0) {
        EVar10 = this_00->MaterialType;
        iVar4 = URuntimeVirtualTexture::GetLayerCount(EVar10);
        iVar16 = 3;
        if (iVar4 < 3) {
          iVar16 = iVar4;
        }
        if (0 < iVar16) {
          pFVar8 = this->PageTables + local_res18;
          pFVar5 = this->Layers + local_res18;
          do {
            bVar2 = URuntimeVirtualTexture::IsLayerSRGB(this_00,uVar11);
            PCGVirtualTextureCommon::FVirtualTextureLayer::Initialize(pFVar5,this_00,uVar11,bVar2);
            PCGVirtualTextureCommon::FVirtualTexturePageTable::Initialize
                      (pFVar8,this_00,uVar11,uVar11 == 0,uVar11 == 0);
            uVar11 = uVar11 + 1;
            pFVar5 = pFVar5 + 1;
            pFVar8 = pFVar8 + 1;
          } while ((int)uVar11 < iVar16);
        }
      }
      local_res18 = local_res18 + 3;
      *pEVar13 = EVar10;
      local_58 = local_58 + 8;
      pEVar13 = pEVar13 + 1;
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < this->NumVirtualTextures);
  }
  return this;
}

// GatherDispatchData @ 149753570

void __thiscall
FPCGVirtualTextureDataProviderProxy::GatherDispatchData
          (FPCGVirtualTextureDataProviderProxy *this,FDispatchData *param_1)

{
  uchar *puVar1;
  uint *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  byte bVar12;
  int iVar13;
  int iVar14;
  code *pcVar15;
  int iVar16;
  undefined8 uVar17;
  bool bVar18;
  uint uVar19;
  ERuntimeVirtualTextureMaterialType *pEVar20;
  ulonglong uVar21;
  double *pdVar22;
  double *pdVar23;
  uchar *puVar24;
  ulonglong uVar25;
  TIntVector4<unsigned_int> *pTVar26;
  uchar *puVar27;
  uint uVar28;
  undefined4 uVar29;
  uint uVar30;
  undefined4 uVar31;
  uint uVar32;
  undefined4 uVar33;
  uint uVar34;
  undefined4 uVar35;
  int local_res10;
  float *local_res20;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_f0;
  double local_d8;
  double local_d0;
  double local_c8;
  
  iVar13 = param_1->NumInvocations;
  puVar24 = param_1->ParameterBuffer + param_1->ParameterBufferOffset;
  iVar14 = param_1->ParameterBufferStride;
  if ((iVar13 < 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumElements >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                          ,0x3f,L""), bVar18)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  if ((iVar14 < 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("BytesBetweenElements >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                          ,0x40,L""), bVar18)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  if ((((longlong)iVar14 & 0xfU) != 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("BytesBetweenElements % alignof(ElementType) == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                          ,0x41,L""), bVar18)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  local_res10 = 0;
  if (0 < iVar13) {
    do {
      pEVar20 = this->MaterialTypes;
      pTVar26 = &this->Layers[1].TextureUniforms;
      if ((local_res10 < 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                              ,0x96,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar18)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      pdVar22 = (double *)(puVar24 + 0x40);
      *(int *)(puVar24 + 0x4e0) = this->NumVirtualTextures;
      puVar27 = puVar24 + 0x128;
      uVar21 = 0;
      *(FRHISamplerState **)(puVar24 + 0x4e8) =
           TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
           ::StaticResource.StateRHI.Reference;
      local_res20 = (float *)(puVar24 + 0x1e0);
      pdVar23 = &this->PageTables[0].WorldToUVParameters[1].field0_0x0._s_0.Z;
      do {
        iVar16 = (int)uVar21;
        uVar19 = iVar16 * 3;
        uVar25 = (ulonglong)uVar19;
        *(uint *)(puVar27 + -8) = (uint)*pEVar20;
        puVar27[-4] = '\0';
        puVar27[-3] = '\0';
        puVar27[-2] = '\0';
        puVar27[-1] = '\0';
        puVar27[0] = '\0';
        puVar27[1] = '\0';
        puVar27[2] = '\0';
        puVar27[3] = '\0';
        puVar27[4] = '\0';
        puVar27[5] = '\0';
        puVar27[6] = '\0';
        puVar27[7] = '\0';
        ((TIntVector4<unsigned_int>_u_0 *)(puVar27 + 0x38))->_s_0 =
             (TIntVector4<unsigned_int>_u_0_s_0)
             UE::Math::TIntVector4<unsigned_int>::ZeroValue.field0_0x0;
        bVar18 = PCGVirtualTextureCommon::FVirtualTextureLayer::IsValid
                           ((FVirtualTextureLayer *)(pTVar26 + -2));
        if ((bVar18) &&
           (bVar18 = PCGVirtualTextureCommon::FVirtualTexturePageTable::IsValid
                               ((FVirtualTexturePageTable *)(pdVar23 + -0xe)), bVar18)) {
          *(uint *)(puVar27 + 0x38) = *(uint *)(puVar27 + 0x38) | 1;
          pdVar22[-8] = *(double *)(pTVar26 + -2);
          pdVar22[-4] = pdVar23[-0xe];
          *pdVar22 = pdVar23[-0xd];
          bVar12 = *(byte *)(pdVar23 + -0xc);
          *(ulonglong *)(puVar24 + (uVar25 + 0x2e) * 0x10) =
               (ulonglong)CONCAT14(bVar12,(uint)bVar12);
          *(ulonglong *)((longlong)(puVar24 + (uVar25 + 0x2e) * 0x10) + 8) =
               (ulonglong)CONCAT14(bVar12,(uint)bVar12);
          uVar17 = *(undefined8 *)(pTVar26 + -1);
          *(undefined8 *)(puVar24 + (uVar25 + 0x3a) * 0x10) =
               *(undefined8 *)((longlong)(pTVar26 + -2) + 8);
          *(undefined8 *)(puVar24 + (uVar25 + 0x3a) * 0x10 + 8) = uVar17;
          local_108._s_0.X = pdVar23[-6];
          local_108._s_0.Y = pdVar23[-5];
          local_108._s_0.Z = pdVar23[-4];
          TLargeWorldRenderPosition<double>::TLargeWorldRenderPosition<double><double>
                    ((TLargeWorldRenderPosition<double> *)&local_f0._s_0,
                     (TVector<double> *)&local_108._s_0);
          *(float *)(puVar27 + 0x78) = (float)local_f0._s_0.X;
          *(float *)(puVar27 + 0x7c) = (float)local_f0._s_0.Y;
          *(float *)(puVar27 + 0x80) = (float)local_f0._s_0.Z;
          puVar27[0x84] = '\0';
          puVar27[0x85] = '\0';
          puVar27[0x86] = 0x80;
          puVar27[0x87] = '?';
          dVar3 = ((TVector4<double>_u_0_s_0 *)(pdVar23 + -2))->X;
          dVar4 = pdVar23[-1];
          dVar5 = *pdVar23;
          dVar6 = pdVar23[2];
          dVar7 = pdVar23[3];
          dVar8 = pdVar23[4];
          dVar9 = pdVar23[6];
          dVar10 = pdVar23[7];
          dVar11 = pdVar23[8];
          *local_res20 = (float)local_d8;
          local_res20[1] = (float)local_d0;
          local_res20[2] = (float)local_c8;
          local_res20[3] = 0.0;
          local_res20[4] = (float)dVar3;
          local_res20[5] = (float)dVar4;
          local_res20[6] = (float)dVar5;
          local_res20[7] = 0.0;
          local_res20[8] = (float)dVar6;
          local_res20[9] = (float)dVar7;
          local_res20[10] = (float)dVar8;
          local_res20[0xb] = 0.0;
          local_res20[0xc] = (float)dVar9;
          local_res20[0xd] = (float)dVar10;
          local_res20[0xe] = (float)dVar11;
          local_res20[0xf] = 1.0;
          uVar17 = *(undefined8 *)((longlong)pdVar23 + -0x54);
          *(undefined8 *)(puVar24 + ((ulonglong)(uint)(iVar16 * 2) + 0x46) * 0x10) =
               *(undefined8 *)((longlong)pdVar23 + -0x5c);
          *(undefined8 *)(puVar24 + ((ulonglong)(uint)(iVar16 * 2) + 0x46) * 0x10 + 8) = uVar17;
          uVar29 = *(undefined4 *)((longlong)pdVar23 + -0x4c);
          uVar31 = *(undefined4 *)(pdVar23 + -9);
          uVar33 = *(undefined4 *)((longlong)pdVar23 + -0x44);
          uVar35 = *(undefined4 *)(pdVar23 + -8);
        }
        else {
          pdVar22[-8] = (double)(GBlackTextureWithSRV->ShaderResourceViewRHI).Reference;
          pdVar22[-4] = (double)(GBlackUintTexture->TextureRHI).Reference;
          *pdVar22 = (double)(GBlackUintTexture->TextureRHI).Reference;
          ((TIntVector4<unsigned_int>_u_0 *)(puVar24 + (uVar25 + 0x2e) * 0x10))->_s_0 =
               (TIntVector4<unsigned_int>_u_0_s_0)
               UE::Math::TIntVector4<unsigned_int>::ZeroValue.field0_0x0;
          ((TIntVector4<unsigned_int>_u_0 *)(puVar24 + (uVar25 + 0x3a) * 0x10))->_s_0 =
               (TIntVector4<unsigned_int>_u_0_s_0)
               UE::Math::TIntVector4<unsigned_int>::ZeroValue.field0_0x0;
          uVar31 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          uVar29 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
          *(float *)(puVar27 + 0x78) = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
          *(undefined4 *)(puVar27 + 0x7c) = uVar29;
          *(undefined4 *)(puVar27 + 0x80) = uVar31;
          puVar27[0x84] = '\0';
          uVar17 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
          puVar27[0x85] = '\0';
          puVar27[0x86] = 0x80;
          puVar27[0x87] = '?';
          *(undefined8 *)local_res20 = UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
          *(undefined8 *)(local_res20 + 2) = uVar17;
          uVar17 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
          *(undefined8 *)(local_res20 + 4) = UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
          *(undefined8 *)(local_res20 + 6) = uVar17;
          uVar17 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
          *(undefined8 *)(local_res20 + 8) = UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
          *(undefined8 *)(local_res20 + 10) = uVar17;
          uVar17 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
          *(undefined8 *)(local_res20 + 0xc) = UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
          *(undefined8 *)(local_res20 + 0xe) = uVar17;
          ((TIntVector4<unsigned_int>_u_0 *)
          (puVar24 + ((ulonglong)(uint)(iVar16 * 2) + 0x46) * 0x10))->_s_0 =
               (TIntVector4<unsigned_int>_u_0_s_0)
               UE::Math::TIntVector4<unsigned_int>::ZeroValue.field0_0x0;
          uVar29 = UE::Math::TIntVector4<unsigned_int>::ZeroValue.field0_0x0._0_4_;
          uVar31 = UE::Math::TIntVector4<unsigned_int>::ZeroValue.field0_0x0._4_4_;
          uVar33 = UE::Math::TIntVector4<unsigned_int>::ZeroValue.field0_0x0._8_4_;
          uVar35 = UE::Math::TIntVector4<unsigned_int>::ZeroValue.field0_0x0._12_4_;
        }
        puVar1 = puVar24 + ((ulonglong)(iVar16 * 2 + 1) + 0x46) * 0x10;
        *(undefined4 *)puVar1 = uVar29;
        *(undefined4 *)(puVar1 + 4) = uVar31;
        *(undefined4 *)(puVar1 + 8) = uVar33;
        *(undefined4 *)(puVar1 + 0xc) = uVar35;
        bVar18 = PCGVirtualTextureCommon::FVirtualTextureLayer::IsValid
                           ((FVirtualTextureLayer *)((longlong)(pTVar26 + -1) + 8));
        if ((bVar18) &&
           (bVar18 = PCGVirtualTextureCommon::FVirtualTexturePageTable::IsValid
                               ((FVirtualTexturePageTable *)(pdVar23 + 10)), bVar18)) {
          *(uint *)(puVar24 + (uVar21 + 0x16) * 0x10) =
               *(uint *)(puVar24 + (uVar21 + 0x16) * 0x10) | 2;
          pdVar22[4] = *(double *)((longlong)(pTVar26 + -1) + 8);
          pdVar22[8] = pdVar23[10];
          pdVar22[0xc] = pdVar23[0xb];
          bVar12 = *(byte *)(pdVar23 + 0xc);
          *(ulonglong *)(puVar24 + ((ulonglong)(uVar19 + 1) + 0x2e) * 0x10) =
               (ulonglong)CONCAT14(bVar12,(uint)bVar12);
          *(ulonglong *)((longlong)(puVar24 + ((ulonglong)(uVar19 + 1) + 0x2e) * 0x10) + 8) =
               (ulonglong)CONCAT14(bVar12,(uint)bVar12);
          uVar28 = (pTVar26->field0_0x0)._s_0.X;
          uVar30 = (pTVar26->field0_0x0)._s_0.Y;
          uVar32 = (pTVar26->field0_0x0)._s_0.Z;
          uVar34 = (pTVar26->field0_0x0)._s_0.W;
        }
        else {
          pdVar22[4] = (double)(GBlackTextureWithSRV->ShaderResourceViewRHI).Reference;
          pdVar22[8] = (double)(GBlackUintTexture->TextureRHI).Reference;
          pdVar22[0xc] = (double)(GBlackUintTexture->TextureRHI).Reference;
          ((TIntVector4<unsigned_int>_u_0 *)(puVar24 + ((ulonglong)(uVar19 + 1) + 0x2e) * 0x10))->
          _s_0 = (TIntVector4<unsigned_int>_u_0_s_0)
                 UE::Math::TIntVector4<unsigned_int>::ZeroValue.field0_0x0;
          uVar28 = UE::Math::TIntVector4<unsigned_int>::ZeroValue.field0_0x0._0_4_;
          uVar30 = UE::Math::TIntVector4<unsigned_int>::ZeroValue.field0_0x0._4_4_;
          uVar32 = UE::Math::TIntVector4<unsigned_int>::ZeroValue.field0_0x0._8_4_;
          uVar34 = UE::Math::TIntVector4<unsigned_int>::ZeroValue.field0_0x0._12_4_;
        }
        puVar2 = (uint *)(puVar24 + ((ulonglong)(uVar19 + 1) + 0x3a) * 0x10);
        *puVar2 = uVar28;
        puVar2[1] = uVar30;
        puVar2[2] = uVar32;
        puVar2[3] = uVar34;
        bVar18 = PCGVirtualTextureCommon::FVirtualTextureLayer::IsValid
                           ((FVirtualTextureLayer *)(pTVar26 + 1));
        if ((bVar18) &&
           (bVar18 = PCGVirtualTextureCommon::FVirtualTexturePageTable::IsValid
                               ((FVirtualTexturePageTable *)(pdVar23 + 0x22)), bVar18)) {
          *(uint *)(puVar24 + (uVar21 + 0x16) * 0x10) =
               *(uint *)(puVar24 + (uVar21 + 0x16) * 0x10) | 4;
          pdVar22[0x10] = *(double *)(pTVar26 + 1);
          pdVar22[0x14] = pdVar23[0x22];
          pdVar22[0x18] = pdVar23[0x23];
          bVar12 = *(byte *)(pdVar23 + 0x24);
          uVar19 = iVar16 * 3 + 2;
          *(ulonglong *)(puVar24 + ((ulonglong)uVar19 + 0x2e) * 0x10) =
               (ulonglong)CONCAT14(bVar12,(uint)bVar12);
          *(ulonglong *)((longlong)(puVar24 + ((ulonglong)uVar19 + 0x2e) * 0x10) + 8) =
               (ulonglong)CONCAT14(bVar12,(uint)bVar12);
          uVar29 = *(undefined4 *)((longlong)(pTVar26 + 1) + 8);
          uVar31 = *(undefined4 *)((longlong)(pTVar26 + 1) + 0xc);
          uVar33 = *(undefined4 *)(pTVar26 + 2);
          uVar35 = *(undefined4 *)((longlong)(pTVar26 + 2) + 4);
        }
        else {
          pdVar22[0x10] = (double)(GBlackTextureWithSRV->ShaderResourceViewRHI).Reference;
          pdVar22[0x14] = (double)(GBlackUintTexture->TextureRHI).Reference;
          pdVar22[0x18] = (double)(GBlackUintTexture->TextureRHI).Reference;
          uVar19 = iVar16 * 3 + 2;
          ((TIntVector4<unsigned_int>_u_0 *)(puVar24 + ((ulonglong)uVar19 + 0x2e) * 0x10))->_s_0 =
               (TIntVector4<unsigned_int>_u_0_s_0)
               UE::Math::TIntVector4<unsigned_int>::ZeroValue.field0_0x0;
          uVar29 = UE::Math::TIntVector4<unsigned_int>::ZeroValue.field0_0x0._0_4_;
          uVar31 = UE::Math::TIntVector4<unsigned_int>::ZeroValue.field0_0x0._4_4_;
          uVar33 = UE::Math::TIntVector4<unsigned_int>::ZeroValue.field0_0x0._8_4_;
          uVar35 = UE::Math::TIntVector4<unsigned_int>::ZeroValue.field0_0x0._12_4_;
        }
        local_res20 = local_res20 + 0x10;
        pEVar20 = pEVar20 + 1;
        uVar21 = (ulonglong)(iVar16 + 1U);
        pTVar26 = (TIntVector4<unsigned_int> *)((longlong)(pTVar26 + 4) + 8);
        pdVar23 = pdVar23 + 0x48;
        pdVar22 = pdVar22 + 1;
        puVar27 = puVar27 + 0x10;
        puVar1 = puVar24 + ((ulonglong)uVar19 + 0x3a) * 0x10;
        *(undefined4 *)puVar1 = uVar29;
        *(undefined4 *)(puVar1 + 4) = uVar31;
        *(undefined4 *)(puVar1 + 8) = uVar33;
        *(undefined4 *)(puVar1 + 0xc) = uVar35;
      } while (iVar16 + 1U < 4);
      local_res10 = local_res10 + 1;
      puVar24 = puVar24 + iVar14;
    } while (local_res10 < iVar13);
  }
  return;
}

// GatherPermutations @ 149754090

void __thiscall
FPCGVirtualTextureDataProviderProxy::GatherPermutations
          (FPCGVirtualTextureDataProviderProxy *this,FPermutationData *param_1)

{
  FScriptContainerElement *pFVar1;
  FComputeKernelPermutationVector *this_00;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  
  this_00 = param_1->PermutationVector;
  piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar7 < `public:___cdecl_FPCGVirtualTextureDataInterfacePermutationIds::FPCGVirtualTextureDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_FPCGVirtualTextureDataInterfacePermutationIds::FPCGVirtualTextureDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_FPCGVirtualTextureDataInterfacePermutationIds::FPCGVirtualTextureDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FString::FString(&`public:___cdecl_FPCGVirtualTextureDataInterfacePermutationIds::FPCGVirtualTextureDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                        ::__l2::Name,EnableMultipleVirtualTexturePermutationName);
    atexit(`FPCGVirtualTextureDataInterfacePermutationIds::
           FPCGVirtualTextureDataInterfacePermutationIds'::__l2::
           _dynamic_atexit_destructor_for__Name__);
    _Init_thread_footer(&`public:___cdecl_FPCGVirtualTextureDataInterfacePermutationIds::FPCGVirtualTextureDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  uVar8 = 0;
  if ((*piVar7 < `public:___cdecl_FPCGVirtualTextureDataInterfacePermutationIds::FPCGVirtualTextureDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:___cdecl_FPCGVirtualTextureDataInterfacePermutationIds::FPCGVirtualTextureDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:___cdecl_FPCGVirtualTextureDataInterfacePermutationIds::FPCGVirtualTextureDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    uVar5 = `public:___cdecl_FPCGVirtualTextureDataInterfacePermutationIds::FPCGVirtualTextureDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
            ::__l2::Name.Data.ArrayNum - 1;
    FVar3 = `public:___cdecl_FPCGVirtualTextureDataInterfacePermutationIds::FPCGVirtualTextureDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
            ::__l2::Name.Data.AllocatorInstance;
    if (`public:___cdecl_FPCGVirtualTextureDataInterfacePermutationIds::FPCGVirtualTextureDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
        ::__l2::Name.Data.ArrayNum == 0) {
      uVar5 = 0;
      FVar3.Data = (FScriptContainerElement *)L"";
    }
    `public:___cdecl_FPCGVirtualTextureDataInterfacePermutationIds::FPCGVirtualTextureDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
    ::__l2::Hash = FCrc::Strihash_DEPRECATED<wchar_t>(uVar5,(wchar_t *)FVar3.Data);
    _Init_thread_footer(&`public:___cdecl_FPCGVirtualTextureDataInterfacePermutationIds::FPCGVirtualTextureDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  uVar5 = FComputeKernelPermutationVector::GetPermutationBits
                    (this_00,&`public:___cdecl_FPCGVirtualTextureDataInterfacePermutationIds::FPCGVirtualTextureDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                              ::__l2::Name,
                     `public:___cdecl_FPCGVirtualTextureDataInterfacePermutationIds::FPCGVirtualTextureDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                     ::__l2::Hash,1);
  uVar10 = uVar8;
  if (0 < param_1->NumInvocations) {
    do {
      uVar9 = (uint)uVar10;
      uVar11 = 0;
      if (1 < this->NumVirtualTextures) {
        uVar11 = uVar5;
      }
      uVar6 = 0;
      if ((int)uVar9 < (param_1->PermutationIds).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_1->PermutationIds).AllocatorInstance.Data + uVar8;
      *(uint *)pFVar1 = *(uint *)pFVar1 | uVar11;
      uVar8 = uVar8 + 4;
      uVar10 = (ulonglong)(uVar9 + 1);
    } while ((int)(uVar9 + 1) < param_1->NumInvocations);
  }
  return;
}

// IsValid @ 14976c360

bool __thiscall
FPCGVirtualTextureDataProviderProxy::IsValid
          (FPCGVirtualTextureDataProviderProxy *this,FValidationData *param_1)

{
  return param_1->ParameterStructSize == 0x4f0;
}

