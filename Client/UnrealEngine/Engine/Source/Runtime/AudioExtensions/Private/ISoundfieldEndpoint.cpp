// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioExtensions
// Functions: 16

// ISoundfieldEndpoint @ 14452fdf0

ISoundfieldEndpoint * __thiscall
ISoundfieldEndpoint::ISoundfieldEndpoint(ISoundfieldEndpoint *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = &(this->AudioPacketBuffer).ArrayNum;
  piVar2 = &(this->AudioPacketBuffer).ArrayMax;
  this->_padding_ = (longlong)&___7ISoundfieldEndpoint__6B_;
  (this->RenderCallback).Ptr = (FMixerNullCallback *)0x0;
  (this->AudioPacketBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  *piVar2 = 0;
  (this->ReadCounter).Counter = 0;
  (this->WriteCounter).Counter = 0;
  (this->CurrentSettings).Ptr = (ISoundfieldEndpointSettingsProxy *)0x0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->CurrentSettingsCriticalSection,4000);
  iVar4 = 2;
  if (2 < param_1) {
    iVar4 = param_1;
  }
  iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar4,&(this->AudioPacketBuffer).AllocatorInstance,piVar1,piVar2);
  memset((this->AudioPacketBuffer).AllocatorInstance.Data + (longlong)iVar3 * 8,0,
         (longlong)iVar4 << 3);
  return this;
}

// ~ISoundfieldEndpoint @ 144530ae0

void __thiscall ISoundfieldEndpoint::~ISoundfieldEndpoint(ISoundfieldEndpoint *this)

{
  ISoundfieldEndpointSettingsProxy *pIVar1;
  FScriptContainerElement *pFVar2;
  FMixerNullCallback *pFVar3;
  
  this->_padding_ = (longlong)&___7ISoundfieldEndpoint__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CurrentSettingsCriticalSection);
  pIVar1 = (this->CurrentSettings).Ptr;
  if (pIVar1 != (ISoundfieldEndpointSettingsProxy *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  DestructItems<TUniquePtr<ISoundfieldAudioPacket,TDefaultDelete<ISoundfieldAudioPacket>_>,int>
            ((TUniquePtr<ISoundfieldAudioPacket,TDefaultDelete<ISoundfieldAudioPacket>_> *)
             (this->AudioPacketBuffer).AllocatorInstance.Data,(this->AudioPacketBuffer).ArrayNum);
  pFVar2 = (this->AudioPacketBuffer).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar3 = (this->RenderCallback).Ptr;
  if (pFVar3 != (FMixerNullCallback *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144530b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pFVar3 + 0x28))(pFVar3,1);
    return;
  }
  return;
}

// operator() @ 1445315e0

void __thiscall
`ISoundfieldEndpoint::RunCallbackSynchronously'::__l2::<lambda_1>::operator()
          (void *this,ISoundfieldEndpointSettingsProxy *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  undefined8 *local_res8;
  
  while( true ) {
    lVar3 = *(longlong *)this;
    iVar1 = *(int *)(lVar3 + 0x20);
    iVar6 = *(int *)(lVar3 + 0x24);
    if (iVar6 < iVar1) {
      iVar6 = (iVar6 - iVar1) + *(int *)(lVar3 + 0x18);
    }
    else {
      iVar6 = iVar6 - iVar1;
    }
    if (iVar6 < 1) {
      return;
    }
    uVar2 = *(uint *)(lVar3 + 0x20);
    uVar7 = 0;
    if ((int)uVar2 < *(int *)(lVar3 + 0x18)) {
      uVar7 = ~uVar2 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) break;
    local_res8 = *(undefined8 **)(*(longlong *)(lVar3 + 0x10) + (longlong)(int)uVar2 * 8);
    *(undefined8 *)(*(longlong *)(lVar3 + 0x10) + (longlong)(int)uVar2 * 8) = 0;
    LOCK();
    *(int *)(lVar3 + 0x20) = (int)(uVar2 + 1) % *(int *)(lVar3 + 0x18);
    UNLOCK();
    if (local_res8 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)(**(longlong **)this + 0x18))(*(longlong **)this,&local_res8,param_1);
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// EndpointRequiresCallback @ 144533140

bool __thiscall ISoundfieldEndpoint::EndpointRequiresCallback(ISoundfieldEndpoint *this)

{
  return false;
}

// GetDesiredCallbackPeriodicity @ 1445345c0

float __thiscall ISoundfieldEndpoint::GetDesiredCallbackPeriodicity(ISoundfieldEndpoint *this)

{
  return 0.0;
}

// GetNumPacketsBuffer @ 144534a10

int __thiscall ISoundfieldEndpoint::GetNumPacketsBuffer(ISoundfieldEndpoint *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (this->ReadCounter).Counter;
  iVar2 = (this->WriteCounter).Counter;
  iVar3 = iVar2 - iVar1;
  if (iVar1 <= iVar2) {
    return iVar3;
  }
  return (this->AudioPacketBuffer).ArrayNum + iVar3;
}

// GetRemainderInPacketBuffer @ 1445357e0

int __thiscall ISoundfieldEndpoint::GetRemainderInPacketBuffer(ISoundfieldEndpoint *this)

{
  return (uint)(((this->AudioPacketBuffer).ArrayNum - (this->WriteCounter).Counter) +
               (this->ReadCounter).Counter + -1) % (uint)(this->AudioPacketBuffer).ArrayNum;
}

// OnAudioCallback @ 1445364e0

void __thiscall
ISoundfieldEndpoint::OnAudioCallback
          (ISoundfieldEndpoint *this,
          TUniquePtr<ISoundfieldAudioPacket,TDefaultDelete<ISoundfieldAudioPacket>_> *param_1,
          ISoundfieldEndpointSettingsProxy *param_2)

{
  return;
}

// PollSettings @ 144536770

void __thiscall
ISoundfieldEndpoint::PollSettings
          (ISoundfieldEndpoint *this,
          TFunctionRef<void___cdecl(ISoundfieldEndpointSettingsProxy_const_*)> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ISoundfieldEndpointSettingsProxy *local_res8;
  
  lpCriticalSection = &this->CurrentSettingsCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_res8 = (this->CurrentSettings).Ptr;
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_res8);
                    /* WARNING: Could not recover jumptable at 0x0001445367c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// PopAudio @ 144536850

TUniquePtr<ISoundfieldAudioPacket,TDefaultDelete<ISoundfieldAudioPacket>_> __thiscall
ISoundfieldEndpoint::PopAudio(ISoundfieldEndpoint *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  ISoundfieldAudioPacket IVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  TUniquePtr<ISoundfieldAudioPacket,TDefaultDelete<ISoundfieldAudioPacket>_> TVar10;
  int iVar11;
  ISoundfieldAudioPacket *in_RDX;
  
  iVar2 = (this->ReadCounter).Counter;
  iVar3 = (this->WriteCounter).Counter;
  iVar11 = iVar3 - iVar2;
  piVar1 = &(this->AudioPacketBuffer).ArrayNum;
  if (iVar3 < iVar2) {
    iVar11 = iVar11 + *piVar1;
  }
  if (0 < iVar11) {
    uVar4 = (this->ReadCounter).Counter;
    uVar9 = 0;
    if ((int)uVar4 < (this->AudioPacketBuffer).ArrayNum) {
      uVar9 = ~uVar4 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        TVar10.Ptr = (ISoundfieldAudioPacket *)(*pcVar7)();
        return (TUniquePtr<ISoundfieldAudioPacket,TDefaultDelete<ISoundfieldAudioPacket>_>)
               TVar10.Ptr;
      }
    }
    pFVar5 = (this->AudioPacketBuffer).AllocatorInstance.Data;
    IVar6 = *(ISoundfieldAudioPacket *)(pFVar5 + (longlong)(int)uVar4 * 8);
    *(undefined8 *)(pFVar5 + (longlong)(int)uVar4 * 8) = 0;
    LOCK();
    (this->ReadCounter).Counter = (int)(uVar4 + 1) % *piVar1;
    UNLOCK();
    *in_RDX = IVar6;
    return (TUniquePtr<ISoundfieldAudioPacket,TDefaultDelete<ISoundfieldAudioPacket>_>)in_RDX;
  }
  *in_RDX = (ISoundfieldAudioPacket)0x0;
  return (TUniquePtr<ISoundfieldAudioPacket,TDefaultDelete<ISoundfieldAudioPacket>_>)in_RDX;
}

// ProcessAudioIfNecessary @ 144536970

void __thiscall ISoundfieldEndpoint::ProcessAudioIfNecessary(ISoundfieldEndpoint *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  char cVar1;
  ISoundfieldEndpoint *local_res8;
  
  if ((this->RenderCallback).Ptr == (FMixerNullCallback *)0x0) {
    cVar1 = (**(code **)(this->_padding_ + 8))();
    if (cVar1 != '\0') {
      lpCriticalSection = &this->CurrentSettingsCriticalSection;
      local_res8 = this;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      `ISoundfieldEndpoint::RunCallbackSynchronously'::__l2::<lambda_1>::operator()
                (&local_res8,(this->CurrentSettings).Ptr);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

// PushAudio @ 1445369e0

bool __thiscall
ISoundfieldEndpoint::PushAudio
          (ISoundfieldEndpoint *this,
          TUniquePtr<ISoundfieldAudioPacket,TDefaultDelete<ISoundfieldAudioPacket>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  
  if ((int)((uint)(((this->AudioPacketBuffer).ArrayNum - (this->WriteCounter).Counter) +
                  (this->ReadCounter).Counter + -1) % (uint)(this->AudioPacketBuffer).ArrayNum) < 1)
  {
    return false;
  }
  uVar2 = (this->WriteCounter).Counter;
  uVar7 = 0;
  if ((int)uVar2 < (this->AudioPacketBuffer).ArrayNum) {
    uVar7 = ~uVar2 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  pFVar1 = (this->AudioPacketBuffer).AllocatorInstance.Data + (longlong)(int)uVar2 * 8;
  if (pFVar1 != (FScriptContainerElement *)param_1) {
    puVar3 = *(undefined8 **)&pFVar1->field_0x0;
    *(ISoundfieldAudioPacket **)&pFVar1->field_0x0 = param_1->Ptr;
    param_1->Ptr = (ISoundfieldAudioPacket *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  LOCK();
  (this->WriteCounter).Counter = (int)(uVar2 + 1) % (this->AudioPacketBuffer).ArrayNum;
  UNLOCK();
  return true;
}

// RunCallbackSynchronously @ 1445375b0

void __thiscall ISoundfieldEndpoint::RunCallbackSynchronously(ISoundfieldEndpoint *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ISoundfieldEndpoint *local_res8;
  
  lpCriticalSection = &this->CurrentSettingsCriticalSection;
  local_res8 = this;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    `ISoundfieldEndpoint::RunCallbackSynchronously'::__l2::<lambda_1>::operator()
              (&local_res8,(this->CurrentSettings).Ptr);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetNewSettings @ 144537690

void __thiscall
ISoundfieldEndpoint::SetNewSettings
          (ISoundfieldEndpoint *this,
          TUniquePtr<ISoundfieldEndpointSettingsProxy,TDefaultDelete<ISoundfieldEndpointSettingsProxy>_>
          *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TUniquePtr<ISoundfieldEndpointSettingsProxy,TDefaultDelete<ISoundfieldEndpointSettingsProxy>_>
  *pTVar1;
  ISoundfieldEndpointSettingsProxy *pIVar2;
  
  lpCriticalSection = &this->CurrentSettingsCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar1 = &this->CurrentSettings;
    if (pTVar1 != param_1) {
      pIVar2 = pTVar1->Ptr;
      pTVar1->Ptr = param_1->Ptr;
      param_1->Ptr = (ISoundfieldEndpointSettingsProxy *)0x0;
      if (pIVar2 != (ISoundfieldEndpointSettingsProxy *)0x0) {
        (**(code **)*pIVar2)(pIVar2,1);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0001445376f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// StartRunningCallback @ 1445379b0

void __thiscall ISoundfieldEndpoint::StartRunningCallback(ISoundfieldEndpoint *this)

{
  FMixerNullCallback *pFVar1;
  FMixerNullCallback *pFVar2;
  float fVar3;
  code *local_48 [2];
  undefined **local_38;
  ISoundfieldEndpoint *local_30;
  undefined8 local_20;
  
  fVar3 = (float)(**(code **)(this->_padding_ + 0x10))();
  pFVar1 = ::operator_new(0x70);
  pFVar2 = (FMixerNullCallback *)0x0;
  if (pFVar1 != (FMixerNullCallback *)0x0) {
    local_20 = 0;
    local_38 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`ISoundfieldEndpoint::StartRunningCallback'::`2'::<lambda_1>,0,0>
                ::_vftable_;
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`ISoundfieldEndpoint::StartRunningCallback'::__l2::<lambda_1>,void>
                  ::Call;
    local_30 = this;
    pFVar2 = Audio::FMixerNullCallback::FMixerNullCallback
                       (pFVar1,fVar3,(TFunction<void___cdecl(void)> *)local_48,TPri_TimeCritical,
                        false);
  }
  pFVar1 = (this->RenderCallback).Ptr;
  if ((pFVar1 != pFVar2) &&
     ((this->RenderCallback).Ptr = pFVar2, pFVar1 != (FMixerNullCallback *)0x0)) {
    (**(code **)(*(longlong *)pFVar1 + 0x28))(pFVar1,1);
  }
  return;
}

// StopRunningCallback @ 144537be0

void __thiscall ISoundfieldEndpoint::StopRunningCallback(ISoundfieldEndpoint *this)

{
  FMixerNullCallback *pFVar1;
  
  pFVar1 = (this->RenderCallback).Ptr;
  if (pFVar1 != (FMixerNullCallback *)0x0) {
    (this->RenderCallback).Ptr = (FMixerNullCallback *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000144537bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pFVar1 + 0x28))(pFVar1,1);
    return;
  }
  return;
}

