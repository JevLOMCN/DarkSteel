// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 10

// operator= @ 14609a070

FMovieSceneEvaluationField * __thiscall
FMovieSceneEvaluationField::operator=
          (FMovieSceneEvaluationField *this,FMovieSceneEvaluationField *param_1)

{
  TArray<FMovieSceneEvaluationGroup,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FMovieSceneEvaluationGroup,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FMovieSceneEvaluationMetaData,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FMovieSceneEvaluationMetaData,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  
  if (this != param_1) {
    pFVar5 = (this->Ranges).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (this->Ranges).AllocatorInstance.Data = (param_1->Ranges).AllocatorInstance.Data;
    (param_1->Ranges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Ranges).ArrayNum = (param_1->Ranges).ArrayNum;
    (this->Ranges).ArrayMax = (param_1->Ranges).ArrayMax;
    (param_1->Ranges).ArrayNum = 0;
    (param_1->Ranges).ArrayMax = 0;
  }
  pTVar1 = &param_1->Groups;
  pTVar2 = &this->Groups;
  if (pTVar2 != pTVar1) {
    DestructItems<FMovieSceneEvaluationGroup,int>
              ((FMovieSceneEvaluationGroup *)(pTVar2->AllocatorInstance).Data,
               (this->Groups).ArrayNum);
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Groups).ArrayNum = (param_1->Groups).ArrayNum;
    (this->Groups).ArrayMax = (param_1->Groups).ArrayMax;
    (param_1->Groups).ArrayNum = 0;
    (param_1->Groups).ArrayMax = 0;
  }
  pTVar3 = &param_1->MetaData;
  pTVar4 = &this->MetaData;
  if (pTVar4 != pTVar3) {
    DestructItems<FMovieSceneEvaluationMetaData,int>
              ((FMovieSceneEvaluationMetaData *)(pTVar4->AllocatorInstance).Data,
               (this->MetaData).ArrayNum);
    pFVar5 = (pTVar4->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->MetaData).ArrayNum = (param_1->MetaData).ArrayNum;
    (this->MetaData).ArrayMax = (param_1->MetaData).ArrayMax;
    (param_1->MetaData).ArrayNum = 0;
    (param_1->MetaData).ArrayMax = 0;
  }
  return this;
}

// operator= @ 14609a160

FMovieSceneEvaluationField * __thiscall
FMovieSceneEvaluationField::operator=
          (FMovieSceneEvaluationField *this,FMovieSceneEvaluationField *param_1)

{
  int *piVar1;
  TArray<FMovieSceneEvaluationGroup,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FMovieSceneEvaluationMetaData,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  FMovieSceneEvaluationGroup *pFVar5;
  FMovieSceneEvaluationMetaData *pFVar6;
  
  if (this != param_1) {
    iVar4 = (param_1->Ranges).ArrayNum;
    piVar1 = &(this->Ranges).ArrayMax;
    _Src = (param_1->Ranges).AllocatorInstance.Data;
    (this->Ranges).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,iVar4,*piVar1,(ForAnyElementType *)this,iVar4,piVar1);
      if (iVar4 != 0) {
        memcpy((this->Ranges).AllocatorInstance.Data,_Src,(longlong)iVar4 << 4);
      }
    }
  }
  pTVar2 = &this->Groups;
  if (pTVar2 != &param_1->Groups) {
    DestructItems<FMovieSceneEvaluationGroup,int>
              ((FMovieSceneEvaluationGroup *)(pTVar2->AllocatorInstance).Data,
               (this->Groups).ArrayNum);
    iVar4 = (param_1->Groups).ArrayNum;
    piVar1 = &(this->Groups).ArrayMax;
    pFVar5 = (FMovieSceneEvaluationGroup *)(param_1->Groups).AllocatorInstance.Data;
    (this->Groups).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,iVar4,*piVar1,&pTVar2->AllocatorInstance,iVar4,piVar1);
      ConstructItems<FMovieSceneEvaluationGroup,FMovieSceneEvaluationGroup,int>
                ((pTVar2->AllocatorInstance).Data,pFVar5,iVar4);
    }
  }
  pTVar3 = &this->MetaData;
  if (pTVar3 != &param_1->MetaData) {
    DestructItems<FMovieSceneEvaluationMetaData,int>
              ((FMovieSceneEvaluationMetaData *)(pTVar3->AllocatorInstance).Data,
               (this->MetaData).ArrayNum);
    iVar4 = (param_1->MetaData).ArrayNum;
    piVar1 = &(this->MetaData).ArrayMax;
    pFVar6 = (FMovieSceneEvaluationMetaData *)(param_1->MetaData).AllocatorInstance.Data;
    (this->MetaData).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar4,*piVar1,&pTVar3->AllocatorInstance,iVar4,piVar1);
      ConstructItems<FMovieSceneEvaluationMetaData,FMovieSceneEvaluationMetaData,int>
                ((pTVar3->AllocatorInstance).Data,pFVar6,iVar4);
    }
  }
  return this;
}

// StaticStruct @ 146162360

UScriptStruct * __cdecl FMovieSceneEvaluationField::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationField.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationField.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationField,(UObject *)pUVar1,
                         L"MovieSceneEvaluationField");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationField.OuterSingleton;
}

// Add @ 14618c190

void __thiscall
FMovieSceneEvaluationField::Add
          (FMovieSceneEvaluationField *this,TRange<FFrameNumber> *param_1,
          FMovieSceneEvaluationGroup *param_2,FMovieSceneEvaluationMetaData *param_3)

{
  int *piVar1;
  TRangeBound<FFrameNumber> *pTVar2;
  FMovieSceneEvaluationMetaData *pFVar3;
  FMovieSceneEvaluationGroup *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  TRangeBound<FFrameNumber> local_28;
  TRangeBound<FFrameNumber> TStack_20;
  
  iVar8 = (this->Ranges).ArrayNum;
  if (iVar8 != 0) {
    uVar7 = 0;
    if ((int)(iVar8 - 1U) < iVar8) {
      uVar7 = ~(iVar8 - 1U) >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar6 = TRange<FFrameNumber>::Overlaps
                      ((TRange<FFrameNumber> *)
                       ((this->Ranges).AllocatorInstance.Data +
                       (longlong)((this->Ranges).ArrayNum + -1) * 0x10),param_1);
    if (bVar6) {
      local_res8[0] = 0;
      bVar6 = `FMovieSceneEvaluationField::Add'::__l3::<lambda_1>::operator()(local_res8);
      if (!bVar6) {
        return;
      }
    }
  }
  local_28 = param_1->LowerBound;
  TStack_20 = param_1->UpperBound;
  pTVar2 = (TRangeBound<FFrameNumber> *)(this->Ranges).AllocatorInstance.Data;
  if (((pTVar2 <= &local_28) && (&local_28 < pTVar2 + (longlong)(this->Ranges).ArrayMax * 2)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = (this->Ranges).ArrayNum;
  piVar1 = &(this->Ranges).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,(ForAnyElementType *)this,piVar1);
  }
  (this->Ranges).ArrayNum = iVar8 + 1;
  pTVar2 = (TRangeBound<FFrameNumber> *)
           ((this->Ranges).AllocatorInstance.Data + (longlong)iVar8 * 0x10);
  *pTVar2 = local_28;
  pTVar2[1] = TStack_20;
  pFVar3 = (FMovieSceneEvaluationMetaData *)(this->MetaData).AllocatorInstance.Data;
  if (((pFVar3 <= param_3) && (param_3 < pFVar3 + (this->MetaData).ArrayMax)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = (this->MetaData).ArrayNum;
  piVar1 = &(this->MetaData).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->MetaData).AllocatorInstance,piVar1);
  }
  (this->MetaData).ArrayNum = iVar8 + 1;
  pFVar9 = (this->MetaData).AllocatorInstance.Data + (longlong)iVar8 * 0x20;
  *(undefined8 *)pFVar9 = 0;
  *(FScriptContainerElement **)pFVar9 = (param_3->ActiveSequences).AllocatorInstance.Data;
  (param_3->ActiveSequences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar9 + 8) = (param_3->ActiveSequences).ArrayNum;
  *(int *)(pFVar9 + 0xc) = (param_3->ActiveSequences).ArrayMax;
  (param_3->ActiveSequences).ArrayNum = 0;
  (param_3->ActiveSequences).ArrayMax = 0;
  *(undefined8 *)(pFVar9 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar9 + 0x10) = (param_3->ActiveEntities).AllocatorInstance.Data;
  (param_3->ActiveEntities).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar9 + 0x18) = (param_3->ActiveEntities).ArrayNum;
  *(int *)(pFVar9 + 0x1c) = (param_3->ActiveEntities).ArrayMax;
  (param_3->ActiveEntities).ArrayNum = 0;
  (param_3->ActiveEntities).ArrayMax = 0;
  pFVar4 = (FMovieSceneEvaluationGroup *)(this->Groups).AllocatorInstance.Data;
  if (((pFVar4 <= param_2) && (param_2 < pFVar4 + (this->Groups).ArrayMax)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = (this->Groups).ArrayNum;
  piVar1 = &(this->Groups).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&(this->Groups).AllocatorInstance,piVar1);
  }
  (this->Groups).ArrayNum = iVar8 + 1;
  pFVar9 = (this->Groups).AllocatorInstance.Data + (longlong)iVar8 * 0x30;
  *(undefined8 *)pFVar9 = 0;
  *(FScriptContainerElement **)pFVar9 = (param_2->LUTIndices).AllocatorInstance.Data;
  (param_2->LUTIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar9 + 8) = (param_2->LUTIndices).ArrayNum;
  *(int *)(pFVar9 + 0xc) = (param_2->LUTIndices).ArrayMax;
  (param_2->LUTIndices).ArrayNum = 0;
  (param_2->LUTIndices).ArrayMax = 0;
  *(undefined8 *)(pFVar9 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar9 + 0x10) = (param_2->TrackLUT).AllocatorInstance.Data;
  (param_2->TrackLUT).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar9 + 0x18) = (param_2->TrackLUT).ArrayNum;
  *(int *)(pFVar9 + 0x1c) = (param_2->TrackLUT).ArrayMax;
  (param_2->TrackLUT).ArrayNum = 0;
  (param_2->TrackLUT).ArrayMax = 0;
  *(undefined8 *)(pFVar9 + 0x20) = 0;
  *(FScriptContainerElement **)(pFVar9 + 0x20) = (param_2->SectionLUT).AllocatorInstance.Data;
  (param_2->SectionLUT).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar9 + 0x28) = (param_2->SectionLUT).ArrayNum;
  *(int *)(pFVar9 + 0x2c) = (param_2->SectionLUT).ArrayMax;
  (param_2->SectionLUT).ArrayNum = 0;
  (param_2->SectionLUT).ArrayMax = 0;
  return;
}

// GetSegmentFromTime @ 1461b36c0

int __thiscall
FMovieSceneEvaluationField::GetSegmentFromTime
          (FMovieSceneEvaluationField *this,FFrameNumber param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  uint uVar8;
  FScriptContainerElement local_18 [4];
  int local_14;
  FScriptContainerElement local_10 [4];
  int local_c;
  
  uVar8 = 0;
  iVar4 = (this->Ranges).ArrayNum;
  if (0 < iVar4) {
    lVar7 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar8 < iVar4) {
        uVar3 = ~uVar8 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      pFVar6 = (this->Ranges).AllocatorInstance.Data + lVar7;
      local_18[0] = (FScriptContainerElement)0x1;
      local_14 = param_1.Value;
      if (*pFVar6 == (FScriptContainerElement)0x2) {
LAB_1461b3776:
        pFVar5 = pFVar6 + 8;
        local_10[0] = (FScriptContainerElement)0x1;
        local_c = param_1.Value;
        if (pFVar6[8] == (FScriptContainerElement)0x2) {
          return uVar8;
        }
        if (*(int *)(pFVar6 + 0xc) <= param_1.Value) {
          if (*(int *)(pFVar6 + 0xc) < param_1.Value) {
            pFVar5 = local_10;
          }
          if (pFVar6[8] != (FScriptContainerElement)0x1) goto LAB_1461b37a3;
        }
        if (*(int *)(pFVar5 + 4) == *(int *)(pFVar6 + 0xc)) {
          return uVar8;
        }
      }
      else {
        pFVar5 = pFVar6;
        if (*(int *)(pFVar6 + 4) < param_1.Value) {
LAB_1461b376e:
          if (*(int *)(pFVar5 + 4) == *(int *)(pFVar6 + 4)) goto LAB_1461b3776;
        }
        else {
          if (param_1.Value < *(int *)(pFVar6 + 4)) {
            pFVar5 = local_18;
          }
          if (*pFVar6 == (FScriptContainerElement)0x1) goto LAB_1461b376e;
        }
      }
LAB_1461b37a3:
      iVar4 = (this->Ranges).ArrayNum;
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0x10;
    } while ((int)uVar8 < iVar4);
  }
  return -1;
}

// Insert @ 1461b6a40

/* WARNING: Type propagation algorithm not settling */

int __thiscall
FMovieSceneEvaluationField::Insert
          (FMovieSceneEvaluationField *this,TRange<FFrameNumber> *param_1,
          FMovieSceneEvaluationGroup *param_2,FMovieSceneEvaluationMetaData *param_3)

{
  int *piVar1;
  TRangeBound<FFrameNumber> TVar2;
  TRangeBound<FFrameNumber> *pTVar3;
  FMovieSceneEvaluationMetaData *pFVar4;
  FMovieSceneEvaluationGroup *pFVar5;
  code *pcVar6;
  uint uVar7;
  FMovieSceneEvaluationMetaData *pFVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  uint uVar16;
  FFrameNumber FVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  FMovieSceneEvaluationGroup *local_res18;
  FMovieSceneEvaluationMetaData *local_res20;
  FFrameNumber FStack_64;
  TRangeBound<FFrameNumber> local_60;
  TRangeBound<FFrameNumber> TStack_58;
  
  TVar2 = param_1->LowerBound;
  uVar12 = (this->Ranges).ArrayNum;
  uVar16 = 0;
  local_res18 = param_2;
  local_res20 = param_3;
  if ((int)uVar12 < 1) {
LAB_1461b6b6c:
    if ((int)uVar12 <= (int)uVar16) goto LAB_1461b6bc2;
    if (((int)uVar16 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar6 = (code *)swi(3);
      iVar10 = (*pcVar6)();
      return iVar10;
    }
    bVar9 = TRange<FFrameNumber>::Overlaps
                      ((TRange<FFrameNumber> *)
                       ((this->Ranges).AllocatorInstance.Data + (ulonglong)uVar16 * 0x10),param_1);
    if (!bVar9) goto LAB_1461b6bc2;
  }
  else {
    FStack_64 = TVar2.Value.Value;
    uVar7 = TVar2._0_4_;
    uVar18 = uVar7 & 0xff;
    do {
      iVar10 = (uVar12 >> 1) + uVar16;
      local_res10 = *(undefined8 *)((this->Ranges).AllocatorInstance.Data + (longlong)iVar10 * 0x10)
      ;
      iVar11 = (int)((ulonglong)local_res10 >> 0x20);
      FVar17.Value = FStack_64.Value;
      if (TVar2.Type.Value.Value == '\x02') {
        uVar13 = uVar7 & 0xff;
      }
      else if ((char)local_res10 == '\x02') {
LAB_1461b6b00:
        uVar13 = (uint)local_res10 & 0xff;
        FVar17.Value = iVar11;
      }
      else if (FStack_64.Value < iVar11) {
        uVar13 = uVar7 & 0xff;
      }
      else {
        if ((iVar11 < FStack_64.Value) || (uVar18 != 1)) goto LAB_1461b6b00;
        uVar13 = uVar7 & 0xff;
      }
      if (((uVar13 == uVar18) && (((char)uVar13 == '\x02' || (FVar17.Value == FStack_64.Value)))) &&
         ((uVar18 != ((uint)local_res10 & 0xff) ||
          ((TVar2.Type.Value.Value != '\x02' && (FStack_64.Value != iVar11)))))) {
        bVar9 = true;
      }
      else {
        bVar9 = false;
      }
      if (!bVar9) {
        uVar16 = iVar10 + (uVar12 & 1);
      }
      uVar13 = uVar12 >> 1;
      uVar12 = uVar12 >> 1;
    } while (uVar13 != 0);
    if (-1 < (int)uVar16) {
      uVar12 = (this->Ranges).ArrayNum;
      goto LAB_1461b6b6c;
    }
LAB_1461b6bc2:
    iVar10 = uVar16 - 1;
    if ((iVar10 < 0) || ((this->Ranges).ArrayNum <= iVar10)) goto LAB_1461b6c48;
    if ((iVar10 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar6 = (code *)swi(3);
      iVar10 = (*pcVar6)();
      return iVar10;
    }
    bVar9 = TRange<FFrameNumber>::Overlaps
                      ((TRange<FFrameNumber> *)
                       ((this->Ranges).AllocatorInstance.Data + (longlong)iVar10 * 0x10),param_1);
    if (!bVar9) goto LAB_1461b6c48;
  }
  local_res8[0] = 0;
  bVar9 = `FMovieSceneEvaluationField::Insert'::__l3::<lambda_1>::operator()(local_res8);
  if (!bVar9) {
    return -1;
  }
LAB_1461b6c48:
  local_60 = param_1->LowerBound;
  TStack_58 = param_1->UpperBound;
  pTVar3 = (TRangeBound<FFrameNumber> *)(this->Ranges).AllocatorInstance.Data;
  if (((pTVar3 <= &local_60) && (&local_60 < pTVar3 + (longlong)(this->Ranges).ArrayMax * 2)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar6 = (code *)swi(3);
    iVar10 = (*pcVar6)();
    return iVar10;
  }
  iVar10 = (this->Ranges).ArrayNum;
  piVar1 = &(this->Ranges).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,(ForAnyElementType *)this,piVar1);
  }
  pFVar14 = (this->Ranges).AllocatorInstance.Data;
  (this->Ranges).ArrayNum = iVar10 + 1;
  lVar15 = (longlong)(int)uVar16 * 0x10;
  pFVar14 = pFVar14 + lVar15;
  memmove(pFVar14 + 0x10,pFVar14,(longlong)(int)(iVar10 - uVar16) << 4);
  pFVar8 = local_res20;
  pTVar3 = (TRangeBound<FFrameNumber> *)((this->Ranges).AllocatorInstance.Data + lVar15);
  *pTVar3 = local_60;
  pTVar3[1] = TStack_58;
  pFVar4 = (FMovieSceneEvaluationMetaData *)(this->MetaData).AllocatorInstance.Data;
  if (((pFVar4 <= local_res20) && (local_res20 < pFVar4 + (this->MetaData).ArrayMax)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar6 = (code *)swi(3);
    iVar10 = (*pcVar6)();
    return iVar10;
  }
  iVar10 = (this->MetaData).ArrayNum;
  piVar1 = &(this->MetaData).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&(this->MetaData).AllocatorInstance,piVar1);
  }
  pFVar14 = (this->MetaData).AllocatorInstance.Data;
  (this->MetaData).ArrayNum = iVar10 + 1;
  lVar15 = (longlong)(int)uVar16 * 0x20;
  pFVar14 = pFVar14 + lVar15;
  memmove(pFVar14 + 0x20,pFVar14,(longlong)(int)(iVar10 - uVar16) << 5);
  pFVar14 = (this->MetaData).AllocatorInstance.Data + lVar15;
  *(undefined8 *)pFVar14 = 0;
  *(FScriptContainerElement **)pFVar14 = (pFVar8->ActiveSequences).AllocatorInstance.Data;
  (pFVar8->ActiveSequences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar14 + 8) = (pFVar8->ActiveSequences).ArrayNum;
  *(int *)(pFVar14 + 0xc) = (pFVar8->ActiveSequences).ArrayMax;
  (pFVar8->ActiveSequences).ArrayNum = 0;
  (pFVar8->ActiveSequences).ArrayMax = 0;
  *(undefined8 *)(pFVar14 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar14 + 0x10) = (pFVar8->ActiveEntities).AllocatorInstance.Data;
  (pFVar8->ActiveEntities).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar14 + 0x18) = (pFVar8->ActiveEntities).ArrayNum;
  *(int *)(pFVar14 + 0x1c) = (pFVar8->ActiveEntities).ArrayMax;
  (pFVar8->ActiveEntities).ArrayNum = 0;
  (pFVar8->ActiveEntities).ArrayMax = 0;
  pFVar5 = (FMovieSceneEvaluationGroup *)(this->Groups).AllocatorInstance.Data;
  if (((pFVar5 <= param_2) && (param_2 < pFVar5 + (this->Groups).ArrayMax)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar6 = (code *)swi(3);
    iVar10 = (*pcVar6)();
    return iVar10;
  }
  iVar10 = (this->Groups).ArrayNum;
  piVar1 = &(this->Groups).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&(this->Groups).AllocatorInstance,piVar1);
  }
  pFVar14 = (this->Groups).AllocatorInstance.Data;
  (this->Groups).ArrayNum = iVar10 + 1;
  pFVar14 = pFVar14 + (longlong)(int)uVar16 * 0x30;
  memmove(pFVar14 + 0x30,pFVar14,(longlong)(int)(iVar10 - uVar16) * 0x30);
  pFVar14 = (this->Groups).AllocatorInstance.Data + (longlong)(int)uVar16 * 0x30;
  *(undefined8 *)pFVar14 = 0;
  *(FScriptContainerElement **)pFVar14 = (param_2->LUTIndices).AllocatorInstance.Data;
  (param_2->LUTIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar14 + 8) = (param_2->LUTIndices).ArrayNum;
  *(int *)(pFVar14 + 0xc) = (param_2->LUTIndices).ArrayMax;
  (param_2->LUTIndices).ArrayNum = 0;
  (param_2->LUTIndices).ArrayMax = 0;
  *(undefined8 *)(pFVar14 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar14 + 0x10) = (param_2->TrackLUT).AllocatorInstance.Data;
  (param_2->TrackLUT).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar14 + 0x18) = (param_2->TrackLUT).ArrayNum;
  *(int *)(pFVar14 + 0x1c) = (param_2->TrackLUT).ArrayMax;
  (param_2->TrackLUT).ArrayNum = 0;
  (param_2->TrackLUT).ArrayMax = 0;
  *(undefined8 *)(pFVar14 + 0x20) = 0;
  *(FScriptContainerElement **)(pFVar14 + 0x20) = (param_2->SectionLUT).AllocatorInstance.Data;
  (param_2->SectionLUT).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar14 + 0x28) = (param_2->SectionLUT).ArrayNum;
  *(int *)(pFVar14 + 0x2c) = (param_2->SectionLUT).ArrayMax;
  (param_2->SectionLUT).ArrayNum = 0;
  (param_2->SectionLUT).ArrayMax = 0;
  return uVar16;
}

// Invalidate @ 1461b9af0

void __thiscall
FMovieSceneEvaluationField::Invalidate
          (FMovieSceneEvaluationField *this,TRange<FFrameNumber> *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  FScriptContainerElement *_Dst;
  longlong lVar7;
  TRange<int> local_18;
  
  OverlapRange(this,&local_18,param_1);
  if ((local_18.LowerBound.Type.Value != '\x02') && (local_18.UpperBound.Type.Value != '\x02')) {
    if ((local_18.LowerBound.Type.Value == '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar6 = local_18.LowerBound.Value;
    if ((local_18.UpperBound.Type.Value == '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (local_18.UpperBound.Value < iVar6) {
      return;
    }
    if ((local_18.LowerBound.Type.Value == '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar6 = local_18.LowerBound.Value;
    if ((local_18.UpperBound.Type.Value == '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (iVar6 == local_18.UpperBound.Value) {
      if (local_18.LowerBound.Type.Value == '\0') {
        return;
      }
      if (local_18.UpperBound.Type.Value == '\0') {
        return;
      }
    }
  }
  uVar4 = TRange<int>::Size<int>(&local_18);
  if ((local_18.LowerBound.Type.Value == '\x02') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar6 = local_18.LowerBound.Value;
  lVar7 = (longlong)local_18.LowerBound.Value;
  uVar5 = 0;
  if ((int)(local_18.LowerBound.Value + uVar4) <= (this->Ranges).ArrayNum) {
    uVar5 = ~(uVar4 | local_18.LowerBound.Value) >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar4 != 0) {
    _Dst = (this->Ranges).AllocatorInstance.Data + lVar7 * 0x10;
    iVar6 = ((this->Ranges).ArrayNum - iVar6) - uVar4;
    if (iVar6 != 0) {
      memmove(_Dst,_Dst + (longlong)(int)uVar4 * 0x10,(longlong)iVar6 << 4);
    }
    piVar1 = &(this->Ranges).ArrayNum;
    *piVar1 = *piVar1 - uVar4;
  }
  uVar4 = TRange<int>::Size<int>(&local_18);
  if ((local_18.LowerBound.Type.Value == '\x02') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar6 = local_18.LowerBound.Value;
  uVar5 = 0;
  if ((int)(uVar4 + local_18.LowerBound.Value) <= (this->Groups).ArrayNum) {
    uVar5 = ~(uVar4 | local_18.LowerBound.Value) >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar4 != 0) {
    TArray<FMovieSceneEvaluationGroup,TSizedDefaultAllocator<32>_>::RemoveAtImpl
              (&this->Groups,iVar6,uVar4);
  }
  uVar4 = TRange<int>::Size<int>(&local_18);
  if ((local_18.LowerBound.Type.Value == '\x02') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar5 = 0;
  if ((int)(uVar4 + local_18.LowerBound.Value) <= (this->MetaData).ArrayNum) {
    uVar5 = ~(uVar4 | local_18.LowerBound.Value) >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar4 != 0) {
    TArray<FMovieSceneEvaluationMetaData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
              (&this->MetaData,local_18.LowerBound.Value,uVar4);
  }
  return;
}

// OverlapRange @ 1461c2490

TRange<int> * __thiscall
FMovieSceneEvaluationField::OverlapRange
          (FMovieSceneEvaluationField *this,TRange<int> *__return_storage_ptr__,
          TRange<FFrameNumber> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  TRangeBound<FFrameNumber> TVar3;
  undefined8 uVar4;
  code *pcVar5;
  TRangeBound<int> TVar6;
  TRangeBound<int> TVar7;
  TRangeBound<int> TVar8;
  TRangeBound<int> TVar9;
  TRangeBound<FFrameNumber> TVar10;
  bool bVar11;
  TRange<int> *pTVar12;
  TRangeBound<int> *pTVar13;
  TEnumAsByte<ERangeBoundTypes::Type> TVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  FFrameNumber FVar20;
  uint uVar21;
  uint uVar22;
  uint local_c0;
  uint local_b8;
  uint local_b0;
  uint local_a8;
  TRangeBound<int> local_90;
  undefined1 uStack_88;
  int iStack_84;
  TRangeBound<int> local_80;
  uint local_78;
  undefined4 local_74;
  TRangeBound<FFrameNumber> local_70;
  TRangeBound<FFrameNumber> local_68;
  uint local_60;
  uint local_58;
  
  uVar16 = (this->Ranges).ArrayNum;
  if (uVar16 == 0) {
    local_b8 = local_b8 & 0xffffff00;
    local_c0 = local_c0 & 0xffffff00;
    TVar6.Value = 0;
    TVar6._0_4_ = local_c0;
    __return_storage_ptr__->LowerBound = TVar6;
    TVar7.Value = 0;
    TVar7._0_4_ = local_b8;
    __return_storage_ptr__->UpperBound = TVar7;
    return __return_storage_ptr__;
  }
  pFVar2 = (this->Ranges).AllocatorInstance.Data;
  if (((int)uVar16 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    pTVar12 = (TRange<int> *)(*pcVar5)();
    return pTVar12;
  }
  TVar3 = param_1->LowerBound;
  uVar18 = 0;
  TVar10 = local_70;
  if (0 < (int)uVar16) {
    local_70 = TVar3;
    TVar10 = local_70;
    local_70.Value = TVar3.Value.Value;
    uVar17 = TVar3._0_4_;
    uVar22 = uVar17 & 0xff;
    uVar21 = uVar16;
    do {
      iVar1 = (uVar21 >> 1) + uVar18;
      uVar4 = *(undefined8 *)(pFVar2 + (longlong)iVar1 * 0x10);
      iVar15 = (int)((ulonglong)uVar4 >> 0x20);
      FVar20.Value = local_70.Value.Value;
      if (TVar3.Type.Value.Value == '\x02') {
        uVar19 = uVar17 & 0xff;
      }
      else if ((char)uVar4 == '\x02') {
LAB_1461c25cf:
        uVar19 = (uint)uVar4 & 0xff;
        FVar20.Value = iVar15;
      }
      else if (local_70.Value.Value < iVar15) {
        uVar19 = uVar17 & 0xff;
      }
      else {
        if ((iVar15 < local_70.Value.Value) || (uVar22 != 1)) goto LAB_1461c25cf;
        uVar19 = uVar17 & 0xff;
      }
      if (((uVar19 == uVar22) &&
          (((char)uVar19 == '\x02' || (FVar20.Value == local_70.Value.Value)))) &&
         ((uVar22 != ((uint)uVar4 & 0xff) ||
          ((TVar3.Type.Value.Value != '\x02' && (local_70.Value.Value != iVar15)))))) {
        bVar11 = true;
      }
      else {
        bVar11 = false;
      }
      if (!bVar11) {
        uVar18 = iVar1 + (uVar21 & 1);
      }
      uVar19 = uVar21 >> 1;
      uVar21 = uVar21 >> 1;
    } while (uVar19 != 0);
  }
  local_70 = TVar10;
  if (0 < (int)uVar18) {
    uVar17 = uVar18 - 1;
    uVar21 = 0;
    if ((int)uVar17 < (int)uVar16) {
      uVar21 = ~uVar17 >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar11)) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TRange<int> *)(*pcVar5)();
      return pTVar12;
    }
    bVar11 = TRange<FFrameNumber>::Overlaps
                       ((TRange<FFrameNumber> *)(pFVar2 + (longlong)(int)uVar17 * 0x10),param_1);
    if (bVar11) {
      uVar18 = uVar17;
    }
  }
  if (uVar18 == uVar16) {
    local_b0 = local_b0 & 0xffffff00;
    TVar8.Value = 0;
    TVar8._0_4_ = local_b0;
    __return_storage_ptr__->LowerBound = TVar8;
    local_a8 = local_a8 & 0xffffff00;
    TVar9.Value = 0;
    TVar9._0_4_ = local_a8;
    __return_storage_ptr__->UpperBound = TVar9;
  }
  else {
    uVar16 = uVar16 - uVar18;
    if (((int)uVar18 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x15b,L"Invalid index (%lld)"), bVar11)) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TRange<int> *)(*pcVar5)();
      return pTVar12;
    }
    if (((int)uVar16 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x15c,L"Invalid count (%lld)"), bVar11)) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TRange<int> *)(*pcVar5)();
      return pTVar12;
    }
    if (((int)uVar16 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar11)) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TRange<int> *)(*pcVar5)();
      return pTVar12;
    }
    TVar3 = param_1->UpperBound;
    TVar14 = TVar3.Type.Value;
    uVar17 = uVar16;
    TVar10 = local_68;
    if ((TVar14.Value != '\x02') && (uVar17 = 0, 0 < (int)uVar16)) {
      local_68.Value = TVar3.Value.Value;
      uVar21 = TVar3._0_4_;
      uVar22 = uVar16;
      do {
        iVar1 = (uVar22 >> 1) + uVar17;
        uVar4 = *(undefined8 *)(pFVar2 + (longlong)iVar1 * 0x10 + (longlong)(int)uVar18 * 0x10 + 8);
        iVar15 = (int)((ulonglong)uVar4 >> 0x20);
        if (TVar14.Value == '\x02') {
LAB_1461c2802:
          uVar19 = (uint)uVar4 & 0xff;
          FVar20.Value = iVar15;
        }
        else {
          FVar20.Value = local_68.Value.Value;
          if ((char)uVar4 == '\x02') {
            uVar19 = uVar21 & 0xff;
          }
          else if (local_68.Value.Value < iVar15) {
            uVar19 = uVar21 & 0xff;
          }
          else {
            if ((iVar15 < local_68.Value.Value) || (TVar14.Value != '\0')) goto LAB_1461c2802;
            uVar19 = uVar21 & 0xff;
          }
        }
        if (((uVar19 == (uVar21 & 0xff)) &&
            (((char)uVar19 == '\x02' || (FVar20.Value == local_68.Value.Value)))) &&
           (((uVar21 & 0xff) != ((uint)uVar4 & 0xff) ||
            ((TVar14.Value != '\x02' && (local_68.Value.Value != iVar15)))))) {
          bVar11 = true;
        }
        else {
          bVar11 = false;
        }
        if (!bVar11) {
          uVar17 = iVar1 + (uVar22 & 1);
        }
        uVar19 = uVar22 >> 1;
        uVar22 = uVar22 >> 1;
        TVar10 = TVar3;
      } while (uVar19 != 0);
    }
    local_68 = TVar10;
    if ((int)uVar17 < (int)uVar16) {
      uVar21 = 0;
      if ((int)uVar17 < (int)uVar16) {
        uVar21 = ~uVar17 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TRange<int> *)(*pcVar5)();
        return pTVar12;
      }
      bVar11 = TRange<FFrameNumber>::Overlaps
                         ((TRange<FFrameNumber> *)
                          (pFVar2 + (longlong)(int)uVar17 * 0x10 + (longlong)(int)uVar18 * 0x10),
                          param_1);
      if (bVar11) {
        uVar17 = uVar17 + 1;
      }
    }
    if ((int)uVar17 < 1) {
      local_60 = local_60 & 0xffffff00;
      local_80._0_4_ = local_60;
      local_58 = local_58 & 0xffffff00;
      local_78 = local_58;
      pTVar13 = &local_80;
      local_80.Value = 0;
      local_74 = 0;
    }
    else {
      local_90.Type.Value = '\x01';
      iStack_84 = uVar17 + uVar18;
      pTVar13 = &local_90;
      local_90.Value = uVar18;
      uStack_88 = 0;
    }
    TVar6 = pTVar13[1];
    __return_storage_ptr__->LowerBound = *pTVar13;
    __return_storage_ptr__->UpperBound = TVar6;
  }
  return __return_storage_ptr__;
}

// operator() @ 1504e61e0

bool __thiscall `FMovieSceneEvaluationField::Add'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_5842188715597758175>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5842188715597758175>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e6260

bool __thiscall `FMovieSceneEvaluationField::Insert'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_5842188715597758193>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5842188715597758193>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

