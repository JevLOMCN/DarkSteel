// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// Eval @ 143a664a0

float __thiscall Chaos::FLinearCurve::Eval(FLinearCurve *this,float param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  float fVar12;
  
  iVar1 = (this->Keys).ArrayNum;
  if (iVar1 != 0) {
    if ((iVar1 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      fVar12 = (float)(*pcVar5)();
      return fVar12;
    }
    pFVar3 = (this->Keys).AllocatorInstance.Data;
    iVar2 = (this->Keys).ArrayNum;
    if (param_1 < *(float *)pFVar3 || param_1 == *(float *)pFVar3) {
      if ((iVar2 < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        fVar12 = (float)(*pcVar5)();
        return fVar12;
      }
      return *(float *)((this->Keys).AllocatorInstance.Data + 4);
    }
    uVar11 = iVar1 - 1;
    uVar9 = 0;
    if ((int)uVar11 < iVar2) {
      uVar9 = ~uVar11 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      fVar12 = (float)(*pcVar5)();
      return fVar12;
    }
    if (*(float *)((this->Keys).AllocatorInstance.Data + (longlong)(int)uVar11 * 8) <= param_1) {
      uVar9 = 0;
      if ((int)uVar11 < (this->Keys).ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        fVar12 = (float)(*pcVar5)();
        return fVar12;
      }
      return *(float *)((this->Keys).AllocatorInstance.Data + (longlong)(int)uVar11 * 8 + 4);
    }
    uVar9 = 1;
    if (1 < iVar1) {
      lVar10 = 1;
      do {
        uVar7 = 0;
        uVar11 = uVar7;
        if ((int)uVar9 < (this->Keys).ArrayNum) {
          uVar11 = ~uVar9 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          fVar12 = (float)(*pcVar5)();
          return fVar12;
        }
        if (param_1 < *(float *)((this->Keys).AllocatorInstance.Data + lVar10 * 8)) {
          uVar11 = uVar9 - 1;
          uVar8 = uVar7;
          if ((int)uVar11 < (this->Keys).ArrayNum) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            fVar12 = (float)(*pcVar5)();
            return fVar12;
          }
          pFVar3 = (this->Keys).AllocatorInstance.Data;
          lVar10 = (longlong)(int)uVar11;
          if ((int)uVar9 < (this->Keys).ArrayNum) {
            uVar7 = ~uVar9 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            fVar12 = (float)(*pcVar5)();
            return fVar12;
          }
          pFVar4 = (this->Keys).AllocatorInstance.Data;
          return ((param_1 - *(float *)(pFVar3 + lVar10 * 8)) /
                 (*(float *)(pFVar4 + (longlong)(int)uVar9 * 8) - *(float *)(pFVar3 + lVar10 * 8)))
                 * (*(float *)(pFVar4 + (longlong)(int)uVar9 * 8 + 4) -
                   *(float *)(pFVar3 + lVar10 * 8 + 4)) + *(float *)(pFVar3 + lVar10 * 8 + 4);
        }
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 1;
      } while (lVar10 < iVar1);
    }
  }
  return 0.0;
}

// operator= @ 143f8e2e0

FLinearCurve * __thiscall Chaos::FLinearCurve::operator=(FLinearCurve *this,FLinearCurve *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    iVar2 = (this->Keys).ArrayMax;
    piVar1 = &(this->Keys).ArrayMax;
    _Src = (param_1->Keys).AllocatorInstance.Data;
    iVar3 = (param_1->Keys).ArrayNum;
    (this->Keys).ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar3,iVar2,(ForAnyElementType *)this,iVar3,piVar1);
    if (iVar3 != 0) {
      memcpy((this->Keys).AllocatorInstance.Data,_Src,(longlong)iVar3 << 3);
    }
  }
  return this;
}

