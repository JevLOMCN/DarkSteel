// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 5

// FFileDataStream @ 14d38f520

FFileDataStream * __thiscall UE::Trace::FFileDataStream::FFileDataStream(FFileDataStream *this)

{
  this->_padding_ = (longlong)&___7FFileDataStream_Trace_UE__6B_;
  (this->Handle).Ptr = (IFileHandle *)0x0;
  this->Remaining = 0;
  return this;
}

// ~FFileDataStream @ 14d392360

void __thiscall UE::Trace::FFileDataStream::~FFileDataStream(FFileDataStream *this)

{
  IFileHandle *pIVar1;
  
  this->_padding_ = (longlong)&___7FFileDataStream_Trace_UE__6B_;
  pIVar1 = (this->Handle).Ptr;
  if (pIVar1 != (IFileHandle *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014d39237b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pIVar1)(pIVar1,1);
    return;
  }
  return;
}

// Close @ 14d398430

void __thiscall UE::Trace::FFileDataStream::Close(FFileDataStream *this)

{
  IFileHandle *pIVar1;
  
  pIVar1 = (this->Handle).Ptr;
  if (pIVar1 != (IFileHandle *)0x0) {
    (this->Handle).Ptr = (IFileHandle *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00014d39844c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pIVar1)(pIVar1,1);
    return;
  }
  return;
}

// Open @ 14d3a4c30

bool __thiscall UE::Trace::FFileDataStream::Open(FFileDataStream *this,wchar_t *param_1)

{
  IFileHandle *pIVar1;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar2;
  IFileHandle *pIVar3;
  ulong64 uVar4;
  
  this_00 = FPlatformFileManager::Get();
  pIVar2 = FPlatformFileManager::GetPlatformFile(this_00);
  pIVar3 = (IFileHandle *)(**(code **)((longlong)*pIVar2 + 0xe8))(pIVar2,param_1,0);
  pIVar1 = (this->Handle).Ptr;
  if ((pIVar1 != pIVar3) && ((this->Handle).Ptr = pIVar3, pIVar1 != (IFileHandle *)0x0)) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  pIVar1 = (this->Handle).Ptr;
  if (pIVar1 == (IFileHandle *)0x0) {
    return false;
  }
  uVar4 = (**(code **)((longlong)*pIVar1 + 0x50))();
  this->Remaining = uVar4;
  return true;
}

// Read @ 14d3a5d20

int __thiscall UE::Trace::FFileDataStream::Read(FFileDataStream *this,void *param_1,uint param_2)

{
  IFileHandle *pIVar1;
  ulonglong uVar2;
  char cVar3;
  
  pIVar1 = (this->Handle).Ptr;
  if (pIVar1 != (IFileHandle *)0x0) {
    uVar2 = this->Remaining;
    if (uVar2 == 0) {
      return 0;
    }
    if (uVar2 < param_2) {
      param_2 = (uint)uVar2;
    }
    this->Remaining = uVar2 - param_2;
    cVar3 = (**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
    if (cVar3 != '\0') {
      return param_2;
    }
    (**(code **)(this->_padding_ + 0x10))(this);
  }
  return -1;
}

