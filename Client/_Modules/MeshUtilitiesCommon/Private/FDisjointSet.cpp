// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshUtilitiesCommon
// Functions: 3

// operator[] @ 1443521f0

uint __thiscall FDisjointSet::operator[](FDisjointSet *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if ((int)param_1 < (this->Parents).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return *(uint *)((this->Parents).AllocatorInstance.Data + (longlong)(int)param_1 * 4);
}

// Find @ 144354110

uint __thiscall FDisjointSet::Find(FDisjointSet *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar7 = (ulonglong)(int)param_1;
  uVar3 = 0;
  if ((int)param_1 < (this->Parents).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  uVar3 = *(uint *)((this->Parents).AllocatorInstance.Data + uVar7 * 4);
  uVar5 = uVar3;
  if (uVar3 != param_1) {
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->Parents).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
      uVar3 = *(uint *)((this->Parents).AllocatorInstance.Data + (longlong)(int)uVar5 * 4);
      bVar2 = uVar3 != uVar5;
      uVar5 = uVar3;
    } while (bVar2);
  }
  uVar5 = 0;
  if ((int)param_1 < (this->Parents).ArrayNum) {
    uVar5 = ~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  uVar5 = *(uint *)((this->Parents).AllocatorInstance.Data + uVar7 * 4);
  while( true ) {
    if (uVar5 == uVar3) {
      return uVar3;
    }
    uVar6 = (uint)uVar7;
    uVar4 = 0;
    if ((int)uVar6 < (this->Parents).ArrayNum) {
      uVar4 = ~uVar6 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) break;
    uVar7 = (ulonglong)uVar5;
    *(uint *)((this->Parents).AllocatorInstance.Data + (longlong)(int)uVar6 * 4) = uVar3;
    uVar4 = 0;
    if ((int)uVar5 < (this->Parents).ArrayNum) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    uVar5 = *(uint *)((this->Parents).AllocatorInstance.Data + (longlong)(int)uVar5 * 4);
  }
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}

// Union @ 14435d6b0

void __thiscall FDisjointSet::Union(FDisjointSet *this,uint param_1,uint param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar9 = (ulonglong)(int)param_1;
  uVar7 = (ulonglong)(int)param_2;
  uVar8 = 0;
  if ((int)param_1 < (this->Parents).ArrayNum) {
    uVar8 = ~param_1 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar8 = *(uint *)((this->Parents).AllocatorInstance.Data + uVar9 * 4);
  uVar4 = 0;
  if ((int)param_2 < (this->Parents).ArrayNum) {
    uVar4 = ~param_2 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar4 = *(uint *)((this->Parents).AllocatorInstance.Data + uVar7 * 4);
  if (uVar8 != uVar4) {
    do {
      iVar1 = (this->Parents).ArrayNum;
      if (uVar8 < uVar4) {
        uVar6 = (uint)uVar9;
        uVar5 = 0;
        if ((int)uVar6 < iVar1) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(uint *)((this->Parents).AllocatorInstance.Data + (longlong)(int)uVar6 * 4) = uVar4;
        if (uVar6 == uVar8) {
          return;
        }
        uVar9 = (ulonglong)uVar8;
        uVar5 = 0;
        if ((int)uVar8 < (this->Parents).ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar8 = *(uint *)((this->Parents).AllocatorInstance.Data + (longlong)(int)uVar8 * 4);
      }
      else {
        uVar6 = (uint)uVar7;
        uVar5 = 0;
        if ((int)uVar6 < iVar1) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(uint *)((this->Parents).AllocatorInstance.Data + (longlong)(int)uVar6 * 4) = uVar8;
        if (uVar6 == uVar4) {
          return;
        }
        uVar7 = (ulonglong)uVar4;
        uVar5 = 0;
        if ((int)uVar4 < (this->Parents).ArrayNum) {
          uVar5 = ~uVar4 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar4 = *(uint *)((this->Parents).AllocatorInstance.Data + (longlong)(int)uVar4 * 4);
      }
    } while (uVar8 != uVar4);
  }
  return;
}

