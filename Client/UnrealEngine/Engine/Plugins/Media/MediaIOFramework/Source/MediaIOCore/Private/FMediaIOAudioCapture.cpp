// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 14

// FMediaIOAudioCapture @ 14d789d00

FMediaIOAudioCapture * __thiscall
FMediaIOAudioCapture::FMediaIOAudioCapture(FMediaIOAudioCapture *this)

{
  this->RegisteredDeviceId = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMediaIOAudioCapture__6B_;
  this->SampleRate = 0;
  (this->SubmixBufferListenerProxy).Object = (ISubmixBufferListener *)0x0;
  (this->SubmixBufferListenerProxy).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->PrimarySubmixName).ComparisonIndex = 0;
  (this->PrimarySubmixName).Number = 0;
  this->NumChannels = 0;
  (this->AudioSplitter).PendingOutputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioSplitter).PendingOutputs.ArrayNum = 0;
  (this->AudioSplitter).PendingOutputs.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->AudioSplitter).PendingOutputsCriticalSection,4000);
  (this->AudioSplitter).ConnectedOutputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioSplitter).ConnectedOutputs.ArrayNum = 0;
  (this->AudioSplitter).ConnectedOutputs.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->AudioSplitter).ConnectedOutputsCriticalSection,4000);
  *(undefined8 *)&this->AudioCapturedDelegate = 0;
  *(undefined8 *)&(this->AudioCapturedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->AudioCapturedDelegate).field_0x10 = 0;
  return this;
}

// ~FMediaIOAudioCapture @ 14d78c7b0

void __thiscall FMediaIOAudioCapture::~FMediaIOAudioCapture(FMediaIOAudioCapture *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  this->_padding_ = (longlong)&___7FMediaIOAudioCapture__6B_;
  UnregisterAudioDevice(this);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->AudioCapturedDelegate);
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->AudioSplitter).ConnectedOutputsCriticalSection);
  DestructItems<Audio::FPatchInput,int>
            ((FPatchInput *)(this->AudioSplitter).ConnectedOutputs.AllocatorInstance.Data,
             (this->AudioSplitter).ConnectedOutputs.ArrayNum);
  pFVar3 = (this->AudioSplitter).ConnectedOutputs.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->AudioSplitter).PendingOutputsCriticalSection);
  DestructItems<Audio::FPatchInput,int>
            ((FPatchInput *)(this->AudioSplitter).PendingOutputs.AllocatorInstance.Data,
             (this->AudioSplitter).PendingOutputs.ArrayNum);
  pFVar3 = (this->AudioSplitter).PendingOutputs.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SubmixBufferListenerProxy).SharedReferenceCount.ReferenceController);
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014d78c850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// CreateAudioOutput @ 14d79de80

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FMediaIOAudioOutput,1> * __thiscall
FMediaIOAudioCapture::CreateAudioOutput
          (FMediaIOAudioCapture *this,TSharedPtr<FMediaIOAudioOutput,1> *__return_storage_ptr__,
          int param_1,FFrameRate param_2,uint param_3,uint param_4)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  FPatchOutput *pFVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  TSharedPtr<FMediaIOAudioOutput,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  double dVar10;
  undefined1 local_res18 [8];
  TSharedPtr<Audio::FPatchOutput,1> local_38;
  
  if (param_1 < this->NumChannels) {
    if (1 < (byte)LogMediaIOAudioOutput._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOAudioOutput);
    }
    __return_storage_ptr__->Object = (FMediaIOAudioOutput *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  if (param_4 != this->SampleRate) {
    local_res18[0] = 0;
    bVar6 = `FMediaIOAudioCapture::CreateAudioOutput'::__l24::<lambda_1>::operator()(local_res18);
    if (!bVar6) {
      __return_storage_ptr__->Object = (FMediaIOAudioOutput *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      return __return_storage_ptr__;
    }
  }
  if ((param_1 < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InNumOutputChannels > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaIOCoreAudioOutput.cpp"
                         ,0xbc,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    pTVar7 = (TSharedPtr<FMediaIOAudioOutput,1> *)(*pcVar2)();
    return pTVar7;
  }
  Audio::FPatchSplitter::AddNewPatch(&this->AudioSplitter,&local_38,param_3,__real_3f800000);
  iVar1 = this->NumChannels;
  pTVar8 = ::operator_new(0x58);
  FVar5.ReferenceController = local_38.SharedReferenceCount.ReferenceController;
  pFVar4 = local_38.Object;
  dVar3 = __real_bfe0000000000000;
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FMediaIOAudioOutput *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFMediaIOAudioOutput___00_SharedPointerInternals__6B_;
    local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_38.Object = (FPatchOutput *)0x0;
    *(undefined4 *)&pTVar8[1]._padding_ = 0;
    pTVar8[1].SharedReferenceCount = (atomic<int>)param_1;
    *(FFrameRate *)&pTVar8[1].WeakReferenceCount = param_2;
    pTVar8[3]._padding_ = (longlong)pFVar4;
    *(int *)((longlong)&pTVar8[1]._padding_ + 4) = iVar1;
    *(TReferenceControllerBase<1> **)&pTVar8[3].SharedReferenceCount = FVar5.ReferenceController;
    pTVar8[4]._padding_ = 0;
    pTVar8[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[4].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar8[5]._padding_ = 0;
    *(uint *)((longlong)&pTVar8[2]._padding_ + 4) = param_3;
    pTVar8[2].SharedReferenceCount = (atomic<int>)param_4;
    dVar10 = (double)(iVar1 * param_4) * (double)(int)pTVar8[2]._padding_;
    *(int *)&pTVar8[1]._padding_ =
         -(int)((longlong)
                ROUND(dVar3 - (dVar10 + dVar10) / (double)(int)pTVar8[1].WeakReferenceCount) >> 1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (((FMediaIOAudioOutput *)(pTVar8 + 1) == (FMediaIOAudioOutput *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FMediaIOAudioOutput,1> *)(*pcVar2)();
      return pTVar7;
    }
    __return_storage_ptr__->Object = (FMediaIOAudioOutput *)(pTVar8 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar8;
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    pTVar9 = pTVar8;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetListenerName @ 14d7ab200

FString * __thiscall FMediaIOAudioCapture::GetListenerName(FMediaIOAudioCapture *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&ListenerName,L"MediaIO AudioCapture Listener");
      atexit(`FMediaIOAudioCapture::GetListenerName'::__l2::
             _dynamic_atexit_destructor_for__ListenerName__);
      _Init_thread_footer(&::_TSS0);
      return &ListenerName;
    }
  }
  return &ListenerName;
}

// Initialize @ 14d7af130

void __thiscall
FMediaIOAudioCapture::Initialize(FMediaIOAudioCapture *this,FAudioDeviceHandle *param_1)

{
  bool bVar1;
  uint uVar2;
  FAudioDevice *pFVar3;
  
  UnregisterAudioDevice(this);
  bVar1 = FAudioDeviceHandle::IsValid(param_1);
  if (bVar1) {
    pFVar3 = FAudioDeviceHandle::GetAudioDevice(param_1);
    RegisterBufferListener(this,pFVar3);
    uVar2 = FAudioDeviceHandle::GetDeviceID(param_1);
    this->RegisteredDeviceId = uVar2;
  }
  return;
}

// Initialize @ 14d7af180

void __thiscall
FMediaIOAudioCapture::Initialize
          (FMediaIOAudioCapture *this,FAudioDeviceHandle *param_1,
          TDelegate<void___cdecl(float_*,int),FDefaultDelegateUserPolicy> *param_2)

{
  bool bVar1;
  uint uVar2;
  FAudioDevice *pFVar3;
  
  TDelegate<void___cdecl(float_*,int),FDefaultDelegateUserPolicy>::operator=
            (&this->AudioCapturedDelegate,param_2);
  UnregisterAudioDevice(this);
  bVar1 = FAudioDeviceHandle::IsValid(param_1);
  if (bVar1) {
    pFVar3 = FAudioDeviceHandle::GetAudioDevice(param_1);
    RegisterBufferListener(this,pFVar3);
    uVar2 = FAudioDeviceHandle::GetDeviceID(param_1);
    this->RegisteredDeviceId = uVar2;
  }
  return;
}

// OnNewSubmixBuffer @ 14d7b30e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMediaIOAudioCapture::OnNewSubmixBuffer
          (FMediaIOAudioCapture *this,USoundSubmix *param_1,float *param_2,int param_3,int param_4,
          int param_5,double param_6)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  bool bVar5;
  FMediaIOAudioCapture *local_38;
  int *local_30;
  FReadAccessScope local_28;
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId148,"FMediaIOAudioCapture::OnNewSubmixBuffer",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaIOCoreAudioOutput.cpp"
               ,0x94);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId148);
  }
  if ((param_1 == (USoundSubmix *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InOwningSubmix",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaIOCoreAudioOutput.cpp"
                         ,0x96,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((FName)param_1->_padding_ == this->PrimarySubmixName) {
    if (this->NumChannels != param_4) {
      local_30 = &param_4;
      local_38 = this;
      bVar3 = `FMediaIOAudioCapture::OnNewSubmixBuffer'::__l13::<lambda_1>::operator()(&local_38);
      if (!bVar3) goto LAB_14d7b3279;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->AudioCapturedDelegate,&local_28);
    if ((*(int *)&(this->AudioCapturedDelegate).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(this->AudioCapturedDelegate).field_0x8, plVar1 != (longlong *)0x0))
    {
      (**(code **)(*plVar1 + 0x68))(plVar1,param_2,param_3);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    iVar4 = Audio::FPatchSplitter::PushAudio(&this->AudioSplitter,param_2,param_3);
    if ((param_3 != iVar4) && (iVar4 != -1)) {
      bVar3 = -1 < CpuChannel->Enabled;
      if (bVar3) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId159,
                   "FMediaIOAudioCapture::OnNewSubmixBuffer::BufferOverrun",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaIOCoreAudioOutput.cpp"
                   ,0x9f);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId159);
      }
      if (5 < (byte)LogMediaIOAudioOutput._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOAudioOutput);
      }
      if (bVar3) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
  }
LAB_14d7b3279:
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// RegisterAudioDevice @ 14d7b9650

void __thiscall
FMediaIOAudioCapture::RegisterAudioDevice(FMediaIOAudioCapture *this,FAudioDeviceHandle *param_1)

{
  bool bVar1;
  uint uVar2;
  FAudioDevice *pFVar3;
  
  UnregisterAudioDevice(this);
  bVar1 = FAudioDeviceHandle::IsValid(param_1);
  if (bVar1) {
    pFVar3 = FAudioDeviceHandle::GetAudioDevice(param_1);
    RegisterBufferListener(this,pFVar3);
    uVar2 = FAudioDeviceHandle::GetDeviceID(param_1);
    this->RegisteredDeviceId = uVar2;
  }
  return;
}

// RegisterBufferListener @ 14d7b96a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMediaIOAudioCapture::RegisterBufferListener(FMediaIOAudioCapture *this,FAudioDevice *param_1)

{
  int *piVar1;
  UObject *pUVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  atomic<int> aVar6;
  int iVar7;
  atomic<int> aVar8;
  UClass *this_00;
  FString *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  undefined8 uVar11;
  TSharedRef<ISubmixBufferListener,1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  TReferenceControllerBase<1> *pTVar15;
  ISubmixBufferListener *pIVar16;
  bool bVar17;
  FName local_res10;
  FName local_res18;
  ISubmixBufferListener *local_78;
  FSharedReferencer<1> local_70;
  undefined8 local_68;
  undefined8 local_60;
  FString local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  TSharedRef<ISubmixBufferListener,1> local_38;
  
  if (param_1 == (FAudioDevice *)0x0) {
    return;
  }
  pTVar14 = (TReferenceControllerBase<1> *)0x0;
  iVar7 = Audio::FMixerDevice::GetDeviceOutputChannels((FMixerDevice *)param_1);
  this->NumChannels = iVar7;
  this->SampleRate = (uint)(longlong)(float)param_1->SampleRate;
  this_00 = Z_Construct_UClass_UAudioSettings_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar2 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  local_48 = *(undefined8 *)&pUVar2[5].field_0x10;
  uStack_40 = *(undefined8 *)&pUVar2[5].field_0x18;
  local_res10.ComparisonIndex.Value = *(uint *)&pUVar2[5].field_0x18;
  local_res10.Number = *(uint *)&pUVar2[5].field_0x1c;
  if (local_res10 == (FName)0x0) {
    local_68 = 0;
    local_60 = 0;
    iVar7 = 0;
    pTVar10 = pTVar14;
  }
  else {
    pFVar9 = ::FName::ToString(&local_res10,&local_58);
    pTVar10 = (TReferenceControllerBase<1> *)(pFVar9->Data).AllocatorInstance.Data;
    (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar7 = (pFVar9->Data).ArrayNum;
    (pFVar9->Data).ArrayNum = 0;
    (pFVar9->Data).ArrayMax = 0;
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  pTVar13 = (TReferenceControllerBase<1> *)L"";
  if (iVar7 != 0) {
    pTVar13 = pTVar10;
  }
  ::FName::FName(&local_res18,(wchar_t *)pTVar13);
  this->PrimarySubmixName = local_res18;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    FMemory::Free(pTVar10);
  }
  if ((this->SubmixBufferListenerProxy).Object != (ISubmixBufferListener *)0x0) goto LAB_14d7b99ee;
  pTVar10 = (TReferenceControllerBase<1> *)this->_padding_;
  pTVar13 = pTVar14;
  pTVar15 = pTVar10;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    aVar6 = pTVar10->SharedReferenceCount;
    do {
      pTVar15 = pTVar14;
      if (aVar6 == (atomic<int>)0x0) goto LAB_14d7b97f5;
      LOCK();
      aVar8 = pTVar10->SharedReferenceCount;
      bVar17 = aVar6 == aVar8;
      if (bVar17) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
        aVar8 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar8;
    } while (!bVar17);
    pTVar13 = (TReferenceControllerBase<1> *)this->_padding_;
    pTVar15 = pTVar10;
  }
LAB_14d7b97f5:
  pTVar10 = (TReferenceControllerBase<1> *)&pTVar13->SharedReferenceCount;
  if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
    pTVar10 = pTVar14;
  }
  if ((pTVar10 != (TReferenceControllerBase<1> *)&this->_padding_) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("SharedThis.Get() == this",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x67f,L""), bVar17)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar17) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar17) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pTVar10 = ::operator_new(0x38);
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
    pIVar16 = (ISubmixBufferListener *)&DAT_00000010;
LAB_14d7b992a:
    if (((*(longlong *)&pIVar16->field_0x8 == 0) || (*(longlong *)&pIVar16->field_0x10 == 0)) ||
       (*(int *)(*(longlong *)&pIVar16->field_0x10 + 8) < 1)) {
      if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(ISubmixBufferListener **)&pIVar16->field_0x8 = pIVar16;
      if (pTVar14 != *(TReferenceControllerBase<1> **)&pIVar16->field_0x10) {
        if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar14->WeakReferenceCount = (atomic<int>)((int)pTVar14->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar3 = *(longlong **)&pIVar16->field_0x10;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
        *(TReferenceControllerBase<1> **)&pIVar16->field_0x10 = pTVar14;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
    }
  }
  else {
    pTVar10->SharedReferenceCount = (atomic<int>)0x1;
    pTVar10->WeakReferenceCount = (atomic<int>)0x1;
    pTVar10->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFSubmixBufferListenerProxy_FMediaIOAudioCapture___00_SharedPointerInternals__6B_
    ;
    pTVar10[1]._padding_ = (longlong)&___7FSubmixBufferListenerProxy_FMediaIOAudioCapture__6B_;
    pTVar10[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar10[2]._padding_ = 0;
    *(TReferenceControllerBase<1> **)&pTVar10[2].SharedReferenceCount = pTVar13;
    pTVar10[3]._padding_ = (longlong)pTVar15;
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar15->WeakReferenceCount = (atomic<int>)((int)pTVar15->WeakReferenceCount + 1);
      UNLOCK();
    }
    pIVar16 = (ISubmixBufferListener *)(pTVar10 + 1);
    pTVar14 = pTVar10;
    if (pIVar16 != (ISubmixBufferListener *)0x0) goto LAB_14d7b992a;
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x246,L"");
    if (bVar17) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78 = pIVar16;
  local_70.ReferenceController = pTVar14;
  if (&this->SubmixBufferListenerProxy != (TSharedPtr<ISubmixBufferListener,1> *)&local_78) {
    (this->SubmixBufferListenerProxy).Object = pIVar16;
    local_78 = (ISubmixBufferListener *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SubmixBufferListenerProxy).SharedReferenceCount,&local_70);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_70.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
LAB_14d7b99ee:
  lVar4 = param_1->_padding_;
  uVar11 = (**(code **)(lVar4 + 0x88))(param_1);
  pTVar12 = TSharedPtr<ISubmixBufferListener,1>::ToSharedRef
                      (&this->SubmixBufferListenerProxy,&local_38);
  (**(code **)(lVar4 + 0x90))(param_1,pTVar12,uVar11);
  return;
}

// SetAudioCapturedDelegate @ 14d7bb8d0

void __thiscall
FMediaIOAudioCapture::SetAudioCapturedDelegate
          (FMediaIOAudioCapture *this,
          TDelegate<void___cdecl(float_*,int),FDefaultDelegateUserPolicy> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  
  if (((this->SubmixBufferListenerProxy).Object != (ISubmixBufferListener *)0x0) &&
     ((pTVar1 = (this->SubmixBufferListenerProxy).SharedReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0 ||
      (pTVar1->SharedReferenceCount != (atomic<int>)0x1)))) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3187632067466755832>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaIOCoreAudioOutput.cpp"
                       ,0x108,
                       "!SubmixBufferListenerProxy || SubmixBufferListenerProxy.GetSharedReferenceCount() == 1"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    return;
  }
  TDelegate<void___cdecl(float_*,int),FDefaultDelegateUserPolicy>::operator=
            (&this->AudioCapturedDelegate,param_1);
  return;
}

// UnregisterAudioDevice @ 14d7c21b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FMediaIOAudioCapture::UnregisterAudioDevice(FMediaIOAudioCapture *this)

{
  longlong lVar1;
  FAudioDeviceManager *pFVar2;
  FAudioDevice *pFVar3;
  undefined8 uVar4;
  TSharedRef<ISubmixBufferListener,1> *pTVar5;
  TSharedRef<ISubmixBufferListener,1> local_18;
  
  if (((this->RegisteredDeviceId != 0xffffffff) && (GEngine != (UEngine *)0x0)) &&
     (pFVar2 = UEngine::GetAudioDeviceManager(GEngine), pFVar2 != (FAudioDeviceManager *)0x0)) {
    pFVar2 = UEngine::GetAudioDeviceManager(GEngine);
    pFVar3 = FAudioDeviceManager::GetAudioDeviceRaw(pFVar2,this->RegisteredDeviceId);
    if ((pFVar3 != (FAudioDevice *)0x0) &&
       ((this->SubmixBufferListenerProxy).Object != (ISubmixBufferListener *)0x0)) {
      lVar1 = pFVar3->_padding_;
      uVar4 = (**(code **)(lVar1 + 0x88))(pFVar3);
      pTVar5 = TSharedPtr<ISubmixBufferListener,1>::ToSharedRef
                         (&this->SubmixBufferListenerProxy,&local_18);
      (**(code **)(lVar1 + 0xa0))(pFVar3,pTVar5,uVar4);
    }
    this->RegisteredDeviceId = 0xffffffff;
  }
  return;
}

// UnregisterBufferListener @ 14d7c2270

void __thiscall
FMediaIOAudioCapture::UnregisterBufferListener(FMediaIOAudioCapture *this,FAudioDevice *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  TSharedRef<ISubmixBufferListener,1> *pTVar3;
  TSharedRef<ISubmixBufferListener,1> local_18;
  
  if ((param_1 != (FAudioDevice *)0x0) &&
     ((this->SubmixBufferListenerProxy).Object != (ISubmixBufferListener *)0x0)) {
    lVar1 = param_1->_padding_;
    uVar2 = (**(code **)(lVar1 + 0x88))(param_1);
    pTVar3 = TSharedPtr<ISubmixBufferListener,1>::ToSharedRef
                       (&this->SubmixBufferListenerProxy,&local_18);
    (**(code **)(lVar1 + 0xa0))(param_1,pTVar3,uVar2);
  }
  return;
}

// operator() @ 150586d20

bool __thiscall `FMediaIOAudioCapture::CreateAudioOutput'::__l24::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3187632067466755911>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3187632067466755911>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150586d60

bool __thiscall `FMediaIOAudioCapture::OnNewSubmixBuffer'::__l13::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3187632067466755943>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3187632067466755943>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

