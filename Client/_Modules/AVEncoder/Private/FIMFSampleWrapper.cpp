// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AVEncoder
// Functions: 8

// Clone @ 148d03c70

FIMFSampleWrapper * __thiscall
AVEncoder::FIMFSampleWrapper::Clone
          (FIMFSampleWrapper *this,FIMFSampleWrapper *__return_storage_ptr__)

{
  IMFSample *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FIMFSampleWrapper *pFVar6;
  int iVar7;
  undefined4 local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  longlong *local_res20;
  TRefCountPtr<IMFMediaBuffer> local_78;
  undefined8 local_70;
  undefined8 local_68;
  FString local_60;
  FString local_50 [2];
  
  iVar7 = 0;
  __return_storage_ptr__->MediaType = this->MediaType;
  (__return_storage_ptr__->Sample).Reference = (IMFSample *)0x0;
  if ((this->Sample).Reference == (IMFSample *)0x0) {
    return __return_storage_ptr__;
  }
  bVar3 = CreateSample(__return_storage_ptr__);
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Res.CreateSample()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\IMFSampleWrapper.cpp"
                         ,100,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FIMFSampleWrapper *)(*pcVar2)();
    return pFVar6;
  }
  pIVar1 = (this->Sample).Reference;
  local_res8[0] = 0;
  iVar4 = (**(code **)((longlong)*pIVar1 + 0x108))(pIVar1,local_res8);
  if ((iVar4 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(((HRESULT)(Sample->GetSampleFlags(&Flags))) >= 0)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\IMFSampleWrapper.cpp"
                         ,0x67,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FIMFSampleWrapper *)(*pcVar2)();
    return pFVar6;
  }
  pIVar1 = (__return_storage_ptr__->Sample).Reference;
  iVar4 = (**(code **)((longlong)*pIVar1 + 0x110))(pIVar1,local_res8[0]);
  if ((iVar4 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(((HRESULT)(Res.GetSample()->SetSampleFlags(Flags))) >= 0)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\IMFSampleWrapper.cpp"
                         ,0x68,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FIMFSampleWrapper *)(*pcVar2)();
    return pFVar6;
  }
  pIVar1 = (this->Sample).Reference;
  iVar4 = (**(code **)((longlong)*pIVar1 + 0x118))(pIVar1,&local_70);
  if (iVar4 < 0) {
    GetComErrorDescription(&local_60,iVar4);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(((HRESULT)(hr)) >= 0)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\IMFSampleWrapper.cpp"
                       ,0x34,L"%s");
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FIMFSampleWrapper *)(*pcVar2)();
      return pFVar6;
    }
  }
  pIVar1 = (__return_storage_ptr__->Sample).Reference;
  iVar4 = (**(code **)((longlong)*pIVar1 + 0x120))(pIVar1,local_70);
  if ((iVar4 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(((HRESULT)(Sample->SetSampleTime(Time.GetTicks()))) >= 0)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\IMFSampleWrapper.cpp"
                         ,0x3a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FIMFSampleWrapper *)(*pcVar2)();
    return pFVar6;
  }
  pIVar1 = (this->Sample).Reference;
  iVar4 = (**(code **)((longlong)*pIVar1 + 0x128))(pIVar1,&local_68);
  if (iVar4 < 0) {
    GetComErrorDescription(local_50,iVar4);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(((HRESULT)(hr)) >= 0)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\IMFSampleWrapper.cpp"
                       ,0x41,L"%s");
    if (local_50[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50[0].Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FIMFSampleWrapper *)(*pcVar2)();
      return pFVar6;
    }
  }
  pIVar1 = (__return_storage_ptr__->Sample).Reference;
  iVar4 = (**(code **)((longlong)*pIVar1 + 0x130))(pIVar1,local_68);
  if ((iVar4 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(((HRESULT)(Sample->SetSampleDuration(Duration.GetTicks()))) >= 0)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\IMFSampleWrapper.cpp"
                         ,0x47,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FIMFSampleWrapper *)(*pcVar2)();
    return pFVar6;
  }
  if (this->MediaType == Video) {
    pIVar1 = (this->Sample).Reference;
    iVar4 = (**(code **)((longlong)*pIVar1 + 0x38))
                      (pIVar1,&MFSampleExtension_CleanPoint,local_res10);
    if (iVar4 < 0) {
      local_res10[0] = 0;
    }
    else if (((local_res10[0] != 0) &&
             (pIVar1 = (__return_storage_ptr__->Sample).Reference,
             iVar4 = (**(code **)((longlong)*pIVar1 + 0xa8))(pIVar1,&MFSampleExtension_CleanPoint,1)
             , iVar4 < 0)) &&
            (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("(((HRESULT)(Res.GetSample()->SetUINT32(MFSampleExtension_CleanPoint, 1))) >= 0)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\IMFSampleWrapper.cpp"
                                ,0x6f,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FIMFSampleWrapper *)(*pcVar2)();
      return pFVar6;
    }
  }
  pIVar1 = (this->Sample).Reference;
  local_res18[0] = 0;
  iVar4 = (**(code **)((longlong)*pIVar1 + 0x138))(pIVar1,local_res18);
  if ((iVar4 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(((HRESULT)(Sample->GetBufferCount(&BufferCount))) >= 0)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\IMFSampleWrapper.cpp"
                         ,0x54,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FIMFSampleWrapper *)(*pcVar2)();
    return pFVar6;
  }
  iVar4 = local_res18[0];
  if (local_res18[0] != 0) {
    do {
      pIVar1 = (this->Sample).Reference;
      local_res20 = (longlong *)0x0;
      iVar5 = (**(code **)((longlong)*pIVar1 + 0x140))(pIVar1,iVar7,&local_res20);
      if ((iVar5 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(((HRESULT)(Sample->GetBufferByIndex(i, SrcBuf.GetInitReference()))) >= 0)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\IMFSampleWrapper.cpp"
                             ,0x77,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FIMFSampleWrapper *)(*pcVar2)();
        return pFVar6;
      }
      AVEncoder::`anonymous_namespace'::CloneMediaBuffer(&local_78);
      pIVar1 = (__return_storage_ptr__->Sample).Reference;
      iVar5 = (**(code **)((longlong)*pIVar1 + 0x150))(pIVar1,local_78.Reference);
      if ((iVar5 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(((HRESULT)(Res.GetSample()->AddBuffer(DestBuf))) >= 0)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\IMFSampleWrapper.cpp"
                             ,0x7a,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FIMFSampleWrapper *)(*pcVar2)();
        return pFVar6;
      }
      if (local_78.Reference != (IMFMediaBuffer *)0x0) {
        (**(code **)((longlong)*local_78.Reference + 0x10))();
      }
      if (local_res20 != (longlong *)0x0) {
        (**(code **)(*local_res20 + 0x10))();
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 != iVar4);
  }
  return __return_storage_ptr__;
}

// CreateSample @ 148d07ea0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall AVEncoder::FIMFSampleWrapper::CreateSample(FIMFSampleWrapper *this)

{
  TRefCountPtr<IMFSample> *ppIMFSample;
  IMFSample *pIVar1;
  HRESULT HVar2;
  FString local_18;
  
  ppIMFSample = &this->Sample;
  pIVar1 = (this->Sample).Reference;
  if (pIVar1 != (IMFSample *)0x0) {
    ppIMFSample->Reference = (IMFSample *)0x0;
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = ppIMFSample->Reference;
  if (pIVar1 != (IMFSample *)0x0) {
    ppIMFSample->Reference = (IMFSample *)0x0;
    (*(*(IMFSampleVtbl **)pIVar1)->Release)((IMFSample *)pIVar1);
  }
  HVar2 = MFCreateSample((IMFSample **)ppIMFSample);
  if (HVar2 < 0) {
    if (1 < (byte)LogAVEncoder._0_1_) {
      GetComErrorDescription(&local_18,HVar2);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAVEncoder);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    return false;
  }
  return true;
}

// GetBufferCount @ 148d0af00

int __thiscall AVEncoder::FIMFSampleWrapper::GetBufferCount(FIMFSampleWrapper *this)

{
  IMFSample *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int local_res8 [8];
  
  pIVar1 = (this->Sample).Reference;
  local_res8[0] = 0;
  iVar4 = (**(code **)((longlong)*pIVar1 + 0x138))(pIVar1,local_res8);
  if (iVar4 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(((HRESULT)(Sample->GetBufferCount(&BufferCount))) >= 0)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\IMFSampleWrapper.cpp"
                       ,0x54,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  return local_res8[0];
}

// GetDuration @ 148d0b2d0

FTimespan __thiscall AVEncoder::FIMFSampleWrapper::GetDuration(FIMFSampleWrapper *this)

{
  IMFSample *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FTimespan FVar5;
  undefined8 *in_RDX;
  undefined8 local_res8;
  FString local_18;
  
  pIVar1 = (this->Sample).Reference;
  iVar4 = (**(code **)((longlong)*pIVar1 + 0x128))(pIVar1,&local_res8);
  if (iVar4 < 0) {
    GetComErrorDescription(&local_18,iVar4);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(((HRESULT)(hr)) >= 0)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\IMFSampleWrapper.cpp"
                       ,0x41,L"%s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar5.Ticks = (*pcVar2)();
      return (FTimespan)FVar5.Ticks;
    }
  }
  *in_RDX = local_res8;
  return (FTimespan)(long64)in_RDX;
}

// GetTime @ 148d0bdf0

FTimespan __thiscall AVEncoder::FIMFSampleWrapper::GetTime(FIMFSampleWrapper *this)

{
  IMFSample *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FTimespan FVar5;
  undefined8 *in_RDX;
  undefined8 local_res8;
  FString local_18;
  
  pIVar1 = (this->Sample).Reference;
  iVar4 = (**(code **)((longlong)*pIVar1 + 0x118))(pIVar1,&local_res8);
  if (iVar4 < 0) {
    GetComErrorDescription(&local_18,iVar4);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(((HRESULT)(hr)) >= 0)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\IMFSampleWrapper.cpp"
                       ,0x34,L"%s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar5.Ticks = (*pcVar2)();
      return (FTimespan)FVar5.Ticks;
    }
  }
  *in_RDX = local_res8;
  return (FTimespan)(long64)in_RDX;
}

// IsVideoKeyFrame @ 148d0d490

bool __thiscall AVEncoder::FIMFSampleWrapper::IsVideoKeyFrame(FIMFSampleWrapper *this)

{
  IMFSample *pIVar1;
  int iVar2;
  int local_res8 [8];
  
  if (this->MediaType == Video) {
    pIVar1 = (this->Sample).Reference;
    iVar2 = (**(code **)((longlong)*pIVar1 + 0x38))(pIVar1,&MFSampleExtension_CleanPoint,local_res8)
    ;
    if ((-1 < iVar2) && (local_res8[0] != 0)) {
      return true;
    }
  }
  return false;
}

// SetDuration @ 148d12110

void __thiscall AVEncoder::FIMFSampleWrapper::SetDuration(FIMFSampleWrapper *this,FTimespan param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = (**(code **)((longlong)*(this->Sample).Reference + 0x130))();
  if (iVar3 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(((HRESULT)(Sample->SetSampleDuration(Duration.GetTicks()))) >= 0)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\IMFSampleWrapper.cpp"
                       ,0x47,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// SetTime @ 148d134e0

void __thiscall AVEncoder::FIMFSampleWrapper::SetTime(FIMFSampleWrapper *this,FTimespan param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = (**(code **)((longlong)*(this->Sample).Reference + 0x120))();
  if (iVar3 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(((HRESULT)(Sample->SetSampleTime(Time.GetTicks()))) >= 0)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\IMFSampleWrapper.cpp"
                       ,0x3a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

