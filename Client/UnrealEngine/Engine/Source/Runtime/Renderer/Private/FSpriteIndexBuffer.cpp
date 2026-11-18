// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// InitRHI @ 14501d190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSpriteIndexBuffer<64>::InitRHI(FSpriteIndexBuffer<64> *this,FRHICommandListBase *param_1)

{
  undefined1 *puVar1;
  ERHIPipeline EVar2;
  FRHIResource *this_00;
  code *pcVar3;
  bool bVar4;
  TRefCountPtr<FRHIBuffer> TVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  short sVar9;
  short sVar10;
  undefined1 auStack_168 [32];
  undefined4 local_148;
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
  sVar10 = 0;
  local_148 = 0x300;
  uStack_144 = 2;
  uStack_140 = 0x8001;
  uVar8 = 3;
  iStack_13c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  uStack_130 = 0;
  local_108 = 0x200000300;
  uStack_100 = CONCAT44(iStack_13c,0x8001);
  local_138 = L"FSpriteIndexBuffer";
  EVar2 = param_1->ActivePipelines;
  uStack_120 = 0;
  local_128 = 8;
  uStack_124 = 3;
  local_118 = 0;
  local_e8 = 0x300000008;
  local_f8 = L"FSpriteIndexBuffer";
  uStack_f0 = 0;
  local_d8 = 0;
  uStack_e0 = 0;
  if (((EVar2 != None) && ((EVar2 & EVar2 - Graphics) != None)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x2a5,L""), bVar4)) {
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
  if (local_78._0_8_ != 0) {
    plVar7 = (longlong *)(local_78 + 0x10);
    if ((longlong *)local_78._40_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_78._40_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  do {
    sVar9 = sVar10 * 4;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + -6) = sVar9;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + -4) = sVar9 + 3;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + -2) = sVar9 + 2;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2) = sVar9;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 2) = sVar9 + 1;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 4) = sVar9 + 3;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 6) = sVar9 + 4;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 8) = sVar9 + 7;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 10) = sVar9 + 6;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0xc) = sVar9 + 4;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0xe) = sVar9 + 5;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x10) = sVar9 + 7;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x12) = sVar9 + 8;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x14) = sVar9 + 0xb;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x16) = sVar9 + 10;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x18) = sVar9 + 8;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x1a) = sVar9 + 9;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x1c) = sVar9 + 0xb;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x1e) = sVar9 + 0xc;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x20) = sVar9 + 0xf;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x22) = sVar9 + 0xe;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x24) = sVar9 + 0xc;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x26) = sVar9 + 0xd;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x28) = sVar9 + 0xf;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x2a) = sVar9 + 0x10;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x2c) = sVar9 + 0x13;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x2e) = sVar9 + 0x12;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x30) = sVar9 + 0x10;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x32) = sVar9 + 0x11;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x34) = sVar9 + 0x13;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x36) = sVar9 + 0x14;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x38) = sVar9 + 0x17;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x3a) = sVar9 + 0x16;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x3c) = sVar9 + 0x14;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x3e) = sVar9 + 0x15;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x40) = sVar9 + 0x17;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x42) = sVar9 + 0x18;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x44) = sVar9 + 0x1b;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x46) = sVar9 + 0x1a;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x48) = sVar9 + 0x18;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x4a) = sVar9 + 0x19;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x4c) = sVar9 + 0x1b;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x4e) = sVar9 + 0x1c;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x50) = sVar9 + 0x1f;
    sVar10 = sVar10 + 8;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x52) = sVar9 + 0x1e;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x54) = sVar9 + 0x1c;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x56) = sVar9 + 0x1d;
    lVar6 = (longlong)(int)uVar8;
    uVar8 = uVar8 + 0x30;
    *(short *)((longlong)local_88 + lVar6 * 2 + 0x58) = sVar9 + 0x1f;
  } while (uVar8 < 0x183);
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
    plVar7 = (longlong *)(local_c8 + 0x10);
    if ((longlong *)local_c8._40_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_c8._40_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  return;
}

// InitRHI @ 145119750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSpriteIndexBuffer<16>::InitRHI(FSpriteIndexBuffer<16> *this,FRHICommandListBase *param_1)

{
  undefined1 *puVar1;
  ERHIPipeline EVar2;
  FRHIResource *this_00;
  code *pcVar3;
  bool bVar4;
  TRefCountPtr<FRHIBuffer> TVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  short sVar9;
  short sVar10;
  undefined1 auStack_168 [32];
  undefined4 local_148;
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
  sVar10 = 0;
  local_148 = 0xc0;
  uStack_144 = 2;
  uStack_140 = 0x8001;
  uVar8 = 3;
  iStack_13c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  uStack_130 = 0;
  local_108 = 0x2000000c0;
  uStack_100 = CONCAT44(iStack_13c,0x8001);
  local_138 = L"FSpriteIndexBuffer";
  EVar2 = param_1->ActivePipelines;
  uStack_120 = 0;
  local_128 = 8;
  uStack_124 = 3;
  local_118 = 0;
  local_e8 = 0x300000008;
  local_f8 = L"FSpriteIndexBuffer";
  uStack_f0 = 0;
  local_d8 = 0;
  uStack_e0 = 0;
  if (((EVar2 != None) && ((EVar2 & EVar2 - Graphics) != None)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x2a5,L""), bVar4)) {
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
  if (local_78._0_8_ != 0) {
    plVar7 = (longlong *)(local_78 + 0x10);
    if ((longlong *)local_78._40_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_78._40_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  do {
    sVar9 = sVar10 * 4;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + -6) = sVar9;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + -4) = sVar9 + 3;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + -2) = sVar9 + 2;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2) = sVar9;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 2) = sVar9 + 1;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 4) = sVar9 + 3;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 6) = sVar9 + 4;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 8) = sVar9 + 7;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 10) = sVar9 + 6;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0xc) = sVar9 + 4;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0xe) = sVar9 + 5;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x10) = sVar9 + 7;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x12) = sVar9 + 8;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x14) = sVar9 + 0xb;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x16) = sVar9 + 10;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x18) = sVar9 + 8;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x1a) = sVar9 + 9;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x1c) = sVar9 + 0xb;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x1e) = sVar9 + 0xc;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x20) = sVar9 + 0xf;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x22) = sVar9 + 0xe;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x24) = sVar9 + 0xc;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x26) = sVar9 + 0xd;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x28) = sVar9 + 0xf;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x2a) = sVar9 + 0x10;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x2c) = sVar9 + 0x13;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x2e) = sVar9 + 0x12;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x30) = sVar9 + 0x10;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x32) = sVar9 + 0x11;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x34) = sVar9 + 0x13;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x36) = sVar9 + 0x14;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x38) = sVar9 + 0x17;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x3a) = sVar9 + 0x16;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x3c) = sVar9 + 0x14;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x3e) = sVar9 + 0x15;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x40) = sVar9 + 0x17;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x42) = sVar9 + 0x18;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x44) = sVar9 + 0x1b;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x46) = sVar9 + 0x1a;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x48) = sVar9 + 0x18;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x4a) = sVar9 + 0x19;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x4c) = sVar9 + 0x1b;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x4e) = sVar9 + 0x1c;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x50) = sVar9 + 0x1f;
    sVar10 = sVar10 + 8;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x52) = sVar9 + 0x1e;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x54) = sVar9 + 0x1c;
    *(short *)((longlong)local_88 + (longlong)(int)uVar8 * 2 + 0x56) = sVar9 + 0x1d;
    lVar6 = (longlong)(int)uVar8;
    uVar8 = uVar8 + 0x30;
    *(short *)((longlong)local_88 + lVar6 * 2 + 0x58) = sVar9 + 0x1f;
  } while (uVar8 < 99);
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
    plVar7 = (longlong *)(local_c8 + 0x10);
    if ((longlong *)local_c8._40_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_c8._40_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  return;
}

// InitRHI @ 1451fa950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSpriteIndexBuffer<8>::InitRHI(FSpriteIndexBuffer<8> *this,FRHICommandListBase *param_1)

{
  undefined1 *puVar1;
  ERHIPipeline EVar2;
  FRHIResource *this_00;
  code *pcVar3;
  bool bVar4;
  TRefCountPtr<FRHIBuffer> TVar5;
  longlong *plVar6;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  int iStack_15c;
  wchar_t *local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined8 uStack_140;
  undefined8 local_138;
  FRHIResource *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  wchar_t *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined1 local_e8 [48];
  FRHICommandListBase *local_b8;
  FRHIBuffer *local_b0;
  undefined2 *local_a8;
  undefined1 local_98 [48];
  FRHICommandListBase *local_68;
  FRHIBuffer *local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_188;
  local_168 = 0x60;
  uStack_160 = 0x8001;
  uStack_150 = 0;
  uStack_140 = 0;
  iStack_15c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  uStack_164 = 2;
  local_128 = 0x200000060;
  uStack_120 = CONCAT44(iStack_15c,0x8001);
  local_148 = 8;
  local_158 = L"FSpriteIndexBuffer";
  EVar2 = param_1->ActivePipelines;
  uStack_144 = 3;
  local_138 = 0;
  local_108 = 0x300000008;
  local_118 = L"FSpriteIndexBuffer";
  uStack_110 = 0;
  local_f8 = 0;
  uStack_100 = 0;
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
    (**(code **)(GDynamicRHI->_padding_ + 0x140))(GDynamicRHI,local_98,param_1,&local_128);
    FRHICommandListBase::SwitchPipeline(param_1,None);
  }
  else {
    (**(code **)(GDynamicRHI->_padding_ + 0x140))(GDynamicRHI,local_98,param_1,&local_128);
  }
  FRHIBufferInitializer::FRHIBufferInitializer
            ((FRHIBufferInitializer *)local_e8,(FRHIBufferInitializer *)local_98);
  if ((local_68 != (FRHICommandListBase *)0x0) && (local_60 != (FRHIBuffer *)0x0)) {
    FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_98);
  }
  if (local_98._0_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x10);
    if ((longlong *)local_98._40_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._40_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  *local_a8 = 0;
  local_a8[1] = 3;
  local_a8[2] = 2;
  local_a8[3] = 0;
  local_a8[4] = 1;
  local_a8[5] = 3;
  local_a8[6] = 4;
  local_a8[7] = 7;
  local_a8[8] = 6;
  local_a8[9] = 4;
  local_a8[10] = 5;
  local_a8[0xb] = 7;
  local_a8[0xc] = 8;
  local_a8[0xd] = 0xb;
  local_a8[0xe] = 10;
  local_a8[0xf] = 8;
  local_a8[0x10] = 9;
  local_a8[0x11] = 0xb;
  local_a8[0x12] = 0xc;
  local_a8[0x13] = 0xf;
  local_a8[0x14] = 0xe;
  local_a8[0x15] = 0xc;
  local_a8[0x16] = 0xd;
  local_a8[0x17] = 0xf;
  local_a8[0x18] = 0x10;
  local_a8[0x19] = 0x13;
  local_a8[0x1a] = 0x12;
  local_a8[0x1b] = 0x10;
  local_a8[0x1c] = 0x11;
  local_a8[0x1d] = 0x13;
  local_a8[0x1e] = 0x14;
  local_a8[0x1f] = 0x17;
  local_a8[0x20] = 0x16;
  local_a8[0x21] = 0x14;
  local_a8[0x22] = 0x15;
  local_a8[0x23] = 0x17;
  local_a8[0x24] = 0x18;
  local_a8[0x25] = 0x1b;
  local_a8[0x26] = 0x1a;
  local_a8[0x27] = 0x18;
  local_a8[0x28] = 0x19;
  local_a8[0x29] = 0x1b;
  local_a8[0x2a] = 0x1c;
  local_a8[0x2b] = 0x1f;
  local_a8[0x2c] = 0x1e;
  local_a8[0x2d] = 0x1c;
  local_a8[0x2e] = 0x1d;
  local_a8[0x2f] = 0x1f;
  TVar5 = FRHIBufferInitializer::Finalize((FRHIBufferInitializer *)local_e8);
  puVar1 = &this->field_0x20;
  if ((FRHIBuffer *)puVar1 != TVar5.Reference) {
    this_00 = *(FRHIResource **)puVar1;
    *(longlong *)puVar1 = (TVar5.Reference)->_padding_;
    (TVar5.Reference)->_padding_ = 0;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  if (local_130 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_130);
  }
  if ((local_b8 != (FRHICommandListBase *)0x0) && (local_b0 != (FRHIBuffer *)0x0)) {
    FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_e8);
  }
  if (local_e8._0_8_ != 0) {
    plVar6 = (longlong *)(local_e8 + 0x10);
    if ((longlong *)local_e8._40_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_e8._40_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  return;
}

// InitRHI @ 1458379d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSpriteIndexBuffer<1>::InitRHI(FSpriteIndexBuffer<1> *this,FRHICommandListBase *param_1)

{
  undefined1 *puVar1;
  ERHIPipeline EVar2;
  FRHIResource *this_00;
  code *pcVar3;
  bool bVar4;
  TRefCountPtr<FRHIBuffer> TVar5;
  longlong *plVar6;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined4 uStack_154;
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
  undefined2 *local_98;
  undefined1 local_88 [48];
  FRHICommandListBase *local_58;
  FRHIBuffer *local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_178;
  local_158 = 0xc;
  uStack_150 = 0x8001;
  uStack_140 = 0;
  uStack_130 = 0;
  iStack_14c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  uStack_154 = 2;
  local_118 = 0x20000000c;
  uStack_110 = CONCAT44(iStack_14c,0x8001);
  local_138 = 8;
  local_148 = L"FSpriteIndexBuffer";
  EVar2 = param_1->ActivePipelines;
  uStack_134 = 3;
  local_128 = 0;
  local_f8 = 0x300000008;
  local_108 = L"FSpriteIndexBuffer";
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
  *local_98 = 0;
  local_98[1] = 3;
  local_98[2] = 2;
  local_98[3] = 0;
  local_98[4] = 1;
  local_98[5] = 3;
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

