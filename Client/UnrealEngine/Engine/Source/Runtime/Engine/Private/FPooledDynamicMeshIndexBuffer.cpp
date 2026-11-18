// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// InitPrimitiveResource @ 147b75fc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FPooledDynamicMeshIndexBuffer::InitPrimitiveResource
          (FPooledDynamicMeshIndexBuffer *this,FRHICommandListBase *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000147b75fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(&this->_padding_);
  return;
}

// InitRHI @ 147b76340

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FPooledDynamicMeshIndexBuffer::InitRHI
          (FPooledDynamicMeshIndexBuffer *this,FRHICommandListBase *param_1)

{
  longlong *plVar1;
  FRHIResource *this_00;
  longlong *plVar2;
  void *_Dst;
  bool bVar3;
  bool bVar4;
  FRHIResource *local_res8;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FPooledDynamicMeshIndexBuffer::InitRHI(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId350,"FPooledDynamicMeshIndexBuffer::InitRHI",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DynamicMeshBuilder.cpp"
               ,0x15e);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FPooledDynamicMeshIndexBuffer::InitRHI(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId350);
  }
  plVar1 = *(longlong **)&(this->Indices).ArrayNum;
  plVar2 = (longlong *)
           (**(code **)(*plVar1 + 0x10))
                     (plVar1,&local_res8,param_1,
                      *(undefined4 *)&(this->Indices).AllocatorInstance.Data);
  plVar1 = &this->_padding_;
  if (plVar1 != plVar2) {
    this_00 = (FRHIResource *)*plVar1;
    *plVar1 = *plVar2;
    *plVar2 = 0;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FPooledDynamicMeshIndexBuffer::InitRHI(FRHICommandListBase&___ptr64)___ptr64'
                ::__l3::__CpuProfilerEventSpecId357,"RHILockBuffer",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DynamicMeshBuilder.cpp"
               ,0x165);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FPooledDynamicMeshIndexBuffer::InitRHI(FRHICommandListBase&___ptr64)___ptr64'
               ::__l3::__CpuProfilerEventSpecId357);
  }
  _Dst = FRHICommandListBase::LockBuffer
                   (param_1,(FRHIBuffer *)*plVar1,0,
                    *(int *)&(this->Indices).AllocatorInstance.Data << 2,RLM_WriteOnly);
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FPooledDynamicMeshIndexBuffer::InitRHI(FRHICommandListBase&___ptr64)___ptr64'
                ::__l4::__CpuProfilerEventSpecId361,"Memcpy",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DynamicMeshBuilder.cpp"
               ,0x169);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FPooledDynamicMeshIndexBuffer::InitRHI(FRHICommandListBase&___ptr64)___ptr64'
               ::__l4::__CpuProfilerEventSpecId361);
  }
  memcpy(_Dst,(void *)this->_padding_,(longlong)*(int *)&(this->Indices).AllocatorInstance.Data << 2
        );
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (CpuChannel->Enabled < 0) {
    FRHICommandListBase::UnlockBuffer(param_1,(FRHIBuffer *)*plVar1);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FPooledDynamicMeshIndexBuffer::InitRHI(FRHICommandListBase&___ptr64)___ptr64'
                ::__l5::__CpuProfilerEventSpecId365,"RHIUnlockBuffer",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DynamicMeshBuilder.cpp"
               ,0x16d);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FPooledDynamicMeshIndexBuffer::InitRHI(FRHICommandListBase&___ptr64)___ptr64'
               ::__l5::__CpuProfilerEventSpecId365);
    FRHICommandListBase::UnlockBuffer(param_1,(FRHIBuffer *)*plVar1);
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ReleasePrimitiveResource @ 147b835f0

void __thiscall
FPooledDynamicMeshIndexBuffer::ReleasePrimitiveResource(FPooledDynamicMeshIndexBuffer *this)

{
  longlong *plVar1;
  
  plVar1 = &this->_padding_;
  (**(code **)(this->_padding_ + 0x20))(plVar1);
                    /* WARNING: Could not recover jumptable at 0x000147b83614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*plVar1)(plVar1,1);
  return;
}

// ReleaseRHI @ 147b836a0

void __thiscall FPooledDynamicMeshIndexBuffer::ReleaseRHI(FPooledDynamicMeshIndexBuffer *this)

{
  longlong *plVar1;
  bool bVar2;
  
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FPooledDynamicMeshIndexBuffer::ReleaseRHI(void)___ptr64'
                ::__l2::__CpuProfilerEventSpecId372,"FPooledDynamicMeshIndexBuffer::ReleaseRHI",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DynamicMeshBuilder.cpp"
               ,0x174);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FPooledDynamicMeshIndexBuffer::ReleaseRHI(void)___ptr64'
               ::__l2::__CpuProfilerEventSpecId372);
  }
  plVar1 = *(longlong **)&(this->Indices).ArrayNum;
  (**(code **)(*plVar1 + 0x18))(plVar1,&this->_padding_);
  FIndexBuffer::ReleaseRHI((FIndexBuffer *)this);
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

