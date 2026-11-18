// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// UpdateParameterData @ 144943300

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FGlobalDistanceFieldInfo::UpdateParameterData
          (FGlobalDistanceFieldInfo *this,float param_1,bool param_2,float param_3,
          TVector<double> *param_4)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  FRDGPooledBuffer *pFVar4;
  FRDGPooledBuffer *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  IPooledRenderTarget *pIVar19;
  longlong lVar20;
  uint uVar21;
  float *pfVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  double dVar25;
  float fVar26;
  double dVar27;
  uint uVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined1 local_157;
  undefined1 local_156 [2];
  uint local_154;
  float local_150;
  float local_14c;
  TIntVector3<int>_u_0 local_148;
  TIntVector3<int>_u_0 local_138 [2];
  int local_120;
  TIntVector3<int>_u_0 local_118 [2];
  int local_100;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  
  uVar23 = 0;
  (this->ParameterData).PageTableTexture = (FRHITexture *)0x0;
  (this->ParameterData).PageAtlasTexture = (FRHITexture *)0x0;
  pFVar4 = (this->ParameterData).PageObjectGridBuffer.Reference;
  local_150 = param_3;
  local_14c = param_1;
  if (pFVar4 != (FRDGPooledBuffer *)0x0) {
    (this->ParameterData).PageObjectGridBuffer.Reference = (FRDGPooledBuffer *)0x0;
    plVar1 = &pFVar4->_padding_;
    LOCK();
    lVar20 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar20 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  (this->ParameterData).CoverageAtlasTexture = (FRHITexture *)0x0;
  (this->ParameterData).MipTexture = (FRHITexture *)0x0;
  GlobalDistanceField::GetPageAtlasSizeInPages((TIntVector3<int> *)&local_148._s_0,param_2,param_3);
  (this->ParameterData).MaxPageNum = local_148._s_0.Z * local_148._s_0.Y * local_148._s_0.X;
  if ((this->Clipmaps).ArrayNum < 1) {
    memset(&this->ParameterData,0,0x200);
    this->bInitialized = true;
    return;
  }
  pIVar19 = (this->PageAtlasTexture).Reference;
  if (pIVar19 != (IPooledRenderTarget *)0x0) {
    (this->ParameterData).PageAtlasTexture = (pIVar19->RenderTargetItem).TargetableTexture.Reference
    ;
  }
  pIVar19 = (this->CoverageAtlasTexture).Reference;
  if (pIVar19 != (IPooledRenderTarget *)0x0) {
    (this->ParameterData).CoverageAtlasTexture =
         (pIVar19->RenderTargetItem).TargetableTexture.Reference;
  }
  pFVar4 = (this->PageObjectGridBuffer).Reference;
  if ((pFVar4 != (FRDGPooledBuffer *)0x0) &&
     (pFVar5 = (this->ParameterData).PageObjectGridBuffer.Reference, pFVar5 != pFVar4)) {
    (this->ParameterData).PageObjectGridBuffer.Reference = pFVar4;
    LOCK();
    *(int *)&pFVar4->_padding_ = (int)pFVar4->_padding_ + 1;
    UNLOCK();
    if (pFVar5 != (FRDGPooledBuffer *)0x0) {
      plVar1 = &pFVar5->_padding_;
      LOCK();
      lVar20 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar20 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar5->_padding_)(pFVar5,1);
      }
    }
  }
  if ((this->PageTableCombinedTexture).Reference == (IPooledRenderTarget *)0x0) {
    if (this->PageTableLayerTextures[1].Reference == (IPooledRenderTarget *)0x0) goto LAB_1449434b3;
    if (GAOGlobalDistanceFieldCacheMostlyStaticSeparately != 0) {
      local_156[0] = 0;
      `FGlobalDistanceFieldInfo::UpdateParameterData'::__l21::<lambda_2>::operator()(local_156);
    }
    pIVar19 = this->PageTableLayerTextures[1].Reference;
  }
  else {
    if (GAOGlobalDistanceFieldCacheMostlyStaticSeparately == 0) {
      local_157 = 0;
      `FGlobalDistanceFieldInfo::UpdateParameterData'::__l17::<lambda_1>::operator()(&local_157);
    }
    pIVar19 = (this->PageTableCombinedTexture).Reference;
  }
  (this->ParameterData).PageTableTexture = (pIVar19->RenderTargetItem).TargetableTexture.Reference;
LAB_1449434b3:
  pIVar19 = (this->MipTexture).Reference;
  local_154 = 1;
  if (pIVar19 != (IPooledRenderTarget *)0x0) {
    (this->ParameterData).MipTexture = (pIVar19->RenderTargetItem).TargetableTexture.Reference;
    (**(code **)(pIVar19->_padding_ + 0x10))();
    (**(code **)(((this->MipTexture).Reference)->_padding_ + 0x10))();
    lVar20 = (**(code **)(((this->MipTexture).Reference)->_padding_ + 0x10))();
    local_154 = (uint)*(ushort *)(lVar20 + 0x34);
  }
  fVar31 = __real_3f800000;
  uVar33 = SUB84(__real_3fe0000000000000,0);
  uVar34 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
  pfVar22 = &(this->ParameterData).TranslatedCenterAndExtent[0].field0_0x0._s_0.Z;
  uVar30 = SUB84(__real_3ff0000000000000,0);
  uVar32 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  uVar24 = uVar23;
  fVar26 = __real_3f000000;
  do {
    dVar25 = __real_3fe0000000000000;
    iVar18 = (int)uVar23;
    if (iVar18 < (this->Clipmaps).ArrayNum) {
      pFVar6 = (this->Clipmaps).AllocatorInstance.Data;
      dVar2 = (param_4->field0_0x0)._s_0.X;
      dVar27 = (param_4->field0_0x0)._s_0.Y;
      dVar10 = dVar2 + *(double *)(pFVar6 + uVar24 + 0x18);
      dVar2 = dVar2 + *(double *)(pFVar6 + uVar24);
      dVar3 = (param_4->field0_0x0)._s_0.Z;
      dVar13 = dVar27 + *(double *)(pFVar6 + uVar24 + 8);
      dVar27 = dVar27 + *(double *)(pFVar6 + uVar24 + 0x20);
      dVar12 = dVar3 + *(double *)(pFVar6 + uVar24 + 0x10);
      dVar3 = dVar3 + *(double *)(pFVar6 + uVar24 + 0x28);
      dVar11 = dVar10 - dVar2;
      dVar10 = (dVar2 + dVar10) * (double)CONCAT44(uVar34,uVar33);
      dVar8 = (dVar13 + dVar27) * (double)CONCAT44(uVar34,uVar33);
      local_f8 = (float)dVar10;
      fStack_ec = (float)(dVar11 * (double)CONCAT44(uVar34,uVar33));
      dVar9 = (dVar12 + dVar3) * (double)CONCAT44(uVar34,uVar33);
      dVar11 = __real_3ff0000000000000 / dVar11;
      fStack_f4 = (float)dVar8;
      fStack_f0 = (float)dVar9;
      ((TVector4<float>_u_0_s_0 *)(pfVar22 + -2))->X = local_f8;
      pfVar22[-1] = fStack_f4;
      *pfVar22 = fStack_f0;
      pfVar22[1] = fStack_ec;
      uVar30 = SUB84(__real_3ff0000000000000,0);
      uVar32 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      fStack_dc = (float)dVar11;
      local_e8 = (float)((*(double *)(pFVar6 + uVar24 + 0x38) - dVar10) * dVar11 + dVar25);
      fStack_e4 = (float)((*(double *)(pFVar6 + uVar24 + 0x40) - dVar8) * dVar11 + dVar25);
      dVar27 = __real_3ff0000000000000 / (dVar27 - dVar13);
      fStack_e0 = (float)((*(double *)(pFVar6 + uVar24 + 0x48) - dVar9) * dVar11 + dVar25);
      dVar25 = __real_3ff0000000000000 / (dVar3 - dVar12);
      dVar12 = dVar12 * dVar25;
      pfVar22[0x16] = local_e8;
      pfVar22[0x17] = fStack_e4;
      pfVar22[0x18] = fStack_e0;
      pfVar22[0x19] = fStack_dc;
      pfVar22[0x2e] = fStack_dc;
      pfVar22[0x2f] = (float)dVar27;
      fVar29 = (float)dVar25;
      pfVar22[0x30] = fVar29;
      pfVar22[0x31] = 1.0;
      uVar28 = (uint)__xmm_80000000000000008000000000000000;
      uVar21 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      dVar13 = dVar13 * dVar27;
      fVar26 = (float)(double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) ^ uVar21,
                                       SUB84(dVar12,0) ^ uVar28);
      pfVar22[0x46] =
           (float)(double)CONCAT44((uint)((ulonglong)(dVar2 * dVar11) >> 0x20) ^ uVar21,
                                   SUB84(dVar2 * dVar11,0) ^ uVar28);
      pfVar22[0x47] =
           (float)(double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) ^ uVar21,
                                   SUB84(dVar13,0) ^ uVar28);
      pfVar22[0x48] = fVar26;
      pfVar22[0x49] = 1.0;
      pfVar22[0x30] = fVar29 / (float)(this->Clipmaps).ArrayNum;
      pfVar22[0x48] = ((float)iVar18 + fVar26) / (float)(this->Clipmaps).ArrayNum;
      iVar16 = 8;
      if (GAOGlobalDistanceFieldMipFactor < 8) {
        iVar16 = GAOGlobalDistanceFieldMipFactor;
      }
      iVar17 = 1;
      if (1 < iVar16) {
        iVar17 = iVar16;
      }
      iVar16 = GAOGlobalDFResolution;
      if (param_2) {
        iVar16 = Lumen::GetGlobalDFResolution();
      }
      fVar26 = __real_3f000000;
      uVar33 = SUB84(__real_3fe0000000000000,0);
      uVar34 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
      iVar17 = (((iVar16 + 0x1b) / 0x1c) * 0x1c + -1 + iVar17) / iVar17;
      pfVar22[0x31] =
           ((float)(iVar17 * iVar18) + __real_3f000000) * (fVar31 / (float)(int)local_154);
      fVar29 = ((float)((iVar18 + 1) * iVar17) - fVar26) * (fVar31 / (float)(int)local_154);
    }
    else {
      ((TVector4<float>_u_0_s_0 *)(pfVar22 + -2))->X = 0.0;
      ((TVector4<float>_u_0_s_0 *)(pfVar22 + -2))->Y = 0.0;
      *pfVar22 = 0.0;
      pfVar22[1] = 1.0;
      *(undefined8 *)(pfVar22 + 0x16) = 0;
      pfVar22[0x18] = 0.0;
      pfVar22[0x19] = 1.0;
      *(undefined8 *)(pfVar22 + 0x2e) = 0;
      pfVar22[0x30] = 0.0;
      pfVar22[0x31] = 1.0;
      *(undefined8 *)(pfVar22 + 0x46) = 0;
      pfVar22[0x48] = 0.0;
      fVar29 = fVar31;
    }
    fVar14 = local_150;
    uVar23 = (ulonglong)(iVar18 + 1U);
    pfVar22[0x49] = fVar29;
    uVar24 = uVar24 + 0xe68;
    pfVar22 = pfVar22 + 4;
  } while ((int)(iVar18 + 1U) < 6);
  iVar18 = 8;
  if (GAOGlobalDistanceFieldMipFactor < 8) {
    iVar18 = GAOGlobalDistanceFieldMipFactor;
  }
  iVar16 = 1;
  if (1 < iVar18) {
    iVar16 = iVar18;
  }
  (this->ParameterData).MipFactor = (float)iVar16;
  (this->ParameterData).MipTransition = (float)iVar16 * __real_3d000000 + fVar26;
  GlobalDistanceField::GetNumGlobalDistanceFieldClipmaps(param_2,local_150);
  iVar18 = GAOGlobalDFResolution;
  if (param_2) {
    iVar18 = Lumen::GetGlobalDFResolution();
  }
  (this->ParameterData).ClipmapSizeInPages = (((iVar18 + 0x1b) / 0x1c) * 0x1c + 6) / 7;
  GlobalDistanceField::GetPageAtlasSizeInPages
            ((TIntVector3<int> *)&local_138[0]._s_0,param_2,fVar14);
  local_120 = local_138[0]._s_0.Z;
  (this->ParameterData).InvPageAtlasSize.field0_0x0._s_0.X =
       (double)CONCAT44(uVar32,uVar30) / (double)(local_138[0]._s_0.X * 8);
  (this->ParameterData).InvPageAtlasSize.field0_0x0._s_0.Y =
       (double)CONCAT44(uVar32,uVar30) / (double)(local_138[0]._s_0.Y * 8);
  (this->ParameterData).InvPageAtlasSize.field0_0x0._s_0.Z =
       (double)CONCAT44(uVar32,uVar30) / (double)(local_138[0]._s_0.Z * 8);
  GlobalDistanceField::GetPageAtlasSizeInPages
            ((TIntVector3<int> *)&local_118[0]._s_0,param_2,fVar14);
  local_100 = local_118[0]._s_0.Z;
  (this->ParameterData).InvCoverageAtlasSize.field0_0x0._s_0.X =
       (double)CONCAT44(uVar32,uVar30) / (double)(local_118[0]._s_0.X * 4);
  (this->ParameterData).InvCoverageAtlasSize.field0_0x0._s_0.Y =
       (double)CONCAT44(uVar32,uVar30) / (double)(local_118[0]._s_0.Y * 4);
  (this->ParameterData).InvCoverageAtlasSize.field0_0x0._s_0.Z =
       (double)CONCAT44(uVar32,uVar30) / (double)(local_118[0]._s_0.Z * 4);
  iVar18 = GAOGlobalDFResolution;
  if (param_2) {
    iVar18 = Lumen::GetGlobalDFResolution();
  }
  iVar16 = (this->Clipmaps).ArrayNum;
  uVar21 = iVar16 - 1;
  uVar28 = 0;
  if ((int)uVar21 < iVar16) {
    uVar28 = ~uVar21 >> 0x1f;
  }
  (this->ParameterData).GlobalDFResolution = (float)(((iVar18 + 0x1b) / 0x1c) * 0x1c);
  if ((uVar28 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar6 = (this->Clipmaps).AllocatorInstance.Data;
  dVar25 = *(double *)(pFVar6 + (longlong)(int)uVar21 * 0xe68 + 0x18);
  dVar2 = *(double *)(pFVar6 + (longlong)(int)uVar21 * 0xe68);
  iVar18 = GAOGlobalDFResolution;
  if (param_2) {
    iVar18 = Lumen::GetGlobalDFResolution();
  }
  fVar26 = tanf(GAOConeHalfAngle);
  this->bInitialized = true;
  local_14c = local_14c / (fVar26 + fVar31);
  (this->ParameterData).NumGlobalSDFClipmaps = (this->Clipmaps).ArrayNum;
  fVar31 = ((float)(dVar25 - dVar2) / (float)(((iVar18 + 0x1b) / 0x1c) * 0x1c)) * __real_40800000;
  if (fVar31 <= local_14c) {
    local_14c = fVar31;
  }
  (this->ParameterData).MaxDFAOConeDistance = local_14c;
  return;
}

// ~FGlobalDistanceFieldInfo @ 1454d7060

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FGlobalDistanceFieldInfo::~FGlobalDistanceFieldInfo(FGlobalDistanceFieldInfo *this)

{
  TRefCountPtr<IPooledRenderTarget> *pTVar1;
  longlong *plVar2;
  IPooledRenderTarget *pIVar3;
  FRDGPooledBuffer *pFVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  TRefCountPtr<IPooledRenderTarget> *pTVar7;
  
  pTVar7 = &this->MipTexture;
  if (pTVar7->Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)(pTVar7->Reference->_padding_ + 0x38))();
  }
  lVar6 = 2;
  do {
    pTVar1 = pTVar7 + -1;
    pTVar7 = pTVar7 + -1;
    lVar6 = lVar6 + -1;
    if (pTVar1->Reference != (IPooledRenderTarget *)0x0) {
      (**(code **)(pTVar1->Reference->_padding_ + 0x38))();
    }
  } while (lVar6 != 0);
  pIVar3 = (this->PageTableCombinedTexture).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  pFVar4 = (this->PageObjectGridBuffer).Reference;
  if (pFVar4 != (FRDGPooledBuffer *)0x0) {
    plVar2 = &pFVar4->_padding_;
    LOCK();
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if (((int)lVar6 == 1) && (plVar2 != (longlong *)0x0)) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  pIVar3 = (this->CoverageAtlasTexture).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  pIVar3 = (this->PageAtlasTexture).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  pFVar4 = (this->PageFreeListBuffer).Reference;
  if (pFVar4 != (FRDGPooledBuffer *)0x0) {
    plVar2 = &pFVar4->_padding_;
    LOCK();
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if (((int)lVar6 == 1) && (plVar2 != (longlong *)0x0)) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  pFVar4 = (this->PageFreeListAllocatorBuffer).Reference;
  if (pFVar4 != (FRDGPooledBuffer *)0x0) {
    plVar2 = &pFVar4->_padding_;
    LOCK();
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if (((int)lVar6 == 1) && (plVar2 != (longlong *)0x0)) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  pFVar4 = (this->ParameterData).PageObjectGridBuffer.Reference;
  if (pFVar4 != (FRDGPooledBuffer *)0x0) {
    plVar2 = &pFVar4->_padding_;
    LOCK();
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if (((int)lVar6 == 1) && (plVar2 != (longlong *)0x0)) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  DestructItems<FGlobalDistanceFieldClipmap,int>
            ((FGlobalDistanceFieldClipmap *)(this->Clipmaps).AllocatorInstance.Data,
             (this->Clipmaps).ArrayNum);
  pFVar5 = (this->Clipmaps).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  DestructItems<FGlobalDistanceFieldClipmap,int>
            ((FGlobalDistanceFieldClipmap *)(this->MostlyStaticClipmaps).AllocatorInstance.Data,
             (this->MostlyStaticClipmaps).ArrayNum);
  pFVar5 = (this->MostlyStaticClipmaps).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  return;
}

// operator() @ 1504c4980

bool __thiscall
`FGlobalDistanceFieldInfo::UpdateParameterData'::__l17::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<673161545835872820>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<673161545835872820>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504c4a50

bool __thiscall
`FGlobalDistanceFieldInfo::UpdateParameterData'::__l21::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<673161545835872825>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<673161545835872825>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

