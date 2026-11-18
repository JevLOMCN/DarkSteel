// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 4

// Copy @ 1468ad060

TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> * __thiscall
UE::MovieScene::Private::TTypeErasedPropertyPtrImpl<double_const_>::Copy
          (TTypeErasedPropertyPtrImpl<double_const_> *this,
          TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8>
          *__return_storage_ptr__)

{
  undefined1 *puVar1;
  double dVar2;
  code *pcVar3;
  bool bVar4;
  TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *pTVar5;
  TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *pTVar6;
  
  dVar2 = *this->Value;
  __return_storage_ptr__->bIsValid = true;
  __return_storage_ptr__->bInline = true;
  *(undefined ***)(__return_storage_ptr__->Data).Pad =
       &___7__TTypeErasedPropertyValueImpl___CBN_Private_MovieScene_UE__6B_;
  *(double *)((__return_storage_ptr__->Data).Pad + 0x10) = dVar2;
  (__return_storage_ptr__->Data).Pad[8] = '\b';
  (__return_storage_ptr__->Data).Pad[9] = '\0';
  (__return_storage_ptr__->Data).Pad[10] = '\0';
  (__return_storage_ptr__->Data).Pad[0xb] = '\0';
  if (!__return_storage_ptr__->bIsValid) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *)
               (*pcVar3)();
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
      pcVar3 = (code *)swi(3);
      pTVar5 = (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *)
               (*pcVar3)();
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
      pcVar3 = (code *)swi(3);
      pTVar5 = (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *)
               (*pcVar3)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// Copy @ 1468ad140

TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> * __thiscall
UE::MovieScene::Private::TTypeErasedPropertyPtrImpl<double>::Copy
          (TTypeErasedPropertyPtrImpl<double> *this,
          TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8>
          *__return_storage_ptr__)

{
  TTypeErasedPropertyValueImpl<double> local_28;
  
  local_28._padding_._0_4_ = 8;
  local_28._padding_ = (longlong)&___7__TTypeErasedPropertyValueImpl_N_Private_MovieScene_UE__6B_;
  local_28.Value = *this->Value;
  TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8>::
  TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8><UE::MovieScene::Private::TTypeErasedPropertyValueImpl<double>,void>
            (__return_storage_ptr__,&local_28);
  return __return_storage_ptr__;
}

// Get @ 1468b55f0

void * __thiscall
UE::MovieScene::Private::TTypeErasedPropertyPtrImpl<double_const_>::Get
          (TTypeErasedPropertyPtrImpl<double_const_> *this)

{
  return this->Value;
}

// Get @ 1468b5600

void * __thiscall
UE::MovieScene::Private::TTypeErasedPropertyPtrImpl<double>::Get
          (TTypeErasedPropertyPtrImpl<double> *this)

{
  return this->Value;
}

