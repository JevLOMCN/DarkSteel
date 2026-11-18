// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TemplateSequence
// Functions: 2

// TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FTemplateSequenceComponentData>,void> @ 14ac65060

TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> * __thiscall
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FTemplateSequenceComponentData>,void>
          (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *this,
          TDuplicateChildEntityInitializer<UE::MovieScene::FTemplateSequenceComponentData> *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined1 uVar3;
  bool bVar4;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar5;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar6;
  
  this->bIsValid = true;
  this->bInline = true;
  *(undefined ***)(this->Data).Pad = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  uVar3 = param_1->field_0x9;
  (this->Data).Pad[8] = param_1->field_0x8;
  (this->Data).Pad[9] = uVar3;
  uVar3 = param_1->field_0xb;
  (this->Data).Pad[10] = param_1->field_0xa;
  (this->Data).Pad[0xb] = uVar3;
  *(undefined ***)(this->Data).Pad =
       &
       ___7__TDuplicateChildEntityInitializer_UFTemplateSequenceComponentData_MovieScene_UE___MovieScene_UE__6B_
  ;
  if (!this->bIsValid) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)(*pcVar2)();
      return pTVar5;
    }
  }
  pTVar5 = this;
  if (!this->bInline) {
    pTVar5 = *(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)(*pcVar2)();
      return pTVar5;
    }
  }
  pTVar6 = this;
  if (!this->bInline) {
    pTVar6 = *(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)(this->Data).Pad;
  }
  if (pTVar5 != pTVar6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,void> @ 14ac65150

TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> * __thiscall
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,void>
          (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *this,
          TDuplicateChildEntityInitializer<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>
          *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined1 uVar3;
  bool bVar4;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar5;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar6;
  
  this->bIsValid = true;
  this->bInline = true;
  *(undefined ***)(this->Data).Pad = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  uVar3 = param_1->field_0x9;
  (this->Data).Pad[8] = param_1->field_0x8;
  (this->Data).Pad[9] = uVar3;
  uVar3 = param_1->field_0xb;
  (this->Data).Pad[10] = param_1->field_0xa;
  (this->Data).Pad[0xb] = uVar3;
  *(undefined ***)(this->Data).Pad =
       &
       ___7__TDuplicateChildEntityInitializer_UFTemplateSequencePropertyScaleComponentData_MovieScene_UE___MovieScene_UE__6B_
  ;
  if (!this->bIsValid) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)(*pcVar2)();
      return pTVar5;
    }
  }
  pTVar5 = this;
  if (!this->bInline) {
    pTVar5 = *(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)(*pcVar2)();
      return pTVar5;
    }
  }
  pTVar6 = this;
  if (!this->bInline) {
    pTVar6 = *(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)(this->Data).Pad;
  }
  if (pTVar5 != pTVar6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

