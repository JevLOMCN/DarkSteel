// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_WorldUtils
// Functions: 1

// GetElement @ 14a033cd0

FKShapeElem * __thiscall FKAggregateGeom::GetElement(FKAggregateGeom *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FKShapeElem *pFVar3;
  uint uVar4;
  uint uVar5;
  
  if ((-1 < param_1) && (param_1 < (this->SphereElems).ArrayNum)) {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FKShapeElem *)(*pcVar1)();
        return pFVar3;
      }
    }
    return (FKShapeElem *)((this->SphereElems).AllocatorInstance.Data + (longlong)param_1 * 0x50);
  }
  uVar5 = param_1 - (this->SphereElems).ArrayNum;
  if ((-1 < (int)uVar5) && ((int)uVar5 < (this->BoxElems).ArrayNum)) {
    uVar4 = 0;
    if ((int)uVar5 < (this->BoxElems).ArrayNum) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FKShapeElem *)(*pcVar1)();
        return pFVar3;
      }
    }
    return (FKShapeElem *)((this->BoxElems).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x70);
  }
  uVar5 = uVar5 - (this->BoxElems).ArrayNum;
  if ((-1 < (int)uVar5) && ((int)uVar5 < (this->SphylElems).ArrayNum)) {
    uVar4 = 0;
    if ((int)uVar5 < (this->SphylElems).ArrayNum) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FKShapeElem *)(*pcVar1)();
        return pFVar3;
      }
    }
    return (FKShapeElem *)((this->SphylElems).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x68);
  }
  uVar5 = uVar5 - (this->SphylElems).ArrayNum;
  if ((-1 < (int)uVar5) && ((int)uVar5 < (this->ConvexElems).ArrayNum)) {
    uVar4 = 0;
    if ((int)uVar5 < (this->ConvexElems).ArrayNum) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FKShapeElem *)(*pcVar1)();
        return pFVar3;
      }
    }
    return (FKShapeElem *)
           ((this->ConvexElems).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x100);
  }
  uVar5 = uVar5 - (this->ConvexElems).ArrayNum;
  if ((-1 < (int)uVar5) && ((int)uVar5 < (this->TaperedCapsuleElems).ArrayNum)) {
    uVar4 = 0;
    if ((int)uVar5 < (this->TaperedCapsuleElems).ArrayNum) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FKShapeElem *)(*pcVar1)();
        return pFVar3;
      }
    }
    return (FKShapeElem *)
           ((this->TaperedCapsuleElems).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x70);
  }
  uVar5 = uVar5 - (this->TaperedCapsuleElems).ArrayNum;
  if ((-1 < (int)uVar5) && ((int)uVar5 < (this->LevelSetElems).ArrayNum)) {
    uVar4 = 0;
    if ((int)uVar5 < (this->LevelSetElems).ArrayNum) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FKShapeElem *)(*pcVar1)();
        return pFVar3;
      }
    }
    return (FKShapeElem *)
           ((this->LevelSetElems).AllocatorInstance.Data + (longlong)(int)uVar5 * 0xa0);
  }
  uVar5 = uVar5 - (this->LevelSetElems).ArrayNum;
  if ((-1 < (int)uVar5) && ((int)uVar5 < (this->SkinnedLevelSetElems).ArrayNum)) {
    uVar4 = 0;
    if ((int)uVar5 < (this->SkinnedLevelSetElems).ArrayNum) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FKShapeElem *)(*pcVar1)();
        return pFVar3;
      }
    }
    return (FKShapeElem *)
           ((this->SkinnedLevelSetElems).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x38);
  }
  uVar5 = uVar5 - (this->SkinnedLevelSetElems).ArrayNum;
  if ((-1 < (int)uVar5) && ((int)uVar5 < (this->MLLevelSetElems).ArrayNum)) {
    uVar4 = 0;
    if ((int)uVar5 < (this->MLLevelSetElems).ArrayNum) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FKShapeElem *)(*pcVar1)();
        return pFVar3;
      }
    }
    return (FKShapeElem *)
           ((this->MLLevelSetElems).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x50);
  }
  uVar5 = uVar5 - (this->MLLevelSetElems).ArrayNum;
  if ((-1 < (int)uVar5) && ((int)uVar5 < (this->SkinnedTriangleMeshElems).ArrayNum)) {
    uVar4 = 0;
    if ((int)uVar5 < (this->SkinnedTriangleMeshElems).ArrayNum) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FKShapeElem *)(*pcVar1)();
        return pFVar3;
      }
    }
    return (FKShapeElem *)
           ((this->SkinnedTriangleMeshElems).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x38);
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1983460388859019649>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\PhysicsEngine\\AggregateGeom.h"
                     ,0x181,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FKShapeElem *)(*pcVar1)();
    return pFVar3;
  }
  return (FKShapeElem *)0x0;
}

