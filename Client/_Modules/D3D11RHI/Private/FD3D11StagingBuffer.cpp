// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D11RHI
// Functions: 4

// ~FD3D11StagingBuffer @ 14596f060

void __thiscall FD3D11StagingBuffer::~FD3D11StagingBuffer(FD3D11StagingBuffer *this)

{
  ID3D11Buffer *pIVar1;
  
  this->_padding_ = (longlong)&___7FD3D11StagingBuffer__6B_;
  pIVar1 = (this->StagedRead).Reference;
  if (pIVar1 != (ID3D11Buffer *)0x0) {
    (this->StagedRead).Reference = (ID3D11Buffer *)0x0;
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (this->StagedRead).Reference;
  if (pIVar1 != (ID3D11Buffer *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FRHIStagingBuffer__6B_;
  FRHIResource::~FRHIResource((FRHIResource *)this);
  return;
}

// GetGPUSizeBytes @ 145982090

ulong64 __thiscall FD3D11StagingBuffer::GetGPUSizeBytes(FD3D11StagingBuffer *this)

{
  return (ulonglong)this->ShadowBufferSize;
}

// Lock @ 145985ef0

void * __thiscall FD3D11StagingBuffer::Lock(FD3D11StagingBuffer *this,uint param_1,uint param_2)

{
  ID3D11Buffer *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  undefined8 in_stack_ffffffffffffffd8;
  uint uVar6;
  longlong local_18 [2];
  
  uVar6 = (uint)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  if ((char)this->_padding_ != '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bIsLocked",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Commands.cpp"
                       ,0x653,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  pIVar1 = (this->StagedRead).Reference;
  *(undefined1 *)&this->_padding_ = 1;
  if (pIVar1 != (ID3D11Buffer *)0x0) {
    iVar4 = (**(code **)((longlong)*this->Context + 0x70))
                      (this->Context,pIVar1,0,1,(ulonglong)uVar6 << 0x20,local_18);
    if (iVar4 < 0) {
      VerifyD3D11Result(iVar4,"Context->Map(StagedRead, 0, D3D11_MAP_READ, 0, &MappedSubresource)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Commands.cpp"
                        ,0x659,(ID3D11Device *)0x0);
    }
    return (void *)((ulonglong)param_1 + local_18[0]);
  }
  return (void *)0x0;
}

// Unlock @ 14599d320

void __thiscall FD3D11StagingBuffer::Unlock(FD3D11StagingBuffer *this)

{
  ID3D11Buffer *pIVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((char)this->_padding_ == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsLocked",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Commands.cpp"
                       ,0x665,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->StagedRead).Reference;
  *(undefined1 *)&this->_padding_ = 0;
  if (pIVar1 != (ID3D11Buffer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014599d371. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*this->Context + 0x78))(this->Context,pIVar1,0);
    return;
  }
  return;
}

