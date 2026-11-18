// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Constraints
// Functions: 1

// GetChannels<FMovieSceneDoubleChannel> @ 146495ac0

TArrayView<FMovieSceneDoubleChannel_*,int> * __thiscall
FMovieSceneChannelProxy::GetChannels<FMovieSceneDoubleChannel>
          (FMovieSceneChannelProxy *this,
          TArrayView<FMovieSceneDoubleChannel_*,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UScriptStruct *pUVar4;
  FMovieSceneChannelEntry *pFVar5;
  TArrayView<FMovieSceneDoubleChannel_*,int> *pTVar6;
  
  pUVar4 = FMovieSceneDoubleChannel::StaticStruct();
  pFVar5 = FindEntry(this,(FName)pUVar4->_padding_);
  if (pFVar5 == (FMovieSceneChannelEntry *)0x0) {
    __return_storage_ptr__->DataPtr = (FMovieSceneDoubleChannel **)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar1 = (pFVar5->Channels).ArrayNum;
    __return_storage_ptr__->DataPtr =
         (FMovieSceneDoubleChannel **)(pFVar5->Channels).AllocatorInstance.Data;
    __return_storage_ptr__->ArrayNum = iVar1;
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArrayView<FMovieSceneDoubleChannel_*,int> *)(*pcVar2)();
        return pTVar6;
      }
    }
  }
  return __return_storage_ptr__;
}

