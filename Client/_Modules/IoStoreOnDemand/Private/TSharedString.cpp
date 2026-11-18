// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 3

// TSharedString<char> @ 1445a21b0

TSharedString<char> * __thiscall
UE::TSharedString<char>::TSharedString<char>(TSharedString<char> *this,TSharedString<char> *param_1)

{
  char *pcVar1;
  
  pcVar1 = param_1->Chars;
  this->Chars = pcVar1;
  if (pcVar1 != (char *)0x0) {
    LOCK();
    *(int *)(pcVar1 + -8) = *(int *)(pcVar1 + -8) + 1;
    UNLOCK();
  }
  return this;
}

// operator= @ 1445a9a60

TSharedString<char> * __thiscall
UE::TSharedString<char>::operator=(TSharedString<char> *this,TSharedString<char> *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (this != param_1) {
    if (this->Chars != (char *)0x0) {
      piVar1 = (int *)(this->Chars + -8);
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FMemory::Free(piVar1);
      }
    }
    this->Chars = param_1->Chars;
    param_1->Chars = (char *)0x0;
  }
  return this;
}

// operator= @ 1445a9ac0

TSharedString<char> * __thiscall
UE::TSharedString<char>::operator=(TSharedString<char> *this,TSharedString<char> *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  int *piVar4;
  
  pcVar2 = param_1->Chars;
  pcVar3 = this->Chars;
  if (pcVar2 != (char *)0x0) {
    LOCK();
    *(int *)(pcVar2 + -8) = *(int *)(pcVar2 + -8) + 1;
    UNLOCK();
  }
  if (pcVar3 != (char *)0x0) {
    piVar4 = (int *)(pcVar3 + -8);
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      FMemory::Free(piVar4);
    }
  }
  this->Chars = pcVar2;
  return this;
}

