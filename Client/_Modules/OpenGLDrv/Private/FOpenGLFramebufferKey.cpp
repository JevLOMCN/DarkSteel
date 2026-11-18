// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 1

// FOpenGLFramebufferKey @ 145be1310

/* WARNING: Enum "Type": Some values do not have unique names */

FOpenGLFramebufferKey * __thiscall
FOpenGLFramebufferKey::FOpenGLFramebufferKey
          (FOpenGLFramebufferKey *this,uint param_1,FOpenGLTexture **param_2,uint *param_3,
          uint *param_4,FOpenGLTexture *param_5,FExclusiveDepthStencil param_6,int param_7)

{
  RenderTargetInfo *pRVar1;
  FOpenGLTexture *this_00;
  code *pcVar2;
  bool bVar3;
  FOpenGLFramebufferKey *pFVar4;
  uint *puVar5;
  uint *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  uVar8 = 0;
  this->DepthStencilTarget = param_5;
  uVar7 = (ulonglong)param_1;
  switch(param_6.Value) {
  case DepthNop:
  case DepthWrite:
  case DepthNop_StencilWrite:
  case DepthWrite_StencilWrite:
    uVar9 = 0;
    break;
  case DepthRead:
  case DepthRead_StencilWrite:
    uVar9 = 1;
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0x289,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FOpenGLFramebufferKey *)(*pcVar2)();
      return pFVar4;
    }
    uVar9 = 0xffffffff;
    break;
  case DepthNop_StencilRead:
  case DepthWrite_StencilRead:
    uVar9 = 2;
    break;
  case DepthRead_StencilRead:
    uVar9 = 3;
  }
  this->DepthStencilAccessIndex = uVar9;
  this->NumRenderingSamples = param_7;
  if (param_1 != 0) {
    puVar6 = &this->RenderTargets[0].MipmapLevel;
    puVar5 = param_3;
    pFVar4 = this;
    if (param_2 == (FOpenGLTexture **)0x0) {
      do {
        pFVar4->RenderTargets[0].Texture = (FOpenGLTexture *)0x0;
        pFVar4->RenderTargets[0].Resource = 0;
        pFVar4->RenderTargets[0].MipmapLevel = 0;
        *(undefined8 *)&pFVar4->RenderTargets[0].ArrayIndex = 0;
        ((RenderTargetInfo *)(puVar6 + -3))->Texture = (FOpenGLTexture *)0x0;
        puVar6[-1] = 0;
        *puVar6 = *(uint *)(((longlong)param_4 - (longlong)param_3) + (longlong)puVar5);
        if ((param_3 == (uint *)0x0) || (uVar9 = *puVar5, uVar9 == 0xffffffff)) {
          uVar9 = 0xffffffff;
        }
        puVar6[1] = uVar9;
        puVar6 = puVar6 + 6;
        uVar7 = uVar7 - 1;
        puVar5 = puVar5 + 1;
        pFVar4 = (FOpenGLFramebufferKey *)(pFVar4->RenderTargets + 1);
      } while (uVar7 != 0);
    }
    else {
      do {
        pFVar4->RenderTargets[0].Texture = (FOpenGLTexture *)0x0;
        pFVar4->RenderTargets[0].Resource = 0;
        pFVar4->RenderTargets[0].MipmapLevel = 0;
        *(undefined8 *)&pFVar4->RenderTargets[0].ArrayIndex = 0;
        ((RenderTargetInfo *)(puVar6 + -3))->Texture = *param_2;
        this_00 = *param_2;
        uVar9 = 0;
        if (this_00 != (FOpenGLTexture *)0x0) {
          FOpenGLTexture::TryRestoreGLResource(this_00);
          uVar9 = this_00->Resource;
        }
        puVar6[-1] = uVar9;
        *puVar6 = *(uint *)((longlong)puVar5 + ((longlong)param_4 - (longlong)param_3));
        if ((param_3 == (uint *)0x0) || (uVar9 = *puVar5, uVar9 == 0xffffffff)) {
          uVar9 = 0xffffffff;
        }
        puVar6[1] = uVar9;
        puVar6 = puVar6 + 6;
        param_2 = param_2 + 1;
        uVar7 = uVar7 - 1;
        puVar5 = puVar5 + 1;
        pFVar4 = (FOpenGLFramebufferKey *)(pFVar4->RenderTargets + 1);
      } while (uVar7 != 0);
    }
    uVar8 = (ulonglong)param_1;
    if (7 < param_1) {
      return this;
    }
  }
  puVar6 = &this->RenderTargets[uVar8].ArrayIndex;
  do {
    uVar9 = (int)uVar8 + 1;
    pRVar1 = this->RenderTargets + uVar8;
    pRVar1->Texture = (FOpenGLTexture *)0x0;
    pRVar1->Resource = 0;
    pRVar1->MipmapLevel = 0;
    *(undefined8 *)&this->RenderTargets[uVar8].ArrayIndex = 0;
    *puVar6 = 0xffffffff;
    puVar6 = puVar6 + 6;
    uVar8 = (ulonglong)uVar9;
  } while (uVar9 < 8);
  return this;
}

