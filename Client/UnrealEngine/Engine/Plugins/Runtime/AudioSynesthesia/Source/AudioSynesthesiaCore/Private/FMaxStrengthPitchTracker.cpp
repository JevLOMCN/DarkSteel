// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesiaCore
// Functions: 5

// FMaxStrengthPitchTracker @ 14d7f7950

/* WARNING: Enum "Type": Some values do not have unique names */

FMaxStrengthPitchTracker * __thiscall
Audio::FMaxStrengthPitchTracker::FMaxStrengthPitchTracker
          (FMaxStrengthPitchTracker *this,FMaxStrengthPitchTrackerSettings *param_1,
          TUniquePtr<Audio::IPitchDetector,TDefaultDelete<Audio::IPitchDetector>_> param_2)

{
  IPitchDetector IVar1;
  
  this->_padding_ = (longlong)&___7FMaxStrengthPitchTracker_Audio__6B_;
  this->Settings = *param_1;
  (this->PitchDetector).Ptr = (IPitchDetector *)*param_2.Ptr;
  *param_2.Ptr = (IPitchDetector)0x0;
  (this->Observations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Observations).ArrayNum = 0;
  (this->Observations).ArrayMax = 0;
  if ((2 < (byte)LogAudioSynesthesiaCore._0_1_) &&
     ((this->PitchDetector).Ptr == (IPitchDetector *)0x0)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioSynesthesiaCore);
  }
  IVar1 = *param_2.Ptr;
  if (IVar1 != (IPitchDetector)0x0) {
    (*(code *)**(undefined8 **)IVar1)(IVar1,1);
  }
  return this;
}

// ~FMaxStrengthPitchTracker @ 14d7f9580

void __thiscall
Audio::FMaxStrengthPitchTracker::~FMaxStrengthPitchTracker(FMaxStrengthPitchTracker *this)

{
  FScriptContainerElement *pFVar1;
  IPitchDetector *pIVar2;
  
  this->_padding_ = (longlong)&___7FMaxStrengthPitchTracker_Audio__6B_;
  pFVar1 = (this->Observations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->PitchDetector).Ptr;
  if (pIVar2 != (IPitchDetector *)0x0) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  this->_padding_ = (longlong)&___7IPitchTracker_Audio__6B_;
  return;
}

// operator() @ 14d7f9da0

void __thiscall
`Audio::FMaxStrengthPitchTracker::Finalize'::__l2::<lambda_3>::operator()
          (void *this,float param_1,TArrayView<Audio::FPitchInfo_const_,int> *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  FPitchInfo *pFVar8;
  FPitchInfo *pFVar9;
  FPitchInfo *pFVar10;
  
  pFVar8 = param_2->DataPtr;
  pFVar10 = (FPitchInfo *)0x0;
  pFVar9 = pFVar8 + param_2->ArrayNum;
  if (pFVar8 != pFVar9) {
    do {
      if ((pFVar10 == (FPitchInfo *)0x0) ||
         (pFVar10->Strength <= pFVar8->Strength && pFVar8->Strength != pFVar10->Strength)) {
        pFVar10 = pFVar8;
      }
      pFVar8 = pFVar8 + 1;
    } while (pFVar8 != pFVar9);
    if (pFVar10 != (FPitchInfo *)0x0) {
      pFVar2 = *(ForAnyElementType **)this;
      if (((FPitchInfo *)pFVar2->Data <= pFVar10) &&
         (pFVar10 < (FPitchInfo *)pFVar2->Data + *(int *)((longlong)&pFVar2[1].Data + 4))) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar7 = *(int *)&pFVar2[1].Data;
      piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,pFVar2,piVar1);
      }
      *(int *)&pFVar2[1].Data = iVar7 + 1;
      dVar5 = pFVar10->Timestamp;
      pFVar3 = pFVar2->Data;
      *(undefined8 *)(pFVar3 + (longlong)iVar7 * 0x10) = *(undefined8 *)pFVar10;
      *(double *)(pFVar3 + (longlong)iVar7 * 0x10 + 8) = dVar5;
    }
  }
  return;
}

// Finalize @ 14d805900

void __thiscall
Audio::FMaxStrengthPitchTracker::Finalize
          (FMaxStrengthPitchTracker *this,
          TArray<Audio::FPitchTrackInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  float *pfVar1;
  IPitchDetector *pIVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  float fVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  ForAnyElementType FVar16;
  FScriptContainerElement *pFVar17;
  float fVar18;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res18 [8];
  <lambda_2> local_res20 [8];
  <lambda_3> local_b8;
  ForAnyElementType local_b0;
  undefined8 local_a8;
  TArray<Audio::FPitchInfo,TSizedDefaultAllocator<32>_> local_a0;
  FPitchInfo *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  TArrayView<Audio::FPitchInfo_const_,int> local_78 [4];
  
  pIVar2 = (this->PitchDetector).Ptr;
  if (pIVar2 != (IPitchDetector *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2,&this->Observations);
  }
  AlgoImpl::
  IntroSortInternal<Audio::FPitchInfo,int,FIdentityFunctor,TDereferenceWrapper<Audio::FPitchInfo,_Audio::FMaxStrengthPitchTracker::Finalize_::__l2::<lambda_1>_>_>
            ((FPitchInfo *)(this->Observations).AllocatorInstance.Data,(this->Observations).ArrayNum
             ,local_res8[0],(<lambda_1> *)local_res18);
  local_88 = (FPitchInfo *)(this->Observations).AllocatorInstance.Data;
  iStack_80 = (this->Observations).ArrayNum;
  local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.ArrayNum = 0;
  local_a0.ArrayMax = 0;
  if (iStack_80 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_b8.MaxObservations = &local_a0;
  local_78[0]._12_4_ = uStack_7c;
  local_78[0].ArrayNum = iStack_80;
  local_78[0].DataPtr = local_88;
  MaxStrengthPitchTrackIntrinsics::
  GroupBy<Audio::FPitchInfo,_Audio::FMaxStrengthPitchTracker::Finalize_::__l2::<lambda_2>,_Audio::FMaxStrengthPitchTracker::Finalize_::__l2::<lambda_3>_>
            (local_78,local_res20,&local_b8);
  uVar8 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar7 = __real_3f800000;
  iVar14 = local_a0.ArrayNum;
  pFVar17 = local_a0.AllocatorInstance.Data + (longlong)local_a0.ArrayNum * 0x10;
  local_b0.Data = (FScriptContainerElement *)0x0;
  local_a8 = 0;
  FVar16.Data = local_a0.AllocatorInstance.Data;
  iVar12 = 0;
  do {
    if (local_a0.ArrayNum != iVar14) {
      local_res8[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<Audio::FPitchInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
      iVar12 = (int)local_a8;
    }
    if (FVar16.Data == pFVar17) {
      if (0 < iVar12) {
        pFVar17 = (param_1->AllocatorInstance).Data;
        if ((pFVar17 <= (FScriptContainerElement *)&local_b0) &&
           ((FScriptContainerElement *)&local_b0 < pFVar17 + (longlong)param_1->ArrayMax * 0x10)) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        iVar14 = param_1->ArrayNum;
        if (iVar14 == param_1->ArrayMax) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        lVar15 = (longlong)iVar14;
        param_1->ArrayNum = iVar14 + 1;
        pFVar17 = (param_1->AllocatorInstance).Data;
        *(undefined8 *)(pFVar17 + lVar15 * 0x10) = 0;
        *(FScriptContainerElement **)(pFVar17 + lVar15 * 0x10) = local_b0.Data;
        local_b0.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar17 + lVar15 * 0x10 + 8) = (int)local_a8;
        *(int *)(pFVar17 + lVar15 * 0x10 + 0xc) = local_a8._4_4_;
        local_a8 = 0;
      }
      (this->Observations).ArrayNum = 0;
      if ((this->Observations).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&(this->Observations).AllocatorInstance,0,&(this->Observations).ArrayMax
                  );
      }
      if (local_b0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data);
      }
      if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.AllocatorInstance.Data);
      }
      return;
    }
    fVar18 = (this->Settings).MinimumStrength;
    bVar9 = fVar18 != *(float *)(FVar16.Data + 4);
    bVar4 = *(float *)(FVar16.Data + 4) <= fVar18;
    if (iVar12 < 1) {
LAB_14d805b86:
      if (!bVar4 || !bVar9) goto LAB_14d805b8f;
    }
    else {
      if (bVar4 && bVar9) {
LAB_14d805ac8:
        pFVar3 = (param_1->AllocatorInstance).Data;
        if ((pFVar3 <= (FScriptContainerElement *)&local_b0) &&
           ((FScriptContainerElement *)&local_b0 < pFVar3 + (longlong)param_1->ArrayMax * 0x10)) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar10) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        iVar12 = param_1->ArrayNum;
        if (iVar12 == param_1->ArrayMax) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        lVar15 = (longlong)iVar12;
        param_1->ArrayNum = iVar12 + 1;
        pFVar3 = (param_1->AllocatorInstance).Data;
        *(undefined8 *)(pFVar3 + lVar15 * 0x10) = 0;
        *(FScriptContainerElement **)(pFVar3 + lVar15 * 0x10) = local_b0.Data;
        local_b0.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar3 + lVar15 * 0x10 + 8) = (int)local_a8;
        *(int *)(pFVar3 + lVar15 * 0x10 + 0xc) = local_a8._4_4_;
        local_a8 = 0;
        iVar12 = 0;
        goto LAB_14d805b86;
      }
      uVar11 = 0;
      if ((int)(iVar12 - 1U) < iVar12) {
        uVar11 = ~(iVar12 - 1U) >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar12 = (int)local_a8;
      }
      if ((*(float *)(local_b0.Data + (longlong)iVar12 * 0x10 + -0x10) == 0.0) ||
         (fVar18 = (float)((uint)(fVar7 - *(float *)FVar16.Data /
                                          *(float *)(local_b0.Data + (longlong)iVar12 * 0x10 + -0x10
                                                    )) & uVar8),
         pfVar1 = &(this->Settings).MaximumFrequencyRatioDeviation,
         *pfVar1 <= fVar18 && fVar18 != *pfVar1)) goto LAB_14d805ac8;
LAB_14d805b8f:
      iVar13 = iVar12;
      if ((local_b0.Data <= FVar16.Data) &&
         (FVar16.Data < local_b0.Data + (longlong)local_a8._4_4_ * 0x10)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar13 = (int)local_a8;
      }
      if (iVar13 == local_a8._4_4_) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_b0,(int *)((longlong)&local_a8 + 4));
      }
      iVar12 = iVar13 + 1;
      local_a8 = CONCAT44(local_a8._4_4_,iVar12);
      uVar6 = *(undefined8 *)(FVar16.Data + 8);
      *(undefined8 *)(local_b0.Data + (longlong)iVar13 * 0x10) = *(undefined8 *)FVar16.Data;
      *(undefined8 *)(local_b0.Data + (longlong)iVar13 * 0x10 + 8) = uVar6;
    }
    FVar16.Data = FVar16.Data + 0x10;
  } while( true );
}

// TrackPitches @ 14d80af30

void __thiscall
Audio::FMaxStrengthPitchTracker::TrackPitches
          (FMaxStrengthPitchTracker *this,TArray<float,TAlignedHeapAllocator<16>_> *param_1,
          TArray<Audio::FPitchTrackInfo,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<Audio::FPitchInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  IPitchDetector *pIVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  ForAnyElementType local_18;
  ulonglong local_10;
  
  pIVar2 = (this->PitchDetector).Ptr;
  if (pIVar2 != (IPitchDetector *)0x0) {
    local_18.Data = (FScriptContainerElement *)0x0;
    local_10 = 0;
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,param_1,&local_18);
    pTVar1 = &this->Observations;
    if (pTVar1 == (TArray<Audio::FPitchInfo,TSizedDefaultAllocator<32>_> *)&local_18) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x986,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    lVar6 = (longlong)(int)local_10;
    if ((int)local_10 != 0) {
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,(int)local_10,&pTVar1->AllocatorInstance,
                         &(this->Observations).ArrayNum,&(this->Observations).ArrayMax);
      memmove((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 0x10,local_18.Data,lVar6 << 4);
      local_10 = local_10 & 0xffffffff00000000;
    }
    if (local_18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data);
    }
  }
  return;
}

