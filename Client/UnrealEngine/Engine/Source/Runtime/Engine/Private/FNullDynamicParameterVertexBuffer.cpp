// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// InitRHI @ 1481b8fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNullDynamicParameterVertexBuffer::InitRHI
          (FNullDynamicParameterVertexBuffer *this,FRHICommandListBase *param_1)

{
  undefined1 *puVar1;
  ERHIPipeline EVar2;
  FRHIResource *this_00;
  code *pcVar3;
  bool bVar4;
  TRefCountPtr<FRHIBuffer> TVar5;
  longlong *plVar6;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  int iStack_ec;
  wchar_t *local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined8 local_c8;
  FRHIResource *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  wchar_t *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 local_78 [48];
  FRHICommandListBase *local_48;
  FRHIBuffer *local_40;
  undefined8 *local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_f8 = 0x10;
  uStack_f0 = 0x4001;
  uStack_e0 = 0;
  iStack_ec = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  uStack_d0 = 0;
  uStack_b0 = CONCAT44(iStack_ec,0x4001);
  local_e8 = L"FNullDynamicParameterVertexBuffer";
  EVar2 = param_1->ActivePipelines;
  local_d8 = 8;
  uStack_d4 = 3;
  local_c8 = 0;
  uStack_fc = 0x3f800000;
  uStack_100 = 0x3f800000;
  uStack_104 = 0x3f800000;
  local_108 = 0x3f800000;
  local_b8 = 0x10;
  local_98 = 0x300000008;
  local_a8 = L"FNullDynamicParameterVertexBuffer";
  uStack_a0 = 0;
  local_88 = 0;
  uStack_90 = 0;
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
    (**(code **)(GDynamicRHI->_padding_ + 0x140))(GDynamicRHI,local_78,param_1,&local_b8);
    FRHICommandListBase::SwitchPipeline(param_1,None);
  }
  else {
    (**(code **)(GDynamicRHI->_padding_ + 0x140))(GDynamicRHI,local_78,param_1,&local_b8);
  }
  if (local_30 < 0x10) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Size <= GetWritableDataSize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIBufferInitializer.h"
                       ,0x27,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *local_38 = CONCAT44(uStack_104,local_108);
  local_38[1] = CONCAT44(uStack_fc,uStack_100);
  TVar5 = FRHIBufferInitializer::Finalize((FRHIBufferInitializer *)local_78);
  puVar1 = &this->field_0x20;
  if ((FRHIBuffer *)puVar1 != TVar5.Reference) {
    this_00 = *(FRHIResource **)puVar1;
    *(longlong *)puVar1 = (TVar5.Reference)->_padding_;
    (TVar5.Reference)->_padding_ = 0;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  if (local_c0 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_c0);
  }
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
  return;
}

