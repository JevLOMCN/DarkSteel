// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WmfMedia
// Functions: 12

// ~FWmfMediaTextureSample @ 14ea97d20

void __thiscall FWmfMediaTextureSample::~FWmfMediaTextureSample(FWmfMediaTextureSample *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__IMediaTextureSample__;
  this->_padding_ = (longlong)&_vftable__for__IMediaPoolable__;
  pFVar1 = (this->Buffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IMediaPoolable__6B_;
  this->_padding_ = (longlong)&___7IMediaTextureSample__6B_;
  return;
}

// GetBuffer @ 14eaac990

void * __thiscall FWmfMediaTextureSample::GetBuffer(FWmfMediaTextureSample *this)

{
  return (this->Buffer).AllocatorInstance.Data;
}

// GetDim @ 14eaacfc0

TIntPoint<int> __thiscall FWmfMediaTextureSample::GetDim(FWmfMediaTextureSample *this)

{
  TIntPoint<int>_u_0 in_RDX;
  
  *(TIntPoint<int>_u_0 *)in_RDX = (this->Dim).field0_0x0;
  return (TIntPoint<int>)in_RDX;
}

// GetDuration @ 14eaad0a0

FTimespan __thiscall FWmfMediaTextureSample::GetDuration(FWmfMediaTextureSample *this)

{
  long64 *in_RDX;
  
  *in_RDX = (this->Duration).Ticks;
  return (FTimespan)(long64)in_RDX;
}

// GetFormat @ 14eaad6e0

EMediaTextureSampleFormat __thiscall FWmfMediaTextureSample::GetFormat(FWmfMediaTextureSample *this)

{
  return this->SampleFormat;
}

// GetOutputDim @ 14eaae5d0

TIntPoint<int> __thiscall FWmfMediaTextureSample::GetOutputDim(FWmfMediaTextureSample *this)

{
  TIntPoint<int>_u_0 in_RDX;
  
  *(TIntPoint<int>_u_0 *)in_RDX = (this->OutputDim).field0_0x0;
  return (TIntPoint<int>)in_RDX;
}

// GetStride @ 14eab02c0

uint __thiscall FWmfMediaTextureSample::GetStride(FWmfMediaTextureSample *this)

{
  return this->Stride;
}

// GetTexture @ 14eab0670

FRHITexture * __thiscall FWmfMediaTextureSample::GetTexture(FWmfMediaTextureSample *this)

{
  return (FRHITexture *)0x0;
}

// GetTime @ 14eab07b0

FMediaTimeStamp * __thiscall
FWmfMediaTextureSample::GetTime
          (FWmfMediaTextureSample *this,FMediaTimeStamp *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (this->Time).SequenceIndex;
  iVar2 = (this->Time).LoopIndex;
  (__return_storage_ptr__->Time).Ticks = (this->Time).Time.Ticks;
  __return_storage_ptr__->SequenceIndex = iVar1;
  __return_storage_ptr__->LoopIndex = iVar2;
  return __return_storage_ptr__;
}

// IsCacheable @ 14eab6130

bool __thiscall FWmfMediaTextureSample::IsCacheable(FWmfMediaTextureSample *this)

{
  return true;
}

// IsOutputSrgb @ 14eab64f0

bool __thiscall FWmfMediaTextureSample::IsOutputSrgb(FWmfMediaTextureSample *this)

{
  return true;
}

// ShutdownPoolable @ 14eabea60

void __thiscall FWmfMediaTextureSample::ShutdownPoolable(FWmfMediaTextureSample *this)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  TMap<unsigned_char_*,WmfMediaDecoder_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_char_*,WmfMediaDecoder_*,0>_>
  *pTVar4;
  ulonglong *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  
  if ((char)(this->Time).SequenceIndex != '\0') {
    lpCriticalSection = (LPCRITICAL_SECTION)WmfMediaDecoder::GetMapBufferCriticalSection();
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(lpCriticalSection);
    pTVar4 = WmfMediaDecoder::GetMapBufferToDecoder();
    uVar2 = *(ulonglong *)&this->bIsBufferExternal;
    uVar6 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    if (*(int *)&pTVar4->field_0x8 != *(int *)&pTVar4->field_0x34) {
      puVar7 = *(undefined1 **)&pTVar4->field_0x40;
      if (*(undefined1 **)&pTVar4->field_0x40 == (undefined1 *)0x0) {
        puVar7 = &pTVar4->field_0x38;
      }
      iVar3 = *(int *)(puVar7 + (ulonglong)
                                (*(int *)&pTVar4->field_0x48 - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
      if (iVar3 != -1) {
        do {
          puVar1 = (ulonglong *)(*(longlong *)pTVar4 + (longlong)iVar3 * 0x18);
          if (*puVar1 == uVar2) {
            puVar5 = puVar1 + 1;
            if (puVar1 == (ulonglong *)0x0) {
              puVar5 = (ulonglong *)0x0;
            }
            if ((puVar5 != (ulonglong *)0x0) &&
               ((WmfMediaDecoder *)*puVar5 != (WmfMediaDecoder *)0x0)) {
              WmfMediaDecoder::ReturnExternalBufferInternal
                        ((WmfMediaDecoder *)*puVar5,
                         (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                         &this->bIsBufferExternal);
            }
            break;
          }
          iVar3 = (int)puVar1[2];
        } while (iVar3 != -1);
      }
    }
    LeaveCriticalSection(lpCriticalSection);
    *(undefined1 *)&(this->Time).SequenceIndex = 0;
  }
  return;
}

