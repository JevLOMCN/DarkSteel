// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// InitRHI @ 1453c8be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FTileIndexBuffer::InitRHI(FTileIndexBuffer *this,FRHICommandListBase *param_1)

{
  ERHIPipeline EVar1;
  FRHIResource *this_00;
  code *pcVar2;
  bool bVar3;
  TRefCountPtr<FRHIBuffer> TVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  short sVar8;
  uint uVar9;
  undefined1 auStack_168 [32];
  int local_148;
  undefined4 uStack_144;
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
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_168;
  uVar9 = 0;
  uStack_144 = 2;
  uStack_140 = 0x8001;
  iVar7 = 3;
  uStack_130 = 0;
  local_148 = this->NumTileQuadsInBuffer * 0xc;
  iStack_13c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_108 = CONCAT44(2,local_148);
  uStack_100 = CONCAT44(iStack_13c,0x8001);
  local_138 = L"FTileIndexBuffer";
  EVar1 = param_1->ActivePipelines;
  uStack_120 = 0;
  local_128 = 8;
  uStack_124 = 3;
  local_118 = 0;
  local_e8 = 0x300000008;
  local_f8 = L"FTileIndexBuffer";
  uStack_f0 = 0;
  local_d8 = 0;
  uStack_e0 = 0;
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
  if (this->NumTileQuadsInBuffer != 0) {
    do {
      sVar8 = (short)uVar9 * 4;
      uVar9 = uVar9 + 1;
      *(short *)((longlong)local_88 + (longlong)iVar7 * 2 + -6) = sVar8;
      *(short *)((longlong)local_88 + (longlong)iVar7 * 2 + -4) = sVar8 + 1;
      *(short *)((longlong)local_88 + (longlong)iVar7 * 2 + -2) = sVar8 + 2;
      *(short *)((longlong)local_88 + (longlong)iVar7 * 2) = sVar8;
      *(short *)((longlong)local_88 + (longlong)iVar7 * 2 + 2) = sVar8 + 2;
      lVar5 = (longlong)iVar7;
      iVar7 = iVar7 + 6;
      *(short *)((longlong)local_88 + lVar5 * 2 + 4) = sVar8 + 3;
    } while (uVar9 < this->NumTileQuadsInBuffer);
  }
  TVar4 = FRHIBufferInitializer::Finalize((FRHIBufferInitializer *)local_c8);
  plVar6 = &this->_padding_;
  if ((FRHIBuffer *)plVar6 != TVar4.Reference) {
    this_00 = (FRHIResource *)*plVar6;
    *plVar6 = (TVar4.Reference)->_padding_;
    (TVar4.Reference)->_padding_ = 0;
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

