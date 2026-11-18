// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCaching
// Functions: 1

// CacheExistingState @ 14daed170

TInlineValue<IMovieScenePreAnimatedToken,32,8> * __thiscall
FPreAnimatedChaosCacheTokenProducer::CacheExistingState
          (FPreAnimatedChaosCacheTokenProducer *this,
          TInlineValue<IMovieScenePreAnimatedToken,32,8> *__return_storage_ptr__,UObject *param_1)

{
  undefined1 *puVar1;
  EStartMode EVar2;
  ECacheMode EVar3;
  code *pcVar4;
  bool bVar5;
  AChaosCacheManager *pAVar6;
  TInlineValue<IMovieScenePreAnimatedToken,32,8> *pTVar7;
  TInlineValue<IMovieScenePreAnimatedToken,32,8> *pTVar8;
  
  pAVar6 = CastChecked<AChaosCacheManager,UObject>(param_1);
  EVar2 = pAVar6->StartMode;
  EVar3 = pAVar6->CacheMode;
  __return_storage_ptr__->bIsValid = true;
  __return_storage_ptr__->bInline = true;
  *(undefined ***)(__return_storage_ptr__->Data).Pad =
       &
       ___7FToken__1__CacheExistingState_FPreAnimatedChaosCacheTokenProducer__UEBA_AV__TInlineValue_UIMovieScenePreAnimatedToken___0CA__07__AEAVUObject___Z_6B_
  ;
  (__return_storage_ptr__->Data).Pad[8] = EVar2;
  (__return_storage_ptr__->Data).Pad[9] = EVar3;
  if (!__return_storage_ptr__->bIsValid) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)(*pcVar4)();
      return pTVar7;
    }
  }
  pTVar7 = __return_storage_ptr__;
  if (!__return_storage_ptr__->bInline) {
    pTVar7 = *(TInlineValue<IMovieScenePreAnimatedToken,32,8> **)(__return_storage_ptr__->Data).Pad;
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
      pTVar7 = (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)(*pcVar4)();
      return pTVar7;
    }
  }
  pTVar8 = __return_storage_ptr__;
  if (!__return_storage_ptr__->bInline) {
    pTVar8 = *(TInlineValue<IMovieScenePreAnimatedToken,32,8> **)(__return_storage_ptr__->Data).Pad;
  }
  if (pTVar7 != pTVar8) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)(*pcVar4)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

