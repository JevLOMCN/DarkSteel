// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaUtils
// Functions: 1

// GetPrimaryAudioSink @ 146bff8b0

TSharedPtr<FMediaAudioSampleSink,1> * __thiscall
FMediaAudioSampleSinks::GetPrimaryAudioSink
          (FMediaAudioSampleSinks *this,TSharedPtr<FMediaAudioSampleSink,1> *__return_storage_ptr__)

{
  undefined8 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  atomic<int> aVar6;
  TSharedPtr<FMediaAudioSampleSink,1> *pTVar7;
  
  TMediaSampleSinks<IMediaAudioSample,FMediaAudioSampleSink>::Cleanup
            ((TMediaSampleSinks<IMediaAudioSample,FMediaAudioSampleSink> *)this);
  if (*(int *)&this->field_0x8 == 0) {
    __return_storage_ptr__->Object = (FMediaAudioSampleSink *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  if ((*(int *)&this->field_0x8 < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TSharedPtr<FMediaAudioSampleSink,1> *)(*pcVar3)();
    return pTVar7;
  }
  puVar1 = *(undefined8 **)this;
  __return_storage_ptr__->Object = (FMediaAudioSampleSink *)0x0;
  pTVar2 = (TReferenceControllerBase<1> *)puVar1[1];
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar2->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar6 = pTVar2->SharedReferenceCount;
      bVar5 = aVar4 == aVar6;
      if (bVar5) {
        pTVar2->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar6 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar6;
    } while (!bVar5);
  }
  if ((__return_storage_ptr__->SharedReferenceCount).ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FMediaAudioSampleSink *)*puVar1;
  }
  return __return_storage_ptr__;
}

