// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// CacheExistingState @ 14681f570

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TInlineValue<IMovieScenePreAnimatedToken,32,8> * __thiscall
UE::MovieScene::FLevelStreamingPreAnimatedTokenProducer::CacheExistingState
          (FLevelStreamingPreAnimatedTokenProducer *this,
          TInlineValue<IMovieScenePreAnimatedToken,32,8> *__return_storage_ptr__,UObject *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  uchar uVar3;
  bool bVar4;
  ULevelStreaming *pUVar5;
  TInlineValue<IMovieScenePreAnimatedToken,32,8> *pTVar6;
  TInlineValue<IMovieScenePreAnimatedToken,32,8> *pTVar7;
  
  pUVar5 = CastChecked<ULevelStreaming,UObject>(param_1);
  uVar3 = (**(code **)(pUVar5->_padding_ + 0x2f0))(pUVar5);
  __return_storage_ptr__->bIsValid = true;
  __return_storage_ptr__->bInline = true;
  *(undefined ***)(__return_storage_ptr__->Data).Pad =
       &___7FLevelStreamingPreAnimatedToken_MovieScene_UE__6B_;
  (__return_storage_ptr__->Data).Pad[8] = uVar3;
  if (!__return_storage_ptr__->bIsValid) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)(*pcVar2)();
      return pTVar6;
    }
  }
  pTVar6 = __return_storage_ptr__;
  if (!__return_storage_ptr__->bInline) {
    pTVar6 = *(TInlineValue<IMovieScenePreAnimatedToken,32,8> **)(__return_storage_ptr__->Data).Pad;
  }
  if (!__return_storage_ptr__->bIsValid) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)(*pcVar2)();
      return pTVar6;
    }
  }
  pTVar7 = __return_storage_ptr__;
  if (!__return_storage_ptr__->bInline) {
    pTVar7 = *(TInlineValue<IMovieScenePreAnimatedToken,32,8> **)(__return_storage_ptr__->Data).Pad;
  }
  if (pTVar6 != pTVar7) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)(*pcVar2)();
      return pTVar6;
    }
  }
  return __return_storage_ptr__;
}

