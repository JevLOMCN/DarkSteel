// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// CacheExistingState @ 1466419e0

TInlineValue<IMovieScenePreAnimatedToken,32,8> * __thiscall
FActiveTokenProducer::CacheExistingState
          (FActiveTokenProducer *this,
          TInlineValue<IMovieScenePreAnimatedToken,32,8> *__return_storage_ptr__,UObject *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  TInlineValue<IMovieScenePreAnimatedToken,32,8> *pTVar7;
  TInlineValue<IMovieScenePreAnimatedToken,32,8> *pTVar8;
  byte bVar9;
  
  bVar9 = 0;
  if (param_1 == (UObject *)0x0) {
LAB_146641a34:
    if (param_1 == (UObject *)0x0) {
LAB_146641a8f:
      param_1 = (UObject *)0x0;
    }
    else {
      pUVar6 = Z_Construct_UClass_AEmitter_NoRegister();
      lVar3 = *(longlong *)&param_1->field_0x10;
      iVar2 = (int)pUVar6->_padding_;
      if ((*(int *)(lVar3 + 0x38) < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar6->_padding_)) {
        if (param_1 != (UObject *)0x0) {
          pUVar6 = Z_Construct_UClass_UFXSystemComponent_NoRegister();
          iVar2 = (int)pUVar6->_padding_;
          if ((iVar2 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
              &pUVar6->_padding_)) goto LAB_146641a91;
        }
        goto LAB_146641a8f;
      }
      param_1 = *(UObject **)&param_1[0x11].field_0x18;
    }
LAB_146641a91:
    if (param_1 == (UObject *)0x0) goto LAB_146641aa5;
    bVar9 = (byte)param_1[3].field_0x22 >> 4;
  }
  else {
    pUVar6 = Z_Construct_UClass_AEmitter_NoRegister();
    lVar3 = *(longlong *)&param_1->field_0x10;
    iVar2 = (int)pUVar6->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar6->_padding_)) goto LAB_146641a34;
    bVar9 = (byte)(*(uint *)&param_1[0x11].field_0x20 >> 2);
  }
  bVar9 = bVar9 & 1;
LAB_146641aa5:
  __return_storage_ptr__->bIsValid = false;
  __return_storage_ptr__->bIsValid = true;
  __return_storage_ptr__->bInline = true;
  pTVar7 = __return_storage_ptr__;
  if (!__return_storage_ptr__->bInline) {
    pTVar7 = *(TInlineValue<IMovieScenePreAnimatedToken,32,8> **)(__return_storage_ptr__->Data).Pad;
  }
  (pTVar7->Data).Pad[8] = bVar9;
  *(undefined ***)(pTVar7->Data).Pad = &___7FActivePreAnimatedToken__6B_;
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

