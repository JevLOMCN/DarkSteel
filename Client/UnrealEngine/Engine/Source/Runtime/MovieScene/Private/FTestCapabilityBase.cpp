// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 4

// ~FTestCapabilityBase @ 14629b8c0

void __thiscall
UE::MovieScene::Tests::FTestCapabilityBase::~FTestCapabilityBase(FTestCapabilityBase *this)

{
  this->_padding_ = (longlong)&___7FTestCapabilityBase_Tests_MovieScene_UE__6B_;
  TimesDestroyedBase = TimesDestroyedBase + 1;
  return;
}

// GetIntValue @ 1462af290

int __thiscall UE::MovieScene::Tests::FTestCapabilityBase::GetIntValue(FTestCapabilityBase *this)

{
  return 0;
}

// GetPlaybackCapabilityID @ 1462af3b0

TPlaybackCapabilityID<UE::MovieScene::Tests::FTestCapabilityBase> __cdecl
UE::MovieScene::Tests::FTestCapabilityBase::GetPlaybackCapabilityID(void)

{
  TPlaybackCapabilityID<UE::MovieScene::Tests::FTestCapabilityBase> *in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticID = (TPlaybackCapabilityID<UE::MovieScene::Tests::FTestCapabilityBase>)
                   FPlaybackCapabilityID::Register(L"FTestCapabilityBase");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *in_RCX = ::StaticID;
  return SUB84(in_RCX,0);
}

// GetStringValue @ 1462b0960

FString * __thiscall
UE::MovieScene::Tests::FTestCapabilityBase::GetStringValue
          (FTestCapabilityBase *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

