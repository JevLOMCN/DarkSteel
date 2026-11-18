// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 7

// CopyToBuffer @ 1444f97a0

void __thiscall
Audio::FLinkwitzRileyBandSplitter::CopyToBuffer
          (FLinkwitzRileyBandSplitter *this,float *param_1,float *param_2,int param_3)

{
  memcpy(param_1,param_2,(longlong)param_3 << 2);
  return;
}

// GetQ @ 144504890

float __thiscall
Audio::FLinkwitzRileyBandSplitter::GetQ(FLinkwitzRileyBandSplitter *this,EFilterOrder param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (0 < (int)param_1) {
    fVar3 = powf(__real_41200000,
                 ((float)(int)param_1 * __real_3e19999a - __real_3e99999a) / (float)(int)param_1);
    return fVar3;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<6182374031228928263>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\LinkwitzRileyBandSplitter.cpp"
                     ,0x107,"NumFilters > 0");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    fVar3 = (float)(*pcVar1)();
    return fVar3;
  }
  return __real_3f800000;
}

// Init @ 144505cb0

void __thiscall
Audio::FLinkwitzRileyBandSplitter::Init
          (FLinkwitzRileyBandSplitter *this,int param_1,float param_2,EFilterOrder param_3,
          bool param_4,TArray<float,TSizedDefaultAllocator<32>_> *param_5)

{
  int *piVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  FVariablePoleFilter *pFVar4;
  longlong lVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float _X;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int *piVar23;
  longlong lVar24;
  TArray<Audio::FLinkwitzRileyBandFilter,TSizedDefaultAllocator<32>_> *pTVar25;
  longlong lVar26;
  TArray<Audio::FLinkwitzRileyBandSplitter::FCrossoverBandwidthPair,TSizedDefaultAllocator<32>_>
  *pTVar27;
  float fVar28;
  undefined1 local_res10 [8];
  int *local_e8;
  longlong local_e0;
  undefined4 local_d8;
  float fStack_d4;
  longlong local_d0;
  TArray<Audio::FLinkwitzRileyBandFilter,TSizedDefaultAllocator<32>_> *local_c8;
  longlong local_c0;
  
  iVar16 = param_5->ArrayNum + 1;
  this->NumChannels = param_1;
  this->NumBands = iVar16;
  if (1 < iVar16) {
    pTVar25 = &this->BandFilters;
    piVar23 = &(this->BandFilters).ArrayMax;
    this->SampleRate = param_2;
    this->FilterOrder = param_3;
    pFVar19 = (pTVar25->AllocatorInstance).Data;
    iVar14 = (this->BandFilters).ArrayNum;
    piVar1 = &(this->BandFilters).ArrayNum;
    local_e0 = 0x10;
    local_c8 = pTVar25;
    if (*piVar23 < iVar16) {
      DestructItems<Audio::FLinkwitzRileyBandFilter,int>((FLinkwitzRileyBandFilter *)pFVar19,iVar14)
      ;
      (this->BandFilters).ArrayNum = 0;
      if (*piVar23 != iVar16) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar16,&pTVar25->AllocatorInstance,0,piVar23);
      }
    }
    else {
      DestructItems<Audio::FLinkwitzRileyBandFilter,int>((FLinkwitzRileyBandFilter *)pFVar19,iVar14)
      ;
      (this->BandFilters).ArrayNum = 0;
    }
    iVar16 = this->NumBands;
    iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,iVar16,&pTVar25->AllocatorInstance,&(this->BandFilters).ArrayNum,
                        piVar23);
    DefaultConstructItems<Audio::FLinkwitzRileyBandFilter,int>
              ((pTVar25->AllocatorInstance).Data + (longlong)iVar14 * 0x10,iVar16);
    uVar20 = param_5->ArrayNum;
    pTVar27 = &this->Crossovers;
    if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
    }
    piVar23 = &(this->Crossovers).ArrayMax;
    (this->Crossovers).ArrayNum = 0;
    if ((this->Crossovers).ArrayMax < (int)uVar20) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar20,&pTVar27->AllocatorInstance,0,piVar23);
    }
    fVar12 = __real_4038aa3b;
    fVar11 = __real_3e99999a;
    fVar10 = __real_3e19999a;
    fVar9 = __real_3f000000;
    _X = __real_41200000;
    fVar8 = __real_40800000;
    fVar7 = __real_3f800000;
    fVar2 = __real_38d1b717;
    pFVar18 = (param_5->AllocatorInstance).Data;
    iVar16 = param_5->ArrayNum;
    pFVar19 = pFVar18 + (longlong)iVar16 * 4;
    while( true ) {
      if (param_5->ArrayNum != iVar16) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<float_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar18 == pFVar19) break;
      local_d8 = *(undefined4 *)pFVar18;
      if ((int)param_3 < 1) {
        bVar13 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6182374031228928263>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\LinkwitzRileyBandSplitter.cpp"
                            ,0x107,"NumFilters > 0");
        fVar28 = fVar7;
        if (bVar13) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      else {
        fVar28 = powf(_X,((float)(int)param_3 * fVar10 - fVar11) / (float)(int)param_3);
      }
      if (fVar28 <= fVar2) {
        fVar28 = fVar2;
      }
      fStack_d4 = logf(SQRT(fVar7 / (fVar28 * fVar28) + fVar8) * fVar9 + fVar9 / fVar28);
      pFVar3 = (pTVar27->AllocatorInstance).Data;
      fStack_d4 = fStack_d4 * fVar12;
      if (((pFVar3 <= (FScriptContainerElement *)&local_d8) &&
          ((FScriptContainerElement *)&local_d8 < pFVar3 + (longlong)*piVar23 * 8)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar14 = (this->Crossovers).ArrayNum;
      if (iVar14 == *piVar23) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&pTVar27->AllocatorInstance,piVar23);
      }
      (this->Crossovers).ArrayNum = iVar14 + 1;
      pFVar18 = pFVar18 + 4;
      *(ulonglong *)((pTVar27->AllocatorInstance).Data + (longlong)iVar14 * 8) =
           CONCAT44(fStack_d4,local_d8);
    }
    if ((*piVar1 < 1) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar19 = (this->BandFilters).AllocatorInstance.Data;
    iVar16 = this->NumBands;
    iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x20,8,iVar16 + -1,(ForAnyElementType *)pFVar19,(int *)(pFVar19 + 8),
                        (int *)(pFVar19 + 0xc));
    DefaultConstructItems<Audio::FVariablePoleFilter,int>
              (*(FScriptContainerElement **)&pFVar19->field_0x0 + (longlong)iVar14 * 0x20,
               iVar16 + -1);
    pTVar25 = local_c8;
    iVar16 = this->NumBands;
    uVar20 = 1;
    if (1 < iVar16) {
      lVar24 = 0x10;
      do {
        iVar16 = iVar16 - uVar20;
        uVar17 = 0;
        if ((int)uVar20 < *piVar1) {
          uVar17 = ~uVar20 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar19 = (pTVar25->AllocatorInstance).Data + lVar24;
        if (!param_4) {
          iVar14 = 2;
          if (iVar16 < 2) {
            iVar14 = iVar16;
          }
          iVar16 = 1;
          if (1 < iVar14) {
            iVar16 = iVar14;
          }
        }
        iVar14 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x20,8,iVar16,(ForAnyElementType *)pFVar19,(int *)(pFVar19 + 8),
                            (int *)(pFVar19 + 0xc));
        DefaultConstructItems<Audio::FVariablePoleFilter,int>
                  ((void *)((longlong)iVar14 * 0x20 + *(longlong *)pFVar19),iVar16);
        uVar20 = uVar20 + 1;
        lVar24 = lVar24 + 0x10;
        iVar16 = this->NumBands;
      } while ((int)uVar20 < iVar16);
    }
    pTVar27 = &this->Crossovers;
    if (((this->BandFilters).ArrayNum < 1) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar19 = (this->BandFilters).AllocatorInstance.Data;
    if ((*(int *)(pFVar19 + 8) < 1) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar4 = *(FVariablePoleFilter **)pFVar19;
    if (((this->Crossovers).ArrayNum < 1) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    fVar2 = *(float *)((pTVar27->AllocatorInstance).Data + 4);
    if (((this->Crossovers).ArrayNum < 1) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FVariablePoleFilter::Init
              (pFVar4,this->FilterOrder,this->SampleRate,this->NumChannels,
               *(float *)(pTVar27->AllocatorInstance).Data,ButterworthLowPass,fVar2,0.0);
    uVar20 = 1;
    param_5 = (TArray<float,TSizedDefaultAllocator<32>_> *)&DAT_00000008;
    while( true ) {
      pTVar25 = &this->BandFilters;
      local_e8 = &(this->BandFilters).ArrayNum;
      piVar23 = &(this->BandFilters).ArrayNum;
      if ((*piVar23 < 1) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (*(int *)((pTVar25->AllocatorInstance).Data + 8) <= (int)uVar20) break;
      if ((*piVar23 < 1) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar19 = (pTVar25->AllocatorInstance).Data;
      uVar21 = ~uVar20 >> 0x1f;
      uVar17 = 0;
      if ((int)uVar20 < *(int *)(pFVar19 + 8)) {
        uVar17 = uVar21;
      }
      if ((uVar17 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar24 = *(longlong *)pFVar19;
      uVar17 = 0;
      if ((int)uVar20 < (this->Crossovers).ArrayNum) {
        uVar17 = uVar21;
      }
      if ((uVar17 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      fVar2 = *(float *)((pTVar27->AllocatorInstance).Data + 4 +
                        (longlong)&(param_5->AllocatorInstance).Data);
      uVar17 = 0;
      if ((int)uVar20 < (this->Crossovers).ArrayNum) {
        uVar17 = uVar21;
      }
      if ((uVar17 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVariablePoleFilter::Init
                ((FVariablePoleFilter *)((longlong)(int)uVar20 * 0x20 + lVar24),this->FilterOrder,
                 this->SampleRate,this->NumChannels,
                 *(float *)((pTVar27->AllocatorInstance).Data +
                           (longlong)&(param_5->AllocatorInstance).Data),AllPass,fVar2,0.0);
      uVar20 = uVar20 + 1;
      param_5 = (TArray<float,TSizedDefaultAllocator<32>_> *)&param_5->ArrayNum;
    }
    uVar17 = this->NumBands - 1;
    uVar20 = 0;
    if ((int)uVar17 < *piVar23) {
      uVar20 = ~uVar17 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar19 = (pTVar25->AllocatorInstance).Data;
    if ((*(int *)(pFVar19 + (longlong)(int)uVar17 * 0x10 + 8) < 1) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar16 = (this->Crossovers).ArrayNum;
    pFVar4 = *(FVariablePoleFilter **)(pFVar19 + (longlong)(int)uVar17 * 0x10);
    uVar17 = iVar16 - 1;
    uVar20 = 0;
    if ((int)uVar17 < iVar16) {
      uVar20 = ~uVar17 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar16 = (this->Crossovers).ArrayNum;
    uVar21 = iVar16 - 1;
    fVar2 = *(float *)((pTVar27->AllocatorInstance).Data + (longlong)(int)uVar17 * 8 + 4);
    uVar20 = 0;
    if ((int)uVar21 < iVar16) {
      uVar20 = ~uVar21 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FVariablePoleFilter::Init
              (pFVar4,this->FilterOrder,this->SampleRate,this->NumChannels,
               *(float *)((pTVar27->AllocatorInstance).Data + (longlong)(int)uVar21 * 8),
               ButterworthHighPass,fVar2,0.0);
    if ((2 < this->NumBands) && (uVar20 = 1, 1 < this->NumBands + -1)) {
      local_d0 = 1;
      lVar24 = 0;
      do {
        uVar21 = ~uVar20 >> 0x1f;
        uVar17 = 0;
        if ((int)uVar20 < (this->BandFilters).ArrayNum) {
          uVar17 = uVar21;
        }
        if ((uVar17 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar19 = (this->BandFilters).AllocatorInstance.Data;
        if ((*(int *)(pFVar19 + local_e0 + 8) < 1) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar4 = *(FVariablePoleFilter **)(pFVar19 + local_e0);
        uVar17 = 0;
        if ((int)(uVar20 - 1) < (this->Crossovers).ArrayNum) {
          uVar17 = -uVar20 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        fVar2 = *(float *)((pTVar27->AllocatorInstance).Data + lVar24 + 4);
        uVar17 = 0;
        if ((int)(uVar20 - 1) < (this->Crossovers).ArrayNum) {
          uVar17 = -uVar20 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVariablePoleFilter::Init
                  (pFVar4,this->FilterOrder,this->SampleRate,this->NumChannels,
                   *(float *)((pTVar27->AllocatorInstance).Data + lVar24),ButterworthHighPass,fVar2,
                   0.0);
        lVar26 = local_d0;
        uVar17 = 0;
        if ((int)uVar20 < *local_e8) {
          uVar17 = uVar21;
        }
        if ((uVar17 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar19 = (this->BandFilters).AllocatorInstance.Data;
        if ((*(int *)(pFVar19 + local_e0 + 8) < 2) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar5 = *(longlong *)(pFVar19 + local_e0);
        uVar17 = 0;
        if ((int)uVar20 < (this->Crossovers).ArrayNum) {
          uVar17 = uVar21;
        }
        if ((uVar17 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_c0 = lVar24 + 8;
        fVar2 = *(float *)((pTVar27->AllocatorInstance).Data + lVar24 + 0xc);
        uVar17 = 0;
        if ((int)uVar20 < (this->Crossovers).ArrayNum) {
          uVar17 = uVar21;
        }
        if ((uVar17 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVariablePoleFilter::Init
                  ((FVariablePoleFilter *)(lVar5 + 0x20),this->FilterOrder,this->SampleRate,
                   this->NumChannels,*(float *)((pTVar27->AllocatorInstance).Data + local_c0),
                   ButterworthLowPass,fVar2,0.0);
        lVar24 = lVar24 + 0x10;
        uVar17 = 2;
        while( true ) {
          uVar15 = 0;
          if ((int)uVar20 < *local_e8) {
            uVar15 = uVar21;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (*(int *)((this->BandFilters).AllocatorInstance.Data + local_e0 + 8) <= (int)uVar17)
          break;
          uVar15 = 0;
          if ((int)uVar20 < *local_e8) {
            uVar15 = uVar21;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar19 = (local_c8->AllocatorInstance).Data;
          uVar15 = 0;
          if ((int)uVar17 < *(int *)(pFVar19 + local_e0 + 8)) {
            uVar15 = ~uVar17 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar26 = *(longlong *)(pFVar19 + local_e0);
          iVar16 = (uVar20 - 1) + uVar17;
          uVar22 = ~((uVar20 - 1) + uVar17) >> 0x1f;
          uVar15 = 0;
          if (iVar16 < (this->Crossovers).ArrayNum) {
            uVar15 = uVar22;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          fVar2 = *(float *)((pTVar27->AllocatorInstance).Data + lVar24 + 4);
          uVar15 = 0;
          if (iVar16 < (this->Crossovers).ArrayNum) {
            uVar15 = uVar22;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FVariablePoleFilter::Init
                    ((FVariablePoleFilter *)((longlong)(int)uVar17 * 0x20 + lVar26),
                     this->FilterOrder,this->SampleRate,this->NumChannels,
                     *(float *)((pTVar27->AllocatorInstance).Data + lVar24),AllPass,fVar2,0.0);
          uVar17 = uVar17 + 1;
          lVar24 = lVar24 + 8;
          lVar26 = local_d0;
        }
        local_d0 = lVar26 + 1;
        local_e0 = local_e0 + 0x10;
        uVar20 = uVar20 + 1;
        lVar24 = local_c0;
      } while ((int)uVar20 < this->NumBands + -1);
    }
  }
  return;
}

// InvertBuffer @ 144508f70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Audio::FLinkwitzRileyBandSplitter::InvertBuffer
          (FLinkwitzRileyBandSplitter *this,float *param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  float *pfVar7;
  uint uVar8;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar9;
  
  uVar5 = _UNK_15065157c;
  uVar4 = _UNK_150651578;
  uVar3 = _UNK_150651574;
  uVar2 = __xmm_80000000800000008000000080000000;
  uVar9 = 0;
  uVar8 = 0;
  if ((0 < param_2) && (1 < (uint)param_2)) {
    if (0xf < (uint)param_2) {
      pfVar7 = param_1 + 8;
      uVar11 = uVar9;
      do {
        uVar8 = (int)uVar9 + 0x10;
        uVar9 = (ulonglong)uVar8;
        uVar11 = uVar11 + 0x10;
        pfVar7[-8] = (float)((uint)pfVar7[-8] ^ uVar2);
        pfVar7[-7] = (float)((uint)pfVar7[-7] ^ uVar3);
        pfVar7[-6] = (float)((uint)pfVar7[-6] ^ uVar4);
        pfVar7[-5] = (float)((uint)pfVar7[-5] ^ uVar5);
        pfVar7[-4] = (float)((uint)pfVar7[-4] ^ uVar2);
        pfVar7[-3] = (float)((uint)pfVar7[-3] ^ uVar3);
        pfVar7[-2] = (float)((uint)pfVar7[-2] ^ uVar4);
        pfVar7[-1] = (float)((uint)pfVar7[-1] ^ uVar5);
        *pfVar7 = (float)((uint)*pfVar7 ^ uVar2);
        pfVar7[1] = (float)((uint)pfVar7[1] ^ uVar3);
        pfVar7[2] = (float)((uint)pfVar7[2] ^ uVar4);
        pfVar7[3] = (float)((uint)pfVar7[3] ^ uVar5);
        pfVar7[4] = (float)((uint)pfVar7[4] ^ uVar2);
        pfVar7[5] = (float)((uint)pfVar7[5] ^ uVar3);
        pfVar7[6] = (float)((uint)pfVar7[6] ^ uVar4);
        pfVar7[7] = (float)((uint)pfVar7[7] ^ uVar5);
        pfVar7 = pfVar7 + 0x10;
      } while ((longlong)uVar11 < (longlong)((longlong)param_2 & 0xfffffffffffffff0U));
      if (((byte)param_2 & 0xf) < 2) goto LAB_144509019;
    }
    lVar6 = (longlong)(int)uVar9;
    do {
      uVar8 = (int)uVar9 + 2;
      uVar9 = (ulonglong)uVar8;
      *(ulonglong *)(param_1 + lVar6) =
           CONCAT44((uint)((ulonglong)*(undefined8 *)(param_1 + lVar6) >> 0x20) ^ uVar3,
                    (uint)*(undefined8 *)(param_1 + lVar6) ^ uVar2);
      lVar6 = lVar6 + 2;
    } while (lVar6 < (longlong)((longlong)param_2 & 0xfffffffffffffffeU));
  }
LAB_144509019:
  uVar5 = _UNK_15065157c;
  uVar4 = _UNK_150651578;
  uVar3 = _UNK_150651574;
  uVar2 = __xmm_80000000800000008000000080000000;
  lVar6 = (longlong)(int)uVar8;
  lVar12 = (longlong)param_2;
  if (lVar6 < lVar12) {
    if (3 < lVar12 - lVar6) {
      lVar1 = lVar6 + 2;
      lVar10 = ((lVar12 - lVar6) - 4U >> 2) + 1;
      lVar6 = lVar6 + lVar10 * 4;
      pfVar7 = param_1 + lVar1;
      do {
        pfVar7[-2] = (float)((uint)pfVar7[-2] ^ uVar2);
        pfVar7[-1] = (float)((uint)pfVar7[-1] ^ uVar3);
        *pfVar7 = (float)((uint)*pfVar7 ^ uVar4);
        pfVar7[1] = (float)((uint)pfVar7[1] ^ uVar5);
        lVar10 = lVar10 + -1;
        pfVar7 = pfVar7 + 4;
      } while (lVar10 != 0);
      if (lVar12 <= lVar6) {
        return;
      }
    }
    do {
      param_1[lVar6] = (float)((uint)param_1[lVar6] ^ uVar2);
      lVar6 = lVar6 + 1;
    } while (lVar6 < lVar12);
  }
  return;
}

// ProcessAudioBuffer @ 144510920

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Audio::FLinkwitzRileyBandSplitter::ProcessAudioBuffer
          (FLinkwitzRileyBandSplitter *this,float *param_1,FMultibandBuffer *param_2,int param_3)

{
  FScriptContainerElement *_Dst;
  FScriptContainerElement *_Dst_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  float *_Dst_01;
  uint uVar6;
  EFilterOrder EVar7;
  int iVar8;
  uint uVar9;
  size_t _Size;
  longlong lVar10;
  undefined4 uStack_5c;
  TArrayView<float,int> local_58 [2];
  
  if ((param_2->NumBands < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutBuffer.NumBands > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\LinkwitzRileyBandSplitter.cpp"
                         ,0x8b,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_2->NumSamples < param_3 * this->NumChannels) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutBuffer.NumSamples >= NumFrames * NumChannels",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\LinkwitzRileyBandSplitter.cpp"
                         ,0x8c,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar8 = param_3 * this->NumChannels;
  _Size = (longlong)iVar8 << 2;
  if (this->NumBands < 2) {
    _Dst_01 = FMultibandBuffer::operator[](param_2,0);
    memcpy(_Dst_01,param_1,_Size);
    return;
  }
  TArray<float,TAlignedHeapAllocator<16>_>::SetNumZeroed(&this->SharedAlignedBuffer,iVar8,No);
  TArray<float,TAlignedHeapAllocator<16>_>::SetNumUninitialized(&this->BandAlignedBuffer,iVar8,No);
  _Dst = (this->SharedAlignedBuffer).AllocatorInstance.Data;
  _Dst_00 = (this->BandAlignedBuffer).AllocatorInstance.Data;
  memcpy(_Dst,param_1,_Size);
  fVar3 = __real_bf800000;
  EVar7 = 0;
  if (0 < this->NumBands) {
    lVar10 = 0;
    do {
      uVar6 = 0;
      if (0 < (int)EVar7) {
        uVar6 = 0;
        if ((int)EVar7 < (this->BandFilters).ArrayNum) {
          uVar6 = ~EVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (this->BandFilters).AllocatorInstance.Data;
        if ((*(int *)(pFVar1 + lVar10 + 8) < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVariablePoleFilter::ProcessAudioBuffer
                  (*(FVariablePoleFilter **)(pFVar1 + lVar10),(float *)_Dst,(float *)_Dst,param_3);
        uVar6 = 1;
      }
      memcpy(_Dst_00,_Dst,_Size);
      uVar9 = ~EVar7 >> 0x1f;
      while( true ) {
        uVar5 = 0;
        if ((int)EVar7 < (this->BandFilters).ArrayNum) {
          uVar5 = uVar9;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (*(int *)((this->BandFilters).AllocatorInstance.Data + lVar10 + 8) <= (int)uVar6) break;
        uVar5 = 0;
        if ((int)EVar7 < (this->BandFilters).ArrayNum) {
          uVar5 = uVar9;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (this->BandFilters).AllocatorInstance.Data;
        uVar5 = 0;
        if ((int)uVar6 < *(int *)(pFVar1 + lVar10 + 8)) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVariablePoleFilter::ProcessAudioBuffer
                  ((FVariablePoleFilter *)
                   ((longlong)(int)uVar6 * 0x20 + *(longlong *)(pFVar1 + lVar10)),(float *)_Dst_00,
                   (float *)_Dst_00,param_3);
        uVar6 = uVar6 + 1;
      }
      if ((this->FilterOrder & EVar7 & TwoPole) != 0) {
        if ((iVar8 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_58[0]._12_4_ = uStack_5c;
        local_58[0].ArrayNum = iVar8;
        local_58[0].DataPtr = (float *)_Dst_00;
        ArrayMultiplyByConstantInPlace(local_58,fVar3);
      }
      uVar9 = EVar7 * param_2->NumSamples;
      uVar6 = 0;
      if ((int)uVar9 < (param_2->Buffer).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      memcpy((param_2->Buffer).AllocatorInstance.Data + (longlong)(int)uVar9 * 4,_Dst_00,_Size);
      EVar7 = EVar7 + TwoPole;
      lVar10 = lVar10 + 0x10;
    } while ((int)EVar7 < this->NumBands);
  }
  return;
}

// ProcessAudioFrame @ 1445112f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Audio::FLinkwitzRileyBandSplitter::ProcessAudioFrame
          (FLinkwitzRileyBandSplitter *this,float *param_1,FMultibandBuffer *param_2)

{
  uint uVar1;
  int iVar2;
  FScriptContainerElement *_Dst;
  FScriptContainerElement *_Dst_00;
  code *pcVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  float *_Dst_01;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  EFilterOrder EVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  
  uVar1 = this->NumChannels;
  if (this->NumBands < 2) {
    _Dst_01 = FMultibandBuffer::operator[](param_2,0);
    memcpy(_Dst_01,param_1,(longlong)(int)uVar1 << 2);
    return;
  }
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  (this->SharedBuffer).ArrayNum = 0;
  if ((this->SharedBuffer).ArrayMax < (int)uVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar1,&(this->SharedBuffer).AllocatorInstance,0,&(this->SharedBuffer).ArrayMax);
  }
  TArray<float,TSizedDefaultAllocator<32>_>::AddZeroed(&this->SharedBuffer,this->NumChannels);
  _Dst = (this->SharedBuffer).AllocatorInstance.Data;
  memcpy(_Dst,param_1,(longlong)this->NumChannels << 2);
  uVar1 = this->NumChannels;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  (this->BandWorkBuffer).ArrayNum = 0;
  if ((this->BandWorkBuffer).ArrayMax < (int)uVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar1,&(this->BandWorkBuffer).AllocatorInstance,0,
               &(this->BandWorkBuffer).ArrayMax);
  }
  TArray<float,TSizedDefaultAllocator<32>_>::AddZeroed(&this->BandWorkBuffer,this->NumChannels);
  uVar7 = _UNK_15065157c;
  uVar6 = _UNK_150651578;
  uVar5 = _UNK_150651574;
  uVar1 = __xmm_80000000800000008000000080000000;
  _Dst_00 = (this->BandWorkBuffer).AllocatorInstance.Data;
  EVar14 = 0;
  if (0 < this->NumBands) {
    lVar16 = 0;
    do {
      uVar13 = 0;
      if (0 < (int)EVar14) {
        uVar13 = 0;
        if ((int)EVar14 < (this->BandFilters).ArrayNum) {
          uVar13 = ~EVar14 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar10 = (this->BandFilters).AllocatorInstance.Data;
        if ((*(int *)(pFVar10 + lVar16 + 8) < 1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVariablePoleFilter::ProcessAudioFrame
                  (*(FVariablePoleFilter **)(pFVar10 + lVar16),(float *)_Dst,(float *)_Dst);
        uVar13 = 1;
      }
      memcpy(_Dst_00,_Dst,(longlong)this->NumChannels << 2);
      uVar17 = ~EVar14 >> 0x1f;
      while( true ) {
        uVar9 = 0;
        if ((int)EVar14 < (this->BandFilters).ArrayNum) {
          uVar9 = uVar17;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(int *)((this->BandFilters).AllocatorInstance.Data + lVar16 + 8) <= (int)uVar13) break;
        uVar9 = 0;
        if ((int)EVar14 < (this->BandFilters).ArrayNum) {
          uVar9 = uVar17;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar10 = (this->BandFilters).AllocatorInstance.Data;
        uVar9 = 0;
        if ((int)uVar13 < *(int *)(pFVar10 + lVar16 + 8)) {
          uVar9 = ~uVar13 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVariablePoleFilter::ProcessAudioFrame
                  ((FVariablePoleFilter *)
                   ((longlong)(int)uVar13 * 0x20 + *(longlong *)(pFVar10 + lVar16)),(float *)_Dst_00
                   ,(float *)_Dst_00);
        uVar13 = uVar13 + 1;
      }
      if ((this->FilterOrder & EVar14 & TwoPole) != 0) {
        uVar13 = this->NumChannels;
        lVar15 = (longlong)(int)uVar13;
        lVar11 = 0;
        if ((0 < (int)uVar13) && (1 < uVar13)) {
          if (0xf < uVar13) {
            uVar17 = uVar13 & 0x8000000f;
            if ((int)uVar17 < 0) {
              uVar17 = (uVar17 - 1 | 0xfffffff0) + 1;
            }
            pFVar10 = _Dst_00 + 0x20;
            do {
              lVar11 = lVar11 + 0x10;
              *(uint *)(pFVar10 + -0x20) = (uint)*(float *)(pFVar10 + -0x20) ^ uVar1;
              *(uint *)(pFVar10 + -0x1c) = (uint)*(float *)(pFVar10 + -0x1c) ^ uVar5;
              *(uint *)(pFVar10 + -0x18) = (uint)*(float *)(pFVar10 + -0x18) ^ uVar6;
              *(uint *)(pFVar10 + -0x14) = (uint)*(float *)(pFVar10 + -0x14) ^ uVar7;
              *(uint *)(pFVar10 + -0x10) = (uint)*(float *)(pFVar10 + -0x10) ^ uVar1;
              *(uint *)(pFVar10 + -0xc) = (uint)*(float *)(pFVar10 + -0xc) ^ uVar5;
              *(uint *)(pFVar10 + -8) = (uint)*(float *)(pFVar10 + -8) ^ uVar6;
              *(uint *)(pFVar10 + -4) = (uint)*(float *)(pFVar10 + -4) ^ uVar7;
              *(uint *)pFVar10 = (uint)*(float *)pFVar10 ^ uVar1;
              *(uint *)(pFVar10 + 4) = (uint)*(float *)(pFVar10 + 4) ^ uVar5;
              *(uint *)(pFVar10 + 8) = (uint)*(float *)(pFVar10 + 8) ^ uVar6;
              *(uint *)(pFVar10 + 0xc) = (uint)*(float *)(pFVar10 + 0xc) ^ uVar7;
              *(uint *)(pFVar10 + 0x10) = (uint)*(float *)(pFVar10 + 0x10) ^ uVar1;
              *(uint *)(pFVar10 + 0x14) = (uint)*(float *)(pFVar10 + 0x14) ^ uVar5;
              *(uint *)(pFVar10 + 0x18) = (uint)*(float *)(pFVar10 + 0x18) ^ uVar6;
              *(uint *)(pFVar10 + 0x1c) = (uint)*(float *)(pFVar10 + 0x1c) ^ uVar7;
              pFVar10 = pFVar10 + 0x40;
            } while (lVar11 < (int)(uVar13 - uVar17));
            if (((byte)uVar13 & 0xf) < 2) goto LAB_1445116a6;
          }
          uVar17 = uVar13 & 0x80000001;
          if ((int)uVar17 < 0) {
            uVar17 = (uVar17 - 1 | 0xfffffffe) + 1;
          }
          do {
            *(ulonglong *)(_Dst_00 + lVar11 * 4) =
                 CONCAT44((uint)((ulonglong)*(undefined8 *)(_Dst_00 + lVar11 * 4) >> 0x20) ^ uVar5,
                          (uint)*(undefined8 *)(_Dst_00 + lVar11 * 4) ^ uVar1);
            lVar11 = lVar11 + 2;
          } while (lVar11 < (int)(uVar13 - uVar17));
        }
LAB_1445116a6:
        if (lVar11 < lVar15) {
          if (3 < lVar15 - lVar11) {
            lVar4 = lVar11 + 2;
            lVar12 = ((lVar15 - lVar11) - 4U >> 2) + 1;
            lVar11 = lVar11 + lVar12 * 4;
            pFVar10 = _Dst_00 + lVar4 * 4;
            do {
              *(uint *)(pFVar10 + -8) = *(uint *)(pFVar10 + -8) ^ uVar1;
              *(uint *)(pFVar10 + -4) = *(uint *)(pFVar10 + -4) ^ uVar5;
              *(uint *)pFVar10 = *(uint *)pFVar10 ^ uVar6;
              *(uint *)(pFVar10 + 4) = *(uint *)(pFVar10 + 4) ^ uVar7;
              lVar12 = lVar12 + -1;
              pFVar10 = pFVar10 + 0x10;
            } while (lVar12 != 0);
            if (lVar15 <= lVar11) goto LAB_144511715;
          }
          do {
            *(uint *)(_Dst_00 + lVar11 * 4) = *(uint *)(_Dst_00 + lVar11 * 4) ^ uVar1;
            lVar11 = lVar11 + 1;
          } while (lVar11 < lVar15);
        }
      }
LAB_144511715:
      iVar2 = this->NumChannels;
      uVar17 = EVar14 * param_2->NumSamples;
      uVar13 = 0;
      if ((int)uVar17 < (param_2->Buffer).ArrayNum) {
        uVar13 = ~uVar17 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      memcpy((param_2->Buffer).AllocatorInstance.Data + (longlong)(int)uVar17 * 4,_Dst_00,
             (longlong)iVar2 << 2);
      EVar14 = EVar14 + TwoPole;
      lVar16 = lVar16 + 0x10;
    } while ((int)EVar14 < this->NumBands);
  }
  return;
}

// SetCrossovers @ 144518ff0

void __thiscall
Audio::FLinkwitzRileyBandSplitter::SetCrossovers
          (FLinkwitzRileyBandSplitter *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FVariablePoleFilter *pFVar5;
  longlong lVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float _X;
  float fVar12;
  float fVar13;
  float fVar14;
  bool bVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  longlong lVar24;
  longlong lVar25;
  float fVar26;
  undefined1 local_res8 [8];
  uint local_res10;
  longlong local_res18;
  longlong local_res20;
  undefined4 local_e8;
  float fStack_e4;
  ulonglong local_e0;
  
  uVar18 = param_1->ArrayNum;
  if (uVar18 == (this->Crossovers).ArrayNum) {
    if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
    }
    piVar1 = &(this->Crossovers).ArrayMax;
    (this->Crossovers).ArrayNum = 0;
    if (*piVar1 < (int)uVar18) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar18,&(this->Crossovers).AllocatorInstance,0,piVar1);
    }
    fVar14 = __real_4038aa3b;
    fVar13 = __real_40c00000;
    fVar12 = __real_3f000000;
    _X = __real_41200000;
    fVar11 = __real_40800000;
    fVar10 = __real_40400000;
    fVar9 = __real_3f800000;
    fVar8 = __real_3d4ccccd;
    fVar2 = __real_38d1b717;
    pFVar20 = (param_1->AllocatorInstance).Data;
    iVar21 = param_1->ArrayNum;
    pFVar4 = pFVar20 + (longlong)iVar21 * 4;
    while( true ) {
      if (param_1->ArrayNum != iVar21) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<float_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar20 == pFVar4) break;
      local_e8 = *(undefined4 *)pFVar20;
      if ((int)this->FilterOrder < 1) {
        bVar15 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6182374031228928263>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\LinkwitzRileyBandSplitter.cpp"
                            ,0x107,"NumFilters > 0");
        fVar26 = fVar9;
        if (bVar15) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      else {
        fVar26 = (float)(int)this->FilterOrder;
        fVar26 = powf(_X,((fVar26 * fVar10 - fVar13) / fVar26) * fVar8);
      }
      if (fVar26 <= fVar2) {
        fVar26 = fVar2;
      }
      fStack_e4 = logf(SQRT(fVar9 / (fVar26 * fVar26) + fVar11) * fVar12 + fVar12 / fVar26);
      pFVar3 = (this->Crossovers).AllocatorInstance.Data;
      fStack_e4 = fStack_e4 * fVar14;
      if (((pFVar3 <= (FScriptContainerElement *)&local_e8) &&
          ((FScriptContainerElement *)&local_e8 < pFVar3 + (longlong)*piVar1 * 8)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar16 = (this->Crossovers).ArrayNum;
      if (iVar16 == *piVar1) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&(this->Crossovers).AllocatorInstance,piVar1);
      }
      (this->Crossovers).ArrayNum = iVar16 + 1;
      pFVar20 = pFVar20 + 4;
      *(ulonglong *)((this->Crossovers).AllocatorInstance.Data + (longlong)iVar16 * 8) =
           CONCAT44(fStack_e4,local_e8);
    }
    if (((this->BandFilters).ArrayNum < 1) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar4 = (this->BandFilters).AllocatorInstance.Data;
    if ((*(int *)(pFVar4 + 8) < 1) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar5 = *(FVariablePoleFilter **)pFVar4;
    if (((this->Crossovers).ArrayNum < 1) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    fVar2 = *(float *)((this->Crossovers).AllocatorInstance.Data + 4);
    if (((this->Crossovers).ArrayNum < 1) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FVariablePoleFilter::SetParams
              (pFVar5,ButterworthLowPass,*(float *)(this->Crossovers).AllocatorInstance.Data,fVar2,
               0.0);
    uVar18 = 1;
    lVar24 = 8;
    while( true ) {
      uVar17 = 0;
      if (((this->BandFilters).ArrayNum < 1) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (*(int *)((this->BandFilters).AllocatorInstance.Data + 8) <= (int)uVar18) break;
      if (((this->BandFilters).ArrayNum < 1) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar4 = (this->BandFilters).AllocatorInstance.Data;
      uVar22 = ~uVar18 >> 0x1f;
      if ((int)uVar18 < *(int *)(pFVar4 + 8)) {
        uVar17 = (ulonglong)uVar22;
      }
      if (((int)uVar17 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar25 = *(longlong *)pFVar4;
      uVar19 = 0;
      if ((int)uVar18 < (this->Crossovers).ArrayNum) {
        uVar19 = uVar22;
      }
      if ((uVar19 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      fVar2 = *(float *)((this->Crossovers).AllocatorInstance.Data + lVar24 + 4);
      uVar19 = 0;
      if ((int)uVar18 < (this->Crossovers).ArrayNum) {
        uVar19 = uVar22;
      }
      if ((uVar19 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVariablePoleFilter::SetParams
                ((FVariablePoleFilter *)((longlong)(int)uVar18 * 0x20 + lVar25),AllPass,
                 *(float *)((this->Crossovers).AllocatorInstance.Data + lVar24),fVar2,0.0);
      uVar18 = uVar18 + 1;
      lVar24 = lVar24 + 8;
    }
    uVar19 = this->NumBands - 1;
    uVar22 = 0;
    uVar18 = uVar22;
    if ((int)uVar19 < (this->BandFilters).ArrayNum) {
      uVar18 = ~uVar19 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar4 = (this->BandFilters).AllocatorInstance.Data;
    if ((*(int *)(pFVar4 + (longlong)(int)uVar19 * 0x10 + 8) < 1) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar21 = (this->Crossovers).ArrayNum;
    pFVar5 = *(FVariablePoleFilter **)(pFVar4 + (longlong)(int)uVar19 * 0x10);
    uVar19 = iVar21 - 1;
    uVar18 = uVar22;
    if ((int)uVar19 < iVar21) {
      uVar18 = ~uVar19 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar21 = (this->Crossovers).ArrayNum;
    uVar18 = iVar21 - 1;
    fVar2 = *(float *)((this->Crossovers).AllocatorInstance.Data + (longlong)(int)uVar19 * 8 + 4);
    if ((int)uVar18 < iVar21) {
      uVar22 = ~uVar18 >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FVariablePoleFilter::SetParams
              (pFVar5,ButterworthHighPass,
               *(float *)((this->Crossovers).AllocatorInstance.Data + (longlong)(int)uVar18 * 8),
               fVar2,0.0);
    if ((2 < this->NumBands) && (uVar18 = 1, 1 < this->NumBands + -1)) {
      local_res18 = 1;
      lVar24 = 0x10;
      do {
        uVar22 = ~uVar18 >> 0x1f;
        uVar19 = 0;
        if ((int)uVar18 < (this->BandFilters).ArrayNum) {
          uVar19 = uVar22;
        }
        local_res10 = uVar22;
        if ((uVar19 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar4 = (this->BandFilters).AllocatorInstance.Data;
        if ((*(int *)(pFVar4 + lVar24 + 8) < 1) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar5 = *(FVariablePoleFilter **)(pFVar4 + lVar24);
        uVar19 = 0;
        if ((int)(uVar18 - 1) < (this->Crossovers).ArrayNum) {
          uVar19 = -uVar18 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        fVar2 = *(float *)((this->Crossovers).AllocatorInstance.Data + uVar17 + 4);
        uVar19 = 0;
        if ((int)(uVar18 - 1) < (this->Crossovers).ArrayNum) {
          uVar19 = -uVar18 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVariablePoleFilter::SetParams
                  (pFVar5,ButterworthHighPass,
                   *(float *)((this->Crossovers).AllocatorInstance.Data + uVar17),fVar2,0.0);
        lVar25 = local_res18;
        uVar19 = 0;
        if ((int)uVar18 < (this->BandFilters).ArrayNum) {
          uVar19 = uVar22;
        }
        if ((uVar19 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar4 = (this->BandFilters).AllocatorInstance.Data;
        if ((*(int *)(pFVar4 + lVar24 + 8) < 2) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar6 = *(longlong *)(pFVar4 + lVar24);
        uVar19 = 0;
        if ((int)uVar18 < (this->Crossovers).ArrayNum) {
          uVar19 = uVar22;
        }
        if ((uVar19 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_e0 = uVar17 + 8;
        fVar2 = *(float *)((this->Crossovers).AllocatorInstance.Data + uVar17 + 0xc);
        uVar19 = 0;
        if ((int)uVar18 < (this->Crossovers).ArrayNum) {
          uVar19 = uVar22;
        }
        if ((uVar19 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVariablePoleFilter::SetParams
                  ((FVariablePoleFilter *)(lVar6 + 0x20),ButterworthLowPass,
                   *(float *)((this->Crossovers).AllocatorInstance.Data + local_e0),fVar2,0.0);
        local_res20 = uVar17 + 0x10;
        uVar19 = 2;
        while( true ) {
          uVar23 = 0;
          if ((int)uVar18 < (this->BandFilters).ArrayNum) {
            uVar23 = uVar22;
          }
          if ((uVar23 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (*(int *)((this->BandFilters).AllocatorInstance.Data + lVar24 + 8) <= (int)uVar19)
          break;
          uVar23 = 0;
          if ((int)uVar18 < (this->BandFilters).ArrayNum) {
            uVar23 = uVar22;
          }
          if ((uVar23 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar4 = (this->BandFilters).AllocatorInstance.Data;
          uVar22 = 0;
          if ((int)uVar19 < *(int *)(pFVar4 + lVar24 + 8)) {
            uVar22 = ~uVar19 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar21 = (uVar18 - 1) + uVar19;
          lVar25 = *(longlong *)(pFVar4 + lVar24);
          uVar23 = ~((uVar18 - 1) + uVar19) >> 0x1f;
          uVar22 = 0;
          if (iVar21 < (this->Crossovers).ArrayNum) {
            uVar22 = uVar23;
          }
          if ((uVar22 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          fVar2 = *(float *)((this->Crossovers).AllocatorInstance.Data + local_res20 + 4);
          uVar22 = 0;
          if (iVar21 < (this->Crossovers).ArrayNum) {
            uVar22 = uVar23;
          }
          if ((uVar22 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar6 = local_res20;
          FVariablePoleFilter::SetParams
                    ((FVariablePoleFilter *)((longlong)(int)uVar19 * 0x20 + lVar25),AllPass,
                     *(float *)((this->Crossovers).AllocatorInstance.Data + local_res20),fVar2,0.0);
          uVar19 = uVar19 + 1;
          local_res20 = lVar6 + 8;
          lVar25 = local_res18;
          uVar22 = local_res10;
        }
        local_res18 = lVar25 + 1;
        uVar18 = uVar18 + 1;
        lVar24 = lVar24 + 0x10;
        uVar17 = local_e0;
      } while ((int)uVar18 < this->NumBands + -1);
    }
  }
  return;
}

