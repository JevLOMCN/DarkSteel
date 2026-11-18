// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// FSimpleWaveReader @ 14147e930

FSimpleWaveReader * __thiscall
Audio::FSimpleWaveReader::FSimpleWaveReader
          (FSimpleWaveReader *this,TUniquePtr<FArchive,TDefaultDelete<FArchive>_> *param_1)

{
  bool bVar1;
  
  (this->InputStream).Ptr = param_1->Ptr;
  param_1->Ptr = (FArchive *)0x0;
  this->SampleRate = 0;
  this->DataStartPos = 0;
  this->NumChannels = 0;
  this->DataSize = 0;
  this->bIsDataValid = false;
  bVar1 = ReadHeader(this,&this->SampleRate,&this->NumChannels,&this->DataSize);
  this->bIsDataValid = bVar1;
  return this;
}

// ~FSimpleWaveReader @ 141481710

void __thiscall Audio::FSimpleWaveReader::~FSimpleWaveReader(FSimpleWaveReader *this)

{
  FArchive *pFVar1;
  
  pFVar1 = (this->InputStream).Ptr;
  if (pFVar1 != (FArchive *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141481720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    return;
  }
  return;
}

// GetNumChannels @ 141499620

ushort __thiscall Audio::FSimpleWaveReader::GetNumChannels(FSimpleWaveReader *this)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  
  if (this->bIsDataValid != false) {
    return this->NumChannels;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("bIsDataValid",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Audio\\SimpleWaveReader.cpp"
                     ,0x42,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return this->NumChannels;
}

// GetNumSamples @ 141499680

uint __thiscall Audio::FSimpleWaveReader::GetNumSamples(FSimpleWaveReader *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (this->bIsDataValid == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsDataValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Audio\\SimpleWaveReader.cpp"
                       ,0x48,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return this->DataSize >> 2;
}

// GetSampleRate @ 14149a4c0

uint __thiscall Audio::FSimpleWaveReader::GetSampleRate(FSimpleWaveReader *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (this->bIsDataValid != false) {
    return this->SampleRate;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("bIsDataValid",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Audio\\SimpleWaveReader.cpp"
                     ,0x3c,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return this->SampleRate;
}

// IsDataValid @ 14149db50

bool __thiscall Audio::FSimpleWaveReader::IsDataValid(FSimpleWaveReader *this)

{
  return this->bIsDataValid;
}

// Read @ 1414ac230

bool __thiscall
Audio::FSimpleWaveReader::Read
          (FSimpleWaveReader *this,TArrayView<float_const_,int> *param_1,long64 *param_2)

{
  float *_Dst;
  FArchive *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  size_t _Size;
  
  if (this->bIsDataValid == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsDataValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Audio\\SimpleWaveReader.cpp"
                       ,0x1c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if (param_1->ArrayNum % (int)(uint)this->NumChannels != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutBuffer.Num() % NumChannels == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Audio\\SimpleWaveReader.cpp"
                       ,0x1f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  _Dst = param_1->DataPtr;
  _Size = (longlong)param_1->ArrayNum * 4;
  memset(_Dst,0,_Size);
  cVar5 = (**(code **)(*(longlong *)(this->InputStream).Ptr + 0x38))();
  if (cVar5 == '\0') {
    lVar6 = (**(code **)(*(longlong *)(this->InputStream).Ptr + 0x28))();
    pFVar1 = (this->InputStream).Ptr;
    uVar7 = ((ulonglong)this->DataSize + this->DataStartPos) - lVar6;
    if ((longlong)_Size < (longlong)uVar7) {
      uVar7 = _Size;
    }
    (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,_Dst,uVar7);
    *param_2 = uVar7 >> 2;
    uVar4 = (**(code **)(*(longlong *)(this->InputStream).Ptr + 0x38))();
  }
  else {
    *param_2 = 0;
    uVar4 = 1;
  }
  return (bool)uVar4;
}

// ReadHeader @ 1414ac360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FSimpleWaveReader::ReadHeader
          (FSimpleWaveReader *this,uint *param_1,ushort *param_2,uint *param_3)

{
  FArchive *pFVar1;
  uint *puVar2;
  long64 lVar3;
  FStaticBasicLogRecord *pFVar4;
  undefined1 auStack_88 [32];
  uint local_68;
  uint local_58;
  uint local_54;
  uint local_50 [2];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_88;
  pFVar1 = (this->InputStream).Ptr;
  (**(code **)(*(longlong *)pFVar1 + 0x1b8))(pFVar1,0);
  pFVar1 = (this->InputStream).Ptr;
  puVar2 = (uint *)**(undefined8 **)&pFVar1->field_0x8;
  if ((uint *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,&local_58,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar1,&local_58);
    }
  }
  else {
    local_58 = *puVar2;
    **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 4;
  }
  if (local_58 == 0x46464952) {
    pFVar1 = (this->InputStream).Ptr;
    local_50[0] = 0;
    puVar2 = (uint *)**(undefined8 **)&pFVar1->field_0x8;
    if ((uint *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar2 + 1) {
      if ((pFVar1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_50,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar1,local_50);
      }
    }
    else {
      local_50[0] = *puVar2;
      **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 4;
    }
    pFVar1 = (this->InputStream).Ptr;
    puVar2 = (uint *)**(undefined8 **)&pFVar1->field_0x8;
    if ((uint *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar2 + 1) {
      if ((pFVar1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,&local_58,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar1,&local_58);
      }
    }
    else {
      local_58 = *puVar2;
      **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 4;
    }
    if (local_58 == 0x45564157) {
      pFVar1 = (this->InputStream).Ptr;
      puVar2 = (uint *)**(undefined8 **)&pFVar1->field_0x8;
      if ((uint *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar2 + 1) {
        if ((pFVar1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,&local_58,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(pFVar1,&local_58);
        }
      }
      else {
        local_58 = *puVar2;
        **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 4;
      }
      if (local_58 == 0x20746d66) {
        pFVar1 = (this->InputStream).Ptr;
        local_38 = 0;
        local_48 = 0;
        uStack_40 = 0;
        local_54 = 0x14;
        puVar2 = (uint *)**(undefined8 **)&pFVar1->field_0x8;
        if ((uint *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar2 + 1) {
          if ((pFVar1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,&local_54,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(pFVar1,&local_54);
          }
        }
        else {
          local_54 = *puVar2;
          **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 4;
        }
        pFVar1 = (this->InputStream).Ptr;
        (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,&local_48,(longlong)(int)local_54);
        local_68 = (uint)uStack_40._6_2_;
        if (local_68 == 0x20) {
          local_68 = (uint)uStack_40._4_2_;
          if (uStack_40._4_2_ == (ushort)((local_48._2_2_ & 0x7ff) << 2)) {
            if ((int)uStack_40 == local_68 * local_48._4_4_) {
              local_68 = (uint)(ushort)local_48;
              if (local_68 == 3) {
                pFVar1 = (this->InputStream).Ptr;
                puVar2 = (uint *)**(undefined8 **)&pFVar1->field_0x8;
                if ((uint *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar2 + 1) {
                  if ((pFVar1->field_0x2a & 1) == 0) {
                    (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,&local_58,4);
                  }
                  else {
                    FArchive::SerializeByteOrderSwapped(pFVar1,&local_58);
                  }
                }
                else {
                  local_58 = *puVar2;
                  **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 4;
                }
                if (local_58 == 0x61746164) {
                  pFVar1 = (this->InputStream).Ptr;
                  puVar2 = (uint *)**(undefined8 **)&pFVar1->field_0x8;
                  if ((uint *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar2 + 1) {
                    if ((pFVar1->field_0x2a & 1) == 0) {
                      (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,param_3,4);
                    }
                    else {
                      FArchive::SerializeByteOrderSwapped(pFVar1,param_3);
                    }
                  }
                  else {
                    *param_3 = *puVar2;
                    **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 4;
                  }
                  if (*param_3 == 0) {
                    if (1 < (byte)LogAudioCore._0_1_) {
                      UE::Logging::Private::BasicLog<2>
                                (&::LOG_Static,(FLogCategoryBase *)&LogAudioCore);
                      return false;
                    }
                  }
                  else {
                    if (local_48._4_4_ == 0) {
                      if ((byte)LogAudioCore._0_1_ < 2) {
                        return false;
                      }
                      pFVar4 = &::LOG_Static;
                    }
                    else {
                      if (local_48._2_2_ != 0) {
                        *param_1 = local_48._4_4_;
                        *param_2 = local_48._2_2_;
                        lVar3 = (**(code **)(*(longlong *)(this->InputStream).Ptr + 0x28))();
                        this->DataStartPos = lVar3;
                        return true;
                      }
                      if ((byte)LogAudioCore._0_1_ < 2) {
                        return false;
                      }
                      pFVar4 = &::LOG_Static;
                    }
                    UE::Logging::Private::BasicLog<2>(pFVar4,(FLogCategoryBase *)&LogAudioCore);
                  }
                }
                else if (1 < (byte)LogAudioCore._0_1_) {
                  UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCore)
                  ;
                  return false;
                }
              }
              else if (1 < (byte)LogAudioCore._0_1_) {
                UE::Logging::Private::BasicLog<2>
                          ((FStaticBasicLogRecord *)&PTR_u___hs___Expected_1506180b8,
                           (FLogCategoryBase *)&LogAudioCore);
                return false;
              }
            }
            else if (1 < (byte)LogAudioCore._0_1_) {
              local_68 = (int)uStack_40;
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCore);
              return false;
            }
          }
          else if (1 < (byte)LogAudioCore._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCore);
            return false;
          }
        }
        else if (1 < (byte)LogAudioCore._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCore);
          return false;
        }
      }
      else if (1 < (byte)LogAudioCore._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCore);
        return false;
      }
    }
    else if (1 < (byte)LogAudioCore._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCore);
      return false;
    }
  }
  else if (1 < (byte)LogAudioCore._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCore);
    return false;
  }
  return false;
}

// SeekToFrame @ 1414b0470

void __thiscall Audio::FSimpleWaveReader::SeekToFrame(FSimpleWaveReader *this,uint param_1)

{
  FArchive *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if (this->bIsDataValid == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsDataValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Audio\\SimpleWaveReader.cpp"
                       ,0x15,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->InputStream).Ptr;
                    /* WARNING: Could not recover jumptable at 0x0001414b04ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pFVar1 + 0x1b8))
            (pFVar1,this->DataStartPos + (ulonglong)(this->NumChannels * param_1) * 4);
  return;
}

