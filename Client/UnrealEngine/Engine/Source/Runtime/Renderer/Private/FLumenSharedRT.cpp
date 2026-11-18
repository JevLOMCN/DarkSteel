// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FLumenSharedRT @ 144d41480

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FLumenSharedRT * __thiscall FLumenSharedRT::FLumenSharedRT(FLumenSharedRT *this)

{
  this->RenderTarget = (FRDGTexture *)0x0;
  return this;
}

// CreateSharedRT @ 144d69540

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
FLumenSharedRT::CreateSharedRT
          (FLumenSharedRT *this,FRDGBuilder *param_1,FRDGTextureDesc *param_2,TIntPoint<int> param_3
          ,wchar_t *param_4,ERDGTextureFlags param_5)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FRDGTexture *pFVar5;
  int iVar6;
  int iStackX_24;
  
  pFVar5 = this->RenderTarget;
  if (pFVar5 == (FRDGTexture *)0x0) {
    pFVar5 = FRDGBuilder::CreateTexture(param_1,param_2,param_4,param_5);
    this->RenderTarget = pFVar5;
    iVar1 = (pFVar5->VisualizeTextureExtent).field0_0x0._s_0.X;
    iVar2 = (pFVar5->VisualizeTextureExtent).field0_0x0._s_0.Y;
    iVar6 = param_3.field0_0x0._0_4_;
    if (param_3.field0_0x0._0_4_ < iVar1) {
      iVar6 = iVar1;
    }
    iStackX_24 = param_3.field0_0x0._4_4_;
    (pFVar5->VisualizeTextureExtent).field0_0x0._s_0.X = iVar6;
    if (iStackX_24 < iVar2) {
      iStackX_24 = iVar2;
    }
    (pFVar5->VisualizeTextureExtent).field0_0x0._s_0.Y = iStackX_24;
  }
  else if ((*(int *)&param_2->field_0x24 != *(int *)&(pFVar5->Desc).field_0x24) ||
          (*(int *)&param_2->field_0x28 != *(int *)&(pFVar5->Desc).field_0x28)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Desc.Extent == RenderTarget->Desc.Extent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSceneRendering.cpp"
                       ,0xc49,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FRDGTexture *)(*pcVar3)();
      return pFVar5;
    }
  }
  return this->RenderTarget;
}

