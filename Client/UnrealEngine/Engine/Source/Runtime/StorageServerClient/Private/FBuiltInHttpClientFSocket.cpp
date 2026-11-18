// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 6

// FBuiltInHttpClientFSocket @ 148cb2ef0

FBuiltInHttpClientFSocket * __thiscall
FBuiltInHttpClientFSocket::FBuiltInHttpClientFSocket
          (FBuiltInHttpClientFSocket *this,FSocket *param_1)

{
  this->Socket = param_1;
  this->_padding_ = (longlong)&___7FBuiltInHttpClientFSocket__6B_;
  return this;
}

// ~FBuiltInHttpClientFSocket @ 148cb5cf0

void __thiscall
FBuiltInHttpClientFSocket::~FBuiltInHttpClientFSocket(FBuiltInHttpClientFSocket *this)

{
  FSocket *pFVar1;
  
  this->_padding_ = (longlong)&___7FBuiltInHttpClientFSocket__6B_;
  if (this->Socket != (FSocket *)0x0) {
    (**(code **)(this->Socket->_padding_ + 0x10))();
    pFVar1 = this->Socket;
    if (pFVar1 != (FSocket *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    this->Socket = (FSocket *)0x0;
  }
  return;
}

// Close @ 148cbf210

void __thiscall FBuiltInHttpClientFSocket::Close(FBuiltInHttpClientFSocket *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148cbf217. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->Socket->_padding_ + 0x10))();
  return;
}

// HasPendingData @ 148cc9a80

bool __thiscall
FBuiltInHttpClientFSocket::HasPendingData(FBuiltInHttpClientFSocket *this,ulong64 *param_1)

{
  undefined1 uVar1;
  uint local_res8 [8];
  
  uVar1 = (**(code **)(this->Socket->_padding_ + 0x40))(this->Socket,local_res8);
  *param_1 = (ulonglong)local_res8[0];
  return (bool)uVar1;
}

// Recv @ 148cd7cf0

bool __thiscall
FBuiltInHttpClientFSocket::Recv
          (FBuiltInHttpClientFSocket *this,uchar *param_1,ulong64 param_2,ulong64 *param_3,
          Type param_4)

{
  char cVar1;
  
  if (this->Socket != (FSocket *)0x0) {
    cVar1 = (**(code **)(this->Socket->_padding_ + 0x70))();
    if (cVar1 != '\0') {
      *param_3 = 0;
      return true;
    }
  }
  return false;
}

// Send @ 148cdc4d0

bool __thiscall
FBuiltInHttpClientFSocket::Send(FBuiltInHttpClientFSocket *this,uchar *param_1,ulong64 param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int local_res8 [2];
  
  if (this->Socket == (FSocket *)0x0) {
LAB_148cdc52e:
    bVar2 = false;
  }
  else {
    iVar3 = 0;
    if (0 < (longlong)param_2) {
      do {
        local_res8[0] = 0;
        cVar1 = (**(code **)(this->Socket->_padding_ + 0x60))
                          (this->Socket,param_1,param_2 & 0xffffffff,local_res8);
        if (cVar1 == '\0') goto LAB_148cdc52e;
        iVar3 = iVar3 + local_res8[0];
      } while ((longlong)iVar3 < (longlong)param_2);
    }
    bVar2 = true;
  }
  return bVar2;
}

