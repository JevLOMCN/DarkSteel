// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ACLPlugin
// Functions: 5

// Advance @ 14deb2810

bool __thiscall
TObjectIterator<UAnimBoneCompressionCodec>::Advance
          (TObjectIterator<UAnimBoneCompressionCodec> *this)

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

// Advance @ 14deb28c0

bool __thiscall
TObjectIterator<UAnimBoneCompressionSettings>::Advance
          (TObjectIterator<UAnimBoneCompressionSettings> *this)

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

// Advance @ 14deb2970

bool __thiscall
TObjectIterator<UAnimCurveCompressionCodec>::Advance
          (TObjectIterator<UAnimCurveCompressionCodec> *this)

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

// Advance @ 14deb2a20

bool __thiscall
TObjectIterator<UAnimCurveCompressionSettings>::Advance
          (TObjectIterator<UAnimCurveCompressionSettings> *this)

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

// Advance @ 14deb2ad0

bool __thiscall
TObjectIterator<UAnimationCompressionLibraryDatabase>::Advance
          (TObjectIterator<UAnimationCompressionLibraryDatabase> *this)

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

