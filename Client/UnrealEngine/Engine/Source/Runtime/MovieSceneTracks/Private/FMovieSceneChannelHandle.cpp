// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// Cast<FMovieSceneDoubleChannel> @ 1465a5e30

TMovieSceneChannelHandle<FMovieSceneDoubleChannel> * __thiscall
FMovieSceneChannelHandle::Cast<FMovieSceneDoubleChannel>
          (FMovieSceneChannelHandle *this,
          TMovieSceneChannelHandle<FMovieSceneDoubleChannel> *__return_storage_ptr__)

{
  atomic<int> aVar1;
  int iVar2;
  FName FVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  UScriptStruct *pUVar7;
  TMovieSceneChannelHandle<FMovieSceneDoubleChannel> *pTVar8;
  atomic<int> *paVar9;
  TWeakPtr<FMovieSceneChannelProxy,1> local_18;
  
  pUVar7 = FMovieSceneDoubleChannel::StaticStruct();
  bVar6 = IsCastValidInternal(this,(UStruct *)pUVar7);
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsCastValid<OtherChannelType>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelHandle.h"
                       ,0xd8,L"Invalid cast between unrelated channel types");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TMovieSceneChannelHandle<FMovieSceneDoubleChannel> *)(*pcVar5)();
      return pTVar8;
    }
  }
  iVar2 = this->ChannelIndex;
  FVar3 = this->ChannelTypeName;
  local_18.Object = (this->WeakChannelProxy).Object;
  pTVar4 = (this->WeakChannelProxy).WeakReferenceCount.ReferenceController;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    paVar9 = (atomic<int> *)&DAT_0000000c;
  }
  else {
    paVar9 = &pTVar4->WeakReferenceCount;
    LOCK();
    *paVar9 = (atomic<int>)((int)*paVar9 + 1);
    UNLOCK();
    LOCK();
    *paVar9 = (atomic<int>)((int)*paVar9 + 1);
    UNLOCK();
    LOCK();
    *paVar9 = (atomic<int>)((int)*paVar9 + 1);
    UNLOCK();
  }
  local_18.WeakReferenceCount.ReferenceController = pTVar4;
  FMovieSceneChannelHandle((FMovieSceneChannelHandle *)__return_storage_ptr__,&local_18,FVar3,iVar2)
  ;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    aVar1 = *paVar9;
    *paVar9 = (atomic<int>)((int)*paVar9 + -1);
    UNLOCK();
    if (aVar1 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
    LOCK();
    paVar9 = &pTVar4->WeakReferenceCount;
    aVar1 = *paVar9;
    *paVar9 = (atomic<int>)((int)*paVar9 + -1);
    UNLOCK();
    if (aVar1 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  return __return_storage_ptr__;
}

// Cast<FMovieSceneFloatChannel> @ 146738720

TMovieSceneChannelHandle<FMovieSceneFloatChannel> * __thiscall
FMovieSceneChannelHandle::Cast<FMovieSceneFloatChannel>
          (FMovieSceneChannelHandle *this,
          TMovieSceneChannelHandle<FMovieSceneFloatChannel> *__return_storage_ptr__)

{
  atomic<int> aVar1;
  int iVar2;
  FName FVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  UScriptStruct *pUVar7;
  TMovieSceneChannelHandle<FMovieSceneFloatChannel> *pTVar8;
  atomic<int> *paVar9;
  TWeakPtr<FMovieSceneChannelProxy,1> local_18;
  
  pUVar7 = FMovieSceneFloatChannel::StaticStruct();
  bVar6 = IsCastValidInternal(this,(UStruct *)pUVar7);
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsCastValid<OtherChannelType>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelHandle.h"
                       ,0xd8,L"Invalid cast between unrelated channel types");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TMovieSceneChannelHandle<FMovieSceneFloatChannel> *)(*pcVar5)();
      return pTVar8;
    }
  }
  iVar2 = this->ChannelIndex;
  FVar3 = this->ChannelTypeName;
  local_18.Object = (this->WeakChannelProxy).Object;
  pTVar4 = (this->WeakChannelProxy).WeakReferenceCount.ReferenceController;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    paVar9 = (atomic<int> *)&DAT_0000000c;
  }
  else {
    paVar9 = &pTVar4->WeakReferenceCount;
    LOCK();
    *paVar9 = (atomic<int>)((int)*paVar9 + 1);
    UNLOCK();
    LOCK();
    *paVar9 = (atomic<int>)((int)*paVar9 + 1);
    UNLOCK();
    LOCK();
    *paVar9 = (atomic<int>)((int)*paVar9 + 1);
    UNLOCK();
  }
  local_18.WeakReferenceCount.ReferenceController = pTVar4;
  FMovieSceneChannelHandle((FMovieSceneChannelHandle *)__return_storage_ptr__,&local_18,FVar3,iVar2)
  ;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    aVar1 = *paVar9;
    *paVar9 = (atomic<int>)((int)*paVar9 + -1);
    UNLOCK();
    if (aVar1 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
    LOCK();
    paVar9 = &pTVar4->WeakReferenceCount;
    aVar1 = *paVar9;
    *paVar9 = (atomic<int>)((int)*paVar9 + -1);
    UNLOCK();
    if (aVar1 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  return __return_storage_ptr__;
}

