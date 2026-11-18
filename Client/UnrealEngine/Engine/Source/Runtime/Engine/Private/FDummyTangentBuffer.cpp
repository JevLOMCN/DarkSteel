// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// InitRHI @ 147c17950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FDummyTangentBuffer::InitRHI(FDummyTangentBuffer *this,FRHICommandListBase *param_1)

{
  TRefCountPtr<FRHIShaderResourceView> *pTVar1;
  ERHIPipeline EVar2;
  FRHIResource *this_00;
  FRHIShaderResourceView *this_01;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  TRefCountPtr<FRHIBuffer> TVar7;
  TRefCountPtr<FRHIShaderResourceView> TVar8;
  longlong *plVar9;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined4 uStack_150;
  int iStack_14c;
  wchar_t *local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined8 uStack_130;
  undefined8 local_128;
  FRHIResource *local_120;
  undefined1 local_118 [96];
  longlong local_b8 [3];
  longlong *local_a0;
  longlong local_98;
  longlong local_90;
  undefined8 *local_88;
  undefined1 local_78 [48];
  FRHICommandListBase *local_48;
  FRHIBuffer *local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_178;
  local_158 = 0x20;
  uStack_150 = 0x4101;
  uStack_140 = 0;
  iStack_14c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  uStack_130 = 0;
  local_118._32_8_ = CONCAT44(iStack_14c,0x4101);
  local_148 = L"DummyTangentBuffer";
  EVar2 = param_1->ActivePipelines;
  local_138 = 0x78;
  uStack_134 = 3;
  local_128 = 0;
  local_118._24_8_ = 0x20;
  local_118._56_8_ = 0x300000078;
  local_118._40_8_ = L"DummyTangentBuffer";
  local_118._48_8_ = 0;
  local_118._72_8_ = 0;
  local_118._64_8_ = 0;
  if ((EVar2 != None) && ((EVar2 & EVar2 - Graphics) != None)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x2a5,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_1->ActivePipelines == None) {
    FRHICommandListBase::SwitchPipeline(param_1,Graphics);
    (**(code **)(GDynamicRHI->_padding_ + 0x140))
              (GDynamicRHI,(FRHIBufferInitializer *)local_78,param_1,local_118 + 0x18);
    FRHICommandListBase::SwitchPipeline(param_1,None);
  }
  else {
    (**(code **)(GDynamicRHI->_padding_ + 0x140))
              (GDynamicRHI,(FRHIBufferInitializer *)local_78,param_1,local_118 + 0x18);
  }
  TRHIBufferInitializer<UE::Math::TVector4<float>_>::
  TRHIBufferInitializer<UE::Math::TVector4<float>_>
            ((TRHIBufferInitializer<UE::Math::TVector4<float>_> *)(local_118 + 0x50),
             (FRHIBufferInitializer *)local_78);
  if ((local_48 != (FRHICommandListBase *)0x0) && (local_40 != (FRHIBuffer *)0x0)) {
    FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_78);
  }
  if (local_78._0_8_ != 0) {
    plVar9 = (longlong *)(local_78 + 0x10);
    if ((longlong *)local_78._40_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_78._40_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  uVar5 = _UNK_15076b1f8;
  uVar4 = ___xmm_3f8000003f8000003f8000003f800000;
  *local_88 = 0;
  local_88[1] = 0;
  local_88[2] = uVar4;
  local_88[3] = uVar5;
  TVar7 = FRHIBufferInitializer::Finalize((FRHIBufferInitializer *)(local_118 + 0x50));
  plVar9 = &this->_padding_;
  if ((FRHIBuffer *)plVar9 != TVar7.Reference) {
    this_00 = (FRHIResource *)*plVar9;
    *plVar9 = (TVar7.Reference)->_padding_;
    (TVar7.Reference)->_padding_ = 0;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  if (local_120 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_120);
  }
  local_118._16_8_ = 0;
  local_118._8_8_ = 0x13d00;
  TVar8 = FRHICommandListBase::CreateShaderResourceView
                    (param_1,(FRHIBuffer *)local_118,(FInitializer *)*plVar9);
  pTVar1 = &this->SRV;
  if ((FRHIShaderResourceView *)pTVar1 != TVar8.Reference) {
    this_01 = pTVar1->Reference;
                    /* WARNING: Load size is inaccurate */
    pTVar1->Reference = *TVar8.Reference;
    *(undefined8 *)TVar8.Reference = 0;
    if (this_01 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
  }
  if ((FRHIResource *)local_118._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_118._0_8_);
  }
  if ((local_98 != 0) && (local_90 != 0)) {
    FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)(local_118 + 0x50));
  }
  if (local_118._80_8_ != 0) {
    plVar9 = local_b8;
    if (local_a0 != (longlong *)0x0) {
      plVar9 = local_a0;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  return;
}

// ReleaseRHI @ 147c17bd0

void __thiscall FDummyTangentBuffer::ReleaseRHI(FDummyTangentBuffer *this)

{
  FRHIShaderResourceView *this_00;
  
  this_00 = (this->SRV).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    (this->SRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FVertexBuffer::ReleaseRHI((FVertexBuffer *)this);
  return;
}

