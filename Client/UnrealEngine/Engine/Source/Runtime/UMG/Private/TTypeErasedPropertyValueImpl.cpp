// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 4

// Copy @ 146910940

TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> * __thiscall
UE::MovieScene::Private::TTypeErasedPropertyValueImpl<UE::MovieScene::FIntermediateMargin>::Copy
          (TTypeErasedPropertyValueImpl<UE::MovieScene::FIntermediateMargin> *this,
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
       &
       ___7__TTypeErasedPropertyValueImpl_UFIntermediateMargin_MovieScene_UE___Private_MovieScene_UE__6B_
  ;
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

// Copy @ 146910a30

TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> * __thiscall
UE::MovieScene::Private::TTypeErasedPropertyValueImpl<UE::MovieScene::FIntermediateWidgetTransform>
::Copy(TTypeErasedPropertyValueImpl<UE::MovieScene::FIntermediateWidgetTransform> *this,
      TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8>
      *__return_storage_ptr__)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *pTVar6;
  TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *pTVar7;
  
  __return_storage_ptr__->bIsValid = false;
  __return_storage_ptr__->bInline = false;
  pTVar6 = FMemory::Malloc(0x48,8);
  __return_storage_ptr__->bIsValid = true;
  *(TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> **)
   (__return_storage_ptr__->Data).Pad = pTVar6;
  if (__return_storage_ptr__->bInline) {
    pTVar6 = __return_storage_ptr__;
  }
  *(undefined ***)(pTVar6->Data).Pad =
       &___7ITypeErasedPropertyConstValueImpl_Private_MovieScene_UE__6B_;
  *(int *)((pTVar6->Data).Pad + 8) = (int)this->_padding_;
  *(undefined ***)(pTVar6->Data).Pad =
       &
       ___7__TTypeErasedPropertyValueImpl_UFIntermediateWidgetTransform_MovieScene_UE___Private_MovieScene_UE__6B_
  ;
  dVar4 = (this->Value).TranslationY;
  *(double *)((pTVar6->Data).Pad + 0x10) = (this->Value).TranslationX;
  *(double *)((pTVar6->Data).Pad + 0x18) = dVar4;
  dVar4 = (this->Value).ScaleX;
  *(double *)((pTVar6->Data).Pad + 0x20) = (this->Value).Rotation;
  *(double *)((pTVar6->Data).Pad + 0x28) = dVar4;
  dVar4 = (this->Value).ShearX;
  *(double *)((pTVar6->Data).Pad + 0x30) = (this->Value).ScaleY;
  *(double *)((pTVar6->Data).Pad + 0x38) = dVar4;
  *(double *)&pTVar6->field_0x40 = (this->Value).ShearY;
  if (!__return_storage_ptr__->bIsValid) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *)
               (*pcVar3)();
      return pTVar6;
    }
  }
  pTVar6 = __return_storage_ptr__;
  if (!__return_storage_ptr__->bInline) {
    pTVar6 = *(TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> **)
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
      pcVar3 = (code *)swi(3);
      pTVar6 = (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *)
               (*pcVar3)();
      return pTVar6;
    }
  }
  pTVar7 = __return_storage_ptr__;
  if (!__return_storage_ptr__->bInline) {
    pTVar7 = *(TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> **)
              (__return_storage_ptr__->Data).Pad;
  }
  if (pTVar6 != pTVar7) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *)
               (*pcVar3)();
      return pTVar6;
    }
  }
  return __return_storage_ptr__;
}

// Get @ 14691cfd0

void * __thiscall
UE::MovieScene::Private::TTypeErasedPropertyValueImpl<UE::MovieScene::FIntermediateMargin>::Get
          (TTypeErasedPropertyValueImpl<UE::MovieScene::FIntermediateMargin> *this)

{
  return &this->Value;
}

// Get @ 14691cfe0

void * __thiscall
UE::MovieScene::Private::TTypeErasedPropertyValueImpl<UE::MovieScene::FIntermediateWidgetTransform>
::Get(TTypeErasedPropertyValueImpl<UE::MovieScene::FIntermediateWidgetTransform> *this)

{
  return &this->Value;
}

