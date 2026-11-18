// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 1

// InitRHI @ 1494a4ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FWN_VolumeWireIndexBuffer::InitRHI(FWN_VolumeWireIndexBuffer *this,FRHICommandListBase *param_1)

{
  ERHIPipeline EVar1;
  FRHIResource *this_00;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  TRefCountPtr<FRHIBuffer> TVar5;
  longlong *plVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  uint uVar10;
  ushort uVar11;
  longlong lVar12;
  undefined1 auStack_178 [32];
  int local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  int iStack_14c;
  wchar_t *local_148;
  undefined8 uStack_140;
  ERHIAccess local_138;
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
  undefined2 *local_98;
  undefined1 local_88 [48];
  FRHICommandListBase *local_58;
  FRHIBuffer *local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_178;
  if (this->NumEdges != 0) {
    local_158 = this->NumEdges * 4;
    iStack_14c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
    uStack_154 = 2;
    uStack_140 = 0;
    local_148 = L"FVolumeWireIndexBuffer";
    uStack_130 = 0;
    local_128 = 0;
    uStack_150 = 0x8001;
    uStack_134 = 3;
    local_138 = RHIGetDefaultResourceState(IndexBuffer|Static,false);
    local_118 = CONCAT44(uStack_154,local_158);
    uStack_110 = CONCAT44(iStack_14c,uStack_150);
    EVar1 = param_1->ActivePipelines;
    local_f8 = CONCAT44(uStack_134,local_138);
    local_108 = local_148;
    uStack_100 = uStack_140;
    local_e8 = local_128;
    uStack_f0 = uStack_130;
    if (((EVar1 != None) && ((EVar1 & EVar1 - Graphics) != None)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x2a5,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (param_1->ActivePipelines == None) {
      FRHICommandListBase::SwitchPipeline(param_1,Graphics);
      (**(code **)(GDynamicRHI->_padding_ + 0x140))(GDynamicRHI,local_88,param_1,&local_118);
      FRHICommandListBase::SwitchPipeline(param_1,None);
    }
    else {
      (**(code **)(GDynamicRHI->_padding_ + 0x140))(GDynamicRHI,local_88,param_1,&local_118);
    }
    TRHIBufferInitializer<unsigned_short>::TRHIBufferInitializer<unsigned_short>
              ((TRHIBufferInitializer<unsigned_short> *)local_d8,(FRHIBufferInitializer *)local_88);
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
    if (this->ShapeType == Box) {
      *local_98 = 0;
      local_98[1] = 1;
      local_98[2] = 1;
      local_98[3] = 2;
      local_98[4] = 2;
      local_98[5] = 3;
      local_98[6] = 3;
      local_98[7] = 0;
      local_98[8] = 4;
      local_98[9] = 5;
      local_98[10] = 5;
      local_98[0xb] = 6;
      local_98[0xc] = 6;
      local_98[0xd] = 7;
      local_98[0xe] = 7;
      local_98[0xf] = 4;
      local_98[0x10] = 0;
      local_98[0x11] = 4;
      local_98[0x12] = 1;
      local_98[0x13] = 5;
      local_98[0x14] = 2;
      local_98[0x15] = 6;
      local_98[0x16] = 3;
      local_98[0x17] = 7;
    }
    else if (this->ShapeType == Sphere) {
      uVar4 = 0;
      uVar11 = 0x20;
      do {
        uVar8 = 1;
        lVar12 = 0x20;
        do {
          local_98[uVar4] = uVar8 + (uVar11 - 1);
          uVar7 = uVar8 & 0x1f;
          uVar8 = uVar8 + 1;
          local_98[(ushort)((short)uVar4 + 1)] = uVar7 + uVar11;
          uVar4 = (ulonglong)(ushort)((short)uVar4 + 2);
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
        uVar11 = uVar11 + 0x20;
      } while (uVar11 < 0x400);
      uVar11 = 0;
      do {
        uVar8 = uVar11;
        uVar10 = 0;
        do {
          uVar7 = (short)uVar4 + 1;
          local_98[uVar4 & 0xffff] = uVar8;
          uVar8 = uVar8 + 0x20;
          uVar9 = (short)uVar10 + 1;
          local_98[uVar7] =
               ((short)(uVar10 + 1) + (short)((uVar10 + 1) / 0x21) * -0x21) * 0x20 + uVar11;
          uVar4 = (ulonglong)(uVar7 + 1);
          uVar10 = (uint)uVar9;
        } while (uVar9 < 0x20);
        uVar11 = uVar11 + 1;
      } while (uVar11 < 0x20);
    }
    TVar5 = FRHIBufferInitializer::Finalize((FRHIBufferInitializer *)local_d8);
    plVar6 = &this->_padding_;
    if ((FRHIBuffer *)plVar6 != TVar5.Reference) {
      this_00 = (FRHIResource *)*plVar6;
      *plVar6 = (TVar5.Reference)->_padding_;
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
  }
  return;
}

