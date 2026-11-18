// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// InitRHI @ 14555ce70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FFrustumVertexBuffer::InitRHI(FFrustumVertexBuffer *this,FRHICommandListBase *param_1)

{
  undefined1 *puVar1;
  ERHIPipeline EVar2;
  FRHIResource *this_00;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  TRefCountPtr<FRHIBuffer> TVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined4 uStack_140;
  int iStack_13c;
  wchar_t *local_138;
  undefined8 uStack_130;
  ERHIAccess local_128;
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
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_168;
  local_148 = 0x80;
  uVar12 = 0;
  uStack_130 = 0;
  iStack_13c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  uStack_120 = 0;
  local_118 = 0;
  local_138 = L"FProjectedShadowInfoStencilFrustum";
  uStack_140 = 0x4001;
  uStack_124 = 3;
  local_128 = RHIGetDefaultResourceState(VertexBuffer|Static,false);
  uStack_100 = CONCAT44(iStack_13c,uStack_140);
  EVar2 = param_1->ActivePipelines;
  local_108 = local_148;
  local_e8 = CONCAT44(uStack_124,local_128);
  local_f8 = local_138;
  uStack_f0 = uStack_130;
  local_d8 = local_118;
  uStack_e0 = uStack_120;
  if (((EVar2 != None) && ((EVar2 & EVar2 - Graphics) != None)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x2a5,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
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
  uVar10 = uVar12;
  uVar5 = __real_3f800000;
  uVar4 = __real_bf800000;
  uVar13 = uVar12;
  if (local_78._0_8_ != 0) {
    plVar9 = (longlong *)(local_78 + 0x10);
    if ((longlong *)local_78._40_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_78._40_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
    uVar5 = __real_3f800000;
    uVar4 = __real_bf800000;
  }
  do {
    uVar15 = uVar5;
    if (uVar13 == 0) {
      uVar15 = 0;
    }
    uVar14 = uVar5;
    if (uVar10 != 0) {
      uVar14 = uVar4;
    }
    uVar8 = (ulonglong)(ushort)((short)uVar10 * 2 + (short)uVar13);
    *(undefined4 *)((longlong)local_88 + uVar8 * 0x10) = 0x3f800000;
    *(undefined4 *)((longlong)local_88 + uVar8 * 0x10 + 4) = uVar14;
    *(undefined4 *)((longlong)local_88 + uVar8 * 0x10 + 8) = uVar15;
    *(undefined4 *)((longlong)local_88 + uVar8 * 0x10 + 0xc) = 0x3f800000;
    uVar15 = uVar5;
    if (uVar13 == 0) {
      uVar15 = 0;
    }
    uVar14 = uVar5;
    if (uVar10 != 0) {
      uVar14 = uVar4;
    }
    uVar11 = uVar10 + 1;
    uVar8 = (ulonglong)(ushort)(((short)uVar10 + 2) * 2 + (short)uVar13);
    *(undefined4 *)((longlong)local_88 + uVar8 * 0x10) = 0xbf800000;
    *(undefined4 *)((longlong)local_88 + uVar8 * 0x10 + 4) = uVar14;
    *(undefined4 *)((longlong)local_88 + uVar8 * 0x10 + 8) = uVar15;
    *(undefined4 *)((longlong)local_88 + uVar8 * 0x10 + 0xc) = 0x3f800000;
    uVar10 = uVar11;
  } while ((uVar11 < 2) || (uVar13 = uVar13 + 1, uVar10 = uVar12, uVar13 < 2));
  TVar7 = FRHIBufferInitializer::Finalize((FRHIBufferInitializer *)local_c8);
  puVar1 = &this->field_0x20;
  if ((FRHIBuffer *)puVar1 != TVar7.Reference) {
    this_00 = *(FRHIResource **)puVar1;
    *(longlong *)puVar1 = (TVar7.Reference)->_padding_;
    (TVar7.Reference)->_padding_ = 0;
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
    plVar9 = (longlong *)(local_c8 + 0x10);
    if ((longlong *)local_c8._40_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_c8._40_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  return;
}

