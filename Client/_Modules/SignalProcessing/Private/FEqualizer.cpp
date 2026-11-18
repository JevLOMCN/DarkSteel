// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 9

// FEqualizer @ 1444a4210

FEqualizer * __thiscall Audio::FEqualizer::FEqualizer(FEqualizer *this)

{
  this->NumChannels = 0;
  (this->FilterBands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilterBands).ArrayNum = 0;
  (this->FilterBands).ArrayMax = 0;
  (this->WorkBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkBuffer).ArrayNum = 0;
  (this->WorkBuffer).ArrayMax = 0;
  return this;
}

// ~FEqualizer @ 1444a6440

void __thiscall Audio::FEqualizer::~FEqualizer(FEqualizer *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->WorkBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Audio::FBiquadFilter,int>
            ((FBiquadFilter *)(this->FilterBands).AllocatorInstance.Data,
             (this->FilterBands).ArrayNum);
  pFVar1 = (this->FilterBands).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Init @ 1444c3200

void __thiscall Audio::FEqualizer::Init(FEqualizer *this,float param_1,int param_2,int param_3)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  FBiquadFilter *this_00;
  FBiquadFilter *pFVar9;
  undefined1 local_res20 [8];
  
  piVar1 = &(this->WorkBuffer).ArrayNum;
  this->NumChannels = param_3;
  iVar7 = *piVar1;
  if (iVar7 < param_3) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,param_3 - iVar7,&(this->WorkBuffer).AllocatorInstance,piVar1,
                       &(this->WorkBuffer).ArrayMax);
    memset((this->WorkBuffer).AllocatorInstance.Data + (longlong)iVar6 * 4,0,
           (longlong)(param_3 - iVar7) << 2);
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_3);
    }
    if (param_3 < iVar7) {
      uVar8 = iVar7 - param_3;
      if ((int)(uVar8 | param_3) < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (uVar8 != 0) {
        _Dst = (this->WorkBuffer).AllocatorInstance.Data + (longlong)param_3 * 4;
        iVar7 = (*piVar1 - uVar8) - param_3;
        if (iVar7 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar8 * 4,(longlong)iVar7 << 2);
        }
        *piVar1 = *piVar1 - uVar8;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&(this->WorkBuffer).AllocatorInstance,*piVar1,&(this->WorkBuffer).ArrayMax);
      }
    }
  }
  iVar7 = (this->FilterBands).ArrayNum;
  piVar1 = &(this->FilterBands).ArrayNum;
  if (iVar7 < param_2) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,param_2 - iVar7,&(this->FilterBands).AllocatorInstance,piVar1,
                       &(this->FilterBands).ArrayMax);
    DefaultConstructItems<Audio::FBiquadFilter,int>
              ((this->FilterBands).AllocatorInstance.Data + (longlong)iVar6 * 0x30,param_2 - iVar7);
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
    }
    if (param_2 < iVar7) {
      uVar8 = iVar7 - param_2;
      if ((int)(uVar8 | param_2) < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (uVar8 != 0) {
        TArray<Audio::FBiquadFilter,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (&this->FilterBands,param_2,uVar8);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,&(this->FilterBands).AllocatorInstance,*piVar1,
                   &(this->FilterBands).ArrayMax);
      }
    }
  }
  fVar4 = __real_43fa0000;
  fVar3 = __real_3f800000;
  this_00 = (FBiquadFilter *)(this->FilterBands).AllocatorInstance.Data;
  iVar7 = *piVar1;
  pFVar9 = this_00 + iVar7;
  while( true ) {
    if (*piVar1 != iVar7) {
      `TCheckedPointerIterator<Audio::FBiquadFilter,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (this_00 == pFVar9) break;
    FBiquadFilter::Init(this_00,param_1,param_3,ParametricEQ,fVar4,fVar3,0.0);
    this_00 = this_00 + 1;
  }
  return;
}

// ProcessAudioFrame @ 1444df150

void __thiscall Audio::FEqualizer::ProcessAudioFrame(FEqualizer *this,float *param_1,float *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FBiquadFilter *this_00;
  FBiquadFilter *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *_Src;
  undefined1 local_res8 [8];
  
  if (0 < this->NumChannels) {
    memcpy(param_2,param_1,(longlong)this->NumChannels << 2);
    iVar1 = (this->FilterBands).ArrayNum;
    this_00 = (FBiquadFilter *)(this->FilterBands).AllocatorInstance.Data;
    pFVar3 = this_00 + iVar1;
    pFVar2 = (this->WorkBuffer).AllocatorInstance.Data;
    _Src = (FScriptContainerElement *)param_2;
    while( true ) {
      pFVar4 = pFVar2;
      if ((this->FilterBands).ArrayNum != iVar1) {
        `TCheckedPointerIterator<Audio::FBiquadFilter,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (this_00 == pFVar3) break;
      FBiquadFilter::ProcessAudioFrame(this_00,(float *)_Src,(float *)pFVar4);
      this_00 = this_00 + 1;
      pFVar2 = _Src;
      _Src = pFVar4;
    }
    if (_Src != (FScriptContainerElement *)param_2) {
      memcpy(param_2,_Src,(longlong)this->NumChannels << 2);
    }
  }
  return;
}

// SetBandBandwidth @ 1444e2b60

void __thiscall Audio::FEqualizer::SetBandBandwidth(FEqualizer *this,int param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FBiquadFilter *this_00;
  
  uVar3 = 0;
  if (param_1 < (this->FilterBands).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (FBiquadFilter *)((this->FilterBands).AllocatorInstance.Data + (longlong)param_1 * 0x30)
  ;
  if (param_2 != this_00->Bandwidth) {
    this_00->Bandwidth = param_2;
    FBiquadFilter::CalculateBiquadCoefficients(this_00);
  }
  return;
}

// SetBandEnabled @ 1444e2c00

void __thiscall Audio::FEqualizer::SetBandEnabled(FEqualizer *this,int param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 < (this->FilterBands).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this->FilterBands).AllocatorInstance.Data[(longlong)param_1 * 0x30 + 0x2c] =
       (FScriptContainerElement)param_2;
  return;
}

// SetBandFrequency @ 1444e2c90

void __thiscall Audio::FEqualizer::SetBandFrequency(FEqualizer *this,int param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FBiquadFilter *this_00;
  float fVar4;
  
  uVar3 = 0;
  if (param_1 < (this->FilterBands).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (FBiquadFilter *)((this->FilterBands).AllocatorInstance.Data + (longlong)param_1 * 0x30)
  ;
  fVar4 = this_00->SampleRate * __real_3ee66666;
  if (param_2 <= fVar4) {
    fVar4 = param_2;
  }
  if (fVar4 <= __real_40a00000) {
    fVar4 = __real_40a00000;
  }
  if (fVar4 != this_00->Frequency) {
    this_00->Frequency = fVar4;
    FBiquadFilter::CalculateBiquadCoefficients(this_00);
  }
  return;
}

// SetBandGainDB @ 1444e2d40

void __thiscall Audio::FEqualizer::SetBandGainDB(FEqualizer *this,int param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FBiquadFilter *this_00;
  
  uVar3 = 0;
  if (param_1 < (this->FilterBands).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (FBiquadFilter *)((this->FilterBands).AllocatorInstance.Data + (longlong)param_1 * 0x30)
  ;
  if (param_2 != this_00->GainDB) {
    this_00->GainDB = param_2;
    if ((this_00->FilterType == ParametricEQ) || (this_00->FilterType - LowShelf < 2)) {
      FBiquadFilter::CalculateBiquadCoefficients(this_00);
    }
  }
  return;
}

// SetBandParams @ 1444e2df0

void __thiscall
Audio::FEqualizer::SetBandParams
          (FEqualizer *this,int param_1,float param_2,float param_3,float param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 < (this->FilterBands).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FBiquadFilter::SetParams
            ((FBiquadFilter *)
             ((this->FilterBands).AllocatorInstance.Data + (longlong)param_1 * 0x30),ParametricEQ,
             param_2,param_3,param_4);
  return;
}

