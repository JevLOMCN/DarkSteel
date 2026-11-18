// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 1

// InitRHI @ 1494a4630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FWN_VolumeFaceIndexBuffer::InitRHI(FWN_VolumeFaceIndexBuffer *this,FRHICommandListBase *param_1)

{
  ERHIPipeline EVar1;
  FRHIResource *this_00;
  code *pcVar2;
  short sVar3;
  short sVar4;
  bool bVar5;
  TRefCountPtr<FRHIBuffer> TVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  short sVar11;
  ushort uVar12;
  short sVar13;
  longlong lVar14;
  short sVar15;
  ushort uVar16;
  undefined1 auStack_188 [32];
  int local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  int iStack_15c;
  wchar_t *local_158;
  undefined8 uStack_150;
  ERHIAccess local_148;
  undefined4 uStack_144;
  undefined8 uStack_140;
  undefined8 local_138;
  FWN_VolumeFaceIndexBuffer *local_130;
  FRHIResource *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  wchar_t *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined1 local_e8 [48];
  FRHICommandListBase *local_b8;
  FRHIBuffer *local_b0;
  undefined2 *local_a8;
  undefined1 local_98 [48];
  FRHICommandListBase *local_68;
  FRHIBuffer *local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_188;
  if (this->NumTriangles != 0) {
    local_168 = this->NumTriangles * 6;
    uVar9 = 0;
    uStack_164 = 2;
    iStack_15c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
    uStack_150 = 0;
    uStack_140 = 0;
    local_158 = L"FVolumeFaceIndexBuffer";
    local_138 = 0;
    uStack_160 = 0x8001;
    uStack_144 = 3;
    local_130 = this;
    local_148 = RHIGetDefaultResourceState(IndexBuffer|Static,false);
    local_120 = CONCAT44(uStack_164,local_168);
    uStack_118 = CONCAT44(iStack_15c,uStack_160);
    EVar1 = param_1->ActivePipelines;
    local_100 = CONCAT44(uStack_144,local_148);
    local_110 = local_158;
    uStack_108 = uStack_150;
    local_f0 = local_138;
    uStack_f8 = uStack_140;
    if (((EVar1 != None) && ((EVar1 & EVar1 - Graphics) != None)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x2a5,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (param_1->ActivePipelines == None) {
      FRHICommandListBase::SwitchPipeline(param_1,Graphics);
      (**(code **)(GDynamicRHI->_padding_ + 0x140))(GDynamicRHI,local_98,param_1,&local_120);
      FRHICommandListBase::SwitchPipeline(param_1,None);
    }
    else {
      (**(code **)(GDynamicRHI->_padding_ + 0x140))(GDynamicRHI,local_98,param_1,&local_120);
    }
    TRHIBufferInitializer<unsigned_short>::TRHIBufferInitializer<unsigned_short>
              ((TRHIBufferInitializer<unsigned_short> *)local_e8,(FRHIBufferInitializer *)local_98);
    if ((local_68 != (FRHICommandListBase *)0x0) && (local_60 != (FRHIBuffer *)0x0)) {
      FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_98);
    }
    if (local_98._0_8_ != 0) {
      plVar8 = (longlong *)(local_98 + 0x10);
      if ((longlong *)local_98._40_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_98._40_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    uVar16 = 0;
    if (this->ShapeType == Box) {
      *local_a8 = 0;
      local_a8[1] = 1;
      local_a8[2] = 2;
      local_a8[3] = 0;
      local_a8[4] = 2;
      local_a8[5] = 3;
      local_a8[6] = 4;
      local_a8[7] = 6;
      local_a8[8] = 5;
      local_a8[9] = 4;
      local_a8[10] = 7;
      local_a8[0xb] = 6;
      local_a8[0xc] = 0;
      local_a8[0xd] = 3;
      local_a8[0xe] = 7;
      local_a8[0xf] = 0;
      local_a8[0x10] = 7;
      local_a8[0x11] = 4;
      local_a8[0x12] = 1;
      local_a8[0x13] = 5;
      local_a8[0x14] = 6;
      local_a8[0x15] = 1;
      local_a8[0x16] = 6;
      local_a8[0x17] = 2;
      local_a8[0x18] = 3;
      local_a8[0x19] = 2;
      local_a8[0x1a] = 6;
      local_a8[0x1b] = 3;
      local_a8[0x1c] = 6;
      local_a8[0x1d] = 7;
      local_a8[0x1e] = 0;
      local_a8[0x1f] = 4;
      local_a8[0x20] = 5;
      local_a8[0x21] = 0;
      local_a8[0x22] = 5;
      local_a8[0x23] = 1;
    }
    else {
      uVar10 = uVar9;
      uVar7 = uVar9;
      if (this->ShapeType == Sphere) {
        do {
          sVar11 = (short)uVar7;
          sVar15 = ((short)(uVar16 + 1) + (short)((uVar16 + 1) / 0x21) * -0x21) * 0x20;
          lVar14 = uVar10 * 2;
          do {
            sVar3 = (short)uVar7;
            uVar12 = sVar3 + 1U & 0x1f;
            uVar10 = uVar10 + 6;
            *(short *)(lVar14 + (longlong)local_a8) = sVar3;
            sVar13 = sVar15 + uVar12;
            *(ushort *)(lVar14 + 2 + (longlong)local_a8) = uVar12 + sVar11;
            sVar4 = (short)uVar9;
            *(short *)(lVar14 + 4 + (longlong)local_a8) = sVar13;
            *(short *)((longlong)local_a8 + lVar14 + 6) = sVar13;
            *(short *)((longlong)local_a8 + lVar14 + 8) = sVar15 + sVar4 + sVar3;
            *(short *)(lVar14 + 10 + (longlong)local_a8) = sVar3;
            uVar7 = (ulonglong)(ushort)(sVar3 + 1U);
            lVar14 = lVar14 + 0xc;
          } while ((ushort)(sVar3 + 1U + sVar4) < 0x20);
          uVar16 = uVar16 + 1;
          uVar12 = sVar11 + 0x20;
          uVar9 = (ulonglong)(ushort)(sVar4 - 0x20);
          uVar7 = (ulonglong)uVar12;
          this = local_130;
        } while (uVar12 < 0x400);
      }
    }
    TVar6 = FRHIBufferInitializer::Finalize((FRHIBufferInitializer *)local_e8);
    plVar8 = &this->_padding_;
    if ((FRHIBuffer *)plVar8 != TVar6.Reference) {
      this_00 = (FRHIResource *)*plVar8;
      *plVar8 = (TVar6.Reference)->_padding_;
      (TVar6.Reference)->_padding_ = 0;
      if (this_00 != (FRHIResource *)0x0) {
        FRHIResource::Release(this_00);
      }
    }
    if (local_128 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_128);
    }
    if ((local_b8 != (FRHICommandListBase *)0x0) && (local_b0 != (FRHIBuffer *)0x0)) {
      FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_e8);
    }
    if (local_e8._0_8_ != 0) {
      plVar8 = (longlong *)(local_e8 + 0x10);
      if ((longlong *)local_e8._40_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_e8._40_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  return;
}

