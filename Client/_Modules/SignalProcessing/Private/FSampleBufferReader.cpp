// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 14

// FSampleBufferReader @ 1444f22c0

FSampleBufferReader * __thiscall
Audio::FSampleBufferReader::FSampleBufferReader(FSampleBufferReader *this)

{
  this->FadeFrames = 0x200;
  this->FadeValue = 0.0;
  this->BufferPtr = (short *)0x0;
  this->BufferNumSamples = 0;
  this->BufferNumFrames = 0;
  this->BufferSampleRate = 0;
  this->BufferNumChannels = 0;
  (this->Pitch).CurrentValue = 0.0;
  (this->Pitch).DeltaValue = 0.0;
  (this->Pitch).DefaultDurationTicks = 0;
  (this->Pitch).CurrentTick = 0;
  this->CurrentFrameIndex = 0;
  this->NextFrameIndex = 0;
  this->AlphaLerp = 0.0;
  this->CurrentBufferFrameIndexInterpolated = 0.0;
  this->PlaybackProgress = 0.0;
  this->ScrubAnchorFrame = 0.0;
  this->ScrubMinFrame = 0.0;
  this->ScrubMaxFrame = 0.0;
  this->ScrubWidthFrames = 0.0;
  this->CurrentSeekTime = 0.0;
  this->CurrentScrubWidthSec = 0.0;
  this->CurrentSeekType = FromBeginning;
  this->bWrap = false;
  this->bIsScrubMode = false;
  this->bIsFinished = false;
  this->FadeIncrement = 0.001953125;
  this->DeviceSampleRate = 0.0;
  this->BasePitch = 1.0;
  this->PitchScale = 1.0;
  (this->Pitch).StartValue = 0.0;
  (this->Pitch).SampleRate = 44100.0;
  (this->Pitch).DurationTicks = 0;
  (this->Pitch).bIsInit = true;
  return this;
}

// ~FSampleBufferReader @ 1444f45e0

void __thiscall Audio::FSampleBufferReader::~FSampleBufferReader(FSampleBufferReader *this)

{
  return;
}

// ClearBuffer @ 1444f7d40

void __thiscall Audio::FSampleBufferReader::ClearBuffer(FSampleBufferReader *this)

{
  this->BufferPtr = (short *)0x0;
  this->BufferNumSamples = 0;
  this->BufferNumFrames = 0;
  this->BufferSampleRate = 0;
  this->BufferNumChannels = 0;
  return;
}

// Generate @ 1444fd290

bool __thiscall
Audio::FSampleBufferReader::Generate
          (FSampleBufferReader *this,float *param_1,int param_2,int param_3,bool param_4)

{
  bool bVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  double dVar7;
  int iVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  float fVar20;
  int local_res8;
  
  dVar7 = __real_bfe0000000000000;
  fVar6 = __real_3f000000;
  uVar5 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar4 = __real_3f800000;
  fVar3 = __real_322bcc77;
  dVar2 = __real_3ff0000000000000;
  iVar8 = param_2 * param_3;
  if ((this->BufferPtr == (short *)0x0) || (this->bIsFinished != false)) {
    memset(param_1,0,(longlong)iVar8 << 2);
    return false;
  }
  iVar14 = 0;
  local_res8 = 0;
  if (0 < param_2) {
    lVar12 = 0;
    do {
      if (this->bIsFinished != false) break;
      iVar13 = (this->Pitch).DurationTicks;
      iVar10 = (this->Pitch).CurrentTick;
      if (iVar10 < iVar13) {
        (this->Pitch).CurrentTick = iVar10 + 1;
        fVar20 = ((float)iVar10 * (this->Pitch).DeltaValue) / (float)iVar13 +
                 (this->Pitch).StartValue;
        (this->Pitch).CurrentValue = fVar20;
        cVar9 = this->bIsFinished;
      }
      else {
        fVar20 = (this->Pitch).CurrentValue;
        cVar9 = '\0';
      }
      if ((float)((uint)fVar20 & uVar5) <= fVar3) {
        fVar20 = fVar3;
      }
      bVar1 = this->bIsScrubMode;
      dVar19 = this->CurrentBufferFrameIndexInterpolated;
      if (fVar20 <= 0.0) {
        iVar10 = -(int)((longlong)ROUND(dVar7 - (dVar19 + dVar19)) >> 1);
        this->CurrentFrameIndex = iVar10;
        iVar13 = iVar10 + -1;
        this->NextFrameIndex = iVar13;
        this->AlphaLerp = (double)iVar10 - dVar19;
        if (((bVar1 != false) || (this->bWrap != false)) || (-1 < iVar13)) goto LAB_1444fd44c;
        this->bIsFinished = true;
      }
      else {
        iVar10 = (int)((longlong)ROUND((dVar19 + dVar19) - __real_3fe0000000000000) >> 1);
        this->CurrentFrameIndex = iVar10;
        iVar13 = iVar10 + 1;
        this->NextFrameIndex = iVar13;
        this->AlphaLerp = dVar19 - (double)iVar10;
        if (((bVar1 == false) && (this->bWrap == false)) && (this->BufferNumFrames <= iVar13)) {
          this->bIsFinished = true;
          cVar9 = '\x01';
        }
LAB_1444fd44c:
        if (cVar9 == '\0') {
          fVar18 = fVar4;
          if ((this->bWrap == false) && (bVar1 == false)) {
            this->FadeValue = 1.0;
          }
          else {
            iVar10 = this->BufferNumFrames;
            iVar11 = 0;
            if (bVar1 != false) {
              iVar11 = (int)this->ScrubMinFrame;
              iVar10 = (int)this->ScrubMaxFrame;
            }
            if ((fVar20 <= 0.0) || (iVar13 < iVar10)) {
              if (iVar13 < iVar11) {
                iVar13 = iVar10 + -1;
                this->CurrentFrameIndex = iVar11;
                this->NextFrameIndex = iVar13;
                dVar19 = FGenericPlatformMath::Fmod(dVar19,dVar2);
                goto LAB_1444fd52d;
              }
            }
            else {
              this->NextFrameIndex = iVar11;
              this->CurrentFrameIndex = (int)((float)iVar10 - fVar4);
              dVar19 = FGenericPlatformMath::Fmod(dVar19,dVar2);
              iVar13 = iVar11;
LAB_1444fd52d:
              this->CurrentBufferFrameIndexInterpolated = dVar19 + (double)iVar13;
            }
            dVar19 = this->CurrentBufferFrameIndexInterpolated;
            this->FadeValue = 1.0;
            iVar13 = -(int)((longlong)ROUND(dVar7 - (dVar19 + dVar19)) >> 1);
            this->CurrentFrameIndex = iVar13;
            this->NextFrameIndex = iVar13 + -1;
            this->AlphaLerp = (double)iVar13 - dVar19;
            if ((iVar13 < iVar11) || (this->FadeFrames + iVar11 <= iVar13)) {
              iVar11 = this->FadeFrames;
              if ((iVar10 - iVar11 <= iVar13) && (iVar13 < iVar10)) {
                fVar18 = fVar4 - (float)((iVar13 - iVar10) + iVar11) / (float)iVar11;
                this->FadeValue = fVar18;
              }
            }
            else {
              fVar18 = (float)(iVar13 - iVar11) / (float)this->FadeFrames;
              this->FadeValue = fVar18;
            }
          }
          iVar13 = this->BufferNumChannels;
          if (param_3 == iVar13) {
            iVar10 = 0;
            if (0 < iVar13) {
              do {
                fVar18 = this->FadeValue;
                fVar15 = GetSampleValueForChannel(this,iVar10);
                iVar14 = iVar14 + 1;
                iVar10 = iVar10 + 1;
                param_1[lVar12] = fVar15 * fVar18;
                lVar12 = lVar12 + 1;
              } while (iVar10 < this->BufferNumChannels);
            }
          }
          else if (param_3 == 1) {
            if (iVar13 == 2) {
              fVar16 = GetSampleValueForChannel(this,0);
              fVar15 = this->FadeValue;
              fVar17 = GetSampleValueForChannel(this,1);
              iVar14 = iVar14 + 1;
              param_1[lVar12] = (fVar17 * fVar15 + fVar16 * fVar18) * fVar6;
              lVar12 = lVar12 + 1;
            }
          }
          else if ((param_3 == 2) && (iVar13 == 1)) {
            fVar15 = GetSampleValueForChannel(this,0);
            iVar14 = iVar14 + 2;
            fVar18 = fVar15 * fVar18 * fVar6;
            param_1[lVar12] = fVar18;
            param_1[lVar12 + 1] = fVar18;
            lVar12 = lVar12 + 2;
          }
          this->CurrentBufferFrameIndexInterpolated =
               (double)fVar20 + this->CurrentBufferFrameIndexInterpolated;
        }
      }
      local_res8 = local_res8 + 1;
    } while (local_res8 < param_2);
  }
  if (iVar14 < iVar8) {
    memset(param_1 + iVar14,0,(longlong)(iVar8 - iVar14) << 2);
  }
  return this->bIsFinished;
}

// GetSampleValue @ 144504920

float __thiscall
Audio::FSampleBufferReader::GetSampleValue(FSampleBufferReader *this,short *param_1,int param_2)

{
  return (float)(int)param_1[param_2] * __real_38000100;
}

// GetSampleValueForChannel @ 144504940

float __thiscall
Audio::FSampleBufferReader::GetSampleValueForChannel(FSampleBufferReader *this,int param_1)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  
  psVar2 = this->BufferPtr;
  if (psVar2 != (short *)0x0) {
    iVar3 = this->CurrentFrameIndex;
    iVar1 = this->BufferNumFrames;
    if (iVar3 < 0) {
      iVar3 = iVar3 + iVar1;
    }
    else if (iVar1 <= iVar3) {
      iVar3 = iVar3 - iVar1;
    }
    iVar4 = this->NextFrameIndex;
    if (iVar4 < 0) {
      iVar4 = iVar4 + iVar1;
    }
    else if (iVar1 <= iVar4) {
      iVar4 = iVar4 - iVar1;
    }
    this->PlaybackProgress = (float)iVar3 / (float)this->BufferSampleRate;
    return (float)((double)((float)(int)psVar2[param_1 + this->BufferNumChannels * iVar4] *
                            __real_38000100 -
                           (float)(int)psVar2[this->BufferNumChannels * iVar3 + param_1] *
                           __real_38000100) * this->AlphaLerp +
                  (double)((float)(int)psVar2[this->BufferNumChannels * iVar3 + param_1] *
                          __real_38000100));
  }
  return 0.0;
}

// Init @ 144507970

void __thiscall Audio::FSampleBufferReader::Init(FSampleBufferReader *this,int param_1)

{
  double dVar1;
  
  this->BufferPtr = (short *)0x0;
  this->BufferNumSamples = 0;
  this->BufferNumFrames = 0;
  this->BufferSampleRate = 0;
  this->BufferNumChannels = 0;
  this->CurrentFrameIndex = 0;
  this->NextFrameIndex = 0;
  this->AlphaLerp = 0.0;
  this->DeviceSampleRate = (float)param_1;
  (this->Pitch).SampleRate = (float)param_1;
  (this->Pitch).bIsInit = false;
  (this->Pitch).DurationTicks = 0;
  (this->Pitch).CurrentTick = 0;
  (this->Pitch).CurrentValue = 1.0;
  this->BasePitch = 1.0;
  this->bIsScrubMode = false;
  this->bIsFinished = false;
  this->CurrentBufferFrameIndexInterpolated = 0.0;
  this->ScrubAnchorFrame = 0.0;
  this->ScrubMinFrame = 0.0;
  this->ScrubMaxFrame = 0.0;
  dVar1 = (double)this->DeviceSampleRate * __real_3fb999999999999a;
  this->PlaybackProgress = 0.0;
  this->ScrubWidthFrames = dVar1;
  return;
}

// SeekTime @ 144518c10

void __thiscall
Audio::FSampleBufferReader::SeekTime
          (FSampleBufferReader *this,float param_1,Type param_2,bool param_3)

{
  this->CurrentSeekTime = param_1;
  this->CurrentSeekType = param_2;
  this->bWrap = param_3;
  if (this->bIsScrubMode != false) {
    UpdateSeekFrame(this);
    UpdateScrubMinAndMax(this);
    return;
  }
  UpdateSeekFrame(this);
  return;
}

// SetBuffer @ 144518ca0

void __thiscall
Audio::FSampleBufferReader::SetBuffer
          (FSampleBufferReader *this,short *param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  
  this->CurrentFrameIndex = 0;
  this->NextFrameIndex = 0;
  this->AlphaLerp = 0.0;
  fVar10 = (float)param_4;
  this->DeviceSampleRate = fVar10;
  (this->Pitch).SampleRate = fVar10;
  (this->Pitch).bIsInit = false;
  (this->Pitch).DurationTicks = 0;
  (this->Pitch).CurrentTick = 0;
  (this->Pitch).CurrentValue = 1.0;
  this->BufferSampleRate = param_4;
  this->BufferPtr = param_1;
  fVar10 = fVar10 / this->DeviceSampleRate;
  this->BufferNumFrames = param_2 / param_3;
  this->bIsScrubMode = false;
  this->bIsFinished = false;
  this->CurrentBufferFrameIndexInterpolated = 0.0;
  this->ScrubAnchorFrame = 0.0;
  this->ScrubMinFrame = 0.0;
  this->ScrubMaxFrame = 0.0;
  this->PlaybackProgress = 0.0;
  this->BufferNumSamples = param_2;
  this->BufferNumChannels = param_3;
  this->BasePitch = fVar10;
  fVar10 = fVar10 * this->PitchScale;
  this->ScrubWidthFrames = (double)this->DeviceSampleRate * __real_3fb999999999999a;
  iVar2 = (this->Pitch).DurationTicks;
  iVar3 = (this->Pitch).CurrentTick;
  if (iVar3 < iVar2) {
    fVar1 = (this->Pitch).CurrentValue;
    (this->Pitch).StartValue = fVar1;
    (this->Pitch).DurationTicks = iVar2 - iVar3;
    (this->Pitch).CurrentTick = 0;
    (this->Pitch).DeltaValue = fVar10 - fVar1;
  }
  else {
    (this->Pitch).CurrentValue = fVar10;
  }
  this->bIsFinished = false;
  if (this->BufferPtr != (short *)0x0) {
    if ((param_3 < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("BufferNumChannels > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\SampleBufferReader.cpp"
                           ,0x6c,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    fVar10 = (float)this->BufferSampleRate * this->CurrentSeekTime;
    if (this->CurrentSeekType == FromBeginning) {
      dVar6 = (double)fVar10;
    }
    else if (this->CurrentSeekType == FromEnd) {
      dVar6 = (double)(((float)this->BufferNumFrames - fVar10) - __real_3f800000);
    }
    else {
      dVar6 = (double)fVar10 + this->CurrentBufferFrameIndexInterpolated;
    }
    dVar8 = (double)this->BufferNumFrames;
    this->CurrentBufferFrameIndexInterpolated = dVar6;
    if (this->bWrap == false) {
      if (dVar6 <= dVar8) {
        dVar8 = dVar6;
      }
      if (dVar8 <= 0.0) {
        dVar8 = 0.0;
      }
      this->CurrentBufferFrameIndexInterpolated = dVar8;
    }
    else {
      if (dVar8 <= dVar6) {
        do {
          dVar6 = dVar6 - dVar8;
        } while (dVar8 <= dVar6);
        this->CurrentBufferFrameIndexInterpolated = dVar6;
      }
      if (dVar6 < 0.0) {
        do {
          dVar6 = dVar6 + dVar8;
        } while (dVar6 < 0.0);
        this->CurrentBufferFrameIndexInterpolated = dVar6;
      }
      if ((dVar8 <= dVar6) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentBufferFrameIndexInterpolated >= 0.0 && CurrentBufferFrameIndexInterpolated < (double)BufferNumFrames"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\SampleBufferReader.cpp"
                             ,0x88,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  dVar6 = this->CurrentBufferFrameIndexInterpolated;
  this->ScrubAnchorFrame = dVar6;
  if (0 < this->BufferNumFrames) {
    fVar10 = this->CurrentScrubWidthSec;
    if (this->CurrentScrubWidthSec <= __real_3a83126f) {
      fVar10 = __real_3a83126f;
    }
    dVar9 = (double)this->FadeFrames + (double)this->FadeFrames;
    dVar8 = (double)(fVar10 * this->DeviceSampleRate);
    dVar7 = (double)(this->BufferNumFrames + -1);
    if (dVar7 <= dVar8) {
      dVar8 = dVar7;
    }
    if (dVar8 <= dVar9) {
      dVar8 = dVar9;
    }
    this->ScrubWidthFrames = dVar8;
    dVar8 = dVar8 * __real_3fe0000000000000;
    this->ScrubMinFrame = dVar6 - dVar8;
    this->ScrubMaxFrame = dVar8 + dVar6;
  }
  return;
}

// SetPitch @ 14451c4e0

void __thiscall
Audio::FSampleBufferReader::SetPitch(FSampleBufferReader *this,float param_1,float param_2)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  
  this->PitchScale = param_1;
  fVar4 = param_1 * this->BasePitch;
  if ((this->Pitch).bIsInit != false) {
    (this->Pitch).bIsInit = false;
    (this->Pitch).DurationTicks = 0;
    (this->Pitch).CurrentTick = 0;
    (this->Pitch).CurrentValue = fVar4;
    return;
  }
  iVar3 = (int)(param_2 * (this->Pitch).SampleRate);
  (this->Pitch).DurationTicks = iVar3;
  (this->Pitch).CurrentTick = 0;
  pfVar1 = &(this->Pitch).CurrentValue;
  if (iVar3 == 0) {
    *pfVar1 = fVar4;
    return;
  }
  fVar2 = *pfVar1;
  (this->Pitch).StartValue = fVar2;
  (this->Pitch).DeltaValue = fVar4 - fVar2;
  return;
}

// SetScrubMode @ 14451c810

void __thiscall Audio::FSampleBufferReader::SetScrubMode(FSampleBufferReader *this,bool param_1)

{
  this->ScrubAnchorFrame = this->CurrentBufferFrameIndexInterpolated;
  this->bIsScrubMode = param_1;
  UpdateSeekFrame(this);
  UpdateScrubMinAndMax(this);
  return;
}

// SetScrubTimeWidth @ 14451c840

void __thiscall
Audio::FSampleBufferReader::SetScrubTimeWidth(FSampleBufferReader *this,float param_1)

{
  this->CurrentScrubWidthSec = param_1;
  UpdateScrubMinAndMax(this);
  return;
}

// UpdateScrubMinAndMax @ 144520210

void __thiscall Audio::FSampleBufferReader::UpdateScrubMinAndMax(FSampleBufferReader *this)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  UpdateSeekFrame(this);
  if (0 < this->BufferNumFrames) {
    fVar1 = this->CurrentScrubWidthSec;
    if (this->CurrentScrubWidthSec <= __real_3a83126f) {
      fVar1 = __real_3a83126f;
    }
    dVar3 = (double)this->FadeFrames + (double)this->FadeFrames;
    dVar4 = (double)(fVar1 * this->DeviceSampleRate);
    dVar2 = (double)(this->BufferNumFrames + -1);
    if (dVar2 <= dVar4) {
      dVar4 = dVar2;
    }
    if (dVar4 <= dVar3) {
      dVar4 = dVar3;
    }
    this->ScrubWidthFrames = dVar4;
    dVar4 = dVar4 * __real_3fe0000000000000;
    this->ScrubMinFrame = this->ScrubAnchorFrame - dVar4;
    this->ScrubMaxFrame = this->ScrubAnchorFrame + dVar4;
  }
  return;
}

// UpdateSeekFrame @ 1445202a0

void __thiscall Audio::FSampleBufferReader::UpdateSeekFrame(FSampleBufferReader *this)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  
  if (this->BufferPtr != (short *)0x0) {
    if (this->BufferNumChannels < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("BufferNumChannels > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\SampleBufferReader.cpp"
                         ,0x6c,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    fVar3 = (float)this->BufferSampleRate * this->CurrentSeekTime;
    if (this->CurrentSeekType == FromBeginning) {
      dVar4 = (double)fVar3;
    }
    else if (this->CurrentSeekType == FromEnd) {
      dVar4 = (double)(((float)this->BufferNumFrames - fVar3) - __real_3f800000);
    }
    else {
      dVar4 = (double)fVar3 + this->CurrentBufferFrameIndexInterpolated;
    }
    dVar5 = (double)this->BufferNumFrames;
    this->CurrentBufferFrameIndexInterpolated = dVar4;
    if (this->bWrap == false) {
      if (dVar5 <= dVar4) {
        dVar4 = dVar5;
      }
      if (dVar4 <= 0.0) {
        dVar4 = 0.0;
      }
      this->CurrentBufferFrameIndexInterpolated = dVar4;
    }
    else {
      if (dVar5 <= dVar4) {
        do {
          dVar4 = dVar4 - dVar5;
        } while (dVar5 <= dVar4);
        this->CurrentBufferFrameIndexInterpolated = dVar4;
      }
      if (dVar4 < 0.0) {
        do {
          dVar4 = dVar5 + dVar4;
        } while (dVar4 < 0.0);
        this->CurrentBufferFrameIndexInterpolated = dVar4;
      }
      if (dVar5 <= dVar4) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurrentBufferFrameIndexInterpolated >= 0.0 && CurrentBufferFrameIndexInterpolated < (double)BufferNumFrames"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\SampleBufferReader.cpp"
                           ,0x88,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
  }
  this->ScrubAnchorFrame = this->CurrentBufferFrameIndexInterpolated;
  return;
}

