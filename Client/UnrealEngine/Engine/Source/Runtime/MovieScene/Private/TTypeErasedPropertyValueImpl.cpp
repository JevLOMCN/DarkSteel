// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 4

// Copy @ 1462a8be0

TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> * __thiscall
UE::MovieScene::Private::TTypeErasedPropertyValueImpl<UObject_*>::Copy
          (TTypeErasedPropertyValueImpl<UObject_*> *this,
          TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8>
          *__return_storage_ptr__)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *pTVar4;
  TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *pTVar5;
  
  __return_storage_ptr__->bIsValid = true;
  __return_storage_ptr__->bInline = true;
  *(undefined ***)(__return_storage_ptr__->Data).Pad =
       &___7ITypeErasedPropertyConstValueImpl_Private_MovieScene_UE__6B_;
  *(int *)((__return_storage_ptr__->Data).Pad + 8) = (int)this->_padding_;
  *(undefined ***)(__return_storage_ptr__->Data).Pad =
       &___7__TTypeErasedPropertyValueImpl_PEAVUObject___Private_MovieScene_UE__6B_;
  *(UObject **)((__return_storage_ptr__->Data).Pad + 0x10) = this->Value;
  if (!__return_storage_ptr__->bIsValid) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  pTVar4 = __return_storage_ptr__;
  if (!__return_storage_ptr__->bInline) {
    pTVar4 = *(TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> **)
              (__return_storage_ptr__->Data).Pad;
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
      pTVar4 = (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  pTVar5 = __return_storage_ptr__;
  if (!__return_storage_ptr__->bInline) {
    pTVar5 = *(TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> **)
              (__return_storage_ptr__->Data).Pad;
  }
  if (pTVar4 != pTVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// Copy @ 1462a8cd0

TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> * __thiscall
UE::MovieScene::Private::TTypeErasedPropertyValueImpl<bool>::Copy
          (TTypeErasedPropertyValueImpl<bool> *this,
          TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8>
          *__return_storage_ptr__)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *pTVar4;
  TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *pTVar5;
  
  __return_storage_ptr__->bIsValid = true;
  __return_storage_ptr__->bInline = true;
  *(undefined ***)(__return_storage_ptr__->Data).Pad =
       &___7ITypeErasedPropertyConstValueImpl_Private_MovieScene_UE__6B_;
  *(int *)((__return_storage_ptr__->Data).Pad + 8) = (int)this->_padding_;
  *(undefined ***)(__return_storage_ptr__->Data).Pad =
       &___7__TTypeErasedPropertyValueImpl__N_Private_MovieScene_UE__6B_;
  (__return_storage_ptr__->Data).Pad[0x10] = this->Value;
  if (!__return_storage_ptr__->bIsValid) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  pTVar4 = __return_storage_ptr__;
  if (!__return_storage_ptr__->bInline) {
    pTVar4 = *(TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> **)
              (__return_storage_ptr__->Data).Pad;
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
      pTVar4 = (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  pTVar5 = __return_storage_ptr__;
  if (!__return_storage_ptr__->bInline) {
    pTVar5 = *(TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> **)
              (__return_storage_ptr__->Data).Pad;
  }
  if (pTVar4 != pTVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// Get @ 1462ae820

void * __thiscall
UE::MovieScene::Private::TTypeErasedPropertyValueImpl<UObject_*>::Get
          (TTypeErasedPropertyValueImpl<UObject_*> *this)

{
  return &this->Value;
}

// Get @ 1462ae830

void * __thiscall
UE::MovieScene::Private::TTypeErasedPropertyValueImpl<bool>::Get
          (TTypeErasedPropertyValueImpl<bool> *this)

{
  return &this->Value;
}

