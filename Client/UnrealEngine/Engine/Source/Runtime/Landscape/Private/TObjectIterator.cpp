// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 6

// TObjectIterator<ULandscapeComponent> @ 145f01ba0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TObjectIterator<ULandscapeComponent> * __thiscall
TObjectIterator<ULandscapeComponent>::TObjectIterator<ULandscapeComponent>
          (TObjectIterator<ULandscapeComponent> *this,EObjectFlags param_1,bool param_2,
          EInternalObjectFlags param_3)

{
  EInternalObjectFlags EVar1;
  UClass *pUVar2;
  
  this->Index = -1;
  (this->ObjectArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectArray).ArrayNum = 0;
  (this->ObjectArray).ArrayMax = 0;
  EVar1 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar2 = Z_Construct_UClass_ULandscapeComponent_NoRegister();
  GetObjectsOfClass(pUVar2,&this->ObjectArray,param_2,param_1,
                    EVar1 | param_3 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted))
  ;
  Advance(this);
  return this;
}

// Advance @ 145f08b00

bool __thiscall
TObjectIterator<ULandscapeComponent>::Advance(TObjectIterator<ULandscapeComponent> *this)

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

// Advance @ 145f08bb0

bool __thiscall
TObjectIterator<ULandscapeHeightfieldCollisionComponent>::Advance
          (TObjectIterator<ULandscapeHeightfieldCollisionComponent> *this)

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

// Advance @ 145f49860

bool __thiscall
TObjectIterator<ULandscapeComponent_const_>::Advance
          (TObjectIterator<ULandscapeComponent_const_> *this)

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

// Advance @ 145f49910

bool __thiscall TObjectIterator<ALandscapeProxy>::Advance(TObjectIterator<ALandscapeProxy> *this)

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

// Advance @ 145f814f0

bool __thiscall
TObjectIterator<ULandscapeNaniteComponent>::Advance
          (TObjectIterator<ULandscapeNaniteComponent> *this)

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

