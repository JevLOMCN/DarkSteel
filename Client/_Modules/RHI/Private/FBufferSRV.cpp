// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// GetViewInfo @ 145caf350

FViewInfo * __thiscall
FRHIViewDesc::FBufferSRV::GetViewInfo
          (FBufferSRV *this,FViewInfo *__return_storage_ptr__,FRHIBuffer *param_1)

{
  code *pcVar1;
  bool bVar2;
  FViewInfo *pFVar3;
  
  if (*(char *)this != '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ViewType == EViewType::BufferSRV",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIResources.cpp"
                       ,0x113,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FViewInfo *)(*pcVar1)();
      return pFVar3;
    }
  }
  FBuffer::GetViewInfo((FBuffer *)this,(FViewInfo *)__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

