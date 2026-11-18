// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 3

// FMovieSceneRemoveInitialValueTokenProducer @ 1461802d0

FMovieSceneRemoveInitialValueTokenProducer * __thiscall
FMovieSceneRemoveInitialValueTokenProducer::FMovieSceneRemoveInitialValueTokenProducer
          (FMovieSceneRemoveInitialValueTokenProducer *this,
          TWeakPtr<IMovieSceneBlendingActuator,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = (longlong)&___7FMovieSceneRemoveInitialValueTokenProducer__6B_;
  (this->WeakActuator).Object = param_1->Object;
  pTVar3 = (param_1->WeakReferenceCount).ReferenceController;
  (this->WeakActuator).WeakReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  return this;
}

// ~FMovieSceneRemoveInitialValueTokenProducer @ 1461854c0

void __thiscall
FMovieSceneRemoveInitialValueTokenProducer::~FMovieSceneRemoveInitialValueTokenProducer
          (FMovieSceneRemoveInitialValueTokenProducer *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = (longlong)&___7FMovieSceneRemoveInitialValueTokenProducer__6B_;
  pTVar3 = (this->WeakActuator).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  this->_padding_ = (longlong)&___7IMovieScenePreAnimatedTokenProducer__6B_;
  return;
}

// CacheExistingState @ 146195d60

TInlineValue<IMovieScenePreAnimatedToken,32,8> * __thiscall
FMovieSceneRemoveInitialValueTokenProducer::CacheExistingState
          (FMovieSceneRemoveInitialValueTokenProducer *this,
          TInlineValue<IMovieScenePreAnimatedToken,32,8> *__return_storage_ptr__,UObject *param_1)

{
  atomic<int> *paVar1;
  undefined1 *puVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  IMovieSceneBlendingActuator *pIVar5;
  code *pcVar6;
  bool bVar7;
  TInlineValue<IMovieScenePreAnimatedToken,32,8> *pTVar8;
  TInlineValue<IMovieScenePreAnimatedToken,32,8> *pTVar9;
  
  pTVar4 = (this->WeakActuator).WeakReferenceCount.ReferenceController;
  pIVar5 = (this->WeakActuator).Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  __return_storage_ptr__->bIsValid = true;
  __return_storage_ptr__->bInline = true;
  *(undefined ***)(__return_storage_ptr__->Data).Pad = &___7FMovieSceneRemoveInitialValueToken__6B_;
  *(IMovieSceneBlendingActuator **)((__return_storage_ptr__->Data).Pad + 8) = pIVar5;
  *(TReferenceControllerBase<1> **)((__return_storage_ptr__->Data).Pad + 0x10) = pTVar4;
  if (!__return_storage_ptr__->bIsValid) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar8 = (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)(*pcVar6)();
      return pTVar8;
    }
  }
  pTVar8 = __return_storage_ptr__;
  if (!__return_storage_ptr__->bInline) {
    pTVar8 = *(TInlineValue<IMovieScenePreAnimatedToken,32,8> **)(__return_storage_ptr__->Data).Pad;
  }
  if (!__return_storage_ptr__->bIsValid) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar8 = (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)(*pcVar6)();
      return pTVar8;
    }
  }
  pTVar9 = __return_storage_ptr__;
  if (!__return_storage_ptr__->bInline) {
    pTVar9 = *(TInlineValue<IMovieScenePreAnimatedToken,32,8> **)(__return_storage_ptr__->Data).Pad;
  }
  if (pTVar8 != pTVar9) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar8 = (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)(*pcVar6)();
      return pTVar8;
    }
  }
  return __return_storage_ptr__;
}

