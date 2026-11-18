// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FKeyHandle @ 147a24ea0

FKeyHandle * __thiscall FKeyHandle::FKeyHandle(FKeyHandle *this,uint param_1)

{
  this->Index = param_1;
  return this;
}

// FKeyHandle @ 147a24eb0

FKeyHandle * __thiscall FKeyHandle::FKeyHandle(FKeyHandle *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FKeyHandle *pFVar4;
  
  LOCK();
  UNLOCK();
  uVar3 = (int)LastKeyHandleIndex + 1;
  LastKeyHandleIndex = (atomic<unsigned_int>)((int)LastKeyHandleIndex + 1);
  this->Index = uVar3;
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\KeyHandle.cpp"
                       ,0x1c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FKeyHandle *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this;
}

// Invalid @ 147a62c70

FKeyHandle __cdecl FKeyHandle::Invalid(void)

{
  undefined4 *in_RCX;
  
  *in_RCX = 0;
  return (FKeyHandle)(uint)in_RCX;
}

// IsValid @ 147a633e0

bool __thiscall FKeyHandle::IsValid(FKeyHandle *this)

{
  return this->Index != 0;
}

