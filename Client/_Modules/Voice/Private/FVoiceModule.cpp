// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Voice
// Functions: 8

// CreateVoiceCapture @ 14ec39dc0

TSharedPtr<IVoiceCapture,1> * __thiscall
FVoiceModule::CreateVoiceCapture
          (FVoiceModule *this,TSharedPtr<IVoiceCapture,1> *__return_storage_ptr__,FString *param_1,
          int param_2,int param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  FVoiceCaptureDeviceWindows *pFVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  FVoiceCaptureWindows *this_00;
  FVoiceCaptureWindows *pFVar9;
  TSharedPtr<IVoiceCapture,1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  FVoiceCaptureWindows *local_18 [2];
  
  pFVar5 = FVoiceCaptureDeviceWindows::Singleton;
  if (this->bEnabled == false) {
    __return_storage_ptr__->Object = (IVoiceCapture *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pFVar9 = (FVoiceCaptureWindows *)0x0;
    if ((FVoiceCaptureDeviceWindows::Singleton != (FVoiceCaptureDeviceWindows *)0x0) &&
       (FVoiceCaptureDeviceWindows::Singleton->bInitialized != false)) {
      this_00 = ::operator_new(0x198);
      if (this_00 != (FVoiceCaptureWindows *)0x0) {
        pFVar9 = FVoiceCaptureWindows::FVoiceCaptureWindows(this_00);
      }
      cVar6 = (**(code **)(pFVar9->_padding_ + 8))(pFVar9,param_1,param_2,param_3);
      if (cVar6 == '\0') {
        pFVar9 = (FVoiceCaptureWindows *)0x0;
      }
      else {
        pFVar2 = (pFVar5->ActiveVoiceCaptures).AllocatorInstance.Data;
        local_18[0] = pFVar9;
        if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
            ((FScriptContainerElement *)local_18 <
             pFVar2 + (longlong)(pFVar5->ActiveVoiceCaptures).ArrayMax * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TSharedPtr<IVoiceCapture,1> *)(*pcVar4)();
          return pTVar10;
        }
        iVar8 = (pFVar5->ActiveVoiceCaptures).ArrayNum;
        piVar1 = &(pFVar5->ActiveVoiceCaptures).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)pFVar5,piVar1);
        }
        (pFVar5->ActiveVoiceCaptures).ArrayNum = iVar8 + 1;
        *(FVoiceCaptureWindows **)
         ((pFVar5->ActiveVoiceCaptures).AllocatorInstance.Data + (longlong)iVar8 * 8) = local_18[0];
      }
    }
    __return_storage_ptr__->Object = (IVoiceCapture *)pFVar9;
    pTVar11 = ::operator_new(0x18);
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      pTVar11->SharedReferenceCount = (atomic<int>)0x1;
      pTVar11->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_VIVoiceCapture__U__DefaultDeleter_VIVoiceCapture___SharedPointerInternals___00_SharedPointerInternals__6B_
      ;
      pTVar11->WeakReferenceCount = (atomic<int>)0x1;
      pTVar11[1]._padding_ = (longlong)pFVar9;
    }
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar11;
    if ((pFVar9 != (FVoiceCaptureWindows *)0x0) &&
       (((pFVar9->_padding_ == 0 || (pFVar9->_padding_ == 0)) ||
        (*(int *)(pFVar9->_padding_ + 8) < 1)))) {
      pTVar11 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar9->_padding_ = (longlong)pFVar9;
      if (pTVar11 != (TReferenceControllerBase<1> *)pFVar9->_padding_) {
        if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar3 = (longlong *)pFVar9->_padding_;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
        pFVar9->_padding_ = (longlong)pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    }
  }
  return __return_storage_ptr__;
}

// CreateVoiceEncoder @ 14ec39fc0

TSharedPtr<IVoiceEncoder,1> * __thiscall
FVoiceModule::CreateVoiceEncoder
          (FVoiceModule *this,TSharedPtr<IVoiceEncoder,1> *__return_storage_ptr__,int param_1,
          int param_2,EAudioEncodeHint param_3)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong *plVar5;
  char cVar6;
  FVoiceEncoderOpus *pFVar7;
  FVoiceEncoderOpus *pFVar8;
  FVoiceEncoderOpus *this_00;
  
  if (this->bEnabled == false) {
    __return_storage_ptr__->Object = (IVoiceEncoder *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pFVar7 = ::operator_new(0x50);
    pFVar8 = (FVoiceEncoderOpus *)0x0;
    this_00 = pFVar8;
    if (pFVar7 != (FVoiceEncoderOpus *)0x0) {
      pFVar7->_padding_ = 0;
      pFVar7->_padding_ = 0;
      pFVar7->_padding_ = (longlong)&___7FVoiceEncoderOpus__6B_;
      pFVar7->SampleRate = 0;
      pFVar7->NumChannels = 0;
      pFVar7->FrameSize = 0;
      pFVar7->Encoder = (OpusEncoder *)0x0;
      *(undefined8 *)(pFVar7->Entropy + 4) = 0;
      pFVar7->Generation = '\0';
      pFVar7->Entropy[0] = 0;
      pFVar7->Entropy[1] = 0;
      pFVar7->Entropy[2] = 0;
      pFVar7->Entropy[3] = 0;
      this_00 = pFVar7;
    }
    pcVar3 = *(code **)(this_00->_padding_ + 8);
    if (pcVar3 == FVoiceEncoderOpus::Init) {
      cVar6 = FVoiceEncoderOpus::Init(this_00,param_1,param_2,param_3);
    }
    else {
      cVar6 = (*pcVar3)();
    }
    if (cVar6 == '\0') {
      (**(code **)this_00->_padding_)(this_00,1);
      this_00 = pFVar8;
    }
    __return_storage_ptr__->Object = (IVoiceEncoder *)this_00;
    pFVar7 = ::operator_new(0x18);
    if (pFVar7 != (FVoiceEncoderOpus *)0x0) {
      *(undefined4 *)&pFVar7->_padding_ = 1;
      pFVar7->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_VIVoiceEncoder__U__DefaultDeleter_VIVoiceEncoder___SharedPointerInternals___00_SharedPointerInternals__6B_
      ;
      *(undefined4 *)((longlong)&pFVar7->_padding_ + 4) = 1;
      pFVar7->_padding_ = (longlong)this_00;
      pFVar8 = pFVar7;
    }
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)pFVar8;
    if ((this_00 != (FVoiceEncoderOpus *)0x0) &&
       (((this_00->_padding_ == 0 || (this_00->_padding_ == 0)) ||
        (*(int *)(this_00->_padding_ + 8) < 1)))) {
      pTVar4 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      this_00->_padding_ = (longlong)this_00;
      if (pTVar4 != (TReferenceControllerBase<1> *)this_00->_padding_) {
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar5 = (longlong *)this_00->_padding_;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
        this_00->_padding_ = (longlong)pTVar4;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  return __return_storage_ptr__;
}

// CreateVoiceDecoder @ 14ec3a150

TSharedPtr<IVoiceDecoder,1> * __thiscall
FVoiceModule::CreateVoiceDecoder
          (FVoiceModule *this,TSharedPtr<IVoiceDecoder,1> *__return_storage_ptr__,int param_1,
          int param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong *plVar5;
  char cVar6;
  FVoiceDecoderOpus *pFVar7;
  FVoiceDecoderOpus *pFVar8;
  FVoiceDecoderOpus *this_00;
  
  if (this->bEnabled == false) {
    __return_storage_ptr__->Object = (IVoiceDecoder *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pFVar7 = ::operator_new(0x50);
    pFVar8 = (FVoiceDecoderOpus *)0x0;
    this_00 = pFVar8;
    if (pFVar7 != (FVoiceDecoderOpus *)0x0) {
      pFVar7->_padding_ = 0;
      pFVar7->_padding_ = 0;
      pFVar7->_padding_ = (longlong)&___7FVoiceDecoderOpus__6B_;
      pFVar7->SampleRate = 0;
      pFVar7->NumChannels = 0;
      pFVar7->FrameSize = 0;
      pFVar7->Decoder = (OpusDecoder *)0x0;
      *(undefined8 *)(pFVar7->Entropy + 4) = 0;
      pFVar7->LastGeneration = '\0';
      pFVar7->Entropy[0] = 0;
      pFVar7->Entropy[1] = 0;
      pFVar7->Entropy[2] = 0;
      pFVar7->Entropy[3] = 0;
      this_00 = pFVar7;
    }
    pcVar3 = *(code **)(this_00->_padding_ + 8);
    if (pcVar3 == FVoiceDecoderOpus::Init) {
      cVar6 = FVoiceDecoderOpus::Init(this_00,param_1,param_2);
    }
    else {
      cVar6 = (*pcVar3)();
    }
    if (cVar6 == '\0') {
      (**(code **)this_00->_padding_)(this_00,1);
      this_00 = pFVar8;
    }
    __return_storage_ptr__->Object = (IVoiceDecoder *)this_00;
    pFVar7 = ::operator_new(0x18);
    if (pFVar7 != (FVoiceDecoderOpus *)0x0) {
      *(undefined4 *)&pFVar7->_padding_ = 1;
      pFVar7->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_VIVoiceDecoder__U__DefaultDeleter_VIVoiceDecoder___SharedPointerInternals___00_SharedPointerInternals__6B_
      ;
      *(undefined4 *)((longlong)&pFVar7->_padding_ + 4) = 1;
      pFVar7->_padding_ = (longlong)this_00;
      pFVar8 = pFVar7;
    }
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)pFVar8;
    if ((this_00 != (FVoiceDecoderOpus *)0x0) &&
       (((this_00->_padding_ == 0 || (this_00->_padding_ == 0)) ||
        (*(int *)(this_00->_padding_ + 8) < 1)))) {
      pTVar4 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      this_00->_padding_ = (longlong)this_00;
      if (pTVar4 != (TReferenceControllerBase<1> *)this_00->_padding_) {
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar5 = (longlong *)this_00->_padding_;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
        this_00->_padding_ = (longlong)pTVar4;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  return __return_storage_ptr__;
}

// DoesPlatformSupportVoiceCapture @ 14ec3a2d0

bool __thiscall FVoiceModule::DoesPlatformSupportVoiceCapture(FVoiceModule *this)

{
  return true;
}

// StartupModule @ 14ec3a2e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FVoiceModule::StartupModule(FVoiceModule *this)

{
  bool *pbVar1;
  bool bVar2;
  FVoiceCaptureDeviceWindows *pFVar3;
  
  pbVar1 = &this->bEnabled;
  *pbVar1 = false;
  bVar2 = FConfigCacheIni::GetBool(GConfig,L"Voice",L"bEnabled",pbVar1,&GEngineIni);
  if ((!bVar2) && (2 < (byte)LogVoice._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVoice);
  }
  if (*pbVar1 != false) {
    pFVar3 = FVoiceCaptureDeviceWindows::Create();
    if (pFVar3 == (FVoiceCaptureDeviceWindows *)0x0) {
      if (2 < (byte)LogVoice._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVoice);
      }
      if (FVoiceCaptureDeviceWindows::Singleton != (FVoiceCaptureDeviceWindows *)0x0) {
        FVoiceCaptureDeviceWindows::_scalar_deleting_destructor_
                  (FVoiceCaptureDeviceWindows::Singleton,1);
        FVoiceCaptureDeviceWindows::Singleton = (FVoiceCaptureDeviceWindows *)0x0;
      }
    }
  }
  return;
}

// ShutdownModule @ 14ec3a390

void __thiscall FVoiceModule::ShutdownModule(FVoiceModule *this)

{
  if ((this->bEnabled != false) &&
     (FVoiceCaptureDeviceWindows::Singleton != (FVoiceCaptureDeviceWindows *)0x0)) {
    FVoiceCaptureDeviceWindows::_scalar_deleting_destructor_
              (FVoiceCaptureDeviceWindows::Singleton,1);
    FVoiceCaptureDeviceWindows::Singleton = (FVoiceCaptureDeviceWindows *)0x0;
  }
  return;
}

// CreateVoiceDecoderObject @ 14ec3c580

IVoiceDecoder * __thiscall
FVoiceModule::CreateVoiceDecoderObject(FVoiceModule *this,int param_1,int param_2)

{
  code *pcVar1;
  char cVar2;
  FVoiceDecoderOpus *pFVar3;
  FVoiceDecoderOpus *this_00;
  
  pFVar3 = ::operator_new(0x50);
  this_00 = (FVoiceDecoderOpus *)0x0;
  if (pFVar3 != (FVoiceDecoderOpus *)0x0) {
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = (longlong)&___7FVoiceDecoderOpus__6B_;
    pFVar3->SampleRate = 0;
    pFVar3->NumChannels = 0;
    pFVar3->FrameSize = 0;
    pFVar3->Decoder = (OpusDecoder *)0x0;
    *(undefined8 *)(pFVar3->Entropy + 4) = 0;
    pFVar3->LastGeneration = '\0';
    pFVar3->Entropy[0] = 0;
    pFVar3->Entropy[1] = 0;
    pFVar3->Entropy[2] = 0;
    pFVar3->Entropy[3] = 0;
    this_00 = pFVar3;
  }
  pcVar1 = *(code **)(this_00->_padding_ + 8);
  if (pcVar1 == FVoiceDecoderOpus::Init) {
    cVar2 = FVoiceDecoderOpus::Init(this_00,param_1,param_2);
  }
  else {
    cVar2 = (*pcVar1)();
  }
  if (cVar2 != '\0') {
    return (IVoiceDecoder *)this_00;
  }
  (**(code **)this_00->_padding_)(this_00,1);
  return (IVoiceDecoder *)0x0;
}

// CreateVoiceEncoderObject @ 14ec3c650

IVoiceEncoder * __thiscall
FVoiceModule::CreateVoiceEncoderObject
          (FVoiceModule *this,int param_1,int param_2,EAudioEncodeHint param_3)

{
  code *pcVar1;
  char cVar2;
  FVoiceEncoderOpus *pFVar3;
  FVoiceEncoderOpus *this_00;
  
  pFVar3 = ::operator_new(0x50);
  this_00 = (FVoiceEncoderOpus *)0x0;
  if (pFVar3 != (FVoiceEncoderOpus *)0x0) {
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = (longlong)&___7FVoiceEncoderOpus__6B_;
    pFVar3->SampleRate = 0;
    pFVar3->NumChannels = 0;
    pFVar3->FrameSize = 0;
    pFVar3->Encoder = (OpusEncoder *)0x0;
    *(undefined8 *)(pFVar3->Entropy + 4) = 0;
    pFVar3->Generation = '\0';
    pFVar3->Entropy[0] = 0;
    pFVar3->Entropy[1] = 0;
    pFVar3->Entropy[2] = 0;
    pFVar3->Entropy[3] = 0;
    this_00 = pFVar3;
  }
  pcVar1 = *(code **)(this_00->_padding_ + 8);
  if (pcVar1 == FVoiceEncoderOpus::Init) {
    cVar2 = FVoiceEncoderOpus::Init(this_00,param_1,param_2,param_3);
  }
  else {
    cVar2 = (*pcVar1)();
  }
  if (cVar2 != '\0') {
    return (IVoiceEncoder *)this_00;
  }
  (**(code **)this_00->_padding_)(this_00,1);
  return (IVoiceEncoder *)0x0;
}

