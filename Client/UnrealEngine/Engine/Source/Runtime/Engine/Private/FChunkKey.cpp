// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FChunkKey @ 147687830

FChunkKey * __thiscall
FAudioChunkCache::FChunkKey::FChunkKey
          (FChunkKey *this,TSharedPtr<FSoundWaveData,1> *param_1,uint param_2)

{
  FSoundWaveData *pFVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  FChunkKey *pFVar7;
  
  this->ChunkIndex = param_2;
  (this->SoundWaveName).ComparisonIndex = 0;
  (this->SoundWaveName).Number = 0;
  (this->ObjectKey).A = 0;
  (this->ObjectKey).B = 0;
  (this->ObjectKey).C = 0;
  (this->ObjectKey).D = 0;
  if (param_1->Object != (FSoundWaveData *)0x0) {
    this->SoundWaveName = param_1->Object->NameCached;
    if (param_1->Object == (FSoundWaveData *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FChunkKey *)(*pcVar2)();
        return pFVar7;
      }
    }
    pFVar1 = param_1->Object;
    uVar3 = (pFVar1->WaveGuid).B;
    uVar4 = (pFVar1->WaveGuid).C;
    uVar5 = (pFVar1->WaveGuid).D;
    (this->ObjectKey).A = (pFVar1->WaveGuid).A;
    (this->ObjectKey).B = uVar3;
    (this->ObjectKey).C = uVar4;
    (this->ObjectKey).D = uVar5;
  }
  return this;
}

// FChunkKey @ 1476878b0

FChunkKey * __thiscall
FAudioChunkCache::FChunkKey::FChunkKey(FChunkKey *this,FName *param_1,FGuid *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  this->SoundWaveName = *param_1;
  uVar1 = param_2->A;
  uVar2 = param_2->B;
  uVar3 = param_2->C;
  uVar4 = param_2->D;
  this->ChunkIndex = param_3;
  (this->ObjectKey).A = uVar1;
  (this->ObjectKey).B = uVar2;
  (this->ObjectKey).C = uVar3;
  (this->ObjectKey).D = uVar4;
  return this;
}

// operator== @ 14768b130

bool __thiscall FAudioChunkCache::FChunkKey::operator==(FChunkKey *this,FChunkKey *param_1)

{
  if (((this->SoundWaveName == param_1->SoundWaveName) &&
      ((((this->ObjectKey).D == (param_1->ObjectKey).D &&
        (this->ObjectKey).C == (param_1->ObjectKey).C) &&
       (this->ObjectKey).B == (param_1->ObjectKey).B) &&
       (param_1->ObjectKey).A == (this->ObjectKey).A)) && (this->ChunkIndex == param_1->ChunkIndex))
  {
    return true;
  }
  return false;
}

