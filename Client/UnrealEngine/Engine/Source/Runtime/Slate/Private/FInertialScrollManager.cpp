// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 4

// FInertialScrollManager @ 1427b11a0

FInertialScrollManager * __thiscall
FInertialScrollManager::FInertialScrollManager(FInertialScrollManager *this,double param_1)

{
  this->SampleTimeout = param_1;
  (this->ScrollSamples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScrollSamples).ArrayNum = 0;
  (this->ScrollSamples).ArrayMax = 0;
  this->ScrollVelocity = 0.0;
  this->bShouldStopScrollNow = false;
  return this;
}

// AddScrollSample @ 1427c9380

void __thiscall
FInertialScrollManager::AddScrollSample(FInertialScrollManager *this,float param_1,double param_2)

{
  int *piVar1;
  int *piVar2;
  double dVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  
  piVar1 = &(this->ScrollSamples).ArrayMax;
  iVar6 = (this->ScrollSamples).ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,piVar1);
  }
  (this->ScrollSamples).ArrayNum = iVar6 + 1;
  fVar14 = 0.0;
  pFVar8 = (this->ScrollSamples).AllocatorInstance.Data;
  uVar12 = 0;
  uVar13 = 0;
  *(double *)(pFVar8 + (longlong)iVar6 * 0x10) = param_2;
  *(float *)(pFVar8 + (longlong)iVar6 * 0x10 + 8) = param_1;
  uVar10 = (this->ScrollSamples).ArrayNum - 1;
  if (-1 < (int)uVar10) {
    lVar11 = (longlong)(int)uVar10 << 4;
    do {
      uVar9 = ~uVar10 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar10 < (this->ScrollSamples).ArrayNum) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      dVar3 = *(double *)((this->ScrollSamples).AllocatorInstance.Data + lVar11);
      uVar7 = 0;
      if ((int)uVar10 < (this->ScrollSamples).ArrayNum) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (param_2 - dVar3 < this->SampleTimeout || param_2 - dVar3 == this->SampleTimeout) {
        if ((dVar3 < (double)CONCAT44(uVar13,uVar12)) || ((double)CONCAT44(uVar13,uVar12) == 0.0)) {
          uVar12 = SUB84(dVar3,0);
          uVar13 = (int)((ulonglong)dVar3 >> 0x20);
        }
        fVar14 = fVar14 + *(float *)((this->ScrollSamples).AllocatorInstance.Data + lVar11 + 8);
      }
      else {
        uVar7 = 0;
        if ((int)uVar10 < (this->ScrollSamples).ArrayNum) {
          uVar7 = uVar9;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar8 = (this->ScrollSamples).AllocatorInstance.Data + lVar11;
        iVar6 = ~uVar10 + (this->ScrollSamples).ArrayNum;
        if (iVar6 != 0) {
          memmove(pFVar8,pFVar8 + 0x10,(longlong)iVar6 << 4);
        }
        piVar2 = &(this->ScrollSamples).ArrayNum;
        *piVar2 = *piVar2 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,(ForAnyElementType *)this,(this->ScrollSamples).ArrayNum,piVar1);
      }
      lVar11 = lVar11 + -0x10;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
    if ((0.0 <= (double)CONCAT44(uVar13,uVar12) && (double)CONCAT44(uVar13,uVar12) != 0.0) &&
       (dVar3 = param_2 - (double)CONCAT44(uVar13,uVar12), 0.0 < dVar3)) {
      this->ScrollVelocity = (float)((double)fVar14 / dVar3);
      return;
    }
  }
  this->ScrollVelocity = 0.0;
  return;
}

// ClearScrollVelocity @ 1427ecb90

void __thiscall
FInertialScrollManager::ClearScrollVelocity(FInertialScrollManager *this,bool param_1)

{
  float fVar1;
  
  fVar1 = this->ScrollVelocity;
  this->ScrollVelocity = 0.0;
  if (fVar1 != 0.0) {
    this->bShouldStopScrollNow = param_1;
    return;
  }
  this->bShouldStopScrollNow = false;
  return;
}

// UpdateScrollVelocity @ 14283a540

void __thiscall
FInertialScrollManager::UpdateScrollVelocity(FInertialScrollManager *this,float param_1)

{
  float fVar1;
  
  fVar1 = this->ScrollVelocity;
  if (0.0 < fVar1) {
    fVar1 = fVar1 - (fVar1 * FrictionCoefficient + StaticVelocityDrag) * param_1;
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
    this->ScrollVelocity = fVar1;
    return;
  }
  if (fVar1 < 0.0) {
    fVar1 = fVar1 - (fVar1 * FrictionCoefficient - StaticVelocityDrag) * param_1;
    if (0.0 <= fVar1) {
      fVar1 = 0.0;
    }
    this->ScrollVelocity = fVar1;
  }
  return;
}

