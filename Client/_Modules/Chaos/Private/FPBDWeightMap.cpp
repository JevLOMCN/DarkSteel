// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 9

// FPBDWeightMap<2> @ 143c21460

FPBDWeightMap * __thiscall
Chaos::Softs::FPBDWeightMap::FPBDWeightMap<2>
          (FPBDWeightMap *this,TVector<float,2> *param_1,TArrayView<float_const_,int> *param_2,
          TArrayView<Chaos::TVector<int,2>_const_,int> *param_3,int param_4,int param_5,int param_6,
          void *param_7)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  TVector<int,2> *pTVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  int iVar10;
  FPBDWeightMap *pFVar11;
  int *piVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  
  pTVar1 = &this->Indices;
  this->_padding_ = (longlong)&___7FPBDWeightMap_Softs_Chaos__6B_;
  piVar2 = &(this->Table).ArrayNum;
  piVar3 = &(this->Table).ArrayMax;
  *piVar2 = 0;
  *piVar3 = 0;
  piVar4 = &(this->Indices).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Indices).ArrayNum = 0;
  *piVar4 = 0;
  (this->Table).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->WeightedValue = *param_1;
  this->bIsDirty = true;
  if ((0xfe < param_6 - 1U) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("TableSize > 0 && TableSize < 256",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDWeightMap.h"
                         ,0x9f,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    pFVar11 = (FPBDWeightMap *)(*pcVar6)();
    return pFVar11;
  }
  piVar12 = &(this->Indices).ArrayNum;
  if ((param_2->ArrayNum == param_5) && (0 < param_5)) {
    iVar10 = param_3->ArrayNum;
    if (0 < iVar10) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar10,&pTVar1->AllocatorInstance,piVar12,piVar4);
      fVar8 = __real_3f000000;
      fVar7 = __real_3f800000;
      uVar16 = 0;
      if (0 < iVar10) {
        lVar13 = 0;
        do {
          uVar15 = 0;
          if ((int)uVar16 < param_3->ArrayNum) {
            uVar15 = ~uVar16 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            pFVar11 = (FPBDWeightMap *)(*pcVar6)();
            return pFVar11;
          }
          pTVar5 = param_3->DataPtr;
          uVar14 = pTVar5[lVar13].field0_0x0._s_0.X - param_4;
          uVar15 = 0;
          if ((int)uVar14 < param_2->ArrayNum) {
            uVar15 = ~uVar14 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            pFVar11 = (FPBDWeightMap *)(*pcVar6)();
            return pFVar11;
          }
          uVar15 = pTVar5[lVar13].field0_0x0._s_0.Y - param_4;
          fVar18 = param_2->DataPtr[(int)uVar14];
          if (fVar7 <= param_2->DataPtr[(int)uVar14]) {
            fVar18 = fVar7;
          }
          uVar14 = 0;
          if ((int)uVar15 < param_2->ArrayNum) {
            uVar14 = ~uVar15 >> 0x1f;
          }
          if (fVar18 <= 0.0) {
            fVar18 = 0.0;
          }
          if ((uVar14 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            pFVar11 = (FPBDWeightMap *)(*pcVar6)();
            return pFVar11;
          }
          fVar17 = param_2->DataPtr[(int)uVar15];
          if (fVar7 <= param_2->DataPtr[(int)uVar15]) {
            fVar17 = fVar7;
          }
          uVar15 = 0;
          if ((int)uVar16 < (this->Indices).ArrayNum) {
            uVar15 = ~uVar16 >> 0x1f;
          }
          if (fVar17 <= 0.0) {
            fVar17 = 0.0;
          }
          if ((uVar15 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            pFVar11 = (FPBDWeightMap *)(*pcVar6)();
            return pFVar11;
          }
          uVar16 = uVar16 + 1;
          (pTVar1->AllocatorInstance).Data[lVar13] =
               SUB41((int)((fVar17 + fVar18) * fVar8 * (float)(param_6 + -1)),0);
          lVar13 = lVar13 + 1;
        } while (lVar13 < iVar10);
      }
      TArray<float,TSizedDefaultAllocator<32>_>::AddZeroed(&this->Table,param_6);
      return this;
    }
  }
  iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (1,1,1,&pTVar1->AllocatorInstance,piVar12,piVar4);
  (pTVar1->AllocatorInstance).Data[iVar10] = (FScriptContainerElement)0x0;
  iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,1,&(this->Table).AllocatorInstance,piVar2,piVar3);
  *(undefined4 *)((this->Table).AllocatorInstance.Data + (longlong)iVar10 * 4) = 0;
  return this;
}

// FPBDWeightMap<3> @ 143c218e0

FPBDWeightMap * __thiscall
Chaos::Softs::FPBDWeightMap::FPBDWeightMap<3>
          (FPBDWeightMap *this,TVector<float,2> *param_1,TArrayView<float_const_,int> *param_2,
          TArrayView<Chaos::TVector<int,3>_const_,int> *param_3,int param_4,int param_5,int param_6,
          void *param_7)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *this_00;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  int iVar9;
  FPBDWeightMap *pFVar10;
  TVector<int,3> *pTVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  pTVar1 = &this->Indices;
  this_00 = &this->Table;
  this->_padding_ = (longlong)&___7FPBDWeightMap_Softs_Chaos__6B_;
  piVar3 = &(this->Table).ArrayNum;
  piVar4 = &(this->Table).ArrayMax;
  *piVar3 = 0;
  *piVar4 = 0;
  piVar2 = &(this->Indices).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Indices).ArrayNum = 0;
  *piVar2 = 0;
  (this_00->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->WeightedValue = *param_1;
  this->bIsDirty = true;
  if ((0xfe < param_6 - 1U) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("TableSize > 0 && TableSize < 256",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDWeightMap.h"
                         ,0x9f,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pFVar10 = (FPBDWeightMap *)(*pcVar5)();
    return pFVar10;
  }
  piVar12 = &(this->Indices).ArrayNum;
  if ((param_2->ArrayNum == param_5) && (0 < param_5)) {
    iVar9 = param_3->ArrayNum;
    if (0 < iVar9) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar9,&pTVar1->AllocatorInstance,piVar12,piVar2);
      fVar7 = __real_3eaaaaab;
      fVar6 = __real_3f800000;
      uVar16 = 0;
      if (0 < iVar9) {
        lVar15 = 0;
        do {
          pTVar11 = TArrayView<Chaos::TVector<int,3>_const_,int>::operator[](param_3,uVar16);
          uVar13 = (pTVar11->field0_0x0)._s_0.X - param_4;
          uVar14 = 0;
          if ((int)uVar13 < param_2->ArrayNum) {
            uVar14 = ~uVar13 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            pFVar10 = (FPBDWeightMap *)(*pcVar5)();
            return pFVar10;
          }
          uVar14 = (pTVar11->field0_0x0)._s_0.Y - param_4;
          fVar19 = param_2->DataPtr[(int)uVar13];
          if (fVar6 <= param_2->DataPtr[(int)uVar13]) {
            fVar19 = fVar6;
          }
          uVar13 = 0;
          if ((int)uVar14 < param_2->ArrayNum) {
            uVar13 = ~uVar14 >> 0x1f;
          }
          if (fVar19 <= 0.0) {
            fVar19 = 0.0;
          }
          if ((uVar13 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            pFVar10 = (FPBDWeightMap *)(*pcVar5)();
            return pFVar10;
          }
          uVar13 = (pTVar11->field0_0x0)._s_0.Z - param_4;
          fVar17 = param_2->DataPtr[(int)uVar14];
          if (fVar6 <= param_2->DataPtr[(int)uVar14]) {
            fVar17 = fVar6;
          }
          if (fVar17 <= 0.0) {
            fVar17 = 0.0;
          }
          uVar14 = 0;
          if ((int)uVar13 < param_2->ArrayNum) {
            uVar14 = ~uVar13 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            pFVar10 = (FPBDWeightMap *)(*pcVar5)();
            return pFVar10;
          }
          fVar18 = param_2->DataPtr[(int)uVar13];
          if (fVar6 <= param_2->DataPtr[(int)uVar13]) {
            fVar18 = fVar6;
          }
          if (fVar18 <= 0.0) {
            fVar18 = 0.0;
          }
          uVar14 = 0;
          if ((int)uVar16 < (this->Indices).ArrayNum) {
            uVar14 = ~uVar16 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            pFVar10 = (FPBDWeightMap *)(*pcVar5)();
            return pFVar10;
          }
          uVar16 = uVar16 + 1;
          (pTVar1->AllocatorInstance).Data[lVar15] =
               SUB41((int)((fVar18 + fVar19 + fVar17) * fVar7 * (float)(param_6 + -1)),0);
          lVar15 = lVar15 + 1;
        } while (lVar15 < iVar9);
      }
      TArray<float,TSizedDefaultAllocator<32>_>::AddZeroed(this_00,param_6);
      return this;
    }
  }
  iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,1,&pTVar1->AllocatorInstance,piVar12,piVar2);
  (pTVar1->AllocatorInstance).Data[iVar9] = (FScriptContainerElement)0x0;
  iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,1,&this_00->AllocatorInstance,piVar3,piVar4);
  *(undefined4 *)((this_00->AllocatorInstance).Data + (longlong)iVar9 * 4) = 0;
  return this;
}

// ~FPBDWeightMap @ 143c45ab0

void __thiscall Chaos::Softs::FPBDWeightMap::~FPBDWeightMap(FPBDWeightMap *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Table).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Indices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 143c464f0

FPBDWeightMap * __thiscall
Chaos::Softs::FPBDWeightMap::operator=(FPBDWeightMap *this,FPBDWeightMap *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  
  pTVar1 = &param_1->Indices;
  pTVar2 = &this->Indices;
  if (pTVar2 != pTVar1) {
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Indices).ArrayNum = (param_1->Indices).ArrayNum;
    (this->Indices).ArrayMax = (param_1->Indices).ArrayMax;
    (param_1->Indices).ArrayNum = 0;
    (param_1->Indices).ArrayMax = 0;
  }
  pTVar3 = &param_1->Table;
  pTVar4 = &this->Table;
  if (pTVar4 != pTVar3) {
    pFVar5 = (pTVar4->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Table).ArrayNum = (param_1->Table).ArrayNum;
    (this->Table).ArrayMax = (param_1->Table).ArrayMax;
    (param_1->Table).ArrayNum = 0;
    (param_1->Table).ArrayMax = 0;
  }
  this->WeightedValue = param_1->WeightedValue;
  this->bIsDirty = param_1->bIsDirty;
  return this;
}

// operator[] @ 143c46740

float __thiscall Chaos::Softs::FPBDWeightMap::operator[](FPBDWeightMap *this,int param_1)

{
  FScriptContainerElement FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  float fVar5;
  
  uVar4 = 0;
  if (param_1 < (this->Indices).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar5 = (float)(*pcVar2)();
      return fVar5;
    }
  }
  FVar1 = (this->Indices).AllocatorInstance.Data[param_1];
  if ((this->Table).ArrayNum <= (int)(uint)(byte)FVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar5 = (float)(*pcVar2)();
      return fVar5;
    }
  }
  return *(float *)((this->Table).AllocatorInstance.Data + (ulonglong)(byte)FVar1 * 4);
}

// GetLow @ 143c693f0

float __thiscall Chaos::Softs::FPBDWeightMap::GetLow(FPBDWeightMap *this)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (0 < (this->Table).ArrayNum) {
    return *(float *)(this->Table).AllocatorInstance.Data;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("(Index >= 0) & (Index < ArrayNum)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                     ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    fVar3 = (float)(*pcVar1)();
    return fVar3;
  }
  return *(float *)(this->Table).AllocatorInstance.Data;
}

// ReorderIndices @ 143c70680

void __thiscall
Chaos::Softs::FPBDWeightMap::ReorderIndices
          (FPBDWeightMap *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ForAnyElementType local_28;
  int local_20 [2];
  
  uVar5 = (this->Indices).ArrayNum;
  if (uVar5 == param_1->ArrayNum) {
    uVar10 = 0;
    local_28.Data = (FScriptContainerElement *)0x0;
    local_20[0] = 0;
    local_20[1] = 0;
    if ((int)uVar5 < 1) {
      if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
      }
    }
    else {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar5,&local_28,local_20,local_20 + 1);
    }
    iVar7 = param_1->ArrayNum;
    pTVar8 = &this->Indices;
    uVar11 = uVar10;
    if (0 < iVar7) {
      do {
        uVar9 = (uint)uVar10;
        uVar5 = 0;
        if ((int)uVar9 < iVar7) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar5 = *(uint *)((param_1->AllocatorInstance).Data + uVar11 * 4);
        uVar6 = 0;
        if ((int)uVar9 < (this->Indices).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar1 = (pTVar8->AllocatorInstance).Data[uVar11];
        uVar6 = 0;
        if ((int)uVar5 < local_20[0]) {
          uVar6 = ~uVar5 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar10 = (ulonglong)(uVar9 + 1);
        local_28.Data[(int)uVar5] = FVar1;
        iVar7 = param_1->ArrayNum;
        uVar11 = uVar11 + 1;
      } while ((int)(uVar9 + 1) < iVar7);
    }
    if (pTVar8 != (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&local_28) {
      pFVar2 = (pTVar8->AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pTVar8->AllocatorInstance).Data = local_28.Data;
      (this->Indices).ArrayNum = local_20[0];
      (this->Indices).ArrayMax = local_20[1];
      local_20[0] = 0;
      local_20[1] = 0;
      local_28.Data = (FScriptContainerElement *)0x0;
    }
    if (local_28.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data);
    }
  }
  else if ((uVar5 != 1) &&
          (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Indices.Num() == 1",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDWeightMap.h"
                              ,0xea,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  return;
}

// FPBDWeightMap @ 143c882a0

FPBDWeightMap * __thiscall
Chaos::Softs::FPBDWeightMap::FPBDWeightMap
          (FPBDWeightMap *this,TVector<float,2> *param_1,TArrayView<float_const_,int> *param_2,
          int param_3,int param_4)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  int *piVar4;
  code *pcVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FPBDWeightMap *pFVar10;
  int *piVar11;
  longlong lVar12;
  uint uVar13;
  float fVar14;
  
  pTVar1 = &this->Indices;
  pTVar2 = &this->Table;
  this->_padding_ = (longlong)&___7FPBDWeightMap_Softs_Chaos__6B_;
  piVar3 = &(this->Table).ArrayNum;
  *piVar3 = 0;
  piVar4 = &(this->Indices).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Indices).ArrayNum = 0;
  *piVar4 = 0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Table).ArrayMax = 0;
  this->WeightedValue = *param_1;
  this->bIsDirty = true;
  if ((0xfe < param_4 - 1U) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TableSize > 0 && TableSize < 256",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDWeightMap.h"
                         ,0x7b,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar10 = (FPBDWeightMap *)(*pcVar5)();
    return pFVar10;
  }
  piVar11 = &(this->Indices).ArrayNum;
  if ((param_2->ArrayNum == param_3) && (0 < param_3)) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,param_3,&pTVar1->AllocatorInstance,piVar11,piVar4);
    fVar6 = __real_3f800000;
    uVar13 = 0;
    lVar12 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar13 < param_2->ArrayNum) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pFVar10 = (FPBDWeightMap *)(*pcVar5)();
        return pFVar10;
      }
      fVar14 = param_2->DataPtr[lVar12];
      if (fVar6 <= param_2->DataPtr[lVar12]) {
        fVar14 = fVar6;
      }
      uVar8 = 0;
      if ((int)uVar13 < (this->Indices).ArrayNum) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if (fVar14 <= 0.0) {
        fVar14 = 0.0;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pFVar10 = (FPBDWeightMap *)(*pcVar5)();
        return pFVar10;
      }
      uVar13 = uVar13 + 1;
      (pTVar1->AllocatorInstance).Data[lVar12] = SUB41((int)(fVar14 * (float)(param_4 + -1)),0);
      lVar12 = lVar12 + 1;
    } while ((int)uVar13 < param_3);
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,param_4,&pTVar2->AllocatorInstance,&(this->Table).ArrayNum,
                       &(this->Table).ArrayMax);
    memset((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 4,0,(longlong)param_4 << 2);
  }
  else {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,1,&pTVar1->AllocatorInstance,piVar11,piVar4);
    (pTVar1->AllocatorInstance).Data[iVar9] = (FScriptContainerElement)0x0;
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,1,&pTVar2->AllocatorInstance,piVar3,&(this->Table).ArrayMax);
    *(undefined4 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 4) = 0;
  }
  return this;
}

// operator_float @ 143c89680

float __thiscall Chaos::Softs::FPBDWeightMap::operator_float(FPBDWeightMap *this)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (0 < (this->Table).ArrayNum) {
    return *(float *)(this->Table).AllocatorInstance.Data;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("(Index >= 0) & (Index < ArrayNum)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                     ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    fVar3 = (float)(*pcVar1)();
    return fVar3;
  }
  return *(float *)(this->Table).AllocatorInstance.Data;
}

