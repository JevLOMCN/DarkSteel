// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 220

// ApplyStaticUniformBuffers<FRHIComputeShader> @ 145bd75f0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::ApplyStaticUniformBuffers<FRHIComputeShader>
          (FOpenGLDynamicRHI *this,FRHIComputeShader *param_1)

{
  <lambda_1> local_18;
  
  if (param_1 != (FRHIComputeShader *)0x0) {
    local_18.ShaderFrequency = *(EShaderFrequency *)((longlong)&param_1->_padding_ + 4);
    local_18.__this = this;
    UE::RHICore::
    ApplyStaticUniformBuffers<_FOpenGLDynamicRHI::ApplyStaticUniformBuffers<FRHIComputeShader>_::__l5::<lambda_1>_>
              ((FRHIShader *)param_1,&this->GlobalUniformBuffers,&local_18);
  }
  return;
}

// ApplyStaticUniformBuffers<FRHIGeometryShader> @ 145bd7630

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::ApplyStaticUniformBuffers<FRHIGeometryShader>
          (FOpenGLDynamicRHI *this,FRHIGeometryShader *param_1)

{
  <lambda_1> local_18;
  
  if (param_1 != (FRHIGeometryShader *)0x0) {
    local_18.ShaderFrequency = param_1->field_0x104;
    local_18.__this = this;
    UE::RHICore::
    ApplyStaticUniformBuffers<_FOpenGLDynamicRHI::ApplyStaticUniformBuffers<FRHIGeometryShader>_::__l5::<lambda_1>_>
              ((FRHIShader *)param_1,&this->GlobalUniformBuffers,&local_18);
  }
  return;
}

// ApplyStaticUniformBuffers<FRHIPixelShader> @ 145bd7670

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::ApplyStaticUniformBuffers<FRHIPixelShader>
          (FOpenGLDynamicRHI *this,FRHIPixelShader *param_1)

{
  <lambda_1> local_18;
  
  if (param_1 != (FRHIPixelShader *)0x0) {
    local_18.ShaderFrequency = param_1->field_0x104;
    local_18.__this = this;
    UE::RHICore::
    ApplyStaticUniformBuffers<_FOpenGLDynamicRHI::ApplyStaticUniformBuffers<FRHIPixelShader>_::__l5::<lambda_1>_>
              ((FRHIShader *)param_1,&this->GlobalUniformBuffers,&local_18);
  }
  return;
}

// ApplyStaticUniformBuffers<FRHIVertexShader> @ 145bd76b0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::ApplyStaticUniformBuffers<FRHIVertexShader>
          (FOpenGLDynamicRHI *this,FRHIVertexShader *param_1)

{
  <lambda_1> local_18;
  
  if (param_1 != (FRHIVertexShader *)0x0) {
    local_18.ShaderFrequency = param_1->field_0x104;
    local_18.__this = this;
    UE::RHICore::
    ApplyStaticUniformBuffers<_FOpenGLDynamicRHI::ApplyStaticUniformBuffers<FRHIVertexShader>_::__l5::<lambda_1>_>
              ((FRHIShader *)param_1,&this->GlobalUniformBuffers,&local_18);
  }
  return;
}

// SetResourcesFromTables<FOpenGLComputeShader> @ 145bdde80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EShaderStage": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::SetResourcesFromTables<FOpenGLComputeShader>
          (FOpenGLDynamicRHI *this,FOpenGLComputeShader *param_1)

{
  FTracker *pFVar1;
  HGLRC pHVar2;
  FOpenGLResourceBinder local_38;
  
  pHVar2 = wglGetCurrentContext();
  if (pHVar2 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog
              (&`private:_void___cdecl_FOpenGLDynamicRHI::SetResourcesFromTables<FOpenGLComputeShader>(FOpenGLComputeShader*___ptr64)___ptr64'
                ::__l7::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  pFVar1 = (FTracker *)this->_padding_;
  local_38.ShaderStage = ___xmm_00000000000000000000000000000006;
  local_38.FirstTextureUnit = _UNK_1510f6df4;
  local_38.MaxTextureImageUnits = _UNK_1510f6df8;
  local_38.FirstUAVUnit = _UNK_1510f6dfc;
  local_38.ShaderFrequency = SF_Compute;
  local_38.MaxUAVUnits = 0;
  local_38.bClearTextureSamplers = true;
  local_38.RHI = this;
  FOpenGLResourceBinder::Init(&local_38);
  UE::RHI::Private::
  SetUniformBufferResourcesFromTables<FOpenGLResourceBinder,FRHIUniformBuffer_*_[14],unsigned_short,0>
            (&local_38,(FRHIShader *)param_1,(this->PendingState).DirtyUniformBuffers + 5,
             (this->PendingState).BoundUniformBuffers + 5,pFVar1);
  return;
}

// SetResourcesFromTables<FOpenGLGeometryShader> @ 145bddf70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EShaderStage": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::SetResourcesFromTables<FOpenGLGeometryShader>
          (FOpenGLDynamicRHI *this,FOpenGLGeometryShader *param_1)

{
  FTracker *pFVar1;
  HGLRC pHVar2;
  FOpenGLResourceBinder local_38;
  
  pHVar2 = wglGetCurrentContext();
  if (pHVar2 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog
              (&`private:_void___cdecl_FOpenGLDynamicRHI::SetResourcesFromTables<FOpenGLGeometryShader>(FOpenGLGeometryShader*___ptr64)___ptr64'
                ::__l7::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  pFVar1 = (FTracker *)this->_padding_;
  local_38.ShaderStage = ___xmm_00000000000000000000000000000006;
  local_38.FirstTextureUnit = _UNK_1510f6df4;
  local_38.MaxTextureImageUnits = _UNK_1510f6df8;
  local_38.FirstUAVUnit = _UNK_1510f6dfc;
  local_38.ShaderFrequency = SF_Geometry;
  local_38.MaxUAVUnits = 0;
  local_38.bClearTextureSamplers = true;
  local_38.RHI = this;
  FOpenGLResourceBinder::Init(&local_38);
  UE::RHI::Private::
  SetUniformBufferResourcesFromTables<FOpenGLResourceBinder,FRHIUniformBuffer_*_[14],unsigned_short,0>
            (&local_38,(FRHIShader *)param_1,(this->PendingState).DirtyUniformBuffers + 4,
             (this->PendingState).BoundUniformBuffers + 4,pFVar1);
  return;
}

// SetResourcesFromTables<FOpenGLPixelShader> @ 145bde060

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EShaderStage": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::SetResourcesFromTables<FOpenGLPixelShader>
          (FOpenGLDynamicRHI *this,FOpenGLPixelShader *param_1)

{
  FTracker *pFVar1;
  HGLRC pHVar2;
  FOpenGLResourceBinder local_38;
  
  pHVar2 = wglGetCurrentContext();
  if (pHVar2 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog
              (&`private:_void___cdecl_FOpenGLDynamicRHI::SetResourcesFromTables<FOpenGLPixelShader>(FOpenGLPixelShader*___ptr64)___ptr64'
                ::__l7::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  pFVar1 = (FTracker *)this->_padding_;
  local_38.ShaderStage = ___xmm_00000000000000000000000000000006;
  local_38.FirstTextureUnit = _UNK_1510f6df4;
  local_38.MaxTextureImageUnits = _UNK_1510f6df8;
  local_38.FirstUAVUnit = _UNK_1510f6dfc;
  local_38.ShaderFrequency = SF_Pixel;
  local_38.MaxUAVUnits = 0;
  local_38.bClearTextureSamplers = true;
  local_38.RHI = this;
  FOpenGLResourceBinder::Init(&local_38);
  UE::RHI::Private::
  SetUniformBufferResourcesFromTables<FOpenGLResourceBinder,FRHIUniformBuffer_*_[14],unsigned_short,0>
            (&local_38,(FRHIShader *)param_1,(this->PendingState).DirtyUniformBuffers + 3,
             (this->PendingState).BoundUniformBuffers + 3,pFVar1);
  return;
}

// SetResourcesFromTables<FOpenGLVertexShader> @ 145bde150

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EShaderStage": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::SetResourcesFromTables<FOpenGLVertexShader>
          (FOpenGLDynamicRHI *this,FOpenGLVertexShader *param_1)

{
  FTracker *pFVar1;
  HGLRC pHVar2;
  FOpenGLResourceBinder local_38;
  
  pHVar2 = wglGetCurrentContext();
  if (pHVar2 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog
              (&`private:_void___cdecl_FOpenGLDynamicRHI::SetResourcesFromTables<FOpenGLVertexShader>(FOpenGLVertexShader*___ptr64)___ptr64'
                ::__l7::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  pFVar1 = (FTracker *)this->_padding_;
  local_38.ShaderStage = ___xmm_00000000000000000000000000000006;
  local_38.FirstTextureUnit = _UNK_1510f6df4;
  local_38.MaxTextureImageUnits = _UNK_1510f6df8;
  local_38.FirstUAVUnit = _UNK_1510f6dfc;
  local_38.ShaderFrequency = SF_Vertex;
  local_38.MaxUAVUnits = 0;
  local_38.bClearTextureSamplers = true;
  local_38.RHI = this;
  FOpenGLResourceBinder::Init(&local_38);
  UE::RHI::Private::
  SetUniformBufferResourcesFromTables<FOpenGLResourceBinder,FRHIUniformBuffer_*_[14],unsigned_short,0>
            (&local_38,(FRHIShader *)param_1,(this->PendingState).DirtyUniformBuffers,
             (this->PendingState).BoundUniformBuffers,pFVar1);
  return;
}

// SetupTexturesForDraw<FOpenGLComputeShader_*> @ 145bdebc0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::SetupTexturesForDraw<FOpenGLComputeShader_*>
          (FOpenGLDynamicRHI *this,FOpenGLComputeShader **param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  FOpenGLLinkedProgram *pFVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  HGLRC pHVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  FTextureStage *pFVar16;
  uint local_res10;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  
  pHVar11 = wglGetCurrentContext();
  if (pHVar11 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog
              (&`private:_void___cdecl_FOpenGLDynamicRHI::SetupTexturesForDraw<FOpenGLComputeShader*___ptr64>(FOpenGLComputeShader*___ptr64_const&___ptr64,int)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  uVar13 = 0;
  pFVar6 = (*param_1)->LinkedProgram;
  iVar1 = (int)pFVar6->_padding_;
  if (-1 < iVar1) {
    local_res10 = 1;
    local_50 = 0;
    local_58 = 0;
    local_48 = 0;
    do {
      if ((((int)uVar13 < 0) || ((int)pFVar6->_padding_ <= (int)uVar13)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      plVar12 = &pFVar6->_padding_;
      if ((longlong *)pFVar6->_padding_ != (longlong *)0x0) {
        plVar12 = (longlong *)pFVar6->_padding_;
      }
      uVar14 = ~uVar13 >> 0x1f;
      uVar10 = uVar13;
      if ((int)uVar13 < 0) {
        uVar10 = uVar13 + 0x1f;
      }
      if ((*(uint *)((longlong)plVar12 + (longlong)((int)uVar10 >> 5) * 4) & local_res10) == 0) {
        uVar10 = 0;
        if ((int)uVar13 < (int)(this->ContextState)._padding_) {
          uVar10 = uVar14;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar15 = (this->ContextState)._padding_;
        if ((*(int *)(local_50 + 0x10 + lVar15) != 0) || (*(int *)(local_50 + 0x14 + lVar15) != 0))
        {
          CachedSetupTextureStageInner(this,uVar13,0,0,-1,1);
        }
      }
      else {
        uVar10 = 0;
        if ((int)uVar13 < (int)(this->PendingState)._padding_) {
          uVar10 = uVar14;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar16 = (FTextureStage *)((this->PendingState)._padding_ + local_50);
        uVar10 = 0;
        if ((int)uVar13 < (int)(this->ContextState)._padding_) {
          uVar10 = uVar14;
        }
        iVar2 = pFVar16->NumMips;
        iVar3 = pFVar16->LimitMip;
        uVar4 = pFVar16->Resource;
        uVar5 = pFVar16->Target;
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar15 = (this->ContextState)._padding_;
        if ((*(uint *)(local_50 + 0x10 + lVar15) != uVar5) ||
           (*(uint *)(local_50 + 0x14 + lVar15) != uVar4)) {
          CachedSetupTextureStageInner(this,uVar13,uVar5,uVar4,iVar3,iVar2);
        }
        if (pFVar16->Target == 0x8d65) {
          (*glBindSampler)(uVar13,0);
          uVar10 = 0;
          if ((int)uVar13 < (int)(this->ContextState)._padding_) {
            uVar10 = uVar14;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          *(undefined8 *)((this->ContextState)._padding_ + local_58 * 8) = 0;
          uVar10 = 0;
          if ((int)uVar13 < (int)(this->PendingState)._padding_) {
            uVar10 = uVar14;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          ApplyTextureStage(this,uVar13,pFVar16,
                            *(FOpenGLSamplerState **)((this->PendingState)._padding_ + local_58 * 8)
                           );
        }
        else {
          uVar10 = 0;
          if ((int)uVar13 < (int)(this->PendingState)._padding_) {
            uVar10 = uVar14;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar15 = *(longlong *)(local_48 + (this->PendingState)._padding_);
          uVar10 = 0;
          if ((int)uVar13 < (int)(this->ContextState)._padding_) {
            uVar10 = uVar14;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (*(longlong *)((this->ContextState)._padding_ + local_58 * 8) != lVar15) {
            if (lVar15 == 0) {
              uVar10 = 0;
            }
            else {
              uVar10 = *(uint *)(lVar15 + 0x18);
            }
            (*glBindSampler)(uVar13,uVar10);
            uVar10 = 0;
            if ((int)uVar13 < (int)(this->ContextState)._padding_) {
              uVar10 = uVar14;
            }
            if ((uVar10 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            *(longlong *)((this->ContextState)._padding_ + local_58 * 8) = lVar15;
          }
          if ((pFVar16->Texture != (FOpenGLTexture *)0x0) &&
             (pFVar16->Texture->bInStencilTextureMode != false)) {
            (*glTexParameteri)(pFVar16->Target,0x90ea,0x1902);
            (*glTexParameteri)(pFVar16->Target,0x8e42,0x1903);
            (*glTexParameteri)(pFVar16->Target,0x8e43,0);
            (*glTexParameteri)(pFVar16->Target,0x8e44,0);
            (*glTexParameteri)(pFVar16->Target,0x8e45,0);
            pFVar16->Texture->bInStencilTextureMode = false;
          }
        }
      }
      local_50 = local_50 + 0x28;
      local_48 = local_48 + 8;
      local_58 = local_58 + 1;
      uVar13 = uVar13 + 1;
      local_res10 = local_res10 << 1 | (uint)((int)local_res10 < 0);
    } while (local_58 <= iVar1);
  }
  uVar13 = iVar1 + 1;
  if ((int)uVar13 < param_2) {
    lVar15 = (longlong)(int)uVar13 * 0x28;
    do {
      uVar10 = 0;
      if ((int)uVar13 < (int)(this->ContextState)._padding_) {
        uVar10 = ~uVar13 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar7 = (this->ContextState)._padding_;
      if ((*(int *)(lVar7 + 0x10 + lVar15) != 0) || (*(int *)(lVar7 + 0x14 + lVar15) != 0)) {
        CachedSetupTextureStageInner(this,uVar13,0,0,-1,1);
      }
      uVar13 = uVar13 + 1;
      lVar15 = lVar15 + 0x28;
    } while ((int)uVar13 < param_2);
  }
  return;
}

// SetupTexturesForDraw<TRefCountPtr<FOpenGLBoundShaderState>_> @ 145bdf1f0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::SetupTexturesForDraw<TRefCountPtr<FOpenGLBoundShaderState>_>
          (FOpenGLDynamicRHI *this,TRefCountPtr<FOpenGLBoundShaderState> *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  FOpenGLLinkedProgram *pFVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  HGLRC pHVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  FTextureStage *pFVar16;
  uint local_res10;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  
  pHVar11 = wglGetCurrentContext();
  if (pHVar11 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog
              (&`private:_void___cdecl_FOpenGLDynamicRHI::SetupTexturesForDraw<TRefCountPtr<FOpenGLBoundShaderState>_>(TRefCountPtr<FOpenGLBoundShaderState>_const&___ptr64,int)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  uVar13 = 0;
  pFVar6 = param_1->Reference->LinkedProgram;
  iVar1 = (int)pFVar6->_padding_;
  if (-1 < iVar1) {
    local_res10 = 1;
    local_50 = 0;
    local_58 = 0;
    local_48 = 0;
    do {
      if ((((int)uVar13 < 0) || ((int)pFVar6->_padding_ <= (int)uVar13)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      plVar12 = &pFVar6->_padding_;
      if ((longlong *)pFVar6->_padding_ != (longlong *)0x0) {
        plVar12 = (longlong *)pFVar6->_padding_;
      }
      uVar14 = ~uVar13 >> 0x1f;
      uVar10 = uVar13;
      if ((int)uVar13 < 0) {
        uVar10 = uVar13 + 0x1f;
      }
      if ((*(uint *)((longlong)plVar12 + (longlong)((int)uVar10 >> 5) * 4) & local_res10) == 0) {
        uVar10 = 0;
        if ((int)uVar13 < (int)(this->ContextState)._padding_) {
          uVar10 = uVar14;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar15 = (this->ContextState)._padding_;
        if ((*(int *)(local_50 + 0x10 + lVar15) != 0) || (*(int *)(local_50 + 0x14 + lVar15) != 0))
        {
          CachedSetupTextureStageInner(this,uVar13,0,0,-1,1);
        }
      }
      else {
        uVar10 = 0;
        if ((int)uVar13 < (int)(this->PendingState)._padding_) {
          uVar10 = uVar14;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar16 = (FTextureStage *)((this->PendingState)._padding_ + local_50);
        uVar10 = 0;
        if ((int)uVar13 < (int)(this->ContextState)._padding_) {
          uVar10 = uVar14;
        }
        iVar2 = pFVar16->NumMips;
        iVar3 = pFVar16->LimitMip;
        uVar4 = pFVar16->Resource;
        uVar5 = pFVar16->Target;
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar15 = (this->ContextState)._padding_;
        if ((*(uint *)(local_50 + 0x10 + lVar15) != uVar5) ||
           (*(uint *)(local_50 + 0x14 + lVar15) != uVar4)) {
          CachedSetupTextureStageInner(this,uVar13,uVar5,uVar4,iVar3,iVar2);
        }
        if (pFVar16->Target == 0x8d65) {
          (*glBindSampler)(uVar13,0);
          uVar10 = 0;
          if ((int)uVar13 < (int)(this->ContextState)._padding_) {
            uVar10 = uVar14;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          *(undefined8 *)((this->ContextState)._padding_ + local_58 * 8) = 0;
          uVar10 = 0;
          if ((int)uVar13 < (int)(this->PendingState)._padding_) {
            uVar10 = uVar14;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          ApplyTextureStage(this,uVar13,pFVar16,
                            *(FOpenGLSamplerState **)((this->PendingState)._padding_ + local_58 * 8)
                           );
        }
        else {
          uVar10 = 0;
          if ((int)uVar13 < (int)(this->PendingState)._padding_) {
            uVar10 = uVar14;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar15 = *(longlong *)(local_48 + (this->PendingState)._padding_);
          uVar10 = 0;
          if ((int)uVar13 < (int)(this->ContextState)._padding_) {
            uVar10 = uVar14;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (*(longlong *)((this->ContextState)._padding_ + local_58 * 8) != lVar15) {
            if (lVar15 == 0) {
              uVar10 = 0;
            }
            else {
              uVar10 = *(uint *)(lVar15 + 0x18);
            }
            (*glBindSampler)(uVar13,uVar10);
            uVar10 = 0;
            if ((int)uVar13 < (int)(this->ContextState)._padding_) {
              uVar10 = uVar14;
            }
            if ((uVar10 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            *(longlong *)((this->ContextState)._padding_ + local_58 * 8) = lVar15;
          }
          if ((pFVar16->Texture != (FOpenGLTexture *)0x0) &&
             (pFVar16->Texture->bInStencilTextureMode != false)) {
            (*glTexParameteri)(pFVar16->Target,0x90ea,0x1902);
            (*glTexParameteri)(pFVar16->Target,0x8e42,0x1903);
            (*glTexParameteri)(pFVar16->Target,0x8e43,0);
            (*glTexParameteri)(pFVar16->Target,0x8e44,0);
            (*glTexParameteri)(pFVar16->Target,0x8e45,0);
            pFVar16->Texture->bInStencilTextureMode = false;
          }
        }
      }
      local_50 = local_50 + 0x28;
      local_48 = local_48 + 8;
      local_58 = local_58 + 1;
      uVar13 = uVar13 + 1;
      local_res10 = local_res10 << 1 | (uint)((int)local_res10 < 0);
    } while (local_58 <= iVar1);
  }
  uVar13 = iVar1 + 1;
  if ((int)uVar13 < param_2) {
    lVar15 = (longlong)(int)uVar13 * 0x28;
    do {
      uVar10 = 0;
      if ((int)uVar13 < (int)(this->ContextState)._padding_) {
        uVar10 = ~uVar13 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar7 = (this->ContextState)._padding_;
      if ((*(int *)(lVar15 + 0x10 + lVar7) != 0) || (*(int *)(lVar15 + 0x14 + lVar7) != 0)) {
        CachedSetupTextureStageInner(this,uVar13,0,0,-1,1);
      }
      uVar13 = uVar13 + 1;
      lVar15 = lVar15 + 0x28;
    } while ((int)uVar13 < param_2);
  }
  return;
}

// FOpenGLDynamicRHI @ 145be09d0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FOpenGLDynamicRHI * __thiscall FOpenGLDynamicRHI::FOpenGLDynamicRHI(FOpenGLDynamicRHI *this)

{
  TGlobalResource<TBoundShaderStateHistory<10000,1>,1> *this_00;
  TArray<FRHIUniformBuffer_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FOpenGLDynamicRHI *pFVar7;
  FRHICommandListBase *pFVar8;
  FPlatformOpenGLDevice *pFVar9;
  FPlatformOpenGLDevice *pFVar10;
  FPlatformOpenGLDevice *pFVar11;
  HGLRC pHVar12;
  longlong *plVar13;
  undefined8 uVar14;
  FUniformBufferStaticSlotRegistry *pFVar15;
  ForAnyElementType FVar16;
  FString local_f8;
  undefined4 local_e8;
  undefined1 local_e4;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined1 local_c8;
  undefined8 local_c4;
  undefined1 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 local_90;
  undefined8 local_8c;
  undefined1 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78 [12];
  undefined1 local_6c [12];
  undefined1 local_60 [12];
  undefined1 local_54 [20];
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = -1;
  this->_padding_ = -1;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 6) = 0;
  this->_padding_ = (longlong)&_vftable__for__IOpenGLDynamicRHI__;
  this->_padding_ = (longlong)&_vftable__for__IRHICommandContextPSOFallback__;
  FOpenGLRHIState::FOpenGLRHIState(&this->PendingState);
  this_00 = &this->BoundShaderStateHistory;
  (this->PointSamplerState).Reference = (FRHISamplerState *)0x0;
  (this->Viewports).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Viewports).ArrayNum = 0;
  (this->Viewports).ArrayMax = 0;
  this->bRevertToSharedContextAfterDrawingViewport = false;
  this->PrimitiveType = PT_Num;
  FRenderResource::FRenderResource((FRenderResource *)this_00);
  *(undefined ***)&this_00->field_0x0 = &___7__TBoundShaderStateHistory__0CHBA__00__6B_;
  memset(&(this->BoundShaderStateHistory).field_0x20,0,80000);
  *(undefined4 *)&(this->BoundShaderStateHistory).field_0x138a0 = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->BoundShaderStateHistory).field_0x138a8,4000);
  *(undefined ***)&this_00->field_0x0 =
       &___7__TGlobalResource_V__TBoundShaderStateHistory__0CHBA__00___00__6B_;
  if ((*(int *)&(this->BoundShaderStateHistory).field_0x18 != -1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderResource.h"
                         ,0xb9,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FOpenGLDynamicRHI *)(*pcVar4)();
    return pFVar7;
  }
  (this->BoundShaderStateHistory).field_0x1d = 1;
  bVar5 = IsInRenderingThread();
  if (bVar5) {
    pcVar4 = *(code **)(*(longlong *)&this_00->field_0x0 + 0x18);
    pFVar8 = FRenderResource::GetImmediateCommandList();
    (*pcVar4)(this_00,pFVar8);
  }
  else {
    BeginInitResource((FRenderResource *)this_00,(FRenderCommandPipe *)0x0);
  }
  pFVar11 = (FPlatformOpenGLDevice *)0x0;
  FOpenGLContextState::FOpenGLContextState(&this->ContextState);
  *(undefined8 *)&this->TextureMipLimits = 0;
  pTVar1 = &this->GlobalUniformBuffers;
  (this->GlobalUniformBuffers).ArrayNum = 0;
  (this->GlobalUniformBuffers).ArrayMax = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(this->TextureMipLimits).field_0x8 = 0;
  *(undefined8 *)&(this->TextureMipLimits).field_0x20 = 0;
  *(undefined4 *)&(this->TextureMipLimits).field_0x28 = 0;
  *(undefined4 *)&(this->TextureMipLimits).field_0x2c = 0x80;
  *(undefined4 *)&(this->TextureMipLimits).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TextureMipLimits).field_0x34 = 0;
  *(undefined8 *)&(this->TextureMipLimits).field_0x40 = 0;
  *(undefined4 *)&(this->TextureMipLimits).field_0x48 = 0;
  this->PlatformDevice = (FPlatformOpenGLDevice *)0x0;
  (this->Profiler).bEnabled = false;
  (this->Profiler).Current.Ptr = (FFrame *)0x0;
  pFVar9 = ::operator_new(0x10);
  pFVar10 = pFVar11;
  if (pFVar9 != (FPlatformOpenGLDevice *)0x0) {
    (pFVar9->RenderingContext).WindowHandle = (HWND__ *)0x0;
    (pFVar9->RenderingContext).DeviceContext = (HDC__ *)0x0;
    (pFVar9->RenderingContext).WindowHandle = (HWND__ *)0x0;
    (pFVar9->RenderingContext).DeviceContext = (HDC__ *)0x0;
    pFVar10 = pFVar9;
  }
  (this->Profiler).Pending.Tail = (TNode *)pFVar10;
  (this->Profiler).Pending.Head = (TNode *)pFVar10;
  (this->Profiler).QueryPool.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Profiler).QueryPool.ArrayNum = 0;
  (this->Profiler).QueryPool.ArrayMax = 0;
  (this->Profiler).ExternalGPUTime.bIsSet = false;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CustomPresentSection,4000);
  (this->CustomPresent).Reference = (FRHICustomPresent *)0x0;
  (this->GLLockTracker).OutstandingLocks.AllocatorInstance.SecondaryData =
       (ForElementType<FOpenGLDynamicRHI::FTextureLockTracker::FLockParams>)0x0;
  (this->GLLockTracker).OutstandingLocks.ArrayNum = 0;
  (this->GLLockTracker).OutstandingLocks.ArrayMax = 0x10;
  (this->KickHint).Syncs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KickHint).Syncs.ArrayNum = 0;
  (this->KickHint).Syncs.ArrayMax = 0;
  (this->KickHint).DrawCounter = 0;
  (this->KickHint).LastSeenFramebuffer = 0;
  (this->KickHint).RHI = this;
  if ((Singleton != (FOpenGLDynamicRHI *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLDevice.cpp"
                         ,0x48b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FOpenGLDynamicRHI *)(*pcVar4)();
    return pFVar7;
  }
  Singleton = this;
  bVar5 = IsInGameThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLDevice.cpp"
                         ,0x48f,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FOpenGLDynamicRHI *)(*pcVar4)();
    return pFVar7;
  }
  if ((GIsThreadedRendering != false) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!GIsThreadedRendering",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLDevice.cpp"
                         ,0x490,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FOpenGLDynamicRHI *)(*pcVar4)();
    return pFVar7;
  }
  GRHIGlobals.SupportsAsyncPipelinePrecompile = false;
  PlatformInitOpenGL();
  pFVar10 = ::operator_new(0x50);
  if (pFVar10 != (FPlatformOpenGLDevice *)0x0) {
    pFVar11 = FPlatformOpenGLDevice::FPlatformOpenGLDevice(pFVar10);
  }
  this->PlatformDevice = pFVar11;
  pHVar12 = wglGetCurrentContext();
  if (pHVar12 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  InitRHICapabilitiesForGL();
  if (GRunningUnderRenderDoc != false) {
    FDynamicRHI::EnableIdealGPUCaptureOptions(true);
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Singleton != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x4fb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FOpenGLDynamicRHI *)(*pcVar4)();
      return pFVar7;
    }
    plVar13 = (longlong *)
              (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                        (IConsoleManager::Singleton,L"OpenGL.UBODirectWrite",1);
    if (plVar13 != (longlong *)0x0) {
      lVar3 = *plVar13;
      local_e0 = 0;
      local_e8 = 0xe000000;
      local_e4 = 0;
      local_d8 = 0;
      local_d4 = 0xf000000;
      local_d0 = 0x1000000;
      uVar14 = (**(code **)(lVar3 + 0xa8))(plVar13,local_78,&local_e8);
      (**(code **)(lVar3 + 0xb0))(plVar13,&u_0,uVar14);
    }
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Singleton != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x4fb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FOpenGLDynamicRHI *)(*pcVar4)();
      return pFVar7;
    }
    plVar13 = (longlong *)
              (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                        (IConsoleManager::Singleton,L"OpenGL.UseStagingBuffer",1);
    if (plVar13 != (longlong *)0x0) {
      lVar3 = *plVar13;
      local_cc = 0xe000000;
      local_c8 = 0;
      local_c4 = 0;
      local_bc = 0;
      local_b8 = 0xf000000;
      local_b4 = 0x1000000;
      uVar14 = (**(code **)(lVar3 + 0xa8))(plVar13,local_6c,&local_cc);
      (**(code **)(lVar3 + 0xb0))(plVar13,&u_0,uVar14);
    }
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FOpenGLDynamicRHI *)(*pcVar4)();
    return pFVar7;
  }
  plVar13 = (longlong *)
            (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                      (IConsoleManager::Singleton,L"FX.AllowGPUSorting",1);
  if (plVar13 != (longlong *)0x0) {
    lVar3 = *plVar13;
    local_b0 = 0xe000000;
    local_ac = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 0xf000000;
    local_98 = 0x1000000;
    uVar14 = (**(code **)(lVar3 + 0xa8))(plVar13,local_60,&local_b0);
    (**(code **)(lVar3 + 0xb0))(plVar13,&u_0,uVar14);
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FOpenGLDynamicRHI *)(*pcVar4)();
    return pFVar7;
  }
  plVar13 = (longlong *)
            (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                      (IConsoleManager::Singleton,L"r.Occlusion.SingleRHIThreadStall",1);
  if (plVar13 != (longlong *)0x0) {
    local_94 = 0xe000000;
    local_90 = 0;
    local_8c = 0;
    local_84 = 0;
    local_80 = 0xf000000;
    local_7c = 0x1000000;
    ::FString::PrintfImpl(&local_f8,L"%d");
    lVar3 = *plVar13;
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_f8.Data.ArrayNum != 0) {
      FVar16.Data = local_f8.Data.AllocatorInstance.Data;
    }
    uVar14 = (**(code **)(lVar3 + 0xa8))(plVar13,local_54,&local_94);
    (**(code **)(lVar3 + 0xb0))(plVar13,FVar16.Data,uVar14);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  PrivateOpenGLDevicePtr = this;
  pFVar15 = FUniformBufferStaticSlotRegistry::Get();
  iVar2 = (pFVar15->SlotNames).ArrayNum;
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar2,&pTVar1->AllocatorInstance,&(this->GlobalUniformBuffers).ArrayNum,
                     &(this->GlobalUniformBuffers).ArrayMax);
  memset((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8,0,(longlong)iVar2 << 3);
  return this;
}

// operator() @ 145bebb00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FOpenGLDynamicRHI::RHIAsyncReallocateTexture2D'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  uint uVar1;
  uint uVar2;
  HGLRC pHVar3;
  uint uVar4;
  
  pHVar3 = wglGetCurrentContext();
  if (pHVar3 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  FOpenGLTexture::Initialize
            (*(FOpenGLTexture **)((longlong)this + 8),(FRHICommandListBase *)param_1);
  uVar1 = *(uint *)((longlong)this + 0x14);
  uVar2 = *(uint *)((longlong)this + 0x10);
  uVar4 = uVar1;
  if ((int)uVar2 < (int)uVar1) {
    uVar4 = uVar2;
  }
  FOpenGLTexture::CloneViaCopyImage
            (*(FOpenGLTexture **)((longlong)this + 8),*(FOpenGLTexture **)this,uVar4,uVar2 - uVar4,
             uVar1 - uVar4);
  LOCK();
  **(int **)((longlong)this + 0x18) = **(int **)((longlong)this + 0x18) + -1;
  UNLOCK();
  return;
}

// operator() @ 145bebbd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FOpenGLDynamicRHI::RHICreateSamplerState'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  HGLRC pHVar1;
  
  pHVar1 = wglGetCurrentContext();
  if (pHVar1 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  (*glGenSamplers)(1,(uint *)(*(longlong *)this + 0x18));
  (*glSamplerParameteri)
            (*(uint *)(*(longlong *)this + 0x18),0x2802,*(int *)(*(longlong *)this + 0x1c));
  (*glSamplerParameteri)
            (*(uint *)(*(longlong *)this + 0x18),0x2803,*(int *)(*(longlong *)this + 0x20));
  (*glSamplerParameteri)
            (*(uint *)(*(longlong *)this + 0x18),0x8072,*(int *)(*(longlong *)this + 0x24));
  (*glSamplerParameteri)
            (*(uint *)(*(longlong *)this + 0x18),0x8501,*(int *)(*(longlong *)this + 0x28));
  (*glSamplerParameteri)
            (*(uint *)(*(longlong *)this + 0x18),0x2801,*(int *)(*(longlong *)this + 0x30));
  (*glSamplerParameteri)
            (*(uint *)(*(longlong *)this + 0x18),0x2800,*(int *)(*(longlong *)this + 0x2c));
  if (FOpenGLBase::bSupportsTextureFilterAnisotropic != false) {
    (*glSamplerParameteri)
              (*(uint *)(*(longlong *)this + 0x18),0x84fe,*(int *)(*(longlong *)this + 0x34));
  }
  (*glSamplerParameteri)
            (*(uint *)(*(longlong *)this + 0x18),0x884c,*(int *)(*(longlong *)this + 0x38));
                    /* WARNING: Could not recover jumptable at 0x000145bebd20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*glSamplerParameteri)
            (*(uint *)(*(longlong *)this + 0x18),0x884d,*(int *)(*(longlong *)this + 0x3c));
  return;
}

// operator() @ 145bebd30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FOpenGLDynamicRHI::RHIMapStagingSurface_RenderThread'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  HGLRC pHVar4;
  FOpenGLTexture *this_00;
  uint *puVar5;
  longlong lVar6;
  void *pvVar7;
  FOpenGLTexture *pFVar8;
  uint local_res8 [2];
  
  pHVar4 = wglGetCurrentContext();
  if (pHVar4 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  this_00 = (FOpenGLTexture *)0x0;
  pFVar8 = this_00;
  if (*(char *)((longlong)&((FOpenGLTexture *)**(longlong **)this)->_padding_ + 2) == '\0') {
    pFVar8 = (FOpenGLTexture *)**(longlong **)this;
  }
  if (pFVar8 != (FOpenGLTexture *)0x0) {
    this_00 = (FOpenGLTexture *)(**(code **)(pFVar8->_padding_ + 0x48))(pFVar8);
    if (this_00 != (FOpenGLTexture *)0x0) goto LAB_145bebdee;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Texture",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLRenderTarget.cpp"
                     ,0x334,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_145bebdee:
  puVar5 = (uint *)(**(code **)(this_00->_padding_ + 0x20))(this_00);
  if ((*puVar5 >> 0x13 & 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumHasAnyFlags(Texture->GetDesc().Flags, ETextureCreateFlags::CPUReadback)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLRenderTarget.cpp"
                       ,0x335,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar6 = (**(code **)(this_00->_padding_ + 0x20))(this_00);
  **(undefined4 **)((longlong)this + 8) = *(undefined4 *)(lVar6 + 0x24);
  lVar6 = (**(code **)(this_00->_padding_ + 0x20))(this_00);
  **(undefined4 **)((longlong)this + 0x10) = *(undefined4 *)(lVar6 + 0x28);
  puVar1 = *(undefined8 **)((longlong)this + 0x18);
  pvVar7 = FOpenGLTexture::Lock(this_00,0,0,RLM_ReadOnly,local_res8);
  *puVar1 = pvVar7;
  return;
}

// operator() @ 145bebe90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FOpenGLDynamicRHI::RHIRead3DSurfaceFloatData'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  HGLRC pHVar4;
  longlong lVar5;
  FOpenGLTexture *this_00;
  uint uVar6;
  int iVar7;
  FOpenGLTexture *pFVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint local_res8 [2];
  uint local_res18 [2];
  int local_res20;
  
  pHVar4 = wglGetCurrentContext();
  if (pHVar4 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  lVar5 = (**(code **)(*(longlong *)**(undefined8 **)this + 0x20))();
  if ((*(char *)(lVar5 + 0x33) != '\n') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TextureRHI->GetFormat() == PF_FloatRGBA",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLRenderTarget.cpp"
                         ,0x3af,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar8 = (FOpenGLTexture *)0x0;
  this_00 = pFVar8;
  if ((longlong *)**(longlong **)this != (longlong *)0x0) {
    this_00 = (FOpenGLTexture *)(**(code **)(*(longlong *)**(longlong **)this + 0x48))();
  }
  piVar1 = *(int **)((longlong)this + 8);
  iVar9 = piVar1[3] - piVar1[1];
  iVar11 = piVar1[2] - *piVar1;
  uVar10 = (*(int **)((longlong)this + 0x10))[1] - **(int **)((longlong)this + 0x10);
  TArray<FFloat16Color,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (*(TArray<FFloat16Color,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x18),
             uVar10 * iVar9 * iVar11,Default);
  local_res18[0] = 0;
  (*glGenFramebuffers)(1,local_res18);
  (*glBindFramebuffer)(0x8ca8,local_res18[0]);
  local_res8[0] = 0;
  local_res20 = 0x400 - FOpenGL3::NextTextureName;
  if (local_res20 < 2) {
    lVar5 = (longlong)local_res20;
    memcpy(local_res8,FOpenGL3::TextureNamesCache + FOpenGL3::NextTextureName,lVar5 * 4);
    (*glGenTextures)(0x400,FOpenGL3::TextureNamesCache);
    iVar12 = 1 - local_res20;
    memcpy(local_res8 + lVar5,FOpenGL3::TextureNamesCache,(longlong)iVar12 << 2);
  }
  else {
    local_res8[0] = FOpenGL3::TextureNamesCache[FOpenGL3::NextTextureName];
    iVar12 = FOpenGL3::NextTextureName + 1;
  }
  FOpenGL3::NextTextureName = iVar12;
  (*glActiveTexture)(0x84c0);
  (*glBindTexture)(0x806f,local_res8[0]);
  (*glTexImage3D)(0x806f,0,0x881a,iVar11,iVar9,uVar10,0,0x1908,0x140b,(void *)0x0);
  if (uVar10 != 0) {
    do {
      iVar12 = **(int **)((longlong)this + 0x10);
      iVar7 = (int)pFVar8;
      FOpenGLTexture::TryRestoreGLResource(this_00);
      (*glFramebufferTextureLayer)(0x8ca8,0x8ce0,this_00->Resource,0,iVar12 + iVar7);
      uVar6 = 0x8ce0;
      if (local_res18[0] == 0) {
        uVar6 = 0x405;
      }
      (*glReadBuffer)(uVar6);
      (*glCopyTexSubImage3D)
                (0x806f,0,0,0,iVar7,**(int **)((longlong)this + 8),
                 (*(int **)((longlong)this + 8))[1],iVar11,iVar9);
      pFVar8 = (FOpenGLTexture *)(ulonglong)(iVar7 + 1U);
    } while (iVar7 + 1U < uVar10);
  }
  uVar10 = 0;
  (*glPixelStorei)(0xd05,1);
  (*glGetTexImage)(0x806f,0,0x1908,0x140b,(void *)**(undefined8 **)((longlong)this + 0x18));
  (*glPixelStorei)(0xd05,4);
  lVar5 = *(longlong *)((longlong)this + 0x20);
  if ((*(int *)(lVar5 + 0x14238) < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar5 = *(longlong *)(lVar5 + 0x14230);
  if (*(int *)(lVar5 + 0x10) == 0x806f) {
    uVar10 = *(uint *)(lVar5 + 0x14);
  }
  (*glBindTexture)(0x806f,uVar10);
  (*glActiveTexture)(*(int *)(*(longlong *)((longlong)this + 0x20) + 0x14638) + 0x84c0);
  (*glDeleteFramebuffers)(1,local_res18);
  (*glDeleteTextures)(1,local_res8);
  *(undefined4 *)(*(longlong *)((longlong)this + 0x20) + 0x143d0) = 0xffffffff;
  return;
}

// operator() @ 145bec280

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
`FOpenGLDynamicRHI::RHIReadSurfaceData'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  undefined8 *puVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_48;
  TIntRect<int>_u_0 local_38;
  FReadSurfaceDataFlags local_28;
  
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  local_38._s_0.Min.field0_0x0 = (TIntPoint<int>)**(TIntPoint<int>_u_0 **)((longlong)this + 0x10);
  local_38._s_0.Max.field0_0x0 =
       (TIntPoint<int>)(*(TIntPoint<int>_u_0 **)((longlong)this + 0x10))[1];
  puVar1 = *(undefined8 **)((longlong)this + 0x18);
  local_28._0_8_ = *puVar1;
  local_28._8_8_ = puVar1[1];
  local_28._16_8_ = puVar1[2];
  local_28.GPUIndex = *(uint *)(puVar1 + 3);
  FOpenGLDynamicRHI::ReadSurfaceDataRaw
            (*(FOpenGLDynamicRHI **)this,(FRHITexture *)**(undefined8 **)((longlong)this + 8),
             (TIntRect<int> *)&local_38._s_0,&local_48,&local_28);
  memcpy((void *)**(undefined8 **)((longlong)this + 0x20),local_48.AllocatorInstance.Data,
         (ulonglong)**(uint **)((longlong)this + 0x28) << 2);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 145bec320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
`FOpenGLDynamicRHI::RHIReadSurfaceData'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  ForAnyElementType *pFVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  HGLRC pHVar12;
  uint uVar13;
  uint uVar14;
  uint local_res8 [2];
  FOpenGLTexture *local_res18 [2];
  
  pHVar12 = wglGetCurrentContext();
  if (pHVar12 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if ((longlong *)**(longlong **)this == (longlong *)0x0) {
    local_res18[0] = (FOpenGLTexture *)0x0;
  }
  else {
    local_res18[0] = (FOpenGLTexture *)(**(code **)(*(longlong *)**(longlong **)this + 0x48))();
    if (local_res18[0] != (FOpenGLTexture *)0x0) {
      local_res8[0] = (uint)*(byte *)(*(longlong *)((longlong)this + 8) + 0x11);
      uVar10 = FOpenGLDynamicRHI::GetOpenGLFramebuffer
                         (*(FOpenGLDynamicRHI **)((longlong)this + 0x10),1,local_res18,(uint *)0x0,
                          local_res8,(FOpenGLTexture *)0x0,(FExclusiveDepthStencil)0x0,1);
      piVar6 = *(int **)((longlong)this + 0x18);
      pFVar7 = *(ForAnyElementType **)((longlong)this + 0x20);
      pFVar1 = pFVar7 + 1;
      iVar2 = piVar6[3];
      iVar3 = piVar6[1];
      iVar4 = piVar6[2];
      iVar5 = *piVar6;
      iVar11 = *(int *)&pFVar1->Data;
      uVar13 = (iVar2 - iVar3) * (iVar4 - iVar5);
      if (iVar11 < (int)uVar13) {
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,uVar13 - iVar11,pFVar7,(int *)pFVar1,
                   (int *)((longlong)&pFVar7[1].Data + 4));
      }
      else {
        if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
        }
        if ((int)uVar13 < iVar11) {
          uVar14 = iVar11 - uVar13;
          if (((int)(uVar14 | uVar13) < 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (uVar14 != 0) {
            iVar11 = (*(int *)&pFVar1->Data - uVar14) - uVar13;
            if (iVar11 != 0) {
              memmove(pFVar7->Data + (longlong)(int)uVar13 * 0x10,
                      pFVar7->Data + (longlong)(int)uVar13 * 0x10 + (longlong)(int)uVar14 * 0x10,
                      (longlong)iVar11 << 4);
            }
            *(uint *)&pFVar1->Data = *(int *)&pFVar1->Data - uVar14;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,pFVar7,*(int *)&pFVar1->Data,(int *)((longlong)&pFVar7[1].Data + 4));
          }
        }
      }
      (*glBindFramebuffer)(0x8ca8,uVar10);
      uVar13 = 0x8ce0;
      if (uVar10 == 0) {
        uVar13 = 0x405;
      }
      (*glReadBuffer)(uVar13);
      (*glPixelStorei)(0xd05,1);
      (*glReadPixels)(**(int **)((longlong)this + 0x18),(*(int **)((longlong)this + 0x18))[1],
                      iVar4 - iVar5,iVar2 - iVar3,0x1908,0x1406,
                      (void *)**(undefined8 **)((longlong)this + 0x20));
      (*glPixelStorei)(0xd05,4);
      *(undefined4 *)(*(longlong *)((longlong)this + 0x10) + 0x143d0) = 0xffffffff;
      return;
    }
  }
  bVar9 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1441928969191424778>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLRenderTarget.cpp"
                     ,0x30a,"Texture");
  if (!bVar9) {
    return;
  }
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

// operator() @ 145bec600

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
`FOpenGLDynamicRHI::RHIReadSurfaceFloatData'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  bool bVar7;
  HGLRC pHVar8;
  FOpenGLTexture *this_00;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint local_res8 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  FOpenGLTexture *local_38 [2];
  
  pHVar8 = wglGetCurrentContext();
  if (pHVar8 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if ((**(int **)this != 0) && ((int)GMaxRHIFeatureLevel < 3)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("FOpenGL::SupportsFloatReadSurface() && (ArrayIndex == 0 || GMaxRHIFeatureLevel >= ERHIFeatureLevel::SM5)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLRenderTarget.cpp"
                       ,0x361,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if ((longlong *)**(longlong **)((longlong)this + 8) == (longlong *)0x0) {
    this_00 = (FOpenGLTexture *)0x0;
  }
  else {
    this_00 = (FOpenGLTexture *)
              (**(code **)(*(longlong *)**(longlong **)((longlong)this + 8) + 0x48))();
  }
  local_38[0] = this_00;
  lVar9 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 8) + 0x20))();
  if (*(char *)(lVar9 + 0x33) != '\n') {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("TextureRHI->GetFormat() == PF_FloatRGBA",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLRenderTarget.cpp"
                       ,0x363,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  uVar1 = this_00->Target;
  uVar12 = **(uint **)((longlong)this + 0x10);
  iVar10 = 1;
  if (uVar1 == 0x9009) {
    iVar10 = 6;
  }
  uVar11 = iVar10 * **(int **)this + **(int **)((longlong)this + 0x18);
  local_res8[0] = 0;
  local_res18[0] = uVar12;
  local_res20[0] = uVar11;
  if (uVar1 == 0x9009) {
    (*glGenFramebuffers)(1,local_res8);
    (*glBindFramebuffer)(0x8ca8,local_res8[0]);
    FOpenGLTexture::TryRestoreGLResource(this_00);
    (*glFramebufferTextureLayer)(0x8ca8,0x8ce0,this_00->Resource,uVar12,uVar11);
  }
  else {
    local_res8[0] =
         FOpenGLDynamicRHI::GetOpenGLFramebuffer
                   (*(FOpenGLDynamicRHI **)((longlong)this + 0x20),1,local_38,local_res20,
                    local_res18,(FOpenGLTexture *)0x0,(FExclusiveDepthStencil)0x0,1);
  }
  piVar5 = *(int **)((longlong)this + 0x28);
  iVar10 = piVar5[3];
  iVar2 = piVar5[1];
  iVar3 = piVar5[2];
  iVar4 = *piVar5;
  TArray<FFloat16Color,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (*(TArray<FFloat16Color,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x30),
             (iVar10 - iVar2) * (iVar3 - iVar4),Default);
  (*glBindFramebuffer)(0x8ca8,local_res8[0]);
  uVar12 = 0x8ce0;
  if (local_res8[0] == 0) {
    uVar12 = 0x405;
  }
  (*glReadBuffer)(uVar12);
  (*glPixelStorei)(0xd05,1);
  (*glReadPixels)(**(int **)((longlong)this + 0x28),(*(int **)((longlong)this + 0x28))[1],
                  iVar3 - iVar4,iVar10 - iVar2,0x1908,0x140b,
                  (void *)**(undefined8 **)((longlong)this + 0x30));
  (*glPixelStorei)(0xd05,4);
  if (uVar1 == 0x9009) {
    (*glDeleteFramebuffers)(1,local_res8);
  }
  *(undefined4 *)(*(longlong *)((longlong)this + 0x20) + 0x143d0) = 0xffffffff;
  return;
}

// operator() @ 145bec8c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
`FOpenGLDynamicRHI::RHIReplaceResources'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  TOpenGLBuffer<FOpenGLBaseBuffer> *this_00;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  HGLRC pHVar7;
  byte bVar8;
  ulong64 uVar9;
  undefined8 *puVar10;
  undefined1 local_res8 [8];
  uint uStackX_1c;
  FLLMPauseScope local_58;
  FLLMPauseScope local_48;
  
  iVar2 = *(int *)((longlong)this + 8);
  puVar10 = *(undefined8 **)this;
  puVar1 = puVar10 + (longlong)iVar2 * 3;
  do {
    if (*(int *)((longlong)this + 8) != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FRHIResourceReplaceInfo_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (puVar10 == puVar1) {
      return;
    }
    if (*(char *)(puVar10 + 2) == '\0') {
      lVar3 = puVar10[1];
      this_00 = (TOpenGLBuffer<FOpenGLBaseBuffer> *)*puVar10;
      if (lVar3 == 0) {
        pHVar7 = wglGetCurrentContext();
        if (pHVar7 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
          IsInRHIThread();
          IsInRenderingThread();
          IsInGameThread();
          UE::Logging::Private::BasicFatalLog
                    (&`public:_void___cdecl_TOpenGLBuffer<FOpenGLBaseBuffer>::ReleaseOwnership(void)___ptr64'
                      ::__l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
        }
        if (*(int *)((longlong)&this_00->_padding_ + 4) != 0) {
          if (this_00->LockBuffer != (void *)0x0) {
            if (this_00->bLockBufferWasAllocated == 0) {
              if (2 < (byte)LogRHI._0_1_) {
                UE::Logging::Private::BasicLog<3>
                          (&`public:_void___cdecl_TOpenGLBuffer<FOpenGLBaseBuffer>::ReleaseOwnership(void)___ptr64'
                            ::__l26::LOG_Static,(FLogCategoryBase *)&LogRHI);
              }
            }
            else {
              FMemory::Free(this_00->LockBuffer);
            }
          }
          FOpenGLDynamicRHI::OnBufferDeletion
                    (FOpenGLDynamicRHI::Singleton,(uint)this_00->_padding_,
                     *(uint *)((longlong)&this_00->_padding_ + 4));
          (*glDeleteBuffers)(1,(uint *)((longlong)&this_00->_padding_ + 4));
          uVar9 = -(ulonglong)(uint)this_00->_padding_;
          *(undefined4 *)((longlong)&this_00->_padding_ + 4) = 0;
          this_00->LockBuffer = (void *)0x0;
          FLLMPauseScope::FLLMPauseScope(&local_48,GraphicsPlatform,false,uVar9,Platform,None);
          FLLMPauseScope::FLLMPauseScope(&local_58,Meshes,false,uVar9,Default,None);
          UE::RHICore::UpdateGlobalBufferStats
                    ((FRHIBufferDesc *)&this_00->_padding_,-(ulonglong)(uint)this_00->_padding_);
          FLLMPauseScope::~FLLMPauseScope(&local_58);
          FLLMPauseScope::~FLLMPauseScope(&local_48);
          if (this_00->CachedBuffer != (void *)0x0) {
            FMemory::Free(this_00->CachedBuffer);
            this_00->CachedBuffer = (void *)0x0;
            this_00->CachedBufferSize = 0;
          }
        }
        uStackX_1c = uStackX_1c & 0xffffff00;
        this_00->_padding_ = (ulonglong)uStackX_1c << 0x20;
        bVar8 = (byte)GNumExplicitGPUsForRendering;
        this_00->_padding_ = 0;
        *(int *)((longlong)&this_00->_padding_ + 4) = (1 << (bVar8 & 0x1f)) + -1;
        *(undefined4 *)&this_00->_padding_ = 0x100000;
      }
      else {
        if ((*(longlong *)(lVar3 + 0xe8) != 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("!Src->HasLinkedViews()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLDrv.cpp"
                               ,0x33a,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pHVar7 = wglGetCurrentContext();
        if (pHVar7 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
          IsInRHIThread();
          IsInRenderingThread();
          IsInGameThread();
          UE::Logging::Private::BasicFatalLog
                    ((FStaticBasicLogRecord *)
                     &`public:_void___cdecl_TOpenGLBuffer<FOpenGLBaseBuffer>::TakeOwnership(TOpenGLBuffer<class_FOpenGLBaseBuffer>&___ptr64)___ptr64'
                      ::__l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
        }
        if (((this_00->bIsLocked != 0) || ((*(byte *)(lVar3 + 0xf8) & 1) != 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("!bIsLocked && !Other.bIsLocked",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLResources.h"
                               ,0x1b6,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        TOpenGLBuffer<FOpenGLBaseBuffer>::ReleaseOwnership(this_00);
        this_00->_padding_ = *(longlong *)(lVar3 + 0x20);
        *(undefined4 *)&this_00->_padding_ = *(undefined4 *)(lVar3 + 0xd8);
        *(undefined4 *)((longlong)&this_00->_padding_ + 4) = *(undefined4 *)(lVar3 + 0xdc);
        *(undefined4 *)&this_00->_padding_ = *(undefined4 *)(lVar3 + 0xe0);
        *(undefined4 *)((longlong)&this_00->_padding_ + 4) = *(undefined4 *)(lVar3 + 0xe4);
        *(undefined4 *)&this_00->_padding_ = *(undefined4 *)(lVar3 + 0xf0);
        *(undefined4 *)((longlong)&this_00->_padding_ + 4) = *(undefined4 *)(lVar3 + 0xf4);
        this_00->CachedBuffer = *(void **)(lVar3 + 0x110);
        this_00->CachedBufferSize = *(uint *)(lVar3 + 0x118);
        *(undefined8 *)(lVar3 + 0xf0) = 0;
        *(undefined8 *)(lVar3 + 0x110) = 0;
        *(undefined4 *)(lVar3 + 0x118) = 0;
      }
      for (puVar4 = (undefined8 *)this_00->_padding_; puVar4 != (undefined8 *)0x0;
          puVar4 = (undefined8 *)puVar4[1]) {
        (**(code **)*puVar4)(puVar4);
      }
    }
    else {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLDrv.cpp"
                         ,0x32f,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    puVar10 = puVar10 + 3;
  } while( true );
}

// operator() @ 145beccc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FOpenGLDynamicRHI::RHIUnmapStagingSurface_RenderThread'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  code *pcVar1;
  bool bVar2;
  HGLRC pHVar3;
  FOpenGLTexture *this_00;
  FOpenGLTexture *pFVar4;
  
  pHVar3 = wglGetCurrentContext();
  if (pHVar3 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  this_00 = (FOpenGLTexture *)0x0;
  pFVar4 = this_00;
  if (*(char *)((longlong)&(*(FOpenGLTexture **)this)->_padding_ + 2) == '\0') {
    pFVar4 = *(FOpenGLTexture **)this;
  }
  if (pFVar4 != (FOpenGLTexture *)0x0) {
    this_00 = (FOpenGLTexture *)(**(code **)(pFVar4->_padding_ + 0x48))();
    if (this_00 != (FOpenGLTexture *)0x0) goto LAB_145becd82;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Texture",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLRenderTarget.cpp"
                     ,0x347,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_145becd82:
  FOpenGLTexture::Unlock(this_00,0,0);
  return;
}

// operator() @ 145becda0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
`FOpenGLDynamicRHI::RHIUpdateTexture2D'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  FOpenGLDynamicRHI *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  HGLRC pHVar8;
  FOpenGLTexture *this_01;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 auStackY_518 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_518;
  pHVar8 = wglGetCurrentContext();
  if (pHVar8 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (*(longlong **)((longlong)this + 8) == (longlong *)0x0) {
    this_01 = (FOpenGLTexture *)0x0;
  }
  else {
    this_01 = (FOpenGLTexture *)(**(code **)(**(longlong **)((longlong)this + 8) + 0x48))();
  }
  lVar9 = (**(code **)(**(longlong **)((longlong)this + 8) + 0x20))();
  this_00 = *(FOpenGLDynamicRHI **)this;
  bVar1 = *(byte *)(lVar9 + 0x33);
  lVar9 = (**(code **)(this_01->_padding_ + 0x20))(this_01);
  bVar2 = *(byte *)(lVar9 + 0x30);
  FOpenGLTexture::TryRestoreGLResource(this_01);
  uVar7 = this_01->Resource;
  uVar3 = this_01->Target;
  if ((FOpenGLBase::MaxCombinedTextureImageUnits == -1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("MaxCombinedTextureImageUnits != -1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBase.h"
                         ,0x7c,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar10 = FOpenGLBase::MaxCombinedTextureImageUnits - 1;
  uVar6 = 0;
  if ((int)uVar10 < (int)(this_00->ContextState)._padding_) {
    uVar6 = ~uVar10 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar9 = (this_00->ContextState)._padding_;
  if ((*(uint *)(lVar9 + 0x10 + (longlong)(int)uVar10 * 0x28) != uVar3) ||
     (*(uint *)(lVar9 + 0x14 + (longlong)(int)uVar10 * 0x28) != uVar7)) {
    FOpenGLDynamicRHI::CachedSetupTextureStageInner(this_00,uVar10,uVar3,uVar7,0,(uint)bVar2);
  }
  lVar9 = *(longlong *)this;
  pHVar8 = wglGetCurrentContext();
  if (pHVar8 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog
              (&`public:_void___cdecl_FOpenGLDynamicRHI::CachedBindBuffer(unsigned_int,unsigned_int)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (*(int *)(lVar9 + 0x14674) != 0) {
    (*glBindBuffer)(0x88ec,0);
    *(undefined4 *)(lVar9 + 0x14674) = 0;
  }
  (*glPixelStorei)(0xcf2,*(uint *)((longlong)this + 0x2c) / (uint)GPixelFormats[bVar1].BlockBytes);
  (*glPixelStorei)(0xcf5,1);
  if (GOpenGLTextureFormats[bVar1].bCompressed == false) {
    (*glTexSubImage2D)(this_01->Target,*(int *)((longlong)this + 0x10),
                       *(int *)((longlong)this + 0x14),*(int *)((longlong)this + 0x18),
                       *(int *)((longlong)this + 0x24),*(int *)((longlong)this + 0x28),
                       GOpenGLTextureFormats[bVar1].Format,GOpenGLTextureFormats[bVar1].Type,
                       *(void **)((longlong)this + 0x30));
    uVar7 = (*glGetError)();
    if (uVar7 == 0) goto LAB_145bed21e;
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_158,"",0,Yes);
    local_278._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_278,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
               ,0x53,Yes);
    FGenericPlatformMisc::LowLevelOutputDebugStringf(L"(%s:%d) GL_CHECK Failed \'%s\'! %d (%x)\n");
    if ((void *)local_278._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_278._padding_);
    }
    if ((void *)local_158._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_158._padding_);
    }
    iVar11 = 0x6a0;
  }
  else {
    (*glCompressedTexSubImage2D)
              (this_01->Target,*(int *)((longlong)this + 0x10),*(int *)((longlong)this + 0x14),
               *(int *)((longlong)this + 0x18),*(int *)((longlong)this + 0x24),
               *(int *)((longlong)this + 0x28),GOpenGLTextureFormats[bVar1].Format,
               ((uint)(*(int *)((longlong)this + 0x28) + -1 + GPixelFormats[bVar1].BlockSizeY) /
               (uint)GPixelFormats[bVar1].BlockSizeY) * *(int *)((longlong)this + 0x2c),
               *(void **)((longlong)this + 0x30));
    uVar7 = (*glGetError)();
    if (uVar7 == 0) goto LAB_145bed21e;
    local_398._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_398,"",0,Yes);
    local_4b8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_4b8,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
               ,0x53,Yes);
    FGenericPlatformMisc::LowLevelOutputDebugStringf(L"(%s:%d) GL_CHECK Failed \'%s\'! %d (%x)\n");
    if ((void *)local_4b8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_4b8._padding_);
    }
    if ((void *)local_398._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_398._padding_);
    }
    iVar11 = 0x694;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("!Err",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                     ,iVar11,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_145bed21e:
  (*glPixelStorei)(0xcf5,4);
  (*glPixelStorei)(0xcf2,0);
  if (*(char *)((longlong)this + 0x38) != '\0') {
    FMemory::Free(*(void **)((longlong)this + 0x30));
  }
  return;
}

// operator() @ 145bed290

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
`FOpenGLDynamicRHI::RHIUpdateTexture3D'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  FOpenGLDynamicRHI *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  HGLRC pHVar7;
  FOpenGLTexture *this_01;
  longlong lVar8;
  ulonglong *puVar9;
  uint uVar10;
  
  pHVar7 = wglGetCurrentContext();
  if (pHVar7 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (*(longlong **)((longlong)this + 8) == (longlong *)0x0) {
    this_01 = (FOpenGLTexture *)0x0;
  }
  else {
    this_01 = (FOpenGLTexture *)(**(code **)(**(longlong **)((longlong)this + 8) + 0x48))();
  }
  this_00 = *(FOpenGLDynamicRHI **)this;
  lVar8 = (**(code **)(this_01->_padding_ + 0x20))(this_01);
  bVar1 = *(byte *)(lVar8 + 0x30);
  FOpenGLTexture::TryRestoreGLResource(this_01);
  uVar2 = this_01->Resource;
  uVar3 = this_01->Target;
  if (FOpenGLBase::MaxCombinedTextureImageUnits == -1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("MaxCombinedTextureImageUnits != -1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBase.h"
                       ,0x7c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar10 = FOpenGLBase::MaxCombinedTextureImageUnits - 1;
  uVar6 = 0;
  if ((int)uVar10 < (int)(this_00->ContextState)._padding_) {
    uVar6 = ~uVar10 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar8 = (this_00->ContextState)._padding_;
  if ((*(uint *)(lVar8 + 0x10 + (longlong)(int)uVar10 * 0x28) != uVar3) ||
     (*(uint *)(lVar8 + 0x14 + (longlong)(int)uVar10 * 0x28) != uVar2)) {
    FOpenGLDynamicRHI::CachedSetupTextureStageInner(this_00,uVar10,uVar3,uVar2,0,(uint)bVar1);
  }
  lVar8 = *(longlong *)this;
  pHVar7 = wglGetCurrentContext();
  if (pHVar7 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog
              (&`public:_void___cdecl_FOpenGLDynamicRHI::CachedBindBuffer(unsigned_int,unsigned_int)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (*(int *)(lVar8 + 0x14674) != 0) {
    (*glBindBuffer)(0x88ec,0);
    *(undefined4 *)(lVar8 + 0x14674) = 0;
  }
  lVar8 = (**(code **)(this_01->_padding_ + 0x20))(this_01);
  bVar1 = *(byte *)(lVar8 + 0x33);
  if (*(int *)((longlong)this + 0x20) != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("UpdateRegion.SrcX == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                       ,0x6ce,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (*(int *)((longlong)this + 0x24) != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("UpdateRegion.SrcY == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                       ,0x6cf,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (*(int *)((longlong)this + 0x28) != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("UpdateRegion.SrcZ == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                       ,0x6d0,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  (*glPixelStorei)(0xcf5,1);
  puVar9 = (ulonglong *)(**(code **)(this_01->_padding_ + 0x20))(this_01);
  if (GOpenGLTextureFormats[bVar1].bCompressed == false) {
    (*glPixelStorei)(0xcf2,*(uint *)((longlong)this + 0x2c) / (uint)GPixelFormats[bVar1].BlockSizeX)
    ;
    (*glPixelStorei)(0x806e,*(uint *)((longlong)this + 0x30) / (uint)GPixelFormats[bVar1].BlockSizeY
                    );
    (*glTexSubImage3D)(this_01->Target,*(int *)((longlong)this + 0x10),
                       *(int *)((longlong)this + 0x14),*(int *)((longlong)this + 0x18),
                       *(int *)((longlong)this + 0x1c),*(int *)((longlong)this + 0x2c),
                       *(int *)((longlong)this + 0x30),*(int *)((longlong)this + 0x34),
                       GOpenGLTextureFormats[bVar1].Format,GOpenGLTextureFormats[bVar1].Type,
                       *(void **)((longlong)this + 0x40));
  }
  else {
    (*glCompressedTexSubImage3D)
              (this_01->Target,*(int *)((longlong)this + 0x10),*(int *)((longlong)this + 0x14),
               *(int *)((longlong)this + 0x18),*(int *)((longlong)this + 0x1c),
               *(int *)((longlong)this + 0x2c),*(int *)((longlong)this + 0x30),
               *(int *)((longlong)this + 0x34),
               *(uint *)((longlong)GOpenGLTextureFormats[bVar1].InternalFormat +
                        (ulonglong)(-(uint)((*puVar9 & 0x10) != 0) & 4)),
               *(int *)((longlong)this + 0x34) * *(int *)((longlong)this + 0x3c),
               *(void **)((longlong)this + 0x40));
  }
  (*glPixelStorei)(0xcf5,4);
  (*glPixelStorei)(0x806e,0);
  (*glPixelStorei)(0xcf2,0);
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  return;
}

// operator() @ 145bedee0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FOpenGLDynamicRHI::RHIUpdateUniformBuffer'::__l16::<lambda_1>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  longlong lVar1;
  FRHIResource *this_00;
  FRHIResource *this_01;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  UpdateUniformBufferContents
            (*(FOpenGLUniformBuffer **)this,*(void **)((longlong)this + 0x18),
             *(uint *)((longlong)this + 0x20));
  uVar5 = 0;
  if (0 < *(int *)((longlong)this + 0x10)) {
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)this;
      this_00 = *(FRHIResource **)(lVar6 + *(longlong *)((longlong)this + 8));
      uVar4 = 0;
      if ((int)uVar5 < *(int *)(lVar1 + 0x38)) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)(lVar1 + 0x30);
      this_01 = *(FRHIResource **)(lVar6 + lVar1);
      if (this_01 != this_00) {
        *(FRHIResource **)(lVar6 + lVar1) = this_00;
        if (this_00 != (FRHIResource *)0x0) {
          FRHIResource::AddRef(this_00);
        }
        if (this_01 != (FRHIResource *)0x0) {
          FRHIResource::Release(this_01);
        }
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < *(int *)((longlong)this + 0x10));
  }
  *(undefined4 *)(*(longlong *)this + 0x68) = *(undefined4 *)((longlong)this + 0x24);
  return;
}

// operator() @ 145bee100

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
`FOpenGLDynamicRHI::RHICreateUniformBuffer'::__l49::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  HGLRC pHVar1;
  
  pHVar1 = wglGetCurrentContext();
  if (pHVar1 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  FOpenGLDynamicRHI::CachedBindUniformBuffer(FOpenGLDynamicRHI::Singleton,*(uint *)this);
  return;
}

// operator() @ 145bee1a0

void __thiscall
`FOpenGLDynamicRHI::InitializeGLTextureInternal'::__l92::<lambda_1>::operator()
          (void *this,void *param_1,
          TFunctionRef<bool___cdecl(unsigned_int,UE::Math::TIntVector3<unsigned_int>,unsigned_int,unsigned_int,void_const_*,unsigned___int64)>
          *param_2)

{
  EPixelFormat EVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  ulong64 uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  FRHITextureDesc *pFVar14;
  ulong64 local_res8;
  uint local_res20 [2];
  int local_88 [2];
  int *local_80;
  int *local_78;
  int *local_70;
  ulong64 local_68;
  longlong local_60;
  longlong local_58;
  int local_48;
  int local_44;
  int local_40;
  
  (*glPixelStorei)(0xcf5,1);
  pFVar14 = *(FRHITextureDesc **)this;
  uVar12 = 0;
  lVar10 = (ulonglong)pFVar14->Format * 0x30;
  local_58 = lVar10;
  if (pFVar14->ArraySize != 0) {
    do {
      uVar13 = 0;
      while( true ) {
        uVar11 = 0;
        if ((pFVar14->Dimension == TextureCube) ||
           (bVar2 = false, pFVar14->Dimension == TextureCubeArray)) {
          bVar2 = true;
        }
        uVar4 = 1;
        if (bVar2) {
          uVar4 = 6;
        }
        if (uVar4 <= uVar13) break;
        if (pFVar14->NumMips != '\0') {
          local_80 = (int *)((longlong)&GPixelFormats[0].BlockSizeX + lVar10);
          local_78 = (int *)((longlong)&GPixelFormats[0].BlockSizeY + lVar10);
          local_70 = (int *)((longlong)&GPixelFormats[0].BlockSizeZ + lVar10);
          do {
            local_res8 = 0;
            uVar5 = UE::RHITextureUtils::CalculateSubresourceOffset
                              (pFVar14,uVar13,uVar12,uVar11,(ulong64 *)local_res20,&local_res8);
            EVar1 = pFVar14->Format;
            bVar6 = (byte)uVar11;
            uVar7 = (uint)(pFVar14->Extent).field0_0x0._s_0.X >> (bVar6 & 0x1f);
            uVar4 = 1;
            if (1 < uVar7) {
              uVar4 = uVar7;
            }
            uVar8 = (uint)(pFVar14->Extent).field0_0x0._s_0.Y >> (bVar6 & 0x1f);
            uVar7 = 1;
            if (1 < uVar8) {
              uVar7 = uVar8;
            }
            uVar9 = (uint)(pFVar14->Depth >> (bVar6 & 0x1f));
            uVar8 = 1;
            if (1 < uVar9) {
              uVar8 = uVar9;
            }
            uVar8 = ((uVar8 - 1) + GPixelFormats[EVar1].BlockSizeZ) /
                    (uint)GPixelFormats[EVar1].BlockSizeZ;
            local_48 = (int)(CONCAT44(0 >> (bVar6 & 0x1f),
                                      (uVar4 - 1) + GPixelFormats[EVar1].BlockSizeX) /
                            (ulonglong)(uint)GPixelFormats[EVar1].BlockSizeX);
            if (local_48 == 0) {
              local_48 = 1;
            }
            local_48 = local_48 * *local_80;
            local_44 = (int)(CONCAT44(0 >> (bVar6 & 0x1f),
                                      (uVar7 - 1) + GPixelFormats[EVar1].BlockSizeY) /
                            (ulonglong)(uint)GPixelFormats[EVar1].BlockSizeY);
            if (local_44 == 0) {
              local_44 = 1;
            }
            local_44 = local_44 * *local_78;
            if (uVar8 == 0) {
              uVar8 = 1;
            }
            local_40 = uVar8 * *local_70;
            local_88[0] = **(int **)((longlong)this + 8);
            if (local_88[0] == 0x8513) {
              local_88[0] = uVar13 + 0x8515;
            }
            local_68 = local_res8;
            local_60 = uVar5 + (longlong)param_1;
            local_res8 = CONCAT44(local_res8._4_4_,uVar12);
            local_res20[0] = uVar11;
            cVar3 = (**(code **)param_2)
                              (*(undefined8 *)&param_2->field_0x8,local_88,&local_48,local_res20,
                               &local_res8,&local_60,&local_68);
            if (cVar3 == '\0') goto LAB_145bee44c;
            pFVar14 = *(FRHITextureDesc **)this;
            uVar11 = uVar11 + 1;
            lVar10 = local_58;
          } while (uVar11 < pFVar14->NumMips);
        }
        uVar13 = uVar13 + 1;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < pFVar14->ArraySize);
  }
LAB_145bee44c:
                    /* WARNING: Could not recover jumptable at 0x000145bee467. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*glPixelStorei)(0xcf5,4);
  return;
}

// operator() @ 145bee700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`FOpenGLDynamicRHI::InitializeGLTextureInternal'::__l105::<lambda_2>::operator()
          (void *this,uint param_1,TIntVector3<unsigned_int> *param_2,uint param_3,uint param_4,
          void *param_5,uint param_6)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  undefined1 auStackY_4f8 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_388;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_4f8;
  lVar2 = *(longlong *)this;
  uVar6 = (param_2->field0_0x0)._s_0.Y;
  uVar1 = (param_2->field0_0x0)._s_0.X;
  if (*(char *)(lVar2 + 0x10) == '\0') {
    (*glTexSubImage2D)(param_1,param_3,0,0,uVar1,uVar6,*(uint *)(lVar2 + 8),*(uint *)(lVar2 + 0xc),
                       param_5);
    uVar6 = (*glGetError)();
    if (uVar6 != 0) {
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,"",0,Yes);
      local_268._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_268,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                 ,0x53,Yes);
      FGenericPlatformMisc::LowLevelOutputDebugStringf(L"(%s:%d) GL_CHECK Failed \'%s\'! %d (%x)\n")
      ;
      if ((void *)local_268._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_268._padding_);
      }
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Err",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                         ,0x2e4,L"");
      if (bVar4) goto code_r0x000145bee952;
    }
  }
  else {
    (*glCompressedTexSubImage2D)
              (param_1,param_3,0,0,uVar1,uVar6,*(uint *)(lVar2 + 8),param_6,param_5);
    uVar6 = (*glGetError)();
    if (uVar6 != 0) {
      local_388._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_388,"",0,Yes);
      local_4a8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_4a8,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                 ,0x53,Yes);
      FGenericPlatformMisc::LowLevelOutputDebugStringf(L"(%s:%d) GL_CHECK Failed \'%s\'! %d (%x)\n")
      ;
      if ((void *)local_4a8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_4a8._padding_);
      }
      if ((void *)local_388._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_388._padding_);
      }
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Err",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                         ,0x2d7,L"");
      if (bVar4) {
code_r0x000145bee952:
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
  }
  return true;
}

// operator() @ 145bee980

void __thiscall
`FOpenGLDynamicRHI::RHIUnlockTexture'::__l14::<lambda_2>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *_Dst;
  uint local_res8 [2];
  
  local_res8[0] = 0;
  _Dst = FOpenGLTexture::Lock
                   (*(FOpenGLTexture **)((longlong)this + 0x30),*(uint *)((longlong)this + 0x38),
                    *(uint *)((longlong)this + 0x3c),RLM_WriteOnly,local_res8);
  if (local_res8[0] != *(uint *)((longlong)this + 0x24)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DestStride == Params.Stride",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                       ,0x81e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  memcpy(_Dst,*(void **)((longlong)this + 0x10),(ulonglong)*(uint *)((longlong)this + 0x20));
  FMemory::Free(*(void **)((longlong)this + 0x10));
  FOpenGLTexture::Unlock
            (*(FOpenGLTexture **)((longlong)this + 0x30),*(uint *)((longlong)this + 0x38),
             *(uint *)((longlong)this + 0x3c));
  return;
}

// operator() @ 145beea20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`FOpenGLDynamicRHI::InitializeGLTextureInternal'::__l109::<lambda_3>::operator()
          (void *this,uint param_1,TIntVector3<unsigned_int> *param_2,uint param_3,uint param_4,
          void *param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  undefined1 auStackY_508 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_388;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_508;
  lVar3 = *(longlong *)this;
  uVar7 = (param_2->field0_0x0)._s_0.Z;
  uVar1 = (param_2->field0_0x0)._s_0.Y;
  uVar2 = (param_2->field0_0x0)._s_0.X;
  if (*(char *)(lVar3 + 0x10) == '\0') {
    (*glTexSubImage3D)(param_1,param_3,0,0,param_4,uVar2,uVar1,uVar7,*(uint *)(lVar3 + 8),
                       *(uint *)(lVar3 + 0xc),param_5);
    uVar7 = (*glGetError)();
    if (uVar7 != 0) {
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,"",0,Yes);
      local_268._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_268,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                 ,0x53,Yes);
      FGenericPlatformMisc::LowLevelOutputDebugStringf(L"(%s:%d) GL_CHECK Failed \'%s\'! %d (%x)\n")
      ;
      if ((void *)local_268._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_268._padding_);
      }
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Err",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                         ,0x317,L"");
      if (bVar5) goto code_r0x000145beec9a;
    }
  }
  else {
    (*glCompressedTexSubImage3D)
              (param_1,param_3,0,0,param_4,uVar2,uVar1,uVar7,*(uint *)(lVar3 + 8),param_6,param_5);
    uVar7 = (*glGetError)();
    if (uVar7 != 0) {
      local_388._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_388,"",0,Yes);
      local_4a8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_4a8,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                 ,0x53,Yes);
      FGenericPlatformMisc::LowLevelOutputDebugStringf(L"(%s:%d) GL_CHECK Failed \'%s\'! %d (%x)\n")
      ;
      if ((void *)local_4a8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_4a8._padding_);
      }
      if ((void *)local_388._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_388._padding_);
      }
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Err",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                         ,0x30a,L"");
      if (bVar5) {
code_r0x000145beec9a:
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
  }
  return true;
}

// ApplyTextureStage @ 145bf1ea0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::ApplyTextureStage
          (FOpenGLDynamicRHI *this,int param_1,FTextureStage *param_2,FOpenGLSamplerState *param_3)

{
  uint uVar1;
  FOpenGLTexture *pFVar2;
  HGLRC pHVar3;
  int iVar4;
  
  uVar1 = param_2->Target;
  pHVar3 = wglGetCurrentContext();
  if (pHVar3 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog
              (&`private:_void___cdecl_FOpenGLDynamicRHI::ApplyTextureStage(int,FTextureStage_const&___ptr64,FOpenGLSamplerState*___ptr64)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  pFVar2 = param_2->Texture;
  if ((pFVar2 != (FOpenGLTexture *)0x0) && (pFVar2->SamplerState == param_3)) {
    return;
  }
  if ((this->ContextState).ActiveTexture != param_1) {
    (*glActiveTexture)(param_1 + 0x84c0);
    (this->ContextState).ActiveTexture = param_1;
  }
  iVar4 = (param_3->Data).WrapT;
  (*glTexParameteri)(uVar1,0x2802,(param_3->Data).WrapS);
  (*glTexParameteri)(uVar1,0x2803,iVar4);
  (*glTexParameteri)(uVar1,0x8072,(param_3->Data).WrapR);
  (*glTexParameteri)(uVar1,0x8501,(param_3->Data).LODBias);
  iVar4 = (param_3->Data).MinFilter;
  if (param_2->bHasMips != false) goto LAB_145bf1fd3;
  if (iVar4 == 0x2700) {
LAB_145bf1fcd:
    iVar4 = 0x2600;
  }
  else {
    if (iVar4 != 0x2701) {
      if (iVar4 == 0x2702) goto LAB_145bf1fcd;
      if (iVar4 != 0x2703) goto LAB_145bf1fd3;
    }
    iVar4 = 0x2601;
  }
LAB_145bf1fd3:
  if ((OpenGLConsoleVariables::GOpenGLForceBilinear != 0) && (iVar4 == 0x2703)) {
    iVar4 = 0x2701;
  }
  (*glTexParameteri)(uVar1,0x2801,iVar4);
  (*glTexParameteri)(uVar1,0x2800,(param_3->Data).MagFilter);
  if (FOpenGLBase::bSupportsTextureFilterAnisotropic != false) {
    iVar4 = (param_3->Data).MaxAnisotropy;
    if (iVar4 < 1) {
      iVar4 = 1;
    }
    (*glTexParameteri)(uVar1,0x84fe,iVar4);
  }
  (*glTexParameteri)(uVar1,0x884c,(param_3->Data).CompareMode);
  (*glTexParameteri)(uVar1,0x884d,(param_3->Data).CompareFunc);
  if (pFVar2 != (FOpenGLTexture *)0x0) {
    param_2->Texture->SamplerState = param_3;
  }
  return;
}

// AsyncReallocateTexture2D_RenderThread @ 145bf21a0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

TRefCountPtr<FRHITexture> __thiscall
FOpenGLDynamicRHI::AsyncReallocateTexture2D_RenderThread
          (FOpenGLDynamicRHI *this,FRHICommandListImmediate *param_1,FRHITexture *param_2,
          int param_3,int param_4,int param_5,FThreadSafeCounter *param_6)

{
  undefined4 in_stack_ffffffffffffffe4;
  
  RHIAsyncReallocateTexture2D
            (this,(FRHITexture *)param_1,param_3,param_4,param_5,
             (FThreadSafeCounter *)CONCAT44(in_stack_ffffffffffffffe4,param_6._0_4_));
  return (TRefCountPtr<FRHITexture>)(FRHITexture *)param_1;
}

// BindPendingComputeShaderState @ 145bf3640

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::BindPendingComputeShaderState
          (FOpenGLDynamicRHI *this,FOpenGLComputeShader *param_1)

{
  uint uVar1;
  FOpenGLShaderParameterCache *pFVar2;
  FOpenGLComputeShader *pFVar3;
  HGLRC pHVar4;
  FGLProgramCache *this_00;
  bool bVar5;
  FOpenGLComputeShader *local_res10;
  
  local_res10 = param_1;
  pHVar4 = wglGetCurrentContext();
  if (pHVar4 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  this_00 = GetOpenGLProgramsCache();
  FGLProgramCache::Touch(this_00,param_1->LinkedProgram);
  FOpenGLLinkedProgram::
  UpdateShaders<FOpenGLLinkedProgram::FComputeProgram,FOpenGLComputeShader_*_&>
            (param_1->LinkedProgram,&local_res10);
  pFVar3 = local_res10;
  uVar1 = (uint)local_res10->LinkedProgram->_padding_;
  bVar5 = (this->ContextState).Program != uVar1;
  if (bVar5) {
    (*glUseProgram)(uVar1);
    pFVar2 = (this->PendingState).ShaderParameters;
    (this->ContextState).Program = uVar1;
    MarkShaderParameterCachesDirty(pFVar2,true);
    (this->PendingState).LinkedProgramAndDirtyFlag = (FOpenGLLinkedProgram *)0x0;
  }
  if ((this->PendingState).bAnyDirtyRealUniformBuffers[5] != false) {
    BindUniformBufferBase
              (this,(uint)*(byte *)((longlong)&pFVar3->_padding_ + 5),
               (this->PendingState).BoundUniformBuffers[5],
               (this->PendingState).BoundUniformBuffersDynamicOffset[5],0,bVar5);
    (this->PendingState).bAnyDirtyRealUniformBuffers[5] = false;
  }
  return;
}

// BindPendingFramebuffer @ 145bf3770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOpenGLDynamicRHI::BindPendingFramebuffer(FOpenGLDynamicRHI *this)

{
  int iVar1;
  FOpenGLTexture *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  HGLRC pHVar6;
  longlong lVar7;
  uint uVar8;
  FOpenGLTexture **ppFVar9;
  undefined1 auStack_68 [32];
  uint local_48;
  uint local_40;
  uint local_38 [8];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  pHVar6 = wglGetCurrentContext();
  if (pHVar6 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    uVar8 = (uint)GIsRunningRHIInSeparateThread_InternalUseOnly;
    bVar4 = IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    local_48 = (uint)bVar4;
    local_40 = uVar8;
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (((int)GMaxRHIFeatureLevel < 3) && ((this->PendingState).bFramebufferSetupInvalid != false)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(GMaxRHIFeatureLevel >= ERHIFeatureLevel::SM5) || !PendingState.bFramebufferSetupInvalid"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLRenderTarget.cpp"
                       ,999,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar8 = (this->PendingState).Framebuffer;
  if ((this->ContextState).Framebuffer != uVar8) {
    if (uVar8 == 0) {
      (*glBindFramebuffer)(0x8d40,0);
      (*glReadBuffer)(0x405);
      (*glDrawBuffer)(0x405);
    }
    else {
      (*glBindFramebuffer)(0x8d40,uVar8);
      iVar1 = (this->PendingState).FirstNonzeroRenderTarget;
      lVar7 = 0;
      uVar8 = iVar1 + 0x8ce0;
      if (iVar1 < 0) {
        uVar8 = 0;
      }
      (*glReadBuffer)(uVar8);
      if (0 < GMaxOpenGLDrawBuffers) {
        ppFVar9 = (this->PendingState).RenderTargets;
        uVar8 = 0x8ce0;
        do {
          pFVar2 = *ppFVar9;
          ppFVar9 = ppFVar9 + 1;
          uVar5 = uVar8;
          if (pFVar2 == (FOpenGLTexture *)0x0) {
            uVar5 = 0;
          }
          uVar8 = uVar8 + 1;
          local_38[lVar7] = uVar5;
          lVar7 = lVar7 + 1;
        } while (lVar7 < GMaxOpenGLDrawBuffers);
      }
      (*glDrawBuffers)(GMaxOpenGLDrawBuffers,local_38);
    }
    (this->ContextState).Framebuffer = (this->PendingState).Framebuffer;
  }
  return;
}

// BindPendingShaderState @ 145bf3910

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOpenGLDynamicRHI::BindPendingShaderState(FOpenGLDynamicRHI *this)

{
  FOpenGLShaderParameterCache *pFVar1;
  FOpenGLBoundShaderState *pFVar2;
  FOpenGLGeometryShader *pFVar3;
  code *pcVar4;
  bool bVar5;
  HGLRC pHVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  pHVar6 = wglGetCurrentContext();
  if (pHVar6 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  uVar8 = (uint)((this->PendingState).BoundShaderState.Reference)->LinkedProgram->_padding_;
  if ((this->ContextState).Program != uVar8) {
    (*glUseProgram)(uVar8);
    pFVar1 = (this->PendingState).ShaderParameters;
    (this->ContextState).Program = uVar8;
    MarkShaderParameterCachesDirty(pFVar1,false);
    (this->PendingState).LinkedProgramAndDirtyFlag = (FOpenGLLinkedProgram *)0x0;
  }
  if ((((this->PendingState).bAnyDirtyRealUniformBuffers[0] != false) ||
      ((this->PendingState).bAnyDirtyRealUniformBuffers[3] != false)) ||
     ((this->PendingState).bAnyDirtyRealUniformBuffers[4] != false)) {
    pFVar2 = (this->PendingState).BoundShaderState.Reference;
    if (((pFVar2->VertexShader).Reference == (FOpenGLVertexShader *)0x0) ||
       ((pFVar2->PixelShader).Reference == (FOpenGLPixelShader *)0x0)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidRef(VertexShader) && IsValidRef(PixelShader)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                         ,0xbee,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar8 = (uint)(byte)((pFVar2->VertexShader).Reference)->field_0x155;
    uVar9 = (uint)(byte)((pFVar2->PixelShader).Reference)->field_0x155;
    pFVar3 = (pFVar2->GeometryShader).Reference;
    if (pFVar3 == (FOpenGLGeometryShader *)0x0) {
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = (uint)(byte)pFVar3->field_0x155;
    }
    if ((this->PendingState).bAnyDirtyRealUniformBuffers[0] != false) {
      BindUniformBufferBase
                (this,uVar8,(this->PendingState).BoundUniformBuffers[0],
                 (this->PendingState).BoundUniformBuffersDynamicOffset[0],0,false);
    }
    if ((this->PendingState).bAnyDirtyRealUniformBuffers[3] != false) {
      BindUniformBufferBase
                (this,uVar9,(this->PendingState).BoundUniformBuffers[3],
                 (this->PendingState).BoundUniformBuffersDynamicOffset[3],uVar8,false);
    }
    if ((-1 < (int)uVar7) && ((this->PendingState).bAnyDirtyRealUniformBuffers[4] != false)) {
      BindUniformBufferBase
                (this,uVar7,(this->PendingState).BoundUniformBuffers[4],
                 (this->PendingState).BoundUniformBuffersDynamicOffset[4],uVar8 + uVar9,false);
    }
    (this->PendingState).bAnyDirtyRealUniformBuffers[0] = false;
    (this->PendingState).bAnyDirtyRealUniformBuffers[3] = false;
    (this->PendingState).bAnyDirtyRealUniformBuffers[4] = false;
  }
  return;
}

// BindUniformBuffer @ 145bf3b20

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::BindUniformBuffer
          (FOpenGLDynamicRHI *this,EShaderFrequency param_1,uint param_2,FRHIUniformBuffer *param_3)

{
  (this->PendingState).BoundUniformBuffers[param_1][param_2] = param_3;
  (this->PendingState).BoundUniformBuffersDynamicOffset[param_1][param_2] = 0;
  (this->PendingState).DirtyUniformBuffers[param_1] =
       (this->PendingState).DirtyUniformBuffers[param_1] | (ushort)(1 << (param_2 & 0x1f));
  (this->PendingState).bAnyDirtyGraphicsUniformBuffers = true;
  if ((GUseEmulatedUniformBuffers == false) ||
     (*(char *)((longlong)&param_3[1]._padding_ + 5) == '\0')) {
    (this->PendingState).bAnyDirtyRealUniformBuffers[param_1] = true;
  }
  return;
}

// BindUniformBufferBase @ 145bf3b80

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::BindUniformBufferBase
          (FOpenGLDynamicRHI *this,int param_1,FRHIUniformBuffer **param_2,uint *param_3,
          uint param_4,bool param_5)

{
  uint *_Dst;
  uint *puVar1;
  longlong lVar2;
  FRHIUniformBuffer *pFVar3;
  code *pcVar4;
  bool bVar5;
  HGLRC pHVar6;
  void *_Dst_00;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint *puVar13;
  longlong local_58;
  
  pHVar6 = wglGetCurrentContext();
  if (pHVar6 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (0 < param_1) {
    uVar12 = (ulonglong)(int)param_4;
    local_58 = 0;
    lVar2 = uVar12 * 4;
    puVar13 = (this->ContextState).UniformBufferOffsets + uVar12;
    do {
      uVar11 = (uint)uVar12;
      pFVar3 = param_2[local_58];
      uVar10 = 0;
      if (pFVar3 == (FRHIUniformBuffer *)0x0) {
        _Dst = &(this->PendingState).ZeroFilledDummyUniformBuffer;
        if (*_Dst == 0) {
          _Dst_00 = FMemory::Malloc(0x10000,0);
          memset(_Dst_00,0,0x10000);
          iVar8 = 0x400 - FOpenGL3::NextBufferName;
          if (iVar8 < 2) {
            memcpy(_Dst,FOpenGL3::BufferNamesCache + FOpenGL3::NextBufferName,(longlong)iVar8 * 4);
            (*glGenBuffers)(0x400,FOpenGL3::BufferNamesCache);
            iVar9 = 1 - iVar8;
            memcpy((void *)((longlong)(this->PendingState).RenderTargets +
                           (longlong)iVar8 * 4 + -0x18),FOpenGL3::BufferNamesCache,
                   (longlong)iVar9 << 2);
          }
          else {
            *_Dst = FOpenGL3::BufferNamesCache[FOpenGL3::NextBufferName];
            iVar9 = FOpenGL3::NextBufferName + 1;
          }
          FOpenGL3::NextBufferName = iVar9;
          if ((*_Dst == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("PendingState.ZeroFilledDummyUniformBuffer != 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                                 ,0x499,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar11 = *_Dst;
          pHVar6 = wglGetCurrentContext();
          if (pHVar6 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
            IsInRHIThread();
            IsInRenderingThread();
            IsInGameThread();
            UE::Logging::Private::BasicFatalLog
                      (&`public:_void___cdecl_FOpenGLDynamicRHI::CachedBindUniformBuffer(unsigned_int)___ptr64'
                        ::__l13::LOG_Static,(FLogCategoryBase *)&LogRHI);
          }
          puVar1 = &(this->ContextState).UniformBufferBound;
          if (*puVar1 != uVar11) {
            (*glBindBuffer)(0x8a11,uVar11);
            *puVar1 = uVar11;
          }
          (*glBufferData)(0x8a11,0x10000,_Dst_00,0x88e4);
          FMemory::Free(_Dst_00);
          OpenGLBufferStats::UpdateUniformBufferStats(0x10000,true);
        }
        iVar8 = 0x10000;
        uVar7 = *_Dst;
        uVar11 = param_4;
LAB_145bf3e58:
        if ((param_5) || (((uVar7 != 0 && (puVar13[-0x48] != uVar7)) || (*puVar13 != uVar10)))) {
          (*glBindBufferRange)(0x8a11,uVar11,uVar7,(long64)uVar10,(long64)iVar8);
          puVar13[-0x48] = uVar7;
          *puVar13 = uVar10;
          (this->ContextState).UniformBufferBound = uVar7;
        }
      }
      else {
        uVar7 = (uint)pFVar3[1]._padding_;
        if (*(char *)((longlong)&pFVar3[1]._padding_ + 5) == '\0') {
          uVar10 = *(int *)((longlong)puVar13 +
                           (longlong)param_3 + (-(longlong)this - (lVar2 + 0x14504))) +
                   *(int *)((longlong)&pFVar3[1]._padding_ + 4);
          iVar8 = (int)pFVar3[1]._padding_;
          if (((uint)pFVar3[1]._padding_ < uVar10 + iVar8) &&
             (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<8399118768520823952>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                                 ,0x490,"GLUB->AllocatedSize >= (Offset + Size)"), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          goto LAB_145bf3e58;
        }
      }
      param_4 = uVar11 + 1;
      uVar12 = (ulonglong)param_4;
      local_58 = local_58 + 1;
      puVar13 = puVar13 + 1;
    } while (local_58 < param_1);
  }
  return;
}

// CachedBindBuffer @ 145bf4320

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::CachedBindBuffer(FOpenGLDynamicRHI *this,uint param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  HGLRC pHVar3;
  
  pHVar3 = wglGetCurrentContext();
  if (pHVar3 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog
              (&`public:_void___cdecl_FOpenGLDynamicRHI::CachedBindBuffer(unsigned_int,unsigned_int)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (param_1 == 0x8892) {
    if ((this->ContextState).ArrayBufferBound != param_2) {
      (*glBindBuffer)(0x8892,param_2);
      (this->ContextState).ArrayBufferBound = param_2;
    }
  }
  else if (param_1 == 0x8893) {
    if ((this->ContextState).ElementArrayBufferBound != param_2) {
      (*glBindBuffer)(0x8893,param_2);
      (this->ContextState).ElementArrayBufferBound = param_2;
      return;
    }
  }
  else if (param_1 == 0x88ec) {
    if ((this->ContextState).PixelUnpackBufferBound != param_2) {
      (*glBindBuffer)(0x88ec,param_2);
      (this->ContextState).PixelUnpackBufferBound = param_2;
      return;
    }
  }
  else if (param_1 == 0x90d2) {
    if ((this->ContextState).StorageBufferBound != param_2) {
      (*glBindBuffer)(0x90d2,param_2);
      (this->ContextState).StorageBufferBound = param_2;
      return;
    }
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLDrv.h"
                       ,0x22f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// CachedBindUniformBuffer @ 145bf44b0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOpenGLDynamicRHI::CachedBindUniformBuffer(FOpenGLDynamicRHI *this,uint param_1)

{
  HGLRC pHVar1;
  
  pHVar1 = wglGetCurrentContext();
  if (pHVar1 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog
              (&`public:_void___cdecl_FOpenGLDynamicRHI::CachedBindUniformBuffer(unsigned_int)___ptr64'
                ::__l13::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if ((this->ContextState).UniformBufferBound != param_1) {
    (*glBindBuffer)(0x8a11,param_1);
    (this->ContextState).UniformBufferBound = param_1;
  }
  return;
}

// CachedSetupTextureStageInner @ 145bf4560

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::CachedSetupTextureStageInner
          (FOpenGLDynamicRHI *this,int param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  longlong lVar1;
  FOpenGLTexture *this_00;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  HGLRC pHVar9;
  int *piVar10;
  undefined1 *puVar11;
  uint uVar12;
  FOpenGLTexture **ppFVar14;
  int *piVar15;
  TPairInitializer<unsigned_int_const_&,TTuple<unsigned_int,unsigned_int>_&&> local_res8;
  int local_res18;
  uint local_res20 [2];
  int local_68;
  int local_64;
  longlong local_60;
  uint *local_58;
  int *local_50;
  int *piVar13;
  
  local_res20[0] = param_3;
  pHVar9 = wglGetCurrentContext();
  if (pHVar9 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  piVar13 = (int *)0x0;
  uVar6 = 0;
  uVar12 = uVar6;
  if (param_1 < (int)(this->ContextState)._padding_) {
    uVar12 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar1 = (this->ContextState)._padding_ + (longlong)param_1 * 0x28;
  local_60 = lVar1;
  if ((this->ContextState).ActiveTexture != param_1) {
    (*glActiveTexture)(param_1 + 0x84c0);
    (this->ContextState).ActiveTexture = param_1;
  }
  uVar12 = *(uint *)(lVar1 + 0x10);
  iVar8 = 0;
  if (uVar12 == param_2) {
    (*glBindTexture)(param_2,local_res20[0]);
    if (param_2 == 0) goto LAB_145bf4802;
  }
  else {
    if (uVar12 != 0) {
      (*glBindTexture)(uVar12,0);
    }
    if (param_2 == 0) goto LAB_145bf4802;
    (*glBindTexture)(param_2,local_res20[0]);
  }
  if ((param_2 == 0x8c2a) || (param_2 == 0x8d65)) goto LAB_145bf4802;
  piVar10 = piVar13;
  if (*(int *)&(this->TextureMipLimits).field_0x8 != *(int *)&(this->TextureMipLimits).field_0x34) {
    puVar11 = *(undefined1 **)&(this->TextureMipLimits).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->TextureMipLimits).field_0x38;
    }
    iVar7 = *(int *)(puVar11 +
                    (ulonglong)(*(int *)&(this->TextureMipLimits).field_0x48 - 1U & local_res20[0])
                    * 4);
    if (iVar7 != -1) {
      lVar1 = *(longlong *)&(this->TextureMipLimits).field_0x0;
      do {
        piVar10 = (int *)(lVar1 + (longlong)iVar7 * 0x14);
        if (*(uint *)(lVar1 + (longlong)iVar7 * 0x14) == local_res20[0]) break;
        iVar7 = piVar10[3];
        piVar10 = piVar13;
      } while (iVar7 != -1);
    }
  }
  piVar15 = piVar10 + 1;
  if (piVar10 == (int *)0x0) {
    piVar15 = piVar13;
  }
  local_res8.Value._0_4_ = param_4;
  local_res18 = param_4;
  if (param_4 == -1) {
    local_res8.Value._0_4_ = param_5 + -1;
    local_res18 = iVar8;
  }
  if ((piVar15 == (int *)0x0) || (*piVar15 != local_res18)) {
    bVar5 = false;
    bVar4 = false;
    if (piVar15 != (int *)0x0) goto LAB_145bf4775;
LAB_145bf477f:
    bVar3 = false;
  }
  else {
    bVar5 = true;
    bVar4 = true;
LAB_145bf4775:
    if (piVar15[1] != (int)local_res8.Value) goto LAB_145bf477f;
    bVar3 = true;
  }
  uVar6 = param_4;
  iVar8 = param_5;
  if ((!bVar5) || (!bVar3)) {
    ppFVar14 = (this->PendingState).RenderTargets;
    do {
      this_00 = *ppFVar14;
      if (this_00 == (FOpenGLTexture *)0x0) break;
      FOpenGLTexture::TryRestoreGLResource(this_00);
      if (this_00->Resource == local_res20[0]) {
        uVar6 = 0;
        iVar8 = 0;
        goto LAB_145bf4802;
      }
      uVar12 = (int)piVar13 + 1;
      piVar13 = (int *)(ulonglong)uVar12;
      ppFVar14 = ppFVar14 + 1;
    } while (uVar12 < 8);
    iVar7 = local_res18;
    if (!bVar4) {
      (*glTexParameteri)(param_2,0x813c,local_res18);
    }
    if (piVar15 == (int *)0x0) {
      local_64 = (int)local_res8.Value;
      local_58 = local_res20;
      local_68 = iVar7;
      local_50 = &local_68;
      TSet<TTuple<unsigned_int,TTuple<unsigned_int,unsigned_int>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TTuple<unsigned_int,unsigned_int>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_const_&,TTuple<unsigned_int,unsigned_int>_&&>_>
                ((TSet<TTuple<unsigned_int,TTuple<unsigned_int,unsigned_int>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TTuple<unsigned_int,unsigned_int>,0>,FDefaultSetAllocator>
                  *)&this->TextureMipLimits,&local_res8,(bool *)&local_58);
    }
    else {
      *piVar15 = iVar7;
      piVar15[1] = (int)local_res8.Value;
    }
  }
LAB_145bf4802:
  *(uint *)(local_60 + 0x18) = uVar6;
  *(int *)(local_60 + 0x20) = iVar8;
  *(uint *)(local_60 + 0x10) = param_2;
  *(uint *)(local_60 + 0x14) = local_res20[0];
  return;
}

// CachedSetupUAVStage @ 145bf4870

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::CachedSetupUAVStage
          (FOpenGLDynamicRHI *this,int param_1,uint param_2,uint param_3,bool param_4,int param_5,
          uint param_6,int param_7)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  HGLRC pHVar7;
  
  pHVar7 = wglGetCurrentContext();
  if (pHVar7 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  uVar6 = 0;
  if (param_1 < (int)(this->ContextState)._padding_) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar3 = (this->ContextState)._padding_;
  puVar1 = (uint *)(lVar3 + (longlong)param_1 * 0x18);
  uVar6 = *(uint *)(lVar3 + (longlong)param_1 * 0x18);
  if (((((uVar6 != param_2) || (puVar1[1] != param_3)) || (puVar1[2] != param_6)) ||
      ((puVar1[3] != param_5 || ((bool)(char)puVar1[4] != param_4)))) || (puVar1[5] != param_7)) {
    uVar2 = puVar1[1];
    if (param_3 == 0) {
      if (uVar2 != 0) {
        if (uVar6 == 0) {
          (*glBindBufferBase)(0x90d2,param_1,0);
          (this->ContextState).StorageBufferBound = 0;
        }
        else {
          (*glBindImageTexture)(param_1,0,0,'\0',0,0x88ba,0x822e);
        }
        puVar1[0] = 0;
        puVar1[1] = 0;
        puVar1[2] = 0x88ba;
        puVar1[3] = 0;
        *(undefined1 *)(puVar1 + 4) = 0;
        puVar1[5] = 0;
      }
      puVar1 = &(this->ContextState).ActiveUAVMask;
      *puVar1 = *puVar1 & ~(1 << ((byte)param_1 & 0x1f));
    }
    else {
      if (param_2 == 0) {
        if ((uVar2 != 0) && (uVar6 != 0)) {
          (*glBindImageTexture)(param_1,0,0,'\0',0,0x88ba,0x822e);
        }
        (*glBindBufferBase)(0x90d2,param_1,param_3);
        puVar1[1] = param_3;
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 4) = 0;
        puVar1[5] = 0;
        puVar1[2] = 0x88ba;
        puVar1[3] = 0;
        (this->ContextState).StorageBufferBound = param_3;
      }
      else {
        if ((uVar2 != 0) && (uVar6 == 0)) {
          (*glBindBufferBase)(0x90d2,param_1,0);
          (this->ContextState).StorageBufferBound = 0;
        }
        (*glBindImageTexture)(param_1,param_3,param_7,param_4,param_5,param_6,param_2);
        *(bool *)(puVar1 + 4) = param_4;
        *puVar1 = param_2;
        puVar1[1] = param_3;
        puVar1[2] = param_6;
        puVar1[3] = param_5;
        puVar1[5] = param_7;
      }
      (this->ContextState).ActiveUAVMask =
           (this->ContextState).ActiveUAVMask | 1 << ((byte)param_1 & 0x1f);
    }
  }
  return;
}

// Cleanup @ 145bf56a0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOpenGLDynamicRHI::Cleanup(FOpenGLDynamicRHI *this)

{
  int *piVar1;
  FArchive *pFVar2;
  FDelegateHandle FVar3;
  void *pvVar4;
  ForElementType<FSetElementId> FVar5;
  FScriptContainerElement *pFVar6;
  FRHIResource *this_00;
  FOpenGLBoundShaderState *this_01;
  code *pcVar7;
  FOpenGLProgramBinaryCache *pFVar8;
  bool bVar9;
  HGLRC pHVar10;
  
  pFVar8 = FOpenGLProgramBinaryCache::CachePtr;
  if (GRHIGlobals.IsRHIInitialized) {
    if (FOpenGLProgramBinaryCache::CachePtr != (FOpenGLProgramBinaryCache *)0x0) {
      pFVar2 = FOpenGLProgramBinaryCache::CachePtr->BinaryCacheWriteFileHandle;
      if (pFVar2 != (FArchive *)0x0) {
        (*(code *)**(undefined8 **)pFVar2)(pFVar2,1);
      }
      FVar3.ID = (pFVar8->OnShaderPipelineCacheOpenedDelegate).ID;
      if (FVar3.ID != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &FShaderPipelineCache::OnCachedOpened,FVar3);
      }
      FVar3.ID = (pFVar8->OnShaderPipelineCachePrecompilationCompleteDelegate).ID;
      if (FVar3.ID != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &FShaderPipelineCache::OnPrecompilationComplete,FVar3);
      }
      *(undefined4 *)&(pFVar8->MappedCacheFiles).field_0x48 = 0;
      pvVar4 = *(void **)&(pFVar8->MappedCacheFiles).field_0x40;
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
      TSparseArray<TSparseSetElement<TTuple<FGuid,TRefCountPtr<FOpenGLProgramBinaryMapping>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FGuid,TRefCountPtr<FOpenGLProgramBinaryMapping>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FGuid,TRefCountPtr<FOpenGLProgramBinaryMapping>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&pFVar8->MappedCacheFiles);
      *(undefined4 *)&(pFVar8->PendingGLContainerPrograms).field_0x48 = 0;
      pvVar4 = *(void **)&(pFVar8->PendingGLContainerPrograms).field_0x40;
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
      TSparseArray<TSparseSetElement<TTuple<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&pFVar8->PendingGLContainerPrograms);
      (pFVar8->ProgramsInCurrentCache).HashSize = 0;
      FVar5 = (pFVar8->ProgramsInCurrentCache).Hash.SecondaryData;
      if (FVar5 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)FVar5);
      }
      TSparseArray<TSparseSetElement<FOpenGLProgramKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FOpenGLProgramKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&(pFVar8->ProgramsInCurrentCache).Elements);
      *(undefined4 *)&(pFVar8->ShadersPendingCompilation).field_0x48 = 0;
      pvVar4 = *(void **)&(pFVar8->ShadersPendingCompilation).field_0x40;
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
      TSparseArray<TSparseSetElement<TTuple<unsigned_int,FOpenGLProgramBinaryCache::FPendingShaderCode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FOpenGLProgramBinaryCache::FPendingShaderCode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FOpenGLProgramBinaryCache::FPendingShaderCode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&pFVar8->ShadersPendingCompilation);
      pFVar6 = (pFVar8->CurrentShaderPipelineProperties).PipelineCacheName.Data.AllocatorInstance.
               Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      pFVar6 = (pFVar8->CacheSubDir).Data.AllocatorInstance.Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      pFVar6 = (pFVar8->CachePathRoot).Data.AllocatorInstance.Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      ::operator_delete(pFVar8,0x1b8);
      FOpenGLProgramBinaryCache::CachePtr = (FOpenGLProgramBinaryCache *)0x0;
    }
    GRHIGlobals.IsRHIInitialized = false;
    FRenderResource::ReleaseRHIForAllResources();
  }
  this_00 = (FRHIResource *)(this->PointSamplerState).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    (this->PointSamplerState).Reference = (FRHISamplerState *)0x0;
    FRHIResource::Release(this_00);
  }
  EmptyGLSamplerStateCache();
  if ((this->PendingState).ZeroFilledDummyUniformBuffer != 0) {
    (*glDeleteBuffers)(1,&(this->PendingState).ZeroFilledDummyUniformBuffer);
    (this->PendingState).ZeroFilledDummyUniformBuffer = 0;
    OpenGLBufferStats::UpdateUniformBufferStats(0x10000,false);
  }
  this_01 = (this->PendingState).BoundShaderState.Reference;
  if (this_01 != (FOpenGLBoundShaderState *)0x0) {
    (this->PendingState).BoundShaderState.Reference = (FOpenGLBoundShaderState *)0x0;
    FRHIResource::Release((FRHIResource *)this_01);
  }
  if ((this->PendingState).BoundShaderState.Reference != (FOpenGLBoundShaderState *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsValidRef(PendingState.BoundShaderState)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLDevice.cpp"
                       ,0x583,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pHVar10 = wglGetCurrentContext();
  if (pHVar10 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  FOpenGLRHIState::CleanupResources(&this->PendingState);
  piVar1 = &(this->ContextState).CachedSamplerStates.ArrayMax;
  (this->ContextState).CachedSamplerStates.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ContextState).CachedSamplerStates.AllocatorInstance,0,piVar1);
  }
  FOpenGLCommonState::CleanupResources((FOpenGLCommonState *)&this->ContextState);
  return;
}

// ClearCachedAttributeState @ 145bf5cf0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::ClearCachedAttributeState(FOpenGLDynamicRHI *this,int param_1,int param_2)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  
  puVar1 = &(this->ContextState).VertexAttrs_EnabledBits;
  *puVar1 = *puVar1 & ~(1 << ((byte)param_1 & 0x1f));
  (this->ContextState).VertexAttrs[param_1].Size = 0xffffffff;
  puVar1 = &(this->ContextState).VertexAttrs_EnabledBits;
  *puVar1 = *puVar1 & ~(1 << ((byte)param_2 & 0x1f));
  (this->ContextState).VertexAttrs[param_2].Size = 0xffffffff;
  (this->ContextState).ActiveTexture = 0;
  if ((int)(this->ContextState)._padding_ < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(undefined8 *)(this->ContextState)._padding_ = 0;
  if ((int)(this->ContextState)._padding_ < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(undefined4 *)((this->ContextState)._padding_ + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x000145bf5de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*glUseProgram)((this->ContextState).Program);
  return;
}

// ClearCurrentFramebufferWithCurrentScissor @ 145bf5e00

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::ClearCurrentFramebufferWithCurrentScissor
          (FOpenGLDynamicRHI *this,schar param_1,int param_2,bool *param_3,FLinearColor *param_4,
          float param_5,uint param_6)

{
  HGLRC pHVar1;
  int iVar2;
  byte bVar3;
  uint local_res10 [2];
  float local_28 [4];
  
  pHVar1 = wglGetCurrentContext();
  if (pHVar1 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if ((((param_1 & 4U) != 0) && (param_3 != (bool *)0x0)) && (iVar2 = 0, 0 < param_2)) {
    do {
      if (*param_3 != false) {
        (*glClearBufferfv)(0x1800,iVar2,(float *)param_4);
      }
      iVar2 = iVar2 + 1;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
    } while (iVar2 < param_2);
  }
  if ((param_1 & 3U) != 0) {
    bVar3 = param_1 & 3;
    local_28[0] = param_5;
    local_res10[0] = param_6;
    if (bVar3 == 1) {
      (*glClearBufferfv)(0x1801,0,local_28);
    }
    else {
      if (bVar3 == 2) {
        (*glClearBufferiv)(0x1802,0,(int *)local_res10);
        return;
      }
      if (bVar3 == 3) {
        (*glClearBufferfi)(0x84f9,0,param_5,param_6);
        return;
      }
    }
  }
  return;
}

// CommitComputeResourceTables @ 145bf6ab0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EShaderStage": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::CommitComputeResourceTables
          (FOpenGLDynamicRHI *this,FOpenGLComputeShader *param_1)

{
  FTracker *pFVar1;
  code *pcVar2;
  bool bVar3;
  HGLRC pHVar4;
  FOpenGLResourceBinder local_38;
  
  pHVar4 = wglGetCurrentContext();
  if (pHVar4 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (param_1 == (FOpenGLComputeShader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ComputeShader",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLCommands.cpp"
                       ,0x877,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pHVar4 = wglGetCurrentContext();
  if (pHVar4 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog
              (&`private:_void___cdecl_FOpenGLDynamicRHI::SetResourcesFromTables<FOpenGLComputeShader>(FOpenGLComputeShader*___ptr64)___ptr64'
                ::__l7::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  pFVar1 = (FTracker *)this->_padding_;
  local_38.ShaderStage = ___xmm_00000000000000000000000000000006;
  local_38.FirstTextureUnit = _UNK_1510f6df4;
  local_38.MaxTextureImageUnits = _UNK_1510f6df8;
  local_38.FirstUAVUnit = _UNK_1510f6dfc;
  local_38.MaxUAVUnits = 0;
  local_38.ShaderFrequency = SF_Compute;
  local_38.bClearTextureSamplers = true;
  local_38.RHI = this;
  FOpenGLResourceBinder::Init(&local_38);
  UE::RHI::Private::
  SetUniformBufferResourcesFromTables<FOpenGLResourceBinder,FRHIUniformBuffer_*_[14],unsigned_short,0>
            (&local_38,(FRHIShader *)param_1,(this->PendingState).DirtyUniformBuffers + 5,
             (this->PendingState).BoundUniformBuffers + 5,pFVar1);
  (this->PendingState).DirtyUniformBuffers[5] = 0;
  return;
}

// CommitComputeShaderConstants @ 145bf6c20

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderStage": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::CommitComputeShaderConstants
          (FOpenGLDynamicRHI *this,FOpenGLComputeShader *param_1)

{
  FOpenGLShaderParameterCache *pFVar1;
  HGLRC pHVar2;
  
  pHVar2 = wglGetCurrentContext();
  if (pHVar2 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  pFVar1 = (this->PendingState).ShaderParameters;
  FOpenGLShaderParameterCache::CommitPackedUniformBuffers
            (pFVar1 + 5,param_1->LinkedProgram,NUM_NON_COMPUTE_SHADER_STAGES,
             (this->PendingState).BoundUniformBuffers[5],
             (TArray<CrossCompiler::FUniformBufferCopyInfo,TSizedDefaultAllocator<32>_> *)
             &param_1->_padding_);
  FOpenGLShaderParameterCache::CommitPackedGlobals
            (pFVar1 + 5,param_1->LinkedProgram,NUM_NON_COMPUTE_SHADER_STAGES);
  (this->PendingState).LinkedProgramAndDirtyFlag = (FOpenGLLinkedProgram *)0x0;
  return;
}

// CommitGraphicsResourceTablesInner @ 145bf6d10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EShaderStage": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FOpenGLDynamicRHI::CommitGraphicsResourceTablesInner(FOpenGLDynamicRHI *this)

{
  FOpenGLBoundShaderState *pFVar1;
  FOpenGLVertexShader *pFVar2;
  FTracker *pFVar3;
  FOpenGLPixelShader *pFVar4;
  FOpenGLGeometryShader *pFVar5;
  code *pcVar6;
  bool bVar7;
  HGLRC pHVar8;
  FOpenGLResourceBinder local_a8;
  FOpenGLResourceBinder local_80;
  FOpenGLResourceBinder local_58;
  
  pHVar8 = wglGetCurrentContext();
  if (pHVar8 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if ((this->PendingState).DirtyUniformBuffers[0] != 0) {
    pFVar1 = (this->PendingState).BoundShaderState.Reference;
    if (((pFVar1->VertexShader).Reference == (FOpenGLVertexShader *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidRef(VertexShader)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLResources.h"
                           ,0x318,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar2 = (pFVar1->VertexShader).Reference;
    if (pFVar2 != (FOpenGLVertexShader *)0x0) {
      pHVar8 = wglGetCurrentContext();
      if (pHVar8 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
        IsInRHIThread();
        IsInRenderingThread();
        IsInGameThread();
        UE::Logging::Private::BasicFatalLog
                  (&`private:_void___cdecl_FOpenGLDynamicRHI::SetResourcesFromTables<FOpenGLVertexShader>(FOpenGLVertexShader*___ptr64)___ptr64'
                    ::__l7::LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
      pFVar3 = (FTracker *)this->_padding_;
      local_a8.ShaderStage = ___xmm_00000000000000000000000000000006;
      local_a8.FirstTextureUnit = _UNK_1510f6df4;
      local_a8.MaxTextureImageUnits = _UNK_1510f6df8;
      local_a8.FirstUAVUnit = _UNK_1510f6dfc;
      local_a8.ShaderFrequency = SF_Vertex;
      local_a8.MaxUAVUnits = 0;
      local_a8.bClearTextureSamplers = true;
      local_a8.RHI = this;
      FOpenGLResourceBinder::Init(&local_a8);
      UE::RHI::Private::
      SetUniformBufferResourcesFromTables<FOpenGLResourceBinder,FRHIUniformBuffer_*_[14],unsigned_short,0>
                (&local_a8,(FRHIShader *)pFVar2,(this->PendingState).DirtyUniformBuffers,
                 (this->PendingState).BoundUniformBuffers,pFVar3);
    }
  }
  if ((this->PendingState).DirtyUniformBuffers[3] != 0) {
    pFVar1 = (this->PendingState).BoundShaderState.Reference;
    if (((pFVar1->PixelShader).Reference == (FOpenGLPixelShader *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidRef(PixelShader)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLResources.h"
                           ,0x31e,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar4 = (pFVar1->PixelShader).Reference;
    if (pFVar4 != (FOpenGLPixelShader *)0x0) {
      pHVar8 = wglGetCurrentContext();
      if (pHVar8 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
        IsInRHIThread();
        IsInRenderingThread();
        IsInGameThread();
        UE::Logging::Private::BasicFatalLog
                  (&`private:_void___cdecl_FOpenGLDynamicRHI::SetResourcesFromTables<FOpenGLPixelShader>(FOpenGLPixelShader*___ptr64)___ptr64'
                    ::__l7::LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
      pFVar3 = (FTracker *)this->_padding_;
      local_80.ShaderStage = ___xmm_00000000000000000000000000000006;
      local_80.FirstTextureUnit = _UNK_1510f6df4;
      local_80.MaxTextureImageUnits = _UNK_1510f6df8;
      local_80.FirstUAVUnit = _UNK_1510f6dfc;
      local_80.ShaderFrequency = SF_Pixel;
      local_80.MaxUAVUnits = 0;
      local_80.bClearTextureSamplers = true;
      local_80.RHI = this;
      FOpenGLResourceBinder::Init(&local_80);
      UE::RHI::Private::
      SetUniformBufferResourcesFromTables<FOpenGLResourceBinder,FRHIUniformBuffer_*_[14],unsigned_short,0>
                (&local_80,(FRHIShader *)pFVar4,(this->PendingState).DirtyUniformBuffers + 3,
                 (this->PendingState).BoundUniformBuffers + 3,pFVar3);
    }
  }
  if (((this->PendingState).DirtyUniformBuffers[4] != 0) &&
     (pFVar5 = (((this->PendingState).BoundShaderState.Reference)->GeometryShader).Reference,
     pFVar5 != (FOpenGLGeometryShader *)0x0)) {
    pHVar8 = wglGetCurrentContext();
    if (pHVar8 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
      IsInRHIThread();
      IsInRenderingThread();
      IsInGameThread();
      UE::Logging::Private::BasicFatalLog
                (&`private:_void___cdecl_FOpenGLDynamicRHI::SetResourcesFromTables<FOpenGLGeometryShader>(FOpenGLGeometryShader*___ptr64)___ptr64'
                  ::__l7::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    pFVar3 = (FTracker *)this->_padding_;
    local_58.ShaderStage = ___xmm_00000000000000000000000000000006;
    local_58.FirstTextureUnit = _UNK_1510f6df4;
    local_58.MaxTextureImageUnits = _UNK_1510f6df8;
    local_58.FirstUAVUnit = _UNK_1510f6dfc;
    local_58.ShaderFrequency = SF_Geometry;
    local_58.MaxUAVUnits = 0;
    local_58.bClearTextureSamplers = true;
    local_58.RHI = this;
    FOpenGLResourceBinder::Init(&local_58);
    UE::RHI::Private::
    SetUniformBufferResourcesFromTables<FOpenGLResourceBinder,FRHIUniformBuffer_*_[14],unsigned_short,0>
              (&local_58,(FRHIShader *)pFVar5,(this->PendingState).DirtyUniformBuffers + 4,
               (this->PendingState).BoundUniformBuffers + 4,pFVar3);
  }
  (this->PendingState).bAnyDirtyGraphicsUniformBuffers = false;
  (this->PendingState).DirtyUniformBuffers[0] = 0;
  (this->PendingState).DirtyUniformBuffers[3] = 0;
  (this->PendingState).DirtyUniformBuffers[4] = 0;
  return;
}

// CommitNonComputeShaderConstants @ 145bf70a0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderStage": Some values do not have unique names */

void __thiscall FOpenGLDynamicRHI::CommitNonComputeShaderConstants(FOpenGLDynamicRHI *this)

{
  FOpenGLBoundShaderState *pFVar1;
  FOpenGLLinkedProgram *pFVar2;
  FOpenGLShaderParameterCache *pFVar3;
  FOpenGLGeometryShader *pFVar4;
  code *pcVar5;
  bool bVar6;
  HGLRC pHVar7;
  
  pHVar7 = wglGetCurrentContext();
  if (pHVar7 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  pFVar1 = (this->PendingState).BoundShaderState.Reference;
  pFVar2 = pFVar1->LinkedProgram;
  if (GUseEmulatedUniformBuffers != false) {
    pFVar3 = (this->PendingState).ShaderParameters;
    if ((pFVar1->VertexShader).Reference == (FOpenGLVertexShader *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidRef(VertexShader)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLResources.h"
                         ,0x318,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FOpenGLShaderParameterCache::CommitPackedUniformBuffers
              (pFVar3,pFVar2,SHADER_STAGE_VERTEX,(this->PendingState).BoundUniformBuffers[0],
               (TArray<CrossCompiler::FUniformBufferCopyInfo,TSizedDefaultAllocator<32>_> *)
               &((pFVar1->VertexShader).Reference)->field_0x170);
    pFVar1 = (this->PendingState).BoundShaderState.Reference;
    pFVar3 = (this->PendingState).ShaderParameters;
    if ((pFVar1->PixelShader).Reference == (FOpenGLPixelShader *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidRef(PixelShader)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLResources.h"
                         ,0x31e,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FOpenGLShaderParameterCache::CommitPackedUniformBuffers
              (pFVar3 + 1,pFVar2,SHADER_STAGE_PIXEL,(this->PendingState).BoundUniformBuffers[3],
               (TArray<CrossCompiler::FUniformBufferCopyInfo,TSizedDefaultAllocator<32>_> *)
               &((pFVar1->PixelShader).Reference)->field_0x170);
    pFVar4 = (((this->PendingState).BoundShaderState.Reference)->GeometryShader).Reference;
    if (pFVar4 != (FOpenGLGeometryShader *)0x0) {
      FOpenGLShaderParameterCache::CommitPackedUniformBuffers
                ((this->PendingState).ShaderParameters + 2,pFVar2,SHADER_STAGE_GEOMETRY,
                 (this->PendingState).BoundUniformBuffers[4],
                 (TArray<CrossCompiler::FUniformBufferCopyInfo,TSizedDefaultAllocator<32>_> *)
                 &pFVar4->field_0x170);
    }
  }
  if (pFVar2 != (this->PendingState).LinkedProgramAndDirtyFlag) {
    FOpenGLShaderParameterCache::CommitPackedGlobals
              ((this->PendingState).ShaderParameters,pFVar2,SHADER_STAGE_VERTEX);
    FOpenGLShaderParameterCache::CommitPackedGlobals
              ((this->PendingState).ShaderParameters + 1,pFVar2,SHADER_STAGE_PIXEL);
    if ((((this->PendingState).BoundShaderState.Reference)->GeometryShader).Reference !=
        (FOpenGLGeometryShader *)0x0) {
      FOpenGLShaderParameterCache::CommitPackedGlobals
                ((this->PendingState).ShaderParameters + 2,pFVar2,SHADER_STAGE_GEOMETRY);
    }
    (this->PendingState).LinkedProgramAndDirtyFlag = pFVar2;
  }
  return;
}

// DiscardRenderTargets @ 145bfb790

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::DiscardRenderTargets
          (FOpenGLDynamicRHI *this,bool param_1,bool param_2,uint param_3)

{
  return;
}

// EndFrameTick @ 145bfd160

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOpenGLDynamicRHI::EndFrameTick(FOpenGLDynamicRHI *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FGLProgramCache *pFVar4;
  FOpenGLBinaryCacheStats *lpCriticalSection;
  int iVar5;
  int local_res10 [6];
  undefined4 uStack_44;
  code *local_38 [2];
  undefined **local_28;
  undefined8 local_20;
  int *piStack_18;
  undefined8 local_10;
  
  bVar2 = FGLProgramCache::IsUsingLRU();
  if ((bVar2) && (0 < GUntouchedProgramEvictTimeSeconds)) {
    iVar3 = FGenericPlatformRHIFramePacer::GetFramePaceFromSyncInterval();
    local_res10[0] = 10;
    pFVar4 = GetOpenGLProgramsCache();
    bVar2 = FGLProgramCache::IsUsingLRU();
    if ((!bVar2) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsUsingLRU()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                           ,0x775,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar5 = (*(int *)&(pFVar4->ProgramCacheLRU).LRU.LookupSet.Elements.field_0x8 -
            *(int *)&(pFVar4->ProgramCacheLRU).LRU.LookupSet.Elements.field_0x34) -
            GProgramLRUResidentCountBeforeEviction;
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    if (iVar5 < local_res10[0]) {
      local_res10[0] = iVar5;
    }
    if (0 < local_res10[0]) {
      pFVar4 = GetOpenGLProgramsCache();
      piStack_18 = local_res10;
      local_20._4_4_ = uStack_44;
      local_20._0_4_ = iVar3;
      local_10 = 0;
      local_28 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`TickProgramLRU'::`8'::<lambda_1>,1,0>::_vftable_;
      local_38[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`TickProgramLRU'::__l8::<lambda_1>,bool,FOpenGLLinkedProgram_*>
                    ::Call;
      FGLProgramCache::EvictLeastRecentByPredicate
                (pFVar4,(TUniqueFunction<bool___cdecl(FOpenGLLinkedProgram_*)> *)local_38);
    }
  }
  FOpenGLProgramBinaryCache::TickBinaryCache();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_FTextureEvictionLRU&___ptr64___cdecl_FTextureEvictionLRU::Get(void)'::
       __l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_FTextureEvictionLRU&___ptr64___cdecl_FTextureEvictionLRU::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_FTextureEvictionLRU&___ptr64___cdecl_FTextureEvictionLRU::Get(void)'::
     __l2::_thread_safe_static_guard_0__ == -1)) {
    InitializeCriticalSectionAndSpinCount
              ((LPCRITICAL_SECTION)
               &`public:_static_class_FTextureEvictionLRU&___ptr64___cdecl_FTextureEvictionLRU::Get(void)'
                ::__l2::Lru,4000);
    atexit(`FTextureEvictionLRU::Get'::__l2::_dynamic_atexit_destructor_for__Lru__);
    _Init_thread_footer(&`public:_static_class_FTextureEvictionLRU&___ptr64___cdecl_FTextureEvictionLRU::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FTextureEvictionLRU::TickEviction
            (&`public:_static_class_FTextureEvictionLRU&___ptr64___cdecl_FTextureEvictionLRU::Get(void)'
              ::__l2::Lru);
  bVar2 = FOpenGLBinaryCacheStats::IsEnabled();
  if (bVar2) {
    lpCriticalSection = FOpenGLBinaryCacheStats::Get();
    if (lpCriticalSection == (FOpenGLBinaryCacheStats *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((4 < (byte)LogRHI._0_1_) && (lpCriticalSection->bLogMe != false)) {
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_void___cdecl_FOpenGLBinaryCacheStats::LogStats(void)___ptr64'::__l3::
                  LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    lpCriticalSection->bLogMe = false;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// GetName @ 145c02950

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

wchar_t * __thiscall FOpenGLDynamicRHI::GetName(FOpenGLDynamicRHI *this)

{
  return L"OpenGL";
}

// GetOpenGLFramebuffer @ 145c02c90

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
FOpenGLDynamicRHI::GetOpenGLFramebuffer
          (FOpenGLDynamicRHI *this,uint param_1,FOpenGLTexture **param_2,uint *param_3,uint *param_4
          ,FOpenGLTexture *param_5)

{
  uint uVar1;
  
  uVar1 = GetOpenGLFramebuffer
                    (this,param_1,param_2,param_3,param_4,param_5,(FExclusiveDepthStencil)0x0,1);
  return uVar1;
}

// GetOpenGLFramebuffer @ 145c02cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
FOpenGLDynamicRHI::GetOpenGLFramebuffer
          (FOpenGLDynamicRHI *this,uint param_1,FOpenGLTexture **param_2,uint *param_3,uint *param_4
          ,FOpenGLTexture *param_5,FExclusiveDepthStencil param_6,int param_7)

{
  FOpenGLTexture *pFVar1;
  code *pcVar2;
  _func___cdecl_void_uint_uint_uint_uint *p_Var3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  HGLRC pHVar8;
  TSet<TTuple<FOpenGLFramebufferKey,unsigned_int>,TDefaultMapHashableKeyFuncs<FOpenGLFramebufferKey,unsigned_int,0>,FDefaultSetAllocator>
  *this_00;
  FOpenGLFramebufferKey *pFVar9;
  TTuple<FOpenGLFramebufferKey,unsigned_int> *pTVar10;
  IConsoleManager *pIVar11;
  longlong *plVar12;
  TConsoleVariableData<int> *pTVar13;
  int iVar14;
  longlong lVar15;
  uint *puVar16;
  uint uVar17;
  FOpenGLTexture **ppFVar18;
  uint uVar19;
  uint *puVar20;
  int iVar21;
  ulonglong uVar22;
  undefined1 auStackY_4d8 [32];
  uint local_494;
  FOpenGLTexture **local_490;
  int local_484;
  int local_480;
  uint local_47c;
  int local_478 [2];
  uint *local_470;
  FOpenGLTexture **local_468;
  longlong local_460;
  uint *local_458;
  TPairInitializer<FOpenGLFramebufferKey_&&,unsigned_int_&&> local_450;
  FOpenGLFramebufferKey *local_440;
  int *local_438;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_428;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_308;
  FOpenGLFramebufferKey local_1e8;
  FOpenGLFramebufferKey local_118;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4d8;
  local_458 = param_4;
  local_450.Value = (uint *)param_5;
  local_484 = param_7;
  local_47c = param_1;
  local_470 = param_3;
  local_468 = param_2;
  pHVar8 = wglGetCurrentContext();
  if (pHVar8 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    param_2 = local_468;
    param_7 = local_484;
  }
  if ((8 < param_1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumSimultaneousRenderTargets <= MaxSimultaneousRenderTargets",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLRenderTarget.cpp"
                         ,0x91,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return uVar7;
  }
  this_00 = (TSet<TTuple<FOpenGLFramebufferKey,unsigned_int>,TDefaultMapHashableKeyFuncs<FOpenGLFramebufferKey,unsigned_int,0>,FDefaultSetAllocator>
             *)GetOpenGLFramebufferCache();
  pFVar9 = FOpenGLFramebufferKey::FOpenGLFramebufferKey
                     (&local_1e8,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  pTVar10 = TSet<TTuple<FOpenGLFramebufferKey,unsigned_int>,TDefaultMapHashableKeyFuncs<FOpenGLFramebufferKey,unsigned_int,0>,FDefaultSetAllocator>
            ::Find(this_00,pFVar9);
  if ((pTVar10 != (TTuple<FOpenGLFramebufferKey,unsigned_int> *)0x0) &&
     (*(int *)&pTVar10->field_0xd0 != 0)) {
    return *(int *)&pTVar10->field_0xd0 - 1;
  }
  if ((param_2 == (FOpenGLTexture **)0x0) || (*param_2 == (FOpenGLTexture *)0x0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (((param_1 != 0) && (bVar5)) &&
     (pFVar1 = *param_2, FOpenGLTexture::TryRestoreGLResource(pFVar1), pFVar1->Resource == 0)) {
    return 0;
  }
  (*glGenFramebuffers)(1,&local_494);
  pHVar8 = wglGetCurrentContext();
  if (pHVar8 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  (*glBindFramebuffer)(0x8d40,local_494);
  pHVar8 = wglGetCurrentContext();
  if (pHVar8 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  uVar22 = (ulonglong)_tls_index;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar22 * 8) + 0x9d4c) < ::_TSS0)
     && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar11 = IConsoleManager::Get();
    plVar12 = (longlong *)(**(code **)((longlong)*pIVar11 + 0xc0))(pIVar11,L"vr.MobileMultiView",1);
    pTVar13 = (TConsoleVariableData<int> *)0x0;
    if (plVar12 != (longlong *)0x0) {
      pTVar13 = (TConsoleVariableData<int> *)(**(code **)(*plVar12 + 0x68))(plVar12);
    }
    CVarMobileMultiView = pTVar13;
    _Init_thread_footer(&::_TSS0);
  }
  if ((CVarMobileMultiView != (TConsoleVariableData<int> *)0x0) &&
     (bVar6 = IsInParallelGameThread(), !bVar6)) {
    IsInGameThread();
  }
  iVar4 = local_484;
  iVar21 = -1;
  iVar14 = local_47c - 1;
  local_480 = iVar14;
  if (-1 < iVar14) {
    uVar7 = local_47c + 0x8cdf;
    ppFVar18 = local_468 + iVar14;
    lVar15 = (longlong)local_470 - (longlong)local_458;
    puVar16 = local_458 + iVar14;
    puVar20 = local_470;
    local_480 = iVar21;
    local_460 = lVar15;
    do {
      iVar21 = local_480;
      local_490 = ppFVar18;
      if (!bVar5) break;
      pFVar1 = *ppFVar18;
      if (pFVar1 != (FOpenGLTexture *)0x0) {
        local_480 = iVar14;
        if ((puVar20 == (uint *)0x0) ||
           (uVar17 = *(uint *)(lVar15 + (longlong)puVar16), uVar17 == 0xffffffff)) {
          uVar17 = pFVar1->Target;
          if (uVar17 < 0x8d42) {
            if (uVar17 == 0x8d41) goto LAB_145c030dd;
            if (uVar17 != 0xde1) {
              if (((uVar17 == 0x806f) || (uVar17 == 0x8513)) || (uVar17 == 0x8c1a))
              goto LAB_145c03227;
LAB_145c03263:
              FOpenGLTexture::TryRestoreGLResource(pFVar1);
              (*glFramebufferRenderbuffer)(0x8d40,uVar7,0x8d41,pFVar1->Resource);
              lVar15 = local_460;
              puVar20 = local_470;
              iVar14 = local_480;
              goto LAB_145c03332;
            }
          }
          else if (uVar17 != 0x8d65) {
            if (uVar17 == 0x9009) {
LAB_145c03227:
              uVar17 = *puVar16;
              FOpenGLTexture::TryRestoreGLResource(pFVar1);
              (*glFramebufferTexture)(0x8d40,uVar7,pFVar1->Resource,uVar17);
              lVar15 = local_460;
              ppFVar18 = local_490;
              puVar20 = local_470;
              iVar14 = local_480;
              goto LAB_145c03332;
            }
            if (uVar17 != 0x9100) goto LAB_145c03263;
          }
          if (iVar4 < 2) {
LAB_145c032f0:
            uVar17 = *puVar16;
            FOpenGLTexture::TryRestoreGLResource(pFVar1);
            uVar19 = pFVar1->Target;
            goto LAB_145c032fe;
          }
          FOpenGLTexture::TryRestoreGLResource(pFVar1);
          local_308._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_308,"FOpenGLBase::FramebufferTexture2DMultisample",0x2c,Yes);
          UE::Logging::Private::BasicFatalLog
                    ((FStaticBasicLogRecord *)
                     &`public:_static_void___cdecl_FOpenGLBase::FramebufferTexture2DMultisample(unsigned_int,unsigned_int,unsigned_int,unsigned_int,int,int)'
                      ::__l3::LOG_Static,(FLogCategoryBase *)&LogOpenGL);
          lVar15 = local_460;
          puVar20 = local_470;
          iVar14 = local_480;
          if ((void *)local_308._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_308._padding_);
            lVar15 = local_460;
            puVar20 = local_470;
            iVar14 = local_480;
          }
        }
        else {
          uVar19 = pFVar1->Target;
          if (uVar19 < 0x8d42) {
            if (uVar19 == 0x8d41) {
              if ((uVar17 != 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ArrayIndices[RenderTargetIndex] == 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLRenderTarget.cpp"
                                     ,0x110,L""), bVar6)) {
                pcVar2 = (code *)swi(3);
                uVar7 = (*pcVar2)();
                return uVar7;
              }
LAB_145c030dd:
              ConditionallyAllocateRenderbufferStorage(pFVar1);
              p_Var3 = glFramebufferRenderbuffer;
              FOpenGLTexture::TryRestoreGLResource(pFVar1);
              (*p_Var3)(0x8d40,uVar7,0x8d41,pFVar1->Resource);
              lVar15 = local_460;
              ppFVar18 = local_490;
              puVar20 = local_470;
              iVar14 = local_480;
              goto LAB_145c03332;
            }
            if (uVar19 == 0xde1) goto LAB_145c03160;
            if (uVar19 == 0x806f) {
              uVar19 = *puVar16;
              FOpenGLTexture::TryRestoreGLResource(pFVar1);
              (*glFramebufferTexture3D)(0x8d40,uVar7,pFVar1->Target,pFVar1->Resource,uVar19,uVar17);
              lVar15 = local_460;
              ppFVar18 = local_490;
              puVar20 = local_470;
              iVar14 = local_480;
              goto LAB_145c03332;
            }
            if (uVar19 != 0x8513) {
              if (uVar19 != 0x8c1a) goto LAB_145c03129;
              goto LAB_145c0300b;
            }
            if ((5 < uVar17) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ArrayIndices[RenderTargetIndex] < 6",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLRenderTarget.cpp"
                                   ,0x12a,L""), bVar6)) {
              pcVar2 = (code *)swi(3);
              uVar7 = (*pcVar2)();
              return uVar7;
            }
            uVar17 = *puVar16;
            FOpenGLTexture::TryRestoreGLResource(pFVar1);
            uVar19 = *(int *)(local_460 + (longlong)puVar16) + 0x8515;
LAB_145c032fe:
            (*glFramebufferTexture2D)(0x8d40,uVar7,uVar19,pFVar1->Resource,uVar17);
            lVar15 = local_460;
            ppFVar18 = local_490;
            puVar20 = local_470;
            iVar14 = local_480;
          }
          else {
            if (uVar19 != 0x8d65) {
              if (uVar19 == 0x9009) {
LAB_145c0300b:
                uVar19 = *puVar16;
                FOpenGLTexture::TryRestoreGLResource(pFVar1);
                (*glFramebufferTextureLayer)(0x8d40,uVar7,pFVar1->Resource,uVar19,uVar17);
                lVar15 = local_460;
                ppFVar18 = local_490;
                puVar20 = local_470;
                iVar14 = local_480;
                goto LAB_145c03332;
              }
              if (uVar19 != 0x9100) {
LAB_145c03129:
                if ((uVar17 != 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("ArrayIndices[RenderTargetIndex] == 0",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLRenderTarget.cpp"
                                       ,0x132,L""), bVar6)) {
                  pcVar2 = (code *)swi(3);
                  uVar7 = (*pcVar2)();
                  return uVar7;
                }
                goto LAB_145c03263;
              }
            }
LAB_145c03160:
            if ((uVar17 != 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ArrayIndices[RenderTargetIndex] == 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLRenderTarget.cpp"
                                   ,0x11a,L""), bVar6)) {
              pcVar2 = (code *)swi(3);
              uVar7 = (*pcVar2)();
              return uVar7;
            }
            if (iVar4 < 2) goto LAB_145c032f0;
            FOpenGLTexture::TryRestoreGLResource(pFVar1);
            local_428._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_428,"FOpenGLBase::FramebufferTexture2DMultisample",0x2c,Yes);
            UE::Logging::Private::BasicFatalLog
                      ((FStaticBasicLogRecord *)
                       &`public:_static_void___cdecl_FOpenGLBase::FramebufferTexture2DMultisample(unsigned_int,unsigned_int,unsigned_int,unsigned_int,int,int)'
                        ::__l3::LOG_Static,(FLogCategoryBase *)&LogOpenGL);
            lVar15 = local_460;
            puVar20 = local_470;
            iVar14 = local_480;
            if ((void *)local_428._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_428._padding_);
              lVar15 = local_460;
              puVar20 = local_470;
              iVar14 = local_480;
            }
          }
        }
      }
LAB_145c03332:
      iVar14 = iVar14 + -1;
      ppFVar18 = ppFVar18 + -1;
      uVar7 = uVar7 - 1;
      puVar16 = puVar16 + -1;
      iVar21 = local_480;
      local_490 = ppFVar18;
    } while (-1 < iVar14);
    local_480 = iVar14;
    uVar22 = (ulonglong)_tls_index;
    param_5 = (FOpenGLTexture *)local_450.Value;
  }
  if (param_5 == (FOpenGLTexture *)0x0) goto LAB_145c034f8;
  uVar7 = param_5->Target;
  if (uVar7 < 0x8d42) {
    if (uVar7 == 0x8d41) {
      ConditionallyAllocateRenderbufferStorage(param_5);
      p_Var3 = glFramebufferRenderbuffer;
      FOpenGLTexture::TryRestoreGLResource(param_5);
      (*p_Var3)(0x8d40,0x8d00,0x8d41,param_5->Resource);
      p_Var3 = glFramebufferRenderbuffer;
      FOpenGLTexture::TryRestoreGLResource(param_5);
      (*p_Var3)(0x8d40,0x8d20,0x8d41,param_5->Resource);
      pHVar8 = wglGetCurrentContext();
      if (pHVar8 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
        IsInRHIThread();
        IsInRenderingThread();
        IsInGameThread();
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
      goto LAB_145c034f8;
    }
    if (uVar7 != 0xde1) {
      if (((uVar7 != 0x806f) && (uVar7 != 0x8513)) && (uVar7 != 0x8c1a)) {
LAB_145c0349a:
        FOpenGLTexture::TryRestoreGLResource(param_5);
        (*glFramebufferRenderbuffer)(0x8d40,param_5->Attachment,0x8d41,param_5->Resource);
        goto LAB_145c034f8;
      }
LAB_145c033a3:
      FOpenGLTexture::TryRestoreGLResource(param_5);
      (*glFramebufferTexture)(0x8d40,param_5->Attachment,param_5->Resource,0);
      goto LAB_145c034f8;
    }
  }
  else if (uVar7 != 0x8d65) {
    if (uVar7 == 0x9009) goto LAB_145c033a3;
    if (uVar7 != 0x9100) goto LAB_145c0349a;
  }
  FOpenGLTexture::TryRestoreGLResource(param_5);
  (*glFramebufferTexture2D)(0x8d40,param_5->Attachment,param_5->Target,param_5->Resource,0);
LAB_145c034f8:
  if (iVar21 == -1) {
    (*glReadBuffer)(0);
    (*glDrawBuffer)(0);
    if (param_5 == (FOpenGLTexture *)0x0) {
      (*glDeleteFramebuffers)(1,&local_494);
      local_494 = 0;
      (*glBindFramebuffer)(0x8d40,0);
    }
  }
  else {
    (*glReadBuffer)(iVar21 + 0x8ce0);
    (*glDrawBuffer)(iVar21 + 0x8ce0);
  }
  uVar7 = (*glCheckFramebufferStatus)(0x8d40);
  if (uVar7 != 0x8cd5) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`public:_static_void___cdecl_FOpenGLBase::CheckFrameBuffer(void)'::__l6::LOG_Static,
               (FLogCategoryBase *)&LogOpenGL);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar22 * 8) + 0x9d4c) < ::_TSS0)
     && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`GetOpenGLFramebufferCache'::__l2::
           _dynamic_atexit_destructor_for__OpenGLFramebufferCache__);
    _Init_thread_footer(&::_TSS0);
  }
  local_478[0] = local_494 + 1;
  local_440 = FOpenGLFramebufferKey::FOpenGLFramebufferKey
                        (&local_118,local_47c,local_468,local_470,local_458,param_5,param_6,
                         local_484);
  local_438 = local_478;
  TSet<TTuple<FOpenGLFramebufferKey,unsigned_int>,TDefaultMapHashableKeyFuncs<FOpenGLFramebufferKey,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FOpenGLFramebufferKey_&&,unsigned_int_&&>_>
            ((TSet<TTuple<FOpenGLFramebufferKey,unsigned_int>,TDefaultMapHashableKeyFuncs<FOpenGLFramebufferKey,unsigned_int,0>,FDefaultSetAllocator>
              *)&OpenGLFramebufferCache,&local_450,(bool *)&local_440);
  return local_494;
}

// Init @ 145c04ee0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOpenGLDynamicRHI::Init(FOpenGLDynamicRHI *this)

{
  TRefCountPtr<FRHISamplerState> *pTVar1;
  FRHIResource *this_00;
  code *pcVar2;
  bool bVar3;
  HGLRC pHVar4;
  TRefCountPtr<FRHISamplerState> TVar5;
  longlong lVar6;
  int local_res8 [2];
  FRHIResource *local_res10;
  FString local_48;
  undefined4 local_38;
  undefined8 local_34;
  undefined8 local_2c;
  undefined4 local_24;
  undefined1 local_20;
  
  if (GRHIGlobals.IsRHIInitialized) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GRHIGlobals.IsRHIInitialized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLDevice.cpp"
                       ,0x515,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pHVar4 = wglGetCurrentContext();
  if (pHVar4 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  FOpenGLProgramBinaryCache::Initialize();
  InitializeStateResources(this);
  lVar6 = 0;
  local_38 = 0x1010100;
  local_24 = 0;
  local_20 = 0;
  local_34 = 0;
  local_2c = 0x7f7fffff;
  TVar5 = RHICreateSamplerState(this,(FSamplerStateInitializerRHI *)&local_res10);
  pTVar1 = &this->PointSamplerState;
  if ((FRHISamplerState *)pTVar1 != TVar5.Reference) {
    this_00 = (FRHIResource *)pTVar1->Reference;
                    /* WARNING: Load size is inaccurate */
    pTVar1->Reference = *TVar5.Reference;
    *(undefined8 *)TVar5.Reference = 0;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  if (local_res10 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res10);
  }
  if (FOpenGL4::bSupportsGPUMemoryInfo != false) {
    local_res8[0] = 0;
    (*glGetIntegerv)(0x9047,local_res8);
    lVar6 = (longlong)local_res8[0] << 10;
  }
  GOpenGLDedicatedVideoMemory = lVar6;
  if (lVar6 != 0) {
    GOpenGLTotalGraphicsMemory = lVar6;
    if ((0 < GRHIGlobals.PoolSizeVRAMPercentage) &&
       (GRHIGlobals.TexturePoolSize =
             (longlong)
             (int)((float)GRHIGlobals.PoolSizeVRAMPercentage * ___real_3223d70a * (float)lVar6) <<
             0x14, 4 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
  }
  (*glFlush)();
  FOpenGLProfiler::Setup(&this->Profiler);
  ::FString::FString(&local_48,L"OpenGL");
  FHardwareInfo::RegisterHardwareInfo(NAME_RHI,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  FRenderResource::InitPreRHIResources();
  GRHIGlobals.IsRHIInitialized = true;
  return;
}

// InitializeGLTexture @ 145c08530

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::InitializeGLTexture
          (FOpenGLDynamicRHI *this,FOpenGLTexture *param_1,void *param_2,ulong64 param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  HGLRC pHVar7;
  uint *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint local_res10 [2];
  
  pHVar7 = wglGetCurrentContext();
  if (pHVar7 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  puVar8 = (uint *)(**(code **)(param_1->_padding_ + 0x20))(param_1);
  if ((*puVar8 >> 0x12 & 1) == 0) {
    if ((bool)param_1->bMultisampleRenderbuffer) {
      if ((param_1->Target != 0x8d41) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Texture->Target == 0x8D41",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                             ,0x20e,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (*glGenRenderbuffers)(1,local_res10);
    }
    else {
      if ((param_1->Target == 0x8d41) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Texture->Target != 0x8D41",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                             ,0x213,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (*glGenTextures)(1,local_res10);
    }
    pHVar7 = wglGetCurrentContext();
    if (pHVar7 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
      IsInRHIThread();
      IsInRenderingThread();
      IsInGameThread();
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`public:_void___cdecl_FOpenGLTexture::SetResource(unsigned_int)___ptr64'::__l6::
                  LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    param_1->Resource = local_res10[0];
    bVar5 = FOpenGLTexture::IsEvicted(param_1);
    if (bVar5) {
      GTotalTexStorageSkipped = GTotalTexStorageSkipped + 1;
      lVar9 = (**(code **)(param_1->_padding_ + 0x20))(param_1);
      uVar11 = 0;
      bVar1 = *(byte *)(lVar9 + 0x33);
      GTotalCompressedTexStorageSkipped =
           GTotalCompressedTexStorageSkipped + (GOpenGLTextureFormats[bVar1].bCompressed != false);
      if (param_2 != (void *)0x0) {
        if ((GOpenGLTextureFormats[bVar1].bCompressed != false) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("!GLFormat.bCompressed",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                               ,0x228,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar2 = GPixelFormats[bVar1].BlockSizeY;
        uVar3 = GPixelFormats[bVar1].BlockSizeX;
        lVar9 = (**(code **)(param_1->_padding_ + 0x20))(param_1);
        if (*(char *)(lVar9 + 0x30) != '\0') {
          uVar13 = uVar11;
          do {
            uVar6 = *(int *)(lVar9 + 0x24) >> ((byte)uVar13 & 0x1f);
            uVar12 = *(int *)(lVar9 + 0x28) >> ((byte)uVar13 & 0x1f);
            uVar10 = (ulonglong)uVar6;
            if (uVar6 == 0) {
              uVar10 = 1;
            }
            if (uVar12 == 0) {
              uVar12 = 1;
            }
            uVar6 = (uint)*(ushort *)(lVar9 + 0x2e);
            if (uVar6 == 0) {
              uVar6 = 1;
            }
            uVar12 = (((int)((uVar10 + ((ulonglong)uVar3 - 1)) / (ulonglong)uVar3) * uVar3) / uVar3)
                     * (((int)((((ulonglong)uVar12 - 1) + (ulonglong)uVar2) / (ulonglong)uVar2) *
                        uVar2) / uVar2) * uVar6 * GPixelFormats[bVar1].BlockBytes;
            FTextureEvictionParams::SetMipData
                      ((param_1->EvictionParamsPtr).Ptr,(uint)uVar13,
                       (void *)(uVar11 + (longlong)param_2),uVar12);
            uVar11 = (ulonglong)((int)uVar11 + uVar12);
            uVar12 = (uint)uVar13 + 1;
            uVar13 = (ulonglong)uVar12;
          } while (uVar12 < *(byte *)(lVar9 + 0x30));
        }
      }
    }
    else {
      InitializeGLTextureInternal(this,param_1,param_2,param_3);
    }
  }
  return;
}

// InitializeGLTextureInternal @ 145c08860

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::InitializeGLTextureInternal
          (FOpenGLDynamicRHI *this,FOpenGLTexture *param_1,void *param_2,ulong64 param_3)

{
  ushort uVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  byte bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  HGLRC pHVar10;
  byte *pbVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  FOpenGLTextureFormat *pFVar16;
  int iVar17;
  undefined1 uVar18;
  uint uVar19;
  uint local_b8;
  undefined1 local_b4;
  uint local_b0;
  TPairInitializer<unsigned_int_const_&,TTuple<unsigned_int,unsigned_int>_&&> local_ac;
  FOpenGLTextureFormat *local_98;
  undefined4 local_90;
  int local_8c;
  FOpenGLTextureFormat *local_88;
  FOpenGLTextureFormat *local_80;
  byte *local_78;
  uint *local_70;
  undefined4 *local_68;
  undefined4 *local_60;
  code *local_58;
  FOpenGLTextureFormat **local_50;
  code *local_48;
  FOpenGLTextureFormat **local_40;
  
  pHVar10 = wglGetCurrentContext();
  if (pHVar10 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  local_ac.Value._4_4_ = param_1->Resource;
  pbVar11 = (byte *)(**(code **)(param_1->_padding_ + 0x20))(param_1);
  local_b8 = param_1->Target;
  bVar5 = *pbVar11 >> 4 & 1;
  local_98 = GOpenGLTextureFormats + pbVar11[0x33];
  local_ac._4_8_ = local_98->InternalFormat + bVar5;
  if (local_98->InternalFormat[bVar5] == 0) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  pHVar10 = wglGetCurrentContext();
  if (pHVar10 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog
              (&`public:_void___cdecl_FOpenGLDynamicRHI::CachedBindBuffer(unsigned_int,unsigned_int)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if ((this->ContextState).PixelUnpackBufferBound != 0) {
    (*glBindBuffer)(0x88ec,0);
    (this->ContextState).PixelUnpackBufferBound = 0;
  }
  uVar15 = local_ac.Value._4_4_;
  uVar4 = local_b8;
  uVar18 = false;
  if ((bool)param_1->bMultisampleRenderbuffer) {
    lVar12 = (**(code **)(param_1->_padding_ + 0x20))(param_1);
    if ((*(byte *)(lVar12 + 0x31) < 2) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Texture->IsMultisampled()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                           ,600,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((local_b8 != 0x8d41) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Target == 0x8D41",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                           ,0x259,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    goto LAB_145c08f93;
  }
  local_b0 = (uint)pbVar11[0x30];
  if ((FOpenGLBase::MaxCombinedTextureImageUnits == -1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("MaxCombinedTextureImageUnits != -1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBase.h"
                         ,0x7c,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar13 = FOpenGLBase::MaxCombinedTextureImageUnits - 1;
  uVar7 = 0;
  if ((int)uVar13 < (int)(this->ContextState)._padding_) {
    uVar7 = ~uVar13 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar12 = (this->ContextState)._padding_;
  if ((*(uint *)(lVar12 + 0x10 + (longlong)(int)uVar13 * 0x28) != uVar4) ||
     (*(uint *)(lVar12 + 0x14 + (longlong)(int)uVar13 * 0x28) != uVar15)) {
    CachedSetupTextureStageInner(this,uVar13,uVar4,uVar15,0,local_b0);
  }
  pFVar16 = local_98;
  if (((local_98->bBGRA != false) && ((*pbVar11 & 1) == 0)) ||
     (local_98->InternalFormat[0] == 0x8057)) {
    (*glTexParameteri)(local_b8,0x8e42,0x1905);
    (*glTexParameteri)(local_b8,0x8e44,0x1903);
  }
  lVar12 = (**(code **)(param_1->_padding_ + 0x20))(param_1);
  if (*(byte *)(lVar12 + 0x31) < 2) {
    if (((local_b8 == 0x8d65) || ((*(uint *)(pbVar11 + 0x24) & *(uint *)(pbVar11 + 0x24) - 1) != 0))
       || ((*(uint *)(pbVar11 + 0x28) & *(uint *)(pbVar11 + 0x28) - 1) != 0)) {
      (*glTexParameteri)(local_b8,0x2802,0x812f);
      (*glTexParameteri)(local_b8,0x2803,0x812f);
      iVar14 = 0x812f;
    }
    else {
      (*glTexParameteri)(local_b8,0x2802,0x2901);
      (*glTexParameteri)(local_b8,0x2803,0x2901);
      iVar14 = 0x2901;
    }
    (*glTexParameteri)(local_b8,0x8072,iVar14);
    iVar14 = 0x2600;
    (*glTexParameteri)(local_b8,0x2800,0x2600);
    if (1 < pbVar11[0x30]) {
      iVar14 = 0x2700;
    }
    (*glTexParameteri)(local_b8,0x2801,iVar14);
    if (FOpenGLBase::bSupportsTextureFilterAnisotropic != false) {
      (*glTexParameteri)(local_b8,0x84fe,1);
    }
  }
  (*glTexParameteri)(local_b8,0x813c,0);
  local_8c = pbVar11[0x30] - 1;
  local_90 = 0;
  local_68 = (undefined4 *)((longlong)&local_ac.Value + 4);
  local_60 = &local_90;
  TSet<TTuple<unsigned_int,TTuple<unsigned_int,unsigned_int>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TTuple<unsigned_int,unsigned_int>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,TTuple<unsigned_int,unsigned_int>_&&>_>
            ((TSet<TTuple<unsigned_int,TTuple<unsigned_int,unsigned_int>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TTuple<unsigned_int,unsigned_int>,0>,FDefaultSetAllocator>
              *)&this->TextureMipLimits,&local_ac,(bool *)&local_68);
  uVar4 = local_b8;
  if (local_b8 == 0x8d65) goto LAB_145c08f93;
  local_70 = &local_b8;
  local_78 = pbVar11;
  if (local_b8 < 0x8c1b) {
    if (local_b8 == 0x8c1a) {
LAB_145c08df2:
      local_b4 = 1;
      if (local_b8 == 0x806f) {
        uVar15 = (uint)*(ushort *)(pbVar11 + 0x2c);
      }
      else {
        uVar1 = *(ushort *)(pbVar11 + 0x2e);
        uVar15 = (uint)uVar1;
        if (local_b8 == 0x9009) {
          uVar15 = ((uint)uVar1 + (uint)uVar1 * 2) * 2;
        }
      }
      local_ac.Key._0_4_ = pFVar16->Type;
      local_b0 = pFVar16->Format;
      uVar7 = *(uint *)local_ac._4_8_;
      iVar14 = *(int *)(pbVar11 + 0x28);
      iVar2 = *(int *)(pbVar11 + 0x24);
      local_ac.Key._4_4_ = uVar7;
      if (glTexStorage3D == (_func___cdecl_void_uint_int_uint_int_int_int *)0x0) {
        if ((local_b8 == 0x8c1a) || (local_b8 == 0x9009)) {
          bVar6 = true;
        }
        else {
          bVar6 = false;
        }
        uVar13 = 0;
        uVar19 = (uint)pbVar11[0x30];
        pFVar16 = local_98;
        if (uVar19 != 0) {
          if (bVar6) {
            do {
              iVar8 = iVar14 >> ((byte)uVar13 & 0x1f);
              iVar17 = iVar2 >> ((byte)uVar13 & 0x1f);
              if (iVar8 == 0) {
                iVar8 = 1;
              }
              if (iVar17 == 0) {
                iVar17 = 1;
              }
              (*glTexImage3D)(uVar4,uVar13,uVar7,iVar17,iVar8,uVar15,0,local_b0,(uint)local_ac.Key,
                              (void *)0x0);
              uVar13 = uVar13 + 1;
              pFVar16 = local_98;
            } while (uVar13 < uVar19);
          }
          else {
            do {
              bVar5 = (byte)uVar13;
              iVar17 = (int)uVar15 >> (bVar5 & 0x1f);
              iVar9 = iVar14 >> (bVar5 & 0x1f);
              iVar8 = iVar2 >> (bVar5 & 0x1f);
              if (iVar17 == 0) {
                iVar17 = 1;
              }
              if (iVar9 == 0) {
                iVar9 = 1;
              }
              if (iVar8 == 0) {
                iVar8 = 1;
              }
              (*glTexImage3D)(uVar4,uVar13,uVar7,iVar8,iVar9,iVar17,0,local_b0,(uint)local_ac.Key,
                              (void *)0x0);
              uVar13 = uVar13 + 1;
              pFVar16 = local_98;
            } while (uVar13 < uVar19);
          }
        }
      }
      else {
        (*glTexStorage3D)(local_b8,(int)pbVar11[0x30],uVar7,iVar2,iVar14,uVar15);
      }
      uVar18 = local_b4;
      if (param_2 != (void *)0x0) {
        local_50 = &local_88;
        local_58 = UE::Core::Private::Function::
                   TFunctionRefCaller<`FOpenGLDynamicRHI::InitializeGLTextureInternal'::__l109::<lambda_3>,bool,unsigned_int,UE::Math::TIntVector3<unsigned_int>,unsigned_int,unsigned_int,void_const_*,unsigned___int64>
                   ::Call;
        local_88 = pFVar16;
        `FOpenGLDynamicRHI::InitializeGLTextureInternal'::__l92::<lambda_1>::operator()
                  (&local_78,param_2,
                   (TFunctionRef<bool___cdecl(unsigned_int,UE::Math::TIntVector3<unsigned_int>,unsigned_int,unsigned_int,void_const_*,unsigned___int64)>
                    *)&local_58);
        uVar18 = local_b4;
      }
      goto LAB_145c08f93;
    }
    if (local_b8 != 0xde1) {
      if (local_b8 == 0x806f) goto LAB_145c08df2;
      if (local_b8 != 0x8513) goto LAB_145c08d58;
    }
  }
  else if (local_b8 != 0x8d41) {
    if (local_b8 == 0x9009) goto LAB_145c08df2;
    if (local_b8 == 0x9100) {
      if ((param_2 != (void *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("BulkDataPtr == nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                             ,0x322,
                             L"Multisample textures cannot be created with initial bulk data."),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar12 = (**(code **)(param_1->_padding_ + 0x20))(param_1);
      if (glTexStorage2DMultisample != (_func___cdecl_void_uint_int_uint_int_int_uchar *)0x0) {
        (*glTexStorage2DMultisample)
                  (local_b8,(int)*(undefined1 *)(lVar12 + 0x31),*(uint *)local_ac._4_8_,
                   *(int *)(pbVar11 + 0x24),*(int *)(pbVar11 + 0x28),'\x01');
      }
      uVar18 = true;
      goto LAB_145c08f93;
    }
LAB_145c08d58:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                       ,0x2bd,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (glTexStorage2D != (_func___cdecl_void_uint_int_uint_int_int *)0x0) {
    (*glTexStorage2D)(local_b8,(int)pbVar11[0x30],*(uint *)local_ac._4_8_,*(int *)(pbVar11 + 0x24),
                      *(int *)(pbVar11 + 0x28));
  }
  uVar18 = true;
  if (param_2 != (void *)0x0) {
    local_40 = &local_80;
    local_80 = pFVar16;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`FOpenGLDynamicRHI::InitializeGLTextureInternal'::__l105::<lambda_2>,bool,unsigned_int,UE::Math::TIntVector3<unsigned_int>,unsigned_int,unsigned_int,void_const_*,unsigned___int64>
               ::Call;
    `FOpenGLDynamicRHI::InitializeGLTextureInternal'::__l92::<lambda_1>::operator()
              (&local_78,param_2,
               (TFunctionRef<bool___cdecl(unsigned_int,UE::Math::TIntVector3<unsigned_int>,unsigned_int,unsigned_int,void_const_*,unsigned___int64)>
                *)&local_48);
  }
LAB_145c08f93:
  FOpenGLTexture::SetAllocatedStorage(param_1,(bool)uVar18);
  return;
}

// InitializeStateResources @ 145c097c0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOpenGLDynamicRHI::InitializeStateResources(FOpenGLDynamicRHI *this)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  HGLRC pHVar8;
  
  pHVar8 = wglGetCurrentContext();
  if (pHVar8 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  iVar5 = FOpenGL4::MaxCombinedUAVUnits;
  if ((FOpenGLBase::MaxCombinedTextureImageUnits == -1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("MaxCombinedTextureImageUnits != -1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBase.h"
                         ,0x7c,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar4 = FOpenGLBase::MaxCombinedTextureImageUnits;
  FOpenGLCommonState::InitializeResources
            ((FOpenGLCommonState *)&this->ContextState,FOpenGLBase::MaxCombinedTextureImageUnits,
             iVar5);
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)iVar4);
  }
  piVar1 = &(this->ContextState).CachedSamplerStates.ArrayMax;
  piVar2 = &(this->ContextState).CachedSamplerStates.ArrayNum;
  *piVar2 = 0;
  if (*piVar1 != iVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar4,&(this->ContextState).CachedSamplerStates.AllocatorInstance,0,piVar1);
  }
  iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar4,&(this->ContextState).CachedSamplerStates.AllocatorInstance,piVar2,
                     piVar1);
  memset((this->ContextState).CachedSamplerStates.AllocatorInstance.Data + (longlong)iVar7 * 8,0,
         (longlong)iVar4 << 3);
  if ((0x20 < (uint)iVar5) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumCombinedUAVUnits <= sizeof(ActiveUAVMask) * 8",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLState.h"
                         ,0x19a,L"Not enough bits in ActiveUAVMask to store %d UAV units"), bVar6))
  {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = FOpenGL4::MaxCombinedUAVUnits;
  if ((FOpenGLBase::MaxCombinedTextureImageUnits == -1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("MaxCombinedTextureImageUnits != -1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBase.h"
                         ,0x7c,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FOpenGLRHIState::InitializeResources
            (&this->PendingState,FOpenGLBase::MaxCombinedTextureImageUnits,iVar5);
  return;
}

// InternalSetSamplerStates @ 145c09bb0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::InternalSetSamplerStates
          (FOpenGLDynamicRHI *this,int param_1,FOpenGLSamplerState *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 < (int)(this->PendingState)._padding_) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(FOpenGLSamplerState **)((this->PendingState)._padding_ + (longlong)param_1 * 8) = param_2;
  return;
}

// InternalSetShaderBufferUAV @ 145c09c40

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::InternalSetShaderBufferUAV(FOpenGLDynamicRHI *this,int param_1,uint param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  HGLRC pHVar5;
  uint uVar6;
  
  pHVar5 = wglGetCurrentContext();
  if (pHVar5 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  uVar6 = (uint)~param_1 >> 0x1f;
  uVar4 = 0;
  if (param_1 < (int)(this->PendingState)._padding_) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar1 = (longlong)param_1 * 0x18;
  *(undefined4 *)(lVar1 + (this->PendingState)._padding_) = 0;
  uVar4 = 0;
  if (param_1 < (int)(this->PendingState)._padding_) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(uint *)((this->PendingState)._padding_ + 4 + lVar1) = param_2;
  uVar4 = 0;
  if (param_1 < (int)(this->PendingState)._padding_) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(undefined4 *)((this->PendingState)._padding_ + 8 + lVar1) = 0x88ba;
  uVar4 = 0;
  if (param_1 < (int)(this->PendingState)._padding_) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(undefined4 *)(lVar1 + 0xc + (this->PendingState)._padding_) = 0;
  uVar4 = 0;
  if (param_1 < (int)(this->PendingState)._padding_) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(undefined1 *)(lVar1 + 0x10 + (this->PendingState)._padding_) = 0;
  return;
}

// InternalSetShaderImageUAV @ 145c09e80

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::InternalSetShaderImageUAV
          (FOpenGLDynamicRHI *this,int param_1,uint param_2,uint param_3,bool param_4,int param_5,
          uint param_6,int param_7)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  HGLRC pHVar5;
  uint uVar6;
  
  pHVar5 = wglGetCurrentContext();
  if (pHVar5 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  uVar6 = (uint)~param_1 >> 0x1f;
  uVar4 = 0;
  if (param_1 < (int)(this->PendingState)._padding_) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar1 = (longlong)param_1 * 0x18;
  *(uint *)(lVar1 + (this->PendingState)._padding_) = param_2;
  uVar4 = 0;
  if (param_1 < (int)(this->PendingState)._padding_) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(uint *)(lVar1 + 4 + (this->PendingState)._padding_) = param_3;
  uVar4 = 0;
  if (param_1 < (int)(this->PendingState)._padding_) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(uint *)(lVar1 + 8 + (this->PendingState)._padding_) = param_6;
  uVar4 = 0;
  if (param_1 < (int)(this->PendingState)._padding_) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(int *)((this->PendingState)._padding_ + 0xc + lVar1) = param_5;
  uVar4 = 0;
  if (param_1 < (int)(this->PendingState)._padding_) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(bool *)((this->PendingState)._padding_ + 0x10 + lVar1) = param_4;
  uVar4 = 0;
  if (param_1 < (int)(this->PendingState)._padding_) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(int *)((this->PendingState)._padding_ + 0x14 + lVar1) = param_7;
  return;
}

// InternalSetShaderTexture @ 145c0a130

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::InternalSetShaderTexture
          (FOpenGLDynamicRHI *this,FOpenGLTexture *param_1,FOpenGLShaderResourceView *param_2,
          int param_3,uint param_4,uint param_5,int param_6,int param_7)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar5 = (longlong)param_3;
  uVar4 = 0;
  if (param_3 < (int)(this->PendingState)._padding_) {
    uVar4 = (uint)~param_3 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar1 = (this->PendingState)._padding_;
  *(FOpenGLTexture **)(lVar1 + lVar5 * 0x28) = param_1;
  *(FOpenGLShaderResourceView **)(lVar1 + 8 + lVar5 * 0x28) = param_2;
  lVar1 = lVar1 + lVar5 * 0x28;
  *(uint *)(lVar1 + 0x10) = param_4;
  *(uint *)(lVar1 + 0x14) = param_5;
  *(int *)(lVar1 + 0x18) = param_7;
  if ((param_6 < 0) || (param_6 == 1)) {
    *(undefined1 *)(lVar1 + 0x1c) = 0;
  }
  else {
    *(undefined1 *)(lVar1 + 0x1c) = 1;
  }
  *(int *)(lVar1 + 0x20) = param_6;
  return;
}

// InvalidateTextureResourceInCache @ 145c0a2c0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::InvalidateTextureResourceInCache(FOpenGLDynamicRHI *this,uint param_1)

{
  longlong lVar1;
  int iVar2;
  FOpenGLTexture *this_00;
  HGLRC pHVar3;
  longlong lVar4;
  uint local_res10 [2];
  
  pHVar3 = wglGetCurrentContext();
  if (pHVar3 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  iVar2 = (int)(this->ContextState)._padding_;
  lVar4 = (this->ContextState)._padding_;
  lVar1 = lVar4 + (longlong)iVar2 * 0x28;
  while( true ) {
    if ((int)(this->ContextState)._padding_ != iVar2) {
      `TCheckedPointerIterator<FTextureStage,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (lVar4 == lVar1) break;
    if (*(uint *)(lVar4 + 0x14) == param_1) {
      *(undefined8 *)(lVar4 + 0x10) = 0;
    }
    lVar4 = lVar4 + 0x28;
  }
  iVar2 = (int)(this->PendingState)._padding_;
  lVar4 = (this->PendingState)._padding_;
  lVar1 = lVar4 + (longlong)iVar2 * 0x28;
  while( true ) {
    if ((int)(this->PendingState)._padding_ != iVar2) {
      `TCheckedPointerIterator<FTextureStage,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (lVar4 == lVar1) break;
    if (*(uint *)(lVar4 + 0x14) == param_1) {
      *(undefined8 *)(lVar4 + 0x10) = 0;
    }
    lVar4 = lVar4 + 0x28;
  }
  local_res10[0] = param_1;
  if (*(int *)&(this->TextureMipLimits).field_0x8 != *(int *)&(this->TextureMipLimits).field_0x34) {
    TSet<TTuple<unsigned_int,TTuple<unsigned_int,unsigned_int>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TTuple<unsigned_int,unsigned_int>,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned_int>
              ((TSet<TTuple<unsigned_int,TTuple<unsigned_int,unsigned_int>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TTuple<unsigned_int,unsigned_int>,0>,FDefaultSetAllocator>
                *)&this->TextureMipLimits,param_1,local_res10);
  }
  this_00 = (this->PendingState).DepthStencil;
  if (this_00 != (FOpenGLTexture *)0x0) {
    FOpenGLTexture::TryRestoreGLResource(this_00);
    if (this_00->Resource == param_1) {
      (this->PendingState).DepthStencil = (FOpenGLTexture *)0x0;
    }
  }
  return;
}

// InvalidateUAVResourceInCache @ 145c0a410

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::InvalidateUAVResourceInCache(FOpenGLDynamicRHI *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  HGLRC pHVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  
  pHVar4 = wglGetCurrentContext();
  if (pHVar4 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  lVar8 = (longlong)(int)(this->ContextState)._padding_;
  uVar5 = 0;
  if (0 < lVar8) {
    lVar7 = 0;
    do {
      uVar6 = ~uVar5 >> 0x1f;
      uVar3 = 0;
      if ((int)uVar5 < (int)(this->ContextState)._padding_) {
        uVar3 = uVar6;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (*(uint *)(lVar7 + 4 + (this->ContextState)._padding_) == param_1) {
        uVar3 = 0;
        if ((int)uVar5 < (int)(this->ContextState)._padding_) {
          uVar3 = uVar6;
        }
        if (uVar3 == 0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        *(undefined4 *)(lVar7 + (this->ContextState)._padding_) = 0;
        uVar3 = 0;
        if ((int)uVar5 < (int)(this->ContextState)._padding_) {
          uVar3 = uVar6;
        }
        if (uVar3 == 0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        *(undefined4 *)(lVar7 + 4 + (this->ContextState)._padding_) = 0;
      }
      uVar3 = 0;
      if ((int)uVar5 < (int)(this->PendingState)._padding_) {
        uVar3 = uVar6;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (*(uint *)(lVar7 + 4 + (this->PendingState)._padding_) == param_1) {
        uVar3 = 0;
        if ((int)uVar5 < (int)(this->PendingState)._padding_) {
          uVar3 = uVar6;
        }
        if (uVar3 == 0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        *(undefined4 *)(lVar7 + (this->PendingState)._padding_) = 0;
        uVar3 = 0;
        if ((int)uVar5 < (int)(this->PendingState)._padding_) {
          uVar3 = uVar6;
        }
        if (uVar3 == 0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        *(undefined4 *)(lVar7 + 4 + (this->PendingState)._padding_) = 0;
      }
      uVar5 = uVar5 + 1;
      lVar7 = lVar7 + 0x18;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}

// LinkComputeProgram @ 145c0b370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::LinkComputeProgram(FOpenGLDynamicRHI *this,FRHIComputeShader *param_1)

{
  FOpenGLShaderParameterCache *pFVar1;
  code *pcVar2;
  bool bVar3;
  HGLRC pHVar4;
  FGLProgramCache *pFVar5;
  FOpenGLLinkedProgram *pFVar6;
  FOpenGLLinkedProgram *pFVar7;
  uint uVar8;
  undefined1 auStack_e8 [32];
  uint local_c8;
  uint local_c0;
  FOpenGLComputeShader *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  FOpenGLProgramKey local_9c;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_1[1]._padding_ == 0) {
    local_b8 = (FOpenGLComputeShader *)param_1;
    pHVar4 = wglGetCurrentContext();
    if (pHVar4 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
      uVar8 = (uint)GIsRunningRHIInSeparateThread_InternalUseOnly;
      bVar3 = IsInRHIThread();
      IsInRenderingThread();
      IsInGameThread();
      local_c8 = (uint)bVar3;
      local_c0 = uVar8;
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = 0;
    if ((((param_1->_padding_ == 0) && (param_1->_padding_ == 0)) && ((int)param_1->_padding_ == 0))
       && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("ComputeShaderRHI->GetHash() != FSHAHash()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                              ,0xa0e,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_9c.ShaderHashes[0].Hash[0x10] = '\0';
    local_9c.ShaderHashes[0].Hash[0x11] = '\0';
    local_9c.ShaderHashes[0].Hash[0x12] = '\0';
    local_9c.ShaderHashes[0].Hash[0x13] = '\0';
    local_9c.ShaderHashes[0].Hash[0] = '\0';
    local_9c.ShaderHashes[0].Hash[1] = '\0';
    local_9c.ShaderHashes[0].Hash[2] = '\0';
    local_9c.ShaderHashes[0].Hash[3] = '\0';
    local_9c.ShaderHashes[0].Hash[4] = '\0';
    local_9c.ShaderHashes[0].Hash[5] = '\0';
    local_9c.ShaderHashes[0].Hash[6] = '\0';
    local_9c.ShaderHashes[0].Hash[7] = '\0';
    local_9c.ShaderHashes[0].Hash[8] = '\0';
    local_9c.ShaderHashes[0].Hash[9] = '\0';
    local_9c.ShaderHashes[0].Hash[10] = '\0';
    local_9c.ShaderHashes[0].Hash[0xb] = '\0';
    local_9c.ShaderHashes[0].Hash[0xc] = '\0';
    local_9c.ShaderHashes[0].Hash[0xd] = '\0';
    local_9c.ShaderHashes[0].Hash[0xe] = '\0';
    local_9c.ShaderHashes[0].Hash[0xf] = '\0';
    local_9c.ShaderHashes[1].Hash[0x10] = '\0';
    local_9c.ShaderHashes[1].Hash[0x11] = '\0';
    local_9c.ShaderHashes[1].Hash[0x12] = '\0';
    local_9c.ShaderHashes[1].Hash[0x13] = '\0';
    local_9c.ShaderHashes[2].Hash[0] = '\0';
    local_9c.ShaderHashes[2].Hash[1] = '\0';
    local_9c.ShaderHashes[2].Hash[2] = '\0';
    local_9c.ShaderHashes[2].Hash[3] = '\0';
    local_9c.ShaderHashes[2].Hash[4] = '\0';
    local_9c.ShaderHashes[2].Hash[5] = '\0';
    local_9c.ShaderHashes[2].Hash[6] = '\0';
    local_9c.ShaderHashes[2].Hash[7] = '\0';
    local_9c.ShaderHashes[2].Hash[8] = '\0';
    local_9c.ShaderHashes[2].Hash[9] = '\0';
    local_9c.ShaderHashes[2].Hash[10] = '\0';
    local_9c.ShaderHashes[2].Hash[0xb] = '\0';
    local_9c.ShaderHashes[2].Hash[0xc] = '\0';
    local_9c.ShaderHashes[2].Hash[0xd] = '\0';
    local_9c.ShaderHashes[2].Hash[0xe] = '\0';
    local_9c.ShaderHashes[2].Hash[0xf] = '\0';
    local_9c.ShaderHashes[2].Hash[0x10] = '\0';
    local_9c.ShaderHashes[2].Hash[0x11] = '\0';
    local_9c.ShaderHashes[2].Hash[0x12] = '\0';
    local_9c.ShaderHashes[2].Hash[0x13] = '\0';
    local_9c.ShaderHashes[4].Hash[0] = '\0';
    local_9c.ShaderHashes[4].Hash[1] = '\0';
    local_9c.ShaderHashes[4].Hash[2] = '\0';
    local_9c.ShaderHashes[4].Hash[3] = '\0';
    local_9c.ShaderHashes[4].Hash[4] = '\0';
    local_9c.ShaderHashes[4].Hash[5] = '\0';
    local_9c.ShaderHashes[4].Hash[6] = '\0';
    local_9c.ShaderHashes[4].Hash[7] = '\0';
    local_9c.ShaderHashes[4].Hash[8] = '\0';
    local_9c.ShaderHashes[4].Hash[9] = '\0';
    local_9c.ShaderHashes[4].Hash[10] = '\0';
    local_9c.ShaderHashes[4].Hash[0xb] = '\0';
    local_9c.ShaderHashes[4].Hash[0xc] = '\0';
    local_9c.ShaderHashes[4].Hash[0xd] = '\0';
    local_9c.ShaderHashes[4].Hash[0xe] = '\0';
    local_9c.ShaderHashes[4].Hash[0xf] = '\0';
    local_9c.ShaderHashes[3].Hash[0x10] = '\0';
    local_9c.ShaderHashes[3].Hash[0x11] = '\0';
    local_9c.ShaderHashes[3].Hash[0x12] = '\0';
    local_9c.ShaderHashes[3].Hash[0x13] = '\0';
    local_9c.ShaderHashes[5].Hash._0_8_ = param_1->_padding_;
    local_9c.ShaderHashes[5].Hash._8_8_ = param_1->_padding_;
    local_9c.ShaderHashes[4].Hash[0x10] = '\0';
    local_9c.ShaderHashes[4].Hash[0x11] = '\0';
    local_9c.ShaderHashes[4].Hash[0x12] = '\0';
    local_9c.ShaderHashes[4].Hash[0x13] = '\0';
    local_9c.ShaderHashes[5].Hash._16_4_ = *(undefined4 *)&param_1->_padding_;
    local_9c.ShaderHashes[1].Hash[0] = '\0';
    local_9c.ShaderHashes[1].Hash[1] = '\0';
    local_9c.ShaderHashes[1].Hash[2] = '\0';
    local_9c.ShaderHashes[1].Hash[3] = '\0';
    local_9c.ShaderHashes[1].Hash[4] = '\0';
    local_9c.ShaderHashes[1].Hash[5] = '\0';
    local_9c.ShaderHashes[1].Hash[6] = '\0';
    local_9c.ShaderHashes[1].Hash[7] = '\0';
    local_9c.ShaderHashes[1].Hash[8] = '\0';
    local_9c.ShaderHashes[1].Hash[9] = '\0';
    local_9c.ShaderHashes[1].Hash[10] = '\0';
    local_9c.ShaderHashes[1].Hash[0xb] = '\0';
    local_9c.ShaderHashes[1].Hash[0xc] = '\0';
    local_9c.ShaderHashes[1].Hash[0xd] = '\0';
    local_9c.ShaderHashes[1].Hash[0xe] = '\0';
    local_9c.ShaderHashes[1].Hash[0xf] = '\0';
    local_9c.ShaderHashes[3].Hash[0] = '\0';
    local_9c.ShaderHashes[3].Hash[1] = '\0';
    local_9c.ShaderHashes[3].Hash[2] = '\0';
    local_9c.ShaderHashes[3].Hash[3] = '\0';
    local_9c.ShaderHashes[3].Hash[4] = '\0';
    local_9c.ShaderHashes[3].Hash[5] = '\0';
    local_9c.ShaderHashes[3].Hash[6] = '\0';
    local_9c.ShaderHashes[3].Hash[7] = '\0';
    local_9c.ShaderHashes[3].Hash[8] = '\0';
    local_9c.ShaderHashes[3].Hash[9] = '\0';
    local_9c.ShaderHashes[3].Hash[10] = '\0';
    local_9c.ShaderHashes[3].Hash[0xb] = '\0';
    local_9c.ShaderHashes[3].Hash[0xc] = '\0';
    local_9c.ShaderHashes[3].Hash[0xd] = '\0';
    local_9c.ShaderHashes[3].Hash[0xe] = '\0';
    local_9c.ShaderHashes[3].Hash[0xf] = '\0';
    pFVar5 = GetOpenGLProgramsCache();
    pFVar6 = FGLProgramCache::Find(pFVar5,&local_9c,true);
    param_1[1]._padding_ = (longlong)pFVar6;
    if ((pFVar6 == (FOpenGLLinkedProgram *)0x0) &&
       (bVar3 = FOpenGLProgramBinaryCache::CheckSinglePendingGLProgramCreateRequest(&local_9c),
       bVar3)) {
      pFVar5 = GetOpenGLProgramsCache();
      pFVar6 = FGLProgramCache::Find(pFVar5,&local_9c,true);
      param_1[1]._padding_ = (longlong)pFVar6;
    }
    if ((FOpenGLLinkedProgram *)param_1[1]._padding_ == (FOpenGLLinkedProgram *)0x0) {
      pFVar1 = (this->PendingState).ShaderParameters;
      (this->ContextState).Program = 0xffffffff;
      MarkShaderParameterCachesDirty(pFVar1,true);
      pFVar7 = (FOpenGLLinkedProgram *)0x0;
      (this->PendingState).LinkedProgramAndDirtyFlag = (FOpenGLLinkedProgram *)0x0;
      pFVar6 = ::operator_new(0x2a8);
      if (pFVar6 != (FOpenGLLinkedProgram *)0x0) {
        pFVar7 = FOpenGLLinkedProgram::FOpenGLLinkedProgram(pFVar6,(FOpenGLComputeShader *)param_1);
      }
      param_1[1]._padding_ = (longlong)pFVar7;
    }
    else {
      FOpenGLLinkedProgram::
      UpdateShaders<FOpenGLLinkedProgram::FComputeProgram,FOpenGLComputeShader_*_&>
                ((FOpenGLLinkedProgram *)param_1[1]._padding_,&local_b8);
    }
  }
  return;
}

// LockBuffer_BottomOfPipe @ 145c0c810

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void * __thiscall
FOpenGLDynamicRHI::LockBuffer_BottomOfPipe
          (FOpenGLDynamicRHI *this,FRHICommandListBase *param_1,FRHIBuffer *param_2,uint param_3,
          uint param_4,EResourceLockMode param_5)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  HGLRC pHVar4;
  uchar *puVar5;
  
  if ((param_4 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Size > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBuffer.cpp"
                         ,0x10b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  pHVar4 = wglGetCurrentContext();
  if (pHVar4 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (((((param_2->Desc).Usage & AnyDynamic) != None) && (param_5 == RLM_WriteOnly)) &&
     (pvVar3 = GetAllocation(param_2,param_4,param_3,0x10), pvVar3 != (void *)0x0)) {
    return pvVar3;
  }
  puVar5 = TOpenGLBuffer<FOpenGLBaseBuffer>::Lock
                     ((TOpenGLBuffer<FOpenGLBaseBuffer> *)param_2,param_3,param_4,
                      param_5 == RLM_ReadOnly,param_5 != RLM_ReadOnly);
  return puVar5;
}

// LockStagingBuffer_RenderThread @ 145c0c920

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FOpenGLDynamicRHI::LockStagingBuffer_RenderThread
          (FOpenGLDynamicRHI *this,FRHICommandListImmediate *param_1,FRHIStagingBuffer *param_2,
          FRHIGPUFence *param_3,uint param_4,uint param_5)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  void *pvVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_public:_virtual_void_*___cdecl_FOpenGLDynamicRHI::LockStagingBuffer_RenderThread(FRHICommandListImmediate_&,FRHIStagingBuffer_*,FRHIGPUFence_*,unsigned_int,unsigned_int)_::_12_::FStat_STAT_FDynamicRHI_LockStagingBuffer_Flush>
  FVar9;
  FThreadSafeStaticStat<_public:_virtual_void_*___cdecl_FOpenGLDynamicRHI::LockStagingBuffer_RenderThread(FRHICommandListImmediate_&,FRHIStagingBuffer_*,FRHIGPUFence_*,unsigned_int,unsigned_int)_::_13_::FStat_STAT_FDynamicRHI_LockStagingBuffer_RenderThread>
  FVar10;
  FThreadStats *pFVar11;
  FThreadStatsPool *pFVar12;
  FColor_u_0 FVar13;
  FName FVar14;
  FName FVar15;
  FNameEntryId FVar16;
  FNameEntryId FVar17;
  bool bVar18;
  FColor_u_0 local_res20;
  uint uStackX_24;
  FColor_u_0 local_c8 [2];
  FName local_c0;
  FName local_b0;
  FColor_u_0 local_a0;
  uint local_9c;
  FColor_u_0 local_98;
  uint local_94;
  LARGE_INTEGER local_90;
  LARGE_INTEGER local_88;
  FStatMessage local_80;
  FStatMessage local_70;
  FName local_60;
  FName local_58;
  FName local_50;
  FName local_48 [2];
  
  bVar4 = IsInRenderingThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBuffer.cpp"
                         ,0x186,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pvVar7 = (void *)(*pcVar2)();
    return pvVar7;
  }
  FVar16.Value = 0;
  if (((param_3 == (FRHIGPUFence *)0x0) ||
      (cVar5 = (**(code **)(param_3->_padding_ + 0x20))(param_3), cVar5 == '\0')) ||
     ((param_3->NumPendingWriteCommands).Counter != 0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      if (StatPtr_STAT_FDynamicRHI_LockStagingBuffer_Flush ==
          (FThreadSafeStaticStat<_public:_virtual_void_*___cdecl_FOpenGLDynamicRHI::LockStagingBuffer_RenderThread(FRHICommandListImmediate_&,FRHIStagingBuffer_*,FRHIGPUFence_*,unsigned_int,unsigned_int)_::_12_::FStat_STAT_FDynamicRHI_LockStagingBuffer_Flush>
           )0x0) {
        pFVar8 = ::FName::FName(&local_60,"STAT_FDynamicRHI_LockStagingBuffer_Flush");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FDynamicRHI_LockStagingBuffer_Flush,
                   *pFVar8,L"STAT_FDynamicRHI_LockStagingBuffer_Flush","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
    FVar9 = StatPtr_STAT_FDynamicRHI_LockStagingBuffer_Flush;
    if (StatPtr_STAT_FDynamicRHI_LockStagingBuffer_Flush ==
        (FThreadSafeStaticStat<_public:_virtual_void_*___cdecl_FOpenGLDynamicRHI::LockStagingBuffer_RenderThread(FRHICommandListImmediate_&,FRHIStagingBuffer_*,FRHIGPUFence_*,unsigned_int,unsigned_int)_::_12_::FStat_STAT_FDynamicRHI_LockStagingBuffer_Flush>
         )0x0) {
      pFVar8 = ::FName::FName(&local_58,"STAT_FDynamicRHI_LockStagingBuffer_Flush");
      FVar9 = (FThreadSafeStaticStat<_public:_virtual_void_*___cdecl_FOpenGLDynamicRHI::LockStagingBuffer_RenderThread(FRHICommandListImmediate_&,FRHIStagingBuffer_*,FRHIGPUFence_*,unsigned_int,unsigned_int)_::_12_::FStat_STAT_FDynamicRHI_LockStagingBuffer_Flush>
               )FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)
                           &StatPtr_STAT_FDynamicRHI_LockStagingBuffer_Flush,*pFVar8,
                           L"STAT_FDynamicRHI_LockStagingBuffer_Flush","STATGROUP_Quick",
                           "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar15 = *(FName *)FVar9;
    bVar4 = false;
    bVar3 = false;
    local_c0.ComparisonIndex.Value = 0;
    local_c0.Number = 0;
    FVar13.Bits = (uint)FVar15.ComparisonIndex.Value;
    uVar6 = FVar15.Number;
    if ((FVar13.Bits == 0) && (uVar6 == 0)) {
      FRHICommandListImmediate::ImmediateFlush(param_1,FlushRHIThread,None);
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_res20.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_res20._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
        bVar4 = false;
        bVar3 = true;
        if (-1 < CpuChannel->Enabled) {
          local_a0.Bits = FVar13.Bits;
          local_9c = uVar6;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    ((FName *)&local_a0._s_0,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBuffer.cpp"
                     ,0x189);
          bVar4 = true;
          bVar3 = true;
        }
      }
      bVar18 = FThreadStats::bPrimaryEnable != false;
      FVar14 = local_c0;
      FVar17.Value = FVar16.Value;
      if (bVar18) {
        local_res20.Bits = FVar13.Bits;
        uStackX_24 = uVar6;
        local_c0 = FVar15;
        FThreadStats::AddMessage(FVar15,CycleScopeStart);
        FVar14 = FVar15;
        FVar17.Value = local_c0.ComparisonIndex.Value;
      }
      FRHICommandListImmediate::ImmediateFlush(param_1,FlushRHIThread,None);
      if (bVar3) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar4) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar18) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar11 == (FThreadStats *)0x0) {
          pFVar12 = FThreadStatsPool::Get();
          pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
        }
        if (pFVar11->bWaitForExplicitFlush < pFVar11->ScopeCount) {
          local_80.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
          local_80.NameAndInfo.Index.Value = FVar17.Value;
          QueryPerformanceCounter(&local_90);
          local_80.StatData.Pad[4] = '\0';
          local_80.StatData.Pad[5] = '\0';
          local_80.StatData.Pad[6] = '\0';
          local_80.StatData.Pad[7] = '\0';
          local_80.StatData.Pad[0] = local_90.s.LowPart._0_1_;
          local_80.StatData.Pad[1] = local_90.s.LowPart._1_1_;
          local_80.StatData.Pad[2] = local_90.s.LowPart._2_1_;
          local_80.StatData.Pad[3] = local_90.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(pFVar11,&local_80);
          piVar1 = &pFVar11->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(pFVar11,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar11,false,false);
          }
        }
      }
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    if (StatPtr_STAT_FDynamicRHI_LockStagingBuffer_RenderThread ==
        (FThreadSafeStaticStat<_public:_virtual_void_*___cdecl_FOpenGLDynamicRHI::LockStagingBuffer_RenderThread(FRHICommandListImmediate_&,FRHIStagingBuffer_*,FRHIGPUFence_*,unsigned_int,unsigned_int)_::_13_::FStat_STAT_FDynamicRHI_LockStagingBuffer_RenderThread>
         )0x0) {
      pFVar8 = ::FName::FName(&local_50,"STAT_FDynamicRHI_LockStagingBuffer_RenderThread");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_FDynamicRHI_LockStagingBuffer_RenderThread,*pFVar8,
                 L"STAT_FDynamicRHI_LockStagingBuffer_RenderThread","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS1);
  }
  FVar10 = StatPtr_STAT_FDynamicRHI_LockStagingBuffer_RenderThread;
  if (StatPtr_STAT_FDynamicRHI_LockStagingBuffer_RenderThread ==
      (FThreadSafeStaticStat<_public:_virtual_void_*___cdecl_FOpenGLDynamicRHI::LockStagingBuffer_RenderThread(FRHICommandListImmediate_&,FRHIStagingBuffer_*,FRHIGPUFence_*,unsigned_int,unsigned_int)_::_13_::FStat_STAT_FDynamicRHI_LockStagingBuffer_RenderThread>
       )0x0) {
    pFVar8 = ::FName::FName(local_48,"STAT_FDynamicRHI_LockStagingBuffer_RenderThread");
    FVar10 = (FThreadSafeStaticStat<_public:_virtual_void_*___cdecl_FOpenGLDynamicRHI::LockStagingBuffer_RenderThread(FRHICommandListImmediate_&,FRHIStagingBuffer_*,FRHIGPUFence_*,unsigned_int,unsigned_int)_::_13_::FStat_STAT_FDynamicRHI_LockStagingBuffer_RenderThread>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FDynamicRHI_LockStagingBuffer_RenderThread,*pFVar8,
                          L"STAT_FDynamicRHI_LockStagingBuffer_RenderThread","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar10;
  bVar4 = false;
  bVar3 = false;
  local_b0.ComparisonIndex.Value = 0;
  local_b0.Number = 0;
  FVar13.Bits = (uint)FVar15.ComparisonIndex.Value;
  uVar6 = FVar15.Number;
  if ((FVar13.Bits != 0) || (uVar6 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_c8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_c8[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar4 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_98.Bits = FVar13.Bits;
        local_94 = uVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_98._s_0,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBuffer.cpp"
                   ,0x18d);
        bVar4 = true;
        bVar3 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.Bits = FVar13.Bits;
      uStackX_24 = uVar6;
      local_b0 = FVar15;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar18 = true;
      FVar16.Value = local_b0.ComparisonIndex.Value;
      goto LAB_145c0cd1c;
    }
  }
  bVar18 = false;
  FVar15 = local_b0;
LAB_145c0cd1c:
  pvVar7 = (void *)(**(code **)(GDynamicRHI->_padding_ + 0xe8))
                             (GDynamicRHI,param_2,param_3,param_4,param_5);
  if (bVar3) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar18) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar11 == (FThreadStats *)0x0) {
      pFVar12 = FThreadStatsPool::Get();
      pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
    }
    if (pFVar11->bWaitForExplicitFlush < pFVar11->ScopeCount) {
      local_70.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      local_70.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_88);
      local_70.StatData.Pad[4] = '\0';
      local_70.StatData.Pad[5] = '\0';
      local_70.StatData.Pad[6] = '\0';
      local_70.StatData.Pad[7] = '\0';
      local_70.StatData.Pad[0] = local_88.s.LowPart._0_1_;
      local_70.StatData.Pad[1] = local_88.s.LowPart._1_1_;
      local_70.StatData.Pad[2] = local_88.s.LowPart._2_1_;
      local_70.StatData.Pad[3] = local_88.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar11,&local_70);
      piVar1 = &pFVar11->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
  }
  return pvVar7;
}

// OnBufferDeletion @ 145c0de10

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::OnBufferDeletion(FOpenGLDynamicRHI *this,uint param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  HGLRC pHVar3;
  FOpenGLStream *pFVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar8;
  
  pHVar3 = wglGetCurrentContext();
  if (pHVar3 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (param_1 == 0x88ec) {
    if ((this->ContextState).PixelUnpackBufferBound == param_2) {
      (this->ContextState).PixelUnpackBufferBound = 0xffffffff;
    }
  }
  else {
    if ((this->ContextState).ArrayBufferBound == param_2) {
      (this->ContextState).ArrayBufferBound = 0xffffffff;
    }
    if ((this->ContextState).StorageBufferBound == param_2) {
      (this->ContextState).StorageBufferBound = 0xffffffff;
    }
    uVar9 = (this->ContextState).ActiveStreamMask;
    pFVar4 = (this->ContextState).VertexStreams;
    uVar5 = 0;
    uVar8 = uVar5;
    do {
      if (uVar9 == 0) break;
      if (((uVar9 & 1) != 0) && (pFVar4->VertexBufferResource == param_2)) {
        (*glBindVertexBuffer)((uint)uVar8,0,0,0);
        pFVar4->VertexBufferResource = 0;
        pFVar4->Stride = 0;
        pFVar4->Offset = 0;
      }
      uVar9 = uVar9 >> 1;
      uVar6 = (uint)uVar8 + 1;
      uVar8 = (ulonglong)uVar6;
      pFVar4 = pFVar4 + 1;
    } while (uVar6 < 0x10);
    lVar10 = (longlong)(int)(this->PendingState)._padding_;
    uVar8 = uVar5;
    if (0 < lVar10) {
      do {
        uVar6 = (uint)uVar5;
        uVar7 = ~uVar6 >> 0x1f;
        uVar9 = 0;
        if ((int)uVar6 < (int)(this->PendingState)._padding_) {
          uVar9 = uVar7;
        }
        if ((uVar9 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (*(int *)(uVar8 + (this->PendingState)._padding_) == 0) {
          uVar9 = 0;
          if ((int)uVar6 < (int)(this->PendingState)._padding_) {
            uVar9 = uVar7;
          }
          if ((uVar9 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (*(uint *)(uVar8 + 4 + (this->PendingState)._padding_) == param_2) {
            uVar9 = 0;
            if ((int)uVar6 < (int)(this->PendingState)._padding_) {
              uVar9 = uVar7;
            }
            if ((uVar9 == 0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            *(undefined4 *)(uVar8 + 4 + (this->PendingState)._padding_) = 0;
          }
        }
        uVar5 = (ulonglong)(uVar6 + 1);
        lVar10 = lVar10 + -1;
        uVar8 = uVar8 + 0x18;
      } while (lVar10 != 0);
    }
    if ((this->ContextState).ElementArrayBufferBound == param_2) {
      (this->ContextState).ElementArrayBufferBound = 0xffffffff;
    }
  }
  return;
}

// OnProgramDeletion @ 145c0e790

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOpenGLDynamicRHI::OnProgramDeletion(FOpenGLDynamicRHI *this,int param_1)

{
  HGLRC pHVar1;
  
  pHVar1 = wglGetCurrentContext();
  if (pHVar1 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if ((this->ContextState).Program == param_1) {
    (this->ContextState).Program = 0xffffffff;
  }
  return;
}

// PrepareGFXBoundShaderState @ 145c16460

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::PrepareGFXBoundShaderState
          (FOpenGLDynamicRHI *this,FGraphicsPipelineStateInitializer *param_1)

{
  if (((bOneTime) && (((param_1->field25_0xd2).Flags & 0x1800) != 0)) &&
     (FOpenGLProgramBinaryCache::CachePtr != (FOpenGLProgramBinaryCache *)0x0)) {
    if (2 < (byte)LogRHI._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    bOneTime = false;
  }
  return;
}

// PurgeFramebufferFromCaches @ 145c176d0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOpenGLDynamicRHI::PurgeFramebufferFromCaches(FOpenGLDynamicRHI *this,uint param_1)

{
  HGLRC pHVar1;
  
  pHVar1 = wglGetCurrentContext();
  if (pHVar1 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (param_1 == (this->PendingState).Framebuffer) {
    (this->PendingState).Framebuffer = 0;
    (this->PendingState).RenderTargets[0] = (FOpenGLTexture *)0x0;
    (this->PendingState).RenderTargets[1] = (FOpenGLTexture *)0x0;
    (this->PendingState).RenderTargets[2] = (FOpenGLTexture *)0x0;
    (this->PendingState).RenderTargets[3] = (FOpenGLTexture *)0x0;
    (this->PendingState).RenderTargets[4] = (FOpenGLTexture *)0x0;
    (this->PendingState).RenderTargets[5] = (FOpenGLTexture *)0x0;
    (this->PendingState).RenderTargets[6] = (FOpenGLTexture *)0x0;
    (this->PendingState).RenderTargets[7] = (FOpenGLTexture *)0x0;
    (this->PendingState).RenderTargetMipmapLevels[0] = 0;
    (this->PendingState).RenderTargetMipmapLevels[1] = 0;
    (this->PendingState).RenderTargetMipmapLevels[2] = 0;
    (this->PendingState).RenderTargetMipmapLevels[3] = 0;
    (this->PendingState).RenderTargetMipmapLevels[4] = 0;
    (this->PendingState).RenderTargetMipmapLevels[5] = 0;
    (this->PendingState).RenderTargetMipmapLevels[6] = 0;
    (this->PendingState).RenderTargetMipmapLevels[7] = 0;
    (this->PendingState).RenderTargetArrayIndex[0] = 0;
    (this->PendingState).RenderTargetArrayIndex[1] = 0;
    (this->PendingState).RenderTargetArrayIndex[2] = 0;
    (this->PendingState).RenderTargetArrayIndex[3] = 0;
    (this->PendingState).RenderTargetArrayIndex[4] = 0;
    (this->PendingState).RenderTargetArrayIndex[5] = 0;
    (this->PendingState).RenderTargetArrayIndex[6] = 0;
    (this->PendingState).RenderTargetArrayIndex[7] = 0;
    (this->PendingState).DepthStencil = (FOpenGLTexture *)0x0;
    (this->PendingState).bFramebufferSetupInvalid = true;
  }
  if (param_1 == (this->ContextState).Framebuffer) {
    (this->ContextState).Framebuffer = 0xffffffff;
  }
  return;
}

// RHIAcquireThreadOwnership @ 145c177e0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOpenGLDynamicRHI::RHIAcquireThreadOwnership(FOpenGLDynamicRHI *this)

{
  FPlatformOpenGLDevice *pFVar1;
  code *pcVar2;
  bool bVar3;
  BOOL BVar4;
  HGLRC pHVar5;
  
  pFVar1 = this->PlatformDevice;
  if ((((pFVar1 == (FPlatformOpenGLDevice *)0x0) ||
       ((pFVar1->RenderingContext).DeviceContext == (HDC__ *)0x0)) ||
      ((pFVar1->RenderingContext).OpenGLContext == (HGLRC__ *)0x0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Device && Device->RenderingContext.DeviceContext && Device->RenderingContext.OpenGLContext"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\Windows\\WindowsOpenGLPlatform.cpp"
                         ,0x20f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pHVar5 = wglGetCurrentContext();
  if (pHVar5 != (HGLRC)0x0) {
    (*glFlush)();
  }
  pHVar5 = (HGLRC)(pFVar1->RenderingContext).OpenGLContext;
  if ((pFVar1->ViewportContexts).ArrayNum == 1) {
    BVar4 = wglMakeCurrent(*(HDC *)(*(longlong *)(pFVar1->ViewportContexts).AllocatorInstance.Data +
                                   8),pHVar5);
    if (((BVar4 == 0) && (BVar4 = wglMakeCurrent((HDC)0x0,(HGLRC)0x0), BVar4 == 0)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\Windows\\WindowsOpenGLPlatform.cpp"
                           ,0x18,L""), bVar3)) {
code_r0x000145c178cb:
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    BVar4 = wglMakeCurrent((HDC)(pFVar1->RenderingContext).DeviceContext,pHVar5);
    if (((BVar4 == 0) && (BVar4 = wglMakeCurrent((HDC)0x0,(HGLRC)0x0), BVar4 == 0)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\Windows\\WindowsOpenGLPlatform.cpp"
                           ,0x18,L""), bVar3)) goto code_r0x000145c178cb;
  }
  pHVar5 = wglGetCurrentContext();
  if (pHVar5 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  return;
}

// RHIAdvanceFrameForGetViewportBackBuffer @ 145c17940

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHIAdvanceFrameForGetViewportBackBuffer
          (FOpenGLDynamicRHI *this,FRHIViewport *param_1,bool param_2)

{
  return;
}

// RHIAliasTextureResources @ 145c17950

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHIAliasTextureResources
          (FOpenGLDynamicRHI *this,TRefCountPtr<FRHITexture> *param_1,
          TRefCountPtr<FRHITexture> *param_2)

{
  HGLRC pHVar1;
  FOpenGLTexture *this_00;
  FOpenGLTexture *pFVar2;
  
  pHVar1 = wglGetCurrentContext();
  if (pHVar1 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  pFVar2 = (FOpenGLTexture *)0x0;
  this_00 = pFVar2;
  if (param_1->Reference != (FRHITexture *)0x0) {
    this_00 = (FOpenGLTexture *)(**(code **)(param_1->Reference->_padding_ + 0x48))();
  }
  if (param_2->Reference != (FRHITexture *)0x0) {
    pFVar2 = (FOpenGLTexture *)(**(code **)(param_2->Reference->_padding_ + 0x48))();
  }
  if ((this_00 != (FOpenGLTexture *)0x0) && (pFVar2 != (FOpenGLTexture *)0x0)) {
    FOpenGLTexture::AliasResources(this_00,pFVar2);
  }
  return;
}

// RHIAsyncCreateTexture2D @ 145c17a20

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

TRefCountPtr<FRHITexture> __thiscall
FOpenGLDynamicRHI::RHIAsyncCreateTexture2D
          (FOpenGLDynamicRHI *this,uint param_1,uint param_2,uchar param_3,uint param_4,
          ETextureCreateFlags param_5,ERHIAccess param_6,void **param_7,uint param_8,
          wchar_t *param_9,TRefCountPtr<FBaseGraphTask> *param_10)

{
  code *pcVar1;
  bool bVar2;
  TRefCountPtr<FRHITexture> TVar3;
  undefined4 in_register_00000014;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                     ,0x5f9,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    TVar3.Reference = (FRHITexture *)(*pcVar1)();
    return (TRefCountPtr<FRHITexture>)TVar3.Reference;
  }
  ((FRHITexture *)CONCAT44(in_register_00000014,param_1))->_padding_ = 0;
  return (TRefCountPtr<FRHITexture>)(FRHITexture *)CONCAT44(in_register_00000014,param_1);
}

// RHIAsyncReallocateTexture2D @ 145c17a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TRefCountPtr<FRHITexture> __thiscall
FOpenGLDynamicRHI::RHIAsyncReallocateTexture2D
          (FOpenGLDynamicRHI *this,FRHITexture *param_1,int param_2,int param_3,int param_4,
          FThreadSafeCounter *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  ERHIAccess EVar9;
  TRefCountPtr<FRHITexture> TVar10;
  longlong *plVar11;
  FRHITextureDesc *pFVar12;
  TEventRef<unsigned_int> TVar13;
  FOpenGLTexture *pFVar14;
  undefined8 *puVar15;
  FWriteBuffer *pFVar16;
  undefined4 in_register_00000084;
  longlong *plVar17;
  undefined8 in_stack_00000038;
  undefined1 auStack_258 [36];
  uint local_234;
  int local_230;
  undefined8 local_22c;
  undefined8 local_224;
  undefined8 local_21c;
  FName local_214;
  longlong local_20c;
  longlong local_204;
  longlong *local_1f8;
  FOpenGLTexture *local_1f0;
  uint local_1e8;
  int local_1e4;
  FName local_1d8;
  FName local_1d0;
  FName local_1c8 [2];
  FRHITextureDesc local_1b8;
  wchar_t *local_168;
  ERHIAccess local_160;
  undefined4 local_15c;
  undefined8 local_158;
  longlong local_150;
  longlong local_148;
  FRHITextureDesc local_138;
  undefined4 *local_e8;
  longlong local_e0;
  undefined1 local_d8 [80];
  wchar_t *local_88;
  ERHIAccess local_80;
  undefined4 local_7c;
  undefined8 local_78;
  longlong local_70;
  longlong local_68;
  FOpenGLTextureDesc local_60;
  ulonglong local_48;
  
  plVar17 = (longlong *)CONCAT44(in_register_00000084,param_2);
  local_48 = __security_cookie.value ^ (ulonglong)auStack_258;
  plVar11 = (longlong *)0x0;
  local_234 = 0;
  local_230 = param_3;
  bVar8 = IsInRenderingThread();
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x1594,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    TVar10.Reference = (FRHITexture *)(*pcVar5)();
    return (TRefCountPtr<FRHITexture>)TVar10.Reference;
  }
  if (plVar17 != (longlong *)0x0) {
    plVar11 = (longlong *)(**(code **)(*plVar17 + 0x48))(plVar17);
  }
  pFVar12 = (FRHITextureDesc *)(**(code **)(*plVar11 + 0x20))(plVar11);
  FRHITextureDesc::FRHITextureDesc(&local_138,pFVar12);
  local_138.Extent.field0_0x0._s_0.X = param_4;
  local_138.Extent.field0_0x0._s_0.Y = (int)param_5;
  local_234 = (uint)local_138.NumMips;
  local_138.NumMips = (uchar)param_3;
  EVar9 = RHIGetDefaultResourceState(local_138.Flags,false);
  FRHITextureDesc::FRHITextureDesc(&local_1b8,&local_138);
  local_168 = L"RHIAsyncReallocateTexture2D";
  local_160 = EVar9;
  local_15c = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = plVar11[2];
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_22c = 0;
    TVar13 = (TEventRef<unsigned_int>)&local_22c;
  }
  else {
    ::FName::FName(&local_214,L"RHIAsyncReallocateTexture2D");
    TVar13 = FStringTrace::GetNameRef(&local_1d8);
  }
  uVar1 = *(undefined8 *)TVar13;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_224 = 0;
    TVar13 = (TEventRef<unsigned_int>)&local_224;
  }
  else {
    local_204 = local_150;
    if (local_150 == 0) {
      FLazyName::Resolve((FLazyName *)
                         &`public:_class_FName___cdecl_FRHITextureCreateDesc::GetTraceClassName(void)const___ptr64'
                          ::__l2::FRHITextureName);
      local_204 = local_20c;
    }
    TVar13 = FStringTrace::GetNameRef(&local_1d0);
  }
  uVar2 = *(undefined8 *)TVar13;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_21c = 0;
    TVar13 = (TEventRef<unsigned_int>)&local_21c;
  }
  else {
    TVar13 = FStringTrace::GetNameRef(local_1c8);
  }
  uVar3 = *(undefined8 *)TVar13;
  bVar8 = false;
  if ((-1 < MetadataChannel->Enabled) && (-1 < AssetMetadataChannel->Enabled)) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>((TLogScope<0> *)&local_e8);
    bVar8 = true;
    *local_e8 = (int)uVar1;
    local_e8[1] = (int)uVar2;
    local_e8[2] = (int)uVar3;
    *(undefined8 *)(local_e0 + 0x28) = *(undefined8 *)(local_e0 + 0x20);
  }
  pFVar14 = ::operator_new(0x198);
  if (pFVar14 == (FOpenGLTexture *)0x0) {
    pFVar14 = (FOpenGLTexture *)0x0;
  }
  else {
    FRHITextureDesc::FRHITextureDesc((FRHITextureDesc *)local_d8,&local_1b8);
    local_88 = local_168;
    local_80 = local_160;
    local_7c = local_15c;
    local_70 = local_150;
    local_78 = local_158;
    local_68 = local_148;
    FOpenGLTextureDesc::FOpenGLTextureDesc(&local_60,&local_1b8);
    pFVar14 = FOpenGLTexture::FOpenGLTexture(pFVar14,(FOpenGLTextureCreateDesc *)local_d8);
    if ((ForElementType<EPixelFormat>)local_d8._64_8_ != (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_d8._64_8_);
    }
  }
  iVar7 = local_230;
  uVar6 = local_234;
  local_1e8 = local_234;
  local_1e4 = local_230;
  local_1f8 = plVar11;
  local_1f0 = pFVar14;
  if (((GRHICommandList.bLatchedBypass == false) ||
      ((GRHICommandList.CommandListImmediate._667_1_ & 0x20) == 0)) &&
     (GRHICommandList.CommandListImmediate._100_1_ == '\0')) {
    puVar15 = FMemStackBase::Alloc((FMemStackBase *)&GRHICommandList.CommandListImmediate,0x38,8);
    GRHICommandList.CommandListImmediate._96_4_ = GRHICommandList.CommandListImmediate._96_4_ + 1;
    *(undefined8 **)GRHICommandList.CommandListImmediate._48_8_ = puVar15;
    GRHICommandList.CommandListImmediate._48_8_ = puVar15 + 1;
    *(undefined8 *)GRHICommandList.CommandListImmediate._48_8_ = 0;
    *puVar15 = &TRHILambdaCommand<FRHICommandListImmediate,`FOpenGLDynamicRHI::RHIAsyncReallocateTexture2D'::`2'::<lambda_1>_>
                ::_vftable_;
    puVar15[2] = plVar11;
    puVar15[3] = pFVar14;
    *(uint *)(puVar15 + 4) = uVar6;
    *(int *)((longlong)puVar15 + 0x24) = iVar7;
    puVar15[5] = in_stack_00000038;
    puVar15[6] = L"TRHILambdaCommand";
  }
  else {
    `FOpenGLDynamicRHI::RHIAsyncReallocateTexture2D'::__l2::<lambda_1>::operator()
              (&local_1f8,&GRHICommandList.CommandListImmediate);
  }
  param_1->_padding_ = (longlong)pFVar14;
  if (pFVar14 != (FOpenGLTexture *)0x0) {
    FRHIResource::AddRef((FRHIResource *)pFVar14);
  }
  if (bVar8) {
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar4 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar16 = *(FWriteBuffer **)(lVar4 + 0x20);
    if ((int)pFVar16 - *(int *)&pFVar16->Cursor < 1) {
      pFVar16 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar16->Cursor = '\n';
    pFVar16->Cursor = pFVar16->Cursor + 1;
    pFVar16->Committed = pFVar16->Cursor;
  }
  if (local_1b8.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_1b8.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  if (local_138.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_138.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  return (TRefCountPtr<FRHITexture>)param_1;
}

// RHIBeginBreadcrumbGPU @ 145c17ec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHIBeginBreadcrumbGPU(FOpenGLDynamicRHI *this,FRHIBreadcrumbNode *param_1)

{
  undefined1 *this_00;
  wchar_t wVar1;
  code *pcVar2;
  _func___cdecl_void_uint_uint_int_char_ptr *p_Var3;
  bool bVar4;
  wchar_t *_Str;
  size_t sVar5;
  FStats *pFVar6;
  FBeginBreadcrumb *pFVar7;
  longlong lVar8;
  ForAnyElementType FVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_208 [32];
  FRHIBreadcrumbNode *local_1e8;
  longlong local_1e0;
  longlong lStack_1d8;
  FScriptContainerElement local_1c8 [128];
  ForAnyElementType local_148;
  FScriptContainerElement *local_140;
  int local_138;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_208;
  local_1e8 = param_1;
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExecutingCmdList",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                         ,0x221,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (*(char *)(this->_padding_ + 0xf8) != '\0') {
    _Str = (wchar_t *)(**(code **)(param_1->_padding_ + 0x10))(param_1);
    lVar10 = 0;
    local_148.Data = (FScriptContainerElement *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_140 = (FScriptContainerElement *)0x0;
      local_138 = 0;
    }
    else {
      sVar5 = wcslen(_Str);
      local_138 = (int)sVar5;
      uVar11 = local_138 + 1;
      if (0x80 < uVar11) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_148,0,uVar11,1);
      }
      lVar12 = (longlong)(int)uVar11;
      FVar9.Data = local_1c8;
      if (local_148.Data != (FScriptContainerElement *)0x0) {
        FVar9.Data = local_148.Data;
      }
      bVar4 = false;
      lVar8 = lVar10;
      local_140 = FVar9.Data;
      if (0 < lVar12) {
        do {
          wVar1 = _Str[lVar8];
          FVar9.Data[lVar8] = SUB21(wVar1,0);
          lVar8 = lVar8 + 1;
          bVar4 = (bool)(bVar4 | 0x7f < (ushort)wVar1);
        } while (lVar8 < lVar12);
        if (bVar4) {
          do {
            if (0x7f < (ushort)_Str[lVar10]) {
              FVar9.Data[lVar10] = (FScriptContainerElement)0x3f;
            }
            lVar10 = lVar10 + 1;
          } while (lVar10 < lVar12);
        }
      }
      if ((FVar9.Data + lVar12 == (FScriptContainerElement *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                             ,0x25,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    p_Var3 = glPushDebugGroup;
    if ((glPushDebugGroup != (_func___cdecl_void_uint_uint_int_char_ptr *)0x0) &&
       (FOpenGL3::bDebugContext != false)) {
      sVar5 = strlen((char *)local_140);
      (*p_Var3)(0x824a,1,(int)sVar5,(char *)local_140);
    }
    if (local_148.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data);
    }
  }
  this_00 = &(this->TextureMipLimits).field_0x40;
  if ((*this_00 != '\0') &&
     (((((int)this->_padding_ != 0 || (*(int *)((longlong)&this->_padding_ + 4) != 0)) ||
       ((int)this->_padding_ != 0)) || (*(int *)((longlong)&this->_padding_ + 4) != 0)))) {
    local_1e0 = this->_padding_;
    lStack_1d8 = this->_padding_;
    pFVar6 = UE::RHI::GPUProfiler::FEventStream::Emplace<UE::RHI::GPUProfiler::FEvent::FStats>
                       (*(FEventStream **)&(this->TextureMipLimits).field_0x48);
    pFVar6->NumDraws = (undefined4)local_1e0;
    pFVar6->NumDispatches = local_1e0._4_4_;
    pFVar6->NumPrimitives = (undefined4)lStack_1d8;
    pFVar6->NumVertices = lStack_1d8._4_4_;
    this->_padding_ = 0;
    this->_padding_ = 0;
  }
  if (*this_00 != '\0') {
    pFVar7 = UE::RHI::GPUProfiler::FEventStream::
             Emplace<UE::RHI::GPUProfiler::FEvent::FBeginBreadcrumb,FRHIBreadcrumbNode_*_&>
                       (*(FEventStream **)&(this->TextureMipLimits).field_0x48,&local_1e8);
    FOpenGLProfiler::InsertQuery((FOpenGLProfiler *)this_00,&pFVar7->GPUTimestampTOP);
  }
  return;
}

// RHIBeginRenderPass @ 145c18130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHIBeginRenderPass
          (FOpenGLDynamicRHI *this,FRHIRenderPassInfo *param_1,wchar_t *param_2)

{
  FRHITexture *pFVar1;
  FRHITexture *this_00;
  longlong lVar2;
  undefined1 auStack_208 [32];
  FRHISetRenderTargetsInfo local_1e8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_208;
  FRHISetRenderTargetsInfo::FRHISetRenderTargetsInfo(&local_1e8);
  FRHIRenderPassInfo::ConvertToRenderTargetsInfo(param_1,&local_1e8);
  (this->PendingState).DepthMinZ = 1.4013e-45;
  SetRenderTargetsAndClear((FOpenGLDynamicRHI *)&this[-1].KickHint.Syncs.ArrayNum,&local_1e8);
  pFVar1 = (param_1->ColorRenderTargets).Elements[0].ResolveTarget;
  this->_padding_ = (longlong)(param_1->ColorRenderTargets).Elements[0].RenderTarget;
  this->_padding_ = (longlong)pFVar1;
  pFVar1 = (param_1->ColorRenderTargets).Elements[1].RenderTarget;
  this->_padding_ = *(longlong *)&(param_1->ColorRenderTargets).Elements[0].ArraySlice;
  this->_padding_ = (longlong)pFVar1;
  lVar2 = *(longlong *)&(param_1->ColorRenderTargets).Elements[1].ArraySlice;
  this->_padding_ = (longlong)(param_1->ColorRenderTargets).Elements[1].ResolveTarget;
  this->_padding_ = lVar2;
  pFVar1 = (param_1->ColorRenderTargets).Elements[2].ResolveTarget;
  this->_padding_ = (longlong)(param_1->ColorRenderTargets).Elements[2].RenderTarget;
  this->_padding_ = (longlong)pFVar1;
  pFVar1 = (param_1->ColorRenderTargets).Elements[3].RenderTarget;
  this->_padding_ = *(longlong *)&(param_1->ColorRenderTargets).Elements[2].ArraySlice;
  this->_padding_ = (longlong)pFVar1;
  lVar2 = *(longlong *)&(param_1->ColorRenderTargets).Elements[3].ArraySlice;
  this->_padding_ = (longlong)(param_1->ColorRenderTargets).Elements[3].ResolveTarget;
  this->_padding_ = lVar2;
  pFVar1 = (param_1->ColorRenderTargets).Elements[4].ResolveTarget;
  this->_padding_ = (longlong)(param_1->ColorRenderTargets).Elements[4].RenderTarget;
  this->_padding_ = (longlong)pFVar1;
  pFVar1 = (param_1->ColorRenderTargets).Elements[5].RenderTarget;
  this->_padding_ = *(longlong *)&(param_1->ColorRenderTargets).Elements[4].ArraySlice;
  this->_padding_ = (longlong)pFVar1;
  lVar2 = *(longlong *)&(param_1->ColorRenderTargets).Elements[5].ArraySlice;
  this->_padding_ = (longlong)(param_1->ColorRenderTargets).Elements[5].ResolveTarget;
  this->_padding_ = lVar2;
  pFVar1 = (param_1->ColorRenderTargets).Elements[6].ResolveTarget;
  this->_padding_ = (longlong)(param_1->ColorRenderTargets).Elements[6].RenderTarget;
  this->_padding_ = (longlong)pFVar1;
  pFVar1 = (param_1->ColorRenderTargets).Elements[7].RenderTarget;
  this->_padding_ = *(longlong *)&(param_1->ColorRenderTargets).Elements[6].ArraySlice;
  this->_padding_ = (longlong)pFVar1;
  lVar2 = *(longlong *)&(param_1->ColorRenderTargets).Elements[7].ArraySlice;
  this->_padding_ = (longlong)(param_1->ColorRenderTargets).Elements[7].ResolveTarget;
  this->_padding_ = lVar2;
  pFVar1 = (param_1->DepthStencilRenderTarget).ResolveTarget;
  this->_padding_ = (longlong)(param_1->DepthStencilRenderTarget).DepthStencilTarget;
  this->_padding_ = (longlong)pFVar1;
  this->_padding_ = *(longlong *)&(param_1->DepthStencilRenderTarget).Action;
  lVar2 = *(longlong *)&(param_1->ResolveRect).X2;
  this->_padding_ = *(longlong *)&param_1->ResolveRect;
  this->_padding_ = lVar2;
  pFVar1 = (param_1->ShadingRateTexture).Reference;
  this_00 = (FRHITexture *)this->_padding_;
  if (this_00 != pFVar1) {
    this->_padding_ = (longlong)pFVar1;
    if (pFVar1 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar1);
    }
    if (this_00 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  *(EVRSRateCombiner *)&this->_padding_ = param_1->ShadingRateTextureCombiner;
  *(ERHIAccess *)((longlong)&this->_padding_ + 4) = param_1->NopAccess;
  *(uint *)&this->_padding_ = param_1->NumOcclusionQueries;
  *(bool *)((longlong)&this->_padding_ + 4) = param_1->bOcclusionQueries;
  *(uchar *)((longlong)&this->_padding_ + 5) = param_1->MultiViewCount;
  *(ESubpassHint *)((longlong)&this->_padding_ + 6) = param_1->SubpassHint;
  return;
}

// RHIBeginRenderQuery @ 145c182e0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHIBeginRenderQuery(FOpenGLDynamicRHI *this,FRHIRenderQuery *param_1)

{
  code *pcVar1;
  bool bVar2;
  HGLRC pHVar3;
  
  pHVar3 = wglGetCurrentContext();
  if (pHVar3 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (((FOpenGLRenderQuery *)(param_1 + 1))->Prev != (FOpenGLRenderQuery **)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLinked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLQuery.cpp"
                       ,0x87,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FOpenGLRenderQuery::AcquireGlQuery((FOpenGLRenderQuery *)(param_1 + 1));
  if (*(int *)(param_1 + 2) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Resource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLQuery.cpp"
                       ,0x8a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1[2].field_0x10 != '\x01') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLQuery.cpp"
                       ,0x8f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000145c183f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*glBeginQuery)(0x8914,*(uint *)(param_1 + 2));
  return;
}

// RHIBeginRenderQuery_TopOfPipe @ 145c18410

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHIBeginRenderQuery_TopOfPipe
          (FOpenGLDynamicRHI *this,FRHICommandListBase *param_1,FRHIRenderQuery *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  IRHICommandContext *pIVar1;
  FRHICommandBase *pFVar2;
  
  if (param_2 == (FRHIRenderQuery *)0x0) {
    return;
  }
  if ((GRHICommandList.bLatchedBypass) && ((param_1->PersistentState).bImmediate != '\0')) {
    pIVar1 = FRHICommandListBase::GetContext(param_1);
    UNRECOVERED_JUMPTABLE = *(code **)(pIVar1->_padding_ + 0x180);
                    /* WARNING: Could not recover jumptable at 0x000145cb7004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(pIVar1,param_2,UNRECOVERED_JUMPTABLE);
    return;
  }
  pFVar2 = FMemStackBase::Alloc(&param_1->MemManager,0x18,8);
  param_1->NumCommands = param_1->NumCommands + 1;
  *param_1->CommandLink = pFVar2;
  param_1->CommandLink = &pFVar2->Next;
  pFVar2->Next = (FRHICommandBase *)0x0;
  pFVar2->_padding_ = (longlong)&___7FRHICommandBeginRenderQuery__6B_;
  pFVar2[1]._padding_ = (longlong)param_2;
  return;
}

// RHIBeginTransitions @ 145c18420

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHIBeginTransitions
          (FOpenGLDynamicRHI *this,TArrayView<FRHITransition_const_*,int> *param_1)

{
  return;
}

// RHIBindDebugLabelName @ 145c18430

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHIBindDebugLabelName
          (FOpenGLDynamicRHI *this,FRHICommandListBase *param_1,FRHITexture *param_2,
          wchar_t *param_3)

{
  int iVar1;
  int iVar2;
  FRHICommandBase *pFVar3;
  FName *pFVar4;
  FAnsiString *pFVar5;
  FOpenGLTexture *pFVar6;
  FRHICommandBase *pFVar7;
  FName local_res18;
  FAnsiString local_28;
  
  pFVar4 = ::FName::FName(&local_res18,param_3);
  FRHITexture::SetName(param_2,*pFVar4);
  pFVar5 = FAnsiString::FAnsiString(&local_28,param_3);
  pFVar6 = (FOpenGLTexture *)0x0;
  pFVar3 = (FRHICommandBase *)(pFVar5->Data).AllocatorInstance.Data;
  (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar1 = (pFVar5->Data).ArrayNum;
  iVar2 = (pFVar5->Data).ArrayMax;
  (pFVar5->Data).ArrayNum = 0;
  (pFVar5->Data).ArrayMax = 0;
  if (((GRHICommandList.bLatchedBypass == false) || ((param_1->PersistentState).bImmediate == '\0'))
     && (param_1->bExecuting == false)) {
    pFVar7 = FMemStackBase::Alloc(&param_1->MemManager,0x30,8);
    param_1->NumCommands = param_1->NumCommands + 1;
    *param_1->CommandLink = pFVar7;
    param_1->CommandLink = &pFVar7->Next;
    pFVar7->Next = (FRHICommandBase *)0x0;
    pFVar7->_padding_ =
         (longlong)
         &TRHILambdaCommand<FRHICommandListBase,`FOpenGLDynamicRHI::RHIBindDebugLabelName'::`2'::<lambda_1>_>
          ::_vftable_;
    pFVar7[1]._padding_ = (longlong)param_2;
    pFVar7[1].Next = pFVar3;
    *(int *)&pFVar7[2]._padding_ = iVar1;
    *(int *)((longlong)&pFVar7[2]._padding_ + 4) = iVar2;
    pFVar7[2].Next = (FRHICommandBase *)L"TRHILambdaCommand";
  }
  else {
    pFVar7 = (FRHICommandBase *)"";
    if (iVar1 != 0) {
      pFVar7 = pFVar3;
    }
    if (param_2 != (FRHITexture *)0x0) {
      pFVar6 = (FOpenGLTexture *)(**(code **)(param_2->_padding_ + 0x48))(param_2);
    }
    SetOpenGLResourceName(pFVar6,(char *)pFVar7);
    if (pFVar3 != (FRHICommandBase *)0x0) {
      FMemory::Free(pFVar3);
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// RHIBlockUntilGPUIdle @ 145c18560

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOpenGLDynamicRHI::RHIBlockUntilGPUIdle(FOpenGLDynamicRHI *this)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (((GRHICommandList.bLatchedBypass == false) ||
      ((GRHICommandList.CommandListImmediate._667_1_ & 0x20) == 0)) &&
     (GRHICommandList.CommandListImmediate._100_1_ == '\0')) {
    puVar3 = FMemStackBase::Alloc((FMemStackBase *)&GRHICommandList.CommandListImmediate,0x20,8);
    GRHICommandList.CommandListImmediate._96_4_ = GRHICommandList.CommandListImmediate._96_4_ + 1;
    *(undefined8 **)GRHICommandList.CommandListImmediate._48_8_ = puVar3;
    GRHICommandList.CommandListImmediate._48_8_ = puVar3 + 1;
    *(undefined8 *)GRHICommandList.CommandListImmediate._48_8_ = 0;
    *puVar3 = &TRHILambdaCommand<FRHICommandListImmediate,`FOpenGLDynamicRHI::RHIBlockUntilGPUIdle'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = L"TRHILambdaCommand";
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000145c185b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*glFlush)();
  return;
}

// RHICalcTexturePlatformSize @ 145c18620

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

FRHICalcTextureSizeResult * __thiscall
FOpenGLDynamicRHI::RHICalcTexturePlatformSize
          (FOpenGLDynamicRHI *this,FRHICalcTextureSizeResult *__return_storage_ptr__,
          FRHITextureDesc *param_1,uint param_2)

{
  ulong64 uVar1;
  
  uVar1 = FRHITextureDesc::CalcMemorySizeEstimate(param_1,param_2,param_1->NumMips - 1);
  __return_storage_ptr__->Size = uVar1;
  __return_storage_ptr__->Align = 1;
  return __return_storage_ptr__;
}

// RHIClearMRT @ 145c18660

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHIClearMRT
          (FOpenGLDynamicRHI *this,bool *param_1,int param_2,FLinearColor *param_3,bool param_4,
          float param_5,bool param_6,uint param_7)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  HGLRC pHVar6;
  FOpenGLTexture **ppFVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  uint *puVar10;
  uint uVar11;
  ulonglong uVar13;
  byte bVar14;
  undefined8 local_70;
  bool *local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong uVar12;
  
  pHVar6 = wglGetCurrentContext();
  if (pHVar6 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if ((((int)GMaxRHIFeatureLevel < 3) && ((this->PendingState).bFramebufferSetupInvalid != false))
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("(GMaxRHIFeatureLevel >= ERHIFeatureLevel::SM5) || !PendingState.bFramebufferSetupInvalid"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLCommands.cpp"
                            ,0x9d5,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar13 = 0;
  if (param_1 != (bool *)0x0) {
    ppFVar7 = (this->PendingState).RenderTargets;
    uVar8 = uVar13;
    uVar12 = uVar13;
    do {
      uVar11 = (uint)uVar12;
      if (*ppFVar7 == (FOpenGLTexture *)0x0) break;
      uVar11 = uVar11 + 1;
      uVar12 = (ulonglong)uVar11;
      uVar8 = uVar8 + 1;
      ppFVar7 = ppFVar7 + 1;
    } while ((longlong)uVar8 < 8);
    if ((param_2 < (int)uVar11) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumClearColors >= NumActiveRenderTargets",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLCommands.cpp"
                           ,0x9e8,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar9 = *(undefined8 *)&(this->PendingState).Scissor.field0_0x0;
  uVar1 = *(undefined8 *)((longlong)&(this->PendingState).Scissor.field0_0x0 + 8);
  bVar5 = (this->PendingState).bScissorEnabled;
  bVar4 = false;
  local_70 = uVar9;
  local_60 = uVar9;
  local_58 = uVar1;
  BindPendingFramebuffer(this);
  if (((bVar5 != false) || (*(int *)&(this->PendingState).Viewport.field0_0x0 != 0)) ||
     ((*(int *)((longlong)&(this->PendingState).Viewport.field0_0x0 + 4) != 0 ||
      ((*(uint *)((longlong)&(this->PendingState).Viewport.field0_0x0 + 8) !=
        (this->PendingState).RenderTargetWidth ||
       (*(uint *)((longlong)&(this->PendingState).Viewport.field0_0x0 + 0xc) !=
        (this->PendingState).RenderTargetHeight)))))) {
    RHISetScissorRect((FOpenGLDynamicRHI *)&this->_padding_,false,0,0,0,0);
    bVar4 = true;
  }
  UpdateScissorRectInOpenGLContext(this);
  bVar3 = false;
  if ((param_1 != (bool *)0x0) && (bVar3 = true, 0 < param_2)) {
    puVar10 = (uint *)&(this->ContextState).BlendState.RenderTargets.Elements[0].field_0x20;
    local_68 = param_1;
    uVar8 = uVar13;
    do {
      if ((*local_68 != false) && (((byte)*puVar10 & 0xf) != 0xf)) {
        (*glColorMaski)((uint)uVar8,'\x01','\x01','\x01','\x01');
        *puVar10 = *puVar10 | 0xf;
      }
      local_68 = local_68 + 1;
      uVar11 = (uint)uVar8 + 1;
      uVar8 = (ulonglong)uVar11;
      puVar10 = puVar10 + 9;
    } while ((int)uVar11 < param_2);
  }
  bVar14 = 0;
  if (((param_4) && ((this->PendingState).DepthStencil != (FOpenGLTexture *)0x0)) &&
     (bVar14 = 1, (this->ContextState).DepthStencilState.bZWriteEnable == false)) {
    (*glDepthMask)('\x01');
    (this->ContextState).DepthStencilState.bZWriteEnable = true;
  }
  if (((param_6) && ((this->PendingState).DepthStencil != (FOpenGLTexture *)0x0)) &&
     (bVar14 = bVar14 | 2, (this->ContextState).DepthStencilState.StencilWriteMask != 0xffffffff)) {
    (*glStencilMask)(0xffffffff);
    (this->ContextState).DepthStencilState.StencilWriteMask = 0xffffffff;
  }
  pHVar6 = wglGetCurrentContext();
  if (pHVar6 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (((bVar3) && (param_1 != (bool *)0x0)) && (0 < param_2)) {
    do {
      if (*param_1 != false) {
        (*glClearBufferfv)(0x1800,(int)uVar13,(float *)param_3);
      }
      uVar11 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar11;
      param_3 = param_3 + 1;
      param_1 = param_1 + 1;
      uVar9 = local_70;
    } while ((int)uVar11 < param_2);
  }
  if (bVar14 != 0) {
    local_68 = (bool *)CONCAT44(local_68._4_4_,param_5);
    local_70 = CONCAT44(local_70._4_4_,param_7);
    if (bVar14 == 1) {
      (*glClearBufferfv)(0x1801,0,(float *)&local_68);
    }
    else if (bVar14 == 2) {
      (*glClearBufferiv)(0x1802,0,(int *)&local_70);
    }
    else if (bVar14 == 3) {
      (*glClearBufferfi)(0x84f9,0,param_5,param_7);
    }
  }
  if (bVar4) {
    RHISetScissorRect((FOpenGLDynamicRHI *)&this->_padding_,bVar5,(uint)uVar9,local_60._4_4_,
                      (uint)uVar1,local_58._4_4_);
  }
  return;
}

// RHIClearUAVFloat @ 145c18a40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHIClearUAVFloat
          (FOpenGLDynamicRHI *this,FRHIUnorderedAccessView *param_1,TVector4<float> *param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  FOpenGLDynamicRHI *pFVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStackY_1c18 [32];
  FRHICommandList_RecursiveHazardous local_1be8;
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x145c18a51;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c18;
  pFVar6 = (FOpenGLDynamicRHI *)0x0;
  uVar7 = 0;
  if (this == (FOpenGLDynamicRHI *)&DAT_00000018) {
    this = pFVar6;
  }
  FRHICommandList_RecursiveHazardous::FRHICommandList_RecursiveHazardous
            (&local_1be8,(IRHICommandContext *)this);
  bVar1 = param_1->field_0x20;
  if ((bVar1 == 0) || (bVar1 == 1)) {
    if (param_1[1].field_0x24 == '\0') {
      if (bVar1 < 2) {
        pFVar6 = (FOpenGLDynamicRHI *)(ulonglong)*(uint *)(*(longlong *)&param_1->field_0x18 + 0xd8)
        ;
      }
      ClearUAVShader_T<4,0,1,0>
                ((FRHIComputeCommandList *)&local_1be8,param_1,(uint)((ulonglong)pFVar6 >> 2),1,1,
                 (float (*) [1])param_2);
    }
    else {
      if (bVar1 < 2) {
        pFVar6 = (FOpenGLDynamicRHI *)(ulonglong)*(uint *)(*(longlong *)&param_1->field_0x18 + 0xd8)
        ;
      }
      ClearUAVShader_T<0,0,4,0>
                ((FRHIComputeCommandList *)&local_1be8,param_1,
                 (uint)((ulonglong)pFVar6 /
                       (ulonglong)(uint)GPixelFormats[(byte)param_1[1].field_0x24].BlockBytes),1,1,
                 (float (*) [4])param_2);
    }
    goto LAB_145c18b8f;
  }
  lVar4 = (**(code **)(**(longlong **)&param_1->field_0x18 + 0x20))();
  cVar2 = *(char *)(lVar4 + 0x32);
  if (cVar2 == '\0') {
LAB_145c18aca:
    uVar8 = 1;
LAB_145c18acf:
    uVar7 = *(uint *)(lVar4 + 0x28);
    uVar5 = *(uint *)(lVar4 + 0x24);
  }
  else {
    if (cVar2 == '\x01') {
LAB_145c18abe:
      uVar8 = (uint)*(ushort *)(lVar4 + 0x2e);
      goto LAB_145c18acf;
    }
    if (cVar2 == '\x02') {
      uVar8 = (uint)*(ushort *)(lVar4 + 0x2c);
      goto LAB_145c18acf;
    }
    if (cVar2 == '\x03') goto LAB_145c18aca;
    uVar8 = uVar7;
    uVar5 = uVar7;
    if (cVar2 == '\x04') goto LAB_145c18abe;
  }
  bVar3 = FOpenGLUnorderedAccessView::IsLayered((FOpenGLUnorderedAccessView *)param_1);
  if (bVar3) {
    ClearUAVShader_T<3,0,4,0>
              ((FRHIComputeCommandList *)&local_1be8,param_1,uVar5,uVar7,uVar8,
               (float (*) [4])param_2);
  }
  else {
    ClearUAVShader_T<1,0,4,0>
              ((FRHIComputeCommandList *)&local_1be8,param_1,uVar5,uVar7,uVar8,
               (float (*) [4])param_2);
  }
LAB_145c18b8f:
  FRHICommandList_RecursiveHazardous::~FRHICommandList_RecursiveHazardous(&local_1be8);
  return;
}

// RHIClearUAVUint @ 145c18bc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHIClearUAVUint
          (FOpenGLDynamicRHI *this,FRHIUnorderedAccessView *param_1,
          TIntVector4<unsigned_int> *param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  FOpenGLDynamicRHI *pFVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStackY_1c18 [32];
  FRHICommandList_RecursiveHazardous local_1be8;
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x145c18bd1;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c18;
  pFVar6 = (FOpenGLDynamicRHI *)0x0;
  uVar7 = 0;
  if (this == (FOpenGLDynamicRHI *)&DAT_00000018) {
    this = pFVar6;
  }
  FRHICommandList_RecursiveHazardous::FRHICommandList_RecursiveHazardous
            (&local_1be8,(IRHICommandContext *)this);
  bVar1 = param_1->field_0x20;
  if ((bVar1 == 0) || (bVar1 == 1)) {
    if (param_1[1].field_0x24 == '\0') {
      if (bVar1 < 2) {
        pFVar6 = (FOpenGLDynamicRHI *)(ulonglong)*(uint *)(*(longlong *)&param_1->field_0x18 + 0xd8)
        ;
      }
      ClearUAVShader_T<4,2,1,0>
                ((FRHIComputeCommandList *)&local_1be8,param_1,(uint)((ulonglong)pFVar6 >> 2),1,1,
                 (uint (*) [1])param_2);
    }
    else {
      if (bVar1 < 2) {
        pFVar6 = (FOpenGLDynamicRHI *)(ulonglong)*(uint *)(*(longlong *)&param_1->field_0x18 + 0xd8)
        ;
      }
      ClearUAVShader_T<0,2,4,0>
                ((FRHIComputeCommandList *)&local_1be8,param_1,
                 (uint)((ulonglong)pFVar6 /
                       (ulonglong)(uint)GPixelFormats[(byte)param_1[1].field_0x24].BlockBytes),1,1,
                 (uint (*) [4])param_2);
    }
    goto LAB_145c18d0f;
  }
  lVar4 = (**(code **)(**(longlong **)&param_1->field_0x18 + 0x20))();
  cVar2 = *(char *)(lVar4 + 0x32);
  if (cVar2 == '\0') {
LAB_145c18c4a:
    uVar8 = 1;
LAB_145c18c4f:
    uVar7 = *(uint *)(lVar4 + 0x28);
    uVar5 = *(uint *)(lVar4 + 0x24);
  }
  else {
    if (cVar2 == '\x01') {
LAB_145c18c3e:
      uVar8 = (uint)*(ushort *)(lVar4 + 0x2e);
      goto LAB_145c18c4f;
    }
    if (cVar2 == '\x02') {
      uVar8 = (uint)*(ushort *)(lVar4 + 0x2c);
      goto LAB_145c18c4f;
    }
    if (cVar2 == '\x03') goto LAB_145c18c4a;
    uVar8 = uVar7;
    uVar5 = uVar7;
    if (cVar2 == '\x04') goto LAB_145c18c3e;
  }
  bVar3 = FOpenGLUnorderedAccessView::IsLayered((FOpenGLUnorderedAccessView *)param_1);
  if (bVar3) {
    ClearUAVShader_T<3,2,4,0>
              ((FRHIComputeCommandList *)&local_1be8,param_1,uVar5,uVar7,uVar8,(uint (*) [4])param_2
              );
  }
  else {
    ClearUAVShader_T<1,2,4,0>
              ((FRHIComputeCommandList *)&local_1be8,param_1,uVar5,uVar7,uVar8,(uint (*) [4])param_2
              );
  }
LAB_145c18d0f:
  FRHICommandList_RecursiveHazardous::~FRHICommandList_RecursiveHazardous(&local_1be8);
  return;
}

// RHIComputeMemorySize @ 145c18d40

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

uint __thiscall
FOpenGLDynamicRHI::RHIComputeMemorySize(FOpenGLDynamicRHI *this,FRHITexture *param_1)

{
  longlong lVar1;
  
  if (param_1 == (FRHITexture *)0x0) {
    return 0;
  }
  lVar1 = (**(code **)(param_1->_padding_ + 0x48))(param_1);
  return *(uint *)(lVar1 + 400);
}

// RHIComputePrecachePSOHash @ 145c18d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

ulong64 __thiscall
FOpenGLDynamicRHI::RHIComputePrecachePSOHash
          (FOpenGLDynamicRHI *this,FGraphicsPipelineStateInitializer *param_1)

{
  FRHIVertexShader *pFVar1;
  FRHIPixelShader *pFVar2;
  FRHIGeometryShader *pFVar3;
  FRHIMeshShader *pFVar4;
  ulong64 uVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  uVar5 = param_1->StatePrecachePSOHash;
  if (uVar5 == 0) {
    pFVar1 = (param_1->BoundShaderState).VertexShaderRHI;
    if (pFVar1 == (FRHIVertexShader *)0x0) {
      local_68 = 0;
      uStack_64 = 0;
      uStack_60 = 0;
      uStack_5c = 0;
      local_58 = 0;
    }
    else {
      local_68 = *(undefined4 *)&pFVar1->field_0xf0;
      uStack_64 = *(undefined4 *)&pFVar1->field_0xf4;
      uStack_60 = *(undefined4 *)&pFVar1->field_0xf8;
      uStack_5c = *(undefined4 *)&pFVar1->field_0xfc;
      local_58 = *(undefined4 *)&pFVar1->field_0x100;
    }
    pFVar2 = (param_1->BoundShaderState).PixelShaderRHI;
    if (pFVar2 == (FRHIPixelShader *)0x0) {
      local_54 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_48 = 0;
      local_44 = 0;
    }
    else {
      local_54 = *(undefined4 *)&pFVar2->field_0xf0;
      uStack_50 = *(undefined4 *)&pFVar2->field_0xf4;
      uStack_4c = *(undefined4 *)&pFVar2->field_0xf8;
      uStack_48 = *(undefined4 *)&pFVar2->field_0xfc;
      local_44 = *(undefined4 *)&pFVar2->field_0x100;
    }
    pFVar3 = (param_1->BoundShaderState).GeometryShaderRHI;
    if (pFVar3 == (FRHIGeometryShader *)0x0) {
      local_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      local_30 = 0;
    }
    else {
      local_40 = *(undefined4 *)&pFVar3->field_0xf0;
      uStack_3c = *(undefined4 *)&pFVar3->field_0xf4;
      uStack_38 = *(undefined4 *)&pFVar3->field_0xf8;
      uStack_34 = *(undefined4 *)&pFVar3->field_0xfc;
      local_30 = *(undefined4 *)&pFVar3->field_0x100;
    }
    pFVar4 = (param_1->BoundShaderState).MeshShaderRHI;
    if (pFVar4 == (FRHIMeshShader *)0x0) {
      local_2c = 0;
      uStack_28 = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      local_1c = 0;
    }
    else {
      local_2c = *(undefined4 *)&pFVar4->field_0xf0;
      uStack_28 = *(undefined4 *)&pFVar4->field_0xf4;
      uStack_24 = *(undefined4 *)&pFVar4->field_0xf8;
      uStack_20 = *(undefined4 *)&pFVar4->field_0xfc;
      local_1c = *(undefined4 *)&pFVar4->field_0x100;
    }
    uVar5 = CityHash64((char *)&local_68,0x50);
  }
  return uVar5;
}

// RHIComputeStatePrecachePSOHash @ 145c18e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

ulong64 __thiscall
FOpenGLDynamicRHI::RHIComputeStatePrecachePSOHash
          (FOpenGLDynamicRHI *this,FGraphicsPipelineStateInitializer *param_1)

{
  FRHIVertexShader *pFVar1;
  FRHIPixelShader *pFVar2;
  FRHIGeometryShader *pFVar3;
  FRHIMeshShader *pFVar4;
  ulong64 uVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  pFVar1 = (param_1->BoundShaderState).VertexShaderRHI;
  if (pFVar1 == (FRHIVertexShader *)0x0) {
    local_68 = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    local_58 = 0;
  }
  else {
    local_68 = *(undefined4 *)&pFVar1->field_0xf0;
    uStack_64 = *(undefined4 *)&pFVar1->field_0xf4;
    uStack_60 = *(undefined4 *)&pFVar1->field_0xf8;
    uStack_5c = *(undefined4 *)&pFVar1->field_0xfc;
    local_58 = *(undefined4 *)&pFVar1->field_0x100;
  }
  pFVar2 = (param_1->BoundShaderState).PixelShaderRHI;
  if (pFVar2 == (FRHIPixelShader *)0x0) {
    local_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    local_44 = 0;
  }
  else {
    local_54 = *(undefined4 *)&pFVar2->field_0xf0;
    uStack_50 = *(undefined4 *)&pFVar2->field_0xf4;
    uStack_4c = *(undefined4 *)&pFVar2->field_0xf8;
    uStack_48 = *(undefined4 *)&pFVar2->field_0xfc;
    local_44 = *(undefined4 *)&pFVar2->field_0x100;
  }
  pFVar3 = (param_1->BoundShaderState).GeometryShaderRHI;
  if (pFVar3 == (FRHIGeometryShader *)0x0) {
    local_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    local_30 = 0;
  }
  else {
    local_40 = *(undefined4 *)&pFVar3->field_0xf0;
    uStack_3c = *(undefined4 *)&pFVar3->field_0xf4;
    uStack_38 = *(undefined4 *)&pFVar3->field_0xf8;
    uStack_34 = *(undefined4 *)&pFVar3->field_0xfc;
    local_30 = *(undefined4 *)&pFVar3->field_0x100;
  }
  pFVar4 = (param_1->BoundShaderState).MeshShaderRHI;
  if (pFVar4 == (FRHIMeshShader *)0x0) {
    local_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    local_1c = 0;
  }
  else {
    local_2c = *(undefined4 *)&pFVar4->field_0xf0;
    uStack_28 = *(undefined4 *)&pFVar4->field_0xf4;
    uStack_24 = *(undefined4 *)&pFVar4->field_0xf8;
    uStack_20 = *(undefined4 *)&pFVar4->field_0xfc;
    local_1c = *(undefined4 *)&pFVar4->field_0x100;
  }
  uVar5 = CityHash64((char *)&local_68,0x50);
  return uVar5;
}

// RHICopyBufferRegion @ 145c18f40

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHICopyBufferRegion
          (FOpenGLDynamicRHI *this,FRHIBuffer *param_1,ulong64 param_2,FRHIBuffer *param_3,
          ulong64 param_4,ulong64 param_5)

{
  HGLRC pHVar1;
  
  pHVar1 = wglGetCurrentContext();
  if (pHVar1 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  (*glBindBuffer)(0x8f36,*(uint *)((longlong)&param_3[1]._padding_ + 4));
  (*glBindBuffer)(0x8f37,*(uint *)((longlong)&param_1[1]._padding_ + 4));
  (*glCopyBufferSubData)(0x8f36,0x8f37,param_4,param_2,param_5);
  (*glBindBuffer)(0x8f36,0);
                    /* WARNING: Could not recover jumptable at 0x000145c19024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*glBindBuffer)(0x8f37,0);
  return;
}

// RHICopyTexture @ 145c19040

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHICopyTexture
          (FOpenGLDynamicRHI *this,FRHITexture *param_1,FRHITexture *param_2,
          FRHICopyTextureInfo *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  bool bVar8;
  HGLRC pHVar9;
  FOpenGLTexture *this_00;
  FOpenGLTexture *this_01;
  longlong lVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int local_res10;
  int local_res18;
  uint local_res20;
  uint local_68;
  uint local_64;
  
  pHVar9 = wglGetCurrentContext();
  if (pHVar9 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (param_1 == (FRHITexture *)0x0) {
    this_00 = (FOpenGLTexture *)0x0;
  }
  else {
    this_00 = (FOpenGLTexture *)(**(code **)(param_1->_padding_ + 0x48))(param_1);
  }
  if (param_2 == (FRHITexture *)0x0) {
    this_01 = (FOpenGLTexture *)0x0;
  }
  else {
    this_01 = (FOpenGLTexture *)(**(code **)(param_2->_padding_ + 0x48))(param_2);
  }
  FOpenGLTexture::RemoveEvictionData(this_01);
  local_res10 = (param_3->Size).field0_0x0._s_0.X;
  if (((local_res10 == UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.X) &&
      ((param_3->Size).field0_0x0._s_0.Y == UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Y)
      ) && ((param_3->Size).field0_0x0._s_0.Z ==
            UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z)) {
    lVar10 = (**(code **)(param_1->_padding_ + 0x20))(param_1);
    bVar11 = (byte)param_3->SourceMipIndex;
    local_res10 = *(int *)(lVar10 + 0x24) >> (bVar11 & 0x1f);
    if (local_res10 < 1) {
      local_res10 = 1;
    }
    local_res18 = *(int *)(lVar10 + 0x28) >> (bVar11 & 0x1f);
    if (local_res18 < 1) {
      local_res18 = 1;
    }
    if (this_00->Target == 0x806f) {
      uVar15 = (int)(uint)*(ushort *)(lVar10 + 0x2c) >> (bVar11 & 0x1f);
      if ((int)uVar15 < 1) {
        uVar15 = 1;
      }
    }
    else {
      uVar15 = 6;
      if (this_00->Target != 0x8513) {
        uVar15 = 1;
      }
    }
    if (((((param_3->SourcePosition).field0_0x0._s_0.X !=
           UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.X) ||
         ((param_3->SourcePosition).field0_0x0._s_0.Y !=
          UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Y)) ||
        ((param_3->SourcePosition).field0_0x0._s_0.Z !=
         UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z)) &&
       (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_594873122482550958>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                           ,0x752,"CopyInfo.SourcePosition == FIntVector::ZeroValue"), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    local_res18 = (param_3->Size).field0_0x0._s_0.Y;
    if (this_00->Target == 0x806f) {
      uVar15 = (param_3->Size).field0_0x0._s_0.Z;
    }
    else if (this_00->Target == 0x8513) {
      uVar15 = param_3->NumSlices;
    }
    else {
      uVar15 = 1;
    }
  }
  local_68 = param_3->SourceMipIndex;
  uVar13 = 0;
  local_64 = param_3->DestMipIndex;
  if (param_3->NumMips != 0) {
    uVar12 = this_01->Target;
    do {
      uVar14 = this_00->Target;
      bVar11 = (byte)uVar13;
      if ((uVar14 == 0x806f) || (uVar14 == 0x8513)) {
        local_res20 = (param_3->SourcePosition).field0_0x0._s_0.Z >> (bVar11 & 0x1f);
      }
      else if ((uVar14 == 0x8c18) || (uVar14 == 0x8c1a)) {
        local_res20 = param_3->SourceSliceIndex;
        uVar15 = param_3->NumSlices;
      }
      else {
        local_res20 = 0;
      }
      iVar1 = (param_3->SourcePosition).field0_0x0._s_0.X;
      iVar2 = (param_3->SourcePosition).field0_0x0._s_0.Y;
      if ((uVar12 == 0x806f) || (uVar12 == 0x8513)) {
        uVar14 = (param_3->DestPosition).field0_0x0._s_0.Z >> (bVar11 & 0x1f);
      }
      else if ((uVar12 == 0x8c18) || (uVar12 == 0x8c1a)) {
        uVar14 = param_3->DestSliceIndex;
        uVar15 = param_3->NumSlices;
      }
      else {
        uVar14 = 0;
      }
      iVar3 = (param_3->DestPosition).field0_0x0._s_0.X;
      iVar4 = (param_3->DestPosition).field0_0x0._s_0.Y;
      FOpenGLTexture::TryRestoreGLResource(this_01);
      uVar5 = this_01->Resource;
      uVar6 = this_00->Target;
      FOpenGLTexture::TryRestoreGLResource(this_00);
      (*glCopyImageSubData)
                (this_00->Resource,uVar6,local_68,iVar1 >> (bVar11 & 0x1f),iVar2 >> (bVar11 & 0x1f),
                 local_res20,uVar5,uVar12,local_64,iVar3 >> (bVar11 & 0x1f),iVar4 >> (bVar11 & 0x1f)
                 ,uVar14,local_res10,local_res18,uVar15);
      local_64 = local_64 + 1;
      local_68 = local_68 + 1;
      local_res10 = local_res10 >> 1;
      uVar12 = this_01->Target;
      if (local_res10 < 1) {
        local_res10 = 1;
      }
      local_res18 = local_res18 >> 1;
      if (local_res18 < 1) {
        local_res18 = 1;
      }
      if ((uVar12 == 0x806f) && (uVar15 = (int)uVar15 >> 1, (int)uVar15 < 1)) {
        uVar15 = 1;
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < param_3->NumMips);
  }
  return;
}

// RHICopyToStagingBuffer @ 145c19460

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHICopyToStagingBuffer
          (FOpenGLDynamicRHI *this,FRHIBuffer *param_1,FRHIStagingBuffer *param_2,uint param_3,
          uint param_4)

{
  code *pcVar1;
  long64 lVar2;
  bool bVar3;
  HGLRC pHVar4;
  void *pvVar5;
  
  pHVar4 = wglGetCurrentContext();
  if (pHVar4 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (((int)param_2[1]._padding_ == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DestinationBuffer->ShadowBuffer != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLCommands.cpp"
                         ,0xb0d,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (*glBindBuffer)(0x8f37,(uint)param_2[1]._padding_);
  lVar2 = (long64)param_4;
  if (*(uint *)((longlong)&param_2[1]._padding_ + 4) < param_4) {
    if ((glBufferStorage == (_func___cdecl_void_uint_long64_void_ptr_uint *)0x0) ||
       (OpenGLConsoleVariables::bUsePersistentMappingStagingBuffer == 0)) {
      (*glBufferData)(0x8f37,lVar2,(void *)0x0,0x88e1);
      *(uint *)((longlong)&param_2[1]._padding_ + 4) = param_4;
    }
    else {
      if (param_2[1]._padding_ != 0) {
        (*glUnmapBuffer)(0x8f37);
        (*glDeleteBuffers)(1,(uint *)(param_2 + 1));
        (*glGenBuffers)(1,(uint *)(param_2 + 1));
        (*glBindBuffer)(0x8f37,(uint)param_2[1]._padding_);
      }
      (*glBufferStorage)(0x8f37,lVar2,(void *)0x0,0xc1);
      pvVar5 = (*glMapBufferRange)(0x8f37,0,lVar2,0xc1);
      param_2[1]._padding_ = (longlong)pvVar5;
      *(uint *)((longlong)&param_2[1]._padding_ + 4) = param_4;
    }
  }
  (*glBindBuffer)(0x8f36,*(uint *)((longlong)&param_1[1]._padding_ + 4));
  (*glCopyBufferSubData)(0x8f36,0x8f37,(long64)param_3,0,lVar2);
  (*glBindBuffer)(0x8f36,0);
                    /* WARNING: Could not recover jumptable at 0x000145c1962a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*glBindBuffer)(0x8f37,0);
  return;
}

// RHICreateAliasedTexture @ 145c19640

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

TRefCountPtr<FRHITexture> __thiscall
FOpenGLDynamicRHI::RHICreateAliasedTexture
          (FOpenGLDynamicRHI *this,TRefCountPtr<FRHITexture> *param_1)

{
  FString *pFVar1;
  FOpenGLTexture *this_00;
  FOpenGLTexture *this_01;
  ForAnyElementType FVar2;
  FOpenGLTexture *pFVar3;
  longlong *in_R8;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  this_01 = (FOpenGLTexture *)0x0;
  local_res10 = *(FName *)(*in_R8 + 0x18);
  pFVar1 = ::FName::ToString(&local_res10,&local_18);
  ::FString::ConcatFC(&local_28,pFVar1,L"Alias");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  this_00 = ::operator_new(0x198);
  pFVar3 = this_01;
  if (this_00 != (FOpenGLTexture *)0x0) {
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar2.Data = local_28.Data.AllocatorInstance.Data;
    }
    ::FString::FString(&local_18,(wchar_t *)FVar2.Data);
    if ((longlong *)*in_R8 != (longlong *)0x0) {
      this_01 = (FOpenGLTexture *)(**(code **)(*(longlong *)*in_R8 + 0x48))();
    }
    this_01 = FOpenGLTexture::FOpenGLTexture(this_00,this_01,&local_18,AliasResource);
    pFVar3 = (FOpenGLTexture *)&DAT_00000001;
  }
  param_1->Reference = (FRHITexture *)this_01;
  if (this_01 != (FOpenGLTexture *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_01);
  }
  if ((pFVar3 != (FOpenGLTexture *)0x0) &&
     (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return (TRefCountPtr<FRHITexture>)(FRHITexture *)param_1;
}

// RHICreateBlendState @ 145c19750

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EBlendFactor": Some values do not have unique names */

TRefCountPtr<FRHIBlendState> __thiscall
FOpenGLDynamicRHI::RHICreateBlendState(FOpenGLDynamicRHI *this,FBlendStateInitializerRHI *param_1)

{
  char cVar1;
  FName FVar2;
  undefined1 uVar3;
  uint uVar4;
  FRHIResource *this_00;
  longlong *in_R8;
  longlong *plVar5;
  uint *puVar6;
  longlong *plVar7;
  longlong lVar8;
  
  this_00 = ::operator_new(0x178);
  if (this_00 == (FRHIResource *)0x0) {
    this_00 = (FRHIResource *)0x0;
  }
  else {
    FRHIResource::FRHIResource(this_00,RRT_BlendState);
    this_00->_padding_ = (longlong)&___7FOpenGLBlendState__6B_;
    lVar8 = in_R8[1];
    this_00[1]._padding_ = *in_R8;
    this_00[1].AtomicFlags = (FAtomicFlags)(int)lVar8;
    this_00[1].ResourceType = (char)((ulonglong)lVar8 >> 0x20);
    this_00[1].field_0xd = (char)((ulonglong)lVar8 >> 0x28);
    this_00[1]._padding_ = (short)((ulonglong)lVar8 >> 0x30);
    lVar8 = in_R8[3];
    this_00[1].OwnerName = *(FName *)(in_R8 + 2);
    this_00[2]._padding_ = lVar8;
    lVar8 = in_R8[4];
    FVar2 = *(FName *)(in_R8 + 5);
    this_00[2].AtomicFlags = (FAtomicFlags)(int)lVar8;
    this_00[2].ResourceType = (char)((ulonglong)lVar8 >> 0x20);
    this_00[2].field_0xd = (char)((ulonglong)lVar8 >> 0x28);
    this_00[2]._padding_ = (short)((ulonglong)lVar8 >> 0x30);
    this_00[2].OwnerName = FVar2;
    this_00[3]._padding_ = in_R8[6];
    *(short *)&this_00[3].AtomicFlags.Packed = (short)in_R8[7];
    FOpenGLBlendStateData::FOpenGLBlendStateData((FOpenGLBlendStateData *)&this_00[3].ResourceType);
  }
  puVar6 = &this_00[3].OwnerName.Number;
  this_00[0xf].ResourceType = *(ERHIResourceType *)((longlong)in_R8 + 0x39);
  lVar8 = 8;
  plVar7 = in_R8;
  do {
    plVar5 = in_R8;
    if ((char)in_R8[7] != '\0') {
      plVar5 = plVar7;
    }
    if ((((((char)*plVar5 == '\0') && (*(char *)((longlong)plVar5 + 2) == '\0')) &&
         (*(char *)((longlong)plVar5 + 1) == '\x01')) &&
        ((*(char *)((longlong)plVar5 + 3) == '\0' && (*(char *)((longlong)plVar5 + 5) == '\0')))) &&
       (*(char *)((longlong)plVar5 + 4) == '\x01')) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    *(undefined1 *)(puVar6 + -2) = uVar3;
    cVar1 = (char)*plVar5;
    if (cVar1 == '\x01') {
      uVar4 = 0x800a;
    }
    else if (cVar1 == '\x02') {
      uVar4 = 0x8007;
    }
    else if (cVar1 == '\x03') {
      uVar4 = 0x8008;
    }
    else if (cVar1 == '\x04') {
      uVar4 = 0x800b;
    }
    else {
      uVar4 = 0x8006;
    }
    (((FName *)(puVar6 + -1))->ComparisonIndex).Value = uVar4;
    uVar4 = TranslateBlendFactor((uint)*(byte *)((longlong)plVar5 + 1));
    *puVar6 = uVar4;
    uVar4 = TranslateBlendFactor((uint)*(byte *)((longlong)plVar5 + 2));
    puVar6[1] = uVar4;
    if ((*(char *)((longlong)plVar5 + 5) == *(char *)((longlong)plVar5 + 2)) &&
       (*(char *)((longlong)plVar5 + 4) == *(char *)((longlong)plVar5 + 1))) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    *(undefined1 *)(puVar6 + 2) = uVar3;
    cVar1 = *(char *)((longlong)plVar5 + 3);
    if (cVar1 == '\x01') {
      uVar4 = 0x800a;
    }
    else if (cVar1 == '\x02') {
      uVar4 = 0x8007;
    }
    else if (cVar1 == '\x03') {
      uVar4 = 0x8008;
    }
    else if (cVar1 == '\x04') {
      uVar4 = 0x800b;
    }
    else {
      uVar4 = 0x8006;
    }
    puVar6[3] = uVar4;
    uVar4 = TranslateBlendFactor((uint)*(byte *)((longlong)plVar5 + 4));
    puVar6[4] = uVar4;
    uVar4 = TranslateBlendFactor((uint)*(byte *)((longlong)plVar5 + 5));
    puVar6[5] = uVar4;
    plVar7 = (longlong *)((longlong)plVar7 + 7);
    uVar4 = ((uint)*(byte *)((longlong)plVar5 + 6) ^ puVar6[6]) & 1 ^ puVar6[6];
    puVar6[6] = uVar4;
    uVar4 = (*(byte *)((longlong)plVar5 + 6) ^ uVar4) & 2 ^ uVar4;
    puVar6[6] = uVar4;
    uVar4 = (*(byte *)((longlong)plVar5 + 6) ^ uVar4) & 4 ^ uVar4;
    puVar6[6] = uVar4;
    puVar6[6] = (*(byte *)((longlong)plVar5 + 6) ^ uVar4) & 8 ^ uVar4;
    puVar6 = puVar6 + 9;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  *(FRHIResource **)(param_1->RenderTargets).Elements = this_00;
  FRHIResource::AddRef(this_00);
  return (TRefCountPtr<FRHIBlendState>)(FRHIBlendState *)param_1;
}

// RHICreateBoundShaderState @ 145c19970

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

TRefCountPtr<FRHIBoundShaderState> __thiscall
FOpenGLDynamicRHI::RHICreateBoundShaderState
          (FOpenGLDynamicRHI *this,FRHIVertexDeclaration *param_1,FRHIVertexShader *param_2,
          FRHIPixelShader *param_3,FRHIGeometryShader *param_4)

{
  code *pcVar1;
  bool bVar2;
  TRefCountPtr<FRHIBoundShaderState> TVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLDrv.h"
                     ,0x28f,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    TVar3.Reference = (FRHIBoundShaderState *)(*pcVar1)();
    return (TRefCountPtr<FRHIBoundShaderState>)TVar3.Reference;
  }
  *(undefined8 *)param_1 = 0;
  return (TRefCountPtr<FRHIBoundShaderState>)(FRHIBoundShaderState *)param_1;
}

// RHICreateBoundShaderState_Internal @ 145c199c0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

TRefCountPtr<FRHIBoundShaderState> __thiscall
FOpenGLDynamicRHI::RHICreateBoundShaderState_Internal
          (FOpenGLDynamicRHI *this,FRHIVertexDeclaration *param_1,FRHIVertexShader *param_2,
          FRHIPixelShader *param_3,FRHIGeometryShader *param_4,bool param_5)

{
  int *piVar1;
  FOpenGLShaderParameterCache *pFVar2;
  FName FVar3;
  code *pcVar4;
  longlong lVar5;
  undefined8 uVar6;
  FName FVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  undefined2 uVar12;
  HGLRC pHVar13;
  TRefCountPtr<FRHIBoundShaderState> TVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_OpenGLCreateBoundShaderStateTime> FVar16;
  FGlobalShaderMap *pFVar17;
  FCachedBoundShaderStateLink *pFVar18;
  FGLProgramCache *this_00;
  FThreadStats *this_01;
  FThreadStatsPool *pFVar19;
  FRHIResource *pFVar20;
  FOpenGLLinkedProgram *pFVar21;
  FStatMessage *pFVar22;
  FName FVar23;
  FName local_res20;
  undefined7 in_stack_00000031;
  undefined1 uStack0000000000000038;
  FName local_a8;
  FName local_a0;
  FName local_90;
  FOpenGLVertexShader *local_88;
  LARGE_INTEGER local_80;
  LARGE_INTEGER local_78;
  FStatMessage local_70;
  FStatMessage local_60;
  FName local_50;
  TShaderRefBase<FNULLPS,FShaderMapPointerTable> local_48;
  
  pHVar13 = wglGetCurrentContext();
  if (pHVar13 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if ((uStack0000000000000038 != '\0') &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!bFromPSOFileCache",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                          ,0xaed,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    TVar14.Reference = (FRHIBoundShaderState *)(*pcVar4)();
    return (TRefCountPtr<FRHIBoundShaderState>)TVar14.Reference;
  }
  FVar16 = StatPtr_STAT_OpenGLCreateBoundShaderStateTime;
  if (StatPtr_STAT_OpenGLCreateBoundShaderStateTime ==
      (FThreadSafeStaticStat<FStat_STAT_OpenGLCreateBoundShaderStateTime>)0x0) {
    pFVar15 = ::FName::FName(&local_50,"STAT_OpenGLCreateBoundShaderStateTime");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_OpenGLCreateBoundShaderStateTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLCreateBoundShaderStateTime,
                        *pFVar15,L"CreateBoundShaderState time","STATGROUP_OpenGLRHI",
                        "STATCAT_Advanced",L"OpenGL RHI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar23 = *(FName *)FVar16;
  bVar10 = false;
  bVar9 = false;
  local_a0.ComparisonIndex.Value = 0;
  local_a0.Number = 0;
  if ((FVar23.ComparisonIndex.Value.Value != 0) || (FVar23.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      _uStack0000000000000038 = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&stack0x00000038,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar10 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar23.ComparisonIndex.Value.Value;
        local_res20.Number = FVar23.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                   ,0xaef);
        bVar10 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_a8 = FVar23;
      FThreadStats::AddMessage(FVar23,CycleScopeStart);
      bVar8 = true;
      goto LAB_145c19b84;
    }
  }
  bVar8 = false;
  FVar23 = local_a0;
LAB_145c19b84:
  FVar3._1_7_ = in_stack_00000031;
  FVar3.ComparisonIndex.Value._0_1_ = param_5;
  local_a8 = (FName)param_4;
  local_90 = FVar3;
  local_88 = (FOpenGLVertexShader *)param_3;
  if (param_4 == (FRHIGeometryShader *)0x0) {
    pFVar17 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]
                                );
    TShaderMapRef<FNULLPS>::TShaderMapRef<FNULLPS>((TShaderMapRef<FNULLPS> *)&local_48,pFVar17);
    param_4 = (FRHIGeometryShader *)
              TShaderRefBase<FNULLPS,FShaderMapPointerTable>::GetPixelShader(&local_48,true);
  }
  local_a8 = (FName)param_4;
  pFVar18 = GetCachedBoundShaderState
                      ((FRHIVertexDeclaration *)param_2,(FRHIVertexShader *)param_3,
                       (FRHIPixelShader *)param_4,(FRHIGeometryShader *)FVar3,(FRHIMeshShader *)0x0,
                       (FRHIAmplificationShader *)0x0);
  if (pFVar18 == (FCachedBoundShaderStateLink *)0x0) {
    pFVar2 = (this->PendingState).ShaderParameters;
    (this->ContextState).Program = 0xffffffff;
    MarkShaderParameterCachesDirty(pFVar2,false);
    (this->PendingState).LinkedProgramAndDirtyFlag = (FOpenGLLinkedProgram *)0x0;
    pFVar20 = ::operator_new(0xa8);
    if (pFVar20 == (FRHIResource *)0x0) {
      *(undefined8 *)param_1 = 0;
    }
    else {
      FRHIResource::FRHIResource(pFVar20,RRT_BoundShaderState);
      pFVar20->_padding_ = (longlong)&___7FOpenGLBoundShaderState__6B_;
      FCachedBoundShaderStateLink::FCachedBoundShaderStateLink
                ((FCachedBoundShaderStateLink *)(pFVar20 + 1),(FRHIVertexDeclaration *)param_2,
                 (FRHIVertexShader *)param_3,(FRHIPixelShader *)param_4,(FRHIGeometryShader *)FVar3,
                 (FRHIBoundShaderState *)pFVar20,true);
      pFVar21 = FOpenGLBoundShaderState::FindOrCreateLinkedProgram
                          ((FOpenGLVertexShader *)param_3,(FOpenGLPixelShader *)param_4,
                           (FOpenGLGeometryShader *)FVar3);
      *(FOpenGLLinkedProgram **)&pFVar20[5].AtomicFlags = pFVar21;
      pFVar20[5].OwnerName = (FName)param_2;
      if (param_2 != (FRHIVertexShader *)0x0) {
        FRHIResource::AddRef((FRHIResource *)param_2);
      }
      pFVar20[6]._padding_ = (longlong)param_3;
      if (param_3 != (FRHIPixelShader *)0x0) {
        FRHIResource::AddRef((FRHIResource *)param_3);
      }
      *(FRHIGeometryShader **)&pFVar20[6].AtomicFlags = param_4;
      if ((FName)param_4 != (FName)0x0) {
        FRHIResource::AddRef((FRHIResource *)param_4);
      }
      pFVar20[6].OwnerName = FVar3;
      if (FVar3 != (FName)0x0) {
        FRHIResource::AddRef((FRHIResource *)FVar3);
      }
      if ((pFVar20[5].OwnerName == (FName)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("VertexDeclaration",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                              ,2999,L""), bVar11)) {
        pcVar4 = (code *)swi(3);
        TVar14.Reference = (FRHIBoundShaderState *)(*pcVar4)();
        return (TRefCountPtr<FRHIBoundShaderState>)TVar14.Reference;
      }
      FVar3 = pFVar20[5].OwnerName;
      if (FVar3 == (FName)0x0) {
        uVar12 = 0;
        pFVar20[3].OwnerName.ComparisonIndex = 0;
        pFVar20[3].OwnerName.Number = 0;
        pFVar20[4]._padding_ = 0;
        pFVar20[4].AtomicFlags = (atomic<unsigned_int>)0x0;
        pFVar20[4].ResourceType = RRT_None;
        pFVar20[4].field_0xd = 0;
        pFVar20[4]._padding_ = 0;
        pFVar20[4].OwnerName.ComparisonIndex = 0;
        pFVar20[4].OwnerName.Number = 0;
      }
      else {
        lVar5 = *(longlong *)((longlong)FVar3 + 0x204);
        pFVar20[3].OwnerName = *(FName *)((longlong)FVar3 + 0x1fc);
        pFVar20[4]._padding_ = lVar5;
        uVar6 = *(undefined8 *)((longlong)FVar3 + 0x20c);
        FVar7 = *(FName *)((longlong)FVar3 + 0x214);
        pFVar20[4].AtomicFlags = (FAtomicFlags)(int)uVar6;
        pFVar20[4].ResourceType = (char)((ulonglong)uVar6 >> 0x20);
        pFVar20[4].field_0xd = (char)((ulonglong)uVar6 >> 0x28);
        pFVar20[4]._padding_ = (short)((ulonglong)uVar6 >> 0x30);
        pFVar20[4].OwnerName = FVar7;
        uVar12 = *(undefined2 *)((longlong)FVar3 + 0x21c);
      }
      *(undefined2 *)&pFVar20[5]._padding_ = uVar12;
      *(FRHIResource **)param_1 = pFVar20;
      FRHIResource::AddRef(pFVar20);
    }
    if (bVar9) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar10) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (!bVar8) {
      return (TRefCountPtr<FRHIBoundShaderState>)(FRHIBoundShaderState *)param_1;
    }
    if (FVar23 == (FName)0x0) {
      return (TRefCountPtr<FRHIBoundShaderState>)(FRHIBoundShaderState *)param_1;
    }
    if (FThreadStats::bPrimaryDisableForever != false) {
      return (TRefCountPtr<FRHIBoundShaderState>)(FRHIBoundShaderState *)param_1;
    }
    if (FThreadStats::TlsSlot == 0xffffffff) {
      return (TRefCountPtr<FRHIBoundShaderState>)(FRHIBoundShaderState *)param_1;
    }
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      pFVar19 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(pFVar19);
    }
    if (this_01->ScopeCount <= this_01->bWaitForExplicitFlush) {
      return (TRefCountPtr<FRHIBoundShaderState>)(FRHIBoundShaderState *)param_1;
    }
    local_60.NameAndInfo.Number = FVar23.Number & 0xffff6fff | 0x6000;
    local_60.NameAndInfo.Index.Value = FVar23.ComparisonIndex.Value.Value;
    QueryPerformanceCounter(&local_78);
    local_60.StatData.Pad[4] = '\0';
    local_60.StatData.Pad[5] = '\0';
    local_60.StatData.Pad[6] = '\0';
    local_60.StatData.Pad[7] = '\0';
    local_60.StatData.Pad[0] = local_78.s.LowPart._0_1_;
    local_60.StatData.Pad[1] = local_78.s.LowPart._1_1_;
    local_60.StatData.Pad[2] = local_78.s.LowPart._2_1_;
    local_60.StatData.Pad[3] = local_78.s.LowPart._3_1_;
    pFVar22 = &local_60;
  }
  else {
    pFVar20 = (FRHIResource *)pFVar18->BoundShaderState;
    this_00 = GetOpenGLProgramsCache();
    FGLProgramCache::Touch(this_00,*(FOpenGLLinkedProgram **)&pFVar20[5].AtomicFlags);
    FOpenGLLinkedProgram::
    UpdateShaders<FOpenGLLinkedProgram::FGraphicsProgram,FOpenGLVertexShader_*_&,FOpenGLPixelShader_*_&,FOpenGLGeometryShader_*_&>
              (*(FOpenGLLinkedProgram **)&pFVar20[5].AtomicFlags,&local_88,
               (FOpenGLPixelShader **)&local_a8,(FOpenGLGeometryShader **)&local_90);
    *(FRHIResource **)param_1 = pFVar20;
    FRHIResource::AddRef(pFVar20);
    if (bVar9) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar10) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (!bVar8) {
      return (TRefCountPtr<FRHIBoundShaderState>)(FRHIBoundShaderState *)param_1;
    }
    if (FVar23 == (FName)0x0) {
      return (TRefCountPtr<FRHIBoundShaderState>)(FRHIBoundShaderState *)param_1;
    }
    if (FThreadStats::bPrimaryDisableForever != false) {
      return (TRefCountPtr<FRHIBoundShaderState>)(FRHIBoundShaderState *)param_1;
    }
    if (FThreadStats::TlsSlot == 0xffffffff) {
      return (TRefCountPtr<FRHIBoundShaderState>)(FRHIBoundShaderState *)param_1;
    }
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      pFVar19 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(pFVar19);
    }
    if (this_01->ScopeCount <= this_01->bWaitForExplicitFlush) {
      return (TRefCountPtr<FRHIBoundShaderState>)(FRHIBoundShaderState *)param_1;
    }
    local_70.NameAndInfo.Number = FVar23.Number & 0xffff6fff | 0x6000;
    local_70.NameAndInfo.Index.Value = FVar23.ComparisonIndex.Value.Value;
    QueryPerformanceCounter(&local_80);
    local_70.StatData.Pad[4] = '\0';
    local_70.StatData.Pad[5] = '\0';
    local_70.StatData.Pad[6] = '\0';
    local_70.StatData.Pad[7] = '\0';
    local_70.StatData.Pad[0] = local_80.s.LowPart._0_1_;
    local_70.StatData.Pad[1] = local_80.s.LowPart._1_1_;
    local_70.StatData.Pad[2] = local_80.s.LowPart._2_1_;
    local_70.StatData.Pad[3] = local_80.s.LowPart._3_1_;
    pFVar22 = &local_70;
  }
  FThreadStats::AddStatMessage(this_01,pFVar22);
  piVar1 = &this_01->ScopeCount;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FThreadStats::Flush(this_01,false,false);
  }
  else if (FThreadStats::bIsRawStatsActive != false) {
    FThreadStats::FlushRawStats(this_01,false,false);
  }
  return (TRefCountPtr<FRHIBoundShaderState>)(FRHIBoundShaderState *)param_1;
}

// RHICreateBufferInitializer @ 145c19f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

FRHIBufferInitializer * __thiscall
FOpenGLDynamicRHI::RHICreateBufferInitializer
          (FOpenGLDynamicRHI *this,FRHIBufferInitializer *__return_storage_ptr__,
          FRHICommandListBase *param_1,FRHIBufferCreateDesc *param_2)

{
  ERHIBufferInitAction EVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  TEventRef<unsigned_int> TVar10;
  FRHIBufferInitializer *pFVar11;
  TOpenGLBuffer<FOpenGLBaseBuffer> *pTVar12;
  TOpenGLBuffer<FOpenGLBaseBuffer> *this_00;
  FWriteBuffer *pFVar13;
  TOpenGLBuffer<FOpenGLBaseBuffer> *this_01;
  TOpenGLBuffer<FOpenGLBaseBuffer> *this_02;
  void *pvVar14;
  undefined ***pppuVar15;
  longlong *plVar16;
  uint uVar17;
  undefined1 auStackY_328 [32];
  undefined8 local_2f4;
  undefined8 local_2ec;
  undefined8 local_2e4;
  FName local_2dc;
  FName local_2d4;
  FName local_2cc;
  FName local_2c4;
  FName local_2bc;
  FName local_2b4;
  undefined4 *local_2a8;
  longlong local_2a0;
  code *local_298 [2];
  undefined **local_288;
  TOpenGLBuffer<FOpenGLBaseBuffer> *local_280;
  undefined ***local_270;
  code *local_268 [2];
  undefined **local_258;
  TOpenGLBuffer<FOpenGLBaseBuffer> *local_250;
  undefined ***local_240;
  code *local_238 [2];
  undefined **local_228;
  TOpenGLBuffer<FOpenGLBaseBuffer> *local_220;
  undefined ***local_210;
  code *local_208 [2];
  undefined **local_1f8;
  TOpenGLBuffer<FOpenGLBaseBuffer> *local_1f0;
  undefined ***local_1e0;
  undefined1 local_1d8 [48];
  FRHICommandListBase *local_1a8;
  FRHIBuffer *local_1a0;
  undefined1 local_188 [48];
  FRHICommandListBase *local_158;
  FRHIBuffer *local_150;
  undefined1 local_138 [48];
  FRHICommandListBase *local_108;
  FRHIBuffer *local_100;
  undefined1 local_e8 [48];
  FRHICommandListBase *local_b8;
  FRHIBuffer *local_b0;
  undefined1 local_98 [48];
  FRHICommandListBase *local_68;
  FRHIBuffer *local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_328;
  bVar7 = false;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_2f4 = 0;
    TVar10 = (TEventRef<unsigned_int>)&local_2f4;
  }
  else {
    ::FName::FName(&local_2dc,param_2->DebugName);
    TVar10 = FStringTrace::GetNameRef(&local_2c4);
  }
  uVar2 = *(undefined8 *)TVar10;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_2ec = 0;
    TVar10 = (TEventRef<unsigned_int>)&local_2ec;
  }
  else {
    local_2cc = param_2->ClassName;
    if (param_2->ClassName == (FName)0x0) {
      FLazyName::Resolve((FLazyName *)
                         &`public:_class_FName___cdecl_FRHIBufferCreateDesc::GetTraceClassName(void)const___ptr64'
                          ::__l2::FRHIBufferName);
      local_2cc = local_2d4;
    }
    TVar10 = FStringTrace::GetNameRef(&local_2bc);
  }
  uVar3 = *(undefined8 *)TVar10;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_2e4 = 0;
    TVar10 = (TEventRef<unsigned_int>)&local_2e4;
  }
  else {
    TVar10 = FStringTrace::GetNameRef(&local_2b4);
  }
  uVar4 = *(undefined8 *)TVar10;
  if ((-1 < MetadataChannel->Enabled) && (-1 < AssetMetadataChannel->Enabled)) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>((TLogScope<0> *)&local_2a8);
    bVar7 = true;
    *local_2a8 = (int)uVar2;
    local_2a8[1] = (int)uVar3;
    local_2a8[2] = (int)uVar4;
    *(undefined8 *)(local_2a0 + 0x28) = *(undefined8 *)(local_2a0 + 0x20);
  }
  uVar9 = (uint)param_2->_padding_;
  this_00 = (TOpenGLBuffer<FOpenGLBaseBuffer> *)0x0;
  uVar17 = 0;
  if ((uVar9 >> 0x14 & 1) == 0) {
    uVar17 = 0x8892;
    if ((uVar9 >> 0x10 & 1) == 0) {
      if ((uVar9 >> 0xf & 1) != 0) {
        uVar17 = 0x8893;
      }
    }
    else {
      uVar17 = 0x90d2;
    }
  }
  else {
    if (((((int)param_2->_padding_ != 0) || (*(int *)((longlong)&param_2->_padding_ + 4) != 0)) ||
        (uVar9 != 0x100000)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Size == 0 && Stride == 0 && Usage == EBufferUsageFlags::NullResource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0x54f,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      pFVar11 = (FRHIBufferInitializer *)(*pcVar6)();
      return pFVar11;
    }
    uVar9 = (uint)param_2->_padding_;
  }
  if ((uVar9 >> 0x14 & 1) == 0) {
    pTVar12 = this_00;
    if (param_2->InitAction == ResourceArray) {
      pTVar12 = (TOpenGLBuffer<FOpenGLBaseBuffer> *)
                (**(code **)((longlong)*param_2->InitialData + 8))();
    }
    this_01 = ::operator_new(0x120);
    this_02 = this_00;
    if (this_01 != (TOpenGLBuffer<FOpenGLBaseBuffer> *)0x0) {
      this_02 = TOpenGLBuffer<FOpenGLBaseBuffer>::TOpenGLBuffer<FOpenGLBaseBuffer>
                          (this_01,param_1,uVar17,param_2,pTVar12);
    }
    if (param_2->InitialData != (FResourceArrayUploadInterface *)0x0) {
      (**(code **)((longlong)*param_2->InitialData + 0x18))();
    }
    EVar1 = param_2->InitAction;
    if ((EVar1 == ResourceArray) || (EVar1 == Default)) {
      if (this_02 != (TOpenGLBuffer<FOpenGLBaseBuffer> *)0x0) {
        FRHIResource::AddRef((FRHIResource *)this_02);
      }
      local_1e0 = (undefined ***)0x0;
      local_1f8 = &
                  ___7__TFunction_OwnedObject_V<lambda_24_>__0___0FDefaultBufferInitializer_RHICore_UE__QEAA_AEAVFRHICommandListBase__PEAVFRHIBuffer__PEAX_K_Z__00_0A__Function_Private_Core_UE__6B_
      ;
      local_208[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`UE::RHICore::FDefaultBufferInitializer::FDefaultBufferInitializer'::__l1::<lambda_24_>,TRefCountPtr<FRHIBuffer>,FRHICommandListBase_&>
                     ::Call;
      local_1f0 = this_02;
      FRHIBufferInitializer::FRHIBufferInitializer
                ((FRHIBufferInitializer *)local_e8,param_1,(FRHIBuffer *)this_02,(void *)0x0,0,
                 (TUniqueFunction<TRefCountPtr<FRHIBuffer>___cdecl(FRHICommandListBase_&)> *)
                 local_208);
      if (local_208[0] != (code *)0x0) {
        pppuVar15 = &local_1f8;
        if (local_1e0 != (undefined ***)0x0) {
          pppuVar15 = local_1e0;
        }
        (*(code *)(*pppuVar15)[2])();
      }
      FRHIBufferInitializer::FRHIBufferInitializer
                (__return_storage_ptr__,(FRHIBufferInitializer *)local_e8);
      if ((local_b8 != (FRHICommandListBase *)0x0) && (local_b0 != (FRHIBuffer *)0x0)) {
        FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_e8);
      }
      if (local_e8._0_8_ != 0) {
        plVar16 = (longlong *)(local_e8 + 0x10);
        if ((longlong *)local_e8._40_8_ != (longlong *)0x0) {
          plVar16 = (longlong *)local_e8._40_8_;
        }
        (**(code **)(*plVar16 + 0x10))();
      }
      if (!bVar7) {
        return __return_storage_ptr__;
      }
      lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar5 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      pFVar13 = *(FWriteBuffer **)(lVar5 + 0x20);
      if ((int)pFVar13 - *(int *)&pFVar13->Cursor < 1) {
        pFVar13 = UE::Trace::Private::Writer_NextBuffer();
      }
      *pFVar13->Cursor = '\n';
      pFVar13->Cursor = pFVar13->Cursor + 1;
      pFVar13->Committed = pFVar13->Cursor;
      return __return_storage_ptr__;
    }
    if (EVar1 == Zeroed) {
      pvVar14 = FRHICommandListBase::LockBuffer
                          (param_1,(FRHIBuffer *)this_02,0,(uint)param_2->_padding_,RLM_WriteOnly);
      memset(pvVar14,0,(ulonglong)(uint)param_2->_padding_);
      FRHICommandListBase::UnlockBuffer(param_1,(FRHIBuffer *)this_02);
      pFVar11 = (FRHIBufferInitializer *)
                UE::RHICore::FDefaultBufferInitializer::FDefaultBufferInitializer
                          ((FDefaultBufferInitializer *)local_98,param_1,(FRHIBuffer *)this_02);
      FRHIBufferInitializer::FRHIBufferInitializer(__return_storage_ptr__,pFVar11);
      if ((local_68 != (FRHICommandListBase *)0x0) && (local_60 != (FRHIBuffer *)0x0)) {
        FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_98);
      }
      if (local_98._0_8_ != 0) {
        plVar16 = (longlong *)(local_98 + 0x10);
        if ((longlong *)local_98._40_8_ != (longlong *)0x0) {
          plVar16 = (longlong *)local_98._40_8_;
        }
        (**(code **)(*plVar16 + 0x10))();
      }
      if (!bVar7) {
        return __return_storage_ptr__;
      }
      lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar5 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      pFVar13 = *(FWriteBuffer **)(lVar5 + 0x20);
      if ((int)pFVar13 - *(int *)&pFVar13->Cursor < 1) {
        pFVar13 = UE::Trace::Private::Writer_NextBuffer();
        *pFVar13->Cursor = '\n';
        pFVar13->Cursor = pFVar13->Cursor + 1;
        pFVar13->Committed = pFVar13->Cursor;
        return __return_storage_ptr__;
      }
    }
    else if (EVar1 == Initializer) {
      if (this_02 != (TOpenGLBuffer<FOpenGLBaseBuffer> *)0x0) {
        FRHIResource::AddRef((FRHIResource *)this_02);
      }
      uVar9 = (uint)this_02->_padding_;
      local_258 = &
                  ___7__TFunction_OwnedObject_V<lambda_25_>__0___0FLockBufferInitializer_RHICore_UE__QEAA_AEAVFRHICommandListBase__PEAVFRHIBuffer___Z__00_0A__Function_Private_Core_UE__6B_
      ;
      local_240 = (undefined ***)0x0;
      local_268[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`UE::RHICore::FLockBufferInitializer::FLockBufferInitializer'::__l1::<lambda_25_>,TRefCountPtr<FRHIBuffer>,FRHICommandListBase_&>
                     ::Call;
      local_250 = this_02;
      pvVar14 = FRHICommandListBase::LockBuffer(param_1,(FRHIBuffer *)this_02,0,uVar9,RLM_WriteOnly)
      ;
      FRHIBufferInitializer::FRHIBufferInitializer
                ((FRHIBufferInitializer *)local_188,param_1,(FRHIBuffer *)this_02,pvVar14,
                 (ulonglong)uVar9,
                 (TUniqueFunction<TRefCountPtr<FRHIBuffer>___cdecl(FRHICommandListBase_&)> *)
                 local_268);
      if (local_268[0] != (code *)0x0) {
        pppuVar15 = &local_258;
        if (local_240 != (undefined ***)0x0) {
          pppuVar15 = local_240;
        }
        (*(code *)(*pppuVar15)[2])();
      }
      FRHIBufferInitializer::FRHIBufferInitializer
                (__return_storage_ptr__,(FRHIBufferInitializer *)local_188);
      if ((local_158 != (FRHICommandListBase *)0x0) && (local_150 != (FRHIBuffer *)0x0)) {
        FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_188);
      }
      if (local_188._0_8_ != 0) {
        plVar16 = (longlong *)(local_188 + 0x10);
        if ((longlong *)local_188._40_8_ != (longlong *)0x0) {
          plVar16 = (longlong *)local_188._40_8_;
        }
        (**(code **)(*plVar16 + 0x10))();
      }
      if (!bVar7) {
        return __return_storage_ptr__;
      }
      lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar5 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      pFVar13 = *(FWriteBuffer **)(lVar5 + 0x20);
      if ((int)pFVar13 - *(int *)&pFVar13->Cursor < 1) {
        pFVar13 = UE::Trace::Private::Writer_NextBuffer();
        *pFVar13->Cursor = '\n';
        pFVar13->Cursor = pFVar13->Cursor + 1;
        pFVar13->Committed = pFVar13->Cursor;
        return __return_storage_ptr__;
      }
    }
    else {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)&PTR_u_Unknown_or_unha_1510e5a00,
                 (FLogCategoryBase *)&LogRHICore);
      pTVar12 = ::operator_new(0xe8);
      if (pTVar12 != (TOpenGLBuffer<FOpenGLBaseBuffer> *)0x0) {
        FRHIBuffer::FRHIBuffer((FRHIBuffer *)pTVar12,param_2);
        pTVar12->_padding_ = (longlong)&___7FInvalidBuffer_RHICore_UE__6B_;
        this_00 = pTVar12;
      }
      if (this_00 != (TOpenGLBuffer<FOpenGLBaseBuffer> *)0x0) {
        FRHIResource::AddRef((FRHIResource *)this_00);
      }
      local_210 = (undefined ***)0x0;
      local_228 = &
                  ___7__TFunction_OwnedObject_V<lambda_24_>__0___0FDefaultBufferInitializer_RHICore_UE__QEAA_AEAVFRHICommandListBase__PEAVFRHIBuffer__PEAX_K_Z__00_0A__Function_Private_Core_UE__6B_
      ;
      local_238[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`UE::RHICore::FDefaultBufferInitializer::FDefaultBufferInitializer'::__l1::<lambda_24_>,TRefCountPtr<FRHIBuffer>,FRHICommandListBase_&>
                     ::Call;
      local_220 = this_00;
      FRHIBufferInitializer::FRHIBufferInitializer
                ((FRHIBufferInitializer *)local_138,param_1,(FRHIBuffer *)this_00,(void *)0x0,0,
                 (TUniqueFunction<TRefCountPtr<FRHIBuffer>___cdecl(FRHICommandListBase_&)> *)
                 local_238);
      if (local_238[0] != (code *)0x0) {
        pppuVar15 = &local_228;
        if (local_210 != (undefined ***)0x0) {
          pppuVar15 = local_210;
        }
        (*(code *)(*pppuVar15)[2])();
      }
      FRHIBufferInitializer::FRHIBufferInitializer
                (__return_storage_ptr__,(FRHIBufferInitializer *)local_138);
      if ((local_108 != (FRHICommandListBase *)0x0) && (local_100 != (FRHIBuffer *)0x0)) {
        FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_138);
      }
      if (local_138._0_8_ != 0) {
        plVar16 = (longlong *)(local_138 + 0x10);
        if ((longlong *)local_138._40_8_ != (longlong *)0x0) {
          plVar16 = (longlong *)local_138._40_8_;
        }
        (**(code **)(*plVar16 + 0x10))();
      }
      if (!bVar7) {
        return __return_storage_ptr__;
      }
      lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar5 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      pFVar13 = *(FWriteBuffer **)(lVar5 + 0x20);
      if ((int)pFVar13 - *(int *)&pFVar13->Cursor < 1) {
        pFVar13 = UE::Trace::Private::Writer_NextBuffer();
      }
    }
  }
  else {
    if (((((int)param_2->_padding_ != 0) || (*(int *)((longlong)&param_2->_padding_ + 4) != 0)) ||
        (uVar9 != 0x100000)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Size == 0 && Stride == 0 && Usage == EBufferUsageFlags::NullResource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0x54f,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      pFVar11 = (FRHIBufferInitializer *)(*pcVar6)();
      return pFVar11;
    }
    pTVar12 = ::operator_new(0x120);
    if (pTVar12 != (TOpenGLBuffer<FOpenGLBaseBuffer> *)0x0) {
      this_00 = TOpenGLBuffer<FOpenGLBaseBuffer>::TOpenGLBuffer<FOpenGLBaseBuffer>
                          (pTVar12,param_1,uVar17,param_2,(void *)0x0);
    }
    if (this_00 != (TOpenGLBuffer<FOpenGLBaseBuffer> *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_00);
    }
    local_270 = (undefined ***)0x0;
    local_288 = &
                ___7__TFunction_OwnedObject_V<lambda_24_>__0___0FDefaultBufferInitializer_RHICore_UE__QEAA_AEAVFRHICommandListBase__PEAVFRHIBuffer__PEAX_K_Z__00_0A__Function_Private_Core_UE__6B_
    ;
    local_298[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`UE::RHICore::FDefaultBufferInitializer::FDefaultBufferInitializer'::__l1::<lambda_24_>,TRefCountPtr<FRHIBuffer>,FRHICommandListBase_&>
                   ::Call;
    local_280 = this_00;
    FRHIBufferInitializer::FRHIBufferInitializer
              ((FRHIBufferInitializer *)local_1d8,param_1,(FRHIBuffer *)this_00,(void *)0x0,0,
               (TUniqueFunction<TRefCountPtr<FRHIBuffer>___cdecl(FRHICommandListBase_&)> *)local_298
              );
    if (local_298[0] != (code *)0x0) {
      pppuVar15 = &local_288;
      if (local_270 != (undefined ***)0x0) {
        pppuVar15 = local_270;
      }
      (*(code *)(*pppuVar15)[2])();
    }
    FRHIBufferInitializer::FRHIBufferInitializer
              (__return_storage_ptr__,(FRHIBufferInitializer *)local_1d8);
    if ((local_1a8 != (FRHICommandListBase *)0x0) && (local_1a0 != (FRHIBuffer *)0x0)) {
      FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_1d8);
    }
    if (local_1d8._0_8_ != 0) {
      plVar16 = (longlong *)(local_1d8 + 0x10);
      if ((longlong *)local_1d8._40_8_ != (longlong *)0x0) {
        plVar16 = (longlong *)local_1d8._40_8_;
      }
      (**(code **)(*plVar16 + 0x10))();
    }
    if (!bVar7) {
      return __return_storage_ptr__;
    }
    lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar5 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar13 = *(FWriteBuffer **)(lVar5 + 0x20);
    if ((int)pFVar13 - *(int *)&pFVar13->Cursor < 1) {
      pFVar13 = UE::Trace::Private::Writer_NextBuffer();
      *pFVar13->Cursor = '\n';
      pFVar13->Cursor = pFVar13->Cursor + 1;
      pFVar13->Committed = pFVar13->Cursor;
      return __return_storage_ptr__;
    }
  }
  *pFVar13->Cursor = '\n';
  pFVar13->Cursor = pFVar13->Cursor + 1;
  pFVar13->Committed = pFVar13->Cursor;
  return __return_storage_ptr__;
}

// RHICreateComputeShader @ 145c1a7d0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

TRefCountPtr<FRHIComputeShader> __thiscall
FOpenGLDynamicRHI::RHICreateComputeShader
          (FOpenGLDynamicRHI *this,TArrayView<unsigned_char_const_,int> *param_1,FSHAHash *param_2)

{
  FRHIShader *this_00;
  FSHAHash *in_R9;
  TArrayView<unsigned_char_const_,int> local_18;
  
  this_00 = ::operator_new(0x1a0);
  if (this_00 == (FRHIShader *)0x0) {
    param_1->DataPtr = (uchar *)0x0;
  }
  else {
    FRHIShader::FRHIShader(this_00,RRT_ComputeShader,SF_Compute);
    local_18.DataPtr = *(uchar **)param_2->Hash;
    local_18._8_8_ = *(undefined8 *)(param_2->Hash + 8);
    this_00->_padding_ = (longlong)&___7FRHIComputeShader__6B_;
    this_00[1]._padding_ = 0;
    FOpenGLShader::FOpenGLShader
              ((FOpenGLShader *)&this_00[1]._padding_,&local_18,in_R9,0x91b9,
               (FShaderResourceTable *)&this_00->_padding_,this_00);
    this_00[1].Debug.ShaderName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00->_padding_ = (longlong)&___7FOpenGLComputeShader__6B_;
    param_1->DataPtr = (uchar *)this_00;
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  return (TRefCountPtr<FRHIComputeShader>)(FRHIComputeShader *)param_1;
}

// RHICreateDepthStencilState @ 145c1a8a0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ECompareFunction": Some values do not have unique names */
/* WARNING: Enum "EStencilOp": Some values do not have unique names */

TRefCountPtr<FRHIDepthStencilState> __thiscall
FOpenGLDynamicRHI::RHICreateDepthStencilState
          (FOpenGLDynamicRHI *this,FDepthStencilStateInitializerRHI *param_1)

{
  undefined1 uVar1;
  uint uVar2;
  atomic<unsigned_int> aVar3;
  FRHIResource *this_00;
  char *in_R8;
  
  this_00 = ::operator_new(0x58);
  if (this_00 == (FRHIResource *)0x0) {
    this_00 = (FRHIResource *)0x0;
  }
  else {
    FRHIResource::FRHIResource(this_00,RRT_DepthStencilState);
    *(undefined4 *)&this_00[1]._padding_ = 0;
    this_00->_padding_ = (longlong)&___7FOpenGLDepthStencilState__6B_;
    *(undefined2 *)&this_00[1].AtomicFlags.Packed = 0x100;
    this_00[1].ResourceType = RRT_SamplerState;
    this_00[1].field_0xd = 2;
    this_00[1]._padding_ = 0;
    *(undefined2 *)&this_00[1].OwnerName.ComparisonIndex.Value = 0;
    this_00[1].OwnerName.Number = 0x207;
    *(undefined4 *)&this_00[2]._padding_ = 0x1e00;
    *(undefined4 *)((longlong)&this_00[2]._padding_ + 4) = 0x1e00;
    this_00[2].AtomicFlags.Packed = (atomic<unsigned_int>)0x1e00;
    this_00[2].ResourceType = RRT_MeshShader;
    this_00[2].field_0xd = 2;
    this_00[2]._padding_ = 0;
    this_00[2].OwnerName.ComparisonIndex.Value = 0x1e00;
    this_00[2].OwnerName.Number = 0x1e00;
    *(undefined4 *)&this_00[3]._padding_ = 0x1e00;
    *(undefined8 *)((longlong)&this_00[3]._padding_ + 4) = 0xffffffffffffffff;
  }
  if ((in_R8[1] == '\a') && (*in_R8 == '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)&this_00[1].AtomicFlags.Packed = uVar1;
  this_00[1].AtomicFlags.Packed.field_0x1 = *in_R8;
  uVar2 = TranslateCompareFunction((uint)(byte)in_R8[1]);
  this_00[1].ResourceType = (char)uVar2;
  this_00[1].field_0xd = (char)(uVar2 >> 8);
  this_00[1]._padding_ = (short)(uVar2 >> 0x10);
  if ((in_R8[2] == '\0') && (in_R8[7] == '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)&this_00[1].OwnerName.ComparisonIndex.Value = uVar1;
  *(char *)((longlong)&this_00[1].OwnerName.ComparisonIndex.Value + 1) = in_R8[7];
  uVar2 = TranslateCompareFunction((uint)(byte)in_R8[3]);
  this_00[1].OwnerName.Number = uVar2;
  uVar2 = TranslateStencilOp((uint)(byte)in_R8[4]);
  *(uint *)&this_00[2]._padding_ = uVar2;
  uVar2 = TranslateStencilOp((uint)(byte)in_R8[5]);
  *(uint *)((longlong)&this_00[2]._padding_ + 4) = uVar2;
  aVar3 = (atomic<unsigned_int>)TranslateStencilOp((uint)(byte)in_R8[6]);
  this_00[2].AtomicFlags.Packed = aVar3;
  uVar2 = TranslateCompareFunction((uint)(byte)in_R8[8]);
  this_00[2].ResourceType = (char)uVar2;
  this_00[2].field_0xd = (char)(uVar2 >> 8);
  this_00[2]._padding_ = (short)(uVar2 >> 0x10);
  uVar2 = TranslateStencilOp((uint)(byte)in_R8[9]);
  this_00[2].OwnerName.ComparisonIndex.Value = uVar2;
  uVar2 = TranslateStencilOp((uint)(byte)in_R8[10]);
  this_00[2].OwnerName.Number = uVar2;
  uVar2 = TranslateStencilOp((uint)(byte)in_R8[0xb]);
  *(uint *)&this_00[3]._padding_ = uVar2;
  *(uint *)((longlong)&this_00[3]._padding_ + 4) = (uint)(byte)in_R8[0xc];
  aVar3._1_3_ = 0;
  aVar3._0_1_ = in_R8[0xd];
  this_00[3].AtomicFlags.Packed = aVar3;
  *(FRHIResource **)param_1 = this_00;
  FRHIResource::AddRef(this_00);
  return (TRefCountPtr<FRHIDepthStencilState>)(FRHIDepthStencilState *)param_1;
}

// RHICreateGPUFence @ 145c1aa10

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

TRefCountPtr<FRHIGPUFence> __thiscall
FOpenGLDynamicRHI::RHICreateGPUFence(FOpenGLDynamicRHI *this,FName *param_1)

{
  undefined8 uVar1;
  FName this_00;
  undefined8 *in_R8;
  
  this_00 = (FName)::operator_new(0x30);
  if (this_00 != (FName)0x0) {
    uVar1 = *in_R8;
    FRHIResource::FRHIResource((FRHIResource *)this_00,RRT_GPUFence);
    *param_1 = this_00;
    *(undefined ***)this_00 = &___7FRHIGPUFence__6B_;
    *(undefined4 *)&((FRHIResource *)((longlong)this_00 + 0x18))->_padding_ = 0;
    *(undefined ***)this_00 = &___7FOpenGLGPUFence__6B_;
    *(undefined8 *)((longlong)this_00 + 0x1c) = uVar1;
    ((FName *)((longlong)this_00 + 0x28))->ComparisonIndex = 0;
    ((FName *)((longlong)this_00 + 0x28))->Number = 0;
    FRHIResource::AddRef((FRHIResource *)this_00);
    return (TRefCountPtr<FRHIGPUFence>)(FRHIGPUFence *)param_1;
  }
  param_1->ComparisonIndex = 0;
  param_1->Number = 0;
  return (TRefCountPtr<FRHIGPUFence>)(FRHIGPUFence *)param_1;
}

// RHICreateGeometryShader @ 145c1aaa0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

TRefCountPtr<FRHIGeometryShader> __thiscall
FOpenGLDynamicRHI::RHICreateGeometryShader
          (FOpenGLDynamicRHI *this,TArrayView<unsigned_char_const_,int> *param_1,FSHAHash *param_2)

{
  FRHIShader *this_00;
  FSHAHash *in_R9;
  TArrayView<unsigned_char_const_,int> local_18;
  
  this_00 = ::operator_new(400);
  if (this_00 == (FRHIShader *)0x0) {
    param_1->DataPtr = (uchar *)0x0;
  }
  else {
    FRHIShader::FRHIShader(this_00,RRT_GeometryShader,SF_Geometry);
    local_18.DataPtr = *(uchar **)param_2->Hash;
    local_18._8_8_ = *(undefined8 *)(param_2->Hash + 8);
    this_00->_padding_ = (longlong)&___7FRHIGeometryShader__6B_;
    FOpenGLShader::FOpenGLShader
              ((FOpenGLShader *)(this_00 + 1),&local_18,in_R9,0x8dd9,
               (FShaderResourceTable *)&this_00->_padding_,this_00);
    param_1->DataPtr = (uchar *)this_00;
    this_00->_padding_ = (longlong)&___7FOpenGLGeometryShader__6B_;
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  return (TRefCountPtr<FRHIGeometryShader>)(FRHIGeometryShader *)param_1;
}

// RHICreateGraphicsPipelineState @ 145c1ab60

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

TRefCountPtr<FRHIGraphicsPipelineState> __thiscall
FOpenGLDynamicRHI::RHICreateGraphicsPipelineState
          (FOpenGLDynamicRHI *this,FGraphicsPipelineStateInitializer *param_1)

{
  FRHIGraphicsPipelineStateFallBack *pFVar1;
  FGraphicsPipelineStateInitializer *in_R8;
  
  if (((bOneTime) && (((in_R8->field25_0xd2).Flags & 0x1800) != 0)) &&
     (FOpenGLProgramBinaryCache::CachePtr != (FOpenGLProgramBinaryCache *)0x0)) {
    if (2 < (byte)LogRHI._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    bOneTime = false;
  }
  pFVar1 = ::operator_new(0x108);
  if (pFVar1 == (FRHIGraphicsPipelineStateFallBack *)0x0) {
    (param_1->BoundShaderState).VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  }
  else {
    pFVar1 = FRHIGraphicsPipelineStateFallBack::FRHIGraphicsPipelineStateFallBack(pFVar1,in_R8);
    (param_1->BoundShaderState).VertexDeclarationRHI = (FRHIVertexDeclaration *)pFVar1;
    if (pFVar1 != (FRHIGraphicsPipelineStateFallBack *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar1);
      return (TRefCountPtr<FRHIGraphicsPipelineState>)(FRHIGraphicsPipelineState *)param_1;
    }
  }
  return (TRefCountPtr<FRHIGraphicsPipelineState>)(FRHIGraphicsPipelineState *)param_1;
}

// RHICreatePixelShader @ 145c1ac10

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

TRefCountPtr<FRHIPixelShader> __thiscall
FOpenGLDynamicRHI::RHICreatePixelShader
          (FOpenGLDynamicRHI *this,TArrayView<unsigned_char_const_,int> *param_1,FSHAHash *param_2)

{
  FRHIShader *this_00;
  FSHAHash *in_R9;
  TArrayView<unsigned_char_const_,int> local_18;
  
  this_00 = ::operator_new(400);
  if (this_00 == (FRHIShader *)0x0) {
    param_1->DataPtr = (uchar *)0x0;
  }
  else {
    FRHIShader::FRHIShader(this_00,RRT_PixelShader,SF_Pixel);
    local_18.DataPtr = *(uchar **)param_2->Hash;
    local_18._8_8_ = *(undefined8 *)(param_2->Hash + 8);
    this_00->_padding_ = (longlong)&___7FRHIPixelShader__6B_;
    FOpenGLShader::FOpenGLShader
              ((FOpenGLShader *)(this_00 + 1),&local_18,in_R9,0x8b30,
               (FShaderResourceTable *)&this_00->_padding_,this_00);
    param_1->DataPtr = (uchar *)this_00;
    this_00->_padding_ = (longlong)&___7FOpenGLPixelShader__6B_;
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  return (TRefCountPtr<FRHIPixelShader>)(FRHIPixelShader *)param_1;
}

// RHICreateRasterizerState @ 145c1acd0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

TRefCountPtr<FRHIRasterizerState> __thiscall
FOpenGLDynamicRHI::RHICreateRasterizerState
          (FOpenGLDynamicRHI *this,FRasterizerStateInitializerRHI *param_1)

{
  FRHIResource *this_00;
  int iVar1;
  undefined4 uVar2;
  char *in_R8;
  
  this_00 = ::operator_new(0x30);
  uVar2 = 0x1b02;
  if (this_00 == (FRHIResource *)0x0) {
    this_00 = (FRHIResource *)0x0;
  }
  else {
    FRHIResource::FRHIResource(this_00,RRT_RasterizerState);
    this_00->_padding_ = (longlong)&___7FOpenGLRasterizerState__6B_;
    this_00[1]._padding_ = 0x1b02;
    this_00[1].AtomicFlags = (atomic<unsigned_int>)0x0;
    this_00[1].ResourceType = RRT_None;
    this_00[1].field_0xd = 0;
    this_00[1]._padding_ = 0;
    *(undefined1 *)&this_00[1].OwnerName.ComparisonIndex.Value = 0;
  }
  iVar1 = 0;
  if (in_R8[1] == '\x01') {
    iVar1 = (FOpenGLBase::bSupportsClipControl != false) + 0x404;
  }
  else if (in_R8[1] == '\x02') {
    iVar1 = 0x405 - (uint)(FOpenGLBase::bSupportsClipControl != false);
  }
  *(int *)((longlong)&this_00[1]._padding_ + 4) = iVar1;
  if (*in_R8 == '\0') {
    uVar2 = 0x1b00;
  }
  else if (*in_R8 == '\x01') {
    uVar2 = 0x1b01;
  }
  *(undefined4 *)&this_00[1]._padding_ = uVar2;
  this_00[1].AtomicFlags.Packed = *(atomic<unsigned_int> *)(in_R8 + 4);
  uVar2 = *(undefined4 *)(in_R8 + 8);
  this_00[1].ResourceType = (char)uVar2;
  this_00[1].field_0xd = (char)((uint)uVar2 >> 8);
  this_00[1]._padding_ = (short)((uint)uVar2 >> 0x10);
  *(char *)&this_00[1].OwnerName.ComparisonIndex.Value = in_R8[0xc];
  *(FRHIResource **)param_1 = this_00;
  FRHIResource::AddRef(this_00);
  return (TRefCountPtr<FRHIRasterizerState>)(FRHIRasterizerState *)param_1;
}

// RHICreateRenderQuery @ 145c1adc0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

TRefCountPtr<FRHIRenderQuery> __thiscall
FOpenGLDynamicRHI::RHICreateRenderQuery(FOpenGLDynamicRHI *this,ERenderQueryType param_1)

{
  code *pcVar1;
  bool bVar2;
  TRefCountPtr<FRHIRenderQuery> TVar3;
  FRHIResource *this_00;
  undefined4 in_register_00000014;
  FRHIRenderQuery *pFVar4;
  int in_R8D;
  
  pFVar4 = (FRHIRenderQuery *)CONCAT44(in_register_00000014,param_1);
  if (in_R8D != 1) {
    if (in_R8D == 2) {
      if (FOpenGL3::TimestampQueryBits < 1) {
        *(undefined8 *)pFVar4 = 0;
        return (TRefCountPtr<FRHIRenderQuery>)pFVar4;
      }
    }
    else {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("QueryType == RQT_Occlusion || QueryType == RQT_AbsoluteTime",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLQuery.cpp"
                         ,0x1b1,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar3.Reference = (FRHIRenderQuery *)(*pcVar1)();
        return (TRefCountPtr<FRHIRenderQuery>)TVar3.Reference;
      }
    }
  }
  this_00 = ::operator_new(0x48);
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::FRHIResource(this_00,RRT_RenderQuery);
    *(undefined2 *)((longlong)&this_00[2].OwnerName.ComparisonIndex.Value + 1) = 0;
    this_00[1]._padding_ = 0;
    this_00[1].AtomicFlags = (atomic<unsigned_int>)0x0;
    this_00[1].ResourceType = RRT_None;
    this_00[1].field_0xd = 0;
    this_00[1]._padding_ = 0;
    this_00[1].OwnerName.ComparisonIndex = 0;
    this_00[1].OwnerName.Number = 0;
    *(undefined4 *)&this_00[2]._padding_ = 0;
    this_00[2].AtomicFlags = (atomic<unsigned_int>)0x0;
    this_00[2].ResourceType = RRT_None;
    this_00[2].field_0xd = 0;
    this_00[2]._padding_ = 0;
    *(bool *)&this_00[2].OwnerName.ComparisonIndex.Value = in_R8D == 1;
    this_00->_padding_ = (longlong)&___7FOpenGLRenderQuery_RHI__6B_;
    *(undefined1 *)((longlong)&this_00[2].OwnerName.ComparisonIndex.Value + 3) = 0;
    *(FRHIResource **)pFVar4 = this_00;
    FRHIResource::AddRef(this_00);
    return (TRefCountPtr<FRHIRenderQuery>)pFVar4;
  }
  *(undefined8 *)pFVar4 = 0;
  return (TRefCountPtr<FRHIRenderQuery>)pFVar4;
}

// RHICreateSamplerState @ 145c1aeb0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TRefCountPtr<FRHISamplerState> __thiscall
FOpenGLDynamicRHI::RHICreateSamplerState
          (FOpenGLDynamicRHI *this,FSamplerStateInitializerRHI *param_1)

{
  uchar uVar1;
  uchar uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  FRHIResource *pFVar9;
  TRefCountPtr<FRHISamplerState> TVar10;
  undefined8 *puVar11;
  IConsoleManager *pIVar12;
  longlong *plVar13;
  TConsoleVariableData<int> *pTVar14;
  atomic<unsigned_int> aVar15;
  undefined4 uVar16;
  FRHIResource *pFVar17;
  FSamplerStateInitializerRHI *in_R8;
  uint uVar18;
  uint uVar19;
  FRHIResource *local_48;
  FRHIResource *local_40;
  bool local_38 [8];
  FRHIResource **local_30;
  
  uVar5 = ::GetTypeHash(in_R8);
  iVar6 = TSet<TTuple<FSamplerStateInitializerRHI,FOpenGLSamplerState_*>,TDefaultMapHashableKeyFuncs<FSamplerStateInitializerRHI,FOpenGLSamplerState_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FSamplerStateInitializerRHI>
                    ((TSet<TTuple<FSamplerStateInitializerRHI,FOpenGLSamplerState_*>,TDefaultMapHashableKeyFuncs<FSamplerStateInitializerRHI,FOpenGLSamplerState_*,0>,FDefaultSetAllocator>
                      *)&GSamplerStateCache,uVar5,in_R8);
  pFVar17 = (FRHIResource *)0x0;
  if (iVar6 != -1) {
    lVar8 = (longlong)iVar6 * 0x30 + GSamplerStateCache._0_8_;
    pFVar9 = (FRHIResource *)(lVar8 + 0x20);
    if (lVar8 == 0) {
      pFVar9 = pFVar17;
    }
    if (pFVar9 != (FRHIResource *)0x0) {
      pFVar17 = (FRHIResource *)pFVar9->_padding_;
      goto LAB_145c1b2aa;
    }
  }
  pFVar9 = ::operator_new(0x40);
  uVar16 = 0x2901;
  if (pFVar9 != (FRHIResource *)0x0) {
    FRHIResource::FRHIResource(pFVar9,RRT_SamplerState);
    pFVar9->_padding_ = (longlong)&___7FOpenGLSamplerState__6B_;
    *(undefined4 *)((longlong)&pFVar9[1]._padding_ + 4) = 0x2901;
    pFVar9[1].AtomicFlags.Packed = (atomic<unsigned_int>)0x2901;
    pFVar9[1].ResourceType = RRT_SamplerState;
    pFVar9[1].field_0xd = 0x29;
    pFVar9[1]._padding_ = 0;
    pFVar9[1].OwnerName.ComparisonIndex = 0;
    pFVar9[1].OwnerName.Number = 0x2600;
    *(undefined4 *)&pFVar9[2]._padding_ = 0x2600;
    *(undefined8 *)((longlong)&pFVar9[2]._padding_ + 4) = 1;
    pFVar9[2].ResourceType = RRT_MeshShader;
    pFVar9[2].field_0xd = 2;
    pFVar9[2]._padding_ = 0;
    pFVar17 = pFVar9;
  }
  uVar1 = (in_R8->AddressU).Value;
  if (uVar1 == '\x01') {
    uVar7 = 0x812f;
  }
  else if (uVar1 == '\x02') {
    uVar7 = 0x8370;
  }
  else if (uVar1 == '\x03') {
    uVar7 = 0x812d;
  }
  else {
    uVar7 = 0x2901;
  }
  *(undefined4 *)((longlong)&pFVar17[1]._padding_ + 4) = uVar7;
  uVar1 = (in_R8->AddressV).Value;
  if (uVar1 == '\x01') {
    aVar15 = (atomic<unsigned_int>)0x812f;
  }
  else if (uVar1 == '\x02') {
    aVar15 = (atomic<unsigned_int>)0x8370;
  }
  else if (uVar1 == '\x03') {
    aVar15 = (atomic<unsigned_int>)0x812d;
  }
  else {
    aVar15 = (atomic<unsigned_int>)0x2901;
  }
  pFVar17[1].AtomicFlags.Packed = aVar15;
  uVar1 = (in_R8->AddressW).Value;
  if (uVar1 == '\x01') {
    uVar16 = 0x812f;
  }
  else if (uVar1 == '\x02') {
    uVar16 = 0x8370;
  }
  else if (uVar1 == '\x03') {
    uVar16 = 0x812d;
  }
  pFVar17[1].ResourceType = (char)uVar16;
  pFVar17[1].field_0xd = (char)((uint)uVar16 >> 8);
  pFVar17[1]._padding_ = (short)((uint)uVar16 >> 0x10);
  pFVar17[1].OwnerName.ComparisonIndex.Value = (int)in_R8->MipBias;
  *(undefined4 *)((longlong)&pFVar17[2]._padding_ + 4) = 1;
  uVar1 = (in_R8->Filter).Value;
  uVar2 = (in_R8->SamplerComparisonFunction).Value;
  local_48 = pFVar17;
  if (uVar1 == '\0') {
LAB_145c1b12e:
    pFVar17[1].OwnerName.Number = 0x2600;
    *(undefined4 *)&pFVar17[2]._padding_ = 0x2700;
  }
  else if (uVar1 == '\x01') {
    pFVar17[1].OwnerName.Number = 0x2601;
    *(undefined4 *)&pFVar17[2]._padding_ = 0x2701;
  }
  else if (uVar1 == '\x02') {
    uVar16 = 0x2703;
    if (uVar2 != '\0') {
      uVar16 = 0x2601;
    }
    pFVar17[1].OwnerName.Number = 0x2601;
    *(undefined4 *)&pFVar17[2]._padding_ = uVar16;
  }
  else {
    if ((uVar1 != '\x03') && (uVar1 != '\x04')) goto LAB_145c1b12e;
    uVar16 = 0x2703;
    if (uVar2 != '\0') {
      uVar16 = 0x2601;
    }
    pFVar17[1].OwnerName.Number = 0x2601;
    *(undefined4 *)&pFVar17[2]._padding_ = uVar16;
    uVar18 = GMaxOpenGLTextureFilterAnisotropic;
    uVar5 = in_R8->MaxAnisotropy;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `unsigned_int___cdecl_ComputeAnisotropyRT(int)'::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`unsigned_int___cdecl_ComputeAnisotropyRT(int)'::__l2::
                             _thread_safe_static_guard_0__),
       `unsigned_int___cdecl_ComputeAnisotropyRT(int)'::__l2::_thread_safe_static_guard_0__ == -1))
    {
      pIVar12 = IConsoleManager::Get();
      plVar13 = (longlong *)(**(code **)((longlong)*pIVar12 + 0xc0))(pIVar12,L"r.MaxAnisotropy",1);
      pTVar14 = (TConsoleVariableData<int> *)0x0;
      if (plVar13 != (longlong *)0x0) {
        pTVar14 = (TConsoleVariableData<int> *)(**(code **)(*plVar13 + 0x68))(plVar13);
      }
      `unsigned_int___cdecl_ComputeAnisotropyRT(int)'::__l2::CVar = pTVar14;
      _Init_thread_footer(&`unsigned_int___cdecl_ComputeAnisotropyRT(int)'::__l2::
                           _thread_safe_static_guard_0__);
    }
    pTVar14 = `unsigned_int___cdecl_ComputeAnisotropyRT(int)'::__l2::CVar;
    bVar4 = IsInParallelGameThread();
    if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
      lVar8 = 0;
    }
    else {
      lVar8 = 4;
    }
    uVar19 = *(uint *)((longlong)pTVar14->ShadowedValue + lVar8);
    if (0 < (int)uVar5) {
      uVar19 = uVar5;
    }
    uVar5 = 0x10;
    if ((int)uVar19 < 0x10) {
      uVar5 = uVar19;
    }
    uVar19 = 1;
    if (1 < (int)uVar5) {
      uVar19 = uVar5;
    }
    if (uVar19 < uVar18) {
      uVar18 = uVar19;
    }
    *(uint *)((longlong)&local_48[2]._padding_ + 4) = uVar18;
  }
  if (uVar2 == '\0') {
    local_48[2].AtomicFlags.Packed = (atomic<unsigned_int>)0x0;
  }
  else {
    if (((in_R8->SamplerComparisonFunction).Value != '\x01') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Initializer.SamplerComparisonFunction == SCF_Less",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLState.cpp"
                           ,0x11e,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      TVar10.Reference = (FRHISamplerState *)(*pcVar3)();
      return (TRefCountPtr<FRHISamplerState>)TVar10.Reference;
    }
    local_48[2].AtomicFlags.Packed = (atomic<unsigned_int>)0x884e;
    local_48[2].ResourceType = RRT_SamplerState;
    local_48[2].field_0xd = 2;
    local_48[2]._padding_ = 0;
  }
  if ((OpenGLConsoleVariables::GOpenGLForceBilinear != 0) && ((int)local_48[2]._padding_ == 0x2703))
  {
    *(undefined4 *)&local_48[2]._padding_ = 0x2701;
  }
  *(undefined4 *)&local_48[1]._padding_ = 0;
  bVar4 = IsInRenderingThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x1594,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    TVar10.Reference = (FRHISamplerState *)(*pcVar3)();
    return (TRefCountPtr<FRHISamplerState>)TVar10.Reference;
  }
  pFVar17 = local_48;
  local_40 = local_48;
  if (((GRHICommandList.bLatchedBypass == false) ||
      ((GRHICommandList.CommandListImmediate._667_1_ & 0x20) == 0)) &&
     (GRHICommandList.CommandListImmediate._100_1_ == '\0')) {
    puVar11 = FMemStackBase::Alloc((FMemStackBase *)&GRHICommandList.CommandListImmediate,0x20,8);
    GRHICommandList.CommandListImmediate._96_4_ = GRHICommandList.CommandListImmediate._96_4_ + 1;
    *(undefined8 **)GRHICommandList.CommandListImmediate._48_8_ = puVar11;
    GRHICommandList.CommandListImmediate._48_8_ = puVar11 + 1;
    *puVar11 = &TRHILambdaCommand<FRHICommandListImmediate,`FOpenGLDynamicRHI::RHICreateSamplerState'::`2'::<lambda_1>_>
                ::_vftable_;
    puVar11[3] = L"TRHILambdaCommand";
    puVar11[1] = 0;
    puVar11[2] = pFVar17;
  }
  else {
    `FOpenGLDynamicRHI::RHICreateSamplerState'::__l2::<lambda_1>::operator()
              (&local_40,&GRHICommandList.CommandListImmediate);
  }
  FRHIResource::AddRef(local_48);
  local_30 = &local_48;
  TSet<TTuple<FSamplerStateInitializerRHI,FOpenGLSamplerState_*>,TDefaultMapHashableKeyFuncs<FSamplerStateInitializerRHI,FOpenGLSamplerState_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FSamplerStateInitializerRHI_const_&,FOpenGLSamplerState_*_const_&>_>
            ((TSet<TTuple<FSamplerStateInitializerRHI,FOpenGLSamplerState_*>,TDefaultMapHashableKeyFuncs<FSamplerStateInitializerRHI,FOpenGLSamplerState_*,0>,FDefaultSetAllocator>
              *)&GSamplerStateCache,
             (TPairInitializer<FSamplerStateInitializerRHI_const_&,FOpenGLSamplerState_*_const_&> *)
             &stack0x00000020,local_38);
  pFVar17 = local_48;
LAB_145c1b2aa:
  *(FRHIResource **)param_1 = pFVar17;
  if (pFVar17 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(pFVar17);
  }
  return (TRefCountPtr<FRHISamplerState>)(FRHISamplerState *)param_1;
}

// RHICreateShaderResourceView @ 145c1b330

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

TRefCountPtr<FRHIShaderResourceView> __thiscall
FOpenGLDynamicRHI::RHICreateShaderResourceView
          (FOpenGLDynamicRHI *this,FRHICommandListBase *param_1,FRHIViewableResource *param_2,
          FRHIViewDesc *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  FName FVar5;
  bool bVar6;
  FRHIResource *this_00;
  TRefCountPtr<FRHIShaderResourceView> TVar7;
  undefined8 *puVar8;
  FRHIResource *local_res10;
  undefined8 *in_stack_00000028;
  
  this_00 = ::operator_new(0x58);
  if (this_00 == (FRHIResource *)0x0) {
    (param_1->MemManager).Top = (uchar *)0x0;
  }
  else {
    FRHIResource::FRHIResource(this_00,RRT_ShaderResourceView);
    this_00->_padding_ = (longlong)&___7FRHIView__6B_;
    this_00[1]._padding_ = (longlong)param_3;
    if (param_3 != (FRHIViewDesc *)0x0) {
      FRHIResource::AddRef((FRHIResource *)param_3);
    }
    uVar4 = *in_stack_00000028;
    FVar5 = *(FName *)(in_stack_00000028 + 1);
    this_00[1].AtomicFlags = (FAtomicFlags)(int)uVar4;
    this_00[1].ResourceType = (char)((ulonglong)uVar4 >> 0x20);
    this_00[1].field_0xd = (char)((ulonglong)uVar4 >> 0x28);
    this_00[1]._padding_ = (short)((ulonglong)uVar4 >> 0x30);
    this_00[1].OwnerName = FVar5;
    if (param_3 == (FRHIViewDesc *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InResource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                         ,0xcae,L"Cannot create a view of a nullptr resource.");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        TVar7.Reference = (FRHIShaderResourceView *)(*pcVar3)();
        return (TRefCountPtr<FRHIShaderResourceView>)TVar7.Reference;
      }
    }
    this_00->_padding_ = (longlong)&___7FRHIShaderResourceView__6B_;
    cVar1 = *(char *)&this_00[1].AtomicFlags.Packed;
    if ((cVar1 != '\0') && (cVar1 != '\x02')) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ViewDesc.IsSRV()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                         ,0xced,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        TVar7.Reference = (FRHIShaderResourceView *)(*pcVar3)();
        return (TRefCountPtr<FRHIShaderResourceView>)TVar7.Reference;
      }
    }
    *(undefined4 *)((longlong)&this_00[3]._padding_ + 4) = 0x8c2a;
    this_00[2].AtomicFlags = (atomic<unsigned_int>)0x0;
    this_00[2].ResourceType = RRT_None;
    this_00[2].field_0xd = 0;
    this_00[2]._padding_ = 0;
    this_00->_padding_ =
         (longlong)&FOpenGLShaderResourceView::_vftable__for__FRHIShaderResourceView__;
    this_00[2]._padding_ = (longlong)&FOpenGLShaderResourceView::_vftable__for__FOpenGLView__;
    this_00[2].OwnerName.ComparisonIndex = 0;
    this_00[2].OwnerName.Number = 0;
    *(undefined4 *)&this_00[3]._padding_ = 0;
    this_00[3].AtomicFlags.Packed = (atomic<unsigned_int>)0xffffffff;
    this_00[3].ResourceType = RRT_None;
    local_res10 = this_00;
    if (((GRHICommandList.bLatchedBypass == false) ||
        ((param_2[0x10].Name.ComparisonIndex.Value & 0x20000000) == 0)) &&
       (*(char *)((longlong)&param_2[2]._padding_ + 4) == '\0')) {
      puVar8 = FMemStackBase::Alloc((FMemStackBase *)param_2,0x20,8);
      puVar2 = (undefined8 *)param_2[1]._padding_;
      *(int *)&param_2[2]._padding_ = (int)param_2[2]._padding_ + 1;
      (param_1->MemManager).Top = (uchar *)this_00;
      *puVar2 = puVar8;
      param_2[1]._padding_ = (longlong)(puVar8 + 1);
      puVar8[1] = 0;
      *puVar8 = &TRHILambdaCommand<FRHICommandListBase,`FOpenGLShaderResourceView::FOpenGLShaderResourceView'::`2'::<lambda_1>_>
                 ::_vftable_;
      puVar8[3] = L"TRHILambdaCommand";
      puVar8[2] = this_00;
      FRHIResource::AddRef(this_00);
    }
    else {
      `FOpenGLShaderResourceView::FOpenGLShaderResourceView'::__l2::<lambda_1>::operator()
                (&local_res10,(FRHICommandListBase *)param_2);
      (param_1->MemManager).Top = (uchar *)this_00;
      FRHIResource::AddRef(this_00);
    }
  }
  return (TRefCountPtr<FRHIShaderResourceView>)(FRHIShaderResourceView *)param_1;
}

// RHICreateStagingBuffer @ 145c1b4e0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

TRefCountPtr<FRHIStagingBuffer> __thiscall
FOpenGLDynamicRHI::RHICreateStagingBuffer(FOpenGLDynamicRHI *this)

{
  FRHIStagingBuffer *pFVar1;
  FOpenGLStagingBuffer *this_00;
  undefined1 in_DL;
  undefined7 in_register_00000011;
  
  pFVar1 = (FRHIStagingBuffer *)CONCAT71(in_register_00000011,in_DL);
  this_00 = ::operator_new(0x30);
  if (this_00 != (FOpenGLStagingBuffer *)0x0) {
    FRHIResource::FRHIResource((FRHIResource *)this_00,RRT_StagingBuffer);
    *(undefined1 *)&this_00->_padding_ = 0;
    this_00->_padding_ = (longlong)&___7FOpenGLStagingBuffer__6B_;
    FOpenGLStagingBuffer::Initialize(this_00);
    pFVar1->_padding_ = (longlong)this_00;
    FRHIResource::AddRef((FRHIResource *)this_00);
    return (TRefCountPtr<FRHIStagingBuffer>)pFVar1;
  }
  pFVar1->_padding_ = 0;
  return (TRefCountPtr<FRHIStagingBuffer>)pFVar1;
}

// RHICreateTexture2DArrayFromResource @ 145c1b560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

TRefCountPtr<FRHITexture> __thiscall
FOpenGLDynamicRHI::RHICreateTexture2DArrayFromResource
          (FOpenGLDynamicRHI *this,EPixelFormat param_1,uint param_2,uint param_3,uint param_4,
          uint param_5,uint param_6,uint param_7,FClearValueBinding *param_8,uint param_9,
          ETextureCreateFlags param_10)

{
  undefined8 *puVar1;
  FOpenGLTexture *this_00;
  FOpenGLTexture *this_01;
  undefined7 in_register_00000011;
  undefined4 in_stack_00000054;
  ETextureCreateFlags in_stack_00000060;
  undefined1 auStack_1e8 [32];
  uint local_1c8;
  uint uStack_1c4;
  FRHITextureDesc local_1b8;
  wchar_t *local_168;
  undefined8 local_160;
  longlong local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined1 local_138 [48];
  uchar local_108;
  uchar local_107;
  ForElementType<EPixelFormat> local_f8;
  wchar_t *local_e8;
  ERHIAccess local_e0;
  undefined4 local_dc;
  longlong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  FOpenGLTextureDesc local_c0;
  FRHITextureDesc local_a8;
  wchar_t *local_58;
  ERHIAccess local_50;
  undefined4 local_4c;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  this_01 = (FOpenGLTexture *)0x0;
  local_1b8.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  local_1b8.Flags = None;
  local_1b8.ClearValue._0_8_ = 1;
  local_168 = L"RHICreateTexture2DArrayFromResource";
  uStack_1c4 = param_4;
  local_1b8.Extent.field0_0x0._s_0.Y = param_4;
  local_1b8.Extent.field0_0x0._s_0.X = param_3;
  local_1b8.ArraySize = (ushort)param_5;
  local_1b8.ClearValue.Value._4_8_ = 0;
  local_1b8.ClearValue.Value.Color[3] = 0.0;
  local_1b8.ExtData = 0;
  local_1b8.Depth = 1;
  local_1b8.NumMips = '\x01';
  local_1b8.NumSamples = '\x01';
  local_1b8.Dimension = Texture2DArray;
  local_1b8.UAVFormat = PF_Unknown;
  local_1b8.FastVRAMPercentage = 0xff;
  local_1b8.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
  local_1b8.AliasableFormats.ArrayNum = 0;
  local_1b8.AliasableFormats.ArrayMax = 1;
  local_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_1b8.Format = (EPixelFormat)param_2;
  local_1c8 = param_3;
  FRHITextureDesc::FRHITextureDesc((FRHITextureDesc *)local_138,&local_1b8);
  local_e8 = local_168;
  local_dc = local_160._4_4_;
  local_d0 = local_150;
  local_c8 = local_148;
  local_e0 = (ERHIAccess)local_160;
  local_d8 = local_158;
  if (local_1b8.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_1b8.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  puVar1 = (undefined8 *)CONCAT44(in_stack_00000054,param_9);
  local_138._8_8_ = *puVar1;
  local_138._16_8_ = puVar1[1];
  local_138._24_4_ = *(undefined4 *)(puVar1 + 2);
  local_108 = (uchar)param_6;
  local_107 = (uchar)param_7;
  if (local_e0 == None) {
    local_e0 = RHIGetDefaultResourceState(in_stack_00000060,local_d8 != 0);
  }
  FRHITextureDesc::FRHITextureDesc(&local_a8,(FRHITextureDesc *)local_138);
  local_58 = local_e8;
  local_50 = local_e0;
  local_4c = local_dc;
  local_48 = local_d8;
  local_40 = local_d0;
  local_38 = local_c8;
  if (local_f8 != (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_f8);
  }
  this_00 = ::operator_new(0x198);
  if (this_00 != (FOpenGLTexture *)0x0) {
    FRHITextureDesc::FRHITextureDesc((FRHITextureDesc *)local_138,&local_a8);
    local_e8 = local_58;
    local_e0 = local_50;
    local_dc = local_4c;
    local_d8 = local_48;
    local_d0 = local_40;
    local_c8 = local_38;
    FOpenGLTextureDesc::FOpenGLTextureDesc(&local_c0,&local_a8);
    this_01 = FOpenGLTexture::FOpenGLTexture
                        (this_00,(FOpenGLTextureCreateDesc *)local_138,(undefined4)param_10);
  }
  ((FRHITexture *)CONCAT71(in_register_00000011,param_1))->_padding_ = (longlong)this_01;
  if (this_01 != (FOpenGLTexture *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_01);
  }
  if ((this_00 != (FOpenGLTexture *)0x0) && (local_f8 != (ForElementType<EPixelFormat>)0x0)) {
    FMemory::Free((void *)local_f8);
  }
  if (local_a8.AliasableFormats.AllocatorInstance.SecondaryData != (ForElementType<EPixelFormat>)0x0
     ) {
    FMemory::Free((void *)local_a8.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  return (TRefCountPtr<FRHITexture>)(FRHITexture *)CONCAT71(in_register_00000011,param_1);
}

// RHICreateTexture2DFromResource @ 145c1b810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

TRefCountPtr<FRHITexture> __thiscall
FOpenGLDynamicRHI::RHICreateTexture2DFromResource
          (FOpenGLDynamicRHI *this,EPixelFormat param_1,uint param_2,uint param_3,uint param_4,
          uint param_5,uint param_6,FClearValueBinding *param_7,uint param_8,
          ETextureCreateFlags param_9)

{
  longlong lVar1;
  longlong *plVar2;
  ERHIAccess EVar3;
  FRHITextureCreateDesc *pFVar4;
  FOpenGLTexture *this_00;
  FOpenGLTexture *this_01;
  undefined7 in_register_00000011;
  undefined4 in_stack_0000004c;
  ETextureCreateFlags in_stack_00000058;
  undefined1 auStack_188 [32];
  FRHITextureDesc local_148;
  wchar_t *local_f8;
  ERHIAccess local_f0;
  ERHITextureInitAction local_ec;
  FResourceBulkDataInterface *local_e8;
  FName local_e0;
  FName local_d8;
  undefined1 local_c8 [80];
  wchar_t *local_78;
  ERHIAccess local_70;
  ERHITextureInitAction local_6c;
  FResourceBulkDataInterface *local_68;
  FName local_60;
  FName local_58;
  FOpenGLTextureDesc local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_188;
  this_01 = (FOpenGLTexture *)0x0;
  pFVar4 = FRHITextureCreateDesc::Create2D
                     ((FRHITextureCreateDesc *)local_c8,L"RHICreateTexture2DFromResource",param_3,
                      param_4,(EPixelFormat)param_2);
  plVar2 = (longlong *)CONCAT44(in_stack_0000004c,param_8);
  lVar1 = plVar2[1];
  pFVar4->_padding_ = *plVar2;
  pFVar4->_padding_ = lVar1;
  *(int *)&pFVar4->_padding_ = (int)plVar2[2];
  *(undefined1 *)&pFVar4->_padding_ = (undefined1)param_5;
  *(undefined1 *)((longlong)&pFVar4->_padding_ + 1) = (undefined1)param_6;
  pFVar4->_padding_ = in_stack_00000058;
  if (pFVar4->InitialState == None) {
    EVar3 = RHIGetDefaultResourceState
                      (in_stack_00000058,pFVar4->BulkData != (FResourceBulkDataInterface *)0x0);
    pFVar4->InitialState = EVar3;
  }
  FRHITextureDesc::FRHITextureDesc(&local_148,(FRHITextureDesc *)pFVar4);
  local_f8 = pFVar4->DebugName;
  local_f0 = pFVar4->InitialState;
  local_ec = pFVar4->InitAction;
  local_e8 = pFVar4->BulkData;
  local_e0 = pFVar4->ClassName;
  local_d8 = pFVar4->OwnerName;
  if ((ForElementType<EPixelFormat>)local_c8._64_8_ != (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_c8._64_8_);
  }
  this_00 = ::operator_new(0x198);
  if (this_00 != (FOpenGLTexture *)0x0) {
    FRHITextureDesc::FRHITextureDesc((FRHITextureDesc *)local_c8,&local_148);
    local_78 = local_f8;
    local_70 = local_f0;
    local_6c = local_ec;
    local_68 = local_e8;
    local_60 = local_e0;
    local_58 = local_d8;
    FOpenGLTextureDesc::FOpenGLTextureDesc(&local_50,&local_148);
    this_01 = FOpenGLTexture::FOpenGLTexture
                        (this_00,(FOpenGLTextureCreateDesc *)local_c8,(undefined4)param_9);
  }
  ((FRHITexture *)CONCAT71(in_register_00000011,param_1))->_padding_ = (longlong)this_01;
  if (this_01 != (FOpenGLTexture *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_01);
  }
  if ((this_00 != (FOpenGLTexture *)0x0) &&
     ((ForElementType<EPixelFormat>)local_c8._64_8_ != (ForElementType<EPixelFormat>)0x0)) {
    FMemory::Free((void *)local_c8._64_8_);
  }
  if (local_148.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_148.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  return (TRefCountPtr<FRHITexture>)(FRHITexture *)CONCAT71(in_register_00000011,param_1);
}

// RHICreateTextureCubeFromResource @ 145c1b9c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

TRefCountPtr<FRHITexture> __thiscall
FOpenGLDynamicRHI::RHICreateTextureCubeFromResource
          (FOpenGLDynamicRHI *this,EPixelFormat param_1,uint param_2,bool param_3,uint param_4,
          uint param_5,uint param_6,uint param_7,FClearValueBinding *param_8,uint param_9,
          ETextureCreateFlags param_10)

{
  undefined8 *puVar1;
  FOpenGLTexture *this_00;
  FOpenGLTexture *this_01;
  undefined7 in_register_00000011;
  undefined3 in_register_00000089;
  undefined4 in_stack_00000054;
  ETextureCreateFlags in_stack_00000060;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 uStack_144;
  undefined1 local_138 [28];
  FRHIGPUMask local_11c;
  uint local_118;
  TIntPoint<int>_u_0 local_114;
  ushort local_10c;
  ushort local_10a;
  uchar local_108;
  uchar local_107;
  ETextureDimension local_106;
  EPixelFormat local_105;
  undefined2 local_104;
  ForElementType<EPixelFormat> local_f8;
  int local_f0;
  int local_ec;
  wchar_t *local_e8;
  ERHIAccess local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  FOpenGLTextureDesc local_c0;
  FRHITextureDesc local_a8;
  wchar_t *local_58;
  ERHIAccess local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_148 = CONCAT31(in_register_00000089,param_3);
  local_28 = __security_cookie.value ^ (ulonglong)auStack_168;
  this_01 = (FOpenGLTexture *)0x0;
  local_11c.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  local_106 = ((byte)param_4 ^ 1) + TextureCube;
  local_118 = 0;
  local_e8 = L"RHICreateTextureCubeFromResource";
  local_114._s_0.Y = local_148;
  local_114._s_0.X = local_148;
  local_10a = 1;
  if ((byte)param_4 != 0) {
    local_10a = (ushort)param_5;
  }
  puVar1 = (undefined8 *)CONCAT44(in_stack_00000054,param_9);
  local_10c = 1;
  local_104 = 0xff00;
  local_f8 = (ForElementType<EPixelFormat>)0x0;
  local_138._8_8_ = *puVar1;
  local_138._16_8_ = puVar1[1];
  local_138._24_4_ = *(undefined4 *)(puVar1 + 2);
  local_108 = (uchar)param_6;
  local_107 = (uchar)param_7;
  local_f0 = 0;
  local_ec = 1;
  local_dc = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_105 = (EPixelFormat)param_2;
  uStack_144 = local_148;
  local_e0 = RHIGetDefaultResourceState(in_stack_00000060,false);
  FRHITextureDesc::FRHITextureDesc(&local_a8,(FRHITextureDesc *)local_138);
  local_58 = local_e8;
  local_50 = local_e0;
  local_4c = local_dc;
  local_48 = local_d8;
  local_40 = local_d0;
  local_38 = local_c8;
  if (local_f8 != (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_f8);
  }
  this_00 = ::operator_new(0x198);
  if (this_00 != (FOpenGLTexture *)0x0) {
    FRHITextureDesc::FRHITextureDesc((FRHITextureDesc *)local_138,&local_a8);
    local_e8 = local_58;
    local_e0 = local_50;
    local_dc = local_4c;
    local_d8 = local_48;
    local_d0 = local_40;
    local_c8 = local_38;
    FOpenGLTextureDesc::FOpenGLTextureDesc(&local_c0,&local_a8);
    this_01 = FOpenGLTexture::FOpenGLTexture
                        (this_00,(FOpenGLTextureCreateDesc *)local_138,(undefined4)param_10);
  }
  ((FRHITexture *)CONCAT71(in_register_00000011,param_1))->_padding_ = (longlong)this_01;
  if (this_01 != (FOpenGLTexture *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_01);
  }
  if ((this_00 != (FOpenGLTexture *)0x0) && (local_f8 != (ForElementType<EPixelFormat>)0x0)) {
    FMemory::Free((void *)local_f8);
  }
  if (local_a8.AliasableFormats.AllocatorInstance.SecondaryData != (ForElementType<EPixelFormat>)0x0
     ) {
    FMemory::Free((void *)local_a8.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  return (TRefCountPtr<FRHITexture>)(FRHITexture *)CONCAT71(in_register_00000011,param_1);
}

// RHICreateTextureInitializer @ 145c1bbe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

FRHITextureInitializer * __thiscall
FOpenGLDynamicRHI::RHICreateTextureInitializer
          (FOpenGLDynamicRHI *this,FRHITextureInitializer *__return_storage_ptr__,
          FRHICommandListBase *param_1,FRHITextureCreateDesc *param_2)

{
  ERHITextureInitAction EVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  TEventRef<unsigned_int> TVar10;
  FOpenGLTexture *pFVar11;
  FWriteBuffer *pFVar12;
  FRHITextureInitializer *pFVar13;
  void *_Src;
  undefined ***pppuVar14;
  longlong *plVar15;
  undefined1 auStackY_488 [32];
  undefined8 local_434;
  undefined8 local_42c;
  undefined8 local_424;
  FName local_41c;
  FName local_414;
  FName local_40c;
  FName local_404;
  FName local_3fc;
  FName local_3f4;
  undefined4 *local_3e8;
  longlong local_3e0;
  code *local_3d8 [2];
  undefined **local_3c8;
  FOpenGLTexture *local_3c0;
  undefined ***local_3b0;
  code *local_3a8 [2];
  undefined **local_398;
  undefined8 local_390;
  undefined ***local_380;
  undefined1 local_378 [40];
  longlong *local_350;
  undefined1 local_348 [40];
  longlong *local_320;
  undefined1 local_318 [48];
  longlong local_2e8;
  longlong local_2d8 [3];
  longlong *local_2c0;
  FRHICommandListBase *local_2b8;
  FRHITexture *local_2b0;
  void *local_2a8;
  ulonglong local_2a0;
  undefined1 local_288 [48];
  longlong local_258;
  longlong local_248 [3];
  longlong *local_230;
  FRHICommandListBase *local_228;
  FRHITexture *local_220;
  undefined1 local_1f8 [48];
  longlong local_1c8;
  longlong local_1b8 [3];
  longlong *local_1a0;
  FRHICommandListBase *local_198;
  FRHITexture *local_190;
  undefined1 local_168 [80];
  wchar_t *local_118;
  ERHIAccess local_110;
  ERHITextureInitAction local_10c;
  FResourceBulkDataInterface *local_108;
  FName local_100;
  FName local_f8;
  FOpenGLTextureDesc local_f0;
  undefined1 local_d8 [48];
  longlong local_a8;
  longlong local_98 [3];
  longlong *local_80;
  FRHICommandListBase *local_78;
  FRHITexture *local_70;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_488;
  bVar7 = false;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_434 = 0;
    TVar10 = (TEventRef<unsigned_int>)&local_434;
  }
  else {
    ::FName::FName(&local_41c,param_2->DebugName);
    TVar10 = FStringTrace::GetNameRef(&local_404);
  }
  uVar2 = *(undefined8 *)TVar10;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_42c = 0;
    TVar10 = (TEventRef<unsigned_int>)&local_42c;
  }
  else {
    local_40c = param_2->ClassName;
    if (param_2->ClassName == (FName)0x0) {
      FLazyName::Resolve((FLazyName *)
                         &`public:_class_FName___cdecl_FRHITextureCreateDesc::GetTraceClassName(void)const___ptr64'
                          ::__l2::FRHITextureName);
      local_40c = local_414;
    }
    TVar10 = FStringTrace::GetNameRef(&local_3fc);
  }
  uVar3 = *(undefined8 *)TVar10;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_424 = 0;
    TVar10 = (TEventRef<unsigned_int>)&local_424;
  }
  else {
    TVar10 = FStringTrace::GetNameRef(&local_3f4);
  }
  uVar4 = *(undefined8 *)TVar10;
  if ((-1 < MetadataChannel->Enabled) && (-1 < AssetMetadataChannel->Enabled)) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>((TLogScope<0> *)&local_3e8);
    bVar7 = true;
    *local_3e8 = (int)uVar2;
    local_3e8[1] = (int)uVar3;
    local_3e8[2] = (int)uVar4;
    *(undefined8 *)(local_3e0 + 0x28) = *(undefined8 *)(local_3e0 + 0x20);
  }
  pFVar11 = ::operator_new(0x198);
  if (pFVar11 == (FOpenGLTexture *)0x0) {
    pFVar11 = (FOpenGLTexture *)0x0;
  }
  else {
    FRHITextureDesc::FRHITextureDesc((FRHITextureDesc *)local_168,(FRHITextureDesc *)param_2);
    local_118 = param_2->DebugName;
    local_110 = param_2->InitialState;
    local_10c = param_2->InitAction;
    local_108 = param_2->BulkData;
    local_100 = param_2->ClassName;
    local_f8 = param_2->OwnerName;
    FOpenGLTextureDesc::FOpenGLTextureDesc(&local_f0,(FRHITextureDesc *)param_2);
    pFVar11 = FOpenGLTexture::FOpenGLTexture(pFVar11,(FOpenGLTextureCreateDesc *)local_168);
    if ((ForElementType<EPixelFormat>)local_168._64_8_ != (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_168._64_8_);
    }
  }
  EVar1 = param_2->InitAction;
  if (EVar1 == Default) {
    if (pFVar11 != (FOpenGLTexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar11);
    }
    local_3c8 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FOpenGLDynamicRHI::RHICreateTextureInitializer'::`11'::<lambda_1>,1,0>
                 ::_vftable_;
    local_3b0 = (undefined ***)0x0;
    local_3d8[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FOpenGLDynamicRHI::RHICreateTextureInitializer'::__l11::<lambda_1>,TRefCountPtr<FRHITexture>,FRHICommandListBase_&>
                   ::Call;
    local_378._0_8_ = 0;
    local_350 = (longlong *)0x0;
    local_3c0 = pFVar11;
    FRHITextureInitializer::FRHITextureInitializer
              ((FRHITextureInitializer *)local_288,param_1,(FRHITexture *)pFVar11,(void *)0x0,0,
               (TUniqueFunction<TRefCountPtr<FRHITexture>___cdecl(FRHICommandListBase_&)> *)
               local_3d8,
               (TUniqueFunction<FRHITextureSubresourceInitializer___cdecl(FRHITextureInitializer::FSubresourceIndex)>
                *)local_378);
    if (local_378._0_8_ != 0) {
      plVar15 = (longlong *)(local_378 + 0x10);
      if (local_350 != (longlong *)0x0) {
        plVar15 = local_350;
      }
      (**(code **)(*plVar15 + 0x10))();
    }
    FRHITextureInitializer::FRHITextureInitializer
              (__return_storage_ptr__,(FRHITextureInitializer *)local_288);
    if ((local_228 != (FRHICommandListBase *)0x0) && (local_220 != (FRHITexture *)0x0)) {
      FRHITextureInitializer::RemovePendingTextureUpload((FRHITextureInitializer *)local_288);
    }
    if (local_258 != 0) {
      plVar15 = local_248;
      if (local_230 != (longlong *)0x0) {
        plVar15 = local_230;
      }
      (**(code **)(*plVar15 + 0x10))();
    }
    if (local_288._0_8_ != 0) {
      plVar15 = (longlong *)(local_288 + 0x10);
      if ((longlong *)local_288._40_8_ != (longlong *)0x0) {
        plVar15 = (longlong *)local_288._40_8_;
      }
      (**(code **)(*plVar15 + 0x10))();
    }
    if (local_3d8[0] != (code *)0x0) {
      pppuVar14 = &local_3c8;
      if (local_3b0 != (undefined ***)0x0) {
        pppuVar14 = local_3b0;
      }
      (*(code *)(*pppuVar14)[2])();
    }
    if (!bVar7) {
      return __return_storage_ptr__;
    }
    lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar5 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar12 = *(FWriteBuffer **)(lVar5 + 0x20);
    if ((int)pFVar12 - *(int *)&pFVar12->Cursor < 1) {
      pFVar12 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar12->Cursor = '\n';
    pFVar12->Cursor = pFVar12->Cursor + 1;
    pFVar12->Committed = pFVar12->Cursor;
    return __return_storage_ptr__;
  }
  if (EVar1 == BulkData) {
    if ((param_2->BulkData == (FResourceBulkDataInterface *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("CreateDesc.BulkData",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                           ,0x5e2,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      pFVar13 = (FRHITextureInitializer *)(*pcVar6)();
      return pFVar13;
    }
    CreateWritableTextureInitializer
              ((FDefaultLayoutTextureInitializer *)local_318,param_1,pFVar11,param_2);
    uVar9 = (**(code **)((longlong)*param_2->BulkData + 0x10))();
    if ((local_2a0 < uVar9) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("CreateDesc.BulkData->GetResourceBulkDataSize() <= Initializer.GetWritableSize()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                           ,0x5e5,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      pFVar13 = (FRHITextureInitializer *)(*pcVar6)();
      return pFVar13;
    }
    uVar9 = (**(code **)((longlong)*param_2->BulkData + 0x10))();
    _Src = (void *)(**(code **)((longlong)*param_2->BulkData + 8))();
    memcpy(local_2a8,_Src,(ulonglong)uVar9);
    (**(code **)((longlong)*param_2->BulkData + 0x18))();
    FRHITextureInitializer::FRHITextureInitializer
              (__return_storage_ptr__,(FRHITextureInitializer *)local_318);
    if ((local_2b8 != (FRHICommandListBase *)0x0) && (local_2b0 != (FRHITexture *)0x0)) {
      FRHITextureInitializer::RemovePendingTextureUpload((FRHITextureInitializer *)local_318);
    }
    if (local_2e8 != 0) {
      plVar15 = local_2d8;
      if (local_2c0 != (longlong *)0x0) {
        plVar15 = local_2c0;
      }
      (**(code **)(*plVar15 + 0x10))();
    }
    if (local_318._0_8_ == 0) goto LAB_145c1c26b;
    plVar15 = (longlong *)(local_318 + 0x10);
  }
  else if (EVar1 == Initializer) {
    pFVar13 = (FRHITextureInitializer *)
              CreateWritableTextureInitializer
                        ((FDefaultLayoutTextureInitializer *)local_d8,param_1,pFVar11,param_2);
    FRHITextureInitializer::FRHITextureInitializer(__return_storage_ptr__,pFVar13);
    if ((local_78 != (FRHICommandListBase *)0x0) && (local_70 != (FRHITexture *)0x0)) {
      FRHITextureInitializer::RemovePendingTextureUpload((FRHITextureInitializer *)local_d8);
    }
    if (local_a8 != 0) {
      plVar15 = local_98;
      if (local_80 != (longlong *)0x0) {
        plVar15 = local_80;
      }
      (**(code **)(*plVar15 + 0x10))();
    }
    if (local_d8._0_8_ == 0) goto LAB_145c1c26b;
    plVar15 = (longlong *)(local_d8 + 0x10);
    local_318._40_8_ = local_d8._40_8_;
  }
  else {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)&PTR_u_Unknown_or_unha_1510ecf08,
               (FLogCategoryBase *)&LogRHICore);
    local_398 = &
                ___7__TFunction_OwnedObject_V<lambda_26_>__0___0FDefaultTextureInitializer_RHICore_UE__QEAA_AEAVFRHICommandListBase__PEAVFRHITexture___Z__00_0A__Function_Private_Core_UE__6B_
    ;
    local_380 = (undefined ***)0x0;
    local_3a8[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`UE::RHICore::FDefaultTextureInitializer::FDefaultTextureInitializer'::__l1::<lambda_26_>,TRefCountPtr<FRHITexture>,FRHICommandListBase_&>
                   ::Call;
    local_390 = 0;
    local_348._0_8_ = 0;
    local_320 = (longlong *)0x0;
    FRHITextureInitializer::FRHITextureInitializer
              ((FRHITextureInitializer *)local_1f8,param_1,(FRHITexture *)0x0,(void *)0x0,0,
               (TUniqueFunction<TRefCountPtr<FRHITexture>___cdecl(FRHICommandListBase_&)> *)
               local_3a8,
               (TUniqueFunction<FRHITextureSubresourceInitializer___cdecl(FRHITextureInitializer::FSubresourceIndex)>
                *)local_348);
    if (local_348._0_8_ != 0) {
      plVar15 = (longlong *)(local_348 + 0x10);
      if (local_320 != (longlong *)0x0) {
        plVar15 = local_320;
      }
      (**(code **)(*plVar15 + 0x10))();
    }
    if (local_3a8[0] != (code *)0x0) {
      pppuVar14 = &local_398;
      if (local_380 != (undefined ***)0x0) {
        pppuVar14 = local_380;
      }
      (*(code *)(*pppuVar14)[2])();
    }
    FRHITextureInitializer::FRHITextureInitializer
              (__return_storage_ptr__,(FRHITextureInitializer *)local_1f8);
    if ((local_198 != (FRHICommandListBase *)0x0) && (local_190 != (FRHITexture *)0x0)) {
      FRHITextureInitializer::RemovePendingTextureUpload((FRHITextureInitializer *)local_1f8);
    }
    if (local_1c8 != 0) {
      plVar15 = local_1b8;
      if (local_1a0 != (longlong *)0x0) {
        plVar15 = local_1a0;
      }
      (**(code **)(*plVar15 + 0x10))();
    }
    if (local_1f8._0_8_ == 0) goto LAB_145c1c26b;
    plVar15 = (longlong *)(local_1f8 + 0x10);
    local_318._40_8_ = local_1f8._40_8_;
  }
  if ((longlong *)local_318._40_8_ != (longlong *)0x0) {
    plVar15 = (longlong *)local_318._40_8_;
  }
  (**(code **)(*plVar15 + 0x10))();
LAB_145c1c26b:
  if (bVar7) {
    lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar5 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar12 = *(FWriteBuffer **)(lVar5 + 0x20);
    if ((int)pFVar12 - *(int *)&pFVar12->Cursor < 1) {
      pFVar12 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar12->Cursor = '\n';
    pFVar12->Cursor = pFVar12->Cursor + 1;
    pFVar12->Committed = pFVar12->Cursor;
  }
  return __return_storage_ptr__;
}

// RHICreateUniformBuffer @ 145c1c2f0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TRefCountPtr<FRHIUniformBuffer> __thiscall
FOpenGLDynamicRHI::RHICreateUniformBuffer
          (FOpenGLDynamicRHI *this,void *param_1,FRHIUniformBufferLayout *param_2,
          EUniformBufferUsage param_3,EUniformBufferValidation param_4)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FName FVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  TRefCountPtr<FRHIUniformBuffer> TVar11;
  FOpenGLUniformBuffer *pFVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_OpenGLNumFreeUniformBuffers> FVar14;
  FThreadStats *pFVar15;
  FThreadStatsPool *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_OpenGLFreeUniformBufferMemory> FVar17;
  undefined8 *puVar18;
  FLowLevelMemTracker *this_00;
  TArray<FPooledGLUniformBuffer,TSizedDefaultAllocator<32>_> (*paTVar19) [2];
  longlong lVar20;
  FOpenGLEUniformBufferData *pFVar21;
  FOpenGLEUniformBufferData *pFVar22;
  FOpenGLEUniformBufferData *pFVar23;
  TArray<FPooledGLUniformBuffer,TSizedDefaultAllocator<32>_> *pTVar24;
  undefined4 in_register_0000008c;
  FRHIUniformBufferLayout *this_01;
  uint uVar25;
  uchar auVar26 [8];
  EUniformBufferValidation in_stack_00000030;
  uint local_a8 [2];
  FName local_a0;
  FName local_98;
  FStatMessage local_90;
  FStatMessage local_80;
  uint local_70;
  uint uStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  FName local_48;
  FName local_40;
  
  this_01 = (FRHIUniformBufferLayout *)CONCAT44(in_register_0000008c,param_3);
  bVar8 = IsInRenderingThread();
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x1594,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    TVar11.Reference = (FRHIUniformBuffer *)(*pcVar7)();
    return (TRefCountPtr<FRHIUniformBuffer>)TVar11.Reference;
  }
  if ((((this_01->Resources).ArrayNum < 1) && (this_01->ConstantBufferSize == 0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Layout->Resources.Num() > 0 || Layout->ConstantBufferSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLUniformBuffer.cpp"
                         ,0x2a4,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    TVar11.Reference = (FRHIUniformBuffer *)(*pcVar7)();
    return (TRefCountPtr<FRHIUniformBuffer>)TVar11.Reference;
  }
  if ((param_2 != (FRHIUniformBufferLayout *)0x0) && (in_stack_00000030 == ValidateResources)) {
    ValidateShaderParameterResourcesRHI(param_2,this_01);
  }
  pFVar12 = CreateUniformBufferView(&GRHICommandList.CommandListImmediate,this_01,param_2);
  if (pFVar12 != (FOpenGLUniformBuffer *)0x0) {
    *(FOpenGLUniformBuffer **)param_1 = pFVar12;
    FRHIResource::AddRef((FRHIResource *)pFVar12);
    return (TRefCountPtr<FRHIUniformBuffer>)param_1;
  }
  if ((GUseEmulatedUniformBuffers == false) || ((this_01->Flags & NoEmulatedUniformBuffer) != None))
  {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  pFVar23 = (FOpenGLEUniformBufferData *)0x0;
  pFVar21 = (FOpenGLEUniformBufferData *)0x0;
  pFVar22 = pFVar23;
  if ((this_01->ConstantBufferSize != 0) && (bVar9 = IsPoolingEnabled(), pFVar22 = pFVar21, bVar9))
  {
    uVar10 = GetPoolBucketIndex(this_01->ConstantBufferSize);
    local_60 = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)&GGLUniformBufferPoolCS);
    paTVar19 = GLEmulatedUniformBufferPool;
    if (!bVar8) {
      paTVar19 = GLUniformBufferPool;
    }
    pTVar24 = paTVar19[uVar10] + (param_4 < 2);
    iVar4 = pTVar24->ArrayNum;
    if (iVar4 < 1) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&GGLUniformBufferPoolCS);
      uVar25 = 0;
      if ((int)uVar10 < UniformBufferSizeBuckets.ArrayNum) {
        uVar25 = ~uVar10 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        TVar11.Reference = (FRHIUniformBuffer *)(*pcVar7)();
        return (TRefCountPtr<FRHIUniformBuffer>)TVar11.Reference;
      }
    }
    else {
      pFVar5 = (pTVar24->AllocatorInstance).Data;
      pFVar2 = pFVar5 + (longlong)iVar4 * 0x18 + -0x18;
      uVar3 = *(undefined8 *)pFVar2;
      uStack_68 = *(undefined8 *)(pFVar2 + 8);
      local_70 = (uint)uVar3;
      uStack_6c = (uint)((ulonglong)uVar3 >> 0x20);
      uVar3 = *(undefined8 *)(pFVar5 + (longlong)iVar4 * 0x18 + -8);
      pTVar24->ArrayNum = iVar4 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,&pTVar24->AllocatorInstance,iVar4 + -1,&pTVar24->ArrayMax);
      local_60 = CONCAT44(uStack_6c,local_70);
      uStack_58 = uStack_68;
      local_50 = uVar3;
      LeaveCriticalSection((LPCRITICAL_SECTION)&GGLUniformBufferPoolCS);
      FVar14 = StatPtr_STAT_OpenGLNumFreeUniformBuffers;
      if (StatPtr_STAT_OpenGLNumFreeUniformBuffers ==
          (FThreadSafeStaticStat<FStat_STAT_OpenGLNumFreeUniformBuffers>)0x0) {
        pFVar13 = ::FName::FName(&local_48,"STAT_OpenGLNumFreeUniformBuffers");
        FVar14 = (FThreadSafeStaticStat<FStat_STAT_OpenGLNumFreeUniformBuffers>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLNumFreeUniformBuffers,
                            *pFVar13,L"Uniform buffer pool num free","STATGROUP_OpenGLRHI",
                            "STATCAT_Advanced",L"OpenGL RHI",true,false,ST_int64,false,false,
                            MCR_Invalid);
      }
      FVar6 = *(FName *)FVar14;
      if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar15 == (FThreadStats *)0x0) {
          pFVar16 = FThreadStatsPool::Get();
          pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
        }
        local_90.NameAndInfo.Number = FVar6.Number & 0xffffbfff | 0xb000;
        local_90.StatData.Pad[0] = '\x01';
        local_90.StatData.Pad[1] = '\0';
        local_90.StatData.Pad[2] = '\0';
        local_90.StatData.Pad[3] = '\0';
        local_90.StatData.Pad[4] = '\0';
        local_90.StatData.Pad[5] = '\0';
        local_90.StatData.Pad[6] = '\0';
        local_90.StatData.Pad[7] = '\0';
        local_a0 = FVar6;
        local_90.NameAndInfo.Index.Value = FVar6.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar15,&local_90);
        FStatsTrace::Add(&local_a0,-1);
        if (pFVar15->ScopeCount == 0) {
          FThreadStats::Flush(pFVar15,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar15,false,false);
        }
      }
      uVar10 = uStack_6c;
      auVar26[4] = '\0';
      auVar26[5] = '\0';
      auVar26[6] = '\0';
      auVar26[7] = '\0';
      auVar26[0] = (undefined1)uStack_6c;
      auVar26[1] = uStack_6c._1_1_;
      auVar26[2] = uStack_6c._2_1_;
      auVar26[3] = uStack_6c._3_1_;
      if (uStack_6c != 0) {
        FVar17 = StatPtr_STAT_OpenGLFreeUniformBufferMemory;
        if (StatPtr_STAT_OpenGLFreeUniformBufferMemory ==
            (FThreadSafeStaticStat<FStat_STAT_OpenGLFreeUniformBufferMemory>)0x0) {
          pFVar13 = ::FName::FName(&local_40,"STAT_OpenGLFreeUniformBufferMemory");
          FVar17 = (FThreadSafeStaticStat<FStat_STAT_OpenGLFreeUniformBufferMemory>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_OpenGLFreeUniformBufferMemory,*pFVar13,
                              L"Uniform buffer pool memory","STATGROUP_OpenGLRHI","STATCAT_Advanced"
                              ,L"OpenGL RHI",true,false,ST_int64,false,false,MCR_Physical);
        }
        FVar6 = *(FName *)FVar17;
        if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar15 == (FThreadStats *)0x0) {
            pFVar16 = FThreadStatsPool::Get();
            pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
          }
          local_80.NameAndInfo.Number = FVar6.Number & 0xffffbfff | 0xb000;
          local_98 = FVar6;
          local_80.StatData.Pad = auVar26;
          local_80.NameAndInfo.Index.Value = FVar6.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar15,&local_80);
          FStatsTrace::Add(&local_98,-(longlong)auVar26);
          if (pFVar15->ScopeCount == 0) {
            FThreadStats::Flush(pFVar15,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar15,false,false);
          }
        }
      }
      uVar25 = local_70;
      if (bVar8) {
        EnterCriticalSection((LPCRITICAL_SECTION)&GGLEmulatedUniformBufferDataFactoryCS);
        uVar25 = (uint)local_60;
        pFVar22 = pFVar23;
        if (UniformBufferDataFactory.Entries._8_4_ != UniformBufferDataFactory.Entries._52_4_) {
          lVar20 = 0x154be5708;
          if (UniformBufferDataFactory.Entries._64_8_ != 0) {
            lVar20 = UniformBufferDataFactory.Entries._64_8_;
          }
          iVar4 = *(int *)(lVar20 + (ulonglong)
                                    (UniformBufferDataFactory.Entries._72_4_ - 1 & (uint)local_60) *
                                    4);
          while (pFVar22 = pFVar21, iVar4 != -1) {
            lVar20 = UniformBufferDataFactory.Entries._0_8_ + (longlong)iVar4 * 0x18;
            if (*(uint *)(UniformBufferDataFactory.Entries._0_8_ + (longlong)iVar4 * 0x18) ==
                (uint)local_60) {
              pFVar22 = (FOpenGLEUniformBufferData *)(lVar20 + 8);
              if (lVar20 == 0) {
                pFVar22 = pFVar23;
              }
              if (pFVar22 != (FOpenGLEUniformBufferData *)0x0) goto LAB_145c1c870;
              break;
            }
            iVar4 = *(int *)(lVar20 + 0x10);
          }
        }
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Buffer",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLUniformBuffer.cpp"
                           ,0xb8,L"");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          TVar11.Reference = (FRHIUniformBuffer *)(*pcVar7)();
          return (TRefCountPtr<FRHIUniformBuffer>)TVar11.Reference;
        }
LAB_145c1c870:
        pFVar21 = (FOpenGLEUniformBufferData *)pFVar22->_padding_;
        if (pFVar21 != (FOpenGLEUniformBufferData *)0x0) {
          *(int *)&pFVar21->_padding_ = (int)pFVar21->_padding_ + 1;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&GGLEmulatedUniformBufferDataFactoryCS);
      }
      else {
        local_a8[0] = local_70;
        if (((GRHICommandList.bLatchedBypass == false) ||
            ((GRHICommandList.CommandListImmediate._667_1_ & 0x20) == 0)) &&
           (GRHICommandList.CommandListImmediate._100_1_ == '\0')) {
          puVar18 = FMemStackBase::Alloc
                              ((FMemStackBase *)&GRHICommandList.CommandListImmediate,0x20,8);
          GRHICommandList.CommandListImmediate._96_4_ =
               GRHICommandList.CommandListImmediate._96_4_ + 1;
          *(undefined8 **)GRHICommandList.CommandListImmediate._48_8_ = puVar18;
          GRHICommandList.CommandListImmediate._48_8_ = puVar18 + 1;
          *(undefined8 *)GRHICommandList.CommandListImmediate._48_8_ = 0;
          *puVar18 = &TRHILambdaCommand<FRHICommandListImmediate,`FOpenGLDynamicRHI::RHICreateUniformBuffer'::`49'::<lambda_1>_>
                      ::_vftable_;
          puVar18[3] = L"TRHILambdaCommand";
          *(uint *)(puVar18 + 2) = uVar25;
        }
        else {
          `FOpenGLDynamicRHI::RHICreateUniformBuffer'::__l49::<lambda_1>::operator()
                    (local_a8,&GRHICommandList.CommandListImmediate);
          pFVar21 = pFVar23;
        }
      }
      pFVar22 = pFVar21;
      if (uVar10 != 0) {
        pFVar12 = ::operator_new(0x80);
        if (pFVar12 == (FOpenGLUniformBuffer *)0x0) {
          pFVar12 = (FOpenGLUniformBuffer *)0x0;
        }
        else {
          FRHIResource::FRHIResource((FRHIResource *)pFVar12,RRT_UniformBuffer);
          pFVar12->_padding_ = 0;
          *(undefined1 *)&pFVar12->_padding_ = 0;
          pFVar12->_padding_ = (longlong)&___7FRHIUniformBuffer__6B_;
          pFVar12->_padding_ = 0;
          pFVar12->_padding_ = 0;
          pFVar12->_padding_ = (longlong)this_01;
          FRHIResource::AddRef((FRHIResource *)this_01);
          *(uint *)&pFVar12->_padding_ = this_01->ConstantBufferSize;
          pFVar12->_padding_ = (longlong)&___7FOpenGLUniformBuffer__6B_;
          GUniqueUniformBufferID = GUniqueUniformBufferID + 1;
          pFVar12->RangeSize = 0;
          pFVar12->UniqueID = GUniqueUniformBufferID;
          pFVar12->Resource = 0;
          pFVar12->Offset = 0;
          pFVar12->PersistentlyMappedBuffer = (uchar *)0x0;
          (pFVar12->EmulatedBufferData).Reference = (FOpenGLEUniformBufferData *)0x0;
          pFVar12->AllocatedSize = 0;
          pFVar12->bStreamDraw = false;
          pFVar12->bOwnsResource = true;
          if ((GUseEmulatedUniformBuffers == false) ||
             ((this_01->Flags & (UniformView|NoEmulatedUniformBuffer)) != None)) {
            pFVar12->bIsEmulatedUniformBuffer = false;
            pFVar12->RangeSize = this_01->ConstantBufferSize;
          }
          else {
            pFVar12->bIsEmulatedUniformBuffer = true;
            pFVar12->RangeSize = this_01->ConstantBufferSize;
          }
        }
        if (pFVar21 != (FOpenGLEUniformBufferData *)0x0) {
          *(int *)&pFVar21->_padding_ = (int)pFVar21->_padding_ + 1;
        }
        pFVar12->Resource = uVar25;
        pFVar12->Offset = 0;
        pFVar12->PersistentlyMappedBuffer = (uchar *)0x0;
        pFVar23 = (pFVar12->EmulatedBufferData).Reference;
        if (pFVar23 != pFVar21) {
          (pFVar12->EmulatedBufferData).Reference = pFVar21;
          if (pFVar21 != (FOpenGLEUniformBufferData *)0x0) {
            *(int *)&pFVar21->_padding_ = (int)pFVar21->_padding_ + 1;
          }
          if (pFVar23 != (FOpenGLEUniformBufferData *)0x0) {
            plVar1 = &pFVar23->_padding_;
            *(int *)plVar1 = (int)*plVar1 + -1;
            if ((int)*plVar1 == 0) {
              (**(code **)pFVar23->_padding_)(pFVar23,1);
            }
          }
        }
        pFVar12->AllocatedSize = uVar10;
        pFVar12->bStreamDraw = param_4 < 2;
        pFVar12->bOwnsResource = true;
        if (FLowLevelMemTracker::EnabledState != Disabled) {
          this_00 = FLowLevelMemTracker::TrackerInstance;
          if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
            this_00 = FLowLevelMemTracker::Construct();
          }
          FLowLevelMemTracker::OnLowLevelAlloc
                    (this_00,Default,(void *)((longlong)&pFVar12->_padding_ + 1),(ulonglong)uVar10,
                     Untagged,None,true);
        }
        if (pFVar21 != (FOpenGLEUniformBufferData *)0x0) {
          plVar1 = &pFVar21->_padding_;
          *(int *)plVar1 = (int)*plVar1 + -1;
          if ((int)*plVar1 == 0) {
            (**(code **)pFVar21->_padding_)(pFVar21,1);
          }
        }
        if ((bVar8) &&
           (((pFVar21 == (FOpenGLEUniformBufferData *)0x0 ||
             ((pFVar21->Data).ArrayNum << 2 != uVar10)) &&
            (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("!bUseEmulatedUBs || (IsValidRef(EmulatedUniformDataRef) && (EmulatedUniformDataRef->Data.Num() * EmulatedUniformDataRef->Data.GetTypeSize() == AllocatedSize))"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLUniformBuffer.cpp"
                                ,0x302,L""), bVar8)))) {
          pcVar7 = (code *)swi(3);
          TVar11.Reference = (FRHIUniformBuffer *)(*pcVar7)();
          return (TRefCountPtr<FRHIUniformBuffer>)TVar11.Reference;
        }
        if (param_2 != (FRHIUniformBufferLayout *)0x0) {
          CopyDataToUniformBuffer
                    (&GRHICommandList.CommandListImmediate,pFVar12,param_2,
                     this_01->ConstantBufferSize);
        }
        FOpenGLUniformBuffer::SetLayoutTable(pFVar12,param_2,in_stack_00000030);
        *(FOpenGLUniformBuffer **)param_1 = pFVar12;
        FRHIResource::AddRef((FRHIResource *)pFVar12);
        goto LAB_145c1cb8e;
      }
    }
  }
  CreateUniformBuffer(param_1,param_2,param_3,param_4);
LAB_145c1cb8e:
  if (pFVar22 != (FOpenGLEUniformBufferData *)0x0) {
    plVar1 = &pFVar22->_padding_;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      (**(code **)pFVar22->_padding_)(pFVar22,1);
    }
  }
  return (TRefCountPtr<FRHIUniformBuffer>)param_1;
}

// RHICreateUnorderedAccessView @ 145c1cbe0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

TRefCountPtr<FRHIUnorderedAccessView> __thiscall
FOpenGLDynamicRHI::RHICreateUnorderedAccessView
          (FOpenGLDynamicRHI *this,FRHICommandListBase *param_1,FRHIViewableResource *param_2,
          FRHIViewDesc *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  FName FVar5;
  bool bVar6;
  FRHIResource *this_00;
  TRefCountPtr<FRHIUnorderedAccessView> TVar7;
  undefined8 *puVar8;
  FRHIResource *local_res10;
  undefined8 *in_stack_00000028;
  
  this_00 = ::operator_new(0x58);
  if (this_00 == (FRHIResource *)0x0) {
    (param_1->MemManager).Top = (uchar *)0x0;
  }
  else {
    FRHIResource::FRHIResource(this_00,RRT_UnorderedAccessView);
    this_00->_padding_ = (longlong)&___7FRHIView__6B_;
    this_00[1]._padding_ = (longlong)param_3;
    if (param_3 != (FRHIViewDesc *)0x0) {
      FRHIResource::AddRef((FRHIResource *)param_3);
    }
    uVar4 = *in_stack_00000028;
    FVar5 = *(FName *)(in_stack_00000028 + 1);
    this_00[1].AtomicFlags = (FAtomicFlags)(int)uVar4;
    this_00[1].ResourceType = (char)((ulonglong)uVar4 >> 0x20);
    this_00[1].field_0xd = (char)((ulonglong)uVar4 >> 0x28);
    this_00[1]._padding_ = (short)((ulonglong)uVar4 >> 0x30);
    this_00[1].OwnerName = FVar5;
    if (param_3 == (FRHIViewDesc *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InResource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                         ,0xcae,L"Cannot create a view of a nullptr resource.");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        TVar7.Reference = (FRHIUnorderedAccessView *)(*pcVar3)();
        return (TRefCountPtr<FRHIUnorderedAccessView>)TVar7.Reference;
      }
    }
    this_00->_padding_ = (longlong)&___7FRHIUnorderedAccessView__6B_;
    cVar1 = *(char *)&this_00[1].AtomicFlags.Packed;
    if ((cVar1 == '\0') || (cVar1 == '\x02')) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ViewDesc.IsUAV()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                         ,0xce3,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        TVar7.Reference = (FRHIUnorderedAccessView *)(*pcVar3)();
        return (TRefCountPtr<FRHIUnorderedAccessView>)TVar7.Reference;
      }
    }
    this_00[2].AtomicFlags = (atomic<unsigned_int>)0x0;
    this_00[2].ResourceType = RRT_None;
    this_00[2].field_0xd = 0;
    this_00[2]._padding_ = 0;
    this_00->_padding_ =
         (longlong)&FOpenGLUnorderedAccessView::_vftable__for__FRHIUnorderedAccessView__;
    this_00[2]._padding_ = (longlong)&FOpenGLUnorderedAccessView::_vftable__for__FOpenGLView__;
    this_00[2].OwnerName.ComparisonIndex = 0;
    this_00[2].OwnerName.Number = 0;
    this_00[3]._padding_ = 0;
    this_00[3].AtomicFlags.Packed = (atomic<unsigned_int>)0x0;
    *(undefined2 *)&this_00[3].ResourceType = 0;
    *(undefined1 *)&this_00[3]._padding_ = 0;
    local_res10 = this_00;
    if (((GRHICommandList.bLatchedBypass == false) ||
        ((param_2[0x10].Name.ComparisonIndex.Value & 0x20000000) == 0)) &&
       (*(char *)((longlong)&param_2[2]._padding_ + 4) == '\0')) {
      puVar8 = FMemStackBase::Alloc((FMemStackBase *)param_2,0x20,8);
      puVar2 = (undefined8 *)param_2[1]._padding_;
      *(int *)&param_2[2]._padding_ = (int)param_2[2]._padding_ + 1;
      (param_1->MemManager).Top = (uchar *)this_00;
      *puVar2 = puVar8;
      param_2[1]._padding_ = (longlong)(puVar8 + 1);
      puVar8[1] = 0;
      *puVar8 = &TRHILambdaCommand<FRHICommandListBase,`FOpenGLUnorderedAccessView::FOpenGLUnorderedAccessView'::`2'::<lambda_1>_>
                 ::_vftable_;
      puVar8[3] = L"TRHILambdaCommand";
      puVar8[2] = this_00;
      FRHIResource::AddRef(this_00);
    }
    else {
      `FOpenGLUnorderedAccessView::FOpenGLUnorderedAccessView'::__l2::<lambda_1>::operator()
                (&local_res10,(FRHICommandListBase *)param_2);
      (param_1->MemManager).Top = (uchar *)this_00;
      FRHIResource::AddRef(this_00);
    }
  }
  return (TRefCountPtr<FRHIUnorderedAccessView>)(FRHIUnorderedAccessView *)param_1;
}

// RHICreateVertexDeclaration @ 145c1cd90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

TRefCountPtr<FRHIVertexDeclaration> __thiscall
FOpenGLDynamicRHI::RHICreateVertexDeclaration
          (FOpenGLDynamicRHI *this,TArray<FVertexElement,TFixedAllocator<17>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FRHIResource *pFVar4;
  TRefCountPtr<FRHIVertexDeclaration> TVar5;
  longlong lVar6;
  longlong *plVar7;
  TArray<FVertexElement,TFixedAllocator<17>_> *in_R8;
  undefined1 auStackY_298 [32];
  TPairInitializer<FOpenGLVertexDeclarationKey_const_&,TRefCountPtr<FRHIVertexDeclaration>_&&>
  local_258;
  FOpenGLVertexDeclarationKey *local_248;
  TRefCountPtr<FRHIVertexDeclaration> **local_240;
  FOpenGLVertexDeclarationKey local_238;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_298;
  FOpenGLVertexDeclarationKey::FOpenGLVertexDeclarationKey(&local_238,in_R8);
  iVar3 = TSet<TTuple<FOpenGLVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>,TDefaultMapHashableKeyFuncs<FOpenGLVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FOpenGLVertexDeclarationKey>
                    ((TSet<TTuple<FOpenGLVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>,TDefaultMapHashableKeyFuncs<FOpenGLVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>,0>,FDefaultSetAllocator>
                      *)&GOpenGLVertexDeclarationCache,local_238.Hash,&local_238);
  if (iVar3 != -1) {
    lVar6 = (longlong)iVar3 * 0x220 + GOpenGLVertexDeclarationCache._0_8_;
    plVar7 = (longlong *)(lVar6 + 0x210);
    if (lVar6 == 0) {
      plVar7 = (longlong *)0x0;
    }
    if (plVar7 != (longlong *)0x0) goto LAB_145c1cfca;
  }
  pFVar4 = ::operator_new(0x220);
  if (pFVar4 == (FRHIResource *)0x0) {
    local_258.Value = (TRefCountPtr<FRHIVertexDeclaration> *)0x0;
  }
  else {
    FRHIResource::FRHIResource(pFVar4,RRT_VertexDeclaration);
    pFVar4->_padding_ = (longlong)&___7FOpenGLVertexDeclaration__6B_;
    pFVar4[0x14].OwnerName.Number = local_238.VertexElements.ArrayNum;
    if (local_238.VertexElements.ArrayNum == 0) {
      *(int *)&pFVar4[0x15]._padding_ = 0x11;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<0,TFixedAllocator<17>::ForElementType<FOpenGLVertexElement>_>
                (0x1c,4,local_238.VertexElements.ArrayNum,0,
                 (ForElementType<FOpenGLVertexElement> *)(pFVar4 + 1),
                 local_238.VertexElements.ArrayNum,(int *)(pFVar4 + 0x15));
      memcpy(pFVar4 + 1,&local_238,(longlong)local_238.VertexElements.ArrayNum * 0x1c);
    }
    *(undefined8 *)((longlong)&pFVar4[0x15]._padding_ + 4) = local_238.StreamStrides._0_8_;
    *(undefined8 *)&pFVar4[0x15].ResourceType = local_238.StreamStrides._8_8_;
    *(undefined8 *)&pFVar4[0x15].OwnerName.Number = local_238.StreamStrides._16_8_;
    *(undefined8 *)((longlong)&pFVar4[0x16]._padding_ + 4) = local_238.StreamStrides._24_8_;
    *(ushort *)&pFVar4[0x16].ResourceType = local_238.StreamStrides[0x10];
    local_258.Value = (TRefCountPtr<FRHIVertexDeclaration> *)pFVar4;
    FRHIResource::AddRef(pFVar4);
  }
  local_248 = &local_238;
  local_240 = &local_258.Value;
  TSet<TTuple<FOpenGLVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>,TDefaultMapHashableKeyFuncs<FOpenGLVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOpenGLVertexDeclarationKey_const_&,TRefCountPtr<FRHIVertexDeclaration>_&&>_>
            ((TSet<TTuple<FOpenGLVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>,TDefaultMapHashableKeyFuncs<FOpenGLVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>,0>,FDefaultSetAllocator>
              *)&GOpenGLVertexDeclarationCache,&local_258,(bool *)&local_248);
  plVar7 = (longlong *)
           (GOpenGLVertexDeclarationCache._0_8_ + 0x210 + (longlong)(int)local_258.Key * 0x220);
  if ((FRHIResource *)local_258.Value != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_258.Value);
  }
  if (plVar7 == (longlong *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("VertexDeclarationRefPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLVertexDeclaration.cpp"
                       ,0xa8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar5.Reference = (FRHIVertexDeclaration *)(*pcVar1)();
      return (TRefCountPtr<FRHIVertexDeclaration>)TVar5.Reference;
    }
  }
  if (*plVar7 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidRef(*VertexDeclarationRefPtr)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLVertexDeclaration.cpp"
                       ,0xa9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar5.Reference = (FRHIVertexDeclaration *)(*pcVar1)();
      return (TRefCountPtr<FRHIVertexDeclaration>)TVar5.Reference;
    }
  }
  if (plVar7 == (longlong *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("VertexDeclarationRefPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLVertexDeclaration.cpp"
                       ,0xad,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar5.Reference = (FRHIVertexDeclaration *)(*pcVar1)();
      return (TRefCountPtr<FRHIVertexDeclaration>)TVar5.Reference;
    }
  }
LAB_145c1cfca:
  if (*plVar7 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidRef(*VertexDeclarationRefPtr)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLVertexDeclaration.cpp"
                       ,0xae,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar5.Reference = (FRHIVertexDeclaration *)(*pcVar1)();
      return (TRefCountPtr<FRHIVertexDeclaration>)TVar5.Reference;
    }
  }
  *(undefined8 *)(param_1->AllocatorInstance).InlineData[0].Pad = 0;
  pFVar4 = (FRHIResource *)*plVar7;
  *(FRHIResource **)(param_1->AllocatorInstance).InlineData[0].Pad = pFVar4;
  if (pFVar4 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(pFVar4);
  }
  return (TRefCountPtr<FRHIVertexDeclaration>)(FRHIVertexDeclaration *)param_1;
}

// RHICreateVertexShader @ 145c1d040

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

TRefCountPtr<FRHIVertexShader> __thiscall
FOpenGLDynamicRHI::RHICreateVertexShader
          (FOpenGLDynamicRHI *this,TArrayView<unsigned_char_const_,int> *param_1,FSHAHash *param_2)

{
  FRHIShader *this_00;
  FSHAHash *in_R9;
  TArrayView<unsigned_char_const_,int> local_18;
  
  this_00 = ::operator_new(400);
  if (this_00 == (FRHIShader *)0x0) {
    param_1->DataPtr = (uchar *)0x0;
  }
  else {
    FRHIShader::FRHIShader(this_00,RRT_VertexShader,SF_Vertex);
    local_18.DataPtr = *(uchar **)param_2->Hash;
    local_18._8_8_ = *(undefined8 *)(param_2->Hash + 8);
    this_00->_padding_ = (longlong)&___7FRHIVertexShader__6B_;
    FOpenGLShader::FOpenGLShader
              ((FOpenGLShader *)(this_00 + 1),&local_18,in_R9,0x8b31,
               (FShaderResourceTable *)&this_00->_padding_,this_00);
    param_1->DataPtr = (uchar *)this_00;
    this_00->_padding_ = (longlong)&___7FOpenGLVertexShader__6B_;
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  return (TRefCountPtr<FRHIVertexShader>)(FRHIVertexShader *)param_1;
}

// RHICreateViewport @ 145c1d100

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

TRefCountPtr<FRHIViewport> __thiscall
FOpenGLDynamicRHI::RHICreateViewport
          (FOpenGLDynamicRHI *this,void *param_1,uint param_2,uint param_3,bool param_4,
          EPixelFormat param_5)

{
  code *pcVar1;
  bool bVar2;
  TRefCountPtr<FRHIViewport> TVar3;
  FOpenGLViewport *pFVar4;
  EPixelFormat EVar5;
  undefined4 in_register_00000084;
  undefined3 in_stack_00000029;
  EPixelFormat in_stack_00000038;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLViewport.cpp"
                       ,0x53,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Reference = (FRHIViewport *)(*pcVar1)();
      return (TRefCountPtr<FRHIViewport>)TVar3.Reference;
    }
  }
  pFVar4 = ::operator_new(0x50);
  if (pFVar4 == (FOpenGLViewport *)0x0) {
    *(undefined8 *)param_1 = 0;
  }
  else {
    EVar5 = PF_B8G8R8A8;
    if (in_stack_00000038 != PF_Unknown) {
      EVar5 = in_stack_00000038;
    }
    pFVar4 = FOpenGLViewport::FOpenGLViewport
                       (pFVar4,this,(void *)CONCAT44(in_register_00000084,param_2),param_3,_param_4,
                        (bool)param_5,EVar5);
    *(FOpenGLViewport **)param_1 = pFVar4;
    if (pFVar4 != (FOpenGLViewport *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar4);
    }
  }
  return (TRefCountPtr<FRHIViewport>)param_1;
}

// RHIDispatchComputeShader @ 145c1d1d0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHIDispatchComputeShader
          (FOpenGLDynamicRHI *this,uint param_1,uint param_2,uint param_3)

{
  HGLRC pHVar1;
  
  if (OpenGLConsoleVariables::bSkipCompute == 0) {
    *(int *)((longlong)&this->_padding_ + 4) = *(int *)((longlong)&this->_padding_ + 4) + 1;
    pHVar1 = wglGetCurrentContext();
    if (pHVar1 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
      IsInRHIThread();
      IsInRenderingThread();
      IsInGameThread();
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    SetupDispatch((FOpenGLDynamicRHI *)&this[-1].KickHint.Syncs.ArrayNum);
    (*glMemoryBarrier)(0xffffffff);
    (*glDispatchCompute)(param_1,param_2,param_3);
    (*glMemoryBarrier)(0xffffffff);
  }
  return;
}

// RHIDispatchIndirectComputeShader @ 145c1d2c0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHIDispatchIndirectComputeShader
          (FOpenGLDynamicRHI *this,FRHIBuffer *param_1,uint param_2)

{
  HGLRC pHVar1;
  
  *(int *)((longlong)&this->_padding_ + 4) = *(int *)((longlong)&this->_padding_ + 4) + 1;
  pHVar1 = wglGetCurrentContext();
  if (pHVar1 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  SetupDispatch((FOpenGLDynamicRHI *)&this[-1].KickHint.Syncs.ArrayNum);
  (*glBindBuffer)(0x90ee,*(uint *)((longlong)&param_1[1]._padding_ + 4));
  (*glMemoryBarrier)(0xffffffff);
  (*glDispatchComputeIndirect)((long64)param_2);
  (*glMemoryBarrier)(0xffffffff);
                    /* WARNING: Could not recover jumptable at 0x000145c1d394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*glBindBuffer)(0x90ee,0);
  return;
}

// RHIDrawIndexedIndirect @ 145c1d3b0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHIDrawIndexedIndirect
          (FOpenGLDynamicRHI *this,FRHIBuffer *param_1,FRHIBuffer *param_2,int param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  HGLRC pHVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_OpenGLShaderFirstDrawTime> FVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar11;
  uint uVar12;
  FNameEntryId FVar13;
  FNameEntryId FVar14;
  uint uVar15;
  bool bVar16;
  FColor_u_0 local_78 [2];
  FName local_70;
  LARGE_INTEGER local_68;
  FName local_60;
  FName local_58;
  FStatMessage local_48;
  
  pHVar8 = wglGetCurrentContext();
  if (pHVar8 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  SetupDraw((FOpenGLDynamicRHI *)&this[-1].KickHint.Syncs.ArrayNum,
            (TOpenGLBuffer<FOpenGLBaseBuffer> *)param_1,0,1);
  iVar2 = *(int *)((longlong)&(this->PointSamplerState).Reference + 4);
  FVar14.Value = 0;
  uVar12 = 4;
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      uVar12 = 5;
    }
    else if (iVar2 == 2) {
      uVar12 = 1;
    }
    else {
      uVar12 = 0;
      if (iVar2 != 4) {
        UE::Logging::Private::BasicFatalLog
                  ((FStaticBasicLogRecord *)
                   &`void___cdecl_FindPrimitiveType(unsigned_int,unsigned_int,unsigned_int&___ptr64,int&___ptr64)'
                    ::__l5::LOG_Static,(FLogCategoryBase *)&LogRHI);
        uVar12 = 4;
      }
    }
  }
  uVar15 = 0x1403;
  if ((param_1->Desc).Stride == 4) {
    uVar15 = 0x1405;
  }
  if ((param_2 == (FRHIBuffer *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArgumentsBufferRHI",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLCommands.cpp"
                         ,0x904,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (*glBindBuffer)(0x8f3f,*(uint *)((longlong)&param_2[1]._padding_ + 4));
  bVar6 = FOpenGLBoundShaderState::RequiresDriverInstantiation
                    (*(FOpenGLBoundShaderState **)&(this->PendingState).Streams[0xf].Divisor);
  if (bVar6) {
    FVar10 = StatPtr_STAT_OpenGLShaderFirstDrawTime;
    if (StatPtr_STAT_OpenGLShaderFirstDrawTime ==
        (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderFirstDrawTime>)0x0) {
      pFVar9 = ::FName::FName(&local_60,"STAT_OpenGLShaderFirstDrawTime");
      FVar10 = (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderFirstDrawTime>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLShaderFirstDrawTime,
                          *pFVar9,L"Time for first draw of shader programs","STATGROUP_OpenGLRHI",
                          "STATCAT_Advanced",L"OpenGL RHI",true,true,ST_int64,true,false,MCR_Invalid
                         );
    }
  }
  else {
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderFirstDrawTime>)
             &TStatId::TStatId_NAME_None;
  }
  FVar3 = *(FName *)FVar10;
  bVar6 = false;
  bVar5 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar13 = FVar3.ComparisonIndex.Value;
  uVar7 = FVar3.Number;
  if ((FVar13.Value == 0) && (uVar7 == 0)) {
    (*glDrawElementsIndirect)(uVar12,uVar15,(void *)((longlong)(param_3 * 5) << 2));
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_78[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_78[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar6 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_70.ComparisonIndex.Value = FVar13.Value;
        local_70.Number = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_70,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLCommands.cpp"
                   ,0x909);
        bVar6 = true;
        bVar5 = true;
      }
    }
    bVar16 = FThreadStats::bPrimaryEnable != false;
    FVar11 = local_58;
    if (bVar16) {
      local_70.ComparisonIndex.Value = FVar13.Value;
      local_70.Number = uVar7;
      local_58 = FVar3;
      FThreadStats::AddMessage(FVar3,CycleScopeStart);
      FVar11 = FVar3;
      FVar14.Value = local_58.ComparisonIndex.Value;
    }
    (*glDrawElementsIndirect)(uVar12,uVar15,(void *)((longlong)(param_3 * 5) << 2));
    if (bVar5) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar6) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar16) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_48.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
        local_48.NameAndInfo.Index.Value = FVar14.Value;
        QueryPerformanceCounter(&local_68);
        local_48.StatData.Pad[4] = '\0';
        local_48.StatData.Pad[5] = '\0';
        local_48.StatData.Pad[6] = '\0';
        local_48.StatData.Pad[7] = '\0';
        local_48.StatData.Pad[0] = local_68.s.LowPart._0_1_;
        local_48.StatData.Pad[1] = local_68.s.LowPart._1_1_;
        local_48.StatData.Pad[2] = local_68.s.LowPart._2_1_;
        local_48.StatData.Pad[3] = local_68.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&local_48);
        piVar1 = &this_00->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
  }
  (*glBindBuffer)(0x8f3f,0);
  FOpenGLFenceKick::OnDrawCall
            ((FOpenGLFenceKick *)
             ((this->GLLockTracker).OutstandingLocks.AllocatorInstance.InlineData + 0x278));
  return;
}

// RHIDrawIndexedPrimitive @ 145c1d790

/* WARNING: Removing unreachable block (ram,0x000145c1d8d4) */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHIDrawIndexedPrimitive
          (FOpenGLDynamicRHI *this,FRHIBuffer *param_1,int param_2,uint param_3,uint param_4,
          uint param_5,uint param_6,uint param_7)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  void *pvVar7;
  bool bVar8;
  bool bVar9;
  undefined4 uVar10;
  HGLRC pHVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_OpenGLShaderFirstDrawTime> FVar13;
  FThreadStats *this_00;
  FThreadStatsPool *pFVar14;
  uint uVar15;
  FName FVar16;
  FName FVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  FNameEntryId FVar21;
  bool bVar22;
  FColor_u_0 local_d8 [2];
  FName local_d0;
  FName local_c0;
  FName local_b8;
  FName local_b0;
  uint local_a0;
  undefined4 local_9c;
  uint local_98;
  LARGE_INTEGER local_90;
  LARGE_INTEGER local_88;
  FStatMessage local_80;
  FStatMessage local_70;
  FName local_60;
  FName local_58 [3];
  
  pHVar11 = wglGetCurrentContext();
  if (pHVar11 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  uVar18 = param_6;
  *(int *)&this->_padding_ = (int)this->_padding_ + 1;
  uVar20 = param_7;
  if (param_7 == 0) {
    uVar20 = 1;
  }
  piVar2 = (int *)((longlong)&this->_padding_ + 4);
  *piVar2 = *piVar2 + uVar20 * param_4;
  *(uint *)&this->_padding_ = (int)this->_padding_ + uVar20 * param_6;
  if ((this->_padding_ == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExecutingCmdList",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                         ,0x221,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar4 = this->_padding_;
  uVar10 = *(undefined4 *)((longlong)&(this->PointSamplerState).Reference + 4);
  if ((*(char *)(lVar4 + 0x308) == '\0') &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar20 = *(uint *)(lVar4 + 0x29c);
  if (*(longlong *)(lVar4 + 0x300) == 0) {
    uVar15 = 0x1f;
  }
  else {
    uVar15 = *(uint *)(*(longlong *)(lVar4 + 0x300) + 8);
  }
  local_a0 = 0;
  if (uVar20 != 0) {
    for (; (uVar20 >> local_a0 & 1) == 0; local_a0 = local_a0 + 1) {
    }
  }
  uVar19 = 0x20;
  if (uVar20 != 0) {
    uVar19 = local_a0;
  }
  FVar21.Value = 0;
  local_9c = 0;
  if (uVar20 != 0) {
    do {
      lVar1 = ((ulonglong)uVar19 * 0x20 + (ulonglong)uVar15) * 0x18;
      piVar2 = (int *)(lVar1 + 0x390 + lVar4);
      *piVar2 = *piVar2 + 1;
      switch(uVar10) {
      case 0:
      case 1:
        piVar2 = (int *)(lVar4 + 0x394 + lVar1);
        *piVar2 = *piVar2 + uVar18;
        break;
      case 2:
        piVar2 = (int *)(lVar4 + 0x398 + lVar1);
        *piVar2 = *piVar2 + uVar18;
        break;
      case 3:
        piVar2 = (int *)(lVar4 + 0x39c + lVar1);
        *piVar2 = *piVar2 + uVar18;
        break;
      case 4:
        piVar2 = (int *)(lVar4 + 0x3a0 + lVar1);
        *piVar2 = *piVar2 + uVar18;
        break;
      case 5:
        piVar2 = (int *)(lVar4 + 0x3a4 + lVar1);
        *piVar2 = *piVar2 + uVar18;
      }
      uVar20 = uVar20 & ~(1 << ((byte)uVar19 & 0x1f));
      uVar19 = 0;
      if (uVar20 != 0) {
        for (; (uVar20 >> uVar19 & 1) == 0; uVar19 = uVar19 + 1) {
        }
      }
      local_98 = uVar19;
    } while (uVar20 != 0);
  }
  SetupDraw((FOpenGLDynamicRHI *)&this[-1].KickHint.Syncs.ArrayNum,
            (TOpenGLBuffer<FOpenGLBaseBuffer> *)param_1,param_2,param_4 + param_5);
  iVar3 = *(int *)((longlong)&(this->PointSamplerState).Reference + 4);
  if (iVar3 == 0) {
    uVar18 = uVar18 * 3;
    uVar20 = 4;
  }
  else if (iVar3 == 1) {
    uVar18 = uVar18 + 2;
    uVar20 = 5;
  }
  else if (iVar3 == 2) {
    uVar18 = uVar18 * 2;
    uVar20 = 1;
  }
  else {
    uVar20 = FVar21.Value;
    if (iVar3 != 4) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`void___cdecl_FindPrimitiveType(unsigned_int,unsigned_int,unsigned_int&___ptr64,int&___ptr64)'
                  ::__l5::LOG_Static,(FLogCategoryBase *)&LogRHI);
      uVar20 = 4;
    }
  }
  bVar8 = (param_1->Desc).Stride == 4;
  uVar15 = 0x1403;
  if (bVar8) {
    uVar15 = 0x1405;
  }
  uVar10 = 2;
  if (bVar8) {
    uVar10 = 4;
  }
  pvVar7 = (void *)((longlong)param_5 * (longlong)uVar10);
  bVar8 = FOpenGLBoundShaderState::RequiresDriverInstantiation
                    (*(FOpenGLBoundShaderState **)&(this->PendingState).Streams[0xf].Divisor);
  if (param_7 < 2) {
    if (bVar8) {
      FVar13 = StatPtr_STAT_OpenGLShaderFirstDrawTime;
      if (StatPtr_STAT_OpenGLShaderFirstDrawTime ==
          (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderFirstDrawTime>)0x0) {
        pFVar12 = ::FName::FName(local_58,"STAT_OpenGLShaderFirstDrawTime");
        FVar13 = (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderFirstDrawTime>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLShaderFirstDrawTime,
                            *pFVar12,L"Time for first draw of shader programs","STATGROUP_OpenGLRHI"
                            ,"STATCAT_Advanced",L"OpenGL RHI",true,true,ST_int64,true,false,
                            MCR_Invalid);
      }
    }
    else {
      FVar13 = (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderFirstDrawTime>)
               &TStatId::TStatId_NAME_None;
    }
    FVar16 = *(FName *)FVar13;
    bVar8 = false;
    bVar6 = false;
    local_d0.ComparisonIndex.Value = 0;
    local_d0.Number = 0;
    if ((FVar16.ComparisonIndex.Value.Value == 0) && (FVar16.Number == 0)) {
      (*glDrawRangeElements)(uVar20,0,param_4,uVar18,uVar15,pvVar7);
      goto LAB_145c1de89;
    }
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_d8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_d8[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar8 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_b8.ComparisonIndex.Value = FVar16.ComparisonIndex.Value.Value;
        local_b8.Number = FVar16.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_b8,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLCommands.cpp"
                   ,0x934);
        bVar8 = true;
        bVar6 = true;
      }
    }
    bVar22 = FThreadStats::bPrimaryEnable == false;
    FVar17 = local_d0;
    if (!bVar22) {
      local_d0 = FVar16;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      FVar17 = FVar16;
      FVar21.Value = local_d0.ComparisonIndex.Value;
    }
    (*glDrawRangeElements)(uVar20,0,param_4,uVar18,uVar15,pvVar7);
    if (bVar6) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar22) || (FVar17 == (FName)0x0)) || (FThreadStats::bPrimaryDisableForever != false)) ||
       (FThreadStats::TlsSlot == 0xffffffff)) goto LAB_145c1de89;
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) goto LAB_145c1de89;
    local_70.NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
    local_70.NameAndInfo.Index.Value = FVar21.Value;
    QueryPerformanceCounter(&local_88);
    local_70.StatData.Pad[4] = '\0';
    local_70.StatData.Pad[5] = '\0';
    local_70.StatData.Pad[6] = '\0';
    local_70.StatData.Pad[7] = '\0';
    local_70.StatData.Pad[0] = local_88.s.LowPart._0_1_;
    local_70.StatData.Pad[1] = local_88.s.LowPart._1_1_;
    local_70.StatData.Pad[2] = local_88.s.LowPart._2_1_;
    local_70.StatData.Pad[3] = local_88.s.LowPart._3_1_;
    FThreadStats::AddStatMessage(this_00,&local_70);
    piVar2 = &this_00->ScopeCount;
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
  }
  else {
    if (bVar8) {
      FVar13 = StatPtr_STAT_OpenGLShaderFirstDrawTime;
      if (StatPtr_STAT_OpenGLShaderFirstDrawTime ==
          (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderFirstDrawTime>)0x0) {
        pFVar12 = ::FName::FName(&local_60,"STAT_OpenGLShaderFirstDrawTime");
        FVar13 = (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderFirstDrawTime>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLShaderFirstDrawTime,
                            *pFVar12,L"Time for first draw of shader programs","STATGROUP_OpenGLRHI"
                            ,"STATCAT_Advanced",L"OpenGL RHI",true,true,ST_int64,true,false,
                            MCR_Invalid);
      }
    }
    else {
      FVar13 = (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderFirstDrawTime>)
               &TStatId::TStatId_NAME_None;
    }
    FVar16 = *(FName *)FVar13;
    bVar8 = false;
    bVar6 = false;
    local_b0.ComparisonIndex.Value = 0;
    local_b0.Number = 0;
    if ((FVar16.ComparisonIndex.Value.Value == 0) && (FVar16.Number == 0)) {
LAB_145c1db45:
      bVar22 = false;
      FVar16 = local_b0;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        param_6 = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&param_6,(char *)*(FName *)((longlong)FVar13 + 0x10));
        bVar8 = false;
        bVar6 = true;
        if (-1 < CpuChannel->Enabled) {
          local_c0.ComparisonIndex.Value = FVar16.ComparisonIndex.Value.Value;
          local_c0.Number = FVar16.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_c0,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLCommands.cpp"
                     ,0x92d);
          bVar8 = true;
          bVar6 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_145c1db45;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar22 = true;
    }
    if ((param_3 != 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("FirstInstance == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLCommands.cpp"
                           ,0x92e,L"FirstInstance is currently unsupported on this RHI"), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (*glDrawElementsInstanced)(uVar20,uVar18,uVar15,pvVar7,param_7);
    if (bVar6) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar22) || (FVar16 == (FName)0x0)) || (FThreadStats::bPrimaryDisableForever != false))
       || (FThreadStats::TlsSlot == 0xffffffff)) goto LAB_145c1de89;
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) goto LAB_145c1de89;
    local_80.NameAndInfo.Index = FVar16.ComparisonIndex.Value;
    local_80.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
    QueryPerformanceCounter(&local_90);
    local_80.StatData.Pad[4] = '\0';
    local_80.StatData.Pad[5] = '\0';
    local_80.StatData.Pad[6] = '\0';
    local_80.StatData.Pad[7] = '\0';
    local_80.StatData.Pad[0] = local_90.s.LowPart._0_1_;
    local_80.StatData.Pad[1] = local_90.s.LowPart._1_1_;
    local_80.StatData.Pad[2] = local_90.s.LowPart._2_1_;
    local_80.StatData.Pad[3] = local_90.s.LowPart._3_1_;
    FThreadStats::AddStatMessage(this_00,&local_80);
    piVar2 = &this_00->ScopeCount;
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
  }
  if (iVar3 == 0) {
    FThreadStats::Flush(this_00,false,false);
  }
  else if (FThreadStats::bIsRawStatsActive != false) {
    FThreadStats::FlushRawStats(this_00,false,false);
  }
LAB_145c1de89:
  FOpenGLFenceKick::OnDrawCall
            ((FOpenGLFenceKick *)
             ((this->GLLockTracker).OutstandingLocks.AllocatorInstance.InlineData + 0x278));
  return;
}

// RHIDrawIndexedPrimitiveIndirect @ 145c1ded0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHIDrawIndexedPrimitiveIndirect
          (FOpenGLDynamicRHI *this,FRHIBuffer *param_1,FRHIBuffer *param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  HGLRC pHVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_OpenGLShaderFirstDrawTime> FVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar11;
  FNameEntryId FVar12;
  uint uVar13;
  FNameEntryId FVar14;
  uint uVar15;
  bool bVar16;
  FColor_u_0 local_68 [2];
  FName local_60;
  LARGE_INTEGER local_58;
  FName local_50;
  FName local_48;
  FStatMessage local_38;
  
  pHVar8 = wglGetCurrentContext();
  if (pHVar8 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if ((param_2 == (FRHIBuffer *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArgumentBufferRHI",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLCommands.cpp"
                         ,0x950,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  SetupDraw((FOpenGLDynamicRHI *)&this[-1].KickHint.Syncs.ArrayNum,
            (TOpenGLBuffer<FOpenGLBaseBuffer> *)param_1,0,1);
  iVar2 = *(int *)((longlong)&(this->PointSamplerState).Reference + 4);
  FVar14.Value = 0;
  uVar13 = 4;
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      uVar13 = 5;
    }
    else if (iVar2 == 2) {
      uVar13 = 1;
    }
    else {
      uVar13 = 0;
      if (iVar2 != 4) {
        UE::Logging::Private::BasicFatalLog
                  ((FStaticBasicLogRecord *)
                   &`void___cdecl_FindPrimitiveType(unsigned_int,unsigned_int,unsigned_int&___ptr64,int&___ptr64)'
                    ::__l5::LOG_Static,(FLogCategoryBase *)&LogRHI);
        uVar13 = 4;
      }
    }
  }
  uVar15 = 0x1403;
  if ((param_1->Desc).Stride == 4) {
    uVar15 = 0x1405;
  }
  (*glBindBuffer)(0x8f3f,*(uint *)((longlong)&param_2[1]._padding_ + 4));
  bVar6 = FOpenGLBoundShaderState::RequiresDriverInstantiation
                    (*(FOpenGLBoundShaderState **)&(this->PendingState).Streams[0xf].Divisor);
  if (bVar6) {
    FVar10 = StatPtr_STAT_OpenGLShaderFirstDrawTime;
    if (StatPtr_STAT_OpenGLShaderFirstDrawTime ==
        (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderFirstDrawTime>)0x0) {
      pFVar9 = ::FName::FName(&local_50,"STAT_OpenGLShaderFirstDrawTime");
      FVar10 = (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderFirstDrawTime>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLShaderFirstDrawTime,
                          *pFVar9,L"Time for first draw of shader programs","STATGROUP_OpenGLRHI",
                          "STATCAT_Advanced",L"OpenGL RHI",true,true,ST_int64,true,false,MCR_Invalid
                         );
    }
  }
  else {
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderFirstDrawTime>)
             &TStatId::TStatId_NAME_None;
  }
  FVar3 = *(FName *)FVar10;
  bVar6 = false;
  bVar5 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar12 = FVar3.ComparisonIndex.Value;
  uVar7 = FVar3.Number;
  if ((FVar12.Value == 0) && (uVar7 == 0)) {
    (*glDrawElementsIndirect)(uVar13,uVar15,(void *)(ulonglong)param_3);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_68[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_68[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar6 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_60.ComparisonIndex.Value = FVar12.Value;
        local_60.Number = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_60,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLCommands.cpp"
                   ,0x961);
        bVar6 = true;
        bVar5 = true;
      }
    }
    bVar16 = FThreadStats::bPrimaryEnable != false;
    FVar11 = local_48;
    if (bVar16) {
      local_60.ComparisonIndex.Value = FVar12.Value;
      local_60.Number = uVar7;
      local_48 = FVar3;
      FThreadStats::AddMessage(FVar3,CycleScopeStart);
      FVar11 = FVar3;
      FVar14.Value = local_48.ComparisonIndex.Value;
    }
    (*glDrawElementsIndirect)(uVar13,uVar15,(void *)(ulonglong)param_3);
    if (bVar5) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar6) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar16) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_38.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
        local_38.NameAndInfo.Index.Value = FVar14.Value;
        QueryPerformanceCounter(&local_58);
        local_38.StatData.Pad[4] = '\0';
        local_38.StatData.Pad[5] = '\0';
        local_38.StatData.Pad[6] = '\0';
        local_38.StatData.Pad[7] = '\0';
        local_38.StatData.Pad[0] = local_58.s.LowPart._0_1_;
        local_38.StatData.Pad[1] = local_58.s.LowPart._1_1_;
        local_38.StatData.Pad[2] = local_58.s.LowPart._2_1_;
        local_38.StatData.Pad[3] = local_58.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&local_38);
        piVar1 = &this_00->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
  }
  (*glBindBuffer)(0x8f3f,0);
  FOpenGLFenceKick::OnDrawCall
            ((FOpenGLFenceKick *)
             ((this->GLLockTracker).OutstandingLocks.AllocatorInstance.InlineData + 0x278));
  return;
}

// RHIDrawPrimitive @ 145c1e2a0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHIDrawPrimitive(FOpenGLDynamicRHI *this,uint param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  FName FVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  HGLRC pHVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_OpenGLShaderFirstDrawTime> FVar12;
  FThreadStats *this_00;
  FThreadStatsPool *pFVar13;
  uint uVar14;
  FStatMessage *pFVar15;
  FName FVar16;
  FColor_u_0 FVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  FNameEntryId FVar22;
  bool bVar23;
  FColor_u_0 local_res8;
  uint uStackX_c;
  uint local_res10;
  uint local_res18;
  uint local_res20;
  FColor_u_0 local_c8 [2];
  FName local_c0;
  FName local_b0;
  FColor_u_0 local_a0;
  uint local_9c;
  FColor_u_0 local_98;
  uint local_94;
  LARGE_INTEGER local_88;
  LARGE_INTEGER local_80;
  FStatMessage local_78;
  FStatMessage local_68;
  FName local_58;
  FName local_50 [2];
  
  local_res10 = param_1;
  local_res20 = param_3;
  pHVar10 = wglGetCurrentContext();
  if (pHVar10 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    param_3 = local_res20;
  }
  iVar3 = *(int *)((longlong)&(this->PointSamplerState).Reference + 4);
  if (iVar3 == 0) {
    iVar19 = 3;
  }
  else {
    iVar19 = 2;
    if ((iVar3 != 2) && (iVar19 = 1, iVar3 == 5)) {
      iVar19 = 3;
    }
  }
  uVar21 = 0;
  FVar22.Value = 0;
  local_res18 = FVar22.Value;
  if (iVar3 == 1) {
    local_res18 = 2;
  }
  *(int *)&this->_padding_ = (int)this->_padding_ + 1;
  local_res18 = iVar19 * param_2 + local_res18;
  uVar20 = param_3;
  if (param_3 == 0) {
    uVar20 = 1;
  }
  piVar2 = (int *)((longlong)&this->_padding_ + 4);
  *piVar2 = *piVar2 + uVar20 * local_res18;
  *(uint *)&this->_padding_ = (int)this->_padding_ + uVar20 * param_2;
  if ((this->_padding_ == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExecutingCmdList",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                         ,0x221,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar5 = this->_padding_;
  uVar4 = *(undefined4 *)((longlong)&(this->PointSamplerState).Reference + 4);
  if ((*(char *)(lVar5 + 0x308) == '\0') &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar20 = *(uint *)(lVar5 + 0x29c);
  if (*(longlong *)(lVar5 + 0x300) == 0) {
    uVar14 = 0x1f;
  }
  else {
    uVar14 = *(uint *)(*(longlong *)(lVar5 + 0x300) + 8);
  }
  uVar18 = 0;
  if (uVar20 != 0) {
    for (; (uVar20 >> uVar18 & 1) == 0; uVar18 = uVar18 + 1) {
    }
  }
  if (uVar20 != 0) {
    do {
      lVar1 = ((ulonglong)uVar18 * 0x20 + (ulonglong)uVar14) * 0x18;
      piVar2 = (int *)(lVar1 + 0x390 + lVar5);
      *piVar2 = *piVar2 + 1;
      switch(uVar4) {
      case 0:
      case 1:
        piVar2 = (int *)(lVar5 + 0x394 + lVar1);
        *piVar2 = *piVar2 + param_2;
        break;
      case 2:
        piVar2 = (int *)(lVar5 + 0x398 + lVar1);
        *piVar2 = *piVar2 + param_2;
        break;
      case 3:
        piVar2 = (int *)(lVar5 + 0x39c + lVar1);
        *piVar2 = *piVar2 + param_2;
        break;
      case 4:
        piVar2 = (int *)(lVar5 + 0x3a0 + lVar1);
        *piVar2 = *piVar2 + param_2;
        break;
      case 5:
        piVar2 = (int *)(lVar5 + 0x3a4 + lVar1);
        *piVar2 = *piVar2 + param_2;
      }
      uVar20 = uVar20 & ~(1 << ((byte)uVar18 & 0x1f));
      uVar18 = 0;
      if (uVar20 != 0) {
        for (; (uVar20 >> uVar18 & 1) == 0; uVar18 = uVar18 + 1) {
        }
      }
    } while (uVar20 != 0);
  }
  SetupDraw((FOpenGLDynamicRHI *)&this[-1].KickHint.Syncs.ArrayNum,
            (TOpenGLBuffer<FOpenGLBaseBuffer> *)0x0,local_res10,local_res18);
  iVar3 = *(int *)((longlong)&(this->PointSamplerState).Reference + 4);
  if (iVar3 == 0) {
    param_2 = param_2 * 3;
    uVar21 = 4;
  }
  else if (iVar3 == 1) {
    param_2 = param_2 + 2;
    uVar21 = 5;
  }
  else if (iVar3 == 2) {
    param_2 = param_2 * 2;
    uVar21 = 1;
  }
  else if (iVar3 != 4) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`void___cdecl_FindPrimitiveType(unsigned_int,unsigned_int,unsigned_int&___ptr64,int&___ptr64)'
                ::__l5::LOG_Static,(FLogCategoryBase *)&LogRHI);
    uVar21 = 4;
  }
  bVar9 = FOpenGLBoundShaderState::RequiresDriverInstantiation
                    (*(FOpenGLBoundShaderState **)&(this->PendingState).Streams[0xf].Divisor);
  if (param_3 == 1) {
    if (bVar9) {
      FVar12 = StatPtr_STAT_OpenGLShaderFirstDrawTime;
      if (StatPtr_STAT_OpenGLShaderFirstDrawTime ==
          (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderFirstDrawTime>)0x0) {
        pFVar11 = ::FName::FName(&local_58,"STAT_OpenGLShaderFirstDrawTime");
        FVar12 = (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderFirstDrawTime>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLShaderFirstDrawTime,
                            *pFVar11,L"Time for first draw of shader programs","STATGROUP_OpenGLRHI"
                            ,"STATCAT_Advanced",L"OpenGL RHI",true,true,ST_int64,true,false,
                            MCR_Invalid);
      }
    }
    else {
      FVar12 = (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderFirstDrawTime>)
               &TStatId::TStatId_NAME_None;
    }
    FVar6 = *(FName *)FVar12;
    bVar9 = false;
    bVar8 = false;
    local_c0.ComparisonIndex.Value = 0;
    local_c0.Number = 0;
    FVar17.Bits = (uint)FVar6.ComparisonIndex.Value;
    uVar20 = FVar6.Number;
    if ((FVar17.Bits == 0) && (uVar20 == 0)) {
      (*glDrawArrays)(uVar21,0,param_2);
      goto LAB_145c1e93c;
    }
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar9 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a0.Bits = FVar17.Bits;
        local_9c = uVar20;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_a0._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLCommands.cpp"
                   ,0x8bc);
        bVar9 = true;
        bVar8 = true;
      }
    }
    bVar23 = FThreadStats::bPrimaryEnable == false;
    FVar16 = local_c0;
    if (!bVar23) {
      local_res8.Bits = FVar17.Bits;
      uStackX_c = uVar20;
      local_c0 = FVar6;
      FThreadStats::AddMessage(FVar6,CycleScopeStart);
      FVar16 = FVar6;
      FVar22.Value = local_c0.ComparisonIndex.Value;
    }
    (*glDrawArrays)(uVar21,0,param_2);
    if (bVar8) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar9) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (((bVar23) || (FVar16 == (FName)0x0)) ||
       ((FThreadStats::bPrimaryDisableForever != false || (FThreadStats::TlsSlot == 0xffffffff))))
    goto LAB_145c1e93c;
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      pFVar13 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(pFVar13);
    }
    if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) goto LAB_145c1e93c;
    local_78.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
    local_78.NameAndInfo.Index.Value = FVar22.Value;
    QueryPerformanceCounter(&local_88);
    local_78.StatData.Pad[4] = '\0';
    local_78.StatData.Pad[5] = '\0';
    local_78.StatData.Pad[6] = '\0';
    local_78.StatData.Pad[7] = '\0';
    local_78.StatData.Pad[0] = local_88.s.LowPart._0_1_;
    local_78.StatData.Pad[1] = local_88.s.LowPart._1_1_;
    local_78.StatData.Pad[2] = local_88.s.LowPart._2_1_;
    local_78.StatData.Pad[3] = local_88.s.LowPart._3_1_;
    pFVar15 = &local_78;
  }
  else {
    if (bVar9) {
      FVar12 = StatPtr_STAT_OpenGLShaderFirstDrawTime;
      if (StatPtr_STAT_OpenGLShaderFirstDrawTime ==
          (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderFirstDrawTime>)0x0) {
        pFVar11 = ::FName::FName(local_50,"STAT_OpenGLShaderFirstDrawTime");
        FVar12 = (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderFirstDrawTime>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLShaderFirstDrawTime,
                            *pFVar11,L"Time for first draw of shader programs","STATGROUP_OpenGLRHI"
                            ,"STATCAT_Advanced",L"OpenGL RHI",true,true,ST_int64,true,false,
                            MCR_Invalid);
      }
    }
    else {
      FVar12 = (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderFirstDrawTime>)
               &TStatId::TStatId_NAME_None;
    }
    FVar6 = *(FName *)FVar12;
    bVar9 = false;
    bVar8 = false;
    local_b0.ComparisonIndex.Value = 0;
    local_b0.Number = 0;
    FVar17.Bits = (uint)FVar6.ComparisonIndex.Value;
    uVar20 = FVar6.Number;
    if ((FVar17.Bits == 0) && (uVar20 == 0)) {
      (*glDrawArraysInstanced)(uVar21,0,param_2,local_res20);
      goto LAB_145c1e93c;
    }
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_c8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_c8[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar9 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_98.Bits = FVar17.Bits;
        local_94 = uVar20;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_98._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLCommands.cpp"
                   ,0x8c3);
        bVar9 = true;
        bVar8 = true;
      }
    }
    bVar23 = FThreadStats::bPrimaryEnable == false;
    FVar16 = local_b0;
    if (!bVar23) {
      local_res8.Bits = FVar17.Bits;
      uStackX_c = uVar20;
      local_b0 = FVar6;
      FThreadStats::AddMessage(FVar6,CycleScopeStart);
      FVar16 = FVar6;
      FVar22.Value = local_b0.ComparisonIndex.Value;
    }
    (*glDrawArraysInstanced)(uVar21,0,param_2,local_res20);
    if (bVar8) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar9) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar23) || (FVar16 == (FName)0x0)) || (FThreadStats::bPrimaryDisableForever != false)) ||
       (FThreadStats::TlsSlot == 0xffffffff)) goto LAB_145c1e93c;
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      pFVar13 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(pFVar13);
    }
    if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) goto LAB_145c1e93c;
    local_68.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
    local_68.NameAndInfo.Index.Value = FVar22.Value;
    QueryPerformanceCounter(&local_80);
    local_68.StatData.Pad[4] = '\0';
    local_68.StatData.Pad[5] = '\0';
    local_68.StatData.Pad[6] = '\0';
    local_68.StatData.Pad[7] = '\0';
    local_68.StatData.Pad[0] = local_80.s.LowPart._0_1_;
    local_68.StatData.Pad[1] = local_80.s.LowPart._1_1_;
    local_68.StatData.Pad[2] = local_80.s.LowPart._2_1_;
    local_68.StatData.Pad[3] = local_80.s.LowPart._3_1_;
    pFVar15 = &local_68;
  }
  FThreadStats::AddStatMessage(this_00,pFVar15);
  piVar2 = &this_00->ScopeCount;
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FThreadStats::Flush(this_00,false,false);
  }
  else if (FThreadStats::bIsRawStatsActive != false) {
    FThreadStats::FlushRawStats(this_00,false,false);
  }
LAB_145c1e93c:
  FOpenGLFenceKick::OnDrawCall
            ((FOpenGLFenceKick *)
             ((this->GLLockTracker).OutstandingLocks.AllocatorInstance.InlineData + 0x278));
  return;
}

// RHIDrawPrimitiveIndirect @ 145c1e980

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHIDrawPrimitiveIndirect
          (FOpenGLDynamicRHI *this,FRHIBuffer *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  HGLRC pHVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_OpenGLShaderFirstDrawTime> FVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar11;
  FColor_u_0 FVar12;
  uint uVar13;
  FNameEntryId FVar14;
  bool bVar15;
  FColor_u_0 local_res20;
  uint uStackX_24;
  FColor_u_0 local_68;
  uint local_64;
  LARGE_INTEGER local_60;
  FName local_58;
  FName local_50;
  FStatMessage local_40;
  
  pHVar8 = wglGetCurrentContext();
  if (pHVar8 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if ((param_1 == (FRHIBuffer *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArgumentBufferRHI",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLCommands.cpp"
                         ,0x8d5,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  SetupDraw((FOpenGLDynamicRHI *)&this[-1].KickHint.Syncs.ArrayNum,
            (TOpenGLBuffer<FOpenGLBaseBuffer> *)0x0,0,1);
  iVar2 = *(int *)((longlong)&(this->PointSamplerState).Reference + 4);
  FVar14.Value = 0;
  uVar13 = 4;
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      uVar13 = 5;
    }
    else if (iVar2 == 2) {
      uVar13 = 1;
    }
    else {
      uVar13 = 0;
      if (iVar2 != 4) {
        UE::Logging::Private::BasicFatalLog
                  ((FStaticBasicLogRecord *)
                   &`void___cdecl_FindPrimitiveType(unsigned_int,unsigned_int,unsigned_int&___ptr64,int&___ptr64)'
                    ::__l5::LOG_Static,(FLogCategoryBase *)&LogRHI);
        uVar13 = 4;
      }
    }
  }
  (*glBindBuffer)(0x8f3f,*(uint *)((longlong)&param_1[1]._padding_ + 4));
  bVar6 = FOpenGLBoundShaderState::RequiresDriverInstantiation
                    (*(FOpenGLBoundShaderState **)&(this->PendingState).Streams[0xf].Divisor);
  if (bVar6) {
    FVar10 = StatPtr_STAT_OpenGLShaderFirstDrawTime;
    if (StatPtr_STAT_OpenGLShaderFirstDrawTime ==
        (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderFirstDrawTime>)0x0) {
      pFVar9 = ::FName::FName(&local_58,"STAT_OpenGLShaderFirstDrawTime");
      FVar10 = (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderFirstDrawTime>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLShaderFirstDrawTime,
                          *pFVar9,L"Time for first draw of shader programs","STATGROUP_OpenGLRHI",
                          "STATCAT_Advanced",L"OpenGL RHI",true,true,ST_int64,true,false,MCR_Invalid
                         );
    }
  }
  else {
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderFirstDrawTime>)
             &TStatId::TStatId_NAME_None;
  }
  FVar3 = *(FName *)FVar10;
  bVar6 = false;
  bVar5 = false;
  local_50.ComparisonIndex.Value = 0;
  local_50.Number = 0;
  FVar12.Bits = (uint)FVar3.ComparisonIndex.Value;
  uVar7 = FVar3.Number;
  if ((FVar12.Bits == 0) && (uVar7 == 0)) {
    (*glDrawArraysIndirect)(uVar13,(void *)param_2);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar6 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_68.Bits = FVar12.Bits;
        local_64 = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_68._s_0,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLCommands.cpp"
                   ,0x8e5);
        bVar6 = true;
        bVar5 = true;
      }
    }
    bVar15 = FThreadStats::bPrimaryEnable != false;
    FVar11 = local_50;
    if (bVar15) {
      local_res20.Bits = FVar12.Bits;
      uStackX_24 = uVar7;
      local_50 = FVar3;
      FThreadStats::AddMessage(FVar3,CycleScopeStart);
      FVar11 = FVar3;
      FVar14.Value = local_50.ComparisonIndex.Value;
    }
    (*glDrawArraysIndirect)(uVar13,(void *)param_2);
    if (bVar5) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar6) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar15) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_40.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
        local_40.NameAndInfo.Index.Value = FVar14.Value;
        QueryPerformanceCounter(&local_60);
        local_40.StatData.Pad[4] = '\0';
        local_40.StatData.Pad[5] = '\0';
        local_40.StatData.Pad[6] = '\0';
        local_40.StatData.Pad[7] = '\0';
        local_40.StatData.Pad[0] = local_60.s.LowPart._0_1_;
        local_40.StatData.Pad[1] = local_60.s.LowPart._1_1_;
        local_40.StatData.Pad[2] = local_60.s.LowPart._2_1_;
        local_40.StatData.Pad[3] = local_60.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&local_40);
        piVar1 = &this_00->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
  }
  (*glBindBuffer)(0x8f3f,0);
  FOpenGLFenceKick::OnDrawCall
            ((FOpenGLFenceKick *)
             ((this->GLLockTracker).OutstandingLocks.AllocatorInstance.InlineData + 0x278));
  return;
}

// RHIEnableDepthBoundsTest @ 145c1ed20

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall FOpenGLDynamicRHI::RHIEnableDepthBoundsTest(FOpenGLDynamicRHI *this,bool param_1)

{
  if (glDepthBoundsEXT == (_func___cdecl_void_double_double *)0x0) {
    return;
  }
  if (param_1) {
                    /* WARNING: Could not recover jumptable at 0x000145c1ed33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*glEnable)(0x8890);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000145c1ed3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*glDisable)(0x8890);
  return;
}

// RHIEndBreadcrumbGPU @ 145c1ed50

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHIEndBreadcrumbGPU(FOpenGLDynamicRHI *this,FRHIBreadcrumbNode *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  FStats *pFVar7;
  FEndBreadcrumb *pFVar8;
  FRHIBreadcrumbNode *local_res10 [3];
  
  local_res10[0] = param_1;
  if (((this->TextureMipLimits).field_0x40 != '\0') &&
     (((((int)this->_padding_ != 0 || (*(int *)((longlong)&this->_padding_ + 4) != 0)) ||
       ((int)this->_padding_ != 0)) || (*(int *)((longlong)&this->_padding_ + 4) != 0)))) {
    uVar2 = *(undefined4 *)&this->_padding_;
    uVar3 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    uVar4 = *(undefined4 *)&this->_padding_;
    uVar5 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    pFVar7 = UE::RHI::GPUProfiler::FEventStream::Emplace<UE::RHI::GPUProfiler::FEvent::FStats>
                       (*(FEventStream **)&(this->TextureMipLimits).field_0x48);
    pFVar7->NumDraws = uVar2;
    pFVar7->NumDispatches = uVar3;
    pFVar7->NumPrimitives = uVar4;
    pFVar7->NumVertices = uVar5;
    this->_padding_ = 0;
    this->_padding_ = 0;
  }
  if ((this->TextureMipLimits).field_0x40 != '\0') {
    pFVar8 = UE::RHI::GPUProfiler::FEventStream::
             Emplace<UE::RHI::GPUProfiler::FEvent::FEndBreadcrumb,FRHIBreadcrumbNode_*_&>
                       (*(FEventStream **)&(this->TextureMipLimits).field_0x48,local_res10);
    FOpenGLProfiler::InsertQuery
              ((FOpenGLProfiler *)&(this->TextureMipLimits).field_0x40,&pFVar8->GPUTimestampBOP);
  }
  if (this->_padding_ == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExecutingCmdList",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                       ,0x221,L"");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (((*(char *)(this->_padding_ + 0xf8) != '\0') && (glPopDebugGroup != (_func___cdecl_void *)0x0)
      ) && (FOpenGL3::bDebugContext != false)) {
    (*glPopDebugGroup)();
  }
  return;
}

// RHIEndDrawingViewport @ 145c1ee40

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHIEndDrawingViewport
          (FOpenGLDynamicRHI *this,FRHIViewport *param_1,bool param_2,bool param_3)

{
  int *piVar1;
  LARGE_INTEGER LVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  HGLRC pHVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_OpenGLPresentTime> FVar11;
  longlong lVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  IConsoleManager *pIVar13;
  longlong *plVar14;
  TConsoleVariableData<int> *pTVar15;
  FNameEntryId FVar16;
  FName FVar17;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  bool local_res18;
  bool local_res20;
  LARGE_INTEGER local_a8;
  LARGE_INTEGER local_a0;
  FScopeIdle local_98;
  int local_90;
  char local_8c;
  uint local_88;
  FName local_80;
  LARGE_INTEGER local_70;
  LARGE_INTEGER local_68;
  FStatMessage local_60;
  FName local_50 [2];
  
  local_res18 = param_2;
  local_res20 = param_3;
  pHVar9 = wglGetCurrentContext();
  if (pHVar9 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  pTVar15 = (TConsoleVariableData<int> *)0x0;
  FVar11 = StatPtr_STAT_OpenGLPresentTime;
  if (StatPtr_STAT_OpenGLPresentTime == (FThreadSafeStaticStat<FStat_STAT_OpenGLPresentTime>)0x0) {
    pFVar10 = ::FName::FName(local_50,"STAT_OpenGLPresentTime");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_OpenGLPresentTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLPresentTime,*pFVar10,
                        L"Present time","STATGROUP_OpenGLRHI","STATCAT_Advanced",L"OpenGL RHI",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar11;
  bVar4 = false;
  bVar6 = false;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  FVar16 = FVar17.ComparisonIndex.Value;
  uVar8 = FVar17.Number;
  if ((FVar16.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar16.Value;
        local_res10.Number = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLViewport.cpp"
                   ,0x76);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_a8.s.LowPart = FVar16.Value;
      local_a8.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar5 = true;
      goto LAB_145c1efd0;
    }
  }
  bVar5 = false;
  FVar17 = local_80;
LAB_145c1efd0:
  bVar7 = IsInRHIThread();
  UE::Stats::FThreadIdleStats::FScopeIdle::FScopeIdle(&local_98,!bVar7);
  local_90 = 2;
  bVar7 = IsInRenderingThread();
  if (bVar7) {
    local_8c = '\x01';
    QueryPerformanceCounter(&local_a8);
    local_88 = local_a8.s.LowPart;
  }
  else {
    local_8c = '\0';
    local_88 = 0;
  }
  LVar2 = (LARGE_INTEGER)*(LARGE_INTEGER *)&param_1[2].field_0x8;
  local_a0 = LVar2;
  if ((this->ContextState).field_0x3fc != '\0') {
    (this->ContextState).field_0x3fc = 0;
    (*glDisable)(0xc11);
  }
  lVar12 = (**(code **)(*(longlong *)LVar2 + 0x20))(LVar2.QuadPart);
  uVar8 = *(uint *)(lVar12 + 0x28);
  lVar12 = (**(code **)(*(longlong *)local_a0 + 0x20))();
  bVar7 = PlatformBlitToViewport
                    ((IRHICommandContext *)this,
                     *(FPlatformOpenGLDevice **)&(this->TextureMipLimits).field_0x38,
                     (FOpenGLViewport *)param_1,*(uint *)(lVar12 + 0x24),uVar8,local_res18,
                     local_res20);
  *(undefined4 *)
   &(this->ContextState).BlendState.RenderTargets.Elements[7].bSeparateAlphaBlendEnable = 0xffffffff
  ;
  if (bVar7) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        pIVar13 = IConsoleManager::Get();
        plVar14 = (longlong *)(**(code **)((longlong)*pIVar13 + 0xc0))(pIVar13);
        if (plVar14 != (longlong *)0x0) {
          pTVar15 = (TConsoleVariableData<int> *)(**(code **)(*plVar14 + 0x68))(plVar14);
        }
        CFinishFrameVar = pTVar15;
        _Init_thread_footer(&::_TSS0);
      }
    }
    pTVar15 = CFinishFrameVar;
    bVar7 = IsInParallelRenderingThread();
    if (!bVar7) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (pTVar15->ShadowedValue[1] == 0) {
      (**(code **)(*(longlong *)param_1 + 0x50))();
      (**(code **)(*(longlong *)param_1 + 0x58))(param_1);
    }
    else {
      (**(code **)(*(longlong *)param_1 + 0x58))(param_1);
      (**(code **)(*(longlong *)param_1 + 0x50))(param_1);
    }
  }
  if (GInputLatencyTimer.RenderThreadTrigger != false) {
    (**(code **)(*(longlong *)param_1 + 0x50))(param_1);
    QueryPerformanceCounter(&local_a0);
    GInputLatencyTimer.DeltaTime = local_a0.s.LowPart - GInputLatencyTimer.StartTime;
    GInputLatencyTimer.RenderThreadTrigger = false;
  }
  if (local_8c != '\0') {
    QueryPerformanceCounter(&local_70);
    GRenderThreadIdle[local_90] = GRenderThreadIdle[local_90] + (local_70.s.LowPart - local_88);
  }
  UE::Stats::FThreadIdleStats::FScopeIdle::~FScopeIdle(&local_98);
  EndFrameTick((FOpenGLDynamicRHI *)&this[-1].KickHint.Syncs.ArrayNum);
  if (GOpenGLPerFrameErrorCheck != 0) {
    bVar7 = IsOGLDebugOutputEnabled();
    if (!bVar7) {
      uVar8 = (*glGetError)();
      if (uVar8 != 0) {
        if (GOpenGLPerFrameErrorCheck == 1) {
          if (1 < (byte)LogRHI._0_1_) {
            UE::Logging::Private::BasicLog<2>
                      ((FStaticBasicLogRecord *)&PTR_u_GL_Error_encoun_1510ef5a0,
                       (FLogCategoryBase *)&LogRHI);
          }
        }
        else {
          if (GOpenGLPerFrameErrorCheck != 2) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("!\"Enclosing block should never be called\"",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLViewport.cpp"
                               ,0x27,L"");
            if (bVar7) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          UE::Logging::Private::BasicFatalLog
                    ((FStaticBasicLogRecord *)&PTR_u_GL_Error_encoun_1510ef708,
                     (FLogCategoryBase *)&LogRHI);
        }
      }
    }
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar17 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_60.NameAndInfo.Index = FVar17.ComparisonIndex.Value;
      local_60.NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_68);
      local_60.StatData.Pad[4] = '\0';
      local_60.StatData.Pad[5] = '\0';
      local_60.StatData.Pad[6] = '\0';
      local_60.StatData.Pad[7] = '\0';
      local_60.StatData.Pad[0] = local_68.s.LowPart._0_1_;
      local_60.StatData.Pad[1] = local_68.s.LowPart._1_1_;
      local_60.StatData.Pad[2] = local_68.s.LowPart._2_1_;
      local_60.StatData.Pad[3] = local_68.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_60);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// RHIEndFrame @ 145c1f370

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall FOpenGLDynamicRHI::RHIEndFrame(FOpenGLDynamicRHI *this,FRHIEndFrameArgs *param_1)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  
  FOpenGLProfiler::EndFrame(&this->Profiler,param_1);
  FOpenGLFenceKick::Reset(&this->KickHint);
  BeginFrame_UniformBufferPoolCleanup();
  if (2 < GFrameNumberRenderThread) {
    uVar5 = 0;
    iVar6 = GFrameNumberRenderThread - 3;
    if (0 < AllocationList.ArrayNum) {
      lVar7 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar5 < AllocationList.ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pvVar1 = *(void **)(AllocationList.AllocatorInstance.Data + lVar7);
        if ((*(int *)((longlong)pvVar1 + 0x10) < 0) || (iVar6 < *(int *)((longlong)pvVar1 + 0x10)))
        break;
        FreeSpace = FreeSpace +
                    (uint)*(byte *)((longlong)pvVar1 + 0xf) + *(int *)((longlong)pvVar1 + 8);
        ::operator_delete(pvVar1,0x18);
        uVar5 = uVar5 + 1;
        lVar7 = lVar7 + 8;
      } while ((int)uVar5 < AllocationList.ArrayNum);
    }
    uVar4 = 0;
    if ((int)uVar5 <= AllocationList.ArrayNum) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar5 != 0) {
      if (AllocationList.ArrayNum - uVar5 != 0) {
        memmove(AllocationList.AllocatorInstance.Data,
                AllocationList.AllocatorInstance.Data + (longlong)(int)uVar5 * 8,
                (longlong)(int)(AllocationList.ArrayNum - uVar5) << 3);
      }
      AllocationList.ArrayNum = AllocationList.ArrayNum - uVar5;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&AllocationList.AllocatorInstance,AllocationList.ArrayNum,
                 &AllocationList.ArrayMax);
    }
    FrameBytes = 0;
  }
  return;
}

// RHIEndRenderPass @ 145c1f540

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOpenGLDynamicRHI::RHIEndRenderPass(FOpenGLDynamicRHI *this)

{
  FRHIDepthRenderTargetView local_38;
  FRHIRenderTargetView local_28;
  
  (this->PendingState).DepthMinZ = 1.4013e-45;
  local_28.Texture = (FRHITexture *)0x0;
  local_28.MipIndex = 0;
  local_28.ArraySliceIndex = 0xffffffff;
  local_28.LoadAction = ENoAction;
  local_28.StoreAction = EStore;
  local_38.Texture = (FRHITexture *)0x0;
  local_38.DepthLoadAction = ENoAction;
  local_38.DepthStoreAction = ENoAction;
  local_38.StencilLoadAction = ENoAction;
  local_38.StencilStoreAction = ENoAction;
  local_38.DepthStencilAccess.Value = DepthWrite_StencilWrite;
  SetRenderTargets((FOpenGLDynamicRHI *)&this[-1].KickHint.Syncs.ArrayNum,1,&local_28,&local_38);
  return;
}

// RHIEndRenderQuery @ 145c1f5a0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHIEndRenderQuery(FOpenGLDynamicRHI *this,FRHIRenderQuery *param_1)

{
  FOpenGLRenderQuery::End((FOpenGLRenderQuery *)(param_1 + 1),(ulong64 *)0x0);
  return;
}

// RHIEndRenderQuery_TopOfPipe @ 145c1f5c0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHIEndRenderQuery_TopOfPipe
          (FOpenGLDynamicRHI *this,FRHICommandListBase *param_1,FRHIRenderQuery *param_2)

{
  if (param_2 != (FRHIRenderQuery *)0x0) {
    param_2[2].field_0x13 = param_2[2].field_0x13 + '\x01';
    FDynamicRHI::RHIEndRenderQuery_TopOfPipe((FDynamicRHI *)this,param_1,param_2);
    return;
  }
  return;
}

// RHIEndTransitions @ 145c1f5e0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHIEndTransitions
          (FOpenGLDynamicRHI *this,TArrayView<FRHITransition_const_*,int> *param_1)

{
  return;
}

// RHIFinalizeContext @ 145c1f5f0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHIFinalizeContext
          (FOpenGLDynamicRHI *this,FRHIFinalizeContextArgs *param_1,
          TRHIPipelineArray<IRHIPlatformCommandList_*> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  FStats *pFVar9;
  longlong *plVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  
  if (((this->Profiler).bEnabled != false) &&
     (((((int)this->_padding_ != 0 || (*(int *)((longlong)&this->_padding_ + 4) != 0)) ||
       ((int)this->_padding_ != 0)) || (*(int *)((longlong)&this->_padding_ + 4) != 0)))) {
    uVar4 = *(undefined4 *)&this->_padding_;
    uVar5 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    uVar6 = *(undefined4 *)&this->_padding_;
    uVar7 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    pFVar9 = UE::RHI::GPUProfiler::FEventStream::Emplace<UE::RHI::GPUProfiler::FEvent::FStats>
                       (&((this->Profiler).Current.Ptr)->EventStream);
    pFVar9->NumDraws = uVar4;
    pFVar9->NumDispatches = uVar5;
    pFVar9->NumPrimitives = uVar6;
    pFVar9->NumVertices = uVar7;
    this->_padding_ = 0;
    this->_padding_ = 0;
  }
  pFVar11 = (param_1->Contexts).AllocatorInstance.Data;
  iVar2 = (param_1->Contexts).ArrayNum;
  pFVar1 = pFVar11 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->Contexts).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<IRHIComputeContext_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar11 == pFVar1) break;
    plVar10 = &this->_padding_;
    if (this == (FOpenGLDynamicRHI *)0x0) {
      plVar10 = (longlong *)0x0;
    }
    if ((longlong *)*(undefined1 **)pFVar11 != plVar10) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLCommands.cpp"
                         ,0xaf8,L"");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar11 = pFVar11 + 8;
  }
  memset((this->PendingState).BoundUniformBuffers,0,0x2a0);
  memset((this->PendingState).BoundUniformBuffersDynamicOffset,0,0x150);
  return;
}

// RHIFlushResources @ 145c1f710

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall FOpenGLDynamicRHI::RHIFlushResources(FOpenGLDynamicRHI *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145c1f710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*glFinish)();
  return;
}

// RHIGenerateMips @ 145c1f720

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOpenGLDynamicRHI::RHIGenerateMips(FOpenGLDynamicRHI *this,FRHITexture *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  HGLRC pHVar6;
  FOpenGLTexture *this_00;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  
  pHVar6 = wglGetCurrentContext();
  if (pHVar6 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  this_00 = (FOpenGLTexture *)0x0;
  if (param_1 != (FRHITexture *)0x0) {
    this_00 = (FOpenGLTexture *)(**(code **)(param_1->_padding_ + 0x48))(param_1);
  }
  lVar7 = (**(code **)(this_00->_padding_ + 0x20))(this_00);
  bVar1 = *(byte *)(lVar7 + 0x30);
  FOpenGLTexture::TryRestoreGLResource(this_00);
  uVar2 = this_00->Resource;
  uVar3 = this_00->Target;
  if ((FOpenGLBase::MaxCombinedTextureImageUnits == -1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("MaxCombinedTextureImageUnits != -1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBase.h"
                         ,0x7c,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar8 = FOpenGLBase::MaxCombinedTextureImageUnits - 1;
  uVar9 = 0;
  if ((int)uVar8 < (int)(this->ContextState)._padding_) {
    uVar9 = ~uVar8 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar7 = (this->ContextState)._padding_;
  if ((*(uint *)(lVar7 + 0x10 + (longlong)(int)uVar8 * 0x28) != uVar3) ||
     (*(uint *)(lVar7 + 0x14 + (longlong)(int)uVar8 * 0x28) != uVar2)) {
    CachedSetupTextureStageInner(this,uVar8,uVar3,uVar2,-1,(uint)bVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000145c1f8b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*glGenerateMipmap)(this_00->Target);
  return;
}

// RHIGetAvailableResolutions @ 145c1f8d0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

bool __thiscall
FOpenGLDynamicRHI::RHIGetAvailableResolutions
          (FOpenGLDynamicRHI *this,TArray<FScreenResolutionRHI,TSizedDefaultAllocator<32>_> *param_1
          ,bool param_2)

{
  bool bVar1;
  FIdentityFunctor local_res20 [8];
  
  bVar1 = PlatformGetAvailableResolutions(param_1,param_2);
  if (bVar1) {
    AlgoImpl::
    IntroSortInternal<FScreenResolutionRHI,int,FIdentityFunctor,TDereferenceWrapper<FScreenResolutionRHI,_FOpenGLDynamicRHI::RHIGetAvailableResolutions_::__l5::<lambda_1>_>_>
              ((FScreenResolutionRHI *)(param_1->AllocatorInstance).Data,param_1->ArrayNum,
               local_res20[0],(<lambda_1> *)local_res20);
  }
  return bVar1;
}

// RHIGetCommandContext @ 145c1f920

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

IRHIComputeContext * __thiscall
FOpenGLDynamicRHI::RHIGetCommandContext
          (FOpenGLDynamicRHI *this,ERHIPipeline param_1,FRHIGPUMask param_2)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  return (IRHIComputeContext *)0x0;
}

// RHIGetDefaultContext @ 145c1f950

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

IRHICommandContext * __thiscall FOpenGLDynamicRHI::RHIGetDefaultContext(FOpenGLDynamicRHI *this)

{
  IRHICommandContext *pIVar1;
  
  pIVar1 = (IRHICommandContext *)&this->_padding_;
  if (this == (FOpenGLDynamicRHI *)0x0) {
    pIVar1 = (IRHICommandContext *)0x0;
  }
  return pIVar1;
}

// RHIGetGLMajorVersion @ 145c1f970

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

int __thiscall FOpenGLDynamicRHI::RHIGetGLMajorVersion(FOpenGLDynamicRHI *this)

{
  int local_res10 [6];
  
  local_res10[0] = 0;
  (*glGetIntegerv)(0x821b,local_res10);
  return local_res10[0];
}

// RHIGetGLMinorVersion @ 145c1f9a0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

int __thiscall FOpenGLDynamicRHI::RHIGetGLMinorVersion(FOpenGLDynamicRHI *this)

{
  int local_res10 [6];
  
  local_res10[0] = 0;
  (*glGetIntegerv)(0x821c,local_res10);
  return local_res10[0];
}

// RHIGetMinimumAlignmentForBufferBackedSRV @ 145c1f9d0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

ulong64 __thiscall
FOpenGLDynamicRHI::RHIGetMinimumAlignmentForBufferBackedSRV
          (FOpenGLDynamicRHI *this,EPixelFormat param_1)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  
  if ((FOpenGLBase::TextureBufferAlignment < 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FOpenGL::GetTextureBufferAlignment()>=0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLDevice.cpp"
                         ,0x5ad,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return (longlong)FOpenGLBase::TextureBufferAlignment;
}

// RHIGetNativeDevice @ 145c1fa20

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void * __thiscall FOpenGLDynamicRHI::RHIGetNativeDevice(FOpenGLDynamicRHI *this)

{
  return this->PlatformDevice;
}

// RHIGetNativeInstance @ 145c1fa30

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void * __thiscall FOpenGLDynamicRHI::RHIGetNativeInstance(FOpenGLDynamicRHI *this)

{
  return (void *)0x0;
}

// RHIGetRenderQueryResult @ 145c1fa40

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FOpenGLDynamicRHI::RHIGetRenderQueryResult
          (FOpenGLDynamicRHI *this,FRHIRenderQuery *param_1,ulong64 *param_2,bool param_3,
          uint param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  int iVar5;
  
  if (param_1 == (FRHIRenderQuery *)0x0) {
    *param_2 = 0;
    return true;
  }
  if (param_1[2].field_0x13 == param_1[2].field_0x11) {
    if (*(longlong *)(param_1 + 1) == 0) goto LAB_145c1fbc6;
    iVar5 = 0x155;
  }
  else {
    if (!param_3) {
      *param_2 = 0;
      return false;
    }
    bVar2 = IsInRenderingThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x1594,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if (((GRHICommandList.bLatchedBypass == false) ||
        ((GRHICommandList.CommandListImmediate._667_1_ & 0x20) == 0)) &&
       (GRHICommandList.CommandListImmediate._100_1_ == '\0')) {
      puVar4 = FMemStackBase::Alloc((FMemStackBase *)&GRHICommandList.CommandListImmediate,0x20,8);
      GRHICommandList.CommandListImmediate._96_4_ = GRHICommandList.CommandListImmediate._96_4_ + 1;
      *(undefined8 **)GRHICommandList.CommandListImmediate._48_8_ = puVar4;
      GRHICommandList.CommandListImmediate._48_8_ = puVar4 + 1;
      puVar4[1] = 0;
      *puVar4 = &TRHILambdaCommand<FRHICommandListImmediate,`FOpenGLRenderQuery_RHI::GetResult'::`2'::<lambda_1>_>
                 ::_vftable_;
      puVar4[3] = L"TRHILambdaCommand";
      puVar4[2] = param_1;
    }
    else {
      FOpenGLRenderQuery::CacheResult((FOpenGLRenderQuery *)(param_1 + 1),true);
    }
    FRHICommandListImmediate::ImmediateFlush
              (&GRHICommandList.CommandListImmediate,FlushRHIThread,None);
    if (param_1[2].field_0x13 != param_1[2].field_0x11) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TOPCounter == LastCachedBOPCounter",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLQuery.cpp"
                         ,0x173,
                         L"Attempting to get data from an RHI render query which was never issued.")
      ;
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if (*(longlong *)(param_1 + 1) == 0) goto LAB_145c1fbc6;
    iVar5 = 0x174;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLinked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLQuery.cpp"
                     ,iVar5,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
LAB_145c1fbc6:
  *param_2 = *(ulong64 *)&param_1[1].field_0x10;
  return true;
}

// RHIGetResource @ 145c1fbe0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

uint __thiscall FOpenGLDynamicRHI::RHIGetResource(FOpenGLDynamicRHI *this,FRHITexture *param_1)

{
  FOpenGLTexture *this_00;
  
  if (param_1 == (FRHITexture *)0x0) {
    this_00 = (FOpenGLTexture *)0x0;
  }
  else {
    this_00 = (FOpenGLTexture *)(**(code **)(param_1->_padding_ + 0x48))(param_1);
  }
  FOpenGLTexture::TryRestoreGLResource(this_00);
  return this_00->Resource;
}

// RHIGetSupportedResolution @ 145c1fc20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHIGetSupportedResolution(FOpenGLDynamicRHI *this,uint *param_1,uint *param_2)

{
  code *pcVar1;
  bool bVar2;
  BOOL BVar3;
  int iVar4;
  uint uVar5;
  DWORD iModeNum;
  uint uVar6;
  int iVar7;
  undefined1 auStack_138 [32];
  DEVMODEW local_118;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_138;
  bVar2 = false;
  uVar5 = 0;
  uVar6 = 0;
  memset(&local_118,0,0xdc);
  iModeNum = 1;
  BVar3 = EnumDisplaySettingsW((LPCWSTR)0x0,0,&local_118);
  if (BVar3 != 0) {
    do {
      if (bVar2) {
        iVar7 = -(local_118.dmPelsWidth - *param_1);
        if (iVar7 < 0) {
          iVar7 = local_118.dmPelsWidth - *param_1;
        }
        iVar4 = -(uVar5 - *param_1);
        if (iVar4 < 0) {
          iVar4 = uVar5 - *param_1;
        }
        if (iVar7 <= iVar4) {
          iVar7 = -(local_118.dmPelsHeight - *param_2);
          if (iVar7 < 0) {
            iVar7 = local_118.dmPelsHeight - *param_2;
          }
          iVar4 = -(uVar6 - *param_2);
          if (iVar4 < 0) {
            iVar4 = uVar6 - *param_2;
          }
          if (iVar7 <= iVar4) goto LAB_145c1fcd6;
        }
      }
      else {
LAB_145c1fcd6:
        bVar2 = true;
        uVar5 = local_118.dmPelsWidth;
        uVar6 = local_118.dmPelsHeight;
      }
      BVar3 = EnumDisplaySettingsW((LPCWSTR)0x0,iModeNum,&local_118);
      iModeNum = iModeNum + 1;
    } while (BVar3 != 0);
    if (bVar2) goto LAB_145c1fd20;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("InitializedMode",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\Windows\\WindowsOpenGLPlatform.cpp"
                     ,0x27f,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_145c1fd20:
  *param_1 = uVar5;
  *param_2 = uVar6;
  return;
}

// RHIGetTextureMemoryStats @ 145c1fd60

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHIGetTextureMemoryStats(FOpenGLDynamicRHI *this,FTextureMemoryStats *param_1)

{
  long64 lVar1;
  
  param_1->StreamingMemorySize = GRHIGlobals.StreamingTextureMemorySizeInKB << 10;
  param_1->NonStreamingMemorySize = GRHIGlobals.NonStreamingTextureMemorySizeInKB << 10;
  param_1->TexturePoolSize = GRHIGlobals.TexturePoolSize;
  param_1->DedicatedVideoMemory = GOpenGLDedicatedVideoMemory;
  lVar1 = -1;
  if (GOpenGLTotalGraphicsMemory != 0) {
    lVar1 = GOpenGLTotalGraphicsMemory;
  }
  param_1->LargestContiguousAllocation = param_1->StreamingMemorySize;
  param_1->TotalGraphicsMemory = lVar1;
  return;
}

// RHIGetTextureMemoryVisualizeData @ 145c1fdc0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

bool __thiscall
FOpenGLDynamicRHI::RHIGetTextureMemoryVisualizeData
          (FOpenGLDynamicRHI *this,FColor *param_1,int param_2,int param_3,int param_4,int param_5)

{
  return false;
}

// RHIGetViewportBackBuffer @ 145c1fdd0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

TRefCountPtr<FRHITexture> __thiscall
FOpenGLDynamicRHI::RHIGetViewportBackBuffer(FOpenGLDynamicRHI *this,FRHIViewport *param_1)

{
  FRHIResource *this_00;
  longlong in_R8;
  
  this_00 = *(FRHIResource **)(in_R8 + 0x38);
  *(FRHIResource **)param_1 = this_00;
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(this_00);
  }
  return (TRefCountPtr<FRHITexture>)(FRHITexture *)param_1;
}

// RHIIsValidTexture @ 145c1fe00

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

bool __thiscall FOpenGLDynamicRHI::RHIIsValidTexture(FOpenGLDynamicRHI *this,uint param_1)

{
  uchar uVar1;
  
  uVar1 = (*glIsTexture)(param_1);
  return uVar1 == '\x01';
}

// RHILockStagingBuffer @ 145c1fe20

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void * __thiscall
FOpenGLDynamicRHI::RHILockStagingBuffer
          (FOpenGLDynamicRHI *this,FRHIStagingBuffer *param_1,FRHIGPUFence *param_2,uint param_3,
          uint param_4)

{
  void *pvVar1;
  
  pvVar1 = FOpenGLStagingBuffer::Lock((FOpenGLStagingBuffer *)param_1,param_3,param_4);
  return pvVar1;
}

// RHILockTexture @ 145c1fe40

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FRHILockTextureResult * __thiscall
FOpenGLDynamicRHI::RHILockTexture
          (FOpenGLDynamicRHI *this,FRHILockTextureResult *__return_storage_ptr__,
          FRHICommandListImmediate *param_1,FRHILockTextureArgs *param_2)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  FRHILockTextureResult *pFVar11;
  FOpenGLTexture *this_00;
  longlong lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<_public:_virtual_struct_FRHILockTextureResult___cdecl_FOpenGLDynamicRHI::RHILockTexture(FRHICommandListImmediate_&,FRHILockTextureArgs_const_&)_::_19_::FStat_STAT_OGLRHIThread_Flush>
  FVar16;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  ForElementType<FOpenGLDynamicRHI::FTextureLockTracker::FLockParams> FVar17;
  FName FVar18;
  ForElementType<FOpenGLDynamicRHI::FTextureLockTracker::FLockParams> FVar19;
  FTextureLockTracker *pFVar20;
  uint uVar21;
  undefined1 local_res20 [8];
  FColor_u_0 local_e0 [2];
  uint *local_d8;
  FName local_d0;
  FName local_c8;
  FOpenGLTexture *local_b8;
  void *pvStack_b0;
  int local_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  uint uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  LARGE_INTEGER local_90;
  void *local_88;
  FStatMessage local_80;
  FOpenGLDynamicRHI *local_70;
  FRHILockTextureResult *pFStack_68;
  FOpenGLTexture *local_60;
  uint uStack_58;
  uint uStack_54;
  FName local_50;
  FName local_48 [2];
  
  bVar8 = IsInRenderingThread();
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                         ,0x7eb,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FRHILockTextureResult *)(*pcVar5)();
    return pFVar11;
  }
  if ((param_2->LockMode == RLM_WriteOnly_NoOverwrite) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Arguments.LockMode != EResourceLockMode::RLM_WriteOnly_NoOverwrite",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                         ,0x7ec,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FRHILockTextureResult *)(*pcVar5)();
    return pFVar11;
  }
  this_00 = (FOpenGLTexture *)0x0;
  if ((longlong *)param_2->_padding_ != (longlong *)0x0) {
    this_00 = (FOpenGLTexture *)(**(code **)(*(longlong *)param_2->_padding_ + 0x48))();
  }
  lVar12 = (**(code **)(this_00->_padding_ + 0x20))(this_00);
  uVar21 = *(uint *)((longlong)&param_2->_padding_ + 4);
  cVar2 = *(char *)(lVar12 + 0x32);
  if ((cVar2 == '\x03') || (cVar2 == '\x04')) {
    uVar21 = (int)param_2->_padding_ + uVar21 * 6;
  }
  else if (cVar2 != '\x01') {
    uVar21 = 0;
  }
  __return_storage_ptr__->Data = (void *)0x0;
  __return_storage_ptr__->ByteCount = 0;
  local_d8 = &__return_storage_ptr__->Stride;
  *local_d8 = 0;
  uVar9 = (uint)param_2->_padding_;
  if (param_2->LockMode != RLM_ReadOnly) {
    uVar9 = FOpenGLTexture::GetLockSize(this_00,uVar9,RLM_WriteOnly,local_d8);
    __return_storage_ptr__->ByteCount = (ulonglong)uVar9;
    pvVar14 = FMemory::Malloc((ulonglong)uVar9,0x10);
    __return_storage_ptr__->Data = pvVar14;
    goto LAB_145c20210;
  }
  local_70 = this;
  pFStack_68 = __return_storage_ptr__;
  local_60 = this_00;
  uStack_58 = uVar9;
  uStack_54 = uVar21;
  if (((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) &&
     (param_1->field_0x64 == '\0')) {
    puVar13 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x38,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar13;
    *(undefined8 **)&param_1->field_0x30 = puVar13 + 1;
    puVar13[1] = 0;
    *puVar13 = &TRHILambdaCommand<FRHICommandListImmediate,`FOpenGLDynamicRHI::RHILockTexture'::`19'::<lambda_1>_>
                ::_vftable_;
    puVar13[2] = local_70;
    puVar13[3] = pFStack_68;
    puVar13[6] = L"TRHILambdaCommand";
    puVar13[4] = local_60;
    puVar13[5] = CONCAT44(uStack_54,uStack_58);
  }
  else {
    pvVar14 = FOpenGLTexture::Lock(this_00,uVar9,uVar21,RLM_ReadOnly,local_d8);
    __return_storage_ptr__->Data = pvVar14;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_OGLRHIThread_Flush ==
        (FThreadSafeStaticStat<_public:_virtual_struct_FRHILockTextureResult___cdecl_FOpenGLDynamicRHI::RHILockTexture(FRHICommandListImmediate_&,FRHILockTextureArgs_const_&)_::_19_::FStat_STAT_OGLRHIThread_Flush>
         )0x0) {
      pFVar15 = ::FName::FName(&local_50,"STAT_OGLRHIThread_Flush");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OGLRHIThread_Flush,*pFVar15,
                 L"STAT_OGLRHIThread_Flush","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,
                 ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar16 = StatPtr_STAT_OGLRHIThread_Flush;
  if (StatPtr_STAT_OGLRHIThread_Flush ==
      (FThreadSafeStaticStat<_public:_virtual_struct_FRHILockTextureResult___cdecl_FOpenGLDynamicRHI::RHILockTexture(FRHICommandListImmediate_&,FRHILockTextureArgs_const_&)_::_19_::FStat_STAT_OGLRHIThread_Flush>
       )0x0) {
    pFVar15 = ::FName::FName(local_48,"STAT_OGLRHIThread_Flush");
    FVar16 = (FThreadSafeStaticStat<_public:_virtual_struct_FRHILockTextureResult___cdecl_FOpenGLDynamicRHI::RHILockTexture(FRHICommandListImmediate_&,FRHILockTextureArgs_const_&)_::_19_::FStat_STAT_OGLRHIThread_Flush>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OGLRHIThread_Flush,*pFVar15,
                          L"STAT_OGLRHIThread_Flush","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                          true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar16;
  bVar8 = false;
  bVar7 = false;
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
  if ((FVar18.ComparisonIndex.Value.Value == 0) && (FVar18.Number == 0)) {
LAB_145c20128:
    bVar6 = false;
    FVar18 = local_c8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_e0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_e0[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d0.ComparisonIndex.Value = FVar18.ComparisonIndex.Value.Value;
        local_d0.Number = FVar18.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_d0,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                   ,0x7fa);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145c20128;
    FThreadStats::AddMessage(FVar18,CycleScopeStart);
    bVar6 = true;
  }
  FRHICommandListImmediate::ImmediateFlush(param_1,FlushRHIThread,None);
  uVar9 = FOpenGLTexture::GetLockSize(this_00,(uint)param_2->_padding_,RLM_ReadOnly,local_d8);
  __return_storage_ptr__->ByteCount = (ulonglong)uVar9;
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_80.NameAndInfo.Index = FVar18.ComparisonIndex.Value;
      local_80.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_90);
      local_80.StatData.Pad[4] = '\0';
      local_80.StatData.Pad[5] = '\0';
      local_80.StatData.Pad[6] = '\0';
      local_80.StatData.Pad[7] = '\0';
      local_80.StatData.Pad[0] = local_90.s.LowPart._0_1_;
      local_80.StatData.Pad[1] = local_90.s.LowPart._1_1_;
      local_80.StatData.Pad[2] = local_90.s.LowPart._2_1_;
      local_80.StatData.Pad[3] = local_90.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_80);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
LAB_145c20210:
  if ((__return_storage_ptr__->Data == (void *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result.Data",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                         ,0x804,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FRHILockTextureResult *)(*pcVar5)();
    return pFVar11;
  }
  pFVar20 = &this->GLLockTracker;
  iVar10 = (int)param_2->_padding_;
  local_d8 = (uint *)CONCAT44(local_d8._4_4_,param_2->LockMode);
  uVar3 = (undefined4)__return_storage_ptr__->ByteCount;
  FVar19 = (this->GLLockTracker).OutstandingLocks.AllocatorInstance.SecondaryData;
  iVar4 = (this->GLLockTracker).OutstandingLocks.ArrayNum;
  uVar9 = __return_storage_ptr__->Stride;
  FVar17 = FVar19;
  if (FVar19 == (ForElementType<FOpenGLDynamicRHI::FTextureLockTracker::FLockParams>)0x0) {
    FVar17 = (ForElementType<FOpenGLDynamicRHI::FTextureLockTracker::FLockParams>)pFVar20;
  }
  local_88 = __return_storage_ptr__->Data;
  if (FVar19 == (ForElementType<FOpenGLDynamicRHI::FTextureLockTracker::FLockParams>)0x0) {
    FVar19 = (ForElementType<FOpenGLDynamicRHI::FTextureLockTracker::FLockParams>)pFVar20;
  }
  while( true ) {
    if ((this->GLLockTracker).OutstandingLocks.ArrayNum != iVar4) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FOpenGLDynamicRHI::FTextureLockTracker::FLockParams,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (FVar19 == (ForElementType<FOpenGLDynamicRHI::FTextureLockTracker::FLockParams>)
                  ((longlong)FVar17 + (longlong)iVar4 * 0x28)) break;
    if ((((*(FOpenGLTexture **)FVar19 == this_00) && (*(int *)((longlong)FVar19 + 0x10) == iVar10))
        && (*(uint *)((longlong)FVar19 + 0x14) == uVar21)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Parms.RHIBuffer != RHIBuffer || Parms.MipIndex != MipIndex || Parms.ArrayIndex != ArrayIndex"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLDrv.h"
                           ,0x264,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      pFVar11 = (FRHILockTextureResult *)(*pcVar5)();
      return pFVar11;
    }
    FVar19 = (ForElementType<FOpenGLDynamicRHI::FTextureLockTracker::FLockParams>)
             ((longlong)FVar19 + 0x28);
  }
  FVar19 = (this->GLLockTracker).OutstandingLocks.AllocatorInstance.SecondaryData;
  pvStack_b0 = local_88;
  local_98 = local_d8._0_4_;
  FVar17 = FVar19;
  if (FVar19 == (ForElementType<FOpenGLDynamicRHI::FTextureLockTracker::FLockParams>)0x0) {
    FVar17 = (ForElementType<FOpenGLDynamicRHI::FTextureLockTracker::FLockParams>)pFVar20;
  }
  local_b8 = this_00;
  local_a8 = iVar10;
  uStack_a4 = uVar21;
  uStack_a0 = uVar3;
  uStack_9c = uVar9;
  if ((ulonglong)FVar17 <= &local_b8) {
    if (FVar19 == (ForElementType<FOpenGLDynamicRHI::FTextureLockTracker::FLockParams>)0x0) {
      FVar19 = (ForElementType<FOpenGLDynamicRHI::FTextureLockTracker::FLockParams>)pFVar20;
    }
    if ((&local_b8 <
         (FOpenGLTexture **)
         ((longlong)FVar19 + (longlong)(this->GLLockTracker).OutstandingLocks.ArrayMax * 0x28)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar5 = (code *)swi(3);
      pFVar11 = (FRHILockTextureResult *)(*pcVar5)();
      return pFVar11;
    }
  }
  iVar10 = (this->GLLockTracker).OutstandingLocks.ArrayNum;
  piVar1 = &(this->GLLockTracker).OutstandingLocks.ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FOpenGLDynamicRHI::FTextureLockTracker::FLockParams>_>
                       (0x828,(ForElementType<FOpenGLDynamicRHI::FTextureLockTracker::FLockParams> *
                              )pFVar20,piVar1);
  }
  (this->GLLockTracker).OutstandingLocks.ArrayNum = iVar10 + 1;
  FVar19 = (this->GLLockTracker).OutstandingLocks.AllocatorInstance.SecondaryData;
  lVar12 = (longlong)iVar10;
  if (FVar19 == (ForElementType<FOpenGLDynamicRHI::FTextureLockTracker::FLockParams>)0x0) {
    FVar19 = (ForElementType<FOpenGLDynamicRHI::FTextureLockTracker::FLockParams>)pFVar20;
  }
  puVar13 = (undefined8 *)((longlong)FVar19 + lVar12 * 0x28);
  *puVar13 = local_b8;
  puVar13[1] = pvStack_b0;
  *(ulonglong *)((uchar *)((longlong)FVar19 + 0x10) + lVar12 * 0x28) = CONCAT44(uStack_a4,local_a8);
  *(ulonglong *)((uchar *)((longlong)FVar19 + 0x10) + lVar12 * 0x28 + 8) =
       CONCAT44(uStack_9c,uStack_a0);
  *(ulonglong *)((uchar *)((longlong)FVar19 + 0x20) + lVar12 * 0x28) = CONCAT44(uStack_94,local_98);
  return __return_storage_ptr__;
}

// RHIMapStagingSurface @ 145c20510

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHIMapStagingSurface
          (FOpenGLDynamicRHI *this,FRHITexture *param_1,FRHIGPUFence *param_2,void **param_3,
          int *param_4,int *param_5,uint param_6)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLRenderTarget.cpp"
                     ,0x34f,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// RHIMapStagingSurface_RenderThread @ 145c20550

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHIMapStagingSurface_RenderThread
          (FOpenGLDynamicRHI *this,FRHICommandListImmediate *param_1,FRHITexture *param_2,
          uint param_3,FRHIGPUFence *param_4,void **param_5,int *param_6,int *param_7)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  int *piVar4;
  undefined8 *puVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FOpenGLDynamicRHI::RHIMapStagingSurface_RenderThread(FRHICommandListImmediate_&,FRHITexture_*,unsigned_int,FRHIGPUFence_*,void_*_&,int_&,int_&)_::_2_::FStat_STAT_OGLRHIThread_Flush>
  FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  bool bVar12;
  FRHITexture *local_res18 [2];
  FStatMessage local_38;
  int *local_28;
  void **local_20;
  
  local_res18[0] = param_2;
  FRHICommandListImmediate::ImmediateFlush(param_1,FlushRHIThread,None);
  piVar4 = param_7;
  piVar1 = param_6;
  local_38.NameAndInfo = (FStatNameAndInfo)param_6;
  local_38.StatData.Pad = (uchar  [8])local_res18;
  FVar11.Value = 0;
  local_28 = param_7;
  local_20 = param_5;
  if (((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) &&
     (param_1->field_0x64 == '\0')) {
    puVar5 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x38,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar5;
    *(undefined8 **)&param_1->field_0x30 = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &TRHILambdaCommand<FRHICommandListImmediate,`FOpenGLDynamicRHI::RHIMapStagingSurface_RenderThread'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar5[2] = local_res18;
    puVar5[3] = piVar1;
    puVar5[4] = piVar4;
    puVar5[5] = param_5;
    puVar5[6] = L"TRHILambdaCommand";
  }
  else {
    `FOpenGLDynamicRHI::RHIMapStagingSurface_RenderThread'::__l2::<lambda_1>::operator()
              (&local_38,param_1);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_OGLRHIThread_Flush ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FOpenGLDynamicRHI::RHIMapStagingSurface_RenderThread(FRHICommandListImmediate_&,FRHITexture_*,unsigned_int,FRHIGPUFence_*,void_*_&,int_&,int_&)_::_2_::FStat_STAT_OGLRHIThread_Flush>
           )0x0) {
        pFVar6 = ::FName::FName((FName *)&param_6,"STAT_OGLRHIThread_Flush");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OGLRHIThread_Flush,*pFVar6,
                   L"STAT_OGLRHIThread_Flush","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                   true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar7 = StatPtr_STAT_OGLRHIThread_Flush;
  piVar1 = param_6;
  if (StatPtr_STAT_OGLRHIThread_Flush ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FOpenGLDynamicRHI::RHIMapStagingSurface_RenderThread(FRHICommandListImmediate_&,FRHITexture_*,unsigned_int,FRHIGPUFence_*,void_*_&,int_&,int_&)_::_2_::FStat_STAT_OGLRHIThread_Flush>
       )0x0) {
    pFVar6 = ::FName::FName((FName *)&param_7,"STAT_OGLRHIThread_Flush");
    FVar7 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FOpenGLDynamicRHI::RHIMapStagingSurface_RenderThread(FRHICommandListImmediate_&,FRHITexture_*,unsigned_int,FRHIGPUFence_*,void_*_&,int_&,int_&)_::_2_::FStat_STAT_OGLRHIThread_Flush>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OGLRHIThread_Flush,*pFVar6,
                         L"STAT_OGLRHIThread_Flush","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                         true,true,ST_int64,true,false,MCR_Invalid);
    piVar1 = param_6;
  }
  param_6._4_4_ = (uint)((ulonglong)piVar1 >> 0x20);
  FVar10 = *(FName *)FVar7;
  bVar2 = false;
  bVar3 = false;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value == 0) && (uVar8 == 0)) {
    param_6 = piVar1;
    FRHICommandListImmediate::ImmediateFlush(param_1,FlushRHIThread,None);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      param_6._0_4_ = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&param_6,(char *)*(FName *)((longlong)FVar7 + 0x10));
      piVar1 = (int *)CONCAT44(param_6._4_4_,param_6._0_4_);
      bVar2 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        param_6._0_4_ = FVar9.Value;
        param_6._4_4_ = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&param_6,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLRenderTarget.cpp"
                   ,0x33d);
        piVar1 = (int *)CONCAT44(param_6._4_4_,param_6._0_4_);
        bVar2 = true;
        bVar3 = true;
      }
    }
    bVar12 = FThreadStats::bPrimaryEnable == false;
    if (bVar12) {
      FVar10.ComparisonIndex.Value = 0;
      FVar10.Number = 0;
    }
    else {
      param_6._0_4_ = FVar9.Value;
      param_6._4_4_ = uVar8;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      piVar1 = (int *)CONCAT44(param_6._4_4_,param_6._0_4_);
      FVar11.Value = FVar9.Value;
    }
    param_6 = piVar1;
    FRHICommandListImmediate::ImmediateFlush(param_1,FlushRHIThread,None);
    if (bVar3) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (((!bVar12) && (FVar10 != (FName)0x0)) &&
       ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_38.NameAndInfo =
             (FStatNameAndInfo)
             (CONCAT44(FVar10.Number,FVar11.Value) & 0xffff6fffffffffff | 0x600000000000);
        QueryPerformanceCounter((LARGE_INTEGER *)&param_6);
        local_38.StatData.Pad = (uchar  [8])((ulonglong)param_6 & 0xffffffff);
        FThreadStats::AddStatMessage(this_00,&local_38);
        piVar1 = &this_00->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
  }
  return;
}

// RHIMatchPrecachePSOInitializers @ 145c20950

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

bool __thiscall
FOpenGLDynamicRHI::RHIMatchPrecachePSOInitializers
          (FOpenGLDynamicRHI *this,FGraphicsPipelineStateInitializer *param_1,
          FGraphicsPipelineStateInitializer *param_2)

{
  if (((((param_1->BoundShaderState).VertexShaderRHI == (param_2->BoundShaderState).VertexShaderRHI)
       && ((param_1->BoundShaderState).PixelShaderRHI == (param_2->BoundShaderState).PixelShaderRHI)
       ) && ((param_1->BoundShaderState).MeshShaderRHI == (param_2->BoundShaderState).MeshShaderRHI)
      ) && ((param_1->BoundShaderState).AmplificationShaderRHI ==
            (param_2->BoundShaderState).AmplificationShaderRHI)) {
    return (param_1->BoundShaderState).GeometryShaderRHI ==
           (param_2->BoundShaderState).GeometryShaderRHI;
  }
  return false;
}

// RHINextSubpass @ 145c20990

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall FOpenGLDynamicRHI::RHINextSubpass(FOpenGLDynamicRHI *this)

{
  return;
}

// RHIPostExternalCommandsReset @ 145c209a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall FOpenGLDynamicRHI::RHIPostExternalCommandsReset(FOpenGLDynamicRHI *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  FOpenGLBlendStateData *pFVar8;
  uint *puVar9;
  FOpenGLBlendStateData *pFVar10;
  uint *puVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  bool *pbVar16;
  ulonglong uVar17;
  uint uVar18;
  FOpenGLCachedAttr *pFVar19;
  undefined1 auStackY_1a8 [32];
  uint local_168;
  FOpenGLBlendStateData local_158;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  uVar15 = *(uint *)&(this->ContextState).BlendState.RenderTargets.Elements[7].field_0x20;
  if (-1 < (int)uVar15) {
    (*glUseProgram)(uVar15);
  }
  iVar1 = *(int *)&(this->ContextState).bScissorEnabled;
  uVar15 = (this->ContextState).ActiveTexture;
  (*glViewport)(uVar15,iVar1,*(int *)&(this->ContextState).Scissor.field0_0x0 - uVar15,
                *(int *)((longlong)&(this->ContextState).Scissor.field0_0x0 + 4) - iVar1);
  (*glDepthRange)((double)*(float *)((longlong)&(this->ContextState).Scissor.field0_0x0 + 8),
                  (double)*(float *)((longlong)&(this->ContextState).Scissor.field0_0x0 + 0xc));
  if ((this->ContextState).field_0x3fc == '\0') {
    (*glDisable)(0xc11);
  }
  else {
    (*glEnable)(0xc11);
  }
  iVar1 = *(int *)((longlong)&(this->ContextState).CachedSamplerStates.AllocatorInstance.Data + 4);
  iVar2 = *(int *)&(this->ContextState).CachedSamplerStates.AllocatorInstance.Data;
  (*glScissor)(iVar2,iVar1,(this->ContextState).CachedSamplerStates.ArrayNum - iVar2,
               (this->ContextState).CachedSamplerStates.ArrayMax - iVar1);
  uVar15 = *(uint *)&(this->ContextState).BlendState.RenderTargets.Elements[7].
                     bSeparateAlphaBlendEnable;
  if (-1 < (int)uVar15) {
    (*glBindFramebuffer)(0x8d40,uVar15);
  }
  uVar15 = *(uint *)&(this->ContextState).Viewport.field0_0x0;
  if (-1 < (int)uVar15) {
    (*glBindBuffer)(0x8892,uVar15);
  }
  uVar15 = *(uint *)((longlong)&(this->ContextState).Viewport.field0_0x0 + 4);
  if (-1 < (int)uVar15) {
    (*glBindBuffer)(0x8893,uVar15);
  }
  (*glBindBuffer)(0x88ec,*(uint *)((longlong)&(this->ContextState).Viewport.field0_0x0 + 0xc));
  (*glBindBuffer)(0x8a11,(uint)(this->ContextState).DepthMinZ);
  FOpenGLBlendStateData::FOpenGLBlendStateData(&local_158);
  lVar13 = 2;
  pFVar8 = &local_158;
  puVar9 = &(this->ContextState).DepthStencilState.CCWStencilFail;
  do {
    puVar11 = puVar9;
    pFVar10 = pFVar8;
    uVar4 = *(undefined8 *)&(pFVar10->RenderTargets).Elements[0].ColorSourceBlendFactor;
    uVar5 = *(undefined8 *)&(pFVar10->RenderTargets).Elements[0].bSeparateAlphaBlendEnable;
    uVar6 = *(undefined8 *)&(pFVar10->RenderTargets).Elements[0].AlphaSourceBlendFactor;
    pFVar8 = (FOpenGLBlendStateData *)&(pFVar10->RenderTargets).Elements[3].AlphaBlendOperation;
    *(undefined8 *)puVar11 = *(undefined8 *)(pFVar10->RenderTargets).Elements;
    *(undefined8 *)(puVar11 + 2) = uVar4;
    uVar4 = *(undefined8 *)&(pFVar10->RenderTargets).Elements[0].field_0x20;
    uVar7 = *(undefined8 *)&(pFVar10->RenderTargets).Elements[1].ColorBlendOperation;
    *(undefined8 *)(puVar11 + 4) = uVar5;
    *(undefined8 *)(puVar11 + 6) = uVar6;
    uVar5 = *(undefined8 *)&(pFVar10->RenderTargets).Elements[1].ColorDestBlendFactor;
    uVar6 = *(undefined8 *)&(pFVar10->RenderTargets).Elements[1].AlphaBlendOperation;
    *(undefined8 *)(puVar11 + 8) = uVar4;
    *(undefined8 *)(puVar11 + 10) = uVar7;
    uVar4 = *(undefined8 *)&(pFVar10->RenderTargets).Elements[1].AlphaDestBlendFactor;
    uVar7 = *(undefined8 *)((pFVar10->RenderTargets).Elements + 2);
    *(undefined8 *)(puVar11 + 0xc) = uVar5;
    *(undefined8 *)(puVar11 + 0xe) = uVar6;
    uVar5 = *(undefined8 *)&(pFVar10->RenderTargets).Elements[2].ColorSourceBlendFactor;
    uVar6 = *(undefined8 *)&(pFVar10->RenderTargets).Elements[2].bSeparateAlphaBlendEnable;
    *(undefined8 *)(puVar11 + 0x10) = uVar4;
    *(undefined8 *)(puVar11 + 0x12) = uVar7;
    uVar4 = *(undefined8 *)&(pFVar10->RenderTargets).Elements[2].AlphaSourceBlendFactor;
    uVar7 = *(undefined8 *)&(pFVar10->RenderTargets).Elements[2].field_0x20;
    *(undefined8 *)(puVar11 + 0x14) = uVar5;
    *(undefined8 *)(puVar11 + 0x16) = uVar6;
    uVar5 = *(undefined8 *)&(pFVar10->RenderTargets).Elements[3].ColorBlendOperation;
    uVar6 = *(undefined8 *)&(pFVar10->RenderTargets).Elements[3].ColorDestBlendFactor;
    *(undefined8 *)(puVar11 + 0x18) = uVar4;
    *(undefined8 *)(puVar11 + 0x1a) = uVar7;
    *(undefined8 *)(puVar11 + 0x1c) = uVar5;
    *(undefined8 *)(puVar11 + 0x1e) = uVar6;
    lVar13 = lVar13 + -1;
    puVar9 = puVar11 + 0x20;
  } while (lVar13 != 0);
  uVar4 = *(undefined8 *)&(pFVar10->RenderTargets).Elements[3].AlphaDestBlendFactor;
  uVar5 = *(undefined8 *)((pFVar10->RenderTargets).Elements + 4);
  uVar6 = *(undefined8 *)&(pFVar10->RenderTargets).Elements[4].ColorSourceBlendFactor;
  uVar3 = *(undefined4 *)&(pFVar10->RenderTargets).Elements[4].bSeparateAlphaBlendEnable;
  *(undefined8 *)(puVar11 + 0x20) = *(undefined8 *)pFVar8;
  *(undefined8 *)(puVar11 + 0x22) = uVar4;
  *(undefined8 *)(puVar11 + 0x24) = uVar5;
  *(undefined8 *)(puVar11 + 0x26) = uVar6;
  puVar11[0x28] = uVar3;
  (*glActiveTexture)(0x84c0);
  uVar14 = 0;
  local_168 = local_168 & 0xffffff00;
  (this->ContextState)._padding_ = 0x1b02;
  (this->ContextState)._padding_ = 0;
  *(uint *)&(this->ContextState)._padding_ = local_168;
  (this->ContextState).UniformBufferOffsets[0x47] = 0;
  UpdateRasterizerStateInOpenGLContext((FOpenGLDynamicRHI *)&this[-1].KickHint.Syncs.ArrayNum);
  (this->ContextState).VertexStreams[0xe].Offset = 0;
  pFVar19 = (this->ContextState).VertexAttrs + 0xf;
  *(undefined8 *)&(this->ContextState).BlendState.bUseAlphaToCoverage = 0xffffffffffffffff;
  (this->ContextState).RenderTargetWidth = 0xffffffff;
  (this->ContextState).RenderTargetHeight = 0xffffffff;
  (this->ContextState).OcclusionQuery = 0xffffffff;
  (this->ContextState).Program = 0xffffffff;
  (this->ContextState).UniformBuffers[0] = 0xffffffff;
  (this->ContextState).UniformBuffers[1] = 0xffffffff;
  (this->ContextState).UniformBuffers[2] = 0xffffffff;
  (this->ContextState).UniformBuffers[3] = 0xffffffff;
  (this->ContextState).UniformBuffers[4] = 0xffffffff;
  (this->ContextState).UniformBuffers[5] = 0xffffffff;
  (this->ContextState).UniformBuffers[6] = 0xffffffff;
  (this->ContextState).UniformBuffers[7] = 0xffffffff;
  (this->ContextState).UniformBuffers[8] = 0xffffffff;
  (this->ContextState).UniformBuffers[9] = 0xffffffff;
  (this->ContextState).UniformBuffers[10] = 0xffffffff;
  (this->ContextState).UniformBuffers[0xb] = 0xffffffff;
  (this->ContextState).UniformBuffers[0xc] = 0xffffffff;
  (this->ContextState).UniformBuffers[0xd] = 0xffffffff;
  (this->ContextState).UniformBuffers[0xe] = 0xffffffff;
  (this->ContextState).UniformBuffers[0xf] = 0xffffffff;
  (this->ContextState).UniformBuffers[0x10] = 0xffffffff;
  (this->ContextState).UniformBuffers[0x11] = 0xffffffff;
  (this->ContextState).UniformBuffers[0x12] = 0xffffffff;
  (this->ContextState).UniformBuffers[0x13] = 0xffffffff;
  (this->ContextState).UniformBuffers[0x14] = 0xffffffff;
  (this->ContextState).UniformBuffers[0x15] = 0xffffffff;
  (this->ContextState).UniformBuffers[0x16] = 0xffffffff;
  (this->ContextState).UniformBuffers[0x17] = 0xffffffff;
  (this->ContextState).UniformBuffers[0x18] = 0xffffffff;
  (this->ContextState).UniformBuffers[0x19] = 0xffffffff;
  (this->ContextState).UniformBuffers[0x1a] = 0xffffffff;
  (this->ContextState).UniformBuffers[0x1b] = 0xffffffff;
  (this->ContextState).UniformBuffers[0x1c] = 0xffffffff;
  (this->ContextState).UniformBuffers[0x1d] = 0xffffffff;
  (this->ContextState).UniformBuffers[0x1e] = 0xffffffff;
  (this->ContextState).UniformBuffers[0x1f] = 0xffffffff;
  (this->ContextState).UniformBuffers[0x20] = 0xffffffff;
  (this->ContextState).UniformBuffers[0x21] = 0xffffffff;
  (this->ContextState).UniformBuffers[0x22] = 0xffffffff;
  (this->ContextState).UniformBuffers[0x23] = 0xffffffff;
  (this->ContextState).UniformBuffers[0x24] = 0xffffffff;
  (this->ContextState).UniformBuffers[0x25] = 0xffffffff;
  (this->ContextState).UniformBuffers[0x26] = 0xffffffff;
  (this->ContextState).UniformBuffers[0x27] = 0xffffffff;
  (this->ContextState).UniformBuffers[0x28] = 0xffffffff;
  (this->ContextState).UniformBuffers[0x29] = 0xffffffff;
  (this->ContextState).UniformBuffers[0x2a] = 0xffffffff;
  (this->ContextState).UniformBuffers[0x2b] = 0xffffffff;
  (this->ContextState).UniformBuffers[0x2c] = 0xffffffff;
  (this->ContextState).UniformBuffers[0x2d] = 0xffffffff;
  (this->ContextState).UniformBuffers[0x2e] = 0xffffffff;
  (this->ContextState).UniformBuffers[0x2f] = 0xffffffff;
  (this->ContextState).UniformBuffers[0x30] = 0xffffffff;
  (this->ContextState).UniformBuffers[0x31] = 0xffffffff;
  (this->ContextState).UniformBuffers[0x32] = 0xffffffff;
  (this->ContextState).UniformBuffers[0x33] = 0xffffffff;
  (this->ContextState).UniformBuffers[0x34] = 0xffffffff;
  (this->ContextState).UniformBuffers[0x35] = 0xffffffff;
  (this->ContextState).UniformBuffers[0x36] = 0xffffffff;
  (this->ContextState).UniformBuffers[0x37] = 0xffffffff;
  (this->ContextState).UniformBuffers[0x38] = 0xffffffff;
  (this->ContextState).UniformBuffers[0x39] = 0xffffffff;
  (this->ContextState).UniformBuffers[0x3a] = 0xffffffff;
  (this->ContextState).UniformBuffers[0x3b] = 0xffffffff;
  (this->ContextState).UniformBuffers[0x3c] = 0xffffffff;
  (this->ContextState).UniformBuffers[0x3d] = 0xffffffff;
  (this->ContextState).UniformBuffers[0x3e] = 0xffffffff;
  (this->ContextState).UniformBuffers[0x3f] = 0xffffffff;
  (this->ContextState).UniformBuffers[0x40] = 0xffffffff;
  (this->ContextState).UniformBuffers[0x41] = 0xffffffff;
  uVar15 = uVar14;
  do {
    uVar12._0_1_ = pFVar19[-1].bNormalized;
    uVar12._1_1_ = pFVar19[-1].bShouldConvertToFloat;
    uVar12._2_2_ = *(undefined2 *)&pFVar19[-1].field_0x12;
    if (uVar12 == 0) {
      uVar18 = 0;
      uVar17 = 0;
      uVar12 = 0;
    }
    else {
      uVar17 = (ulonglong)pFVar19->Type;
      uVar18 = pFVar19->Size;
    }
    (*glBindVertexBuffer)(uVar15,uVar12,uVar17,uVar18);
    uVar15 = uVar15 + 1;
    pFVar19 = (FOpenGLCachedAttr *)&pFVar19->bNormalized;
  } while (uVar15 < 0x10);
  uVar15 = 1;
  pbVar16 = &(this->ContextState).bAlphaToCoverageEnabled;
  do {
    if (((((this->ContextState).VertexStreams[0xe].Divisor & uVar15) != 0) &&
        (*(uint *)(pbVar16 + 4) < 0x10)) &&
       ((this->ContextState).VertexStreams[(ulonglong)*(uint *)(pbVar16 + 4) - 2].Offset != 0)) {
      if (pbVar16[9] == false) {
        (*glVertexAttribIFormat)
                  (uVar14,(int)*(float *)(pbVar16 + -8),*(uint *)(pbVar16 + -4),*(uint *)pbVar16);
      }
      else {
        (*glVertexAttribFormat)
                  (uVar14,(int)*(float *)(pbVar16 + -8),*(uint *)(pbVar16 + -4),pbVar16[8],
                   *(uint *)pbVar16);
      }
      (*glVertexAttribBinding)(uVar14,*(uint *)(pbVar16 + 4));
      (*glEnableVertexAttribArray)(uVar14);
    }
    uVar14 = uVar14 + 1;
    uVar15 = uVar15 << 1 | (uint)((int)uVar15 < 0);
    pbVar16 = pbVar16 + 0x14;
  } while (uVar14 < 0x10);
  return;
}

// RHIPreferredPixelFormatHint @ 145c20e00

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

EPixelFormat __thiscall
FOpenGLDynamicRHI::RHIPreferredPixelFormatHint(FOpenGLDynamicRHI *this,EPixelFormat param_1)

{
  EPixelFormat EVar1;
  
  EVar1 = PF_B8G8R8A8;
  if (param_1 != PF_Unknown) {
    EVar1 = param_1;
  }
  return EVar1;
}

// RHIRead3DSurfaceFloatData @ 145c20e20

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHIRead3DSurfaceFloatData
          (FOpenGLDynamicRHI *this,FRHITexture *param_1,TIntRect<int> *param_2,
          TIntPoint<int> param_3,TArray<FFloat16Color,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FOpenGLDynamicRHI::RHIRead3DSurfaceFloatData(FRHITexture_*,UE::Math::TIntRect<int>,UE::Math::TIntPoint<int>,TArray<FFloat16Color,TSizedDefaultAllocator<32>_>_&)_::_2_::FStat_STAT_OGLRHIThread_Flush>
  FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar9;
  FNameEntryId FVar10;
  bool bVar11;
  FColor_u_0 local_res8 [2];
  FRHITexture *local_res10;
  FName local_res18;
  TIntPoint<int>_u_0 local_res20;
  LARGE_INTEGER local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  FStatMessage local_60;
  FRHITexture **local_50;
  TIntRect<int> *local_48;
  TIntPoint<int>_u_0 *local_40;
  TArray<FFloat16Color,TSizedDefaultAllocator<32>_> *local_38;
  FOpenGLDynamicRHI *local_30;
  
  local_res10 = param_1;
  local_res20 = param_3.field0_0x0;
  bVar5 = IsInRenderingThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x1594,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_38 = param_4;
  local_50 = &local_res10;
  FVar10.Value = 0;
  local_40 = &local_res20;
  local_48 = param_2;
  local_30 = this;
  if (((GRHICommandList.bLatchedBypass == false) ||
      ((GRHICommandList.CommandListImmediate._667_1_ & 0x20) == 0)) &&
     (GRHICommandList.CommandListImmediate._100_1_ == '\0')) {
    puVar6 = FMemStackBase::Alloc((FMemStackBase *)&GRHICommandList.CommandListImmediate,0x40,8);
    GRHICommandList.CommandListImmediate._96_4_ = GRHICommandList.CommandListImmediate._96_4_ + 1;
    *(undefined8 **)GRHICommandList.CommandListImmediate._48_8_ = puVar6;
    GRHICommandList.CommandListImmediate._48_8_ = puVar6 + 1;
    *(undefined8 *)GRHICommandList.CommandListImmediate._48_8_ = 0;
    *puVar6 = &TRHILambdaCommand<FRHICommandListImmediate,`FOpenGLDynamicRHI::RHIRead3DSurfaceFloatData'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar6[2] = &local_res10;
    puVar6[3] = param_2;
    puVar6[4] = &local_res20;
    puVar6[5] = param_4;
    puVar6[6] = this;
    puVar6[7] = L"TRHILambdaCommand";
  }
  else {
    `FOpenGLDynamicRHI::RHIRead3DSurfaceFloatData'::__l2::<lambda_1>::operator()
              (&local_50,&GRHICommandList.CommandListImmediate);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_OGLRHIThread_Flush ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FOpenGLDynamicRHI::RHIRead3DSurfaceFloatData(FRHITexture_*,UE::Math::TIntRect<int>,UE::Math::TIntPoint<int>,TArray<FFloat16Color,TSizedDefaultAllocator<32>_>_&)_::_2_::FStat_STAT_OGLRHIThread_Flush>
         )0x0) {
      pFVar7 = ::FName::FName(&local_80,"STAT_OGLRHIThread_Flush");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OGLRHIThread_Flush,*pFVar7,
                 L"STAT_OGLRHIThread_Flush","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,
                 ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar8 = StatPtr_STAT_OGLRHIThread_Flush;
  if (StatPtr_STAT_OGLRHIThread_Flush ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FOpenGLDynamicRHI::RHIRead3DSurfaceFloatData(FRHITexture_*,UE::Math::TIntRect<int>,UE::Math::TIntPoint<int>,TArray<FFloat16Color,TSizedDefaultAllocator<32>_>_&)_::_2_::FStat_STAT_OGLRHIThread_Flush>
       )0x0) {
    pFVar7 = ::FName::FName(&local_78,"STAT_OGLRHIThread_Flush");
    FVar8 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FOpenGLDynamicRHI::RHIRead3DSurfaceFloatData(FRHITexture_*,UE::Math::TIntRect<int>,UE::Math::TIntPoint<int>,TArray<FFloat16Color,TSizedDefaultAllocator<32>_>_&)_::_2_::FStat_STAT_OGLRHIThread_Flush>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OGLRHIThread_Flush,*pFVar7,
                         L"STAT_OGLRHIThread_Flush","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                         true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar2 = *(FName *)FVar8;
  bVar5 = false;
  bVar4 = false;
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  if ((FVar2.ComparisonIndex.Value.Value == 0) && (FVar2.Number == 0)) {
    FRHICommandListImmediate::ImmediateFlush
              (&GRHICommandList.CommandListImmediate,FlushRHIThread,None);
    return;
  }
  if (GCycleStatsShouldEmitNamedEvents != 0) {
    local_res8[0].Bits = 0;
    FGenericPlatformMisc::BeginNamedEvent
              ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
    bVar5 = false;
    bVar4 = true;
    if (-1 < CpuChannel->Enabled) {
      local_res18.ComparisonIndex.Value = FVar2.ComparisonIndex.Value.Value;
      local_res18.Number = FVar2.Number;
      FCpuProfilerTrace::OutputBeginDynamicEventWithId
                (&local_res18,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLRenderTarget.cpp"
                 ,0x3dd);
      bVar5 = true;
      bVar4 = true;
    }
  }
  bVar11 = FThreadStats::bPrimaryEnable != false;
  FVar9 = local_70;
  if (bVar11) {
    local_70 = FVar2;
    FThreadStats::AddMessage(FVar2,CycleScopeStart);
    FVar9 = FVar2;
    FVar10.Value = local_70.ComparisonIndex.Value;
  }
  FRHICommandListImmediate::ImmediateFlush
            (&GRHICommandList.CommandListImmediate,FlushRHIThread,None);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar11) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_60.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      local_60.NameAndInfo.Index.Value = FVar10.Value;
      QueryPerformanceCounter(&local_88);
      local_60.StatData.Pad[4] = '\0';
      local_60.StatData.Pad[5] = '\0';
      local_60.StatData.Pad[6] = '\0';
      local_60.StatData.Pad[7] = '\0';
      local_60.StatData.Pad[0] = local_88.s.LowPart._0_1_;
      local_60.StatData.Pad[1] = local_88.s.LowPart._1_1_;
      local_60.StatData.Pad[2] = local_88.s.LowPart._2_1_;
      local_60.StatData.Pad[3] = local_88.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_60);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// RHIReadSurfaceData @ 145c21220

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHIReadSurfaceData
          (FOpenGLDynamicRHI *this,FRHITexture *param_1,TIntRect<int> *param_2,
          TArray<FColor,TSizedDefaultAllocator<32>_> *param_3,FReadSurfaceDataFlags *param_4)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FOpenGLDynamicRHI::RHIReadSurfaceData(FRHITexture_*,UE::Math::TIntRect<int>,TArray<FColor,TSizedDefaultAllocator<32>_>_&,FReadSurfaceDataFlags)_::_2_::FStat_STAT_OGLRHIThread_Flush>
  FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FColor_u_0 FVar10;
  FName FVar11;
  uint uVar12;
  FColor_u_0 FVar13;
  bool bVar14;
  FRHITexture *local_res10;
  uint local_res18 [2];
  FColor_u_0 local_res20;
  uint uStackX_24;
  FColor_u_0 local_98;
  uint local_94;
  LARGE_INTEGER local_90;
  FStatMessage local_88;
  FOpenGLDynamicRHI *local_78;
  FRHITexture **local_70;
  TIntRect<int> *local_68;
  FReadSurfaceDataFlags *local_60;
  TArray<FColor,TSizedDefaultAllocator<32>_> *local_58;
  uint *local_50;
  FName local_48;
  FName local_40;
  
  piVar1 = &param_3->ArrayNum;
  iVar5 = *piVar1;
  uVar9 = (*(int *)((longlong)&param_2->field0_0x0 + 0xc) -
          *(int *)((longlong)&param_2->field0_0x0 + 4)) *
          (*(int *)((longlong)&param_2->field0_0x0 + 8) - *(int *)&param_2->field0_0x0);
  local_res10 = param_1;
  local_res18[0] = uVar9;
  if (iVar5 < (int)uVar9) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar9 - iVar5,&param_3->AllocatorInstance,piVar1,&param_3->ArrayMax);
  }
  else {
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
    }
    if ((int)uVar9 < iVar5) {
      uVar12 = iVar5 - uVar9;
      if ((int)(uVar12 | uVar9) < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (uVar12 != 0) {
        _Dst = (param_3->AllocatorInstance).Data + (longlong)(int)uVar9 * 4;
        iVar5 = (*piVar1 - uVar12) - uVar9;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar12 * 4,(longlong)iVar5 << 2);
        }
        *piVar1 = *piVar1 - uVar12;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&param_3->AllocatorInstance,*piVar1,&param_3->ArrayMax);
      }
    }
  }
  if (local_res10 == (FRHITexture *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1441928969191424742>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLRenderTarget.cpp"
                       ,0x2e6,"TextureRHI");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    memset((param_3->AllocatorInstance).Data,0,(ulonglong)local_res18[0] << 2);
  }
  else {
    bVar4 = IsInRenderingThread();
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x1594,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_70 = &local_res10;
    FVar13.Bits = 0;
    local_50 = local_res18;
    local_60 = param_4;
    local_78 = this;
    local_68 = param_2;
    local_58 = param_3;
    if (((GRHICommandList.bLatchedBypass == false) ||
        ((GRHICommandList.CommandListImmediate._667_1_ & 0x20) == 0)) &&
       (GRHICommandList.CommandListImmediate._100_1_ == '\0')) {
      puVar6 = FMemStackBase::Alloc((FMemStackBase *)&GRHICommandList.CommandListImmediate,0x48,8);
      GRHICommandList.CommandListImmediate._96_4_ = GRHICommandList.CommandListImmediate._96_4_ + 1;
      *(undefined8 **)GRHICommandList.CommandListImmediate._48_8_ = puVar6;
      GRHICommandList.CommandListImmediate._48_8_ = puVar6 + 1;
      *(undefined8 *)GRHICommandList.CommandListImmediate._48_8_ = 0;
      *puVar6 = &TRHILambdaCommand<FRHICommandListImmediate,`FOpenGLDynamicRHI::RHIReadSurfaceData'::`2'::<lambda_1>_>
                 ::_vftable_;
      puVar6[2] = this;
      puVar6[3] = &local_res10;
      puVar6[4] = param_2;
      puVar6[5] = param_4;
      puVar6[6] = param_3;
      puVar6[7] = local_res18;
      puVar6[8] = L"TRHILambdaCommand";
    }
    else {
      `FOpenGLDynamicRHI::RHIReadSurfaceData'::__l2::<lambda_1>::operator()
                (&local_78,&GRHICommandList.CommandListImmediate);
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        if (StatPtr_STAT_OGLRHIThread_Flush ==
            (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FOpenGLDynamicRHI::RHIReadSurfaceData(FRHITexture_*,UE::Math::TIntRect<int>,TArray<FColor,TSizedDefaultAllocator<32>_>_&,FReadSurfaceDataFlags)_::_2_::FStat_STAT_OGLRHIThread_Flush>
             )0x0) {
          pFVar7 = ::FName::FName(&local_48,"STAT_OGLRHIThread_Flush");
          FThreadSafeStaticStatBase::DoSetup
                    ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OGLRHIThread_Flush,*pFVar7,
                     L"STAT_OGLRHIThread_Flush","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                     true,ST_int64,true,false,MCR_Invalid);
        }
        _Init_thread_footer(&::_TSS0);
      }
    }
    FVar8 = StatPtr_STAT_OGLRHIThread_Flush;
    if (StatPtr_STAT_OGLRHIThread_Flush ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FOpenGLDynamicRHI::RHIReadSurfaceData(FRHITexture_*,UE::Math::TIntRect<int>,TArray<FColor,TSizedDefaultAllocator<32>_>_&,FReadSurfaceDataFlags)_::_2_::FStat_STAT_OGLRHIThread_Flush>
         )0x0) {
      pFVar7 = ::FName::FName(&local_40,"STAT_OGLRHIThread_Flush");
      FVar8 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FOpenGLDynamicRHI::RHIReadSurfaceData(FRHITexture_*,UE::Math::TIntRect<int>,TArray<FColor,TSizedDefaultAllocator<32>_>_&,FReadSurfaceDataFlags)_::_2_::FStat_STAT_OGLRHIThread_Flush>
               )FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OGLRHIThread_Flush,*pFVar7,
                           L"STAT_OGLRHIThread_Flush","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                           true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar11 = *(FName *)FVar8;
    bVar4 = false;
    bVar3 = false;
    FVar10.Bits = (uint)FVar11.ComparisonIndex.Value;
    uVar9 = FVar11.Number;
    if ((FVar10.Bits == 0) && (uVar9 == 0)) {
      FRHICommandListImmediate::ImmediateFlush
                (&GRHICommandList.CommandListImmediate,FlushRHIThread,None);
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_res20.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_res20._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
        bVar4 = false;
        bVar3 = true;
        if (-1 < CpuChannel->Enabled) {
          local_98.Bits = FVar10.Bits;
          local_94 = uVar9;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    ((FName *)&local_98._s_0,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLRenderTarget.cpp"
                     ,0x2f6);
          bVar4 = true;
          bVar3 = true;
        }
      }
      bVar14 = FThreadStats::bPrimaryEnable == false;
      if (bVar14) {
        FVar11.ComparisonIndex.Value = 0;
        FVar11.Number = 0;
      }
      else {
        local_res20.Bits = FVar10.Bits;
        uStackX_24 = uVar9;
        FThreadStats::AddMessage(FVar11,CycleScopeStart);
        FVar13.Bits = FVar10.Bits;
      }
      FRHICommandListImmediate::ImmediateFlush
                (&GRHICommandList.CommandListImmediate,FlushRHIThread,None);
      if (bVar3) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar4) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (((!bVar14) && (FVar11 != (FName)0x0)) &&
         ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff))))
      {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
          local_88.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
          local_88.NameAndInfo.Index.Value = FVar13.Bits;
          QueryPerformanceCounter(&local_90);
          local_88.StatData.Pad[4] = '\0';
          local_88.StatData.Pad[5] = '\0';
          local_88.StatData.Pad[6] = '\0';
          local_88.StatData.Pad[7] = '\0';
          local_88.StatData.Pad[0] = local_90.s.LowPart._0_1_;
          local_88.StatData.Pad[1] = local_90.s.LowPart._1_1_;
          local_88.StatData.Pad[2] = local_90.s.LowPart._2_1_;
          local_88.StatData.Pad[3] = local_90.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(this_00,&local_88);
          piVar1 = &this_00->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(this_00,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_00,false,false);
          }
        }
      }
    }
  }
  return;
}

// RHIReadSurfaceData @ 145c21750

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHIReadSurfaceData
          (FOpenGLDynamicRHI *this,FRHITexture *param_1,TIntRect<int> *param_2,
          TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_3,FReadSurfaceDataFlags *param_4)

{
  int *piVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FOpenGLDynamicRHI::RHIReadSurfaceData(FRHITexture_*,UE::Math::TIntRect<int>,TArray<FLinearColor,TSizedDefaultAllocator<32>_>_&,FReadSurfaceDataFlags)_::_2_::FStat_STAT_OGLRHIThread_Flush>
  FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  uint uVar12;
  bool bVar13;
  FRHITexture *local_res10;
  FColor_u_0 local_88 [2];
  FName local_80;
  FName local_78;
  LARGE_INTEGER local_68;
  FStatMessage local_60;
  FRHITexture **local_50;
  FReadSurfaceDataFlags *local_48;
  FOpenGLDynamicRHI *local_40;
  TIntRect<int> *local_38;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *local_30;
  FName local_28;
  FName local_20;
  
  local_res10 = param_1;
  if (param_1 == (FRHITexture *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1441928969191424766>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLRenderTarget.cpp"
                       ,0x2fe,"TextureRHI");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    bVar5 = IsInRenderingThread();
    if ((!bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x1594,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_50 = &local_res10;
    FVar11.Value = 0;
    local_48 = param_4;
    local_40 = this;
    local_38 = param_2;
    local_30 = param_3;
    if (((GRHICommandList.bLatchedBypass == false) ||
        ((GRHICommandList.CommandListImmediate._667_1_ & 0x20) == 0)) &&
       (GRHICommandList.CommandListImmediate._100_1_ == '\0')) {
      puVar6 = FMemStackBase::Alloc((FMemStackBase *)&GRHICommandList.CommandListImmediate,0x40,8);
      GRHICommandList.CommandListImmediate._96_4_ = GRHICommandList.CommandListImmediate._96_4_ + 1;
      *(undefined8 **)GRHICommandList.CommandListImmediate._48_8_ = puVar6;
      GRHICommandList.CommandListImmediate._48_8_ = puVar6 + 1;
      *(undefined8 *)GRHICommandList.CommandListImmediate._48_8_ = 0;
      *puVar6 = &TRHILambdaCommand<FRHICommandListImmediate,`FOpenGLDynamicRHI::RHIReadSurfaceData'::`2'::<lambda_1>_>
                 ::_vftable_;
      puVar6[2] = &local_res10;
      puVar6[3] = param_4;
      puVar6[4] = this;
      puVar6[5] = param_2;
      puVar6[6] = param_3;
      puVar6[7] = L"TRHILambdaCommand";
    }
    else {
      `FOpenGLDynamicRHI::RHIReadSurfaceData'::__l2::<lambda_1>::operator()
                (&local_50,&GRHICommandList.CommandListImmediate);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      if (StatPtr_STAT_OGLRHIThread_Flush ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FOpenGLDynamicRHI::RHIReadSurfaceData(FRHITexture_*,UE::Math::TIntRect<int>,TArray<FLinearColor,TSizedDefaultAllocator<32>_>_&,FReadSurfaceDataFlags)_::_2_::FStat_STAT_OGLRHIThread_Flush>
           )0x0) {
        pFVar7 = ::FName::FName(&local_28,"STAT_OGLRHIThread_Flush");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OGLRHIThread_Flush,*pFVar7,
                   L"STAT_OGLRHIThread_Flush","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                   true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
    FVar8 = StatPtr_STAT_OGLRHIThread_Flush;
    if (StatPtr_STAT_OGLRHIThread_Flush ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FOpenGLDynamicRHI::RHIReadSurfaceData(FRHITexture_*,UE::Math::TIntRect<int>,TArray<FLinearColor,TSizedDefaultAllocator<32>_>_&,FReadSurfaceDataFlags)_::_2_::FStat_STAT_OGLRHIThread_Flush>
         )0x0) {
      pFVar7 = ::FName::FName(&local_20,"STAT_OGLRHIThread_Flush");
      FVar8 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FOpenGLDynamicRHI::RHIReadSurfaceData(FRHITexture_*,UE::Math::TIntRect<int>,TArray<FLinearColor,TSizedDefaultAllocator<32>_>_&,FReadSurfaceDataFlags)_::_2_::FStat_STAT_OGLRHIThread_Flush>
               )FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OGLRHIThread_Flush,*pFVar7,
                           L"STAT_OGLRHIThread_Flush","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                           true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar2 = *(FName *)FVar8;
    bVar5 = false;
    bVar4 = false;
    local_78.ComparisonIndex.Value = 0;
    local_78.Number = 0;
    FVar9 = FVar2.ComparisonIndex.Value;
    uVar12 = FVar2.Number;
    if ((FVar9.Value == 0) && (uVar12 == 0)) {
      FRHICommandListImmediate::ImmediateFlush
                (&GRHICommandList.CommandListImmediate,FlushRHIThread,None);
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_88[0].Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_88[0]._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
        bVar5 = false;
        bVar4 = true;
        if (-1 < CpuChannel->Enabled) {
          local_80.ComparisonIndex.Value = FVar9.Value;
          local_80.Number = uVar12;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_80,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLRenderTarget.cpp"
                     ,0x326);
          bVar5 = true;
          bVar4 = true;
        }
      }
      bVar13 = FThreadStats::bPrimaryEnable != false;
      FVar10 = local_78;
      if (bVar13) {
        local_80.ComparisonIndex.Value = FVar9.Value;
        local_80.Number = uVar12;
        local_78 = FVar2;
        FThreadStats::AddMessage(FVar2,CycleScopeStart);
        FVar10 = FVar2;
        FVar11.Value = local_78.ComparisonIndex.Value;
      }
      FRHICommandListImmediate::ImmediateFlush
                (&GRHICommandList.CommandListImmediate,FlushRHIThread,None);
      if (bVar4) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar5) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar13) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
          local_60.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
          local_60.NameAndInfo.Index.Value = FVar11.Value;
          QueryPerformanceCounter(&local_68);
          local_60.StatData.Pad[4] = '\0';
          local_60.StatData.Pad[5] = '\0';
          local_60.StatData.Pad[6] = '\0';
          local_60.StatData.Pad[7] = '\0';
          local_60.StatData.Pad[0] = local_68.s.LowPart._0_1_;
          local_60.StatData.Pad[1] = local_68.s.LowPart._1_1_;
          local_60.StatData.Pad[2] = local_68.s.LowPart._2_1_;
          local_60.StatData.Pad[3] = local_68.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(this_00,&local_60);
          piVar1 = &this_00->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(this_00,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_00,false,false);
          }
        }
      }
    }
  }
  return;
}

// RHIReadSurfaceFloatData @ 145c21bd0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHIReadSurfaceFloatData
          (FOpenGLDynamicRHI *this,FRHITexture *param_1,TIntRect<int> *param_2,
          TArray<FFloat16Color,TSizedDefaultAllocator<32>_> *param_3,ECubeFace param_4,int param_5,
          int param_6)

{
  int *piVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FOpenGLDynamicRHI::RHIReadSurfaceFloatData(FRHITexture_*,UE::Math::TIntRect<int>,TArray<FFloat16Color,TSizedDefaultAllocator<32>_>_&,ECubeFace,int,int)_::_2_::FStat_STAT_OGLRHIThread_Flush>
  FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FColor_u_0 FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  uint uVar12;
  bool bVar13;
  FColor_u_0 local_res8;
  uint uStackX_c;
  FRHITexture *local_res10;
  FColor_u_0 local_res18;
  uint local_res1c;
  LARGE_INTEGER local_res20;
  FName local_98;
  FName local_90;
  FName local_88;
  FStatMessage local_78;
  int *local_68;
  FRHITexture **local_60;
  int *local_58;
  ECubeFace *local_50;
  FOpenGLDynamicRHI *local_48;
  TIntRect<int> *local_40;
  TArray<FFloat16Color,TSizedDefaultAllocator<32>_> *local_38;
  
  local_res10 = param_1;
  bVar5 = IsInRenderingThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x1594,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_68 = &param_5;
  FVar11.Value = 0;
  local_60 = &local_res10;
  local_58 = &param_6;
  local_50 = &param_4;
  local_48 = this;
  local_40 = param_2;
  local_38 = param_3;
  if (((GRHICommandList.bLatchedBypass == false) ||
      ((GRHICommandList.CommandListImmediate._667_1_ & 0x20) == 0)) &&
     (GRHICommandList.CommandListImmediate._100_1_ == '\0')) {
    puVar6 = FMemStackBase::Alloc((FMemStackBase *)&GRHICommandList.CommandListImmediate,0x50,8);
    GRHICommandList.CommandListImmediate._96_4_ = GRHICommandList.CommandListImmediate._96_4_ + 1;
    *(undefined8 **)GRHICommandList.CommandListImmediate._48_8_ = puVar6;
    GRHICommandList.CommandListImmediate._48_8_ = puVar6 + 1;
    *(undefined8 *)GRHICommandList.CommandListImmediate._48_8_ = 0;
    *puVar6 = &TRHILambdaCommand<FRHICommandListImmediate,`FOpenGLDynamicRHI::RHIReadSurfaceFloatData'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar6[2] = &param_5;
    puVar6[3] = &local_res10;
    puVar6[4] = &param_6;
    puVar6[5] = &param_4;
    puVar6[6] = this;
    puVar6[7] = param_2;
    puVar6[8] = param_3;
    puVar6[9] = L"TRHILambdaCommand";
  }
  else {
    `FOpenGLDynamicRHI::RHIReadSurfaceFloatData'::__l2::<lambda_1>::operator()
              (&local_68,&GRHICommandList.CommandListImmediate);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_OGLRHIThread_Flush ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FOpenGLDynamicRHI::RHIReadSurfaceFloatData(FRHITexture_*,UE::Math::TIntRect<int>,TArray<FFloat16Color,TSizedDefaultAllocator<32>_>_&,ECubeFace,int,int)_::_2_::FStat_STAT_OGLRHIThread_Flush>
         )0x0) {
      pFVar7 = ::FName::FName(&local_98,"STAT_OGLRHIThread_Flush");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OGLRHIThread_Flush,*pFVar7,
                 L"STAT_OGLRHIThread_Flush","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,
                 ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar8 = StatPtr_STAT_OGLRHIThread_Flush;
  if (StatPtr_STAT_OGLRHIThread_Flush ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FOpenGLDynamicRHI::RHIReadSurfaceFloatData(FRHITexture_*,UE::Math::TIntRect<int>,TArray<FFloat16Color,TSizedDefaultAllocator<32>_>_&,ECubeFace,int,int)_::_2_::FStat_STAT_OGLRHIThread_Flush>
       )0x0) {
    pFVar7 = ::FName::FName(&local_90,"STAT_OGLRHIThread_Flush");
    FVar8 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FOpenGLDynamicRHI::RHIReadSurfaceFloatData(FRHITexture_*,UE::Math::TIntRect<int>,TArray<FFloat16Color,TSizedDefaultAllocator<32>_>_&,ECubeFace,int,int)_::_2_::FStat_STAT_OGLRHIThread_Flush>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OGLRHIThread_Flush,*pFVar7,
                         L"STAT_OGLRHIThread_Flush","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                         true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar2 = *(FName *)FVar8;
  bVar5 = false;
  bVar4 = false;
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  FVar9.Bits = (uint)FVar2.ComparisonIndex.Value;
  uVar12 = FVar2.Number;
  if ((FVar9.Bits == 0) && (uVar12 == 0)) {
    FRHICommandListImmediate::ImmediateFlush
              (&GRHICommandList.CommandListImmediate,FlushRHIThread,None);
    return;
  }
  if (GCycleStatsShouldEmitNamedEvents != 0) {
    local_res8.Bits = 0;
    FGenericPlatformMisc::BeginNamedEvent
              ((FColor *)&local_res8._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
    bVar5 = false;
    bVar4 = true;
    if (-1 < CpuChannel->Enabled) {
      local_res18.Bits = FVar9.Bits;
      local_res1c = uVar12;
      FCpuProfilerTrace::OutputBeginDynamicEventWithId
                ((FName *)&local_res18._s_0,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLRenderTarget.cpp"
                 ,0x3a1);
      bVar5 = true;
      bVar4 = true;
    }
  }
  bVar13 = FThreadStats::bPrimaryEnable != false;
  FVar10 = local_88;
  if (bVar13) {
    local_res8.Bits = FVar9.Bits;
    uStackX_c = uVar12;
    local_88 = FVar2;
    FThreadStats::AddMessage(FVar2,CycleScopeStart);
    FVar10 = FVar2;
    FVar11.Value = local_88.ComparisonIndex.Value;
  }
  FRHICommandListImmediate::ImmediateFlush
            (&GRHICommandList.CommandListImmediate,FlushRHIThread,None);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar13) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_78.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_78.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_res20);
      local_78.StatData.Pad[4] = '\0';
      local_78.StatData.Pad[5] = '\0';
      local_78.StatData.Pad[6] = '\0';
      local_78.StatData.Pad[7] = '\0';
      local_78.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_78.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_78.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_78.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_78);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// RHIReleaseThreadOwnership @ 145c21fe0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOpenGLDynamicRHI::RHIReleaseThreadOwnership(FOpenGLDynamicRHI *this)

{
  code *pcVar1;
  bool bVar2;
  BOOL BVar3;
  HGLRC pHVar4;
  HDC pHVar5;
  
  pHVar4 = wglGetCurrentContext();
  if (pHVar4 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  pHVar5 = wglGetCurrentDC();
  if (pHVar5 != (HDC)0x0) {
    BVar3 = wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
    if (BVar3 == 0) {
      BVar3 = wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
      if (BVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\Windows\\WindowsOpenGLPlatform.cpp"
                           ,0x18,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
  }
  return;
}

// RHIReplaceResources @ 145c220b0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHIReplaceResources
          (FOpenGLDynamicRHI *this,FRHICommandListBase *param_1,
          TArray<FRHIResourceReplaceInfo,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FRHICommandBase *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined8 *local_res18 [2];
  FScriptContainerElement *local_28;
  int local_20;
  int local_1c;
  
  pFVar4 = (param_2->AllocatorInstance).Data;
  pFVar6 = (FScriptContainerElement *)0x0;
  (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = param_2->ArrayNum;
  iVar3 = param_2->ArrayMax;
  param_2->ArrayNum = 0;
  param_2->ArrayMax = 0;
  local_28 = pFVar4;
  local_20 = iVar2;
  local_1c = iVar3;
  if (((GRHICommandList.bLatchedBypass == false) || ((param_1->PersistentState).bImmediate == '\0'))
     && (param_1->bExecuting == false)) {
    pFVar5 = FMemStackBase::Alloc(&param_1->MemManager,0x28,8);
    param_1->NumCommands = param_1->NumCommands + 1;
    *param_1->CommandLink = pFVar5;
    param_1->CommandLink = &pFVar5->Next;
    pFVar5->Next = (FRHICommandBase *)0x0;
    pFVar5->_padding_ =
         (longlong)
         &TRHILambdaCommand<FRHICommandListBase,`FOpenGLDynamicRHI::RHIReplaceResources'::`2'::<lambda_1>_>
          ::_vftable_;
    pFVar5[1]._padding_ = (longlong)pFVar4;
    *(int *)&pFVar5[1].Next = iVar2;
    *(int *)((longlong)&pFVar5[1].Next + 4) = iVar3;
    pFVar5[2]._padding_ = (longlong)L"FOpenGLDynamicRHI::RHIReplaceResources";
  }
  else {
    `FOpenGLDynamicRHI::RHIReplaceResources'::__l2::<lambda_1>::operator()(&local_28,param_1);
    pFVar6 = local_28;
  }
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  FRHICommandListBase::RHIThreadFence(param_1,SUB81(local_res18,0));
  if (local_res18[0] != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_res18[0] + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (local_res18[0] != (undefined8 *)0x0)) {
      (**(code **)*local_res18[0])(local_res18[0],1);
    }
  }
  return;
}

// RHIResizeViewport @ 145c221c0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHIResizeViewport
          (FOpenGLDynamicRHI *this,FRHIViewport *param_1,uint param_2,uint param_3,bool param_4)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLViewport.cpp"
                       ,0x5e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FOpenGLViewport::Resize((FOpenGLViewport *)param_1,param_2,param_3,param_4);
  return;
}

// RHISetBlendFactor @ 145c22230

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall FOpenGLDynamicRHI::RHISetBlendFactor(FOpenGLDynamicRHI *this,FLinearColor *param_1)

{
  return;
}

// RHISetBlendState @ 145c22240

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHISetBlendState
          (FOpenGLDynamicRHI *this,FRHIBlendState *param_1,FLinearColor *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint *puVar3;
  HGLRC pHVar4;
  undefined8 *puVar5;
  longlong lVar6;
  uint *puVar7;
  
  pHVar4 = wglGetCurrentContext();
  if (pHVar4 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  lVar6 = 2;
  puVar2 = (undefined8 *)&param_1[3].field_0xc;
  puVar3 = &(this->PendingState).DepthStencilState.CCWStencilFail;
  do {
    puVar7 = puVar3;
    puVar5 = puVar2;
    uVar1 = puVar5[1];
    *(undefined8 *)puVar7 = *puVar5;
    *(undefined8 *)(puVar7 + 2) = uVar1;
    uVar1 = puVar5[3];
    *(undefined8 *)(puVar7 + 4) = puVar5[2];
    *(undefined8 *)(puVar7 + 6) = uVar1;
    uVar1 = puVar5[5];
    *(undefined8 *)(puVar7 + 8) = puVar5[4];
    *(undefined8 *)(puVar7 + 10) = uVar1;
    uVar1 = puVar5[7];
    *(undefined8 *)(puVar7 + 0xc) = puVar5[6];
    *(undefined8 *)(puVar7 + 0xe) = uVar1;
    uVar1 = puVar5[9];
    *(undefined8 *)(puVar7 + 0x10) = puVar5[8];
    *(undefined8 *)(puVar7 + 0x12) = uVar1;
    uVar1 = puVar5[0xb];
    *(undefined8 *)(puVar7 + 0x14) = puVar5[10];
    *(undefined8 *)(puVar7 + 0x16) = uVar1;
    uVar1 = puVar5[0xd];
    *(undefined8 *)(puVar7 + 0x18) = puVar5[0xc];
    *(undefined8 *)(puVar7 + 0x1a) = uVar1;
    uVar1 = puVar5[0xf];
    *(undefined8 *)(puVar7 + 0x1c) = puVar5[0xe];
    *(undefined8 *)(puVar7 + 0x1e) = uVar1;
    lVar6 = lVar6 + -1;
    puVar2 = puVar5 + 0x10;
    puVar3 = puVar7 + 0x20;
  } while (lVar6 != 0);
  uVar1 = puVar5[0x11];
  *(undefined8 *)(puVar7 + 0x20) = puVar5[0x10];
  *(undefined8 *)(puVar7 + 0x22) = uVar1;
  uVar1 = puVar5[0x13];
  *(undefined8 *)(puVar7 + 0x24) = puVar5[0x12];
  *(undefined8 *)(puVar7 + 0x26) = uVar1;
  puVar7[0x28] = *(undefined4 *)(puVar5 + 0x14);
  return;
}

// RHISetBoundShaderState @ 145c22360

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHISetBoundShaderState(FOpenGLDynamicRHI *this,FRHIBoundShaderState *param_1)

{
  FRHIResource *pFVar1;
  HGLRC pHVar2;
  ulonglong uVar3;
  
  pHVar2 = wglGetCurrentContext();
  if (pHVar2 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  pFVar1 = *(FRHIResource **)&(this->PendingState).Streams[0xf].Divisor;
  if (pFVar1 != (FRHIResource *)param_1) {
    *(FRHIBoundShaderState **)&(this->PendingState).Streams[0xf].Divisor = param_1;
    if (param_1 != (FRHIBoundShaderState *)0x0) {
      FRHIResource::AddRef((FRHIResource *)param_1);
    }
    if (pFVar1 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar1);
    }
  }
  if (GRHIGlobals.SupportsParallelRHIExecute != false) {
    EnterCriticalSection((LPCRITICAL_SECTION)&(this->BoundShaderStateHistory).field_0x13890);
  }
  uVar3 = (ulonglong)*(uint *)&(this->BoundShaderStateHistory).field_0x13888;
  pFVar1 = (FRHIResource *)
           ((TRefCountPtr<FRHISamplerState> *)(&this->PendingState + 1))[uVar3 + 5].Reference;
  if (pFVar1 != (FRHIResource *)param_1) {
    ((TRefCountPtr<FRHISamplerState> *)(&this->PendingState + 1))[uVar3 + 5].Reference =
         (FRHISamplerState *)param_1;
    if (param_1 != (FRHIBoundShaderState *)0x0) {
      FRHIResource::AddRef((FRHIResource *)param_1);
    }
    if (pFVar1 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar1);
    }
  }
  *(uint *)&(this->BoundShaderStateHistory).field_0x13888 =
       (*(int *)&(this->BoundShaderStateHistory).field_0x13888 + 1U) % 10000;
  if (GRHIGlobals.SupportsParallelRHIExecute != false) {
                    /* WARNING: Could not recover jumptable at 0x000145c22496. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)&(this->BoundShaderStateHistory).field_0x13890);
    return;
  }
  return;
}

// RHISetComputeShader @ 145c224b0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHISetComputeShader(FOpenGLDynamicRHI *this,FRHIComputeShader *param_1)

{
  FOpenGLLinkedProgram *this_00;
  <lambda_1> local_18;
  
  if (OpenGLConsoleVariables::bSkipCompute == 0) {
    this_00 = (this->PendingState).LinkedProgramAndDirtyFlag;
    if (this_00 != (FOpenGLLinkedProgram *)param_1) {
      (this->PendingState).LinkedProgramAndDirtyFlag = (FOpenGLLinkedProgram *)param_1;
      if (param_1 != (FRHIComputeShader *)0x0) {
        FRHIResource::AddRef((FRHIResource *)param_1);
      }
      if (this_00 != (FOpenGLLinkedProgram *)0x0) {
        FRHIResource::Release((FRHIResource *)this_00);
      }
    }
    local_18.__this = (FOpenGLDynamicRHI *)&this[-1].KickHint.Syncs.ArrayNum;
    if (param_1 != (FRHIComputeShader *)0x0) {
      local_18.ShaderFrequency = *(EShaderFrequency *)((longlong)&param_1->_padding_ + 4);
      UE::RHICore::
      ApplyStaticUniformBuffers<_FOpenGLDynamicRHI::ApplyStaticUniformBuffers<FRHIComputeShader>_::__l5::<lambda_1>_>
                ((FRHIShader *)param_1,
                 (TArray<FRHIUniformBuffer_*,TSizedDefaultAllocator<32>_> *)
                 &(this->ContextState).VertexStreams[0xf].Offset,&local_18);
    }
  }
  return;
}

// RHISetDepthBounds @ 145c22540

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHISetDepthBounds(FOpenGLDynamicRHI *this,float param_1,float param_2)

{
  if (glDepthBoundsEXT != (_func___cdecl_void_double_double *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145c2255a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*glDepthBoundsEXT)((double)param_1,(double)param_2);
    return;
  }
  return;
}

// RHISetDepthStencilState @ 145c22570

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHISetDepthStencilState
          (FOpenGLDynamicRHI *this,FRHIDepthStencilState *param_1,uint param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined3 uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  HGLRC pHVar8;
  
  pHVar8 = wglGetCurrentContext();
  if (pHVar8 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  uVar2 = *(undefined4 *)&param_1[1]._padding_;
  uVar3 = *(undefined4 *)((longlong)&param_1[1]._padding_ + 4);
  *(longlong *)((longlong)&(this->PendingState)._padding_ + 4) = param_1[1]._padding_;
  (this->PendingState).RasterizerState.CullMode = uVar2;
  (this->PendingState).RasterizerState.DepthBias = (float)uVar3;
  uVar4 = *(undefined1 *)((longlong)&param_1[1]._padding_ + 4);
  uVar5 = *(undefined3 *)((longlong)&param_1[1]._padding_ + 5);
  uVar1 = *(undefined8 *)&param_1[1].ActualDSMode;
  (this->PendingState).RasterizerState.SlopeScaleDepthBias =
       (float)*(undefined4 *)&param_1[1]._padding_;
  (this->PendingState).RasterizerState.DepthClipMode = uVar4;
  *(undefined3 *)&(this->PendingState).RasterizerState.field_0x11 = uVar5;
  (this->PendingState).DepthStencilState.bZEnable = (bool)(char)uVar1;
  (this->PendingState).DepthStencilState.bZWriteEnable = (bool)(char)((ulonglong)uVar1 >> 8);
  *(short *)&(this->PendingState).DepthStencilState.field_0x2 = (short)((ulonglong)uVar1 >> 0x10);
  (this->PendingState).DepthStencilState.ZFunc = (int)((ulonglong)uVar1 >> 0x20);
  uVar4 = *(undefined1 *)((longlong)&param_1[2]._padding_ + 1);
  uVar6 = *(undefined2 *)((longlong)&param_1[2]._padding_ + 2);
  uVar2 = *(undefined4 *)((longlong)&param_1[2]._padding_ + 4);
  uVar3 = *(undefined4 *)&param_1[2]._padding_;
  uVar7 = *(undefined4 *)((longlong)&param_1[2]._padding_ + 4);
  (this->PendingState).DepthStencilState.bStencilEnable = (bool)*(undefined1 *)&param_1[2]._padding_
  ;
  (this->PendingState).DepthStencilState.bTwoSidedStencilMode = (bool)uVar4;
  *(undefined2 *)&(this->PendingState).DepthStencilState.field_0xa = uVar6;
  (this->PendingState).DepthStencilState.StencilFunc = uVar2;
  (this->PendingState).DepthStencilState.StencilFail = uVar3;
  (this->PendingState).DepthStencilState.StencilZFail = uVar7;
  (this->PendingState).DepthStencilState.StencilPass = (uint)param_1[2]._padding_;
  (this->PendingState).DepthStencilState.CCWStencilFunc = param_2;
  return;
}

// RHISetExternalGPUTime @ 145c22640

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall FOpenGLDynamicRHI::RHISetExternalGPUTime(FOpenGLDynamicRHI *this,ulong64 param_1)

{
  TOptional<unsigned_int> *pTVar1;
  undefined1 local_18 [24];
  
  pTVar1 = &(this->Profiler).ExternalGPUTime;
  if ((TOptional<unsigned_int> *)local_18 != pTVar1) {
    pTVar1->TypedValue = (uint)param_1;
    (this->Profiler).ExternalGPUTime.bIsSet = true;
  }
  return;
}

// RHISetGraphicsPipelineState @ 145c22670

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHISetGraphicsPipelineState
          (FOpenGLDynamicRHI *this,FRHIGraphicsPipelineState *param_1,uint param_2,bool param_3)

{
  FRHIResource *this_00;
  FRHIResource *pFVar1;
  longlong lVar2;
  ulong64 uVar3;
  FRHIShader *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint *puVar9;
  bool bVar10;
  TRefCountPtr<FRHIBoundShaderState> TVar11;
  HGLRC pHVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  uint *puVar15;
  longlong lVar16;
  FRHIResource *local_res10;
  <lambda_1> local_58;
  <lambda_1> local_48;
  <lambda_1> local_38;
  
  if ((*(ushort *)((longlong)&param_1[6]._padding_ + 2) >> 0xc & 1) == 0) {
    TVar11 = RHICreateBoundShaderState_Internal
                       ((FOpenGLDynamicRHI *)&this[-1].KickHint.Syncs.ArrayNum,
                        (FRHIVertexDeclaration *)&local_res10,
                        (FRHIVertexShader *)param_1[1]._padding_,
                        (FRHIPixelShader *)param_1[1]._padding_,
                        (FRHIGeometryShader *)param_1[1]._padding_,SUB81(param_1[2]._padding_,0));
    this_00 = *(FRHIResource **)TVar11.Reference;
    pHVar12 = wglGetCurrentContext();
    if (pHVar12 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
      IsInRHIThread();
      IsInRenderingThread();
      IsInGameThread();
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    pFVar1 = *(FRHIResource **)&(this->PendingState).Streams[0xf].Divisor;
    if (pFVar1 != this_00) {
      *(FRHIResource **)&(this->PendingState).Streams[0xf].Divisor = this_00;
      if (this_00 != (FRHIResource *)0x0) {
        FRHIResource::AddRef(this_00);
      }
      if (pFVar1 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar1);
      }
    }
    if (GRHIGlobals.SupportsParallelRHIExecute != false) {
      EnterCriticalSection((LPCRITICAL_SECTION)&(this->BoundShaderStateHistory).field_0x13890);
    }
    uVar13 = (ulonglong)*(uint *)&(this->BoundShaderStateHistory).field_0x13888;
    pFVar1 = (FRHIResource *)
             ((TRefCountPtr<FRHISamplerState> *)(&this->PendingState + 1))[uVar13 + 5].Reference;
    if (pFVar1 != this_00) {
      ((TRefCountPtr<FRHISamplerState> *)(&this->PendingState + 1))[uVar13 + 5].Reference =
           (FRHISamplerState *)this_00;
      if (this_00 != (FRHIResource *)0x0) {
        FRHIResource::AddRef(this_00);
      }
      if (pFVar1 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar1);
      }
    }
    *(uint *)&(this->BoundShaderStateHistory).field_0x13888 =
         (*(int *)&(this->BoundShaderStateHistory).field_0x13888 + 1U) % 10000;
    if (GRHIGlobals.SupportsParallelRHIExecute != false) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&(this->BoundShaderStateHistory).field_0x13890);
    }
    if (local_res10 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res10);
    }
    lVar2 = *(longlong *)&param_1[2].DSMode;
    pHVar12 = wglGetCurrentContext();
    if (pHVar12 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
      IsInRHIThread();
      IsInRenderingThread();
      IsInGameThread();
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    uVar6 = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)((longlong)&(this->PendingState)._padding_ + 4) = *(undefined8 *)(lVar2 + 0x20);
    (this->PendingState).RasterizerState.CullMode = (int)uVar6;
    (this->PendingState).RasterizerState.DepthBias = (float)(int)((ulonglong)uVar6 >> 0x20);
    uVar6 = *(undefined8 *)(lVar2 + 0x30);
    uVar7 = *(undefined8 *)(lVar2 + 0x38);
    (this->PendingState).RasterizerState.SlopeScaleDepthBias = (float)(int)uVar6;
    (this->PendingState).RasterizerState.DepthClipMode = (char)((ulonglong)uVar6 >> 0x20);
    *(int3 *)&(this->PendingState).RasterizerState.field_0x11 = (int3)((ulonglong)uVar6 >> 0x28);
    (this->PendingState).DepthStencilState.bZEnable = (bool)(char)uVar7;
    (this->PendingState).DepthStencilState.bZWriteEnable = (bool)(char)((ulonglong)uVar7 >> 8);
    *(short *)&(this->PendingState).DepthStencilState.field_0x2 = (short)((ulonglong)uVar7 >> 0x10);
    (this->PendingState).DepthStencilState.ZFunc = (int)((ulonglong)uVar7 >> 0x20);
    uVar6 = *(undefined8 *)(lVar2 + 0x40);
    uVar7 = *(undefined8 *)(lVar2 + 0x48);
    (this->PendingState).DepthStencilState.bStencilEnable = (bool)(char)uVar6;
    (this->PendingState).DepthStencilState.bTwoSidedStencilMode =
         (bool)(char)((ulonglong)uVar6 >> 8);
    *(short *)&(this->PendingState).DepthStencilState.field_0xa = (short)((ulonglong)uVar6 >> 0x10);
    (this->PendingState).DepthStencilState.StencilFunc = (int)((ulonglong)uVar6 >> 0x20);
    (this->PendingState).DepthStencilState.StencilFail = (int)uVar7;
    (this->PendingState).DepthStencilState.StencilZFail = (int)((ulonglong)uVar7 >> 0x20);
    (this->PendingState).DepthStencilState.StencilPass = *(uint *)(lVar2 + 0x50);
    (this->PendingState).DepthStencilState.CCWStencilFunc = param_2;
    uVar3 = param_1[2].SortKey;
    pHVar12 = wglGetCurrentContext();
    if (pHVar12 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
      IsInRHIThread();
      IsInRenderingThread();
      IsInGameThread();
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    lVar2 = *(longlong *)(uVar3 + 0x20);
    (this->PendingState)._padding_ = *(longlong *)(uVar3 + 0x18);
    (this->PendingState)._padding_ = lVar2;
    *(undefined4 *)&(this->PendingState)._padding_ = *(undefined4 *)(uVar3 + 0x28);
    lVar2 = param_1[2]._padding_;
    pHVar12 = wglGetCurrentContext();
    if (pHVar12 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
      IsInRHIThread();
      IsInRenderingThread();
      IsInGameThread();
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    lVar16 = 2;
    puVar8 = (undefined8 *)(lVar2 + 0x54);
    puVar9 = &(this->PendingState).DepthStencilState.CCWStencilFail;
    do {
      puVar15 = puVar9;
      puVar14 = puVar8;
      uVar6 = puVar14[1];
      *(undefined8 *)puVar15 = *puVar14;
      *(undefined8 *)(puVar15 + 2) = uVar6;
      uVar6 = puVar14[3];
      *(undefined8 *)(puVar15 + 4) = puVar14[2];
      *(undefined8 *)(puVar15 + 6) = uVar6;
      uVar6 = puVar14[5];
      *(undefined8 *)(puVar15 + 8) = puVar14[4];
      *(undefined8 *)(puVar15 + 10) = uVar6;
      uVar6 = puVar14[7];
      *(undefined8 *)(puVar15 + 0xc) = puVar14[6];
      *(undefined8 *)(puVar15 + 0xe) = uVar6;
      uVar6 = puVar14[9];
      *(undefined8 *)(puVar15 + 0x10) = puVar14[8];
      *(undefined8 *)(puVar15 + 0x12) = uVar6;
      uVar6 = puVar14[0xb];
      *(undefined8 *)(puVar15 + 0x14) = puVar14[10];
      *(undefined8 *)(puVar15 + 0x16) = uVar6;
      uVar6 = puVar14[0xd];
      *(undefined8 *)(puVar15 + 0x18) = puVar14[0xc];
      *(undefined8 *)(puVar15 + 0x1a) = uVar6;
      uVar6 = puVar14[0xf];
      *(undefined8 *)(puVar15 + 0x1c) = puVar14[0xe];
      *(undefined8 *)(puVar15 + 0x1e) = uVar6;
      lVar16 = lVar16 + -1;
      puVar8 = puVar14 + 0x10;
      puVar9 = puVar15 + 0x20;
    } while (lVar16 != 0);
    uVar6 = puVar14[0x11];
    *(undefined8 *)(puVar15 + 0x20) = puVar14[0x10];
    *(undefined8 *)(puVar15 + 0x22) = uVar6;
    uVar6 = puVar14[0x13];
    *(undefined8 *)(puVar15 + 0x24) = puVar14[0x12];
    *(undefined8 *)(puVar15 + 0x26) = uVar6;
    puVar15[0x28] = *(undefined4 *)(puVar14 + 0x14);
    if ((GRHIGlobals.SupportsDepthBoundsTest != false) &&
       (glDepthBoundsEXT != (_func___cdecl_void_double_double *)0x0)) {
      if (*(char *)((longlong)&param_1[6]._padding_ + 5) == '\0') {
        (*glDisable)(0x8890);
      }
      else {
        (*glEnable)(0x8890);
      }
    }
    if (param_3) {
      pFVar4 = (FRHIShader *)param_1[1]._padding_;
      if (pFVar4 != (FRHIShader *)0x0) {
        local_58.ShaderFrequency = pFVar4->Frequency;
        local_58.__this = (FOpenGLDynamicRHI *)&this[-1].KickHint.Syncs.ArrayNum;
        UE::RHICore::
        ApplyStaticUniformBuffers<_FOpenGLDynamicRHI::ApplyStaticUniformBuffers<FRHIVertexShader>_::__l5::<lambda_1>_>
                  (pFVar4,(TArray<FRHIUniformBuffer_*,TSizedDefaultAllocator<32>_> *)
                          &(this->ContextState).VertexStreams[0xf].Offset,&local_58);
      }
      pFVar4 = (FRHIShader *)param_1[2]._padding_;
      if (pFVar4 != (FRHIShader *)0x0) {
        local_48.ShaderFrequency = pFVar4->Frequency;
        local_48.__this = (FOpenGLDynamicRHI *)&this[-1].KickHint.Syncs.ArrayNum;
        UE::RHICore::
        ApplyStaticUniformBuffers<_FOpenGLDynamicRHI::ApplyStaticUniformBuffers<FRHIGeometryShader>_::__l5::<lambda_1>_>
                  (pFVar4,(TArray<FRHIUniformBuffer_*,TSizedDefaultAllocator<32>_> *)
                          &(this->ContextState).VertexStreams[0xf].Offset,&local_48);
      }
      pFVar4 = (FRHIShader *)param_1[1]._padding_;
      local_38.__this = (FOpenGLDynamicRHI *)&this[-1].KickHint.Syncs.ArrayNum;
      if (pFVar4 != (FRHIShader *)0x0) {
        local_38.ShaderFrequency = pFVar4->Frequency;
        UE::RHICore::
        ApplyStaticUniformBuffers<_FOpenGLDynamicRHI::ApplyStaticUniformBuffers<FRHIPixelShader>_::__l5::<lambda_1>_>
                  (pFVar4,(TArray<FRHIUniformBuffer_*,TSizedDefaultAllocator<32>_> *)
                          &(this->ContextState).VertexStreams[0xf].Offset,&local_38);
      }
    }
    *(int *)((longlong)&(this->PointSamplerState).Reference + 4) = (int)param_1[3]._padding_;
  }
  else {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("!\"Enclosing block should never be called\"",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLCommands.cpp"
                        ,0xa61,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

// RHISetMultipleViewports @ 145c22b00

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHISetMultipleViewports
          (FOpenGLDynamicRHI *this,uint param_1,FViewportBounds *param_2)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  return;
}

// RHISetRasterizerState @ 145c22b20

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHISetRasterizerState(FOpenGLDynamicRHI *this,FRHIRasterizerState *param_1)

{
  longlong lVar1;
  HGLRC pHVar2;
  
  pHVar2 = wglGetCurrentContext();
  if (pHVar2 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  lVar1 = *(longlong *)&param_1[1].field_0x8;
  (this->PendingState)._padding_ = *(longlong *)(param_1 + 1);
  (this->PendingState)._padding_ = lVar1;
  *(undefined4 *)&(this->PendingState)._padding_ = *(undefined4 *)&param_1[1].field_0x10;
  return;
}

// RHISetScissorRect @ 145c22bd0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHISetScissorRect
          (FOpenGLDynamicRHI *this,bool param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  HGLRC pHVar1;
  
  pHVar1 = wglGetCurrentContext();
  if (pHVar1 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  *(uint *)&(this->PendingState).BlendState.RenderTargets.Elements[7].field_0x20 = param_4;
  *(uint *)&(this->PendingState).BlendState.bUseAlphaToCoverage = param_5;
  *(bool *)&(this->PendingState).BlendState.RenderTargets.Elements[7].AlphaBlendOperation = param_1;
  (this->PendingState).BlendState.RenderTargets.Elements[7].AlphaSourceBlendFactor = param_2;
  (this->PendingState).BlendState.RenderTargets.Elements[7].AlphaDestBlendFactor = param_3;
  return;
}

// RHISetShaderParameters @ 145c22ca0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHISetShaderParameters
          (FOpenGLDynamicRHI *this,FRHIComputeShader *param_1,
          TArrayView<unsigned_char_const_,int> *param_2,
          TArrayView<FRHIShaderParameter_const_,int> *param_3,
          TArrayView<FRHIShaderParameterResource_const_,int> *param_4,
          TArrayView<FRHIShaderParameterResource_const_,int> *param_5)

{
  HGLRC pHVar1;
  TArrayView<FRHIShaderParameterResource_const_,int> local_48;
  TArrayView<FRHIShaderParameter_const_,int> local_38;
  TArrayView<unsigned_char_const_,int> local_28;
  
  pHVar1 = wglGetCurrentContext();
  if (pHVar1 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  local_38.DataPtr = param_3->DataPtr;
  local_38.ArrayNum = param_3->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_3->field_0xc;
  local_48.DataPtr = param_4->DataPtr;
  local_48.ArrayNum = param_4->ArrayNum;
  local_48._12_4_ = *(undefined4 *)&param_4->field_0xc;
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  SetShaderParametersCommon
            ((FOpenGLDynamicRHI *)&this[-1].KickHint.Syncs.ArrayNum,SF_Compute,&local_28,&local_38,
             &local_48);
  return;
}

// RHISetShaderParameters @ 145c22d90

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHISetShaderParameters
          (FOpenGLDynamicRHI *this,FRHIGraphicsShader *param_1,
          TArrayView<unsigned_char_const_,int> *param_2,
          TArrayView<FRHIShaderParameter_const_,int> *param_3,
          TArrayView<FRHIShaderParameterResource_const_,int> *param_4,
          TArrayView<FRHIShaderParameterResource_const_,int> *param_5)

{
  EShaderFrequency EVar1;
  code *pcVar2;
  bool bVar3;
  HGLRC pHVar4;
  TArrayView<FRHIShaderParameterResource_const_,int> local_48;
  TArrayView<FRHIShaderParameter_const_,int> local_38;
  TArrayView<unsigned_char_const_,int> local_28;
  
  pHVar4 = wglGetCurrentContext();
  if (pHVar4 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  EVar1 = param_1->field_0x104;
  if (((EVar1 == SF_Vertex) || (EVar1 == SF_Pixel)) || (EVar1 == SF_Geometry)) {
    local_38.DataPtr = param_3->DataPtr;
    local_38.ArrayNum = param_3->ArrayNum;
    local_38._12_4_ = *(undefined4 *)&param_3->field_0xc;
    local_48.DataPtr = param_4->DataPtr;
    local_48.ArrayNum = param_4->ArrayNum;
    local_48._12_4_ = *(undefined4 *)&param_4->field_0xc;
    local_28.DataPtr = param_2->DataPtr;
    local_28.ArrayNum = param_2->ArrayNum;
    local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
    SetShaderParametersCommon
              ((FOpenGLDynamicRHI *)&this[-1].KickHint.Syncs.ArrayNum,EVar1,&local_28,&local_38,
               &local_48);
  }
  else {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLCommands.cpp"
                       ,0xbb,L"Undefined FRHIShader Type %d!");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// RHISetShaderUnbinds @ 145c22ee0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHISetShaderUnbinds
          (FOpenGLDynamicRHI *this,FRHIComputeShader *param_1,
          TArrayView<FRHIShaderParameterUnbind_const_,int> *param_2)

{
  HGLRC pHVar1;
  TArrayView<FRHIShaderParameterUnbind_const_,int> local_18;
  
  pHVar1 = wglGetCurrentContext();
  if (pHVar1 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  SetShaderUnbindsCommon
            ((FOpenGLDynamicRHI *)&this[-1].KickHint.Syncs.ArrayNum,SF_Compute,&local_18);
  return;
}

// RHISetShaderUnbinds @ 145c22f90

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHISetShaderUnbinds
          (FOpenGLDynamicRHI *this,FRHIGraphicsShader *param_1,
          TArrayView<FRHIShaderParameterUnbind_const_,int> *param_2)

{
  EShaderFrequency EVar1;
  code *pcVar2;
  bool bVar3;
  HGLRC pHVar4;
  TArrayView<FRHIShaderParameterUnbind_const_,int> local_28;
  
  pHVar4 = wglGetCurrentContext();
  if (pHVar4 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  EVar1 = param_1->field_0x104;
  if (((EVar1 == SF_Vertex) || (EVar1 == SF_Pixel)) || (EVar1 == SF_Geometry)) {
    local_28.DataPtr = param_2->DataPtr;
    local_28.ArrayNum = param_2->ArrayNum;
    local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
    SetShaderUnbindsCommon((FOpenGLDynamicRHI *)&this[-1].KickHint.Syncs.ArrayNum,EVar1,&local_28);
  }
  else {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLCommands.cpp"
                       ,0xbb,L"Undefined FRHIShader Type %d!");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// RHISetStaticUniformBuffer @ 145c23090

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHISetStaticUniformBuffer
          (FOpenGLDynamicRHI *this,uchar param_1,FRHIUniformBuffer *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if ((int)(this->ContextState).ActiveStreamMask <= (int)(uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(FRHIUniformBuffer **)
   (*(longlong *)&(this->ContextState).VertexStreams[0xf].Offset + (ulonglong)param_1 * 8) = param_2
  ;
  return;
}

// RHISetStaticUniformBuffers @ 145c23110

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHISetStaticUniformBuffers
          (FOpenGLDynamicRHI *this,FUniformBufferStaticBindings *param_1)

{
  byte bVar1;
  ForElementType<FRHIUniformBuffer_*> FVar2;
  undefined8 uVar3;
  ForElementType<unsigned_char> FVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  ForElementType<FRHIUniformBuffer_*> FVar8;
  ForElementType<unsigned_char> FVar9;
  uint uVar10;
  longlong lVar11;
  
  memset(*(void **)&(this->ContextState).VertexStreams[0xf].Offset,0,
         (longlong)(int)(this->ContextState).ActiveStreamMask << 3);
  uVar10 = 0;
  if (0 < (param_1->UniformBuffers).ArrayNum) {
    lVar11 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar10 < (param_1->UniformBuffers).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar2 = (param_1->UniformBuffers).AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<FRHIUniformBuffer_*>)&param_1->UniformBuffers;
      if (FVar2 != (ForElementType<FRHIUniformBuffer_*>)0x0) {
        FVar8 = FVar2;
      }
      uVar3 = *(undefined8 *)((longlong)FVar8 + lVar11 * 8);
      uVar7 = 0;
      if ((int)uVar10 < (param_1->Slots).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar4 = (param_1->Slots).AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<unsigned_char>)param_1;
      if (FVar4 != (ForElementType<unsigned_char>)0x0) {
        FVar9 = FVar4;
      }
      bVar1 = *(byte *)((longlong)FVar9 + lVar11);
      if (((int)(this->ContextState).ActiveStreamMask <= (int)(uint)bVar1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 1;
      *(undefined8 *)
       (*(longlong *)&(this->ContextState).VertexStreams[0xf].Offset + (ulonglong)bVar1 * 8) = uVar3
      ;
    } while ((int)uVar10 < (param_1->UniformBuffers).ArrayNum);
  }
  return;
}

// RHISetStencilRef @ 145c23290

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOpenGLDynamicRHI::RHISetStencilRef(FOpenGLDynamicRHI *this,uint param_1)

{
  HGLRC pHVar1;
  
  pHVar1 = wglGetCurrentContext();
  if (pHVar1 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  (this->PendingState).DepthStencilState.CCWStencilFunc = param_1;
  return;
}

// RHISetStreamSource @ 145c23330

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHISetStreamSource
          (FOpenGLDynamicRHI *this,uint param_1,FRHIBuffer *param_2,uint param_3)

{
  longlong lVar1;
  HGLRC pHVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)param_1;
  pHVar2 = wglGetCurrentContext();
  if (pHVar2 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  uVar3 = 0;
  if (param_2 == (FRHIBuffer *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(uint *)((longlong)&param_2[1]._padding_ + 4);
  }
  (this->PendingState).Streams[uVar5 - 2].Offset = uVar4;
  lVar1 = *(longlong *)&(this->PendingState).Streams[0xf].Divisor;
  if (lVar1 != 0) {
    uVar3 = (uint)*(ushort *)(lVar1 + 0x58 + uVar5 * 2);
  }
  (this->PendingState).Streams[uVar5 - 1].VertexBufferResource = param_3;
  (this->PendingState).Streams[uVar5 - 2].Divisor = uVar3;
  return;
}

// RHISetUniformBufferDynamicOffset @ 145c23420

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHISetUniformBufferDynamicOffset
          (FOpenGLDynamicRHI *this,uchar param_1,uint param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  HGLRC pHVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  
  pHVar5 = wglGetCurrentContext();
  if (pHVar5 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (((char)param_2 != '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsAligned(InOffset, 256u)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLCommands.cpp"
                         ,0x398,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar9 = *(longlong *)&(this->PendingState).Streams[0xf].Divisor;
  if ((*(longlong *)(lVar9 + 0x90) == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidRef(VertexShader)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLResources.h"
                         ,0x318,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar1 = *(longlong *)&(this->PendingState).Streams[0xf].Divisor;
  lVar9 = *(longlong *)(lVar9 + 0x90);
  if ((*(longlong *)(lVar1 + 0x98) == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidRef(PixelShader)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLResources.h"
                         ,0x31e,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar1 = *(longlong *)(lVar1 + 0x98);
  if (lVar9 != 0) {
    iVar6 = *(int *)(lVar9 + 0x88);
    uVar7 = 0;
    if (0 < iVar6) {
      lVar8 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar7 < iVar6) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (param_1 == *(uchar *)(lVar8 + *(longlong *)(lVar9 + 0x80))) {
          if (*(longlong *)
               ((longlong)((this->PendingState).BoundUniformBuffers + -1) +
               ((longlong)(int)uVar7 * 2 + 0x16) * 4) != 0) {
            *(uint *)((longlong)(this->PendingState).BoundUniformBuffers[5] +
                     (longlong)(int)uVar7 * 4 + 0x58) = param_2;
            *(undefined1 *)((this->PendingState).BoundUniformBuffersDynamicOffset[5] + 8) = 1;
          }
          break;
        }
        iVar6 = *(int *)(lVar9 + 0x88);
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 1;
      } while ((int)uVar7 < iVar6);
    }
  }
  if (lVar1 != 0) {
    iVar6 = *(int *)(lVar1 + 0x88);
    uVar7 = 0;
    if (0 < iVar6) {
      lVar9 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar7 < iVar6) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (param_1 == *(uchar *)(lVar9 + *(longlong *)(lVar1 + 0x80))) {
          if ((this->PendingState).BoundUniformBuffers[2][(longlong)(int)uVar7 + 0xb] ==
              (FRHIUniformBuffer *)0x0) {
            return;
          }
          (this->PendingState).BoundUniformBuffersDynamicOffset[2][(longlong)(int)uVar7 + 8] =
               param_2;
          *(undefined1 *)((longlong)(this->PendingState).BoundUniformBuffersDynamicOffset[5] + 0x23)
               = 1;
          return;
        }
        iVar6 = *(int *)(lVar1 + 0x88);
        uVar7 = uVar7 + 1;
        lVar9 = lVar9 + 1;
      } while ((int)uVar7 < iVar6);
    }
  }
  return;
}

// RHISetViewport @ 145c236b0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHISetViewport
          (FOpenGLDynamicRHI *this,float param_1,float param_2,float param_3,float param_4,
          float param_5,float param_6)

{
  FOpenGLBlendStateData *pFVar1;
  HGLRC pHVar2;
  
  pHVar2 = wglGetCurrentContext();
  if (pHVar2 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  *(float *)((longlong)&(this->PendingState).Scissor.field0_0x0 + 8) = param_3;
  (this->PendingState).Framebuffer = (uint)(longlong)param_1;
  *(float *)((longlong)&(this->PendingState).Scissor.field0_0x0 + 0xc) = param_6;
  *(int *)&(this->PendingState).bScissorEnabled = (int)(longlong)param_2;
  *(int *)&(this->PendingState).Scissor.field0_0x0 = (int)(longlong)param_4;
  *(int *)((longlong)&(this->PendingState).Scissor.field0_0x0 + 4) = (int)(longlong)param_5;
  pHVar2 = wglGetCurrentContext();
  if (pHVar2 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  pFVar1 = &(this->PendingState).BlendState;
  (pFVar1->RenderTargets).Elements[7].AlphaSourceBlendFactor = 0;
  (pFVar1->RenderTargets).Elements[7].AlphaDestBlendFactor = 0;
  *(undefined8 *)&(this->PendingState).BlendState.RenderTargets.Elements[7].field_0x20 = 0;
  *(undefined1 *)&(this->PendingState).BlendState.RenderTargets.Elements[7].AlphaBlendOperation = 0;
  return;
}

// RHISubmitCommandLists @ 145c23820

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHISubmitCommandLists
          (FOpenGLDynamicRHI *this,FRHISubmitCommandListsArgs *param_1)

{
  FOpenGLRenderQuery::PollQueryResults((FOpenGLRenderQuery *)0x0);
  FOpenGLGPUFence::PollFencesUntil((FBaseGraphTask *)0x0);
  return;
}

// RHISupportsFramebufferSRGBEnable @ 145c23840

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

bool __thiscall FOpenGLDynamicRHI::RHISupportsFramebufferSRGBEnable(FOpenGLDynamicRHI *this)

{
  return true;
}

// RHITick @ 145c23850

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall FOpenGLDynamicRHI::RHITick(FOpenGLDynamicRHI *this,float param_1)

{
  return;
}

// RHIUnlockStagingBuffer @ 145c23860

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHIUnlockStagingBuffer(FOpenGLDynamicRHI *this,FRHIStagingBuffer *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if ((glBufferStorage == (_func___cdecl_void_uint_long64_void_ptr_uint *)0x0) ||
     (OpenGLConsoleVariables::bUsePersistentMappingStagingBuffer == 0)) {
    bVar2 = IsInRenderingThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x1594,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (((GRHICommandList.bLatchedBypass != false) &&
        ((GRHICommandList.CommandListImmediate._667_1_ & 0x20) != 0)) ||
       (GRHICommandList.CommandListImmediate._100_1_ != '\0')) {
      (*glUnmapBuffer)(0x8f37);
      param_1[1]._padding_ = 0;
                    /* WARNING: Could not recover jumptable at 0x000145c238e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*glBindBuffer)(0x8f37,0);
      return;
    }
    puVar3 = FMemStackBase::Alloc((FMemStackBase *)&GRHICommandList.CommandListImmediate,0x20,8);
    GRHICommandList.CommandListImmediate._96_4_ = GRHICommandList.CommandListImmediate._96_4_ + 1;
    *(undefined8 **)GRHICommandList.CommandListImmediate._48_8_ = puVar3;
    GRHICommandList.CommandListImmediate._48_8_ = puVar3 + 1;
    *(undefined8 *)GRHICommandList.CommandListImmediate._48_8_ = 0;
    *puVar3 = &TRHILambdaCommand<FRHICommandListImmediate,`FOpenGLStagingBuffer::Unlock'::`5'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = L"TRHILambdaCommand";
    puVar3[2] = param_1;
  }
  return;
}

// RHIUnlockTexture @ 145c23950

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHIUnlockTexture
          (FOpenGLDynamicRHI *this,FRHICommandListImmediate *param_1,FRHILockTextureArgs *param_2)

{
  FTextureLockTracker *this_00;
  undefined4 *puVar1;
  uchar *puVar2;
  undefined8 uVar3;
  char cVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FOpenGLTexture *this_01;
  longlong lVar8;
  undefined8 *puVar9;
  ForElementType<FOpenGLDynamicRHI::FTextureLockTracker::FLockParams> FVar10;
  ForElementType<FOpenGLDynamicRHI::FTextureLockTracker::FLockParams> FVar11;
  uint uVar12;
  FOpenGLTexture *pFVar13;
  uint uVar14;
  FOpenGLTexture *pFVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  int iVar26;
  FOpenGLDynamicRHI *local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  FOpenGLTexture *local_80;
  uint uStack_78;
  uint uStack_74;
  
  bVar6 = IsInRenderingThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                         ,0x80b,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar13 = (FOpenGLTexture *)0x0;
  this_01 = pFVar13;
  if ((longlong *)param_2->_padding_ != (longlong *)0x0) {
    this_01 = (FOpenGLTexture *)(**(code **)(*(longlong *)param_2->_padding_ + 0x48))();
  }
  lVar8 = (**(code **)(this_01->_padding_ + 0x20))(this_01);
  uVar16 = *(uint *)((longlong)&param_2->_padding_ + 4);
  cVar4 = *(char *)(lVar8 + 0x32);
  if ((cVar4 == '\x03') || (cVar4 == '\x04')) {
    uVar16 = (int)param_2->_padding_ + uVar16 * 6;
  }
  else if (cVar4 != '\x01') {
    uVar16 = 0;
  }
  lVar8 = param_2->_padding_;
  this_00 = &this->GLLockTracker;
  iVar26 = (this->GLLockTracker).OutstandingLocks.ArrayNum;
  pFVar15 = pFVar13;
  if (0 < iVar26) {
    do {
      uVar12 = (uint)pFVar13;
      uVar14 = ~uVar12 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar12 < iVar26) {
        uVar7 = uVar14;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar11 = (this->GLLockTracker).OutstandingLocks.AllocatorInstance.SecondaryData;
      FVar10 = (ForElementType<FOpenGLDynamicRHI::FTextureLockTracker::FLockParams>)this_00;
      if (FVar11 != (ForElementType<FOpenGLDynamicRHI::FTextureLockTracker::FLockParams>)0x0) {
        FVar10 = FVar11;
      }
      if (((*(FOpenGLTexture **)((longlong)&pFVar15->_padding_ + (longlong)FVar10) == this_01) &&
          (*(int *)((longlong)&pFVar15->_padding_ + (longlong)FVar10) == (int)lVar8)) &&
         (*(uint *)((longlong)&pFVar15->_padding_ + (longlong)((longlong)FVar10 + 4)) == uVar16)) {
        uVar7 = 0;
        if ((int)uVar12 < (this->GLLockTracker).OutstandingLocks.ArrayNum) {
          uVar7 = uVar14;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar11 = (this->GLLockTracker).OutstandingLocks.AllocatorInstance.SecondaryData;
        lVar8 = (longlong)(int)uVar12;
        if (FVar11 == (ForElementType<FOpenGLDynamicRHI::FTextureLockTracker::FLockParams>)0x0) {
          FVar11 = (ForElementType<FOpenGLDynamicRHI::FTextureLockTracker::FLockParams>)this_00;
        }
        puVar1 = (undefined4 *)((longlong)FVar11 + lVar8 * 0x28);
        uVar18 = *puVar1;
        uVar19 = puVar1[1];
        uVar20 = puVar1[2];
        uVar21 = puVar1[3];
        puVar2 = (uchar *)((longlong)FVar11 + 0x10) + lVar8 * 0x28;
        uVar22 = *(undefined4 *)puVar2;
        uVar23 = *(undefined4 *)(puVar2 + 4);
        uVar24 = *(undefined4 *)(puVar2 + 8);
        uVar25 = *(undefined4 *)(puVar2 + 0xc);
        uVar3 = *(undefined8 *)((uchar *)((longlong)FVar11 + 0x20) + lVar8 * 0x28);
        iVar26 = (int)uVar3;
        uVar17 = (undefined4)((ulonglong)uVar3 >> 0x20);
        uVar7 = 0;
        if ((int)uVar12 < (this->GLLockTracker).OutstandingLocks.ArrayNum) {
          uVar7 = uVar14;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        TArray<FOpenGLDynamicRHI::FTextureLockTracker::FLockParams,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
        ::RemoveAtSwapImpl(&this_00->OutstandingLocks,uVar12);
        local_90 = uVar3;
        goto LAB_145c23b06;
      }
      iVar26 = (this->GLLockTracker).OutstandingLocks.ArrayNum;
      pFVar13 = (FOpenGLTexture *)(ulonglong)(uVar12 + 1);
      pFVar15 = (FOpenGLTexture *)&pFVar15->_padding_;
    } while ((int)(uVar12 + 1) < iVar26);
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Mismatched RHI buffer locks.\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLDrv.h"
                     ,0x276,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar26 = 1;
  local_a0 = 0;
  local_90 = CONCAT44(local_90._4_4_,1);
  uVar18 = 0;
  uVar19 = 0;
  uVar20 = 0;
  uVar21 = 0;
  uStack_98 = 0;
  local_a0._0_4_ = 0;
  local_a0._4_4_ = 0;
  uStack_98._0_4_ = 0;
  uStack_98._4_4_ = 0;
  uVar17 = local_90._4_4_;
  uVar22 = (undefined4)local_a0;
  uVar23 = local_a0._4_4_;
  uVar24 = (undefined4)uStack_98;
  uVar25 = uStack_98._4_4_;
LAB_145c23b06:
  uStack_78 = (uint)param_2->_padding_;
  if (iVar26 == 0) {
    if (((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) &&
       (param_1->field_0x64 == '\0')) {
      puVar9 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x30,8);
      *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
      **(undefined8 **)&param_1->field_0x30 = puVar9;
      *(undefined8 **)&param_1->field_0x30 = puVar9 + 1;
      puVar9[1] = 0;
      *puVar9 = &TRHILambdaCommand<FRHICommandListImmediate,`FOpenGLDynamicRHI::RHIUnlockTexture'::`12'::<lambda_1>_>
                 ::_vftable_;
      puVar9[2] = this;
      puVar9[3] = this_01;
      puVar9[5] = L"TRHILambdaCommand";
      puVar9[4] = CONCAT44(uVar16,uStack_78);
    }
    else {
      FOpenGLTexture::Unlock(this_01,uStack_78,uVar16);
    }
  }
  else {
    local_a0 = CONCAT44(uVar21,uVar20);
    uStack_98 = CONCAT44(uVar23,uVar22);
    local_90 = CONCAT44(uVar25,uVar24);
    uStack_88 = CONCAT44(uVar17,iVar26);
    local_b0 = this;
    uStack_a8 = uVar18;
    uStack_a4 = uVar19;
    local_80 = this_01;
    uStack_74 = uVar16;
    if (((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) &&
       (param_1->field_0x64 == '\0')) {
      puVar9 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x58,8);
      *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
      **(undefined8 **)&param_1->field_0x30 = puVar9;
      *(undefined8 **)&param_1->field_0x30 = puVar9 + 1;
      puVar9[2] = local_b0;
      puVar9[3] = CONCAT44(uStack_a4,uStack_a8);
      puVar9[1] = 0;
      *puVar9 = &TRHILambdaCommand<FRHICommandListImmediate,`FOpenGLDynamicRHI::RHIUnlockTexture'::`14'::<lambda_2>_>
                 ::_vftable_;
      puVar9[4] = local_a0;
      puVar9[5] = uStack_98;
      puVar9[10] = L"TRHILambdaCommand";
      puVar9[6] = local_90;
      puVar9[7] = uStack_88;
      puVar9[8] = local_80;
      puVar9[9] = CONCAT44(uStack_74,uStack_78);
    }
    else {
      `FOpenGLDynamicRHI::RHIUnlockTexture'::__l14::<lambda_2>::operator()(&local_b0,param_1);
    }
  }
  return;
}

// RHIUnmapStagingSurface @ 145c23d70

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHIUnmapStagingSurface(FOpenGLDynamicRHI *this,FRHITexture *param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLRenderTarget.cpp"
                     ,0x355,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// RHIUnmapStagingSurface_RenderThread @ 145c23db0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHIUnmapStagingSurface_RenderThread
          (FOpenGLDynamicRHI *this,FRHICommandListImmediate *param_1,FRHITexture *param_2,
          uint param_3)

{
  undefined8 *puVar1;
  FRHITexture *local_res18 [2];
  
  local_res18[0] = param_2;
  if (((!GRHICommandList.bLatchedBypass) || ((param_1->field_0x29b & 0x20) == 0)) &&
     (param_1->field_0x64 == '\0')) {
    puVar1 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar1;
    *(undefined8 **)&param_1->field_0x30 = puVar1 + 1;
    puVar1[1] = 0;
    *puVar1 = &TRHILambdaCommand<FRHICommandListImmediate,`FOpenGLDynamicRHI::RHIUnmapStagingSurface_RenderThread'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = L"TRHILambdaCommand";
    puVar1[2] = param_2;
    return;
  }
  `FOpenGLDynamicRHI::RHIUnmapStagingSurface_RenderThread'::__l2::<lambda_1>::operator()
            (local_res18,param_1);
  return;
}

// RHIUpdateAllocationTags @ 145c23e50

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHIUpdateAllocationTags
          (FOpenGLDynamicRHI *this,FRHICommandListBase *param_1,FRHIBuffer *param_2)

{
  return;
}

// RHIUpdateTexture2D @ 145c23e60

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHIUpdateTexture2D
          (FOpenGLDynamicRHI *this,FRHICommandListBase *param_1,FRHITexture *param_2,uint param_3,
          FUpdateTextureRegion2D *param_4,uint param_5,uchar *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  bool bVar12;
  longlong lVar13;
  FRHICommandBase *pFVar14;
  uchar *_Dst;
  ulonglong uVar15;
  uchar *_Src;
  FOpenGLDynamicRHI *local_88;
  FRHITexture *pFStack_80;
  uint local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  uint uStack_5c;
  uchar *local_58;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  
  lVar13 = (**(code **)(param_2->_padding_ + 0x20))(param_2);
  bVar3 = *(byte *)(lVar13 + 0x33);
  if ((param_4->Width % (uint)GPixelFormats[bVar3].BlockSizeX != 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("UpdateRegion.Width % FormatInfo.BlockSizeX == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                          ,0x654,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((param_4->Height % (uint)GPixelFormats[bVar3].BlockSizeY != 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("UpdateRegion.Height % FormatInfo.BlockSizeY == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                          ,0x655,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((param_4->DestX % (uint)GPixelFormats[bVar3].BlockSizeX != 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("UpdateRegion.DestX % FormatInfo.BlockSizeX == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                          ,0x656,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((param_4->DestY % (uint)GPixelFormats[bVar3].BlockSizeY != 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("UpdateRegion.DestY % FormatInfo.BlockSizeY == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                          ,0x657,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((param_4->SrcX % GPixelFormats[bVar3].BlockSizeX != 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("UpdateRegion.SrcX % FormatInfo.BlockSizeX == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                          ,0x658,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((param_4->SrcY % GPixelFormats[bVar3].BlockSizeY != 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("UpdateRegion.SrcY % FormatInfo.BlockSizeY == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                          ,0x659,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar4 = GPixelFormats[bVar3].BlockSizeX;
  uVar5 = GPixelFormats[bVar3].BlockSizeY;
  uVar6 = (ulonglong)((param_4->Width - 1) + uVar4) / (ulonglong)uVar4;
  uVar15 = (ulonglong)((param_4->Height - 1) + uVar5) / (ulonglong)uVar5;
  _Src = param_6 + (ulonglong)
                   (((param_4->SrcX + -1 + uVar4) / uVar4) * GPixelFormats[bVar3].BlockBytes) +
                   (ulonglong)(((param_4->SrcY + -1 + uVar5) / uVar5) * param_5);
  if (((GRHICommandList.bLatchedBypass == false) || ((param_1->PersistentState).bImmediate == '\0'))
     && (param_1->bExecuting == false)) {
    local_58 = FMemory::Malloc((longlong)GPixelFormats[bVar3].BlockBytes * uVar15 * uVar6,0);
    lVar13 = (longlong)GPixelFormats[bVar3].BlockBytes * uVar6;
    if ((int)uVar15 != 0) {
      _Dst = local_58;
      do {
        memcpy(_Dst,_Src,(ulonglong)(uint)((int)uVar6 * GPixelFormats[bVar3].BlockBytes));
        _Src = _Src + param_5;
        _Dst = _Dst + lVar13;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    param_5 = (uint)lVar13;
    uStack_50 = 1;
  }
  else {
    uStack_50 = 0;
    local_58 = _Src;
  }
  uVar1 = param_4->Width;
  uVar2 = param_4->Height;
  uVar8 = param_4->DestX;
  uVar9 = param_4->DestY;
  uVar10 = param_4->SrcX;
  uVar11 = param_4->SrcY;
  local_88 = this;
  pFStack_80 = param_2;
  local_78 = param_3;
  uStack_74 = uVar8;
  uStack_70 = uVar9;
  uStack_6c = uVar10;
  uStack_68 = uVar11;
  uStack_64 = uVar1;
  uStack_60 = uVar2;
  uStack_5c = param_5;
  if (((GRHICommandList.bLatchedBypass == false) || ((param_1->PersistentState).bImmediate == '\0'))
     && (param_1->bExecuting == false)) {
    pFVar14 = FMemStackBase::Alloc(&param_1->MemManager,0x58,8);
    param_1->NumCommands = param_1->NumCommands + 1;
    *param_1->CommandLink = pFVar14;
    param_1->CommandLink = &pFVar14->Next;
    pFVar14[1]._padding_ = (longlong)local_88;
    pFVar14[1].Next = (FRHICommandBase *)pFStack_80;
    pFVar14->Next = (FRHICommandBase *)0x0;
    pFVar14->_padding_ =
         (longlong)
         &TRHILambdaCommand<FRHICommandListBase,`FOpenGLDynamicRHI::RHIUpdateTexture2D'::`2'::<lambda_1>_>
          ::_vftable_;
    pFVar14[2]._padding_ = CONCAT44(uStack_74,local_78);
    pFVar14[2].Next = (FRHICommandBase *)CONCAT44(uStack_6c,uStack_70);
    pFVar14[5]._padding_ = (longlong)L"TRHILambdaCommand";
    pFVar14[3]._padding_ = CONCAT44(uStack_64,uStack_68);
    pFVar14[3].Next = (FRHICommandBase *)CONCAT44(uStack_5c,uStack_60);
    pFVar14[4]._padding_ = (longlong)local_58;
    pFVar14[4].Next = (FRHICommandBase *)CONCAT71(uStack_4f,uStack_50);
  }
  else {
    `FOpenGLDynamicRHI::RHIUpdateTexture2D'::__l2::<lambda_1>::operator()(&local_88,param_1);
  }
  return;
}

// RHIUpdateTexture3D @ 145c24290

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHIUpdateTexture3D
          (FOpenGLDynamicRHI *this,FRHICommandListBase *param_1,FRHITexture *param_2,uint param_3,
          FUpdateTextureRegion3D *param_4,uint param_5,uint param_6,uchar *param_7)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  FRHICommandBase *pFVar11;
  char cVar12;
  FOpenGLDynamicRHI *local_88;
  FRHITexture *pFStack_80;
  uint local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  FRHICommandBase *local_48;
  FRHICommandBase *pFStack_40;
  
  pFVar11 = (FRHICommandBase *)0x0;
  cVar12 = GRHICommandList.bLatchedBypass;
  if ((((bool)cVar12 == false) || ((param_1->PersistentState).bImmediate == '\0')) &&
     (param_1->bExecuting == false)) {
    uVar10 = param_6 * param_4->Depth;
    pFVar11 = FMemory::Malloc((ulonglong)uVar10,0x10);
    memcpy(pFVar11,param_7,(ulonglong)uVar10);
    cVar12 = GRHICommandList.bLatchedBypass;
    param_7 = (uchar *)pFVar11;
  }
  local_54 = param_4->Depth;
  local_4c = param_6;
  local_50 = param_5;
  uVar2 = param_4->DestX;
  uVar3 = param_4->DestY;
  uVar4 = param_4->DestZ;
  uVar5 = param_4->SrcX;
  uVar6 = param_4->SrcY;
  uVar7 = param_4->SrcZ;
  uVar8 = param_4->Width;
  uVar9 = param_4->Height;
  local_88 = this;
  pFStack_80 = param_2;
  local_78 = param_3;
  uStack_74 = uVar2;
  uStack_70 = uVar3;
  uStack_6c = uVar4;
  uStack_68 = uVar5;
  uStack_64 = uVar6;
  uStack_60 = uVar7;
  uStack_5c = uVar8;
  uStack_58 = uVar9;
  local_48 = (FRHICommandBase *)param_7;
  pFStack_40 = pFVar11;
  if (((cVar12 == '\0') || ((param_1->PersistentState).bImmediate == '\0')) &&
     (param_1->bExecuting == false)) {
    pFVar11 = FMemStackBase::Alloc(&param_1->MemManager,0x68,8);
    param_1->NumCommands = param_1->NumCommands + 1;
    *param_1->CommandLink = pFVar11;
    param_1->CommandLink = &pFVar11->Next;
    pFVar11[1]._padding_ = (longlong)local_88;
    pFVar11[1].Next = (FRHICommandBase *)pFStack_80;
    pFVar11->Next = (FRHICommandBase *)0x0;
    pFVar11->_padding_ =
         (longlong)
         &TRHILambdaCommand<FRHICommandListBase,`FOpenGLDynamicRHI::RHIUpdateTexture3D'::`2'::<lambda_1>_>
          ::_vftable_;
    pFVar11[2]._padding_ = CONCAT44(uStack_74,local_78);
    pFVar11[2].Next = (FRHICommandBase *)CONCAT44(uStack_6c,uStack_70);
    pFVar11[6]._padding_ = (longlong)L"TRHILambdaCommand";
    pFVar11[3]._padding_ = CONCAT44(uStack_64,uStack_68);
    pFVar11[3].Next = (FRHICommandBase *)CONCAT44(uStack_5c,uStack_60);
    pFVar11[4]._padding_ = CONCAT44(local_54,uStack_58);
    pFVar11[4].Next = (FRHICommandBase *)CONCAT44(local_4c,local_50);
    pFVar11[5]._padding_ = (longlong)local_48;
    pFVar11[5].Next = pFStack_40;
    return;
  }
  `FOpenGLDynamicRHI::RHIUpdateTexture3D'::__l2::<lambda_1>::operator()(&local_88,param_1);
  return;
}

// RHIUpdateUniformBuffer @ 145c24470

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHIUpdateUniformBuffer
          (FOpenGLDynamicRHI *this,FRHICommandListBase *param_1,FRHIUniformBuffer *param_2,
          void *param_3)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  int iVar3;
  FRHIUniformBufferLayout *pFVar4;
  FRDGResource *pFVar5;
  FScriptContainerElement *pFVar6;
  FRHIResource *this_00;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  FRHICommandBase *pFVar10;
  FRHIResource *pFVar11;
  byte bVar12;
  undefined8 *puVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  FRHICommandBase *local_78;
  undefined8 *local_70;
  FRHIUniformBuffer *local_68;
  FRHICommandBase *pFStack_60;
  int local_58;
  undefined4 uStack_54;
  FRHICommandBase *pFStack_50;
  uint local_48;
  uint uStack_44;
  
  pFVar4 = (param_2->Layout).Reference;
  ValidateShaderParameterResourcesRHI(param_3,pFVar4);
  iVar3 = (pFVar4->Resources).ArrayNum;
  lVar14 = (longlong)iVar3;
  uVar16 = pFVar4->ConstantBufferSize;
  if (((param_2->ResourceTable).ArrayNum != iVar3) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("UniformBuffer->GetResourceTable().Num() == NumResources",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLUniformBuffer.cpp"
                         ,0x32f,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar9 = GUniqueUniformBufferID + 1;
  GUniqueUniformBufferID = uVar9;
  if ((GRHICommandList.bLatchedBypass == false) || ((param_1->PersistentState).bImmediate == '\0'))
  {
    pFVar10 = (FRHICommandBase *)0x0;
    local_78 = (FRHICommandBase *)0x0;
    if (0 < iVar3) {
      pFVar10 = FMemStackBase::Alloc(&param_1->MemManager,lVar14 * 8,8);
      uVar17 = 0;
      if (0 < iVar3) {
        lVar18 = 0;
        do {
          uVar15 = 0;
          if ((int)uVar17 < (pFVar4->Resources).ArrayNum) {
            uVar15 = ~uVar17 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar15 = *(uint *)((pFVar4->Resources).AllocatorInstance.Data + lVar18 * 4);
          bVar12 = (byte)(uVar15 >> 0x10);
          if ((((bVar12 == 0x17) || ((byte)(bVar12 - 10) < 2)) || ((byte)(bVar12 - 0xf) < 2)) ||
             ((bVar12 == 0x16 || (bVar12 == 0x13)))) {
LAB_145c247e5:
            pFVar11 = (FRHIResource *)0x0;
          }
          else if ((bVar12 < 0x13) && ((0x67200U >> (uVar15 >> 0x10 & 0x1f) & 1) != 0)) {
            pFVar5 = *(FRDGResource **)((ulonglong)(uVar15 & 0xffff) + (longlong)param_3);
            if (pFVar5 == (FRDGResource *)0x0) goto LAB_145c247e5;
            FRDGResource::ValidateRHIAccess(pFVar5);
            pFVar11 = pFVar5->ResourceRHI;
          }
          else {
            pFVar11 = *(FRHIResource **)((ulonglong)(uVar15 & 0xffff) + (longlong)param_3);
          }
          (&pFVar10->_padding_)[lVar18] = (longlong)pFVar11;
          uVar17 = uVar17 + 1;
          lVar18 = lVar18 + 1;
        } while (lVar18 < lVar14);
      }
    }
    if (0 < (int)uVar16) {
      local_78 = FMemStackBase::Alloc(&param_1->MemManager,(longlong)(int)uVar16,0x10);
      memcpy(local_78,param_3,(longlong)(int)uVar16);
    }
    pFStack_50 = local_78;
    local_68 = param_2;
    pFStack_60 = pFVar10;
    local_58 = iVar3;
    local_48 = uVar16;
    uStack_44 = uVar9;
    if (((GRHICommandList.bLatchedBypass == false) ||
        ((param_1->PersistentState).bImmediate == '\0')) && (param_1->bExecuting == false)) {
      pFVar10 = FMemStackBase::Alloc(&param_1->MemManager,0x40,8);
      param_1->NumCommands = param_1->NumCommands + 1;
      *param_1->CommandLink = pFVar10;
      param_1->CommandLink = &pFVar10->Next;
      pFVar10[1]._padding_ = (longlong)local_68;
      pFVar10[1].Next = pFStack_60;
      pFVar10->Next = (FRHICommandBase *)0x0;
      pFVar10->_padding_ =
           (longlong)
           &TRHILambdaCommand<FRHICommandListBase,`FOpenGLDynamicRHI::RHIUpdateUniformBuffer'::`16'::<lambda_1>_>
            ::_vftable_;
      pFVar10[2]._padding_ = CONCAT44(uStack_54,local_58);
      pFVar10[2].Next = pFStack_50;
      pFVar10[3].Next = (FRHICommandBase *)L"TRHILambdaCommand";
      pFVar10[3]._padding_ = CONCAT44(uStack_44,local_48);
    }
    else {
      `FOpenGLDynamicRHI::RHIUpdateUniformBuffer'::__l16::<lambda_1>::operator()(&local_68,param_1);
    }
    FRHICommandListBase::RHIThreadFence(param_1,SUB81(&local_70,0));
    if (local_70 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_70 + 6);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar3 == 1) && (local_70 != (undefined8 *)0x0)) {
        (**(code **)*local_70)(local_70,1);
      }
    }
  }
  else {
    UpdateUniformBufferContents((FOpenGLUniformBuffer *)param_2,param_3,uVar16);
    uVar16 = 0;
    if (0 < iVar3) {
      lVar18 = 0;
      do {
        uVar15 = ~uVar16 >> 0x1f;
        uVar17 = 0;
        if ((int)uVar16 < (pFVar4->Resources).ArrayNum) {
          uVar17 = uVar15;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar2 = (pFVar4->Resources).AllocatorInstance.Data[lVar18 * 4 + 2];
        uVar17 = 0;
        if ((int)uVar16 < (pFVar4->Resources).ArrayNum) {
          uVar17 = uVar15;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (((byte)FVar2 < 0x18) && ((0xc98c00U >> ((byte)FVar2 & 0x1f) & 1) != 0)) {
LAB_145c245f2:
          pFVar11 = (FRHIResource *)0x0;
        }
        else {
          puVar13 = (undefined8 *)
                    ((ulonglong)*(ushort *)((pFVar4->Resources).AllocatorInstance.Data + lVar18 * 4)
                    + (longlong)param_3);
          if (((byte)FVar2 < 0x13) && ((0x67200U >> ((byte)FVar2 & 0x1f) & 1) != 0)) {
            pFVar5 = (FRDGResource *)*puVar13;
            if (pFVar5 == (FRDGResource *)0x0) goto LAB_145c245f2;
            FRDGResource::ValidateRHIAccess(pFVar5);
            pFVar11 = pFVar5->ResourceRHI;
          }
          else {
            pFVar11 = (FRHIResource *)*puVar13;
          }
        }
        uVar17 = 0;
        if ((int)uVar16 < (param_2->ResourceTable).ArrayNum) {
          uVar17 = uVar15;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar6 = (param_2->ResourceTable).AllocatorInstance.Data;
        this_00 = *(FRHIResource **)(pFVar6 + lVar18 * 8);
        if (this_00 != pFVar11) {
          *(FRHIResource **)(pFVar6 + lVar18 * 8) = pFVar11;
          if (pFVar11 != (FRHIResource *)0x0) {
            FRHIResource::AddRef(pFVar11);
          }
          if (this_00 != (FRHIResource *)0x0) {
            FRHIResource::Release(this_00);
          }
        }
        uVar16 = uVar16 + 1;
        lVar18 = lVar18 + 1;
      } while (lVar18 < lVar14);
    }
    *(uint *)&param_2[1]._padding_ = uVar9;
  }
  return;
}

// RHIWriteGPUFence @ 145c24960

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall FOpenGLDynamicRHI::RHIWriteGPUFence(FOpenGLDynamicRHI *this,FRHIGPUFence *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLQuery.cpp"
                     ,0x395,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// RHIWriteGPUFence_TopOfPipe @ 145c249a0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::RHIWriteGPUFence_TopOfPipe
          (FOpenGLDynamicRHI *this,FRHICommandListBase *param_1,FRHIGPUFence *param_2)

{
  FOpenGLGPUFence::WriteGPUFence_TopOfPipe((FOpenGLGPUFence *)param_2,param_1);
  return;
}

// ReadSurfaceDataRaw @ 145c256b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::ReadSurfaceDataRaw
          (FOpenGLDynamicRHI *this,FRHITexture *param_1,TIntRect<int> *param_2,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_3,FReadSurfaceDataFlags *param_4)

{
  int *piVar1;
  undefined1 (*pauVar2) [16];
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [12];
  bool bVar10;
  bool bVar11;
  undefined1 *puVar12;
  float fVar13;
  _func___cdecl_void_uint_uint_int_int *p_Var14;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  bool bVar18;
  FScriptContainerElement FVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  HGLRC pHVar24;
  FOpenGLTexture *pFVar25;
  longlong lVar26;
  float *pfVar27;
  undefined1 (*pauVar28) [16];
  uint uVar29;
  float *pfVar30;
  undefined1 (*pauVar31) [16];
  uint uVar32;
  FScriptContainerElement *pFVar33;
  ulonglong uVar34;
  uint uVar35;
  int iVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 in_XMM1 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar44;
  undefined1 auVar45 [16];
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined1 auStackY_1c8 [32];
  byte local_176;
  undefined4 local_170;
  uint local_164;
  uint local_160;
  uint local_15c;
  float local_158;
  float local_154;
  FReadSurfaceDataFlags *local_150;
  int *local_148;
  FOpenGLDynamicRHI *local_140;
  FOpenGLTexture *local_138;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_130;
  FLinearColor_u_0 local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_150 = param_4;
  local_140 = this;
  local_130 = param_3;
  pHVar24 = wglGetCurrentContext();
  if (pHVar24 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    param_4 = local_150;
  }
  if (param_1 == (FRHITexture *)0x0) {
    return;
  }
  pFVar25 = (FOpenGLTexture *)(**(code **)(param_1->_padding_ + 0x48))(param_1);
  if (pFVar25 == (FOpenGLTexture *)0x0) {
    return;
  }
  uVar32 = 0;
  uVar23 = 0;
  local_160 = 0;
  local_15c = 0;
  local_138 = pFVar25;
  lVar26 = (**(code **)(param_1->_padding_ + 0x20))(param_1);
  bVar18 = false;
  bVar11 = false;
  bVar10 = false;
  local_176 = 0;
  local_148 = (int *)((ulonglong)*(byte *)(lVar26 + 0x33) * 5);
  lVar26 = (**(code **)(param_1->_padding_ + 0x20))(param_1);
  switch(*(undefined1 *)(lVar26 + 0x33)) {
  case 1:
  case 9:
  case 10:
  case 0xd:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x15:
  case 0x16:
  case 0x1a:
    bVar11 = true;
  default:
    uVar22 = 0x8ce0;
    break;
  case 5:
  case 6:
  case 7:
  case 8:
  case 0x17:
  case 0x1e:
  case 0x1f:
  case 0x29:
  case 0x2a:
  case 0x2b:
    goto switchD_145c257dd_caseD_5;
  case 0xb:
    bVar18 = true;
    local_176 = 1;
  case 0xc:
  case 0x14:
    bVar10 = true;
    uVar22 = 0x8d00;
    if (bVar18) {
      uVar22 = 0x821a;
    }
  }
  if ((pFVar25->Attachment == 0x8ce0) || (pFVar25->Attachment == 0)) {
    local_158 = (float)(uint)param_4->MipLevel;
    local_164 = GetOpenGLFramebuffer
                          (local_140,1,&local_138,(uint *)0x0,(uint *)&local_158,
                           (FOpenGLTexture *)0x0,(FExclusiveDepthStencil)0x0,1);
    pFVar25 = local_138;
  }
  else {
    local_158 = (float)(uint)param_4->MipLevel;
    local_164 = GetOpenGLFramebuffer
                          (local_140,0,(FOpenGLTexture **)0x0,(uint *)0x0,(uint *)0x0,pFVar25,
                           (FExclusiveDepthStencil)0x0,1);
  }
  lVar26 = (**(code **)(param_1->_padding_ + 0x20))(param_1);
  if (1 < *(byte *)(lVar26 + 0x31)) {
    (*glGenFramebuffers)(1,&local_160);
    (*glBindFramebuffer)(0x8d40,local_160);
    (*glGenRenderbuffers)(1,&local_15c);
    (*glBindRenderbuffer)(0x8d41,local_15c);
    p_Var14 = glRenderbufferStorage;
    lVar26 = (**(code **)(pFVar25->_padding_ + 0x20))(pFVar25);
    iVar36 = *(int *)(lVar26 + 0x28);
    lVar26 = (**(code **)(pFVar25->_padding_ + 0x20))(pFVar25);
    (*p_Var14)(0x8d41,GOpenGLTextureFormats[0].InternalFormat[(longlong)local_148],
               *(int *)(lVar26 + 0x24),iVar36);
    (*glBindRenderbuffer)(0x8d41,0);
    (*glFramebufferRenderbuffer)(0x8d40,uVar22,0x8d41,local_15c);
    uVar20 = (*glCheckFramebufferStatus)(0x8d40);
    if (uVar20 != 0x8cd5) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`public:_static_void___cdecl_FOpenGLBase::CheckFrameBuffer(void)'::__l6::
                  LOG_Static,(FLogCategoryBase *)&LogOpenGL);
    }
    (*glBindFramebuffer)(0x8ca8,local_164);
    if (bVar10) {
      uVar20 = (uint)local_176 * 0x400 + 0x100;
    }
    else {
      uVar20 = 0x4000;
    }
    lVar26 = (**(code **)(pFVar25->_padding_ + 0x20))(pFVar25);
    iVar36 = *(int *)(lVar26 + 0x28);
    lVar26 = (**(code **)(pFVar25->_padding_ + 0x20))(pFVar25);
    iVar5 = *(int *)(lVar26 + 0x24);
    lVar26 = (**(code **)(pFVar25->_padding_ + 0x20))(pFVar25);
    iVar6 = *(int *)(lVar26 + 0x28);
    lVar26 = (**(code **)(pFVar25->_padding_ + 0x20))();
    (*glBlitFramebuffer)(0,0,*(int *)(lVar26 + 0x24),iVar6,0,0,iVar5,iVar36,uVar20,0x2600);
    local_164 = local_160;
  }
  pTVar15 = local_130;
  local_148 = (int *)((longlong)&param_2->field0_0x0 + 4);
  fVar37 = (float)(*(int *)((longlong)&param_2->field0_0x0 + 0xc) - *local_148);
  iVar36 = *(int *)((longlong)&param_2->field0_0x0 + 8) - *(int *)&param_2->field0_0x0;
  uVar35 = (int)fVar37 * iVar36;
  uVar20 = uVar35 * 4;
  local_154 = fVar37;
  if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
  }
  piVar1 = &local_130->ArrayNum;
  *piVar1 = 0;
  if (local_130->ArrayMax != uVar20) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar20,&local_130->AllocatorInstance,0,&local_130->ArrayMax);
  }
  uVar21 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (1,1,uVar20,&pTVar15->AllocatorInstance,&pTVar15->ArrayNum,&pTVar15->ArrayMax);
  uVar29 = uVar23;
  if ((int)uVar21 < *piVar1) {
    uVar29 = ~uVar21 >> 0x1f;
  }
  if ((uVar29 == 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar33 = (local_130->AllocatorInstance).Data + (int)uVar21;
  (*glBindFramebuffer)(0x8ca8,local_164);
  if (((bVar10) || (local_176 != 0)) || (local_164 != 0)) {
    (*glReadBuffer)(uVar22);
    (*glPixelStorei)(0xd05,1);
    local_148 = (int *)((longlong)&param_2->field0_0x0 + 4);
    if (!bVar10) goto LAB_145c25b43;
    pauVar28 = FMemory::Malloc((longlong)(int)uVar20,0);
    (*glReadPixels)(*(int *)&param_2->field0_0x0,*local_148,iVar36,(int)fVar37,0x1902,0x1406,
                    pauVar28);
    fVar13 = __real_3f800000;
    auVar41 = ZEXT416((uint)__real_7f7fffff);
    auVar42 = ZEXT416((uint)__real_00800000);
    fVar37 = __real_7f7fffff;
    fVar46 = __real_00800000;
    if (0 < (int)uVar35) {
      pauVar31 = pauVar28;
      uVar22 = uVar32;
      if (7 < uVar35) {
        uVar20 = uVar35 & 0x80000007;
        if ((int)uVar20 < 0) {
          uVar20 = (uVar20 - 1 | 0xfffffff8) + 1;
        }
        auVar41 = ___xmm_7f7fffff7f7fffff7f7fffff7f7fffff;
        auVar42 = ___xmm_00800000008000000080000000800000;
        auVar43 = ___xmm_7f7fffff7f7fffff7f7fffff7f7fffff;
        auVar45 = ___xmm_00800000008000000080000000800000;
        do {
          uVar22 = uVar22 + 8;
          auVar41 = minps(auVar41,*pauVar31);
          auVar42 = maxps(auVar42,*pauVar31);
          pauVar2 = pauVar31 + 1;
          pauVar31 = pauVar31 + 2;
          auVar43 = minps(auVar43,*pauVar2);
          auVar45 = maxps(auVar45,*pauVar2);
        } while ((int)uVar22 < (int)(uVar35 - uVar20));
        auVar42 = maxps(auVar42,auVar45);
        in_XMM1 = minps(auVar41,auVar43);
        auVar45._8_8_ = auVar42._8_8_;
        auVar45._0_8_ = auVar42._8_8_;
        auVar43._8_8_ = in_XMM1._8_8_;
        auVar43._0_8_ = in_XMM1._8_8_;
        auVar42 = maxps(auVar45,auVar42);
        auVar41 = minps(auVar43,in_XMM1);
        if (auVar42._0_4_ <= auVar42._4_4_) {
          auVar42._0_4_ = auVar42._4_4_;
        }
        fVar46 = auVar42._0_4_;
        if (auVar41._4_4_ <= auVar41._0_4_) {
          auVar41._0_4_ = auVar41._4_4_;
        }
        fVar37 = auVar41._0_4_;
        if ((int)uVar35 <= (int)uVar22) goto LAB_145c26017;
      }
      if (3 < (int)(uVar35 - uVar22)) {
        uVar20 = ((uVar35 - uVar22) - 4 >> 2) + 1;
        uVar34 = (ulonglong)uVar20;
        uVar22 = uVar22 + uVar20 * 4;
        do {
          fVar37 = *(float *)*pauVar31;
          fVar46 = fVar37;
          if (fVar37 <= auVar42._0_4_) {
            fVar46 = auVar42._0_4_;
          }
          if (auVar41._0_4_ <= fVar37) {
            fVar37 = auVar41._0_4_;
          }
          if (fVar46 <= *(float *)(*pauVar31 + 4)) {
            fVar46 = *(float *)(*pauVar31 + 4);
          }
          if (*(float *)(*pauVar31 + 4) <= fVar37) {
            fVar37 = *(float *)(*pauVar31 + 4);
          }
          if (fVar46 <= *(float *)(*pauVar31 + 8)) {
            fVar46 = *(float *)(*pauVar31 + 8);
          }
          if (*(float *)(*pauVar31 + 8) <= fVar37) {
            fVar37 = *(float *)(*pauVar31 + 8);
          }
          if (fVar46 <= *(float *)(*pauVar31 + 0xc)) {
            fVar46 = *(float *)(*pauVar31 + 0xc);
          }
          if (*(float *)(*pauVar31 + 0xc) <= fVar37) {
            fVar37 = *(float *)(*pauVar31 + 0xc);
          }
          pauVar31 = pauVar31 + 1;
          auVar42 = ZEXT416((uint)fVar46);
          auVar41 = ZEXT416((uint)fVar37);
          uVar34 = uVar34 - 1;
        } while (uVar34 != 0);
        if ((int)uVar35 <= (int)uVar22) goto LAB_145c26017;
      }
      lVar26 = (longlong)(int)(uVar35 - uVar22);
      do {
        fVar37 = *(float *)*pauVar31;
        pauVar31 = (undefined1 (*) [16])(*pauVar31 + 4);
        fVar46 = fVar37;
        if (fVar37 <= auVar42._0_4_) {
          fVar46 = auVar42._0_4_;
        }
        auVar9._4_8_ = 0;
        auVar9._0_4_ = fVar46;
        in_XMM1._12_4_ = 0;
        in_XMM1._0_12_ = auVar9;
        if (auVar41._0_4_ <= fVar37) {
          fVar37 = auVar41._0_4_;
        }
        auVar42._12_4_ = 0;
        auVar42._0_12_ = auVar9;
        auVar41 = ZEXT416((uint)fVar37);
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
    }
LAB_145c26017:
    fVar44 = 0.0;
    if (((fVar37 < 0.0) || (__real_3f800000 < fVar46)) &&
       (fVar46 = fVar46 - fVar37, 0 < (int)uVar35)) {
      pauVar31 = pauVar28;
      uVar22 = uVar23;
      if (0xf < uVar35) {
        uVar20 = uVar35 & 0x8000000f;
        if ((int)uVar20 < 0) {
          uVar20 = (uVar20 - 1 | 0xfffffff0) + 1;
        }
        auVar8._4_4_ = fVar46;
        auVar8._0_4_ = fVar46;
        auVar8._8_4_ = fVar46;
        auVar8._12_4_ = fVar46;
        auVar41 = rcpps(in_XMM1,auVar8);
        fVar47 = auVar41._0_4_;
        fVar48 = auVar41._4_4_;
        fVar51 = auVar41._8_4_;
        fVar52 = auVar41._12_4_;
        fVar47 = (fVar47 + fVar47) - fVar47 * fVar47 * fVar46;
        fVar48 = (fVar48 + fVar48) - fVar48 * fVar48 * fVar46;
        fVar51 = (fVar51 + fVar51) - fVar51 * fVar51 * fVar46;
        fVar52 = (fVar52 + fVar52) - fVar52 * fVar52 * fVar46;
        uVar22 = uVar32;
        do {
          fVar49 = *(float *)(*pauVar31 + 4);
          fVar50 = *(float *)(*pauVar31 + 8);
          fVar40 = *(float *)(*pauVar31 + 0xc);
          uVar22 = uVar22 + 0x10;
          *(float *)*pauVar31 = (*(float *)*pauVar31 - fVar37) * fVar47;
          *(float *)(*pauVar31 + 4) = (fVar49 - fVar37) * fVar48;
          *(float *)(*pauVar31 + 8) = (fVar50 - fVar37) * fVar51;
          *(float *)(*pauVar31 + 0xc) = (fVar40 - fVar37) * fVar52;
          fVar49 = *(float *)(pauVar31[1] + 4);
          fVar50 = *(float *)(pauVar31[1] + 8);
          fVar40 = *(float *)(pauVar31[1] + 0xc);
          *(float *)pauVar31[1] = (*(float *)pauVar31[1] - fVar37) * fVar47;
          *(float *)(pauVar31[1] + 4) = (fVar49 - fVar37) * fVar48;
          *(float *)(pauVar31[1] + 8) = (fVar50 - fVar37) * fVar51;
          *(float *)(pauVar31[1] + 0xc) = (fVar40 - fVar37) * fVar52;
          fVar49 = *(float *)(pauVar31[2] + 4);
          fVar50 = *(float *)(pauVar31[2] + 8);
          fVar40 = *(float *)(pauVar31[2] + 0xc);
          *(float *)pauVar31[2] = (*(float *)pauVar31[2] - fVar37) * fVar47;
          *(float *)(pauVar31[2] + 4) = (fVar49 - fVar37) * fVar48;
          *(float *)(pauVar31[2] + 8) = (fVar50 - fVar37) * fVar51;
          *(float *)(pauVar31[2] + 0xc) = (fVar40 - fVar37) * fVar52;
          fVar49 = *(float *)(pauVar31[3] + 4);
          fVar50 = *(float *)(pauVar31[3] + 8);
          fVar40 = *(float *)(pauVar31[3] + 0xc);
          *(float *)pauVar31[3] = (*(float *)pauVar31[3] - fVar37) * fVar47;
          *(float *)(pauVar31[3] + 4) = (fVar49 - fVar37) * fVar48;
          *(float *)(pauVar31[3] + 8) = (fVar50 - fVar37) * fVar51;
          *(float *)(pauVar31[3] + 0xc) = (fVar40 - fVar37) * fVar52;
          pauVar31 = pauVar31 + 4;
        } while ((int)uVar22 < (int)(uVar35 - uVar20));
        if ((int)uVar35 <= (int)uVar22) goto LAB_145c2616c;
      }
      if (3 < (int)(uVar35 - uVar22)) {
        uVar32 = ((uVar35 - uVar22) - 4 >> 2) + 1;
        fVar47 = fVar13 / fVar46;
        uVar34 = (ulonglong)uVar32;
        uVar22 = uVar22 + uVar32 * 4;
        do {
          fVar48 = *(float *)(*pauVar31 + 4);
          *(float *)*pauVar31 = (*(float *)*pauVar31 - fVar37) * fVar47;
          *(float *)(*pauVar31 + 4) = (fVar48 - fVar37) * fVar47;
          *(float *)(*pauVar31 + 8) = (*(float *)(*pauVar31 + 8) - fVar37) * fVar47;
          *(float *)(*pauVar31 + 0xc) = (*(float *)(*pauVar31 + 0xc) - fVar37) * fVar47;
          pauVar31 = pauVar31 + 1;
          uVar34 = uVar34 - 1;
        } while (uVar34 != 0);
      }
      if ((int)uVar22 < (int)uVar35) {
        lVar26 = (longlong)(int)(uVar35 - uVar22);
        do {
          *(float *)*pauVar31 = (*(float *)*pauVar31 - fVar37) * (fVar13 / fVar46);
          pauVar31 = (undefined1 (*) [16])(*pauVar31 + 4);
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
      }
    }
LAB_145c2616c:
    fVar46 = __real_437f0000;
    fVar37 = __real_3f000000;
    pauVar31 = pauVar28;
    if (3 < (int)uVar35) {
      uVar23 = (uVar35 - 4 >> 2) + 1;
      uVar34 = (ulonglong)uVar23;
      uVar23 = uVar23 * 4;
      do {
        fVar47 = *(float *)*pauVar31;
        if (*(float *)*pauVar31 <= 0.0) {
          fVar47 = fVar44;
        }
        if (fVar13 <= fVar47) {
          fVar47 = fVar13;
        }
        FVar19 = SUB41((int)(fVar47 * fVar46 + fVar37),0);
        *pFVar33 = FVar19;
        pFVar33[1] = FVar19;
        pFVar33[2] = FVar19;
        pFVar33[3] = (FScriptContainerElement)0xff;
        fVar47 = *(float *)(*pauVar31 + 4);
        if (*(float *)(*pauVar31 + 4) <= 0.0) {
          fVar47 = fVar44;
        }
        if (fVar13 <= fVar47) {
          fVar47 = fVar13;
        }
        FVar19 = SUB41((int)(fVar47 * fVar46 + fVar37),0);
        pFVar33[4] = FVar19;
        pFVar33[5] = FVar19;
        pFVar33[6] = FVar19;
        pFVar33[7] = (FScriptContainerElement)0xff;
        fVar47 = *(float *)(*pauVar31 + 8);
        if (*(float *)(*pauVar31 + 8) <= 0.0) {
          fVar47 = fVar44;
        }
        if (fVar13 <= fVar47) {
          fVar47 = fVar13;
        }
        FVar19 = SUB41((int)(fVar47 * fVar46 + fVar37),0);
        pFVar33[8] = FVar19;
        pFVar33[9] = FVar19;
        pFVar33[10] = FVar19;
        pFVar33[0xb] = (FScriptContainerElement)0xff;
        puVar12 = *pauVar31;
        pauVar31 = pauVar31 + 1;
        fVar47 = *(float *)(puVar12 + 0xc);
        if (*(float *)(puVar12 + 0xc) <= 0.0) {
          fVar47 = fVar44;
        }
        if (fVar13 <= fVar47) {
          fVar47 = fVar13;
        }
        FVar19 = SUB41((int)(fVar47 * fVar46 + fVar37),0);
        pFVar33[0xc] = FVar19;
        pFVar33[0xd] = FVar19;
        pFVar33[0xe] = FVar19;
        pFVar33[0xf] = (FScriptContainerElement)0xff;
        pFVar33 = pFVar33 + 0x10;
        uVar34 = uVar34 - 1;
      } while (uVar34 != 0);
    }
    if ((int)uVar23 < (int)uVar35) {
      uVar34 = (ulonglong)(uVar35 - uVar23);
      do {
        puVar12 = *pauVar31;
        pauVar31 = (undefined1 (*) [16])(*pauVar31 + 4);
        fVar47 = *(float *)puVar12;
        if (*(float *)puVar12 <= 0.0) {
          fVar47 = fVar44;
        }
        if (fVar13 <= fVar47) {
          fVar47 = fVar13;
        }
        FVar19 = SUB41((int)(fVar47 * fVar46 + fVar37),0);
        *pFVar33 = FVar19;
        pFVar33[1] = FVar19;
        pFVar33[2] = FVar19;
        pFVar33[3] = (FScriptContainerElement)0xff;
        pFVar33 = pFVar33 + 4;
        uVar34 = uVar34 - 1;
      } while (uVar34 != 0);
    }
    FMemory::Free(pauVar28);
  }
  else {
    (*glReadBuffer)(0x405);
    (*glPixelStorei)(0xd05,1);
LAB_145c25b43:
    if (bVar11) {
      bVar18 = local_150->bLinearToGamma;
      pfVar27 = FMemory::Malloc((longlong)(int)(uVar35 * 0x10),0);
      fVar37 = local_154;
      (*glReadPixels)(*(int *)&param_2->field0_0x0,*local_148,iVar36,(int)local_154,0x80e1,0x1406,
                      pfVar27);
      uVar22 = (*glGetError)();
      if (uVar22 != 0) {
        (*glReadPixels)(*(int *)&param_2->field0_0x0,*(int *)((longlong)&param_2->field0_0x0 + 4),
                        iVar36,(int)fVar37,0x1908,0x1406,pfVar27);
        uVar22 = (*glGetError)();
        if (uVar22 == 0) {
          for (pfVar30 = pfVar27; pfVar30 != pfVar27 + (int)uVar20; pfVar30 = pfVar30 + 4) {
            fVar37 = pfVar30[2];
            pfVar30[2] = *pfVar30;
            *pfVar30 = fVar37;
          }
        }
      }
      fVar13 = __real_437f0000;
      fVar46 = __real_3f000000;
      fVar37 = __real_3f800000;
      local_108 = 0;
      uStack_100 = 0;
      local_118 = ___xmm_3f8000003f8000003f8000003f800000;
      uStack_110 = _UNK_15076b1f8;
      pfVar30 = pfVar27;
      uVar16 = local_108;
      uVar17 = uStack_100;
      if (3 < (int)uVar20) {
        uVar22 = 2;
        do {
          fVar47 = *pfVar30;
          fVar44 = pfVar30[2];
          uVar32 = uVar32 + 4;
          fVar48 = fVar47;
          if ((float)local_108 <= fVar47) {
            fVar48 = (float)local_108;
          }
          if (fVar47 <= (float)local_118) {
            fVar47 = (float)local_118;
          }
                    /* WARNING (jumptable): Ignoring partial resolution of indirect */
                    /* WARNING: Ignoring partial resolution of indirect */
          local_108._0_4_ = fVar48;
                    /* WARNING (jumptable): Ignoring partial resolution of indirect */
                    /* WARNING: Ignoring partial resolution of indirect */
          local_118._0_4_ = fVar47;
          fVar48 = pfVar30[1];
          uVar34 = (ulonglong)(uVar22 - 1 & 3);
          fVar47 = *(float *)((longlong)&local_108 + uVar34 * 4);
          fVar51 = fVar48;
          if (fVar47 <= fVar48) {
            fVar51 = fVar47;
          }
          fVar47 = *(float *)((longlong)&local_118 + uVar34 * 4);
          if (fVar48 <= fVar47) {
            fVar48 = fVar47;
          }
          *(float *)((longlong)&local_108 + uVar34 * 4) = fVar51;
          *(float *)((longlong)&local_118 + uVar34 * 4) = fVar48;
          uVar34 = (ulonglong)(uVar22 & 3);
          fVar47 = *(float *)((longlong)&local_118 + uVar34 * 4);
          fVar48 = *(float *)((longlong)&local_108 + uVar34 * 4);
          fVar51 = fVar44;
          if (fVar48 <= fVar44) {
            fVar51 = fVar48;
          }
          if (fVar47 <= fVar44) {
            fVar47 = fVar44;
          }
          *(float *)((longlong)&local_108 + uVar34 * 4) = fVar51;
          *(float *)((longlong)&local_118 + uVar34 * 4) = fVar47;
          fVar47 = pfVar30[3];
          uVar34 = (ulonglong)(uVar22 + 1 & 3);
          pfVar30 = pfVar30 + 4;
          uVar22 = uVar22 + 4;
          fVar44 = *(float *)((longlong)&local_108 + uVar34 * 4);
          fVar48 = fVar47;
          if (fVar44 <= fVar47) {
            fVar48 = fVar44;
          }
          fVar44 = *(float *)((longlong)&local_118 + uVar34 * 4);
          if (fVar47 <= fVar44) {
            fVar47 = fVar44;
          }
          *(float *)((longlong)&local_108 + uVar34 * 4) = fVar48;
          *(float *)((longlong)&local_118 + uVar34 * 4) = fVar47;
          uVar16 = local_108;
          uVar17 = uStack_100;
        } while ((int)uVar32 < (int)(uVar20 - 3));
      }
      while (local_108 = uVar16, uStack_100 = uVar17, (int)uVar32 < (int)uVar20) {
        fVar47 = *pfVar30;
        uVar34 = (ulonglong)(uVar32 & 3);
        uVar32 = uVar32 + 1;
        fVar44 = *(float *)((longlong)&local_108 + uVar34 * 4);
        fVar48 = fVar47;
        if (fVar44 <= fVar47) {
          fVar48 = fVar44;
        }
        fVar44 = *(float *)((longlong)&local_118 + uVar34 * 4);
        if (fVar47 <= fVar44) {
          fVar47 = fVar44;
        }
        *(float *)((longlong)&local_108 + uVar34 * 4) = fVar48;
        *(float *)((longlong)&local_118 + uVar34 * 4) = fVar47;
        pfVar30 = pfVar30 + 1;
        uVar16 = local_108;
        uVar17 = uStack_100;
      }
      local_108._0_4_ = (float)uVar16;
      fVar44 = (float)local_108;
      local_118._4_4_ = (float)((ulonglong)local_118 >> 0x20);
      local_158 = (float)local_118 - (float)local_108;
      local_108._4_4_ = (float)((ulonglong)uVar16 >> 0x20);
      fVar47 = local_108._4_4_;
      fVar50 = local_118._4_4_ - local_108._4_4_;
      uStack_100._0_4_ = (float)uVar17;
      fVar48 = (float)uStack_100;
      uStack_110._4_4_ = (float)((ulonglong)uStack_110 >> 0x20);
      fVar49 = (float)uStack_110 - (float)uStack_100;
      uStack_100._4_4_ = (float)((ulonglong)uVar17 >> 0x20);
      fVar51 = uStack_100._4_4_;
      uVar32 = (int)(uVar20 + ((int)uVar20 >> 0x1f & 3U)) >> 2;
      fVar52 = uStack_110._4_4_ - uStack_100._4_4_;
      if (0 < (int)uVar32) {
        if (bVar18 == false) {
          fVar44 = 0.0;
          pfVar30 = pfVar27;
          if (3 < (int)uVar32) {
            local_154 = __real_3f800000 / local_158;
            uVar23 = (uVar32 - 4 >> 2) + 1;
            uVar34 = (ulonglong)uVar23;
            uVar23 = uVar23 * 4;
            fVar48 = __real_3f800000 / fVar50;
            fVar47 = __real_3f800000 / fVar49;
            fVar51 = __real_3f800000 / fVar52;
            do {
              fVar38 = (*pfVar30 - (float)local_108) * local_154;
              fVar40 = (pfVar30[1] - local_108._4_4_) * fVar48;
              if (fVar38 <= 0.0) {
                fVar38 = fVar44;
              }
              if (fVar40 <= 0.0) {
                fVar40 = fVar44;
              }
              if (fVar37 <= fVar38) {
                fVar38 = fVar37;
              }
              if (fVar37 <= fVar40) {
                fVar40 = fVar37;
              }
              fVar39 = (pfVar30[2] - (float)uStack_100) * fVar47;
              local_170._0_2_ =
                   CONCAT11((char)(int)(fVar40 * fVar13 + fVar46),
                            (char)(int)(fVar38 * fVar13 + fVar46));
              if (fVar39 <= 0.0) {
                fVar39 = fVar44;
              }
              fVar40 = (pfVar30[3] - uStack_100._4_4_) * fVar51;
              if (fVar37 <= fVar39) {
                fVar39 = fVar37;
              }
              if (fVar40 <= 0.0) {
                fVar40 = 0.0;
              }
              if (fVar37 <= fVar40) {
                fVar40 = fVar37;
              }
              local_170._0_3_ =
                   CONCAT12((char)(int)(fVar39 * fVar13 + fVar46),(undefined2)local_170);
              local_170 = CONCAT13((char)(int)(fVar40 * fVar13 + fVar46),(undefined3)local_170);
              *(undefined4 *)pFVar33 = local_170;
              fVar38 = (pfVar30[4] - (float)local_108) * local_154;
              fVar40 = (pfVar30[5] - local_108._4_4_) * fVar48;
              if (fVar38 <= 0.0) {
                fVar38 = fVar44;
              }
              if (fVar40 <= 0.0) {
                fVar40 = fVar44;
              }
              if (fVar37 <= fVar38) {
                fVar38 = fVar37;
              }
              if (fVar37 <= fVar40) {
                fVar40 = fVar37;
              }
              fVar39 = (pfVar30[6] - (float)uStack_100) * fVar47;
              local_170._0_2_ =
                   CONCAT11((char)(int)(fVar40 * fVar13 + fVar46),
                            (char)(int)(fVar38 * fVar13 + fVar46));
              if (fVar39 <= 0.0) {
                fVar39 = fVar44;
              }
              fVar40 = (pfVar30[7] - uStack_100._4_4_) * fVar51;
              if (fVar37 <= fVar39) {
                fVar39 = fVar37;
              }
              if (fVar40 <= 0.0) {
                fVar40 = fVar44;
              }
              if (fVar37 <= fVar40) {
                fVar40 = fVar37;
              }
              local_170._0_3_ =
                   CONCAT12((char)(int)(fVar39 * fVar13 + fVar46),(undefined2)local_170);
              local_170 = CONCAT13((char)(int)(fVar40 * fVar13 + fVar46),(undefined3)local_170);
              *(undefined4 *)(pFVar33 + 4) = local_170;
              fVar40 = (pfVar30[8] - (float)local_108) * local_154;
              if (fVar40 <= 0.0) {
                fVar40 = fVar44;
              }
              if (fVar37 <= fVar40) {
                fVar40 = fVar37;
              }
              fVar38 = (pfVar30[9] - local_108._4_4_) * fVar48;
              if (fVar38 <= 0.0) {
                fVar38 = fVar44;
              }
              if (fVar37 <= fVar38) {
                fVar38 = fVar37;
              }
              fVar39 = (pfVar30[10] - (float)uStack_100) * fVar47;
              if (fVar39 <= 0.0) {
                fVar39 = fVar44;
              }
              if (fVar37 <= fVar39) {
                fVar39 = fVar37;
              }
              local_170._0_2_ =
                   CONCAT11((char)(int)(fVar38 * fVar13 + fVar46),
                            (char)(int)(fVar40 * fVar13 + fVar46));
              fVar40 = (pfVar30[0xb] - uStack_100._4_4_) * fVar51;
              if (fVar40 <= 0.0) {
                fVar40 = fVar44;
              }
              if (fVar37 <= fVar40) {
                fVar40 = fVar37;
              }
              local_170._0_3_ =
                   CONCAT12((char)(int)(fVar39 * fVar13 + fVar46),(undefined2)local_170);
              local_170 = CONCAT13((char)(int)(fVar40 * fVar13 + fVar46),(undefined3)local_170);
              *(undefined4 *)(pFVar33 + 8) = local_170;
              fVar38 = (pfVar30[0xc] - (float)local_108) * local_154;
              fVar40 = (pfVar30[0xd] - local_108._4_4_) * fVar48;
              if (fVar38 <= 0.0) {
                fVar38 = fVar44;
              }
              if (fVar40 <= 0.0) {
                fVar40 = fVar44;
              }
              if (fVar37 <= fVar38) {
                fVar38 = fVar37;
              }
              if (fVar37 <= fVar40) {
                fVar40 = fVar37;
              }
              pfVar3 = pfVar30 + 0xe;
              pfVar4 = pfVar30 + 0xf;
              pfVar30 = pfVar30 + 0x10;
              fVar39 = (*pfVar3 - (float)uStack_100) * fVar47;
              local_170._0_2_ =
                   CONCAT11((char)(int)(fVar40 * fVar13 + fVar46),
                            (char)(int)(fVar38 * fVar13 + fVar46));
              if (fVar39 <= 0.0) {
                fVar39 = fVar44;
              }
              fVar40 = (*pfVar4 - uStack_100._4_4_) * fVar51;
              if (fVar40 <= 0.0) {
                fVar40 = fVar44;
              }
              if (fVar37 <= fVar39) {
                fVar39 = fVar37;
              }
              if (fVar37 <= fVar40) {
                fVar40 = fVar37;
              }
              local_170._0_3_ =
                   CONCAT12((char)(int)(fVar39 * fVar13 + fVar46),(undefined2)local_170);
              local_170 = CONCAT13((char)(int)(fVar40 * fVar13 + fVar46),(undefined3)local_170);
              *(undefined4 *)(pFVar33 + 0xc) = local_170;
              pFVar33 = pFVar33 + 0x10;
              uVar34 = uVar34 - 1;
            } while (uVar34 != 0);
            if ((int)uVar32 <= (int)uVar23) goto LAB_145c266a2;
          }
          pfVar30 = pfVar30 + 1;
          uVar34 = (ulonglong)(uVar32 - uVar23);
          do {
            fVar48 = (pfVar30[-1] - (float)local_108) * (fVar37 / local_158);
            fVar47 = (*pfVar30 - local_108._4_4_) * (fVar37 / fVar50);
            if (fVar48 <= 0.0) {
              fVar48 = fVar44;
            }
            if (fVar47 <= 0.0) {
              fVar47 = fVar44;
            }
            if (fVar37 <= fVar48) {
              fVar48 = fVar37;
            }
            if (fVar37 <= fVar47) {
              fVar47 = fVar37;
            }
            pfVar3 = pfVar30 + 1;
            pfVar4 = pfVar30 + 2;
            pfVar30 = pfVar30 + 4;
            fVar51 = (*pfVar3 - (float)uStack_100) * (fVar37 / fVar49);
            local_170._0_2_ =
                 CONCAT11((char)(int)(fVar47 * fVar13 + fVar46),
                          (char)(int)(fVar48 * fVar13 + fVar46));
            if (fVar51 <= 0.0) {
              fVar51 = fVar44;
            }
            fVar47 = (*pfVar4 - uStack_100._4_4_) * (fVar37 / fVar52);
            if (fVar47 <= 0.0) {
              fVar47 = fVar44;
            }
            if (fVar37 <= fVar51) {
              fVar51 = fVar37;
            }
            if (fVar37 <= fVar47) {
              fVar47 = fVar37;
            }
            local_170._0_3_ = CONCAT12((char)(int)(fVar51 * fVar13 + fVar46),(undefined2)local_170);
            local_170 = CONCAT13((char)(int)(fVar47 * fVar13 + fVar46),(undefined3)local_170);
            *(undefined4 *)pFVar33 = local_170;
            pFVar33 = pFVar33 + 4;
            uVar34 = uVar34 - 1;
          } while (uVar34 != 0);
        }
        else {
          pfVar30 = pfVar27 + 1;
          uVar34 = (ulonglong)uVar32;
          fVar49 = __real_3f800000 / fVar49;
          fVar50 = __real_3f800000 / fVar50;
          fVar37 = __real_3f800000 / local_158;
          fVar52 = __real_3f800000 / fVar52;
          do {
            local_128._s_0.R = (pfVar30[1] - fVar48) * fVar49;
            local_128._s_0.G = (*pfVar30 - fVar47) * fVar50;
            local_128._s_0.B = (pfVar30[-1] - fVar44) * fVar37;
            local_128._s_0.A = (pfVar30[2] - fVar51) * fVar52;
            FLinearColor::ToFColorSRGB((FLinearColor *)&local_128._s_0);
            local_170 = SUB84(piVar1,0);
            pfVar30 = pfVar30 + 4;
            *(undefined4 *)pFVar33 = local_170;
            pFVar33 = pFVar33 + 4;
            uVar34 = uVar34 - 1;
            uVar16 = local_108;
            uVar17 = uStack_100;
          } while (uVar34 != 0);
        }
      }
LAB_145c266a2:
      uStack_100 = uVar17;
      local_108 = uVar16;
      FMemory::Free(pfVar27);
    }
    else {
      (*glReadPixels)(*(int *)&param_2->field0_0x0,*(int *)((longlong)&param_2->field0_0x0 + 4),
                      iVar36,(int)fVar37,0x80e1,0x8367,pFVar33);
    }
  }
  (*glPixelStorei)(0xd05,4);
  if (local_160 != 0) {
    (*glBindFramebuffer)(0x8d40,0);
    (*glDeleteFramebuffers)(1,&local_160);
  }
  if (local_15c != 0) {
    (*glDeleteRenderbuffers)(1,&local_15c);
  }
  (local_140->ContextState).Framebuffer = 0xffffffff;
switchD_145c257dd_caseD_5:
  return;
}

// ResolveTexture @ 145c2abc0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::ResolveTexture
          (FOpenGLDynamicRHI *this,FOpenGLTexture *param_1,uint param_2,uint param_3)

{
  int *piVar1;
  byte bVar2;
  undefined1 uVar3;
  FScriptContainerElement *pFVar4;
  undefined8 *puVar5;
  code *pcVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  HGLRC pHVar11;
  FOpenGLTexture *pFVar12;
  longlong lVar13;
  undefined8 *puVar14;
  byte bVar15;
  int iVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  uint uVar22;
  FOpenGLTexture *local_res10;
  uint local_res18 [2];
  uint local_res20 [2];
  undefined8 *local_90;
  undefined8 local_88;
  int local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  int iStack_74;
  
  local_res10 = param_1;
  local_res18[0] = param_2;
  local_res20[0] = param_3;
  pHVar11 = wglGetCurrentContext();
  if (pHVar11 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  pFVar12 = (FOpenGLTexture *)0x0;
  if (*(char *)((longlong)&param_1->_padding_ + 2) == '\0') {
    pFVar12 = param_1;
  }
  if (pFVar12 != (FOpenGLTexture *)0x0) {
    lVar13 = (**(code **)(param_1->_padding_ + 0x20))(param_1);
    if (*(char *)(lVar13 + 0x31) != '\x01') {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Texture->GetTexture2D() || Texture->GetNumSamples() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                         ,0x33c,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
  }
  lVar13 = (**(code **)(param_1->_padding_ + 0x20))(param_1);
  bVar2 = *(byte *)(lVar13 + 0x33);
  uVar10 = GPixelFormats[bVar2].BlockSizeX;
  uVar20 = GPixelFormats[bVar2].BlockSizeY;
  iVar16 = GPixelFormats[bVar2].BlockBytes;
  lVar13 = (**(code **)(param_1->_padding_ + 0x20))(param_1);
  uVar22 = local_res18[0];
  bVar15 = (byte)local_res18[0];
  uVar18 = *(uint *)(lVar13 + 0x24) >> (bVar15 & 0x1f);
  uVar7 = uVar10;
  if (uVar10 < uVar18) {
    uVar7 = uVar18;
  }
  lVar13 = (**(code **)(param_1->_padding_ + 0x20))(param_1);
  bVar15 = bVar15 & 0x1f;
  uVar19 = *(uint *)(lVar13 + 0x28) >> bVar15;
  uVar18 = uVar20;
  if (uVar20 < uVar19) {
    uVar18 = uVar19;
  }
  iVar16 = (int)(CONCAT44(0 >> bVar15,(uVar18 - 1) + uVar20) / (ulonglong)uVar20) *
           (((uVar7 - 1) + uVar10) / uVar10) * iVar16;
  lVar13 = (**(code **)(param_1->_padding_ + 0x20))(param_1);
  lVar17 = 0x2c;
  if (*(char *)(lVar13 + 0x32) != '\x02') {
    lVar17 = 0x2e;
  }
  iVar9 = 1;
  if (param_1->bCubemap != '\0') {
    iVar9 = 6;
  }
  uVar20 = (uint)*(ushort *)(lVar17 + lVar13) * iVar9 * uVar22 + local_res20[0];
  uVar22 = ~uVar20 >> 0x1f;
  uVar10 = 0;
  if ((int)uVar20 < (param_1->PixelBuffers).ArrayNum) {
    uVar10 = uVar22;
  }
  if (uVar10 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar13 = (longlong)(int)uVar20;
  if (*(longlong *)((param_1->PixelBuffers).AllocatorInstance.Data + lVar13 * 8) == 0) {
    iStack_74 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
    uStack_7c = 0;
    uStack_78 = 2;
    local_80 = iVar16;
    puVar14 = ::operator_new(0x50);
    if (puVar14 == (undefined8 *)0x0) {
      puVar14 = (undefined8 *)0x0;
    }
    else {
      *(uint *)(puVar14 + 5) = *(uint *)(puVar14 + 5) & 0xfffffff8;
      *(undefined4 *)(puVar14 + 1) = 0;
      puVar14[2] = CONCAT44(uStack_7c,local_80);
      puVar14[3] = CONCAT44(iStack_74,uStack_78);
      puVar14[4] = 0x88ec;
      *(undefined8 *)((longlong)puVar14 + 0x2c) = 0;
      puVar14[7] = 0;
      puVar14[8] = 0;
      *(undefined4 *)(puVar14 + 9) = 0;
      local_88 = 0;
      *puVar14 = &___7__TOpenGLBuffer_VFOpenGLBasePixelBuffer____6B_;
      local_90 = puVar14;
      `TOpenGLBuffer<FOpenGLBasePixelBuffer>::TOpenGLBuffer<FOpenGLBasePixelBuffer>'::__l2::
      <lambda_1>::operator()(&local_90);
    }
    uVar10 = 0;
    if ((int)uVar20 < (param_1->PixelBuffers).ArrayNum) {
      uVar10 = uVar22;
    }
    if (uVar10 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar4 = (param_1->PixelBuffers).AllocatorInstance.Data;
    puVar5 = *(undefined8 **)(pFVar4 + lVar13 * 8);
    if (puVar5 != puVar14) {
      *(undefined8 **)(pFVar4 + lVar13 * 8) = puVar14;
      if (puVar14 != (undefined8 *)0x0) {
        *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
      }
      if (puVar5 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar5 + 1);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar5)(puVar5,1);
        }
      }
    }
  }
  uVar10 = 0;
  if ((int)uVar20 < (param_1->PixelBuffers).ArrayNum) {
    uVar10 = uVar22;
  }
  if (uVar10 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  puVar14 = *(undefined8 **)((param_1->PixelBuffers).AllocatorInstance.Data + lVar13 * 8);
  if (puVar14 != (undefined8 *)0x0) {
    *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
  }
  if (*(int *)(puVar14 + 2) != iVar16) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("PixelBuffer->GetSize() == MipBytes",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                       ,0x355,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if ((*(byte *)(puVar14 + 5) & 1) != 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!PixelBuffer->IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                       ,0x356,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  (**(code **)(param_1->_padding_ + 0x20))(param_1);
  lVar13 = (**(code **)(param_1->_padding_ + 0x20))(param_1);
  bVar15 = *(byte *)(lVar13 + 0x30);
  FOpenGLTexture::TryRestoreGLResource(param_1);
  uVar10 = param_1->Resource;
  uVar20 = param_1->Target;
  if (FOpenGLBase::MaxCombinedTextureImageUnits == -1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("MaxCombinedTextureImageUnits != -1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBase.h"
                       ,0x7c,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  uVar19 = FOpenGLBase::MaxCombinedTextureImageUnits - 1;
  uVar22 = 0;
  if ((int)uVar19 < (int)(this->ContextState)._padding_) {
    uVar22 = ~uVar19 >> 0x1f;
  }
  if (uVar22 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar13 = (this->ContextState)._padding_;
  if ((*(uint *)(lVar13 + 0x10 + (longlong)(int)uVar19 * 0x28) != uVar20) ||
     (*(uint *)(lVar13 + 0x14 + (longlong)(int)uVar19 * 0x28) != uVar10)) {
    CachedSetupTextureStageInner(this,uVar19,uVar20,uVar10,-1,(uint)bVar15);
  }
  (*glBindBuffer)(0x88eb,*(uint *)((longlong)puVar14 + 0x24));
  lVar13 = (**(code **)(param_1->_padding_ + 0x20))(param_1);
  if ((*(char *)(lVar13 + 0x32) != '\x01') && (*(char *)(lVar13 + 0x32) != '\x04')) {
    lVar13 = (**(code **)(param_1->_padding_ + 0x20))(param_1);
    if (*(char *)(lVar13 + 0x32) != '\x02') {
      if (GOpenGLTextureFormats[bVar2].bCompressed == false) {
        puVar21 = local_res20;
        if (param_1->bCubemap == '\0') {
          puVar21 = (uint *)0x0;
        }
        uVar10 = GetOpenGLFramebuffer
                           (this,1,&local_res10,puVar21,local_res18,(FOpenGLTexture *)0x0,
                            (FExclusiveDepthStencil)0x0,1);
        (*glBindFramebuffer)(0x8ca8,uVar10);
        (*glReadBuffer)(0x8ce0);
        (*glPixelStorei)(0xd05,1);
        (*glReadPixels)(0,0,uVar7,uVar18,GOpenGLTextureFormats[bVar2].Format,
                        GOpenGLTextureFormats[bVar2].Type,(void *)0x0);
        (*glPixelStorei)(0xd05,4);
        (this->ContextState).Framebuffer = 0xffffffff;
      }
      else if (param_1->bCubemap == '\0') {
        (*glGetCompressedTexImage)(param_1->Target,local_res18[0],(void *)0x0);
      }
      else {
        (*glGetCompressedTexImage)(local_res20[0] + 0x8515,local_res18[0],(void *)0x0);
      }
      goto LAB_145c2b1ec;
    }
  }
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                     ,0x368,L"");
  if (bVar8) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_145c2b1ec:
  (*glBindBuffer)(0x88eb,0);
  piVar1 = (int *)(puVar14 + 1);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*puVar14)(puVar14,1);
  }
  return;
}

// SetCustomPresent @ 145c2d030

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::SetCustomPresent(FOpenGLDynamicRHI *this,FRHICustomPresent *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FRHIResource *this_00;
  
  lpCriticalSection = &this->CustomPresentSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this_00 = (FRHIResource *)(this->CustomPresent).Reference;
    if (this_00 != (FRHIResource *)param_1) {
      (this->CustomPresent).Reference = param_1;
      if (param_1 != (FRHICustomPresent *)0x0) {
        FRHIResource::AddRef((FRHIResource *)param_1);
      }
      if (this_00 != (FRHIResource *)0x0) {
        FRHIResource::Release(this_00);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000145c2d0a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetPendingBlendStateForActiveRenderTargets @ 145c2e040

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::SetPendingBlendStateForActiveRenderTargets(FOpenGLDynamicRHI *this)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  HGLRC pHVar4;
  longlong lVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  bool *pbVar16;
  FOpenGLTexture **ppFVar17;
  uint uVar18;
  
  pHVar4 = wglGetCurrentContext();
  if (pHVar4 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  puVar11 = (uint *)&(this->ContextState).BlendState.RenderTargets.Elements[0].field_0x20;
  puVar13 = &(this->PendingState).BlendState.RenderTargets.Elements[0].ColorDestBlendFactor;
  bVar1 = false;
  puVar12 = &(this->PendingState).BlendState.RenderTargets.Elements[0].ColorSourceBlendFactor;
  bVar3 = false;
  ppFVar17 = (this->PendingState).RenderTargets;
  uVar18 = 0;
  pbVar16 = &(this->PendingState).BlendState.RenderTargets.Elements[0].bSeparateAlphaBlendEnable;
  do {
    if (*ppFVar17 != (FOpenGLTexture *)0x0) {
      if (uVar18 == 0) {
        if ((this->PendingState).NumRenderingSamples < 2) {
          lVar5 = (**(code **)((*ppFVar17)->_padding_ + 0x20))();
          bVar1 = false;
          if (*(byte *)(lVar5 + 0x31) < 2) goto LAB_145c2e127;
        }
        bVar1 = true;
      }
LAB_145c2e127:
      cVar2 = (char)puVar11[-0x5040];
      if ((char)puVar11[-8] != cVar2) {
        if (cVar2 == '\0') {
          (*glDisablei)(0xbe2,uVar18);
        }
        else {
          (*glEnablei)(0xbe2,uVar18);
        }
        cVar2 = (char)puVar11[-0x5040];
        *(char *)(puVar11 + -8) = cVar2;
      }
      if (cVar2 != '\0') {
        cVar2 = (char)puVar11[-0x503c];
        if (FOpenGLBase::bSupportsDrawBuffersBlend == false) {
          if (bVar3) {
            if (((((char)puVar11[-4] != cVar2) || (puVar11[-7] != puVar11[-0x503f])) ||
                (puVar11[-6] != puVar11[-0x503e])) ||
               ((puVar11[-5] != puVar11[-0x503d] ||
                ((cVar2 != '\0' &&
                 ((puVar11[-2] != puVar11[-0x503a] || (puVar11[-1] != puVar11[-0x5039])))))))) {
              UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
            }
          }
          else {
            uVar15 = puVar11[-0x503e];
            if (cVar2 == '\0') {
              if ((((puVar11[-6] != uVar15) || (puVar11[-5] != puVar11[-0x503d])) ||
                  (puVar11[-2] != puVar11[-0x503a])) || (puVar11[-1] != puVar11[-0x5039])) {
                (*glBlendFunc)(uVar15,puVar11[-0x503d]);
              }
              uVar15 = puVar11[-0x503f];
              if ((puVar11[-7] != uVar15) || (puVar11[-3] != uVar15)) {
                (*glBlendEquation)(uVar15);
              }
            }
            else {
              if (((puVar11[-6] != uVar15) || (puVar11[-5] != puVar11[-0x503d])) ||
                 ((puVar11[-2] != puVar11[-0x503a] || (puVar11[-1] != puVar11[-0x5039])))) {
                (*glBlendFuncSeparate)(uVar15,puVar11[-0x503d],puVar11[-0x503a],puVar11[-0x5039]);
              }
              if ((puVar11[-7] != puVar11[-0x503f]) || (puVar11[-3] != puVar11[-0x503b])) {
                (*glBlendEquationSeparate)(puVar11[-0x503f],puVar11[-0x503b]);
              }
            }
            puVar14 = puVar11 + -0x503f;
            puVar9 = &(this->ContextState).BlendState.RenderTargets.Elements[1].ColorBlendOperation;
            lVar5 = 2;
            do {
              *(bool *)(puVar9 + -6) = *pbVar16;
              puVar9[-9] = *puVar14;
              puVar9[-8] = puVar11[-0x503e];
              puVar9[-7] = puVar11[-0x503d];
              if ((char)puVar11[-0x503c] == '\0') {
                puVar10 = puVar11 + -0x503f;
                puVar9[-5] = puVar11[-0x503f];
                puVar6 = puVar11 + -0x503d;
                uVar15 = puVar11[-0x503e];
              }
              else {
                puVar10 = puVar11 + -0x503b;
                puVar9[-5] = *puVar10;
                puVar6 = puVar11 + -0x5039;
                uVar15 = puVar11[-0x503a];
              }
              puVar9[-4] = uVar15;
              puVar9[-3] = *puVar6;
              puVar9[-5] = *puVar10;
              *(bool *)(puVar9 + 3) = SUB41(puVar11[-0x503c],0);
              *puVar9 = *puVar14;
              puVar9[1] = puVar11[-0x503e];
              puVar9[2] = puVar11[-0x503d];
              if ((char)puVar11[-0x503c] == '\0') {
                puVar10 = puVar11 + -0x503f;
                puVar9[4] = puVar11[-0x503f];
                puVar6 = puVar11 + -0x503d;
                uVar15 = puVar11[-0x503e];
              }
              else {
                puVar10 = puVar11 + -0x503b;
                puVar9[4] = *puVar10;
                puVar6 = puVar11 + -0x5039;
                uVar15 = puVar11[-0x503a];
              }
              puVar9[5] = uVar15;
              puVar9[6] = *puVar6;
              puVar9[4] = *puVar10;
              *(char *)(puVar9 + 0xc) = (char)puVar11[-0x503c];
              puVar9[9] = *puVar14;
              puVar9[10] = puVar11[-0x503e];
              puVar9[0xb] = puVar11[-0x503d];
              if ((char)puVar11[-0x503c] == '\0') {
                puVar10 = puVar11 + -0x503f;
                puVar9[0xd] = puVar11[-0x503f];
                puVar6 = puVar11 + -0x503d;
                uVar15 = puVar11[-0x503e];
              }
              else {
                puVar10 = puVar11 + -0x503b;
                puVar9[0xd] = *puVar10;
                puVar6 = puVar11 + -0x5039;
                uVar15 = puVar11[-0x503a];
              }
              puVar9[0xe] = uVar15;
              puVar9[0xf] = *puVar6;
              puVar9[0xd] = *puVar10;
              *(char *)(puVar9 + 0x15) = (char)puVar11[-0x503c];
              puVar9[0x12] = *puVar14;
              puVar9[0x13] = puVar11[-0x503e];
              puVar9[0x14] = puVar11[-0x503d];
              if ((char)puVar11[-0x503c] == '\0') {
                puVar10 = puVar11 + -0x503f;
                puVar9[0x16] = puVar11[-0x503f];
                puVar6 = puVar11 + -0x503d;
                puVar7 = puVar11 + -0x503e;
              }
              else {
                puVar10 = puVar11 + -0x503b;
                puVar6 = puVar11 + -0x5039;
                puVar9[0x16] = *puVar10;
                puVar7 = puVar11 + -0x503a;
              }
              puVar9[0x17] = *puVar7;
              puVar9[0x18] = *puVar6;
              puVar9[0x16] = *puVar10;
              puVar9 = puVar9 + 0x24;
              lVar5 = lVar5 + -1;
            } while (lVar5 != 0);
            bVar3 = true;
          }
        }
        else {
          uVar15 = puVar11[-0x503e];
          if (cVar2 == '\0') {
            if (((puVar11[-6] != uVar15) || (puVar11[-5] != puVar11[-0x503d])) ||
               ((puVar11[-2] != puVar11[-0x503a] || (puVar11[-1] != puVar11[-0x5039])))) {
              (*glBlendFunci)(uVar18,uVar15,puVar11[-0x503d]);
            }
            if (puVar11[-7] != puVar11[-0x503f]) {
              (*glBlendEquationi)(uVar18,puVar11[-0x503f]);
            }
          }
          else {
            if ((((puVar11[-6] != uVar15) || (puVar11[-5] != puVar11[-0x503d])) ||
                (puVar11[-2] != puVar11[-0x503a])) || (puVar11[-1] != puVar11[-0x5039])) {
              (*glBlendFuncSeparatei)
                        (uVar18,uVar15,puVar11[-0x503d],puVar11[-0x503a],puVar11[-0x5039]);
            }
            if ((puVar11[-7] != puVar11[-0x503f]) || (puVar11[-3] != puVar11[-0x503b])) {
              (*glBlendEquationSeparatei)(uVar18,puVar11[-0x503f],puVar11[-0x503b]);
            }
          }
          *(char *)(puVar11 + -4) = (char)puVar11[-0x503c];
          puVar11[-7] = puVar11[-0x503f];
          puVar11[-6] = puVar11[-0x503e];
          puVar11[-5] = puVar11[-0x503d];
          if ((char)puVar11[-0x503c] == '\0') {
            puVar11[-2] = *puVar12;
            puVar11[-1] = *puVar13;
          }
          else {
            puVar11[-2] = puVar11[-0x503a];
            puVar11[-1] = puVar11[-0x5039];
          }
        }
      }
      uVar15 = *puVar11;
      *(char *)(puVar11 + -4) = (char)puVar11[-0x503c];
      uVar8 = puVar11[-0x5038];
      if (((((uVar8 ^ uVar15) & 1) == 0) && (((uVar8 ^ uVar15) & 2) == 0)) &&
         (((uVar8 ^ uVar15) & 4) == 0)) {
        if (((uVar8 ^ uVar15) & 8) == 0) goto LAB_145c2e675;
      }
      (*glColorMaski)(uVar18,(byte)uVar8 & 1,(byte)(uVar8 >> 1) & 1,(byte)(uVar8 >> 2) & 1,
                      (byte)(uVar8 >> 3) & 1);
      uVar15 = puVar11[-0x5038];
      uVar8 = (uVar15 ^ *puVar11) & 1 ^ *puVar11;
      uVar8 = (uVar15 ^ uVar8) & 2 ^ uVar8;
      uVar8 = (uVar15 ^ uVar8) & 4 ^ uVar8;
      *puVar11 = (uVar15 ^ uVar8) & 8 ^ uVar8;
    }
LAB_145c2e675:
    ppFVar17 = ppFVar17 + 1;
    puVar13 = puVar13 + 9;
    puVar12 = puVar12 + 9;
    uVar18 = uVar18 + 1;
    puVar11 = puVar11 + 9;
    pbVar16 = pbVar16 + 0x24;
    if (7 < uVar18) {
      if ((bVar1) && ((this->PendingState).BlendState.bUseAlphaToCoverage != false)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      (this->PendingState).bAlphaToCoverageEnabled = bVar3;
      if (bVar3 != (this->ContextState).bAlphaToCoverageEnabled) {
        if (bVar3 == false) {
          (*glDisable)(0x809e);
        }
        else {
          (*glEnable)(0x809e);
        }
        (this->ContextState).bAlphaToCoverageEnabled = (this->PendingState).bAlphaToCoverageEnabled;
      }
      return;
    }
  } while( true );
}

// SetRenderTargets @ 145c2e720

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::SetRenderTargets
          (FOpenGLDynamicRHI *this,uint param_1,FRHIRenderTargetView *param_2,
          FRHIDepthRenderTargetView *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  HGLRC pHVar5;
  FOpenGLTexture *pFVar6;
  longlong lVar7;
  byte bVar8;
  FExclusiveDepthStencil FVar9;
  int iVar10;
  uint *puVar11;
  FOpenGLTexture **ppFVar12;
  uint *puVar13;
  
  pHVar5 = wglGetCurrentContext();
  if (pHVar5 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if ((8 < param_1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumSimultaneousRenderTargets <= MaxSimultaneousRenderTargets",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLCommands.cpp"
                         ,0x660,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar10 = param_1 - 1;
  (this->PendingState).RenderTargets[0] = (FOpenGLTexture *)0x0;
  (this->PendingState).RenderTargets[1] = (FOpenGLTexture *)0x0;
  (this->PendingState).RenderTargets[2] = (FOpenGLTexture *)0x0;
  (this->PendingState).RenderTargets[3] = (FOpenGLTexture *)0x0;
  (this->PendingState).RenderTargets[4] = (FOpenGLTexture *)0x0;
  (this->PendingState).RenderTargets[5] = (FOpenGLTexture *)0x0;
  (this->PendingState).RenderTargets[6] = (FOpenGLTexture *)0x0;
  (this->PendingState).RenderTargets[7] = (FOpenGLTexture *)0x0;
  (this->PendingState).RenderTargetMipmapLevels[0] = 0;
  (this->PendingState).RenderTargetMipmapLevels[1] = 0;
  (this->PendingState).RenderTargetMipmapLevels[2] = 0;
  (this->PendingState).RenderTargetMipmapLevels[3] = 0;
  (this->PendingState).RenderTargetMipmapLevels[4] = 0;
  (this->PendingState).RenderTargetMipmapLevels[5] = 0;
  (this->PendingState).RenderTargetMipmapLevels[6] = 0;
  (this->PendingState).RenderTargetMipmapLevels[7] = 0;
  (this->PendingState).RenderTargetArrayIndex[0] = 0;
  (this->PendingState).RenderTargetArrayIndex[1] = 0;
  (this->PendingState).RenderTargetArrayIndex[2] = 0;
  (this->PendingState).RenderTargetArrayIndex[3] = 0;
  (this->PendingState).RenderTargetArrayIndex[4] = 0;
  (this->PendingState).RenderTargetArrayIndex[5] = 0;
  (this->PendingState).RenderTargetArrayIndex[6] = 0;
  (this->PendingState).RenderTargetArrayIndex[7] = 0;
  (this->PendingState).FirstNonzeroRenderTarget = -1;
  if (-1 < iVar10) {
    ppFVar12 = (this->PendingState).RenderTargets + iVar10;
    puVar13 = (this->PendingState).RenderTargetArrayIndex + iVar10;
    puVar11 = &param_2[iVar10].ArraySliceIndex;
    do {
      if (((FRHIRenderTargetView *)(puVar11 + -3))->Texture == (FRHITexture *)0x0) {
        pFVar6 = (FOpenGLTexture *)0x0;
      }
      else {
        pFVar6 = (FOpenGLTexture *)
                 (**(code **)(((FRHIRenderTargetView *)(puVar11 + -3))->Texture->_padding_ + 0x48))
                           ();
      }
      *ppFVar12 = pFVar6;
      puVar13[-8] = puVar11[-1];
      *puVar13 = *puVar11;
      if (*ppFVar12 != (FOpenGLTexture *)0x0) {
        (this->PendingState).FirstNonzeroRenderTarget = iVar10;
      }
      puVar13 = puVar13 + -1;
      ppFVar12 = ppFVar12 + -1;
      puVar11 = puVar11 + -6;
      iVar10 = iVar10 + -1;
    } while (-1 < iVar10);
  }
  if (param_3 == (FRHIDepthRenderTargetView *)0x0) {
    FVar9.Value = DepthNop;
    (this->PendingState).DepthStencil = (FOpenGLTexture *)0x0;
    (this->PendingState).StencilStoreAction = ENoAction;
  }
  else {
    if (param_3->Texture == (FRHITexture *)0x0) {
      pFVar6 = (FOpenGLTexture *)0x0;
    }
    else {
      pFVar6 = (FOpenGLTexture *)(**(code **)(param_3->Texture->_padding_ + 0x48))();
    }
    FVar9.Value = (param_3->DepthStencilAccess).Value;
    (this->PendingState).DepthStencil = pFVar6;
    (this->PendingState).StencilStoreAction = param_3->StencilStoreAction;
    if (pFVar6 != (FOpenGLTexture *)0x0) {
      lVar7 = (**(code **)(pFVar6->_padding_ + 0x20))(pFVar6);
      (this->PendingState).DepthTargetWidth = *(uint *)(lVar7 + 0x24);
      lVar7 = (**(code **)(pFVar6->_padding_ + 0x20))(pFVar6);
      uVar3 = *(uint *)(lVar7 + 0x28);
      goto LAB_145c2e90e;
    }
  }
  (this->PendingState).DepthTargetWidth = 0;
  uVar3 = 0;
LAB_145c2e90e:
  ppFVar12 = &(this->PendingState).DepthStencil;
  (this->PendingState).DepthTargetHeight = uVar3;
  if (((this->PendingState).FirstNonzeroRenderTarget == -1) && (*ppFVar12 == (FOpenGLTexture *)0x0))
  {
    (this->PendingState).Framebuffer = 0;
    (this->PendingState).bFramebufferSetupInvalid = true;
  }
  else {
    uVar3 = GetOpenGLFramebuffer
                      (this,param_1,(this->PendingState).RenderTargets,
                       (this->PendingState).RenderTargetArrayIndex,
                       (this->PendingState).RenderTargetMipmapLevels,*ppFVar12,FVar9,
                       (this->PendingState).NumRenderingSamples);
    (this->PendingState).Framebuffer = uVar3;
    iVar10 = (this->PendingState).FirstNonzeroRenderTarget;
    (this->PendingState).bFramebufferSetupInvalid = false;
    if (iVar10 == -1) {
      if (param_3 != (FRHIDepthRenderTargetView *)0x0) {
        (this->PendingState).Viewport.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
        lVar7 = (**(code **)(param_3->Texture->_padding_ + 0x20))();
        *(undefined4 *)((longlong)&(this->PendingState).Viewport.field0_0x0 + 8) =
             *(undefined4 *)(lVar7 + 0x24);
        lVar7 = (**(code **)(param_3->Texture->_padding_ + 0x20))();
        *(undefined4 *)((longlong)&(this->PendingState).Viewport.field0_0x0 + 0xc) =
             *(undefined4 *)(lVar7 + 0x28);
      }
    }
    else {
      (this->PendingState).Viewport.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
      lVar7 = (**(code **)((param_2[iVar10].Texture)->_padding_ + 0x20))();
      bVar8 = (byte)param_2[(this->PendingState).FirstNonzeroRenderTarget].MipIndex;
      uVar3 = *(int *)(lVar7 + 0x24) >> (bVar8 & 0x1f);
      if (uVar3 == 0) {
        uVar3 = 1;
      }
      uVar4 = *(int *)(lVar7 + 0x28) >> (bVar8 & 0x1f);
      (this->PendingState).RenderTargetWidth = uVar3;
      *(uint *)((longlong)&(this->PendingState).Viewport.field0_0x0 + 8) = uVar3;
      if (uVar4 == 0) {
        uVar4 = 1;
      }
      (this->PendingState).RenderTargetHeight = uVar4;
      *(uint *)((longlong)&(this->PendingState).Viewport.field0_0x0 + 0xc) = uVar4;
    }
  }
  return;
}

// SetRenderTargetsAndClear @ 145c2ea40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::SetRenderTargetsAndClear
          (FOpenGLDynamicRHI *this,FRHISetRenderTargetsInfo *param_1)

{
  undefined4 uVar1;
  FRHITexture *pFVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  FLinearColor_u_0 FVar10;
  bool bVar11;
  uint uVar12;
  HGLRC pHVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 *puVar16;
  byte bVar17;
  byte bVar18;
  FRHISetRenderTargetsInfo *pFVar19;
  int iVar20;
  byte bVar21;
  bool *pbVar22;
  float fVar23;
  undefined1 auStackY_1b8 [32];
  byte local_178;
  uint local_174;
  byte local_170;
  FName local_140;
  FName local_138;
  FOpenGLDynamicRHI *local_130;
  int local_128;
  float fStack_124;
  uint uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  FLinearColor_u_0 local_110;
  FString local_100;
  FString local_f0;
  FLinearColor local_d8 [8];
  bool local_58 [8];
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_130 = this;
  pHVar13 = wglGetCurrentContext();
  if (pHVar13 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  SetRenderTargets(this,param_1->NumColorRenderTargets,param_1->ColorRenderTarget,
                   &param_1->DepthStencilRenderTarget);
  uVar15 = (ulonglong)GRHIGlobals.ShaderPlatformForFeatureLevel[1];
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar15].bContainsValidPlatformInfo == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid(Platform)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                          ,0x1ba,L""), bVar11)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar17 = param_1->bClearColor;
  bVar18 = param_1->bClearStencil;
  iVar20 = 0;
  bVar21 = param_1->bClearDepth;
  local_170 = FGenericDataDrivenShaderPlatformInfo::Infos[uVar15].bTargetsTiledGPU;
  local_174 = 0;
  if (0 < param_1->NumColorRenderTargets) {
    pbVar22 = local_58;
    puVar16 = (undefined1 *)local_d8;
    pFVar19 = param_1;
    local_178 = bVar17;
    do {
      pFVar2 = pFVar19->ColorRenderTarget[0].Texture;
      *pbVar22 = pFVar19->ColorRenderTarget[0].LoadAction == EClear;
      if (pFVar2 != (FRHITexture *)0x0) {
        lVar14 = (**(code **)(pFVar2->_padding_ + 0x20))();
        iVar4 = *(int *)(lVar14 + 8);
        uVar5 = *(undefined4 *)(lVar14 + 0xc);
        uVar6 = *(undefined4 *)(lVar14 + 0x10);
        uVar8 = *(undefined8 *)(lVar14 + 0xc);
        uVar7 = *(undefined4 *)(lVar14 + 0x14);
        uVar1 = *(undefined4 *)(lVar14 + 0x18);
        uVar9 = *(undefined8 *)(lVar14 + 0x14);
        if (local_170 == 0) {
          if (*pbVar22 != false) {
            if (iVar4 != 1) {
              local_140 = (FName)(pFVar19->ColorRenderTarget[0].Texture)->_padding_;
              ::FName::GetPlainNameString(&local_140,&local_100);
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ClearValue.ColorBinding == EClearBinding::EColorBound",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLCommands.cpp"
                                  ,0x6fb,L"Texture: %s does not have a color bound for fast clears")
              ;
              if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_100.Data.AllocatorInstance.Data);
              }
              if (bVar11) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              bVar11 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<456935519012520230>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                                  ,0x126,"ColorBinding == EClearBinding::EColorBound");
              bVar17 = local_178;
              if (bVar11) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            *(undefined4 *)puVar16 = uVar5;
            *(undefined4 *)(puVar16 + 4) = uVar6;
            *(undefined4 *)(puVar16 + 8) = uVar7;
            *(undefined4 *)(puVar16 + 0xc) = uVar1;
          }
        }
        else {
          bVar11 = pFVar19->ColorRenderTarget[0].LoadAction == ENoAction;
          bVar17 = bVar17 | bVar11;
          *pbVar22 = (bool)(*pbVar22 | bVar11);
          local_178 = bVar17;
          if (iVar4 == 1) {
            *(undefined8 *)puVar16 = uVar8;
            *(undefined8 *)(puVar16 + 8) = uVar9;
          }
          else {
            local_110 = FLinearColor::Black.field0_0x0;
            FVar10._s_0 = local_110._s_0;
            local_110._0_8_ = FLinearColor::Black.field0_0x0._0_8_;
            local_110._8_8_ = FLinearColor::Black.field0_0x0._8_8_;
            *(undefined8 *)puVar16 = local_110._0_8_;
            *(undefined8 *)(puVar16 + 8) = local_110._8_8_;
            local_110._s_0 = FVar10._s_0;
          }
        }
      }
      iVar20 = iVar20 + 1;
      pbVar22 = pbVar22 + 1;
      pFVar19 = (FRHISetRenderTargetsInfo *)(pFVar19->ColorRenderTarget + 1);
      puVar16 = puVar16 + 0x10;
    } while (iVar20 < param_1->NumColorRenderTargets);
  }
  pFVar2 = (param_1->DepthStencilRenderTarget).Texture;
  if (pFVar2 != (FRHITexture *)0x0) {
    lVar14 = (**(code **)(pFVar2->_padding_ + 0x20))();
    local_128 = *(int *)(lVar14 + 8);
    fVar23 = *(float *)(lVar14 + 0xc);
    uVar12 = *(uint *)(lVar14 + 0x10);
    uStack_11c = *(undefined4 *)(lVar14 + 0x14);
    local_118 = *(undefined4 *)(lVar14 + 0x18);
    fStack_124 = fVar23;
    uStack_120 = uVar12;
    if (local_170 == 0) {
      if (((bool)bVar21 != false) || ((bool)bVar18 != false)) {
        if (local_128 != 2) {
          local_138 = (FName)((param_1->DepthStencilRenderTarget).Texture)->_padding_;
          ::FName::GetPlainNameString(&local_138,&local_f0);
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("ClearValue.ColorBinding == EClearBinding::EDepthStencilBound",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLCommands.cpp"
                              ,0x713,L"Texture: %s does not have a DS value bound for fast clears");
          if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f0.Data.AllocatorInstance.Data);
          }
          if (bVar11) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          bVar11 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<456935519012520236>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                              ,300,"ColorBinding == EClearBinding::EDepthStencilBound");
          fVar23 = fStack_124;
          uVar12 = uStack_120;
          if (bVar11) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        goto LAB_145c2ee54;
      }
    }
    else {
      bVar18 = bVar18 | (param_1->DepthStencilRenderTarget).StencilLoadAction == ENoAction;
      bVar21 = bVar21 | (param_1->DepthStencilRenderTarget).DepthLoadAction == ENoAction;
      if (local_128 == 2) goto LAB_145c2ee54;
    }
  }
  fVar23 = 0.0;
  uVar12 = local_174;
LAB_145c2ee54:
  if (((bVar17 != 0) || ((bool)bVar18 != false)) || ((bool)bVar21 != false)) {
    pbVar22 = local_58;
    if (bVar17 == 0) {
      pbVar22 = (bool *)0x0;
    }
    RHIClearMRT(local_130,pbVar22,param_1->NumColorRenderTargets,local_d8,(bool)bVar21,fVar23,
                (bool)bVar18,uVar12);
  }
  return;
}

// SetShaderParametersCommon @ 145c2f0a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EShaderStage": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::SetShaderParametersCommon
          (FOpenGLDynamicRHI *this,EShaderFrequency param_1,
          TArrayView<unsigned_char_const_,int> *param_2,
          TArrayView<FRHIShaderParameter_const_,int> *param_3,
          TArrayView<FRHIShaderParameterResource_const_,int> *param_4)

{
  EType EVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  FOpenGLShaderParameterCache *pFVar6;
  FOpenGLUnorderedAccessView *this_00;
  FRHIUniformBuffer *pFVar7;
  FOpenGLShaderResourceView *pFVar8;
  FRHIResource *pFVar9;
  code *pcVar10;
  FOpenGLDynamicRHI *pFVar11;
  EShaderFrequency EVar12;
  EShaderStage EVar13;
  bool bVar14;
  byte bVar15;
  longlong lVar16;
  FOpenGLTexture *this_01;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  FRHIShaderParameter *pFVar20;
  FRHIShaderParameterResource *pFVar21;
  uint uVar22;
  ulonglong uVar23;
  FOpenGLSamplerState *pFVar24;
  FRHIShaderParameterResource *pFVar25;
  int iVar26;
  FRHIShaderParameterResource *pFVar27;
  byte local_res10 [8];
  TArrayView<unsigned_char_const_,int> *local_res18;
  byte local_res20 [8];
  byte local_c8 [8];
  ushort local_c0;
  FOpenGLResourceBinder local_b8;
  uchar *local_90;
  FRHIShaderParameter *local_88;
  FOpenGLResourceBinder *local_80;
  byte *local_78;
  FOpenGLResourceBinder *local_70;
  byte *local_68;
  FOpenGLResourceBinder *local_60;
  byte *local_58;
  
  local_b8._12_8_ = ___xmm_00000000000000000000000000000006;
  local_b8._20_8_ = _UNK_1510f6df8;
  local_b8.MaxUAVUnits = 0;
  local_b8.bClearTextureSamplers = false;
  local_res18 = param_2;
  local_b8.RHI = this;
  local_b8.ShaderFrequency = param_1;
  FOpenGLResourceBinder::Init(&local_b8);
  if (param_3->ArrayNum != 0) {
    pFVar20 = param_3->DataPtr;
    local_88 = pFVar20 + param_3->ArrayNum;
    if (pFVar20 != local_88) {
      do {
        EVar13 = local_b8.ShaderStage;
        uVar2 = pFVar20->ByteOffset;
        pFVar6 = (this->PendingState).ShaderParameters;
        if ((param_2->ArrayNum <= (int)(uint)uVar2) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar14)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        local_90 = param_2->DataPtr;
        uVar3 = pFVar20->BaseIndex;
        uVar4 = pFVar20->ByteSize;
        local_c0 = uVar3;
        bVar15 = CrossCompiler::PackedTypeNameToTypeIndex((uchar)pFVar20->BufferIndex);
        if ((pFVar6[(int)EVar13].GlobalUniformArraySize == -1) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("GlobalUniformArraySize != -1",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                                ,0xc7e,L""), bVar14)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if ((6 < bVar15) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("BufferIndex < CrossCompiler::PACKED_TYPEINDEX_MAX",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                                ,0xc7f,L""), bVar14)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if (((uint)pFVar6[(int)EVar13].GlobalUniformArraySize < (uint)uVar3 + (uint)uVar4) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("ByteOffset + NumBytes <= (uint32)GlobalUniformArraySize",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                                ,0xc80,L""), bVar14)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uVar18 = pFVar6[(int)EVar13].PackedGlobalUniformDirty[bVar15].NumVectors;
        uVar19 = uVar4 + 0xf >> 4;
        uVar22 = (uint)(uVar3 >> 4);
        if (uVar18 != 0) {
          uVar5 = pFVar6[(int)EVar13].PackedGlobalUniformDirty[bVar15].StartVector;
          uVar19 = uVar19 + uVar22;
          uVar18 = uVar18 + uVar5;
          if (uVar5 < uVar22) {
            uVar22 = uVar5;
          }
          if (uVar19 < uVar18) {
            uVar19 = uVar18;
          }
          uVar19 = (uVar19 - uVar22) + 1;
        }
        *(uint *)((longlong)(pFVar6[(int)EVar13].PackedGlobalUniforms + bVar15) + 0x3c) = uVar19;
        pFVar6[(int)EVar13].PackedGlobalUniformDirty[bVar15].StartVector = uVar22;
        memcpy(pFVar6[(int)EVar13].PackedGlobalUniforms[bVar15] + local_c0,local_90 + uVar2,
               (ulonglong)uVar4);
        pFVar20 = pFVar20 + 1;
        (this->PendingState).LinkedProgramAndDirtyFlag = (FOpenGLLinkedProgram *)0x0;
        param_2 = local_res18;
      } while (pFVar20 != local_88);
    }
  }
  pFVar27 = param_4->DataPtr;
  pFVar21 = pFVar27 + param_4->ArrayNum;
  pFVar25 = pFVar27;
  if (pFVar27 != pFVar21) {
    do {
      if (pFVar25->Type == UnorderedAccessView) {
        local_c8[0] = (byte)pFVar25->Index;
        this_00 = (FOpenGLUnorderedAccessView *)pFVar25->Resource;
        if (local_b8.MaxUAVUnits <= (int)(uint)local_c8[0]) {
          local_80 = &local_b8;
          local_78 = local_c8;
          `FOpenGLResourceBinder::SetUAV'::__l2::<lambda_1>::operator()(&local_80);
        }
        EVar12 = local_b8.ShaderFrequency;
        pFVar11 = local_b8.RHI;
        iVar26 = (uint)local_c8[0] + local_b8.FirstUAVUnit;
        if (this_00 == (FOpenGLUnorderedAccessView *)0x0) {
          uVar18 = 0;
        }
        else {
          if (this_00->Resource != 0) {
            bVar15 = this_00->Level;
            bVar14 = FOpenGLUnorderedAccessView::IsLayered(this_00);
            InternalSetShaderImageUAV
                      (pFVar11,iVar26,this_00->Format,this_00->Resource,bVar14,0,
                       (EVar12 == SF_Compute) + 0x88b9,(uint)bVar15);
            goto LAB_145c2f368;
          }
          uVar18 = this_00->BufferResource;
        }
        InternalSetShaderBufferUAV(local_b8.RHI,iVar26,uVar18);
      }
LAB_145c2f368:
      pFVar25 = pFVar25 + 1;
    } while (pFVar25 != pFVar21);
    do {
      EVar1 = pFVar27->Type;
      if (EVar1 == Texture) {
        local_res20[0] = (byte)pFVar27->Index;
        pFVar9 = pFVar27->Resource;
        if (local_b8.MaxTextureImageUnits <= (int)(uint)local_res20[0]) {
          local_60 = &local_b8;
          local_58 = local_res20;
          `FOpenGLResourceBinder::SetTexture'::__l2::<lambda_1>::operator()(&local_60);
        }
        if ((pFVar9 == (FRHIResource *)0x0) ||
           (this_01 = (FOpenGLTexture *)(**(code **)(pFVar9->_padding_ + 0x48))(pFVar9),
           pFVar11 = local_b8.RHI, this_01 == (FOpenGLTexture *)0x0)) {
          pFVar11 = local_b8.RHI;
          uVar22 = (uint)local_res20[0] + local_b8.FirstTextureUnit;
          uVar18 = 0;
          if ((int)uVar22 < (int)((local_b8.RHI)->PendingState)._padding_) {
            uVar18 = ~uVar22 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          lVar16 = (longlong)(int)uVar22;
          lVar17 = (pFVar11->PendingState)._padding_;
          *(undefined8 *)(lVar17 + lVar16 * 0x28) = 0;
          *(undefined8 *)(lVar17 + 8 + lVar16 * 0x28) = 0;
          *(undefined8 *)(lVar17 + 0x10 + lVar16 * 0x28) = 0;
          *(undefined4 *)(lVar17 + 0x18 + lVar16 * 0x28) = 0xffffffff;
          *(undefined1 *)(lVar17 + 0x1c + lVar16 * 0x28) = 1;
          *(undefined4 *)(lVar17 + 0x20 + lVar16 * 0x28) = 0;
        }
        else {
          lVar17 = (**(code **)(this_01->_padding_ + 0x20))(this_01);
          bVar15 = *(byte *)(lVar17 + 0x30);
          FOpenGLTexture::TryRestoreGLResource(this_01);
          InternalSetShaderTexture
                    (pFVar11,this_01,(FOpenGLShaderResourceView *)0x0,
                     (uint)local_res20[0] + local_b8.FirstTextureUnit,this_01->Target,
                     this_01->Resource,(uint)bVar15,-1);
        }
        if (local_b8.bClearTextureSamplers != false) {
          pFVar24 = (FOpenGLSamplerState *)0x0;
          bVar15 = local_res20[0];
LAB_145c2f6b4:
          uVar18 = (uint)bVar15;
          goto LAB_145c2f6b8;
        }
      }
      else if (EVar1 == ResourceView) {
        local_res10[0] = (byte)pFVar27->Index;
        pFVar8 = (FOpenGLShaderResourceView *)pFVar27->Resource;
        if (local_b8.MaxTextureImageUnits <= (int)(uint)local_res10[0]) {
          local_70 = &local_b8;
          local_68 = local_res10;
          `FOpenGLResourceBinder::SetSRV'::__l2::<lambda_1>::operator()(&local_70);
        }
        pFVar11 = local_b8.RHI;
        if (pFVar8 == (FOpenGLShaderResourceView *)0x0) {
          uVar22 = (uint)local_res10[0] + local_b8.FirstTextureUnit;
          uVar18 = 0;
          if ((int)uVar22 < (int)((local_b8.RHI)->PendingState)._padding_) {
            uVar18 = ~uVar22 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          lVar16 = (longlong)(int)uVar22;
          lVar17 = (pFVar11->PendingState)._padding_;
          *(undefined8 *)(lVar17 + lVar16 * 0x28) = 0;
          *(undefined8 *)(lVar17 + 8 + lVar16 * 0x28) = 0;
          *(undefined8 *)(lVar17 + 0x10 + lVar16 * 0x28) = 0x8c2a;
          *(undefined4 *)(lVar17 + 0x18 + lVar16 * 0x28) = 0xffffffff;
          *(undefined1 *)(lVar17 + 0x1c + lVar16 * 0x28) = 1;
          *(undefined4 *)(lVar17 + 0x20 + lVar16 * 0x28) = 0;
          uVar18 = (uint)local_res10[0];
          pFVar24 = (FOpenGLSamplerState *)((local_b8.RHI)->PointSamplerState).Reference;
        }
        else {
          if (pFVar8->Target == 0x90d2) {
            InternalSetShaderBufferUAV
                      (local_b8.RHI,(uint)local_res10[0] + local_b8.FirstUAVUnit,pFVar8->Resource);
            goto LAB_145c2f6c0;
          }
          InternalSetShaderTexture
                    (local_b8.RHI,(FOpenGLTexture *)0x0,pFVar8,
                     (uint)local_res10[0] + local_b8.FirstTextureUnit,pFVar8->Target,
                     pFVar8->Resource,1,pFVar8->LimitMip);
          uVar18 = (uint)local_res10[0];
          pFVar24 = (FOpenGLSamplerState *)((local_b8.RHI)->PointSamplerState).Reference;
        }
LAB_145c2f6b8:
        InternalSetSamplerStates(local_b8.RHI,uVar18 + local_b8.FirstTextureUnit,pFVar24);
      }
      else if (EVar1 != UnorderedAccessView) {
        if (EVar1 == Sampler) {
          pFVar24 = (FOpenGLSamplerState *)pFVar27->Resource;
          bVar15 = (byte)pFVar27->Index;
          goto LAB_145c2f6b4;
        }
        if (EVar1 == UniformBuffer) {
          uVar2 = pFVar27->Index;
          pFVar7 = (FRHIUniformBuffer *)pFVar27->Resource;
          uVar23 = (ulonglong)local_b8.ShaderFrequency;
          (this->PendingState).BoundUniformBuffers[uVar23][uVar2] = pFVar7;
          (this->PendingState).BoundUniformBuffersDynamicOffset[uVar23][uVar2] = 0;
          (this->PendingState).DirtyUniformBuffers[uVar23] =
               (this->PendingState).DirtyUniformBuffers[uVar23] | (ushort)(1 << (uVar2 & 0x1f));
          (this->PendingState).bAnyDirtyGraphicsUniformBuffers = true;
          if ((GUseEmulatedUniformBuffers == false) ||
             (*(undefined1 *)((longlong)&pFVar7[1]._padding_ + 5) == '\0')) {
            (this->PendingState).bAnyDirtyRealUniformBuffers[uVar23] = true;
          }
        }
        else {
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("false",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLCommands.cpp"
                              ,0x492,L"Unhandled resource type?");
          if (bVar14) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
      }
LAB_145c2f6c0:
      pFVar27 = pFVar27 + 1;
    } while (pFVar27 != pFVar21);
  }
  return;
}

// SetShaderUnbindsCommon @ 145c2f6f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EShaderStage": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::SetShaderUnbindsCommon
          (FOpenGLDynamicRHI *this,EShaderFrequency param_1,
          TArrayView<FRHIShaderParameterUnbind_const_,int> *param_2)

{
  FRHIShaderParameterUnbind *pFVar1;
  longlong lVar2;
  code *pcVar3;
  FOpenGLDynamicRHI *pFVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  FRHIShaderParameterUnbind *pFVar8;
  uint uVar9;
  byte local_res8 [8];
  byte local_res10 [8];
  FOpenGLResourceBinder *local_78;
  byte *local_70;
  FOpenGLResourceBinder *local_68;
  byte *local_60;
  FOpenGLResourceBinder local_58;
  
  local_58.MaxUAVUnits = 0;
  local_58._12_8_ = ___xmm_00000000000000000000000000000006;
  local_58._20_8_ = _UNK_1510f6df8;
  local_58.bClearTextureSamplers = false;
  local_58.RHI = this;
  local_58.ShaderFrequency = param_1;
  FOpenGLResourceBinder::Init(&local_58);
  pFVar8 = param_2->DataPtr;
  pFVar1 = pFVar8 + param_2->ArrayNum;
  do {
    if (pFVar8 == pFVar1) {
      ___xmm_00000000000000000000000000000006 =
           (EShaderStage)___xmm_00000000000000000000000000000006;
      _UNK_1510f6df4 = SUB84(___xmm_00000000000000000000000000000006,4);
      _UNK_1510f6df8 = (int)_UNK_1510f6df8;
      _UNK_1510f6dfc = SUB84(_UNK_1510f6df8,4);
      return;
    }
    if (pFVar8->Type == ResourceView) {
      local_res10[0] = (byte)pFVar8->Index;
      if (local_58.MaxTextureImageUnits <= (int)(uint)local_res10[0]) {
        local_68 = &local_58;
        local_60 = local_res10;
        `FOpenGLResourceBinder::SetSRV'::__l2::<lambda_1>::operator()(&local_68);
      }
      pFVar4 = local_58.RHI;
      uVar9 = (uint)local_res10[0] + local_58.FirstTextureUnit;
      uVar6 = 0;
      if ((int)uVar9 < (int)((local_58.RHI)->PendingState)._padding_) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar7 = (longlong)(int)uVar9;
      lVar2 = (pFVar4->PendingState)._padding_;
      *(undefined8 *)(lVar2 + lVar7 * 0x28) = 0;
      *(undefined8 *)(lVar2 + 8 + lVar7 * 0x28) = 0;
      *(undefined8 *)(lVar2 + 0x10 + lVar7 * 0x28) = 0x8c2a;
      *(undefined4 *)(lVar2 + 0x18 + lVar7 * 0x28) = 0xffffffff;
      *(undefined1 *)(lVar2 + 0x1c + lVar7 * 0x28) = 1;
      *(undefined4 *)(lVar2 + 0x20 + lVar7 * 0x28) = 0;
      InternalSetSamplerStates
                (local_58.RHI,(uint)local_res10[0] + local_58.FirstTextureUnit,
                 (FOpenGLSamplerState *)((local_58.RHI)->PointSamplerState).Reference);
    }
    else if (pFVar8->Type == UnorderedAccessView) {
      local_res8[0] = (byte)pFVar8->Index;
      if (local_58.MaxUAVUnits <= (int)(uint)local_res8[0]) {
        local_78 = &local_58;
        local_70 = local_res8;
        `FOpenGLResourceBinder::SetUAV'::__l2::<lambda_1>::operator()(&local_78);
      }
      InternalSetShaderBufferUAV(local_58.RHI,(uint)local_res8[0] + local_58.FirstUAVUnit,0);
    }
    else {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLCommands.cpp"
                         ,0x4c3,L"Unhandled unbind resource type?");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar8 = pFVar8 + 1;
  } while( true );
}

// SetupDispatch @ 145c2fd00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EShaderStage": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FOpenGLDynamicRHI::SetupDispatch(FOpenGLDynamicRHI *this)

{
  uint uVar1;
  FOpenGLComputeShader *pFVar2;
  FOpenGLShaderParameterCache *pFVar3;
  FTracker *pFVar4;
  code *pcVar5;
  FOpenGLComputeShader *pFVar6;
  bool bVar7;
  HGLRC pHVar8;
  FGLProgramCache *this_00;
  FRHIUniformBuffer *(*papFVar9) [14];
  FOpenGLComputeShader *local_res8;
  FOpenGLComputeShader *local_res10;
  FOpenGLResourceBinder local_58;
  
  pFVar2 = (this->PendingState).CurrentComputeShader.Reference;
  local_res8 = pFVar2;
  if (pFVar2 == (FOpenGLComputeShader *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("ComputeShader",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLCommands.cpp"
                       ,0xa92,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  LinkComputeProgram(this,(FRHIComputeShader *)pFVar2);
  local_res10 = pFVar2;
  pHVar8 = wglGetCurrentContext();
  if (pHVar8 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  this_00 = GetOpenGLProgramsCache();
  FGLProgramCache::Touch(this_00,pFVar2->LinkedProgram);
  FOpenGLLinkedProgram::
  UpdateShaders<FOpenGLLinkedProgram::FComputeProgram,FOpenGLComputeShader_*_&>
            (pFVar2->LinkedProgram,&local_res10);
  pFVar6 = local_res10;
  uVar1 = (uint)local_res10->LinkedProgram->_padding_;
  bVar7 = (this->ContextState).Program != uVar1;
  if (bVar7) {
    (*glUseProgram)(uVar1);
    pFVar3 = (this->PendingState).ShaderParameters;
    (this->ContextState).Program = uVar1;
    MarkShaderParameterCachesDirty(pFVar3,true);
    (this->PendingState).LinkedProgramAndDirtyFlag = (FOpenGLLinkedProgram *)0x0;
  }
  if ((this->PendingState).bAnyDirtyRealUniformBuffers[5] != false) {
    BindUniformBufferBase
              (this,(uint)*(byte *)((longlong)&pFVar6->_padding_ + 5),
               (this->PendingState).BoundUniformBuffers[5],
               (this->PendingState).BoundUniformBuffersDynamicOffset[5],0,bVar7);
    (this->PendingState).bAnyDirtyRealUniformBuffers[5] = false;
  }
  pHVar8 = wglGetCurrentContext();
  if (pHVar8 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  pHVar8 = wglGetCurrentContext();
  if (pHVar8 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog
              (&`private:_void___cdecl_FOpenGLDynamicRHI::SetResourcesFromTables<FOpenGLComputeShader>(FOpenGLComputeShader*___ptr64)___ptr64'
                ::__l7::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  papFVar9 = (this->PendingState).BoundUniformBuffers + 5;
  pFVar4 = (FTracker *)this->_padding_;
  local_58.ShaderStage = ___xmm_00000000000000000000000000000006;
  local_58.FirstTextureUnit = _UNK_1510f6df4;
  local_58.MaxTextureImageUnits = _UNK_1510f6df8;
  local_58.FirstUAVUnit = _UNK_1510f6dfc;
  local_58.ShaderFrequency = SF_Compute;
  local_58.MaxUAVUnits = 0;
  local_58.bClearTextureSamplers = true;
  local_58.RHI = this;
  FOpenGLResourceBinder::Init(&local_58);
  UE::RHI::Private::
  SetUniformBufferResourcesFromTables<FOpenGLResourceBinder,FRHIUniformBuffer_*_[14],unsigned_short,0>
            (&local_58,(FRHIShader *)pFVar2,(this->PendingState).DirtyUniformBuffers + 5,papFVar9,
             pFVar4);
  (this->PendingState).DirtyUniformBuffers[5] = 0;
  if (FOpenGLBase::MaxComputeTextureImageUnits == -1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("MaxComputeTextureImageUnits != -1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBase.h"
                       ,0x7b,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  SetupTexturesForDraw<FOpenGLComputeShader_*>
            (this,&local_res8,FOpenGLBase::MaxComputeTextureImageUnits);
  SetupUAVsForProgram(this,(TBitArray<FDefaultBitArrayAllocator> *)&pFVar2->LinkedProgram->_padding_
                      ,*(int *)((longlong)&pFVar2->LinkedProgram->_padding_ + 4));
  pHVar8 = wglGetCurrentContext();
  if (pHVar8 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  pFVar3 = (this->PendingState).ShaderParameters;
  FOpenGLShaderParameterCache::CommitPackedUniformBuffers
            (pFVar3 + 5,pFVar2->LinkedProgram,NUM_NON_COMPUTE_SHADER_STAGES,*papFVar9,
             (TArray<CrossCompiler::FUniformBufferCopyInfo,TSizedDefaultAllocator<32>_> *)
             &pFVar2->_padding_);
  FOpenGLShaderParameterCache::CommitPackedGlobals
            (pFVar3 + 5,pFVar2->LinkedProgram,NUM_NON_COMPUTE_SHADER_STAGES);
  (this->PendingState).LinkedProgramAndDirtyFlag = (FOpenGLLinkedProgram *)0x0;
  return;
}

// SetupDraw @ 145c300a0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::SetupDraw
          (FOpenGLDynamicRHI *this,TOpenGLBuffer<FOpenGLBaseBuffer> *param_1,uint param_2,
          uint param_3)

{
  TIntPoint<int> *pTVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  FOpenGLLinkedProgram *pFVar7;
  code *pcVar8;
  bool bVar9;
  HGLRC pHVar10;
  uint uVar11;
  
  BindPendingFramebuffer(this);
  SetPendingBlendStateForActiveRenderTargets(this);
  pHVar10 = wglGetCurrentContext();
  if (pHVar10 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  iVar5 = *(int *)&(this->PendingState).Viewport.field0_0x0;
  if ((((*(int *)&(this->ContextState).Viewport.field0_0x0 != iVar5) ||
       (*(int *)((longlong)&(this->ContextState).Viewport.field0_0x0 + 4) !=
        *(int *)((longlong)&(this->PendingState).Viewport.field0_0x0 + 4))) ||
      (*(int *)((longlong)&(this->ContextState).Viewport.field0_0x0 + 8) !=
       *(int *)((longlong)&(this->PendingState).Viewport.field0_0x0 + 8))) ||
     (*(int *)((longlong)&(this->ContextState).Viewport.field0_0x0 + 0xc) !=
      *(int *)((longlong)&(this->PendingState).Viewport.field0_0x0 + 0xc))) {
    pTVar1 = &(this->PendingState).Viewport.field0_0x0._s_0.Max;
    iVar6 = *(int *)((longlong)&(this->PendingState).Viewport.field0_0x0 + 4);
    (*glViewport)(iVar5,iVar6,(pTVar1->field0_0x0)._s_0.X - iVar5,
                  *(int *)((longlong)&(this->PendingState).Viewport.field0_0x0 + 0xc) - iVar6);
    (this->ContextState).Viewport.field0_0x0._s_0.Min.field0_0x0 =
         (this->PendingState).Viewport.field0_0x0._s_0.Min.field0_0x0;
    (this->ContextState).Viewport.field0_0x0._s_0.Max.field0_0x0._s_0 =
         (TIntPoint<int>_u_0_s_0)pTVar1->field0_0x0;
  }
  fVar4 = (this->PendingState).DepthMinZ;
  pfVar2 = &(this->ContextState).DepthMaxZ;
  pfVar3 = &(this->PendingState).DepthMaxZ;
  if ((fVar4 != (this->ContextState).DepthMinZ) || (*pfVar3 != *pfVar2)) {
    (*glDepthRange)((double)fVar4,(double)*pfVar3);
    (this->ContextState).DepthMinZ = (this->PendingState).DepthMinZ;
    *pfVar2 = *pfVar3;
  }
  UpdateScissorRectInOpenGLContext(this);
  UpdateRasterizerStateInOpenGLContext(this);
  UpdateDepthStencilStateInOpenGLContext(this);
  BindPendingShaderState(this);
  if ((this->PendingState).bAnyDirtyGraphicsUniformBuffers != false) {
    CommitGraphicsResourceTablesInner(this);
  }
  if ((FOpenGLBase::MaxCombinedTextureImageUnits == -1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("MaxCombinedTextureImageUnits != -1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBase.h"
                         ,0x7c,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  SetupTexturesForDraw<TRefCountPtr<FOpenGLBoundShaderState>_>
            (this,&(this->PendingState).BoundShaderState,FOpenGLBase::MaxCombinedTextureImageUnits);
  pFVar7 = ((this->PendingState).BoundShaderState.Reference)->LinkedProgram;
  SetupUAVsForProgram(this,(TBitArray<FDefaultBitArrayAllocator> *)&pFVar7->_padding_,
                      *(int *)((longlong)&pFVar7->_padding_ + 4));
  CommitNonComputeShaderConstants(this);
  uVar11 = 0;
  if (param_1 != (TOpenGLBuffer<FOpenGLBaseBuffer> *)0x0) {
    uVar11 = *(uint *)((longlong)&param_1->_padding_ + 4);
  }
  pHVar10 = wglGetCurrentContext();
  if (pHVar10 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog
              (&`public:_void___cdecl_FOpenGLDynamicRHI::CachedBindBuffer(unsigned_int,unsigned_int)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if ((this->ContextState).ElementArrayBufferBound != uVar11) {
    (*glBindBuffer)(0x8893,uVar11);
    (this->ContextState).ElementArrayBufferBound = uVar11;
  }
  SetupVertexArrays(this,param_2,(this->PendingState).Streams,0x10,param_3);
  return;
}

// SetupTexturesForDraw @ 145c30750

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall FOpenGLDynamicRHI::SetupTexturesForDraw(FOpenGLDynamicRHI *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (FOpenGLBase::MaxCombinedTextureImageUnits == -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MaxCombinedTextureImageUnits != -1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBase.h"
                       ,0x7c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SetupTexturesForDraw<TRefCountPtr<FOpenGLBoundShaderState>_>
            (this,&(this->PendingState).BoundShaderState,FOpenGLBase::MaxCombinedTextureImageUnits);
  return;
}

// SetupUAVsForCompute @ 145c307b0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::SetupUAVsForCompute(FOpenGLDynamicRHI *this,FOpenGLComputeShader *param_1)

{
  SetupUAVsForProgram(this,(TBitArray<FDefaultBitArrayAllocator> *)
                           &param_1->LinkedProgram->_padding_,
                      *(int *)((longlong)&param_1->LinkedProgram->_padding_ + 4));
  return;
}

// SetupUAVsForDraw @ 145c307d0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall FOpenGLDynamicRHI::SetupUAVsForDraw(FOpenGLDynamicRHI *this)

{
  FOpenGLLinkedProgram *pFVar1;
  
  pFVar1 = ((this->PendingState).BoundShaderState.Reference)->LinkedProgram;
  SetupUAVsForProgram(this,(TBitArray<FDefaultBitArrayAllocator> *)&pFVar1->_padding_,
                      *(int *)((longlong)&pFVar1->_padding_ + 4));
  return;
}

// SetupUAVsForProgram @ 145c30800

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::SetupUAVsForProgram
          (FOpenGLDynamicRHI *this,TBitArray<FDefaultBitArrayAllocator> *param_1,int param_2)

{
  ForElementType<unsigned_int> FVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined1 uVar7;
  ForElementType<unsigned_int> FVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  
  uVar12 = 0;
  uVar16 = 0;
  if (param_2 < 0) {
    if ((this->ContextState).ActiveUAVMask == 0) {
      return;
    }
  }
  else {
    uVar13 = 1;
    uVar17 = uVar12;
    do {
      uVar10 = (uint)uVar12;
      if ((((int)uVar10 < 0) || (param_1->NumBits <= (int)uVar10)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar1 = (param_1->AllocatorInstance).SecondaryData;
      FVar8 = (ForElementType<unsigned_int>)param_1;
      if (FVar1 != (ForElementType<unsigned_int>)0x0) {
        FVar8 = FVar1;
      }
      if ((*(uint *)((longlong)FVar8 + (uVar12 >> 5) * 4) & uVar13) == 0) {
        uVar7 = false;
        uVar15 = 0x88ba;
        uVar6 = uVar16;
        uVar9 = uVar16;
        uVar5 = 0;
        uVar14 = 0;
      }
      else {
        uVar5 = uVar16;
        if ((int)uVar10 < (int)(this->PendingState)._padding_) {
          uVar5 = ~uVar10 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar3 = (this->PendingState)._padding_;
        uVar5 = *(uint *)(uVar17 + lVar3);
        uVar14 = *(uint *)(uVar17 + 4 + lVar3);
        uVar7 = *(undefined1 *)(uVar17 + 0x10 + lVar3);
        uVar9 = *(uint *)(uVar17 + 0xc + lVar3);
        uVar15 = *(uint *)(uVar17 + 8 + lVar3);
        uVar6 = *(uint *)(uVar17 + 0x14 + lVar3);
      }
      CachedSetupUAVStage(this,uVar10,uVar5,uVar14,(bool)uVar7,uVar9,uVar15,uVar6);
      uVar12 = (ulonglong)(uVar10 + 1);
      uVar13 = uVar13 << 1 | (uint)((int)uVar13 < 0);
      uVar17 = uVar17 + 0x18;
    } while ((int)(uVar10 + 1) <= param_2);
  }
  iVar11 = param_2 + 1;
  if ((this->ContextState).ActiveUAVMask >> ((byte)iVar11 & 0x1f) != 0) {
    lVar3 = (this->ContextState)._padding_;
    for (; iVar11 < (int)lVar3; iVar11 = iVar11 + 1) {
      CachedSetupUAVStage(this,iVar11,0,0,false,0,0x88ba,0);
    }
  }
  return;
}

// SetupVertexArrays @ 145c309c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::SetupVertexArrays
          (FOpenGLDynamicRHI *this,uint param_1,FOpenGLStream *param_2,uint param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  FOpenGLBoundShaderState *pFVar4;
  FOpenGLVertexDeclaration *pFVar5;
  FOpenGLVertexShader *pFVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  HGLRC pHVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uchar *puVar17;
  uint *puVar18;
  undefined1 auStackY_f8 [32];
  uint local_c4;
  uint local_c0;
  uint local_98 [16];
  char local_58 [16];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pHVar10 = wglGetCurrentContext();
  if (pHVar10 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  uVar16 = (this->ContextState).ActiveStreamMask;
  local_58[0] = '\0';
  local_58[1] = '\0';
  local_58[2] = '\0';
  local_58[3] = '\0';
  local_58[4] = '\0';
  local_58[5] = '\0';
  local_58[6] = '\0';
  local_58[7] = '\0';
  local_58[8] = '\0';
  local_58[9] = '\0';
  local_58[10] = '\0';
  local_58[0xb] = '\0';
  local_58[0xc] = '\0';
  local_58[0xd] = '\0';
  local_58[0xe] = '\0';
  local_58[0xf] = '\0';
  bVar9 = false;
  local_98[0] = 0;
  local_98[1] = 0;
  local_98[2] = 0;
  local_98[3] = 0;
  local_98[4] = 0;
  local_98[5] = 0;
  local_98[6] = 0;
  local_98[7] = 0;
  local_98[8] = 0;
  local_98[9] = 0;
  local_98[10] = 0;
  local_98[0xb] = 0;
  local_98[0xc] = 0;
  local_98[0xd] = 0;
  local_98[0xe] = 0;
  local_98[0xf] = 0;
  if (((this->PendingState).BoundShaderState.Reference == (FOpenGLBoundShaderState *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidRef(PendingState.BoundShaderState)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLCommands.cpp"
                         ,0x729,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar4 = (this->PendingState).BoundShaderState.Reference;
  pFVar5 = (pFVar4->VertexDeclaration).Reference;
  if (((pFVar4->VertexShader).Reference == (FOpenGLVertexShader *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidRef(VertexShader)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLResources.h"
                         ,0x318,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar15 = 1;
  pFVar6 = (pFVar4->VertexShader).Reference;
  if (((this->ContextState).VertexDecl != pFVar5) ||
     (*(uint *)&pFVar6->field_0x150 != (this->ContextState).VertexAttrs_EnabledBits)) {
    bVar9 = true;
    local_c4 = 0;
    if ((0x20 < (pFVar5->VertexElements).ArrayNum) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("VertexDeclaration->VertexElements.Num() <= 32",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLCommands.cpp"
                           ,0x732,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_c0 = 0;
    uVar16 = 0;
    if (0 < (pFVar5->VertexElements).ArrayNum) {
      puVar17 = (pFVar5->VertexElements).AllocatorInstance.InlineData[0].Pad + 0x10;
      do {
        uVar16 = 0;
        if ((int)local_c0 < (pFVar5->VertexElements).ArrayNum) {
          uVar16 = ~local_c0 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        bVar1 = puVar17[9];
        uVar16 = *(uint *)(puVar17 + -0xc);
        if ((0x1f < bVar1) &&
           (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_6469225130173136683>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\CrossCompilerCommon.h"
                               ,0xd5,"Index >= 0 && Index <= FShaderBindingInOutMask::MaxIndex"),
           bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar12 = 1 << (bVar1 & 0x1f);
        if ((*(uint *)&pFVar6->field_0x150 & uVar12) == 0) {
          if ((this->ContextState).VertexAttrs[bVar1].StreamIndex != uVar16) {
            (*glVertexAttribBinding)((uint)bVar1,*(uint *)(puVar17 + -0xc));
            (this->ContextState).VertexAttrs[bVar1].StreamIndex = uVar16;
          }
        }
        else if (*(uint *)(puVar17 + -0xc) < param_3) {
          local_c4 = local_c4 | 1 << ((byte)*(uint *)(puVar17 + -0xc) & 0x1f);
          if (((local_58[uVar16] != '\0') && (local_98[uVar16] != *(uint *)puVar17)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("!KnowsDivisor[StreamIndex] || Divisor[StreamIndex] == VertexElement.Divisor"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLCommands.cpp"
                                 ,0x744,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar14 = *(uint *)(puVar17 + -8);
          uVar2 = *(uint *)puVar17;
          local_58[uVar16] = '\x01';
          local_98[uVar16] = uVar2;
          if ((((this->ContextState).VertexAttrs[bVar1].StreamOffset != uVar14) ||
              ((this->ContextState).VertexAttrs[bVar1].Size != *(uint *)(puVar17 + -4))) ||
             (((this->ContextState).VertexAttrs[bVar1].Type !=
               *(uint *)((TTypeCompatibleBytes<FOpenGLVertexElement> *)(puVar17 + -0x10))->Pad ||
              (((this->ContextState).VertexAttrs[bVar1].bNormalized != puVar17[8] ||
               ((this->ContextState).VertexAttrs[bVar1].bShouldConvertToFloat != puVar17[10])))))) {
            if (puVar17[10] == '\0') {
              (*glVertexAttribIFormat)
                        ((uint)bVar1,*(int *)(puVar17 + -4),
                         *(uint *)((TTypeCompatibleBytes<FOpenGLVertexElement> *)(puVar17 + -0x10))
                                  ->Pad,uVar14);
            }
            else {
              (*glVertexAttribFormat)
                        ((uint)bVar1,*(int *)(puVar17 + -4),
                         *(uint *)((TTypeCompatibleBytes<FOpenGLVertexElement> *)(puVar17 + -0x10))
                                  ->Pad,puVar17[8],uVar14);
            }
            (this->ContextState).VertexAttrs[bVar1].StreamOffset = *(uint *)(puVar17 + -8);
            (this->ContextState).VertexAttrs[bVar1].Size = *(uint *)(puVar17 + -4);
            (this->ContextState).VertexAttrs[bVar1].Type =
                 *(uint *)((TTypeCompatibleBytes<FOpenGLVertexElement> *)(puVar17 + -0x10))->Pad;
            (this->ContextState).VertexAttrs[bVar1].bNormalized = puVar17[8];
            (this->ContextState).VertexAttrs[bVar1].bShouldConvertToFloat = puVar17[10];
          }
          if ((this->ContextState).VertexAttrs[bVar1].StreamIndex != uVar16) {
            (*glVertexAttribBinding)((uint)bVar1,*(uint *)(puVar17 + -0xc));
            (this->ContextState).VertexAttrs[bVar1].StreamIndex = uVar16;
          }
          uVar16 = (this->ContextState).VertexAttrs_EnabledBits;
          if ((uVar16 & uVar12) == 0) {
            (this->ContextState).VertexAttrs_EnabledBits = uVar12 | uVar16;
            (*glEnableVertexAttribArray)((uint)bVar1);
          }
        }
        else {
          pHVar10 = wglGetCurrentContext();
          if (pHVar10 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext)
          {
            IsInRHIThread();
            IsInRenderingThread();
            IsInGameThread();
            UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
          }
          uVar16 = (this->ContextState).VertexAttrs_EnabledBits;
          if ((uVar16 & uVar12) != 0) {
            (this->ContextState).VertexAttrs_EnabledBits = ~uVar12 & uVar16;
            (*glDisableVertexAttribArray)((uint)bVar1);
          }
          (*glVertexAttrib4fv)((uint)bVar1,::data);
        }
        local_c0 = local_c0 + 1;
        puVar17 = puVar17 + 0x1c;
        uVar16 = local_c4;
      } while ((int)local_c0 < (pFVar5->VertexElements).ArrayNum);
    }
    (this->ContextState).VertexDecl = pFVar5;
  }
  uVar12 = ~*(uint *)&pFVar6->field_0x150 & (this->ContextState).VertexAttrs_EnabledBits;
  uVar14 = 0;
  do {
    if (uVar12 == 0) break;
    if ((uVar12 & 1) != 0) {
      (*glDisableVertexAttribArray)(uVar14);
      puVar11 = &(this->ContextState).VertexAttrs_EnabledBits;
      *puVar11 = *puVar11 & ~uVar15;
    }
    uVar12 = uVar12 >> 1;
    uVar14 = uVar14 + 1;
    uVar15 = uVar15 << 1 | (uint)((int)uVar15 < 0);
  } while (uVar14 < 0x10);
  uVar15 = (this->ContextState).ActiveStreamMask;
  uVar12 = ~uVar16;
  (this->ContextState).ActiveStreamMask = uVar16;
  uVar14 = 0;
  if (param_3 != 0) {
    puVar18 = local_98;
    puVar11 = &(this->ContextState).VertexStreams[0].Offset;
    do {
      if (uVar16 == 0) goto LAB_145c31002;
      if ((uVar16 & 1) != 0) {
        uVar2 = *(uint *)((longlong)puVar11 + (longlong)param_2 + (-0x147f0 - (longlong)this));
        if (uVar2 == 0) {
          if (1 < (byte)LogRHI._0_1_) {
            UE::Logging::Private::BasicLog<2>
                      ((FStaticBasicLogRecord *)&PTR_u_Stream__d_marke_1510e65e8,
                       (FLogCategoryBase *)&LogRHI);
          }
          (*glBindVertexBuffer)(uVar14,0,0,0);
          ((FOpenGLStream *)(puVar11 + -2))->VertexBufferResource = 0;
          ((FOpenGLStream *)(puVar11 + -2))->Stride = 0;
          *puVar11 = 0;
        }
        else {
          uVar3 = *(uint *)((longlong)param_2 + (-0x147ec - (longlong)this) + (longlong)puVar11);
          uVar13 = param_1 * uVar3 +
                   *(int *)((longlong)param_2 + (-0x147e8 - (longlong)this) + (longlong)puVar11);
          if (((((FOpenGLStream *)(puVar11 + -2))->VertexBufferResource != uVar2) ||
              (puVar11[-1] != uVar3)) || (*puVar11 != uVar13)) {
            (*glBindVertexBuffer)(uVar14,uVar2,(ulonglong)uVar13,uVar3);
            ((FOpenGLStream *)(puVar11 + -2))->VertexBufferResource =
                 *(uint *)((longlong)puVar11 + (longlong)param_2 + (-0x147f0 - (longlong)this));
            *puVar11 = uVar13;
            puVar11[-1] = *(uint *)((longlong)param_2 + (-0x147ec - (longlong)this) +
                                   (longlong)puVar11);
          }
          if ((bVar9) && (uVar2 = *puVar18, puVar11[1] != uVar2)) {
            (*glVertexBindingDivisor)(uVar14,uVar2);
            puVar11[1] = uVar2;
          }
        }
      }
      uVar14 = uVar14 + 1;
      puVar11 = puVar11 + 4;
      uVar16 = uVar16 >> 1;
      puVar18 = puVar18 + 1;
    } while (uVar14 < param_3);
  }
  if ((uVar16 != 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StreamMask == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLCommands.cpp"
                         ,0x7c0,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
LAB_145c31002:
  uVar14 = 0;
  puVar11 = &(this->ContextState).VertexStreams[0].Offset;
  uVar16 = uVar15 & uVar12;
  do {
    uVar15 = uVar16;
    if (uVar15 == 0) {
      return;
    }
    if ((uVar15 & 1) != 0) {
      (*glBindVertexBuffer)(uVar14,0,0,0);
      ((FOpenGLStream *)(puVar11 + -2))->VertexBufferResource = 0;
      ((FOpenGLStream *)(puVar11 + -2))->Stride = 0;
      *puVar11 = 0;
    }
    uVar14 = uVar14 + 1;
    puVar11 = puVar11 + 4;
    uVar16 = uVar15 >> 1;
  } while (uVar14 < 0x10);
  if ((uVar15 >> 1 != 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("NotUsedButActiveStreamMask == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLCommands.cpp"
                         ,0x7ce,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  return;
}

// Shutdown @ 145c310a0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOpenGLDynamicRHI::Shutdown(FOpenGLDynamicRHI *this)

{
  uint *puVar1;
  int iVar2;
  FPlatformOpenGLDevice *pFVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  BOOL BVar7;
  HGLRC pHVar8;
  uint *puVar9;
  int *piVar10;
  undefined1 local_res8 [8];
  uint local_res10 [2];
  
  bVar6 = IsInGameThread();
  if (bVar6) {
    bVar6 = IsInRenderingThread();
    if (bVar6) goto LAB_145c310ef;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsInGameThread() && IsInRenderingThread()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLDevice.cpp"
                     ,0x553,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_145c310ef:
  FOpenGLRenderQuery::PollQueryResults((FOpenGLRenderQuery *)0x0);
  Cleanup(this);
  pHVar8 = wglGetCurrentContext();
  if (pHVar8 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (FOpenGLRenderQuery::ActiveQueries.Count != 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActiveQueries.Count == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLQuery.cpp"
                       ,0x1a2,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  piVar10 = (int *)&FOpenGLRenderQuery::PooledQueries.field_0x8;
  do {
    puVar9 = *(uint **)(piVar10 + -2);
    iVar2 = *piVar10;
    puVar1 = puVar9 + iVar2;
    while( true ) {
      if (*piVar10 != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (puVar9 == puVar1) break;
      local_res10[0] = *puVar9;
      (*glDeleteQueries)(1,local_res10);
      puVar9 = puVar9 + 1;
    }
    *piVar10 = 0;
    if (piVar10[1] < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)(piVar10 + -2),0,piVar10 + 1);
    }
    bVar6 = piVar10 != (int *)&FOpenGLRenderQuery::PooledQueries.field_0x28;
    piVar10 = piVar10 + 4;
  } while (bVar6);
  DestroyShadersAndPrograms();
  pFVar3 = this->PlatformDevice;
  if (pFVar3 != (FPlatformOpenGLDevice *)0x0) {
    if ((pFVar3->ViewportContexts).ArrayNum != 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ViewportContexts.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\Windows\\WindowsOpenGLPlatform.cpp"
                         ,0x12a,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    BVar7 = wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
    if (BVar7 == 0) {
      BVar7 = wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
      if (BVar7 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\Windows\\WindowsOpenGLPlatform.cpp"
                           ,0x18,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
    }
    PlatformReleaseOpenGLContext(pFVar3,&pFVar3->RenderingContext);
    lpCriticalSection = (LPCRITICAL_SECTION)pFVar3->ContextUsageGuard;
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      DeleteCriticalSection(lpCriticalSection);
      ::operator_delete(lpCriticalSection,0x28);
    }
    if (FPlatformOpenGLDevice::Singleton != pFVar3) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\Windows\\WindowsOpenGLPlatform.cpp"
                         ,0x131,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FPlatformOpenGLDevice::Singleton = (FPlatformOpenGLDevice *)0x0;
    pFVar4 = (pFVar3->ViewportContexts).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    ::operator_delete(pFVar3,0x50);
  }
  PrivateOpenGLDevicePtr = (FOpenGLDynamicRHI *)0x0;
  return;
}

// UnlockBuffer_BottomOfPipe @ 145c35b20

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::UnlockBuffer_BottomOfPipe
          (FOpenGLDynamicRHI *this,FRHICommandListBase *param_1,FRHIBuffer *param_2)

{
  uint uVar1;
  code *pcVar2;
  PoolAllocation *pPVar3;
  bool bVar4;
  HGLRC pHVar5;
  PoolAllocation *local_res18;
  
  pHVar5 = wglGetCurrentContext();
  if (pHVar5 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if ((glBufferStorage != (_func___cdecl_void_uint_long64_void_ptr_uint *)0x0) &&
     (OpenGLConsoleVariables::bUseStagingBuffer != 0)) {
    local_res18 = (PoolAllocation *)0x0;
    bVar4 = TMap<void_*,PoolAllocation_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,PoolAllocation_*,0>_>
            ::RemoveAndCopyValue(&AllocationMap,param_2,&local_res18);
    pPVar3 = local_res18;
    if (bVar4) {
      if (local_res18 == (PoolAllocation *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Alloc",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBuffer.cpp"
                           ,0x8f,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      FOpenGLBufferBase::Bind((FOpenGLBufferBase *)&param_2[1]._padding_);
      uVar1._0_3_ = pPVar3->Offset;
      uVar1._3_1_ = pPVar3->AlignmentPadding;
      (*glCopyBufferSubData)
                (0x8f36,0x8892,
                 (long64)(pPVar3->BasePointer + ((ulonglong)(uVar1 >> 0x18) - (longlong)PoolPointer)
                         ),(ulonglong)uVar1 & 0xffffff,(long64)pPVar3->SizeWithoutPadding);
      pPVar3->FrameRetired = GFrameNumberRenderThread;
      return;
    }
  }
  TOpenGLBuffer<FOpenGLBaseBuffer>::Unlock((TOpenGLBuffer<FOpenGLBaseBuffer> *)param_2);
  return;
}

// UnlockStagingBuffer_RenderThread @ 145c35c80

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::UnlockStagingBuffer_RenderThread
          (FOpenGLDynamicRHI *this,FRHICommandListImmediate *param_1,FRHIStagingBuffer *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FOpenGLDynamicRHI::UnlockStagingBuffer_RenderThread(FRHICommandListImmediate_&,FRHIStagingBuffer_*)_::_2_::FStat_STAT_FDynamicRHI_UnlockStagingBuffer_RenderThread>
  FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FColor_u_0 local_res20 [2];
  FName local_58;
  LARGE_INTEGER local_50;
  FName local_48;
  FName local_40;
  FName local_38;
  FStatMessage local_28;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_FDynamicRHI_UnlockStagingBuffer_RenderThread ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FOpenGLDynamicRHI::UnlockStagingBuffer_RenderThread(FRHICommandListImmediate_&,FRHIStagingBuffer_*)_::_2_::FStat_STAT_FDynamicRHI_UnlockStagingBuffer_RenderThread>
           )0x0) {
        pFVar7 = ::FName::FName(&local_48,"STAT_FDynamicRHI_UnlockStagingBuffer_RenderThread");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_STAT_FDynamicRHI_UnlockStagingBuffer_RenderThread,*pFVar7,
                   L"STAT_FDynamicRHI_UnlockStagingBuffer_RenderThread","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar8 = StatPtr_STAT_FDynamicRHI_UnlockStagingBuffer_RenderThread;
  if (StatPtr_STAT_FDynamicRHI_UnlockStagingBuffer_RenderThread ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FOpenGLDynamicRHI::UnlockStagingBuffer_RenderThread(FRHICommandListImmediate_&,FRHIStagingBuffer_*)_::_2_::FStat_STAT_FDynamicRHI_UnlockStagingBuffer_RenderThread>
       )0x0) {
    pFVar7 = ::FName::FName(&local_40,"STAT_FDynamicRHI_UnlockStagingBuffer_RenderThread");
    FVar8 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FOpenGLDynamicRHI::UnlockStagingBuffer_RenderThread(FRHICommandListImmediate_&,FRHIStagingBuffer_*)_::_2_::FStat_STAT_FDynamicRHI_UnlockStagingBuffer_RenderThread>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_FDynamicRHI_UnlockStagingBuffer_RenderThread,*pFVar7,
                         L"STAT_FDynamicRHI_UnlockStagingBuffer_RenderThread","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_58.ComparisonIndex.Value = FVar10.Value;
        local_58.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_58,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBuffer.cpp"
                   ,0x194);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_50.s.LowPart = FVar10.Value;
      local_50.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      goto LAB_145c35df1;
    }
  }
  bVar4 = false;
  FVar11 = local_38;
LAB_145c35df1:
  bVar6 = IsInRenderingThread();
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBuffer.cpp"
                       ,0x195,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (**(code **)(GDynamicRHI->_padding_ + 0xf0))(GDynamicRHI,param_2);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_28.NameAndInfo.Index = FVar11.ComparisonIndex.Value;
      local_28.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_50);
      local_28.StatData.Pad[4] = '\0';
      local_28.StatData.Pad[5] = '\0';
      local_28.StatData.Pad[6] = '\0';
      local_28.StatData.Pad[7] = '\0';
      local_28.StatData.Pad[0] = local_50.s.LowPart._0_1_;
      local_28.StatData.Pad[1] = local_50.s.LowPart._1_1_;
      local_28.StatData.Pad[2] = local_50.s.LowPart._2_1_;
      local_28.StatData.Pad[3] = local_50.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_28);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// UpdateDepthStencilStateInOpenGLContext @ 145c35fe0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOpenGLDynamicRHI::UpdateDepthStencilStateInOpenGLContext(FOpenGLDynamicRHI *this)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  bool bVar4;
  uint uVar5;
  char cVar6;
  HGLRC pHVar7;
  
  pHVar7 = wglGetCurrentContext();
  if (pHVar7 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  bVar4 = (this->PendingState).DepthStencilState.bZEnable;
  if ((this->ContextState).DepthStencilState.bZEnable != bVar4) {
    if (bVar4 == false) {
      (*glDisable)(0xb71);
    }
    else {
      (*glEnable)(0xb71);
    }
    (this->ContextState).DepthStencilState.bZEnable =
         (this->PendingState).DepthStencilState.bZEnable;
  }
  bVar4 = (this->PendingState).DepthStencilState.bZWriteEnable;
  if ((this->ContextState).DepthStencilState.bZWriteEnable != bVar4) {
    (*glDepthMask)(bVar4);
    (this->ContextState).DepthStencilState.bZWriteEnable =
         (this->PendingState).DepthStencilState.bZWriteEnable;
  }
  if (((this->PendingState).DepthStencilState.bZEnable != false) &&
     (uVar5 = (this->PendingState).DepthStencilState.ZFunc,
     (this->ContextState).DepthStencilState.ZFunc != uVar5)) {
    (*glDepthFunc)(uVar5);
    (this->ContextState).DepthStencilState.ZFunc = (this->PendingState).DepthStencilState.ZFunc;
  }
  cVar6 = (this->PendingState).DepthStencilState.bStencilEnable;
  if ((this->ContextState).DepthStencilState.bStencilEnable != (bool)cVar6) {
    if ((bool)cVar6 == false) {
      (*glDisable)(0xb90);
    }
    else {
      (*glEnable)(0xb90);
    }
    cVar6 = (this->PendingState).DepthStencilState.bStencilEnable;
    (this->ContextState).DepthStencilState.bStencilEnable = (bool)cVar6;
  }
  bVar4 = (this->PendingState).DepthStencilState.bTwoSidedStencilMode;
  puVar1 = &(this->ContextState).DepthStencilState.StencilFail;
  puVar2 = &(this->ContextState).DepthStencilState.StencilReadMask;
  puVar3 = &(this->ContextState).DepthStencilState.StencilFunc;
  if ((this->ContextState).DepthStencilState.bTwoSidedStencilMode != bVar4) {
    *puVar3 = 0xffff;
    *puVar1 = 0xffff;
    (this->ContextState).DepthStencilState.StencilZFail = 0xffff;
    (this->ContextState).DepthStencilState.StencilPass = 0xffff;
    (this->ContextState).DepthStencilState.CCWStencilFunc = 0xffff;
    (this->ContextState).DepthStencilState.CCWStencilFail = 0xffff;
    (this->ContextState).DepthStencilState.CCWStencilZFail = 0xffff;
    (this->ContextState).DepthStencilState.CCWStencilPass = 0xffff;
    *puVar2 = 0xffff;
    (this->ContextState).DepthStencilState.bTwoSidedStencilMode = bVar4;
  }
  if (cVar6 != '\0') {
    uVar5 = (this->PendingState).DepthStencilState.StencilFunc;
    if (bVar4 == false) {
      if (((*puVar3 != uVar5) ||
          ((this->ContextState).StencilRef != (this->PendingState).StencilRef)) ||
         (*puVar2 != (this->PendingState).DepthStencilState.StencilReadMask)) {
        (*glStencilFunc)(uVar5,(this->PendingState).StencilRef,
                         (this->PendingState).DepthStencilState.StencilReadMask);
        *puVar3 = (this->PendingState).DepthStencilState.StencilFunc;
        *puVar2 = (this->PendingState).DepthStencilState.StencilReadMask;
        (this->ContextState).StencilRef = (this->PendingState).StencilRef;
      }
      uVar5 = (this->PendingState).DepthStencilState.StencilFail;
      if (((*puVar1 != uVar5) ||
          ((this->ContextState).DepthStencilState.StencilZFail !=
           (this->PendingState).DepthStencilState.StencilZFail)) ||
         ((this->ContextState).DepthStencilState.StencilPass !=
          (this->PendingState).DepthStencilState.StencilPass)) {
        (*glStencilOp)(uVar5,(this->PendingState).DepthStencilState.StencilZFail,
                       (this->PendingState).DepthStencilState.StencilPass);
        (this->ContextState).DepthStencilState.StencilFail =
             (this->PendingState).DepthStencilState.StencilFail;
        (this->ContextState).DepthStencilState.StencilZFail =
             (this->PendingState).DepthStencilState.StencilZFail;
        (this->ContextState).DepthStencilState.StencilPass =
             (this->PendingState).DepthStencilState.StencilPass;
      }
    }
    else {
      if (((*puVar3 != uVar5) ||
          ((this->ContextState).StencilRef != (this->PendingState).StencilRef)) ||
         (*puVar2 != (this->PendingState).DepthStencilState.StencilReadMask)) {
        (*glStencilFuncSeparate)
                  (0x405,uVar5,(this->PendingState).StencilRef,
                   (this->PendingState).DepthStencilState.StencilReadMask);
        *puVar3 = (this->PendingState).DepthStencilState.StencilFunc;
      }
      uVar5 = (this->PendingState).DepthStencilState.StencilFail;
      if ((((this->ContextState).DepthStencilState.StencilFail != uVar5) ||
          ((this->ContextState).DepthStencilState.StencilZFail !=
           (this->PendingState).DepthStencilState.StencilZFail)) ||
         ((this->ContextState).DepthStencilState.StencilPass !=
          (this->PendingState).DepthStencilState.StencilPass)) {
        (*glStencilOpSeparate)
                  (0x405,uVar5,(this->PendingState).DepthStencilState.StencilZFail,
                   (this->PendingState).DepthStencilState.StencilPass);
        (this->ContextState).DepthStencilState.StencilFail =
             (this->PendingState).DepthStencilState.StencilFail;
        (this->ContextState).DepthStencilState.StencilZFail =
             (this->PendingState).DepthStencilState.StencilZFail;
        (this->ContextState).DepthStencilState.StencilPass =
             (this->PendingState).DepthStencilState.StencilPass;
      }
      uVar5 = (this->PendingState).DepthStencilState.CCWStencilFunc;
      if ((((this->ContextState).DepthStencilState.CCWStencilFunc != uVar5) ||
          ((this->ContextState).StencilRef != (this->PendingState).StencilRef)) ||
         ((this->ContextState).DepthStencilState.StencilReadMask !=
          (this->PendingState).DepthStencilState.StencilReadMask)) {
        (*glStencilFuncSeparate)
                  (0x404,uVar5,(this->PendingState).StencilRef,
                   (this->PendingState).DepthStencilState.StencilReadMask);
        (this->ContextState).DepthStencilState.CCWStencilFunc =
             (this->PendingState).DepthStencilState.CCWStencilFunc;
      }
      uVar5 = (this->PendingState).DepthStencilState.CCWStencilFail;
      if ((((this->ContextState).DepthStencilState.CCWStencilFail != uVar5) ||
          ((this->ContextState).DepthStencilState.CCWStencilZFail !=
           (this->PendingState).DepthStencilState.CCWStencilZFail)) ||
         ((this->ContextState).DepthStencilState.CCWStencilPass !=
          (this->PendingState).DepthStencilState.CCWStencilPass)) {
        (*glStencilOpSeparate)
                  (0x404,uVar5,(this->PendingState).DepthStencilState.CCWStencilZFail,
                   (this->PendingState).DepthStencilState.CCWStencilPass);
        (this->ContextState).DepthStencilState.CCWStencilFail =
             (this->PendingState).DepthStencilState.CCWStencilFail;
        (this->ContextState).DepthStencilState.CCWStencilZFail =
             (this->PendingState).DepthStencilState.CCWStencilZFail;
        (this->ContextState).DepthStencilState.CCWStencilPass =
             (this->PendingState).DepthStencilState.CCWStencilPass;
      }
      (this->ContextState).DepthStencilState.StencilReadMask =
           (this->PendingState).DepthStencilState.StencilReadMask;
      (this->ContextState).StencilRef = (this->PendingState).StencilRef;
    }
    uVar5 = (this->PendingState).DepthStencilState.StencilWriteMask;
    if ((this->ContextState).DepthStencilState.StencilWriteMask != uVar5) {
      (*glStencilMask)(uVar5);
      (this->ContextState).DepthStencilState.StencilWriteMask =
           (this->PendingState).DepthStencilState.StencilWriteMask;
    }
  }
  return;
}

// UpdateRasterizerStateInOpenGLContext @ 145c36900

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOpenGLDynamicRHI::UpdateRasterizerStateInOpenGLContext(FOpenGLDynamicRHI *this)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  ERasterizerDepthClipMode EVar5;
  uint uVar6;
  uint uVar7;
  HGLRC pHVar8;
  float fVar9;
  
  pHVar8 = wglGetCurrentContext();
  if (pHVar8 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  uVar6 = (this->PendingState).RasterizerState.FillMode;
  if ((this->ContextState).RasterizerState.FillMode != uVar6) {
    (*glPolygonMode)(0x408,uVar6);
    (this->ContextState).RasterizerState.FillMode = (this->PendingState).RasterizerState.FillMode;
  }
  uVar6 = (this->PendingState).RasterizerState.CullMode;
  uVar7 = (this->ContextState).RasterizerState.CullMode;
  if (uVar7 != uVar6) {
    if (uVar6 == 0) {
      (*glDisable)(0xb44);
    }
    else {
      if (uVar7 == 0) {
        (*glEnable)(0xb44);
      }
      (*glCullFace)((this->PendingState).RasterizerState.CullMode);
    }
    (this->ContextState).RasterizerState.CullMode = (this->PendingState).RasterizerState.CullMode;
  }
  EVar5 = (this->PendingState).RasterizerState.DepthClipMode;
  if ((this->ContextState).RasterizerState.DepthClipMode != EVar5) {
    if (EVar5 == DepthClamp) {
      (*glEnable)(0x864f);
    }
    else {
      (*glDisable)(0x864f);
    }
    (this->ContextState).RasterizerState.DepthClipMode =
         (this->PendingState).RasterizerState.DepthClipMode;
  }
  fVar3 = (this->PendingState).RasterizerState.DepthBias;
  fVar4 = (this->ContextState).RasterizerState.DepthBias;
  pfVar1 = &(this->ContextState).RasterizerState.SlopeScaleDepthBias;
  pfVar2 = &(this->PendingState).RasterizerState.SlopeScaleDepthBias;
  fVar9 = fVar3 * __real_4b7fffff;
  if ((fVar4 != fVar3) || (*pfVar2 != *pfVar1)) {
    if ((fVar9 == 0.0) && (*pfVar2 == 0.0)) {
      (*glDisable)(0x8037);
      (*glDisable)(0x2a02);
      (*glDisable)(0x2a01);
    }
    else {
      if ((fVar4 == 0.0) && (*pfVar1 == 0.0)) {
        (*glEnable)(0x8037);
        (*glEnable)(0x2a02);
        (*glEnable)(0x2a01);
      }
      (*glPolygonOffset)(*pfVar2,fVar9);
    }
    (this->ContextState).RasterizerState.DepthBias = (this->PendingState).RasterizerState.DepthBias;
    *pfVar1 = *pfVar2;
  }
  return;
}

// UpdateSRV @ 145c36b10

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FOpenGLDynamicRHI::UpdateSRV(FOpenGLDynamicRHI *this,FOpenGLShaderResourceView *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (FOpenGLShaderResourceView *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SRV",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLCommands.cpp"
                       ,0x34f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// UpdateScissorRectInOpenGLContext @ 145c36b50

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOpenGLDynamicRHI::UpdateScissorRectInOpenGLContext(FOpenGLDynamicRHI *this)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  HGLRC pHVar6;
  
  pHVar6 = wglGetCurrentContext();
  if (pHVar6 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  cVar4 = (this->PendingState).bScissorEnabled;
  if ((this->ContextState).bScissorEnabled != (bool)cVar4) {
    if ((bool)cVar4 == false) {
      (*glDisable)(0xc11);
    }
    else {
      (*glEnable)(0xc11);
    }
    cVar4 = (this->PendingState).bScissorEnabled;
    (this->ContextState).bScissorEnabled = (bool)cVar4;
  }
  if ((cVar4 != '\0') &&
     ((((iVar1 = *(int *)&(this->PendingState).Scissor.field0_0x0,
        *(int *)&(this->ContextState).Scissor.field0_0x0 != iVar1 ||
        (*(int *)((longlong)&(this->ContextState).Scissor.field0_0x0 + 4) !=
         *(int *)((longlong)&(this->PendingState).Scissor.field0_0x0 + 4))) ||
       (*(int *)((longlong)&(this->ContextState).Scissor.field0_0x0 + 8) !=
        *(int *)((longlong)&(this->PendingState).Scissor.field0_0x0 + 8))) ||
      (*(int *)((longlong)&(this->ContextState).Scissor.field0_0x0 + 0xc) !=
       *(int *)((longlong)&(this->PendingState).Scissor.field0_0x0 + 0xc))))) {
    if (*(int *)((longlong)&(this->PendingState).Scissor.field0_0x0 + 8) < iVar1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PendingState.Scissor.Min.X <= PendingState.Scissor.Max.X",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLCommands.cpp"
                         ,0x15e,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (*(int *)((longlong)&(this->PendingState).Scissor.field0_0x0 + 0xc) <
        *(int *)((longlong)&(this->PendingState).Scissor.field0_0x0 + 4)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PendingState.Scissor.Min.Y <= PendingState.Scissor.Max.Y",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLCommands.cpp"
                         ,0x15f,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar1 = *(int *)((longlong)&(this->PendingState).Scissor.field0_0x0 + 4);
    iVar2 = *(int *)&(this->PendingState).Scissor.field0_0x0;
    (*glScissor)(iVar2,iVar1,
                 *(int *)((longlong)&(this->PendingState).Scissor.field0_0x0 + 8) - iVar2,
                 *(int *)((longlong)&(this->PendingState).Scissor.field0_0x0 + 0xc) - iVar1);
    (this->ContextState).Scissor.field0_0x0._s_0.Min.field0_0x0 =
         (this->PendingState).Scissor.field0_0x0._s_0.Min.field0_0x0;
    (this->ContextState).Scissor.field0_0x0._s_0.Max.field0_0x0 =
         (this->PendingState).Scissor.field0_0x0._s_0.Max.field0_0x0;
  }
  return;
}

// UpdateViewportInOpenGLContext @ 145c37b40

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOpenGLDynamicRHI::UpdateViewportInOpenGLContext(FOpenGLDynamicRHI *this)

{
  TIntPoint<int> *pTVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  HGLRC pHVar7;
  
  pHVar7 = wglGetCurrentContext();
  if (pHVar7 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  iVar5 = *(int *)&(this->PendingState).Viewport.field0_0x0;
  if ((((*(int *)&(this->ContextState).Viewport.field0_0x0 != iVar5) ||
       (*(int *)((longlong)&(this->ContextState).Viewport.field0_0x0 + 4) !=
        *(int *)((longlong)&(this->PendingState).Viewport.field0_0x0 + 4))) ||
      (*(int *)((longlong)&(this->ContextState).Viewport.field0_0x0 + 8) !=
       *(int *)((longlong)&(this->PendingState).Viewport.field0_0x0 + 8))) ||
     (*(int *)((longlong)&(this->ContextState).Viewport.field0_0x0 + 0xc) !=
      *(int *)((longlong)&(this->PendingState).Viewport.field0_0x0 + 0xc))) {
    pTVar1 = &(this->PendingState).Viewport.field0_0x0._s_0.Max;
    iVar6 = *(int *)((longlong)&(this->PendingState).Viewport.field0_0x0 + 4);
    (*glViewport)(iVar5,iVar6,(pTVar1->field0_0x0)._s_0.X - iVar5,
                  *(int *)((longlong)&(this->PendingState).Viewport.field0_0x0 + 0xc) - iVar6);
    (this->ContextState).Viewport.field0_0x0._s_0.Min.field0_0x0 =
         (this->PendingState).Viewport.field0_0x0._s_0.Min.field0_0x0;
    (this->ContextState).Viewport.field0_0x0._s_0.Max.field0_0x0._s_0 =
         (TIntPoint<int>_u_0_s_0)pTVar1->field0_0x0;
  }
  fVar4 = (this->PendingState).DepthMinZ;
  pfVar2 = &(this->ContextState).DepthMaxZ;
  pfVar3 = &(this->PendingState).DepthMaxZ;
  if ((fVar4 != (this->ContextState).DepthMinZ) || (*pfVar3 != *pfVar2)) {
    (*glDepthRange)((double)fVar4,(double)*pfVar3);
    (this->ContextState).DepthMinZ = (this->PendingState).DepthMinZ;
    *pfVar2 = *pfVar3;
  }
  return;
}

