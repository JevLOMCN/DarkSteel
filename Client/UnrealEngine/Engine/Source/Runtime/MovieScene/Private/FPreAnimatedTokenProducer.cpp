// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// CacheExistingState @ 1462a63a0

TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> * __thiscall
Impl::FPreAnimatedTokenProducer::CacheExistingState
          (FPreAnimatedTokenProducer *this,
          TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  bool bVar5;
  TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> *pTVar6;
  TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> *pTVar7;
  
  piVar3 = this->Ptr;
  iVar2 = *piVar3;
  __return_storage_ptr__->bIsValid = true;
  __return_storage_ptr__->bInline = true;
  *(undefined ***)(__return_storage_ptr__->Data).Pad = &___7FPreAnimatedToken_Impl__6B_;
  *(int **)((__return_storage_ptr__->Data).Pad + 8) = piVar3;
  *(int *)((__return_storage_ptr__->Data).Pad + 0x10) = iVar2;
  if (!__return_storage_ptr__->bIsValid) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> *)(*pcVar4)();
      return pTVar6;
    }
  }
  pTVar6 = __return_storage_ptr__;
  if (!__return_storage_ptr__->bInline) {
    pTVar6 = *(TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> **)
              (__return_storage_ptr__->Data).Pad;
  }
  if (!__return_storage_ptr__->bIsValid) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> *)(*pcVar4)();
      return pTVar6;
    }
  }
  pTVar7 = __return_storage_ptr__;
  if (!__return_storage_ptr__->bInline) {
    pTVar7 = *(TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> **)
              (__return_storage_ptr__->Data).Pad;
  }
  if (pTVar6 != pTVar7) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> *)(*pcVar4)();
      return pTVar6;
    }
  }
  return __return_storage_ptr__;
}

// InitializeForAnimation @ 1462b2e70

void __thiscall
Impl::FPreAnimatedTokenProducer::InitializeForAnimation(FPreAnimatedTokenProducer *this)

{
  this->InitializeCount = this->InitializeCount + 1;
  *this->Ptr = 0;
  return;
}

