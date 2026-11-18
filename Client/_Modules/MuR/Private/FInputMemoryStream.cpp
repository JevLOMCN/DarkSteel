// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 2

// FInputMemoryStream @ 14ab5ea30

FInputMemoryStream * __thiscall
UE::Mutable::Private::FInputMemoryStream::FInputMemoryStream
          (FInputMemoryStream *this,void *param_1,ulong64 param_2)

{
  this->Pos = 0;
  this->_padding_ = (longlong)&___7FInputMemoryStream_Private_Mutable_UE__6B_;
  this->Buffer = param_1;
  this->Size = param_2;
  return this;
}

// Read @ 14ab82cf0

void __thiscall
UE::Mutable::Private::FInputMemoryStream::Read
          (FInputMemoryStream *this,void *param_1,ulong64 param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_2 != 0) {
    if (this->Size < this->Pos + param_2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pos + InSize <= Size",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Serialisation.cpp"
                         ,0x6e,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    memcpy(param_1,(void *)((longlong)this->Buffer + this->Pos),param_2);
    this->Pos = this->Pos + param_2;
  }
  return;
}

