// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioCaptureCore
// Functions: 12

// FAudioCaptureSynth @ 14d0bbfa0

FAudioCaptureSynth * __thiscall
Audio::FAudioCaptureSynth::FAudioCaptureSynth(FAudioCaptureSynth *this)

{
  this->_padding_ = (longlong)&___7FAudioCaptureSynth_Audio__6B_;
  this->NumSamplesEnqueued = 0;
  (this->CaptureInfo).DeviceName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CaptureInfo).DeviceName.Data.ArrayNum = 0;
  (this->CaptureInfo).DeviceName.Data.ArrayMax = 0;
  (this->CaptureInfo).DeviceId.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CaptureInfo).DeviceId.Data.ArrayNum = 0;
  (this->CaptureInfo).DeviceId.Data.ArrayMax = 0;
  FAudioCapture::FAudioCapture(&this->AudioCapture);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CaptureCriticalSection,4000);
  (this->AudioCaptureData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioCaptureData).ArrayNum = 0;
  (this->AudioCaptureData).ArrayMax = 0;
  this->bInitialized = false;
  this->bIsCapturing = false;
  return this;
}

// ~FAudioCaptureSynth @ 14d0bc080

void __thiscall Audio::FAudioCaptureSynth::~FAudioCaptureSynth(FAudioCaptureSynth *this)

{
  FScriptContainerElement *pFVar1;
  IAudioCaptureStream *pIVar2;
  
  this->_padding_ = (longlong)&___7FAudioCaptureSynth_Audio__6B_;
  pFVar1 = (this->AudioCaptureData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CaptureCriticalSection);
  pIVar2 = (this->AudioCapture).Impl.Ptr;
  if (pIVar2 != (IAudioCaptureStream *)0x0) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  pFVar1 = (this->CaptureInfo).DeviceId.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CaptureInfo).DeviceName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator() @ 14d0bc1c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Audio::FAudioCaptureSynth::OpenDefaultStream'::__l5::<lambda_1>::operator()
          (void *this,void *param_1,int param_2,int param_3,int param_4,double param_5,bool param_6)

{
  longlong lVar1;
  int iVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar3;
  
  iVar3 = param_2 * param_3;
  lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)this + 0x48);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(lpCriticalSection);
    lVar1 = *(longlong *)this;
    if (*(char *)(lVar1 + 0x81) != '\0') {
      iVar2 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar3,(ForAnyElementType *)(lVar1 + 0x70),(int *)(lVar1 + 0x78),
                         (int *)(lVar1 + 0x7c));
      if ((uint)(*(int *)(*(longlong *)this + 0x78) + iVar3) < 0x2ee01) {
        memcpy((void *)(*(longlong *)(*(longlong *)this + 0x70) + (longlong)iVar2 * 4),param_1,
               (longlong)iVar3 << 2);
      }
      else if (2 < (byte)LogAudioCaptureCore._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014d0bc28b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// AbortCapturing @ 14d0bc450

void __thiscall Audio::FAudioCaptureSynth::AbortCapturing(FAudioCaptureSynth *this)

{
  IAudioCaptureStream *pIVar1;
  
  pIVar1 = (this->AudioCapture).Impl.Ptr;
  if (pIVar1 != (IAudioCaptureStream *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x48))();
  }
  pIVar1 = (this->AudioCapture).Impl.Ptr;
  if (pIVar1 != (IAudioCaptureStream *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014d0bc479. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 0x30))();
    return;
  }
  return;
}

// GetAudioData @ 14d0bc670

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FAudioCaptureSynth::GetAudioData
          (FAudioCaptureSynth *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  lpCriticalSection = &this->CaptureCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = (this->AudioCaptureData).ArrayNum;
  if (0 < iVar1) {
    uVar2 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar1,&param_1->AllocatorInstance,&param_1->ArrayNum,&param_1->ArrayMax);
    if (uVar2 < 0x2ee01) {
      memcpy((param_1->AllocatorInstance).Data + (longlong)(int)uVar2 * 4,
             (this->AudioCaptureData).AllocatorInstance.Data,(longlong)iVar1 << 2);
      (this->AudioCaptureData).ArrayNum = 0;
      if ((this->AudioCaptureData).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&(this->AudioCaptureData).AllocatorInstance,0,
                   &(this->AudioCaptureData).ArrayMax);
      }
      bVar3 = true;
      goto LAB_14d0bc73f;
    }
    if (2 < (byte)LogAudioCaptureCore._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
    }
  }
  bVar3 = false;
LAB_14d0bc73f:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar3;
}

// GetDefaultCaptureDeviceInfo @ 14d0bc7d0

bool __thiscall
Audio::FAudioCaptureSynth::GetDefaultCaptureDeviceInfo
          (FAudioCaptureSynth *this,FCaptureDeviceInfo *param_1)

{
  IAudioCaptureStream *pIVar1;
  undefined1 uVar2;
  
  pIVar1 = (this->AudioCapture).Impl.Ptr;
  if (pIVar1 != (IAudioCaptureStream *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014d0bc7e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1,param_1,0xffffffff);
    return (bool)uVar2;
  }
  return false;
}

// GetNumSamplesEnqueued @ 14d0bc830

int __thiscall Audio::FAudioCaptureSynth::GetNumSamplesEnqueued(FAudioCaptureSynth *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  
  lpCriticalSection = &this->CaptureCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar1 = (this->AudioCaptureData).ArrayNum;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsCapturing @ 14d0bc930

bool __thiscall Audio::FAudioCaptureSynth::IsCapturing(FAudioCaptureSynth *this)

{
  return this->bIsCapturing;
}

// IsStreamOpen @ 14d0bc970

bool __thiscall Audio::FAudioCaptureSynth::IsStreamOpen(FAudioCaptureSynth *this)

{
  IAudioCaptureStream *pIVar1;
  undefined1 uVar2;
  
  pIVar1 = (this->AudioCapture).Impl.Ptr;
  if (pIVar1 != (IAudioCaptureStream *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014d0bc97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)((longlong)*pIVar1 + 0x60))();
    return (bool)uVar2;
  }
  return false;
}

// OpenDefaultStream @ 14d0bccf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall Audio::FAudioCaptureSynth::OpenDefaultStream(FAudioCaptureSynth *this)

{
  IAudioCaptureStream *pIVar1;
  char cVar2;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  undefined1 auStackY_f8 [32];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  code *local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  longlong *local_80;
  code *local_78 [2];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  longlong *local_50;
  code *local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  bVar5 = true;
  pIVar1 = (this->AudioCapture).Impl.Ptr;
  if ((pIVar1 != (IAudioCaptureStream *)0x0) &&
     (cVar2 = (**(code **)((longlong)*pIVar1 + 0x60))(), cVar2 != '\0')) {
    return true;
  }
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Audio::FAudioCaptureSynth::OpenDefaultStream'::`5'::<lambda_1>,0,0>
              ::_vftable_;
  local_20 = (longlong *)0x0;
  uStack_30 = this;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Audio::FAudioCaptureSynth::OpenDefaultStream'::__l5::<lambda_1>,void,void_const_*,int,int,int,double,bool>
             ::Call;
  pcVar3 = UE::Core::Private::Function::
           TFunctionRefCaller<`Audio::FAudioCaptureSynth::OpenDefaultStream'::__l5::<lambda_1>,void,void_const_*,int,int,int,double,bool>
           ::Call;
  if ((this->AudioCaptureData).ArrayMax < 0x2ee00) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0x2ee00,&(this->AudioCaptureData).AllocatorInstance,
               (this->AudioCaptureData).ArrayNum,&(this->AudioCaptureData).ArrayMax);
    pcVar3 = local_48;
  }
  pIVar1 = (this->AudioCapture).Impl.Ptr;
  local_c8 = 0;
  uStack_c4 = 0xffffffff;
  uStack_c0 = 0xffffffff;
  local_48 = (code *)0x0;
  uStack_bc = 0xffffffff;
  local_b8 = 6;
  local_80 = local_20;
  local_98 = (undefined4)local_38;
  uStack_94 = local_38._4_4_;
  uStack_90 = (undefined4)uStack_30;
  uStack_8c = uStack_30._4_4_;
  local_88 = local_28;
  local_a8 = pcVar3;
  if (pIVar1 == (IAudioCaptureStream *)0x0) {
    if (pcVar3 != (code *)0x0) {
      plVar4 = (longlong *)&local_98;
      if (local_20 != (longlong *)0x0) {
        plVar4 = local_20;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  else {
    local_50 = local_20;
    local_80 = (longlong *)0x0;
    local_68 = (undefined4)local_38;
    uStack_64 = local_38._4_4_;
    uStack_60 = (undefined4)uStack_30;
    uStack_5c = uStack_30._4_4_;
    local_58 = local_28;
    if (pcVar3 != (code *)0x0) {
      local_a8 = (code *)0x0;
    }
    local_78[0] = pcVar3;
    cVar2 = (**(code **)((longlong)*pIVar1 + 0x28))(pIVar1,&local_c8,local_78,0x400);
    if (local_a8 != (code *)0x0) {
      plVar4 = (longlong *)&local_98;
      if (local_80 != (longlong *)0x0) {
        plVar4 = local_80;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
    if (cVar2 != '\0') {
      pIVar1 = (this->AudioCapture).Impl.Ptr;
      if (pIVar1 != (IAudioCaptureStream *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x38))();
      }
      goto LAB_14d0bce64;
    }
  }
  bVar5 = false;
LAB_14d0bce64:
  if (local_48 != (code *)0x0) {
    plVar4 = &local_38;
    if (local_20 != (longlong *)0x0) {
      plVar4 = local_20;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return bVar5;
}

// StartCapturing @ 14d0bcf20

bool __thiscall Audio::FAudioCaptureSynth::StartCapturing(FAudioCaptureSynth *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  IAudioCaptureStream *pIVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  
  lpCriticalSection = &this->CaptureCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  (this->AudioCaptureData).ArrayNum = 0;
  if ((this->AudioCaptureData).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->AudioCaptureData).AllocatorInstance,0,
               &(this->AudioCaptureData).ArrayMax);
  }
  pIVar1 = (this->AudioCapture).Impl.Ptr;
  if (pIVar1 != (IAudioCaptureStream *)0x0) {
    cVar3 = (**(code **)((longlong)*pIVar1 + 0x60))();
    if (cVar3 != '\0') goto LAB_14d0bcfaa;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("AudioCapture.IsStreamOpen()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioCaptureCore\\Private\\AudioCaptureCore.cpp"
                     ,0xf5,L"");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
LAB_14d0bcfaa:
  this->bIsCapturing = true;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return true;
}

// StopCapturing @ 14d0bd010

void __thiscall Audio::FAudioCaptureSynth::StopCapturing(FAudioCaptureSynth *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  IAudioCaptureStream *pIVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  
  pIVar1 = (this->AudioCapture).Impl.Ptr;
  if (pIVar1 == (IAudioCaptureStream *)0x0) {
LAB_14d0bd030:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("AudioCapture.IsStreamOpen()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioCaptureCore\\Private\\AudioCaptureCore.cpp"
                       ,0xfd,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    cVar3 = (**(code **)((longlong)*pIVar1 + 0x60))();
    if (cVar3 == '\0') goto LAB_14d0bd030;
  }
  pIVar1 = (this->AudioCapture).Impl.Ptr;
  if (pIVar1 != (IAudioCaptureStream *)0x0) {
    cVar3 = (**(code **)((longlong)*pIVar1 + 0x68))();
    if (cVar3 != '\0') goto LAB_14d0bd08f;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("AudioCapture.IsCapturing()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioCaptureCore\\Private\\AudioCaptureCore.cpp"
                     ,0xfe,L"");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14d0bd08f:
  lpCriticalSection = &this->CaptureCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this->bIsCapturing = false;
                    /* WARNING: Could not recover jumptable at 0x00014d0bd0b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

