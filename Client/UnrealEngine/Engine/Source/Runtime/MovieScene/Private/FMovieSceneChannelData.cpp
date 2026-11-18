// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 17

// FMovieSceneChannelData @ 146093300

FMovieSceneChannelData * __thiscall
FMovieSceneChannelData::FMovieSceneChannelData
          (FMovieSceneChannelData *this,FMovieSceneChannel *param_1,
          TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *param_2,FKeyHandleLookupTable *param_3)

{
  this->Times = param_2;
  this->KeyHandles = param_3;
  this->OwningChannel = param_1;
  return this;
}

// FMovieSceneChannelData @ 146093320

FMovieSceneChannelData * __thiscall
FMovieSceneChannelData::FMovieSceneChannelData
          (FMovieSceneChannelData *this,TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *param_1,
          FKeyHandleLookupTable *param_2,FMovieSceneChannel *param_3)

{
  this->Times = param_1;
  this->KeyHandles = param_2;
  this->OwningChannel = param_3;
  return this;
}

// AddKeyInternal @ 1460a6df0

int __thiscall
FMovieSceneChannelData::AddKeyInternal(FMovieSceneChannelData *this,FFrameNumber param_1)

{
  int iVar1;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *this_00;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 local_res8 [8];
  FFrameNumber local_res10 [2];
  
  iVar3 = 0;
  this_00 = this->Times;
  uVar4 = this_00->ArrayNum;
  if (0 < this_00->ArrayNum) {
    do {
      iVar1 = (uVar4 >> 1) + iVar3;
      if (*(int *)((this_00->AllocatorInstance).Data + (longlong)iVar1 * 4) <= param_1.Value) {
        iVar3 = iVar1 + (uVar4 & 1);
      }
      uVar2 = uVar4 >> 1;
      uVar4 = uVar4 >> 1;
    } while (uVar2 != 0);
  }
  local_res10[0].Value = param_1.Value;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::Insert(this_00,local_res10,iVar3);
  if (this->KeyHandles != (FKeyHandleLookupTable *)0x0) {
    FKeyHandleLookupTable::AllocateHandle(this->KeyHandles,(int)local_res8);
  }
  return iVar3;
}

// ChangeFrameResolution @ 1460b15d0

void __thiscall
FMovieSceneChannelData::ChangeFrameResolution
          (FMovieSceneChannelData *this,FFrameRate param_1,FFrameRate param_2)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *pTVar11;
  longlong lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  float fStack_7c;
  
  fVar2 = __real_3f000000;
  pTVar11 = this->Times;
  uVar9 = 0;
  if (0 < pTVar11->ArrayNum) {
    lVar12 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar9 < pTVar11->ArrayNum) {
        uVar4 = ~uVar9 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar10 = *(int *)((pTVar11->AllocatorInstance).Data + lVar12);
      iVar8 = param_1.Numerator;
      if ((iVar8 == param_2.Numerator) && (param_1.Denominator == param_2.Denominator)) {
        fStack_7c = 0.0;
      }
      else {
        if ((iVar8 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("SourceRate.Numerator != 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\FrameRate.h"
                               ,0x113,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        lVar6 = (longlong)param_2.Numerator * (longlong)param_1.Denominator;
        lVar7 = (longlong)iVar8 * (longlong)param_2.Denominator;
        auVar13._0_8_ = (double)lVar6;
        auVar13._8_8_ = 0;
        lVar5 = (iVar10 * lVar6) / lVar7;
        dVar15 = (((double)lVar6 * (double)iVar10) / (double)lVar7 - (double)lVar5) +
                 (auVar13._0_8_ * 0.0) / (double)lVar7;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = dVar15;
        auVar14 = roundpd(auVar13,auVar14,1);
        fStack_7c = (float)(dVar15 - auVar14._0_8_);
        lVar5 = lVar5 + (longlong)auVar14._0_8_;
        if ((0.0 < fStack_7c) && (::FFrameTime::MaxSubframe <= fStack_7c)) {
          fStack_7c = ::FFrameTime::MaxSubframe;
        }
        if (::FFrameTime::MaxSubframe <= fStack_7c) {
          fStack_7c = ::FFrameTime::MaxSubframe;
        }
        lVar6 = 0x7fffffff;
        if (lVar5 < 0x7fffffff) {
          lVar6 = lVar5;
        }
        if (fStack_7c <= 0.0) {
          fStack_7c = 0.0;
        }
        iVar10 = -0x80000000;
        if (-0x80000000 < lVar6) {
          iVar10 = (int)lVar6;
        }
      }
      if (fVar2 <= fStack_7c) {
        iVar10 = iVar10 + 1;
      }
      pTVar11 = this->Times;
      uVar4 = 0;
      if ((int)uVar9 < pTVar11->ArrayNum) {
        uVar4 = ~uVar9 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar9 = uVar9 + 1;
      *(int *)((pTVar11->AllocatorInstance).Data + lVar12) = iVar10;
      lVar12 = lVar12 + 4;
      pTVar11 = this->Times;
    } while ((int)uVar9 < pTVar11->ArrayNum);
  }
  return;
}

// FindKey @ 1460c5430

int __thiscall
FMovieSceneChannelData::FindKey
          (FMovieSceneChannelData *this,FFrameNumber param_1,FFrameNumber param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint local_res8 [2];
  int local_res20 [2];
  undefined4 uStack_3c;
  TArrayView<FFrameNumber_const_,int> local_38;
  
  local_res8[0] = 0;
  local_res20[0] = 0;
  pFVar1 = (this->Times->AllocatorInstance).Data;
  iVar6 = this->Times->ArrayNum;
  if ((iVar6 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  local_38._12_4_ = uStack_3c;
  local_38.ArrayNum = iVar6;
  local_38.DataPtr = (FFrameNumber *)pFVar1;
  UE::MovieScene::FindRange(&local_38,param_1,param_2,1,(int *)local_res8,local_res20);
  uVar4 = local_res8[0];
  lVar8 = (longlong)(int)local_res8[0];
  if (-1 < (int)local_res8[0]) {
    pTVar2 = this->Times;
    iVar6 = pTVar2->ArrayNum;
    if ((int)local_res8[0] < iVar6) {
      uVar7 = 0;
      if ((int)local_res8[0] < iVar6) {
        uVar7 = ~local_res8[0] >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      iVar6 = *(int *)((pTVar2->AllocatorInstance).Data + lVar8 * 4) - param_1.Value;
      if (iVar6 < 0) {
        iVar6 = -iVar6;
      }
      if (iVar6 <= param_2.Value) {
        return uVar4;
      }
    }
  }
  return -1;
}

// FindKeys @ 1460c5560

void __thiscall
FMovieSceneChannelData::FindKeys
          (FMovieSceneChannelData *this,FFrameNumber param_1,int param_2,int *param_3,int *param_4,
          int param_5)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uStack_1c;
  TArrayView<FFrameNumber_const_,int> local_18;
  
  pFVar2 = (this->Times->AllocatorInstance).Data;
  iVar1 = this->Times->ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar1;
  local_18.DataPtr = (FFrameNumber *)pFVar2;
  UE::MovieScene::FindRange(&local_18,param_1,(FFrameNumber)param_5,param_2,param_3,param_4);
  return;
}

// GetHandle @ 1460ca870

FKeyHandle __thiscall FMovieSceneChannelData::GetHandle(FMovieSceneChannelData *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FKeyHandle FVar4;
  undefined4 extraout_var;
  FKeyHandle *pFVar5;
  undefined4 in_register_00000014;
  int in_R8D;
  undefined1 local_res8 [8];
  FKeyHandle local_res10 [2];
  undefined1 local_res18 [16];
  
  if ((in_R8D < 0) || (this->Times->ArrayNum <= in_R8D)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times->IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Channels\\MovieSceneChannelData.cpp"
                       ,0x69,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (FKeyHandle)uVar3;
    }
  }
  if (this->KeyHandles == (FKeyHandleLookupTable *)0x0) {
    `FMovieSceneChannelData::GetHandle'::__l2::<lambda_1>::operator()(local_res18);
  }
  if (this->KeyHandles != (FKeyHandleLookupTable *)0x0) {
    FVar4 = FKeyHandleLookupTable::FindOrAddKeyHandle(this->KeyHandles,(int)local_res8);
    *(uint *)CONCAT44(in_register_00000014,param_1) = *(uint *)CONCAT44(extraout_var,FVar4.Index);
    return (FKeyHandle)param_1;
  }
  pFVar5 = FKeyHandle::FKeyHandle(local_res10);
  *(uint *)CONCAT44(in_register_00000014,param_1) = pFVar5->Index;
  return (FKeyHandle)param_1;
}

// GetIndex @ 1460ca9a0

int __thiscall FMovieSceneChannelData::GetIndex(FMovieSceneChannelData *this,FKeyHandle param_1)

{
  int iVar1;
  undefined1 local_res8 [8];
  
  if (this->KeyHandles == (FKeyHandleLookupTable *)0x0) {
    `FMovieSceneChannelData::GetIndex'::__l2::<lambda_1>::operator()(local_res8);
  }
  if (this->KeyHandles != (FKeyHandleLookupTable *)0x0) {
    iVar1 = FKeyHandleLookupTable::GetIndex(this->KeyHandles,param_1);
    return iVar1;
  }
  return -1;
}

// GetKeyTimes @ 1460cd440

void __thiscall
FMovieSceneChannelData::GetKeyTimes
          (FMovieSceneChannelData *this,TArrayView<FKeyHandle_const_,int> *param_1,
          TArrayView<FFrameNumber,int> *param_2)

{
  FKeyHandle FVar1;
  undefined4 uVar2;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 local_res10 [8];
  
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InHandles.Num() == OutKeyTimes.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Channels\\MovieSceneChannelData.cpp"
                         ,0xf7,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = param_1->ArrayNum;
  uVar8 = 0;
  if (0 < iVar6) {
    lVar9 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar8 < iVar6) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar1.Index = *(uint *)((longlong)&param_1->DataPtr->Index + lVar9);
      if (this->KeyHandles == (FKeyHandleLookupTable *)0x0) {
        local_res10[0] = 0;
        `FMovieSceneChannelData::GetIndex'::__l2::<lambda_1>::operator()(local_res10);
      }
      if (this->KeyHandles != (FKeyHandleLookupTable *)0x0) {
        iVar6 = FKeyHandleLookupTable::GetIndex(this->KeyHandles,FVar1);
        if ((-1 < iVar6) && (pTVar3 = this->Times, iVar6 < pTVar3->ArrayNum)) {
          if ((iVar6 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar2 = *(undefined4 *)((pTVar3->AllocatorInstance).Data + (longlong)iVar6 * 4);
          uVar7 = 0;
          if ((int)uVar8 < param_2->ArrayNum) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          *(undefined4 *)((longlong)&param_2->DataPtr->Value + lVar9) = uVar2;
        }
      }
      iVar6 = param_1->ArrayNum;
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 4;
    } while ((int)uVar8 < iVar6);
  }
  return;
}

// GetKeys @ 1460cd700

void __thiscall
FMovieSceneChannelData::GetKeys
          (FMovieSceneChannelData *this,TRange<FFrameNumber> *param_1,
          TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FKeyHandle,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  FKeyHandle FVar8;
  undefined4 extraout_var;
  FKeyHandle *pFVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined1 local_38 [4];
  uint local_34;
  undefined1 local_30 [4];
  FKeyHandle local_2c;
  
  pTVar3 = this->Times;
  uVar13 = pTVar3->ArrayNum;
  if (uVar13 != 0) {
    uVar14 = 0;
    uVar10 = uVar14;
    if (((param_1->LowerBound).Type.Value != '\x02') && (uVar10 = 0, 0 < (int)uVar13)) {
      do {
        iVar12 = (uVar13 >> 1) + uVar14;
        if (*(int *)((pTVar3->AllocatorInstance).Data + (longlong)iVar12 * 4) <
            (param_1->LowerBound).Value.Value) {
          uVar14 = iVar12 + (uVar13 & 1);
        }
        uVar5 = uVar13 >> 1;
        uVar13 = uVar13 >> 1;
        uVar10 = uVar14;
      } while (uVar5 != 0);
    }
    if ((param_1->UpperBound).Type.Value == '\x02') {
      iVar12 = pTVar3->ArrayNum;
    }
    else {
      uVar13 = pTVar3->ArrayNum;
      iVar12 = 0;
      if (0 < (int)uVar13) {
        do {
          iVar11 = (uVar13 >> 1) + iVar12;
          if (*(int *)((pTVar3->AllocatorInstance).Data + (longlong)iVar11 * 4) <=
              (param_1->UpperBound).Value.Value) {
            iVar12 = iVar11 + (uVar13 & 1);
          }
          uVar14 = uVar13 >> 1;
          uVar13 = uVar13 >> 1;
        } while (uVar14 != 0);
      }
    }
    iVar11 = iVar12 - uVar10;
    if (0 < iVar11) {
      if (param_2 != (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) {
        uVar13 = param_2->ArrayNum + iVar11;
        if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
        }
        if (param_2->ArrayMax < (int)uVar13) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar13,&param_2->AllocatorInstance,param_2->ArrayNum,&param_2->ArrayMax);
        }
        pTVar3 = this->Times;
        uVar13 = 0;
        if ((int)uVar10 < pTVar3->ArrayNum) {
          uVar13 = ~uVar10 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar2 = (pTVar3->AllocatorInstance).Data + (longlong)(int)uVar10 * 4;
        if ((pFVar2 == (FScriptContainerElement *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ptr != nullptr || Count == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x9c1,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,iVar11,&param_2->AllocatorInstance,&param_2->ArrayNum,
                           &param_2->ArrayMax);
        memcpy((param_2->AllocatorInstance).Data + (longlong)iVar7 * 4,pFVar2,(longlong)iVar11 << 2)
        ;
      }
      if (param_3 != (TArray<FKeyHandle,TSizedDefaultAllocator<32>_> *)0x0) {
        uVar13 = param_3->ArrayNum + iVar11;
        if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
        }
        piVar1 = &param_3->ArrayMax;
        if (param_3->ArrayMax < (int)uVar13) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar13,&param_3->AllocatorInstance,param_3->ArrayNum,piVar1);
        }
        for (; (int)uVar10 < iVar12; uVar10 = uVar10 + 1) {
          if ((((int)uVar10 < 0) || (this->Times->ArrayNum <= (int)uVar10)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Times->IsValidIndex(Index)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Channels\\MovieSceneChannelData.cpp"
                                 ,0x69,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (this->KeyHandles == (FKeyHandleLookupTable *)0x0) {
            local_38[0] = 0;
            `FMovieSceneChannelData::GetHandle'::__l2::<lambda_1>::operator()(local_38);
          }
          if (this->KeyHandles == (FKeyHandleLookupTable *)0x0) {
            pFVar9 = FKeyHandle::FKeyHandle(&local_2c);
          }
          else {
            FVar8 = FKeyHandleLookupTable::FindOrAddKeyHandle(this->KeyHandles,(int)local_30);
            pFVar9 = (FKeyHandle *)CONCAT44(extraout_var,FVar8.Index);
          }
          local_34 = pFVar9->Index;
          pFVar2 = (param_3->AllocatorInstance).Data;
          if (((pFVar2 <= (FScriptContainerElement *)&local_34) &&
              ((FScriptContainerElement *)&local_34 < pFVar2 + (longlong)*piVar1 * 4)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar11 = param_3->ArrayNum;
          if (iVar11 == *piVar1) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&param_3->AllocatorInstance,piVar1);
          }
          param_3->ArrayNum = iVar11 + 1;
          *(uint *)((param_3->AllocatorInstance).Data + (longlong)iVar11 * 4) = local_34;
        }
      }
    }
  }
  return;
}

// GetTotalRange @ 1460d0e40

TRange<FFrameNumber> * __thiscall
FMovieSceneChannelData::GetTotalRange
          (FMovieSceneChannelData *this,TRange<FFrameNumber> *__return_storage_ptr__)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *pTVar5;
  code *pcVar6;
  TRangeBound<FFrameNumber> TVar7;
  bool bVar8;
  TRange<FFrameNumber> *pTVar9;
  TRangeBound<FFrameNumber> *pTVar10;
  uint uVar11;
  uint uVar12;
  undefined4 local_res8;
  undefined1 local_resc;
  undefined2 uStackX_d;
  undefined1 uStackX_f;
  uint local_res10;
  uint local_res18;
  undefined3 uStackX_21;
  undefined1 local_res24;
  undefined2 uStackX_25;
  undefined1 uStackX_27;
  TRangeBound<FFrameNumber> local_48;
  undefined4 uStack_40;
  undefined1 uStack_3c;
  undefined2 uStack_3b;
  undefined1 uStack_39;
  TRangeBound<FFrameNumber> local_38;
  uint local_30;
  undefined1 local_2c;
  undefined2 local_2b;
  undefined1 local_29;
  
  pTVar4 = this->Times;
  iVar1 = pTVar4->ArrayNum;
  if (iVar1 == 0) {
    local_res10 = local_res10 & 0xffffff00;
    local_38._0_4_ = local_res10;
    local_38.Value.Value._1_2_ = 0;
    local_38.Value.Value._3_1_ = 0;
    local_res18 = local_res18 & 0xffffff00;
    local_30 = local_res18;
    local_2b = 0;
    local_29 = 0;
    pTVar10 = &local_38;
    local_38.Value.Value._0_1_ = 0;
    local_2c = 0;
  }
  else {
    uVar12 = iVar1 - 1;
    uVar11 = 0;
    if ((int)uVar12 < iVar1) {
      uVar11 = ~uVar12 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        pTVar9 = (TRange<FFrameNumber> *)(*pcVar6)();
        return pTVar9;
      }
    }
    pTVar5 = this->Times;
    local_res8 = CONCAT31(local_res8._1_3_,1);
    uVar2 = *(undefined4 *)((pTVar4->AllocatorInstance).Data + (longlong)(int)uVar12 * 4);
    if (pTVar5->ArrayNum < 1) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        pTVar9 = (TRange<FFrameNumber> *)(*pcVar6)();
        return pTVar9;
      }
    }
    local_48.Type.Value = '\x01';
    uVar3 = *(undefined4 *)(pTVar5->AllocatorInstance).Data;
    local_res24 = (undefined1)uVar3;
    uStackX_25 = (undefined2)((uint)uVar3 >> 8);
    uStackX_27 = (undefined1)((uint)uVar3 >> 0x18);
    local_48._1_4_ = _uStackX_21;
    local_48.Value.Value._1_2_ = uStackX_25;
    local_48.Value.Value._3_1_ = uStackX_27;
    uStack_40 = local_res8;
    local_resc = (undefined1)uVar2;
    uStack_3c = local_resc;
    uStackX_d = (undefined2)((uint)uVar2 >> 8);
    uStack_3b = uStackX_d;
    uStackX_f = (undefined1)((uint)uVar2 >> 0x18);
    uStack_39 = uStackX_f;
    pTVar10 = &local_48;
  }
  TVar7 = pTVar10[1];
  __return_storage_ptr__->LowerBound = *pTVar10;
  __return_storage_ptr__->UpperBound = TVar7;
  return __return_storage_ptr__;
}

// MoveKeyInternal @ 1460d9f20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
FMovieSceneChannelData::MoveKeyInternal
          (FMovieSceneChannelData *this,int param_1,FFrameNumber param_2)

{
  undefined4 uVar1;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  FFrameNumber FVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  FFrameNumber local_res18 [2];
  TArray<FKeyMoveEventItem,TSizedDefaultAllocator<32>_> local_58;
  TArray<FKeyMoveEventItem,TSizedDefaultAllocator<32>_> local_48;
  int local_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  int local_28;
  undefined4 uStack_24;
  int iStack_20;
  int iStack_1c;
  
  local_res18[0].Value = param_2.Value;
  if (((param_1 < 0) || (this->Times->ArrayNum <= param_1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times->IsValidIndex(KeyIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Channels\\MovieSceneChannelData.cpp"
                         ,0x9f,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  pTVar2 = this->Times;
  iVar6 = 0;
  uVar8 = 0;
  if (param_1 < pTVar2->ArrayNum) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  uVar8 = this->Times->ArrayNum;
  uVar1 = *(undefined4 *)((pTVar2->AllocatorInstance).Data + (longlong)param_1 * 4);
  iVar7 = 0;
  if (0 < (int)uVar8) {
    do {
      uVar9 = uVar8 >> 1;
      iVar6 = iVar7;
      if (*(int *)((this->Times->AllocatorInstance).Data + (longlong)(int)(uVar9 + iVar7) * 4) <
          local_res18[0].Value) {
        iVar6 = uVar9 + iVar7 + (uVar8 & 1);
      }
      uVar8 = uVar9;
      iVar7 = iVar6;
    } while (uVar9 != 0);
  }
  if (param_1 <= iVar6) {
    if (iVar6 <= param_1 + 1) {
      if ((this->OwningChannel != (FMovieSceneChannel *)0x0) &&
         (bVar5 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                             &this->OwningChannel->KeyMovedEvent), bVar5)) {
        iStack_2c = local_res18[0].Value;
        local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_58.ArrayNum = 0;
        local_58.ArrayMax = 0;
        local_38 = param_1;
        uStack_34 = uVar1;
        iStack_30 = param_1;
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x410,&local_58.AllocatorInstance,&local_58.ArrayMax);
        local_58.ArrayNum = iVar6 + 1;
        *(ulonglong *)(local_58.AllocatorInstance.Data + (longlong)iVar6 * 0x10) =
             CONCAT44(uStack_34,local_38);
        *(ulonglong *)(local_58.AllocatorInstance.Data + (longlong)iVar6 * 0x10 + 8) =
             CONCAT44(iStack_2c,iStack_30);
        TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyMoveEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
        ::Broadcast(&this->OwningChannel->KeyMovedEvent,this->OwningChannel,&local_58);
        if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.AllocatorInstance.Data);
        }
      }
      FVar4.Value = local_res18[0].Value;
      pTVar2 = this->Times;
      uVar8 = 0;
      if (param_1 < pTVar2->ArrayNum) {
        uVar8 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      *(int *)((pTVar2->AllocatorInstance).Data + (longlong)param_1 * 4) = FVar4.Value;
      return param_1;
    }
    if (param_1 < iVar6) {
      iVar6 = iVar6 + -1;
    }
  }
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::RemoveAt(this->Times,param_1,No);
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::Insert(this->Times,local_res18,iVar6);
  if (this->KeyHandles != (FKeyHandleLookupTable *)0x0) {
    FKeyHandleLookupTable::MoveHandle(this->KeyHandles,param_1,iVar6);
  }
  if ((this->OwningChannel != (FMovieSceneChannel *)0x0) &&
     (bVar5 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &this->OwningChannel->KeyMovedEvent), bVar5)) {
    iStack_1c = local_res18[0].Value;
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    local_28 = param_1;
    uStack_24 = uVar1;
    iStack_20 = iVar6;
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&local_48.AllocatorInstance,&local_48.ArrayMax);
    local_48.ArrayNum = iVar7 + 1;
    *(ulonglong *)(local_48.AllocatorInstance.Data + (longlong)iVar7 * 0x10) =
         CONCAT44(uStack_24,local_28);
    *(ulonglong *)(local_48.AllocatorInstance.Data + (longlong)iVar7 * 0x10 + 8) =
         CONCAT44(iStack_1c,iStack_20);
    TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyMoveEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
    ::Broadcast(&this->OwningChannel->KeyMovedEvent,this->OwningChannel,&local_48);
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  return iVar6;
}

// Offset @ 1460da910

void __thiscall FMovieSceneChannelData::Offset(FMovieSceneChannelData *this,FFrameNumber param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 local_res8 [8];
  TArray<FKeyMoveEventItem,TSizedDefaultAllocator<32>_> local_48;
  uint local_38;
  int iStack_34;
  uint uStack_30;
  int iStack_2c;
  
  if ((this->OwningChannel == (FMovieSceneChannel *)0x0) ||
     (bVar4 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &this->OwningChannel->KeyMovedEvent), !bVar4)) {
    pTVar7 = this->Times;
    pFVar8 = (pTVar7->AllocatorInstance).Data;
    iVar2 = pTVar7->ArrayNum;
    pFVar1 = pFVar8 + (longlong)iVar2 * 4;
    while( true ) {
      if (pTVar7->ArrayNum != iVar2) {
        `TCheckedPointerIterator<FFrameNumber,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar8 == pFVar1) break;
      *(int *)pFVar8 = *(int *)pFVar8 + param_1.Value;
      pFVar8 = pFVar8 + 4;
    }
  }
  else {
    pTVar7 = this->Times;
    uVar9 = 0;
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    if (0 < pTVar7->ArrayNum) {
      lVar10 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar9 < pTVar7->ArrayNum) {
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
        iStack_34 = *(int *)((pTVar7->AllocatorInstance).Data + lVar10);
        iVar2 = iStack_34 + param_1.Value;
        local_38 = uVar9;
        uStack_30 = uVar9;
        iStack_2c = iVar2;
        if (((local_48.AllocatorInstance.Data <= (FScriptContainerElement *)&local_38) &&
            ((FScriptContainerElement *)&local_38 <
             local_48.AllocatorInstance.Data + (longlong)local_48.ArrayMax * 0x10)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (local_48.ArrayNum == local_48.ArrayMax) {
          local_48.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x410,&local_48.AllocatorInstance,&local_48.ArrayMax);
        }
        lVar6 = (longlong)local_48.ArrayNum;
        local_48.ArrayNum = local_48.ArrayNum + 1;
        *(ulonglong *)(local_48.AllocatorInstance.Data + lVar6 * 0x10) =
             CONCAT44(iStack_34,local_38);
        *(ulonglong *)(local_48.AllocatorInstance.Data + lVar6 * 0x10 + 8) =
             CONCAT44(iStack_2c,uStack_30);
        pTVar7 = this->Times;
        uVar5 = 0;
        if ((int)uVar9 < pTVar7->ArrayNum) {
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
        uVar9 = uVar9 + 1;
        *(int *)((pTVar7->AllocatorInstance).Data + lVar10) = iVar2;
        lVar10 = lVar10 + 4;
        pTVar7 = this->Times;
      } while ((int)uVar9 < pTVar7->ArrayNum);
    }
    TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyMoveEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
    ::Broadcast(&this->OwningChannel->KeyMovedEvent,this->OwningChannel,&local_48);
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  return;
}

// ReplaceKeyHandlesInternal @ 1460e8770

void __thiscall
FMovieSceneChannelData::ReplaceKeyHandlesInternal
          (FMovieSceneChannelData *this,TArrayView<int_const_,int> *param_1,
          TArrayView<FKeyHandle_const_,int> *param_2)

{
  int iVar1;
  FKeyHandle FVar2;
  FKeyHandleLookupTable *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 local_res20 [8];
  
  if (this->KeyHandles == (FKeyHandleLookupTable *)0x0) {
    local_res20[0] = 0;
    bVar4 = `FMovieSceneChannelData::ReplaceKeyHandlesInternal'::__l3::<lambda_1>::operator()
                      (local_res20);
    if (!bVar4) {
      return;
    }
  }
  iVar1 = param_2->ArrayNum;
  if (param_1->ArrayNum == iVar1) {
    uVar6 = 0;
    if (0 < param_1->ArrayNum) {
      lVar7 = 0;
      do {
        this_00 = this->KeyHandles;
        uVar5 = 0;
        if ((int)uVar6 < iVar1) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar5 = 0;
        if ((int)uVar6 < param_1->ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        FVar2.Index = *(uint *)((longlong)&param_2->DataPtr->Index + lVar7);
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FKeyHandleLookupTable::ReplaceHandle
                  (this_00,*(int *)(lVar7 + (longlong)param_1->DataPtr),FVar2);
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 4;
      } while ((int)uVar6 < param_1->ArrayNum);
    }
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3699716010236969108>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Channels\\MovieSceneChannelData.cpp"
                       ,0x94,"KeyIndices.Num() == NewHandles.Num()");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// operator() @ 1504e2a00

bool __thiscall `FMovieSceneChannelData::GetHandle'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3699716010236969066>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3699716010236969066>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e2a40

bool __thiscall `FMovieSceneChannelData::GetIndex'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3699716010236969072>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3699716010236969072>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e2b00

bool __thiscall
`FMovieSceneChannelData::ReplaceKeyHandlesInternal'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3699716010236969107>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3699716010236969107>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

