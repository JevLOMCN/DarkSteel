// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraShader
// Functions: 1

// operator= @ 148df18b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FGlobalDistanceFieldParameterData * __thiscall
FGlobalDistanceFieldParameterData::operator=
          (FGlobalDistanceFieldParameterData *this,FGlobalDistanceFieldParameterData *param_1)

{
  longlong *plVar1;
  TRefCountPtr<FRDGPooledBuffer> *pTVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  double dVar8;
  longlong lVar9;
  FRDGPooledBuffer *pFVar10;
  TRefCountPtr<FRDGPooledBuffer> *pTVar11;
  
  uVar7 = *(undefined8 *)((longlong)&param_1->TranslatedCenterAndExtent[0].field0_0x0 + 8);
  pTVar2 = &this->PageObjectGridBuffer;
  *(undefined8 *)&this->TranslatedCenterAndExtent[0].field0_0x0 =
       *(undefined8 *)&param_1->TranslatedCenterAndExtent[0].field0_0x0;
  *(undefined8 *)((longlong)&this->TranslatedCenterAndExtent[0].field0_0x0 + 8) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&param_1->TranslatedCenterAndExtent[1].field0_0x0 + 8);
  *(undefined8 *)&this->TranslatedCenterAndExtent[1].field0_0x0 =
       *(undefined8 *)&param_1->TranslatedCenterAndExtent[1].field0_0x0;
  *(undefined8 *)((longlong)&this->TranslatedCenterAndExtent[1].field0_0x0 + 8) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&param_1->TranslatedCenterAndExtent[2].field0_0x0 + 8);
  *(undefined8 *)&this->TranslatedCenterAndExtent[2].field0_0x0 =
       *(undefined8 *)&param_1->TranslatedCenterAndExtent[2].field0_0x0;
  *(undefined8 *)((longlong)&this->TranslatedCenterAndExtent[2].field0_0x0 + 8) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&param_1->TranslatedCenterAndExtent[3].field0_0x0 + 8);
  *(undefined8 *)&this->TranslatedCenterAndExtent[3].field0_0x0 =
       *(undefined8 *)&param_1->TranslatedCenterAndExtent[3].field0_0x0;
  *(undefined8 *)((longlong)&this->TranslatedCenterAndExtent[3].field0_0x0 + 8) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&param_1->TranslatedCenterAndExtent[4].field0_0x0 + 8);
  *(undefined8 *)&this->TranslatedCenterAndExtent[4].field0_0x0 =
       *(undefined8 *)&param_1->TranslatedCenterAndExtent[4].field0_0x0;
  *(undefined8 *)((longlong)&this->TranslatedCenterAndExtent[4].field0_0x0 + 8) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&param_1->TranslatedCenterAndExtent[5].field0_0x0 + 8);
  *(undefined8 *)&this->TranslatedCenterAndExtent[5].field0_0x0 =
       *(undefined8 *)&param_1->TranslatedCenterAndExtent[5].field0_0x0;
  *(undefined8 *)((longlong)&this->TranslatedCenterAndExtent[5].field0_0x0 + 8) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&param_1->TranslatedWorldToUVAddAndMul[0].field0_0x0 + 8);
  *(undefined8 *)&this->TranslatedWorldToUVAddAndMul[0].field0_0x0 =
       *(undefined8 *)&param_1->TranslatedWorldToUVAddAndMul[0].field0_0x0;
  *(undefined8 *)((longlong)&this->TranslatedWorldToUVAddAndMul[0].field0_0x0 + 8) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&param_1->TranslatedWorldToUVAddAndMul[1].field0_0x0 + 8);
  *(undefined8 *)&this->TranslatedWorldToUVAddAndMul[1].field0_0x0 =
       *(undefined8 *)&param_1->TranslatedWorldToUVAddAndMul[1].field0_0x0;
  *(undefined8 *)((longlong)&this->TranslatedWorldToUVAddAndMul[1].field0_0x0 + 8) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&param_1->TranslatedWorldToUVAddAndMul[2].field0_0x0 + 8);
  *(undefined8 *)&this->TranslatedWorldToUVAddAndMul[2].field0_0x0 =
       *(undefined8 *)&param_1->TranslatedWorldToUVAddAndMul[2].field0_0x0;
  *(undefined8 *)((longlong)&this->TranslatedWorldToUVAddAndMul[2].field0_0x0 + 8) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&param_1->TranslatedWorldToUVAddAndMul[3].field0_0x0 + 8);
  *(undefined8 *)&this->TranslatedWorldToUVAddAndMul[3].field0_0x0 =
       *(undefined8 *)&param_1->TranslatedWorldToUVAddAndMul[3].field0_0x0;
  *(undefined8 *)((longlong)&this->TranslatedWorldToUVAddAndMul[3].field0_0x0 + 8) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&param_1->TranslatedWorldToUVAddAndMul[4].field0_0x0 + 8);
  *(undefined8 *)&this->TranslatedWorldToUVAddAndMul[4].field0_0x0 =
       *(undefined8 *)&param_1->TranslatedWorldToUVAddAndMul[4].field0_0x0;
  *(undefined8 *)((longlong)&this->TranslatedWorldToUVAddAndMul[4].field0_0x0 + 8) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&param_1->TranslatedWorldToUVAddAndMul[5].field0_0x0 + 8);
  *(undefined8 *)&this->TranslatedWorldToUVAddAndMul[5].field0_0x0 =
       *(undefined8 *)&param_1->TranslatedWorldToUVAddAndMul[5].field0_0x0;
  *(undefined8 *)((longlong)&this->TranslatedWorldToUVAddAndMul[5].field0_0x0 + 8) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&param_1->MipTranslatedWorldToUVScale[0].field0_0x0 + 8);
  *(undefined8 *)&this->MipTranslatedWorldToUVScale[0].field0_0x0 =
       *(undefined8 *)&param_1->MipTranslatedWorldToUVScale[0].field0_0x0;
  *(undefined8 *)((longlong)&this->MipTranslatedWorldToUVScale[0].field0_0x0 + 8) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&param_1->MipTranslatedWorldToUVScale[1].field0_0x0 + 8);
  *(undefined8 *)&this->MipTranslatedWorldToUVScale[1].field0_0x0 =
       *(undefined8 *)&param_1->MipTranslatedWorldToUVScale[1].field0_0x0;
  *(undefined8 *)((longlong)&this->MipTranslatedWorldToUVScale[1].field0_0x0 + 8) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&param_1->MipTranslatedWorldToUVScale[2].field0_0x0 + 8);
  *(undefined8 *)&this->MipTranslatedWorldToUVScale[2].field0_0x0 =
       *(undefined8 *)&param_1->MipTranslatedWorldToUVScale[2].field0_0x0;
  *(undefined8 *)((longlong)&this->MipTranslatedWorldToUVScale[2].field0_0x0 + 8) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&param_1->MipTranslatedWorldToUVScale[3].field0_0x0 + 8);
  *(undefined8 *)&this->MipTranslatedWorldToUVScale[3].field0_0x0 =
       *(undefined8 *)&param_1->MipTranslatedWorldToUVScale[3].field0_0x0;
  *(undefined8 *)((longlong)&this->MipTranslatedWorldToUVScale[3].field0_0x0 + 8) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&param_1->MipTranslatedWorldToUVScale[4].field0_0x0 + 8);
  *(undefined8 *)&this->MipTranslatedWorldToUVScale[4].field0_0x0 =
       *(undefined8 *)&param_1->MipTranslatedWorldToUVScale[4].field0_0x0;
  *(undefined8 *)((longlong)&this->MipTranslatedWorldToUVScale[4].field0_0x0 + 8) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&param_1->MipTranslatedWorldToUVScale[5].field0_0x0 + 8);
  *(undefined8 *)&this->MipTranslatedWorldToUVScale[5].field0_0x0 =
       *(undefined8 *)&param_1->MipTranslatedWorldToUVScale[5].field0_0x0;
  *(undefined8 *)((longlong)&this->MipTranslatedWorldToUVScale[5].field0_0x0 + 8) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&param_1->MipTranslatedWorldToUVBias[0].field0_0x0 + 8);
  *(undefined8 *)&this->MipTranslatedWorldToUVBias[0].field0_0x0 =
       *(undefined8 *)&param_1->MipTranslatedWorldToUVBias[0].field0_0x0;
  *(undefined8 *)((longlong)&this->MipTranslatedWorldToUVBias[0].field0_0x0 + 8) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&param_1->MipTranslatedWorldToUVBias[1].field0_0x0 + 8);
  *(undefined8 *)&this->MipTranslatedWorldToUVBias[1].field0_0x0 =
       *(undefined8 *)&param_1->MipTranslatedWorldToUVBias[1].field0_0x0;
  *(undefined8 *)((longlong)&this->MipTranslatedWorldToUVBias[1].field0_0x0 + 8) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&param_1->MipTranslatedWorldToUVBias[2].field0_0x0 + 8);
  *(undefined8 *)&this->MipTranslatedWorldToUVBias[2].field0_0x0 =
       *(undefined8 *)&param_1->MipTranslatedWorldToUVBias[2].field0_0x0;
  *(undefined8 *)((longlong)&this->MipTranslatedWorldToUVBias[2].field0_0x0 + 8) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&param_1->MipTranslatedWorldToUVBias[3].field0_0x0 + 8);
  *(undefined8 *)&this->MipTranslatedWorldToUVBias[3].field0_0x0 =
       *(undefined8 *)&param_1->MipTranslatedWorldToUVBias[3].field0_0x0;
  *(undefined8 *)((longlong)&this->MipTranslatedWorldToUVBias[3].field0_0x0 + 8) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&param_1->MipTranslatedWorldToUVBias[4].field0_0x0 + 8);
  *(undefined8 *)&this->MipTranslatedWorldToUVBias[4].field0_0x0 =
       *(undefined8 *)&param_1->MipTranslatedWorldToUVBias[4].field0_0x0;
  *(undefined8 *)((longlong)&this->MipTranslatedWorldToUVBias[4].field0_0x0 + 8) = uVar7;
  fVar3 = param_1->MipTranslatedWorldToUVBias[5].field0_0x0._s_0.X;
  fVar4 = param_1->MipTranslatedWorldToUVBias[5].field0_0x0._s_0.Y;
  fVar5 = param_1->MipTranslatedWorldToUVBias[5].field0_0x0._s_0.Z;
  fVar6 = param_1->MipTranslatedWorldToUVBias[5].field0_0x0._s_0.W;
  this->MipTranslatedWorldToUVBias[5].field0_0x0._s_0.X = fVar3;
  this->MipTranslatedWorldToUVBias[5].field0_0x0._s_0.Y = fVar4;
  this->MipTranslatedWorldToUVBias[5].field0_0x0._s_0.Z = fVar5;
  this->MipTranslatedWorldToUVBias[5].field0_0x0._s_0.W = fVar6;
  this->MipFactor = param_1->MipFactor;
  this->MipTransition = param_1->MipTransition;
  this->PageAtlasTexture = param_1->PageAtlasTexture;
  pTVar11 = &param_1->PageObjectGridBuffer;
  this->CoverageAtlasTexture = param_1->CoverageAtlasTexture;
  if (pTVar2 != pTVar11) {
    pFVar10 = pTVar2->Reference;
    pTVar2->Reference = pTVar11->Reference;
    pTVar11->Reference = (FRDGPooledBuffer *)0x0;
    if (pFVar10 != (FRDGPooledBuffer *)0x0) {
      plVar1 = &pFVar10->_padding_;
      LOCK();
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        if (plVar1 == (longlong *)0x0) {
          pFVar10 = (FRDGPooledBuffer *)0x0;
        }
        if (pFVar10 != (FRDGPooledBuffer *)0x0) {
          (**(code **)pFVar10->_padding_)(fVar3,1);
        }
      }
    }
  }
  this->PageTableTexture = param_1->PageTableTexture;
  this->MipTexture = param_1->MipTexture;
  this->ClipmapSizeInPages = param_1->ClipmapSizeInPages;
  dVar8 = (param_1->InvPageAtlasSize).field0_0x0._s_0.Y;
  (this->InvPageAtlasSize).field0_0x0._s_0.X = (param_1->InvPageAtlasSize).field0_0x0._s_0.X;
  (this->InvPageAtlasSize).field0_0x0._s_0.Y = dVar8;
  (this->InvPageAtlasSize).field0_0x0._s_0.Z = (param_1->InvPageAtlasSize).field0_0x0._s_0.Z;
  dVar8 = (param_1->InvCoverageAtlasSize).field0_0x0._s_0.Y;
  (this->InvCoverageAtlasSize).field0_0x0._s_0.X = (param_1->InvCoverageAtlasSize).field0_0x0._s_0.X
  ;
  (this->InvCoverageAtlasSize).field0_0x0._s_0.Y = dVar8;
  (this->InvCoverageAtlasSize).field0_0x0._s_0.Z = (param_1->InvCoverageAtlasSize).field0_0x0._s_0.Z
  ;
  this->MaxPageNum = param_1->MaxPageNum;
  this->GlobalDFResolution = param_1->GlobalDFResolution;
  this->MaxDFAOConeDistance = param_1->MaxDFAOConeDistance;
  this->NumGlobalSDFClipmaps = param_1->NumGlobalSDFClipmaps;
  return this;
}

