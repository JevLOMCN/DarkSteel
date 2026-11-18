// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixerWasapi
// Functions: 5

// ~FWasapiDefaultRenderStream @ 148d431f0

void __thiscall
Audio::FWasapiDefaultRenderStream::~FWasapiDefaultRenderStream(FWasapiDefaultRenderStream *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ReadNextBufferDelegate);
  pvVar1 = *(void **)&(this->ReadNextBufferDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ReadNextBufferDelegate);
  FAudioMixerWasapiRenderStream::~FAudioMixerWasapiRenderStream
            ((FAudioMixerWasapiRenderStream *)this);
  return;
}

// DeviceRenderCallback @ 148d44ad0

void __thiscall
Audio::FWasapiDefaultRenderStream::DeviceRenderCallback(FWasapiDefaultRenderStream *this)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  int local_res10 [4];
  int local_res20;
  longlong local_88;
  uchar *local_80;
  int iStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined4 uStack_68;
  uint uStack_64;
  FReadAccessScope local_60;
  
  FGenericPlatformMisc::BeginNamedEvent
            (&FColor::Blue,"FWasapiDefaultRenderStream_DeviceRenderCallback");
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId32,"FWasapiDefaultRenderStream_DeviceRenderCallback",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerWasapi\\Private\\WasapiDefaultRenderStream.cpp"
               ,0x20);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId32);
  }
  if (*(int *)((longlong)&this->_padding_ + 4) == 4) {
    iVar11 = 0;
    local_res10[0] = 0;
    if ((this->_padding_ == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("RawPointer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                           ,0x9f,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)(*(longlong *)this->_padding_ + 0x30))((longlong *)this->_padding_,local_res10);
    iVar9 = *(int *)((longlong)&this->_padding_ + 4) - local_res10[0];
    if (this->EngineBufferNumFrames <= iVar9) {
      if (((this->RenderBufferView).ArrayNum != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("RenderBufferView.IsEmpty()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerWasapi\\Private\\WasapiDefaultRenderStream.cpp"
                             ,0x30,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar9 = iVar9 / this->EngineBufferNumFrames;
      iVar8 = this->EngineBufferNumFrames * iVar9;
      local_res20 = iVar8;
      uVar6 = FWasapiAudioFormat::GetFrameSizeInBytes((FWasapiAudioFormat *)&this->_padding_);
      local_88 = 0;
      if ((this->_padding_ == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("RawPointer != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                             ,0x9f,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar7 = (**(code **)(*(longlong *)this->_padding_ + 0x18))
                        ((longlong *)this->_padding_,iVar8,&local_88);
      lVar3 = local_88;
      if (iVar7 < 0) {
        *(int *)&this->_padding_ = (int)this->_padding_ + 1;
      }
      else {
        if (((int)(uVar6 * iVar8) < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar7 = iVar8;
        if (0 < iVar9) {
          do {
            iVar7 = iVar11 * (int)this->EngineBufferNumBytes;
            iVar10 = uVar6 * iVar8 - iVar7;
            if ((iVar7 < 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x15b,L"Invalid index (%lld)"), bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if ((iVar10 < 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InNum >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x15c,L"Invalid count (%lld)"), bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            local_80 = (uchar *)(iVar7 + lVar3);
            iStack_78 = iVar10;
            if ((iVar10 < 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ArrayNum >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xfe,L""), bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            (this->RenderBufferView).DataPtr = local_80;
            *(ulonglong *)&(this->RenderBufferView).ArrayNum = CONCAT44(uStack_74,iStack_78);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &this->ReadNextBufferDelegate,&local_60);
            if ((*(int *)&(this->ReadNextBufferDelegate).field_0x10 == 0) ||
               (plVar1 = *(longlong **)&(this->ReadNextBufferDelegate).field_0x8,
               plVar1 == (longlong *)0x0)) {
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
              ~FReadAccessScope(&local_60);
LAB_148d44de2:
              *(int *)&this->_padding_ = (int)this->_padding_ + 1;
            }
            else {
              cVar5 = (**(code **)(*plVar1 + 0x68))();
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
              ~FReadAccessScope(&local_60);
              if (cVar5 == '\0') goto LAB_148d44de2;
            }
            iVar11 = iVar11 + 1;
            iVar7 = local_res20;
          } while (iVar11 < iVar9);
        }
        if ((this->_padding_ == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("RawPointer != 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                               ,0x9f,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar11 = (**(code **)(*(longlong *)this->_padding_ + 0x20))
                           ((longlong *)this->_padding_,iVar7,0);
        if (iVar11 < 0) {
          *(int *)&this->_padding_ = (int)this->_padding_ + 1;
        }
        local_70 = 0;
        uStack_68 = 0;
        (this->RenderBufferView).DataPtr = (uchar *)0x0;
        *(ulonglong *)&(this->RenderBufferView).ArrayNum = (ulonglong)uStack_64 << 0x20;
      }
    }
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// InitializeHardware @ 148d47ab0

bool __thiscall
Audio::FWasapiDefaultRenderStream::InitializeHardware
          (FWasapiDefaultRenderStream *this,FWasapiRenderStreamParams *param_1)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  
  bVar2 = FAudioMixerWasapiRenderStream::InitializeHardware
                    ((FAudioMixerWasapiRenderStream *)this,param_1);
  if (bVar2) {
    uVar1 = param_1->NumFrames;
    this->EngineBufferNumFrames = uVar1;
    uVar3 = FWasapiAudioFormat::GetFrameSizeInBytes((FWasapiAudioFormat *)&this->_padding_);
    this->EngineBufferNumBytes = (ulonglong)(uVar3 * uVar1);
    return true;
  }
  return false;
}

// SubmitBuffer @ 148d4b250

void __thiscall
Audio::FWasapiDefaultRenderStream::SubmitBuffer
          (FWasapiDefaultRenderStream *this,uchar *param_1,ulong64 param_2)

{
  uint uVar1;
  uchar *_Dst;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  if (((*(int *)((longlong)&this->_padding_ + 4) == 4) && (param_1 != (uchar *)0x0)) &&
     (param_2 <= (ulonglong)(longlong)(this->RenderBufferView).ArrayNum)) {
    if ((param_2 != (uint)this->_padding_) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InNumFrames == RenderStreamParams.NumFrames",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerWasapi\\Private\\WasapiDefaultRenderStream.cpp"
                           ,0x5e,L"InNumFrames = %d, RenderStreamParams.NumFrames = %d"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar4 = FWasapiAudioFormat::GetFrameSizeInBytes((FWasapiAudioFormat *)&this->_padding_);
    _Dst = (this->RenderBufferView).DataPtr;
    if (_Dst != (uchar *)0x0) {
      uVar1 = (uint)this->_padding_;
      uVar5 = FWasapiAudioFormat::GetNumChannels((FWasapiAudioFormat *)&this->_padding_);
      if (uVar5 != uVar1) {
        DownmixBuffer(uVar1,uVar5,(float *)param_1,(float *)this->_padding_,(int)param_2,
                      (float *)this->_padding_);
        param_1 = (uchar *)this->_padding_;
      }
      memcpy(_Dst,param_1,uVar4 * param_2);
    }
  }
  return;
}

// TeardownHardware @ 148d4bc50

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FWasapiDefaultRenderStream::TeardownHardware(FWasapiDefaultRenderStream *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ReadNextBufferDelegate);
  if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
    if (2 < (byte)LogAudioMixerWasapi._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixerWasapi);
    }
    return false;
  }
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)this->_padding_ + 0x10))();
    this->_padding_ = 0;
  }
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)this->_padding_ + 0x10))();
    this->_padding_ = 0;
  }
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 0;
  if (5 < (byte)LogAudioMixerWasapi._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixerWasapi);
  }
  return true;
}

