// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 5

// ChangeTextureBasisFromTo @ 144803b40

FScreenTransform * __cdecl
FScreenTransform::ChangeTextureBasisFromTo
          (FScreenTransform *__return_storage_ptr__,TIntPoint<int> *param_1,TIntRect<int> *param_2,
          ETextureBasis param_3,ETextureBasis param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  TVector2<float>_u_0 TVar8;
  TVector2<float>_u_0 TVar9;
  TVector2<float>_u_0 TVar10;
  TVector2<float>_u_0 TVar11;
  TVector2<float>_u_0 TVar12;
  TVector2<float>_u_0 TVar13;
  TVector2<float>_u_0 TVar14;
  TVector2<float>_u_0 TVar15;
  TVector2<float>_u_0 TVar16;
  TVector2<float>_u_0 TVar17;
  bool bVar18;
  ETextureBasis EVar19;
  FScreenTransform *pFVar20;
  FScreenTransform *pFVar21;
  uint uVar22;
  FScreenTransform FVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  FScreenTransform local_58;
  FScreenTransform local_48;
  FScreenTransform local_38;
  FScreenTransform local_28;
  
  if ((int)param_3 < (int)param_4) {
    if (param_3 + ViewportUV != param_4) {
      EVar19 = (int)(param_3 + param_4) / 2;
      pFVar20 = ChangeTextureBasisFromTo(&local_58,param_1,param_2,EVar19,param_4);
      pFVar21 = ChangeTextureBasisFromTo(&local_48,param_1,param_2,param_3,EVar19);
      fVar25 = (pFVar20->Scale).field0_0x0._s_0.X;
      fVar26 = (pFVar20->Scale).field0_0x0._s_0.Y;
      fVar1 = (pFVar21->Bias).field0_0x0._s_0.X;
      fVar2 = (pFVar21->Bias).field0_0x0._s_0.Y;
      fVar3 = (pFVar20->Bias).field0_0x0._s_0.X;
      fVar4 = (pFVar20->Bias).field0_0x0._s_0.Y;
      TVar8._s_0.Y = fVar26 * (pFVar21->Scale).field0_0x0._s_0.Y;
      TVar8._s_0.X = fVar25 * (pFVar21->Scale).field0_0x0._s_0.X;
      (__return_storage_ptr__->Scale).field0_0x0 = TVar8;
      TVar9._s_0.Y = fVar26 * fVar2 + fVar4;
      TVar9._s_0.X = fVar25 * fVar1 + fVar3;
      (__return_storage_ptr__->Bias).field0_0x0 = TVar9;
      return __return_storage_ptr__;
    }
    FVar23 = ScreenPosToViewportUV;
    if (param_4 != ViewportUV) {
      if (param_4 == TexelPosition) {
        iVar5 = *(int *)&param_2->field0_0x0;
        iVar6 = *(int *)((longlong)&param_2->field0_0x0 + 4);
        TVar10._s_0.Y = (float)(*(int *)((longlong)&param_2->field0_0x0 + 0xc) - iVar6);
        TVar10._s_0.X = (float)(*(int *)((longlong)&param_2->field0_0x0 + 8) - iVar5);
        (__return_storage_ptr__->Scale).field0_0x0 = TVar10;
        TVar11._s_0.Y = (float)iVar6;
        TVar11._s_0.X = (float)iVar5;
        (__return_storage_ptr__->Bias).field0_0x0 = TVar11;
        return __return_storage_ptr__;
      }
      if (param_4 == TextureUV) {
        TVar12._s_0.Y = __real_3f800000 / (float)(param_1->field0_0x0)._s_0.Y;
        TVar12._s_0.X = __real_3f800000 / (float)(param_1->field0_0x0)._s_0.X;
        (__return_storage_ptr__->Scale).field0_0x0 = TVar12;
        (__return_storage_ptr__->Bias).field0_0x0 = (TVector2<float>_u_0)0x0;
        return __return_storage_ptr__;
      }
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.inl"
                          ,0x150,L"");
      FVar23 = Identity;
      if (bVar18) {
code_r0x000144803ec1:
        pcVar7 = (code *)swi(3);
        pFVar20 = (FScreenTransform *)(*pcVar7)();
        return pFVar20;
      }
    }
  }
  else {
    FVar23 = Identity;
    if ((int)param_4 < (int)param_3) {
      if (param_3 != param_4 + ViewportUV) {
        EVar19 = (int)(param_3 + param_4) / 2;
        pFVar20 = ChangeTextureBasisFromTo(&local_38,param_1,param_2,EVar19,param_4);
        pFVar21 = ChangeTextureBasisFromTo(&local_28,param_1,param_2,param_3,EVar19);
        fVar25 = (pFVar20->Scale).field0_0x0._s_0.X;
        fVar26 = (pFVar20->Scale).field0_0x0._s_0.Y;
        fVar1 = (pFVar21->Bias).field0_0x0._s_0.X;
        fVar2 = (pFVar21->Bias).field0_0x0._s_0.Y;
        fVar3 = (pFVar20->Bias).field0_0x0._s_0.X;
        fVar4 = (pFVar20->Bias).field0_0x0._s_0.Y;
        TVar13._s_0.Y = fVar26 * (pFVar21->Scale).field0_0x0._s_0.Y;
        TVar13._s_0.X = fVar25 * (pFVar21->Scale).field0_0x0._s_0.X;
        (__return_storage_ptr__->Scale).field0_0x0 = TVar13;
        TVar14._s_0.Y = fVar26 * fVar2 + fVar4;
        TVar14._s_0.X = fVar25 * fVar1 + fVar3;
        (__return_storage_ptr__->Bias).field0_0x0 = TVar14;
        return __return_storage_ptr__;
      }
      FVar23 = ViewportUVToScreenPos;
      if (param_4 != ScreenPosition) {
        if (param_4 == ViewportUV) {
          iVar5 = *(int *)((longlong)&param_2->field0_0x0 + 4);
          fVar25 = __real_3f800000 /
                   (float)(*(int *)((longlong)&param_2->field0_0x0 + 8) -
                          *(int *)&param_2->field0_0x0);
          fVar26 = __real_3f800000 / (float)(*(int *)((longlong)&param_2->field0_0x0 + 0xc) - iVar5)
          ;
          uVar24 = (uint)((float)*(int *)&param_2->field0_0x0 * fVar25) ^
                   __xmm_80000000800000008000000080000000;
          uVar22 = (uint)((float)iVar5 * fVar26) ^ __xmm_80000000800000008000000080000000;
          TVar15._s_0.Y = fVar26;
          TVar15._s_0.X = fVar25;
          (__return_storage_ptr__->Scale).field0_0x0 = TVar15;
          TVar16._s_0.Y = (float)uVar22;
          TVar16._s_0.X = (float)uVar24;
          (__return_storage_ptr__->Bias).field0_0x0 = TVar16;
          return __return_storage_ptr__;
        }
        if (param_4 == TexelPosition) {
          TVar17._s_0.Y = (float)(param_1->field0_0x0)._s_0.Y;
          TVar17._s_0.X = (float)(param_1->field0_0x0)._s_0.X;
          (__return_storage_ptr__->Scale).field0_0x0 = TVar17;
          (__return_storage_ptr__->Bias).field0_0x0 = (TVector2<float>_u_0)0x0;
          return __return_storage_ptr__;
        }
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.inl"
                            ,0x170,L"");
        FVar23 = Identity;
        if (bVar18) goto code_r0x000144803ec1;
      }
    }
  }
  *__return_storage_ptr__ = FVar23;
  return __return_storage_ptr__;
}

// ChangeTextureBasisFromTo @ 144bad990

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FScreenTransform * __cdecl
FScreenTransform::ChangeTextureBasisFromTo
          (FScreenTransform *__return_storage_ptr__,FScreenPassTexture *param_1,
          ETextureBasis param_2,ETextureBasis param_3)

{
  int iVar1;
  TIntPoint<int> TVar2;
  FRDGTexture *pFVar3;
  TIntPoint<int>_u_0_s_0 TVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScreenTransform *pFVar8;
  int iVar9;
  int iVar10;
  TIntPoint<int>_u_0 local_38;
  TIntRect<int>_u_0 local_30;
  
  TVar2.field0_0x0 = (TIntPoint<int>_u_0)*(TIntPoint<int>_u_0 *)&(param_1->ViewRect).field0_0x0;
  pFVar3 = param_1->Texture;
  TVar4 = ((TIntPoint<int>_u_0 *)((longlong)&(param_1->ViewRect).field0_0x0 + 8))->_s_0;
  if (pFVar3 != (FRDGTexture *)0x0) {
    iVar1 = (pFVar3->VisualizeTextureExtent).field0_0x0._s_0.X;
    iVar10 = TVar4.X;
    iVar7 = iVar10;
    if (iVar10 < iVar1) {
      iVar7 = iVar1;
    }
    iVar1 = (pFVar3->VisualizeTextureExtent).field0_0x0._s_0.Y;
    (pFVar3->VisualizeTextureExtent).field0_0x0._s_0.X = iVar7;
    iVar9 = TVar4.Y;
    iVar7 = iVar9;
    if (iVar9 < iVar1) {
      iVar7 = iVar1;
    }
    (pFVar3->VisualizeTextureExtent).field0_0x0._s_0.Y = iVar7;
    if ((iVar10 != TVar2.field0_0x0._0_4_) || (iVar9 != TVar2.field0_0x0._4_4_)) goto LAB_144bada24;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("InTexture.IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.inl"
                     ,0xab,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FScreenTransform *)(*pcVar5)();
    return pFVar8;
  }
LAB_144bada24:
  local_38 = *(TIntPoint<int>_u_0 *)&(pFVar3->Desc).field_0x24;
  local_30._0_8_ = TVar2.field0_0x0;
  local_30._s_0.Max.field0_0x0 = (TIntPoint<int>)TVar4;
  ChangeTextureBasisFromTo
            (__return_storage_ptr__,(TIntPoint<int> *)&local_38._s_0,(TIntRect<int> *)&local_30._s_0
             ,param_2,param_3);
  return __return_storage_ptr__;
}

// ChangeTextureUVCoordinateFromTo @ 14552b0d0

FScreenTransform * __cdecl
FScreenTransform::ChangeTextureUVCoordinateFromTo
          (FScreenTransform *__return_storage_ptr__,FScreenPassTextureViewport *param_1,
          FScreenPassTextureViewport *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  TVector2<float>_u_0 TVar7;
  TVector2<float>_u_0 TVar8;
  FScreenTransform *pFVar9;
  FScreenTransform *pFVar10;
  TVector2<float>_u_0 local_48;
  float local_40;
  float fStack_3c;
  FScreenTransform local_38;
  FScreenTransform local_28;
  
  pFVar9 = ChangeTextureBasisFromTo
                     (&local_38,&param_2->Extent,&param_2->Rect,TexelPosition,TextureUV);
  pFVar10 = ChangeTextureBasisFromTo
                      ((FScreenTransform *)&local_48._s_0,&param_2->Extent,&param_2->Rect,ViewportUV
                       ,TexelPosition);
  fVar1 = (pFVar9->Scale).field0_0x0._s_0.X;
  fVar2 = (pFVar9->Scale).field0_0x0._s_0.Y;
  local_48._s_0.X = fVar1 * (pFVar10->Scale).field0_0x0._s_0.X;
  local_48._s_0.Y = fVar2 * (pFVar10->Scale).field0_0x0._s_0.Y;
  local_40 = fVar1 * (pFVar10->Bias).field0_0x0._s_0.X + (pFVar9->Bias).field0_0x0._s_0.X;
  fStack_3c = fVar2 * (pFVar10->Bias).field0_0x0._s_0.Y + (pFVar9->Bias).field0_0x0._s_0.Y;
  pFVar9 = ChangeTextureBasisFromTo
                     (&local_38,&param_1->Extent,&param_1->Rect,TexelPosition,ViewportUV);
  pFVar10 = ChangeTextureBasisFromTo
                      (&local_28,&param_1->Extent,&param_1->Rect,TextureUV,TexelPosition);
  fVar1 = (pFVar9->Scale).field0_0x0._s_0.X;
  fVar2 = (pFVar9->Scale).field0_0x0._s_0.Y;
  fVar3 = (pFVar10->Bias).field0_0x0._s_0.X;
  fVar4 = (pFVar10->Bias).field0_0x0._s_0.Y;
  fVar5 = (pFVar9->Bias).field0_0x0._s_0.X;
  fVar6 = (pFVar9->Bias).field0_0x0._s_0.Y;
  TVar7._s_0.Y = fVar2 * (pFVar10->Scale).field0_0x0._s_0.Y * local_48._s_0.Y;
  TVar7._s_0.X = fVar1 * (pFVar10->Scale).field0_0x0._s_0.X * local_48._s_0.X;
  (__return_storage_ptr__->Scale).field0_0x0 = TVar7;
  TVar8._s_0.Y = local_48._s_0.Y * (fVar2 * fVar4 + fVar6) + fStack_3c;
  TVar8._s_0.X = local_48._s_0.X * (fVar1 * fVar3 + fVar5) + local_40;
  (__return_storage_ptr__->Bias).field0_0x0 = TVar8;
  return __return_storage_ptr__;
}

// DispatchThreadIdToViewportUV @ 14553b110

FScreenTransform * __cdecl
FScreenTransform::DispatchThreadIdToViewportUV
          (FScreenTransform *__return_storage_ptr__,TIntRect<int> *param_1)

{
  TIntPoint<int>_u_0 local_res8 [4];
  TVector2<float>_u_0 local_18;
  float local_10;
  float local_c;
  
  local_res8[0]._0_4_ = *(int *)((longlong)&param_1->field0_0x0 + 8) - *(int *)&param_1->field0_0x0;
  local_10 = Identity.Bias.field0_0x0._s_0.X + __real_3f000000;
  local_res8[0]._4_4_ =
       *(int *)((longlong)&param_1->field0_0x0 + 0xc) - *(int *)((longlong)&param_1->field0_0x0 + 4)
  ;
  local_c = Identity.Bias.field0_0x0._s_0.Y + __real_3f000000;
  local_18 = Identity.Scale.field0_0x0;
  ::operator/(__return_storage_ptr__,(FScreenTransform *)&local_18._s_0,
              (TIntPoint<int> *)&local_res8[0]._s_0);
  return __return_storage_ptr__;
}

// SvPositionToViewportUV @ 145553530

FScreenTransform * __cdecl
FScreenTransform::SvPositionToViewportUV
          (FScreenTransform *__return_storage_ptr__,TIntRect<int> *param_1)

{
  int iVar1;
  TIntPoint<int>_u_0 local_res8 [4];
  TVector2<float>_u_0 local_18;
  float local_10;
  float local_c;
  
  iVar1 = *(int *)((longlong)&param_1->field0_0x0 + 4);
  local_res8[0]._0_4_ = *(int *)((longlong)&param_1->field0_0x0 + 8) - *(int *)&param_1->field0_0x0;
  local_res8[0]._4_4_ = *(int *)((longlong)&param_1->field0_0x0 + 0xc) - iVar1;
  local_18 = Identity.Scale.field0_0x0;
  local_10 = Identity.Bias.field0_0x0._s_0.X - (float)*(int *)&param_1->field0_0x0;
  local_c = Identity.Bias.field0_0x0._s_0.Y - (float)iVar1;
  ::operator/(__return_storage_ptr__,(FScreenTransform *)&local_18._s_0,
              (TIntPoint<int> *)&local_res8[0]._s_0);
  return __return_storage_ptr__;
}

