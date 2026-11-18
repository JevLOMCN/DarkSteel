// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// FAudioChunkHandle @ 1479a3280

FAudioChunkHandle * __thiscall
FAudioChunkHandle::FAudioChunkHandle
          (FAudioChunkHandle *this,uchar *param_1,uint param_2,
          TSharedPtr<FSoundWaveProxy,1> *param_3,FName *param_4,uint param_5,ulong64 param_6)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  FAudioChunkHandle *pFVar6;
  FStreamingManagerCollection *pFVar7;
  TSharedPtr<FSoundWaveData,1> local_18;
  
  this->CachedData = param_1;
  this->CachedDataNumBytes = param_2;
  this->CorrespondingWaveName = *param_4;
  (this->CorrespondingWaveGuid).A = 0;
  (this->CorrespondingWaveGuid).B = 0;
  (this->CorrespondingWaveGuid).C = 0;
  (this->CorrespondingWaveGuid).D = 0;
  this->ChunkIndex = param_5;
  if (param_3->Object != (FSoundWaveProxy *)0x0) {
    FSoundWaveProxy::GetSoundWaveData(param_3->Object,&local_18);
    if (local_18.Object != (FSoundWaveData *)0x0) {
      if ((local_18.Object == (FSoundWaveData *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FAudioChunkHandle *)(*pcVar1)();
        return pFVar6;
      }
      uVar2 = ((local_18.Object)->WaveGuid).B;
      uVar3 = ((local_18.Object)->WaveGuid).C;
      uVar4 = ((local_18.Object)->WaveGuid).D;
      (this->CorrespondingWaveGuid).A = ((local_18.Object)->WaveGuid).A;
      (this->CorrespondingWaveGuid).B = uVar2;
      (this->CorrespondingWaveGuid).C = uVar3;
      (this->CorrespondingWaveGuid).D = uVar4;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  if (this->CachedData != (uchar *)0x0) {
    pFVar7 = IStreamingManager::Get();
    if ((pFVar7->AudioStreamingManager == (IAudioStreamingManager *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("AudioStreamingManager",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ContentStreaming.cpp"
                           ,0x40f,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FAudioChunkHandle *)(*pcVar1)();
      return pFVar6;
    }
    (**(code **)(*(longlong *)pFVar7->AudioStreamingManager + 0xe0))
              (pFVar7->AudioStreamingManager,this);
  }
  return this;
}

// FAudioChunkHandle @ 1479a3380

FAudioChunkHandle * __thiscall
FAudioChunkHandle::FAudioChunkHandle(FAudioChunkHandle *this,FAudioChunkHandle *param_1)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  FStreamingManagerCollection *pFVar6;
  FAudioChunkHandle *pFVar7;
  
  this->CachedData = (uchar *)0x0;
  this->CachedDataNumBytes = 0;
  (this->CorrespondingWaveName).ComparisonIndex = 0;
  *(undefined8 *)&(this->CorrespondingWaveName).Number = 0;
  (this->CorrespondingWaveGuid).B = 0;
  (this->CorrespondingWaveGuid).C = 0;
  (this->CorrespondingWaveGuid).D = 0;
  this->ChunkIndex = -1;
  if (this->CachedData != (uchar *)0x0) {
    pFVar6 = IStreamingManager::Get();
    if (pFVar6->AudioStreamingManager == (IAudioStreamingManager *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("AudioStreamingManager",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ContentStreaming.cpp"
                         ,0x40f,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        pFVar7 = (FAudioChunkHandle *)(*pcVar1)();
        return pFVar7;
      }
    }
    (**(code **)(*(longlong *)pFVar6->AudioStreamingManager + 0xe8))
              (pFVar6->AudioStreamingManager,this);
  }
  this->CachedData = param_1->CachedData;
  this->CachedDataNumBytes = param_1->CachedDataNumBytes;
  this->CorrespondingWaveName = param_1->CorrespondingWaveName;
  uVar2 = (param_1->CorrespondingWaveGuid).B;
  uVar3 = (param_1->CorrespondingWaveGuid).C;
  uVar4 = (param_1->CorrespondingWaveGuid).D;
  (this->CorrespondingWaveGuid).A = (param_1->CorrespondingWaveGuid).A;
  (this->CorrespondingWaveGuid).B = uVar2;
  (this->CorrespondingWaveGuid).C = uVar3;
  (this->CorrespondingWaveGuid).D = uVar4;
  this->ChunkIndex = param_1->ChunkIndex;
  (param_1->CorrespondingWaveName).ComparisonIndex = 0;
  (param_1->CorrespondingWaveName).Number = 0;
  param_1->CachedData = (uchar *)0x0;
  param_1->CachedDataNumBytes = 0;
  (param_1->CorrespondingWaveGuid).A = 0;
  (param_1->CorrespondingWaveGuid).B = 0;
  (param_1->CorrespondingWaveGuid).C = 0;
  (param_1->CorrespondingWaveGuid).D = 0;
  param_1->ChunkIndex = -1;
  return this;
}

// FAudioChunkHandle @ 1479a3470

FAudioChunkHandle * __thiscall
FAudioChunkHandle::FAudioChunkHandle(FAudioChunkHandle *this,FAudioChunkHandle *param_1)

{
  uchar *puVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  FStreamingManagerCollection *pFVar7;
  FAudioChunkHandle *pFVar8;
  
  this->CachedData = (uchar *)0x0;
  this->CachedDataNumBytes = 0;
  (this->CorrespondingWaveName).ComparisonIndex = 0;
  *(undefined8 *)&(this->CorrespondingWaveName).Number = 0;
  (this->CorrespondingWaveGuid).B = 0;
  (this->CorrespondingWaveGuid).C = 0;
  (this->CorrespondingWaveGuid).D = 0;
  this->ChunkIndex = -1;
  if (this->CachedData != (uchar *)0x0) {
    pFVar7 = IStreamingManager::Get();
    if (pFVar7->AudioStreamingManager == (IAudioStreamingManager *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("AudioStreamingManager",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ContentStreaming.cpp"
                         ,0x40f,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        pFVar8 = (FAudioChunkHandle *)(*pcVar2)();
        return pFVar8;
      }
    }
    (**(code **)(*(longlong *)pFVar7->AudioStreamingManager + 0xe8))
              (pFVar7->AudioStreamingManager,this);
  }
  puVar1 = param_1->CachedData;
  this->CachedData = puVar1;
  this->CachedDataNumBytes = param_1->CachedDataNumBytes;
  this->CorrespondingWaveName = param_1->CorrespondingWaveName;
  uVar3 = (param_1->CorrespondingWaveGuid).B;
  uVar4 = (param_1->CorrespondingWaveGuid).C;
  uVar5 = (param_1->CorrespondingWaveGuid).D;
  (this->CorrespondingWaveGuid).A = (param_1->CorrespondingWaveGuid).A;
  (this->CorrespondingWaveGuid).B = uVar3;
  (this->CorrespondingWaveGuid).C = uVar4;
  (this->CorrespondingWaveGuid).D = uVar5;
  this->ChunkIndex = param_1->ChunkIndex;
  if (puVar1 != (uchar *)0x0) {
    pFVar7 = IStreamingManager::Get();
    if (pFVar7->AudioStreamingManager == (IAudioStreamingManager *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("AudioStreamingManager",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ContentStreaming.cpp"
                         ,0x40f,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        pFVar8 = (FAudioChunkHandle *)(*pcVar2)();
        return pFVar8;
      }
    }
    (**(code **)(*(longlong *)pFVar7->AudioStreamingManager + 0xe0))
              (pFVar7->AudioStreamingManager,this);
  }
  return this;
}

// FAudioChunkHandle @ 1479a3570

FAudioChunkHandle * __thiscall FAudioChunkHandle::FAudioChunkHandle(FAudioChunkHandle *this)

{
  this->ChunkIndex = -1;
  this->CachedData = (uchar *)0x0;
  this->CachedDataNumBytes = 0;
  (this->CorrespondingWaveName).ComparisonIndex = 0;
  *(undefined8 *)&(this->CorrespondingWaveName).Number = 0;
  (this->CorrespondingWaveGuid).B = 0;
  (this->CorrespondingWaveGuid).C = 0;
  (this->CorrespondingWaveGuid).D = 0;
  return this;
}

// ~FAudioChunkHandle @ 1479a8d70

void __thiscall FAudioChunkHandle::~FAudioChunkHandle(FAudioChunkHandle *this)

{
  code *pcVar1;
  bool bVar2;
  FStreamingManagerCollection *pFVar3;
  
  if (this->CachedData != (uchar *)0x0) {
    pFVar3 = IStreamingManager::Get();
    if (pFVar3->AudioStreamingManager == (IAudioStreamingManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("AudioStreamingManager",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ContentStreaming.cpp"
                         ,0x40f,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (**(code **)(*(longlong *)pFVar3->AudioStreamingManager + 0xe8))
              (pFVar3->AudioStreamingManager,this);
  }
  return;
}

// operator= @ 1479a9ef0

FAudioChunkHandle * __thiscall
FAudioChunkHandle::operator=(FAudioChunkHandle *this,FAudioChunkHandle *param_1)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  FStreamingManagerCollection *pFVar6;
  FAudioChunkHandle *pFVar7;
  
  if (this->CachedData != (uchar *)0x0) {
    pFVar6 = IStreamingManager::Get();
    if (pFVar6->AudioStreamingManager == (IAudioStreamingManager *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("AudioStreamingManager",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ContentStreaming.cpp"
                         ,0x40f,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        pFVar7 = (FAudioChunkHandle *)(*pcVar1)();
        return pFVar7;
      }
    }
    (**(code **)(*(longlong *)pFVar6->AudioStreamingManager + 0xe8))
              (pFVar6->AudioStreamingManager,this);
  }
  this->CachedData = param_1->CachedData;
  this->CachedDataNumBytes = param_1->CachedDataNumBytes;
  this->CorrespondingWaveName = param_1->CorrespondingWaveName;
  uVar2 = (param_1->CorrespondingWaveGuid).B;
  uVar3 = (param_1->CorrespondingWaveGuid).C;
  uVar4 = (param_1->CorrespondingWaveGuid).D;
  (this->CorrespondingWaveGuid).A = (param_1->CorrespondingWaveGuid).A;
  (this->CorrespondingWaveGuid).B = uVar2;
  (this->CorrespondingWaveGuid).C = uVar3;
  (this->CorrespondingWaveGuid).D = uVar4;
  this->ChunkIndex = param_1->ChunkIndex;
  param_1->CachedData = (uchar *)0x0;
  param_1->CachedDataNumBytes = 0;
  (param_1->CorrespondingWaveName).ComparisonIndex = 0;
  (param_1->CorrespondingWaveName).Number = 0;
  (param_1->CorrespondingWaveGuid).A = 0;
  (param_1->CorrespondingWaveGuid).B = 0;
  (param_1->CorrespondingWaveGuid).C = 0;
  (param_1->CorrespondingWaveGuid).D = 0;
  param_1->ChunkIndex = -1;
  return this;
}

// operator= @ 1479a9fc0

FAudioChunkHandle * __thiscall
FAudioChunkHandle::operator=(FAudioChunkHandle *this,FAudioChunkHandle *param_1)

{
  uchar *puVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  FStreamingManagerCollection *pFVar7;
  FAudioChunkHandle *pFVar8;
  
  if (this->CachedData != (uchar *)0x0) {
    pFVar7 = IStreamingManager::Get();
    if (pFVar7->AudioStreamingManager == (IAudioStreamingManager *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("AudioStreamingManager",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ContentStreaming.cpp"
                         ,0x40f,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        pFVar8 = (FAudioChunkHandle *)(*pcVar2)();
        return pFVar8;
      }
    }
    (**(code **)(*(longlong *)pFVar7->AudioStreamingManager + 0xe8))
              (pFVar7->AudioStreamingManager,this);
  }
  puVar1 = param_1->CachedData;
  this->CachedData = puVar1;
  this->CachedDataNumBytes = param_1->CachedDataNumBytes;
  this->CorrespondingWaveName = param_1->CorrespondingWaveName;
  uVar3 = (param_1->CorrespondingWaveGuid).B;
  uVar4 = (param_1->CorrespondingWaveGuid).C;
  uVar5 = (param_1->CorrespondingWaveGuid).D;
  (this->CorrespondingWaveGuid).A = (param_1->CorrespondingWaveGuid).A;
  (this->CorrespondingWaveGuid).B = uVar3;
  (this->CorrespondingWaveGuid).C = uVar4;
  (this->CorrespondingWaveGuid).D = uVar5;
  this->ChunkIndex = param_1->ChunkIndex;
  if (puVar1 != (uchar *)0x0) {
    pFVar7 = IStreamingManager::Get();
    if (pFVar7->AudioStreamingManager == (IAudioStreamingManager *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("AudioStreamingManager",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ContentStreaming.cpp"
                         ,0x40f,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        pFVar8 = (FAudioChunkHandle *)(*pcVar2)();
        return pFVar8;
      }
    }
    (**(code **)(*(longlong *)pFVar7->AudioStreamingManager + 0xe0))
              (pFVar7->AudioStreamingManager,this);
  }
  return this;
}

// GetData @ 1479c5b10

uchar * __thiscall FAudioChunkHandle::GetData(FAudioChunkHandle *this)

{
  return this->CachedData;
}

// IsValid @ 1479da930

bool __thiscall FAudioChunkHandle::IsValid(FAudioChunkHandle *this)

{
  return this->CachedData != (uchar *)0x0;
}

// Num @ 1479db6e0

uint __thiscall FAudioChunkHandle::Num(FAudioChunkHandle *this)

{
  return this->CachedDataNumBytes;
}

