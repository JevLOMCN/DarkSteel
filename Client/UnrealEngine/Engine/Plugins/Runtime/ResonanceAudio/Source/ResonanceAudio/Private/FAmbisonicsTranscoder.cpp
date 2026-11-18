// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 4

// FAmbisonicsTranscoder @ 14f043a90

FAmbisonicsTranscoder * __thiscall
ResonanceAudio::FAmbisonicsTranscoder::FAmbisonicsTranscoder
          (FAmbisonicsTranscoder *this,TSharedPtr<vraudio::ResonanceAudioApi,1> *param_1,int param_2
          ,bool param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  ResonanceAudioApi *pRVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FAmbisonicsTranscoder *pFVar6;
  
  this->_padding_ = (longlong)&___7FAmbisonicsTranscoder_ResonanceAudio__6B_;
  (this->ResonanceSystem).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->ResonanceSystem).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pRVar2 = (this->ResonanceSystem).Object;
  this->NumChannels = param_2;
  if (pRVar2 == (ResonanceAudioApi *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ResonanceSystem",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioAmbisonics.cpp"
                       ,0xd5,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FAmbisonicsTranscoder *)(*pcVar3)();
      return pFVar6;
    }
  }
  if ((this->ResonanceSystem).Object == (ResonanceAudioApi *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FAmbisonicsTranscoder *)(*pcVar3)();
      return pFVar6;
    }
  }
  pRVar2 = (this->ResonanceSystem).Object;
  iVar5 = (**(code **)((longlong)*pRVar2 + 0x48))(pRVar2,(longlong)this->NumChannels);
  this->AmbisonicsSourceId = iVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FAmbisonicsTranscoder @ 14f044780

void __thiscall
ResonanceAudio::FAmbisonicsTranscoder::~FAmbisonicsTranscoder(FAmbisonicsTranscoder *this)

{
  ResonanceAudioApi *pRVar1;
  code *pcVar2;
  bool bVar3;
  
  this->_padding_ = (longlong)&___7FAmbisonicsTranscoder_ResonanceAudio__6B_;
  if ((this->ResonanceSystem).Object == (ResonanceAudioApi *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ResonanceSystem",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioAmbisonics.cpp"
                       ,0xdb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->ResonanceSystem).Object == (ResonanceAudioApi *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pRVar1 = (this->ResonanceSystem).Object;
  (**(code **)((longlong)*pRVar1 + 0x60))(pRVar1,this->AmbisonicsSourceId);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ResonanceSystem).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7ISoundfieldTranscodeStream__6B_;
  return;
}

// Transcode @ 14f04d700

void __thiscall
ResonanceAudio::FAmbisonicsTranscoder::Transcode
          (FAmbisonicsTranscoder *this,ISoundfieldAudioPacket *param_1,
          ISoundfieldEncodingSettingsProxy *param_2,ISoundfieldAudioPacket *param_3,
          ISoundfieldEncodingSettingsProxy *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00014f04d707. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x10))();
  return;
}

// TranscodeAndMixIn @ 14f04d710

void __thiscall
ResonanceAudio::FAmbisonicsTranscoder::TranscodeAndMixIn
          (FAmbisonicsTranscoder *this,ISoundfieldAudioPacket *param_1,
          ISoundfieldEncodingSettingsProxy *param_2,ISoundfieldAudioPacket *param_3,
          ISoundfieldEncodingSettingsProxy *param_4)

{
  ResonanceAudioApi *pRVar1;
  ISoundfieldAudioPacket IVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  if (param_1 == (ISoundfieldAudioPacket *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("&InRef != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Public\\ISoundfieldFormat.h"
                       ,0x5c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_3 == (ISoundfieldAudioPacket *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("&InRef != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Public\\ISoundfieldFormat.h"
                       ,0x5c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((this->ResonanceSystem).Object == (ResonanceAudioApi *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ResonanceSystem",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioAmbisonics.cpp"
                       ,0xea,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)(param_1 + 3);
  if (0 < iVar5) {
    if (iVar5 != this->NumChannels) {
      if ((this->ResonanceSystem).Object == (ResonanceAudioApi *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ResonanceSystem",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioAmbisonics.cpp"
                           ,0xc9,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((this->ResonanceSystem).Object == (ResonanceAudioApi *)0x0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
      }
      pRVar1 = (this->ResonanceSystem).Object;
      (**(code **)((longlong)*pRVar1 + 0x60))(pRVar1,this->AmbisonicsSourceId);
      this->NumChannels = iVar5;
      if ((this->ResonanceSystem).Object == (ResonanceAudioApi *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pRVar1 = (this->ResonanceSystem).Object;
      iVar5 = (**(code **)((longlong)*pRVar1 + 0x48))(pRVar1,(longlong)this->NumChannels);
      this->AmbisonicsSourceId = iVar5;
    }
    if ((this->ResonanceSystem).Object == (ResonanceAudioApi *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pRVar1 = (this->ResonanceSystem).Object;
    (**(code **)((longlong)*pRVar1 + 0x70))
              (pRVar1,this->AmbisonicsSourceId,param_1[1],(longlong)this->NumChannels,
               (longlong)(*(int *)(param_1 + 2) / this->NumChannels));
  }
  IVar2 = (ISoundfieldAudioPacket)(this->ResonanceSystem).Object;
  if (IVar2 == (ISoundfieldAudioPacket)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InResonanceSystem",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioAmbisonics.h"
                       ,0x25,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  param_3[1] = IVar2;
  return;
}

