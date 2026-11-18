// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// CalculateFilteredOutput @ 1474c2d20

float __thiscall FFIRFilterTimeBased::CalculateFilteredOutput(FFIRFilterTimeBased *this)

{
  float fVar1;
  EFilterInterpolationType EVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if ((this->WindowDuration <= 0.0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimInterpFilter.cpp"
                         ,0x148,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    fVar10 = (float)(*pcVar3)();
    return fVar10;
  }
  fVar5 = __real_3f000000;
  fVar4 = __real_40800000;
  fVar10 = __real_3f800000;
  uVar9 = 0;
  fVar14 = 0.0;
  fVar13 = 0.0;
  if ((this->FilterData).ArrayNum != 0) {
    lVar8 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar9 < (this->FilterData).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        fVar10 = (float)(*pcVar3)();
        return fVar10;
      }
      fVar11 = *(float *)((this->FilterData).AllocatorInstance.Data + lVar8 * 8 + 4);
      if (0.0 < fVar11) {
        fVar1 = this->WindowDuration;
        fVar11 = this->CurrentTime - fVar11;
        if (fVar11 <= fVar1) {
          EVar2 = this->InterpolationType;
          fVar12 = fVar10;
          if (EVar2 != BSIT_Average) {
            if (EVar2 == BSIT_Linear) {
              fVar11 = fVar11 / fVar1;
            }
            else if (EVar2 == BSIT_Cubic) {
              fVar11 = fVar11 / fVar1;
              fVar11 = fVar11 * fVar11 * fVar11;
            }
            else {
              if (EVar2 != BSIT_EaseInOut) goto LAB_1474c2ef6;
              fVar11 = fVar11 / fVar1 - fVar5;
              fVar11 = fVar11 * fVar11 * fVar4;
            }
            fVar12 = fVar10 - fVar11;
            if (fVar12 <= 0.0) goto LAB_1474c2ef6;
          }
          fVar14 = fVar14 + fVar12;
          uVar7 = 0;
          if ((int)uVar9 < (this->FilterData).ArrayNum) {
            uVar7 = ~uVar9 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            fVar10 = (float)(*pcVar3)();
            return fVar10;
          }
          fVar13 = fVar13 + fVar12 * *(float *)((this->FilterData).AllocatorInstance.Data +
                                               lVar8 * 8);
        }
      }
LAB_1474c2ef6:
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 1;
    } while (uVar9 != (this->FilterData).ArrayNum);
    if (0.0 < fVar14) {
      return fVar13 / fVar14;
    }
  }
  return 0.0;
}

// GetInterpolationCoefficient @ 1474da360

float __thiscall
FFIRFilterTimeBased::GetInterpolationCoefficient(FFIRFilterTimeBased *this,FFilterData *param_1)

{
  EFilterInterpolationType EVar1;
  float fVar2;
  float fVar3;
  
  if (0.0 < param_1->Time) {
    fVar2 = this->CurrentTime - param_1->Time;
    fVar3 = this->WindowDuration;
    if (fVar2 <= fVar3) {
      EVar1 = this->InterpolationType;
      if (EVar1 == BSIT_Average) {
        return __real_3f800000;
      }
      if (EVar1 == BSIT_Linear) {
        return __real_3f800000 - fVar2 / fVar3;
      }
      if (EVar1 == BSIT_Cubic) {
        fVar2 = fVar2 / fVar3;
        return __real_3f800000 - fVar2 * fVar2 * fVar2;
      }
      if (EVar1 == BSIT_EaseInOut) {
        fVar3 = fVar2 / fVar3 - __real_3f000000;
        return __real_3f800000 - fVar3 * fVar3 * __real_40800000;
      }
    }
  }
  return 0.0;
}

// GetSafeCurrentStackIndex @ 1474de350

int __thiscall FFIRFilterTimeBased::GetSafeCurrentStackIndex(FFIRFilterTimeBased *this)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  
  piVar1 = &(this->FilterData).ArrayNum;
  if (((this->FilterData).ArrayNum <= this->CurrentStackIndex) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentStackIndex < FilterData.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimInterpFilter.cpp"
                         ,0x5b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  uVar2 = this->CurrentStackIndex;
  uVar8 = 0;
  if ((int)uVar2 < (this->FilterData).ArrayNum) {
    uVar8 = ~uVar2 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  if (0.0 < *(float *)((this->FilterData).AllocatorInstance.Data + (longlong)(int)uVar2 * 8 + 4)) {
    iVar7 = *piVar1;
    iVar10 = 0;
    iVar6 = 0;
    if (iVar7 != 0) {
      do {
        uVar8 = this->CurrentStackIndex + iVar10;
        uVar2 = uVar8 - iVar7;
        if ((int)uVar8 < iVar7) {
          uVar2 = uVar8;
        }
        uVar8 = 0;
        if ((int)uVar2 < iVar7) {
          uVar8 = ~uVar2 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        if (*(float *)((this->FilterData).AllocatorInstance.Data + (longlong)(int)uVar2 * 8 + 4) <=
            0.0) {
          return uVar2;
        }
        iVar6 = *piVar1;
        iVar10 = iVar10 + 1;
        iVar7 = iVar6;
      } while (iVar10 != iVar6);
    }
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,5,&(this->FilterData).AllocatorInstance,piVar1,
                       &(this->FilterData).ArrayMax);
    pFVar3 = (this->FilterData).AllocatorInstance.Data;
    lVar9 = (longlong)iVar7;
    *(undefined8 *)(pFVar3 + lVar9 * 8) = 0;
    *(undefined8 *)(pFVar3 + lVar9 * 8 + 8) = 0;
    *(undefined8 *)(pFVar3 + lVar9 * 8 + 0x10) = 0;
    *(undefined8 *)(pFVar3 + lVar9 * 8 + 0x10 + 8) = 0;
    *(undefined8 *)(pFVar3 + lVar9 * 8 + 0x20) = 0;
  }
  else {
    iVar6 = this->CurrentStackIndex;
  }
  return iVar6;
}

// RefreshValidFilters @ 1474f3690

void __thiscall FFIRFilterTimeBased::RefreshValidFilters(FFIRFilterTimeBased *this)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  float fVar12;
  
  piVar1 = &(this->FilterData).ArrayNum;
  uVar10 = 0;
  uVar11 = uVar10;
  if (*piVar1 == 0) {
    piVar2 = &(this->FilterData).ArrayMax;
    (this->FilterData).ArrayNum = 0;
    if ((this->FilterData).ArrayMax != 10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,10,&(this->FilterData).AllocatorInstance,0,piVar2);
    }
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,10,&(this->FilterData).AllocatorInstance,piVar1,piVar2);
    lVar8 = (longlong)iVar6;
    pFVar3 = (this->FilterData).AllocatorInstance.Data;
    *(undefined8 *)(pFVar3 + lVar8 * 8) = 0;
    *(undefined8 *)(pFVar3 + lVar8 * 8 + 8) = 0;
    *(undefined8 *)(pFVar3 + lVar8 * 8 + 0x10) = 0;
    *(undefined8 *)(pFVar3 + lVar8 * 8 + 0x10 + 8) = 0;
    *(undefined8 *)(pFVar3 + lVar8 * 8 + 0x20) = 0;
    *(undefined8 *)(pFVar3 + lVar8 * 8 + 0x20 + 8) = 0;
    *(undefined8 *)(pFVar3 + lVar8 * 8 + 0x30) = 0;
    *(undefined8 *)(pFVar3 + lVar8 * 8 + 0x30 + 8) = 0;
    *(undefined8 *)(pFVar3 + lVar8 * 8 + 0x40) = 0;
    *(undefined8 *)(pFVar3 + lVar8 * 8 + 0x40 + 8) = 0;
    this->CurrentStackIndex = 0;
  }
  else {
    do {
      uVar9 = (uint)uVar10;
      uVar7 = 0;
      if ((int)uVar9 < (this->FilterData).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
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
      pFVar3 = (this->FilterData).AllocatorInstance.Data;
      fVar12 = this->CurrentTime - *(float *)(pFVar3 + uVar11 + 4);
      if (this->WindowDuration <= fVar12 && fVar12 != this->WindowDuration) {
        *(undefined4 *)(pFVar3 + uVar11 + 4) = 0;
      }
      uVar10 = (ulonglong)(uVar9 + 1);
      uVar11 = uVar11 + 8;
    } while (uVar9 + 1 != *piVar1);
  }
  return;
}

// SetToValue @ 1474f9e00

void __thiscall FFIRFilterTimeBased::SetToValue(FFIRFilterTimeBased *this,float param_1)

{
  int iVar1;
  
  iVar1 = (this->FilterData).ArrayNum;
  this->LastOutput = param_1;
  if (0 < iVar1) {
    *(float *)(this->FilterData).AllocatorInstance.Data = param_1;
  }
  return;
}

// UpdateAndGetFilteredData @ 1474ff460

float __thiscall
FFIRFilterTimeBased::UpdateAndGetFilteredData(FFIRFilterTimeBased *this,float param_1,float param_2)

{
  int *piVar1;
  int *piVar2;
  TArray<FFilterData,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_res8 [2];
  float local_res10 [2];
  float local_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  float local_a8;
  undefined4 uStack_a4;
  
  fVar14 = __real_38d1b717;
  if (this->WindowDuration <= 0.0) {
    this->LastOutput = param_1;
    return param_1;
  }
  if (param_2 <= __real_38d1b717) {
    return this->LastOutput;
  }
  iVar7 = (this->FilterData).ArrayNum;
  piVar1 = &(this->FilterData).ArrayNum;
  this->CurrentTime = param_2 + this->CurrentTime;
  local_res10[0] = param_1;
  if (this->InterpolationType == BSIT_ExponentialDecay) {
    if (iVar7 != 1) {
      piVar1 = &(this->FilterData).ArrayMax;
      (this->FilterData).ArrayNum = 0;
      iVar7 = 1;
      if ((this->FilterData).ArrayMax != 1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,1,&(this->FilterData).AllocatorInstance,0,piVar1);
        iVar7 = *piVar1;
      }
      pFVar10 = (this->FilterData).AllocatorInstance.Data;
      uStack_a4 = 0;
      local_a8 = param_1;
      if (((pFVar10 <= (FScriptContainerElement *)&local_a8) &&
          ((FScriptContainerElement *)&local_a8 < pFVar10 + (longlong)iVar7 * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        fVar14 = (float)(*pcVar5)();
        return fVar14;
      }
      iVar7 = (this->FilterData).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(this->FilterData).AllocatorInstance,piVar1);
      }
      (this->FilterData).ArrayNum = iVar7 + 1;
      *(ulonglong *)((this->FilterData).AllocatorInstance.Data + (longlong)iVar7 * 8) =
           CONCAT44(uStack_a4,local_a8);
    }
    if (((this->FilterData).ArrayNum < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      fVar14 = (float)(*pcVar5)();
      return fVar14;
    }
    fVar15 = this->WindowDuration * __real_3ebc5ab2;
    fVar16 = *(float *)(this->FilterData).AllocatorInstance.Data;
    if (((this->FilterData).ArrayNum < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      fVar14 = (float)(*pcVar5)();
      return fVar14;
    }
    pFVar10 = (this->FilterData).AllocatorInstance.Data;
    if (fVar15 <= fVar14) {
      *(float *)pFVar10 = param_1;
    }
    else {
      fVar15 = param_2 / fVar15;
      *(float *)pFVar10 =
           (*(float *)pFVar10 - param_1) /
           (((fVar15 * __real_3e83b5ca + __real_3ee6ad0d) * fVar15 + __real_3f80f478) * fVar15 +
           __real_3f800000) + param_1;
    }
    if (0.0 < this->MaxSpeed) {
      fVar14 = this->MaxSpeed * param_2;
      fVar15 = fVar16 - fVar14;
      if (((this->FilterData).ArrayNum < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        fVar14 = (float)(*pcVar5)();
        return fVar14;
      }
      fVar14 = fVar14 + fVar16;
      fVar16 = *(float *)(this->FilterData).AllocatorInstance.Data;
      if (fVar16 <= fVar14) {
        fVar14 = fVar16;
      }
      if (fVar14 <= fVar15) {
        fVar14 = fVar15;
      }
      if (((this->FilterData).ArrayNum < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        fVar14 = (float)(*pcVar5)();
        return fVar14;
      }
      *(float *)(this->FilterData).AllocatorInstance.Data = fVar14;
    }
    if (((this->FilterData).ArrayNum < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      fVar14 = (float)(*pcVar5)();
      return fVar14;
    }
    pFVar10 = (this->FilterData).AllocatorInstance.Data;
  }
  else {
    uVar12 = 0;
    if (this->InterpolationType != BSIT_SpringDamper) {
      uVar13 = uVar12;
      if (iVar7 == 0) {
        piVar2 = &(this->FilterData).ArrayMax;
        (this->FilterData).ArrayNum = 0;
        if ((this->FilterData).ArrayMax != 10) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,10,&(this->FilterData).AllocatorInstance,0,piVar2);
        }
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,4,10,&(this->FilterData).AllocatorInstance,piVar1,piVar2);
        lVar11 = (longlong)iVar7;
        pFVar10 = (this->FilterData).AllocatorInstance.Data;
        *(undefined8 *)(pFVar10 + lVar11 * 8) = 0;
        *(undefined8 *)(pFVar10 + lVar11 * 8 + 8) = 0;
        *(undefined8 *)(pFVar10 + lVar11 * 8 + 0x10) = 0;
        *(undefined8 *)(pFVar10 + lVar11 * 8 + 0x10 + 8) = 0;
        *(undefined8 *)(pFVar10 + lVar11 * 8 + 0x20) = 0;
        *(undefined8 *)(pFVar10 + lVar11 * 8 + 0x20 + 8) = 0;
        *(undefined8 *)(pFVar10 + lVar11 * 8 + 0x30) = 0;
        *(undefined8 *)(pFVar10 + lVar11 * 8 + 0x30 + 8) = 0;
        *(undefined8 *)(pFVar10 + lVar11 * 8 + 0x40) = 0;
        *(undefined8 *)(pFVar10 + lVar11 * 8 + 0x40 + 8) = 0;
        this->CurrentStackIndex = 0;
      }
      else {
        do {
          uVar9 = (uint)uVar12;
          uVar8 = 0;
          if ((int)uVar9 < (this->FilterData).ArrayNum) {
            uVar8 = ~uVar9 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            fVar14 = (float)(*pcVar5)();
            return fVar14;
          }
          pFVar10 = (this->FilterData).AllocatorInstance.Data;
          fVar14 = this->CurrentTime - *(float *)(pFVar10 + uVar13 + 4);
          if (this->WindowDuration <= fVar14 && fVar14 != this->WindowDuration) {
            *(undefined4 *)(pFVar10 + uVar13 + 4) = 0;
          }
          uVar12 = (ulonglong)(uVar9 + 1);
          uVar13 = uVar13 + 8;
          param_1 = local_res10[0];
        } while (uVar9 + 1 != *piVar1);
      }
      uVar9 = GetSafeCurrentStackIndex(this);
      this->CurrentStackIndex = uVar9;
      uVar8 = 0;
      if ((int)uVar9 < (this->FilterData).ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        fVar14 = (float)(*pcVar5)();
        return fVar14;
      }
      pFVar10 = (this->FilterData).AllocatorInstance.Data;
      fVar14 = this->CurrentTime;
      *(float *)(pFVar10 + (longlong)(int)uVar9 * 8) = param_1;
      *(float *)(pFVar10 + (longlong)(int)uVar9 * 8 + 4) = fVar14;
      fVar14 = CalculateFilteredOutput(this);
      this->CurrentStackIndex = this->CurrentStackIndex + 1;
      if (*piVar1 + -1 < this->CurrentStackIndex) {
        this->CurrentStackIndex = 0;
      }
      goto LAB_147500014;
    }
    pTVar3 = &this->FilterData;
    if (iVar7 != 2) {
      iVar7 = (this->FilterData).ArrayMax;
      piVar1 = &(this->FilterData).ArrayMax;
      (this->FilterData).ArrayNum = 0;
      if (iVar7 != 2) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,2,&pTVar3->AllocatorInstance,0,piVar1);
        iVar7 = *piVar1;
      }
      pFVar10 = (pTVar3->AllocatorInstance).Data;
      uStack_b4 = 0;
      local_b8 = param_1;
      if (((pFVar10 <= (FScriptContainerElement *)&local_b8) &&
          ((FScriptContainerElement *)&local_b8 < pFVar10 + (longlong)iVar7 * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        fVar14 = (float)(*pcVar5)();
        return fVar14;
      }
      iVar7 = (this->FilterData).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&pTVar3->AllocatorInstance,piVar1);
      }
      (this->FilterData).ArrayNum = iVar7 + 1;
      local_b0 = 0;
      *(ulonglong *)((pTVar3->AllocatorInstance).Data + (longlong)iVar7 * 8) =
           CONCAT44(uStack_b4,local_b8);
      pFVar10 = (pTVar3->AllocatorInstance).Data;
      if (((pFVar10 <= (FScriptContainerElement *)&local_b0) &&
          ((FScriptContainerElement *)&local_b0 < pFVar10 + (longlong)*piVar1 * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        fVar14 = (float)(*pcVar5)();
        return fVar14;
      }
      iVar7 = (this->FilterData).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&pTVar3->AllocatorInstance,piVar1);
      }
      (this->FilterData).ArrayNum = iVar7 + 1;
      *(undefined8 *)((pTVar3->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_b0;
    }
    if (((this->FilterData).ArrayNum < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      fVar14 = (float)(*pcVar5)();
      return fVar14;
    }
    fVar14 = this->DampingRatio;
    fVar15 = this->WindowDuration * __real_3ebc5ab2;
    local_res8[0] = 0.0;
    fVar16 = *(float *)(pTVar3->AllocatorInstance).Data;
    if (((this->FilterData).ArrayNum < 2) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      fVar14 = (float)(*pcVar5)();
      return fVar14;
    }
    pFVar10 = (pTVar3->AllocatorInstance).Data;
    if (((this->FilterData).ArrayNum < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      fVar14 = (float)(*pcVar5)();
      return fVar14;
    }
    pFVar4 = (pTVar3->AllocatorInstance).Data;
    if (__real_322bcc77 <= fVar15) {
      FMath::SpringDamper<float>
                ((float *)pFVar4,(float *)(pFVar10 + 8),local_res10,local_res8,param_2,
                 __real_3ea2f983 / fVar15,fVar14);
    }
    else {
      *(float *)(pFVar10 + 8) = (param_1 - *(float *)pFVar4) / param_2;
      *(float *)pFVar4 = param_1;
    }
    if (0.0 < this->MaxSpeed) {
      fVar14 = this->MaxSpeed * param_2;
      fVar15 = fVar16 - fVar14;
      if (((this->FilterData).ArrayNum < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        fVar14 = (float)(*pcVar5)();
        return fVar14;
      }
      fVar14 = fVar14 + fVar16;
      fVar16 = *(float *)(this->FilterData).AllocatorInstance.Data;
      if (fVar16 <= fVar14) {
        fVar14 = fVar16;
      }
      if (fVar14 <= fVar15) {
        fVar14 = fVar15;
      }
      if (((this->FilterData).ArrayNum < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        fVar14 = (float)(*pcVar5)();
        return fVar14;
      }
      *(float *)(this->FilterData).AllocatorInstance.Data = fVar14;
      fVar14 = this->MaxSpeed;
      fVar16 = (float)((uint)fVar14 ^ __xmm_80000000800000008000000080000000);
      if (((this->FilterData).ArrayNum < 2) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        fVar14 = (float)(*pcVar5)();
        return fVar14;
      }
      fVar15 = *(float *)((this->FilterData).AllocatorInstance.Data + 8);
      if (fVar14 <= fVar15) {
        fVar15 = fVar14;
      }
      if (fVar15 <= fVar16) {
        fVar15 = fVar16;
      }
      if (((this->FilterData).ArrayNum < 2) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        fVar14 = (float)(*pcVar5)();
        return fVar14;
      }
      *(float *)((this->FilterData).AllocatorInstance.Data + 8) = fVar15;
    }
    if (this->bClamp != false) {
      if (((this->FilterData).ArrayNum < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        fVar14 = (float)(*pcVar5)();
        return fVar14;
      }
      fVar14 = this->MaxValue;
      if (fVar14 < *(float *)(this->FilterData).AllocatorInstance.Data) {
        if (((this->FilterData).ArrayNum < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          fVar14 = (float)(*pcVar5)();
          return fVar14;
        }
        *(float *)(this->FilterData).AllocatorInstance.Data = fVar14;
        if (((this->FilterData).ArrayNum < 2) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          fVar14 = (float)(*pcVar5)();
          return fVar14;
        }
        if (0.0 < *(float *)((this->FilterData).AllocatorInstance.Data + 8)) {
          if (((this->FilterData).ArrayNum < 2) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            fVar14 = (float)(*pcVar5)();
            return fVar14;
          }
          *(undefined4 *)((this->FilterData).AllocatorInstance.Data + 8) = 0;
        }
      }
      if (((this->FilterData).ArrayNum < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        fVar14 = (float)(*pcVar5)();
        return fVar14;
      }
      pFVar10 = (this->FilterData).AllocatorInstance.Data;
      fVar14 = this->MinValue;
      if (*(float *)pFVar10 <= fVar14 && fVar14 != *(float *)pFVar10) {
        if (((this->FilterData).ArrayNum < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          fVar14 = (float)(*pcVar5)();
          return fVar14;
        }
        *(float *)(this->FilterData).AllocatorInstance.Data = fVar14;
        if (((this->FilterData).ArrayNum < 2) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          fVar14 = (float)(*pcVar5)();
          return fVar14;
        }
        pFVar10 = (this->FilterData).AllocatorInstance.Data + 8;
        if (*(float *)pFVar10 <= 0.0 && *(float *)pFVar10 != 0.0) {
          if (((this->FilterData).ArrayNum < 2) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            fVar14 = (float)(*pcVar5)();
            return fVar14;
          }
          *(undefined4 *)((this->FilterData).AllocatorInstance.Data + 8) = 0;
        }
      }
    }
    if (((this->FilterData).ArrayNum < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      fVar14 = (float)(*pcVar5)();
      return fVar14;
    }
    pFVar10 = (this->FilterData).AllocatorInstance.Data;
  }
  fVar14 = *(float *)pFVar10;
LAB_147500014:
  this->LastOutput = fVar14;
  return fVar14;
}

// WrapToValue @ 147502d20

void __thiscall
FFIRFilterTimeBased::WrapToValue(FFIRFilterTimeBased *this,float param_1,float param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (0.0 < param_2) {
    fVar11 = param_2 * __real_3f000000;
    if ((this->InterpolationType == BSIT_ExponentialDecay) ||
       (this->InterpolationType == BSIT_SpringDamper)) {
      iVar1 = (this->FilterData).ArrayNum;
      if (iVar1 != 0) {
        if ((iVar1 < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        fVar9 = fVar11 + param_1;
        fVar11 = param_1 - fVar11;
        fVar8 = fVar9 - fVar11;
        fVar10 = fVar9;
        if (fVar8 != 0.0) {
          fVar10 = *(float *)(this->FilterData).AllocatorInstance.Data;
          if (fVar11 <= fVar10) {
            if ((fVar9 < fVar10) &&
               (fVar8 = FGenericPlatformMath::Fmod(fVar10 - fVar9,fVar8), fVar10 = fVar9,
               fVar8 != 0.0)) {
              fVar10 = fVar8 + fVar11;
            }
          }
          else {
            fVar8 = FGenericPlatformMath::Fmod(fVar11 - fVar10,fVar8);
            fVar10 = fVar11;
            if (fVar8 != 0.0) {
              fVar10 = fVar9 - fVar8;
            }
          }
        }
        if (((this->FilterData).ArrayNum < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(float *)(this->FilterData).AllocatorInstance.Data = fVar10;
      }
    }
    else if (0.0 < this->WindowDuration) {
      fVar9 = fVar11 + param_1;
      fVar11 = param_1 - fVar11;
      fVar8 = fVar9 - fVar11;
      fVar10 = fVar9;
      if (fVar8 != 0.0) {
        fVar10 = this->LastOutput;
        if (fVar11 <= fVar10) {
          if ((fVar9 < fVar10) &&
             (fVar8 = FGenericPlatformMath::Fmod(fVar10 - fVar9,fVar8), fVar10 = fVar9, fVar8 != 0.0
             )) {
            fVar10 = fVar8 + fVar11;
          }
        }
        else {
          fVar8 = FGenericPlatformMath::Fmod(fVar11 - fVar10,fVar8);
          fVar10 = fVar11;
          if (fVar8 != 0.0) {
            fVar10 = fVar9 - fVar8;
          }
        }
      }
      fVar11 = fVar10 - this->LastOutput;
      if (fVar11 != 0.0) {
        uVar7 = 0;
        this->LastOutput = fVar10;
        if ((this->FilterData).ArrayNum != 0) {
          lVar6 = 0;
          do {
            uVar5 = 0;
            if ((int)uVar7 < (this->FilterData).ArrayNum) {
              uVar5 = ~uVar7 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar2 = (this->FilterData).AllocatorInstance.Data;
            uVar7 = uVar7 + 1;
            *(float *)(pFVar2 + lVar6) = fVar11 + *(float *)(pFVar2 + lVar6);
            lVar6 = lVar6 + 8;
          } while (uVar7 != (this->FilterData).ArrayNum);
        }
      }
    }
  }
  return;
}

