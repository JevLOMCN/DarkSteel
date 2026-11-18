// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 7

// Init @ 145c05130

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EShaderStage": Some values do not have unique names */

void __thiscall FOpenGLResourceBinder::Init(FOpenGLResourceBinder *this)

{
  EShaderFrequency EVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  EVar1 = this->ShaderFrequency;
  if (EVar1 == SF_Vertex) {
    this->ShaderStage = SHADER_STAGE_VERTEX;
    if ((FOpenGLBase::MaxTextureImageUnits == -1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("MaxTextureImageUnits != -1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBase.h"
                           ,0x78,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this->FirstTextureUnit = FOpenGLBase::MaxTextureImageUnits;
    iVar4 = FOpenGLBase::MaxVertexTextureImageUnits;
    if ((FOpenGLBase::MaxVertexTextureImageUnits == -1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("MaxVertexTextureImageUnits != -1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBase.h"
                           ,0x79,L""), iVar4 = FOpenGLBase::MaxVertexTextureImageUnits, bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if (EVar1 != SF_Pixel) {
      if (EVar1 != SF_Geometry) {
        if (EVar1 != SF_Compute) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLCommands.cpp"
                             ,0x406,L"Undefined FRHIShader Type %d!");
          if (!bVar3) {
            return;
          }
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this->ShaderStage = NUM_NON_COMPUTE_SHADER_STAGES;
        this->FirstTextureUnit = 0;
        if ((FOpenGLBase::MaxComputeTextureImageUnits == -1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("MaxComputeTextureImageUnits != -1",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBase.h"
                               ,0x7b,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this->MaxTextureImageUnits = FOpenGLBase::MaxComputeTextureImageUnits;
        this->FirstUAVUnit = 0;
        if ((FOpenGL4::MaxComputeUAVUnits == -1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("MaxComputeUAVUnits != -1",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGL4.h"
                               ,0x6b,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this->MaxUAVUnits = FOpenGL4::MaxComputeUAVUnits;
        return;
      }
      this->ShaderStage = SHADER_STAGE_GEOMETRY;
      if ((FOpenGLBase::MaxTextureImageUnits == -1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("MaxTextureImageUnits != -1",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBase.h"
                             ,0x78,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = FOpenGLBase::MaxTextureImageUnits;
      if ((FOpenGLBase::MaxVertexTextureImageUnits == -1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("MaxVertexTextureImageUnits != -1",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBase.h"
                             ,0x79,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this->FirstTextureUnit = FOpenGLBase::MaxVertexTextureImageUnits + iVar4;
      if ((FOpenGLBase::MaxGeometryTextureImageUnits == -1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("MaxGeometryTextureImageUnits != -1",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBase.h"
                             ,0x7a,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = FOpenGLBase::MaxGeometryTextureImageUnits;
      this->FirstUAVUnit = 0;
      this->MaxUAVUnits = 0;
      this->MaxTextureImageUnits = iVar4;
      return;
    }
    this->ShaderStage = SHADER_STAGE_PIXEL;
    this->FirstTextureUnit = 0;
    iVar4 = FOpenGLBase::MaxTextureImageUnits;
    if ((FOpenGLBase::MaxTextureImageUnits == -1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("MaxTextureImageUnits != -1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBase.h"
                           ,0x78,L""), iVar4 = FOpenGLBase::MaxTextureImageUnits, bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->MaxTextureImageUnits = iVar4;
  this->FirstUAVUnit = 0;
  if ((FOpenGL4::MaxPixelUAVUnits == -1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("MaxPixelUAVUnits != -1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGL4.h"
                         ,0x6e,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this->MaxUAVUnits = FOpenGL4::MaxPixelUAVUnits;
  return;
}

// SetSRV @ 145c2ef10

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EShaderStage": Some values do not have unique names */

void __thiscall
FOpenGLResourceBinder::SetSRV
          (FOpenGLResourceBinder *this,FRHIShaderResourceView *param_1,uchar param_2)

{
  FOpenGLDynamicRHI *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  byte local_res18 [8];
  FOpenGLResourceBinder *local_18;
  byte *local_10;
  
  local_res18[0] = param_2;
  if (this->MaxTextureImageUnits <= (int)(uint)param_2) {
    local_10 = local_res18;
    local_18 = this;
    `FOpenGLResourceBinder::SetSRV'::__l2::<lambda_1>::operator()(&local_18);
  }
  if (param_1 != (FRHIShaderResourceView *)0x0) {
    if (*(uint *)&param_1[1].field_0x1c == 0x90d2) {
      FOpenGLDynamicRHI::InternalSetShaderBufferUAV
                (this->RHI,(uint)local_res18[0] + this->FirstUAVUnit,*(uint *)&param_1[1].field_0x18
                );
      return;
    }
    FOpenGLDynamicRHI::InternalSetShaderTexture
              (this->RHI,(FOpenGLTexture *)0x0,(FOpenGLShaderResourceView *)param_1,
               (uint)local_res18[0] + this->FirstTextureUnit,*(uint *)&param_1[1].field_0x1c,
               *(uint *)&param_1[1].field_0x18,1,*(int *)&param_1[1].field_0x20);
    FOpenGLDynamicRHI::InternalSetSamplerStates
              (this->RHI,(uint)local_res18[0] + this->FirstTextureUnit,
               (FOpenGLSamplerState *)(this->RHI->PointSamplerState).Reference);
    return;
  }
  uVar7 = (uint)local_res18[0] + this->FirstTextureUnit;
  pFVar1 = this->RHI;
  uVar5 = 0;
  if ((int)uVar7 < (int)(pFVar1->PendingState)._padding_) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar6 = (longlong)(int)uVar7;
  lVar2 = (pFVar1->PendingState)._padding_;
  *(undefined8 *)(lVar2 + lVar6 * 0x28) = 0;
  *(undefined8 *)(lVar2 + 8 + lVar6 * 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x10 + lVar6 * 0x28) = 0x8c2a;
  *(undefined4 *)(lVar2 + 0x18 + lVar6 * 0x28) = 0xffffffff;
  *(undefined1 *)(lVar2 + 0x1c + lVar6 * 0x28) = 1;
  *(undefined4 *)(lVar2 + 0x20 + lVar6 * 0x28) = 0;
  FOpenGLDynamicRHI::InternalSetSamplerStates
            (this->RHI,(uint)local_res18[0] + this->FirstTextureUnit,
             (FOpenGLSamplerState *)(this->RHI->PointSamplerState).Reference);
  return;
}

// SetTexture @ 145c2f8c0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EShaderStage": Some values do not have unique names */

void __thiscall
FOpenGLResourceBinder::SetTexture(FOpenGLResourceBinder *this,FRHITexture *param_1,uchar param_2)

{
  byte bVar1;
  FOpenGLDynamicRHI *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FOpenGLTexture *this_00;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  byte local_res18 [16];
  FOpenGLResourceBinder *local_28;
  byte *local_20;
  
  local_res18[0] = param_2;
  if (this->MaxTextureImageUnits <= (int)(uint)param_2) {
    local_20 = local_res18;
    local_28 = this;
    `FOpenGLResourceBinder::SetTexture'::__l2::<lambda_1>::operator()(&local_28);
  }
  if ((param_1 == (FRHITexture *)0x0) ||
     (this_00 = (FOpenGLTexture *)(**(code **)(param_1->_padding_ + 0x48))(param_1),
     this_00 == (FOpenGLTexture *)0x0)) {
    pFVar2 = this->RHI;
    uVar8 = (uint)local_res18[0] + this->FirstTextureUnit;
    uVar5 = 0;
    if ((int)uVar8 < (int)(pFVar2->PendingState)._padding_) {
      uVar5 = ~uVar8 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar7 = (longlong)(int)uVar8;
    lVar6 = (pFVar2->PendingState)._padding_;
    *(undefined8 *)(lVar6 + lVar7 * 0x28) = 0;
    *(undefined8 *)(lVar6 + 8 + lVar7 * 0x28) = 0;
    *(undefined8 *)(lVar6 + 0x10 + lVar7 * 0x28) = 0;
    *(undefined4 *)(lVar6 + 0x20 + lVar7 * 0x28) = 0;
    *(undefined4 *)(lVar6 + 0x18 + lVar7 * 0x28) = 0xffffffff;
    *(undefined1 *)(lVar6 + 0x1c + lVar7 * 0x28) = 1;
  }
  else {
    pFVar2 = this->RHI;
    lVar6 = (**(code **)(this_00->_padding_ + 0x20))(this_00);
    bVar1 = *(byte *)(lVar6 + 0x30);
    FOpenGLTexture::TryRestoreGLResource(this_00);
    FOpenGLDynamicRHI::InternalSetShaderTexture
              (pFVar2,this_00,(FOpenGLShaderResourceView *)0x0,
               (uint)local_res18[0] + this->FirstTextureUnit,this_00->Target,this_00->Resource,
               (uint)bVar1,-1);
  }
  if (this->bClearTextureSamplers != false) {
    FOpenGLDynamicRHI::InternalSetSamplerStates
              (this->RHI,(uint)local_res18[0] + this->FirstTextureUnit,(FOpenGLSamplerState *)0x0);
  }
  return;
}

// SetUAV @ 145c2fa50

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EShaderStage": Some values do not have unique names */

void __thiscall
FOpenGLResourceBinder::SetUAV
          (FOpenGLResourceBinder *this,FRHIUnorderedAccessView *param_1,uchar param_2)

{
  EShaderFrequency EVar1;
  byte bVar2;
  FOpenGLDynamicRHI *this_00;
  bool bVar3;
  int iVar4;
  uint uVar5;
  byte local_res18 [16];
  FOpenGLResourceBinder *local_28;
  byte *local_20;
  
  local_res18[0] = param_2;
  if (this->MaxUAVUnits <= (int)(uint)param_2) {
    local_20 = local_res18;
    local_28 = this;
    `FOpenGLResourceBinder::SetUAV'::__l2::<lambda_1>::operator()(&local_28);
  }
  iVar4 = (uint)local_res18[0] + this->FirstUAVUnit;
  if (param_1 == (FRHIUnorderedAccessView *)0x0) {
    uVar5 = 0;
  }
  else {
    if (*(int *)&param_1[1].field_0x18 != 0) {
      EVar1 = this->ShaderFrequency;
      this_00 = this->RHI;
      bVar2 = param_1[1].field_0x25;
      bVar3 = FOpenGLUnorderedAccessView::IsLayered((FOpenGLUnorderedAccessView *)param_1);
      FOpenGLDynamicRHI::InternalSetShaderImageUAV
                (this_00,iVar4,*(uint *)&param_1[1].field_0x20,*(uint *)&param_1[1].field_0x18,bVar3
                 ,0,(EVar1 == SF_Compute) + 0x88b9,(uint)bVar2);
      return;
    }
    uVar5 = *(uint *)&param_1[1].field_0x1c;
  }
  FOpenGLDynamicRHI::InternalSetShaderBufferUAV(this->RHI,iVar4,uVar5);
  return;
}

// operator() @ 1504d9800

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

bool __thiscall `FOpenGLResourceBinder::SetSRV'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2122185203999833041>);
  if (bVar2) {
    GetShaderFrequencyString(*(EShaderFrequency *)(*(longlong *)this + 8),false);
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2122185203999833041>,
                       &`public:___cdecl_`public:_void___cdecl_FOpenGLResourceBinder::SetSRV(FRHIShaderResourceView*___ptr64,unsigned_char)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d9870

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

bool __thiscall `FOpenGLResourceBinder::SetTexture'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2122185203999833013>);
  if (bVar2) {
    GetShaderFrequencyString(*(EShaderFrequency *)(*(longlong *)this + 8),false);
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2122185203999833013>,
                       &`public:___cdecl_`public:_void___cdecl_FOpenGLResourceBinder::SetTexture(FRHITexture*___ptr64,unsigned_char)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d98e0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

bool __thiscall `FOpenGLResourceBinder::SetUAV'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2122185203999833070>);
  if (bVar2) {
    GetShaderFrequencyString(*(EShaderFrequency *)(*(longlong *)this + 8),false);
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2122185203999833070>,
                       &`public:___cdecl_`public:_void___cdecl_FOpenGLResourceBinder::SetUAV(FRHIUnorderedAccessView*___ptr64,unsigned_char)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

