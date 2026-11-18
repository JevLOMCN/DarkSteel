// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// InitRHI @ 14814ca50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FParticleTexCoordVertexBuffer::InitRHI
          (FParticleTexCoordVertexBuffer *this,FRHICommandListBase *param_1)

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
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined8 local_150;
  undefined8 local_148;
  undefined4 uStack_140;
  int iStack_13c;
  wchar_t *local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined8 local_118;
  FRHIResource *local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  wchar_t *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined1 local_c8 [48];
  FRHICommandListBase *local_98;
  FRHIBuffer *local_90;
  void *local_88;
  undefined1 local_78 [48];
  FRHICommandListBase *local_48;
  FRHIBuffer *local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_188;
  local_148 = 0x200;
  uStack_140 = 0x4001;
  uStack_130 = 0;
  iStack_13c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  uStack_120 = 0;
  uStack_100 = CONCAT44(iStack_13c,0x4001);
  local_138 = L"FParticleTexCoordVertexBuffer";
  EVar2 = param_1->ActivePipelines;
  local_128 = 8;
  uStack_124 = 3;
  local_118 = 0;
  local_108 = 0x200;
  local_e8 = 0x300000008;
  local_f8 = L"FParticleTexCoordVertexBuffer";
  uStack_f0 = 0;
  local_d8 = 0;
  uStack_e0 = 0;
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
    (**(code **)(GDynamicRHI->_padding_ + 0x140))(GDynamicRHI,local_78,param_1,&local_108);
    FRHICommandListBase::SwitchPipeline(param_1,None);
  }
  else {
    (**(code **)(GDynamicRHI->_padding_ + 0x140))(GDynamicRHI,local_78,param_1,&local_108);
  }
  FRHIBufferInitializer::FRHIBufferInitializer
            ((FRHIBufferInitializer *)local_c8,(FRHIBufferInitializer *)local_78);
  if ((local_48 != (FRHICommandListBase *)0x0) && (local_40 != (FRHIBuffer *)0x0)) {
    FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_78);
  }
  if (local_78._0_8_ != 0) {
    plVar6 = (longlong *)(local_78 + 0x10);
    if ((longlong *)local_78._40_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_78._40_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  local_160 = 0;
  uVar8 = 6;
  uStack_15c = 0x3f800000;
  local_158 = 0x3f800000;
  uStack_154 = 0x3f800000;
  local_150 = 0x3f800000;
  local_168 = 0;
  do {
    lVar7 = (longlong)(int)uVar8;
    *(undefined8 *)((longlong)local_88 + lVar7 * 8 + -0x30) = 0;
    *(undefined8 *)((longlong)local_88 + lVar7 * 8 + -0x28) = 0x3f80000000000000;
    *(undefined8 *)((longlong)local_88 + lVar7 * 8 + -0x20) = 0x3f8000003f800000;
    *(undefined8 *)((longlong)local_88 + lVar7 * 8 + -0x18) = 0x3f800000;
    *(undefined8 *)((longlong)local_88 + lVar7 * 8 + -0x10) = 0;
    *(undefined8 *)((longlong)local_88 + (longlong)(int)uVar8 * 8 + -8) = 0x3f80000000000000;
    *(undefined8 *)((longlong)local_88 + (longlong)(int)uVar8 * 8) = 0x3f8000003f800000;
    *(undefined8 *)((longlong)local_88 + (longlong)(int)uVar8 * 8 + 8) = 0x3f800000;
    *(undefined8 *)((longlong)local_88 + (longlong)(int)uVar8 * 8 + 0x10) = 0;
    *(undefined8 *)((longlong)local_88 + (longlong)(int)uVar8 * 8 + 0x18) = 0x3f80000000000000;
    *(undefined8 *)((longlong)local_88 + (longlong)(int)uVar8 * 8 + 0x20) = 0x3f8000003f800000;
    *(undefined8 *)((longlong)local_88 + (longlong)(int)uVar8 * 8 + 0x28) = 0x3f800000;
    *(undefined8 *)((longlong)local_88 + (longlong)(int)uVar8 * 8 + 0x30) = 0;
    *(undefined8 *)((longlong)local_88 + (longlong)(int)uVar8 * 8 + 0x38) = 0x3f80000000000000;
    *(undefined8 *)((longlong)local_88 + (longlong)(int)uVar8 * 8 + 0x40) = 0x3f8000003f800000;
    *(undefined8 *)((longlong)local_88 + (longlong)(int)uVar8 * 8 + 0x48) = 0x3f800000;
    *(undefined8 *)((longlong)local_88 + (longlong)(int)uVar8 * 8 + 0x50) = 0;
    *(undefined8 *)((longlong)local_88 + (longlong)(int)uVar8 * 8 + 0x58) = 0x3f80000000000000;
    *(undefined8 *)((longlong)local_88 + (longlong)(int)uVar8 * 8 + 0x60) = 0x3f8000003f800000;
    *(undefined8 *)((longlong)local_88 + (longlong)(int)uVar8 * 8 + 0x68) = 0x3f800000;
    *(undefined8 *)((longlong)local_88 + (longlong)(int)uVar8 * 8 + 0x70) = 0;
    *(undefined8 *)((longlong)local_88 + (longlong)(int)uVar8 * 8 + 0x78) = 0x3f80000000000000;
    *(undefined8 *)((longlong)local_88 + (longlong)(int)uVar8 * 8 + 0x80) = 0x3f8000003f800000;
    *(undefined8 *)((longlong)local_88 + (longlong)(int)uVar8 * 8 + 0x88) = 0x3f800000;
    *(undefined8 *)((longlong)local_88 + (longlong)(int)uVar8 * 8 + 0x90) = 0;
    *(undefined8 *)((longlong)local_88 + (longlong)(int)uVar8 * 8 + 0x98) = 0x3f80000000000000;
    *(undefined8 *)((longlong)local_88 + (longlong)(int)uVar8 * 8 + 0xa0) = 0x3f8000003f800000;
    *(undefined8 *)((longlong)local_88 + (longlong)(int)uVar8 * 8 + 0xa8) = 0x3f800000;
    *(undefined8 *)((longlong)local_88 + (longlong)(int)uVar8 * 8 + 0xb0) = 0;
    *(undefined8 *)((longlong)local_88 + (longlong)(int)uVar8 * 8 + 0xb8) = 0x3f80000000000000;
    *(undefined8 *)((longlong)local_88 + (longlong)(int)uVar8 * 8 + 0xc0) = 0x3f8000003f800000;
    lVar7 = (longlong)(int)uVar8;
    uVar8 = uVar8 + 0x20;
    *(undefined8 *)((longlong)local_88 + lVar7 * 8 + 200) = 0x3f800000;
  } while (uVar8 < 0x46);
  TVar5 = FRHIBufferInitializer::Finalize((FRHIBufferInitializer *)local_c8);
  puVar1 = &this->field_0x20;
  if ((FRHIBuffer *)puVar1 != TVar5.Reference) {
    this_00 = *(FRHIResource **)puVar1;
    *(longlong *)puVar1 = (TVar5.Reference)->_padding_;
    (TVar5.Reference)->_padding_ = 0;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  if (local_110 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_110);
  }
  if ((local_98 != (FRHICommandListBase *)0x0) && (local_90 != (FRHIBuffer *)0x0)) {
    FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_c8);
  }
  if (local_c8._0_8_ != 0) {
    plVar6 = (longlong *)(local_c8 + 0x10);
    if ((longlong *)local_c8._40_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_c8._40_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  return;
}

