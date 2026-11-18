// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWrapper
// Functions: 7

// FIcnsImageWrapper @ 142664bd0

FIcnsImageWrapper * __thiscall FIcnsImageWrapper::FIcnsImageWrapper(FIcnsImageWrapper *this)

{
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined4 *)&this->field_0x44 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x50 = 0;
  this->field_0x40 = 0xff;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined8 *)&this->field_0x60 = 0;
  *(undefined ***)this = &___7FIcnsImageWrapper__6B_;
  return this;
}

// CanSetRawFormat @ 142682380

bool __thiscall
FIcnsImageWrapper::CanSetRawFormat(FIcnsImageWrapper *this,ERGBFormat param_1,int param_2)

{
  return false;
}

// Compress @ 142685ac0

void __thiscall FIcnsImageWrapper::Compress(FIcnsImageWrapper *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\IcnsImageWrapper.cpp"
                     ,99,L"ICNS compression not supported");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// GetSupportedRawFormat @ 14268bef0

Type __thiscall FIcnsImageWrapper::GetSupportedRawFormat(FIcnsImageWrapper *this,Type param_1)

{
  return BGRA8;
}

// SetCompressed @ 14268e100

bool __thiscall
FIcnsImageWrapper::SetCompressed(FIcnsImageWrapper *this,void *param_1,long64 param_2)

{
  return false;
}

// SetRaw @ 14268ef60

bool __thiscall
FIcnsImageWrapper::SetRaw
          (FIcnsImageWrapper *this,void *param_1,long64 param_2,int param_3,int param_4,
          ERGBFormat param_5,int param_6,int param_7)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_7 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InBytesPerRow == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\IcnsImageWrapper.cpp"
                       ,0x56,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// Uncompress @ 1426902e0

void __thiscall
FIcnsImageWrapper::Uncompress(FIcnsImageWrapper *this,ERGBFormat param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\IcnsImageWrapper.cpp"
                     ,0xe8,L"ICNS uncompressing not supported on this platform");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

