// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraSimCaching
// Functions: 1

// CacheExistingState @ 14ea231f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

TInlineValue<IMovieScenePreAnimatedToken,32,8> * __thiscall
FPreAnimatedNiagaraCacheTokenProducer::CacheExistingState
          (FPreAnimatedNiagaraCacheTokenProducer *this,
          TInlineValue<IMovieScenePreAnimatedToken,32,8> *__return_storage_ptr__,UObject *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  ENiagaraAgeUpdateMode EVar3;
  bool bVar4;
  UNiagaraComponent *this_00;
  TInlineValue<IMovieScenePreAnimatedToken,32,8> *pTVar5;
  TInlineValue<IMovieScenePreAnimatedToken,32,8> *pTVar6;
  
  this_00 = CastChecked<UNiagaraComponent,UObject>(param_1);
  EVar3 = UNiagaraComponent::GetAgeUpdateMode(this_00);
  __return_storage_ptr__->bIsValid = true;
  __return_storage_ptr__->bInline = true;
  *(undefined ***)(__return_storage_ptr__->Data).Pad =
       &
       ___7FToken__1__CacheExistingState_FPreAnimatedNiagaraCacheTokenProducer__UEBA_AV__TInlineValue_UIMovieScenePreAnimatedToken___0CA__07__AEAVUObject___Z_6B_
  ;
  (__return_storage_ptr__->Data).Pad[8] = EVar3;
  if (!__return_storage_ptr__->bIsValid) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)(*pcVar2)();
      return pTVar5;
    }
  }
  pTVar5 = __return_storage_ptr__;
  if (!__return_storage_ptr__->bInline) {
    pTVar5 = *(TInlineValue<IMovieScenePreAnimatedToken,32,8> **)(__return_storage_ptr__->Data).Pad;
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
      pTVar5 = (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)(*pcVar2)();
      return pTVar5;
    }
  }
  pTVar6 = __return_storage_ptr__;
  if (!__return_storage_ptr__->bInline) {
    pTVar6 = *(TInlineValue<IMovieScenePreAnimatedToken,32,8> **)(__return_storage_ptr__->Data).Pad;
  }
  if (pTVar5 != pTVar6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

