// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 4

// ExecuteAndDestruct @ 1459bf730

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
TRHILambdaCommandMultiPipe<FRHICommandListBase,`FD3D12DynamicRHI::LockBuffer'::__l46::<lambda_1>_>::
ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  bool bVar4;
  longlong *plVar5;
  undefined8 uVar6;
  byte bVar7;
  byte bVar8;
  longlong *plVar9;
  longlong *plVar10;
  FD3D12ContextArray local_28;
  
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x90),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
               ,0x112);
  }
  bVar8 = *(byte *)((longlong)this + 0x98);
  plVar10 = (longlong *)0x0;
  plVar3 = (longlong *)0x0;
  while( true ) {
    if (bVar8 == 0) {
      uVar6 = 0;
      local_28._0_8_ = uVar6;
      if (plVar10 != (longlong *)0x0) {
        local_28._0_8_ = (**(code **)(*plVar10 + 0x148))(plVar10);
      }
      if (plVar3 != (longlong *)0x0) {
        uVar6 = (**(code **)(*plVar3 + 0x148))(plVar3);
      }
      local_28._8_8_ = uVar6;
      `FD3D12DynamicRHI::LockBuffer'::__l46::<lambda_1>::operator()
                ((void *)((longlong)this + 0x10),&local_28);
      FD3D12ResourceLocation::~FD3D12ResourceLocation
                ((FD3D12ResourceLocation *)((longlong)this + 0x18));
      if (bVar2) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    bVar7 = ~bVar8 + 1 & bVar8;
    if ((bVar7 == 1) || (bVar7 != 2)) {
      plVar5 = *(longlong **)&param_1->Contexts;
      if (((bVar7 == 1) || (plVar9 = plVar5, bVar7 != 2)) &&
         ((plVar9 = plVar3, plVar10 = plVar5, bVar7 != 1 && (bVar7 == 2)))) {
        plVar5 = plVar3;
      }
    }
    else {
      plVar5 = *(longlong **)&(param_1->Contexts).field_0x8;
      plVar9 = plVar5;
    }
    if ((plVar5 == (longlong *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Contexts[Pipeline]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                           ,0x118,L""), bVar4)) break;
    bVar8 = bVar8 & ~(~bVar8 + 1);
    plVar3 = plVar9;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// ExecuteAndDestruct @ 145a659e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommandMultiPipe<FRHICommandListBase,`FD3D12DynamicRHI::RHIEndFrame_RenderThread'::__l2::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  bool bVar4;
  longlong *plVar5;
  undefined8 uVar6;
  byte bVar7;
  byte bVar8;
  longlong *plVar9;
  longlong *plVar10;
  FD3D12ContextArray local_28;
  
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x18),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
               ,0x112);
  }
  bVar8 = *(byte *)((longlong)this + 0x20);
  plVar10 = (longlong *)0x0;
  plVar3 = (longlong *)0x0;
  while( true ) {
    if (bVar8 == 0) {
      uVar6 = 0;
      local_28._0_8_ = uVar6;
      if (plVar10 != (longlong *)0x0) {
        local_28._0_8_ = (**(code **)(*plVar10 + 0x148))(plVar10);
      }
      if (plVar3 != (longlong *)0x0) {
        uVar6 = (**(code **)(*plVar3 + 0x148))(plVar3);
      }
      local_28._8_8_ = uVar6;
      `FD3D12DynamicRHI::RHIEndFrame_RenderThread'::__l2::<lambda_1>::operator()
                ((void *)((longlong)this + 0x10),&local_28);
      if (bVar2) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    bVar7 = ~bVar8 + 1 & bVar8;
    if ((bVar7 == 1) || (bVar7 != 2)) {
      plVar5 = *(longlong **)&param_1->Contexts;
      if (((bVar7 == 1) || (plVar9 = plVar5, bVar7 != 2)) &&
         ((plVar9 = plVar3, plVar10 = plVar5, bVar7 != 1 && (bVar7 == 2)))) {
        plVar5 = plVar3;
      }
    }
    else {
      plVar5 = *(longlong **)&(param_1->Contexts).field_0x8;
      plVar9 = plVar5;
    }
    if ((plVar5 == (longlong *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Contexts[Pipeline]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                           ,0x118,L""), bVar4)) break;
    bVar8 = bVar8 & ~(~bVar8 + 1);
    plVar3 = plVar9;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// ExecuteAndDestruct @ 145a65b90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommandMultiPipe<FRHICommandListBase,`FD3D12DynamicRHI::RHIReplaceResources'::__l2::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  bool bVar5;
  longlong *plVar6;
  undefined8 uVar7;
  byte bVar8;
  byte bVar9;
  longlong *plVar10;
  longlong *plVar11;
  FD3D12ContextArray local_28;
  
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x20),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
               ,0x112);
  }
  bVar9 = *(byte *)((longlong)this + 0x28);
  plVar11 = (longlong *)0x0;
  plVar4 = (longlong *)0x0;
  while( true ) {
    if (bVar9 == 0) {
      uVar7 = 0;
      local_28._0_8_ = uVar7;
      if (plVar11 != (longlong *)0x0) {
        local_28._0_8_ = (**(code **)(*plVar11 + 0x148))(plVar11);
      }
      if (plVar4 != (longlong *)0x0) {
        uVar7 = (**(code **)(*plVar4 + 0x148))(plVar4);
      }
      local_28._8_8_ = uVar7;
      `FD3D12DynamicRHI::RHIReplaceResources'::__l2::<lambda_1>::operator()
                ((undefined8 *)((longlong)this + 0x10),&local_28);
      pvVar1 = *(void **)((longlong)this + 0x10);
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      if (bVar3) {
        FCpuProfilerTrace::OutputEndEvent();
        return;
      }
      return;
    }
    bVar8 = ~bVar9 + 1 & bVar9;
    if ((bVar8 == 1) || (bVar8 != 2)) {
      plVar6 = *(longlong **)&param_1->Contexts;
      if (((bVar8 == 1) || (plVar10 = plVar6, bVar8 != 2)) &&
         ((plVar10 = plVar4, plVar11 = plVar6, bVar8 != 1 && (bVar8 == 2)))) {
        plVar6 = plVar4;
      }
    }
    else {
      plVar6 = *(longlong **)&(param_1->Contexts).field_0x8;
      plVar10 = plVar6;
    }
    if ((plVar6 == (longlong *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Contexts[Pipeline]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                           ,0x118,L""), bVar5)) break;
    bVar9 = bVar9 & ~(~bVar9 + 1);
    plVar4 = plVar10;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// ExecuteAndDestruct @ 145aa6df0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommandMultiPipe<FRHICommandListBase,`FD3D12DynamicRHI::RHIUpdateTextureReference'::__l2::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  FRHIResource *this_00;
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  bool bVar4;
  longlong *plVar5;
  undefined8 uVar6;
  byte bVar7;
  byte bVar8;
  longlong *plVar9;
  longlong *plVar10;
  FD3D12ContextArray local_28;
  
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x20),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
               ,0x112);
  }
  bVar8 = *(byte *)((longlong)this + 0x28);
  plVar10 = (longlong *)0x0;
  plVar3 = (longlong *)0x0;
  while( true ) {
    if (bVar8 == 0) {
      uVar6 = 0;
      local_28._0_8_ = uVar6;
      if (plVar10 != (longlong *)0x0) {
        local_28._0_8_ = (**(code **)(*plVar10 + 0x148))(plVar10);
      }
      if (plVar3 != (longlong *)0x0) {
        uVar6 = (**(code **)(*plVar3 + 0x148))(plVar3);
      }
      local_28._8_8_ = uVar6;
      `FD3D12DynamicRHI::RHIUpdateTextureReference'::__l2::<lambda_1>::operator()
                ((undefined8 *)((longlong)this + 0x10),&local_28);
      this_00 = *(FRHIResource **)((longlong)this + 0x10);
      if (this_00 != (FRHIResource *)0x0) {
        FRHIResource::Release(this_00);
      }
      if (bVar2) {
        FCpuProfilerTrace::OutputEndEvent();
        return;
      }
      return;
    }
    bVar7 = ~bVar8 + 1 & bVar8;
    if ((bVar7 == 1) || (bVar7 != 2)) {
      plVar5 = *(longlong **)&param_1->Contexts;
      if (((bVar7 == 1) || (plVar9 = plVar5, bVar7 != 2)) &&
         ((plVar9 = plVar3, plVar10 = plVar5, bVar7 != 1 && (bVar7 == 2)))) {
        plVar5 = plVar3;
      }
    }
    else {
      plVar5 = *(longlong **)&(param_1->Contexts).field_0x8;
      plVar9 = plVar5;
    }
    if ((plVar5 == (longlong *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Contexts[Pipeline]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                           ,0x118,L""), bVar4)) break;
    bVar8 = bVar8 & ~(~bVar8 + 1);
    plVar3 = plVar9;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

