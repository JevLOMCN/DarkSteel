// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 6

// FWavEncoder @ 1445211d0

FWavEncoder * __thiscall
FWavEncoder::FWavEncoder(FWavEncoder *this,FSoundQualityInfo *param_1,int param_2)

{
  Audio::IAudioEncoder::IAudioEncoder((IAudioEncoder *)this,param_2 * 4,param_2 << 5);
  this->CallbackSize = param_2;
  this->_padding_ = (longlong)&___7FWavEncoder__6B_;
  Audio::IAudioEncoder::Init((IAudioEncoder *)this,param_1);
  return this;
}

// EncodeChunk @ 144522fd0

bool __thiscall
FWavEncoder::EncodeChunk
          (FWavEncoder *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,param_1->ArrayNum * 2,&param_2->AllocatorInstance,&param_2->ArrayNum,
             &param_2->ArrayMax);
  fVar3 = __real_46fffe00;
  pFVar9 = (param_2->AllocatorInstance).Data;
  uVar8 = 0;
  iVar7 = param_1->ArrayNum;
  if (0 < iVar7) {
    lVar10 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar8 < iVar7) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      uVar8 = uVar8 + 1;
      pFVar1 = (param_1->AllocatorInstance).Data + lVar10;
      lVar10 = lVar10 + 4;
      *(short *)pFVar9 = (short)(int)(*(float *)pFVar1 * fVar3);
      pFVar9 = pFVar9 + 2;
      iVar7 = param_1->ArrayNum;
    } while ((int)uVar8 < iVar7);
  }
  return true;
}

// EndFile @ 1445230d0

bool __thiscall
FWavEncoder::EndFile(FWavEncoder *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  return true;
}

// GetCompressedPacketSize @ 1445233a0

int __thiscall FWavEncoder::GetCompressedPacketSize(FWavEncoder *this)

{
  return 0;
}

// SamplesRequiredPerEncode @ 144525200

long64 __thiscall FWavEncoder::SamplesRequiredPerEncode(FWavEncoder *this)

{
  return (longlong)this->CallbackSize;
}

// StartFile @ 1445256f0

bool __thiscall
FWavEncoder::StartFile
          (FWavEncoder *this,FSoundQualityInfo *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  piVar1 = &param_2->ArrayMax;
  piVar2 = &param_2->ArrayNum;
  *piVar2 = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&param_2->AllocatorInstance,0,piVar1);
  }
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,4,&param_2->AllocatorInstance,piVar2,piVar1);
  *(undefined4 *)((param_2->AllocatorInstance).Data + iVar5) = 0x46464952;
  uVar3 = param_1->SampleDataSize;
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,4,&param_2->AllocatorInstance,piVar2,piVar1);
  *(uint *)((param_2->AllocatorInstance).Data + iVar5) = uVar3 + 0x24;
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,4,&param_2->AllocatorInstance,piVar2,piVar1);
  *(undefined4 *)((param_2->AllocatorInstance).Data + iVar5) = 0x45564157;
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,4,&param_2->AllocatorInstance,piVar2,piVar1);
  *(undefined4 *)((param_2->AllocatorInstance).Data + iVar5) = 0x20746d66;
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,4,&param_2->AllocatorInstance,piVar2,piVar1);
  *(undefined4 *)((param_2->AllocatorInstance).Data + iVar5) = 0x10;
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,2,&param_2->AllocatorInstance,piVar2,piVar1);
  *(undefined2 *)((param_2->AllocatorInstance).Data + iVar5) = 1;
  uVar3 = param_1->NumChannels;
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,2,&param_2->AllocatorInstance,piVar2,piVar1);
  *(short *)((param_2->AllocatorInstance).Data + iVar5) = (short)uVar3;
  uVar3 = param_1->SampleRate;
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,4,&param_2->AllocatorInstance,piVar2,piVar1);
  *(uint *)((param_2->AllocatorInstance).Data + iVar5) = uVar3;
  uVar3 = param_1->NumChannels;
  uVar4 = param_1->SampleRate;
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,4,&param_2->AllocatorInstance,piVar2,piVar1);
  *(uint *)((param_2->AllocatorInstance).Data + iVar5) = uVar3 * uVar4 * 2;
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,2,&param_2->AllocatorInstance,piVar2,piVar1);
  *(undefined2 *)((param_2->AllocatorInstance).Data + iVar5) = 2;
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,2,&param_2->AllocatorInstance,piVar2,piVar1);
  *(undefined2 *)((param_2->AllocatorInstance).Data + iVar5) = 0x10;
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,4,&param_2->AllocatorInstance,piVar2,piVar1);
  *(undefined4 *)((param_2->AllocatorInstance).Data + iVar5) = 0x61746164;
  uVar3 = param_1->SampleDataSize;
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,4,&param_2->AllocatorInstance,piVar2,piVar1);
  *(uint *)((param_2->AllocatorInstance).Data + iVar5) = uVar3;
  return true;
}

