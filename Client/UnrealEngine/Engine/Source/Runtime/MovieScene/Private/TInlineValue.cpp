// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 39

// TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<unsigned_char>,void> @ 146068080

TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> * __thiscall
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<unsigned_char>,void>
          (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *this,
          TDuplicateChildEntityInitializer<unsigned_char> *param_1)

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
  *(undefined ***)(this->Data).Pad = &___7__TDuplicateChildEntityInitializer_E_MovieScene_UE__6B_;
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

// TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<short>,void> @ 146068170

TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> * __thiscall
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<short>,void>
          (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *this,
          TDuplicateChildEntityInitializer<short> *param_1)

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
  *(undefined ***)(this->Data).Pad = &___7__TDuplicateChildEntityInitializer_F_MovieScene_UE__6B_;
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

// TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<unsigned_short>,void> @ 146068260

TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> * __thiscall
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<unsigned_short>,void>
          (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *this,
          TDuplicateChildEntityInitializer<unsigned_short> *param_1)

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
  *(undefined ***)(this->Data).Pad = &___7__TDuplicateChildEntityInitializer_G_MovieScene_UE__6B_;
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

// TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<int>,void> @ 146068350

TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> * __thiscall
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<int>,void>
          (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *this,
          TDuplicateChildEntityInitializer<int> *param_1)

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
  *(undefined ***)(this->Data).Pad = &___7__TDuplicateChildEntityInitializer_H_MovieScene_UE__6B_;
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

// TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<double>,void> @ 146068440

TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> * __thiscall
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<double>,void>
          (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *this,
          TDuplicateChildEntityInitializer<double> *param_1)

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
  *(undefined ***)(this->Data).Pad = &___7__TDuplicateChildEntityInitializer_N_MovieScene_UE__6B_;
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

// TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<FEasingComponentData>,void> @ 146068530

TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> * __thiscall
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<FEasingComponentData>,void>
          (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *this,
          TDuplicateChildEntityInitializer<FEasingComponentData> *param_1)

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
       &___7__TDuplicateChildEntityInitializer_UFEasingComponentData___MovieScene_UE__6B_;
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

// TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<FFrameTime>,void> @ 146068620

TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> * __thiscall
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<FFrameTime>,void>
          (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *this,
          TDuplicateChildEntityInitializer<FFrameTime> *param_1)

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
       &___7__TDuplicateChildEntityInitializer_UFFrameTime___MovieScene_UE__6B_;
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

// TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FInstanceHandle>,void> @ 146068710

TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> * __thiscall
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FInstanceHandle>,void>
          (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *this,
          TDuplicateChildEntityInitializer<UE::MovieScene::FInstanceHandle> *param_1)

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
       &___7__TDuplicateChildEntityInitializer_UFInstanceHandle_MovieScene_UE___MovieScene_UE__6B_;
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

// TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>,void> @ 146068800

TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> * __thiscall
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>,void>
          (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *this,
          TDuplicateChildEntityInitializer<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>
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
       ___7__TDuplicateChildEntityInitializer_UFMovieSceneBindingLifetimeComponentData_MovieScene_UE___MovieScene_UE__6B_
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

// TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<FMovieScenePropertyBinding>,void> @ 1460688f0

TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> * __thiscall
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<FMovieScenePropertyBinding>,void>
          (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *this,
          TDuplicateChildEntityInitializer<FMovieScenePropertyBinding> *param_1)

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
       &___7__TDuplicateChildEntityInitializer_UFMovieScenePropertyBinding___MovieScene_UE__6B_;
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

// TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<FMovieSceneSequenceID>,void> @ 1460689e0

TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> * __thiscall
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<FMovieSceneSequenceID>,void>
          (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *this,
          TDuplicateChildEntityInitializer<FMovieSceneSequenceID> *param_1)

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
       &___7__TDuplicateChildEntityInitializer_UFMovieSceneSequenceID___MovieScene_UE__6B_;
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

// TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FObjectComponent>,void> @ 146068ad0

TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> * __thiscall
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FObjectComponent>,void>
          (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *this,
          TDuplicateChildEntityInitializer<UE::MovieScene::FObjectComponent> *param_1)

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
       &___7__TDuplicateChildEntityInitializer_UFObjectComponent_MovieScene_UE___MovieScene_UE__6B_;
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

// TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FRootInstanceHandle>,void> @ 146068bc0

TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> * __thiscall
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FRootInstanceHandle>,void>
          (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *this,
          TDuplicateChildEntityInitializer<UE::MovieScene::FRootInstanceHandle> *param_1)

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
       ___7__TDuplicateChildEntityInitializer_UFRootInstanceHandle_MovieScene_UE___MovieScene_UE__6B_
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

// TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FSourceBoolChannel>,void> @ 146068cb0

TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> * __thiscall
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FSourceBoolChannel>,void>
          (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *this,
          TDuplicateChildEntityInitializer<UE::MovieScene::FSourceBoolChannel> *param_1)

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
       ___7__TDuplicateChildEntityInitializer_UFSourceBoolChannel_MovieScene_UE___MovieScene_UE__6B_
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

// TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FSourceByteChannel>,void> @ 146068da0

TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> * __thiscall
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FSourceByteChannel>,void>
          (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *this,
          TDuplicateChildEntityInitializer<UE::MovieScene::FSourceByteChannel> *param_1)

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
       ___7__TDuplicateChildEntityInitializer_UFSourceByteChannel_MovieScene_UE___MovieScene_UE__6B_
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

// TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FSourceDoubleChannel>,void> @ 146068e90

TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> * __thiscall
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FSourceDoubleChannel>,void>
          (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *this,
          TDuplicateChildEntityInitializer<UE::MovieScene::FSourceDoubleChannel> *param_1)

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
       ___7__TDuplicateChildEntityInitializer_UFSourceDoubleChannel_MovieScene_UE___MovieScene_UE__6B_
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

// TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FSourceFloatChannel>,void> @ 146068f80

TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> * __thiscall
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FSourceFloatChannel>,void>
          (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *this,
          TDuplicateChildEntityInitializer<UE::MovieScene::FSourceFloatChannel> *param_1)

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
       ___7__TDuplicateChildEntityInitializer_UFSourceFloatChannel_MovieScene_UE___MovieScene_UE__6B_
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

// TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FSourceIntegerChannel>,void> @ 146069070

TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> * __thiscall
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FSourceIntegerChannel>,void>
          (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *this,
          TDuplicateChildEntityInitializer<UE::MovieScene::FSourceIntegerChannel> *param_1)

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
       ___7__TDuplicateChildEntityInitializer_UFSourceIntegerChannel_MovieScene_UE___MovieScene_UE__6B_
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

// TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FSourceObjectPathChannel>,void> @ 146069160

TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> * __thiscall
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FSourceObjectPathChannel>,void>
          (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *this,
          TDuplicateChildEntityInitializer<UE::MovieScene::FSourceObjectPathChannel> *param_1)

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
       ___7__TDuplicateChildEntityInitializer_UFSourceObjectPathChannel_MovieScene_UE___MovieScene_UE__6B_
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

// TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FSourceStringChannel>,void> @ 146069250

TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> * __thiscall
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FSourceStringChannel>,void>
          (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *this,
          TDuplicateChildEntityInitializer<UE::MovieScene::FSourceStringChannel> *param_1)

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
       ___7__TDuplicateChildEntityInitializer_UFSourceStringChannel_MovieScene_UE___MovieScene_UE__6B_
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

// TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FSourceTextChannel>,void> @ 146069340

TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> * __thiscall
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FSourceTextChannel>,void>
          (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *this,
          TDuplicateChildEntityInitializer<UE::MovieScene::FSourceTextChannel> *param_1)

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
       ___7__TDuplicateChildEntityInitializer_UFSourceTextChannel_MovieScene_UE___MovieScene_UE__6B_
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

// TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<FString>,void> @ 146069430

TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> * __thiscall
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<FString>,void>
          (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *this,
          TDuplicateChildEntityInitializer<FString> *param_1)

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
       &___7__TDuplicateChildEntityInitializer_VFString___MovieScene_UE__6B_;
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

// TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<FText>,void> @ 146069520

TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> * __thiscall
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<FText>,void>
          (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *this,
          TDuplicateChildEntityInitializer<FText> *param_1)

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
       &___7__TDuplicateChildEntityInitializer_VFText___MovieScene_UE__6B_;
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

// TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<__int64>,void> @ 146069610

TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> * __thiscall
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<__int64>,void>
          (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *this,
          TDuplicateChildEntityInitializer<__int64> *param_1)

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
  *(undefined ***)(this->Data).Pad = &___7__TDuplicateChildEntityInitializer__J_MovieScene_UE__6B_;
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

// TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<bool>,void> @ 146069700

TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> * __thiscall
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<bool>,void>
          (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *this,
          TDuplicateChildEntityInitializer<bool> *param_1)

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
  *(undefined ***)(this->Data).Pad = &___7__TDuplicateChildEntityInitializer__N_MovieScene_UE__6B_;
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

// operator= @ 146186050

TInlineValue<FMovieSceneSequenceInstanceData,16,8> * __thiscall
TInlineValue<FMovieSceneSequenceInstanceData,16,8>::operator=
          (TInlineValue<FMovieSceneSequenceInstanceData,16,8> *this,
          TInlineValue<FMovieSceneSequenceInstanceData,16,8> *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  TInlineValue<FMovieSceneSequenceInstanceData,16,8> *pTVar3;
  
  uVar1 = this->field_0x10;
  if (this->bIsValid) {
    pTVar3 = this;
    if (!this->bInline) {
      pTVar3 = *(TInlineValue<FMovieSceneSequenceInstanceData,16,8> **)(this->Data).Pad;
    }
    this->field_0x10 = uVar1 & 0xfe;
    (*(code *)**(undefined8 **)(pTVar3->Data).Pad)(pTVar3,0);
    if (!this->bInline) {
      FMemory::Free(*(void **)(this->Data).Pad);
    }
  }
  if (param_1->bIsValid) {
    this->bIsValid = true;
    param_1->bIsValid = false;
    this->field_0x10 = this->field_0x10 ^ (param_1->field_0x10 ^ this->field_0x10) & 2;
    uVar2 = *(undefined8 *)((param_1->Data).Pad + 8);
    *(undefined8 *)(this->Data).Pad = *(undefined8 *)(param_1->Data).Pad;
    *(undefined8 *)((this->Data).Pad + 8) = uVar2;
  }
  return this;
}

// operator= @ 1461860c0

TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> * __thiscall
TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>::operator=
          (TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> *this,
          TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> *pTVar3;
  
  uVar1 = this->field_0x20;
  if (this->bIsValid) {
    pTVar3 = this;
    if (!this->bInline) {
      pTVar3 = *(TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> **)(this->Data).Pad;
    }
    this->field_0x20 = uVar1 & 0xfe;
    (*(code *)**(undefined8 **)(pTVar3->Data).Pad)(pTVar3,0);
    if (!this->bInline) {
      FMemory::Free(*(void **)(this->Data).Pad);
    }
  }
  if (param_1->bIsValid) {
    this->bIsValid = true;
    param_1->bIsValid = false;
    this->field_0x20 = this->field_0x20 ^ (param_1->field_0x20 ^ this->field_0x20) & 2;
    uVar2 = *(undefined8 *)((param_1->Data).Pad + 8);
    *(undefined8 *)(this->Data).Pad = *(undefined8 *)(param_1->Data).Pad;
    *(undefined8 *)((this->Data).Pad + 8) = uVar2;
    uVar2 = *(undefined8 *)((param_1->Data).Pad + 0x18);
    *(undefined8 *)((this->Data).Pad + 0x10) = *(undefined8 *)((param_1->Data).Pad + 0x10);
    *(undefined8 *)((this->Data).Pad + 0x18) = uVar2;
  }
  return this;
}

// operator= @ 146186140

TInlineValue<IMovieScenePreAnimatedToken,32,8> * __thiscall
TInlineValue<IMovieScenePreAnimatedToken,32,8>::operator=
          (TInlineValue<IMovieScenePreAnimatedToken,32,8> *this,
          TInlineValue<IMovieScenePreAnimatedToken,32,8> *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  TInlineValue<IMovieScenePreAnimatedToken,32,8> *pTVar3;
  
  uVar1 = this->field_0x20;
  if (this->bIsValid) {
    pTVar3 = this;
    if (!this->bInline) {
      pTVar3 = *(TInlineValue<IMovieScenePreAnimatedToken,32,8> **)(this->Data).Pad;
    }
    this->field_0x20 = uVar1 & 0xfe;
    (*(code *)**(undefined8 **)(pTVar3->Data).Pad)(pTVar3,0);
    if (!this->bInline) {
      FMemory::Free(*(void **)(this->Data).Pad);
    }
  }
  if (param_1->bIsValid) {
    this->bIsValid = true;
    param_1->bIsValid = false;
    this->field_0x20 = this->field_0x20 ^ (param_1->field_0x20 ^ this->field_0x20) & 2;
    uVar2 = *(undefined8 *)((param_1->Data).Pad + 8);
    *(undefined8 *)(this->Data).Pad = *(undefined8 *)(param_1->Data).Pad;
    *(undefined8 *)((this->Data).Pad + 8) = uVar2;
    uVar2 = *(undefined8 *)((param_1->Data).Pad + 0x18);
    *(undefined8 *)((this->Data).Pad + 0x10) = *(undefined8 *)((param_1->Data).Pad + 0x10);
    *(undefined8 *)((this->Data).Pad + 0x18) = uVar2;
  }
  return this;
}

// GetValue @ 1461b4920

FMovieSceneEvalTemplate * __thiscall
TInlineValue<FMovieSceneEvalTemplate,128,8>::GetValue
          (TInlineValue<FMovieSceneEvalTemplate,128,8> *this)

{
  code *pcVar1;
  bool bVar2;
  FMovieSceneEvalTemplate *pFVar3;
  
  if (!this->bIsValid) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FMovieSceneEvalTemplate *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<FMovieSceneEvalTemplate,128,8> **)(this->Data).Pad;
  }
  return (FMovieSceneEvalTemplate *)this;
}

// GetValue @ 1461b4980

FMovieSceneSequenceInstanceData * __thiscall
TInlineValue<FMovieSceneSequenceInstanceData,16,8>::GetValue
          (TInlineValue<FMovieSceneSequenceInstanceData,16,8> *this)

{
  code *pcVar1;
  bool bVar2;
  FMovieSceneSequenceInstanceData *pFVar3;
  
  if (!this->bIsValid) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FMovieSceneSequenceInstanceData *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<FMovieSceneSequenceInstanceData,16,8> **)(this->Data).Pad;
  }
  return (FMovieSceneSequenceInstanceData *)this;
}

// GetValue @ 1461b49d0

FMovieSceneTrackImplementation * __thiscall
TInlineValue<FMovieSceneTrackImplementation,48,8>::GetValue
          (TInlineValue<FMovieSceneTrackImplementation,48,8> *this)

{
  code *pcVar1;
  bool bVar2;
  FMovieSceneTrackImplementation *pFVar3;
  
  if (!this->bIsValid) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FMovieSceneTrackImplementation *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<FMovieSceneTrackImplementation,48,8> **)(this->Data).Pad;
  }
  return (FMovieSceneTrackImplementation *)this;
}

// Reserve @ 1461cc580

void * __thiscall
TInlineValue<FMovieSceneEvalTemplate,128,8>::Reserve
          (TInlineValue<FMovieSceneEvalTemplate,128,8> *this,uint param_1,uint param_2)

{
  byte bVar1;
  void *pvVar2;
  TInlineValue<FMovieSceneEvalTemplate,128,8> *pTVar3;
  
  bVar1 = this->field_0x80;
  if (this->bIsValid) {
    pTVar3 = this;
    if (!this->bInline) {
      pTVar3 = *(TInlineValue<FMovieSceneEvalTemplate,128,8> **)(this->Data).Pad;
    }
    this->field_0x80 = bVar1 & 0xfe;
    (*(code *)**(undefined8 **)(pTVar3->Data).Pad)(pTVar3,0);
    bVar1 = this->field_0x80;
    if (!this->bInline) {
      FMemory::Free(*(void **)(this->Data).Pad);
      bVar1 = this->field_0x80;
    }
  }
  if ((param_1 < 0x81) && (param_2 < 9)) {
    this->field_0x80 = bVar1 | 2;
  }
  else {
    this->field_0x80 = bVar1 & 0xfd;
    pvVar2 = FMemory::Malloc((ulonglong)param_1,param_2);
    *(void **)(this->Data).Pad = pvVar2;
  }
  this->bIsValid = true;
  if (!this->bInline) {
    this = *(TInlineValue<FMovieSceneEvalTemplate,128,8> **)(this->Data).Pad;
  }
  return this;
}

// Reserve @ 1461cc630

void * __thiscall
TInlineValue<FMovieSceneTrackImplementation,48,8>::Reserve
          (TInlineValue<FMovieSceneTrackImplementation,48,8> *this,uint param_1,uint param_2)

{
  byte bVar1;
  void *pvVar2;
  TInlineValue<FMovieSceneTrackImplementation,48,8> *pTVar3;
  
  bVar1 = this->field_0x30;
  if (this->bIsValid) {
    pTVar3 = this;
    if (!this->bInline) {
      pTVar3 = *(TInlineValue<FMovieSceneTrackImplementation,48,8> **)(this->Data).Pad;
    }
    this->field_0x30 = bVar1 & 0xfe;
    (*(code *)**(undefined8 **)(pTVar3->Data).Pad)(pTVar3,0);
    bVar1 = this->field_0x30;
    if (!this->bInline) {
      FMemory::Free(*(void **)(this->Data).Pad);
      bVar1 = this->field_0x30;
    }
  }
  if ((param_1 < 0x31) && (param_2 < 9)) {
    this->field_0x30 = bVar1 | 2;
  }
  else {
    this->field_0x30 = bVar1 & 0xfd;
    pvVar2 = FMemory::Malloc((ulonglong)param_1,param_2);
    *(void **)(this->Data).Pad = pvVar2;
  }
  this->bIsValid = true;
  if (!this->bInline) {
    this = *(TInlineValue<FMovieSceneTrackImplementation,48,8> **)(this->Data).Pad;
  }
  return this;
}

// InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>_>_> @ 1461f7810

void __thiscall
TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>_>_>
          (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *this,
          TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>_>
          *param_1)

{
  undefined1 uVar1;
  uchar uVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  bool bVar18;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar19;
  
  this->bInline = false;
  pTVar19 = FMemory::Malloc(0x48,8);
  this->bIsValid = true;
  *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad = pTVar19;
  if (this->bInline) {
    pTVar19 = this;
  }
  *(undefined ***)(pTVar19->Data).Pad =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01__U__TAdd_UFGuid___MovieScene_UE__U__TAddConditional_UFGuid___34_U__TAddConditional_UFMovieSceneBindingLifetimeComponentData_MovieScene_UE___34__MovieScene_UE__6B_
  ;
  uVar1 = param_1->field_0x9;
  (pTVar19->Data).Pad[8] = param_1->field_0x8;
  (pTVar19->Data).Pad[9] = uVar1;
  (pTVar19->Data).Pad[0x1c] = '\0';
  uVar2 = param_1->field_0x1c;
  (pTVar19->Data).Pad[0x1c] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0xd;
    uVar4 = param_1->field_0xe;
    uVar5 = param_1->field_0xf;
    uVar6 = param_1->field_0x10;
    uVar7 = param_1->field_0x11;
    uVar8 = param_1->field_0x12;
    uVar9 = param_1->field_0x13;
    uVar10 = param_1->field_0x14;
    uVar11 = param_1->field_0x15;
    uVar12 = param_1->field_0x16;
    uVar13 = param_1->field_0x17;
    uVar14 = param_1->field_0x18;
    uVar15 = param_1->field_0x19;
    uVar16 = param_1->field_0x1a;
    uVar17 = param_1->field_0x1b;
    (pTVar19->Data).Pad[0xc] = param_1->field_0xc;
    (pTVar19->Data).Pad[0xd] = uVar1;
    (pTVar19->Data).Pad[0xe] = uVar4;
    (pTVar19->Data).Pad[0xf] = uVar5;
    (pTVar19->Data).Pad[0x10] = uVar6;
    (pTVar19->Data).Pad[0x11] = uVar7;
    (pTVar19->Data).Pad[0x12] = uVar8;
    (pTVar19->Data).Pad[0x13] = uVar9;
    (pTVar19->Data).Pad[0x14] = uVar10;
    (pTVar19->Data).Pad[0x15] = uVar11;
    (pTVar19->Data).Pad[0x16] = uVar12;
    (pTVar19->Data).Pad[0x17] = uVar13;
    (pTVar19->Data).Pad[0x18] = uVar14;
    (pTVar19->Data).Pad[0x19] = uVar15;
    (pTVar19->Data).Pad[0x1a] = uVar16;
    (pTVar19->Data).Pad[0x1b] = uVar17;
  }
  uVar1 = param_1->field_0x21;
  uVar4 = param_1->field_0x22;
  uVar5 = param_1->field_0x23;
  (pTVar19->Data).Pad[0x20] = param_1->field_0x20;
  (pTVar19->Data).Pad[0x21] = uVar1;
  (pTVar19->Data).Pad[0x22] = uVar4;
  (pTVar19->Data).Pad[0x23] = uVar5;
  (pTVar19->Data).Pad[0x34] = '\0';
  uVar2 = param_1->field_0x34;
  (pTVar19->Data).Pad[0x34] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x25;
    uVar4 = param_1->field_0x26;
    uVar5 = param_1->field_0x27;
    uVar6 = param_1->field_0x28;
    uVar7 = param_1->field_0x29;
    uVar8 = param_1->field_0x2a;
    uVar9 = param_1->field_0x2b;
    uVar10 = param_1->field_0x2c;
    uVar11 = param_1->field_0x2d;
    uVar12 = param_1->field_0x2e;
    uVar13 = param_1->field_0x2f;
    uVar14 = param_1->field_0x30;
    uVar15 = param_1->field_0x31;
    uVar16 = param_1->field_0x32;
    uVar17 = param_1->field_0x33;
    (pTVar19->Data).Pad[0x24] = param_1->field_0x24;
    (pTVar19->Data).Pad[0x25] = uVar1;
    (pTVar19->Data).Pad[0x26] = uVar4;
    (pTVar19->Data).Pad[0x27] = uVar5;
    (pTVar19->Data).Pad[0x28] = uVar6;
    (pTVar19->Data).Pad[0x29] = uVar7;
    (pTVar19->Data).Pad[0x2a] = uVar8;
    (pTVar19->Data).Pad[0x2b] = uVar9;
    (pTVar19->Data).Pad[0x2c] = uVar10;
    (pTVar19->Data).Pad[0x2d] = uVar11;
    (pTVar19->Data).Pad[0x2e] = uVar12;
    (pTVar19->Data).Pad[0x2f] = uVar13;
    (pTVar19->Data).Pad[0x30] = uVar14;
    (pTVar19->Data).Pad[0x31] = uVar15;
    (pTVar19->Data).Pad[0x32] = uVar16;
    (pTVar19->Data).Pad[0x33] = uVar17;
  }
  uVar1 = param_1->field_0x39;
  uVar4 = param_1->field_0x3a;
  uVar5 = param_1->field_0x3b;
  (pTVar19->Data).Pad[0x38] = param_1->field_0x38;
  (pTVar19->Data).Pad[0x39] = uVar1;
  (pTVar19->Data).Pad[0x3a] = uVar4;
  (pTVar19->Data).Pad[0x3b] = uVar5;
  (pTVar19->Data).Pad[0x3d] = '\0';
  uVar2 = param_1->field_0x3d;
  (pTVar19->Data).Pad[0x3d] = uVar2;
  if (uVar2 != '\0') {
    (pTVar19->Data).Pad[0x3c] = param_1->field_0x3c;
  }
  pTVar19->field_0x40 = param_1->field_0x40;
  *(undefined ***)(pTVar19->Data).Pad =
       &
       ___7__TEntityBuilder_U__TAdd_UFGuid___MovieScene_UE__U__TAddConditional_UFGuid___23_U__TAddConditional_UFMovieSceneBindingLifetimeComponentData_MovieScene_UE___23__MovieScene_UE__6B_
  ;
  if (!this->bIsValid) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar18) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar19 = this;
  if (!this->bInline) {
    pTVar19 = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar18) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (pTVar19 != this) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar18) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// Reserve @ 146230560

void * __thiscall
TInlineValue<FMovieSceneSequenceInstanceData,16,8>::Reserve
          (TInlineValue<FMovieSceneSequenceInstanceData,16,8> *this,uint param_1,uint param_2)

{
  byte bVar1;
  void *pvVar2;
  TInlineValue<FMovieSceneSequenceInstanceData,16,8> *pTVar3;
  
  bVar1 = this->field_0x10;
  if (this->bIsValid) {
    pTVar3 = this;
    if (!this->bInline) {
      pTVar3 = *(TInlineValue<FMovieSceneSequenceInstanceData,16,8> **)(this->Data).Pad;
    }
    this->field_0x10 = bVar1 & 0xfe;
    (*(code *)**(undefined8 **)(pTVar3->Data).Pad)(pTVar3,0);
    bVar1 = this->field_0x10;
    if (!this->bInline) {
      FMemory::Free(*(void **)(this->Data).Pad);
      bVar1 = this->field_0x10;
    }
  }
  if ((param_1 < 0x11) && (param_2 < 9)) {
    this->field_0x10 = bVar1 | 2;
  }
  else {
    this->field_0x10 = bVar1 & 0xfd;
    pvVar2 = FMemory::Malloc((ulonglong)param_1,param_2);
    *(void **)(this->Data).Pad = pvVar2;
  }
  this->bIsValid = true;
  if (!this->bInline) {
    this = *(TInlineValue<FMovieSceneSequenceInstanceData,16,8> **)(this->Data).Pad;
  }
  return this;
}

// TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8><FMovieSceneAccumulatedBlendState::TTokenEntry<int>,void> @ 146272be0

TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8> * __thiscall
TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8>::
TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8><FMovieSceneAccumulatedBlendState::TTokenEntry<int>,void>
          (TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8> *this,
          TTokenEntry<int> *param_1)

{
  uchar *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  byte bVar5;
  bool bVar6;
  TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8> *pTVar7;
  TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8> *pTVar8;
  
  this->bIsValid = true;
  this->bInline = true;
  *(undefined ***)(this->Data).Pad = &___7FTokenEntry_FMovieSceneAccumulatedBlendState__6B_;
  *(longlong *)((this->Data).Pad + 8) = param_1->_padding_;
  *(longlong *)((this->Data).Pad + 0x10) = param_1->_padding_;
  *(undefined ***)(this->Data).Pad = &___7__TTokenEntry_H_FMovieSceneAccumulatedBlendState__6B_;
  bVar5 = (this->Data).Pad[0x20] & 0xfe;
  (this->Data).Pad[0x20] = bVar5 | 2;
  if ((param_1->Token).Value.bIsValid) {
    (this->Data).Pad[0x20] = bVar5 | 3;
    (param_1->Token).Value.bIsValid = false;
    puVar1 = (this->Data).Pad + 0x20;
    *puVar1 = *puVar1 ^ ((param_1->Token).Value.field_0x8 ^ (this->Data).Pad[0x20]) & 2;
    *(undefined8 *)((this->Data).Pad + 0x18) = *(undefined8 *)(param_1->Token).Value.Data.Pad;
  }
  uVar4 = *(undefined8 *)&(param_1->Token).AnimatingScope.Key.SectionIndex;
  *(undefined8 *)((this->Data).Pad + 0x28) = *(undefined8 *)&(param_1->Token).AnimatingScope.Key;
  *(undefined8 *)((this->Data).Pad + 0x30) = uVar4;
  *(int *)((this->Data).Pad + 0x38) = (param_1->Token).HierarchicalBias;
  *(float *)((this->Data).Pad + 0x3c) = (param_1->Token).Weight;
  (this->Data).Pad[0x40] = (param_1->Token).BlendType;
  *(int *)((this->Data).Pad + 0x44) = (param_1->Token).BlendingOrder;
  if (!this->bIsValid) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pTVar7 = this;
  if (!this->bInline) {
    pTVar7 = *(TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8> **)(this->Data).Pad
    ;
  }
  if (!this->bIsValid) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pTVar8 = this;
  if (!this->bInline) {
    pTVar8 = *(TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8> **)(this->Data).Pad
    ;
  }
  if (pTVar7 != pTVar8) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return this;
}

// operator=<TBlendableTokenStack<int>_> @ 146272d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000146272eaa) */
/* WARNING: Removing unreachable block (ram,0x000146272eb2) */
/* WARNING: Removing unreachable block (ram,0x000146272eb8) */
/* WARNING: Removing unreachable block (ram,0x000146272ecf) */

TInlineValue<IBlendableTokenStack,64,8> * __thiscall
TInlineValue<IBlendableTokenStack,64,8>::operator=<TBlendableTokenStack<int>_>
          (TInlineValue<IBlendableTokenStack,64,8> *this,TBlendableTokenStack<int> *param_1)

{
  undefined1 uVar1;
  code *pcVar2;
  bool bVar3;
  TInlineValue<IBlendableTokenStack,64,8> *pTVar4;
  undefined ******ppppppuVar5;
  byte bVar6;
  undefined ******ppppppuVar7;
  undefined1 auStack_78 [32];
  undefined *****local_58;
  longlong lStack_50;
  FScriptContainerElement *local_48;
  int iStack_40;
  int iStack_3c;
  int local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_18 = local_18 | 3;
  lStack_50 = param_1->_padding_;
  local_58 = (undefined *****)&___7__TBlendableTokenStack_H__6B_;
  local_48 = (param_1->Tokens).AllocatorInstance.Data;
  (param_1->Tokens).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iStack_40 = (param_1->Tokens).ArrayNum;
  iStack_3c = (param_1->Tokens).ArrayMax;
  (param_1->Tokens).ArrayNum = 0;
  (param_1->Tokens).ArrayMax = 0;
  local_38 = param_1->CurrentBias;
  if (((local_18 & 1) == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TInlineValue<IBlendableTokenStack,64,8> *)(*pcVar2)();
    return pTVar4;
  }
  ppppppuVar7 = &local_58;
  if ((local_18 & 2) == 0) {
    ppppppuVar7 = (undefined ******)local_58;
  }
  if (((local_18 & 1) == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TInlineValue<IBlendableTokenStack,64,8> *)(*pcVar2)();
    return pTVar4;
  }
  ppppppuVar5 = &local_58;
  if ((local_18 & 2) == 0) {
    ppppppuVar5 = (undefined ******)local_58;
  }
  if ((ppppppuVar7 != ppppppuVar5) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TInlineValue<IBlendableTokenStack,64,8> *)(*pcVar2)();
    return pTVar4;
  }
  uVar1 = this->field_0x40;
  if (this->bIsValid) {
    pTVar4 = this;
    if (!this->bInline) {
      pTVar4 = *(TInlineValue<IBlendableTokenStack,64,8> **)(this->Data).Pad;
    }
    this->field_0x40 = uVar1 & 0xfe;
    (*(code *)**(undefined8 **)(pTVar4->Data).Pad)(pTVar4,0);
    if (!this->bInline) {
      FMemory::Free(*(void **)(this->Data).Pad);
    }
  }
  if ((local_18 & 1) != 0) {
    bVar6 = this->field_0x40 | 1;
    *(undefined ******)(this->Data).Pad = local_58;
    *(longlong *)((this->Data).Pad + 8) = lStack_50;
    *(FScriptContainerElement **)((this->Data).Pad + 0x10) = local_48;
    *(ulonglong *)((this->Data).Pad + 0x18) = CONCAT44(iStack_3c,iStack_40);
    this->field_0x40 = (bVar6 ^ local_18 & 0xfe) & 2 ^ bVar6;
    *(int *)((this->Data).Pad + 0x20) = local_38;
    *(undefined4 *)((this->Data).Pad + 0x24) = uStack_34;
    *(undefined4 *)((this->Data).Pad + 0x28) = uStack_30;
    *(undefined4 *)((this->Data).Pad + 0x2c) = uStack_2c;
    *(undefined4 *)((this->Data).Pad + 0x30) = local_28;
    *(undefined4 *)((this->Data).Pad + 0x34) = uStack_24;
    *(undefined4 *)((this->Data).Pad + 0x38) = uStack_20;
    *(undefined4 *)((this->Data).Pad + 0x3c) = uStack_1c;
  }
  return this;
}

// TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyConstValueImpl,64,8> @ 146298d90

TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyConstValueImpl,64,8> * __thiscall
TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyConstValueImpl,64,8>::
TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyConstValueImpl,64,8>
          (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyConstValueImpl,64,8> *this,
          TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyConstValueImpl,64,8> *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  
  bVar1 = this->field_0x40;
  this->bIsValid = false;
  this->bInline = true;
  if (param_1->bIsValid) {
    this->field_0x40 = bVar1 & 0xfe | 3;
    param_1->bIsValid = false;
    this->field_0x40 = this->field_0x40 ^ (param_1->field_0x40 ^ this->field_0x40) & 2;
    uVar2 = *(undefined8 *)((param_1->Data).Pad + 8);
    *(undefined8 *)(this->Data).Pad = *(undefined8 *)(param_1->Data).Pad;
    *(undefined8 *)((this->Data).Pad + 8) = uVar2;
    uVar2 = *(undefined8 *)((param_1->Data).Pad + 0x18);
    *(undefined8 *)((this->Data).Pad + 0x10) = *(undefined8 *)((param_1->Data).Pad + 0x10);
    *(undefined8 *)((this->Data).Pad + 0x18) = uVar2;
    uVar2 = *(undefined8 *)((param_1->Data).Pad + 0x28);
    *(undefined8 *)((this->Data).Pad + 0x20) = *(undefined8 *)((param_1->Data).Pad + 0x20);
    *(undefined8 *)((this->Data).Pad + 0x28) = uVar2;
    uVar2 = *(undefined8 *)((param_1->Data).Pad + 0x38);
    *(undefined8 *)((this->Data).Pad + 0x30) = *(undefined8 *)((param_1->Data).Pad + 0x30);
    *(undefined8 *)((this->Data).Pad + 0x38) = uVar2;
  }
  return this;
}

// GetValue @ 1462b1350

ITypeErasedPropertyConstValueImpl * __thiscall
TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyConstValueImpl,64,8>::GetValue
          (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyConstValueImpl,64,8> *this)

{
  code *pcVar1;
  bool bVar2;
  ITypeErasedPropertyConstValueImpl *pIVar3;
  
  if (!this->bIsValid) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (ITypeErasedPropertyConstValueImpl *)(*pcVar1)();
      return pIVar3;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyConstValueImpl,64,8> **)
            (this->Data).Pad;
  }
  return (ITypeErasedPropertyConstValueImpl *)this;
}

