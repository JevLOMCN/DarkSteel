// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaCompositing
// Functions: 1

// CacheExistingState @ 14ea68fd0

TInlineValue<IMovieScenePreAnimatedToken,32,8> * __thiscall
TStatelessPreAnimatedTokenProducer<FMediaPlayerPreAnimatedState>::CacheExistingState
          (TStatelessPreAnimatedTokenProducer<FMediaPlayerPreAnimatedState> *this,
          TInlineValue<IMovieScenePreAnimatedToken,32,8> *__return_storage_ptr__,UObject *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  TInlineValue<IMovieScenePreAnimatedToken,32,8> *pTVar4;
  TInlineValue<IMovieScenePreAnimatedToken,32,8> *pTVar5;
  
  __return_storage_ptr__->bIsValid = true;
  __return_storage_ptr__->bInline = true;
  *(undefined ***)(__return_storage_ptr__->Data).Pad = &___7FMediaPlayerPreAnimatedState__6B_;
  if (!__return_storage_ptr__->bIsValid) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pTVar4 = __return_storage_ptr__;
  if (!__return_storage_ptr__->bInline) {
    pTVar4 = *(TInlineValue<IMovieScenePreAnimatedToken,32,8> **)(__return_storage_ptr__->Data).Pad;
  }
  if (!__return_storage_ptr__->bIsValid) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pTVar5 = __return_storage_ptr__;
  if (!__return_storage_ptr__->bInline) {
    pTVar5 = *(TInlineValue<IMovieScenePreAnimatedToken,32,8> **)(__return_storage_ptr__->Data).Pad;
  }
  if (pTVar4 != pTVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

