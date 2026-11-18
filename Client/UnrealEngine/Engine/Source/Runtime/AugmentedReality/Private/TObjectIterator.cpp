// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 6

// Advance @ 14cf4a4d0

bool __thiscall TObjectIterator<UARFaceComponent>::Advance(TObjectIterator<UARFaceComponent> *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = (this->ObjectArray).ArrayNum;
  uVar6 = this->Index + 1;
  this->Index = uVar6;
  if ((int)uVar6 < iVar5) {
    do {
      uVar4 = 0;
      if ((int)uVar6 < iVar5) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      if (*(longlong *)((this->ObjectArray).AllocatorInstance.Data + (longlong)(int)uVar6 * 8) != 0)
      {
        return true;
      }
      uVar6 = this->Index + 1;
      this->Index = uVar6;
      iVar5 = (this->ObjectArray).ArrayNum;
    } while ((int)uVar6 < iVar5);
  }
  return false;
}

// Advance @ 14cf4a580

bool __thiscall
TObjectIterator<UARGeoAnchorComponent>::Advance(TObjectIterator<UARGeoAnchorComponent> *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = (this->ObjectArray).ArrayNum;
  uVar6 = this->Index + 1;
  this->Index = uVar6;
  if ((int)uVar6 < iVar5) {
    do {
      uVar4 = 0;
      if ((int)uVar6 < iVar5) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      if (*(longlong *)((this->ObjectArray).AllocatorInstance.Data + (longlong)(int)uVar6 * 8) != 0)
      {
        return true;
      }
      uVar6 = this->Index + 1;
      this->Index = uVar6;
      iVar5 = (this->ObjectArray).ArrayNum;
    } while ((int)uVar6 < iVar5);
  }
  return false;
}

// Advance @ 14cf4a630

bool __thiscall
TObjectIterator<UARImageComponent>::Advance(TObjectIterator<UARImageComponent> *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = (this->ObjectArray).ArrayNum;
  uVar6 = this->Index + 1;
  this->Index = uVar6;
  if ((int)uVar6 < iVar5) {
    do {
      uVar4 = 0;
      if ((int)uVar6 < iVar5) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      if (*(longlong *)((this->ObjectArray).AllocatorInstance.Data + (longlong)(int)uVar6 * 8) != 0)
      {
        return true;
      }
      uVar6 = this->Index + 1;
      this->Index = uVar6;
      iVar5 = (this->ObjectArray).ArrayNum;
    } while ((int)uVar6 < iVar5);
  }
  return false;
}

// Advance @ 14cf4a6e0

bool __thiscall
TObjectIterator<UARPlaneComponent>::Advance(TObjectIterator<UARPlaneComponent> *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = (this->ObjectArray).ArrayNum;
  uVar6 = this->Index + 1;
  this->Index = uVar6;
  if ((int)uVar6 < iVar5) {
    do {
      uVar4 = 0;
      if ((int)uVar6 < iVar5) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      if (*(longlong *)((this->ObjectArray).AllocatorInstance.Data + (longlong)(int)uVar6 * 8) != 0)
      {
        return true;
      }
      uVar6 = this->Index + 1;
      this->Index = uVar6;
      iVar5 = (this->ObjectArray).ArrayNum;
    } while ((int)uVar6 < iVar5);
  }
  return false;
}

// Advance @ 14cf4a790

bool __thiscall TObjectIterator<UARPoseComponent>::Advance(TObjectIterator<UARPoseComponent> *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = (this->ObjectArray).ArrayNum;
  uVar6 = this->Index + 1;
  this->Index = uVar6;
  if ((int)uVar6 < iVar5) {
    do {
      uVar4 = 0;
      if ((int)uVar6 < iVar5) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      if (*(longlong *)((this->ObjectArray).AllocatorInstance.Data + (longlong)(int)uVar6 * 8) != 0)
      {
        return true;
      }
      uVar6 = this->Index + 1;
      this->Index = uVar6;
      iVar5 = (this->ObjectArray).ArrayNum;
    } while ((int)uVar6 < iVar5);
  }
  return false;
}

// Advance @ 14cf4a840

bool __thiscall
TObjectIterator<UARQRCodeComponent>::Advance(TObjectIterator<UARQRCodeComponent> *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = (this->ObjectArray).ArrayNum;
  uVar6 = this->Index + 1;
  this->Index = uVar6;
  if ((int)uVar6 < iVar5) {
    do {
      uVar4 = 0;
      if ((int)uVar6 < iVar5) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      if (*(longlong *)((this->ObjectArray).AllocatorInstance.Data + (longlong)(int)uVar6 * 8) != 0)
      {
        return true;
      }
      uVar6 = this->Index + 1;
      this->Index = uVar6;
      iVar5 = (this->ObjectArray).ArrayNum;
    } while ((int)uVar6 < iVar5);
  }
  return false;
}

