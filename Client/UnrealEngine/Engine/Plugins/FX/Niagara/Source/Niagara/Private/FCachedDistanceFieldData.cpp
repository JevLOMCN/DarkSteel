// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// ~FCachedDistanceFieldData @ 1492d3bd0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FNiagaraGpuComputeDispatch::FCachedDistanceFieldData::~FCachedDistanceFieldData
          (FCachedDistanceFieldData *this)

{
  longlong *plVar1;
  FRDGPooledBuffer *pFVar2;
  FRHITexture *pFVar3;
  longlong lVar4;
  
  pFVar2 = (this->GDFParameterData).PageObjectGridBuffer.Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  pFVar3 = (this->MipTexture).Reference;
  if (pFVar3 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar3 = (this->PageTableTexture).Reference;
  if (pFVar3 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar2 = (this->PageObjectGridBuffer).Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  pFVar3 = (this->CoverageAtlasTexture).Reference;
  if (pFVar3 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar3 = (this->PageAtlasTexture).Reference;
  if (pFVar3 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  return;
}

// operator= @ 1492d4e80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FCachedDistanceFieldData * __thiscall
FNiagaraGpuComputeDispatch::FCachedDistanceFieldData::operator=
          (FCachedDistanceFieldData *this,FCachedDistanceFieldData *param_1)

{
  TRefCountPtr<FRHITexture> *pTVar1;
  TRefCountPtr<FRDGPooledBuffer> *pTVar2;
  TRefCountPtr<FRDGPooledBuffer> *pTVar3;
  longlong *plVar4;
  FRHITexture *pFVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  double dVar11;
  longlong lVar12;
  FRDGPooledBuffer *pFVar13;
  TRefCountPtr<FRHITexture> *pTVar14;
  
  pTVar1 = &this->PageAtlasTexture;
  this->bCacheValid = param_1->bCacheValid;
  pTVar14 = &param_1->PageAtlasTexture;
  this->bValidForPass = param_1->bValidForPass;
  if (pTVar1 != pTVar14) {
    pFVar5 = pTVar1->Reference;
    pTVar1->Reference = pTVar14->Reference;
    pTVar14->Reference = (FRHITexture *)0x0;
    if (pFVar5 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar5);
    }
  }
  pTVar1 = &param_1->CoverageAtlasTexture;
  pTVar14 = &this->CoverageAtlasTexture;
  if (pTVar14 != pTVar1) {
    pFVar5 = pTVar14->Reference;
    pTVar14->Reference = pTVar1->Reference;
    pTVar1->Reference = (FRHITexture *)0x0;
    if (pFVar5 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar5);
    }
  }
  pTVar2 = &param_1->PageObjectGridBuffer;
  pTVar3 = &this->PageObjectGridBuffer;
  if (pTVar3 != pTVar2) {
    pFVar13 = pTVar3->Reference;
    pTVar3->Reference = pTVar2->Reference;
    pTVar2->Reference = (FRDGPooledBuffer *)0x0;
    if (pFVar13 != (FRDGPooledBuffer *)0x0) {
      plVar4 = &pFVar13->_padding_;
      LOCK();
      lVar12 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        if (plVar4 == (longlong *)0x0) {
          pFVar13 = (FRDGPooledBuffer *)0x0;
        }
        if (pFVar13 != (FRDGPooledBuffer *)0x0) {
          (**(code **)pFVar13->_padding_)(pFVar13,1);
        }
      }
    }
  }
  pTVar1 = &param_1->PageTableTexture;
  pTVar14 = &this->PageTableTexture;
  if (pTVar14 != pTVar1) {
    pFVar5 = pTVar14->Reference;
    pTVar14->Reference = pTVar1->Reference;
    pTVar1->Reference = (FRHITexture *)0x0;
    if (pFVar5 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar5);
    }
  }
  pTVar1 = &param_1->MipTexture;
  pTVar14 = &this->MipTexture;
  if (pTVar14 != pTVar1) {
    pFVar5 = pTVar14->Reference;
    pTVar14->Reference = pTVar1->Reference;
    pTVar1->Reference = (FRHITexture *)0x0;
    if (pFVar5 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar5);
    }
  }
  uVar10 = *(undefined8 *)
            ((longlong)&(param_1->GDFParameterData).TranslatedCenterAndExtent[0].field0_0x0 + 8);
  pTVar2 = &(param_1->GDFParameterData).PageObjectGridBuffer;
  pTVar3 = &(this->GDFParameterData).PageObjectGridBuffer;
  *(undefined8 *)&(this->GDFParameterData).TranslatedCenterAndExtent[0].field0_0x0 =
       *(undefined8 *)&(param_1->GDFParameterData).TranslatedCenterAndExtent[0].field0_0x0;
  *(undefined8 *)((longlong)&(this->GDFParameterData).TranslatedCenterAndExtent[0].field0_0x0 + 8) =
       uVar10;
  uVar10 = *(undefined8 *)
            ((longlong)&(param_1->GDFParameterData).TranslatedCenterAndExtent[1].field0_0x0 + 8);
  *(undefined8 *)&(this->GDFParameterData).TranslatedCenterAndExtent[1].field0_0x0 =
       *(undefined8 *)&(param_1->GDFParameterData).TranslatedCenterAndExtent[1].field0_0x0;
  *(undefined8 *)((longlong)&(this->GDFParameterData).TranslatedCenterAndExtent[1].field0_0x0 + 8) =
       uVar10;
  uVar10 = *(undefined8 *)
            ((longlong)&(param_1->GDFParameterData).TranslatedCenterAndExtent[2].field0_0x0 + 8);
  *(undefined8 *)&(this->GDFParameterData).TranslatedCenterAndExtent[2].field0_0x0 =
       *(undefined8 *)&(param_1->GDFParameterData).TranslatedCenterAndExtent[2].field0_0x0;
  *(undefined8 *)((longlong)&(this->GDFParameterData).TranslatedCenterAndExtent[2].field0_0x0 + 8) =
       uVar10;
  uVar10 = *(undefined8 *)
            ((longlong)&(param_1->GDFParameterData).TranslatedCenterAndExtent[3].field0_0x0 + 8);
  *(undefined8 *)&(this->GDFParameterData).TranslatedCenterAndExtent[3].field0_0x0 =
       *(undefined8 *)&(param_1->GDFParameterData).TranslatedCenterAndExtent[3].field0_0x0;
  *(undefined8 *)((longlong)&(this->GDFParameterData).TranslatedCenterAndExtent[3].field0_0x0 + 8) =
       uVar10;
  uVar10 = *(undefined8 *)
            ((longlong)&(param_1->GDFParameterData).TranslatedCenterAndExtent[4].field0_0x0 + 8);
  *(undefined8 *)&(this->GDFParameterData).TranslatedCenterAndExtent[4].field0_0x0 =
       *(undefined8 *)&(param_1->GDFParameterData).TranslatedCenterAndExtent[4].field0_0x0;
  *(undefined8 *)((longlong)&(this->GDFParameterData).TranslatedCenterAndExtent[4].field0_0x0 + 8) =
       uVar10;
  uVar10 = *(undefined8 *)
            ((longlong)&(param_1->GDFParameterData).TranslatedCenterAndExtent[5].field0_0x0 + 8);
  *(undefined8 *)&(this->GDFParameterData).TranslatedCenterAndExtent[5].field0_0x0 =
       *(undefined8 *)&(param_1->GDFParameterData).TranslatedCenterAndExtent[5].field0_0x0;
  *(undefined8 *)((longlong)&(this->GDFParameterData).TranslatedCenterAndExtent[5].field0_0x0 + 8) =
       uVar10;
  uVar10 = *(undefined8 *)
            ((longlong)&(param_1->GDFParameterData).TranslatedWorldToUVAddAndMul[0].field0_0x0 + 8);
  *(undefined8 *)&(this->GDFParameterData).TranslatedWorldToUVAddAndMul[0].field0_0x0 =
       *(undefined8 *)&(param_1->GDFParameterData).TranslatedWorldToUVAddAndMul[0].field0_0x0;
  *(undefined8 *)
   ((longlong)&(this->GDFParameterData).TranslatedWorldToUVAddAndMul[0].field0_0x0 + 8) = uVar10;
  uVar10 = *(undefined8 *)
            ((longlong)&(param_1->GDFParameterData).TranslatedWorldToUVAddAndMul[1].field0_0x0 + 8);
  *(undefined8 *)&(this->GDFParameterData).TranslatedWorldToUVAddAndMul[1].field0_0x0 =
       *(undefined8 *)&(param_1->GDFParameterData).TranslatedWorldToUVAddAndMul[1].field0_0x0;
  *(undefined8 *)
   ((longlong)&(this->GDFParameterData).TranslatedWorldToUVAddAndMul[1].field0_0x0 + 8) = uVar10;
  uVar10 = *(undefined8 *)
            ((longlong)&(param_1->GDFParameterData).TranslatedWorldToUVAddAndMul[2].field0_0x0 + 8);
  *(undefined8 *)&(this->GDFParameterData).TranslatedWorldToUVAddAndMul[2].field0_0x0 =
       *(undefined8 *)&(param_1->GDFParameterData).TranslatedWorldToUVAddAndMul[2].field0_0x0;
  *(undefined8 *)
   ((longlong)&(this->GDFParameterData).TranslatedWorldToUVAddAndMul[2].field0_0x0 + 8) = uVar10;
  uVar10 = *(undefined8 *)
            ((longlong)&(param_1->GDFParameterData).TranslatedWorldToUVAddAndMul[3].field0_0x0 + 8);
  *(undefined8 *)&(this->GDFParameterData).TranslatedWorldToUVAddAndMul[3].field0_0x0 =
       *(undefined8 *)&(param_1->GDFParameterData).TranslatedWorldToUVAddAndMul[3].field0_0x0;
  *(undefined8 *)
   ((longlong)&(this->GDFParameterData).TranslatedWorldToUVAddAndMul[3].field0_0x0 + 8) = uVar10;
  uVar10 = *(undefined8 *)
            ((longlong)&(param_1->GDFParameterData).TranslatedWorldToUVAddAndMul[4].field0_0x0 + 8);
  *(undefined8 *)&(this->GDFParameterData).TranslatedWorldToUVAddAndMul[4].field0_0x0 =
       *(undefined8 *)&(param_1->GDFParameterData).TranslatedWorldToUVAddAndMul[4].field0_0x0;
  *(undefined8 *)
   ((longlong)&(this->GDFParameterData).TranslatedWorldToUVAddAndMul[4].field0_0x0 + 8) = uVar10;
  uVar10 = *(undefined8 *)
            ((longlong)&(param_1->GDFParameterData).TranslatedWorldToUVAddAndMul[5].field0_0x0 + 8);
  *(undefined8 *)&(this->GDFParameterData).TranslatedWorldToUVAddAndMul[5].field0_0x0 =
       *(undefined8 *)&(param_1->GDFParameterData).TranslatedWorldToUVAddAndMul[5].field0_0x0;
  *(undefined8 *)
   ((longlong)&(this->GDFParameterData).TranslatedWorldToUVAddAndMul[5].field0_0x0 + 8) = uVar10;
  uVar10 = *(undefined8 *)
            ((longlong)&(param_1->GDFParameterData).MipTranslatedWorldToUVScale[0].field0_0x0 + 8);
  *(undefined8 *)&(this->GDFParameterData).MipTranslatedWorldToUVScale[0].field0_0x0 =
       *(undefined8 *)&(param_1->GDFParameterData).MipTranslatedWorldToUVScale[0].field0_0x0;
  *(undefined8 *)((longlong)&(this->GDFParameterData).MipTranslatedWorldToUVScale[0].field0_0x0 + 8)
       = uVar10;
  uVar10 = *(undefined8 *)
            ((longlong)&(param_1->GDFParameterData).MipTranslatedWorldToUVScale[1].field0_0x0 + 8);
  *(undefined8 *)&(this->GDFParameterData).MipTranslatedWorldToUVScale[1].field0_0x0 =
       *(undefined8 *)&(param_1->GDFParameterData).MipTranslatedWorldToUVScale[1].field0_0x0;
  *(undefined8 *)((longlong)&(this->GDFParameterData).MipTranslatedWorldToUVScale[1].field0_0x0 + 8)
       = uVar10;
  uVar10 = *(undefined8 *)
            ((longlong)&(param_1->GDFParameterData).MipTranslatedWorldToUVScale[2].field0_0x0 + 8);
  *(undefined8 *)&(this->GDFParameterData).MipTranslatedWorldToUVScale[2].field0_0x0 =
       *(undefined8 *)&(param_1->GDFParameterData).MipTranslatedWorldToUVScale[2].field0_0x0;
  *(undefined8 *)((longlong)&(this->GDFParameterData).MipTranslatedWorldToUVScale[2].field0_0x0 + 8)
       = uVar10;
  uVar10 = *(undefined8 *)
            ((longlong)&(param_1->GDFParameterData).MipTranslatedWorldToUVScale[3].field0_0x0 + 8);
  *(undefined8 *)&(this->GDFParameterData).MipTranslatedWorldToUVScale[3].field0_0x0 =
       *(undefined8 *)&(param_1->GDFParameterData).MipTranslatedWorldToUVScale[3].field0_0x0;
  *(undefined8 *)((longlong)&(this->GDFParameterData).MipTranslatedWorldToUVScale[3].field0_0x0 + 8)
       = uVar10;
  uVar10 = *(undefined8 *)
            ((longlong)&(param_1->GDFParameterData).MipTranslatedWorldToUVScale[4].field0_0x0 + 8);
  *(undefined8 *)&(this->GDFParameterData).MipTranslatedWorldToUVScale[4].field0_0x0 =
       *(undefined8 *)&(param_1->GDFParameterData).MipTranslatedWorldToUVScale[4].field0_0x0;
  *(undefined8 *)((longlong)&(this->GDFParameterData).MipTranslatedWorldToUVScale[4].field0_0x0 + 8)
       = uVar10;
  uVar10 = *(undefined8 *)
            ((longlong)&(param_1->GDFParameterData).MipTranslatedWorldToUVScale[5].field0_0x0 + 8);
  *(undefined8 *)&(this->GDFParameterData).MipTranslatedWorldToUVScale[5].field0_0x0 =
       *(undefined8 *)&(param_1->GDFParameterData).MipTranslatedWorldToUVScale[5].field0_0x0;
  *(undefined8 *)((longlong)&(this->GDFParameterData).MipTranslatedWorldToUVScale[5].field0_0x0 + 8)
       = uVar10;
  uVar10 = *(undefined8 *)
            ((longlong)&(param_1->GDFParameterData).MipTranslatedWorldToUVBias[0].field0_0x0 + 8);
  *(undefined8 *)&(this->GDFParameterData).MipTranslatedWorldToUVBias[0].field0_0x0 =
       *(undefined8 *)&(param_1->GDFParameterData).MipTranslatedWorldToUVBias[0].field0_0x0;
  *(undefined8 *)((longlong)&(this->GDFParameterData).MipTranslatedWorldToUVBias[0].field0_0x0 + 8)
       = uVar10;
  uVar10 = *(undefined8 *)
            ((longlong)&(param_1->GDFParameterData).MipTranslatedWorldToUVBias[1].field0_0x0 + 8);
  *(undefined8 *)&(this->GDFParameterData).MipTranslatedWorldToUVBias[1].field0_0x0 =
       *(undefined8 *)&(param_1->GDFParameterData).MipTranslatedWorldToUVBias[1].field0_0x0;
  *(undefined8 *)((longlong)&(this->GDFParameterData).MipTranslatedWorldToUVBias[1].field0_0x0 + 8)
       = uVar10;
  uVar10 = *(undefined8 *)
            ((longlong)&(param_1->GDFParameterData).MipTranslatedWorldToUVBias[2].field0_0x0 + 8);
  *(undefined8 *)&(this->GDFParameterData).MipTranslatedWorldToUVBias[2].field0_0x0 =
       *(undefined8 *)&(param_1->GDFParameterData).MipTranslatedWorldToUVBias[2].field0_0x0;
  *(undefined8 *)((longlong)&(this->GDFParameterData).MipTranslatedWorldToUVBias[2].field0_0x0 + 8)
       = uVar10;
  uVar10 = *(undefined8 *)
            ((longlong)&(param_1->GDFParameterData).MipTranslatedWorldToUVBias[3].field0_0x0 + 8);
  *(undefined8 *)&(this->GDFParameterData).MipTranslatedWorldToUVBias[3].field0_0x0 =
       *(undefined8 *)&(param_1->GDFParameterData).MipTranslatedWorldToUVBias[3].field0_0x0;
  *(undefined8 *)((longlong)&(this->GDFParameterData).MipTranslatedWorldToUVBias[3].field0_0x0 + 8)
       = uVar10;
  uVar10 = *(undefined8 *)
            ((longlong)&(param_1->GDFParameterData).MipTranslatedWorldToUVBias[4].field0_0x0 + 8);
  *(undefined8 *)&(this->GDFParameterData).MipTranslatedWorldToUVBias[4].field0_0x0 =
       *(undefined8 *)&(param_1->GDFParameterData).MipTranslatedWorldToUVBias[4].field0_0x0;
  *(undefined8 *)((longlong)&(this->GDFParameterData).MipTranslatedWorldToUVBias[4].field0_0x0 + 8)
       = uVar10;
  fVar6 = (param_1->GDFParameterData).MipTranslatedWorldToUVBias[5].field0_0x0._s_0.X;
  fVar7 = (param_1->GDFParameterData).MipTranslatedWorldToUVBias[5].field0_0x0._s_0.Y;
  fVar8 = (param_1->GDFParameterData).MipTranslatedWorldToUVBias[5].field0_0x0._s_0.Z;
  fVar9 = (param_1->GDFParameterData).MipTranslatedWorldToUVBias[5].field0_0x0._s_0.W;
  (this->GDFParameterData).MipTranslatedWorldToUVBias[5].field0_0x0._s_0.X = fVar6;
  (this->GDFParameterData).MipTranslatedWorldToUVBias[5].field0_0x0._s_0.Y = fVar7;
  (this->GDFParameterData).MipTranslatedWorldToUVBias[5].field0_0x0._s_0.Z = fVar8;
  (this->GDFParameterData).MipTranslatedWorldToUVBias[5].field0_0x0._s_0.W = fVar9;
  (this->GDFParameterData).MipFactor = (param_1->GDFParameterData).MipFactor;
  (this->GDFParameterData).MipTransition = (param_1->GDFParameterData).MipTransition;
  (this->GDFParameterData).PageAtlasTexture = (param_1->GDFParameterData).PageAtlasTexture;
  (this->GDFParameterData).CoverageAtlasTexture = (param_1->GDFParameterData).CoverageAtlasTexture;
  if (pTVar3 != pTVar2) {
    pFVar13 = pTVar3->Reference;
    pTVar3->Reference = pTVar2->Reference;
    pTVar2->Reference = (FRDGPooledBuffer *)0x0;
    if (pFVar13 != (FRDGPooledBuffer *)0x0) {
      plVar4 = &pFVar13->_padding_;
      LOCK();
      lVar12 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        if (plVar4 == (longlong *)0x0) {
          pFVar13 = (FRDGPooledBuffer *)0x0;
        }
        if (pFVar13 != (FRDGPooledBuffer *)0x0) {
          (**(code **)pFVar13->_padding_)(fVar6,1);
        }
      }
    }
  }
  (this->GDFParameterData).PageTableTexture = (param_1->GDFParameterData).PageTableTexture;
  (this->GDFParameterData).MipTexture = (param_1->GDFParameterData).MipTexture;
  (this->GDFParameterData).ClipmapSizeInPages = (param_1->GDFParameterData).ClipmapSizeInPages;
  dVar11 = (param_1->GDFParameterData).InvPageAtlasSize.field0_0x0._s_0.Y;
  (this->GDFParameterData).InvPageAtlasSize.field0_0x0._s_0.X =
       (param_1->GDFParameterData).InvPageAtlasSize.field0_0x0._s_0.X;
  (this->GDFParameterData).InvPageAtlasSize.field0_0x0._s_0.Y = dVar11;
  (this->GDFParameterData).InvPageAtlasSize.field0_0x0._s_0.Z =
       (param_1->GDFParameterData).InvPageAtlasSize.field0_0x0._s_0.Z;
  dVar11 = (param_1->GDFParameterData).InvCoverageAtlasSize.field0_0x0._s_0.Y;
  (this->GDFParameterData).InvCoverageAtlasSize.field0_0x0._s_0.X =
       (param_1->GDFParameterData).InvCoverageAtlasSize.field0_0x0._s_0.X;
  (this->GDFParameterData).InvCoverageAtlasSize.field0_0x0._s_0.Y = dVar11;
  (this->GDFParameterData).InvCoverageAtlasSize.field0_0x0._s_0.Z =
       (param_1->GDFParameterData).InvCoverageAtlasSize.field0_0x0._s_0.Z;
  (this->GDFParameterData).MaxPageNum = (param_1->GDFParameterData).MaxPageNum;
  (this->GDFParameterData).GlobalDFResolution = (param_1->GDFParameterData).GlobalDFResolution;
  (this->GDFParameterData).MaxDFAOConeDistance = (param_1->GDFParameterData).MaxDFAOConeDistance;
  (this->GDFParameterData).NumGlobalSDFClipmaps = (param_1->GDFParameterData).NumGlobalSDFClipmaps;
  return this;
}

