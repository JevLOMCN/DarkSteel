// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 2

// FOpenGLTextureDesc @ 145be5290

/* WARNING: Enum "Type": Some values do not have unique names */

FOpenGLTextureDesc * __thiscall
FOpenGLTextureDesc::FOpenGLTextureDesc(FOpenGLTextureDesc *this,FRHITextureDesc *param_1)

{
  ETextureDimension EVar1;
  ETextureCreateFlags EVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  TConsoleVariableData<int> *pTVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  byte bVar9;
  uint uVar10;
  FOpenGLTextureDesc *pFVar11;
  longlong lVar12;
  ulong64 uVar13;
  uint uVar14;
  
  this->Target = 0;
  this->Attachment = 0;
  this->MemorySize = 0;
  if ((param_1->Dimension == TextureCube) || (param_1->Dimension == TextureCubeArray)) {
    bVar6 = 1;
  }
  else {
    bVar6 = 0;
  }
  bVar9 = this->field_0xc;
  this->bCubemap = bVar6;
  if ((param_1->Dimension == Texture2DArray) || (param_1->Dimension == TextureCubeArray)) {
    bVar7 = 2;
  }
  else {
    bVar7 = 0;
  }
  bVar7 = bVar9 & 0xfc | bVar6 | bVar7;
  this->field_0xc = bVar7;
  bVar7 = ((char)(param_1->Flags >> 0x1c) << 2 ^ bVar7) & 4 ^ bVar7;
  this->field_0xc = bVar7;
  bVar6 = ((byte)(char)param_1->Flags >> 2 & 1) << 3 ^ bVar7 & 0xf7;
  this->field_0xc = bVar6 & 0xcf;
  if ((((uint)(int)param_1->Flags >> 0xc & 1) == 0) || (param_1->NumSamples < 2)) {
    bVar9 = 0;
  }
  else {
    bVar9 = 0x40;
  }
  this->field_0xc = bVar6 & 0x8f | bVar9;
  if ((((bVar6 & 1) != 0) && (param_1->NumSamples != '\x01')) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bCubemap || InDesc.NumSamples == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                         ,0xb8,L"Texture cubes cannot be multisampled."), bVar8)) {
    pcVar3 = (code *)swi(3);
    pFVar11 = (FOpenGLTextureDesc *)(*pcVar3)();
    return pFVar11;
  }
  if (((this->bMultisampleRenderbuffer != '\0') &&
      ((param_1->Flags & (DepthStencilTargetable|RenderTargetable)) == None)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bMultisampleRenderbuffer || EnumHasAnyFlags(InDesc.Flags, ETextureCreateFlags::RenderTargetable | ETextureCreateFlags::DepthStencilTargetable)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                         ,0xba,L"Only render targets can be memoryless"), bVar8)) {
    pcVar3 = (code *)swi(3);
    pFVar11 = (FOpenGLTextureDesc *)(*pcVar3)();
    return pFVar11;
  }
  bVar6 = this->field_0xc;
  if (((this->bDepthStencil == '\0') || (param_1->NumSamples < 2)) ||
     (param_1->Dimension != Texture2DArray)) {
    bVar8 = false;
  }
  else {
    bVar6 = bVar6 & 0xbf;
    bVar8 = true;
    this->field_0xc = bVar6;
  }
  if ((bVar6 & 0x40) == 0) {
    if (bVar8) {
      uVar10 = 0x8c1a;
    }
    else {
      EVar1 = param_1->Dimension;
      if ((param_1->Flags >> 0x22 & 1) == 0) {
        if ((param_1->Flags >> 0x12 & 1) == 0) {
          if (EVar1 == Texture2D) {
LAB_145be54d0:
            uVar10 = 0xde1;
            uVar14 = 0x9100;
          }
          else {
            if (EVar1 != Texture2DArray) {
              if (EVar1 == Texture3D) {
                uVar10 = 0x806f;
              }
              else if (EVar1 == TextureCube) {
                uVar10 = 0x8513;
              }
              else {
                if (EVar1 != TextureCubeArray) {
                  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("!\"Enclosing block should never be called\"",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                                     ,0xe3,L"");
                  if (bVar8) {
                    pcVar3 = (code *)swi(3);
                    pFVar11 = (FOpenGLTextureDesc *)(*pcVar3)();
                    return pFVar11;
                  }
                  goto LAB_145be54d0;
                }
                uVar10 = 0x9009;
              }
              goto LAB_145be54e1;
            }
            uVar10 = 0x8c1a;
            uVar14 = 0x9102;
          }
          if (1 < param_1->NumSamples) {
            uVar10 = uVar14;
          }
        }
        else {
          if ((EVar1 != Texture2D) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("InDesc.Dimension == ETextureDimension::Texture2D",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                                 ,0xdc,L""), bVar8)) {
            pcVar3 = (code *)swi(3);
            pFVar11 = (FOpenGLTextureDesc *)(*pcVar3)();
            return pFVar11;
          }
          uVar10 = 0x8d41;
        }
      }
      else {
        if (((EVar1 != Texture2D) && (EVar1 != Texture2DArray)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InDesc.IsTexture2D()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                               ,0xd1,L""), bVar8)) {
          pcVar3 = (code *)swi(3);
          pFVar11 = (FOpenGLTextureDesc *)(*pcVar3)();
          return pFVar11;
        }
        if (((param_1->Dimension == Texture2DArray) || (param_1->Dimension == TextureCubeArray)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("!InDesc.IsTextureArray()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                               ,0xd2,L""), bVar8)) {
          pcVar3 = (code *)swi(3);
          pFVar11 = (FOpenGLTextureDesc *)(*pcVar3)();
          return pFVar11;
        }
        uVar10 = 0xde1;
      }
    }
  }
  else {
    uVar10 = 0x8d41;
  }
LAB_145be54e1:
  this->Target = uVar10;
  pTVar4 = CVarDeferTextureCreation.Ref;
  bVar8 = IsInParallelGameThread();
  if (bVar8) {
LAB_145be5503:
    lVar12 = 0;
  }
  else {
    bVar8 = IsInGameThread();
    lVar12 = 4;
    if (bVar8) goto LAB_145be5503;
  }
  pTVar5 = CVarDeferTextureCreationExcludeMask.Ref;
  if ((*(int *)((longlong)pTVar4->ShadowedValue + lVar12) == 0) ||
     (EVar2 = param_1->Flags, EVar2 == None)) {
LAB_145be5583:
    bVar6 = 0;
  }
  else {
    bVar8 = IsInParallelGameThread();
    if (bVar8) {
LAB_145be5535:
      lVar12 = 0;
    }
    else {
      bVar8 = IsInGameThread();
      lVar12 = 4;
      if (bVar8) goto LAB_145be5535;
    }
    if ((((EVar2 & (longlong)*(int *)((longlong)pTVar5->ShadowedValue + lVar12)) != None) ||
        (this->Target != 0xde1)) ||
       ((param_1->Dimension != Texture2D && (param_1->Dimension != Texture2DArray))))
    goto LAB_145be5583;
    bVar6 = 0x10;
  }
  bVar9 = this->field_0xc & 0xef | bVar6;
  this->bCanCreateAsEvicted = bVar6 >> 4;
  if (((GOGLTextureEvictLogging != 0) && (2 < (byte)LogRHI._0_1_)) && (bVar6 == 0)) {
    bVar8 = IsInParallelGameThread();
    if (!bVar8) {
      IsInGameThread();
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    bVar9 = this->field_0xc;
  }
  uVar10 = (param_1->Extent).field0_0x0._s_0.X;
  if ((((uVar10 & uVar10 - 1) == 0) &&
      (uVar10 = (param_1->Extent).field0_0x0._s_0.Y, (uVar10 & uVar10 - 1) == 0)) &&
     ((param_1->Depth & param_1->Depth - 1) == 0)) {
    bVar6 = 0x20;
  }
  else {
    bVar6 = 0;
  }
  this->field_0xc = bVar9 & 0xdf | bVar6;
  uVar13 = FRHITextureDesc::CalcMemorySizeEstimate(param_1,0,param_1->NumMips - 1);
  this->MemorySize = (uint)uVar13;
  EVar2 = param_1->Flags;
  if ((EVar2 & (CPUReadback|RenderTargetable)) == None) {
    if ((EVar2 & DepthStencilTargetable) == None) {
      if ((EVar2 & ResolveTargetable) == None) {
        this->Attachment = 0;
        return this;
      }
      if (param_1->Format == PF_DepthStencil) {
        uVar10 = 0x821a;
      }
      else {
        uVar10 = 0x8d00;
        if ((param_1->Format - PF_ShadowDepth & 0xf7) != 0) {
          uVar10 = 0x8ce0;
        }
      }
    }
    else {
      uVar10 = 0x8d00;
      if (param_1->Format == PF_DepthStencil) {
        uVar10 = 0x821a;
      }
    }
    this->Attachment = uVar10;
    if (uVar10 != 0x821a) {
      if (uVar10 == 0x8ce0) goto LAB_145be565d;
      if (uVar10 != 0x8d00) {
        return this;
      }
    }
    if ((GMaxOpenGLDepthSamples < (int)(uint)param_1->NumSamples) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("GMaxOpenGLDepthSamples >= (GLint)InDesc.NumSamples",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                           ,0x120,L""), bVar8)) goto code_r0x000145be5726;
  }
  else {
    this->Attachment = 0x8ce0;
LAB_145be565d:
    if (GMaxOpenGLColorSamples < (int)(uint)param_1->NumSamples) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("GMaxOpenGLColorSamples >= (GLint)InDesc.NumSamples",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                         ,0x11c,L"");
      if (!bVar8) {
        return this;
      }
code_r0x000145be5726:
      pcVar3 = (code *)swi(3);
      pFVar11 = (FOpenGLTextureDesc *)(*pcVar3)();
      return pFVar11;
    }
  }
  return this;
}

// CanDeferTextureCreation @ 145bf5180

bool __cdecl FOpenGLTextureDesc::CanDeferTextureCreation(void)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  
  pTVar1 = CVarDeferTextureCreation.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      return pTVar1->ShadowedValue[1] != 0;
    }
  }
  return pTVar1->ShadowedValue[0] != 0;
}

