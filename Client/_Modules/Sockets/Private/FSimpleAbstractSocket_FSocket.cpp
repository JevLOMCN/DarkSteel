// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Sockets
// Functions: 2

// Receive @ 143114590

bool __thiscall
FSimpleAbstractSocket_FSocket::Receive
          (FSimpleAbstractSocket_FSocket *this,uchar *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int local_res18 [4];
  
  iVar4 = 0;
  if (param_2 < 0) {
LAB_143114624:
    bVar2 = false;
  }
  else {
    for (; 0 < param_2; param_2 = param_2 - local_res18[0]) {
      local_res18[0] = 0;
      (**(code **)(this->Socket->_padding_ + 0x70))
                (this->Socket,param_1 + iVar4,param_2,local_res18,0);
      if ((param_2 < local_res18[0]) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumRead <= Size",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Sockets\\Private\\NetworkMessage.cpp"
                             ,0x15,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if (local_res18[0] < 1) goto LAB_143114624;
      iVar4 = iVar4 + local_res18[0];
    }
    bVar2 = true;
  }
  return bVar2;
}

// Send @ 143115dc0

bool __thiscall
FSimpleAbstractSocket_FSocket::Send(FSimpleAbstractSocket_FSocket *this,uchar *param_1,int param_2)

{
  char cVar1;
  int local_res18 [2];
  
  while( true ) {
    if (param_2 < 1) {
      return true;
    }
    local_res18[0] = 0;
    cVar1 = (**(code **)(this->Socket->_padding_ + 0x60))(this->Socket,param_1,param_2,local_res18);
    if (cVar1 == '\0') break;
    param_2 = param_2 - local_res18[0];
    param_1 = param_1 + local_res18[0];
  }
  return false;
}

