// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 2

// Copy @ 14d611bf0

TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> * __thiscall
UE::MovieScene::Private::TTypeErasedPropertyValueImpl<FCameraFramingZone>::Copy
          (TTypeErasedPropertyValueImpl<FCameraFramingZone> *this,
          TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8>
          *__return_storage_ptr__)

{
  undefined1 *puVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *pTVar5;
  TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *pTVar6;
  
  __return_storage_ptr__->bIsValid = true;
  __return_storage_ptr__->bInline = true;
  *(undefined ***)(__return_storage_ptr__->Data).Pad =
       &___7ITypeErasedPropertyConstValueImpl_Private_MovieScene_UE__6B_;
  *(int *)((__return_storage_ptr__->Data).Pad + 8) = (int)this->_padding_;
  *(undefined ***)(__return_storage_ptr__->Data).Pad =
       &___7__TTypeErasedPropertyValueImpl_UFCameraFramingZone___Private_MovieScene_UE__6B_;
  dVar3 = (this->Value).Top;
  *(double *)((__return_storage_ptr__->Data).Pad + 0x10) = (this->Value).Left;
  *(double *)((__return_storage_ptr__->Data).Pad + 0x18) = dVar3;
  dVar3 = (this->Value).Bottom;
  *(double *)((__return_storage_ptr__->Data).Pad + 0x20) = (this->Value).Right;
  *(double *)((__return_storage_ptr__->Data).Pad + 0x28) = dVar3;
  if (!__return_storage_ptr__->bIsValid) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *)
               (*pcVar2)();
      return pTVar5;
    }
  }
  pTVar5 = __return_storage_ptr__;
  if (!__return_storage_ptr__->bInline) {
    pTVar5 = *(TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> **)
              (__return_storage_ptr__->Data).Pad;
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
      pTVar5 = (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *)
               (*pcVar2)();
      return pTVar5;
    }
  }
  pTVar6 = __return_storage_ptr__;
  if (!__return_storage_ptr__->bInline) {
    pTVar6 = *(TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> **)
              (__return_storage_ptr__->Data).Pad;
  }
  if (pTVar5 != pTVar6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *)
               (*pcVar2)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// Get @ 14d617f10

void * __thiscall
UE::MovieScene::Private::TTypeErasedPropertyValueImpl<FCameraFramingZone>::Get
          (TTypeErasedPropertyValueImpl<FCameraFramingZone> *this)

{
  return &this->Value;
}

