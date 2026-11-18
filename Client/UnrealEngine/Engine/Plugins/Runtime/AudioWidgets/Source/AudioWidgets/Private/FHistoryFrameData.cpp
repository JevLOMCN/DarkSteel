// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 10

// FHistoryFrameData @ 14d8b6000

FHistoryFrameData * __thiscall
FAudioSpectrogramViewport::FHistoryFrameData::FHistoryFrameData
          (FHistoryFrameData *this,FHistoryFrameData *param_1)

{
  bool bVar1;
  
  this->NumSoundLevels = param_1->NumSoundLevels;
  this->SpectrumDataMinFrequency = param_1->SpectrumDataMinFrequency;
  this->SpectrumDataMaxFrequency = param_1->SpectrumDataMaxFrequency;
  bVar1 = param_1->bSpectrumDataHasLogSpacedFreqencies;
  (this->SoundLevelsMipChain).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->bSpectrumDataHasLogSpacedFreqencies = bVar1;
  (this->SoundLevelsMipChain).AllocatorInstance.Data =
       (param_1->SoundLevelsMipChain).AllocatorInstance.Data;
  (param_1->SoundLevelsMipChain).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SoundLevelsMipChain).ArrayNum = (param_1->SoundLevelsMipChain).ArrayNum;
  (this->SoundLevelsMipChain).ArrayMax = (param_1->SoundLevelsMipChain).ArrayMax;
  (param_1->SoundLevelsMipChain).ArrayNum = 0;
  (param_1->SoundLevelsMipChain).ArrayMax = 0;
  this->SoundLevelsMipChainPixelBucketMode = param_1->SoundLevelsMipChainPixelBucketMode;
  (this->CachedPixels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedPixels).AllocatorInstance.Data = (param_1->CachedPixels).AllocatorInstance.Data;
  (param_1->CachedPixels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedPixels).ArrayNum = (param_1->CachedPixels).ArrayNum;
  (this->CachedPixels).ArrayMax = (param_1->CachedPixels).ArrayMax;
  (param_1->CachedPixels).ArrayNum = 0;
  (param_1->CachedPixels).ArrayMax = 0;
  return this;
}

// FHistoryFrameData @ 14d8b6070

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FHistoryFrameData * __thiscall
FAudioSpectrogramViewport::FHistoryFrameData::FHistoryFrameData
          (FHistoryFrameData *this,FAudioSpectrogramFrameData *param_1,
          EAudioSpectrogramFrequencyAxisPixelBucketMode param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  FHistoryFrameData *pFVar7;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  float fVar12;
  
  uVar9 = 0;
  this->NumSoundLevels = (param_1->SpectrumValues).ArrayNum;
  this->SpectrumDataMinFrequency = param_1->MinFrequency;
  this->SpectrumDataMaxFrequency = param_1->MaxFrequency;
  this->bSpectrumDataHasLogSpacedFreqencies = param_1->bLogSpacedFreqencies;
  (this->SoundLevelsMipChain).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SoundLevelsMipChain).ArrayNum = 0;
  (this->SoundLevelsMipChain).ArrayMax = 0;
  (this->CachedPixels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedPixels).ArrayNum = 0;
  (this->CachedPixels).ArrayMax = 0;
  uVar8 = this->NumSoundLevels;
  this->SoundLevelsMipChainPixelBucketMode = param_2;
  if ((((uVar8 & uVar8 - 1) == 0) && (param_2 != Sample)) &&
     (this->bSpectrumDataHasLogSpacedFreqencies == false)) {
    uVar8 = uVar8 * 2 - 1;
  }
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->SoundLevelsMipChain,uVar8,Default);
  if (param_1->SpectrumType == MagnitudeSpectrum) {
    iVar1 = (this->SoundLevelsMipChain).ArrayNum;
    pFVar10 = (this->SoundLevelsMipChain).AllocatorInstance.Data;
    if ((iVar1 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FHistoryFrameData *)(*pcVar3)();
      return pFVar7;
    }
    fVar5 = __real_2edbe6ff;
    fVar4 = __real_410af967;
    iVar2 = (param_1->SpectrumValues).ArrayNum;
    if (0 < iVar2) {
      lVar11 = (longlong)(param_1->SpectrumValues).DataPtr - (longlong)pFVar10;
      do {
        uVar8 = 0;
        if ((int)uVar9 < iVar2) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FHistoryFrameData *)(*pcVar3)();
          return pFVar7;
        }
        fVar12 = *(float *)(pFVar10 + lVar11);
        if (*(float *)(pFVar10 + lVar11) <= fVar5) {
          fVar12 = fVar5;
        }
        fVar12 = logf(fVar12);
        uVar8 = 0;
        if ((int)uVar9 < iVar1) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FHistoryFrameData *)(*pcVar3)();
          return pFVar7;
        }
        *(float *)pFVar10 = fVar12 * fVar4;
        uVar9 = uVar9 + 1;
        pFVar10 = pFVar10 + 4;
      } while ((int)uVar9 < iVar2);
    }
  }
  else if (param_1->SpectrumType == PowerSpectrum) {
    iVar1 = (this->SoundLevelsMipChain).ArrayNum;
    pFVar10 = (this->SoundLevelsMipChain).AllocatorInstance.Data;
    if ((iVar1 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FHistoryFrameData *)(*pcVar3)();
      return pFVar7;
    }
    fVar5 = __real_1e3ce508;
    fVar4 = __real_408af967;
    iVar2 = (param_1->SpectrumValues).ArrayNum;
    if (0 < iVar2) {
      lVar11 = (longlong)(param_1->SpectrumValues).DataPtr - (longlong)pFVar10;
      do {
        uVar8 = 0;
        if ((int)uVar9 < iVar2) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FHistoryFrameData *)(*pcVar3)();
          return pFVar7;
        }
        fVar12 = *(float *)(pFVar10 + lVar11);
        if (*(float *)(pFVar10 + lVar11) <= fVar5) {
          fVar12 = fVar5;
        }
        fVar12 = logf(fVar12);
        uVar8 = 0;
        if ((int)uVar9 < iVar1) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FHistoryFrameData *)(*pcVar3)();
          return pFVar7;
        }
        *(float *)pFVar10 = fVar12 * fVar4;
        uVar9 = uVar9 + 1;
        pFVar10 = pFVar10 + 4;
      } while ((int)uVar9 < iVar2);
    }
  }
  else {
    memcpy((this->SoundLevelsMipChain).AllocatorInstance.Data,(param_1->SpectrumValues).DataPtr,
           (longlong)this->NumSoundLevels << 2);
  }
  UpdateMipChain(this,param_2);
  return this;
}

// ArrayMagnitudeToDecibel @ 14d8daa90

void __cdecl
FAudioSpectrogramViewport::FHistoryFrameData::ArrayMagnitudeToDecibel
          (TArrayView<float_const_,int> *param_1,TArrayView<float,int> *param_2,float param_3)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  
  fVar8 = powf(__real_41200000,param_3 * __real_3d4ccccd);
  fVar2 = __real_410af967;
  iVar5 = param_1->ArrayNum;
  uVar6 = 0;
  if (0 < iVar5) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < iVar5) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      fVar9 = *(float *)(lVar7 + (longlong)param_1->DataPtr);
      if (fVar9 <= fVar8) {
        fVar9 = fVar8;
      }
      fVar9 = logf(fVar9);
      uVar4 = 0;
      if ((int)uVar6 < param_2->ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar6 = uVar6 + 1;
      iVar5 = param_1->ArrayNum;
      *(float *)(lVar7 + (longlong)param_2->DataPtr) = fVar9 * fVar2;
      lVar7 = lVar7 + 4;
    } while ((int)uVar6 < iVar5);
  }
  return;
}

// ArrayPowerToDecibel @ 14d8dabf0

void __cdecl
FAudioSpectrogramViewport::FHistoryFrameData::ArrayPowerToDecibel
          (TArrayView<float_const_,int> *param_1,TArrayView<float,int> *param_2,float param_3)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  
  fVar8 = powf(__real_41200000,param_3 * __real_3dcccccd);
  fVar2 = __real_408af967;
  iVar5 = param_1->ArrayNum;
  uVar6 = 0;
  if (0 < iVar5) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < iVar5) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      fVar9 = *(float *)(lVar7 + (longlong)param_1->DataPtr);
      if (fVar9 <= fVar8) {
        fVar9 = fVar8;
      }
      fVar9 = logf(fVar9);
      uVar4 = 0;
      if ((int)uVar6 < param_2->ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar6 = uVar6 + 1;
      iVar5 = param_1->ArrayNum;
      *(float *)(lVar7 + (longlong)param_2->DataPtr) = fVar9 * fVar2;
      lVar7 = lVar7 + 4;
    } while ((int)uVar6 < iVar5);
  }
  return;
}

// GetInterpolatedSoundLevel @ 14d92f560

float __cdecl
FAudioSpectrogramViewport::FHistoryFrameData::GetInterpolatedSoundLevel
          (TArrayView<float_const_,int> *param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  undefined4 in_XMM1_Db;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined1 auVar9 [16];
  
  auVar9._4_4_ = in_XMM1_Db;
  auVar9._0_4_ = param_2;
  auVar9._8_4_ = in_XMM1_Dc;
  auVar9._12_4_ = in_XMM1_Dd;
  if (param_2 < 0.0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NormalizedDataPos >= 0.0f",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioSpectrogramViewport.cpp"
                       ,0x1ad,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar8 = (float)(*pcVar1)();
      return fVar8;
    }
  }
  iVar6 = param_1->ArrayNum + -1;
  auVar9 = roundps(auVar9,ZEXT416((uint)((float)iVar6 * param_2)),1);
  iVar7 = (int)auVar9._0_4_;
  iVar5 = iVar6;
  if (iVar7 + 1 < iVar6) {
    iVar5 = iVar7 + 1;
  }
  pfVar3 = TArrayView<float_const_,int>::operator[](param_1,iVar5);
  iVar5 = iVar6;
  if (iVar7 < iVar6) {
    iVar5 = iVar7;
  }
  pfVar4 = TArrayView<float_const_,int>::operator[](param_1,iVar5);
  return ((float)iVar6 * param_2 - auVar9._0_4_) * (*pfVar3 - *pfVar4) + *pfVar4;
}

// GetMipFromMipSize @ 14d92fc80

TArrayView<float_const_,int> * __thiscall
FAudioSpectrogramViewport::FHistoryFrameData::GetMipFromMipSize
          (FHistoryFrameData *this,TArrayView<float_const_,int> *__return_storage_ptr__,int param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  TArrayView<float_const_,int> *pTVar6;
  
  if ((param_1 & param_1 - 1U) != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("FMath::IsPowerOfTwo(MipSize)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioSpectrogramViewport.cpp"
                       ,0x192,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArrayView<float_const_,int> *)(*pcVar3)();
      return pTVar6;
    }
  }
  if ((this->NumSoundLevels & this->NumSoundLevels - 1U) != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("FMath::IsPowerOfTwo(NumSoundLevels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioSpectrogramViewport.cpp"
                       ,0x193,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArrayView<float_const_,int> *)(*pcVar3)();
      return pTVar6;
    }
  }
  if (this->NumSoundLevels < param_1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("MipSize <= NumSoundLevels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioSpectrogramViewport.cpp"
                       ,0x194,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArrayView<float_const_,int> *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar1 = (this->SoundLevelsMipChain).ArrayNum;
  pFVar2 = (this->SoundLevelsMipChain).AllocatorInstance.Data;
  iVar4 = (this->NumSoundLevels - param_1) * 2;
  if (iVar1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArrayView<float_const_,int> *)(*pcVar3)();
      return pTVar6;
    }
  }
  if (iVar4 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x15b,L"Invalid index (%lld)");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArrayView<float_const_,int> *)(*pcVar3)();
      return pTVar6;
    }
  }
  if (param_1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x15c,L"Invalid count (%lld)");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArrayView<float_const_,int> *)(*pcVar3)();
      return pTVar6;
    }
  }
  if (iVar1 < iVar4 + param_1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index + InNum <= ArrayNum",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x15d,
                       L"Range (index: %lld, count: %lld) lies outside the view of %lld elements");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArrayView<float_const_,int> *)(*pcVar3)();
      return pTVar6;
    }
  }
  __return_storage_ptr__->ArrayNum = param_1;
  __return_storage_ptr__->DataPtr = (float *)(pFVar2 + (longlong)iVar4 * 4);
  if (param_1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArrayView<float_const_,int> *)(*pcVar3)();
      return pTVar6;
    }
  }
  return __return_storage_ptr__;
}

// GetMipInterpolatedSoundLevel @ 14d92fe60

float __thiscall
FAudioSpectrogramViewport::FHistoryFrameData::GetMipInterpolatedSoundLevel
          (FHistoryFrameData *this,float param_1,float param_2)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  TArrayView<float_const_,int> local_58;
  TArrayView<float_const_,int> local_48 [4];
  
  iVar5 = -((int)ROUND(__real_bf000000 - (param_1 + param_1)) >> 1);
  iVar2 = 1;
  if (iVar5 != 0) {
    iVar2 = iVar5;
  }
  uVar4 = (ulonglong)(iVar2 - 1) * 2 + 1;
  lVar1 = 0x3f;
  if (uVar4 != 0) {
    for (; uVar4 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  uVar3 = (ulonglong)(uint)(1 << ((byte)lVar1 & 0x1f));
  uVar4 = (longlong)this->NumSoundLevels;
  if ((longlong)uVar3 < (longlong)this->NumSoundLevels) {
    uVar4 = uVar3;
  }
  iVar2 = 2;
  if (2 < (longlong)uVar4) {
    iVar2 = (int)uVar4;
  }
  iVar5 = iVar2 / 2;
  GetMipFromMipSize(this,&local_58,iVar2);
  GetMipFromMipSize(this,local_48,iVar5);
  fVar6 = GetInterpolatedSoundLevel(&local_58,param_2);
  fVar7 = GetInterpolatedSoundLevel(local_48,param_2);
  fVar8 = (param_1 - (float)iVar5) / (float)(iVar2 - iVar5);
  if (__real_3f800000 <= fVar8) {
    fVar8 = __real_3f800000;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  return fVar8 * (fVar6 - fVar7) + fVar7;
}

// SetMipChainLengthUninitialized @ 14d96aa00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FAudioSpectrogramViewport::FHistoryFrameData::SetMipChainLengthUninitialized
          (FHistoryFrameData *this,EAudioSpectrogramFrequencyAxisPixelBucketMode param_1)

{
  uint uVar1;
  
  uVar1 = this->NumSoundLevels;
  if ((((uVar1 & uVar1 - 1) == 0) && (param_1 != Sample)) &&
     (this->bSpectrumDataHasLogSpacedFreqencies == false)) {
    uVar1 = uVar1 * 2 - 1;
  }
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->SoundLevelsMipChain,uVar1,Default);
  return;
}

// UpdateCachedPixels @ 14d978a20

void __thiscall
FAudioSpectrogramViewport::FHistoryFrameData::UpdateCachedPixels
          (FHistoryFrameData *this,FAudioSpectrogramViewportRenderParams *param_1)

{
  TArray<FColor,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  float fVar3;
  EAudioSpectrogramFrequencyAxisScale EVar4;
  bool bVar5;
  EAudioColorGradient EVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  code *pcVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  bool bVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  float _X;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uStack_13c;
  TArrayView<float_const_,int> local_138;
  TArrayView<float_const_,int> local_128;
  TArrayView<float_const_,int> local_118;
  TArrayView<float_const_,int> local_108;
  TArrayView<float_const_,int> local_f8 [11];
  
  EVar4 = param_1->FrequencyAxisScale;
  bVar5 = this->bSpectrumDataHasLogSpacedFreqencies;
  iVar14 = param_1->NumPixelsPerRow;
  _X = param_1->ViewMinFrequency;
  fVar3 = this->SpectrumDataMaxFrequency;
  fVar29 = this->SpectrumDataMinFrequency;
  fVar22 = param_1->ViewMaxFrequency;
  if (EVar4 == Logarithmic) {
    _X = logf(_X);
    fVar22 = logf(fVar22);
  }
  fVar22 = (fVar22 - _X) / (float)(iVar14 + -1);
  if ((iVar14 < 2) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumPixelsPerRow >= 2",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioSpectrogramViewport.cpp"
                          ,0x37,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  fVar23 = fVar3;
  fVar24 = fVar29;
  if (bVar5 != false) {
    fVar23 = logf(fVar3);
    fVar24 = logf(fVar29);
  }
  fVar11 = __real_3f800000;
  fVar23 = __real_3f800000 / (fVar23 - fVar24);
  if ((fVar3 == fVar29) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InSpectrumDataMaxFrequency != InSpectrumDataMinFrequency",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioSpectrogramViewport.cpp"
                          ,0x5b,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  fVar3 = param_1->ColorMapMinSoundLevel;
  EVar6 = param_1->ColorMap;
  fVar29 = fVar11 / (param_1->ColorMapMaxSoundLevel - fVar3);
  if (this->SoundLevelsMipChainPixelBucketMode != param_1->FrequencyAxisPixelBucketMode) {
    UpdateMipChain(this,param_1->FrequencyAxisPixelBucketMode);
    this->SoundLevelsMipChainPixelBucketMode = param_1->FrequencyAxisPixelBucketMode;
  }
  uVar19 = param_1->NumPixelsPerRow;
  pTVar1 = &this->CachedPixels;
  iVar14 = (this->CachedPixels).ArrayNum;
  piVar2 = &(this->CachedPixels).ArrayNum;
  if (iVar14 < (int)uVar19) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar19 - iVar14,&pTVar1->AllocatorInstance,piVar2,&(this->CachedPixels).ArrayMax)
    ;
  }
  else {
    if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
    }
    if ((int)uVar19 < iVar14) {
      uVar20 = iVar14 - uVar19;
      if (((int)(uVar19 | uVar20) < 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar13)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (uVar20 != 0) {
        pFVar7 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar19 * 4;
        iVar14 = (*piVar2 - uVar19) - uVar20;
        if (iVar14 != 0) {
          memmove(pFVar7,pFVar7 + (longlong)(int)uVar20 * 4,(longlong)iVar14 << 2);
        }
        *piVar2 = *piVar2 - uVar20;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&pTVar1->AllocatorInstance,*piVar2,&(this->CachedPixels).ArrayMax);
      }
    }
  }
  fVar12 = __real_3f000000;
  iVar14 = (this->SoundLevelsMipChain).ArrayNum;
  if (this->NumSoundLevels < iVar14) {
    uVar19 = 0;
    if (0 < param_1->NumPixelsPerRow) {
      lVar21 = 0;
      fVar27 = __real_33800000;
      uVar20 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      do {
        fVar28 = (float)(int)uVar19;
        fVar26 = (fVar28 - fVar12) * fVar22 + _X;
        if (EVar4 == Logarithmic) {
          fVar26 = expf(fVar26);
        }
        if (bVar5 != false) {
          fVar26 = logf(fVar26);
        }
        fVar25 = (fVar28 + fVar12) * fVar22 + _X;
        if (EVar4 == Logarithmic) {
          fVar25 = expf(fVar25);
        }
        if (bVar5 != false) {
          fVar25 = logf(fVar25);
        }
        fVar26 = (float)((uint)((fVar25 - fVar24) * fVar23 - (fVar26 - fVar24) * fVar23) & uVar20);
        if (fVar26 <= fVar27) {
          fVar26 = fVar27;
        }
        fVar27 = fVar22 * fVar28 + _X;
        fVar26 = fVar11 / fVar26;
        if (EVar4 == Logarithmic) {
          fVar27 = expf(fVar27);
        }
        if (bVar5 != false) {
          fVar27 = logf(fVar27);
        }
        fVar27 = (fVar27 - fVar24) * fVar23;
        iVar16 = -((int)ROUND(__real_bf000000 - (fVar26 + fVar26)) >> 1);
        iVar14 = 1;
        if (iVar16 != 0) {
          iVar14 = iVar16;
        }
        uVar15 = (ulonglong)(iVar14 - 1) * 2 + 1;
        lVar8 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        uVar18 = (ulonglong)(uint)(1 << ((byte)lVar8 & 0x1f));
        uVar15 = (longlong)this->NumSoundLevels;
        if ((longlong)uVar18 < (longlong)this->NumSoundLevels) {
          uVar15 = uVar18;
        }
        iVar14 = 2;
        if (2 < (longlong)uVar15) {
          iVar14 = (int)uVar15;
        }
        iVar16 = iVar14 / 2;
        GetMipFromMipSize(this,&local_138,iVar14);
        GetMipFromMipSize(this,&local_118,iVar16);
        local_128.DataPtr = local_138.DataPtr;
        local_128.ArrayNum = local_138.ArrayNum;
        local_128._12_4_ = local_138._12_4_;
        fVar28 = GetInterpolatedSoundLevel(&local_128,fVar27);
        local_108.DataPtr = local_118.DataPtr;
        local_108.ArrayNum = local_118.ArrayNum;
        local_108._12_4_ = local_118._12_4_;
        fVar25 = GetInterpolatedSoundLevel(&local_108,fVar27);
        fVar27 = (fVar26 - (float)iVar16) / (float)(iVar14 - iVar16);
        if (fVar11 <= fVar27) {
          fVar27 = fVar11;
        }
        fVar26 = 0.0;
        if (fVar27 <= 0.0) {
          fVar27 = fVar26;
        }
        fVar27 = ((fVar27 * (fVar28 - fVar25) + fVar25) - fVar3) * fVar29;
        if (fVar11 <= fVar27) {
          fVar27 = fVar11;
        }
        if (fVar27 <= 0.0) {
          fVar27 = fVar26;
        }
        if ((EVar6 == BlackToWhite) || (EVar6 != WhiteToBlack)) {
          if (fVar11 <= fVar27) {
            fVar27 = fVar11;
          }
        }
        else {
          fVar28 = fVar11 - fVar27;
          if (fVar11 - fVar27 <= 0.0) {
            fVar28 = fVar26;
          }
          fVar27 = fVar28;
          if (fVar11 <= fVar28) {
            fVar27 = fVar11;
          }
        }
        uVar17 = (int)(fVar27 * __real_437f0000 + fVar12) & 0xff;
        uVar20 = 0;
        if ((int)uVar19 < *piVar2) {
          uVar20 = ~uVar19 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        fVar27 = __real_33800000;
        uVar20 = __xmm_7fffffff7fffffff7fffffff7fffffff;
        uVar19 = uVar19 + 1;
        *(uint *)((this->CachedPixels).AllocatorInstance.Data + lVar21) =
             uVar17 << 8 | uVar17 << 0x10 | uVar17 | 0xff000000;
        lVar21 = lVar21 + 4;
      } while ((int)uVar19 < param_1->NumPixelsPerRow);
    }
  }
  else {
    pFVar7 = (this->SoundLevelsMipChain).AllocatorInstance.Data;
    if ((iVar14 < 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    fVar27 = __real_437f0000;
    fVar12 = __real_3f000000;
    uVar19 = 0;
    if (0 < param_1->NumPixelsPerRow) {
      lVar21 = 0;
      uVar10._4_4_ = uStack_13c;
      uVar10._0_4_ = iVar14;
      do {
        fVar26 = (float)(int)uVar19 * fVar22 + _X;
        if (EVar4 == Logarithmic) {
          fVar26 = expf(fVar26);
        }
        if (bVar5 != false) {
          fVar26 = logf(fVar26);
        }
        local_f8[0].DataPtr = (float *)pFVar7;
        local_f8[0]._8_8_ = uVar10;
        fVar26 = GetInterpolatedSoundLevel(local_f8,(fVar26 - fVar24) * fVar23);
        fVar26 = (fVar26 - fVar3) * fVar29;
        if (fVar11 <= fVar26) {
          fVar26 = fVar11;
        }
        if (fVar26 <= 0.0) {
          fVar26 = 0.0;
        }
        if ((EVar6 == BlackToWhite) || (EVar6 != WhiteToBlack)) {
          if (fVar11 <= fVar26) {
            fVar26 = fVar11;
          }
        }
        else {
          fVar26 = fVar11 - fVar26;
          if (fVar26 <= 0.0) {
            fVar26 = 0.0;
          }
          if (fVar11 <= fVar26) {
            fVar26 = fVar11;
          }
        }
        uVar17 = (int)(fVar26 * fVar27 + fVar12) & 0xff;
        uVar20 = 0;
        if ((int)uVar19 < (this->CachedPixels).ArrayNum) {
          uVar20 = ~uVar19 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar19 = uVar19 + 1;
        *(uint *)((pTVar1->AllocatorInstance).Data + lVar21) =
             uVar17 << 8 | uVar17 | uVar17 << 0x10 | 0xff000000;
        lVar21 = lVar21 + 4;
      } while ((int)uVar19 < param_1->NumPixelsPerRow);
    }
  }
  return;
}

// UpdateMipChain @ 14d979aa0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FAudioSpectrogramViewport::FHistoryFrameData::UpdateMipChain
          (FHistoryFrameData *this,EAudioSpectrogramFrequencyAxisPixelBucketMode param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_> *this_00;
  float fVar1;
  int iVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar12;
  ulonglong uVar13;
  float fVar14;
  ulonglong uVar11;
  
  this_00 = &this->SoundLevelsMipChain;
  if (((this->SoundLevelsMipChain).ArrayNum < this->NumSoundLevels) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("SoundLevelsMipChain.Num() >= NumSoundLevels",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioSpectrogramViewport.cpp"
                         ,0x166,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar9 = this->NumSoundLevels;
  if ((((uVar9 & uVar9 - 1) == 0) && (param_1 != Sample)) &&
     (this->bSpectrumDataHasLogSpacedFreqencies == false)) {
    uVar9 = uVar9 * 2 - 1;
  }
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized(this_00,uVar9,Default);
  if (((this->SoundLevelsMipChain).ArrayNum < this->NumSoundLevels) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("SoundLevelsMipChain.Num() >= NumSoundLevels",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioSpectrogramViewport.cpp"
                         ,0x16c,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (this->NumSoundLevels < (this->SoundLevelsMipChain).ArrayNum) {
    if ((1 < (byte)(param_1 - Peak)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InFrequencyAxisPixelBucketMode == EAudioSpectrogramFrequencyAxisPixelBucketMode::Peak || InFrequencyAxisPixelBucketMode == EAudioSpectrogramFrequencyAxisPixelBucketMode::Average"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioSpectrogramViewport.cpp"
                           ,0x171,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    fVar4 = __real_3f000000;
    uVar9 = this->NumSoundLevels;
    uVar10 = (ulonglong)(int)uVar9;
    uVar8 = 0;
    uVar6 = (int)uVar9 / 2;
    if (0 < (int)uVar6) {
      lVar12 = 0;
      uVar11 = uVar10;
      do {
        uVar13 = (ulonglong)uVar6;
        do {
          uVar9 = 0;
          if ((int)uVar8 < (this->SoundLevelsMipChain).ArrayNum) {
            uVar9 = ~uVar8 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          fVar1 = *(float *)((this_00->AllocatorInstance).Data + lVar12 * 4);
          uVar9 = 0;
          if ((int)(uVar8 + 1) < (this->SoundLevelsMipChain).ArrayNum) {
            uVar9 = ~(uVar8 + 1) >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar9 = (uint)uVar11;
          iVar2 = (this->SoundLevelsMipChain).ArrayNum;
          uVar8 = uVar8 + 2;
          fVar14 = *(float *)((this_00->AllocatorInstance).Data + lVar12 * 4 + 4);
          lVar12 = lVar12 + 2;
          if (param_1 == Peak) {
            if (fVar14 <= fVar1) {
              fVar14 = fVar1;
            }
            uVar7 = 0;
            if ((int)uVar9 < iVar2) {
              uVar7 = ~uVar9 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          else {
            uVar7 = 0;
            if ((int)uVar9 < iVar2) {
              uVar7 = ~uVar9 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            fVar14 = (fVar14 + fVar1) * fVar4;
          }
          uVar9 = uVar9 + 1;
          uVar11 = (ulonglong)uVar9;
          *(float *)((this_00->AllocatorInstance).Data + uVar10 * 4) = fVar14;
          uVar10 = uVar10 + 1;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
        uVar6 = uVar6 >> 1;
      } while (uVar6 != 0);
    }
    if ((uVar9 != (this->SoundLevelsMipChain).ArrayNum) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("WriteIndex == SoundLevelsMipChain.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioSpectrogramViewport.cpp"
                           ,0x18c,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

