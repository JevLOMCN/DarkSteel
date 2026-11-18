// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioExtensions
// Functions: 17

// ~IAudioEndpoint @ 144530940

void __thiscall IAudioEndpoint::~IAudioEndpoint(IAudioEndpoint *this)

{
  IAudioEndpointSettingsProxy *pIVar1;
  FScriptContainerElement *pFVar2;
  FMixerNullCallback *pFVar3;
  
  this->_padding_ = (longlong)&___7IAudioEndpoint__6B_;
  Audio::FPatchMixer::~FPatchMixer(&this->PatchMixer);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CurrentSettingsCriticalSection);
  pIVar1 = (this->CurrentSettings).Ptr;
  if (pIVar1 != (IAudioEndpointSettingsProxy *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  pFVar2 = (this->BufferForRenderCallback).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar3 = (this->RenderCallback).Ptr;
  if (pFVar3 != (FMixerNullCallback *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014453099d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pFVar3 + 0x28))(pFVar3,1);
    return;
  }
  return;
}

// DisconnectAllInputs @ 144533060

void __thiscall IAudioEndpoint::DisconnectAllInputs(IAudioEndpoint *this)

{
  Audio::FPatchMixer::DisconnectAllInputs(&this->PatchMixer);
  return;
}

// EndpointRequiresCallback @ 144533130

bool __thiscall IAudioEndpoint::EndpointRequiresCallback(IAudioEndpoint *this)

{
  return false;
}

// GetDesiredNumFrames @ 1445345d0

int __thiscall IAudioEndpoint::GetDesiredNumFrames(IAudioEndpoint *this)

{
  return 0;
}

// GetNumChannels @ 144534a00

int __thiscall IAudioEndpoint::GetNumChannels(IAudioEndpoint *this)

{
  return 0;
}

// GetSampleRate @ 144535810

float __thiscall IAudioEndpoint::GetSampleRate(IAudioEndpoint *this)

{
  return 0.0;
}

// IsImplemented @ 144535b30

bool __thiscall IAudioEndpoint::IsImplemented(IAudioEndpoint *this)

{
  return false;
}

// OnAudioCallback @ 1445364d0

bool __thiscall
IAudioEndpoint::OnAudioCallback
          (IAudioEndpoint *this,TArrayView<float_const_,int> *param_1,int *param_2,
          IAudioEndpointSettingsProxy *param_3)

{
  return false;
}

// PatchNewInput @ 144536620

FPatchInput * __thiscall
IAudioEndpoint::PatchNewInput
          (IAudioEndpoint *this,FPatchInput *__return_storage_ptr__,float param_1,float *param_2,
          int *param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  fVar5 = (float)(**(code **)(this->_padding_ + 0x10))();
  *param_2 = fVar5;
  iVar3 = (**(code **)(this->_padding_ + 0x18))(this);
  fVar5 = __real_bf000000;
  *param_3 = iVar3;
  iVar3 = -((int)ROUND(fVar5 - (float)iVar3 * param_1 * (*param_2 + *param_2)) >> 1);
  cVar2 = (**(code **)(this->_padding_ + 0x20))(this);
  if (cVar2 != '\0') {
    iVar1 = *param_3;
    iVar4 = (**(code **)(this->_padding_ + 0x28))(this);
    if (iVar3 < iVar4 * iVar1) {
      iVar3 = iVar4 * iVar1;
    }
  }
  Audio::FPatchMixer::AddNewInput
            (&this->PatchMixer,__return_storage_ptr__,iVar3 * 2,__real_3f800000);
  return __return_storage_ptr__;
}

// PollSettings @ 144536700

void __thiscall
IAudioEndpoint::PollSettings
          (IAudioEndpoint *this,
          TFunctionRef<void___cdecl(IAudioEndpointSettingsProxy_const_*)> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  IAudioEndpointSettingsProxy *local_res8;
  
  lpCriticalSection = &this->CurrentSettingsCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_res8 = (this->CurrentSettings).Ptr;
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_res8);
                    /* WARNING: Could not recover jumptable at 0x000144536750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// PopAudio @ 1445367e0

int __thiscall IAudioEndpoint::PopAudio(IAudioEndpoint *this,float *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1 == (float *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutAudio",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Private\\IAudioEndpoint.cpp"
                       ,0x47,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = Audio::FPatchMixer::PopAudio(&this->PatchMixer,param_1,param_2,false);
  return iVar3;
}

// ProcessAudioIfNeccessary @ 144536930

void __thiscall IAudioEndpoint::ProcessAudioIfNeccessary(IAudioEndpoint *this)

{
  char cVar1;
  
  if ((this->RenderCallback).Ptr == (FMixerNullCallback *)0x0) {
    cVar1 = (**(code **)(this->_padding_ + 0x20))();
    if (cVar1 != '\0') {
      RunCallbackSynchronously(this);
      return;
    }
  }
  return;
}

// RunCallbackSynchronously @ 1445373e0

void __thiscall IAudioEndpoint::RunCallbackSynchronously(IAudioEndpoint *this)

{
  int *piVar1;
  int *piVar2;
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  IAudioEndpoint *pIVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  undefined4 local_res8 [2];
  int local_res10;
  FScriptContainerElement *local_58;
  int local_50;
  IAudioEndpoint *local_48;
  
  pcVar3 = *(code **)(this->_padding_ + 0x28);
  iVar9 = (**(code **)(this->_padding_ + 0x18))();
  iVar10 = (*pcVar3)();
  iVar9 = iVar9 * iVar10;
  piVar1 = &(this->BufferForRenderCallback).ArrayMax;
  piVar2 = &(this->BufferForRenderCallback).ArrayNum;
  *piVar2 = 0;
  local_res10 = iVar9;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&(this->BufferForRenderCallback).AllocatorInstance,0,piVar1);
  }
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,iVar9,&(this->BufferForRenderCallback).AllocatorInstance,piVar2,piVar1);
  iVar10 = Audio::FPatchMixer::MaxNumberOfSamplesThatCanBePopped(&this->PatchMixer);
  if (iVar9 <= iVar10) {
    lpCriticalSection = &this->CurrentSettingsCriticalSection;
    do {
      piVar1 = &(this->BufferForRenderCallback).ArrayNum;
      iVar9 = Audio::FPatchMixer::PopAudio
                        (&this->PatchMixer,
                         (float *)(this->BufferForRenderCallback).AllocatorInstance.Data,*piVar1,
                         false);
      if (((iVar9 != (this->BufferForRenderCallback).ArrayNum) && (-1 < iVar9)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("PopResult == BufferForRenderCallback.Num() || PopResult < 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Private\\IAudioEndpoint.cpp"
                             ,0x74,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar9 = *piVar1;
      pFVar4 = (this->BufferForRenderCallback).AllocatorInstance.Data;
      if ((iVar9 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_58 = pFVar4;
      local_50 = iVar9;
      local_48 = this;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      pIVar6 = local_48;
      lVar5 = local_48->_padding_;
      local_res8[0] = (**(code **)(lVar5 + 0x18))(local_48);
      cVar8 = (**(code **)(lVar5 + 0x30))(pIVar6,&local_58,local_res8);
      if (cVar8 == '\0') {
        Audio::FPatchMixer::DisconnectAllInputs(&local_48->PatchMixer);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      iVar9 = Audio::FPatchMixer::MaxNumberOfSamplesThatCanBePopped(&this->PatchMixer);
    } while (local_res10 <= iVar9);
  }
  return;
}

// SetNewSettings @ 144537610

void __thiscall
IAudioEndpoint::SetNewSettings
          (IAudioEndpoint *this,
          TUniquePtr<IAudioEndpointSettingsProxy,TDefaultDelete<IAudioEndpointSettingsProxy>_>
          *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TUniquePtr<IAudioEndpointSettingsProxy,TDefaultDelete<IAudioEndpointSettingsProxy>_> *pTVar1;
  IAudioEndpointSettingsProxy *pIVar2;
  
  lpCriticalSection = &this->CurrentSettingsCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar1 = &this->CurrentSettings;
    if (pTVar1 != param_1) {
      pIVar2 = pTVar1->Ptr;
      pTVar1->Ptr = param_1->Ptr;
      param_1->Ptr = (IAudioEndpointSettingsProxy *)0x0;
      if (pIVar2 != (IAudioEndpointSettingsProxy *)0x0) {
        (**(code **)*pIVar2)(pIVar2,1);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000144537671. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// StartRunningAsyncCallback @ 1445378e0

void __thiscall IAudioEndpoint::StartRunningAsyncCallback(IAudioEndpoint *this)

{
  bool bVar1;
  int iVar2;
  FMixerNullCallback *pFVar3;
  FMixerNullCallback *pFVar4;
  float fVar5;
  undefined1 local_res8 [32];
  code *local_48 [2];
  undefined **local_38;
  IAudioEndpoint *local_30;
  undefined8 local_20;
  
  fVar5 = (float)(**(code **)(this->_padding_ + 0x10))();
  if ((fVar5 <= 0.0) &&
     (bVar1 = `IAudioEndpoint::StartRunningAsyncCallback'::__l3::<lambda_1>::operator()(local_res8),
     !bVar1)) {
    return;
  }
  iVar2 = (**(code **)(this->_padding_ + 0x28))(this);
  fVar5 = (float)(**(code **)(this->_padding_ + 0x10))(this);
  pFVar3 = ::operator_new(0x70);
  pFVar4 = (FMixerNullCallback *)0x0;
  if (pFVar3 != (FMixerNullCallback *)0x0) {
    local_20 = 0;
    local_38 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`IAudioEndpoint::StartRunningAsyncCallback'::`2'::<lambda_2>,0,0>
                ::_vftable_;
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`IAudioEndpoint::StartRunningAsyncCallback'::__l2::<lambda_2>,void>
                  ::Call;
    local_30 = this;
    pFVar4 = Audio::FMixerNullCallback::FMixerNullCallback
                       (pFVar3,(float)iVar2 / fVar5,(TFunction<void___cdecl(void)> *)local_48,
                        TPri_TimeCritical,false);
  }
  pFVar3 = (this->RenderCallback).Ptr;
  if ((pFVar3 != pFVar4) &&
     ((this->RenderCallback).Ptr = pFVar4, pFVar3 != (FMixerNullCallback *)0x0)) {
    (**(code **)(*(longlong *)pFVar3 + 0x28))(pFVar3,1);
  }
  return;
}

// StopRunningAsyncCallback @ 144537bb0

void __thiscall IAudioEndpoint::StopRunningAsyncCallback(IAudioEndpoint *this)

{
  FMixerNullCallback *pFVar1;
  
  pFVar1 = (this->RenderCallback).Ptr;
  if (pFVar1 != (FMixerNullCallback *)0x0) {
    (this->RenderCallback).Ptr = (FMixerNullCallback *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000144537bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pFVar1 + 0x28))(pFVar1,1);
    return;
  }
  return;
}

// operator() @ 1504bff70

bool __thiscall
`IAudioEndpoint::StartRunningAsyncCallback'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6129695673227935656>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6129695673227935656>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

