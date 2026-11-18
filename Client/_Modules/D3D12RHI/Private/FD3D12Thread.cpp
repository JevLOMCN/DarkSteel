// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 2

// ~FD3D12Thread @ 145a48b40

void __thiscall FD3D12Thread::~FD3D12Thread(FD3D12Thread *this)

{
  FRunnableThread *pFVar1;
  
  this->bExit = true;
  this->_padding_ = (longlong)&___7FD3D12Thread__6B_;
  SetEvent(this->Event);
  (**(code **)(this->Thread->_padding_ + 0x20))();
  pFVar1 = this->Thread;
  if (pFVar1 != (FRunnableThread *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
  }
  CloseHandle(this->Event);
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  return;
}

// Run @ 145a7c710

uint __thiscall FD3D12Thread::Run(FD3D12Thread *this)

{
  char cVar1;
  ulonglong *puVar2;
  byte *pbVar3;
  undefined1 local_res8 [8];
  
  cVar1 = this->bExit;
  while (cVar1 == '\0') {
    do {
      puVar2 = (ulonglong *)(*(code *)this->QueueFunc)(this->RHI,local_res8);
    } while ((*puVar2 & 1) != 0);
    WaitForSingleObject(this->Event,(DWORD)(*puVar2 >> 0x20));
    cVar1 = this->bExit;
  }
  do {
    pbVar3 = (byte *)(*(code *)this->QueueFunc)(this->RHI,local_res8);
  } while ((*pbVar3 & 2) != 0);
  return 0;
}

