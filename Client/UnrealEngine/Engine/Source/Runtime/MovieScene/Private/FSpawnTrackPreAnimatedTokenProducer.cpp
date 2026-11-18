// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// CacheExistingState @ 146125790

TInlineValue<IMovieScenePreAnimatedToken,32,8> * __thiscall
UE::MovieScene::FSpawnTrackPreAnimatedTokenProducer::CacheExistingState
          (FSpawnTrackPreAnimatedTokenProducer *this,
          TInlineValue<IMovieScenePreAnimatedToken,32,8> *__return_storage_ptr__,UObject *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TInlineValue<IMovieScenePreAnimatedToken,32,8> *pTVar8;
  TInlineValue<IMovieScenePreAnimatedToken,32,8> *pTVar9;
  
  uVar5 = *(undefined8 *)&(this->Operand).ObjectBindingID;
  uVar6 = *(undefined8 *)&(this->Operand).ObjectBindingID.C;
  uVar2 = (this->Operand).SequenceID.Value;
  iVar3 = this->BindingIndex;
  __return_storage_ptr__->bIsValid = true;
  __return_storage_ptr__->bInline = true;
  *(undefined8 *)((__return_storage_ptr__->Data).Pad + 8) = uVar5;
  *(undefined8 *)((__return_storage_ptr__->Data).Pad + 0x10) = uVar6;
  *(uint *)((__return_storage_ptr__->Data).Pad + 0x18) = uVar2;
  *(undefined ***)(__return_storage_ptr__->Data).Pad =
       &
       ___7FToken__1__CacheExistingState_FSpawnTrackPreAnimatedTokenProducer_MovieScene_UE__UEBA_AV__TInlineValue_UIMovieScenePreAnimatedToken___0CA__07__AEAVUObject___Z_6B_
  ;
  *(int *)((__return_storage_ptr__->Data).Pad + 0x1c) = iVar3;
  if (!__return_storage_ptr__->bIsValid) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)(*pcVar4)();
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
      pcVar4 = (code *)swi(3);
      pTVar8 = (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)(*pcVar4)();
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
      pcVar4 = (code *)swi(3);
      pTVar8 = (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)(*pcVar4)();
      return pTVar8;
    }
  }
  return __return_storage_ptr__;
}

