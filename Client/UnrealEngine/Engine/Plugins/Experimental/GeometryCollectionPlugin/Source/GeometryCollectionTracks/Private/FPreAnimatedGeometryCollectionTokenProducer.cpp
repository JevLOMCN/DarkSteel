// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionTracks
// Functions: 1

// CacheExistingState @ 14e7fcef0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TInlineValue<IMovieScenePreAnimatedToken,32,8> * __thiscall
FPreAnimatedGeometryCollectionTokenProducer::CacheExistingState
          (FPreAnimatedGeometryCollectionTokenProducer *this,
          TInlineValue<IMovieScenePreAnimatedToken,32,8> *__return_storage_ptr__,UObject *param_1)

{
  undefined1 *puVar1;
  EObjectStateTypeEnum EVar2;
  EGeometryCollectionCacheType EVar3;
  TObjectPtr<UGeometryCollectionCache>_u_0 TVar4;
  code *pcVar5;
  bool bVar6;
  UGeometryCollectionComponent *pUVar7;
  TInlineValue<IMovieScenePreAnimatedToken,32,8> *pTVar8;
  TInlineValue<IMovieScenePreAnimatedToken,32,8> *pTVar9;
  
  pUVar7 = CastChecked<UGeometryCollectionComponent,UObject>(param_1);
  TVar4 = (pUVar7->CacheParameters).TargetCache.field0_0x0;
  EVar2 = pUVar7->ObjectType;
  bVar6 = pUVar7->CachePlayback;
  EVar3 = (pUVar7->CacheParameters).CacheMode;
  __return_storage_ptr__->bIsValid = true;
  __return_storage_ptr__->bInline = true;
  *(undefined ***)(__return_storage_ptr__->Data).Pad =
       &
       ___7FToken__1__CacheExistingState_FPreAnimatedGeometryCollectionTokenProducer__UEBA_AV__TInlineValue_UIMovieScenePreAnimatedToken___0CA__07__AEAVUObject___Z_6B_
  ;
  (__return_storage_ptr__->Data).Pad[8] = EVar2;
  *(TObjectPtr<UGeometryCollectionCache>_u_0 *)((__return_storage_ptr__->Data).Pad + 0x10) = TVar4;
  (__return_storage_ptr__->Data).Pad[0x18] = bVar6;
  (__return_storage_ptr__->Data).Pad[0x19] = EVar3;
  if (!__return_storage_ptr__->bIsValid) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)(*pcVar5)();
      return pTVar8;
    }
  }
  pTVar8 = __return_storage_ptr__;
  if (!__return_storage_ptr__->bInline) {
    pTVar8 = *(TInlineValue<IMovieScenePreAnimatedToken,32,8> **)(__return_storage_ptr__->Data).Pad;
  }
  if (!__return_storage_ptr__->bIsValid) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)(*pcVar5)();
      return pTVar8;
    }
  }
  pTVar9 = __return_storage_ptr__;
  if (!__return_storage_ptr__->bInline) {
    pTVar9 = *(TInlineValue<IMovieScenePreAnimatedToken,32,8> **)(__return_storage_ptr__->Data).Pad;
  }
  if (pTVar8 != pTVar9) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)(*pcVar5)();
      return pTVar8;
    }
  }
  return __return_storage_ptr__;
}

