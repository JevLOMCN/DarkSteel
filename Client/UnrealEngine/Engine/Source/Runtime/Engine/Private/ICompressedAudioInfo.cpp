// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// ICompressedAudioInfo @ 14761e150

ICompressedAudioInfo * __thiscall
ICompressedAudioInfo::ICompressedAudioInfo(ICompressedAudioInfo *this)

{
  this->bHasError = false;
  this->bWantsFilteredLogging = false;
  this->_padding_ = (longlong)&___7ICompressedAudioInfo__6B_;
  (this->StreamingSoundWave).Object = (FSoundWaveProxy *)0x0;
  (this->StreamingSoundWave).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~ICompressedAudioInfo @ 147621640

void __thiscall ICompressedAudioInfo::~ICompressedAudioInfo(ICompressedAudioInfo *this)

{
  this->_padding_ = (longlong)&___7ICompressedAudioInfo__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->StreamingSoundWave).SharedReferenceCount.ReferenceController);
  return;
}

// GetCurrentChunkIndex @ 14763bc60

int __thiscall ICompressedAudioInfo::GetCurrentChunkIndex(ICompressedAudioInfo *this)

{
  return -1;
}

// GetCurrentChunkOffset @ 14763bc70

int __thiscall ICompressedAudioInfo::GetCurrentChunkOffset(ICompressedAudioInfo *this)

{
  return -1;
}

// HasError @ 147645660

bool __thiscall ICompressedAudioInfo::HasError(ICompressedAudioInfo *this)

{
  return this->bHasError != false;
}

// StreamCompressedData @ 147665d70

bool __thiscall
ICompressedAudioInfo::StreamCompressedData
          (ICompressedAudioInfo *this,uchar *param_1,bool param_2,uint param_3,int *param_4)

{
  *param_4 = -1;
  return false;
}

// StreamCompressedInfo @ 147667340

bool __thiscall
ICompressedAudioInfo::StreamCompressedInfo
          (ICompressedAudioInfo *this,TSharedPtr<FSoundWaveProxy,1> *param_1,
          FSoundQualityInfo *param_2)

{
  FScriptContainerElement *pFVar1;
  ushort uVar2;
  ushort uVar3;
  FSoundWaveProxy *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  undefined1 uVar9;
  ushort uVar10;
  int iVar11;
  FName *this_00;
  FString *pFVar12;
  size_t sVar13;
  wchar_t *pwVar14;
  FScriptContainerElement *pFVar15;
  FString local_28;
  
  pFVar4 = param_1->Object;
  pTVar5 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar7 = (this->StreamingSoundWave).SharedReferenceCount.ReferenceController;
  (this->StreamingSoundWave).Object = pFVar4;
  (this->StreamingSoundWave).SharedReferenceCount.ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  pwVar14 = L"";
  if ((param_1->Object == (FSoundWaveProxy *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  this_00 = FSoundWaveProxy::GetFName(param_1->Object);
  pFVar12 = ::FName::ToString(this_00,&local_28);
  if ((pFVar12->Data).ArrayNum != 0) {
    pwVar14 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
  }
  if (((1 < Audio::ExtraTracingSoundWaveFilterCVar.Data.ArrayNum) &&
      (Audio::ExtraTracingSoundWaveFilterCVar.Data.AllocatorInstance.Data !=
       (FScriptContainerElement *)0x0)) &&
     ((FScriptContainerElement *)pwVar14 != (FScriptContainerElement *)0x0)) {
    uVar2 = *(ushort *)Audio::ExtraTracingSoundWaveFilterCVar.Data.AllocatorInstance.Data;
    uVar10 = -(ushort)(uVar2 - 0x61 < 0x1a) & 0x20;
    if (uVar2 == uVar10) {
LAB_1476674b3:
      bVar8 = true;
      goto LAB_147667468;
    }
    pFVar1 = Audio::ExtraTracingSoundWaveFilterCVar.Data.AllocatorInstance.Data + 2;
    sVar13 = wcslen((wchar_t *)Audio::ExtraTracingSoundWaveFilterCVar.Data.AllocatorInstance.Data);
    uVar3 = *pwVar14;
    while (uVar3 != 0) {
      pFVar15 = (FScriptContainerElement *)((longlong)pwVar14 + 2);
      if (((ushort)(uVar3 - (-(ushort)(uVar3 - 0x61 < 0x1a) & 0x20)) == (ushort)(uVar2 - uVar10)) &&
         (iVar11 = FGenericPlatformStricmp::Strnicmp
                             ((wchar_t *)pFVar15,(wchar_t *)pFVar1,(longlong)((int)sVar13 + -1)),
         iVar11 == 0)) {
        if ((FScriptContainerElement *)pwVar14 != (FScriptContainerElement *)0x0)
        goto LAB_1476674b3;
        break;
      }
      pwVar14 = (wchar_t *)pFVar15;
      uVar3 = *(ushort *)pFVar15;
    }
  }
  bVar8 = false;
LAB_147667468:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  this->bWantsFilteredLogging = bVar8;
                    /* WARNING: Could not recover jumptable at 0x0001476674a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar9 = (**(code **)(this->_padding_ + 0x70))(this,&this->StreamingSoundWave,param_2);
  return (bool)uVar9;
}

// StreamCompressedInfo @ 1476674c0

bool __thiscall
ICompressedAudioInfo::StreamCompressedInfo
          (ICompressedAudioInfo *this,USoundWave *param_1,FSoundQualityInfo *param_2)

{
  TSharedPtr<FSoundWaveProxy,1> *pTVar1;
  bool bVar2;
  undefined1 uVar3;
  TSharedPtr<FSoundWaveProxy,1> *pTVar4;
  FSoundWaveProxy *pFVar5;
  FName local_res10;
  TSharedPtr<FSoundWaveProxy,1> local_18;
  
  if (param_1 != (USoundWave *)0x0) {
    pTVar4 = USoundWave::CreateSoundWaveProxy(param_1,&local_18);
    pTVar1 = &this->StreamingSoundWave;
    if (pTVar1 != pTVar4) {
      pTVar1->Object = pTVar4->Object;
      pTVar4->Object = (FSoundWaveProxy *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->StreamingSoundWave).SharedReferenceCount,&pTVar4->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_18.SharedReferenceCount.ReferenceController._4_4_,
                        (int)local_18.SharedReferenceCount.ReferenceController));
    if (pTVar1->Object != (FSoundWaveProxy *)0x0) {
      local_res10 = (FName)param_1->_padding_;
      ::FName::ToString(&local_res10,(FString *)&local_18);
      pFVar5 = (FSoundWaveProxy *)L"";
      if ((int)local_18.SharedReferenceCount.ReferenceController != 0) {
        pFVar5 = local_18.Object;
      }
      bVar2 = Audio::MatchesLogFilter((wchar_t *)pFVar5);
      this->bWantsFilteredLogging = bVar2;
      if (local_18.Object != (FSoundWaveProxy *)0x0) {
        FMemory::Free(local_18.Object);
      }
      uVar3 = (**(code **)(this->_padding_ + 0x70))(this,pTVar1,param_2);
      return (bool)uVar3;
    }
  }
  return false;
}

// SupportsStreaming @ 147667750

bool __thiscall ICompressedAudioInfo::SupportsStreaming(ICompressedAudioInfo *this)

{
  return false;
}

