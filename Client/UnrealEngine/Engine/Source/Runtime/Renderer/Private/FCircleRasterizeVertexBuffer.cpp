// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// InitRHI @ 145837e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FCircleRasterizeVertexBuffer::InitRHI
          (FCircleRasterizeVertexBuffer *this,FRHICommandListBase *param_1)

{
  undefined1 *puVar1;
  ERHIPipeline EVar2;
  FRHIResource *this_00;
  code *pcVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  bool bVar7;
  TRefCountPtr<FRHIBuffer> TVar8;
  longlong *plVar9;
  uint uVar10;
  ulonglong uVar12;
  float fVar13;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  undefined1 auStack_1b8 [32];
  float local_198;
  float fStack_194;
  uint local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  int iStack_184;
  wchar_t *local_180;
  undefined8 uStack_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  undefined8 local_160;
  FRHIResource *local_158;
  ulonglong local_150;
  undefined8 uStack_148;
  wchar_t *local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined1 local_118 [48];
  FRHICommandListBase *local_e8;
  FRHIBuffer *local_e0;
  void *local_d8;
  undefined1 local_c8 [48];
  FRHICommandListBase *local_98;
  FRHIBuffer *local_90;
  ulonglong local_78;
  ulonglong uVar11;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  local_190 = NumVertices << 4;
  iStack_184 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  uVar11 = 0;
  uStack_18c = 0;
  local_180 = L"FCircleRasterizeVertexBuffer";
  EVar2 = param_1->ActivePipelines;
  uStack_188 = 0x4001;
  uStack_178 = 0;
  uStack_168 = 0;
  local_170 = 8;
  uStack_16c = 3;
  local_160 = 0;
  local_150 = (ulonglong)local_190;
  uStack_148 = CONCAT44(iStack_184,0x4001);
  local_130 = 0x300000008;
  local_140 = L"FCircleRasterizeVertexBuffer";
  uStack_138 = 0;
  local_120 = 0;
  uStack_128 = 0;
  if (((EVar2 != None) && ((EVar2 & EVar2 - Graphics) != None)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x2a5,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (param_1->ActivePipelines == None) {
    FRHICommandListBase::SwitchPipeline(param_1,Graphics);
    (**(code **)(GDynamicRHI->_padding_ + 0x140))(GDynamicRHI,local_c8,param_1,&local_150);
    FRHICommandListBase::SwitchPipeline(param_1,None);
  }
  else {
    (**(code **)(GDynamicRHI->_padding_ + 0x140))(GDynamicRHI,local_c8,param_1,&local_150);
  }
  FRHIBufferInitializer::FRHIBufferInitializer
            ((FRHIBufferInitializer *)local_118,(FRHIBufferInitializer *)local_c8);
  if ((local_98 != (FRHICommandListBase *)0x0) && (local_90 != (FRHIBuffer *)0x0)) {
    FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_c8);
  }
  if (local_c8._0_8_ != 0) {
    plVar9 = (longlong *)(local_c8 + 0x10);
    if ((longlong *)local_c8._40_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_c8._40_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  iVar6 = NumVertices;
  fVar13 = cosf(__real_40490fdb / (float)(NumVertices + -1));
  fVar5 = __real_3f000000;
  fVar4 = __real_3f800000;
  fVar13 = __real_3f800000 / fVar13;
  uVar12 = uVar11;
  if (0 < iVar6) {
    do {
      ((TVector2<float>_u_0 *)(uVar12 + (longlong)local_d8))->_s_0 =
           (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      __libm_sse2_sincosf_();
      uVar10 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
      local_198 = (extraout_XMM0_Db * fVar13 + fVar4) * fVar5;
      fStack_194 = (extraout_XMM0_Da * fVar13 + fVar4) * fVar5;
      *(ulonglong *)(uVar12 + 8 + (longlong)local_d8) = CONCAT44(fStack_194,local_198);
      uVar12 = uVar12 + 0x10;
    } while ((int)uVar10 < NumVertices);
  }
  TVar8 = FRHIBufferInitializer::Finalize((FRHIBufferInitializer *)local_118);
  puVar1 = &this->field_0x20;
  if ((FRHIBuffer *)puVar1 != TVar8.Reference) {
    this_00 = *(FRHIResource **)puVar1;
    *(longlong *)puVar1 = (TVar8.Reference)->_padding_;
    (TVar8.Reference)->_padding_ = 0;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  if (local_158 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_158);
  }
  if ((local_e8 != (FRHICommandListBase *)0x0) && (local_e0 != (FRHIBuffer *)0x0)) {
    FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_118);
  }
  if (local_118._0_8_ != 0) {
    plVar9 = (longlong *)(local_118 + 0x10);
    if ((longlong *)local_118._40_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_118._40_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  return;
}

