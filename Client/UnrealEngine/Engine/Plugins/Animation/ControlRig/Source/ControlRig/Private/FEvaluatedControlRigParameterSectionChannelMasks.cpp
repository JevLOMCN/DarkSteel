// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 3

// FEvaluatedControlRigParameterSectionChannelMasks @ 14a3b6cf0

FEvaluatedControlRigParameterSectionChannelMasks * __thiscall
FEvaluatedControlRigParameterSectionChannelMasks::FEvaluatedControlRigParameterSectionChannelMasks
          (FEvaluatedControlRigParameterSectionChannelMasks *this)

{
  this->_padding_ = (longlong)&___7FEvaluatedControlRigParameterSectionChannelMasks__6B_;
  (this->ScalarCurveMask).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->ScalarCurveMask).NumBits = 0;
  (this->ScalarCurveMask).MaxBits = 0x80;
  (this->BoolCurveMask).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->BoolCurveMask).NumBits = 0;
  (this->BoolCurveMask).MaxBits = 0x80;
  (this->IntegerCurveMask).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->IntegerCurveMask).NumBits = 0;
  (this->IntegerCurveMask).MaxBits = 0x80;
  (this->EnumCurveMask).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->EnumCurveMask).NumBits = 0;
  (this->EnumCurveMask).MaxBits = 0x80;
  (this->Vector2DCurveMask).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->Vector2DCurveMask).NumBits = 0;
  (this->Vector2DCurveMask).MaxBits = 0x80;
  (this->VectorCurveMask).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->VectorCurveMask).NumBits = 0;
  (this->VectorCurveMask).MaxBits = 0x80;
  (this->ColorCurveMask).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->ColorCurveMask).NumBits = 0;
  (this->ColorCurveMask).MaxBits = 0x80;
  (this->TransformCurveMask).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->TransformCurveMask).NumBits = 0;
  (this->TransformCurveMask).MaxBits = 0x80;
  return this;
}

// ~FEvaluatedControlRigParameterSectionChannelMasks @ 14a3bc940

void __thiscall
FEvaluatedControlRigParameterSectionChannelMasks::~FEvaluatedControlRigParameterSectionChannelMasks
          (FEvaluatedControlRigParameterSectionChannelMasks *this)

{
  ForElementType<unsigned_int> FVar1;
  
  FVar1 = (this->TransformCurveMask).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FVar1 = (this->ColorCurveMask).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FVar1 = (this->VectorCurveMask).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FVar1 = (this->Vector2DCurveMask).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FVar1 = (this->EnumCurveMask).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FVar1 = (this->IntegerCurveMask).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FVar1 = (this->BoolCurveMask).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FVar1 = (this->ScalarCurveMask).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  this->_padding_ = (longlong)&___7IPersistentEvaluationData__6B_;
  return;
}

// Initialize @ 14a41f870

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FEvaluatedControlRigParameterSectionChannelMasks::Initialize
          (FEvaluatedControlRigParameterSectionChannelMasks *this,
          UMovieSceneControlRigParameterSection *param_1,
          TArrayView<FScalarParameterNameAndCurve_const_,int> *param_2,
          TArrayView<FBoolParameterNameAndCurve_const_,int> *param_3,
          TArrayView<FIntegerParameterNameAndCurve_const_,int> *param_4,
          TArrayView<FEnumParameterNameAndCurve_const_,int> *param_5,
          TArrayView<FVector2DParameterNameAndCurves_const_,int> *param_6,
          TArrayView<FVectorParameterNameAndCurves_const_,int> *param_7,
          TArrayView<FColorParameterNameAndCurves_const_,int> *param_8,
          TArrayView<FTransformParameterNameAndCurves_const_,int> *param_9)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  FScalarParameterNameAndCurve *pFVar1;
  longlong lVar2;
  undefined1 *puVar3;
  ForElementType<unsigned_int> FVar4;
  FBoolParameterNameAndCurve *pFVar5;
  FIntegerParameterNameAndCurve *pFVar6;
  FEnumParameterNameAndCurve *pFVar7;
  FVector2DParameterNameAndCurves *pFVar8;
  FVectorParameterNameAndCurves *pFVar9;
  FColorParameterNameAndCurves *pFVar10;
  FTransformParameterNameAndCurves *pFVar11;
  code *pcVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  longlong *plVar19;
  FName *pFVar20;
  uint uVar21;
  ForElementType<unsigned_int> FVar22;
  longlong *plVar23;
  undefined1 *puVar24;
  uint uVar25;
  ulonglong uVar26;
  uint uVar27;
  ulonglong uVar28;
  
  iVar18 = param_2->ArrayNum;
  this_00 = &this->ScalarCurveMask;
  if (-1 < iVar18) {
    iVar15 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(this_00,iVar18);
    TBitArray<FDefaultBitArrayAllocator>::SetRange(this_00,iVar15,iVar18,false);
  }
  iVar15 = param_3->ArrayNum;
  if (-1 < iVar15) {
    iVar16 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&this->BoolCurveMask,iVar15);
    TBitArray<FDefaultBitArrayAllocator>::SetRange(&this->BoolCurveMask,iVar16,iVar15,false);
  }
  iVar15 = param_4->ArrayNum;
  if (-1 < iVar15) {
    iVar16 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&this->IntegerCurveMask,iVar15);
    TBitArray<FDefaultBitArrayAllocator>::SetRange(&this->IntegerCurveMask,iVar16,iVar15,false);
  }
  iVar15 = param_5->ArrayNum;
  if (-1 < iVar15) {
    iVar16 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&this->EnumCurveMask,iVar15);
    TBitArray<FDefaultBitArrayAllocator>::SetRange(&this->EnumCurveMask,iVar16,iVar15,false);
  }
  iVar15 = param_6->ArrayNum;
  if (-1 < iVar15) {
    iVar16 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&this->Vector2DCurveMask,iVar15)
    ;
    TBitArray<FDefaultBitArrayAllocator>::SetRange(&this->Vector2DCurveMask,iVar16,iVar15,false);
  }
  iVar15 = param_7->ArrayNum;
  if (-1 < iVar15) {
    iVar16 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&this->VectorCurveMask,iVar15);
    TBitArray<FDefaultBitArrayAllocator>::SetRange(&this->VectorCurveMask,iVar16,iVar15,false);
  }
  iVar15 = param_8->ArrayNum;
  if (-1 < iVar15) {
    iVar16 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&this->ColorCurveMask,iVar15);
    TBitArray<FDefaultBitArrayAllocator>::SetRange(&this->ColorCurveMask,iVar16,iVar15,false);
  }
  iVar15 = param_9->ArrayNum;
  if (-1 < iVar15) {
    iVar16 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                       (&this->TransformCurveMask,iVar15);
    TBitArray<FDefaultBitArrayAllocator>::SetRange(&this->TransformCurveMask,iVar16,iVar15,false);
  }
  uVar26 = 0;
  if (0 < iVar18) {
    uVar27 = 1;
    uVar28 = uVar26;
    do {
      uVar25 = (uint)uVar26;
      uVar17 = 0;
      if ((int)uVar25 < param_2->ArrayNum) {
        uVar17 = ~uVar25 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar13)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar1 = param_2->DataPtr;
      lVar2 = *(longlong *)((longlong)&pFVar1->_padding_ + uVar28);
      uVar17 = ::GetTypeHash((FNameEntryId)(uint)lVar2);
      if (*(int *)&(param_1->ControlChannelMap).field_0x8 !=
          *(int *)&(param_1->ControlChannelMap).field_0x34) {
        puVar3 = *(undefined1 **)&(param_1->ControlChannelMap).field_0x40;
        puVar24 = &(param_1->ControlChannelMap).field_0x38;
        if (puVar3 != (undefined1 *)0x0) {
          puVar24 = puVar3;
        }
        iVar18 = *(int *)(puVar24 +
                         (ulonglong)
                         (*(int *)&(param_1->ControlChannelMap).field_0x48 - 1U &
                         (int)((ulonglong)lVar2 >> 0x20) + uVar17) * 4);
        if (iVar18 != -1) {
          do {
            plVar23 = (longlong *)
                      ((longlong)iVar18 * 0x50 + *(longlong *)&param_1->ControlChannelMap);
            if (*plVar23 == lVar2) {
              plVar19 = plVar23 + 1;
              if (plVar23 == (longlong *)0x0) {
                plVar19 = (longlong *)0x0;
              }
              if ((plVar19 != (longlong *)0x0) &&
                 (pFVar20 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Find
                                      (&param_1->ControlNameMask,
                                       *(FName *)((longlong)&pFVar1->_padding_ + uVar28)),
                 pFVar20 != (FName *)0x0)) {
                bVar13 = false;
                goto LAB_14a41faed;
              }
              break;
            }
            iVar18 = (int)plVar23[9];
          } while (iVar18 != -1);
        }
      }
      bVar13 = true;
LAB_14a41faed:
      if ((((int)uVar25 < 0) || ((this->ScalarCurveMask).NumBits <= (int)uVar25)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar14)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      FVar4 = (this->ScalarCurveMask).AllocatorInstance.SecondaryData;
      FVar22 = (ForElementType<unsigned_int>)this_00;
      if (FVar4 != (ForElementType<unsigned_int>)0x0) {
        FVar22 = FVar4;
      }
      uVar17 = uVar25;
      if ((int)uVar25 < 0) {
        uVar17 = uVar25 + 0x1f;
      }
      uVar21 = *(uint *)((longlong)FVar22 + (longlong)((int)uVar17 >> 5) * 4);
      if (bVar13) {
        uVar21 = uVar21 | uVar27;
      }
      else {
        uVar21 = uVar21 & ~uVar27;
      }
      uVar26 = (ulonglong)(uVar25 + 1);
      uVar27 = uVar27 << 1 | (uint)((int)uVar27 < 0);
      uVar28 = uVar28 + 0x130;
      *(uint *)((longlong)FVar22 + (longlong)((int)uVar17 >> 5) * 4) = uVar21;
    } while ((int)(uVar25 + 1) < param_2->ArrayNum);
  }
  uVar26 = 0;
  iVar18 = param_3->ArrayNum;
  if (0 < iVar18) {
    uVar27 = 1;
    uVar28 = uVar26;
    do {
      uVar25 = (uint)uVar26;
      uVar17 = 0;
      if ((int)uVar25 < iVar18) {
        uVar17 = ~uVar25 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar13)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar5 = param_3->DataPtr;
      lVar2 = *(longlong *)((longlong)&pFVar5->_padding_ + uVar28);
      uVar17 = ::GetTypeHash((FNameEntryId)(uint)lVar2);
      if (*(int *)&(param_1->ControlChannelMap).field_0x8 !=
          *(int *)&(param_1->ControlChannelMap).field_0x34) {
        puVar3 = *(undefined1 **)&(param_1->ControlChannelMap).field_0x40;
        puVar24 = &(param_1->ControlChannelMap).field_0x38;
        if (puVar3 != (undefined1 *)0x0) {
          puVar24 = puVar3;
        }
        iVar18 = *(int *)(puVar24 +
                         (ulonglong)
                         (*(int *)&(param_1->ControlChannelMap).field_0x48 - 1U &
                         (int)((ulonglong)lVar2 >> 0x20) + uVar17) * 4);
        if (iVar18 != -1) {
          do {
            plVar23 = (longlong *)
                      ((longlong)iVar18 * 0x50 + *(longlong *)&param_1->ControlChannelMap);
            if (*plVar23 == lVar2) {
              plVar19 = plVar23 + 1;
              if (plVar23 == (longlong *)0x0) {
                plVar19 = (longlong *)0x0;
              }
              if ((plVar19 != (longlong *)0x0) &&
                 (pFVar20 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Find
                                      (&param_1->ControlNameMask,
                                       *(FName *)((longlong)&pFVar5->_padding_ + uVar28)),
                 pFVar20 != (FName *)0x0)) {
                bVar13 = false;
                goto LAB_14a41fc9d;
              }
              break;
            }
            iVar18 = (int)plVar23[9];
          } while (iVar18 != -1);
        }
      }
      bVar13 = true;
LAB_14a41fc9d:
      if ((((int)uVar25 < 0) || ((this->BoolCurveMask).NumBits <= (int)uVar25)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar14)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      FVar4 = (this->BoolCurveMask).AllocatorInstance.SecondaryData;
      FVar22 = (ForElementType<unsigned_int>)&this->BoolCurveMask;
      if (FVar4 != (ForElementType<unsigned_int>)0x0) {
        FVar22 = FVar4;
      }
      uVar17 = uVar25;
      if ((int)uVar25 < 0) {
        uVar17 = uVar25 + 0x1f;
      }
      lVar2 = (longlong)((int)uVar17 >> 5) * 4;
      uVar17 = *(uint *)(lVar2 + (longlong)FVar22);
      if (bVar13) {
        uVar17 = uVar17 | uVar27;
      }
      else {
        uVar17 = uVar17 & ~uVar27;
      }
      *(uint *)((longlong)FVar22 + lVar2) = uVar17;
      uVar26 = (ulonglong)(uVar25 + 1);
      iVar18 = param_3->ArrayNum;
      uVar28 = uVar28 + 0x128;
      uVar27 = uVar27 << 1 | (uint)((int)uVar27 < 0);
    } while ((int)(uVar25 + 1) < iVar18);
  }
  uVar26 = 0;
  iVar18 = param_4->ArrayNum;
  if (0 < iVar18) {
    uVar27 = 1;
    uVar28 = uVar26;
    do {
      uVar25 = (uint)uVar26;
      uVar17 = 0;
      if ((int)uVar25 < iVar18) {
        uVar17 = ~uVar25 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar13)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar6 = param_4->DataPtr;
      lVar2 = *(longlong *)((longlong)&pFVar6->_padding_ + uVar28);
      uVar17 = ::GetTypeHash((FNameEntryId)(uint)lVar2);
      if (*(int *)&(param_1->ControlChannelMap).field_0x8 !=
          *(int *)&(param_1->ControlChannelMap).field_0x34) {
        puVar3 = *(undefined1 **)&(param_1->ControlChannelMap).field_0x40;
        puVar24 = &(param_1->ControlChannelMap).field_0x38;
        if (puVar3 != (undefined1 *)0x0) {
          puVar24 = puVar3;
        }
        iVar18 = *(int *)(puVar24 +
                         (ulonglong)
                         (*(int *)&(param_1->ControlChannelMap).field_0x48 - 1U &
                         (int)((ulonglong)lVar2 >> 0x20) + uVar17) * 4);
        if (iVar18 != -1) {
          do {
            plVar23 = (longlong *)
                      ((longlong)iVar18 * 0x50 + *(longlong *)&param_1->ControlChannelMap);
            if (*plVar23 == lVar2) {
              plVar19 = plVar23 + 1;
              if (plVar23 == (longlong *)0x0) {
                plVar19 = (longlong *)0x0;
              }
              if ((plVar19 != (longlong *)0x0) &&
                 (pFVar20 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Find
                                      (&param_1->ControlNameMask,
                                       *(FName *)((longlong)&pFVar6->_padding_ + uVar28)),
                 pFVar20 != (FName *)0x0)) {
                bVar13 = false;
                goto LAB_14a41fe4d;
              }
              break;
            }
            iVar18 = (int)plVar23[9];
          } while (iVar18 != -1);
        }
      }
      bVar13 = true;
LAB_14a41fe4d:
      if ((((int)uVar25 < 0) || ((this->IntegerCurveMask).NumBits <= (int)uVar25)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar14)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      FVar4 = (this->IntegerCurveMask).AllocatorInstance.SecondaryData;
      FVar22 = (ForElementType<unsigned_int>)&this->IntegerCurveMask;
      if (FVar4 != (ForElementType<unsigned_int>)0x0) {
        FVar22 = FVar4;
      }
      uVar17 = uVar25;
      if ((int)uVar25 < 0) {
        uVar17 = uVar25 + 0x1f;
      }
      uVar21 = *(uint *)((longlong)FVar22 + (longlong)((int)uVar17 >> 5) * 4);
      if (bVar13) {
        uVar21 = uVar21 | uVar27;
      }
      else {
        uVar21 = uVar21 & ~uVar27;
      }
      *(uint *)((longlong)FVar22 + (longlong)((int)uVar17 >> 5) * 4) = uVar21;
      uVar26 = (ulonglong)(uVar25 + 1);
      iVar18 = param_4->ArrayNum;
      uVar28 = uVar28 + 0x128;
      uVar27 = uVar27 << 1 | (uint)((int)uVar27 < 0);
    } while ((int)(uVar25 + 1) < iVar18);
  }
  uVar26 = 0;
  iVar18 = param_5->ArrayNum;
  if (0 < iVar18) {
    uVar27 = 1;
    uVar28 = uVar26;
    do {
      uVar25 = (uint)uVar26;
      uVar17 = 0;
      if ((int)uVar25 < iVar18) {
        uVar17 = ~uVar25 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar13)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar7 = param_5->DataPtr;
      lVar2 = *(longlong *)((longlong)&pFVar7->_padding_ + uVar28);
      uVar17 = ::GetTypeHash((FNameEntryId)(uint)lVar2);
      if (*(int *)&(param_1->ControlChannelMap).field_0x8 !=
          *(int *)&(param_1->ControlChannelMap).field_0x34) {
        puVar3 = *(undefined1 **)&(param_1->ControlChannelMap).field_0x40;
        puVar24 = &(param_1->ControlChannelMap).field_0x38;
        if (puVar3 != (undefined1 *)0x0) {
          puVar24 = puVar3;
        }
        iVar18 = *(int *)(puVar24 +
                         (ulonglong)
                         (*(int *)&(param_1->ControlChannelMap).field_0x48 - 1U &
                         (int)((ulonglong)lVar2 >> 0x20) + uVar17) * 4);
        if (iVar18 != -1) {
          do {
            plVar23 = (longlong *)
                      ((longlong)iVar18 * 0x50 + *(longlong *)&param_1->ControlChannelMap);
            if (*plVar23 == lVar2) {
              plVar19 = plVar23 + 1;
              if (plVar23 == (longlong *)0x0) {
                plVar19 = (longlong *)0x0;
              }
              if ((plVar19 != (longlong *)0x0) &&
                 (pFVar20 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Find
                                      (&param_1->ControlNameMask,
                                       *(FName *)((longlong)&pFVar7->_padding_ + uVar28)),
                 pFVar20 != (FName *)0x0)) {
                bVar13 = false;
                goto LAB_14a41fffd;
              }
              break;
            }
            iVar18 = (int)plVar23[9];
          } while (iVar18 != -1);
        }
      }
      bVar13 = true;
LAB_14a41fffd:
      if ((((int)uVar25 < 0) || ((this->EnumCurveMask).NumBits <= (int)uVar25)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar14)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      FVar4 = (this->EnumCurveMask).AllocatorInstance.SecondaryData;
      FVar22 = (ForElementType<unsigned_int>)&this->EnumCurveMask;
      if (FVar4 != (ForElementType<unsigned_int>)0x0) {
        FVar22 = FVar4;
      }
      uVar17 = uVar25;
      if ((int)uVar25 < 0) {
        uVar17 = uVar25 + 0x1f;
      }
      uVar21 = *(uint *)((longlong)FVar22 + (longlong)((int)uVar17 >> 5) * 4);
      if (bVar13) {
        uVar21 = uVar21 | uVar27;
      }
      else {
        uVar21 = uVar21 & ~uVar27;
      }
      *(uint *)((longlong)FVar22 + (longlong)((int)uVar17 >> 5) * 4) = uVar21;
      uVar26 = (ulonglong)(uVar25 + 1);
      iVar18 = param_5->ArrayNum;
      uVar28 = uVar28 + 0x130;
      uVar27 = uVar27 << 1 | (uint)((int)uVar27 < 0);
    } while ((int)(uVar25 + 1) < iVar18);
  }
  uVar26 = 0;
  iVar18 = param_6->ArrayNum;
  if (0 < iVar18) {
    uVar27 = 1;
    uVar28 = uVar26;
    do {
      uVar25 = (uint)uVar26;
      uVar17 = 0;
      if ((int)uVar25 < iVar18) {
        uVar17 = ~uVar25 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar13)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar8 = param_6->DataPtr;
      lVar2 = *(longlong *)((longlong)&pFVar8->_padding_ + uVar28);
      uVar17 = ::GetTypeHash((FNameEntryId)(uint)lVar2);
      if (*(int *)&(param_1->ControlChannelMap).field_0x8 !=
          *(int *)&(param_1->ControlChannelMap).field_0x34) {
        puVar3 = *(undefined1 **)&(param_1->ControlChannelMap).field_0x40;
        puVar24 = &(param_1->ControlChannelMap).field_0x38;
        if (puVar3 != (undefined1 *)0x0) {
          puVar24 = puVar3;
        }
        iVar18 = *(int *)(puVar24 +
                         (ulonglong)
                         (*(int *)&(param_1->ControlChannelMap).field_0x48 - 1U &
                         (int)((ulonglong)lVar2 >> 0x20) + uVar17) * 4);
        if (iVar18 != -1) {
          do {
            plVar23 = (longlong *)
                      ((longlong)iVar18 * 0x50 + *(longlong *)&param_1->ControlChannelMap);
            if (*plVar23 == lVar2) {
              plVar19 = plVar23 + 1;
              if (plVar23 == (longlong *)0x0) {
                plVar19 = (longlong *)0x0;
              }
              if ((plVar19 != (longlong *)0x0) &&
                 (pFVar20 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Find
                                      (&param_1->ControlNameMask,
                                       *(FName *)((longlong)&pFVar8->_padding_ + uVar28)),
                 pFVar20 != (FName *)0x0)) {
                bVar13 = false;
                goto LAB_14a4201ad;
              }
              break;
            }
            iVar18 = (int)plVar23[9];
          } while (iVar18 != -1);
        }
      }
      bVar13 = true;
LAB_14a4201ad:
      if ((((int)uVar25 < 0) || ((this->Vector2DCurveMask).NumBits <= (int)uVar25)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar14)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      FVar4 = (this->Vector2DCurveMask).AllocatorInstance.SecondaryData;
      FVar22 = (ForElementType<unsigned_int>)&this->Vector2DCurveMask;
      if (FVar4 != (ForElementType<unsigned_int>)0x0) {
        FVar22 = FVar4;
      }
      uVar17 = uVar25;
      if ((int)uVar25 < 0) {
        uVar17 = uVar25 + 0x1f;
      }
      uVar21 = *(uint *)((longlong)FVar22 + (longlong)((int)uVar17 >> 5) * 4);
      if (bVar13) {
        uVar21 = uVar21 | uVar27;
      }
      else {
        uVar21 = uVar21 & ~uVar27;
      }
      *(uint *)((longlong)FVar22 + (longlong)((int)uVar17 >> 5) * 4) = uVar21;
      uVar26 = (ulonglong)(uVar25 + 1);
      iVar18 = param_6->ArrayNum;
      uVar28 = uVar28 + 600;
      uVar27 = uVar27 << 1 | (uint)((int)uVar27 < 0);
    } while ((int)(uVar25 + 1) < iVar18);
  }
  uVar26 = 0;
  iVar18 = param_7->ArrayNum;
  if (0 < iVar18) {
    uVar27 = 1;
    uVar28 = uVar26;
    do {
      uVar25 = (uint)uVar26;
      uVar17 = 0;
      if ((int)uVar25 < iVar18) {
        uVar17 = ~uVar25 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar13)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar9 = param_7->DataPtr;
      lVar2 = *(longlong *)((longlong)&pFVar9->_padding_ + uVar28);
      uVar17 = ::GetTypeHash((FNameEntryId)(uint)lVar2);
      if (*(int *)&(param_1->ControlChannelMap).field_0x8 !=
          *(int *)&(param_1->ControlChannelMap).field_0x34) {
        puVar3 = *(undefined1 **)&(param_1->ControlChannelMap).field_0x40;
        puVar24 = &(param_1->ControlChannelMap).field_0x38;
        if (puVar3 != (undefined1 *)0x0) {
          puVar24 = puVar3;
        }
        iVar18 = *(int *)(puVar24 +
                         (ulonglong)
                         (*(int *)&(param_1->ControlChannelMap).field_0x48 - 1U &
                         (int)((ulonglong)lVar2 >> 0x20) + uVar17) * 4);
        if (iVar18 != -1) {
          do {
            plVar23 = (longlong *)
                      ((longlong)iVar18 * 0x50 + *(longlong *)&param_1->ControlChannelMap);
            if (*plVar23 == lVar2) {
              plVar19 = plVar23 + 1;
              if (plVar23 == (longlong *)0x0) {
                plVar19 = (longlong *)0x0;
              }
              if ((plVar19 != (longlong *)0x0) &&
                 (pFVar20 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Find
                                      (&param_1->ControlNameMask,
                                       *(FName *)((longlong)&pFVar9->_padding_ + uVar28)),
                 pFVar20 != (FName *)0x0)) {
                bVar13 = false;
                goto LAB_14a42036d;
              }
              break;
            }
            iVar18 = (int)plVar23[9];
          } while (iVar18 != -1);
        }
      }
      bVar13 = true;
LAB_14a42036d:
      if ((((int)uVar25 < 0) || ((this->VectorCurveMask).NumBits <= (int)uVar25)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar14)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      FVar4 = (this->VectorCurveMask).AllocatorInstance.SecondaryData;
      FVar22 = (ForElementType<unsigned_int>)&this->VectorCurveMask;
      if (FVar4 != (ForElementType<unsigned_int>)0x0) {
        FVar22 = FVar4;
      }
      uVar17 = uVar25;
      if ((int)uVar25 < 0) {
        uVar17 = uVar25 + 0x1f;
      }
      lVar2 = (longlong)((int)uVar17 >> 5) * 4;
      uVar17 = *(uint *)(lVar2 + (longlong)FVar22);
      if (bVar13) {
        uVar17 = uVar17 | uVar27;
      }
      else {
        uVar17 = uVar17 & ~uVar27;
      }
      *(uint *)(lVar2 + (longlong)FVar22) = uVar17;
      uVar26 = (ulonglong)(uVar25 + 1);
      iVar18 = param_7->ArrayNum;
      uVar28 = uVar28 + 0x380;
      uVar27 = uVar27 << 1 | (uint)((int)uVar27 < 0);
    } while ((int)(uVar25 + 1) < iVar18);
  }
  uVar26 = 0;
  iVar18 = param_8->ArrayNum;
  if (0 < iVar18) {
    uVar27 = 1;
    uVar28 = uVar26;
    do {
      uVar25 = (uint)uVar26;
      uVar17 = 0;
      if ((int)uVar25 < iVar18) {
        uVar17 = ~uVar25 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar13)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar10 = param_8->DataPtr;
      lVar2 = *(longlong *)((longlong)&pFVar10->_padding_ + uVar28);
      uVar17 = ::GetTypeHash((FNameEntryId)(uint)lVar2);
      if (*(int *)&(param_1->ControlChannelMap).field_0x8 !=
          *(int *)&(param_1->ControlChannelMap).field_0x34) {
        puVar3 = *(undefined1 **)&(param_1->ControlChannelMap).field_0x40;
        puVar24 = &(param_1->ControlChannelMap).field_0x38;
        if (puVar3 != (undefined1 *)0x0) {
          puVar24 = puVar3;
        }
        iVar18 = *(int *)(puVar24 +
                         (ulonglong)
                         (*(int *)&(param_1->ControlChannelMap).field_0x48 - 1U &
                         (int)((ulonglong)lVar2 >> 0x20) + uVar17) * 4);
        if (iVar18 != -1) {
          do {
            plVar23 = (longlong *)
                      ((longlong)iVar18 * 0x50 + *(longlong *)&param_1->ControlChannelMap);
            if (*plVar23 == lVar2) {
              plVar19 = plVar23 + 1;
              if (plVar23 == (longlong *)0x0) {
                plVar19 = (longlong *)0x0;
              }
              if ((plVar19 != (longlong *)0x0) &&
                 (pFVar20 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Find
                                      (&param_1->ControlNameMask,
                                       *(FName *)((longlong)&pFVar10->_padding_ + uVar28)),
                 pFVar20 != (FName *)0x0)) {
                bVar13 = false;
                goto LAB_14a42052d;
              }
              break;
            }
            iVar18 = (int)plVar23[9];
          } while (iVar18 != -1);
        }
      }
      bVar13 = true;
LAB_14a42052d:
      if ((((int)uVar25 < 0) || ((this->ColorCurveMask).NumBits <= (int)uVar25)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar14)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      FVar4 = (this->ColorCurveMask).AllocatorInstance.SecondaryData;
      FVar22 = (ForElementType<unsigned_int>)&this->ColorCurveMask;
      if (FVar4 != (ForElementType<unsigned_int>)0x0) {
        FVar22 = FVar4;
      }
      uVar17 = uVar25;
      if ((int)uVar25 < 0) {
        uVar17 = uVar25 + 0x1f;
      }
      lVar2 = (longlong)((int)uVar17 >> 5) * 4;
      uVar17 = *(uint *)(lVar2 + (longlong)FVar22);
      if (bVar13) {
        uVar17 = uVar17 | uVar27;
      }
      else {
        uVar17 = uVar17 & ~uVar27;
      }
      *(uint *)((longlong)FVar22 + lVar2) = uVar17;
      uVar26 = (ulonglong)(uVar25 + 1);
      iVar18 = param_8->ArrayNum;
      uVar28 = uVar28 + 0x4a8;
      uVar27 = uVar27 << 1 | (uint)((int)uVar27 < 0);
    } while ((int)(uVar25 + 1) < iVar18);
  }
  uVar26 = 0;
  iVar18 = param_9->ArrayNum;
  if (0 < iVar18) {
    uVar27 = 1;
    uVar28 = uVar26;
    do {
      uVar25 = (uint)uVar26;
      uVar17 = 0;
      if ((int)uVar25 < iVar18) {
        uVar17 = ~uVar25 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar13)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar11 = param_9->DataPtr;
      lVar2 = *(longlong *)((longlong)pFVar11->Translation + (uVar28 - 8));
      uVar17 = ::GetTypeHash((FNameEntryId)(uint)lVar2);
      if (*(int *)&(param_1->ControlChannelMap).field_0x8 !=
          *(int *)&(param_1->ControlChannelMap).field_0x34) {
        puVar3 = *(undefined1 **)&(param_1->ControlChannelMap).field_0x40;
        puVar24 = &(param_1->ControlChannelMap).field_0x38;
        if (puVar3 != (undefined1 *)0x0) {
          puVar24 = puVar3;
        }
        iVar18 = *(int *)(puVar24 +
                         (ulonglong)
                         (*(int *)&(param_1->ControlChannelMap).field_0x48 - 1U &
                         (int)((ulonglong)lVar2 >> 0x20) + uVar17) * 4);
        if (iVar18 != -1) {
          do {
            plVar23 = (longlong *)
                      ((longlong)iVar18 * 0x50 + *(longlong *)&param_1->ControlChannelMap);
            if (*plVar23 == lVar2) {
              plVar19 = plVar23 + 1;
              if (plVar23 == (longlong *)0x0) {
                plVar19 = (longlong *)0x0;
              }
              if ((plVar19 != (longlong *)0x0) &&
                 (pFVar20 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Find
                                      (&param_1->ControlNameMask,
                                       *(FName *)((longlong)pFVar11->Translation + (uVar28 - 8))),
                 pFVar20 != (FName *)0x0)) {
                bVar13 = false;
                goto LAB_14a4206ed;
              }
              break;
            }
            iVar18 = (int)plVar23[9];
          } while (iVar18 != -1);
        }
      }
      bVar13 = true;
LAB_14a4206ed:
      if ((((int)uVar25 < 0) || ((this->TransformCurveMask).NumBits <= (int)uVar25)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar14)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      FVar4 = (this->TransformCurveMask).AllocatorInstance.SecondaryData;
      FVar22 = (ForElementType<unsigned_int>)&this->TransformCurveMask;
      if (FVar4 != (ForElementType<unsigned_int>)0x0) {
        FVar22 = FVar4;
      }
      uVar17 = uVar25;
      if ((int)uVar25 < 0) {
        uVar17 = uVar25 + 0x1f;
      }
      lVar2 = (longlong)((int)uVar17 >> 5) * 4;
      uVar17 = *(uint *)(lVar2 + (longlong)FVar22);
      if (bVar13) {
        uVar17 = uVar17 | uVar27;
      }
      else {
        uVar17 = uVar17 & ~uVar27;
      }
      uVar26 = (ulonglong)(uVar25 + 1);
      *(uint *)(lVar2 + (longlong)FVar22) = uVar17;
      uVar28 = uVar28 + 0xa70;
      uVar27 = uVar27 << 1 | (uint)((int)uVar27 < 0);
      iVar18 = param_9->ArrayNum;
    } while ((int)(uVar25 + 1) < iVar18);
  }
  return;
}

