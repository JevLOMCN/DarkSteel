// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 1

// CacheExistingState @ 14e0d9230

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TInlineValue<IMovieScenePreAnimatedToken,32,8> * __thiscall
FPreAnimatedGroomCacheTokenProducer::CacheExistingState
          (FPreAnimatedGroomCacheTokenProducer *this,
          TInlineValue<IMovieScenePreAnimatedToken,32,8> *__return_storage_ptr__,UObject *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  UGroomComponent *this_00;
  TInlineValue<IMovieScenePreAnimatedToken,32,8> *pTVar4;
  TInlineValue<IMovieScenePreAnimatedToken,32,8> *pTVar5;
  
  this_00 = CastChecked<UGroomComponent,UObject>(param_1);
  bVar3 = UGroomComponent::GetManualTick(this_00);
  __return_storage_ptr__->bIsValid = true;
  __return_storage_ptr__->bInline = true;
  *(undefined ***)(__return_storage_ptr__->Data).Pad =
       &
       ___7FToken__1__CacheExistingState_FPreAnimatedGroomCacheTokenProducer__UEBA_AV__TInlineValue_UIMovieScenePreAnimatedToken___0CA__07__AEAVUObject___Z_6B_
  ;
  (__return_storage_ptr__->Data).Pad[8] = bVar3;
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

