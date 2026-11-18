// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D11RHI
// Functions: 5

// ExecuteAndDestruct @ 14597cb80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<TD3D11RHIGenericCommand<`FD3D11DynamicRHI::AsyncReallocateTexture2D_RenderThread'::__l7::<lambda_1>,TEnableIf<0,void>_>,FD3D11RHIGenericCommandString>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  bool bVar1;
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope(local_res18,&::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId1617,L"FD3D11RHIGenericCommand",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId1617);
  }
  (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x548))
            (*(longlong **)((longlong)this + 0x10),*(undefined8 *)((longlong)this + 0x18),
             *(undefined8 *)((longlong)this + 0x20),*(undefined4 *)((longlong)this + 0x28),
             *(undefined4 *)((longlong)this + 0x2c),*(undefined4 *)((longlong)this + 0x30),
             *(undefined8 *)((longlong)this + 0x38));
  if (*(FRHIResource **)((longlong)this + 0x18) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x18));
  }
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 14597ccf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FRHICommand<TD3D11RHIGenericCommand<`FD3D11EventQuery::IssueEvent'::__l7::<lambda_1>,TEnableIf<0,void>_>,FD3D11RHIGenericCommandString>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  ID3D11DeviceContext *pIVar1;
  bool bVar2;
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope(local_res18,&::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId1617,L"FD3D11RHIGenericCommand",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId1617);
  }
  pIVar1 = (GD3D11RHI->Direct3DDeviceIMContext).Reference;
  (**(code **)((longlong)*pIVar1 + 0xe0))(pIVar1,*(undefined8 *)((longlong)this + 0x10));
  if (*(longlong **)((longlong)this + 0x10) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x10))();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 14597ce50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FRHICommand<TD3D11RHIGenericCommand<`FD3D11DynamicRHI::RHIUnlockTexture'::__l7::<lambda_1>,TEnableIf<0,void>_>,FD3D11RHIGenericCommandString>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  bool bVar1;
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope(local_res18,&::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId1617,L"FD3D11RHIGenericCommand",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId1617);
  }
  FD3D11Texture::Unlock
            (*(FD3D11Texture **)((longlong)this + 0x18),
             *(FD3D11DynamicRHI **)((longlong)this + 0x10),
             (FRHILockTextureArgs *)((longlong)this + 0x20));
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 14597cf90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FRHICommand<TD3D11RHIGenericCommand<`FD3D11Texture::Lock'::__l43::<lambda_1>,TEnableIf<0,void>_>,FD3D11RHIGenericCommandString>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  bool bVar1;
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  FD3D11LockedKey local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope(local_res18,&::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId1617,L"FD3D11RHIGenericCommand",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId1617);
  }
  local_18.SourceObject = *(ID3D11Resource **)(*(longlong *)((longlong)this + 0x10) + 0x148);
  local_18.Subresource = *(uint *)((longlong)this + 0x18);
  FD3D11DynamicRHI::AddLockedData
            (*(FD3D11DynamicRHI **)((longlong)this + 0x40),&local_18,
             (FD3D11LockedData *)((longlong)this + 0x20));
  if (*(longlong **)((longlong)this + 0x20) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)this + 0x20) + 0x10))();
  }
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 14597d0f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FRHICommand<TD3D11RHIGenericCommand<`FD3D11DynamicRHI::RHICreateUniformBuffer'::__l44::<lambda_1>,TEnableIf<0,void>_>,FD3D11RHIGenericCommandString>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  ID3D11Buffer IVar1;
  bool bVar2;
  TRefCountPtr<ID3D11Buffer> TVar3;
  ID3D11Buffer *pIVar4;
  FLLMScope local_res8 [2];
  ID3D11Device local_res18;
  FMemScope local_res20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,&::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId1617,L"FD3D11RHIGenericCommand",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId1617);
  }
  TVar3 = CreateAndUpdatePooledUniformBuffer
                    (&local_res18,(ID3D11DeviceContext *)(GD3D11RHI->Direct3DDevice).Reference,
                     (GD3D11RHI->Direct3DDeviceIMContext).Reference,
                     (uint)*(undefined8 *)((longlong)this + 0x18));
  pIVar4 = (ID3D11Buffer *)(*(longlong *)((longlong)this + 0x10) + 0x50);
  if (pIVar4 != TVar3.Reference) {
    IVar1 = *pIVar4;
    *pIVar4 = *TVar3.Reference;
    *TVar3.Reference = (ID3D11Buffer)0x0;
    if (IVar1 != (ID3D11Buffer)0x0) {
      (**(code **)(*(longlong *)IVar1 + 0x10))();
    }
  }
  if (local_res18 != (ID3D11Device)0x0) {
    (**(code **)(*(longlong *)local_res18 + 0x10))();
  }
  FMemory::Free(*(void **)((longlong)this + 0x18));
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

