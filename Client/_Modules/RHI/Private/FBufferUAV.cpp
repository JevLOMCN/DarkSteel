// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// GetViewInfo @ 145caf3c0

FViewInfo * __thiscall
FRHIViewDesc::FBufferUAV::GetViewInfo
          (FBufferUAV *this,FViewInfo *__return_storage_ptr__,FRHIBuffer *param_1)

{
  code *pcVar1;
  bool bVar2;
  FViewInfo *pFVar3;
  
  if (*(char *)this != '\x01') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ViewType == EViewType::BufferUAV",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIResources.cpp"
                       ,0x119,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FViewInfo *)(*pcVar1)();
      return pFVar3;
    }
  }
  FBuffer::GetViewInfo((FBuffer *)this,(FViewInfo *)__return_storage_ptr__,param_1);
  __return_storage_ptr__->bAtomicCounter = false;
  __return_storage_ptr__->bAppendBuffer = false;
  __return_storage_ptr__->bAtomicCounter = (bool)(this->field_0x3 & 1);
  __return_storage_ptr__->bAppendBuffer = (bool)((byte)this->field_0x3 >> 1 & 1);
  return __return_storage_ptr__;
}

