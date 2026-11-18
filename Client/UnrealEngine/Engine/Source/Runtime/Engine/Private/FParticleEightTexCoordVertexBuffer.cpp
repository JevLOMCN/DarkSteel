// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// InitRHI @ 14814ceb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FParticleEightTexCoordVertexBuffer::InitRHI
          (FParticleEightTexCoordVertexBuffer *this,FRHICommandListBase *param_1)

{
  undefined1 *puVar1;
  ERHIPipeline EVar2;
  FRHIResource *this_00;
  code *pcVar3;
  bool bVar4;
  TRefCountPtr<FRHIBuffer> TVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
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
  undefined8 local_118;
  undefined8 uStack_110;
  wchar_t *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 local_d8 [48];
  FRHICommandListBase *local_a8;
  FRHIBuffer *local_a0;
  void *local_98;
  undefined1 local_88 [48];
  FRHICommandListBase *local_58;
  FRHIBuffer *local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  local_158 = 0x400;
  uStack_150 = 0x4001;
  uStack_140 = 0;
  iStack_14c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  uStack_130 = 0;
  uStack_110 = CONCAT44(iStack_14c,0x4001);
  local_148 = L"FParticleEightTexCoordVertexBuffer";
  EVar2 = param_1->ActivePipelines;
  local_138 = 8;
  uStack_134 = 3;
  local_128 = 0;
  local_118 = 0x400;
  local_f8 = 0x300000008;
  local_108 = L"FParticleEightTexCoordVertexBuffer";
  uStack_100 = 0;
  local_e8 = 0;
  uStack_f0 = 0;
  if ((EVar2 != None) && ((EVar2 & EVar2 - Graphics) != None)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x2a5,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_1->ActivePipelines == None) {
    FRHICommandListBase::SwitchPipeline(param_1,Graphics);
    (**(code **)(GDynamicRHI->_padding_ + 0x140))(GDynamicRHI,local_88,param_1,&local_118);
    FRHICommandListBase::SwitchPipeline(param_1,None);
  }
  else {
    (**(code **)(GDynamicRHI->_padding_ + 0x140))(GDynamicRHI,local_88,param_1,&local_118);
  }
  FRHIBufferInitializer::FRHIBufferInitializer
            ((FRHIBufferInitializer *)local_d8,(FRHIBufferInitializer *)local_88);
  if ((local_58 != (FRHICommandListBase *)0x0) && (local_50 != (FRHIBuffer *)0x0)) {
    FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_88);
  }
  if (local_88._0_8_ != 0) {
    plVar6 = (longlong *)(local_88 + 0x10);
    if ((longlong *)local_88._40_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_88._40_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  local_190 = 0;
  uVar8 = 10;
  uStack_18c = 0x3f800000;
  local_188 = 0x3f800000;
  uStack_184 = 0x3f800000;
  local_180 = 0x3f800000;
  local_178 = 0x3f800000;
  local_170 = 0x3f800000;
  local_168 = 0x3f800000;
  local_160 = 0x3f800000;
  local_198 = 0;
  do {
    lVar7 = (longlong)(int)uVar8;
    *(undefined8 *)((longlong)local_98 + lVar7 * 8 + -0x50) = 0;
    *(undefined8 *)((longlong)local_98 + lVar7 * 8 + -0x48) = 0x3f80000000000000;
    *(undefined8 *)((longlong)local_98 + lVar7 * 8 + -0x40) = 0x3f8000003f800000;
    *(undefined8 *)((longlong)local_98 + lVar7 * 8 + -0x38) = 0x3f800000;
    *(undefined8 *)((longlong)local_98 + lVar7 * 8 + -0x30) = 0x3f800000;
    *(undefined8 *)((longlong)local_98 + lVar7 * 8 + -0x28) = 0x3f800000;
    *(undefined8 *)((longlong)local_98 + lVar7 * 8 + -0x20) = 0x3f800000;
    *(undefined8 *)((longlong)local_98 + lVar7 * 8 + -0x18) = 0x3f800000;
    *(undefined8 *)((longlong)local_98 + lVar7 * 8 + -0x10) = 0;
    *(undefined8 *)((longlong)local_98 + (longlong)(int)uVar8 * 8 + -8) = 0x3f80000000000000;
    *(undefined8 *)((longlong)local_98 + (longlong)(int)uVar8 * 8) = 0x3f8000003f800000;
    *(undefined8 *)((longlong)local_98 + (longlong)(int)uVar8 * 8 + 8) = 0x3f800000;
    *(undefined8 *)((longlong)local_98 + (longlong)(int)uVar8 * 8 + 0x10) = 0x3f800000;
    *(undefined8 *)((longlong)local_98 + (longlong)(int)uVar8 * 8 + 0x18) = 0x3f800000;
    *(undefined8 *)((longlong)local_98 + (longlong)(int)uVar8 * 8 + 0x20) = 0x3f800000;
    *(undefined8 *)((longlong)local_98 + (longlong)(int)uVar8 * 8 + 0x28) = 0x3f800000;
    *(undefined8 *)((longlong)local_98 + (longlong)(int)uVar8 * 8 + 0x30) = 0;
    *(undefined8 *)((longlong)local_98 + (longlong)(int)uVar8 * 8 + 0x38) = 0x3f80000000000000;
    *(undefined8 *)((longlong)local_98 + (longlong)(int)uVar8 * 8 + 0x40) = 0x3f8000003f800000;
    *(undefined8 *)((longlong)local_98 + (longlong)(int)uVar8 * 8 + 0x48) = 0x3f800000;
    *(undefined8 *)((longlong)local_98 + (longlong)(int)uVar8 * 8 + 0x50) = 0x3f800000;
    *(undefined8 *)((longlong)local_98 + (longlong)(int)uVar8 * 8 + 0x58) = 0x3f800000;
    *(undefined8 *)((longlong)local_98 + (longlong)(int)uVar8 * 8 + 0x60) = 0x3f800000;
    *(undefined8 *)((longlong)local_98 + (longlong)(int)uVar8 * 8 + 0x68) = 0x3f800000;
    *(undefined8 *)((longlong)local_98 + (longlong)(int)uVar8 * 8 + 0x70) = 0;
    *(undefined8 *)((longlong)local_98 + (longlong)(int)uVar8 * 8 + 0x78) = 0x3f80000000000000;
    *(undefined8 *)((longlong)local_98 + (longlong)(int)uVar8 * 8 + 0x80) = 0x3f8000003f800000;
    *(undefined8 *)((longlong)local_98 + (longlong)(int)uVar8 * 8 + 0x88) = 0x3f800000;
    *(undefined8 *)((longlong)local_98 + (longlong)(int)uVar8 * 8 + 0x90) = 0x3f800000;
    *(undefined8 *)((longlong)local_98 + (longlong)(int)uVar8 * 8 + 0x98) = 0x3f800000;
    *(undefined8 *)((longlong)local_98 + (longlong)(int)uVar8 * 8 + 0xa0) = 0x3f800000;
    lVar7 = (longlong)(int)uVar8;
    uVar8 = uVar8 + 0x20;
    *(undefined8 *)((longlong)local_98 + lVar7 * 8 + 0xa8) = 0x3f800000;
  } while (uVar8 < 0x8a);
  TVar5 = FRHIBufferInitializer::Finalize((FRHIBufferInitializer *)local_d8);
  puVar1 = &this->field_0x20;
  if ((FRHIBuffer *)puVar1 != TVar5.Reference) {
    this_00 = *(FRHIResource **)puVar1;
    *(longlong *)puVar1 = (TVar5.Reference)->_padding_;
    (TVar5.Reference)->_padding_ = 0;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  if (local_120 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_120);
  }
  if ((local_a8 != (FRHICommandListBase *)0x0) && (local_a0 != (FRHIBuffer *)0x0)) {
    FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_d8);
  }
  if (local_d8._0_8_ != 0) {
    plVar6 = (longlong *)(local_d8 + 0x10);
    if ((longlong *)local_d8._40_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_d8._40_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  return;
}

