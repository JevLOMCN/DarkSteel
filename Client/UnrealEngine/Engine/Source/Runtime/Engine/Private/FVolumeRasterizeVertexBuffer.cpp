// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// InitRHI @ 148993d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000148993ef6) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffed8 : 0x000148993efa */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVolumeRasterizeVertexBuffer::InitRHI
          (FVolumeRasterizeVertexBuffer *this,FRHICommandListBase *param_1)

{
  undefined1 *puVar1;
  ERHIPipeline EVar2;
  FRHIResource *this_00;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  TRefCountPtr<FRHIBuffer> TVar6;
  longlong *plVar7;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  undefined4 uStack_170;
  int iStack_16c;
  wchar_t *local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined8 local_148;
  FRHIResource *local_140;
  longlong local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  wchar_t *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  longlong *plStack_a0;
  FRHICommandListBase *local_98;
  FRHIBuffer *pFStack_90;
  undefined4 *local_88;
  ulong64 local_80;
  undefined1 local_78 [48];
  FRHICommandListBase *local_48;
  FRHIBuffer *local_40;
  undefined4 *local_38;
  ulong64 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_198;
  local_178 = 0x40;
  uStack_170 = 0x4001;
  uStack_160 = 0;
  iStack_16c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  uStack_150 = 0;
  uStack_100 = CONCAT44(iStack_16c,0x4001);
  local_168 = L"FVolumeRasterizeVertexBuffer";
  EVar2 = param_1->ActivePipelines;
  local_158 = 8;
  uStack_154 = 3;
  local_148 = 0;
  local_108 = 0x40;
  local_e8 = 0x300000008;
  local_f8 = L"FVolumeRasterizeVertexBuffer";
  uStack_f0 = 0;
  local_d8 = 0;
  uStack_e0 = 0;
  if (((EVar2 != None) && ((EVar2 & EVar2 - Graphics) != None)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x2a5,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (param_1->ActivePipelines == None) {
    FRHICommandListBase::SwitchPipeline(param_1,Graphics);
    (**(code **)(GDynamicRHI->_padding_ + 0x140))(GDynamicRHI,&local_c8,param_1,&local_108);
    FRHICommandListBase::SwitchPipeline(param_1,None);
  }
  else {
    (**(code **)(GDynamicRHI->_padding_ + 0x140))(GDynamicRHI,&local_c8,param_1,&local_108);
  }
  uVar4 = uStack_c0;
  local_78._0_8_ = local_c8;
  local_78._40_8_ = plStack_a0;
  if (local_c8 != 0) {
    local_c8 = 0;
  }
  local_138 = local_c8;
  local_48 = local_98;
  local_40 = pFStack_90;
  local_30 = local_80;
  local_c8 = 0;
  uStack_c0 = uStack_130;
  local_38 = local_88;
  local_b8 = (undefined4)local_128;
  uStack_b4 = local_128._4_4_;
  uStack_b0 = uStack_120;
  uStack_ac = uStack_11c;
  local_a8 = local_118;
  uStack_a4 = uStack_114;
  plStack_a0 = (longlong *)0x0;
  uStack_130 = uVar4;
  uStack_110 = 0;
  if (local_138 != 0) {
    (**(code **)(local_128 + 0x10))();
  }
  local_88 = (undefined4 *)0x0;
  local_98 = (FRHICommandListBase *)0x0;
  pFStack_90 = (FRHIBuffer *)0x0;
  local_80 = 0;
  if (local_c8 != 0) {
    plVar7 = (longlong *)&local_b8;
    if (plStack_a0 != (longlong *)0x0) {
      plVar7 = plStack_a0;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  *local_38 = 0x3f800000;
  local_38[1] = 0xbf800000;
  local_38[2] = 0x3f800000;
  local_38[3] = 0x3f800000;
  local_38[4] = 0x3f800000;
  local_38[5] = 0x3f800000;
  *(undefined8 *)(local_38 + 6) = 0x3f800000;
  local_38[8] = 0xbf800000;
  local_38[9] = 0xbf800000;
  local_38[10] = 0;
  local_38[0xb] = 0x3f800000;
  local_38[0xc] = 0xbf800000;
  *(undefined8 *)(local_38 + 0xd) = 0x3f800000;
  local_38[0xf] = 0;
  TVar6 = FRHIBufferInitializer::Finalize((FRHIBufferInitializer *)local_78);
  puVar1 = &this->field_0x20;
  if ((FRHIBuffer *)puVar1 != TVar6.Reference) {
    this_00 = *(FRHIResource **)puVar1;
    *(longlong *)puVar1 = (TVar6.Reference)->_padding_;
    (TVar6.Reference)->_padding_ = 0;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  if (local_140 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_140);
  }
  if ((local_48 != (FRHICommandListBase *)0x0) && (local_40 != (FRHIBuffer *)0x0)) {
    FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_78);
  }
  if (local_78._0_8_ != 0) {
    plVar7 = (longlong *)(local_78 + 0x10);
    if ((longlong *)local_78._40_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_78._40_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  return;
}

