// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WindowsPlatformFeatures
// Functions: 6

// CreateAudioStream @ 148d25ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<unsigned_long> __thiscall
FWmfMp4Writer::CreateAudioStream(FWmfMp4Writer *this,FString *param_1,FAudioConfig *param_2)

{
  IMFSinkWriter *pIVar1;
  int iVar2;
  HRESULT HVar3;
  wchar_t *pwVar4;
  FStaticBasicLogRecord *pFVar5;
  longlong in_R9;
  undefined1 auStack_98 [32];
  IMFMediaType *local_78;
  FString local_70;
  undefined4 local_60 [2];
  _GUID local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_98;
  if ((param_2->Codec).Data.ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_2->Codec).Data.AllocatorInstance.Data;
  }
  iVar2 = FGenericPlatformStricmp::Stricmp(pwVar4,"aac");
  if (iVar2 != 0) {
    if (1 < (byte)WMF._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&WMF);
    }
    *(undefined1 *)((longlong)&(param_1->Data).AllocatorInstance.Data + 4) = 0;
    return (TOptional<unsigned_long>)param_1;
  }
  local_78 = (IMFMediaType *)0x0;
  local_58 = MFAudioFormat_AAC;
  HVar3 = MFCreateMediaType(&local_78);
  if (HVar3 < 0) {
    if (1 < (byte)WMF._0_1_) {
      GetComErrorDescription(&local_70,HVar3);
      pFVar5 = &::LOG_Static;
LAB_148d25f85:
      UE::Logging::Private::BasicLog<2>(pFVar5,(FLogCategoryBase *)&WMF);
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    HVar3 = (*local_78->lpVtbl->SetGUID)
                      (local_78,(GUID *)&MF_MT_MAJOR_TYPE,(GUID *)&MFMediaType_Audio);
    if (HVar3 < 0) {
      if (1 < (byte)WMF._0_1_) {
        GetComErrorDescription(&local_70,HVar3);
        pFVar5 = &::LOG_Static;
        goto LAB_148d25f85;
      }
    }
    else {
      HVar3 = (*local_78->lpVtbl->SetGUID)(local_78,(GUID *)&MF_MT_SUBTYPE,(GUID *)&local_58);
      if (HVar3 < 0) {
        if (1 < (byte)WMF._0_1_) {
          GetComErrorDescription(&local_70,HVar3);
          pFVar5 = &::LOG_Static;
          goto LAB_148d25f85;
        }
      }
      else {
        HVar3 = (*local_78->lpVtbl->SetUINT32)(local_78,(GUID *)&MF_MT_AUDIO_BITS_PER_SAMPLE,0x10);
        if (HVar3 < 0) {
          if (1 < (byte)WMF._0_1_) {
            GetComErrorDescription(&local_70,HVar3);
            pFVar5 = &::LOG_Static;
            goto LAB_148d25f85;
          }
        }
        else {
          HVar3 = (*local_78->lpVtbl->SetUINT32)
                            (local_78,(GUID *)&MF_MT_AUDIO_SAMPLES_PER_SECOND,
                             *(UINT32 *)(in_R9 + 0x10));
          if (HVar3 < 0) {
            if (1 < (byte)WMF._0_1_) {
              GetComErrorDescription(&local_70,HVar3);
              pFVar5 = &::LOG_Static;
              goto LAB_148d25f85;
            }
          }
          else {
            HVar3 = (*local_78->lpVtbl->SetUINT32)
                              (local_78,(GUID *)&MF_MT_AUDIO_NUM_CHANNELS,*(UINT32 *)(in_R9 + 0x14))
            ;
            if (HVar3 < 0) {
              if (1 < (byte)WMF._0_1_) {
                GetComErrorDescription(&local_70,HVar3);
                pFVar5 = (FStaticBasicLogRecord *)&PTR_u__MediaType_>Set_151cd1418;
                goto LAB_148d25f85;
              }
            }
            else {
              HVar3 = (*local_78->lpVtbl->SetUINT32)
                                (local_78,(GUID *)&MF_MT_AUDIO_AVG_BYTES_PER_SECOND,
                                 *(UINT32 *)(in_R9 + 0x18));
              if (HVar3 < 0) {
                if (1 < (byte)WMF._0_1_) {
                  GetComErrorDescription(&local_70,HVar3);
                  pFVar5 = &::LOG_Static;
                  goto LAB_148d25f85;
                }
              }
              else {
                pIVar1 = (this->Writer).Reference;
                local_60[0] = 0;
                iVar2 = (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1,local_78,local_60);
                if (-1 < iVar2) {
                  pIVar1 = (this->Writer).Reference;
                  iVar2 = (**(code **)((longlong)*pIVar1 + 0x20))(pIVar1,local_60[0],local_78,0);
                  if (iVar2 < 0) {
                    if (1 < (byte)WMF._0_1_) {
                      GetComErrorDescription(&local_70,iVar2);
                      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&WMF);
                      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_70.Data.AllocatorInstance.Data);
                      }
                    }
                    *(undefined1 *)((longlong)&(param_1->Data).AllocatorInstance.Data + 4) = 0;
                    if (local_78 == (IMFMediaType *)0x0) {
                      return (TOptional<unsigned_long>)param_1;
                    }
                    (*local_78->lpVtbl->Release)(local_78);
                    return (TOptional<unsigned_long>)param_1;
                  }
                  *(undefined4 *)&(param_1->Data).AllocatorInstance.Data = local_60[0];
                  *(undefined1 *)((longlong)&(param_1->Data).AllocatorInstance.Data + 4) = 1;
                  goto LAB_148d25fa9;
                }
                if (1 < (byte)WMF._0_1_) {
                  GetComErrorDescription(&local_70,iVar2);
                  pFVar5 = &::LOG_Static;
                  goto LAB_148d25f85;
                }
              }
            }
          }
        }
      }
    }
  }
  *(undefined1 *)((longlong)&(param_1->Data).AllocatorInstance.Data + 4) = 0;
LAB_148d25fa9:
  if (local_78 != (IMFMediaType *)0x0) {
    (*local_78->lpVtbl->Release)(local_78);
  }
  return (TOptional<unsigned_long>)param_1;
}

// CreateVideoStream @ 148d261d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<unsigned_long> __thiscall
FWmfMp4Writer::CreateVideoStream(FWmfMp4Writer *this,FString *param_1,FVideoConfig *param_2)

{
  IMFSinkWriter *pIVar1;
  int iVar2;
  HRESULT HVar3;
  wchar_t *pwVar4;
  FStaticBasicLogRecord *pFVar5;
  longlong in_R9;
  undefined1 auStack_98 [32];
  IMFMediaType *local_78;
  FString local_70;
  undefined4 local_60 [2];
  _GUID local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_98;
  if ((param_2->Codec).Data.ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_2->Codec).Data.AllocatorInstance.Data;
  }
  iVar2 = FGenericPlatformStricmp::Stricmp(pwVar4,"h264");
  if (iVar2 != 0) {
    if (1 < (byte)WMF._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&WMF);
    }
    *(undefined1 *)((longlong)&(param_1->Data).AllocatorInstance.Data + 4) = 0;
    return (TOptional<unsigned_long>)param_1;
  }
  local_78 = (IMFMediaType *)0x0;
  local_58 = MFVideoFormat_H264;
  HVar3 = MFCreateMediaType(&local_78);
  if (HVar3 < 0) {
    if (1 < (byte)WMF._0_1_) {
      GetComErrorDescription(&local_70,HVar3);
      pFVar5 = &::LOG_Static;
LAB_148d264d9:
      UE::Logging::Private::BasicLog<2>(pFVar5,(FLogCategoryBase *)&WMF);
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    HVar3 = (*local_78->lpVtbl->SetGUID)
                      (local_78,(GUID *)&MF_MT_MAJOR_TYPE,(GUID *)&MFMediaType_Video);
    if (HVar3 < 0) {
      if (1 < (byte)WMF._0_1_) {
        GetComErrorDescription(&local_70,HVar3);
        pFVar5 = &::LOG_Static;
        goto LAB_148d264d9;
      }
    }
    else {
      HVar3 = (*local_78->lpVtbl->SetGUID)(local_78,(GUID *)&MF_MT_SUBTYPE,(GUID *)&local_58);
      if (HVar3 < 0) {
        if (1 < (byte)WMF._0_1_) {
          GetComErrorDescription(&local_70,HVar3);
          pFVar5 = &::LOG_Static;
          goto LAB_148d264d9;
        }
      }
      else {
        HVar3 = (*local_78->lpVtbl->SetUINT32)
                          (local_78,(GUID *)&MF_MT_AVG_BITRATE,*(UINT32 *)(in_R9 + 0x1c));
        if (HVar3 < 0) {
          if (1 < (byte)WMF._0_1_) {
            GetComErrorDescription(&local_70,HVar3);
            pFVar5 = &::LOG_Static;
            goto LAB_148d264d9;
          }
        }
        else {
          HVar3 = (*local_78->lpVtbl->SetUINT64)
                            (local_78,(GUID *)&MF_MT_FRAME_RATE,
                             (ulonglong)*(uint *)(in_R9 + 0x18) << 0x20 | 1);
          if (HVar3 < 0) {
            if (1 < (byte)WMF._0_1_) {
              GetComErrorDescription(&local_70,HVar3);
              pFVar5 = &::LOG_Static;
              goto LAB_148d264d9;
            }
          }
          else {
            HVar3 = (*local_78->lpVtbl->SetUINT64)
                              (local_78,(GUID *)&MF_MT_FRAME_SIZE,
                               CONCAT44(*(undefined4 *)(in_R9 + 0x10),*(undefined4 *)(in_R9 + 0x14))
                              );
            if (HVar3 < 0) {
              if (1 < (byte)WMF._0_1_) {
                GetComErrorDescription(&local_70,HVar3);
                pFVar5 = (FStaticBasicLogRecord *)&PTR_u__MFSetAttribute_151cd1938;
                goto LAB_148d264d9;
              }
            }
            else {
              HVar3 = (*local_78->lpVtbl->SetUINT64)
                                (local_78,(GUID *)&MF_MT_PIXEL_ASPECT_RATIO,0x100000001);
              if (HVar3 < 0) {
                if (1 < (byte)WMF._0_1_) {
                  GetComErrorDescription(&local_70,HVar3);
                  pFVar5 = &::LOG_Static;
                  goto LAB_148d264d9;
                }
              }
              else {
                HVar3 = (*local_78->lpVtbl->SetUINT32)(local_78,(GUID *)&MF_MT_INTERLACE_MODE,2);
                if (HVar3 < 0) {
                  if (1 < (byte)WMF._0_1_) {
                    GetComErrorDescription(&local_70,HVar3);
                    pFVar5 = &::LOG_Static;
                    goto LAB_148d264d9;
                  }
                }
                else {
                  pIVar1 = (this->Writer).Reference;
                  local_60[0] = 0;
                  iVar2 = (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1,local_78,local_60);
                  if (-1 < iVar2) {
                    pIVar1 = (this->Writer).Reference;
                    iVar2 = (**(code **)((longlong)*pIVar1 + 0x20))(pIVar1,local_60[0],local_78,0);
                    if (iVar2 < 0) {
                      if (1 < (byte)WMF._0_1_) {
                        GetComErrorDescription(&local_70,iVar2);
                        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&WMF);
                        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_70.Data.AllocatorInstance.Data);
                        }
                      }
                      *(undefined1 *)((longlong)&(param_1->Data).AllocatorInstance.Data + 4) = 0;
                      if (local_78 == (IMFMediaType *)0x0) {
                        return (TOptional<unsigned_long>)param_1;
                      }
                      (*local_78->lpVtbl->Release)(local_78);
                      return (TOptional<unsigned_long>)param_1;
                    }
                    *(undefined4 *)&(param_1->Data).AllocatorInstance.Data = local_60[0];
                    *(undefined1 *)((longlong)&(param_1->Data).AllocatorInstance.Data + 4) = 1;
                    goto LAB_148d264fd;
                  }
                  if (1 < (byte)WMF._0_1_) {
                    GetComErrorDescription(&local_70,iVar2);
                    pFVar5 = &::LOG_Static;
                    goto LAB_148d264d9;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *(undefined1 *)((longlong)&(param_1->Data).AllocatorInstance.Data + 4) = 0;
LAB_148d264fd:
  if (local_78 != (IMFMediaType *)0x0) {
    (*local_78->lpVtbl->Release)(local_78);
  }
  return (TOptional<unsigned_long>)param_1;
}

// Finalize @ 148d26c20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FWmfMp4Writer::Finalize(FWmfMp4Writer *this)

{
  int iVar1;
  FString local_18;
  
  iVar1 = (**(code **)((longlong)*(this->Writer).Reference + 0x58))();
  if (iVar1 < 0) {
    if (1 < (byte)WMF._0_1_) {
      GetComErrorDescription(&local_18,iVar1);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&WMF);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    return false;
  }
  if (6 < (byte)WMF._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&WMF);
  }
  return true;
}

// Initialize @ 148d281c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FWmfMp4Writer::Initialize(FWmfMp4Writer *this,wchar_t *param_1)

{
  IMFSinkWriter *pIVar1;
  int iVar2;
  FString local_18;
  
  pIVar1 = (this->Writer).Reference;
  if (pIVar1 != (IMFSinkWriter *)0x0) {
    (this->Writer).Reference = (IMFSinkWriter *)0x0;
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  iVar2 = MFCreateSinkWriterFromURL(param_1,0,0,this);
  if (iVar2 < 0) {
    if (1 < (byte)WMF._0_1_) {
      GetComErrorDescription(&local_18,iVar2);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&WMF);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    return false;
  }
  if (5 < (byte)WMF._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&WMF);
  }
  return true;
}

// Start @ 148d2a840

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FWmfMp4Writer::Start(FWmfMp4Writer *this)

{
  int iVar1;
  FString local_18;
  
  iVar1 = (**(code **)((longlong)*(this->Writer).Reference + 0x28))();
  if (iVar1 < 0) {
    if (1 < (byte)WMF._0_1_) {
      GetComErrorDescription(&local_18,iVar1);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&WMF);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    return false;
  }
  return true;
}

// Write @ 148d2ae30

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FWmfMp4Writer::Write(FWmfMp4Writer *this,FMediaPacket *param_1,ulong param_2)

{
  IMFSinkWriter *pIVar1;
  bool bVar2;
  HRESULT HVar3;
  int iVar4;
  FString *pFVar5;
  FStaticBasicLogRecord *pFVar6;
  IMFMediaBuffer *local_res10 [2];
  BYTE *local_res20;
  FString local_60;
  FIMFSampleWrapper local_50 [2];
  
  local_50[0].MediaType = param_1->Type;
  local_50[0].Sample.Reference = (IMFSample *)0x0;
  bVar2 = AVEncoder::FIMFSampleWrapper::CreateSample(local_50);
  if (!bVar2) {
    bVar2 = false;
    goto LAB_148d2b0f4;
  }
  local_res10[0] = (IMFMediaBuffer *)0x0;
  HVar3 = MFCreateAlignedMemoryBuffer((param_1->Data).ArrayNum,0,local_res10);
  if (HVar3 < 0) {
    if (1 < (byte)WMF._0_1_) {
      pFVar5 = GetComErrorDescription(&local_60,HVar3);
      if ((pFVar5->Data).ArrayNum == 0) {
        pFVar6 = &::LOG_Static;
      }
      else {
        pFVar6 = &::LOG_Static;
      }
LAB_148d2b01c:
      UE::Logging::Private::BasicLog<2>(pFVar6,(FLogCategoryBase *)&WMF);
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
    }
LAB_148d2b039:
    bVar2 = false;
  }
  else {
    local_res20 = (BYTE *)0x0;
    HVar3 = (*local_res10[0]->lpVtbl->Lock)(local_res10[0],&local_res20,(DWORD *)0x0,(DWORD *)0x0);
    if (HVar3 < 0) {
      if (1 < (byte)WMF._0_1_) {
        pFVar5 = GetComErrorDescription(&local_60,HVar3);
        if ((pFVar5->Data).ArrayNum == 0) {
          pFVar6 = &::LOG_Static;
        }
        else {
          pFVar6 = &::LOG_Static;
        }
        goto LAB_148d2b01c;
      }
      goto LAB_148d2b039;
    }
    memcpy(local_res20,(param_1->Data).AllocatorInstance.Data,(longlong)(param_1->Data).ArrayNum);
    HVar3 = (*local_res10[0]->lpVtbl->Unlock)(local_res10[0]);
    if (HVar3 < 0) {
      if (1 < (byte)WMF._0_1_) {
        pFVar5 = GetComErrorDescription(&local_60,HVar3);
        if ((pFVar5->Data).ArrayNum == 0) {
          pFVar6 = &::LOG_Static;
        }
        else {
          pFVar6 = &::LOG_Static;
        }
        goto LAB_148d2b01c;
      }
      goto LAB_148d2b039;
    }
    (*local_res10[0]->lpVtbl->SetCurrentLength)(local_res10[0],(param_1->Data).ArrayNum);
    (**(code **)((longlong)*local_50[0].Sample.Reference + 0x150))
              (local_50[0].Sample.Reference,local_res10[0]);
    AVEncoder::FIMFSampleWrapper::SetTime(local_50,(FTimespan)(param_1->Timestamp).Ticks);
    AVEncoder::FIMFSampleWrapper::SetDuration(local_50,(FTimespan)(param_1->Duration).Ticks);
    pIVar1 = (this->Writer).Reference;
    iVar4 = (**(code **)((longlong)*pIVar1 + 0x30))(pIVar1,param_2,local_50[0].Sample.Reference);
    if (iVar4 < 0) {
      if (1 < (byte)WMF._0_1_) {
        GetComErrorDescription(&local_60,iVar4);
        pFVar6 = &::LOG_Static;
        goto LAB_148d2b01c;
      }
      goto LAB_148d2b039;
    }
    if (6 < (byte)MP4._0_1_) {
      AVEncoder::FIMFSampleWrapper::GetDuration(local_50);
      AVEncoder::FIMFSampleWrapper::GetTime(local_50);
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&MP4);
    }
    bVar2 = true;
  }
  if (local_res10[0] != (IMFMediaBuffer *)0x0) {
    (*local_res10[0]->lpVtbl->Release)(local_res10[0]);
  }
LAB_148d2b0f4:
  if (local_50[0].Sample.Reference != (IMFSample *)0x0) {
    (**(code **)((longlong)*local_50[0].Sample.Reference + 0x10))();
  }
  return bVar2;
}

