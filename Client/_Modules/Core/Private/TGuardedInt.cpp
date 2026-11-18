// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// operator* @ 141bed5b0

TGuardedInt<signed_char> __thiscall
TGuardedInt<signed_char>::operator*(TGuardedInt<signed_char> *this,TGuardedInt<signed_char> param_1)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  undefined6 in_register_00000012;
  char *pcVar4;
  byte bVar5;
  char cVar6;
  ulonglong in_R8;
  
  pcVar4 = (char *)CONCAT62(in_register_00000012,param_1);
  if ((this->bIsValid == false) || ((char)(in_R8 >> 8) == '\0')) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    return param_1;
  }
  bVar2 = this->Value;
  cVar6 = (char)in_R8;
  if (cVar6 == '\0') {
    *pcVar4 = '\0';
    pcVar4[1] = '\0';
    pcVar4[1] = '\x01';
    return param_1;
  }
  bVar5 = bVar2;
  if ((char)bVar2 < '\0') {
    bVar5 = -bVar2;
  }
  if (cVar6 < '\0') {
    in_R8 = (ulonglong)(byte)-cVar6;
  }
  pcVar1 = pcVar4 + 1;
  uVar3 = (uint)((byte)((uint)(int)(char)bVar2 >> 7) & 1 ^ 1);
  if (-1 < cVar6) {
    uVar3 = (uint)(int)(char)bVar2 >> 7 & 1;
  }
  if ((uint)bVar5 <= (uint)((ulonglong)(uVar3 + 0x7f) / (in_R8 & 0xff))) {
    *pcVar4 = cVar6 * bVar2;
    *pcVar1 = '\0';
    *pcVar1 = '\x01';
    return param_1;
  }
  pcVar4[0] = '\0';
  pcVar4[1] = '\0';
  *pcVar1 = '\0';
  return param_1;
}

// GetChecked @ 141c015a0

schar __thiscall TGuardedInt<signed_char>::GetChecked(TGuardedInt<signed_char> *this,schar param_1)

{
  code *pcVar1;
  bool bVar2;
  schar sVar3;
  
  if (this->bIsValid == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\GuardedInt.h"
                       ,0x6e,L"Invalid value in TGuardedInt::GetChecked.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      sVar3 = (*pcVar1)();
      return sVar3;
    }
  }
  if (this->bIsValid != false) {
    return this->Value;
  }
  return param_1;
}

// GetChecked @ 141c01610

uchar __thiscall
TGuardedInt<unsigned_char>::GetChecked(TGuardedInt<unsigned_char> *this,uchar param_1)

{
  code *pcVar1;
  bool bVar2;
  uchar uVar3;
  
  if (this->bIsValid == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\GuardedInt.h"
                       ,0x6e,L"Invalid value in TGuardedInt::GetChecked.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  if (this->bIsValid != false) {
    return this->Value;
  }
  return param_1;
}

