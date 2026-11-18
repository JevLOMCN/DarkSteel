// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioPlatformSupportWasapi
// Functions: 15

// FWasapiAudioFormat @ 148d41dd0

FWasapiAudioFormat * __thiscall
Audio::FWasapiAudioFormat::FWasapiAudioFormat
          (FWasapiAudioFormat *this,ushort param_1,uint param_2,EWasapiAudioEncoding param_3)

{
  (this->WaveFormat).Format.wFormatTag = 0;
  (this->WaveFormat).Format.nChannels = 0;
  (this->WaveFormat).Format.nSamplesPerSec = 0;
  (this->WaveFormat).Format.nAvgBytesPerSec = 0;
  (this->WaveFormat).Format.nBlockAlign = 0;
  (this->WaveFormat).Format.wBitsPerSample = 0;
  *(undefined8 *)&(this->WaveFormat).Format.cbSize = 0;
  (this->WaveFormat).SubFormat.Data1 = 0;
  (this->WaveFormat).SubFormat.Data2 = 0;
  (this->WaveFormat).SubFormat.Data3 = 0;
  (this->WaveFormat).SubFormat.Data4[0] = '\0';
  (this->WaveFormat).SubFormat.Data4[1] = '\0';
  (this->WaveFormat).SubFormat.Data4[2] = '\0';
  (this->WaveFormat).SubFormat.Data4[3] = '\0';
  (this->WaveFormat).SubFormat.Data4[4] = '\0';
  (this->WaveFormat).SubFormat.Data4[5] = '\0';
  (this->WaveFormat).SubFormat.Data4[6] = '\0';
  (this->WaveFormat).SubFormat.Data4[7] = '\0';
  this->Encoding = UNKNOWN;
  InitAudioFormat(this,param_1,param_2,param_3);
  InitAudioEncoding(this);
  return this;
}

// FWasapiAudioFormat @ 148d41e10

FWasapiAudioFormat * __thiscall
Audio::FWasapiAudioFormat::FWasapiAudioFormat(FWasapiAudioFormat *this,tWAVEFORMATEX *param_1)

{
  undefined8 uVar1;
  ushort uVar2;
  ulong uVar3;
  ulong uVar4;
  ushort uVar5;
  ushort uVar6;
  
  (this->WaveFormat).Format.wFormatTag = 0;
  (this->WaveFormat).Format.nChannels = 0;
  (this->WaveFormat).Format.nSamplesPerSec = 0;
  (this->WaveFormat).Format.nAvgBytesPerSec = 0;
  (this->WaveFormat).Format.nBlockAlign = 0;
  (this->WaveFormat).Format.wBitsPerSample = 0;
  *(undefined8 *)&(this->WaveFormat).Format.cbSize = 0;
  (this->WaveFormat).SubFormat.Data1 = 0;
  (this->WaveFormat).SubFormat.Data2 = 0;
  (this->WaveFormat).SubFormat.Data3 = 0;
  (this->WaveFormat).SubFormat.Data4[0] = '\0';
  (this->WaveFormat).SubFormat.Data4[1] = '\0';
  (this->WaveFormat).SubFormat.Data4[2] = '\0';
  (this->WaveFormat).SubFormat.Data4[3] = '\0';
  (this->WaveFormat).SubFormat.Data4[4] = '\0';
  (this->WaveFormat).SubFormat.Data4[5] = '\0';
  (this->WaveFormat).SubFormat.Data4[6] = '\0';
  (this->WaveFormat).SubFormat.Data4[7] = '\0';
  this->Encoding = UNKNOWN;
  if ((param_1->wFormatTag == 0xfffe) && (0x15 < param_1->cbSize)) {
    uVar2 = param_1->nChannels;
    uVar3 = param_1->nSamplesPerSec;
    uVar4 = param_1->nAvgBytesPerSec;
    uVar5 = param_1->nBlockAlign;
    uVar6 = param_1->wBitsPerSample;
    (this->WaveFormat).Format.wFormatTag = param_1->wFormatTag;
    (this->WaveFormat).Format.nChannels = uVar2;
    (this->WaveFormat).Format.nSamplesPerSec = uVar3;
    (this->WaveFormat).Format.nAvgBytesPerSec = uVar4;
    (this->WaveFormat).Format.nBlockAlign = uVar5;
    (this->WaveFormat).Format.wBitsPerSample = uVar6;
    uVar1 = *(undefined8 *)((longlong)&param_1[1].nSamplesPerSec + 2);
    *(undefined8 *)&(this->WaveFormat).Format.cbSize = *(undefined8 *)&param_1->cbSize;
    (this->WaveFormat).SubFormat.Data1 = (int)uVar1;
    (this->WaveFormat).SubFormat.Data2 = (short)((ulonglong)uVar1 >> 0x20);
    (this->WaveFormat).SubFormat.Data3 = (short)((ulonglong)uVar1 >> 0x30);
    *(undefined8 *)(this->WaveFormat).SubFormat.Data4 = *(undefined8 *)&param_1[1].wBitsPerSample;
    InitAudioEncoding(this);
    return this;
  }
  uVar2 = param_1->nChannels;
  uVar3 = param_1->nSamplesPerSec;
  uVar4 = param_1->nAvgBytesPerSec;
  uVar5 = param_1->nBlockAlign;
  uVar6 = param_1->wBitsPerSample;
  (this->WaveFormat).Format.wFormatTag = param_1->wFormatTag;
  (this->WaveFormat).Format.nChannels = uVar2;
  (this->WaveFormat).Format.nSamplesPerSec = uVar3;
  (this->WaveFormat).Format.nAvgBytesPerSec = uVar4;
  (this->WaveFormat).Format.nBlockAlign = uVar5;
  (this->WaveFormat).Format.wBitsPerSample = uVar6;
  (this->WaveFormat).Format.cbSize = param_1->cbSize;
  InitAudioEncoding(this);
  return this;
}

// FWasapiAudioFormat @ 148d41e90

FWasapiAudioFormat * __thiscall
Audio::FWasapiAudioFormat::FWasapiAudioFormat(FWasapiAudioFormat *this)

{
  (this->WaveFormat).Format.wFormatTag = 0;
  (this->WaveFormat).Format.nChannels = 0;
  (this->WaveFormat).Format.nSamplesPerSec = 0;
  (this->WaveFormat).Format.nAvgBytesPerSec = 0;
  (this->WaveFormat).Format.nBlockAlign = 0;
  (this->WaveFormat).Format.wBitsPerSample = 0;
  *(undefined8 *)&(this->WaveFormat).Format.cbSize = 0;
  (this->WaveFormat).SubFormat.Data1 = 0;
  (this->WaveFormat).SubFormat.Data2 = 0;
  (this->WaveFormat).SubFormat.Data3 = 0;
  (this->WaveFormat).SubFormat.Data4[0] = '\0';
  (this->WaveFormat).SubFormat.Data4[1] = '\0';
  (this->WaveFormat).SubFormat.Data4[2] = '\0';
  (this->WaveFormat).SubFormat.Data4[3] = '\0';
  (this->WaveFormat).SubFormat.Data4[4] = '\0';
  (this->WaveFormat).SubFormat.Data4[5] = '\0';
  (this->WaveFormat).SubFormat.Data4[6] = '\0';
  (this->WaveFormat).SubFormat.Data4[7] = '\0';
  this->Encoding = UNKNOWN;
  InitAudioFormat(this,2,0xac44,PCM_16);
  InitAudioEncoding(this);
  return this;
}

// DetermineAudioEncoding @ 148d41ee0

EWasapiAudioEncoding __cdecl
Audio::FWasapiAudioFormat::DetermineAudioEncoding(WAVEFORMATEXTENSIBLE *param_1)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  EWasapiAudioEncoding EVar4;
  
  uVar1 = (param_1->Format).wFormatTag;
  if (uVar1 == 3) {
    uVar1 = (param_1->Format).wBitsPerSample;
  }
  else {
    if (uVar1 == 1) {
      uVar1 = (param_1->Format).wBitsPerSample;
      if (uVar1 == 8) {
        return PCM_8;
      }
      if (uVar1 == 0x10) {
        return PCM_16;
      }
      if (uVar1 == 0x18) {
        return PCM_24;
      }
      if (uVar1 != 0x20) {
        return UNKNOWN;
      }
      return PCM_32;
    }
    if (uVar1 != 0xfffe) {
      return UNKNOWN;
    }
    if ((param_1->Format).cbSize < 0x16) {
      return UNKNOWN;
    }
    lVar2._0_4_ = (param_1->SubFormat).Data1;
    lVar2._4_2_ = (param_1->SubFormat).Data2;
    lVar2._6_2_ = (param_1->SubFormat).Data3;
    if ((lVar2 != _GUID_00000003_0000_0010_8000_00aa00389b71._0_8_) ||
       (*(longlong *)(param_1->SubFormat).Data4 != _GUID_00000003_0000_0010_8000_00aa00389b71._8_8_)
       ) {
      lVar3._0_4_ = (param_1->SubFormat).Data1;
      lVar3._4_2_ = (param_1->SubFormat).Data2;
      lVar3._6_2_ = (param_1->SubFormat).Data3;
      if (lVar3 != _GUID_00000001_0000_0010_8000_00aa00389b71._0_8_) {
        return UNKNOWN;
      }
      if (*(longlong *)(param_1->SubFormat).Data4 !=
          _GUID_00000001_0000_0010_8000_00aa00389b71._8_8_) {
        return UNKNOWN;
      }
      uVar1 = (param_1->Samples).wValidBitsPerSample;
      if (uVar1 == 8) {
        return (param_1->Format).wBitsPerSample == 8;
      }
      if (uVar1 != 0x10) {
        if (uVar1 != 0x18) {
          if (uVar1 != 0x20) {
            return UNKNOWN;
          }
          EVar4 = UNKNOWN;
          if ((param_1->Format).wBitsPerSample == 0x20) {
            EVar4 = PCM_32;
          }
          return EVar4;
        }
        uVar1 = (param_1->Format).wBitsPerSample;
        if (uVar1 == 0x20) {
          return PCM_24_IN_32;
        }
        if (uVar1 != 0x18) {
          return UNKNOWN;
        }
        return PCM_24;
      }
      EVar4 = UNKNOWN;
      if ((param_1->Format).wBitsPerSample == 0x10) {
        EVar4 = PCM_16;
      }
      return EVar4;
    }
    uVar1 = (param_1->Format).wBitsPerSample;
  }
  if (uVar1 == 0x20) {
    return FLOATING_POINT_32;
  }
  if (uVar1 != 0x40) {
    return UNKNOWN;
  }
  return FLOATING_POINT_64;
}

// EncodingToBitDepth @ 148d42000

ushort __cdecl Audio::FWasapiAudioFormat::EncodingToBitDepth(EWasapiAudioEncoding param_1)

{
  switch(param_1) {
  case PCM_8:
    return 8;
  case PCM_16:
    return 0x10;
  case PCM_24:
    return 0x18;
  case PCM_24_IN_32:
  case PCM_32:
  case FLOATING_POINT_32:
    return 0x20;
  case FLOATING_POINT_64:
    return 0x40;
  default:
    return 0;
  }
}

// GetBitsPerSample @ 148d420c0

uint __thiscall Audio::FWasapiAudioFormat::GetBitsPerSample(FWasapiAudioFormat *this)

{
  return (uint)(this->WaveFormat).Format.wBitsPerSample;
}

// GetBytesPerSample @ 148d420d0

uint __thiscall Audio::FWasapiAudioFormat::GetBytesPerSample(FWasapiAudioFormat *this)

{
  return (uint)((this->WaveFormat).Format.wBitsPerSample >> 3);
}

// GetEncoding @ 148d420e0

EWasapiAudioEncoding __thiscall Audio::FWasapiAudioFormat::GetEncoding(FWasapiAudioFormat *this)

{
  return this->Encoding;
}

// GetEncodingString @ 148d420f0

FString * __thiscall
Audio::FWasapiAudioFormat::GetEncodingString
          (FWasapiAudioFormat *this,FString *__return_storage_ptr__)

{
  switch(this->Encoding) {
  case PCM_8:
    ::FString::FString(__return_storage_ptr__,L"8-Bit PCM");
    return __return_storage_ptr__;
  case PCM_16:
    ::FString::FString(__return_storage_ptr__,L"16-Bit PCM");
    return __return_storage_ptr__;
  case PCM_24:
    ::FString::FString(__return_storage_ptr__,L"24-Bit PCM");
    return __return_storage_ptr__;
  case PCM_24_IN_32:
    ::FString::FString(__return_storage_ptr__,L"24-Bit PCM (32-bit Container)");
    return __return_storage_ptr__;
  case PCM_32:
    ::FString::FString(__return_storage_ptr__,L"PCM_32 PCM");
    return __return_storage_ptr__;
  case FLOATING_POINT_32:
    ::FString::FString(__return_storage_ptr__,L"32-Bit Floating Point");
    return __return_storage_ptr__;
  case FLOATING_POINT_64:
    ::FString::FString(__return_storage_ptr__,L"64-Bit Floating Point");
    return __return_storage_ptr__;
  default:
    ::FString::FString(__return_storage_ptr__,L"UNKNOWN");
    return __return_storage_ptr__;
  }
}

// GetFrameSizeInBytes @ 148d42210

uint __thiscall Audio::FWasapiAudioFormat::GetFrameSizeInBytes(FWasapiAudioFormat *this)

{
  return (uint)(this->WaveFormat).Format.nBlockAlign;
}

// GetNumChannels @ 148d42220

uint __thiscall Audio::FWasapiAudioFormat::GetNumChannels(FWasapiAudioFormat *this)

{
  return (uint)(this->WaveFormat).Format.nChannels;
}

// GetSampleRate @ 148d42230

uint __thiscall Audio::FWasapiAudioFormat::GetSampleRate(FWasapiAudioFormat *this)

{
  return (this->WaveFormat).Format.nSamplesPerSec;
}

// GetWaveFormat @ 148d42240

tWAVEFORMATEX * __thiscall Audio::FWasapiAudioFormat::GetWaveFormat(FWasapiAudioFormat *this)

{
  return (tWAVEFORMATEX *)this;
}

// InitAudioEncoding @ 148d42250

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FWasapiAudioFormat::InitAudioEncoding(FWasapiAudioFormat *this)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  EWasapiAudioEncoding EVar4;
  
  uVar1 = (this->WaveFormat).Format.wFormatTag;
  if (uVar1 == 3) {
LAB_148d42259:
    uVar1 = (this->WaveFormat).Format.wBitsPerSample;
    if (uVar1 == 0x20) {
      this->Encoding = FLOATING_POINT_32;
      return;
    }
    if (uVar1 == 0x40) {
      this->Encoding = FLOATING_POINT_64;
      return;
    }
  }
  else if (uVar1 == 1) {
    uVar1 = (this->WaveFormat).Format.wBitsPerSample;
    if (uVar1 == 8) {
      this->Encoding = PCM_8;
      return;
    }
    if (uVar1 == 0x10) {
      this->Encoding = PCM_16;
      return;
    }
    if (uVar1 == 0x18) {
LAB_148d42343:
      this->Encoding = PCM_24;
      return;
    }
    if (uVar1 == 0x20) {
      this->Encoding = PCM_32;
      return;
    }
  }
  else if ((uVar1 == 0xfffe) && (0x15 < (this->WaveFormat).Format.cbSize)) {
    lVar2._0_4_ = (this->WaveFormat).SubFormat.Data1;
    lVar2._4_2_ = (this->WaveFormat).SubFormat.Data2;
    lVar2._6_2_ = (this->WaveFormat).SubFormat.Data3;
    if ((lVar2 == _GUID_00000003_0000_0010_8000_00aa00389b71._0_8_) &&
       (*(longlong *)(this->WaveFormat).SubFormat.Data4 ==
        _GUID_00000003_0000_0010_8000_00aa00389b71._8_8_)) goto LAB_148d42259;
    lVar3._0_4_ = (this->WaveFormat).SubFormat.Data1;
    lVar3._4_2_ = (this->WaveFormat).SubFormat.Data2;
    lVar3._6_2_ = (this->WaveFormat).SubFormat.Data3;
    if ((lVar3 == _GUID_00000001_0000_0010_8000_00aa00389b71._0_8_) &&
       (*(longlong *)(this->WaveFormat).SubFormat.Data4 ==
        _GUID_00000001_0000_0010_8000_00aa00389b71._8_8_)) {
      uVar1 = (this->WaveFormat).Samples.wValidBitsPerSample;
      if (uVar1 == 8) {
        EVar4 = (this->WaveFormat).Format.wBitsPerSample == 8;
      }
      else {
        if (uVar1 != 0x10) {
          if (uVar1 == 0x18) {
            uVar1 = (this->WaveFormat).Format.wBitsPerSample;
            if (uVar1 == 0x20) {
              this->Encoding = PCM_24_IN_32;
              return;
            }
            if (uVar1 == 0x18) goto LAB_148d42343;
          }
          else if (uVar1 == 0x20) {
            EVar4 = UNKNOWN;
            if ((this->WaveFormat).Format.wBitsPerSample == 0x20) {
              EVar4 = PCM_32;
            }
            goto LAB_148d42361;
          }
          goto LAB_148d4236a;
        }
        EVar4 = UNKNOWN;
        if ((this->WaveFormat).Format.wBitsPerSample == 0x10) {
          EVar4 = PCM_16;
        }
      }
LAB_148d42361:
      this->Encoding = EVar4;
      if (EVar4 != UNKNOWN) {
        return;
      }
      goto LAB_148d4236e;
    }
  }
LAB_148d4236a:
  this->Encoding = UNKNOWN;
LAB_148d4236e:
  if ((byte)LogAudioPlatformSupportWasapi._0_1_ < 2) {
    return;
  }
  UE::Logging::Private::BasicLog<2>
            (&::LOG_Static,(FLogCategoryBase *)&LogAudioPlatformSupportWasapi);
  return;
}

// InitAudioFormat @ 148d423a0

void __thiscall
Audio::FWasapiAudioFormat::InitAudioFormat
          (FWasapiAudioFormat *this,ushort param_1,uint param_2,EWasapiAudioEncoding param_3)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  
  uVar4 = 0x18;
  switch(param_3) {
  case PCM_8:
    uVar4 = 8;
    break;
  case PCM_16:
    uVar4 = 0x10;
    break;
  case PCM_24:
    break;
  case PCM_24_IN_32:
  case PCM_32:
  case FLOATING_POINT_32:
    uVar4 = 0x20;
    break;
  case FLOATING_POINT_64:
    uVar4 = 0x40;
    break;
  default:
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1378983427444834258>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioPlatformSupport\\Windows\\WASAPI\\Private\\WasapiAudioFormat.cpp"
                       ,0x2e,"BitDepth != 0");
    if (!bVar3) {
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (this->WaveFormat).Format.nChannels = param_1;
  uVar1 = (uVar4 >> 3) * param_1;
  (this->WaveFormat).Format.wFormatTag = 0xfffe;
  (this->WaveFormat).Format.cbSize = 0x16;
  (this->WaveFormat).Format.nSamplesPerSec = param_2;
  (this->WaveFormat).Format.wBitsPerSample = uVar4;
  (this->WaveFormat).Format.nBlockAlign = uVar1;
  (this->WaveFormat).Samples.wValidBitsPerSample = uVar4;
  (this->WaveFormat).Format.nAvgBytesPerSec = uVar1 * param_2;
  if (1 < (byte)(param_3 - FLOATING_POINT_32)) {
    (this->WaveFormat).SubFormat = (_GUID)_GUID_00000001_0000_0010_8000_00aa00389b71;
    if (param_3 != PCM_24_IN_32) {
      return;
    }
    (this->WaveFormat).Samples.wValidBitsPerSample = 0x18;
    return;
  }
  (this->WaveFormat).SubFormat = (_GUID)_GUID_00000003_0000_0010_8000_00aa00389b71;
  return;
}

