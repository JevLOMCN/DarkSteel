// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 1

// Generate @ 143595cd0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FMeshShapeGenerator * __thiscall UE::Geometry::FArrowGenerator::Generate(FArrowGenerator *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  code *pcVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  FMeshShapeGenerator *pFVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  float *pfVar14;
  int iVar15;
  float fVar16;
  float local_138 [4];
  TArray<float,TSizedDefaultAllocator<32>_> local_128;
  TArray<float,TSizedDefaultAllocator<32>_> local_118;
  float local_108 [4];
  ForAnyElementType local_f8;
  int local_f0;
  int local_ec;
  TArrayView<int,int> local_e8;
  TArrayView<float,int> local_d8;
  TArrayView<float,int> local_c8 [8];
  int aiStack_40 [2];
  
  local_108[0] = this->StickRadius;
  uVar11 = 0;
  local_108[3] = this->HeadTipRadius;
  iVar10 = this->AdditionalLengthSamples[2] + this->AdditionalLengthSamples[0] +
           this->AdditionalLengthSamples[1];
  local_138[1] = this->StickLength;
  local_138[3] = local_138[1] + this->HeadLength;
  local_108[2] = this->HeadBaseRadius;
  local_138[0] = 0.0;
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ArrayNum = 0;
  local_118.ArrayMax = 0;
  local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.ArrayNum = 0;
  local_128.ArrayMax = 0;
  local_138[2] = local_138[1];
  local_108[1] = local_108[0];
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_118,iVar10 + 4,Default);
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_128,iVar10 + 4,Default);
  fVar6 = __real_3f800000;
  uVar13 = uVar11;
  while( true ) {
    uVar12 = (uint)uVar13;
    fVar1 = *(float *)((longlong)local_138 + uVar11);
    fVar2 = *(float *)((longlong)local_108 + uVar11);
    uVar8 = 0;
    if ((int)uVar12 < local_118.ArrayNum) {
      uVar8 = ~uVar12 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FMeshShapeGenerator *)(*pcVar5)();
      return pFVar9;
    }
    *(float *)(local_118.AllocatorInstance.Data + (longlong)(int)uVar12 * 4) = fVar2;
    uVar8 = 0;
    if ((int)uVar12 < local_128.ArrayNum) {
      uVar8 = ~uVar12 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) break;
    uVar13 = (ulonglong)(uVar12 + 1);
    *(float *)(local_128.AllocatorInstance.Data + (longlong)(int)uVar12 * 4) = fVar1;
    if (uVar11 == 0xc) {
      local_f8.Data = (FScriptContainerElement *)0x0;
      local_f0 = 2;
      iVar10 = this->AdditionalLengthSamples[0];
      iVar15 = this->AdditionalLengthSamples[1];
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,2,0,&local_f8,2,&local_ec);
      local_e8.ArrayNum = local_f0;
      *(ulonglong *)local_f8.Data = CONCAT44(iVar10 + iVar15 + 2,iVar10 + 1);
      local_e8.DataPtr = (int *)local_f8.Data;
      if ((local_f0 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FMeshShapeGenerator *)(*pcVar5)();
        return pFVar9;
      }
      iVar10 = local_128.ArrayNum;
      local_d8.DataPtr = (float *)local_128.AllocatorInstance.Data;
      if ((local_128.ArrayNum < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FMeshShapeGenerator *)(*pcVar5)();
        return pFVar9;
      }
      local_d8.ArrayNum = iVar10;
      iVar10 = local_118.ArrayNum;
      local_c8[0].DataPtr = (float *)local_118.AllocatorInstance.Data;
      if ((local_118.ArrayNum < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FMeshShapeGenerator *)(*pcVar5)();
        return pFVar9;
      }
      local_c8[0].ArrayNum = iVar10;
      FVerticalCylinderGeneratorBase::GenerateVerticalCircleSweep
                ((FVerticalCylinderGeneratorBase *)this,local_c8,&local_d8,&local_e8);
      if (local_f8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data);
      }
      if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.AllocatorInstance.Data);
      }
      if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.AllocatorInstance.Data);
      }
      return (FMeshShapeGenerator *)this;
    }
    iVar15 = 1;
    pfVar14 = (float *)((longlong)local_138 + uVar11 + 4);
    iVar10 = *(int *)((longlong)this + (0xf4 - (longlong)(local_138 + 1)) + (longlong)pfVar14) + 1;
    if (1 < iVar10) {
      do {
        fVar3 = *pfVar14;
        fVar4 = *(float *)((longlong)local_108 + uVar11 + 4);
        uVar12 = (uint)uVar13;
        fVar16 = (float)iVar15 * (fVar6 / (float)iVar10);
        uVar8 = 0;
        if ((int)uVar12 < local_118.ArrayNum) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FMeshShapeGenerator *)(*pcVar5)();
          return pFVar9;
        }
        *(float *)(local_118.AllocatorInstance.Data + (longlong)(int)uVar12 * 4) =
             (fVar4 - fVar2) * fVar16 + fVar2;
        uVar8 = 0;
        if ((int)uVar12 < local_128.ArrayNum) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FMeshShapeGenerator *)(*pcVar5)();
          return pFVar9;
        }
        uVar13 = (ulonglong)(uVar12 + 1);
        iVar15 = iVar15 + 1;
        *(float *)(local_128.AllocatorInstance.Data + (longlong)(int)uVar12 * 4) =
             (fVar3 - fVar1) * fVar16 + fVar1;
      } while (iVar15 < iVar10);
    }
    uVar11 = uVar11 + 4;
  }
  pcVar5 = (code *)swi(3);
  pFVar9 = (FMeshShapeGenerator *)(*pcVar5)();
  return pFVar9;
}

