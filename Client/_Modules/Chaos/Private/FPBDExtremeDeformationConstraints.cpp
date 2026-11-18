// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 5

// GetExtremelyDeformedEdges @ 143c68a50

TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::Softs::FPBDExtremeDeformationConstraints::GetExtremelyDeformedEdges
          (FPBDExtremeDeformationConstraints *this,
          TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArrayView<Chaos::TVector<float,3>_const_,int> *param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  TVector<float,3> *pTVar6;
  TVector<float,3> *pTVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *pTVar14;
  uint uVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  fVar19 = Softs::Private::GlobalExtremeDeformationEdgeRatioThreshold;
  if (!Softs::Private::bOverrideExtremeDeformationEdgeRatioThreshold) {
    fVar19 = this->ExtremeDeformationThreshold;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  uVar15 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (0 < (this->Constraints).ArrayNum) {
    lVar16 = 0;
    do {
      uVar11 = 0;
      if ((int)uVar15 < (this->Constraints).ArrayNum) {
        uVar11 = ~uVar15 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        pTVar14 = (TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
        return pTVar14;
      }
      pFVar5 = (this->Constraints).AllocatorInstance.Data;
      uVar11 = *(uint *)(pFVar5 + lVar16 * 8);
      pFVar5 = pFVar5 + lVar16 * 8;
      uVar4 = *(uint *)(pFVar5 + 4);
      uVar12 = 0;
      if ((int)uVar11 < param_1->ArrayNum) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        pTVar14 = (TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
        return pTVar14;
      }
      pTVar6 = param_1->DataPtr;
      uVar12 = 0;
      if ((int)uVar4 < param_1->ArrayNum) {
        uVar12 = ~uVar4 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        pTVar14 = (TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
        return pTVar14;
      }
      pTVar7 = param_1->DataPtr;
      fVar2 = *(float *)(pTVar6 + (int)uVar11);
      fVar3 = *(float *)(pTVar7 + (int)uVar4);
      fVar17 = *(float *)&pTVar6[(int)uVar11].field_0x4 - *(float *)&pTVar7[(int)uVar4].field_0x4;
      fVar18 = *(float *)&pTVar6[(int)uVar11].field_0x8 - *(float *)&pTVar7[(int)uVar4].field_0x8;
      uVar11 = 0;
      if ((int)uVar15 < (this->Dists).ArrayNum) {
        uVar11 = ~uVar15 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        pTVar14 = (TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
        return pTVar14;
      }
      if (fVar19 < SQRT((fVar2 - fVar3) * (fVar2 - fVar3) + fVar17 * fVar17 + fVar18 * fVar18) /
                   *(float *)((this->Dists).AllocatorInstance.Data + lVar16 * 4)) {
        pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
        piVar1 = &__return_storage_ptr__->ArrayMax;
        if (((pFVar8 <= pFVar5) && (pFVar5 < pFVar8 + (longlong)*piVar1 * 8)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          pTVar14 = (TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
          return pTVar14;
        }
        iVar13 = __return_storage_ptr__->ArrayNum;
        if (iVar13 == *piVar1) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&__return_storage_ptr__->AllocatorInstance,piVar1);
        }
        __return_storage_ptr__->ArrayNum = iVar13 + 1;
        *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar13 * 8) =
             *(undefined8 *)pFVar5;
      }
      uVar15 = uVar15 + 1;
      lVar16 = lVar16 + 1;
    } while ((int)uVar15 < (this->Constraints).ArrayNum);
  }
  return __return_storage_ptr__;
}

// GetExtremelyDeformedEdges @ 143c68d50

TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::Softs::FPBDExtremeDeformationConstraints::GetExtremelyDeformedEdges
          (FPBDExtremeDeformationConstraints *this,
          TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArrayView<Chaos::TVector<float,3>_const_,int> *param_1,TVector<float,3> *param_2)

{
  uint uVar1;
  TVector<float,3> *pTVar2;
  TVector<float,3> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *pTVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  fVar19 = Softs::Private::GlobalExtremeDeformationEdgeRatioThreshold;
  if (!Softs::Private::bOverrideExtremeDeformationEdgeRatioThreshold) {
    fVar19 = this->ExtremeDeformationThreshold;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  uVar12 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  fVar6 = __real_3f800000;
  __return_storage_ptr__->ArrayMax = 0;
  if (0 < (this->Constraints).ArrayNum) {
    lVar14 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar12 < (this->Constraints).ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar11;
      }
      pFVar13 = (this->Constraints).AllocatorInstance.Data + lVar14;
      uVar8 = *(uint *)pFVar13;
      uVar1 = *(uint *)(pFVar13 + 4);
      uVar9 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar11;
      }
      pTVar2 = param_1->DataPtr;
      uVar9 = 0;
      if ((int)uVar1 < param_1->ArrayNum) {
        uVar9 = ~uVar1 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar11;
      }
      fVar15 = *(float *)&param_2[(int)uVar8].field_0x4 - *(float *)&param_2[(int)uVar1].field_0x4;
      fVar16 = *(float *)&param_2[(int)uVar8].field_0x8 - *(float *)&param_2[(int)uVar1].field_0x8;
      pTVar3 = param_1->DataPtr;
      fVar17 = *(float *)&pTVar2[(int)uVar8].field_0x4 - *(float *)&pTVar3[(int)uVar1].field_0x4;
      fVar18 = *(float *)&pTVar2[(int)uVar8].field_0x8 - *(float *)&pTVar3[(int)uVar1].field_0x8;
      if (fVar19 < (fVar6 / SQRT((*(float *)(param_2 + (int)uVar8) -
                                 *(float *)(param_2 + (int)uVar1)) *
                                 (*(float *)(param_2 + (int)uVar8) -
                                 *(float *)(param_2 + (int)uVar1)) + fVar15 * fVar15 +
                                 fVar16 * fVar16)) *
                   SQRT((*(float *)(pTVar2 + (int)uVar8) - *(float *)(pTVar3 + (int)uVar1)) *
                        (*(float *)(pTVar2 + (int)uVar8) - *(float *)(pTVar3 + (int)uVar1)) +
                        fVar17 * fVar17 + fVar18 * fVar18)) {
        pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
        if (((pFVar4 <= pFVar13) &&
            (pFVar13 < pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar11;
        }
        iVar10 = __return_storage_ptr__->ArrayNum;
        if (iVar10 == __return_storage_ptr__->ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&__return_storage_ptr__->AllocatorInstance,
                              &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar10 + 1;
        *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar10 * 8) =
             *(undefined8 *)pFVar13;
      }
      uVar12 = uVar12 + 1;
      lVar14 = lVar14 + 8;
    } while ((int)uVar12 < (this->Constraints).ArrayNum);
  }
  return __return_storage_ptr__;
}

// GetThreshold @ 143c69d70

float __thiscall
Chaos::Softs::FPBDExtremeDeformationConstraints::GetThreshold
          (FPBDExtremeDeformationConstraints *this)

{
  if (Softs::Private::bOverrideExtremeDeformationEdgeRatioThreshold) {
    return Softs::Private::GlobalExtremeDeformationEdgeRatioThreshold;
  }
  return this->ExtremeDeformationThreshold;
}

// IsExtremelyDeformed @ 143c6b420

bool __thiscall
Chaos::Softs::FPBDExtremeDeformationConstraints::IsExtremelyDeformed
          (FPBDExtremeDeformationConstraints *this,
          TArrayView<Chaos::TVector<float,3>_const_,int> *param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  TVector<float,3> *pTVar5;
  TVector<float,3> *pTVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar16 = Softs::Private::GlobalExtremeDeformationEdgeRatioThreshold;
  if (!Softs::Private::bOverrideExtremeDeformationEdgeRatioThreshold) {
    fVar16 = this->ExtremeDeformationThreshold;
  }
  uVar12 = 0;
  if (0 < (this->Constraints).ArrayNum) {
    lVar13 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar12 < (this->Constraints).ArrayNum) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      pFVar4 = (this->Constraints).AllocatorInstance.Data;
      uVar10 = *(uint *)(pFVar4 + lVar13 * 8);
      uVar3 = *(uint *)(pFVar4 + lVar13 * 8 + 4);
      uVar11 = 0;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      pTVar5 = param_1->DataPtr;
      uVar11 = 0;
      if ((int)uVar3 < param_1->ArrayNum) {
        uVar11 = ~uVar3 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      pTVar6 = param_1->DataPtr;
      fVar1 = *(float *)(pTVar5 + (int)uVar10);
      fVar2 = *(float *)(pTVar6 + (int)uVar3);
      fVar14 = *(float *)&pTVar5[(int)uVar10].field_0x4 - *(float *)&pTVar6[(int)uVar3].field_0x4;
      fVar15 = *(float *)&pTVar5[(int)uVar10].field_0x8 - *(float *)&pTVar6[(int)uVar3].field_0x8;
      uVar10 = 0;
      if ((int)uVar12 < (this->Dists).ArrayNum) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      if (fVar16 < SQRT((fVar1 - fVar2) * (fVar1 - fVar2) + fVar14 * fVar14 + fVar15 * fVar15) /
                   *(float *)((this->Dists).AllocatorInstance.Data + lVar13 * 4)) {
        return true;
      }
      uVar12 = uVar12 + 1;
      lVar13 = lVar13 + 1;
    } while ((int)uVar12 < (this->Constraints).ArrayNum);
  }
  return false;
}

// IsExtremelyDeformed @ 143c6b660

bool __thiscall
Chaos::Softs::FPBDExtremeDeformationConstraints::IsExtremelyDeformed
          (FPBDExtremeDeformationConstraints *this,
          TArrayView<Chaos::TVector<float,3>_const_,int> *param_1,TVector<float,3> *param_2)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  TVector<float,3> *pTVar3;
  TVector<float,3> *pTVar4;
  code *pcVar5;
  float fVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  fVar6 = __real_3f800000;
  fVar17 = Softs::Private::GlobalExtremeDeformationEdgeRatioThreshold;
  if (!Softs::Private::bOverrideExtremeDeformationEdgeRatioThreshold) {
    fVar17 = this->ExtremeDeformationThreshold;
  }
  uVar11 = 0;
  if (0 < (this->Constraints).ArrayNum) {
    lVar12 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar11 < (this->Constraints).ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      pFVar2 = (this->Constraints).AllocatorInstance.Data;
      uVar9 = *(uint *)(pFVar2 + lVar12);
      uVar1 = *(uint *)(pFVar2 + lVar12 + 4);
      uVar10 = 0;
      if ((int)uVar9 < param_1->ArrayNum) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      pTVar3 = param_1->DataPtr;
      uVar10 = 0;
      if ((int)uVar1 < param_1->ArrayNum) {
        uVar10 = ~uVar1 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      fVar13 = *(float *)&param_2[(int)uVar9].field_0x4 - *(float *)&param_2[(int)uVar1].field_0x4;
      fVar14 = *(float *)&param_2[(int)uVar9].field_0x8 - *(float *)&param_2[(int)uVar1].field_0x8;
      pTVar4 = param_1->DataPtr;
      fVar15 = *(float *)&pTVar3[(int)uVar9].field_0x4 - *(float *)&pTVar4[(int)uVar1].field_0x4;
      fVar16 = *(float *)&pTVar3[(int)uVar9].field_0x8 - *(float *)&pTVar4[(int)uVar1].field_0x8;
      if (fVar17 < (fVar6 / SQRT((*(float *)(param_2 + (int)uVar9) -
                                 *(float *)(param_2 + (int)uVar1)) *
                                 (*(float *)(param_2 + (int)uVar9) -
                                 *(float *)(param_2 + (int)uVar1)) + fVar13 * fVar13 +
                                 fVar14 * fVar14)) *
                   SQRT((*(float *)(pTVar3 + (int)uVar9) - *(float *)(pTVar4 + (int)uVar1)) *
                        (*(float *)(pTVar3 + (int)uVar9) - *(float *)(pTVar4 + (int)uVar1)) +
                        fVar15 * fVar15 + fVar16 * fVar16)) {
        return true;
      }
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 8;
    } while ((int)uVar11 < (this->Constraints).ArrayNum);
  }
  return false;
}

