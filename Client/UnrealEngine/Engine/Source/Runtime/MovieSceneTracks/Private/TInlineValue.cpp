// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 62

// TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FAttachmentComponent>,void> @ 146595070

TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> * __thiscall
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FAttachmentComponent>,void>
          (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *this,
          TDuplicateChildEntityInitializer<UE::MovieScene::FAttachmentComponent> *param_1)

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
       ___7__TDuplicateChildEntityInitializer_UFAttachmentComponent_MovieScene_UE___MovieScene_UE__6B_
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

// TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<FConstraintComponentData>,void> @ 146595160

TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> * __thiscall
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<FConstraintComponentData>,void>
          (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *this,
          TDuplicateChildEntityInitializer<FConstraintComponentData> *param_1)

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
       &___7__TDuplicateChildEntityInitializer_UFConstraintComponentData___MovieScene_UE__6B_;
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

// TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<FMovieSceneObjectBindingID>,void> @ 146595250

TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> * __thiscall
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<FMovieSceneObjectBindingID>,void>
          (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *this,
          TDuplicateChildEntityInitializer<FMovieSceneObjectBindingID> *param_1)

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
       &___7__TDuplicateChildEntityInitializer_UFMovieSceneObjectBindingID___MovieScene_UE__6B_;
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

// TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<FMovieSceneSkeletalAnimationComponentData>,void> @ 146595340

TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> * __thiscall
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<FMovieSceneSkeletalAnimationComponentData>,void>
          (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *this,
          TDuplicateChildEntityInitializer<FMovieSceneSkeletalAnimationComponentData> *param_1)

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
       ___7__TDuplicateChildEntityInitializer_UFMovieSceneSkeletalAnimationComponentData___MovieScene_UE__6B_
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

// TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<FPerlinNoiseParams>,void> @ 146595430

TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> * __thiscall
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<FPerlinNoiseParams>,void>
          (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *this,
          TDuplicateChildEntityInitializer<FPerlinNoiseParams> *param_1)

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
       &___7__TDuplicateChildEntityInitializer_UFPerlinNoiseParams___MovieScene_UE__6B_;
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

// TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8><UE::MovieScene::Private::TTypeErasedPropertyValueImpl<double>,void> @ 146595520

TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> * __thiscall
TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8>::
TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8><UE::MovieScene::Private::TTypeErasedPropertyValueImpl<double>,void>
          (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *this,
          TTypeErasedPropertyValueImpl<double> *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *pTVar4;
  TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *pTVar5;
  
  this->bIsValid = true;
  this->bInline = true;
  *(undefined ***)(this->Data).Pad =
       &___7ITypeErasedPropertyConstValueImpl_Private_MovieScene_UE__6B_;
  *(int *)((this->Data).Pad + 8) = (int)param_1->_padding_;
  *(undefined ***)(this->Data).Pad =
       &___7__TTypeErasedPropertyValueImpl_N_Private_MovieScene_UE__6B_;
  *(double *)((this->Data).Pad + 0x10) = param_1->Value;
  if (!this->bIsValid) {
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
  pTVar4 = this;
  if (!this->bInline) {
    pTVar4 = *(TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> **)
              (this->Data).Pad;
  }
  if (!this->bIsValid) {
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
  pTVar5 = this;
  if (!this->bInline) {
    pTVar5 = *(TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> **)
              (this->Data).Pad;
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
  return this;
}

// InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<FConstraintComponentData>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<FConstraintComponentData>_>_> @ 1465d97c0

void __thiscall
TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<FConstraintComponentData>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<FConstraintComponentData>_>_>
          (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *this,
          TEntityBuilder<UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<FConstraintComponentData>_>
          *param_1)

{
  undefined1 uVar1;
  uchar uVar2;
  code *pcVar3;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar4;
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
  undefined1 uVar18;
  bool bVar19;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar20;
  
  this->bInline = false;
  pTVar20 = FMemory::Malloc(0x68,8);
  this->bIsValid = true;
  *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad = pTVar20;
  if (this->bInline) {
    pTVar20 = this;
  }
  *(undefined ***)(pTVar20->Data).Pad =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01__U__TAdd_P6APEAVUObject__PEAV1__Z_MovieScene_UE__U__TAdd_UFGuid___34_U__TAdd_UFConstraintComponentData___34__MovieScene_UE__6B_
  ;
  uVar1 = param_1->field_0x9;
  (pTVar20->Data).Pad[8] = param_1->field_0x8;
  (pTVar20->Data).Pad[9] = uVar1;
  (pTVar20->Data).Pad[0x18] = '\0';
  uVar2 = param_1->field_0x18;
  (pTVar20->Data).Pad[0x18] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x11;
    uVar5 = param_1->field_0x12;
    uVar6 = param_1->field_0x13;
    uVar7 = param_1->field_0x14;
    uVar8 = param_1->field_0x15;
    uVar9 = param_1->field_0x16;
    uVar10 = param_1->field_0x17;
    (pTVar20->Data).Pad[0x10] = param_1->field_0x10;
    (pTVar20->Data).Pad[0x11] = uVar1;
    (pTVar20->Data).Pad[0x12] = uVar5;
    (pTVar20->Data).Pad[0x13] = uVar6;
    (pTVar20->Data).Pad[0x14] = uVar7;
    (pTVar20->Data).Pad[0x15] = uVar8;
    (pTVar20->Data).Pad[0x16] = uVar9;
    (pTVar20->Data).Pad[0x17] = uVar10;
  }
  uVar1 = param_1->field_0x21;
  (pTVar20->Data).Pad[0x20] = param_1->field_0x20;
  (pTVar20->Data).Pad[0x21] = uVar1;
  (pTVar20->Data).Pad[0x34] = '\0';
  uVar2 = param_1->field_0x34;
  (pTVar20->Data).Pad[0x34] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x25;
    uVar5 = param_1->field_0x26;
    uVar6 = param_1->field_0x27;
    uVar7 = param_1->field_0x28;
    uVar8 = param_1->field_0x29;
    uVar9 = param_1->field_0x2a;
    uVar10 = param_1->field_0x2b;
    uVar11 = param_1->field_0x2c;
    uVar12 = param_1->field_0x2d;
    uVar13 = param_1->field_0x2e;
    uVar14 = param_1->field_0x2f;
    uVar15 = param_1->field_0x30;
    uVar16 = param_1->field_0x31;
    uVar17 = param_1->field_0x32;
    uVar18 = param_1->field_0x33;
    (pTVar20->Data).Pad[0x24] = param_1->field_0x24;
    (pTVar20->Data).Pad[0x25] = uVar1;
    (pTVar20->Data).Pad[0x26] = uVar5;
    (pTVar20->Data).Pad[0x27] = uVar6;
    (pTVar20->Data).Pad[0x28] = uVar7;
    (pTVar20->Data).Pad[0x29] = uVar8;
    (pTVar20->Data).Pad[0x2a] = uVar9;
    (pTVar20->Data).Pad[0x2b] = uVar10;
    (pTVar20->Data).Pad[0x2c] = uVar11;
    (pTVar20->Data).Pad[0x2d] = uVar12;
    (pTVar20->Data).Pad[0x2e] = uVar13;
    (pTVar20->Data).Pad[0x2f] = uVar14;
    (pTVar20->Data).Pad[0x30] = uVar15;
    (pTVar20->Data).Pad[0x31] = uVar16;
    (pTVar20->Data).Pad[0x32] = uVar17;
    (pTVar20->Data).Pad[0x33] = uVar18;
  }
  uVar1 = param_1->field_0x39;
  (pTVar20->Data).Pad[0x38] = param_1->field_0x38;
  (pTVar20->Data).Pad[0x39] = uVar1;
  pTVar20[1].Data.Pad[0x10] = '\0';
  uVar2 = param_1->field_0x58;
  pTVar20[1].Data.Pad[0x10] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x48;
    uVar5 = param_1->field_0x49;
    uVar6 = param_1->field_0x4a;
    uVar7 = param_1->field_0x4b;
    uVar8 = param_1->field_0x4c;
    uVar9 = param_1->field_0x4d;
    uVar10 = param_1->field_0x4e;
    uVar11 = param_1->field_0x4f;
    *(undefined8 *)&pTVar20->field_0x40 = *(undefined8 *)&param_1->field_0x40;
    pTVar20[1].Data.Pad[0] = uVar1;
    pTVar20[1].Data.Pad[1] = uVar5;
    pTVar20[1].Data.Pad[2] = uVar6;
    pTVar20[1].Data.Pad[3] = uVar7;
    pTVar20[1].Data.Pad[4] = uVar8;
    pTVar20[1].Data.Pad[5] = uVar9;
    pTVar20[1].Data.Pad[6] = uVar10;
    pTVar20[1].Data.Pad[7] = uVar11;
    uVar1 = param_1->field_0x51;
    uVar5 = param_1->field_0x52;
    uVar6 = param_1->field_0x53;
    uVar7 = param_1->field_0x54;
    uVar8 = param_1->field_0x55;
    uVar9 = param_1->field_0x56;
    uVar10 = param_1->field_0x57;
    pTVar4 = pTVar20 + 1;
    (pTVar4->Data).Pad[8] = param_1->field_0x50;
    (pTVar4->Data).Pad[9] = uVar1;
    (pTVar4->Data).Pad[10] = uVar5;
    (pTVar4->Data).Pad[0xb] = uVar6;
    (pTVar4->Data).Pad[0xc] = uVar7;
    (pTVar4->Data).Pad[0xd] = uVar8;
    (pTVar4->Data).Pad[0xe] = uVar9;
    (pTVar4->Data).Pad[0xf] = uVar10;
  }
  pTVar20[1].Data.Pad[0x18] = param_1->field_0x60;
  *(undefined ***)(pTVar20->Data).Pad =
       &
       ___7__TEntityBuilder_U__TAdd_P6APEAVUObject__PEAV1__Z_MovieScene_UE__U__TAdd_UFGuid___23_U__TAdd_UFConstraintComponentData___23__MovieScene_UE__6B_
  ;
  if (!this->bIsValid) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar19) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar20 = this;
  if (!this->bInline) {
    pTVar20 = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar19) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (pTVar20 != this) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar19) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<FMovieSceneObjectBindingID>,UE::MovieScene::TAdd<UE::MovieScene::FAttachmentComponent>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<FMovieSceneObjectBindingID>,UE::MovieScene::TAdd<UE::MovieScene::FAttachmentComponent>_>_> @ 1465d9930

void __thiscall
TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<FMovieSceneObjectBindingID>,UE::MovieScene::TAdd<UE::MovieScene::FAttachmentComponent>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<FMovieSceneObjectBindingID>,UE::MovieScene::TAdd<UE::MovieScene::FAttachmentComponent>_>_>
          (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *this,
          TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<FMovieSceneObjectBindingID>,UE::MovieScene::TAdd<UE::MovieScene::FAttachmentComponent>_>
          *param_1)

{
  undefined1 uVar1;
  uchar uVar2;
  code *pcVar3;
  undefined8 uVar4;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar5;
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
  undefined1 uVar18;
  undefined1 uVar19;
  bool bVar20;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar21;
  
  this->bInline = false;
  pTVar21 = FMemory::Malloc(0x80,8);
  this->bIsValid = true;
  *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad = pTVar21;
  if (this->bInline) {
    pTVar21 = this;
  }
  *(undefined ***)(pTVar21->Data).Pad =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02__U__TAdd_UFGuid___MovieScene_UE__U__TAdd_P6APEAVUObject__PEAV1__Z_34_U__TAdd_UFMovieSceneObjectBindingID___34_U__TAdd_UFAttachmentComponent_MovieScene_UE___34__MovieScene_UE__6B_
  ;
  uVar1 = param_1->field_0x9;
  (pTVar21->Data).Pad[8] = param_1->field_0x8;
  (pTVar21->Data).Pad[9] = uVar1;
  (pTVar21->Data).Pad[0x1c] = '\0';
  uVar2 = param_1->field_0x1c;
  (pTVar21->Data).Pad[0x1c] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0xd;
    uVar6 = param_1->field_0xe;
    uVar7 = param_1->field_0xf;
    uVar8 = param_1->field_0x10;
    uVar9 = param_1->field_0x11;
    uVar10 = param_1->field_0x12;
    uVar11 = param_1->field_0x13;
    uVar12 = param_1->field_0x14;
    uVar13 = param_1->field_0x15;
    uVar14 = param_1->field_0x16;
    uVar15 = param_1->field_0x17;
    uVar16 = param_1->field_0x18;
    uVar17 = param_1->field_0x19;
    uVar18 = param_1->field_0x1a;
    uVar19 = param_1->field_0x1b;
    (pTVar21->Data).Pad[0xc] = param_1->field_0xc;
    (pTVar21->Data).Pad[0xd] = uVar1;
    (pTVar21->Data).Pad[0xe] = uVar6;
    (pTVar21->Data).Pad[0xf] = uVar7;
    (pTVar21->Data).Pad[0x10] = uVar8;
    (pTVar21->Data).Pad[0x11] = uVar9;
    (pTVar21->Data).Pad[0x12] = uVar10;
    (pTVar21->Data).Pad[0x13] = uVar11;
    (pTVar21->Data).Pad[0x14] = uVar12;
    (pTVar21->Data).Pad[0x15] = uVar13;
    (pTVar21->Data).Pad[0x16] = uVar14;
    (pTVar21->Data).Pad[0x17] = uVar15;
    (pTVar21->Data).Pad[0x18] = uVar16;
    (pTVar21->Data).Pad[0x19] = uVar17;
    (pTVar21->Data).Pad[0x1a] = uVar18;
    (pTVar21->Data).Pad[0x1b] = uVar19;
  }
  uVar1 = param_1->field_0x21;
  (pTVar21->Data).Pad[0x20] = param_1->field_0x20;
  (pTVar21->Data).Pad[0x21] = uVar1;
  (pTVar21->Data).Pad[0x30] = '\0';
  uVar2 = param_1->field_0x30;
  (pTVar21->Data).Pad[0x30] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x29;
    uVar6 = param_1->field_0x2a;
    uVar7 = param_1->field_0x2b;
    uVar8 = param_1->field_0x2c;
    uVar9 = param_1->field_0x2d;
    uVar10 = param_1->field_0x2e;
    uVar11 = param_1->field_0x2f;
    (pTVar21->Data).Pad[0x28] = param_1->field_0x28;
    (pTVar21->Data).Pad[0x29] = uVar1;
    (pTVar21->Data).Pad[0x2a] = uVar6;
    (pTVar21->Data).Pad[0x2b] = uVar7;
    (pTVar21->Data).Pad[0x2c] = uVar8;
    (pTVar21->Data).Pad[0x2d] = uVar9;
    (pTVar21->Data).Pad[0x2e] = uVar10;
    (pTVar21->Data).Pad[0x2f] = uVar11;
  }
  uVar1 = param_1->field_0x39;
  (pTVar21->Data).Pad[0x38] = param_1->field_0x38;
  (pTVar21->Data).Pad[0x39] = uVar1;
  pTVar21[1].Data.Pad[0xc] = '\0';
  uVar2 = param_1->field_0x54;
  pTVar21[1].Data.Pad[0xc] = uVar2;
  if (uVar2 != '\0') {
    uVar4 = *(undefined8 *)&param_1->field_0x44;
    *(undefined8 *)((pTVar21->Data).Pad + 0x3c) = *(undefined8 *)&param_1->field_0x3c;
    *(undefined8 *)&pTVar21->field_0x44 = uVar4;
    uVar1 = param_1->field_0x4d;
    uVar6 = param_1->field_0x4e;
    uVar7 = param_1->field_0x4f;
    uVar8 = param_1->field_0x50;
    uVar9 = param_1->field_0x51;
    uVar10 = param_1->field_0x52;
    uVar11 = param_1->field_0x53;
    pTVar5 = pTVar21 + 1;
    (pTVar5->Data).Pad[4] = param_1->field_0x4c;
    (pTVar5->Data).Pad[5] = uVar1;
    (pTVar5->Data).Pad[6] = uVar6;
    (pTVar5->Data).Pad[7] = uVar7;
    (pTVar5->Data).Pad[8] = uVar8;
    (pTVar5->Data).Pad[9] = uVar9;
    (pTVar5->Data).Pad[10] = uVar10;
    (pTVar5->Data).Pad[0xb] = uVar11;
  }
  uVar1 = param_1->field_0x59;
  pTVar21[1].Data.Pad[0x10] = param_1->field_0x58;
  pTVar21[1].Data.Pad[0x11] = uVar1;
  pTVar21[1].Data.Pad[0x2c] = '\0';
  uVar2 = param_1->field_0x74;
  pTVar21[1].Data.Pad[0x2c] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x5d;
    uVar6 = param_1->field_0x5e;
    uVar7 = param_1->field_0x5f;
    uVar8 = param_1->field_0x60;
    uVar9 = param_1->field_0x61;
    uVar10 = param_1->field_0x62;
    uVar11 = param_1->field_0x63;
    uVar12 = param_1->field_0x64;
    uVar13 = param_1->field_0x65;
    uVar14 = param_1->field_0x66;
    uVar15 = param_1->field_0x67;
    uVar16 = param_1->field_0x68;
    uVar17 = param_1->field_0x69;
    uVar18 = param_1->field_0x6a;
    uVar19 = param_1->field_0x6b;
    pTVar5 = pTVar21 + 1;
    (pTVar5->Data).Pad[0x14] = param_1->field_0x5c;
    (pTVar5->Data).Pad[0x15] = uVar1;
    (pTVar5->Data).Pad[0x16] = uVar6;
    (pTVar5->Data).Pad[0x17] = uVar7;
    (pTVar5->Data).Pad[0x18] = uVar8;
    (pTVar5->Data).Pad[0x19] = uVar9;
    (pTVar5->Data).Pad[0x1a] = uVar10;
    (pTVar5->Data).Pad[0x1b] = uVar11;
    pTVar5 = pTVar21 + 1;
    (pTVar5->Data).Pad[0x1c] = uVar12;
    (pTVar5->Data).Pad[0x1d] = uVar13;
    (pTVar5->Data).Pad[0x1e] = uVar14;
    (pTVar5->Data).Pad[0x1f] = uVar15;
    (pTVar5->Data).Pad[0x20] = uVar16;
    (pTVar5->Data).Pad[0x21] = uVar17;
    (pTVar5->Data).Pad[0x22] = uVar18;
    (pTVar5->Data).Pad[0x23] = uVar19;
    uVar1 = param_1->field_0x6d;
    uVar6 = param_1->field_0x6e;
    uVar7 = param_1->field_0x6f;
    uVar8 = param_1->field_0x70;
    uVar9 = param_1->field_0x71;
    uVar10 = param_1->field_0x72;
    uVar11 = param_1->field_0x73;
    pTVar5 = pTVar21 + 1;
    (pTVar5->Data).Pad[0x24] = param_1->field_0x6c;
    (pTVar5->Data).Pad[0x25] = uVar1;
    (pTVar5->Data).Pad[0x26] = uVar6;
    (pTVar5->Data).Pad[0x27] = uVar7;
    (pTVar5->Data).Pad[0x28] = uVar8;
    (pTVar5->Data).Pad[0x29] = uVar9;
    (pTVar5->Data).Pad[0x2a] = uVar10;
    (pTVar5->Data).Pad[0x2b] = uVar11;
  }
  pTVar21[1].Data.Pad[0x30] = param_1->field_0x78;
  *(undefined ***)(pTVar21->Data).Pad =
       &
       ___7__TEntityBuilder_U__TAdd_UFGuid___MovieScene_UE__U__TAdd_P6APEAVUObject__PEAV1__Z_23_U__TAdd_UFMovieSceneObjectBindingID___23_U__TAdd_UFAttachmentComponent_MovieScene_UE___23__MovieScene_UE__6B_
  ;
  if (!this->bIsValid) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar20) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar21 = this;
  if (!this->bInline) {
    pTVar21 = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar20) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (pTVar21 != this) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar20) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAdd>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAdd>_> @ 1465d9ad0

void __thiscall
TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAdd>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAdd>_>
          (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *this,
          TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAdd>
          *param_1)

{
  undefined1 uVar1;
  uchar uVar2;
  code *pcVar3;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar4;
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
  undefined1 uVar18;
  bool bVar19;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar20;
  
  this->bInline = false;
  pTVar20 = FMemory::Malloc(0x68,8);
  this->bIsValid = true;
  *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad = pTVar20;
  if (this->bInline) {
    pTVar20 = this;
  }
  *(undefined ***)(pTVar20->Data).Pad =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02__U__TAdd_UFMovieScenePropertyBinding___MovieScene_UE__U__TAddConditional_P6APEAVUObject__PEAV1__Z_34_U__TAddConditional_UFGuid___34_UFAdd_34__MovieScene_UE__6B_
  ;
  uVar1 = param_1->field_0x9;
  (pTVar20->Data).Pad[8] = param_1->field_0x8;
  (pTVar20->Data).Pad[9] = uVar1;
  (pTVar20->Data).Pad[0x20] = '\0';
  uVar2 = param_1->field_0x20;
  (pTVar20->Data).Pad[0x20] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0xd;
    uVar5 = param_1->field_0xe;
    uVar6 = param_1->field_0xf;
    uVar7 = param_1->field_0x10;
    uVar8 = param_1->field_0x11;
    uVar9 = param_1->field_0x12;
    uVar10 = param_1->field_0x13;
    uVar11 = param_1->field_0x14;
    uVar12 = param_1->field_0x15;
    uVar13 = param_1->field_0x16;
    uVar14 = param_1->field_0x17;
    uVar15 = param_1->field_0x18;
    uVar16 = param_1->field_0x19;
    uVar17 = param_1->field_0x1a;
    uVar18 = param_1->field_0x1b;
    (pTVar20->Data).Pad[0xc] = param_1->field_0xc;
    (pTVar20->Data).Pad[0xd] = uVar1;
    (pTVar20->Data).Pad[0xe] = uVar5;
    (pTVar20->Data).Pad[0xf] = uVar6;
    (pTVar20->Data).Pad[0x10] = uVar7;
    (pTVar20->Data).Pad[0x11] = uVar8;
    (pTVar20->Data).Pad[0x12] = uVar9;
    (pTVar20->Data).Pad[0x13] = uVar10;
    (pTVar20->Data).Pad[0x14] = uVar11;
    (pTVar20->Data).Pad[0x15] = uVar12;
    (pTVar20->Data).Pad[0x16] = uVar13;
    (pTVar20->Data).Pad[0x17] = uVar14;
    (pTVar20->Data).Pad[0x18] = uVar15;
    (pTVar20->Data).Pad[0x19] = uVar16;
    (pTVar20->Data).Pad[0x1a] = uVar17;
    (pTVar20->Data).Pad[0x1b] = uVar18;
    uVar1 = param_1->field_0x1d;
    uVar5 = param_1->field_0x1e;
    uVar6 = param_1->field_0x1f;
    (pTVar20->Data).Pad[0x1c] = param_1->field_0x1c;
    (pTVar20->Data).Pad[0x1d] = uVar1;
    (pTVar20->Data).Pad[0x1e] = uVar5;
    (pTVar20->Data).Pad[0x1f] = uVar6;
  }
  uVar1 = param_1->field_0x29;
  uVar5 = param_1->field_0x2a;
  uVar6 = param_1->field_0x2b;
  (pTVar20->Data).Pad[0x28] = param_1->field_0x28;
  (pTVar20->Data).Pad[0x29] = uVar1;
  (pTVar20->Data).Pad[0x2a] = uVar5;
  (pTVar20->Data).Pad[0x2b] = uVar6;
  (pTVar20->Data).Pad[0x38] = '\0';
  uVar2 = param_1->field_0x38;
  (pTVar20->Data).Pad[0x38] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x31;
    uVar5 = param_1->field_0x32;
    uVar6 = param_1->field_0x33;
    uVar7 = param_1->field_0x34;
    uVar8 = param_1->field_0x35;
    uVar9 = param_1->field_0x36;
    uVar10 = param_1->field_0x37;
    (pTVar20->Data).Pad[0x30] = param_1->field_0x30;
    (pTVar20->Data).Pad[0x31] = uVar1;
    (pTVar20->Data).Pad[0x32] = uVar5;
    (pTVar20->Data).Pad[0x33] = uVar6;
    (pTVar20->Data).Pad[0x34] = uVar7;
    (pTVar20->Data).Pad[0x35] = uVar8;
    (pTVar20->Data).Pad[0x36] = uVar9;
    (pTVar20->Data).Pad[0x37] = uVar10;
  }
  *(undefined4 *)&pTVar20->field_0x40 = *(undefined4 *)&param_1->field_0x40;
  pTVar20[1].Data.Pad[0xc] = '\0';
  uVar2 = param_1->field_0x54;
  pTVar20[1].Data.Pad[0xc] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x4c;
    uVar5 = param_1->field_0x4d;
    uVar6 = param_1->field_0x4e;
    uVar7 = param_1->field_0x4f;
    uVar8 = param_1->field_0x50;
    uVar9 = param_1->field_0x51;
    uVar10 = param_1->field_0x52;
    uVar11 = param_1->field_0x53;
    *(undefined8 *)&pTVar20->field_0x44 = *(undefined8 *)&param_1->field_0x44;
    pTVar4 = pTVar20 + 1;
    (pTVar4->Data).Pad[4] = uVar1;
    (pTVar4->Data).Pad[5] = uVar5;
    (pTVar4->Data).Pad[6] = uVar6;
    (pTVar4->Data).Pad[7] = uVar7;
    (pTVar4->Data).Pad[8] = uVar8;
    (pTVar4->Data).Pad[9] = uVar9;
    (pTVar4->Data).Pad[10] = uVar10;
    (pTVar4->Data).Pad[0xb] = uVar11;
  }
  uVar1 = param_1->field_0x59;
  pTVar20[1].Data.Pad[0x10] = param_1->field_0x58;
  pTVar20[1].Data.Pad[0x11] = uVar1;
  pTVar20[1].Data.Pad[0x18] = param_1->field_0x60;
  *(undefined ***)(pTVar20->Data).Pad =
       &
       ___7__TEntityBuilder_U__TAdd_UFMovieScenePropertyBinding___MovieScene_UE__U__TAddConditional_P6APEAVUObject__PEAV1__Z_23_U__TAddConditional_UFGuid___23_UFAdd_23__MovieScene_UE__6B_
  ;
  if (!this->bIsValid) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar19) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar20 = this;
  if (!this->bInline) {
    pTVar20 = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar19) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (pTVar20 != this) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar19) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAddConditional,UE::MovieScene::TAdd<FMovieSceneAudioComponentData>,UE::MovieScene::TAdd<FMovieSceneAudioInputData>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAddConditional,UE::MovieScene::TAdd<FMovieSceneAudioComponentData>,UE::MovieScene::TAdd<FMovieSceneAudioInputData>_>_> @ 1465d9c40

void __thiscall
TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAddConditional,UE::MovieScene::TAdd<FMovieSceneAudioComponentData>,UE::MovieScene::TAdd<FMovieSceneAudioInputData>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAddConditional,UE::MovieScene::TAdd<FMovieSceneAudioComponentData>,UE::MovieScene::TAdd<FMovieSceneAudioInputData>_>_>
          (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *this,
          TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAddConditional,UE::MovieScene::TAdd<FMovieSceneAudioComponentData>,UE::MovieScene::TAdd<FMovieSceneAudioInputData>_>
          *param_1)

{
  undefined1 uVar1;
  uchar uVar2;
  UObject *pUVar3;
  code *pcVar4;
  undefined8 uVar5;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar6;
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
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  bool bVar21;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar22;
  
  this->bInline = false;
  pTVar22 = FMemory::Malloc(0xb0,8);
  this->bIsValid = true;
  *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad = pTVar22;
  if (this->bInline) {
    pTVar22 = this;
  }
  *(undefined ***)(pTVar22->Data).Pad =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02__U__TAddConditional_UFGuid___MovieScene_UE__UFAddConditional_34_U__TAdd_UFMovieSceneAudioComponentData___34_U__TAdd_UFMovieSceneAudioInputData___34__MovieScene_UE__6B_
  ;
  uVar1 = param_1->field_0x9;
  uVar7 = param_1->field_0xa;
  uVar8 = param_1->field_0xb;
  (pTVar22->Data).Pad[8] = param_1->field_0x8;
  (pTVar22->Data).Pad[9] = uVar1;
  (pTVar22->Data).Pad[10] = uVar7;
  (pTVar22->Data).Pad[0xb] = uVar8;
  (pTVar22->Data).Pad[0x1c] = '\0';
  uVar2 = param_1->field_0x1c;
  (pTVar22->Data).Pad[0x1c] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0xd;
    uVar7 = param_1->field_0xe;
    uVar8 = param_1->field_0xf;
    uVar9 = param_1->field_0x10;
    uVar10 = param_1->field_0x11;
    uVar11 = param_1->field_0x12;
    uVar12 = param_1->field_0x13;
    uVar13 = param_1->field_0x14;
    uVar14 = param_1->field_0x15;
    uVar15 = param_1->field_0x16;
    uVar16 = param_1->field_0x17;
    uVar17 = param_1->field_0x18;
    uVar18 = param_1->field_0x19;
    uVar19 = param_1->field_0x1a;
    uVar20 = param_1->field_0x1b;
    (pTVar22->Data).Pad[0xc] = param_1->field_0xc;
    (pTVar22->Data).Pad[0xd] = uVar1;
    (pTVar22->Data).Pad[0xe] = uVar7;
    (pTVar22->Data).Pad[0xf] = uVar8;
    (pTVar22->Data).Pad[0x10] = uVar9;
    (pTVar22->Data).Pad[0x11] = uVar10;
    (pTVar22->Data).Pad[0x12] = uVar11;
    (pTVar22->Data).Pad[0x13] = uVar12;
    (pTVar22->Data).Pad[0x14] = uVar13;
    (pTVar22->Data).Pad[0x15] = uVar14;
    (pTVar22->Data).Pad[0x16] = uVar15;
    (pTVar22->Data).Pad[0x17] = uVar16;
    (pTVar22->Data).Pad[0x18] = uVar17;
    (pTVar22->Data).Pad[0x19] = uVar18;
    (pTVar22->Data).Pad[0x1a] = uVar19;
    (pTVar22->Data).Pad[0x1b] = uVar20;
  }
  uVar1 = param_1->field_0x21;
  uVar7 = param_1->field_0x22;
  uVar8 = param_1->field_0x23;
  (pTVar22->Data).Pad[0x20] = param_1->field_0x20;
  (pTVar22->Data).Pad[0x21] = uVar1;
  (pTVar22->Data).Pad[0x22] = uVar7;
  (pTVar22->Data).Pad[0x23] = uVar8;
  uVar1 = param_1->field_0x29;
  (pTVar22->Data).Pad[0x28] = param_1->field_0x28;
  (pTVar22->Data).Pad[0x29] = uVar1;
  (pTVar22->Data).Pad[0x38] = '\0';
  uVar2 = param_1->field_0x38;
  (pTVar22->Data).Pad[0x38] = uVar2;
  if (uVar2 != '\0') {
    pUVar3 = *(UObject **)&param_1->field_0x30;
    *(UObject **)((pTVar22->Data).Pad + 0x30) = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
  }
  *(undefined2 *)&pTVar22->field_0x40 = *(undefined2 *)&param_1->field_0x40;
  pTVar22[2].Data.Pad[0x14] = '\0';
  uVar2 = param_1->field_0xa4;
  pTVar22[2].Data.Pad[0x14] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x4c;
    uVar7 = param_1->field_0x4d;
    uVar8 = param_1->field_0x4e;
    uVar9 = param_1->field_0x4f;
    uVar10 = param_1->field_0x50;
    uVar11 = param_1->field_0x51;
    uVar12 = param_1->field_0x52;
    uVar13 = param_1->field_0x53;
    *(undefined8 *)&pTVar22->field_0x44 = *(undefined8 *)&param_1->field_0x44;
    pTVar6 = pTVar22 + 1;
    (pTVar6->Data).Pad[4] = uVar1;
    (pTVar6->Data).Pad[5] = uVar7;
    (pTVar6->Data).Pad[6] = uVar8;
    (pTVar6->Data).Pad[7] = uVar9;
    (pTVar6->Data).Pad[8] = uVar10;
    (pTVar6->Data).Pad[9] = uVar11;
    (pTVar6->Data).Pad[10] = uVar12;
    (pTVar6->Data).Pad[0xb] = uVar13;
    uVar1 = param_1->field_0x55;
    uVar7 = param_1->field_0x56;
    uVar8 = param_1->field_0x57;
    uVar9 = param_1->field_0x58;
    uVar10 = param_1->field_0x59;
    uVar11 = param_1->field_0x5a;
    uVar12 = param_1->field_0x5b;
    uVar13 = param_1->field_0x5c;
    uVar14 = param_1->field_0x5d;
    uVar15 = param_1->field_0x5e;
    uVar16 = param_1->field_0x5f;
    uVar17 = param_1->field_0x60;
    uVar18 = param_1->field_0x61;
    uVar19 = param_1->field_0x62;
    uVar20 = param_1->field_0x63;
    pTVar6 = pTVar22 + 1;
    (pTVar6->Data).Pad[0xc] = param_1->field_0x54;
    (pTVar6->Data).Pad[0xd] = uVar1;
    (pTVar6->Data).Pad[0xe] = uVar7;
    (pTVar6->Data).Pad[0xf] = uVar8;
    (pTVar6->Data).Pad[0x10] = uVar9;
    (pTVar6->Data).Pad[0x11] = uVar10;
    (pTVar6->Data).Pad[0x12] = uVar11;
    (pTVar6->Data).Pad[0x13] = uVar12;
    pTVar6 = pTVar22 + 1;
    (pTVar6->Data).Pad[0x14] = uVar13;
    (pTVar6->Data).Pad[0x15] = uVar14;
    (pTVar6->Data).Pad[0x16] = uVar15;
    (pTVar6->Data).Pad[0x17] = uVar16;
    (pTVar6->Data).Pad[0x18] = uVar17;
    (pTVar6->Data).Pad[0x19] = uVar18;
    (pTVar6->Data).Pad[0x1a] = uVar19;
    (pTVar6->Data).Pad[0x1b] = uVar20;
    uVar1 = param_1->field_0x65;
    uVar7 = param_1->field_0x66;
    uVar8 = param_1->field_0x67;
    uVar9 = param_1->field_0x68;
    uVar10 = param_1->field_0x69;
    uVar11 = param_1->field_0x6a;
    uVar12 = param_1->field_0x6b;
    uVar13 = param_1->field_0x6c;
    uVar14 = param_1->field_0x6d;
    uVar15 = param_1->field_0x6e;
    uVar16 = param_1->field_0x6f;
    uVar17 = param_1->field_0x70;
    uVar18 = param_1->field_0x71;
    uVar19 = param_1->field_0x72;
    uVar20 = param_1->field_0x73;
    pTVar6 = pTVar22 + 1;
    (pTVar6->Data).Pad[0x1c] = param_1->field_0x64;
    (pTVar6->Data).Pad[0x1d] = uVar1;
    (pTVar6->Data).Pad[0x1e] = uVar7;
    (pTVar6->Data).Pad[0x1f] = uVar8;
    (pTVar6->Data).Pad[0x20] = uVar9;
    (pTVar6->Data).Pad[0x21] = uVar10;
    (pTVar6->Data).Pad[0x22] = uVar11;
    (pTVar6->Data).Pad[0x23] = uVar12;
    pTVar6 = pTVar22 + 1;
    (pTVar6->Data).Pad[0x24] = uVar13;
    (pTVar6->Data).Pad[0x25] = uVar14;
    (pTVar6->Data).Pad[0x26] = uVar15;
    (pTVar6->Data).Pad[0x27] = uVar16;
    (pTVar6->Data).Pad[0x28] = uVar17;
    (pTVar6->Data).Pad[0x29] = uVar18;
    (pTVar6->Data).Pad[0x2a] = uVar19;
    (pTVar6->Data).Pad[0x2b] = uVar20;
    uVar1 = param_1->field_0x75;
    uVar7 = param_1->field_0x76;
    uVar8 = param_1->field_0x77;
    uVar9 = param_1->field_0x78;
    uVar10 = param_1->field_0x79;
    uVar11 = param_1->field_0x7a;
    uVar12 = param_1->field_0x7b;
    uVar13 = param_1->field_0x7c;
    uVar14 = param_1->field_0x7d;
    uVar15 = param_1->field_0x7e;
    uVar16 = param_1->field_0x7f;
    uVar17 = param_1->field_0x80;
    uVar18 = param_1->field_0x81;
    uVar19 = param_1->field_0x82;
    uVar20 = param_1->field_0x83;
    pTVar6 = pTVar22 + 1;
    (pTVar6->Data).Pad[0x2c] = param_1->field_0x74;
    (pTVar6->Data).Pad[0x2d] = uVar1;
    (pTVar6->Data).Pad[0x2e] = uVar7;
    (pTVar6->Data).Pad[0x2f] = uVar8;
    (pTVar6->Data).Pad[0x30] = uVar9;
    (pTVar6->Data).Pad[0x31] = uVar10;
    (pTVar6->Data).Pad[0x32] = uVar11;
    (pTVar6->Data).Pad[0x33] = uVar12;
    pTVar6 = pTVar22 + 1;
    (pTVar6->Data).Pad[0x34] = uVar13;
    (pTVar6->Data).Pad[0x35] = uVar14;
    (pTVar6->Data).Pad[0x36] = uVar15;
    (pTVar6->Data).Pad[0x37] = uVar16;
    (pTVar6->Data).Pad[0x38] = uVar17;
    (pTVar6->Data).Pad[0x39] = uVar18;
    (pTVar6->Data).Pad[0x3a] = uVar19;
    (pTVar6->Data).Pad[0x3b] = uVar20;
    uVar5 = *(undefined8 *)&param_1->field_0x8c;
    *(undefined8 *)(pTVar22[1].Data.Pad + 0x3c) = *(undefined8 *)&param_1->field_0x84;
    *(undefined8 *)&pTVar22[1].field_0x44 = uVar5;
    uVar1 = param_1->field_0x95;
    uVar7 = param_1->field_0x96;
    uVar8 = param_1->field_0x97;
    uVar9 = param_1->field_0x98;
    uVar10 = param_1->field_0x99;
    uVar11 = param_1->field_0x9a;
    uVar12 = param_1->field_0x9b;
    uVar13 = param_1->field_0x9c;
    uVar14 = param_1->field_0x9d;
    uVar15 = param_1->field_0x9e;
    uVar16 = param_1->field_0x9f;
    uVar17 = param_1->field_0xa0;
    uVar18 = param_1->field_0xa1;
    uVar19 = param_1->field_0xa2;
    uVar20 = param_1->field_0xa3;
    pTVar6 = pTVar22 + 2;
    (pTVar6->Data).Pad[4] = param_1->field_0x94;
    (pTVar6->Data).Pad[5] = uVar1;
    (pTVar6->Data).Pad[6] = uVar7;
    (pTVar6->Data).Pad[7] = uVar8;
    (pTVar6->Data).Pad[8] = uVar9;
    (pTVar6->Data).Pad[9] = uVar10;
    (pTVar6->Data).Pad[10] = uVar11;
    (pTVar6->Data).Pad[0xb] = uVar12;
    pTVar6 = pTVar22 + 2;
    (pTVar6->Data).Pad[0xc] = uVar13;
    (pTVar6->Data).Pad[0xd] = uVar14;
    (pTVar6->Data).Pad[0xe] = uVar15;
    (pTVar6->Data).Pad[0xf] = uVar16;
    (pTVar6->Data).Pad[0x10] = uVar17;
    (pTVar6->Data).Pad[0x11] = uVar18;
    (pTVar6->Data).Pad[0x12] = uVar19;
    (pTVar6->Data).Pad[0x13] = uVar20;
  }
  pTVar22[2].Data.Pad[0x18] = param_1->field_0xa8;
  *(undefined ***)(pTVar22->Data).Pad =
       &
       ___7__TEntityBuilder_U__TAddConditional_UFGuid___MovieScene_UE__UFAddConditional_23_U__TAdd_UFMovieSceneAudioComponentData___23_U__TAdd_UFMovieSceneAudioInputData___23__MovieScene_UE__6B_
  ;
  if (!this->bIsValid) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar21) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar22 = this;
  if (!this->bInline) {
    pTVar22 = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar21) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (pTVar22 != this) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar21) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAddConditional,UE::MovieScene::TAdd<FMovieSceneAudioComponentData>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAddConditional,UE::MovieScene::TAdd<FMovieSceneAudioComponentData>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>_> @ 1465d9e00

void __thiscall
TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAddConditional,UE::MovieScene::TAdd<FMovieSceneAudioComponentData>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAddConditional,UE::MovieScene::TAdd<FMovieSceneAudioComponentData>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>_>
          (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *this,
          TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAddConditional,UE::MovieScene::TAdd<FMovieSceneAudioComponentData>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>
          *param_1)

{
  undefined1 uVar1;
  uchar uVar2;
  UObject *pUVar3;
  code *pcVar4;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar5;
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
  undefined1 uVar18;
  undefined1 uVar19;
  bool bVar20;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar21;
  
  this->bInline = false;
  pTVar21 = FMemory::Malloc(0x78,8);
  this->bIsValid = true;
  *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad = pTVar21;
  if (this->bInline) {
    pTVar21 = this;
  }
  *(undefined ***)(pTVar21->Data).Pad =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03__U__TAddConditional_UFGuid___MovieScene_UE__UFAddConditional_34_U__TAdd_UFMovieSceneAudioComponentData___34_U__TAdd_UFSourceFloatChannel_MovieScene_UE___34_U734__MovieScene_UE__6B_
  ;
  uVar1 = param_1->field_0x9;
  uVar6 = param_1->field_0xa;
  uVar7 = param_1->field_0xb;
  (pTVar21->Data).Pad[8] = param_1->field_0x8;
  (pTVar21->Data).Pad[9] = uVar1;
  (pTVar21->Data).Pad[10] = uVar6;
  (pTVar21->Data).Pad[0xb] = uVar7;
  (pTVar21->Data).Pad[0x1c] = '\0';
  uVar2 = param_1->field_0x1c;
  (pTVar21->Data).Pad[0x1c] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0xd;
    uVar6 = param_1->field_0xe;
    uVar7 = param_1->field_0xf;
    uVar8 = param_1->field_0x10;
    uVar9 = param_1->field_0x11;
    uVar10 = param_1->field_0x12;
    uVar11 = param_1->field_0x13;
    uVar12 = param_1->field_0x14;
    uVar13 = param_1->field_0x15;
    uVar14 = param_1->field_0x16;
    uVar15 = param_1->field_0x17;
    uVar16 = param_1->field_0x18;
    uVar17 = param_1->field_0x19;
    uVar18 = param_1->field_0x1a;
    uVar19 = param_1->field_0x1b;
    (pTVar21->Data).Pad[0xc] = param_1->field_0xc;
    (pTVar21->Data).Pad[0xd] = uVar1;
    (pTVar21->Data).Pad[0xe] = uVar6;
    (pTVar21->Data).Pad[0xf] = uVar7;
    (pTVar21->Data).Pad[0x10] = uVar8;
    (pTVar21->Data).Pad[0x11] = uVar9;
    (pTVar21->Data).Pad[0x12] = uVar10;
    (pTVar21->Data).Pad[0x13] = uVar11;
    (pTVar21->Data).Pad[0x14] = uVar12;
    (pTVar21->Data).Pad[0x15] = uVar13;
    (pTVar21->Data).Pad[0x16] = uVar14;
    (pTVar21->Data).Pad[0x17] = uVar15;
    (pTVar21->Data).Pad[0x18] = uVar16;
    (pTVar21->Data).Pad[0x19] = uVar17;
    (pTVar21->Data).Pad[0x1a] = uVar18;
    (pTVar21->Data).Pad[0x1b] = uVar19;
  }
  uVar1 = param_1->field_0x21;
  uVar6 = param_1->field_0x22;
  uVar7 = param_1->field_0x23;
  (pTVar21->Data).Pad[0x20] = param_1->field_0x20;
  (pTVar21->Data).Pad[0x21] = uVar1;
  (pTVar21->Data).Pad[0x22] = uVar6;
  (pTVar21->Data).Pad[0x23] = uVar7;
  uVar1 = param_1->field_0x29;
  (pTVar21->Data).Pad[0x28] = param_1->field_0x28;
  (pTVar21->Data).Pad[0x29] = uVar1;
  (pTVar21->Data).Pad[0x38] = '\0';
  uVar2 = param_1->field_0x38;
  (pTVar21->Data).Pad[0x38] = uVar2;
  if (uVar2 != '\0') {
    pUVar3 = *(UObject **)&param_1->field_0x30;
    *(UObject **)((pTVar21->Data).Pad + 0x30) = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
  }
  *(undefined2 *)&pTVar21->field_0x40 = *(undefined2 *)&param_1->field_0x40;
  pTVar21[1].Data.Pad[8] = '\0';
  uVar2 = param_1->field_0x50;
  pTVar21[1].Data.Pad[8] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x49;
    uVar6 = param_1->field_0x4a;
    uVar7 = param_1->field_0x4b;
    uVar8 = param_1->field_0x4c;
    uVar9 = param_1->field_0x4d;
    uVar10 = param_1->field_0x4e;
    uVar11 = param_1->field_0x4f;
    pTVar21[1].Data.Pad[0] = param_1->field_0x48;
    pTVar21[1].Data.Pad[1] = uVar1;
    pTVar21[1].Data.Pad[2] = uVar6;
    pTVar21[1].Data.Pad[3] = uVar7;
    pTVar21[1].Data.Pad[4] = uVar8;
    pTVar21[1].Data.Pad[5] = uVar9;
    pTVar21[1].Data.Pad[6] = uVar10;
    pTVar21[1].Data.Pad[7] = uVar11;
  }
  uVar1 = param_1->field_0x59;
  pTVar21[1].Data.Pad[0x10] = param_1->field_0x58;
  pTVar21[1].Data.Pad[0x11] = uVar1;
  pTVar21[1].Data.Pad[0x20] = '\0';
  uVar2 = param_1->field_0x68;
  pTVar21[1].Data.Pad[0x20] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x61;
    uVar6 = param_1->field_0x62;
    uVar7 = param_1->field_0x63;
    uVar8 = param_1->field_0x64;
    uVar9 = param_1->field_0x65;
    uVar10 = param_1->field_0x66;
    uVar11 = param_1->field_0x67;
    pTVar5 = pTVar21 + 1;
    (pTVar5->Data).Pad[0x18] = param_1->field_0x60;
    (pTVar5->Data).Pad[0x19] = uVar1;
    (pTVar5->Data).Pad[0x1a] = uVar6;
    (pTVar5->Data).Pad[0x1b] = uVar7;
    (pTVar5->Data).Pad[0x1c] = uVar8;
    (pTVar5->Data).Pad[0x1d] = uVar9;
    (pTVar5->Data).Pad[0x1e] = uVar10;
    (pTVar5->Data).Pad[0x1f] = uVar11;
  }
  pTVar21[1].Data.Pad[0x28] = param_1->field_0x70;
  *(undefined ***)(pTVar21->Data).Pad =
       &
       ___7__TEntityBuilder_U__TAddConditional_UFGuid___MovieScene_UE__UFAddConditional_23_U__TAdd_UFMovieSceneAudioComponentData___23_U__TAdd_UFSourceFloatChannel_MovieScene_UE___23_U623__MovieScene_UE__6B_
  ;
  if (!this->bIsValid) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar20) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar21 = this;
  if (!this->bInline) {
    pTVar21 = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar20) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (pTVar21 != this) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar20) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAddConditional,UE::MovieScene::TAdd<FMovieSceneAudioComponentData>,UE::MovieScene::TAdd<FName>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAddConditional,UE::MovieScene::TAdd<FMovieSceneAudioComponentData>,UE::MovieScene::TAdd<FName>_>_> @ 1465d9fa0

void __thiscall
TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAddConditional,UE::MovieScene::TAdd<FMovieSceneAudioComponentData>,UE::MovieScene::TAdd<FName>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAddConditional,UE::MovieScene::TAdd<FMovieSceneAudioComponentData>,UE::MovieScene::TAdd<FName>_>_>
          (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *this,
          TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAddConditional,UE::MovieScene::TAdd<FMovieSceneAudioComponentData>,UE::MovieScene::TAdd<FName>_>
          *param_1)

{
  undefined1 uVar1;
  uchar uVar2;
  UObject *pUVar3;
  code *pcVar4;
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
  undefined1 uVar18;
  bool bVar19;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar20;
  
  this->bInline = false;
  pTVar20 = FMemory::Malloc(0x58,8);
  this->bIsValid = true;
  *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad = pTVar20;
  if (this->bInline) {
    pTVar20 = this;
  }
  *(undefined ***)(pTVar20->Data).Pad =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02__U__TAddConditional_UFGuid___MovieScene_UE__UFAddConditional_34_U__TAdd_UFMovieSceneAudioComponentData___34_U__TAdd_VFName___34__MovieScene_UE__6B_
  ;
  uVar1 = param_1->field_0x9;
  uVar5 = param_1->field_0xa;
  uVar6 = param_1->field_0xb;
  (pTVar20->Data).Pad[8] = param_1->field_0x8;
  (pTVar20->Data).Pad[9] = uVar1;
  (pTVar20->Data).Pad[10] = uVar5;
  (pTVar20->Data).Pad[0xb] = uVar6;
  (pTVar20->Data).Pad[0x1c] = '\0';
  uVar2 = param_1->field_0x1c;
  (pTVar20->Data).Pad[0x1c] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0xd;
    uVar5 = param_1->field_0xe;
    uVar6 = param_1->field_0xf;
    uVar7 = param_1->field_0x10;
    uVar8 = param_1->field_0x11;
    uVar9 = param_1->field_0x12;
    uVar10 = param_1->field_0x13;
    uVar11 = param_1->field_0x14;
    uVar12 = param_1->field_0x15;
    uVar13 = param_1->field_0x16;
    uVar14 = param_1->field_0x17;
    uVar15 = param_1->field_0x18;
    uVar16 = param_1->field_0x19;
    uVar17 = param_1->field_0x1a;
    uVar18 = param_1->field_0x1b;
    (pTVar20->Data).Pad[0xc] = param_1->field_0xc;
    (pTVar20->Data).Pad[0xd] = uVar1;
    (pTVar20->Data).Pad[0xe] = uVar5;
    (pTVar20->Data).Pad[0xf] = uVar6;
    (pTVar20->Data).Pad[0x10] = uVar7;
    (pTVar20->Data).Pad[0x11] = uVar8;
    (pTVar20->Data).Pad[0x12] = uVar9;
    (pTVar20->Data).Pad[0x13] = uVar10;
    (pTVar20->Data).Pad[0x14] = uVar11;
    (pTVar20->Data).Pad[0x15] = uVar12;
    (pTVar20->Data).Pad[0x16] = uVar13;
    (pTVar20->Data).Pad[0x17] = uVar14;
    (pTVar20->Data).Pad[0x18] = uVar15;
    (pTVar20->Data).Pad[0x19] = uVar16;
    (pTVar20->Data).Pad[0x1a] = uVar17;
    (pTVar20->Data).Pad[0x1b] = uVar18;
  }
  uVar1 = param_1->field_0x21;
  uVar5 = param_1->field_0x22;
  uVar6 = param_1->field_0x23;
  (pTVar20->Data).Pad[0x20] = param_1->field_0x20;
  (pTVar20->Data).Pad[0x21] = uVar1;
  (pTVar20->Data).Pad[0x22] = uVar5;
  (pTVar20->Data).Pad[0x23] = uVar6;
  uVar1 = param_1->field_0x29;
  (pTVar20->Data).Pad[0x28] = param_1->field_0x28;
  (pTVar20->Data).Pad[0x29] = uVar1;
  (pTVar20->Data).Pad[0x38] = '\0';
  uVar2 = param_1->field_0x38;
  (pTVar20->Data).Pad[0x38] = uVar2;
  if (uVar2 != '\0') {
    pUVar3 = *(UObject **)&param_1->field_0x30;
    *(UObject **)((pTVar20->Data).Pad + 0x30) = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
  }
  *(undefined2 *)&pTVar20->field_0x40 = *(undefined2 *)&param_1->field_0x40;
  *(undefined4 *)&pTVar20->field_0x44 = 0xffffffff;
  pTVar20[1].Data.Pad[0] = '\0';
  pTVar20[1].Data.Pad[1] = '\0';
  pTVar20[1].Data.Pad[2] = '\0';
  pTVar20[1].Data.Pad[3] = '\0';
  if (*(int *)&param_1->field_0x44 != -1) {
    *(undefined8 *)&pTVar20->field_0x44 = *(undefined8 *)&param_1->field_0x44;
  }
  pTVar20[1].Data.Pad[8] = param_1->field_0x50;
  *(undefined ***)(pTVar20->Data).Pad =
       &
       ___7__TEntityBuilder_U__TAddConditional_UFGuid___MovieScene_UE__UFAddConditional_23_U__TAdd_UFMovieSceneAudioComponentData___23_U__TAdd_VFName___23__MovieScene_UE__6B_
  ;
  if (!this->bIsValid) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar19) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar20 = this;
  if (!this->bInline) {
    pTVar20 = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar19) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (pTVar20 != this) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar19) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// InitializeFrom<FParticleParameterPreAnimatedToken,FParticleParameterPreAnimatedToken> @ 1465da120

void __thiscall
TInlineValue<IMovieScenePreAnimatedToken,32,8>::
InitializeFrom<FParticleParameterPreAnimatedToken,FParticleParameterPreAnimatedToken>
          (TInlineValue<IMovieScenePreAnimatedToken,32,8> *this,
          FParticleParameterPreAnimatedToken *param_1)

{
  undefined1 uVar1;
  code *pcVar2;
  bool bVar3;
  TInlineValue<IMovieScenePreAnimatedToken,32,8> *pTVar4;
  
  this->bInline = false;
  pTVar4 = FMemory::Malloc(0x38,8);
  this->bIsValid = true;
  *(TInlineValue<IMovieScenePreAnimatedToken,32,8> **)(this->Data).Pad = pTVar4;
  if (this->bInline) {
    pTVar4 = this;
  }
  (pTVar4->Data).Pad[8] = '\0';
  (pTVar4->Data).Pad[9] = '\0';
  (pTVar4->Data).Pad[10] = '\0';
  (pTVar4->Data).Pad[0xb] = '\0';
  (pTVar4->Data).Pad[0xc] = '\0';
  (pTVar4->Data).Pad[0xd] = '\0';
  (pTVar4->Data).Pad[0xe] = '\0';
  (pTVar4->Data).Pad[0xf] = '\0';
  *(undefined ***)(pTVar4->Data).Pad = &___7FParticleParameterPreAnimatedToken__6B_;
  *(FScriptContainerElement **)((pTVar4->Data).Pad + 8) =
       (param_1->ScalarValues).AllocatorInstance.Data;
  (param_1->ScalarValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)((pTVar4->Data).Pad + 0x10) = (param_1->ScalarValues).ArrayNum;
  *(int *)((pTVar4->Data).Pad + 0x14) = (param_1->ScalarValues).ArrayMax;
  (param_1->ScalarValues).ArrayNum = 0;
  (param_1->ScalarValues).ArrayMax = 0;
  (pTVar4->Data).Pad[0x18] = '\0';
  (pTVar4->Data).Pad[0x19] = '\0';
  (pTVar4->Data).Pad[0x1a] = '\0';
  (pTVar4->Data).Pad[0x1b] = '\0';
  (pTVar4->Data).Pad[0x1c] = '\0';
  (pTVar4->Data).Pad[0x1d] = '\0';
  (pTVar4->Data).Pad[0x1e] = '\0';
  (pTVar4->Data).Pad[0x1f] = '\0';
  *(FScriptContainerElement **)((pTVar4->Data).Pad + 0x18) =
       (param_1->VectorValues).AllocatorInstance.Data;
  (param_1->VectorValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&pTVar4->field_0x20 = (param_1->VectorValues).ArrayNum;
  *(int *)&pTVar4->field_0x24 = (param_1->VectorValues).ArrayMax;
  (param_1->VectorValues).ArrayNum = 0;
  (param_1->VectorValues).ArrayMax = 0;
  pTVar4[1].Data.Pad[0] = '\0';
  pTVar4[1].Data.Pad[1] = '\0';
  pTVar4[1].Data.Pad[2] = '\0';
  pTVar4[1].Data.Pad[3] = '\0';
  pTVar4[1].Data.Pad[4] = '\0';
  pTVar4[1].Data.Pad[5] = '\0';
  pTVar4[1].Data.Pad[6] = '\0';
  pTVar4[1].Data.Pad[7] = '\0';
  *(FScriptContainerElement **)pTVar4[1].Data.Pad = (param_1->ColorValues).AllocatorInstance.Data;
  (param_1->ColorValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pTVar4[1].Data.Pad + 8) = (param_1->ColorValues).ArrayNum;
  *(int *)(pTVar4[1].Data.Pad + 0xc) = (param_1->ColorValues).ArrayMax;
  (param_1->ColorValues).ArrayNum = 0;
  (param_1->ColorValues).ArrayMax = 0;
  if (!this->bIsValid) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar4 = this;
  if (!this->bInline) {
    pTVar4 = *(TInlineValue<IMovieScenePreAnimatedToken,32,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<IMovieScenePreAnimatedToken,32,8> **)(this->Data).Pad;
  }
  if (pTVar4 != this) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// ~TInlineValue<FMovieSceneChannelValueHelper::IChannelValueHelper,64,8> @ 14661c010

void __thiscall
TInlineValue<FMovieSceneChannelValueHelper::IChannelValueHelper,64,8>::
~TInlineValue<FMovieSceneChannelValueHelper::IChannelValueHelper,64,8>
          (TInlineValue<FMovieSceneChannelValueHelper::IChannelValueHelper,64,8> *this)

{
  undefined1 uVar1;
  TInlineValue<FMovieSceneChannelValueHelper::IChannelValueHelper,64,8> *pTVar2;
  
  uVar1 = this->field_0x40;
  if (this->bIsValid) {
    pTVar2 = this;
    if (!this->bInline) {
      pTVar2 = *(TInlineValue<FMovieSceneChannelValueHelper::IChannelValueHelper,64,8> **)
                (this->Data).Pad;
    }
    this->field_0x40 = uVar1 & 0xfe;
    (*(code *)**(undefined8 **)(pTVar2->Data).Pad)(pTVar2,0);
    if (!this->bInline) {
      FMemory::Free(*(void **)(this->Data).Pad);
      return;
    }
  }
  return;
}

// operator= @ 146621e60

TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> * __thiscall
TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::operator=
          (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *this,
          TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *pTVar3;
  
  uVar1 = this->field_0x20;
  if (this->bIsValid) {
    pTVar3 = this;
    if (!this->bInline) {
      pTVar3 = *(TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> **)(this->Data).Pad;
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

// GetValue @ 146699d40

IPropertyComponentHandler * __thiscall
TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::GetValue
          (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *this)

{
  code *pcVar1;
  bool bVar2;
  IPropertyComponentHandler *pIVar3;
  
  if (!this->bIsValid) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (IPropertyComponentHandler *)(*pcVar1)();
      return pIVar3;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> **)(this->Data).Pad;
  }
  return (IPropertyComponentHandler *)this;
}

// TInlineValue<UE::MovieScene::IEntityBuilder,64,8><UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAdd>_&,void> @ 146729220

TInlineValue<UE::MovieScene::IEntityBuilder,64,8> * __thiscall
TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
TInlineValue<UE::MovieScene::IEntityBuilder,64,8><UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAdd>_&,void>
          (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *this,
          TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAdd>
          *param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  uchar uVar3;
  code *pcVar4;
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
  undefined1 uVar18;
  bool bVar19;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar20;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar21;
  
  this->bIsValid = false;
  this->bInline = false;
  pTVar20 = FMemory::Malloc(0x48,8);
  this->bIsValid = true;
  *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad = pTVar20;
  if (this->bInline) {
    pTVar20 = this;
  }
  *(undefined ***)(pTVar20->Data).Pad =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01__U__TAdd_UFMovieScenePropertyBinding___MovieScene_UE__U__TAddConditional_UFGuid___34_UFAdd_34__MovieScene_UE__6B_
  ;
  uVar2 = param_1->field_0x9;
  (pTVar20->Data).Pad[8] = param_1->field_0x8;
  (pTVar20->Data).Pad[9] = uVar2;
  (pTVar20->Data).Pad[0x20] = '\0';
  uVar3 = param_1->field_0x20;
  (pTVar20->Data).Pad[0x20] = uVar3;
  if (uVar3 != '\0') {
    uVar2 = param_1->field_0xd;
    uVar5 = param_1->field_0xe;
    uVar6 = param_1->field_0xf;
    uVar7 = param_1->field_0x10;
    uVar8 = param_1->field_0x11;
    uVar9 = param_1->field_0x12;
    uVar10 = param_1->field_0x13;
    uVar11 = param_1->field_0x14;
    uVar12 = param_1->field_0x15;
    uVar13 = param_1->field_0x16;
    uVar14 = param_1->field_0x17;
    uVar15 = param_1->field_0x18;
    uVar16 = param_1->field_0x19;
    uVar17 = param_1->field_0x1a;
    uVar18 = param_1->field_0x1b;
    (pTVar20->Data).Pad[0xc] = param_1->field_0xc;
    (pTVar20->Data).Pad[0xd] = uVar2;
    (pTVar20->Data).Pad[0xe] = uVar5;
    (pTVar20->Data).Pad[0xf] = uVar6;
    (pTVar20->Data).Pad[0x10] = uVar7;
    (pTVar20->Data).Pad[0x11] = uVar8;
    (pTVar20->Data).Pad[0x12] = uVar9;
    (pTVar20->Data).Pad[0x13] = uVar10;
    (pTVar20->Data).Pad[0x14] = uVar11;
    (pTVar20->Data).Pad[0x15] = uVar12;
    (pTVar20->Data).Pad[0x16] = uVar13;
    (pTVar20->Data).Pad[0x17] = uVar14;
    (pTVar20->Data).Pad[0x18] = uVar15;
    (pTVar20->Data).Pad[0x19] = uVar16;
    (pTVar20->Data).Pad[0x1a] = uVar17;
    (pTVar20->Data).Pad[0x1b] = uVar18;
    uVar2 = param_1->field_0x1d;
    uVar5 = param_1->field_0x1e;
    uVar6 = param_1->field_0x1f;
    (pTVar20->Data).Pad[0x1c] = param_1->field_0x1c;
    (pTVar20->Data).Pad[0x1d] = uVar2;
    (pTVar20->Data).Pad[0x1e] = uVar5;
    (pTVar20->Data).Pad[0x1f] = uVar6;
  }
  uVar2 = param_1->field_0x25;
  uVar5 = param_1->field_0x26;
  uVar6 = param_1->field_0x27;
  (pTVar20->Data).Pad[0x24] = param_1->field_0x24;
  (pTVar20->Data).Pad[0x25] = uVar2;
  (pTVar20->Data).Pad[0x26] = uVar5;
  (pTVar20->Data).Pad[0x27] = uVar6;
  (pTVar20->Data).Pad[0x38] = '\0';
  uVar3 = param_1->field_0x38;
  (pTVar20->Data).Pad[0x38] = uVar3;
  if (uVar3 != '\0') {
    uVar2 = param_1->field_0x29;
    uVar5 = param_1->field_0x2a;
    uVar6 = param_1->field_0x2b;
    uVar7 = param_1->field_0x2c;
    uVar8 = param_1->field_0x2d;
    uVar9 = param_1->field_0x2e;
    uVar10 = param_1->field_0x2f;
    uVar11 = param_1->field_0x30;
    uVar12 = param_1->field_0x31;
    uVar13 = param_1->field_0x32;
    uVar14 = param_1->field_0x33;
    uVar15 = param_1->field_0x34;
    uVar16 = param_1->field_0x35;
    uVar17 = param_1->field_0x36;
    uVar18 = param_1->field_0x37;
    (pTVar20->Data).Pad[0x28] = param_1->field_0x28;
    (pTVar20->Data).Pad[0x29] = uVar2;
    (pTVar20->Data).Pad[0x2a] = uVar5;
    (pTVar20->Data).Pad[0x2b] = uVar6;
    (pTVar20->Data).Pad[0x2c] = uVar7;
    (pTVar20->Data).Pad[0x2d] = uVar8;
    (pTVar20->Data).Pad[0x2e] = uVar9;
    (pTVar20->Data).Pad[0x2f] = uVar10;
    (pTVar20->Data).Pad[0x30] = uVar11;
    (pTVar20->Data).Pad[0x31] = uVar12;
    (pTVar20->Data).Pad[0x32] = uVar13;
    (pTVar20->Data).Pad[0x33] = uVar14;
    (pTVar20->Data).Pad[0x34] = uVar15;
    (pTVar20->Data).Pad[0x35] = uVar16;
    (pTVar20->Data).Pad[0x36] = uVar17;
    (pTVar20->Data).Pad[0x37] = uVar18;
  }
  uVar2 = param_1->field_0x3d;
  (pTVar20->Data).Pad[0x3c] = param_1->field_0x3c;
  (pTVar20->Data).Pad[0x3d] = uVar2;
  pTVar20->field_0x40 = param_1->field_0x40;
  *(undefined ***)(pTVar20->Data).Pad =
       &
       ___7__TEntityBuilder_U__TAdd_UFMovieScenePropertyBinding___MovieScene_UE__U__TAddConditional_UFGuid___23_UFAdd_23__MovieScene_UE__6B_
  ;
  if (!this->bIsValid) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar19) {
      pcVar4 = (code *)swi(3);
      pTVar20 = (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *)(*pcVar4)();
      return pTVar20;
    }
  }
  pTVar20 = this;
  if (!this->bInline) {
    pTVar20 = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar19) {
      pcVar4 = (code *)swi(3);
      pTVar20 = (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *)(*pcVar4)();
      return pTVar20;
    }
  }
  pTVar21 = this;
  if (!this->bInline) {
    pTVar21 = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (pTVar20 != pTVar21) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar19) {
      pcVar4 = (code *)swi(3);
      pTVar20 = (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *)(*pcVar4)();
      return pTVar20;
    }
  }
  return this;
}

// Emplace<UE::MovieScene::TEntityGroupingHandler<UE::MovieScene::FCustomPrimitiveDataGroupingPolicy,UObject_*,FName>,UE::MovieScene::FCustomPrimitiveDataGroupingPolicy,UE::MovieScene::TComponentTypeID<UObject_*>_&,UE::MovieScene::TComponentTypeID<FName>_&> @ 14673f740

void __thiscall
TInlineValue<UE::MovieScene::IEntityGroupingHandler,256,8>::
Emplace<UE::MovieScene::TEntityGroupingHandler<UE::MovieScene::FCustomPrimitiveDataGroupingPolicy,UObject_*,FName>,UE::MovieScene::FCustomPrimitiveDataGroupingPolicy,UE::MovieScene::TComponentTypeID<UObject_*>_&,UE::MovieScene::TComponentTypeID<FName>_&>
          (TInlineValue<UE::MovieScene::IEntityGroupingHandler,256,8> *this,
          FCustomPrimitiveDataGroupingPolicy *param_1,TComponentTypeID<UObject_*> *param_2,
          TComponentTypeID<FName> *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  TComponentTypeID<UObject_*> TVar3;
  TComponentTypeID<FName> TVar4;
  code *pcVar5;
  bool bVar6;
  TInlineValue<UE::MovieScene::IEntityGroupingHandler,256,8> *pTVar7;
  
  uVar2 = this->field_0x100;
  if (this->bIsValid) {
    pTVar7 = this;
    if (!this->bInline) {
      pTVar7 = *(TInlineValue<UE::MovieScene::IEntityGroupingHandler,256,8> **)(this->Data).Pad;
    }
    this->field_0x100 = uVar2 & 0xfe;
    (*(code *)**(undefined8 **)(pTVar7->Data).Pad)();
    if (!this->bInline) {
      FMemory::Free(*(void **)(this->Data).Pad);
    }
  }
  this->bIsValid = true;
  this->bInline = true;
  TVar3 = *param_2;
  TVar4 = *param_3;
  (this->Data).Pad[8] = '\0';
  (this->Data).Pad[9] = '\0';
  (this->Data).Pad[10] = '\0';
  (this->Data).Pad[0xb] = '\0';
  (this->Data).Pad[0xc] = '\0';
  (this->Data).Pad[0xd] = '\0';
  (this->Data).Pad[0xe] = '\0';
  (this->Data).Pad[0xf] = '\0';
  (this->Data).Pad[0x10] = '\0';
  (this->Data).Pad[0x11] = '\0';
  (this->Data).Pad[0x12] = '\0';
  (this->Data).Pad[0x13] = '\0';
  (this->Data).Pad[0x14] = '\0';
  (this->Data).Pad[0x15] = '\0';
  (this->Data).Pad[0x16] = '\0';
  (this->Data).Pad[0x17] = '\0';
  (this->Data).Pad[0x28] = '\0';
  (this->Data).Pad[0x29] = '\0';
  (this->Data).Pad[0x2a] = '\0';
  (this->Data).Pad[0x2b] = '\0';
  (this->Data).Pad[0x2c] = '\0';
  (this->Data).Pad[0x2d] = '\0';
  (this->Data).Pad[0x2e] = '\0';
  (this->Data).Pad[0x2f] = '\0';
  (this->Data).Pad[0x30] = '\0';
  (this->Data).Pad[0x31] = '\0';
  (this->Data).Pad[0x32] = '\0';
  (this->Data).Pad[0x33] = '\0';
  (this->Data).Pad[0x34] = 0x80;
  (this->Data).Pad[0x35] = '\0';
  (this->Data).Pad[0x36] = '\0';
  (this->Data).Pad[0x37] = '\0';
  (this->Data).Pad[0x38] = 0xff;
  (this->Data).Pad[0x39] = 0xff;
  (this->Data).Pad[0x3a] = 0xff;
  (this->Data).Pad[0x3b] = 0xff;
  (this->Data).Pad[0x3c] = '\0';
  (this->Data).Pad[0x3d] = '\0';
  (this->Data).Pad[0x3e] = '\0';
  (this->Data).Pad[0x3f] = '\0';
  (this->Data).Pad[0x48] = '\0';
  (this->Data).Pad[0x49] = '\0';
  (this->Data).Pad[0x4a] = '\0';
  (this->Data).Pad[0x4b] = '\0';
  (this->Data).Pad[0x4c] = '\0';
  (this->Data).Pad[0x4d] = '\0';
  (this->Data).Pad[0x4e] = '\0';
  (this->Data).Pad[0x4f] = '\0';
  (this->Data).Pad[0x50] = '\0';
  (this->Data).Pad[0x51] = '\0';
  (this->Data).Pad[0x52] = '\0';
  (this->Data).Pad[0x53] = '\0';
  (this->Data).Pad[0x58] = '\0';
  (this->Data).Pad[0x59] = '\0';
  (this->Data).Pad[0x5a] = '\0';
  (this->Data).Pad[0x5b] = '\0';
  (this->Data).Pad[0x5c] = '\0';
  (this->Data).Pad[0x5d] = '\0';
  (this->Data).Pad[0x5e] = '\0';
  (this->Data).Pad[0x5f] = '\0';
  (this->Data).Pad[0x60] = '\0';
  (this->Data).Pad[0x61] = '\0';
  (this->Data).Pad[0x62] = '\0';
  (this->Data).Pad[99] = '\0';
  (this->Data).Pad[100] = '\0';
  (this->Data).Pad[0x65] = '\0';
  (this->Data).Pad[0x66] = '\0';
  (this->Data).Pad[0x67] = '\0';
  (this->Data).Pad[0x78] = '\0';
  (this->Data).Pad[0x79] = '\0';
  (this->Data).Pad[0x7a] = '\0';
  (this->Data).Pad[0x7b] = '\0';
  (this->Data).Pad[0x7c] = '\0';
  (this->Data).Pad[0x7d] = '\0';
  (this->Data).Pad[0x7e] = '\0';
  (this->Data).Pad[0x7f] = '\0';
  (this->Data).Pad[0x80] = '\0';
  (this->Data).Pad[0x81] = '\0';
  (this->Data).Pad[0x82] = '\0';
  (this->Data).Pad[0x83] = '\0';
  (this->Data).Pad[0x84] = 0x80;
  (this->Data).Pad[0x85] = '\0';
  (this->Data).Pad[0x86] = '\0';
  (this->Data).Pad[0x87] = '\0';
  (this->Data).Pad[0x88] = 0xff;
  (this->Data).Pad[0x89] = 0xff;
  (this->Data).Pad[0x8a] = 0xff;
  (this->Data).Pad[0x8b] = 0xff;
  (this->Data).Pad[0x8c] = '\0';
  (this->Data).Pad[0x8d] = '\0';
  (this->Data).Pad[0x8e] = '\0';
  (this->Data).Pad[0x8f] = '\0';
  (this->Data).Pad[0x98] = '\0';
  (this->Data).Pad[0x99] = '\0';
  (this->Data).Pad[0x9a] = '\0';
  (this->Data).Pad[0x9b] = '\0';
  (this->Data).Pad[0x9c] = '\0';
  (this->Data).Pad[0x9d] = '\0';
  (this->Data).Pad[0x9e] = '\0';
  (this->Data).Pad[0x9f] = '\0';
  (this->Data).Pad[0xa0] = '\0';
  (this->Data).Pad[0xa1] = '\0';
  (this->Data).Pad[0xa2] = '\0';
  (this->Data).Pad[0xa3] = '\0';
  *(TComponentTypeID<UObject_*> *)((this->Data).Pad + 0xaa) = TVar3;
  *(TComponentTypeID<FName> *)((this->Data).Pad + 0xac) = TVar4;
  *(undefined ***)(this->Data).Pad =
       &
       ___7__TEntityGroupingHandler_UFCustomPrimitiveDataGroupingPolicy_MovieScene_UE__PEAVUObject__VFName___MovieScene_UE__6B_
  ;
  if (!this->bIsValid) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar7 = this;
  if (!this->bInline) {
    pTVar7 = *(TInlineValue<UE::MovieScene::IEntityGroupingHandler,256,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<UE::MovieScene::IEntityGroupingHandler,256,8> **)(this->Data).Pad;
  }
  if (pTVar7 != this) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

// Emplace<UE::MovieScene::TEntityGroupingHandler<UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>::FMaterialGroupingPolicy,UObject_*,FComponentMaterialInfo>,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>::FMaterialGroupingPolicy,UE::MovieScene::TComponentTypeID<UObject_*>_&,UE::MovieScene::TComponentTypeID<FComponentMaterialInfo>_&> @ 14673f8d0

void __thiscall
TInlineValue<UE::MovieScene::IEntityGroupingHandler,256,8>::
Emplace<UE::MovieScene::TEntityGroupingHandler<UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>::FMaterialGroupingPolicy,UObject_*,FComponentMaterialInfo>,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>::FMaterialGroupingPolicy,UE::MovieScene::TComponentTypeID<UObject_*>_&,UE::MovieScene::TComponentTypeID<FComponentMaterialInfo>_&>
          (TInlineValue<UE::MovieScene::IEntityGroupingHandler,256,8> *this,
          FMaterialGroupingPolicy *param_1,TComponentTypeID<UObject_*> *param_2,
          TComponentTypeID<FComponentMaterialInfo> *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  TComponentTypeID<UObject_*> TVar3;
  TComponentTypeID<FComponentMaterialInfo> TVar4;
  code *pcVar5;
  bool bVar6;
  TInlineValue<UE::MovieScene::IEntityGroupingHandler,256,8> *pTVar7;
  
  uVar2 = this->field_0x100;
  if (this->bIsValid) {
    pTVar7 = this;
    if (!this->bInline) {
      pTVar7 = *(TInlineValue<UE::MovieScene::IEntityGroupingHandler,256,8> **)(this->Data).Pad;
    }
    this->field_0x100 = uVar2 & 0xfe;
    (*(code *)**(undefined8 **)(pTVar7->Data).Pad)();
    if (!this->bInline) {
      FMemory::Free(*(void **)(this->Data).Pad);
    }
  }
  this->bIsValid = true;
  this->bInline = true;
  TVar3 = *param_2;
  TVar4 = *param_3;
  (this->Data).Pad[8] = '\0';
  (this->Data).Pad[9] = '\0';
  (this->Data).Pad[10] = '\0';
  (this->Data).Pad[0xb] = '\0';
  (this->Data).Pad[0xc] = '\0';
  (this->Data).Pad[0xd] = '\0';
  (this->Data).Pad[0xe] = '\0';
  (this->Data).Pad[0xf] = '\0';
  (this->Data).Pad[0x10] = '\0';
  (this->Data).Pad[0x11] = '\0';
  (this->Data).Pad[0x12] = '\0';
  (this->Data).Pad[0x13] = '\0';
  (this->Data).Pad[0x14] = '\0';
  (this->Data).Pad[0x15] = '\0';
  (this->Data).Pad[0x16] = '\0';
  (this->Data).Pad[0x17] = '\0';
  (this->Data).Pad[0x28] = '\0';
  (this->Data).Pad[0x29] = '\0';
  (this->Data).Pad[0x2a] = '\0';
  (this->Data).Pad[0x2b] = '\0';
  (this->Data).Pad[0x2c] = '\0';
  (this->Data).Pad[0x2d] = '\0';
  (this->Data).Pad[0x2e] = '\0';
  (this->Data).Pad[0x2f] = '\0';
  (this->Data).Pad[0x30] = '\0';
  (this->Data).Pad[0x31] = '\0';
  (this->Data).Pad[0x32] = '\0';
  (this->Data).Pad[0x33] = '\0';
  (this->Data).Pad[0x34] = 0x80;
  (this->Data).Pad[0x35] = '\0';
  (this->Data).Pad[0x36] = '\0';
  (this->Data).Pad[0x37] = '\0';
  (this->Data).Pad[0x38] = 0xff;
  (this->Data).Pad[0x39] = 0xff;
  (this->Data).Pad[0x3a] = 0xff;
  (this->Data).Pad[0x3b] = 0xff;
  (this->Data).Pad[0x3c] = '\0';
  (this->Data).Pad[0x3d] = '\0';
  (this->Data).Pad[0x3e] = '\0';
  (this->Data).Pad[0x3f] = '\0';
  (this->Data).Pad[0x48] = '\0';
  (this->Data).Pad[0x49] = '\0';
  (this->Data).Pad[0x4a] = '\0';
  (this->Data).Pad[0x4b] = '\0';
  (this->Data).Pad[0x4c] = '\0';
  (this->Data).Pad[0x4d] = '\0';
  (this->Data).Pad[0x4e] = '\0';
  (this->Data).Pad[0x4f] = '\0';
  (this->Data).Pad[0x50] = '\0';
  (this->Data).Pad[0x51] = '\0';
  (this->Data).Pad[0x52] = '\0';
  (this->Data).Pad[0x53] = '\0';
  (this->Data).Pad[0x58] = '\0';
  (this->Data).Pad[0x59] = '\0';
  (this->Data).Pad[0x5a] = '\0';
  (this->Data).Pad[0x5b] = '\0';
  (this->Data).Pad[0x5c] = '\0';
  (this->Data).Pad[0x5d] = '\0';
  (this->Data).Pad[0x5e] = '\0';
  (this->Data).Pad[0x5f] = '\0';
  (this->Data).Pad[0x60] = '\0';
  (this->Data).Pad[0x61] = '\0';
  (this->Data).Pad[0x62] = '\0';
  (this->Data).Pad[99] = '\0';
  (this->Data).Pad[100] = '\0';
  (this->Data).Pad[0x65] = '\0';
  (this->Data).Pad[0x66] = '\0';
  (this->Data).Pad[0x67] = '\0';
  (this->Data).Pad[0x78] = '\0';
  (this->Data).Pad[0x79] = '\0';
  (this->Data).Pad[0x7a] = '\0';
  (this->Data).Pad[0x7b] = '\0';
  (this->Data).Pad[0x7c] = '\0';
  (this->Data).Pad[0x7d] = '\0';
  (this->Data).Pad[0x7e] = '\0';
  (this->Data).Pad[0x7f] = '\0';
  (this->Data).Pad[0x80] = '\0';
  (this->Data).Pad[0x81] = '\0';
  (this->Data).Pad[0x82] = '\0';
  (this->Data).Pad[0x83] = '\0';
  (this->Data).Pad[0x84] = 0x80;
  (this->Data).Pad[0x85] = '\0';
  (this->Data).Pad[0x86] = '\0';
  (this->Data).Pad[0x87] = '\0';
  (this->Data).Pad[0x88] = 0xff;
  (this->Data).Pad[0x89] = 0xff;
  (this->Data).Pad[0x8a] = 0xff;
  (this->Data).Pad[0x8b] = 0xff;
  (this->Data).Pad[0x8c] = '\0';
  (this->Data).Pad[0x8d] = '\0';
  (this->Data).Pad[0x8e] = '\0';
  (this->Data).Pad[0x8f] = '\0';
  (this->Data).Pad[0x98] = '\0';
  (this->Data).Pad[0x99] = '\0';
  (this->Data).Pad[0x9a] = '\0';
  (this->Data).Pad[0x9b] = '\0';
  (this->Data).Pad[0x9c] = '\0';
  (this->Data).Pad[0x9d] = '\0';
  (this->Data).Pad[0x9e] = '\0';
  (this->Data).Pad[0x9f] = '\0';
  (this->Data).Pad[0xa0] = '\0';
  (this->Data).Pad[0xa1] = '\0';
  (this->Data).Pad[0xa2] = '\0';
  (this->Data).Pad[0xa3] = '\0';
  *(TComponentTypeID<UObject_*> *)((this->Data).Pad + 0xaa) = TVar3;
  *(TComponentTypeID<FComponentMaterialInfo> *)((this->Data).Pad + 0xac) = TVar4;
  *(undefined ***)(this->Data).Pad =
       &
       ___7__TEntityGroupingHandler_UFMaterialGroupingPolicy___TMovieSceneMaterialSystem_UFComponentMaterialAccessor_MovieScene_UE__PEAVUObject__UFComponentMaterialInfo___MovieScene_UE__PEAVUObject__UFComponentMaterialInfo___MovieScene_UE__6B_
  ;
  if (!this->bIsValid) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar7 = this;
  if (!this->bInline) {
    pTVar7 = *(TInlineValue<UE::MovieScene::IEntityGroupingHandler,256,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<UE::MovieScene::IEntityGroupingHandler,256,8> **)(this->Data).Pad;
  }
  if (pTVar7 != this) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

// InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneSkeletalAnimationComponentData>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneSkeletalAnimationComponentData>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>_> @ 1467499f0

void __thiscall
TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneSkeletalAnimationComponentData>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneSkeletalAnimationComponentData>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>_>
          (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *this,
          TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneSkeletalAnimationComponentData>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
          *param_1)

{
  undefined1 uVar1;
  uchar uVar2;
  UObject *pUVar3;
  code *pcVar4;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar5;
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
  undefined1 uVar18;
  undefined1 uVar19;
  bool bVar20;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar21;
  
  this->bInline = false;
  pTVar21 = FMemory::Malloc(0x78,8);
  this->bIsValid = true;
  *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad = pTVar21;
  if (this->bInline) {
    pTVar21 = this;
  }
  *(undefined ***)(pTVar21->Data).Pad =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03__U__TAdd_UFMovieSceneSkeletalAnimationComponentData___MovieScene_UE__U__TAdd_UFGuid___34_U__TAdd_P6APEAVUObject__PEAV1__Z_34_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___34_UFAddConditional_34__MovieScene_UE__6B_
  ;
  uVar1 = param_1->field_0x9;
  (pTVar21->Data).Pad[8] = param_1->field_0x8;
  (pTVar21->Data).Pad[9] = uVar1;
  (pTVar21->Data).Pad[0x18] = '\0';
  uVar2 = param_1->field_0x18;
  (pTVar21->Data).Pad[0x18] = uVar2;
  if (uVar2 != '\0') {
    pUVar3 = *(UObject **)&param_1->field_0x10;
    *(UObject **)((pTVar21->Data).Pad + 0x10) = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
  }
  uVar1 = param_1->field_0x21;
  (pTVar21->Data).Pad[0x20] = param_1->field_0x20;
  (pTVar21->Data).Pad[0x21] = uVar1;
  (pTVar21->Data).Pad[0x34] = '\0';
  uVar2 = param_1->field_0x34;
  (pTVar21->Data).Pad[0x34] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x25;
    uVar6 = param_1->field_0x26;
    uVar7 = param_1->field_0x27;
    uVar8 = param_1->field_0x28;
    uVar9 = param_1->field_0x29;
    uVar10 = param_1->field_0x2a;
    uVar11 = param_1->field_0x2b;
    uVar12 = param_1->field_0x2c;
    uVar13 = param_1->field_0x2d;
    uVar14 = param_1->field_0x2e;
    uVar15 = param_1->field_0x2f;
    uVar16 = param_1->field_0x30;
    uVar17 = param_1->field_0x31;
    uVar18 = param_1->field_0x32;
    uVar19 = param_1->field_0x33;
    (pTVar21->Data).Pad[0x24] = param_1->field_0x24;
    (pTVar21->Data).Pad[0x25] = uVar1;
    (pTVar21->Data).Pad[0x26] = uVar6;
    (pTVar21->Data).Pad[0x27] = uVar7;
    (pTVar21->Data).Pad[0x28] = uVar8;
    (pTVar21->Data).Pad[0x29] = uVar9;
    (pTVar21->Data).Pad[0x2a] = uVar10;
    (pTVar21->Data).Pad[0x2b] = uVar11;
    (pTVar21->Data).Pad[0x2c] = uVar12;
    (pTVar21->Data).Pad[0x2d] = uVar13;
    (pTVar21->Data).Pad[0x2e] = uVar14;
    (pTVar21->Data).Pad[0x2f] = uVar15;
    (pTVar21->Data).Pad[0x30] = uVar16;
    (pTVar21->Data).Pad[0x31] = uVar17;
    (pTVar21->Data).Pad[0x32] = uVar18;
    (pTVar21->Data).Pad[0x33] = uVar19;
  }
  uVar1 = param_1->field_0x39;
  (pTVar21->Data).Pad[0x38] = param_1->field_0x38;
  (pTVar21->Data).Pad[0x39] = uVar1;
  pTVar21[1].Data.Pad[0] = '\0';
  uVar2 = param_1->field_0x48;
  pTVar21[1].Data.Pad[0] = uVar2;
  if (uVar2 != '\0') {
    *(undefined8 *)&pTVar21->field_0x40 = *(undefined8 *)&param_1->field_0x40;
  }
  uVar1 = param_1->field_0x51;
  uVar6 = param_1->field_0x52;
  uVar7 = param_1->field_0x53;
  pTVar5 = pTVar21 + 1;
  (pTVar5->Data).Pad[8] = param_1->field_0x50;
  (pTVar5->Data).Pad[9] = uVar1;
  (pTVar5->Data).Pad[10] = uVar6;
  (pTVar5->Data).Pad[0xb] = uVar7;
  pTVar21[1].Data.Pad[0x18] = '\0';
  uVar2 = param_1->field_0x60;
  pTVar21[1].Data.Pad[0x18] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x59;
    uVar6 = param_1->field_0x5a;
    uVar7 = param_1->field_0x5b;
    uVar8 = param_1->field_0x5c;
    uVar9 = param_1->field_0x5d;
    uVar10 = param_1->field_0x5e;
    uVar11 = param_1->field_0x5f;
    pTVar5 = pTVar21 + 1;
    (pTVar5->Data).Pad[0x10] = param_1->field_0x58;
    (pTVar5->Data).Pad[0x11] = uVar1;
    (pTVar5->Data).Pad[0x12] = uVar6;
    (pTVar5->Data).Pad[0x13] = uVar7;
    (pTVar5->Data).Pad[0x14] = uVar8;
    (pTVar5->Data).Pad[0x15] = uVar9;
    (pTVar5->Data).Pad[0x16] = uVar10;
    (pTVar5->Data).Pad[0x17] = uVar11;
  }
  uVar1 = param_1->field_0x69;
  uVar6 = param_1->field_0x6a;
  uVar7 = param_1->field_0x6b;
  pTVar5 = pTVar21 + 1;
  (pTVar5->Data).Pad[0x20] = param_1->field_0x68;
  (pTVar5->Data).Pad[0x21] = uVar1;
  (pTVar5->Data).Pad[0x22] = uVar6;
  (pTVar5->Data).Pad[0x23] = uVar7;
  pTVar21[1].Data.Pad[0x28] = param_1->field_0x70;
  *(undefined ***)(pTVar21->Data).Pad =
       &
       ___7__TEntityBuilder_U__TAdd_UFMovieSceneSkeletalAnimationComponentData___MovieScene_UE__U__TAdd_UFGuid___23_U__TAdd_P6APEAVUObject__PEAV1__Z_23_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_UFAddConditional_23__MovieScene_UE__6B_
  ;
  if (!this->bIsValid) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar20) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar21 = this;
  if (!this->bInline) {
    pTVar21 = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar20) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (pTVar21 != this) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar20) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FMaterialParameterInfo>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FComponentMaterialInfo>,UE::MovieScene::FAddConditional>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FMaterialParameterInfo>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FComponentMaterialInfo>,UE::MovieScene::FAddConditional>_> @ 146749b90

void __thiscall
TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FMaterialParameterInfo>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FComponentMaterialInfo>,UE::MovieScene::FAddConditional>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FMaterialParameterInfo>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FComponentMaterialInfo>,UE::MovieScene::FAddConditional>_>
          (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *this,
          TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FMaterialParameterInfo>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FComponentMaterialInfo>,UE::MovieScene::FAddConditional>
          *param_1)

{
  undefined1 uVar1;
  uchar uVar2;
  code *pcVar3;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar4;
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
  undefined1 uVar18;
  bool bVar19;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar20;
  
  this->bInline = false;
  pTVar20 = FMemory::Malloc(0x78,8);
  this->bIsValid = true;
  *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad = pTVar20;
  if (this->bInline) {
    pTVar20 = this;
  }
  *(undefined ***)(pTVar20->Data).Pad =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03__U__TAddConditional_UFGuid___MovieScene_UE__U__TAdd_UFMaterialParameterInfo___34_U__TAdd_UFSourceFloatChannel_MovieScene_UE___34_U__TAdd_UFComponentMaterialInfo___34_UFAddConditional_34__MovieScene_UE__6B_
  ;
  uVar1 = param_1->field_0x9;
  uVar5 = param_1->field_0xa;
  uVar6 = param_1->field_0xb;
  (pTVar20->Data).Pad[8] = param_1->field_0x8;
  (pTVar20->Data).Pad[9] = uVar1;
  (pTVar20->Data).Pad[10] = uVar5;
  (pTVar20->Data).Pad[0xb] = uVar6;
  (pTVar20->Data).Pad[0x1c] = '\0';
  uVar2 = param_1->field_0x1c;
  (pTVar20->Data).Pad[0x1c] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0xd;
    uVar5 = param_1->field_0xe;
    uVar6 = param_1->field_0xf;
    uVar7 = param_1->field_0x10;
    uVar8 = param_1->field_0x11;
    uVar9 = param_1->field_0x12;
    uVar10 = param_1->field_0x13;
    uVar11 = param_1->field_0x14;
    uVar12 = param_1->field_0x15;
    uVar13 = param_1->field_0x16;
    uVar14 = param_1->field_0x17;
    uVar15 = param_1->field_0x18;
    uVar16 = param_1->field_0x19;
    uVar17 = param_1->field_0x1a;
    uVar18 = param_1->field_0x1b;
    (pTVar20->Data).Pad[0xc] = param_1->field_0xc;
    (pTVar20->Data).Pad[0xd] = uVar1;
    (pTVar20->Data).Pad[0xe] = uVar5;
    (pTVar20->Data).Pad[0xf] = uVar6;
    (pTVar20->Data).Pad[0x10] = uVar7;
    (pTVar20->Data).Pad[0x11] = uVar8;
    (pTVar20->Data).Pad[0x12] = uVar9;
    (pTVar20->Data).Pad[0x13] = uVar10;
    (pTVar20->Data).Pad[0x14] = uVar11;
    (pTVar20->Data).Pad[0x15] = uVar12;
    (pTVar20->Data).Pad[0x16] = uVar13;
    (pTVar20->Data).Pad[0x17] = uVar14;
    (pTVar20->Data).Pad[0x18] = uVar15;
    (pTVar20->Data).Pad[0x19] = uVar16;
    (pTVar20->Data).Pad[0x1a] = uVar17;
    (pTVar20->Data).Pad[0x1b] = uVar18;
  }
  uVar1 = param_1->field_0x21;
  (pTVar20->Data).Pad[0x20] = param_1->field_0x20;
  (pTVar20->Data).Pad[0x21] = uVar1;
  (pTVar20->Data).Pad[0x34] = '\0';
  uVar2 = param_1->field_0x34;
  (pTVar20->Data).Pad[0x34] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x25;
    uVar5 = param_1->field_0x26;
    uVar6 = param_1->field_0x27;
    uVar7 = param_1->field_0x28;
    uVar8 = param_1->field_0x29;
    uVar9 = param_1->field_0x2a;
    uVar10 = param_1->field_0x2b;
    uVar11 = param_1->field_0x2c;
    uVar12 = param_1->field_0x2d;
    uVar13 = param_1->field_0x2e;
    uVar14 = param_1->field_0x2f;
    uVar15 = param_1->field_0x30;
    uVar16 = param_1->field_0x31;
    uVar17 = param_1->field_0x32;
    uVar18 = param_1->field_0x33;
    (pTVar20->Data).Pad[0x24] = param_1->field_0x24;
    (pTVar20->Data).Pad[0x25] = uVar1;
    (pTVar20->Data).Pad[0x26] = uVar5;
    (pTVar20->Data).Pad[0x27] = uVar6;
    (pTVar20->Data).Pad[0x28] = uVar7;
    (pTVar20->Data).Pad[0x29] = uVar8;
    (pTVar20->Data).Pad[0x2a] = uVar9;
    (pTVar20->Data).Pad[0x2b] = uVar10;
    (pTVar20->Data).Pad[0x2c] = uVar11;
    (pTVar20->Data).Pad[0x2d] = uVar12;
    (pTVar20->Data).Pad[0x2e] = uVar13;
    (pTVar20->Data).Pad[0x2f] = uVar14;
    (pTVar20->Data).Pad[0x30] = uVar15;
    (pTVar20->Data).Pad[0x31] = uVar16;
    (pTVar20->Data).Pad[0x32] = uVar17;
    (pTVar20->Data).Pad[0x33] = uVar18;
  }
  uVar1 = param_1->field_0x39;
  (pTVar20->Data).Pad[0x38] = param_1->field_0x38;
  (pTVar20->Data).Pad[0x39] = uVar1;
  pTVar20[1].Data.Pad[0] = '\0';
  uVar2 = param_1->field_0x48;
  pTVar20[1].Data.Pad[0] = uVar2;
  if (uVar2 != '\0') {
    *(undefined8 *)&pTVar20->field_0x40 = *(undefined8 *)&param_1->field_0x40;
  }
  uVar1 = param_1->field_0x51;
  pTVar20[1].Data.Pad[8] = param_1->field_0x50;
  pTVar20[1].Data.Pad[9] = uVar1;
  pTVar20[1].Data.Pad[0x1c] = '\0';
  uVar2 = param_1->field_0x64;
  pTVar20[1].Data.Pad[0x1c] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x55;
    uVar5 = param_1->field_0x56;
    uVar6 = param_1->field_0x57;
    uVar7 = param_1->field_0x58;
    uVar8 = param_1->field_0x59;
    uVar9 = param_1->field_0x5a;
    uVar10 = param_1->field_0x5b;
    uVar11 = param_1->field_0x5c;
    uVar12 = param_1->field_0x5d;
    uVar13 = param_1->field_0x5e;
    uVar14 = param_1->field_0x5f;
    uVar15 = param_1->field_0x60;
    uVar16 = param_1->field_0x61;
    uVar17 = param_1->field_0x62;
    uVar18 = param_1->field_0x63;
    pTVar4 = pTVar20 + 1;
    (pTVar4->Data).Pad[0xc] = param_1->field_0x54;
    (pTVar4->Data).Pad[0xd] = uVar1;
    (pTVar4->Data).Pad[0xe] = uVar5;
    (pTVar4->Data).Pad[0xf] = uVar6;
    (pTVar4->Data).Pad[0x10] = uVar7;
    (pTVar4->Data).Pad[0x11] = uVar8;
    (pTVar4->Data).Pad[0x12] = uVar9;
    (pTVar4->Data).Pad[0x13] = uVar10;
    pTVar4 = pTVar20 + 1;
    (pTVar4->Data).Pad[0x14] = uVar11;
    (pTVar4->Data).Pad[0x15] = uVar12;
    (pTVar4->Data).Pad[0x16] = uVar13;
    (pTVar4->Data).Pad[0x17] = uVar14;
    (pTVar4->Data).Pad[0x18] = uVar15;
    (pTVar4->Data).Pad[0x19] = uVar16;
    (pTVar4->Data).Pad[0x1a] = uVar17;
    (pTVar4->Data).Pad[0x1b] = uVar18;
  }
  uVar1 = param_1->field_0x69;
  uVar5 = param_1->field_0x6a;
  uVar6 = param_1->field_0x6b;
  pTVar4 = pTVar20 + 1;
  (pTVar4->Data).Pad[0x20] = param_1->field_0x68;
  (pTVar4->Data).Pad[0x21] = uVar1;
  (pTVar4->Data).Pad[0x22] = uVar5;
  (pTVar4->Data).Pad[0x23] = uVar6;
  pTVar20[1].Data.Pad[0x28] = param_1->field_0x70;
  *(undefined ***)(pTVar20->Data).Pad =
       &
       ___7__TEntityBuilder_U__TAddConditional_UFGuid___MovieScene_UE__U__TAdd_UFMaterialParameterInfo___23_U__TAdd_UFSourceFloatChannel_MovieScene_UE___23_U__TAdd_UFComponentMaterialInfo___23_UFAddConditional_23__MovieScene_UE__6B_
  ;
  if (!this->bIsValid) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar19) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar20 = this;
  if (!this->bInline) {
    pTVar20 = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar19) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (pTVar20 != this) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar19) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FComponentMaterialInfo>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FComponentMaterialInfo>_>_> @ 146749d20

void __thiscall
TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FComponentMaterialInfo>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FComponentMaterialInfo>_>_>
          (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *this,
          TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FComponentMaterialInfo>_>
          *param_1)

{
  undefined1 uVar1;
  uchar uVar2;
  UObject *pUVar3;
  code *pcVar4;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar5;
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
  undefined1 uVar18;
  undefined1 uVar19;
  bool bVar20;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar21;
  
  this->bInline = false;
  pTVar21 = FMemory::Malloc(0x60,8);
  this->bIsValid = true;
  *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad = pTVar21;
  if (this->bInline) {
    pTVar21 = this;
  }
  *(undefined ***)(pTVar21->Data).Pad =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01__U__TAddConditional_UFGuid___MovieScene_UE__U__TAdd_UFObjectComponent_MovieScene_UE___34_U__TAdd_UFComponentMaterialInfo___34__MovieScene_UE__6B_
  ;
  uVar1 = param_1->field_0x9;
  uVar6 = param_1->field_0xa;
  uVar7 = param_1->field_0xb;
  (pTVar21->Data).Pad[8] = param_1->field_0x8;
  (pTVar21->Data).Pad[9] = uVar1;
  (pTVar21->Data).Pad[10] = uVar6;
  (pTVar21->Data).Pad[0xb] = uVar7;
  (pTVar21->Data).Pad[0x1c] = '\0';
  uVar2 = param_1->field_0x1c;
  (pTVar21->Data).Pad[0x1c] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0xd;
    uVar6 = param_1->field_0xe;
    uVar7 = param_1->field_0xf;
    uVar8 = param_1->field_0x10;
    uVar9 = param_1->field_0x11;
    uVar10 = param_1->field_0x12;
    uVar11 = param_1->field_0x13;
    uVar12 = param_1->field_0x14;
    uVar13 = param_1->field_0x15;
    uVar14 = param_1->field_0x16;
    uVar15 = param_1->field_0x17;
    uVar16 = param_1->field_0x18;
    uVar17 = param_1->field_0x19;
    uVar18 = param_1->field_0x1a;
    uVar19 = param_1->field_0x1b;
    (pTVar21->Data).Pad[0xc] = param_1->field_0xc;
    (pTVar21->Data).Pad[0xd] = uVar1;
    (pTVar21->Data).Pad[0xe] = uVar6;
    (pTVar21->Data).Pad[0xf] = uVar7;
    (pTVar21->Data).Pad[0x10] = uVar8;
    (pTVar21->Data).Pad[0x11] = uVar9;
    (pTVar21->Data).Pad[0x12] = uVar10;
    (pTVar21->Data).Pad[0x13] = uVar11;
    (pTVar21->Data).Pad[0x14] = uVar12;
    (pTVar21->Data).Pad[0x15] = uVar13;
    (pTVar21->Data).Pad[0x16] = uVar14;
    (pTVar21->Data).Pad[0x17] = uVar15;
    (pTVar21->Data).Pad[0x18] = uVar16;
    (pTVar21->Data).Pad[0x19] = uVar17;
    (pTVar21->Data).Pad[0x1a] = uVar18;
    (pTVar21->Data).Pad[0x1b] = uVar19;
  }
  uVar1 = param_1->field_0x21;
  (pTVar21->Data).Pad[0x20] = param_1->field_0x20;
  (pTVar21->Data).Pad[0x21] = uVar1;
  (pTVar21->Data).Pad[0x38] = '\0';
  uVar2 = param_1->field_0x38;
  (pTVar21->Data).Pad[0x38] = uVar2;
  if (uVar2 != '\0') {
    pUVar3 = *(UObject **)&param_1->field_0x28;
    *(UObject **)((pTVar21->Data).Pad + 0x28) = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    uVar1 = param_1->field_0x31;
    uVar6 = param_1->field_0x32;
    uVar7 = param_1->field_0x33;
    uVar8 = param_1->field_0x34;
    uVar9 = param_1->field_0x35;
    uVar10 = param_1->field_0x36;
    uVar11 = param_1->field_0x37;
    (pTVar21->Data).Pad[0x30] = param_1->field_0x30;
    (pTVar21->Data).Pad[0x31] = uVar1;
    (pTVar21->Data).Pad[0x32] = uVar6;
    (pTVar21->Data).Pad[0x33] = uVar7;
    (pTVar21->Data).Pad[0x34] = uVar8;
    (pTVar21->Data).Pad[0x35] = uVar9;
    (pTVar21->Data).Pad[0x36] = uVar10;
    (pTVar21->Data).Pad[0x37] = uVar11;
  }
  *(undefined2 *)&pTVar21->field_0x40 = *(undefined2 *)&param_1->field_0x40;
  pTVar21[1].Data.Pad[0xc] = '\0';
  uVar2 = param_1->field_0x54;
  pTVar21[1].Data.Pad[0xc] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x4c;
    uVar6 = param_1->field_0x4d;
    uVar7 = param_1->field_0x4e;
    uVar8 = param_1->field_0x4f;
    uVar9 = param_1->field_0x50;
    uVar10 = param_1->field_0x51;
    uVar11 = param_1->field_0x52;
    uVar12 = param_1->field_0x53;
    *(undefined8 *)&pTVar21->field_0x44 = *(undefined8 *)&param_1->field_0x44;
    pTVar5 = pTVar21 + 1;
    (pTVar5->Data).Pad[4] = uVar1;
    (pTVar5->Data).Pad[5] = uVar6;
    (pTVar5->Data).Pad[6] = uVar7;
    (pTVar5->Data).Pad[7] = uVar8;
    (pTVar5->Data).Pad[8] = uVar9;
    (pTVar5->Data).Pad[9] = uVar10;
    (pTVar5->Data).Pad[10] = uVar11;
    (pTVar5->Data).Pad[0xb] = uVar12;
  }
  pTVar21[1].Data.Pad[0x10] = param_1->field_0x58;
  *(undefined ***)(pTVar21->Data).Pad =
       &
       ___7__TEntityBuilder_U__TAddConditional_UFGuid___MovieScene_UE__U__TAdd_UFObjectComponent_MovieScene_UE___23_U__TAdd_UFComponentMaterialInfo___23__MovieScene_UE__6B_
  ;
  if (!this->bIsValid) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar20) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar21 = this;
  if (!this->bInline) {
    pTVar21 = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar20) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (pTVar21 != this) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar20) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>_>_> @ 146749ea0

void __thiscall
TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>_>_>
          (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *this,
          TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>_>
          *param_1)

{
  undefined1 uVar1;
  uchar uVar2;
  char cVar3;
  code *pcVar4;
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
  undefined1 uVar18;
  bool bVar19;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar20;
  
  this->bInline = false;
  pTVar20 = FMemory::Malloc(0x50,8);
  this->bIsValid = true;
  *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad = pTVar20;
  if (this->bInline) {
    pTVar20 = this;
  }
  *(undefined ***)(pTVar20->Data).Pad =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01__U__TAddConditional_UFGuid___MovieScene_UE__U__TAdd_VFName___34_U__TAdd_UFSourceBoolChannel_MovieScene_UE___34__MovieScene_UE__6B_
  ;
  uVar1 = param_1->field_0x9;
  uVar5 = param_1->field_0xa;
  uVar6 = param_1->field_0xb;
  (pTVar20->Data).Pad[8] = param_1->field_0x8;
  (pTVar20->Data).Pad[9] = uVar1;
  (pTVar20->Data).Pad[10] = uVar5;
  (pTVar20->Data).Pad[0xb] = uVar6;
  (pTVar20->Data).Pad[0x1c] = '\0';
  uVar2 = param_1->field_0x1c;
  (pTVar20->Data).Pad[0x1c] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0xd;
    uVar5 = param_1->field_0xe;
    uVar6 = param_1->field_0xf;
    uVar7 = param_1->field_0x10;
    uVar8 = param_1->field_0x11;
    uVar9 = param_1->field_0x12;
    uVar10 = param_1->field_0x13;
    uVar11 = param_1->field_0x14;
    uVar12 = param_1->field_0x15;
    uVar13 = param_1->field_0x16;
    uVar14 = param_1->field_0x17;
    uVar15 = param_1->field_0x18;
    uVar16 = param_1->field_0x19;
    uVar17 = param_1->field_0x1a;
    uVar18 = param_1->field_0x1b;
    (pTVar20->Data).Pad[0xc] = param_1->field_0xc;
    (pTVar20->Data).Pad[0xd] = uVar1;
    (pTVar20->Data).Pad[0xe] = uVar5;
    (pTVar20->Data).Pad[0xf] = uVar6;
    (pTVar20->Data).Pad[0x10] = uVar7;
    (pTVar20->Data).Pad[0x11] = uVar8;
    (pTVar20->Data).Pad[0x12] = uVar9;
    (pTVar20->Data).Pad[0x13] = uVar10;
    (pTVar20->Data).Pad[0x14] = uVar11;
    (pTVar20->Data).Pad[0x15] = uVar12;
    (pTVar20->Data).Pad[0x16] = uVar13;
    (pTVar20->Data).Pad[0x17] = uVar14;
    (pTVar20->Data).Pad[0x18] = uVar15;
    (pTVar20->Data).Pad[0x19] = uVar16;
    (pTVar20->Data).Pad[0x1a] = uVar17;
    (pTVar20->Data).Pad[0x1b] = uVar18;
  }
  uVar1 = param_1->field_0x21;
  (pTVar20->Data).Pad[0x20] = param_1->field_0x20;
  (pTVar20->Data).Pad[0x21] = uVar1;
  (pTVar20->Data).Pad[0x24] = 0xff;
  (pTVar20->Data).Pad[0x25] = 0xff;
  (pTVar20->Data).Pad[0x26] = 0xff;
  (pTVar20->Data).Pad[0x27] = 0xff;
  (pTVar20->Data).Pad[0x28] = '\0';
  (pTVar20->Data).Pad[0x29] = '\0';
  (pTVar20->Data).Pad[0x2a] = '\0';
  (pTVar20->Data).Pad[0x2b] = '\0';
  if (*(int *)&param_1->field_0x24 != -1) {
    uVar1 = param_1->field_0x25;
    uVar5 = param_1->field_0x26;
    uVar6 = param_1->field_0x27;
    uVar7 = param_1->field_0x28;
    uVar8 = param_1->field_0x29;
    uVar9 = param_1->field_0x2a;
    uVar10 = param_1->field_0x2b;
    (pTVar20->Data).Pad[0x24] = param_1->field_0x24;
    (pTVar20->Data).Pad[0x25] = uVar1;
    (pTVar20->Data).Pad[0x26] = uVar5;
    (pTVar20->Data).Pad[0x27] = uVar6;
    (pTVar20->Data).Pad[0x28] = uVar7;
    (pTVar20->Data).Pad[0x29] = uVar8;
    (pTVar20->Data).Pad[0x2a] = uVar9;
    (pTVar20->Data).Pad[0x2b] = uVar10;
  }
  uVar1 = param_1->field_0x31;
  (pTVar20->Data).Pad[0x30] = param_1->field_0x30;
  (pTVar20->Data).Pad[0x31] = uVar1;
  pTVar20->field_0x40 = 0;
  cVar3 = param_1->field_0x40;
  pTVar20->field_0x40 = cVar3;
  if (cVar3 != '\0') {
    uVar1 = param_1->field_0x39;
    uVar5 = param_1->field_0x3a;
    uVar6 = param_1->field_0x3b;
    uVar7 = param_1->field_0x3c;
    uVar8 = param_1->field_0x3d;
    uVar9 = param_1->field_0x3e;
    uVar10 = param_1->field_0x3f;
    (pTVar20->Data).Pad[0x38] = param_1->field_0x38;
    (pTVar20->Data).Pad[0x39] = uVar1;
    (pTVar20->Data).Pad[0x3a] = uVar5;
    (pTVar20->Data).Pad[0x3b] = uVar6;
    (pTVar20->Data).Pad[0x3c] = uVar7;
    (pTVar20->Data).Pad[0x3d] = uVar8;
    (pTVar20->Data).Pad[0x3e] = uVar9;
    (pTVar20->Data).Pad[0x3f] = uVar10;
  }
  pTVar20[1].Data.Pad[0] = param_1->field_0x48;
  *(undefined ***)(pTVar20->Data).Pad =
       &
       ___7__TEntityBuilder_U__TAddConditional_UFGuid___MovieScene_UE__U__TAdd_VFName___23_U__TAdd_UFSourceBoolChannel_MovieScene_UE___23__MovieScene_UE__6B_
  ;
  if (!this->bIsValid) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar19) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar20 = this;
  if (!this->bInline) {
    pTVar20 = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar19) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (pTVar20 != this) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar19) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>_> @ 14674a010

void __thiscall
TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>_>
          (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *this,
          TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>
          *param_1)

{
  undefined1 uVar1;
  uchar uVar2;
  char cVar3;
  code *pcVar4;
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
  undefined1 uVar18;
  bool bVar19;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar20;
  
  this->bInline = false;
  pTVar20 = FMemory::Malloc(0x50,8);
  this->bIsValid = true;
  *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad = pTVar20;
  if (this->bInline) {
    pTVar20 = this;
  }
  *(undefined ***)(pTVar20->Data).Pad =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01__U__TAddConditional_UFGuid___MovieScene_UE__U__TAdd_VFName___34_U__TAdd_UFSourceFloatChannel_MovieScene_UE___34__MovieScene_UE__6B_
  ;
  uVar1 = param_1->field_0x9;
  uVar5 = param_1->field_0xa;
  uVar6 = param_1->field_0xb;
  (pTVar20->Data).Pad[8] = param_1->field_0x8;
  (pTVar20->Data).Pad[9] = uVar1;
  (pTVar20->Data).Pad[10] = uVar5;
  (pTVar20->Data).Pad[0xb] = uVar6;
  (pTVar20->Data).Pad[0x1c] = '\0';
  uVar2 = param_1->field_0x1c;
  (pTVar20->Data).Pad[0x1c] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0xd;
    uVar5 = param_1->field_0xe;
    uVar6 = param_1->field_0xf;
    uVar7 = param_1->field_0x10;
    uVar8 = param_1->field_0x11;
    uVar9 = param_1->field_0x12;
    uVar10 = param_1->field_0x13;
    uVar11 = param_1->field_0x14;
    uVar12 = param_1->field_0x15;
    uVar13 = param_1->field_0x16;
    uVar14 = param_1->field_0x17;
    uVar15 = param_1->field_0x18;
    uVar16 = param_1->field_0x19;
    uVar17 = param_1->field_0x1a;
    uVar18 = param_1->field_0x1b;
    (pTVar20->Data).Pad[0xc] = param_1->field_0xc;
    (pTVar20->Data).Pad[0xd] = uVar1;
    (pTVar20->Data).Pad[0xe] = uVar5;
    (pTVar20->Data).Pad[0xf] = uVar6;
    (pTVar20->Data).Pad[0x10] = uVar7;
    (pTVar20->Data).Pad[0x11] = uVar8;
    (pTVar20->Data).Pad[0x12] = uVar9;
    (pTVar20->Data).Pad[0x13] = uVar10;
    (pTVar20->Data).Pad[0x14] = uVar11;
    (pTVar20->Data).Pad[0x15] = uVar12;
    (pTVar20->Data).Pad[0x16] = uVar13;
    (pTVar20->Data).Pad[0x17] = uVar14;
    (pTVar20->Data).Pad[0x18] = uVar15;
    (pTVar20->Data).Pad[0x19] = uVar16;
    (pTVar20->Data).Pad[0x1a] = uVar17;
    (pTVar20->Data).Pad[0x1b] = uVar18;
  }
  uVar1 = param_1->field_0x21;
  (pTVar20->Data).Pad[0x20] = param_1->field_0x20;
  (pTVar20->Data).Pad[0x21] = uVar1;
  (pTVar20->Data).Pad[0x24] = 0xff;
  (pTVar20->Data).Pad[0x25] = 0xff;
  (pTVar20->Data).Pad[0x26] = 0xff;
  (pTVar20->Data).Pad[0x27] = 0xff;
  (pTVar20->Data).Pad[0x28] = '\0';
  (pTVar20->Data).Pad[0x29] = '\0';
  (pTVar20->Data).Pad[0x2a] = '\0';
  (pTVar20->Data).Pad[0x2b] = '\0';
  if (*(int *)&param_1->field_0x24 != -1) {
    uVar1 = param_1->field_0x25;
    uVar5 = param_1->field_0x26;
    uVar6 = param_1->field_0x27;
    uVar7 = param_1->field_0x28;
    uVar8 = param_1->field_0x29;
    uVar9 = param_1->field_0x2a;
    uVar10 = param_1->field_0x2b;
    (pTVar20->Data).Pad[0x24] = param_1->field_0x24;
    (pTVar20->Data).Pad[0x25] = uVar1;
    (pTVar20->Data).Pad[0x26] = uVar5;
    (pTVar20->Data).Pad[0x27] = uVar6;
    (pTVar20->Data).Pad[0x28] = uVar7;
    (pTVar20->Data).Pad[0x29] = uVar8;
    (pTVar20->Data).Pad[0x2a] = uVar9;
    (pTVar20->Data).Pad[0x2b] = uVar10;
  }
  uVar1 = param_1->field_0x31;
  (pTVar20->Data).Pad[0x30] = param_1->field_0x30;
  (pTVar20->Data).Pad[0x31] = uVar1;
  pTVar20->field_0x40 = 0;
  cVar3 = param_1->field_0x40;
  pTVar20->field_0x40 = cVar3;
  if (cVar3 != '\0') {
    uVar1 = param_1->field_0x39;
    uVar5 = param_1->field_0x3a;
    uVar6 = param_1->field_0x3b;
    uVar7 = param_1->field_0x3c;
    uVar8 = param_1->field_0x3d;
    uVar9 = param_1->field_0x3e;
    uVar10 = param_1->field_0x3f;
    (pTVar20->Data).Pad[0x38] = param_1->field_0x38;
    (pTVar20->Data).Pad[0x39] = uVar1;
    (pTVar20->Data).Pad[0x3a] = uVar5;
    (pTVar20->Data).Pad[0x3b] = uVar6;
    (pTVar20->Data).Pad[0x3c] = uVar7;
    (pTVar20->Data).Pad[0x3d] = uVar8;
    (pTVar20->Data).Pad[0x3e] = uVar9;
    (pTVar20->Data).Pad[0x3f] = uVar10;
  }
  pTVar20[1].Data.Pad[0] = param_1->field_0x48;
  *(undefined ***)(pTVar20->Data).Pad =
       &
       ___7__TEntityBuilder_U__TAddConditional_UFGuid___MovieScene_UE__U__TAdd_VFName___23_U__TAdd_UFSourceFloatChannel_MovieScene_UE___23__MovieScene_UE__6B_
  ;
  if (!this->bIsValid) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar19) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar20 = this;
  if (!this->bInline) {
    pTVar20 = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar19) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (pTVar20 != this) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar19) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_> @ 14674a180

void __thiscall
TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_>
          (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *this,
          TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
          *param_1)

{
  undefined1 uVar1;
  uchar uVar2;
  char cVar3;
  code *pcVar4;
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
  undefined1 uVar18;
  bool bVar19;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar20;
  
  this->bInline = false;
  pTVar20 = FMemory::Malloc(0x50,8);
  this->bIsValid = true;
  *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad = pTVar20;
  if (this->bInline) {
    pTVar20 = this;
  }
  *(undefined ***)(pTVar20->Data).Pad =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01__U__TAddConditional_UFGuid___MovieScene_UE__U__TAdd_VFName___34_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___34__MovieScene_UE__6B_
  ;
  uVar1 = param_1->field_0x9;
  uVar5 = param_1->field_0xa;
  uVar6 = param_1->field_0xb;
  (pTVar20->Data).Pad[8] = param_1->field_0x8;
  (pTVar20->Data).Pad[9] = uVar1;
  (pTVar20->Data).Pad[10] = uVar5;
  (pTVar20->Data).Pad[0xb] = uVar6;
  (pTVar20->Data).Pad[0x1c] = '\0';
  uVar2 = param_1->field_0x1c;
  (pTVar20->Data).Pad[0x1c] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0xd;
    uVar5 = param_1->field_0xe;
    uVar6 = param_1->field_0xf;
    uVar7 = param_1->field_0x10;
    uVar8 = param_1->field_0x11;
    uVar9 = param_1->field_0x12;
    uVar10 = param_1->field_0x13;
    uVar11 = param_1->field_0x14;
    uVar12 = param_1->field_0x15;
    uVar13 = param_1->field_0x16;
    uVar14 = param_1->field_0x17;
    uVar15 = param_1->field_0x18;
    uVar16 = param_1->field_0x19;
    uVar17 = param_1->field_0x1a;
    uVar18 = param_1->field_0x1b;
    (pTVar20->Data).Pad[0xc] = param_1->field_0xc;
    (pTVar20->Data).Pad[0xd] = uVar1;
    (pTVar20->Data).Pad[0xe] = uVar5;
    (pTVar20->Data).Pad[0xf] = uVar6;
    (pTVar20->Data).Pad[0x10] = uVar7;
    (pTVar20->Data).Pad[0x11] = uVar8;
    (pTVar20->Data).Pad[0x12] = uVar9;
    (pTVar20->Data).Pad[0x13] = uVar10;
    (pTVar20->Data).Pad[0x14] = uVar11;
    (pTVar20->Data).Pad[0x15] = uVar12;
    (pTVar20->Data).Pad[0x16] = uVar13;
    (pTVar20->Data).Pad[0x17] = uVar14;
    (pTVar20->Data).Pad[0x18] = uVar15;
    (pTVar20->Data).Pad[0x19] = uVar16;
    (pTVar20->Data).Pad[0x1a] = uVar17;
    (pTVar20->Data).Pad[0x1b] = uVar18;
  }
  uVar1 = param_1->field_0x21;
  (pTVar20->Data).Pad[0x20] = param_1->field_0x20;
  (pTVar20->Data).Pad[0x21] = uVar1;
  (pTVar20->Data).Pad[0x24] = 0xff;
  (pTVar20->Data).Pad[0x25] = 0xff;
  (pTVar20->Data).Pad[0x26] = 0xff;
  (pTVar20->Data).Pad[0x27] = 0xff;
  (pTVar20->Data).Pad[0x28] = '\0';
  (pTVar20->Data).Pad[0x29] = '\0';
  (pTVar20->Data).Pad[0x2a] = '\0';
  (pTVar20->Data).Pad[0x2b] = '\0';
  if (*(int *)&param_1->field_0x24 != -1) {
    uVar1 = param_1->field_0x25;
    uVar5 = param_1->field_0x26;
    uVar6 = param_1->field_0x27;
    uVar7 = param_1->field_0x28;
    uVar8 = param_1->field_0x29;
    uVar9 = param_1->field_0x2a;
    uVar10 = param_1->field_0x2b;
    (pTVar20->Data).Pad[0x24] = param_1->field_0x24;
    (pTVar20->Data).Pad[0x25] = uVar1;
    (pTVar20->Data).Pad[0x26] = uVar5;
    (pTVar20->Data).Pad[0x27] = uVar6;
    (pTVar20->Data).Pad[0x28] = uVar7;
    (pTVar20->Data).Pad[0x29] = uVar8;
    (pTVar20->Data).Pad[0x2a] = uVar9;
    (pTVar20->Data).Pad[0x2b] = uVar10;
  }
  uVar1 = param_1->field_0x31;
  uVar5 = param_1->field_0x32;
  uVar6 = param_1->field_0x33;
  (pTVar20->Data).Pad[0x30] = param_1->field_0x30;
  (pTVar20->Data).Pad[0x31] = uVar1;
  (pTVar20->Data).Pad[0x32] = uVar5;
  (pTVar20->Data).Pad[0x33] = uVar6;
  pTVar20->field_0x40 = 0;
  cVar3 = param_1->field_0x40;
  pTVar20->field_0x40 = cVar3;
  if (cVar3 != '\0') {
    uVar1 = param_1->field_0x39;
    uVar5 = param_1->field_0x3a;
    uVar6 = param_1->field_0x3b;
    uVar7 = param_1->field_0x3c;
    uVar8 = param_1->field_0x3d;
    uVar9 = param_1->field_0x3e;
    uVar10 = param_1->field_0x3f;
    (pTVar20->Data).Pad[0x38] = param_1->field_0x38;
    (pTVar20->Data).Pad[0x39] = uVar1;
    (pTVar20->Data).Pad[0x3a] = uVar5;
    (pTVar20->Data).Pad[0x3b] = uVar6;
    (pTVar20->Data).Pad[0x3c] = uVar7;
    (pTVar20->Data).Pad[0x3d] = uVar8;
    (pTVar20->Data).Pad[0x3e] = uVar9;
    (pTVar20->Data).Pad[0x3f] = uVar10;
  }
  pTVar20[1].Data.Pad[0] = param_1->field_0x48;
  *(undefined ***)(pTVar20->Data).Pad =
       &
       ___7__TEntityBuilder_U__TAddConditional_UFGuid___MovieScene_UE__U__TAdd_VFName___23_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23__MovieScene_UE__6B_
  ;
  if (!this->bIsValid) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar19) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar20 = this;
  if (!this->bInline) {
    pTVar20 = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar19) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (pTVar20 != this) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar19) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_> @ 14674a2f0

void __thiscall
TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_>
          (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *this,
          TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
          *param_1)

{
  undefined1 uVar1;
  uchar uVar2;
  char cVar3;
  code *pcVar4;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar5;
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
  undefined1 uVar18;
  undefined1 uVar19;
  bool bVar20;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar21;
  
  this->bInline = false;
  pTVar21 = FMemory::Malloc(0x68,8);
  this->bIsValid = true;
  *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad = pTVar21;
  if (this->bInline) {
    pTVar21 = this;
  }
  *(undefined ***)(pTVar21->Data).Pad =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02__U__TAddConditional_UFGuid___MovieScene_UE__U__TAdd_VFName___34_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___34_U634__MovieScene_UE__6B_
  ;
  uVar1 = param_1->field_0x9;
  uVar6 = param_1->field_0xa;
  uVar7 = param_1->field_0xb;
  (pTVar21->Data).Pad[8] = param_1->field_0x8;
  (pTVar21->Data).Pad[9] = uVar1;
  (pTVar21->Data).Pad[10] = uVar6;
  (pTVar21->Data).Pad[0xb] = uVar7;
  (pTVar21->Data).Pad[0x1c] = '\0';
  uVar2 = param_1->field_0x1c;
  (pTVar21->Data).Pad[0x1c] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0xd;
    uVar6 = param_1->field_0xe;
    uVar7 = param_1->field_0xf;
    uVar8 = param_1->field_0x10;
    uVar9 = param_1->field_0x11;
    uVar10 = param_1->field_0x12;
    uVar11 = param_1->field_0x13;
    uVar12 = param_1->field_0x14;
    uVar13 = param_1->field_0x15;
    uVar14 = param_1->field_0x16;
    uVar15 = param_1->field_0x17;
    uVar16 = param_1->field_0x18;
    uVar17 = param_1->field_0x19;
    uVar18 = param_1->field_0x1a;
    uVar19 = param_1->field_0x1b;
    (pTVar21->Data).Pad[0xc] = param_1->field_0xc;
    (pTVar21->Data).Pad[0xd] = uVar1;
    (pTVar21->Data).Pad[0xe] = uVar6;
    (pTVar21->Data).Pad[0xf] = uVar7;
    (pTVar21->Data).Pad[0x10] = uVar8;
    (pTVar21->Data).Pad[0x11] = uVar9;
    (pTVar21->Data).Pad[0x12] = uVar10;
    (pTVar21->Data).Pad[0x13] = uVar11;
    (pTVar21->Data).Pad[0x14] = uVar12;
    (pTVar21->Data).Pad[0x15] = uVar13;
    (pTVar21->Data).Pad[0x16] = uVar14;
    (pTVar21->Data).Pad[0x17] = uVar15;
    (pTVar21->Data).Pad[0x18] = uVar16;
    (pTVar21->Data).Pad[0x19] = uVar17;
    (pTVar21->Data).Pad[0x1a] = uVar18;
    (pTVar21->Data).Pad[0x1b] = uVar19;
  }
  uVar1 = param_1->field_0x21;
  (pTVar21->Data).Pad[0x20] = param_1->field_0x20;
  (pTVar21->Data).Pad[0x21] = uVar1;
  (pTVar21->Data).Pad[0x24] = 0xff;
  (pTVar21->Data).Pad[0x25] = 0xff;
  (pTVar21->Data).Pad[0x26] = 0xff;
  (pTVar21->Data).Pad[0x27] = 0xff;
  (pTVar21->Data).Pad[0x28] = '\0';
  (pTVar21->Data).Pad[0x29] = '\0';
  (pTVar21->Data).Pad[0x2a] = '\0';
  (pTVar21->Data).Pad[0x2b] = '\0';
  if (*(int *)&param_1->field_0x24 != -1) {
    uVar1 = param_1->field_0x25;
    uVar6 = param_1->field_0x26;
    uVar7 = param_1->field_0x27;
    uVar8 = param_1->field_0x28;
    uVar9 = param_1->field_0x29;
    uVar10 = param_1->field_0x2a;
    uVar11 = param_1->field_0x2b;
    (pTVar21->Data).Pad[0x24] = param_1->field_0x24;
    (pTVar21->Data).Pad[0x25] = uVar1;
    (pTVar21->Data).Pad[0x26] = uVar6;
    (pTVar21->Data).Pad[0x27] = uVar7;
    (pTVar21->Data).Pad[0x28] = uVar8;
    (pTVar21->Data).Pad[0x29] = uVar9;
    (pTVar21->Data).Pad[0x2a] = uVar10;
    (pTVar21->Data).Pad[0x2b] = uVar11;
  }
  uVar1 = param_1->field_0x31;
  uVar6 = param_1->field_0x32;
  uVar7 = param_1->field_0x33;
  (pTVar21->Data).Pad[0x30] = param_1->field_0x30;
  (pTVar21->Data).Pad[0x31] = uVar1;
  (pTVar21->Data).Pad[0x32] = uVar6;
  (pTVar21->Data).Pad[0x33] = uVar7;
  pTVar21->field_0x40 = 0;
  cVar3 = param_1->field_0x40;
  pTVar21->field_0x40 = cVar3;
  if (cVar3 != '\0') {
    uVar1 = param_1->field_0x39;
    uVar6 = param_1->field_0x3a;
    uVar7 = param_1->field_0x3b;
    uVar8 = param_1->field_0x3c;
    uVar9 = param_1->field_0x3d;
    uVar10 = param_1->field_0x3e;
    uVar11 = param_1->field_0x3f;
    (pTVar21->Data).Pad[0x38] = param_1->field_0x38;
    (pTVar21->Data).Pad[0x39] = uVar1;
    (pTVar21->Data).Pad[0x3a] = uVar6;
    (pTVar21->Data).Pad[0x3b] = uVar7;
    (pTVar21->Data).Pad[0x3c] = uVar8;
    (pTVar21->Data).Pad[0x3d] = uVar9;
    (pTVar21->Data).Pad[0x3e] = uVar10;
    (pTVar21->Data).Pad[0x3f] = uVar11;
  }
  uVar1 = param_1->field_0x49;
  uVar6 = param_1->field_0x4a;
  uVar7 = param_1->field_0x4b;
  pTVar21[1].Data.Pad[0] = param_1->field_0x48;
  pTVar21[1].Data.Pad[1] = uVar1;
  pTVar21[1].Data.Pad[2] = uVar6;
  pTVar21[1].Data.Pad[3] = uVar7;
  pTVar21[1].Data.Pad[0x10] = '\0';
  uVar2 = param_1->field_0x58;
  pTVar21[1].Data.Pad[0x10] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x51;
    uVar6 = param_1->field_0x52;
    uVar7 = param_1->field_0x53;
    uVar8 = param_1->field_0x54;
    uVar9 = param_1->field_0x55;
    uVar10 = param_1->field_0x56;
    uVar11 = param_1->field_0x57;
    pTVar5 = pTVar21 + 1;
    (pTVar5->Data).Pad[8] = param_1->field_0x50;
    (pTVar5->Data).Pad[9] = uVar1;
    (pTVar5->Data).Pad[10] = uVar6;
    (pTVar5->Data).Pad[0xb] = uVar7;
    (pTVar5->Data).Pad[0xc] = uVar8;
    (pTVar5->Data).Pad[0xd] = uVar9;
    (pTVar5->Data).Pad[0xe] = uVar10;
    (pTVar5->Data).Pad[0xf] = uVar11;
  }
  pTVar21[1].Data.Pad[0x18] = param_1->field_0x60;
  *(undefined ***)(pTVar21->Data).Pad =
       &
       ___7__TEntityBuilder_U__TAddConditional_UFGuid___MovieScene_UE__U__TAdd_VFName___23_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_U523__MovieScene_UE__6B_
  ;
  if (!this->bIsValid) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar20) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar21 = this;
  if (!this->bInline) {
    pTVar21 = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar20) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (pTVar21 != this) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar20) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_> @ 14674a480

void __thiscall
TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_>
          (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *this,
          TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
          *param_1)

{
  undefined1 uVar1;
  uchar uVar2;
  char cVar3;
  code *pcVar4;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar5;
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
  undefined1 uVar18;
  undefined1 uVar19;
  bool bVar20;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar21;
  
  this->bInline = false;
  pTVar21 = FMemory::Malloc(0x80,8);
  this->bIsValid = true;
  *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad = pTVar21;
  if (this->bInline) {
    pTVar21 = this;
  }
  *(undefined ***)(pTVar21->Data).Pad =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03__U__TAddConditional_UFGuid___MovieScene_UE__U__TAdd_VFName___34_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___34_U634_U634__MovieScene_UE__6B_
  ;
  uVar1 = param_1->field_0x9;
  uVar6 = param_1->field_0xa;
  uVar7 = param_1->field_0xb;
  (pTVar21->Data).Pad[8] = param_1->field_0x8;
  (pTVar21->Data).Pad[9] = uVar1;
  (pTVar21->Data).Pad[10] = uVar6;
  (pTVar21->Data).Pad[0xb] = uVar7;
  (pTVar21->Data).Pad[0x1c] = '\0';
  uVar2 = param_1->field_0x1c;
  (pTVar21->Data).Pad[0x1c] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0xd;
    uVar6 = param_1->field_0xe;
    uVar7 = param_1->field_0xf;
    uVar8 = param_1->field_0x10;
    uVar9 = param_1->field_0x11;
    uVar10 = param_1->field_0x12;
    uVar11 = param_1->field_0x13;
    uVar12 = param_1->field_0x14;
    uVar13 = param_1->field_0x15;
    uVar14 = param_1->field_0x16;
    uVar15 = param_1->field_0x17;
    uVar16 = param_1->field_0x18;
    uVar17 = param_1->field_0x19;
    uVar18 = param_1->field_0x1a;
    uVar19 = param_1->field_0x1b;
    (pTVar21->Data).Pad[0xc] = param_1->field_0xc;
    (pTVar21->Data).Pad[0xd] = uVar1;
    (pTVar21->Data).Pad[0xe] = uVar6;
    (pTVar21->Data).Pad[0xf] = uVar7;
    (pTVar21->Data).Pad[0x10] = uVar8;
    (pTVar21->Data).Pad[0x11] = uVar9;
    (pTVar21->Data).Pad[0x12] = uVar10;
    (pTVar21->Data).Pad[0x13] = uVar11;
    (pTVar21->Data).Pad[0x14] = uVar12;
    (pTVar21->Data).Pad[0x15] = uVar13;
    (pTVar21->Data).Pad[0x16] = uVar14;
    (pTVar21->Data).Pad[0x17] = uVar15;
    (pTVar21->Data).Pad[0x18] = uVar16;
    (pTVar21->Data).Pad[0x19] = uVar17;
    (pTVar21->Data).Pad[0x1a] = uVar18;
    (pTVar21->Data).Pad[0x1b] = uVar19;
  }
  uVar1 = param_1->field_0x21;
  (pTVar21->Data).Pad[0x20] = param_1->field_0x20;
  (pTVar21->Data).Pad[0x21] = uVar1;
  (pTVar21->Data).Pad[0x24] = 0xff;
  (pTVar21->Data).Pad[0x25] = 0xff;
  (pTVar21->Data).Pad[0x26] = 0xff;
  (pTVar21->Data).Pad[0x27] = 0xff;
  (pTVar21->Data).Pad[0x28] = '\0';
  (pTVar21->Data).Pad[0x29] = '\0';
  (pTVar21->Data).Pad[0x2a] = '\0';
  (pTVar21->Data).Pad[0x2b] = '\0';
  if (*(int *)&param_1->field_0x24 != -1) {
    uVar1 = param_1->field_0x25;
    uVar6 = param_1->field_0x26;
    uVar7 = param_1->field_0x27;
    uVar8 = param_1->field_0x28;
    uVar9 = param_1->field_0x29;
    uVar10 = param_1->field_0x2a;
    uVar11 = param_1->field_0x2b;
    (pTVar21->Data).Pad[0x24] = param_1->field_0x24;
    (pTVar21->Data).Pad[0x25] = uVar1;
    (pTVar21->Data).Pad[0x26] = uVar6;
    (pTVar21->Data).Pad[0x27] = uVar7;
    (pTVar21->Data).Pad[0x28] = uVar8;
    (pTVar21->Data).Pad[0x29] = uVar9;
    (pTVar21->Data).Pad[0x2a] = uVar10;
    (pTVar21->Data).Pad[0x2b] = uVar11;
  }
  uVar1 = param_1->field_0x31;
  uVar6 = param_1->field_0x32;
  uVar7 = param_1->field_0x33;
  (pTVar21->Data).Pad[0x30] = param_1->field_0x30;
  (pTVar21->Data).Pad[0x31] = uVar1;
  (pTVar21->Data).Pad[0x32] = uVar6;
  (pTVar21->Data).Pad[0x33] = uVar7;
  pTVar21->field_0x40 = 0;
  cVar3 = param_1->field_0x40;
  pTVar21->field_0x40 = cVar3;
  if (cVar3 != '\0') {
    uVar1 = param_1->field_0x39;
    uVar6 = param_1->field_0x3a;
    uVar7 = param_1->field_0x3b;
    uVar8 = param_1->field_0x3c;
    uVar9 = param_1->field_0x3d;
    uVar10 = param_1->field_0x3e;
    uVar11 = param_1->field_0x3f;
    (pTVar21->Data).Pad[0x38] = param_1->field_0x38;
    (pTVar21->Data).Pad[0x39] = uVar1;
    (pTVar21->Data).Pad[0x3a] = uVar6;
    (pTVar21->Data).Pad[0x3b] = uVar7;
    (pTVar21->Data).Pad[0x3c] = uVar8;
    (pTVar21->Data).Pad[0x3d] = uVar9;
    (pTVar21->Data).Pad[0x3e] = uVar10;
    (pTVar21->Data).Pad[0x3f] = uVar11;
  }
  uVar1 = param_1->field_0x49;
  uVar6 = param_1->field_0x4a;
  uVar7 = param_1->field_0x4b;
  pTVar21[1].Data.Pad[0] = param_1->field_0x48;
  pTVar21[1].Data.Pad[1] = uVar1;
  pTVar21[1].Data.Pad[2] = uVar6;
  pTVar21[1].Data.Pad[3] = uVar7;
  pTVar21[1].Data.Pad[0x10] = '\0';
  uVar2 = param_1->field_0x58;
  pTVar21[1].Data.Pad[0x10] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x51;
    uVar6 = param_1->field_0x52;
    uVar7 = param_1->field_0x53;
    uVar8 = param_1->field_0x54;
    uVar9 = param_1->field_0x55;
    uVar10 = param_1->field_0x56;
    uVar11 = param_1->field_0x57;
    pTVar5 = pTVar21 + 1;
    (pTVar5->Data).Pad[8] = param_1->field_0x50;
    (pTVar5->Data).Pad[9] = uVar1;
    (pTVar5->Data).Pad[10] = uVar6;
    (pTVar5->Data).Pad[0xb] = uVar7;
    (pTVar5->Data).Pad[0xc] = uVar8;
    (pTVar5->Data).Pad[0xd] = uVar9;
    (pTVar5->Data).Pad[0xe] = uVar10;
    (pTVar5->Data).Pad[0xf] = uVar11;
  }
  uVar1 = param_1->field_0x61;
  uVar6 = param_1->field_0x62;
  uVar7 = param_1->field_0x63;
  pTVar5 = pTVar21 + 1;
  (pTVar5->Data).Pad[0x18] = param_1->field_0x60;
  (pTVar5->Data).Pad[0x19] = uVar1;
  (pTVar5->Data).Pad[0x1a] = uVar6;
  (pTVar5->Data).Pad[0x1b] = uVar7;
  pTVar21[1].Data.Pad[0x28] = '\0';
  uVar2 = param_1->field_0x70;
  pTVar21[1].Data.Pad[0x28] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x69;
    uVar6 = param_1->field_0x6a;
    uVar7 = param_1->field_0x6b;
    uVar8 = param_1->field_0x6c;
    uVar9 = param_1->field_0x6d;
    uVar10 = param_1->field_0x6e;
    uVar11 = param_1->field_0x6f;
    pTVar5 = pTVar21 + 1;
    (pTVar5->Data).Pad[0x20] = param_1->field_0x68;
    (pTVar5->Data).Pad[0x21] = uVar1;
    (pTVar5->Data).Pad[0x22] = uVar6;
    (pTVar5->Data).Pad[0x23] = uVar7;
    (pTVar5->Data).Pad[0x24] = uVar8;
    (pTVar5->Data).Pad[0x25] = uVar9;
    (pTVar5->Data).Pad[0x26] = uVar10;
    (pTVar5->Data).Pad[0x27] = uVar11;
  }
  pTVar21[1].Data.Pad[0x30] = param_1->field_0x78;
  *(undefined ***)(pTVar21->Data).Pad =
       &
       ___7__TEntityBuilder_U__TAddConditional_UFGuid___MovieScene_UE__U__TAdd_VFName___23_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_U523_U523__MovieScene_UE__6B_
  ;
  if (!this->bIsValid) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar20) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar21 = this;
  if (!this->bInline) {
    pTVar21 = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar20) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (pTVar21 != this) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar20) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_> @ 14674a630

void __thiscall
TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_>
          (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *this,
          TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
          *param_1)

{
  undefined1 uVar1;
  uchar uVar2;
  char cVar3;
  code *pcVar4;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar5;
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
  undefined1 uVar18;
  undefined1 uVar19;
  bool bVar20;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar21;
  
  this->bInline = false;
  pTVar21 = FMemory::Malloc(0x98,8);
  this->bIsValid = true;
  *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad = pTVar21;
  if (this->bInline) {
    pTVar21 = this;
  }
  *(undefined ***)(pTVar21->Data).Pad =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04__U__TAddConditional_UFGuid___MovieScene_UE__U__TAdd_VFName___34_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___34_U634_U634_U634__MovieScene_UE__6B_
  ;
  uVar1 = param_1->field_0x9;
  uVar6 = param_1->field_0xa;
  uVar7 = param_1->field_0xb;
  (pTVar21->Data).Pad[8] = param_1->field_0x8;
  (pTVar21->Data).Pad[9] = uVar1;
  (pTVar21->Data).Pad[10] = uVar6;
  (pTVar21->Data).Pad[0xb] = uVar7;
  (pTVar21->Data).Pad[0x1c] = '\0';
  uVar2 = param_1->field_0x1c;
  (pTVar21->Data).Pad[0x1c] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0xd;
    uVar6 = param_1->field_0xe;
    uVar7 = param_1->field_0xf;
    uVar8 = param_1->field_0x10;
    uVar9 = param_1->field_0x11;
    uVar10 = param_1->field_0x12;
    uVar11 = param_1->field_0x13;
    uVar12 = param_1->field_0x14;
    uVar13 = param_1->field_0x15;
    uVar14 = param_1->field_0x16;
    uVar15 = param_1->field_0x17;
    uVar16 = param_1->field_0x18;
    uVar17 = param_1->field_0x19;
    uVar18 = param_1->field_0x1a;
    uVar19 = param_1->field_0x1b;
    (pTVar21->Data).Pad[0xc] = param_1->field_0xc;
    (pTVar21->Data).Pad[0xd] = uVar1;
    (pTVar21->Data).Pad[0xe] = uVar6;
    (pTVar21->Data).Pad[0xf] = uVar7;
    (pTVar21->Data).Pad[0x10] = uVar8;
    (pTVar21->Data).Pad[0x11] = uVar9;
    (pTVar21->Data).Pad[0x12] = uVar10;
    (pTVar21->Data).Pad[0x13] = uVar11;
    (pTVar21->Data).Pad[0x14] = uVar12;
    (pTVar21->Data).Pad[0x15] = uVar13;
    (pTVar21->Data).Pad[0x16] = uVar14;
    (pTVar21->Data).Pad[0x17] = uVar15;
    (pTVar21->Data).Pad[0x18] = uVar16;
    (pTVar21->Data).Pad[0x19] = uVar17;
    (pTVar21->Data).Pad[0x1a] = uVar18;
    (pTVar21->Data).Pad[0x1b] = uVar19;
  }
  uVar1 = param_1->field_0x21;
  (pTVar21->Data).Pad[0x20] = param_1->field_0x20;
  (pTVar21->Data).Pad[0x21] = uVar1;
  (pTVar21->Data).Pad[0x24] = 0xff;
  (pTVar21->Data).Pad[0x25] = 0xff;
  (pTVar21->Data).Pad[0x26] = 0xff;
  (pTVar21->Data).Pad[0x27] = 0xff;
  (pTVar21->Data).Pad[0x28] = '\0';
  (pTVar21->Data).Pad[0x29] = '\0';
  (pTVar21->Data).Pad[0x2a] = '\0';
  (pTVar21->Data).Pad[0x2b] = '\0';
  if (*(int *)&param_1->field_0x24 != -1) {
    uVar1 = param_1->field_0x25;
    uVar6 = param_1->field_0x26;
    uVar7 = param_1->field_0x27;
    uVar8 = param_1->field_0x28;
    uVar9 = param_1->field_0x29;
    uVar10 = param_1->field_0x2a;
    uVar11 = param_1->field_0x2b;
    (pTVar21->Data).Pad[0x24] = param_1->field_0x24;
    (pTVar21->Data).Pad[0x25] = uVar1;
    (pTVar21->Data).Pad[0x26] = uVar6;
    (pTVar21->Data).Pad[0x27] = uVar7;
    (pTVar21->Data).Pad[0x28] = uVar8;
    (pTVar21->Data).Pad[0x29] = uVar9;
    (pTVar21->Data).Pad[0x2a] = uVar10;
    (pTVar21->Data).Pad[0x2b] = uVar11;
  }
  uVar1 = param_1->field_0x31;
  uVar6 = param_1->field_0x32;
  uVar7 = param_1->field_0x33;
  (pTVar21->Data).Pad[0x30] = param_1->field_0x30;
  (pTVar21->Data).Pad[0x31] = uVar1;
  (pTVar21->Data).Pad[0x32] = uVar6;
  (pTVar21->Data).Pad[0x33] = uVar7;
  pTVar21->field_0x40 = 0;
  cVar3 = param_1->field_0x40;
  pTVar21->field_0x40 = cVar3;
  if (cVar3 != '\0') {
    uVar1 = param_1->field_0x39;
    uVar6 = param_1->field_0x3a;
    uVar7 = param_1->field_0x3b;
    uVar8 = param_1->field_0x3c;
    uVar9 = param_1->field_0x3d;
    uVar10 = param_1->field_0x3e;
    uVar11 = param_1->field_0x3f;
    (pTVar21->Data).Pad[0x38] = param_1->field_0x38;
    (pTVar21->Data).Pad[0x39] = uVar1;
    (pTVar21->Data).Pad[0x3a] = uVar6;
    (pTVar21->Data).Pad[0x3b] = uVar7;
    (pTVar21->Data).Pad[0x3c] = uVar8;
    (pTVar21->Data).Pad[0x3d] = uVar9;
    (pTVar21->Data).Pad[0x3e] = uVar10;
    (pTVar21->Data).Pad[0x3f] = uVar11;
  }
  uVar1 = param_1->field_0x49;
  uVar6 = param_1->field_0x4a;
  uVar7 = param_1->field_0x4b;
  pTVar21[1].Data.Pad[0] = param_1->field_0x48;
  pTVar21[1].Data.Pad[1] = uVar1;
  pTVar21[1].Data.Pad[2] = uVar6;
  pTVar21[1].Data.Pad[3] = uVar7;
  pTVar21[1].Data.Pad[0x10] = '\0';
  uVar2 = param_1->field_0x58;
  pTVar21[1].Data.Pad[0x10] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x51;
    uVar6 = param_1->field_0x52;
    uVar7 = param_1->field_0x53;
    uVar8 = param_1->field_0x54;
    uVar9 = param_1->field_0x55;
    uVar10 = param_1->field_0x56;
    uVar11 = param_1->field_0x57;
    pTVar5 = pTVar21 + 1;
    (pTVar5->Data).Pad[8] = param_1->field_0x50;
    (pTVar5->Data).Pad[9] = uVar1;
    (pTVar5->Data).Pad[10] = uVar6;
    (pTVar5->Data).Pad[0xb] = uVar7;
    (pTVar5->Data).Pad[0xc] = uVar8;
    (pTVar5->Data).Pad[0xd] = uVar9;
    (pTVar5->Data).Pad[0xe] = uVar10;
    (pTVar5->Data).Pad[0xf] = uVar11;
  }
  uVar1 = param_1->field_0x61;
  uVar6 = param_1->field_0x62;
  uVar7 = param_1->field_0x63;
  pTVar5 = pTVar21 + 1;
  (pTVar5->Data).Pad[0x18] = param_1->field_0x60;
  (pTVar5->Data).Pad[0x19] = uVar1;
  (pTVar5->Data).Pad[0x1a] = uVar6;
  (pTVar5->Data).Pad[0x1b] = uVar7;
  pTVar21[1].Data.Pad[0x28] = '\0';
  uVar2 = param_1->field_0x70;
  pTVar21[1].Data.Pad[0x28] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x69;
    uVar6 = param_1->field_0x6a;
    uVar7 = param_1->field_0x6b;
    uVar8 = param_1->field_0x6c;
    uVar9 = param_1->field_0x6d;
    uVar10 = param_1->field_0x6e;
    uVar11 = param_1->field_0x6f;
    pTVar5 = pTVar21 + 1;
    (pTVar5->Data).Pad[0x20] = param_1->field_0x68;
    (pTVar5->Data).Pad[0x21] = uVar1;
    (pTVar5->Data).Pad[0x22] = uVar6;
    (pTVar5->Data).Pad[0x23] = uVar7;
    (pTVar5->Data).Pad[0x24] = uVar8;
    (pTVar5->Data).Pad[0x25] = uVar9;
    (pTVar5->Data).Pad[0x26] = uVar10;
    (pTVar5->Data).Pad[0x27] = uVar11;
  }
  uVar1 = param_1->field_0x79;
  uVar6 = param_1->field_0x7a;
  uVar7 = param_1->field_0x7b;
  pTVar5 = pTVar21 + 1;
  (pTVar5->Data).Pad[0x30] = param_1->field_0x78;
  (pTVar5->Data).Pad[0x31] = uVar1;
  (pTVar5->Data).Pad[0x32] = uVar6;
  (pTVar5->Data).Pad[0x33] = uVar7;
  pTVar21[1].field_0x40 = 0;
  cVar3 = param_1->field_0x88;
  pTVar21[1].field_0x40 = cVar3;
  if (cVar3 != '\0') {
    uVar1 = param_1->field_0x81;
    uVar6 = param_1->field_0x82;
    uVar7 = param_1->field_0x83;
    uVar8 = param_1->field_0x84;
    uVar9 = param_1->field_0x85;
    uVar10 = param_1->field_0x86;
    uVar11 = param_1->field_0x87;
    pTVar5 = pTVar21 + 1;
    (pTVar5->Data).Pad[0x38] = param_1->field_0x80;
    (pTVar5->Data).Pad[0x39] = uVar1;
    (pTVar5->Data).Pad[0x3a] = uVar6;
    (pTVar5->Data).Pad[0x3b] = uVar7;
    (pTVar5->Data).Pad[0x3c] = uVar8;
    (pTVar5->Data).Pad[0x3d] = uVar9;
    (pTVar5->Data).Pad[0x3e] = uVar10;
    (pTVar5->Data).Pad[0x3f] = uVar11;
  }
  pTVar21[2].Data.Pad[0] = param_1->field_0x90;
  *(undefined ***)(pTVar21->Data).Pad =
       &
       ___7__TEntityBuilder_U__TAddConditional_UFGuid___MovieScene_UE__U__TAdd_VFName___23_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_U523_U523_U523__MovieScene_UE__6B_
  ;
  if (!this->bIsValid) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar20) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar21 = this;
  if (!this->bInline) {
    pTVar21 = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar20) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (pTVar21 != this) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar20) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_> @ 14674a810

void __thiscall
TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_>
          (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *this,
          TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
          *param_1)

{
  undefined1 uVar1;
  uchar uVar2;
  char cVar3;
  code *pcVar4;
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
  undefined1 uVar18;
  bool bVar19;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar20;
  
  this->bInline = false;
  pTVar20 = FMemory::Malloc(0x50,8);
  this->bIsValid = true;
  *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad = pTVar20;
  if (this->bInline) {
    pTVar20 = this;
  }
  *(undefined ***)(pTVar20->Data).Pad =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02__U__TAddConditional_UFGuid___MovieScene_UE__U__TAdd_VFName___34_UFAdd_34_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___34__MovieScene_UE__6B_
  ;
  uVar1 = param_1->field_0x9;
  uVar5 = param_1->field_0xa;
  uVar6 = param_1->field_0xb;
  (pTVar20->Data).Pad[8] = param_1->field_0x8;
  (pTVar20->Data).Pad[9] = uVar1;
  (pTVar20->Data).Pad[10] = uVar5;
  (pTVar20->Data).Pad[0xb] = uVar6;
  (pTVar20->Data).Pad[0x1c] = '\0';
  uVar2 = param_1->field_0x1c;
  (pTVar20->Data).Pad[0x1c] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0xd;
    uVar5 = param_1->field_0xe;
    uVar6 = param_1->field_0xf;
    uVar7 = param_1->field_0x10;
    uVar8 = param_1->field_0x11;
    uVar9 = param_1->field_0x12;
    uVar10 = param_1->field_0x13;
    uVar11 = param_1->field_0x14;
    uVar12 = param_1->field_0x15;
    uVar13 = param_1->field_0x16;
    uVar14 = param_1->field_0x17;
    uVar15 = param_1->field_0x18;
    uVar16 = param_1->field_0x19;
    uVar17 = param_1->field_0x1a;
    uVar18 = param_1->field_0x1b;
    (pTVar20->Data).Pad[0xc] = param_1->field_0xc;
    (pTVar20->Data).Pad[0xd] = uVar1;
    (pTVar20->Data).Pad[0xe] = uVar5;
    (pTVar20->Data).Pad[0xf] = uVar6;
    (pTVar20->Data).Pad[0x10] = uVar7;
    (pTVar20->Data).Pad[0x11] = uVar8;
    (pTVar20->Data).Pad[0x12] = uVar9;
    (pTVar20->Data).Pad[0x13] = uVar10;
    (pTVar20->Data).Pad[0x14] = uVar11;
    (pTVar20->Data).Pad[0x15] = uVar12;
    (pTVar20->Data).Pad[0x16] = uVar13;
    (pTVar20->Data).Pad[0x17] = uVar14;
    (pTVar20->Data).Pad[0x18] = uVar15;
    (pTVar20->Data).Pad[0x19] = uVar16;
    (pTVar20->Data).Pad[0x1a] = uVar17;
    (pTVar20->Data).Pad[0x1b] = uVar18;
  }
  uVar1 = param_1->field_0x21;
  (pTVar20->Data).Pad[0x20] = param_1->field_0x20;
  (pTVar20->Data).Pad[0x21] = uVar1;
  (pTVar20->Data).Pad[0x24] = 0xff;
  (pTVar20->Data).Pad[0x25] = 0xff;
  (pTVar20->Data).Pad[0x26] = 0xff;
  (pTVar20->Data).Pad[0x27] = 0xff;
  (pTVar20->Data).Pad[0x28] = '\0';
  (pTVar20->Data).Pad[0x29] = '\0';
  (pTVar20->Data).Pad[0x2a] = '\0';
  (pTVar20->Data).Pad[0x2b] = '\0';
  if (*(int *)&param_1->field_0x24 != -1) {
    uVar1 = param_1->field_0x25;
    uVar5 = param_1->field_0x26;
    uVar6 = param_1->field_0x27;
    uVar7 = param_1->field_0x28;
    uVar8 = param_1->field_0x29;
    uVar9 = param_1->field_0x2a;
    uVar10 = param_1->field_0x2b;
    (pTVar20->Data).Pad[0x24] = param_1->field_0x24;
    (pTVar20->Data).Pad[0x25] = uVar1;
    (pTVar20->Data).Pad[0x26] = uVar5;
    (pTVar20->Data).Pad[0x27] = uVar6;
    (pTVar20->Data).Pad[0x28] = uVar7;
    (pTVar20->Data).Pad[0x29] = uVar8;
    (pTVar20->Data).Pad[0x2a] = uVar9;
    (pTVar20->Data).Pad[0x2b] = uVar10;
  }
  uVar1 = param_1->field_0x2d;
  (pTVar20->Data).Pad[0x2c] = param_1->field_0x2c;
  (pTVar20->Data).Pad[0x2d] = uVar1;
  uVar1 = param_1->field_0x31;
  uVar5 = param_1->field_0x32;
  uVar6 = param_1->field_0x33;
  (pTVar20->Data).Pad[0x30] = param_1->field_0x30;
  (pTVar20->Data).Pad[0x31] = uVar1;
  (pTVar20->Data).Pad[0x32] = uVar5;
  (pTVar20->Data).Pad[0x33] = uVar6;
  pTVar20->field_0x40 = 0;
  cVar3 = param_1->field_0x40;
  pTVar20->field_0x40 = cVar3;
  if (cVar3 != '\0') {
    uVar1 = param_1->field_0x39;
    uVar5 = param_1->field_0x3a;
    uVar6 = param_1->field_0x3b;
    uVar7 = param_1->field_0x3c;
    uVar8 = param_1->field_0x3d;
    uVar9 = param_1->field_0x3e;
    uVar10 = param_1->field_0x3f;
    (pTVar20->Data).Pad[0x38] = param_1->field_0x38;
    (pTVar20->Data).Pad[0x39] = uVar1;
    (pTVar20->Data).Pad[0x3a] = uVar5;
    (pTVar20->Data).Pad[0x3b] = uVar6;
    (pTVar20->Data).Pad[0x3c] = uVar7;
    (pTVar20->Data).Pad[0x3d] = uVar8;
    (pTVar20->Data).Pad[0x3e] = uVar9;
    (pTVar20->Data).Pad[0x3f] = uVar10;
  }
  pTVar20[1].Data.Pad[0] = param_1->field_0x48;
  *(undefined ***)(pTVar20->Data).Pad =
       &
       ___7__TEntityBuilder_U__TAddConditional_UFGuid___MovieScene_UE__U__TAdd_VFName___23_UFAdd_23_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23__MovieScene_UE__6B_
  ;
  if (!this->bIsValid) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar19) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar20 = this;
  if (!this->bInline) {
    pTVar20 = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar19) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (pTVar20 != this) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar19) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAdd,UE::MovieScene::TAdd<bool>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAdd,UE::MovieScene::TAdd<bool>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>_>_> @ 14674a980

void __thiscall
TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAdd,UE::MovieScene::TAdd<bool>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAdd,UE::MovieScene::TAdd<bool>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>_>_>
          (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *this,
          TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAdd,UE::MovieScene::TAdd<bool>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>_>
          *param_1)

{
  undefined1 uVar1;
  uchar uVar2;
  char cVar3;
  code *pcVar4;
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
  undefined1 uVar18;
  bool bVar19;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar20;
  
  this->bInline = false;
  pTVar20 = FMemory::Malloc(0x48,8);
  this->bIsValid = true;
  *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad = pTVar20;
  if (this->bInline) {
    pTVar20 = this;
  }
  *(undefined ***)(pTVar20->Data).Pad =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02__U__TAddConditional_UFGuid___MovieScene_UE__UFAdd_34_U__TAdd__N_34_U__TAdd_UFMovieScenePropertyBinding___34__MovieScene_UE__6B_
  ;
  uVar1 = param_1->field_0x9;
  uVar5 = param_1->field_0xa;
  uVar6 = param_1->field_0xb;
  (pTVar20->Data).Pad[8] = param_1->field_0x8;
  (pTVar20->Data).Pad[9] = uVar1;
  (pTVar20->Data).Pad[10] = uVar5;
  (pTVar20->Data).Pad[0xb] = uVar6;
  (pTVar20->Data).Pad[0x1c] = '\0';
  uVar2 = param_1->field_0x1c;
  (pTVar20->Data).Pad[0x1c] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0xd;
    uVar5 = param_1->field_0xe;
    uVar6 = param_1->field_0xf;
    uVar7 = param_1->field_0x10;
    uVar8 = param_1->field_0x11;
    uVar9 = param_1->field_0x12;
    uVar10 = param_1->field_0x13;
    uVar11 = param_1->field_0x14;
    uVar12 = param_1->field_0x15;
    uVar13 = param_1->field_0x16;
    uVar14 = param_1->field_0x17;
    uVar15 = param_1->field_0x18;
    uVar16 = param_1->field_0x19;
    uVar17 = param_1->field_0x1a;
    uVar18 = param_1->field_0x1b;
    (pTVar20->Data).Pad[0xc] = param_1->field_0xc;
    (pTVar20->Data).Pad[0xd] = uVar1;
    (pTVar20->Data).Pad[0xe] = uVar5;
    (pTVar20->Data).Pad[0xf] = uVar6;
    (pTVar20->Data).Pad[0x10] = uVar7;
    (pTVar20->Data).Pad[0x11] = uVar8;
    (pTVar20->Data).Pad[0x12] = uVar9;
    (pTVar20->Data).Pad[0x13] = uVar10;
    (pTVar20->Data).Pad[0x14] = uVar11;
    (pTVar20->Data).Pad[0x15] = uVar12;
    (pTVar20->Data).Pad[0x16] = uVar13;
    (pTVar20->Data).Pad[0x17] = uVar14;
    (pTVar20->Data).Pad[0x18] = uVar15;
    (pTVar20->Data).Pad[0x19] = uVar16;
    (pTVar20->Data).Pad[0x1a] = uVar17;
    (pTVar20->Data).Pad[0x1b] = uVar18;
  }
  uVar1 = param_1->field_0x21;
  (pTVar20->Data).Pad[0x20] = param_1->field_0x20;
  (pTVar20->Data).Pad[0x21] = uVar1;
  uVar1 = param_1->field_0x23;
  (pTVar20->Data).Pad[0x22] = param_1->field_0x22;
  (pTVar20->Data).Pad[0x23] = uVar1;
  (pTVar20->Data).Pad[0x25] = '\0';
  uVar2 = param_1->field_0x25;
  (pTVar20->Data).Pad[0x25] = uVar2;
  if (uVar2 != '\0') {
    (pTVar20->Data).Pad[0x24] = param_1->field_0x24;
  }
  uVar1 = param_1->field_0x29;
  (pTVar20->Data).Pad[0x28] = param_1->field_0x28;
  (pTVar20->Data).Pad[0x29] = uVar1;
  pTVar20->field_0x40 = 0;
  cVar3 = param_1->field_0x40;
  pTVar20->field_0x40 = cVar3;
  if (cVar3 != '\0') {
    uVar1 = param_1->field_0x2d;
    uVar5 = param_1->field_0x2e;
    uVar6 = param_1->field_0x2f;
    uVar7 = param_1->field_0x30;
    uVar8 = param_1->field_0x31;
    uVar9 = param_1->field_0x32;
    uVar10 = param_1->field_0x33;
    uVar11 = param_1->field_0x34;
    uVar12 = param_1->field_0x35;
    uVar13 = param_1->field_0x36;
    uVar14 = param_1->field_0x37;
    uVar15 = param_1->field_0x38;
    uVar16 = param_1->field_0x39;
    uVar17 = param_1->field_0x3a;
    uVar18 = param_1->field_0x3b;
    (pTVar20->Data).Pad[0x2c] = param_1->field_0x2c;
    (pTVar20->Data).Pad[0x2d] = uVar1;
    (pTVar20->Data).Pad[0x2e] = uVar5;
    (pTVar20->Data).Pad[0x2f] = uVar6;
    (pTVar20->Data).Pad[0x30] = uVar7;
    (pTVar20->Data).Pad[0x31] = uVar8;
    (pTVar20->Data).Pad[0x32] = uVar9;
    (pTVar20->Data).Pad[0x33] = uVar10;
    (pTVar20->Data).Pad[0x34] = uVar11;
    (pTVar20->Data).Pad[0x35] = uVar12;
    (pTVar20->Data).Pad[0x36] = uVar13;
    (pTVar20->Data).Pad[0x37] = uVar14;
    (pTVar20->Data).Pad[0x38] = uVar15;
    (pTVar20->Data).Pad[0x39] = uVar16;
    (pTVar20->Data).Pad[0x3a] = uVar17;
    (pTVar20->Data).Pad[0x3b] = uVar18;
    uVar1 = param_1->field_0x3d;
    uVar5 = param_1->field_0x3e;
    uVar6 = param_1->field_0x3f;
    (pTVar20->Data).Pad[0x3c] = param_1->field_0x3c;
    (pTVar20->Data).Pad[0x3d] = uVar1;
    (pTVar20->Data).Pad[0x3e] = uVar5;
    (pTVar20->Data).Pad[0x3f] = uVar6;
  }
  pTVar20->field_0x44 = param_1->field_0x44;
  *(undefined ***)(pTVar20->Data).Pad =
       &
       ___7__TEntityBuilder_U__TAddConditional_UFGuid___MovieScene_UE__UFAdd_23_U__TAdd__N_23_U__TAdd_UFMovieScenePropertyBinding___23__MovieScene_UE__6B_
  ;
  if (!this->bIsValid) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar19) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar20 = this;
  if (!this->bInline) {
    pTVar20 = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar19) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (pTVar20 != this) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar19) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_> @ 14674aaf0

void __thiscall
TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_>
          (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *this,
          TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
          *param_1)

{
  undefined1 uVar1;
  uchar uVar2;
  char cVar3;
  code *pcVar4;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar5;
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
  undefined1 uVar18;
  undefined1 uVar19;
  bool bVar20;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar21;
  
  this->bInline = false;
  pTVar21 = FMemory::Malloc(0x80,8);
  this->bIsValid = true;
  *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad = pTVar21;
  if (this->bInline) {
    pTVar21 = this;
  }
  *(undefined ***)(pTVar21->Data).Pad =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03__UFAdd_MovieScene_UE__U__TAdd_UFSourceByteChannel_MovieScene_UE___34_U__TAdd_UFMovieScenePropertyBinding___34_U__TAddConditional_UFGuid___34_U__TAddConditional_UFPropertyNotifyComponentData_MovieScene_UE___34__MovieScene_UE__6B_
  ;
  uVar1 = param_1->field_0x9;
  (pTVar21->Data).Pad[8] = param_1->field_0x8;
  (pTVar21->Data).Pad[9] = uVar1;
  uVar1 = param_1->field_0x11;
  (pTVar21->Data).Pad[0x10] = param_1->field_0x10;
  (pTVar21->Data).Pad[0x11] = uVar1;
  (pTVar21->Data).Pad[0x20] = '\0';
  uVar2 = param_1->field_0x20;
  (pTVar21->Data).Pad[0x20] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x19;
    uVar6 = param_1->field_0x1a;
    uVar7 = param_1->field_0x1b;
    uVar8 = param_1->field_0x1c;
    uVar9 = param_1->field_0x1d;
    uVar10 = param_1->field_0x1e;
    uVar11 = param_1->field_0x1f;
    (pTVar21->Data).Pad[0x18] = param_1->field_0x18;
    (pTVar21->Data).Pad[0x19] = uVar1;
    (pTVar21->Data).Pad[0x1a] = uVar6;
    (pTVar21->Data).Pad[0x1b] = uVar7;
    (pTVar21->Data).Pad[0x1c] = uVar8;
    (pTVar21->Data).Pad[0x1d] = uVar9;
    (pTVar21->Data).Pad[0x1e] = uVar10;
    (pTVar21->Data).Pad[0x1f] = uVar11;
  }
  uVar1 = param_1->field_0x29;
  (pTVar21->Data).Pad[0x28] = param_1->field_0x28;
  (pTVar21->Data).Pad[0x29] = uVar1;
  pTVar21->field_0x40 = 0;
  cVar3 = param_1->field_0x40;
  pTVar21->field_0x40 = cVar3;
  if (cVar3 != '\0') {
    uVar1 = param_1->field_0x2d;
    uVar6 = param_1->field_0x2e;
    uVar7 = param_1->field_0x2f;
    uVar8 = param_1->field_0x30;
    uVar9 = param_1->field_0x31;
    uVar10 = param_1->field_0x32;
    uVar11 = param_1->field_0x33;
    uVar12 = param_1->field_0x34;
    uVar13 = param_1->field_0x35;
    uVar14 = param_1->field_0x36;
    uVar15 = param_1->field_0x37;
    uVar16 = param_1->field_0x38;
    uVar17 = param_1->field_0x39;
    uVar18 = param_1->field_0x3a;
    uVar19 = param_1->field_0x3b;
    (pTVar21->Data).Pad[0x2c] = param_1->field_0x2c;
    (pTVar21->Data).Pad[0x2d] = uVar1;
    (pTVar21->Data).Pad[0x2e] = uVar6;
    (pTVar21->Data).Pad[0x2f] = uVar7;
    (pTVar21->Data).Pad[0x30] = uVar8;
    (pTVar21->Data).Pad[0x31] = uVar9;
    (pTVar21->Data).Pad[0x32] = uVar10;
    (pTVar21->Data).Pad[0x33] = uVar11;
    (pTVar21->Data).Pad[0x34] = uVar12;
    (pTVar21->Data).Pad[0x35] = uVar13;
    (pTVar21->Data).Pad[0x36] = uVar14;
    (pTVar21->Data).Pad[0x37] = uVar15;
    (pTVar21->Data).Pad[0x38] = uVar16;
    (pTVar21->Data).Pad[0x39] = uVar17;
    (pTVar21->Data).Pad[0x3a] = uVar18;
    (pTVar21->Data).Pad[0x3b] = uVar19;
    uVar1 = param_1->field_0x3d;
    uVar6 = param_1->field_0x3e;
    uVar7 = param_1->field_0x3f;
    (pTVar21->Data).Pad[0x3c] = param_1->field_0x3c;
    (pTVar21->Data).Pad[0x3d] = uVar1;
    (pTVar21->Data).Pad[0x3e] = uVar6;
    (pTVar21->Data).Pad[0x3f] = uVar7;
  }
  *(undefined4 *)&pTVar21->field_0x44 = *(undefined4 *)&param_1->field_0x44;
  pTVar21[1].Data.Pad[0x10] = '\0';
  uVar2 = param_1->field_0x58;
  pTVar21[1].Data.Pad[0x10] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x49;
    uVar6 = param_1->field_0x4a;
    uVar7 = param_1->field_0x4b;
    uVar8 = param_1->field_0x4c;
    uVar9 = param_1->field_0x4d;
    uVar10 = param_1->field_0x4e;
    uVar11 = param_1->field_0x4f;
    uVar12 = param_1->field_0x50;
    uVar13 = param_1->field_0x51;
    uVar14 = param_1->field_0x52;
    uVar15 = param_1->field_0x53;
    uVar16 = param_1->field_0x54;
    uVar17 = param_1->field_0x55;
    uVar18 = param_1->field_0x56;
    uVar19 = param_1->field_0x57;
    pTVar21[1].Data.Pad[0] = param_1->field_0x48;
    pTVar21[1].Data.Pad[1] = uVar1;
    pTVar21[1].Data.Pad[2] = uVar6;
    pTVar21[1].Data.Pad[3] = uVar7;
    pTVar21[1].Data.Pad[4] = uVar8;
    pTVar21[1].Data.Pad[5] = uVar9;
    pTVar21[1].Data.Pad[6] = uVar10;
    pTVar21[1].Data.Pad[7] = uVar11;
    pTVar5 = pTVar21 + 1;
    (pTVar5->Data).Pad[8] = uVar12;
    (pTVar5->Data).Pad[9] = uVar13;
    (pTVar5->Data).Pad[10] = uVar14;
    (pTVar5->Data).Pad[0xb] = uVar15;
    (pTVar5->Data).Pad[0xc] = uVar16;
    (pTVar5->Data).Pad[0xd] = uVar17;
    (pTVar5->Data).Pad[0xe] = uVar18;
    (pTVar5->Data).Pad[0xf] = uVar19;
  }
  uVar1 = param_1->field_0x5d;
  uVar6 = param_1->field_0x5e;
  uVar7 = param_1->field_0x5f;
  pTVar5 = pTVar21 + 1;
  (pTVar5->Data).Pad[0x14] = param_1->field_0x5c;
  (pTVar5->Data).Pad[0x15] = uVar1;
  (pTVar5->Data).Pad[0x16] = uVar6;
  (pTVar5->Data).Pad[0x17] = uVar7;
  pTVar21[1].Data.Pad[0x2c] = '\0';
  uVar2 = param_1->field_0x74;
  pTVar21[1].Data.Pad[0x2c] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x61;
    uVar6 = param_1->field_0x62;
    uVar7 = param_1->field_0x63;
    uVar8 = param_1->field_0x64;
    uVar9 = param_1->field_0x65;
    uVar10 = param_1->field_0x66;
    uVar11 = param_1->field_0x67;
    uVar12 = param_1->field_0x68;
    uVar13 = param_1->field_0x69;
    uVar14 = param_1->field_0x6a;
    uVar15 = param_1->field_0x6b;
    uVar16 = param_1->field_0x6c;
    uVar17 = param_1->field_0x6d;
    uVar18 = param_1->field_0x6e;
    uVar19 = param_1->field_0x6f;
    pTVar5 = pTVar21 + 1;
    (pTVar5->Data).Pad[0x18] = param_1->field_0x60;
    (pTVar5->Data).Pad[0x19] = uVar1;
    (pTVar5->Data).Pad[0x1a] = uVar6;
    (pTVar5->Data).Pad[0x1b] = uVar7;
    (pTVar5->Data).Pad[0x1c] = uVar8;
    (pTVar5->Data).Pad[0x1d] = uVar9;
    (pTVar5->Data).Pad[0x1e] = uVar10;
    (pTVar5->Data).Pad[0x1f] = uVar11;
    pTVar5 = pTVar21 + 1;
    (pTVar5->Data).Pad[0x20] = uVar12;
    (pTVar5->Data).Pad[0x21] = uVar13;
    (pTVar5->Data).Pad[0x22] = uVar14;
    (pTVar5->Data).Pad[0x23] = uVar15;
    (pTVar5->Data).Pad[0x24] = uVar16;
    (pTVar5->Data).Pad[0x25] = uVar17;
    (pTVar5->Data).Pad[0x26] = uVar18;
    (pTVar5->Data).Pad[0x27] = uVar19;
    uVar1 = param_1->field_0x71;
    uVar6 = param_1->field_0x72;
    uVar7 = param_1->field_0x73;
    pTVar5 = pTVar21 + 1;
    (pTVar5->Data).Pad[0x28] = param_1->field_0x70;
    (pTVar5->Data).Pad[0x29] = uVar1;
    (pTVar5->Data).Pad[0x2a] = uVar6;
    (pTVar5->Data).Pad[0x2b] = uVar7;
  }
  pTVar21[1].Data.Pad[0x30] = param_1->field_0x78;
  *(undefined ***)(pTVar21->Data).Pad =
       &
       ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAdd_UFSourceByteChannel_MovieScene_UE___23_U__TAdd_UFMovieScenePropertyBinding___23_U__TAddConditional_UFGuid___23_U__TAddConditional_UFPropertyNotifyComponentData_MovieScene_UE___23__MovieScene_UE__6B_
  ;
  if (!this->bIsValid) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar20) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar21 = this;
  if (!this->bInline) {
    pTVar21 = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar20) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (pTVar21 != this) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar20) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_> @ 14674ac90

void __thiscall
TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_>
          (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *this,
          TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
          *param_1)

{
  undefined1 uVar1;
  uchar uVar2;
  char cVar3;
  UObject *pUVar4;
  code *pcVar5;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar6;
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
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  bool bVar21;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar22;
  
  this->bInline = false;
  pTVar22 = FMemory::Malloc(0x98,8);
  this->bIsValid = true;
  *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad = pTVar22;
  if (this->bInline) {
    pTVar22 = this;
  }
  *(undefined ***)(pTVar22->Data).Pad =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04__UFAdd_MovieScene_UE__U__TAdd_UFSourceByteChannel_MovieScene_UE___34_U__TAdd_V__TSubclassOf_VUMovieSceneBlenderSystem_____34_U__TAdd_UFMovieScenePropertyBinding___34_U__TAddConditional_UFGuid___34_U__TAddConditional_UFPropertyNotifyComponentData_MovieScene_UE___34__MovieScene_UE__6B_
  ;
  uVar1 = param_1->field_0x9;
  (pTVar22->Data).Pad[8] = param_1->field_0x8;
  (pTVar22->Data).Pad[9] = uVar1;
  uVar1 = param_1->field_0x11;
  (pTVar22->Data).Pad[0x10] = param_1->field_0x10;
  (pTVar22->Data).Pad[0x11] = uVar1;
  (pTVar22->Data).Pad[0x20] = '\0';
  uVar2 = param_1->field_0x20;
  (pTVar22->Data).Pad[0x20] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x19;
    uVar7 = param_1->field_0x1a;
    uVar8 = param_1->field_0x1b;
    uVar9 = param_1->field_0x1c;
    uVar10 = param_1->field_0x1d;
    uVar11 = param_1->field_0x1e;
    uVar12 = param_1->field_0x1f;
    (pTVar22->Data).Pad[0x18] = param_1->field_0x18;
    (pTVar22->Data).Pad[0x19] = uVar1;
    (pTVar22->Data).Pad[0x1a] = uVar7;
    (pTVar22->Data).Pad[0x1b] = uVar8;
    (pTVar22->Data).Pad[0x1c] = uVar9;
    (pTVar22->Data).Pad[0x1d] = uVar10;
    (pTVar22->Data).Pad[0x1e] = uVar11;
    (pTVar22->Data).Pad[0x1f] = uVar12;
  }
  uVar1 = param_1->field_0x29;
  (pTVar22->Data).Pad[0x28] = param_1->field_0x28;
  (pTVar22->Data).Pad[0x29] = uVar1;
  (pTVar22->Data).Pad[0x38] = '\0';
  uVar2 = param_1->field_0x38;
  (pTVar22->Data).Pad[0x38] = uVar2;
  if (uVar2 != '\0') {
    pUVar4 = *(UObject **)&param_1->field_0x30;
    *(UObject **)((pTVar22->Data).Pad + 0x30) = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
  }
  *(undefined2 *)&pTVar22->field_0x40 = *(undefined2 *)&param_1->field_0x40;
  pTVar22[1].Data.Pad[0x10] = '\0';
  uVar2 = param_1->field_0x58;
  pTVar22[1].Data.Pad[0x10] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x4c;
    uVar7 = param_1->field_0x4d;
    uVar8 = param_1->field_0x4e;
    uVar9 = param_1->field_0x4f;
    uVar10 = param_1->field_0x50;
    uVar11 = param_1->field_0x51;
    uVar12 = param_1->field_0x52;
    uVar13 = param_1->field_0x53;
    *(undefined8 *)&pTVar22->field_0x44 = *(undefined8 *)&param_1->field_0x44;
    pTVar6 = pTVar22 + 1;
    (pTVar6->Data).Pad[4] = uVar1;
    (pTVar6->Data).Pad[5] = uVar7;
    (pTVar6->Data).Pad[6] = uVar8;
    (pTVar6->Data).Pad[7] = uVar9;
    (pTVar6->Data).Pad[8] = uVar10;
    (pTVar6->Data).Pad[9] = uVar11;
    (pTVar6->Data).Pad[10] = uVar12;
    (pTVar6->Data).Pad[0xb] = uVar13;
    uVar1 = param_1->field_0x55;
    uVar7 = param_1->field_0x56;
    uVar8 = param_1->field_0x57;
    pTVar6 = pTVar22 + 1;
    (pTVar6->Data).Pad[0xc] = param_1->field_0x54;
    (pTVar6->Data).Pad[0xd] = uVar1;
    (pTVar6->Data).Pad[0xe] = uVar7;
    (pTVar6->Data).Pad[0xf] = uVar8;
  }
  uVar1 = param_1->field_0x5d;
  uVar7 = param_1->field_0x5e;
  uVar8 = param_1->field_0x5f;
  pTVar6 = pTVar22 + 1;
  (pTVar6->Data).Pad[0x14] = param_1->field_0x5c;
  (pTVar6->Data).Pad[0x15] = uVar1;
  (pTVar6->Data).Pad[0x16] = uVar7;
  (pTVar6->Data).Pad[0x17] = uVar8;
  pTVar22[1].Data.Pad[0x28] = '\0';
  uVar2 = param_1->field_0x70;
  pTVar22[1].Data.Pad[0x28] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x61;
    uVar7 = param_1->field_0x62;
    uVar8 = param_1->field_0x63;
    uVar9 = param_1->field_0x64;
    uVar10 = param_1->field_0x65;
    uVar11 = param_1->field_0x66;
    uVar12 = param_1->field_0x67;
    uVar13 = param_1->field_0x68;
    uVar14 = param_1->field_0x69;
    uVar15 = param_1->field_0x6a;
    uVar16 = param_1->field_0x6b;
    uVar17 = param_1->field_0x6c;
    uVar18 = param_1->field_0x6d;
    uVar19 = param_1->field_0x6e;
    uVar20 = param_1->field_0x6f;
    pTVar6 = pTVar22 + 1;
    (pTVar6->Data).Pad[0x18] = param_1->field_0x60;
    (pTVar6->Data).Pad[0x19] = uVar1;
    (pTVar6->Data).Pad[0x1a] = uVar7;
    (pTVar6->Data).Pad[0x1b] = uVar8;
    (pTVar6->Data).Pad[0x1c] = uVar9;
    (pTVar6->Data).Pad[0x1d] = uVar10;
    (pTVar6->Data).Pad[0x1e] = uVar11;
    (pTVar6->Data).Pad[0x1f] = uVar12;
    pTVar6 = pTVar22 + 1;
    (pTVar6->Data).Pad[0x20] = uVar13;
    (pTVar6->Data).Pad[0x21] = uVar14;
    (pTVar6->Data).Pad[0x22] = uVar15;
    (pTVar6->Data).Pad[0x23] = uVar16;
    (pTVar6->Data).Pad[0x24] = uVar17;
    (pTVar6->Data).Pad[0x25] = uVar18;
    (pTVar6->Data).Pad[0x26] = uVar19;
    (pTVar6->Data).Pad[0x27] = uVar20;
  }
  uVar1 = param_1->field_0x75;
  uVar7 = param_1->field_0x76;
  uVar8 = param_1->field_0x77;
  pTVar6 = pTVar22 + 1;
  (pTVar6->Data).Pad[0x2c] = param_1->field_0x74;
  (pTVar6->Data).Pad[0x2d] = uVar1;
  (pTVar6->Data).Pad[0x2e] = uVar7;
  (pTVar6->Data).Pad[0x2f] = uVar8;
  pTVar22[1].field_0x44 = 0;
  cVar3 = param_1->field_0x8c;
  pTVar22[1].field_0x44 = cVar3;
  if (cVar3 != '\0') {
    uVar1 = param_1->field_0x79;
    uVar7 = param_1->field_0x7a;
    uVar8 = param_1->field_0x7b;
    uVar9 = param_1->field_0x7c;
    uVar10 = param_1->field_0x7d;
    uVar11 = param_1->field_0x7e;
    uVar12 = param_1->field_0x7f;
    uVar13 = param_1->field_0x80;
    uVar14 = param_1->field_0x81;
    uVar15 = param_1->field_0x82;
    uVar16 = param_1->field_0x83;
    uVar17 = param_1->field_0x84;
    uVar18 = param_1->field_0x85;
    uVar19 = param_1->field_0x86;
    uVar20 = param_1->field_0x87;
    pTVar6 = pTVar22 + 1;
    (pTVar6->Data).Pad[0x30] = param_1->field_0x78;
    (pTVar6->Data).Pad[0x31] = uVar1;
    (pTVar6->Data).Pad[0x32] = uVar7;
    (pTVar6->Data).Pad[0x33] = uVar8;
    (pTVar6->Data).Pad[0x34] = uVar9;
    (pTVar6->Data).Pad[0x35] = uVar10;
    (pTVar6->Data).Pad[0x36] = uVar11;
    (pTVar6->Data).Pad[0x37] = uVar12;
    pTVar6 = pTVar22 + 1;
    (pTVar6->Data).Pad[0x38] = uVar13;
    (pTVar6->Data).Pad[0x39] = uVar14;
    (pTVar6->Data).Pad[0x3a] = uVar15;
    (pTVar6->Data).Pad[0x3b] = uVar16;
    (pTVar6->Data).Pad[0x3c] = uVar17;
    (pTVar6->Data).Pad[0x3d] = uVar18;
    (pTVar6->Data).Pad[0x3e] = uVar19;
    (pTVar6->Data).Pad[0x3f] = uVar20;
    *(undefined4 *)&pTVar22[1].field_0x40 = *(undefined4 *)&param_1->field_0x88;
  }
  pTVar22[2].Data.Pad[0] = param_1->field_0x90;
  *(undefined ***)(pTVar22->Data).Pad =
       &
       ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAdd_UFSourceByteChannel_MovieScene_UE___23_U__TAdd_V__TSubclassOf_VUMovieSceneBlenderSystem_____23_U__TAdd_UFMovieScenePropertyBinding___23_U__TAddConditional_UFGuid___23_U__TAddConditional_UFPropertyNotifyComponentData_MovieScene_UE___23__MovieScene_UE__6B_
  ;
  if (!this->bIsValid) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar21) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar22 = this;
  if (!this->bInline) {
    pTVar22 = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar21) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (pTVar22 != this) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar21) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

// InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<FGuid>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<FGuid>_>_> @ 14674ae70

void __thiscall
TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<FGuid>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<FGuid>_>_>
          (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *this,
          TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<FGuid>_>
          *param_1)

{
  undefined1 uVar1;
  uchar uVar2;
  UObject *pUVar3;
  code *pcVar4;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  bool bVar13;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar14;
  
  this->bInline = false;
  pTVar14 = FMemory::Malloc(0x60,8);
  this->bIsValid = true;
  *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad = pTVar14;
  if (this->bInline) {
    pTVar14 = this;
  }
  *(undefined ***)(pTVar14->Data).Pad =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02__UFAdd_MovieScene_UE__U__TAdd_UFSourceByteChannel_MovieScene_UE___34_U__TAdd_V__TSubclassOf_VUMovieSceneBlenderSystem_____34_U__TAddConditional_UFGuid___34__MovieScene_UE__6B_
  ;
  uVar1 = param_1->field_0x9;
  (pTVar14->Data).Pad[8] = param_1->field_0x8;
  (pTVar14->Data).Pad[9] = uVar1;
  uVar1 = param_1->field_0x11;
  (pTVar14->Data).Pad[0x10] = param_1->field_0x10;
  (pTVar14->Data).Pad[0x11] = uVar1;
  (pTVar14->Data).Pad[0x20] = '\0';
  uVar2 = param_1->field_0x20;
  (pTVar14->Data).Pad[0x20] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x19;
    uVar6 = param_1->field_0x1a;
    uVar7 = param_1->field_0x1b;
    uVar8 = param_1->field_0x1c;
    uVar9 = param_1->field_0x1d;
    uVar10 = param_1->field_0x1e;
    uVar11 = param_1->field_0x1f;
    (pTVar14->Data).Pad[0x18] = param_1->field_0x18;
    (pTVar14->Data).Pad[0x19] = uVar1;
    (pTVar14->Data).Pad[0x1a] = uVar6;
    (pTVar14->Data).Pad[0x1b] = uVar7;
    (pTVar14->Data).Pad[0x1c] = uVar8;
    (pTVar14->Data).Pad[0x1d] = uVar9;
    (pTVar14->Data).Pad[0x1e] = uVar10;
    (pTVar14->Data).Pad[0x1f] = uVar11;
  }
  uVar1 = param_1->field_0x29;
  (pTVar14->Data).Pad[0x28] = param_1->field_0x28;
  (pTVar14->Data).Pad[0x29] = uVar1;
  (pTVar14->Data).Pad[0x38] = '\0';
  uVar2 = param_1->field_0x38;
  (pTVar14->Data).Pad[0x38] = uVar2;
  if (uVar2 != '\0') {
    pUVar3 = *(UObject **)&param_1->field_0x30;
    *(UObject **)((pTVar14->Data).Pad + 0x30) = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
  }
  *(undefined4 *)&pTVar14->field_0x40 = *(undefined4 *)&param_1->field_0x40;
  pTVar14[1].Data.Pad[0xc] = '\0';
  uVar2 = param_1->field_0x54;
  pTVar14[1].Data.Pad[0xc] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x4c;
    uVar6 = param_1->field_0x4d;
    uVar7 = param_1->field_0x4e;
    uVar8 = param_1->field_0x4f;
    uVar9 = param_1->field_0x50;
    uVar10 = param_1->field_0x51;
    uVar11 = param_1->field_0x52;
    uVar12 = param_1->field_0x53;
    *(undefined8 *)&pTVar14->field_0x44 = *(undefined8 *)&param_1->field_0x44;
    pTVar5 = pTVar14 + 1;
    (pTVar5->Data).Pad[4] = uVar1;
    (pTVar5->Data).Pad[5] = uVar6;
    (pTVar5->Data).Pad[6] = uVar7;
    (pTVar5->Data).Pad[7] = uVar8;
    (pTVar5->Data).Pad[8] = uVar9;
    (pTVar5->Data).Pad[9] = uVar10;
    (pTVar5->Data).Pad[10] = uVar11;
    (pTVar5->Data).Pad[0xb] = uVar12;
  }
  pTVar14[1].Data.Pad[0x10] = param_1->field_0x58;
  *(undefined ***)(pTVar14->Data).Pad =
       &
       ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAdd_UFSourceByteChannel_MovieScene_UE___23_U__TAdd_V__TSubclassOf_VUMovieSceneBlenderSystem_____23_U__TAddConditional_UFGuid___23__MovieScene_UE__6B_
  ;
  if (!this->bIsValid) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar14 = this;
  if (!this->bInline) {
    pTVar14 = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (pTVar14 != this) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TAddConditional<FGuid>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TAddConditional<FGuid>_>_> @ 14674aff0

void __thiscall
TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TAddConditional<FGuid>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TAddConditional<FGuid>_>_>
          (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *this,
          TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TAddConditional<FGuid>_>
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
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01__UFAdd_MovieScene_UE__U__TAdd_UFSourceByteChannel_MovieScene_UE___34_U__TAddConditional_UFGuid___34__MovieScene_UE__6B_
  ;
  uVar1 = param_1->field_0x9;
  (pTVar19->Data).Pad[8] = param_1->field_0x8;
  (pTVar19->Data).Pad[9] = uVar1;
  uVar1 = param_1->field_0x11;
  (pTVar19->Data).Pad[0x10] = param_1->field_0x10;
  (pTVar19->Data).Pad[0x11] = uVar1;
  (pTVar19->Data).Pad[0x20] = '\0';
  uVar2 = param_1->field_0x20;
  (pTVar19->Data).Pad[0x20] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x19;
    uVar4 = param_1->field_0x1a;
    uVar5 = param_1->field_0x1b;
    uVar6 = param_1->field_0x1c;
    uVar7 = param_1->field_0x1d;
    uVar8 = param_1->field_0x1e;
    uVar9 = param_1->field_0x1f;
    (pTVar19->Data).Pad[0x18] = param_1->field_0x18;
    (pTVar19->Data).Pad[0x19] = uVar1;
    (pTVar19->Data).Pad[0x1a] = uVar4;
    (pTVar19->Data).Pad[0x1b] = uVar5;
    (pTVar19->Data).Pad[0x1c] = uVar6;
    (pTVar19->Data).Pad[0x1d] = uVar7;
    (pTVar19->Data).Pad[0x1e] = uVar8;
    (pTVar19->Data).Pad[0x1f] = uVar9;
  }
  uVar1 = param_1->field_0x29;
  uVar4 = param_1->field_0x2a;
  uVar5 = param_1->field_0x2b;
  (pTVar19->Data).Pad[0x28] = param_1->field_0x28;
  (pTVar19->Data).Pad[0x29] = uVar1;
  (pTVar19->Data).Pad[0x2a] = uVar4;
  (pTVar19->Data).Pad[0x2b] = uVar5;
  (pTVar19->Data).Pad[0x3c] = '\0';
  uVar2 = param_1->field_0x3c;
  (pTVar19->Data).Pad[0x3c] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x2d;
    uVar4 = param_1->field_0x2e;
    uVar5 = param_1->field_0x2f;
    uVar6 = param_1->field_0x30;
    uVar7 = param_1->field_0x31;
    uVar8 = param_1->field_0x32;
    uVar9 = param_1->field_0x33;
    uVar10 = param_1->field_0x34;
    uVar11 = param_1->field_0x35;
    uVar12 = param_1->field_0x36;
    uVar13 = param_1->field_0x37;
    uVar14 = param_1->field_0x38;
    uVar15 = param_1->field_0x39;
    uVar16 = param_1->field_0x3a;
    uVar17 = param_1->field_0x3b;
    (pTVar19->Data).Pad[0x2c] = param_1->field_0x2c;
    (pTVar19->Data).Pad[0x2d] = uVar1;
    (pTVar19->Data).Pad[0x2e] = uVar4;
    (pTVar19->Data).Pad[0x2f] = uVar5;
    (pTVar19->Data).Pad[0x30] = uVar6;
    (pTVar19->Data).Pad[0x31] = uVar7;
    (pTVar19->Data).Pad[0x32] = uVar8;
    (pTVar19->Data).Pad[0x33] = uVar9;
    (pTVar19->Data).Pad[0x34] = uVar10;
    (pTVar19->Data).Pad[0x35] = uVar11;
    (pTVar19->Data).Pad[0x36] = uVar12;
    (pTVar19->Data).Pad[0x37] = uVar13;
    (pTVar19->Data).Pad[0x38] = uVar14;
    (pTVar19->Data).Pad[0x39] = uVar15;
    (pTVar19->Data).Pad[0x3a] = uVar16;
    (pTVar19->Data).Pad[0x3b] = uVar17;
  }
  pTVar19->field_0x40 = param_1->field_0x40;
  *(undefined ***)(pTVar19->Data).Pad =
       &
       ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAdd_UFSourceByteChannel_MovieScene_UE___23_U__TAddConditional_UFGuid___23__MovieScene_UE__6B_
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

// InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_> @ 14674b130

void __thiscall
TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_>
          (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *this,
          TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
          *param_1)

{
  undefined1 uVar1;
  uchar uVar2;
  char cVar3;
  code *pcVar4;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar5;
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
  undefined1 uVar18;
  undefined1 uVar19;
  bool bVar20;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar21;
  
  this->bInline = false;
  pTVar21 = FMemory::Malloc(0x80,8);
  this->bIsValid = true;
  *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad = pTVar21;
  if (this->bInline) {
    pTVar21 = this;
  }
  *(undefined ***)(pTVar21->Data).Pad =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03__UFAdd_MovieScene_UE__U__TAdd_UFSourceDoubleChannel_MovieScene_UE___34_U__TAdd_UFMovieScenePropertyBinding___34_U__TAddConditional_UFGuid___34_U__TAddConditional_UFPropertyNotifyComponentData_MovieScene_UE___34__MovieScene_UE__6B_
  ;
  uVar1 = param_1->field_0x9;
  (pTVar21->Data).Pad[8] = param_1->field_0x8;
  (pTVar21->Data).Pad[9] = uVar1;
  uVar1 = param_1->field_0x11;
  (pTVar21->Data).Pad[0x10] = param_1->field_0x10;
  (pTVar21->Data).Pad[0x11] = uVar1;
  (pTVar21->Data).Pad[0x20] = '\0';
  uVar2 = param_1->field_0x20;
  (pTVar21->Data).Pad[0x20] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x19;
    uVar6 = param_1->field_0x1a;
    uVar7 = param_1->field_0x1b;
    uVar8 = param_1->field_0x1c;
    uVar9 = param_1->field_0x1d;
    uVar10 = param_1->field_0x1e;
    uVar11 = param_1->field_0x1f;
    (pTVar21->Data).Pad[0x18] = param_1->field_0x18;
    (pTVar21->Data).Pad[0x19] = uVar1;
    (pTVar21->Data).Pad[0x1a] = uVar6;
    (pTVar21->Data).Pad[0x1b] = uVar7;
    (pTVar21->Data).Pad[0x1c] = uVar8;
    (pTVar21->Data).Pad[0x1d] = uVar9;
    (pTVar21->Data).Pad[0x1e] = uVar10;
    (pTVar21->Data).Pad[0x1f] = uVar11;
  }
  uVar1 = param_1->field_0x29;
  (pTVar21->Data).Pad[0x28] = param_1->field_0x28;
  (pTVar21->Data).Pad[0x29] = uVar1;
  pTVar21->field_0x40 = 0;
  cVar3 = param_1->field_0x40;
  pTVar21->field_0x40 = cVar3;
  if (cVar3 != '\0') {
    uVar1 = param_1->field_0x2d;
    uVar6 = param_1->field_0x2e;
    uVar7 = param_1->field_0x2f;
    uVar8 = param_1->field_0x30;
    uVar9 = param_1->field_0x31;
    uVar10 = param_1->field_0x32;
    uVar11 = param_1->field_0x33;
    uVar12 = param_1->field_0x34;
    uVar13 = param_1->field_0x35;
    uVar14 = param_1->field_0x36;
    uVar15 = param_1->field_0x37;
    uVar16 = param_1->field_0x38;
    uVar17 = param_1->field_0x39;
    uVar18 = param_1->field_0x3a;
    uVar19 = param_1->field_0x3b;
    (pTVar21->Data).Pad[0x2c] = param_1->field_0x2c;
    (pTVar21->Data).Pad[0x2d] = uVar1;
    (pTVar21->Data).Pad[0x2e] = uVar6;
    (pTVar21->Data).Pad[0x2f] = uVar7;
    (pTVar21->Data).Pad[0x30] = uVar8;
    (pTVar21->Data).Pad[0x31] = uVar9;
    (pTVar21->Data).Pad[0x32] = uVar10;
    (pTVar21->Data).Pad[0x33] = uVar11;
    (pTVar21->Data).Pad[0x34] = uVar12;
    (pTVar21->Data).Pad[0x35] = uVar13;
    (pTVar21->Data).Pad[0x36] = uVar14;
    (pTVar21->Data).Pad[0x37] = uVar15;
    (pTVar21->Data).Pad[0x38] = uVar16;
    (pTVar21->Data).Pad[0x39] = uVar17;
    (pTVar21->Data).Pad[0x3a] = uVar18;
    (pTVar21->Data).Pad[0x3b] = uVar19;
    uVar1 = param_1->field_0x3d;
    uVar6 = param_1->field_0x3e;
    uVar7 = param_1->field_0x3f;
    (pTVar21->Data).Pad[0x3c] = param_1->field_0x3c;
    (pTVar21->Data).Pad[0x3d] = uVar1;
    (pTVar21->Data).Pad[0x3e] = uVar6;
    (pTVar21->Data).Pad[0x3f] = uVar7;
  }
  *(undefined4 *)&pTVar21->field_0x44 = *(undefined4 *)&param_1->field_0x44;
  pTVar21[1].Data.Pad[0x10] = '\0';
  uVar2 = param_1->field_0x58;
  pTVar21[1].Data.Pad[0x10] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x49;
    uVar6 = param_1->field_0x4a;
    uVar7 = param_1->field_0x4b;
    uVar8 = param_1->field_0x4c;
    uVar9 = param_1->field_0x4d;
    uVar10 = param_1->field_0x4e;
    uVar11 = param_1->field_0x4f;
    uVar12 = param_1->field_0x50;
    uVar13 = param_1->field_0x51;
    uVar14 = param_1->field_0x52;
    uVar15 = param_1->field_0x53;
    uVar16 = param_1->field_0x54;
    uVar17 = param_1->field_0x55;
    uVar18 = param_1->field_0x56;
    uVar19 = param_1->field_0x57;
    pTVar21[1].Data.Pad[0] = param_1->field_0x48;
    pTVar21[1].Data.Pad[1] = uVar1;
    pTVar21[1].Data.Pad[2] = uVar6;
    pTVar21[1].Data.Pad[3] = uVar7;
    pTVar21[1].Data.Pad[4] = uVar8;
    pTVar21[1].Data.Pad[5] = uVar9;
    pTVar21[1].Data.Pad[6] = uVar10;
    pTVar21[1].Data.Pad[7] = uVar11;
    pTVar5 = pTVar21 + 1;
    (pTVar5->Data).Pad[8] = uVar12;
    (pTVar5->Data).Pad[9] = uVar13;
    (pTVar5->Data).Pad[10] = uVar14;
    (pTVar5->Data).Pad[0xb] = uVar15;
    (pTVar5->Data).Pad[0xc] = uVar16;
    (pTVar5->Data).Pad[0xd] = uVar17;
    (pTVar5->Data).Pad[0xe] = uVar18;
    (pTVar5->Data).Pad[0xf] = uVar19;
  }
  uVar1 = param_1->field_0x5d;
  uVar6 = param_1->field_0x5e;
  uVar7 = param_1->field_0x5f;
  pTVar5 = pTVar21 + 1;
  (pTVar5->Data).Pad[0x14] = param_1->field_0x5c;
  (pTVar5->Data).Pad[0x15] = uVar1;
  (pTVar5->Data).Pad[0x16] = uVar6;
  (pTVar5->Data).Pad[0x17] = uVar7;
  pTVar21[1].Data.Pad[0x2c] = '\0';
  uVar2 = param_1->field_0x74;
  pTVar21[1].Data.Pad[0x2c] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x61;
    uVar6 = param_1->field_0x62;
    uVar7 = param_1->field_0x63;
    uVar8 = param_1->field_0x64;
    uVar9 = param_1->field_0x65;
    uVar10 = param_1->field_0x66;
    uVar11 = param_1->field_0x67;
    uVar12 = param_1->field_0x68;
    uVar13 = param_1->field_0x69;
    uVar14 = param_1->field_0x6a;
    uVar15 = param_1->field_0x6b;
    uVar16 = param_1->field_0x6c;
    uVar17 = param_1->field_0x6d;
    uVar18 = param_1->field_0x6e;
    uVar19 = param_1->field_0x6f;
    pTVar5 = pTVar21 + 1;
    (pTVar5->Data).Pad[0x18] = param_1->field_0x60;
    (pTVar5->Data).Pad[0x19] = uVar1;
    (pTVar5->Data).Pad[0x1a] = uVar6;
    (pTVar5->Data).Pad[0x1b] = uVar7;
    (pTVar5->Data).Pad[0x1c] = uVar8;
    (pTVar5->Data).Pad[0x1d] = uVar9;
    (pTVar5->Data).Pad[0x1e] = uVar10;
    (pTVar5->Data).Pad[0x1f] = uVar11;
    pTVar5 = pTVar21 + 1;
    (pTVar5->Data).Pad[0x20] = uVar12;
    (pTVar5->Data).Pad[0x21] = uVar13;
    (pTVar5->Data).Pad[0x22] = uVar14;
    (pTVar5->Data).Pad[0x23] = uVar15;
    (pTVar5->Data).Pad[0x24] = uVar16;
    (pTVar5->Data).Pad[0x25] = uVar17;
    (pTVar5->Data).Pad[0x26] = uVar18;
    (pTVar5->Data).Pad[0x27] = uVar19;
    uVar1 = param_1->field_0x71;
    uVar6 = param_1->field_0x72;
    uVar7 = param_1->field_0x73;
    pTVar5 = pTVar21 + 1;
    (pTVar5->Data).Pad[0x28] = param_1->field_0x70;
    (pTVar5->Data).Pad[0x29] = uVar1;
    (pTVar5->Data).Pad[0x2a] = uVar6;
    (pTVar5->Data).Pad[0x2b] = uVar7;
  }
  pTVar21[1].Data.Pad[0x30] = param_1->field_0x78;
  *(undefined ***)(pTVar21->Data).Pad =
       &
       ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAdd_UFSourceDoubleChannel_MovieScene_UE___23_U__TAdd_UFMovieScenePropertyBinding___23_U__TAddConditional_UFGuid___23_U__TAddConditional_UFPropertyNotifyComponentData_MovieScene_UE___23__MovieScene_UE__6B_
  ;
  if (!this->bIsValid) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar20) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar21 = this;
  if (!this->bInline) {
    pTVar21 = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar20) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (pTVar21 != this) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar20) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<FGuid>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<FGuid>_>_> @ 14674b2d0

void __thiscall
TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<FGuid>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<FGuid>_>_>
          (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *this,
          TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<FGuid>_>
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
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01__UFAdd_MovieScene_UE__U__TAdd_UFSourceDoubleChannel_MovieScene_UE___34_U__TAddConditional_UFGuid___34__MovieScene_UE__6B_
  ;
  uVar1 = param_1->field_0x9;
  (pTVar19->Data).Pad[8] = param_1->field_0x8;
  (pTVar19->Data).Pad[9] = uVar1;
  uVar1 = param_1->field_0x11;
  (pTVar19->Data).Pad[0x10] = param_1->field_0x10;
  (pTVar19->Data).Pad[0x11] = uVar1;
  (pTVar19->Data).Pad[0x20] = '\0';
  uVar2 = param_1->field_0x20;
  (pTVar19->Data).Pad[0x20] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x19;
    uVar4 = param_1->field_0x1a;
    uVar5 = param_1->field_0x1b;
    uVar6 = param_1->field_0x1c;
    uVar7 = param_1->field_0x1d;
    uVar8 = param_1->field_0x1e;
    uVar9 = param_1->field_0x1f;
    (pTVar19->Data).Pad[0x18] = param_1->field_0x18;
    (pTVar19->Data).Pad[0x19] = uVar1;
    (pTVar19->Data).Pad[0x1a] = uVar4;
    (pTVar19->Data).Pad[0x1b] = uVar5;
    (pTVar19->Data).Pad[0x1c] = uVar6;
    (pTVar19->Data).Pad[0x1d] = uVar7;
    (pTVar19->Data).Pad[0x1e] = uVar8;
    (pTVar19->Data).Pad[0x1f] = uVar9;
  }
  uVar1 = param_1->field_0x29;
  uVar4 = param_1->field_0x2a;
  uVar5 = param_1->field_0x2b;
  (pTVar19->Data).Pad[0x28] = param_1->field_0x28;
  (pTVar19->Data).Pad[0x29] = uVar1;
  (pTVar19->Data).Pad[0x2a] = uVar4;
  (pTVar19->Data).Pad[0x2b] = uVar5;
  (pTVar19->Data).Pad[0x3c] = '\0';
  uVar2 = param_1->field_0x3c;
  (pTVar19->Data).Pad[0x3c] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x2d;
    uVar4 = param_1->field_0x2e;
    uVar5 = param_1->field_0x2f;
    uVar6 = param_1->field_0x30;
    uVar7 = param_1->field_0x31;
    uVar8 = param_1->field_0x32;
    uVar9 = param_1->field_0x33;
    uVar10 = param_1->field_0x34;
    uVar11 = param_1->field_0x35;
    uVar12 = param_1->field_0x36;
    uVar13 = param_1->field_0x37;
    uVar14 = param_1->field_0x38;
    uVar15 = param_1->field_0x39;
    uVar16 = param_1->field_0x3a;
    uVar17 = param_1->field_0x3b;
    (pTVar19->Data).Pad[0x2c] = param_1->field_0x2c;
    (pTVar19->Data).Pad[0x2d] = uVar1;
    (pTVar19->Data).Pad[0x2e] = uVar4;
    (pTVar19->Data).Pad[0x2f] = uVar5;
    (pTVar19->Data).Pad[0x30] = uVar6;
    (pTVar19->Data).Pad[0x31] = uVar7;
    (pTVar19->Data).Pad[0x32] = uVar8;
    (pTVar19->Data).Pad[0x33] = uVar9;
    (pTVar19->Data).Pad[0x34] = uVar10;
    (pTVar19->Data).Pad[0x35] = uVar11;
    (pTVar19->Data).Pad[0x36] = uVar12;
    (pTVar19->Data).Pad[0x37] = uVar13;
    (pTVar19->Data).Pad[0x38] = uVar14;
    (pTVar19->Data).Pad[0x39] = uVar15;
    (pTVar19->Data).Pad[0x3a] = uVar16;
    (pTVar19->Data).Pad[0x3b] = uVar17;
  }
  pTVar19->field_0x40 = param_1->field_0x40;
  *(undefined ***)(pTVar19->Data).Pad =
       &
       ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAdd_UFSourceDoubleChannel_MovieScene_UE___23_U__TAddConditional_UFGuid___23__MovieScene_UE__6B_
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

// InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<UE::MovieScene::FFadeComponentData>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<UE::MovieScene::FFadeComponentData>_>_> @ 14674b410

void __thiscall
TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<UE::MovieScene::FFadeComponentData>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<UE::MovieScene::FFadeComponentData>_>_>
          (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *this,
          TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<UE::MovieScene::FFadeComponentData>_>
          *param_1)

{
  undefined1 uVar1;
  uchar uVar2;
  char cVar3;
  code *pcVar4;
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
  undefined1 uVar18;
  bool bVar19;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar20;
  
  this->bInline = false;
  pTVar20 = FMemory::Malloc(0x50,8);
  this->bIsValid = true;
  *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad = pTVar20;
  if (this->bInline) {
    pTVar20 = this;
  }
  *(undefined ***)(pTVar20->Data).Pad =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01__UFAdd_MovieScene_UE__U__TAdd_UFSourceFloatChannel_MovieScene_UE___34_U__TAdd_UFFadeComponentData_MovieScene_UE___34__MovieScene_UE__6B_
  ;
  uVar1 = param_1->field_0x9;
  (pTVar20->Data).Pad[8] = param_1->field_0x8;
  (pTVar20->Data).Pad[9] = uVar1;
  uVar1 = param_1->field_0x11;
  (pTVar20->Data).Pad[0x10] = param_1->field_0x10;
  (pTVar20->Data).Pad[0x11] = uVar1;
  (pTVar20->Data).Pad[0x20] = '\0';
  uVar2 = param_1->field_0x20;
  (pTVar20->Data).Pad[0x20] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x19;
    uVar5 = param_1->field_0x1a;
    uVar6 = param_1->field_0x1b;
    uVar7 = param_1->field_0x1c;
    uVar8 = param_1->field_0x1d;
    uVar9 = param_1->field_0x1e;
    uVar10 = param_1->field_0x1f;
    (pTVar20->Data).Pad[0x18] = param_1->field_0x18;
    (pTVar20->Data).Pad[0x19] = uVar1;
    (pTVar20->Data).Pad[0x1a] = uVar5;
    (pTVar20->Data).Pad[0x1b] = uVar6;
    (pTVar20->Data).Pad[0x1c] = uVar7;
    (pTVar20->Data).Pad[0x1d] = uVar8;
    (pTVar20->Data).Pad[0x1e] = uVar9;
    (pTVar20->Data).Pad[0x1f] = uVar10;
  }
  uVar1 = param_1->field_0x29;
  (pTVar20->Data).Pad[0x28] = param_1->field_0x28;
  (pTVar20->Data).Pad[0x29] = uVar1;
  pTVar20->field_0x40 = 0;
  cVar3 = param_1->field_0x40;
  pTVar20->field_0x40 = cVar3;
  if (cVar3 != '\0') {
    uVar1 = param_1->field_0x2d;
    uVar5 = param_1->field_0x2e;
    uVar6 = param_1->field_0x2f;
    uVar7 = param_1->field_0x30;
    uVar8 = param_1->field_0x31;
    uVar9 = param_1->field_0x32;
    uVar10 = param_1->field_0x33;
    uVar11 = param_1->field_0x34;
    uVar12 = param_1->field_0x35;
    uVar13 = param_1->field_0x36;
    uVar14 = param_1->field_0x37;
    uVar15 = param_1->field_0x38;
    uVar16 = param_1->field_0x39;
    uVar17 = param_1->field_0x3a;
    uVar18 = param_1->field_0x3b;
    (pTVar20->Data).Pad[0x2c] = param_1->field_0x2c;
    (pTVar20->Data).Pad[0x2d] = uVar1;
    (pTVar20->Data).Pad[0x2e] = uVar5;
    (pTVar20->Data).Pad[0x2f] = uVar6;
    (pTVar20->Data).Pad[0x30] = uVar7;
    (pTVar20->Data).Pad[0x31] = uVar8;
    (pTVar20->Data).Pad[0x32] = uVar9;
    (pTVar20->Data).Pad[0x33] = uVar10;
    (pTVar20->Data).Pad[0x34] = uVar11;
    (pTVar20->Data).Pad[0x35] = uVar12;
    (pTVar20->Data).Pad[0x36] = uVar13;
    (pTVar20->Data).Pad[0x37] = uVar14;
    (pTVar20->Data).Pad[0x38] = uVar15;
    (pTVar20->Data).Pad[0x39] = uVar16;
    (pTVar20->Data).Pad[0x3a] = uVar17;
    (pTVar20->Data).Pad[0x3b] = uVar18;
    uVar1 = param_1->field_0x3d;
    uVar5 = param_1->field_0x3e;
    uVar6 = param_1->field_0x3f;
    (pTVar20->Data).Pad[0x3c] = param_1->field_0x3c;
    (pTVar20->Data).Pad[0x3d] = uVar1;
    (pTVar20->Data).Pad[0x3e] = uVar5;
    (pTVar20->Data).Pad[0x3f] = uVar6;
  }
  pTVar20[1].Data.Pad[0] = param_1->field_0x48;
  *(undefined ***)(pTVar20->Data).Pad =
       &
       ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAdd_UFSourceFloatChannel_MovieScene_UE___23_U__TAdd_UFFadeComponentData_MovieScene_UE___23__MovieScene_UE__6B_
  ;
  if (!this->bIsValid) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar19) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar20 = this;
  if (!this->bInline) {
    pTVar20 = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar19) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (pTVar20 != this) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar19) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_> @ 14674b560

void __thiscall
TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_>
          (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *this,
          TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
          *param_1)

{
  undefined1 uVar1;
  uchar uVar2;
  char cVar3;
  UObject *pUVar4;
  code *pcVar5;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar6;
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
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  bool bVar21;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar22;
  
  this->bInline = false;
  pTVar22 = FMemory::Malloc(0x98,8);
  this->bIsValid = true;
  *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad = pTVar22;
  if (this->bInline) {
    pTVar22 = this;
  }
  *(undefined ***)(pTVar22->Data).Pad =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04__UFAdd_MovieScene_UE__U__TAdd_UFSourceIntegerChannel_MovieScene_UE___34_U__TAdd_V__TSubclassOf_VUMovieSceneBlenderSystem_____34_U__TAdd_UFMovieScenePropertyBinding___34_U__TAddConditional_UFGuid___34_U__TAddConditional_UFPropertyNotifyComponentData_MovieScene_UE___34__MovieScene_UE__6B_
  ;
  uVar1 = param_1->field_0x9;
  (pTVar22->Data).Pad[8] = param_1->field_0x8;
  (pTVar22->Data).Pad[9] = uVar1;
  uVar1 = param_1->field_0x11;
  (pTVar22->Data).Pad[0x10] = param_1->field_0x10;
  (pTVar22->Data).Pad[0x11] = uVar1;
  (pTVar22->Data).Pad[0x20] = '\0';
  uVar2 = param_1->field_0x20;
  (pTVar22->Data).Pad[0x20] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x19;
    uVar7 = param_1->field_0x1a;
    uVar8 = param_1->field_0x1b;
    uVar9 = param_1->field_0x1c;
    uVar10 = param_1->field_0x1d;
    uVar11 = param_1->field_0x1e;
    uVar12 = param_1->field_0x1f;
    (pTVar22->Data).Pad[0x18] = param_1->field_0x18;
    (pTVar22->Data).Pad[0x19] = uVar1;
    (pTVar22->Data).Pad[0x1a] = uVar7;
    (pTVar22->Data).Pad[0x1b] = uVar8;
    (pTVar22->Data).Pad[0x1c] = uVar9;
    (pTVar22->Data).Pad[0x1d] = uVar10;
    (pTVar22->Data).Pad[0x1e] = uVar11;
    (pTVar22->Data).Pad[0x1f] = uVar12;
  }
  uVar1 = param_1->field_0x29;
  (pTVar22->Data).Pad[0x28] = param_1->field_0x28;
  (pTVar22->Data).Pad[0x29] = uVar1;
  (pTVar22->Data).Pad[0x38] = '\0';
  uVar2 = param_1->field_0x38;
  (pTVar22->Data).Pad[0x38] = uVar2;
  if (uVar2 != '\0') {
    pUVar4 = *(UObject **)&param_1->field_0x30;
    *(UObject **)((pTVar22->Data).Pad + 0x30) = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
  }
  *(undefined2 *)&pTVar22->field_0x40 = *(undefined2 *)&param_1->field_0x40;
  pTVar22[1].Data.Pad[0x10] = '\0';
  uVar2 = param_1->field_0x58;
  pTVar22[1].Data.Pad[0x10] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x4c;
    uVar7 = param_1->field_0x4d;
    uVar8 = param_1->field_0x4e;
    uVar9 = param_1->field_0x4f;
    uVar10 = param_1->field_0x50;
    uVar11 = param_1->field_0x51;
    uVar12 = param_1->field_0x52;
    uVar13 = param_1->field_0x53;
    *(undefined8 *)&pTVar22->field_0x44 = *(undefined8 *)&param_1->field_0x44;
    pTVar6 = pTVar22 + 1;
    (pTVar6->Data).Pad[4] = uVar1;
    (pTVar6->Data).Pad[5] = uVar7;
    (pTVar6->Data).Pad[6] = uVar8;
    (pTVar6->Data).Pad[7] = uVar9;
    (pTVar6->Data).Pad[8] = uVar10;
    (pTVar6->Data).Pad[9] = uVar11;
    (pTVar6->Data).Pad[10] = uVar12;
    (pTVar6->Data).Pad[0xb] = uVar13;
    uVar1 = param_1->field_0x55;
    uVar7 = param_1->field_0x56;
    uVar8 = param_1->field_0x57;
    pTVar6 = pTVar22 + 1;
    (pTVar6->Data).Pad[0xc] = param_1->field_0x54;
    (pTVar6->Data).Pad[0xd] = uVar1;
    (pTVar6->Data).Pad[0xe] = uVar7;
    (pTVar6->Data).Pad[0xf] = uVar8;
  }
  uVar1 = param_1->field_0x5d;
  uVar7 = param_1->field_0x5e;
  uVar8 = param_1->field_0x5f;
  pTVar6 = pTVar22 + 1;
  (pTVar6->Data).Pad[0x14] = param_1->field_0x5c;
  (pTVar6->Data).Pad[0x15] = uVar1;
  (pTVar6->Data).Pad[0x16] = uVar7;
  (pTVar6->Data).Pad[0x17] = uVar8;
  pTVar22[1].Data.Pad[0x28] = '\0';
  uVar2 = param_1->field_0x70;
  pTVar22[1].Data.Pad[0x28] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x61;
    uVar7 = param_1->field_0x62;
    uVar8 = param_1->field_0x63;
    uVar9 = param_1->field_0x64;
    uVar10 = param_1->field_0x65;
    uVar11 = param_1->field_0x66;
    uVar12 = param_1->field_0x67;
    uVar13 = param_1->field_0x68;
    uVar14 = param_1->field_0x69;
    uVar15 = param_1->field_0x6a;
    uVar16 = param_1->field_0x6b;
    uVar17 = param_1->field_0x6c;
    uVar18 = param_1->field_0x6d;
    uVar19 = param_1->field_0x6e;
    uVar20 = param_1->field_0x6f;
    pTVar6 = pTVar22 + 1;
    (pTVar6->Data).Pad[0x18] = param_1->field_0x60;
    (pTVar6->Data).Pad[0x19] = uVar1;
    (pTVar6->Data).Pad[0x1a] = uVar7;
    (pTVar6->Data).Pad[0x1b] = uVar8;
    (pTVar6->Data).Pad[0x1c] = uVar9;
    (pTVar6->Data).Pad[0x1d] = uVar10;
    (pTVar6->Data).Pad[0x1e] = uVar11;
    (pTVar6->Data).Pad[0x1f] = uVar12;
    pTVar6 = pTVar22 + 1;
    (pTVar6->Data).Pad[0x20] = uVar13;
    (pTVar6->Data).Pad[0x21] = uVar14;
    (pTVar6->Data).Pad[0x22] = uVar15;
    (pTVar6->Data).Pad[0x23] = uVar16;
    (pTVar6->Data).Pad[0x24] = uVar17;
    (pTVar6->Data).Pad[0x25] = uVar18;
    (pTVar6->Data).Pad[0x26] = uVar19;
    (pTVar6->Data).Pad[0x27] = uVar20;
  }
  uVar1 = param_1->field_0x75;
  uVar7 = param_1->field_0x76;
  uVar8 = param_1->field_0x77;
  pTVar6 = pTVar22 + 1;
  (pTVar6->Data).Pad[0x2c] = param_1->field_0x74;
  (pTVar6->Data).Pad[0x2d] = uVar1;
  (pTVar6->Data).Pad[0x2e] = uVar7;
  (pTVar6->Data).Pad[0x2f] = uVar8;
  pTVar22[1].field_0x44 = 0;
  cVar3 = param_1->field_0x8c;
  pTVar22[1].field_0x44 = cVar3;
  if (cVar3 != '\0') {
    uVar1 = param_1->field_0x79;
    uVar7 = param_1->field_0x7a;
    uVar8 = param_1->field_0x7b;
    uVar9 = param_1->field_0x7c;
    uVar10 = param_1->field_0x7d;
    uVar11 = param_1->field_0x7e;
    uVar12 = param_1->field_0x7f;
    uVar13 = param_1->field_0x80;
    uVar14 = param_1->field_0x81;
    uVar15 = param_1->field_0x82;
    uVar16 = param_1->field_0x83;
    uVar17 = param_1->field_0x84;
    uVar18 = param_1->field_0x85;
    uVar19 = param_1->field_0x86;
    uVar20 = param_1->field_0x87;
    pTVar6 = pTVar22 + 1;
    (pTVar6->Data).Pad[0x30] = param_1->field_0x78;
    (pTVar6->Data).Pad[0x31] = uVar1;
    (pTVar6->Data).Pad[0x32] = uVar7;
    (pTVar6->Data).Pad[0x33] = uVar8;
    (pTVar6->Data).Pad[0x34] = uVar9;
    (pTVar6->Data).Pad[0x35] = uVar10;
    (pTVar6->Data).Pad[0x36] = uVar11;
    (pTVar6->Data).Pad[0x37] = uVar12;
    pTVar6 = pTVar22 + 1;
    (pTVar6->Data).Pad[0x38] = uVar13;
    (pTVar6->Data).Pad[0x39] = uVar14;
    (pTVar6->Data).Pad[0x3a] = uVar15;
    (pTVar6->Data).Pad[0x3b] = uVar16;
    (pTVar6->Data).Pad[0x3c] = uVar17;
    (pTVar6->Data).Pad[0x3d] = uVar18;
    (pTVar6->Data).Pad[0x3e] = uVar19;
    (pTVar6->Data).Pad[0x3f] = uVar20;
    *(undefined4 *)&pTVar22[1].field_0x40 = *(undefined4 *)&param_1->field_0x88;
  }
  pTVar22[2].Data.Pad[0] = param_1->field_0x90;
  *(undefined ***)(pTVar22->Data).Pad =
       &
       ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAdd_UFSourceIntegerChannel_MovieScene_UE___23_U__TAdd_V__TSubclassOf_VUMovieSceneBlenderSystem_____23_U__TAdd_UFMovieScenePropertyBinding___23_U__TAddConditional_UFGuid___23_U__TAddConditional_UFPropertyNotifyComponentData_MovieScene_UE___23__MovieScene_UE__6B_
  ;
  if (!this->bIsValid) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar21) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar22 = this;
  if (!this->bInline) {
    pTVar22 = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar21) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (pTVar22 != this) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar21) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

// InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<FGuid>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<FGuid>_>_> @ 14674b740

void __thiscall
TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<FGuid>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<FGuid>_>_>
          (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *this,
          TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<FGuid>_>
          *param_1)

{
  undefined1 uVar1;
  uchar uVar2;
  UObject *pUVar3;
  code *pcVar4;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  bool bVar13;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar14;
  
  this->bInline = false;
  pTVar14 = FMemory::Malloc(0x60,8);
  this->bIsValid = true;
  *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad = pTVar14;
  if (this->bInline) {
    pTVar14 = this;
  }
  *(undefined ***)(pTVar14->Data).Pad =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02__UFAdd_MovieScene_UE__U__TAdd_UFSourceIntegerChannel_MovieScene_UE___34_U__TAdd_V__TSubclassOf_VUMovieSceneBlenderSystem_____34_U__TAddConditional_UFGuid___34__MovieScene_UE__6B_
  ;
  uVar1 = param_1->field_0x9;
  (pTVar14->Data).Pad[8] = param_1->field_0x8;
  (pTVar14->Data).Pad[9] = uVar1;
  uVar1 = param_1->field_0x11;
  (pTVar14->Data).Pad[0x10] = param_1->field_0x10;
  (pTVar14->Data).Pad[0x11] = uVar1;
  (pTVar14->Data).Pad[0x20] = '\0';
  uVar2 = param_1->field_0x20;
  (pTVar14->Data).Pad[0x20] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x19;
    uVar6 = param_1->field_0x1a;
    uVar7 = param_1->field_0x1b;
    uVar8 = param_1->field_0x1c;
    uVar9 = param_1->field_0x1d;
    uVar10 = param_1->field_0x1e;
    uVar11 = param_1->field_0x1f;
    (pTVar14->Data).Pad[0x18] = param_1->field_0x18;
    (pTVar14->Data).Pad[0x19] = uVar1;
    (pTVar14->Data).Pad[0x1a] = uVar6;
    (pTVar14->Data).Pad[0x1b] = uVar7;
    (pTVar14->Data).Pad[0x1c] = uVar8;
    (pTVar14->Data).Pad[0x1d] = uVar9;
    (pTVar14->Data).Pad[0x1e] = uVar10;
    (pTVar14->Data).Pad[0x1f] = uVar11;
  }
  uVar1 = param_1->field_0x29;
  (pTVar14->Data).Pad[0x28] = param_1->field_0x28;
  (pTVar14->Data).Pad[0x29] = uVar1;
  (pTVar14->Data).Pad[0x38] = '\0';
  uVar2 = param_1->field_0x38;
  (pTVar14->Data).Pad[0x38] = uVar2;
  if (uVar2 != '\0') {
    pUVar3 = *(UObject **)&param_1->field_0x30;
    *(UObject **)((pTVar14->Data).Pad + 0x30) = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
  }
  *(undefined4 *)&pTVar14->field_0x40 = *(undefined4 *)&param_1->field_0x40;
  pTVar14[1].Data.Pad[0xc] = '\0';
  uVar2 = param_1->field_0x54;
  pTVar14[1].Data.Pad[0xc] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x4c;
    uVar6 = param_1->field_0x4d;
    uVar7 = param_1->field_0x4e;
    uVar8 = param_1->field_0x4f;
    uVar9 = param_1->field_0x50;
    uVar10 = param_1->field_0x51;
    uVar11 = param_1->field_0x52;
    uVar12 = param_1->field_0x53;
    *(undefined8 *)&pTVar14->field_0x44 = *(undefined8 *)&param_1->field_0x44;
    pTVar5 = pTVar14 + 1;
    (pTVar5->Data).Pad[4] = uVar1;
    (pTVar5->Data).Pad[5] = uVar6;
    (pTVar5->Data).Pad[6] = uVar7;
    (pTVar5->Data).Pad[7] = uVar8;
    (pTVar5->Data).Pad[8] = uVar9;
    (pTVar5->Data).Pad[9] = uVar10;
    (pTVar5->Data).Pad[10] = uVar11;
    (pTVar5->Data).Pad[0xb] = uVar12;
  }
  pTVar14[1].Data.Pad[0x10] = param_1->field_0x58;
  *(undefined ***)(pTVar14->Data).Pad =
       &
       ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAdd_UFSourceIntegerChannel_MovieScene_UE___23_U__TAdd_V__TSubclassOf_VUMovieSceneBlenderSystem_____23_U__TAddConditional_UFGuid___23__MovieScene_UE__6B_
  ;
  if (!this->bIsValid) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar14 = this;
  if (!this->bInline) {
    pTVar14 = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (pTVar14 != this) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_> @ 14674b8c0

void __thiscall
TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_>
          (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *this,
          TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
          *param_1)

{
  undefined1 uVar1;
  uchar uVar2;
  char cVar3;
  code *pcVar4;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar5;
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
  undefined1 uVar18;
  undefined1 uVar19;
  bool bVar20;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar21;
  
  this->bInline = false;
  pTVar21 = FMemory::Malloc(0x80,8);
  this->bIsValid = true;
  *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad = pTVar21;
  if (this->bInline) {
    pTVar21 = this;
  }
  *(undefined ***)(pTVar21->Data).Pad =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03__UFAdd_MovieScene_UE__U__TAdd_UFSourceObjectPathChannel_MovieScene_UE___34_U__TAdd_UFMovieScenePropertyBinding___34_U__TAddConditional_UFGuid___34_U__TAddConditional_UFPropertyNotifyComponentData_MovieScene_UE___34__MovieScene_UE__6B_
  ;
  uVar1 = param_1->field_0x9;
  (pTVar21->Data).Pad[8] = param_1->field_0x8;
  (pTVar21->Data).Pad[9] = uVar1;
  uVar1 = param_1->field_0x11;
  (pTVar21->Data).Pad[0x10] = param_1->field_0x10;
  (pTVar21->Data).Pad[0x11] = uVar1;
  (pTVar21->Data).Pad[0x20] = '\0';
  uVar2 = param_1->field_0x20;
  (pTVar21->Data).Pad[0x20] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x19;
    uVar6 = param_1->field_0x1a;
    uVar7 = param_1->field_0x1b;
    uVar8 = param_1->field_0x1c;
    uVar9 = param_1->field_0x1d;
    uVar10 = param_1->field_0x1e;
    uVar11 = param_1->field_0x1f;
    (pTVar21->Data).Pad[0x18] = param_1->field_0x18;
    (pTVar21->Data).Pad[0x19] = uVar1;
    (pTVar21->Data).Pad[0x1a] = uVar6;
    (pTVar21->Data).Pad[0x1b] = uVar7;
    (pTVar21->Data).Pad[0x1c] = uVar8;
    (pTVar21->Data).Pad[0x1d] = uVar9;
    (pTVar21->Data).Pad[0x1e] = uVar10;
    (pTVar21->Data).Pad[0x1f] = uVar11;
  }
  uVar1 = param_1->field_0x29;
  (pTVar21->Data).Pad[0x28] = param_1->field_0x28;
  (pTVar21->Data).Pad[0x29] = uVar1;
  pTVar21->field_0x40 = 0;
  cVar3 = param_1->field_0x40;
  pTVar21->field_0x40 = cVar3;
  if (cVar3 != '\0') {
    uVar1 = param_1->field_0x2d;
    uVar6 = param_1->field_0x2e;
    uVar7 = param_1->field_0x2f;
    uVar8 = param_1->field_0x30;
    uVar9 = param_1->field_0x31;
    uVar10 = param_1->field_0x32;
    uVar11 = param_1->field_0x33;
    uVar12 = param_1->field_0x34;
    uVar13 = param_1->field_0x35;
    uVar14 = param_1->field_0x36;
    uVar15 = param_1->field_0x37;
    uVar16 = param_1->field_0x38;
    uVar17 = param_1->field_0x39;
    uVar18 = param_1->field_0x3a;
    uVar19 = param_1->field_0x3b;
    (pTVar21->Data).Pad[0x2c] = param_1->field_0x2c;
    (pTVar21->Data).Pad[0x2d] = uVar1;
    (pTVar21->Data).Pad[0x2e] = uVar6;
    (pTVar21->Data).Pad[0x2f] = uVar7;
    (pTVar21->Data).Pad[0x30] = uVar8;
    (pTVar21->Data).Pad[0x31] = uVar9;
    (pTVar21->Data).Pad[0x32] = uVar10;
    (pTVar21->Data).Pad[0x33] = uVar11;
    (pTVar21->Data).Pad[0x34] = uVar12;
    (pTVar21->Data).Pad[0x35] = uVar13;
    (pTVar21->Data).Pad[0x36] = uVar14;
    (pTVar21->Data).Pad[0x37] = uVar15;
    (pTVar21->Data).Pad[0x38] = uVar16;
    (pTVar21->Data).Pad[0x39] = uVar17;
    (pTVar21->Data).Pad[0x3a] = uVar18;
    (pTVar21->Data).Pad[0x3b] = uVar19;
    uVar1 = param_1->field_0x3d;
    uVar6 = param_1->field_0x3e;
    uVar7 = param_1->field_0x3f;
    (pTVar21->Data).Pad[0x3c] = param_1->field_0x3c;
    (pTVar21->Data).Pad[0x3d] = uVar1;
    (pTVar21->Data).Pad[0x3e] = uVar6;
    (pTVar21->Data).Pad[0x3f] = uVar7;
  }
  *(undefined4 *)&pTVar21->field_0x44 = *(undefined4 *)&param_1->field_0x44;
  pTVar21[1].Data.Pad[0x10] = '\0';
  uVar2 = param_1->field_0x58;
  pTVar21[1].Data.Pad[0x10] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x49;
    uVar6 = param_1->field_0x4a;
    uVar7 = param_1->field_0x4b;
    uVar8 = param_1->field_0x4c;
    uVar9 = param_1->field_0x4d;
    uVar10 = param_1->field_0x4e;
    uVar11 = param_1->field_0x4f;
    uVar12 = param_1->field_0x50;
    uVar13 = param_1->field_0x51;
    uVar14 = param_1->field_0x52;
    uVar15 = param_1->field_0x53;
    uVar16 = param_1->field_0x54;
    uVar17 = param_1->field_0x55;
    uVar18 = param_1->field_0x56;
    uVar19 = param_1->field_0x57;
    pTVar21[1].Data.Pad[0] = param_1->field_0x48;
    pTVar21[1].Data.Pad[1] = uVar1;
    pTVar21[1].Data.Pad[2] = uVar6;
    pTVar21[1].Data.Pad[3] = uVar7;
    pTVar21[1].Data.Pad[4] = uVar8;
    pTVar21[1].Data.Pad[5] = uVar9;
    pTVar21[1].Data.Pad[6] = uVar10;
    pTVar21[1].Data.Pad[7] = uVar11;
    pTVar5 = pTVar21 + 1;
    (pTVar5->Data).Pad[8] = uVar12;
    (pTVar5->Data).Pad[9] = uVar13;
    (pTVar5->Data).Pad[10] = uVar14;
    (pTVar5->Data).Pad[0xb] = uVar15;
    (pTVar5->Data).Pad[0xc] = uVar16;
    (pTVar5->Data).Pad[0xd] = uVar17;
    (pTVar5->Data).Pad[0xe] = uVar18;
    (pTVar5->Data).Pad[0xf] = uVar19;
  }
  uVar1 = param_1->field_0x5d;
  uVar6 = param_1->field_0x5e;
  uVar7 = param_1->field_0x5f;
  pTVar5 = pTVar21 + 1;
  (pTVar5->Data).Pad[0x14] = param_1->field_0x5c;
  (pTVar5->Data).Pad[0x15] = uVar1;
  (pTVar5->Data).Pad[0x16] = uVar6;
  (pTVar5->Data).Pad[0x17] = uVar7;
  pTVar21[1].Data.Pad[0x2c] = '\0';
  uVar2 = param_1->field_0x74;
  pTVar21[1].Data.Pad[0x2c] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x61;
    uVar6 = param_1->field_0x62;
    uVar7 = param_1->field_0x63;
    uVar8 = param_1->field_0x64;
    uVar9 = param_1->field_0x65;
    uVar10 = param_1->field_0x66;
    uVar11 = param_1->field_0x67;
    uVar12 = param_1->field_0x68;
    uVar13 = param_1->field_0x69;
    uVar14 = param_1->field_0x6a;
    uVar15 = param_1->field_0x6b;
    uVar16 = param_1->field_0x6c;
    uVar17 = param_1->field_0x6d;
    uVar18 = param_1->field_0x6e;
    uVar19 = param_1->field_0x6f;
    pTVar5 = pTVar21 + 1;
    (pTVar5->Data).Pad[0x18] = param_1->field_0x60;
    (pTVar5->Data).Pad[0x19] = uVar1;
    (pTVar5->Data).Pad[0x1a] = uVar6;
    (pTVar5->Data).Pad[0x1b] = uVar7;
    (pTVar5->Data).Pad[0x1c] = uVar8;
    (pTVar5->Data).Pad[0x1d] = uVar9;
    (pTVar5->Data).Pad[0x1e] = uVar10;
    (pTVar5->Data).Pad[0x1f] = uVar11;
    pTVar5 = pTVar21 + 1;
    (pTVar5->Data).Pad[0x20] = uVar12;
    (pTVar5->Data).Pad[0x21] = uVar13;
    (pTVar5->Data).Pad[0x22] = uVar14;
    (pTVar5->Data).Pad[0x23] = uVar15;
    (pTVar5->Data).Pad[0x24] = uVar16;
    (pTVar5->Data).Pad[0x25] = uVar17;
    (pTVar5->Data).Pad[0x26] = uVar18;
    (pTVar5->Data).Pad[0x27] = uVar19;
    uVar1 = param_1->field_0x71;
    uVar6 = param_1->field_0x72;
    uVar7 = param_1->field_0x73;
    pTVar5 = pTVar21 + 1;
    (pTVar5->Data).Pad[0x28] = param_1->field_0x70;
    (pTVar5->Data).Pad[0x29] = uVar1;
    (pTVar5->Data).Pad[0x2a] = uVar6;
    (pTVar5->Data).Pad[0x2b] = uVar7;
  }
  pTVar21[1].Data.Pad[0x30] = param_1->field_0x78;
  *(undefined ***)(pTVar21->Data).Pad =
       &
       ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAdd_UFSourceObjectPathChannel_MovieScene_UE___23_U__TAdd_UFMovieScenePropertyBinding___23_U__TAddConditional_UFGuid___23_U__TAddConditional_UFPropertyNotifyComponentData_MovieScene_UE___23__MovieScene_UE__6B_
  ;
  if (!this->bIsValid) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar20) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar21 = this;
  if (!this->bInline) {
    pTVar21 = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar20) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (pTVar21 != this) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar20) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TAddConditional<FGuid>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TAddConditional<FGuid>_>_> @ 14674ba60

void __thiscall
TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TAddConditional<FGuid>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TAddConditional<FGuid>_>_>
          (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *this,
          TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TAddConditional<FGuid>_>
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
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01__UFAdd_MovieScene_UE__U__TAdd_UFSourceObjectPathChannel_MovieScene_UE___34_U__TAddConditional_UFGuid___34__MovieScene_UE__6B_
  ;
  uVar1 = param_1->field_0x9;
  (pTVar19->Data).Pad[8] = param_1->field_0x8;
  (pTVar19->Data).Pad[9] = uVar1;
  uVar1 = param_1->field_0x11;
  (pTVar19->Data).Pad[0x10] = param_1->field_0x10;
  (pTVar19->Data).Pad[0x11] = uVar1;
  (pTVar19->Data).Pad[0x20] = '\0';
  uVar2 = param_1->field_0x20;
  (pTVar19->Data).Pad[0x20] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x19;
    uVar4 = param_1->field_0x1a;
    uVar5 = param_1->field_0x1b;
    uVar6 = param_1->field_0x1c;
    uVar7 = param_1->field_0x1d;
    uVar8 = param_1->field_0x1e;
    uVar9 = param_1->field_0x1f;
    (pTVar19->Data).Pad[0x18] = param_1->field_0x18;
    (pTVar19->Data).Pad[0x19] = uVar1;
    (pTVar19->Data).Pad[0x1a] = uVar4;
    (pTVar19->Data).Pad[0x1b] = uVar5;
    (pTVar19->Data).Pad[0x1c] = uVar6;
    (pTVar19->Data).Pad[0x1d] = uVar7;
    (pTVar19->Data).Pad[0x1e] = uVar8;
    (pTVar19->Data).Pad[0x1f] = uVar9;
  }
  uVar1 = param_1->field_0x29;
  uVar4 = param_1->field_0x2a;
  uVar5 = param_1->field_0x2b;
  (pTVar19->Data).Pad[0x28] = param_1->field_0x28;
  (pTVar19->Data).Pad[0x29] = uVar1;
  (pTVar19->Data).Pad[0x2a] = uVar4;
  (pTVar19->Data).Pad[0x2b] = uVar5;
  (pTVar19->Data).Pad[0x3c] = '\0';
  uVar2 = param_1->field_0x3c;
  (pTVar19->Data).Pad[0x3c] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x2d;
    uVar4 = param_1->field_0x2e;
    uVar5 = param_1->field_0x2f;
    uVar6 = param_1->field_0x30;
    uVar7 = param_1->field_0x31;
    uVar8 = param_1->field_0x32;
    uVar9 = param_1->field_0x33;
    uVar10 = param_1->field_0x34;
    uVar11 = param_1->field_0x35;
    uVar12 = param_1->field_0x36;
    uVar13 = param_1->field_0x37;
    uVar14 = param_1->field_0x38;
    uVar15 = param_1->field_0x39;
    uVar16 = param_1->field_0x3a;
    uVar17 = param_1->field_0x3b;
    (pTVar19->Data).Pad[0x2c] = param_1->field_0x2c;
    (pTVar19->Data).Pad[0x2d] = uVar1;
    (pTVar19->Data).Pad[0x2e] = uVar4;
    (pTVar19->Data).Pad[0x2f] = uVar5;
    (pTVar19->Data).Pad[0x30] = uVar6;
    (pTVar19->Data).Pad[0x31] = uVar7;
    (pTVar19->Data).Pad[0x32] = uVar8;
    (pTVar19->Data).Pad[0x33] = uVar9;
    (pTVar19->Data).Pad[0x34] = uVar10;
    (pTVar19->Data).Pad[0x35] = uVar11;
    (pTVar19->Data).Pad[0x36] = uVar12;
    (pTVar19->Data).Pad[0x37] = uVar13;
    (pTVar19->Data).Pad[0x38] = uVar14;
    (pTVar19->Data).Pad[0x39] = uVar15;
    (pTVar19->Data).Pad[0x3a] = uVar16;
    (pTVar19->Data).Pad[0x3b] = uVar17;
  }
  pTVar19->field_0x40 = param_1->field_0x40;
  *(undefined ***)(pTVar19->Data).Pad =
       &
       ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAdd_UFSourceObjectPathChannel_MovieScene_UE___23_U__TAddConditional_UFGuid___23__MovieScene_UE__6B_
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

// InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_> @ 14674bba0

void __thiscall
TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_>
          (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *this,
          TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
          *param_1)

{
  undefined1 uVar1;
  uchar uVar2;
  char cVar3;
  code *pcVar4;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar5;
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
  undefined1 uVar18;
  undefined1 uVar19;
  bool bVar20;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar21;
  
  this->bInline = false;
  pTVar21 = FMemory::Malloc(0x80,8);
  this->bIsValid = true;
  *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad = pTVar21;
  if (this->bInline) {
    pTVar21 = this;
  }
  *(undefined ***)(pTVar21->Data).Pad =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03__UFAdd_MovieScene_UE__U__TAdd_UFSourceStringChannel_MovieScene_UE___34_U__TAdd_UFMovieScenePropertyBinding___34_U__TAddConditional_UFGuid___34_U__TAddConditional_UFPropertyNotifyComponentData_MovieScene_UE___34__MovieScene_UE__6B_
  ;
  uVar1 = param_1->field_0x9;
  (pTVar21->Data).Pad[8] = param_1->field_0x8;
  (pTVar21->Data).Pad[9] = uVar1;
  uVar1 = param_1->field_0x11;
  (pTVar21->Data).Pad[0x10] = param_1->field_0x10;
  (pTVar21->Data).Pad[0x11] = uVar1;
  (pTVar21->Data).Pad[0x20] = '\0';
  uVar2 = param_1->field_0x20;
  (pTVar21->Data).Pad[0x20] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x19;
    uVar6 = param_1->field_0x1a;
    uVar7 = param_1->field_0x1b;
    uVar8 = param_1->field_0x1c;
    uVar9 = param_1->field_0x1d;
    uVar10 = param_1->field_0x1e;
    uVar11 = param_1->field_0x1f;
    (pTVar21->Data).Pad[0x18] = param_1->field_0x18;
    (pTVar21->Data).Pad[0x19] = uVar1;
    (pTVar21->Data).Pad[0x1a] = uVar6;
    (pTVar21->Data).Pad[0x1b] = uVar7;
    (pTVar21->Data).Pad[0x1c] = uVar8;
    (pTVar21->Data).Pad[0x1d] = uVar9;
    (pTVar21->Data).Pad[0x1e] = uVar10;
    (pTVar21->Data).Pad[0x1f] = uVar11;
  }
  uVar1 = param_1->field_0x29;
  (pTVar21->Data).Pad[0x28] = param_1->field_0x28;
  (pTVar21->Data).Pad[0x29] = uVar1;
  pTVar21->field_0x40 = 0;
  cVar3 = param_1->field_0x40;
  pTVar21->field_0x40 = cVar3;
  if (cVar3 != '\0') {
    uVar1 = param_1->field_0x2d;
    uVar6 = param_1->field_0x2e;
    uVar7 = param_1->field_0x2f;
    uVar8 = param_1->field_0x30;
    uVar9 = param_1->field_0x31;
    uVar10 = param_1->field_0x32;
    uVar11 = param_1->field_0x33;
    uVar12 = param_1->field_0x34;
    uVar13 = param_1->field_0x35;
    uVar14 = param_1->field_0x36;
    uVar15 = param_1->field_0x37;
    uVar16 = param_1->field_0x38;
    uVar17 = param_1->field_0x39;
    uVar18 = param_1->field_0x3a;
    uVar19 = param_1->field_0x3b;
    (pTVar21->Data).Pad[0x2c] = param_1->field_0x2c;
    (pTVar21->Data).Pad[0x2d] = uVar1;
    (pTVar21->Data).Pad[0x2e] = uVar6;
    (pTVar21->Data).Pad[0x2f] = uVar7;
    (pTVar21->Data).Pad[0x30] = uVar8;
    (pTVar21->Data).Pad[0x31] = uVar9;
    (pTVar21->Data).Pad[0x32] = uVar10;
    (pTVar21->Data).Pad[0x33] = uVar11;
    (pTVar21->Data).Pad[0x34] = uVar12;
    (pTVar21->Data).Pad[0x35] = uVar13;
    (pTVar21->Data).Pad[0x36] = uVar14;
    (pTVar21->Data).Pad[0x37] = uVar15;
    (pTVar21->Data).Pad[0x38] = uVar16;
    (pTVar21->Data).Pad[0x39] = uVar17;
    (pTVar21->Data).Pad[0x3a] = uVar18;
    (pTVar21->Data).Pad[0x3b] = uVar19;
    uVar1 = param_1->field_0x3d;
    uVar6 = param_1->field_0x3e;
    uVar7 = param_1->field_0x3f;
    (pTVar21->Data).Pad[0x3c] = param_1->field_0x3c;
    (pTVar21->Data).Pad[0x3d] = uVar1;
    (pTVar21->Data).Pad[0x3e] = uVar6;
    (pTVar21->Data).Pad[0x3f] = uVar7;
  }
  *(undefined4 *)&pTVar21->field_0x44 = *(undefined4 *)&param_1->field_0x44;
  pTVar21[1].Data.Pad[0x10] = '\0';
  uVar2 = param_1->field_0x58;
  pTVar21[1].Data.Pad[0x10] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x49;
    uVar6 = param_1->field_0x4a;
    uVar7 = param_1->field_0x4b;
    uVar8 = param_1->field_0x4c;
    uVar9 = param_1->field_0x4d;
    uVar10 = param_1->field_0x4e;
    uVar11 = param_1->field_0x4f;
    uVar12 = param_1->field_0x50;
    uVar13 = param_1->field_0x51;
    uVar14 = param_1->field_0x52;
    uVar15 = param_1->field_0x53;
    uVar16 = param_1->field_0x54;
    uVar17 = param_1->field_0x55;
    uVar18 = param_1->field_0x56;
    uVar19 = param_1->field_0x57;
    pTVar21[1].Data.Pad[0] = param_1->field_0x48;
    pTVar21[1].Data.Pad[1] = uVar1;
    pTVar21[1].Data.Pad[2] = uVar6;
    pTVar21[1].Data.Pad[3] = uVar7;
    pTVar21[1].Data.Pad[4] = uVar8;
    pTVar21[1].Data.Pad[5] = uVar9;
    pTVar21[1].Data.Pad[6] = uVar10;
    pTVar21[1].Data.Pad[7] = uVar11;
    pTVar5 = pTVar21 + 1;
    (pTVar5->Data).Pad[8] = uVar12;
    (pTVar5->Data).Pad[9] = uVar13;
    (pTVar5->Data).Pad[10] = uVar14;
    (pTVar5->Data).Pad[0xb] = uVar15;
    (pTVar5->Data).Pad[0xc] = uVar16;
    (pTVar5->Data).Pad[0xd] = uVar17;
    (pTVar5->Data).Pad[0xe] = uVar18;
    (pTVar5->Data).Pad[0xf] = uVar19;
  }
  uVar1 = param_1->field_0x5d;
  uVar6 = param_1->field_0x5e;
  uVar7 = param_1->field_0x5f;
  pTVar5 = pTVar21 + 1;
  (pTVar5->Data).Pad[0x14] = param_1->field_0x5c;
  (pTVar5->Data).Pad[0x15] = uVar1;
  (pTVar5->Data).Pad[0x16] = uVar6;
  (pTVar5->Data).Pad[0x17] = uVar7;
  pTVar21[1].Data.Pad[0x2c] = '\0';
  uVar2 = param_1->field_0x74;
  pTVar21[1].Data.Pad[0x2c] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x61;
    uVar6 = param_1->field_0x62;
    uVar7 = param_1->field_0x63;
    uVar8 = param_1->field_0x64;
    uVar9 = param_1->field_0x65;
    uVar10 = param_1->field_0x66;
    uVar11 = param_1->field_0x67;
    uVar12 = param_1->field_0x68;
    uVar13 = param_1->field_0x69;
    uVar14 = param_1->field_0x6a;
    uVar15 = param_1->field_0x6b;
    uVar16 = param_1->field_0x6c;
    uVar17 = param_1->field_0x6d;
    uVar18 = param_1->field_0x6e;
    uVar19 = param_1->field_0x6f;
    pTVar5 = pTVar21 + 1;
    (pTVar5->Data).Pad[0x18] = param_1->field_0x60;
    (pTVar5->Data).Pad[0x19] = uVar1;
    (pTVar5->Data).Pad[0x1a] = uVar6;
    (pTVar5->Data).Pad[0x1b] = uVar7;
    (pTVar5->Data).Pad[0x1c] = uVar8;
    (pTVar5->Data).Pad[0x1d] = uVar9;
    (pTVar5->Data).Pad[0x1e] = uVar10;
    (pTVar5->Data).Pad[0x1f] = uVar11;
    pTVar5 = pTVar21 + 1;
    (pTVar5->Data).Pad[0x20] = uVar12;
    (pTVar5->Data).Pad[0x21] = uVar13;
    (pTVar5->Data).Pad[0x22] = uVar14;
    (pTVar5->Data).Pad[0x23] = uVar15;
    (pTVar5->Data).Pad[0x24] = uVar16;
    (pTVar5->Data).Pad[0x25] = uVar17;
    (pTVar5->Data).Pad[0x26] = uVar18;
    (pTVar5->Data).Pad[0x27] = uVar19;
    uVar1 = param_1->field_0x71;
    uVar6 = param_1->field_0x72;
    uVar7 = param_1->field_0x73;
    pTVar5 = pTVar21 + 1;
    (pTVar5->Data).Pad[0x28] = param_1->field_0x70;
    (pTVar5->Data).Pad[0x29] = uVar1;
    (pTVar5->Data).Pad[0x2a] = uVar6;
    (pTVar5->Data).Pad[0x2b] = uVar7;
  }
  pTVar21[1].Data.Pad[0x30] = param_1->field_0x78;
  *(undefined ***)(pTVar21->Data).Pad =
       &
       ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAdd_UFSourceStringChannel_MovieScene_UE___23_U__TAdd_UFMovieScenePropertyBinding___23_U__TAddConditional_UFGuid___23_U__TAddConditional_UFPropertyNotifyComponentData_MovieScene_UE___23__MovieScene_UE__6B_
  ;
  if (!this->bIsValid) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar20) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar21 = this;
  if (!this->bInline) {
    pTVar21 = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar20) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (pTVar21 != this) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar20) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TAddConditional<FGuid>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TAddConditional<FGuid>_>_> @ 14674bd40

void __thiscall
TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TAddConditional<FGuid>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TAddConditional<FGuid>_>_>
          (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *this,
          TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TAddConditional<FGuid>_>
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
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01__UFAdd_MovieScene_UE__U__TAdd_UFSourceStringChannel_MovieScene_UE___34_U__TAddConditional_UFGuid___34__MovieScene_UE__6B_
  ;
  uVar1 = param_1->field_0x9;
  (pTVar19->Data).Pad[8] = param_1->field_0x8;
  (pTVar19->Data).Pad[9] = uVar1;
  uVar1 = param_1->field_0x11;
  (pTVar19->Data).Pad[0x10] = param_1->field_0x10;
  (pTVar19->Data).Pad[0x11] = uVar1;
  (pTVar19->Data).Pad[0x20] = '\0';
  uVar2 = param_1->field_0x20;
  (pTVar19->Data).Pad[0x20] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x19;
    uVar4 = param_1->field_0x1a;
    uVar5 = param_1->field_0x1b;
    uVar6 = param_1->field_0x1c;
    uVar7 = param_1->field_0x1d;
    uVar8 = param_1->field_0x1e;
    uVar9 = param_1->field_0x1f;
    (pTVar19->Data).Pad[0x18] = param_1->field_0x18;
    (pTVar19->Data).Pad[0x19] = uVar1;
    (pTVar19->Data).Pad[0x1a] = uVar4;
    (pTVar19->Data).Pad[0x1b] = uVar5;
    (pTVar19->Data).Pad[0x1c] = uVar6;
    (pTVar19->Data).Pad[0x1d] = uVar7;
    (pTVar19->Data).Pad[0x1e] = uVar8;
    (pTVar19->Data).Pad[0x1f] = uVar9;
  }
  uVar1 = param_1->field_0x29;
  uVar4 = param_1->field_0x2a;
  uVar5 = param_1->field_0x2b;
  (pTVar19->Data).Pad[0x28] = param_1->field_0x28;
  (pTVar19->Data).Pad[0x29] = uVar1;
  (pTVar19->Data).Pad[0x2a] = uVar4;
  (pTVar19->Data).Pad[0x2b] = uVar5;
  (pTVar19->Data).Pad[0x3c] = '\0';
  uVar2 = param_1->field_0x3c;
  (pTVar19->Data).Pad[0x3c] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x2d;
    uVar4 = param_1->field_0x2e;
    uVar5 = param_1->field_0x2f;
    uVar6 = param_1->field_0x30;
    uVar7 = param_1->field_0x31;
    uVar8 = param_1->field_0x32;
    uVar9 = param_1->field_0x33;
    uVar10 = param_1->field_0x34;
    uVar11 = param_1->field_0x35;
    uVar12 = param_1->field_0x36;
    uVar13 = param_1->field_0x37;
    uVar14 = param_1->field_0x38;
    uVar15 = param_1->field_0x39;
    uVar16 = param_1->field_0x3a;
    uVar17 = param_1->field_0x3b;
    (pTVar19->Data).Pad[0x2c] = param_1->field_0x2c;
    (pTVar19->Data).Pad[0x2d] = uVar1;
    (pTVar19->Data).Pad[0x2e] = uVar4;
    (pTVar19->Data).Pad[0x2f] = uVar5;
    (pTVar19->Data).Pad[0x30] = uVar6;
    (pTVar19->Data).Pad[0x31] = uVar7;
    (pTVar19->Data).Pad[0x32] = uVar8;
    (pTVar19->Data).Pad[0x33] = uVar9;
    (pTVar19->Data).Pad[0x34] = uVar10;
    (pTVar19->Data).Pad[0x35] = uVar11;
    (pTVar19->Data).Pad[0x36] = uVar12;
    (pTVar19->Data).Pad[0x37] = uVar13;
    (pTVar19->Data).Pad[0x38] = uVar14;
    (pTVar19->Data).Pad[0x39] = uVar15;
    (pTVar19->Data).Pad[0x3a] = uVar16;
    (pTVar19->Data).Pad[0x3b] = uVar17;
  }
  pTVar19->field_0x40 = param_1->field_0x40;
  *(undefined ***)(pTVar19->Data).Pad =
       &
       ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAdd_UFSourceStringChannel_MovieScene_UE___23_U__TAddConditional_UFGuid___23__MovieScene_UE__6B_
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

// InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_> @ 14674be80

void __thiscall
TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_>
          (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *this,
          TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
          *param_1)

{
  undefined1 uVar1;
  uchar uVar2;
  char cVar3;
  code *pcVar4;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar5;
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
  undefined1 uVar18;
  undefined1 uVar19;
  bool bVar20;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar21;
  
  this->bInline = false;
  pTVar21 = FMemory::Malloc(0x80,8);
  this->bIsValid = true;
  *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad = pTVar21;
  if (this->bInline) {
    pTVar21 = this;
  }
  *(undefined ***)(pTVar21->Data).Pad =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03__UFAdd_MovieScene_UE__U__TAdd_UFSourceTextChannel_MovieScene_UE___34_U__TAdd_UFMovieScenePropertyBinding___34_U__TAddConditional_UFGuid___34_U__TAddConditional_UFPropertyNotifyComponentData_MovieScene_UE___34__MovieScene_UE__6B_
  ;
  uVar1 = param_1->field_0x9;
  (pTVar21->Data).Pad[8] = param_1->field_0x8;
  (pTVar21->Data).Pad[9] = uVar1;
  uVar1 = param_1->field_0x11;
  (pTVar21->Data).Pad[0x10] = param_1->field_0x10;
  (pTVar21->Data).Pad[0x11] = uVar1;
  (pTVar21->Data).Pad[0x20] = '\0';
  uVar2 = param_1->field_0x20;
  (pTVar21->Data).Pad[0x20] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x19;
    uVar6 = param_1->field_0x1a;
    uVar7 = param_1->field_0x1b;
    uVar8 = param_1->field_0x1c;
    uVar9 = param_1->field_0x1d;
    uVar10 = param_1->field_0x1e;
    uVar11 = param_1->field_0x1f;
    (pTVar21->Data).Pad[0x18] = param_1->field_0x18;
    (pTVar21->Data).Pad[0x19] = uVar1;
    (pTVar21->Data).Pad[0x1a] = uVar6;
    (pTVar21->Data).Pad[0x1b] = uVar7;
    (pTVar21->Data).Pad[0x1c] = uVar8;
    (pTVar21->Data).Pad[0x1d] = uVar9;
    (pTVar21->Data).Pad[0x1e] = uVar10;
    (pTVar21->Data).Pad[0x1f] = uVar11;
  }
  uVar1 = param_1->field_0x29;
  (pTVar21->Data).Pad[0x28] = param_1->field_0x28;
  (pTVar21->Data).Pad[0x29] = uVar1;
  pTVar21->field_0x40 = 0;
  cVar3 = param_1->field_0x40;
  pTVar21->field_0x40 = cVar3;
  if (cVar3 != '\0') {
    uVar1 = param_1->field_0x2d;
    uVar6 = param_1->field_0x2e;
    uVar7 = param_1->field_0x2f;
    uVar8 = param_1->field_0x30;
    uVar9 = param_1->field_0x31;
    uVar10 = param_1->field_0x32;
    uVar11 = param_1->field_0x33;
    uVar12 = param_1->field_0x34;
    uVar13 = param_1->field_0x35;
    uVar14 = param_1->field_0x36;
    uVar15 = param_1->field_0x37;
    uVar16 = param_1->field_0x38;
    uVar17 = param_1->field_0x39;
    uVar18 = param_1->field_0x3a;
    uVar19 = param_1->field_0x3b;
    (pTVar21->Data).Pad[0x2c] = param_1->field_0x2c;
    (pTVar21->Data).Pad[0x2d] = uVar1;
    (pTVar21->Data).Pad[0x2e] = uVar6;
    (pTVar21->Data).Pad[0x2f] = uVar7;
    (pTVar21->Data).Pad[0x30] = uVar8;
    (pTVar21->Data).Pad[0x31] = uVar9;
    (pTVar21->Data).Pad[0x32] = uVar10;
    (pTVar21->Data).Pad[0x33] = uVar11;
    (pTVar21->Data).Pad[0x34] = uVar12;
    (pTVar21->Data).Pad[0x35] = uVar13;
    (pTVar21->Data).Pad[0x36] = uVar14;
    (pTVar21->Data).Pad[0x37] = uVar15;
    (pTVar21->Data).Pad[0x38] = uVar16;
    (pTVar21->Data).Pad[0x39] = uVar17;
    (pTVar21->Data).Pad[0x3a] = uVar18;
    (pTVar21->Data).Pad[0x3b] = uVar19;
    uVar1 = param_1->field_0x3d;
    uVar6 = param_1->field_0x3e;
    uVar7 = param_1->field_0x3f;
    (pTVar21->Data).Pad[0x3c] = param_1->field_0x3c;
    (pTVar21->Data).Pad[0x3d] = uVar1;
    (pTVar21->Data).Pad[0x3e] = uVar6;
    (pTVar21->Data).Pad[0x3f] = uVar7;
  }
  *(undefined4 *)&pTVar21->field_0x44 = *(undefined4 *)&param_1->field_0x44;
  pTVar21[1].Data.Pad[0x10] = '\0';
  uVar2 = param_1->field_0x58;
  pTVar21[1].Data.Pad[0x10] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x49;
    uVar6 = param_1->field_0x4a;
    uVar7 = param_1->field_0x4b;
    uVar8 = param_1->field_0x4c;
    uVar9 = param_1->field_0x4d;
    uVar10 = param_1->field_0x4e;
    uVar11 = param_1->field_0x4f;
    uVar12 = param_1->field_0x50;
    uVar13 = param_1->field_0x51;
    uVar14 = param_1->field_0x52;
    uVar15 = param_1->field_0x53;
    uVar16 = param_1->field_0x54;
    uVar17 = param_1->field_0x55;
    uVar18 = param_1->field_0x56;
    uVar19 = param_1->field_0x57;
    pTVar21[1].Data.Pad[0] = param_1->field_0x48;
    pTVar21[1].Data.Pad[1] = uVar1;
    pTVar21[1].Data.Pad[2] = uVar6;
    pTVar21[1].Data.Pad[3] = uVar7;
    pTVar21[1].Data.Pad[4] = uVar8;
    pTVar21[1].Data.Pad[5] = uVar9;
    pTVar21[1].Data.Pad[6] = uVar10;
    pTVar21[1].Data.Pad[7] = uVar11;
    pTVar5 = pTVar21 + 1;
    (pTVar5->Data).Pad[8] = uVar12;
    (pTVar5->Data).Pad[9] = uVar13;
    (pTVar5->Data).Pad[10] = uVar14;
    (pTVar5->Data).Pad[0xb] = uVar15;
    (pTVar5->Data).Pad[0xc] = uVar16;
    (pTVar5->Data).Pad[0xd] = uVar17;
    (pTVar5->Data).Pad[0xe] = uVar18;
    (pTVar5->Data).Pad[0xf] = uVar19;
  }
  uVar1 = param_1->field_0x5d;
  uVar6 = param_1->field_0x5e;
  uVar7 = param_1->field_0x5f;
  pTVar5 = pTVar21 + 1;
  (pTVar5->Data).Pad[0x14] = param_1->field_0x5c;
  (pTVar5->Data).Pad[0x15] = uVar1;
  (pTVar5->Data).Pad[0x16] = uVar6;
  (pTVar5->Data).Pad[0x17] = uVar7;
  pTVar21[1].Data.Pad[0x2c] = '\0';
  uVar2 = param_1->field_0x74;
  pTVar21[1].Data.Pad[0x2c] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x61;
    uVar6 = param_1->field_0x62;
    uVar7 = param_1->field_0x63;
    uVar8 = param_1->field_0x64;
    uVar9 = param_1->field_0x65;
    uVar10 = param_1->field_0x66;
    uVar11 = param_1->field_0x67;
    uVar12 = param_1->field_0x68;
    uVar13 = param_1->field_0x69;
    uVar14 = param_1->field_0x6a;
    uVar15 = param_1->field_0x6b;
    uVar16 = param_1->field_0x6c;
    uVar17 = param_1->field_0x6d;
    uVar18 = param_1->field_0x6e;
    uVar19 = param_1->field_0x6f;
    pTVar5 = pTVar21 + 1;
    (pTVar5->Data).Pad[0x18] = param_1->field_0x60;
    (pTVar5->Data).Pad[0x19] = uVar1;
    (pTVar5->Data).Pad[0x1a] = uVar6;
    (pTVar5->Data).Pad[0x1b] = uVar7;
    (pTVar5->Data).Pad[0x1c] = uVar8;
    (pTVar5->Data).Pad[0x1d] = uVar9;
    (pTVar5->Data).Pad[0x1e] = uVar10;
    (pTVar5->Data).Pad[0x1f] = uVar11;
    pTVar5 = pTVar21 + 1;
    (pTVar5->Data).Pad[0x20] = uVar12;
    (pTVar5->Data).Pad[0x21] = uVar13;
    (pTVar5->Data).Pad[0x22] = uVar14;
    (pTVar5->Data).Pad[0x23] = uVar15;
    (pTVar5->Data).Pad[0x24] = uVar16;
    (pTVar5->Data).Pad[0x25] = uVar17;
    (pTVar5->Data).Pad[0x26] = uVar18;
    (pTVar5->Data).Pad[0x27] = uVar19;
    uVar1 = param_1->field_0x71;
    uVar6 = param_1->field_0x72;
    uVar7 = param_1->field_0x73;
    pTVar5 = pTVar21 + 1;
    (pTVar5->Data).Pad[0x28] = param_1->field_0x70;
    (pTVar5->Data).Pad[0x29] = uVar1;
    (pTVar5->Data).Pad[0x2a] = uVar6;
    (pTVar5->Data).Pad[0x2b] = uVar7;
  }
  pTVar21[1].Data.Pad[0x30] = param_1->field_0x78;
  *(undefined ***)(pTVar21->Data).Pad =
       &
       ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAdd_UFSourceTextChannel_MovieScene_UE___23_U__TAdd_UFMovieScenePropertyBinding___23_U__TAddConditional_UFGuid___23_U__TAddConditional_UFPropertyNotifyComponentData_MovieScene_UE___23__MovieScene_UE__6B_
  ;
  if (!this->bIsValid) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar20) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar21 = this;
  if (!this->bInline) {
    pTVar21 = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar20) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (pTVar21 != this) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar20) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TAddConditional<FGuid>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TAddConditional<FGuid>_>_> @ 14674c020

void __thiscall
TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TAddConditional<FGuid>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TAddConditional<FGuid>_>_>
          (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *this,
          TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TAddConditional<FGuid>_>
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
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01__UFAdd_MovieScene_UE__U__TAdd_UFSourceTextChannel_MovieScene_UE___34_U__TAddConditional_UFGuid___34__MovieScene_UE__6B_
  ;
  uVar1 = param_1->field_0x9;
  (pTVar19->Data).Pad[8] = param_1->field_0x8;
  (pTVar19->Data).Pad[9] = uVar1;
  uVar1 = param_1->field_0x11;
  (pTVar19->Data).Pad[0x10] = param_1->field_0x10;
  (pTVar19->Data).Pad[0x11] = uVar1;
  (pTVar19->Data).Pad[0x20] = '\0';
  uVar2 = param_1->field_0x20;
  (pTVar19->Data).Pad[0x20] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x19;
    uVar4 = param_1->field_0x1a;
    uVar5 = param_1->field_0x1b;
    uVar6 = param_1->field_0x1c;
    uVar7 = param_1->field_0x1d;
    uVar8 = param_1->field_0x1e;
    uVar9 = param_1->field_0x1f;
    (pTVar19->Data).Pad[0x18] = param_1->field_0x18;
    (pTVar19->Data).Pad[0x19] = uVar1;
    (pTVar19->Data).Pad[0x1a] = uVar4;
    (pTVar19->Data).Pad[0x1b] = uVar5;
    (pTVar19->Data).Pad[0x1c] = uVar6;
    (pTVar19->Data).Pad[0x1d] = uVar7;
    (pTVar19->Data).Pad[0x1e] = uVar8;
    (pTVar19->Data).Pad[0x1f] = uVar9;
  }
  uVar1 = param_1->field_0x29;
  uVar4 = param_1->field_0x2a;
  uVar5 = param_1->field_0x2b;
  (pTVar19->Data).Pad[0x28] = param_1->field_0x28;
  (pTVar19->Data).Pad[0x29] = uVar1;
  (pTVar19->Data).Pad[0x2a] = uVar4;
  (pTVar19->Data).Pad[0x2b] = uVar5;
  (pTVar19->Data).Pad[0x3c] = '\0';
  uVar2 = param_1->field_0x3c;
  (pTVar19->Data).Pad[0x3c] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x2d;
    uVar4 = param_1->field_0x2e;
    uVar5 = param_1->field_0x2f;
    uVar6 = param_1->field_0x30;
    uVar7 = param_1->field_0x31;
    uVar8 = param_1->field_0x32;
    uVar9 = param_1->field_0x33;
    uVar10 = param_1->field_0x34;
    uVar11 = param_1->field_0x35;
    uVar12 = param_1->field_0x36;
    uVar13 = param_1->field_0x37;
    uVar14 = param_1->field_0x38;
    uVar15 = param_1->field_0x39;
    uVar16 = param_1->field_0x3a;
    uVar17 = param_1->field_0x3b;
    (pTVar19->Data).Pad[0x2c] = param_1->field_0x2c;
    (pTVar19->Data).Pad[0x2d] = uVar1;
    (pTVar19->Data).Pad[0x2e] = uVar4;
    (pTVar19->Data).Pad[0x2f] = uVar5;
    (pTVar19->Data).Pad[0x30] = uVar6;
    (pTVar19->Data).Pad[0x31] = uVar7;
    (pTVar19->Data).Pad[0x32] = uVar8;
    (pTVar19->Data).Pad[0x33] = uVar9;
    (pTVar19->Data).Pad[0x34] = uVar10;
    (pTVar19->Data).Pad[0x35] = uVar11;
    (pTVar19->Data).Pad[0x36] = uVar12;
    (pTVar19->Data).Pad[0x37] = uVar13;
    (pTVar19->Data).Pad[0x38] = uVar14;
    (pTVar19->Data).Pad[0x39] = uVar15;
    (pTVar19->Data).Pad[0x3a] = uVar16;
    (pTVar19->Data).Pad[0x3b] = uVar17;
  }
  pTVar19->field_0x40 = param_1->field_0x40;
  *(undefined ***)(pTVar19->Data).Pad =
       &
       ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAdd_UFSourceTextChannel_MovieScene_UE___23_U__TAddConditional_UFGuid___23__MovieScene_UE__6B_
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

// InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<FGuid>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<FGuid>_>_> @ 14674c160

void __thiscall
TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<FGuid>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<FGuid>_>_>
          (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *this,
          TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<FGuid>_>
          *param_1)

{
  undefined1 uVar1;
  uchar uVar2;
  code *pcVar3;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar4;
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
  undefined1 uVar18;
  bool bVar19;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar20;
  
  this->bInline = false;
  pTVar20 = FMemory::Malloc(0x90,8);
  this->bIsValid = true;
  *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad = pTVar20;
  if (this->bInline) {
    pTVar20 = this;
  }
  *(undefined ***)(pTVar20->Data).Pad =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04__UFAdd_MovieScene_UE__U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___34_U534_U534_U534_U__TAddConditional_UFGuid___34__MovieScene_UE__6B_
  ;
  uVar1 = param_1->field_0x9;
  (pTVar20->Data).Pad[8] = param_1->field_0x8;
  (pTVar20->Data).Pad[9] = uVar1;
  uVar1 = param_1->field_0x11;
  uVar5 = param_1->field_0x12;
  uVar6 = param_1->field_0x13;
  (pTVar20->Data).Pad[0x10] = param_1->field_0x10;
  (pTVar20->Data).Pad[0x11] = uVar1;
  (pTVar20->Data).Pad[0x12] = uVar5;
  (pTVar20->Data).Pad[0x13] = uVar6;
  (pTVar20->Data).Pad[0x20] = '\0';
  uVar2 = param_1->field_0x20;
  (pTVar20->Data).Pad[0x20] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x19;
    uVar5 = param_1->field_0x1a;
    uVar6 = param_1->field_0x1b;
    uVar7 = param_1->field_0x1c;
    uVar8 = param_1->field_0x1d;
    uVar9 = param_1->field_0x1e;
    uVar10 = param_1->field_0x1f;
    (pTVar20->Data).Pad[0x18] = param_1->field_0x18;
    (pTVar20->Data).Pad[0x19] = uVar1;
    (pTVar20->Data).Pad[0x1a] = uVar5;
    (pTVar20->Data).Pad[0x1b] = uVar6;
    (pTVar20->Data).Pad[0x1c] = uVar7;
    (pTVar20->Data).Pad[0x1d] = uVar8;
    (pTVar20->Data).Pad[0x1e] = uVar9;
    (pTVar20->Data).Pad[0x1f] = uVar10;
  }
  uVar1 = param_1->field_0x29;
  uVar5 = param_1->field_0x2a;
  uVar6 = param_1->field_0x2b;
  (pTVar20->Data).Pad[0x28] = param_1->field_0x28;
  (pTVar20->Data).Pad[0x29] = uVar1;
  (pTVar20->Data).Pad[0x2a] = uVar5;
  (pTVar20->Data).Pad[0x2b] = uVar6;
  (pTVar20->Data).Pad[0x38] = '\0';
  uVar2 = param_1->field_0x38;
  (pTVar20->Data).Pad[0x38] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x31;
    uVar5 = param_1->field_0x32;
    uVar6 = param_1->field_0x33;
    uVar7 = param_1->field_0x34;
    uVar8 = param_1->field_0x35;
    uVar9 = param_1->field_0x36;
    uVar10 = param_1->field_0x37;
    (pTVar20->Data).Pad[0x30] = param_1->field_0x30;
    (pTVar20->Data).Pad[0x31] = uVar1;
    (pTVar20->Data).Pad[0x32] = uVar5;
    (pTVar20->Data).Pad[0x33] = uVar6;
    (pTVar20->Data).Pad[0x34] = uVar7;
    (pTVar20->Data).Pad[0x35] = uVar8;
    (pTVar20->Data).Pad[0x36] = uVar9;
    (pTVar20->Data).Pad[0x37] = uVar10;
  }
  *(undefined4 *)&pTVar20->field_0x40 = *(undefined4 *)&param_1->field_0x40;
  pTVar20[1].Data.Pad[8] = '\0';
  uVar2 = param_1->field_0x50;
  pTVar20[1].Data.Pad[8] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x49;
    uVar5 = param_1->field_0x4a;
    uVar6 = param_1->field_0x4b;
    uVar7 = param_1->field_0x4c;
    uVar8 = param_1->field_0x4d;
    uVar9 = param_1->field_0x4e;
    uVar10 = param_1->field_0x4f;
    pTVar20[1].Data.Pad[0] = param_1->field_0x48;
    pTVar20[1].Data.Pad[1] = uVar1;
    pTVar20[1].Data.Pad[2] = uVar5;
    pTVar20[1].Data.Pad[3] = uVar6;
    pTVar20[1].Data.Pad[4] = uVar7;
    pTVar20[1].Data.Pad[5] = uVar8;
    pTVar20[1].Data.Pad[6] = uVar9;
    pTVar20[1].Data.Pad[7] = uVar10;
  }
  uVar1 = param_1->field_0x59;
  uVar5 = param_1->field_0x5a;
  uVar6 = param_1->field_0x5b;
  pTVar4 = pTVar20 + 1;
  (pTVar4->Data).Pad[0x10] = param_1->field_0x58;
  (pTVar4->Data).Pad[0x11] = uVar1;
  (pTVar4->Data).Pad[0x12] = uVar5;
  (pTVar4->Data).Pad[0x13] = uVar6;
  pTVar20[1].Data.Pad[0x20] = '\0';
  uVar2 = param_1->field_0x68;
  pTVar20[1].Data.Pad[0x20] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x61;
    uVar5 = param_1->field_0x62;
    uVar6 = param_1->field_0x63;
    uVar7 = param_1->field_0x64;
    uVar8 = param_1->field_0x65;
    uVar9 = param_1->field_0x66;
    uVar10 = param_1->field_0x67;
    pTVar4 = pTVar20 + 1;
    (pTVar4->Data).Pad[0x18] = param_1->field_0x60;
    (pTVar4->Data).Pad[0x19] = uVar1;
    (pTVar4->Data).Pad[0x1a] = uVar5;
    (pTVar4->Data).Pad[0x1b] = uVar6;
    (pTVar4->Data).Pad[0x1c] = uVar7;
    (pTVar4->Data).Pad[0x1d] = uVar8;
    (pTVar4->Data).Pad[0x1e] = uVar9;
    (pTVar4->Data).Pad[0x1f] = uVar10;
  }
  uVar1 = param_1->field_0x71;
  uVar5 = param_1->field_0x72;
  uVar6 = param_1->field_0x73;
  pTVar4 = pTVar20 + 1;
  (pTVar4->Data).Pad[0x28] = param_1->field_0x70;
  (pTVar4->Data).Pad[0x29] = uVar1;
  (pTVar4->Data).Pad[0x2a] = uVar5;
  (pTVar4->Data).Pad[0x2b] = uVar6;
  pTVar20[1].Data.Pad[0x3c] = '\0';
  uVar2 = param_1->field_0x84;
  pTVar20[1].Data.Pad[0x3c] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x75;
    uVar5 = param_1->field_0x76;
    uVar6 = param_1->field_0x77;
    uVar7 = param_1->field_0x78;
    uVar8 = param_1->field_0x79;
    uVar9 = param_1->field_0x7a;
    uVar10 = param_1->field_0x7b;
    uVar11 = param_1->field_0x7c;
    uVar12 = param_1->field_0x7d;
    uVar13 = param_1->field_0x7e;
    uVar14 = param_1->field_0x7f;
    uVar15 = param_1->field_0x80;
    uVar16 = param_1->field_0x81;
    uVar17 = param_1->field_0x82;
    uVar18 = param_1->field_0x83;
    pTVar4 = pTVar20 + 1;
    (pTVar4->Data).Pad[0x2c] = param_1->field_0x74;
    (pTVar4->Data).Pad[0x2d] = uVar1;
    (pTVar4->Data).Pad[0x2e] = uVar5;
    (pTVar4->Data).Pad[0x2f] = uVar6;
    (pTVar4->Data).Pad[0x30] = uVar7;
    (pTVar4->Data).Pad[0x31] = uVar8;
    (pTVar4->Data).Pad[0x32] = uVar9;
    (pTVar4->Data).Pad[0x33] = uVar10;
    pTVar4 = pTVar20 + 1;
    (pTVar4->Data).Pad[0x34] = uVar11;
    (pTVar4->Data).Pad[0x35] = uVar12;
    (pTVar4->Data).Pad[0x36] = uVar13;
    (pTVar4->Data).Pad[0x37] = uVar14;
    (pTVar4->Data).Pad[0x38] = uVar15;
    (pTVar4->Data).Pad[0x39] = uVar16;
    (pTVar4->Data).Pad[0x3a] = uVar17;
    (pTVar4->Data).Pad[0x3b] = uVar18;
  }
  pTVar20[1].field_0x40 = param_1->field_0x88;
  *(undefined ***)(pTVar20->Data).Pad =
       &
       ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___23_U423_U423_U423_U__TAddConditional_UFGuid___23__MovieScene_UE__6B_
  ;
  if (!this->bIsValid) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar19) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar20 = this;
  if (!this->bInline) {
    pTVar20 = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar19) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (pTVar20 != this) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar19) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_> @ 14674c320

void __thiscall
TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_>
          (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *this,
          TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
          *param_1)

{
  undefined1 uVar1;
  uchar uVar2;
  char cVar3;
  code *pcVar4;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar5;
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
  undefined1 uVar18;
  undefined1 uVar19;
  bool bVar20;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar21;
  
  this->bInline = false;
  pTVar21 = FMemory::Malloc(0xb0,8);
  this->bIsValid = true;
  *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad = pTVar21;
  if (this->bInline) {
    pTVar21 = this;
  }
  *(undefined ***)(pTVar21->Data).Pad =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05__UFAdd_MovieScene_UE__U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___34_U534_U534_U__TAdd_UFMovieScenePropertyBinding___34_U__TAddConditional_UFGuid___34_U__TAddConditional_UFPropertyNotifyComponentData_MovieScene_UE___34__MovieScene_UE__6B_
  ;
  uVar1 = param_1->field_0x9;
  (pTVar21->Data).Pad[8] = param_1->field_0x8;
  (pTVar21->Data).Pad[9] = uVar1;
  uVar1 = param_1->field_0x11;
  uVar6 = param_1->field_0x12;
  uVar7 = param_1->field_0x13;
  (pTVar21->Data).Pad[0x10] = param_1->field_0x10;
  (pTVar21->Data).Pad[0x11] = uVar1;
  (pTVar21->Data).Pad[0x12] = uVar6;
  (pTVar21->Data).Pad[0x13] = uVar7;
  (pTVar21->Data).Pad[0x20] = '\0';
  uVar2 = param_1->field_0x20;
  (pTVar21->Data).Pad[0x20] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x19;
    uVar6 = param_1->field_0x1a;
    uVar7 = param_1->field_0x1b;
    uVar8 = param_1->field_0x1c;
    uVar9 = param_1->field_0x1d;
    uVar10 = param_1->field_0x1e;
    uVar11 = param_1->field_0x1f;
    (pTVar21->Data).Pad[0x18] = param_1->field_0x18;
    (pTVar21->Data).Pad[0x19] = uVar1;
    (pTVar21->Data).Pad[0x1a] = uVar6;
    (pTVar21->Data).Pad[0x1b] = uVar7;
    (pTVar21->Data).Pad[0x1c] = uVar8;
    (pTVar21->Data).Pad[0x1d] = uVar9;
    (pTVar21->Data).Pad[0x1e] = uVar10;
    (pTVar21->Data).Pad[0x1f] = uVar11;
  }
  uVar1 = param_1->field_0x29;
  uVar6 = param_1->field_0x2a;
  uVar7 = param_1->field_0x2b;
  (pTVar21->Data).Pad[0x28] = param_1->field_0x28;
  (pTVar21->Data).Pad[0x29] = uVar1;
  (pTVar21->Data).Pad[0x2a] = uVar6;
  (pTVar21->Data).Pad[0x2b] = uVar7;
  (pTVar21->Data).Pad[0x38] = '\0';
  uVar2 = param_1->field_0x38;
  (pTVar21->Data).Pad[0x38] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x31;
    uVar6 = param_1->field_0x32;
    uVar7 = param_1->field_0x33;
    uVar8 = param_1->field_0x34;
    uVar9 = param_1->field_0x35;
    uVar10 = param_1->field_0x36;
    uVar11 = param_1->field_0x37;
    (pTVar21->Data).Pad[0x30] = param_1->field_0x30;
    (pTVar21->Data).Pad[0x31] = uVar1;
    (pTVar21->Data).Pad[0x32] = uVar6;
    (pTVar21->Data).Pad[0x33] = uVar7;
    (pTVar21->Data).Pad[0x34] = uVar8;
    (pTVar21->Data).Pad[0x35] = uVar9;
    (pTVar21->Data).Pad[0x36] = uVar10;
    (pTVar21->Data).Pad[0x37] = uVar11;
  }
  *(undefined4 *)&pTVar21->field_0x40 = *(undefined4 *)&param_1->field_0x40;
  pTVar21[1].Data.Pad[8] = '\0';
  uVar2 = param_1->field_0x50;
  pTVar21[1].Data.Pad[8] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x49;
    uVar6 = param_1->field_0x4a;
    uVar7 = param_1->field_0x4b;
    uVar8 = param_1->field_0x4c;
    uVar9 = param_1->field_0x4d;
    uVar10 = param_1->field_0x4e;
    uVar11 = param_1->field_0x4f;
    pTVar21[1].Data.Pad[0] = param_1->field_0x48;
    pTVar21[1].Data.Pad[1] = uVar1;
    pTVar21[1].Data.Pad[2] = uVar6;
    pTVar21[1].Data.Pad[3] = uVar7;
    pTVar21[1].Data.Pad[4] = uVar8;
    pTVar21[1].Data.Pad[5] = uVar9;
    pTVar21[1].Data.Pad[6] = uVar10;
    pTVar21[1].Data.Pad[7] = uVar11;
  }
  uVar1 = param_1->field_0x59;
  pTVar21[1].Data.Pad[0x10] = param_1->field_0x58;
  pTVar21[1].Data.Pad[0x11] = uVar1;
  pTVar21[1].Data.Pad[0x28] = '\0';
  uVar2 = param_1->field_0x70;
  pTVar21[1].Data.Pad[0x28] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x5d;
    uVar6 = param_1->field_0x5e;
    uVar7 = param_1->field_0x5f;
    uVar8 = param_1->field_0x60;
    uVar9 = param_1->field_0x61;
    uVar10 = param_1->field_0x62;
    uVar11 = param_1->field_0x63;
    uVar12 = param_1->field_0x64;
    uVar13 = param_1->field_0x65;
    uVar14 = param_1->field_0x66;
    uVar15 = param_1->field_0x67;
    uVar16 = param_1->field_0x68;
    uVar17 = param_1->field_0x69;
    uVar18 = param_1->field_0x6a;
    uVar19 = param_1->field_0x6b;
    pTVar5 = pTVar21 + 1;
    (pTVar5->Data).Pad[0x14] = param_1->field_0x5c;
    (pTVar5->Data).Pad[0x15] = uVar1;
    (pTVar5->Data).Pad[0x16] = uVar6;
    (pTVar5->Data).Pad[0x17] = uVar7;
    (pTVar5->Data).Pad[0x18] = uVar8;
    (pTVar5->Data).Pad[0x19] = uVar9;
    (pTVar5->Data).Pad[0x1a] = uVar10;
    (pTVar5->Data).Pad[0x1b] = uVar11;
    pTVar5 = pTVar21 + 1;
    (pTVar5->Data).Pad[0x1c] = uVar12;
    (pTVar5->Data).Pad[0x1d] = uVar13;
    (pTVar5->Data).Pad[0x1e] = uVar14;
    (pTVar5->Data).Pad[0x1f] = uVar15;
    (pTVar5->Data).Pad[0x20] = uVar16;
    (pTVar5->Data).Pad[0x21] = uVar17;
    (pTVar5->Data).Pad[0x22] = uVar18;
    (pTVar5->Data).Pad[0x23] = uVar19;
    uVar1 = param_1->field_0x6d;
    uVar6 = param_1->field_0x6e;
    uVar7 = param_1->field_0x6f;
    pTVar5 = pTVar21 + 1;
    (pTVar5->Data).Pad[0x24] = param_1->field_0x6c;
    (pTVar5->Data).Pad[0x25] = uVar1;
    (pTVar5->Data).Pad[0x26] = uVar6;
    (pTVar5->Data).Pad[0x27] = uVar7;
  }
  uVar1 = param_1->field_0x75;
  uVar6 = param_1->field_0x76;
  uVar7 = param_1->field_0x77;
  pTVar5 = pTVar21 + 1;
  (pTVar5->Data).Pad[0x2c] = param_1->field_0x74;
  (pTVar5->Data).Pad[0x2d] = uVar1;
  (pTVar5->Data).Pad[0x2e] = uVar6;
  (pTVar5->Data).Pad[0x2f] = uVar7;
  pTVar21[1].field_0x40 = 0;
  cVar3 = param_1->field_0x88;
  pTVar21[1].field_0x40 = cVar3;
  if (cVar3 != '\0') {
    uVar1 = param_1->field_0x79;
    uVar6 = param_1->field_0x7a;
    uVar7 = param_1->field_0x7b;
    uVar8 = param_1->field_0x7c;
    uVar9 = param_1->field_0x7d;
    uVar10 = param_1->field_0x7e;
    uVar11 = param_1->field_0x7f;
    uVar12 = param_1->field_0x80;
    uVar13 = param_1->field_0x81;
    uVar14 = param_1->field_0x82;
    uVar15 = param_1->field_0x83;
    uVar16 = param_1->field_0x84;
    uVar17 = param_1->field_0x85;
    uVar18 = param_1->field_0x86;
    uVar19 = param_1->field_0x87;
    pTVar5 = pTVar21 + 1;
    (pTVar5->Data).Pad[0x30] = param_1->field_0x78;
    (pTVar5->Data).Pad[0x31] = uVar1;
    (pTVar5->Data).Pad[0x32] = uVar6;
    (pTVar5->Data).Pad[0x33] = uVar7;
    (pTVar5->Data).Pad[0x34] = uVar8;
    (pTVar5->Data).Pad[0x35] = uVar9;
    (pTVar5->Data).Pad[0x36] = uVar10;
    (pTVar5->Data).Pad[0x37] = uVar11;
    pTVar5 = pTVar21 + 1;
    (pTVar5->Data).Pad[0x38] = uVar12;
    (pTVar5->Data).Pad[0x39] = uVar13;
    (pTVar5->Data).Pad[0x3a] = uVar14;
    (pTVar5->Data).Pad[0x3b] = uVar15;
    (pTVar5->Data).Pad[0x3c] = uVar16;
    (pTVar5->Data).Pad[0x3d] = uVar17;
    (pTVar5->Data).Pad[0x3e] = uVar18;
    (pTVar5->Data).Pad[0x3f] = uVar19;
  }
  *(undefined4 *)&pTVar21[1].field_0x44 = *(undefined4 *)&param_1->field_0x8c;
  pTVar21[2].Data.Pad[0x14] = '\0';
  uVar2 = param_1->field_0xa4;
  pTVar21[2].Data.Pad[0x14] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x91;
    uVar6 = param_1->field_0x92;
    uVar7 = param_1->field_0x93;
    uVar8 = param_1->field_0x94;
    uVar9 = param_1->field_0x95;
    uVar10 = param_1->field_0x96;
    uVar11 = param_1->field_0x97;
    uVar12 = param_1->field_0x98;
    uVar13 = param_1->field_0x99;
    uVar14 = param_1->field_0x9a;
    uVar15 = param_1->field_0x9b;
    uVar16 = param_1->field_0x9c;
    uVar17 = param_1->field_0x9d;
    uVar18 = param_1->field_0x9e;
    uVar19 = param_1->field_0x9f;
    pTVar21[2].Data.Pad[0] = param_1->field_0x90;
    pTVar21[2].Data.Pad[1] = uVar1;
    pTVar21[2].Data.Pad[2] = uVar6;
    pTVar21[2].Data.Pad[3] = uVar7;
    pTVar21[2].Data.Pad[4] = uVar8;
    pTVar21[2].Data.Pad[5] = uVar9;
    pTVar21[2].Data.Pad[6] = uVar10;
    pTVar21[2].Data.Pad[7] = uVar11;
    pTVar5 = pTVar21 + 2;
    (pTVar5->Data).Pad[8] = uVar12;
    (pTVar5->Data).Pad[9] = uVar13;
    (pTVar5->Data).Pad[10] = uVar14;
    (pTVar5->Data).Pad[0xb] = uVar15;
    (pTVar5->Data).Pad[0xc] = uVar16;
    (pTVar5->Data).Pad[0xd] = uVar17;
    (pTVar5->Data).Pad[0xe] = uVar18;
    (pTVar5->Data).Pad[0xf] = uVar19;
    uVar1 = param_1->field_0xa1;
    uVar6 = param_1->field_0xa2;
    uVar7 = param_1->field_0xa3;
    pTVar5 = pTVar21 + 2;
    (pTVar5->Data).Pad[0x10] = param_1->field_0xa0;
    (pTVar5->Data).Pad[0x11] = uVar1;
    (pTVar5->Data).Pad[0x12] = uVar6;
    (pTVar5->Data).Pad[0x13] = uVar7;
  }
  pTVar21[2].Data.Pad[0x18] = param_1->field_0xa8;
  *(undefined ***)(pTVar21->Data).Pad =
       &
       ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___23_U423_U423_U__TAdd_UFMovieScenePropertyBinding___23_U__TAddConditional_UFGuid___23_U__TAddConditional_UFPropertyNotifyComponentData_MovieScene_UE___23__MovieScene_UE__6B_
  ;
  if (!this->bIsValid) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar20) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar21 = this;
  if (!this->bInline) {
    pTVar21 = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar20) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (pTVar21 != this) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar20) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<FGuid>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<FGuid>_>_> @ 14674c520

void __thiscall
TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<FGuid>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<FGuid>_>_>
          (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *this,
          TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<FGuid>_>
          *param_1)

{
  undefined1 uVar1;
  uchar uVar2;
  code *pcVar3;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar4;
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
  undefined1 uVar18;
  bool bVar19;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar20;
  
  this->bInline = false;
  pTVar20 = FMemory::Malloc(0x78,8);
  this->bIsValid = true;
  *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad = pTVar20;
  if (this->bInline) {
    pTVar20 = this;
  }
  *(undefined ***)(pTVar20->Data).Pad =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03__UFAdd_MovieScene_UE__U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___34_U534_U534_U__TAddConditional_UFGuid___34__MovieScene_UE__6B_
  ;
  uVar1 = param_1->field_0x9;
  (pTVar20->Data).Pad[8] = param_1->field_0x8;
  (pTVar20->Data).Pad[9] = uVar1;
  uVar1 = param_1->field_0x11;
  uVar5 = param_1->field_0x12;
  uVar6 = param_1->field_0x13;
  (pTVar20->Data).Pad[0x10] = param_1->field_0x10;
  (pTVar20->Data).Pad[0x11] = uVar1;
  (pTVar20->Data).Pad[0x12] = uVar5;
  (pTVar20->Data).Pad[0x13] = uVar6;
  (pTVar20->Data).Pad[0x20] = '\0';
  uVar2 = param_1->field_0x20;
  (pTVar20->Data).Pad[0x20] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x19;
    uVar5 = param_1->field_0x1a;
    uVar6 = param_1->field_0x1b;
    uVar7 = param_1->field_0x1c;
    uVar8 = param_1->field_0x1d;
    uVar9 = param_1->field_0x1e;
    uVar10 = param_1->field_0x1f;
    (pTVar20->Data).Pad[0x18] = param_1->field_0x18;
    (pTVar20->Data).Pad[0x19] = uVar1;
    (pTVar20->Data).Pad[0x1a] = uVar5;
    (pTVar20->Data).Pad[0x1b] = uVar6;
    (pTVar20->Data).Pad[0x1c] = uVar7;
    (pTVar20->Data).Pad[0x1d] = uVar8;
    (pTVar20->Data).Pad[0x1e] = uVar9;
    (pTVar20->Data).Pad[0x1f] = uVar10;
  }
  uVar1 = param_1->field_0x29;
  uVar5 = param_1->field_0x2a;
  uVar6 = param_1->field_0x2b;
  (pTVar20->Data).Pad[0x28] = param_1->field_0x28;
  (pTVar20->Data).Pad[0x29] = uVar1;
  (pTVar20->Data).Pad[0x2a] = uVar5;
  (pTVar20->Data).Pad[0x2b] = uVar6;
  (pTVar20->Data).Pad[0x38] = '\0';
  uVar2 = param_1->field_0x38;
  (pTVar20->Data).Pad[0x38] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x31;
    uVar5 = param_1->field_0x32;
    uVar6 = param_1->field_0x33;
    uVar7 = param_1->field_0x34;
    uVar8 = param_1->field_0x35;
    uVar9 = param_1->field_0x36;
    uVar10 = param_1->field_0x37;
    (pTVar20->Data).Pad[0x30] = param_1->field_0x30;
    (pTVar20->Data).Pad[0x31] = uVar1;
    (pTVar20->Data).Pad[0x32] = uVar5;
    (pTVar20->Data).Pad[0x33] = uVar6;
    (pTVar20->Data).Pad[0x34] = uVar7;
    (pTVar20->Data).Pad[0x35] = uVar8;
    (pTVar20->Data).Pad[0x36] = uVar9;
    (pTVar20->Data).Pad[0x37] = uVar10;
  }
  *(undefined4 *)&pTVar20->field_0x40 = *(undefined4 *)&param_1->field_0x40;
  pTVar20[1].Data.Pad[8] = '\0';
  uVar2 = param_1->field_0x50;
  pTVar20[1].Data.Pad[8] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x49;
    uVar5 = param_1->field_0x4a;
    uVar6 = param_1->field_0x4b;
    uVar7 = param_1->field_0x4c;
    uVar8 = param_1->field_0x4d;
    uVar9 = param_1->field_0x4e;
    uVar10 = param_1->field_0x4f;
    pTVar20[1].Data.Pad[0] = param_1->field_0x48;
    pTVar20[1].Data.Pad[1] = uVar1;
    pTVar20[1].Data.Pad[2] = uVar5;
    pTVar20[1].Data.Pad[3] = uVar6;
    pTVar20[1].Data.Pad[4] = uVar7;
    pTVar20[1].Data.Pad[5] = uVar8;
    pTVar20[1].Data.Pad[6] = uVar9;
    pTVar20[1].Data.Pad[7] = uVar10;
  }
  uVar1 = param_1->field_0x59;
  uVar5 = param_1->field_0x5a;
  uVar6 = param_1->field_0x5b;
  pTVar4 = pTVar20 + 1;
  (pTVar4->Data).Pad[0x10] = param_1->field_0x58;
  (pTVar4->Data).Pad[0x11] = uVar1;
  (pTVar4->Data).Pad[0x12] = uVar5;
  (pTVar4->Data).Pad[0x13] = uVar6;
  pTVar20[1].Data.Pad[0x24] = '\0';
  uVar2 = param_1->field_0x6c;
  pTVar20[1].Data.Pad[0x24] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x5d;
    uVar5 = param_1->field_0x5e;
    uVar6 = param_1->field_0x5f;
    uVar7 = param_1->field_0x60;
    uVar8 = param_1->field_0x61;
    uVar9 = param_1->field_0x62;
    uVar10 = param_1->field_0x63;
    uVar11 = param_1->field_0x64;
    uVar12 = param_1->field_0x65;
    uVar13 = param_1->field_0x66;
    uVar14 = param_1->field_0x67;
    uVar15 = param_1->field_0x68;
    uVar16 = param_1->field_0x69;
    uVar17 = param_1->field_0x6a;
    uVar18 = param_1->field_0x6b;
    pTVar4 = pTVar20 + 1;
    (pTVar4->Data).Pad[0x14] = param_1->field_0x5c;
    (pTVar4->Data).Pad[0x15] = uVar1;
    (pTVar4->Data).Pad[0x16] = uVar5;
    (pTVar4->Data).Pad[0x17] = uVar6;
    (pTVar4->Data).Pad[0x18] = uVar7;
    (pTVar4->Data).Pad[0x19] = uVar8;
    (pTVar4->Data).Pad[0x1a] = uVar9;
    (pTVar4->Data).Pad[0x1b] = uVar10;
    pTVar4 = pTVar20 + 1;
    (pTVar4->Data).Pad[0x1c] = uVar11;
    (pTVar4->Data).Pad[0x1d] = uVar12;
    (pTVar4->Data).Pad[0x1e] = uVar13;
    (pTVar4->Data).Pad[0x1f] = uVar14;
    (pTVar4->Data).Pad[0x20] = uVar15;
    (pTVar4->Data).Pad[0x21] = uVar16;
    (pTVar4->Data).Pad[0x22] = uVar17;
    (pTVar4->Data).Pad[0x23] = uVar18;
  }
  pTVar20[1].Data.Pad[0x28] = param_1->field_0x70;
  *(undefined ***)(pTVar20->Data).Pad =
       &
       ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___23_U423_U423_U__TAddConditional_UFGuid___23__MovieScene_UE__6B_
  ;
  if (!this->bIsValid) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar19) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar20 = this;
  if (!this->bInline) {
    pTVar20 = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar19) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (pTVar20 != this) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar19) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<FGuid>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<FGuid>_>_> @ 14674c6b0

void __thiscall
TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<FGuid>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<FGuid>_>_>
          (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *this,
          TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<FGuid>_>
          *param_1)

{
  undefined1 uVar1;
  uchar uVar2;
  code *pcVar3;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar4;
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
  undefined1 uVar18;
  bool bVar19;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar20;
  
  this->bInline = false;
  pTVar20 = FMemory::Malloc(0x90,8);
  this->bIsValid = true;
  *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad = pTVar20;
  if (this->bInline) {
    pTVar20 = this;
  }
  *(undefined ***)(pTVar20->Data).Pad =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04__UFAdd_MovieScene_UE__U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___34_U534_U534_U534_U__TAddConditional_UFGuid___34__MovieScene_UE__6B_
  ;
  uVar1 = param_1->field_0x9;
  (pTVar20->Data).Pad[8] = param_1->field_0x8;
  (pTVar20->Data).Pad[9] = uVar1;
  uVar1 = param_1->field_0x11;
  uVar5 = param_1->field_0x12;
  uVar6 = param_1->field_0x13;
  (pTVar20->Data).Pad[0x10] = param_1->field_0x10;
  (pTVar20->Data).Pad[0x11] = uVar1;
  (pTVar20->Data).Pad[0x12] = uVar5;
  (pTVar20->Data).Pad[0x13] = uVar6;
  (pTVar20->Data).Pad[0x20] = '\0';
  uVar2 = param_1->field_0x20;
  (pTVar20->Data).Pad[0x20] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x19;
    uVar5 = param_1->field_0x1a;
    uVar6 = param_1->field_0x1b;
    uVar7 = param_1->field_0x1c;
    uVar8 = param_1->field_0x1d;
    uVar9 = param_1->field_0x1e;
    uVar10 = param_1->field_0x1f;
    (pTVar20->Data).Pad[0x18] = param_1->field_0x18;
    (pTVar20->Data).Pad[0x19] = uVar1;
    (pTVar20->Data).Pad[0x1a] = uVar5;
    (pTVar20->Data).Pad[0x1b] = uVar6;
    (pTVar20->Data).Pad[0x1c] = uVar7;
    (pTVar20->Data).Pad[0x1d] = uVar8;
    (pTVar20->Data).Pad[0x1e] = uVar9;
    (pTVar20->Data).Pad[0x1f] = uVar10;
  }
  uVar1 = param_1->field_0x29;
  uVar5 = param_1->field_0x2a;
  uVar6 = param_1->field_0x2b;
  (pTVar20->Data).Pad[0x28] = param_1->field_0x28;
  (pTVar20->Data).Pad[0x29] = uVar1;
  (pTVar20->Data).Pad[0x2a] = uVar5;
  (pTVar20->Data).Pad[0x2b] = uVar6;
  (pTVar20->Data).Pad[0x38] = '\0';
  uVar2 = param_1->field_0x38;
  (pTVar20->Data).Pad[0x38] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x31;
    uVar5 = param_1->field_0x32;
    uVar6 = param_1->field_0x33;
    uVar7 = param_1->field_0x34;
    uVar8 = param_1->field_0x35;
    uVar9 = param_1->field_0x36;
    uVar10 = param_1->field_0x37;
    (pTVar20->Data).Pad[0x30] = param_1->field_0x30;
    (pTVar20->Data).Pad[0x31] = uVar1;
    (pTVar20->Data).Pad[0x32] = uVar5;
    (pTVar20->Data).Pad[0x33] = uVar6;
    (pTVar20->Data).Pad[0x34] = uVar7;
    (pTVar20->Data).Pad[0x35] = uVar8;
    (pTVar20->Data).Pad[0x36] = uVar9;
    (pTVar20->Data).Pad[0x37] = uVar10;
  }
  *(undefined4 *)&pTVar20->field_0x40 = *(undefined4 *)&param_1->field_0x40;
  pTVar20[1].Data.Pad[8] = '\0';
  uVar2 = param_1->field_0x50;
  pTVar20[1].Data.Pad[8] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x49;
    uVar5 = param_1->field_0x4a;
    uVar6 = param_1->field_0x4b;
    uVar7 = param_1->field_0x4c;
    uVar8 = param_1->field_0x4d;
    uVar9 = param_1->field_0x4e;
    uVar10 = param_1->field_0x4f;
    pTVar20[1].Data.Pad[0] = param_1->field_0x48;
    pTVar20[1].Data.Pad[1] = uVar1;
    pTVar20[1].Data.Pad[2] = uVar5;
    pTVar20[1].Data.Pad[3] = uVar6;
    pTVar20[1].Data.Pad[4] = uVar7;
    pTVar20[1].Data.Pad[5] = uVar8;
    pTVar20[1].Data.Pad[6] = uVar9;
    pTVar20[1].Data.Pad[7] = uVar10;
  }
  uVar1 = param_1->field_0x59;
  uVar5 = param_1->field_0x5a;
  uVar6 = param_1->field_0x5b;
  pTVar4 = pTVar20 + 1;
  (pTVar4->Data).Pad[0x10] = param_1->field_0x58;
  (pTVar4->Data).Pad[0x11] = uVar1;
  (pTVar4->Data).Pad[0x12] = uVar5;
  (pTVar4->Data).Pad[0x13] = uVar6;
  pTVar20[1].Data.Pad[0x20] = '\0';
  uVar2 = param_1->field_0x68;
  pTVar20[1].Data.Pad[0x20] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x61;
    uVar5 = param_1->field_0x62;
    uVar6 = param_1->field_0x63;
    uVar7 = param_1->field_0x64;
    uVar8 = param_1->field_0x65;
    uVar9 = param_1->field_0x66;
    uVar10 = param_1->field_0x67;
    pTVar4 = pTVar20 + 1;
    (pTVar4->Data).Pad[0x18] = param_1->field_0x60;
    (pTVar4->Data).Pad[0x19] = uVar1;
    (pTVar4->Data).Pad[0x1a] = uVar5;
    (pTVar4->Data).Pad[0x1b] = uVar6;
    (pTVar4->Data).Pad[0x1c] = uVar7;
    (pTVar4->Data).Pad[0x1d] = uVar8;
    (pTVar4->Data).Pad[0x1e] = uVar9;
    (pTVar4->Data).Pad[0x1f] = uVar10;
  }
  uVar1 = param_1->field_0x71;
  uVar5 = param_1->field_0x72;
  uVar6 = param_1->field_0x73;
  pTVar4 = pTVar20 + 1;
  (pTVar4->Data).Pad[0x28] = param_1->field_0x70;
  (pTVar4->Data).Pad[0x29] = uVar1;
  (pTVar4->Data).Pad[0x2a] = uVar5;
  (pTVar4->Data).Pad[0x2b] = uVar6;
  pTVar20[1].Data.Pad[0x3c] = '\0';
  uVar2 = param_1->field_0x84;
  pTVar20[1].Data.Pad[0x3c] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x75;
    uVar5 = param_1->field_0x76;
    uVar6 = param_1->field_0x77;
    uVar7 = param_1->field_0x78;
    uVar8 = param_1->field_0x79;
    uVar9 = param_1->field_0x7a;
    uVar10 = param_1->field_0x7b;
    uVar11 = param_1->field_0x7c;
    uVar12 = param_1->field_0x7d;
    uVar13 = param_1->field_0x7e;
    uVar14 = param_1->field_0x7f;
    uVar15 = param_1->field_0x80;
    uVar16 = param_1->field_0x81;
    uVar17 = param_1->field_0x82;
    uVar18 = param_1->field_0x83;
    pTVar4 = pTVar20 + 1;
    (pTVar4->Data).Pad[0x2c] = param_1->field_0x74;
    (pTVar4->Data).Pad[0x2d] = uVar1;
    (pTVar4->Data).Pad[0x2e] = uVar5;
    (pTVar4->Data).Pad[0x2f] = uVar6;
    (pTVar4->Data).Pad[0x30] = uVar7;
    (pTVar4->Data).Pad[0x31] = uVar8;
    (pTVar4->Data).Pad[0x32] = uVar9;
    (pTVar4->Data).Pad[0x33] = uVar10;
    pTVar4 = pTVar20 + 1;
    (pTVar4->Data).Pad[0x34] = uVar11;
    (pTVar4->Data).Pad[0x35] = uVar12;
    (pTVar4->Data).Pad[0x36] = uVar13;
    (pTVar4->Data).Pad[0x37] = uVar14;
    (pTVar4->Data).Pad[0x38] = uVar15;
    (pTVar4->Data).Pad[0x39] = uVar16;
    (pTVar4->Data).Pad[0x3a] = uVar17;
    (pTVar4->Data).Pad[0x3b] = uVar18;
  }
  pTVar20[1].field_0x40 = param_1->field_0x88;
  *(undefined ***)(pTVar20->Data).Pad =
       &
       ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_U423_U423_U423_U__TAddConditional_UFGuid___23__MovieScene_UE__6B_
  ;
  if (!this->bIsValid) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar19) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar20 = this;
  if (!this->bInline) {
    pTVar20 = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar19) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (pTVar20 != this) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar19) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_> @ 14674c870

void __thiscall
TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_>
          (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *this,
          TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
          *param_1)

{
  undefined1 uVar1;
  uchar uVar2;
  char cVar3;
  code *pcVar4;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar5;
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
  undefined1 uVar18;
  undefined1 uVar19;
  bool bVar20;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar21;
  
  this->bInline = false;
  pTVar21 = FMemory::Malloc(0x80,8);
  this->bIsValid = true;
  *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad = pTVar21;
  if (this->bInline) {
    pTVar21 = this;
  }
  *(undefined ***)(pTVar21->Data).Pad =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03__UFAdd_MovieScene_UE__U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___34_U__TAdd_UFMovieScenePropertyBinding___34_U__TAddConditional_UFGuid___34_U__TAddConditional_UFPropertyNotifyComponentData_MovieScene_UE___34__MovieScene_UE__6B_
  ;
  uVar1 = param_1->field_0x9;
  (pTVar21->Data).Pad[8] = param_1->field_0x8;
  (pTVar21->Data).Pad[9] = uVar1;
  uVar1 = param_1->field_0x11;
  uVar6 = param_1->field_0x12;
  uVar7 = param_1->field_0x13;
  (pTVar21->Data).Pad[0x10] = param_1->field_0x10;
  (pTVar21->Data).Pad[0x11] = uVar1;
  (pTVar21->Data).Pad[0x12] = uVar6;
  (pTVar21->Data).Pad[0x13] = uVar7;
  (pTVar21->Data).Pad[0x20] = '\0';
  uVar2 = param_1->field_0x20;
  (pTVar21->Data).Pad[0x20] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x19;
    uVar6 = param_1->field_0x1a;
    uVar7 = param_1->field_0x1b;
    uVar8 = param_1->field_0x1c;
    uVar9 = param_1->field_0x1d;
    uVar10 = param_1->field_0x1e;
    uVar11 = param_1->field_0x1f;
    (pTVar21->Data).Pad[0x18] = param_1->field_0x18;
    (pTVar21->Data).Pad[0x19] = uVar1;
    (pTVar21->Data).Pad[0x1a] = uVar6;
    (pTVar21->Data).Pad[0x1b] = uVar7;
    (pTVar21->Data).Pad[0x1c] = uVar8;
    (pTVar21->Data).Pad[0x1d] = uVar9;
    (pTVar21->Data).Pad[0x1e] = uVar10;
    (pTVar21->Data).Pad[0x1f] = uVar11;
  }
  uVar1 = param_1->field_0x29;
  (pTVar21->Data).Pad[0x28] = param_1->field_0x28;
  (pTVar21->Data).Pad[0x29] = uVar1;
  pTVar21->field_0x40 = 0;
  cVar3 = param_1->field_0x40;
  pTVar21->field_0x40 = cVar3;
  if (cVar3 != '\0') {
    uVar1 = param_1->field_0x2d;
    uVar6 = param_1->field_0x2e;
    uVar7 = param_1->field_0x2f;
    uVar8 = param_1->field_0x30;
    uVar9 = param_1->field_0x31;
    uVar10 = param_1->field_0x32;
    uVar11 = param_1->field_0x33;
    uVar12 = param_1->field_0x34;
    uVar13 = param_1->field_0x35;
    uVar14 = param_1->field_0x36;
    uVar15 = param_1->field_0x37;
    uVar16 = param_1->field_0x38;
    uVar17 = param_1->field_0x39;
    uVar18 = param_1->field_0x3a;
    uVar19 = param_1->field_0x3b;
    (pTVar21->Data).Pad[0x2c] = param_1->field_0x2c;
    (pTVar21->Data).Pad[0x2d] = uVar1;
    (pTVar21->Data).Pad[0x2e] = uVar6;
    (pTVar21->Data).Pad[0x2f] = uVar7;
    (pTVar21->Data).Pad[0x30] = uVar8;
    (pTVar21->Data).Pad[0x31] = uVar9;
    (pTVar21->Data).Pad[0x32] = uVar10;
    (pTVar21->Data).Pad[0x33] = uVar11;
    (pTVar21->Data).Pad[0x34] = uVar12;
    (pTVar21->Data).Pad[0x35] = uVar13;
    (pTVar21->Data).Pad[0x36] = uVar14;
    (pTVar21->Data).Pad[0x37] = uVar15;
    (pTVar21->Data).Pad[0x38] = uVar16;
    (pTVar21->Data).Pad[0x39] = uVar17;
    (pTVar21->Data).Pad[0x3a] = uVar18;
    (pTVar21->Data).Pad[0x3b] = uVar19;
    uVar1 = param_1->field_0x3d;
    uVar6 = param_1->field_0x3e;
    uVar7 = param_1->field_0x3f;
    (pTVar21->Data).Pad[0x3c] = param_1->field_0x3c;
    (pTVar21->Data).Pad[0x3d] = uVar1;
    (pTVar21->Data).Pad[0x3e] = uVar6;
    (pTVar21->Data).Pad[0x3f] = uVar7;
  }
  *(undefined4 *)&pTVar21->field_0x44 = *(undefined4 *)&param_1->field_0x44;
  pTVar21[1].Data.Pad[0x10] = '\0';
  uVar2 = param_1->field_0x58;
  pTVar21[1].Data.Pad[0x10] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x49;
    uVar6 = param_1->field_0x4a;
    uVar7 = param_1->field_0x4b;
    uVar8 = param_1->field_0x4c;
    uVar9 = param_1->field_0x4d;
    uVar10 = param_1->field_0x4e;
    uVar11 = param_1->field_0x4f;
    uVar12 = param_1->field_0x50;
    uVar13 = param_1->field_0x51;
    uVar14 = param_1->field_0x52;
    uVar15 = param_1->field_0x53;
    uVar16 = param_1->field_0x54;
    uVar17 = param_1->field_0x55;
    uVar18 = param_1->field_0x56;
    uVar19 = param_1->field_0x57;
    pTVar21[1].Data.Pad[0] = param_1->field_0x48;
    pTVar21[1].Data.Pad[1] = uVar1;
    pTVar21[1].Data.Pad[2] = uVar6;
    pTVar21[1].Data.Pad[3] = uVar7;
    pTVar21[1].Data.Pad[4] = uVar8;
    pTVar21[1].Data.Pad[5] = uVar9;
    pTVar21[1].Data.Pad[6] = uVar10;
    pTVar21[1].Data.Pad[7] = uVar11;
    pTVar5 = pTVar21 + 1;
    (pTVar5->Data).Pad[8] = uVar12;
    (pTVar5->Data).Pad[9] = uVar13;
    (pTVar5->Data).Pad[10] = uVar14;
    (pTVar5->Data).Pad[0xb] = uVar15;
    (pTVar5->Data).Pad[0xc] = uVar16;
    (pTVar5->Data).Pad[0xd] = uVar17;
    (pTVar5->Data).Pad[0xe] = uVar18;
    (pTVar5->Data).Pad[0xf] = uVar19;
  }
  uVar1 = param_1->field_0x5d;
  uVar6 = param_1->field_0x5e;
  uVar7 = param_1->field_0x5f;
  pTVar5 = pTVar21 + 1;
  (pTVar5->Data).Pad[0x14] = param_1->field_0x5c;
  (pTVar5->Data).Pad[0x15] = uVar1;
  (pTVar5->Data).Pad[0x16] = uVar6;
  (pTVar5->Data).Pad[0x17] = uVar7;
  pTVar21[1].Data.Pad[0x2c] = '\0';
  uVar2 = param_1->field_0x74;
  pTVar21[1].Data.Pad[0x2c] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x61;
    uVar6 = param_1->field_0x62;
    uVar7 = param_1->field_0x63;
    uVar8 = param_1->field_0x64;
    uVar9 = param_1->field_0x65;
    uVar10 = param_1->field_0x66;
    uVar11 = param_1->field_0x67;
    uVar12 = param_1->field_0x68;
    uVar13 = param_1->field_0x69;
    uVar14 = param_1->field_0x6a;
    uVar15 = param_1->field_0x6b;
    uVar16 = param_1->field_0x6c;
    uVar17 = param_1->field_0x6d;
    uVar18 = param_1->field_0x6e;
    uVar19 = param_1->field_0x6f;
    pTVar5 = pTVar21 + 1;
    (pTVar5->Data).Pad[0x18] = param_1->field_0x60;
    (pTVar5->Data).Pad[0x19] = uVar1;
    (pTVar5->Data).Pad[0x1a] = uVar6;
    (pTVar5->Data).Pad[0x1b] = uVar7;
    (pTVar5->Data).Pad[0x1c] = uVar8;
    (pTVar5->Data).Pad[0x1d] = uVar9;
    (pTVar5->Data).Pad[0x1e] = uVar10;
    (pTVar5->Data).Pad[0x1f] = uVar11;
    pTVar5 = pTVar21 + 1;
    (pTVar5->Data).Pad[0x20] = uVar12;
    (pTVar5->Data).Pad[0x21] = uVar13;
    (pTVar5->Data).Pad[0x22] = uVar14;
    (pTVar5->Data).Pad[0x23] = uVar15;
    (pTVar5->Data).Pad[0x24] = uVar16;
    (pTVar5->Data).Pad[0x25] = uVar17;
    (pTVar5->Data).Pad[0x26] = uVar18;
    (pTVar5->Data).Pad[0x27] = uVar19;
    uVar1 = param_1->field_0x71;
    uVar6 = param_1->field_0x72;
    uVar7 = param_1->field_0x73;
    pTVar5 = pTVar21 + 1;
    (pTVar5->Data).Pad[0x28] = param_1->field_0x70;
    (pTVar5->Data).Pad[0x29] = uVar1;
    (pTVar5->Data).Pad[0x2a] = uVar6;
    (pTVar5->Data).Pad[0x2b] = uVar7;
  }
  pTVar21[1].Data.Pad[0x30] = param_1->field_0x78;
  *(undefined ***)(pTVar21->Data).Pad =
       &
       ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_U__TAdd_UFMovieScenePropertyBinding___23_U__TAddConditional_UFGuid___23_U__TAddConditional_UFPropertyNotifyComponentData_MovieScene_UE___23__MovieScene_UE__6B_
  ;
  if (!this->bIsValid) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar20) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar21 = this;
  if (!this->bInline) {
    pTVar21 = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar20) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (pTVar21 != this) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar20) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<FGuid>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<FGuid>_>_> @ 14674ca10

void __thiscall
TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<FGuid>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<FGuid>_>_>
          (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *this,
          TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<FGuid>_>
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
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01__UFAdd_MovieScene_UE__U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___34_U__TAddConditional_UFGuid___34__MovieScene_UE__6B_
  ;
  uVar1 = param_1->field_0x9;
  (pTVar19->Data).Pad[8] = param_1->field_0x8;
  (pTVar19->Data).Pad[9] = uVar1;
  uVar1 = param_1->field_0x11;
  uVar4 = param_1->field_0x12;
  uVar5 = param_1->field_0x13;
  (pTVar19->Data).Pad[0x10] = param_1->field_0x10;
  (pTVar19->Data).Pad[0x11] = uVar1;
  (pTVar19->Data).Pad[0x12] = uVar4;
  (pTVar19->Data).Pad[0x13] = uVar5;
  (pTVar19->Data).Pad[0x20] = '\0';
  uVar2 = param_1->field_0x20;
  (pTVar19->Data).Pad[0x20] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x19;
    uVar4 = param_1->field_0x1a;
    uVar5 = param_1->field_0x1b;
    uVar6 = param_1->field_0x1c;
    uVar7 = param_1->field_0x1d;
    uVar8 = param_1->field_0x1e;
    uVar9 = param_1->field_0x1f;
    (pTVar19->Data).Pad[0x18] = param_1->field_0x18;
    (pTVar19->Data).Pad[0x19] = uVar1;
    (pTVar19->Data).Pad[0x1a] = uVar4;
    (pTVar19->Data).Pad[0x1b] = uVar5;
    (pTVar19->Data).Pad[0x1c] = uVar6;
    (pTVar19->Data).Pad[0x1d] = uVar7;
    (pTVar19->Data).Pad[0x1e] = uVar8;
    (pTVar19->Data).Pad[0x1f] = uVar9;
  }
  uVar1 = param_1->field_0x29;
  uVar4 = param_1->field_0x2a;
  uVar5 = param_1->field_0x2b;
  (pTVar19->Data).Pad[0x28] = param_1->field_0x28;
  (pTVar19->Data).Pad[0x29] = uVar1;
  (pTVar19->Data).Pad[0x2a] = uVar4;
  (pTVar19->Data).Pad[0x2b] = uVar5;
  (pTVar19->Data).Pad[0x3c] = '\0';
  uVar2 = param_1->field_0x3c;
  (pTVar19->Data).Pad[0x3c] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x2d;
    uVar4 = param_1->field_0x2e;
    uVar5 = param_1->field_0x2f;
    uVar6 = param_1->field_0x30;
    uVar7 = param_1->field_0x31;
    uVar8 = param_1->field_0x32;
    uVar9 = param_1->field_0x33;
    uVar10 = param_1->field_0x34;
    uVar11 = param_1->field_0x35;
    uVar12 = param_1->field_0x36;
    uVar13 = param_1->field_0x37;
    uVar14 = param_1->field_0x38;
    uVar15 = param_1->field_0x39;
    uVar16 = param_1->field_0x3a;
    uVar17 = param_1->field_0x3b;
    (pTVar19->Data).Pad[0x2c] = param_1->field_0x2c;
    (pTVar19->Data).Pad[0x2d] = uVar1;
    (pTVar19->Data).Pad[0x2e] = uVar4;
    (pTVar19->Data).Pad[0x2f] = uVar5;
    (pTVar19->Data).Pad[0x30] = uVar6;
    (pTVar19->Data).Pad[0x31] = uVar7;
    (pTVar19->Data).Pad[0x32] = uVar8;
    (pTVar19->Data).Pad[0x33] = uVar9;
    (pTVar19->Data).Pad[0x34] = uVar10;
    (pTVar19->Data).Pad[0x35] = uVar11;
    (pTVar19->Data).Pad[0x36] = uVar12;
    (pTVar19->Data).Pad[0x37] = uVar13;
    (pTVar19->Data).Pad[0x38] = uVar14;
    (pTVar19->Data).Pad[0x39] = uVar15;
    (pTVar19->Data).Pad[0x3a] = uVar16;
    (pTVar19->Data).Pad[0x3b] = uVar17;
  }
  pTVar19->field_0x40 = param_1->field_0x40;
  *(undefined ***)(pTVar19->Data).Pad =
       &
       ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_U__TAddConditional_UFGuid___23__MovieScene_UE__6B_
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

// Emplace<UE::MovieScene::TEntityGroupingHandler<UMovieSceneSkeletalAnimationSystem::FAnimationGroupingPolicy,UObject_*,FMovieSceneSkeletalAnimationComponentData>,UMovieSceneSkeletalAnimationSystem::FAnimationGroupingPolicy,UE::MovieScene::TComponentTypeID<UObject_*>_&,UE::MovieScene::TComponentTypeID<FMovieSceneSkeletalAnimationComponentData>_&> @ 1467df4f0

void __thiscall
TInlineValue<UE::MovieScene::IEntityGroupingHandler,256,8>::
Emplace<UE::MovieScene::TEntityGroupingHandler<UMovieSceneSkeletalAnimationSystem::FAnimationGroupingPolicy,UObject_*,FMovieSceneSkeletalAnimationComponentData>,UMovieSceneSkeletalAnimationSystem::FAnimationGroupingPolicy,UE::MovieScene::TComponentTypeID<UObject_*>_&,UE::MovieScene::TComponentTypeID<FMovieSceneSkeletalAnimationComponentData>_&>
          (TInlineValue<UE::MovieScene::IEntityGroupingHandler,256,8> *this,
          FAnimationGroupingPolicy *param_1,TComponentTypeID<UObject_*> *param_2,
          TComponentTypeID<FMovieSceneSkeletalAnimationComponentData> *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  TComponentTypeID<UObject_*> TVar3;
  TComponentTypeID<FMovieSceneSkeletalAnimationComponentData> TVar4;
  code *pcVar5;
  bool bVar6;
  TInlineValue<UE::MovieScene::IEntityGroupingHandler,256,8> *pTVar7;
  
  uVar2 = this->field_0x100;
  if (this->bIsValid) {
    pTVar7 = this;
    if (!this->bInline) {
      pTVar7 = *(TInlineValue<UE::MovieScene::IEntityGroupingHandler,256,8> **)(this->Data).Pad;
    }
    this->field_0x100 = uVar2 & 0xfe;
    (*(code *)**(undefined8 **)(pTVar7->Data).Pad)();
    if (!this->bInline) {
      FMemory::Free(*(void **)(this->Data).Pad);
    }
  }
  this->bIsValid = true;
  this->bInline = true;
  TVar3 = *param_2;
  TVar4 = *param_3;
  (this->Data).Pad[8] = '\0';
  (this->Data).Pad[9] = '\0';
  (this->Data).Pad[10] = '\0';
  (this->Data).Pad[0xb] = '\0';
  (this->Data).Pad[0xc] = '\0';
  (this->Data).Pad[0xd] = '\0';
  (this->Data).Pad[0xe] = '\0';
  (this->Data).Pad[0xf] = '\0';
  (this->Data).Pad[0x10] = '\0';
  (this->Data).Pad[0x11] = '\0';
  (this->Data).Pad[0x12] = '\0';
  (this->Data).Pad[0x13] = '\0';
  (this->Data).Pad[0x14] = '\0';
  (this->Data).Pad[0x15] = '\0';
  (this->Data).Pad[0x16] = '\0';
  (this->Data).Pad[0x17] = '\0';
  (this->Data).Pad[0x28] = '\0';
  (this->Data).Pad[0x29] = '\0';
  (this->Data).Pad[0x2a] = '\0';
  (this->Data).Pad[0x2b] = '\0';
  (this->Data).Pad[0x2c] = '\0';
  (this->Data).Pad[0x2d] = '\0';
  (this->Data).Pad[0x2e] = '\0';
  (this->Data).Pad[0x2f] = '\0';
  (this->Data).Pad[0x30] = '\0';
  (this->Data).Pad[0x31] = '\0';
  (this->Data).Pad[0x32] = '\0';
  (this->Data).Pad[0x33] = '\0';
  (this->Data).Pad[0x34] = 0x80;
  (this->Data).Pad[0x35] = '\0';
  (this->Data).Pad[0x36] = '\0';
  (this->Data).Pad[0x37] = '\0';
  (this->Data).Pad[0x38] = 0xff;
  (this->Data).Pad[0x39] = 0xff;
  (this->Data).Pad[0x3a] = 0xff;
  (this->Data).Pad[0x3b] = 0xff;
  (this->Data).Pad[0x3c] = '\0';
  (this->Data).Pad[0x3d] = '\0';
  (this->Data).Pad[0x3e] = '\0';
  (this->Data).Pad[0x3f] = '\0';
  (this->Data).Pad[0x48] = '\0';
  (this->Data).Pad[0x49] = '\0';
  (this->Data).Pad[0x4a] = '\0';
  (this->Data).Pad[0x4b] = '\0';
  (this->Data).Pad[0x4c] = '\0';
  (this->Data).Pad[0x4d] = '\0';
  (this->Data).Pad[0x4e] = '\0';
  (this->Data).Pad[0x4f] = '\0';
  (this->Data).Pad[0x50] = '\0';
  (this->Data).Pad[0x51] = '\0';
  (this->Data).Pad[0x52] = '\0';
  (this->Data).Pad[0x53] = '\0';
  (this->Data).Pad[0x58] = '\0';
  (this->Data).Pad[0x59] = '\0';
  (this->Data).Pad[0x5a] = '\0';
  (this->Data).Pad[0x5b] = '\0';
  (this->Data).Pad[0x5c] = '\0';
  (this->Data).Pad[0x5d] = '\0';
  (this->Data).Pad[0x5e] = '\0';
  (this->Data).Pad[0x5f] = '\0';
  (this->Data).Pad[0x60] = '\0';
  (this->Data).Pad[0x61] = '\0';
  (this->Data).Pad[0x62] = '\0';
  (this->Data).Pad[99] = '\0';
  (this->Data).Pad[100] = '\0';
  (this->Data).Pad[0x65] = '\0';
  (this->Data).Pad[0x66] = '\0';
  (this->Data).Pad[0x67] = '\0';
  (this->Data).Pad[0x78] = '\0';
  (this->Data).Pad[0x79] = '\0';
  (this->Data).Pad[0x7a] = '\0';
  (this->Data).Pad[0x7b] = '\0';
  (this->Data).Pad[0x7c] = '\0';
  (this->Data).Pad[0x7d] = '\0';
  (this->Data).Pad[0x7e] = '\0';
  (this->Data).Pad[0x7f] = '\0';
  (this->Data).Pad[0x80] = '\0';
  (this->Data).Pad[0x81] = '\0';
  (this->Data).Pad[0x82] = '\0';
  (this->Data).Pad[0x83] = '\0';
  (this->Data).Pad[0x84] = 0x80;
  (this->Data).Pad[0x85] = '\0';
  (this->Data).Pad[0x86] = '\0';
  (this->Data).Pad[0x87] = '\0';
  (this->Data).Pad[0x88] = 0xff;
  (this->Data).Pad[0x89] = 0xff;
  (this->Data).Pad[0x8a] = 0xff;
  (this->Data).Pad[0x8b] = 0xff;
  (this->Data).Pad[0x8c] = '\0';
  (this->Data).Pad[0x8d] = '\0';
  (this->Data).Pad[0x8e] = '\0';
  (this->Data).Pad[0x8f] = '\0';
  (this->Data).Pad[0x98] = '\0';
  (this->Data).Pad[0x99] = '\0';
  (this->Data).Pad[0x9a] = '\0';
  (this->Data).Pad[0x9b] = '\0';
  (this->Data).Pad[0x9c] = '\0';
  (this->Data).Pad[0x9d] = '\0';
  (this->Data).Pad[0x9e] = '\0';
  (this->Data).Pad[0x9f] = '\0';
  (this->Data).Pad[0xa0] = '\0';
  (this->Data).Pad[0xa1] = '\0';
  (this->Data).Pad[0xa2] = '\0';
  (this->Data).Pad[0xa3] = '\0';
  *(TComponentTypeID<UObject_*> *)((this->Data).Pad + 0xaa) = TVar3;
  *(TComponentTypeID<FMovieSceneSkeletalAnimationComponentData> *)((this->Data).Pad + 0xac) = TVar4;
  *(undefined ***)(this->Data).Pad =
       &
       ___7__TEntityGroupingHandler_UFAnimationGroupingPolicy_UMovieSceneSkeletalAnimationSystem__PEAVUObject__UFMovieSceneSkeletalAnimationComponentData___MovieScene_UE__6B_
  ;
  if (!this->bIsValid) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar7 = this;
  if (!this->bInline) {
    pTVar7 = *(TInlineValue<UE::MovieScene::IEntityGroupingHandler,256,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<UE::MovieScene::IEntityGroupingHandler,256,8> **)(this->Data).Pad;
  }
  if (pTVar7 != this) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

// Emplace<UE::MovieScene::TEntityGroupingHandler<UE::MovieScene::FMPCGroupingPolicy,TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_>,UE::MovieScene::FMPCGroupingPolicy,UE::MovieScene::TComponentTypeID<TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_>_&> @ 1467df680

void __thiscall
TInlineValue<UE::MovieScene::IEntityGroupingHandler,256,8>::
Emplace<UE::MovieScene::TEntityGroupingHandler<UE::MovieScene::FMPCGroupingPolicy,TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_>,UE::MovieScene::FMPCGroupingPolicy,UE::MovieScene::TComponentTypeID<TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_>_&>
          (TInlineValue<UE::MovieScene::IEntityGroupingHandler,256,8> *this,
          FMPCGroupingPolicy *param_1,
          TComponentTypeID<TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_> *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  TComponentTypeID<TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_> TVar3;
  code *pcVar4;
  bool bVar5;
  TInlineValue<UE::MovieScene::IEntityGroupingHandler,256,8> *pTVar6;
  
  uVar2 = this->field_0x100;
  if (this->bIsValid) {
    pTVar6 = this;
    if (!this->bInline) {
      pTVar6 = *(TInlineValue<UE::MovieScene::IEntityGroupingHandler,256,8> **)(this->Data).Pad;
    }
    this->field_0x100 = uVar2 & 0xfe;
    (*(code *)**(undefined8 **)(pTVar6->Data).Pad)(pTVar6,0);
    if (!this->bInline) {
      FMemory::Free(*(void **)(this->Data).Pad);
    }
  }
  this->bIsValid = true;
  this->bInline = true;
  TVar3 = *param_2;
  (this->Data).Pad[8] = '\0';
  (this->Data).Pad[9] = '\0';
  (this->Data).Pad[10] = '\0';
  (this->Data).Pad[0xb] = '\0';
  (this->Data).Pad[0xc] = '\0';
  (this->Data).Pad[0xd] = '\0';
  (this->Data).Pad[0xe] = '\0';
  (this->Data).Pad[0xf] = '\0';
  (this->Data).Pad[0x10] = '\0';
  (this->Data).Pad[0x11] = '\0';
  (this->Data).Pad[0x12] = '\0';
  (this->Data).Pad[0x13] = '\0';
  (this->Data).Pad[0x14] = '\0';
  (this->Data).Pad[0x15] = '\0';
  (this->Data).Pad[0x16] = '\0';
  (this->Data).Pad[0x17] = '\0';
  (this->Data).Pad[0x28] = '\0';
  (this->Data).Pad[0x29] = '\0';
  (this->Data).Pad[0x2a] = '\0';
  (this->Data).Pad[0x2b] = '\0';
  (this->Data).Pad[0x2c] = '\0';
  (this->Data).Pad[0x2d] = '\0';
  (this->Data).Pad[0x2e] = '\0';
  (this->Data).Pad[0x2f] = '\0';
  (this->Data).Pad[0x30] = '\0';
  (this->Data).Pad[0x31] = '\0';
  (this->Data).Pad[0x32] = '\0';
  (this->Data).Pad[0x33] = '\0';
  (this->Data).Pad[0x34] = 0x80;
  (this->Data).Pad[0x35] = '\0';
  (this->Data).Pad[0x36] = '\0';
  (this->Data).Pad[0x37] = '\0';
  (this->Data).Pad[0x38] = 0xff;
  (this->Data).Pad[0x39] = 0xff;
  (this->Data).Pad[0x3a] = 0xff;
  (this->Data).Pad[0x3b] = 0xff;
  (this->Data).Pad[0x3c] = '\0';
  (this->Data).Pad[0x3d] = '\0';
  (this->Data).Pad[0x3e] = '\0';
  (this->Data).Pad[0x3f] = '\0';
  (this->Data).Pad[0x48] = '\0';
  (this->Data).Pad[0x49] = '\0';
  (this->Data).Pad[0x4a] = '\0';
  (this->Data).Pad[0x4b] = '\0';
  (this->Data).Pad[0x4c] = '\0';
  (this->Data).Pad[0x4d] = '\0';
  (this->Data).Pad[0x4e] = '\0';
  (this->Data).Pad[0x4f] = '\0';
  (this->Data).Pad[0x50] = '\0';
  (this->Data).Pad[0x51] = '\0';
  (this->Data).Pad[0x52] = '\0';
  (this->Data).Pad[0x53] = '\0';
  (this->Data).Pad[0x58] = '\0';
  (this->Data).Pad[0x59] = '\0';
  (this->Data).Pad[0x5a] = '\0';
  (this->Data).Pad[0x5b] = '\0';
  (this->Data).Pad[0x5c] = '\0';
  (this->Data).Pad[0x5d] = '\0';
  (this->Data).Pad[0x5e] = '\0';
  (this->Data).Pad[0x5f] = '\0';
  (this->Data).Pad[0x60] = '\0';
  (this->Data).Pad[0x61] = '\0';
  (this->Data).Pad[0x62] = '\0';
  (this->Data).Pad[99] = '\0';
  (this->Data).Pad[100] = '\0';
  (this->Data).Pad[0x65] = '\0';
  (this->Data).Pad[0x66] = '\0';
  (this->Data).Pad[0x67] = '\0';
  (this->Data).Pad[0x78] = '\0';
  (this->Data).Pad[0x79] = '\0';
  (this->Data).Pad[0x7a] = '\0';
  (this->Data).Pad[0x7b] = '\0';
  (this->Data).Pad[0x7c] = '\0';
  (this->Data).Pad[0x7d] = '\0';
  (this->Data).Pad[0x7e] = '\0';
  (this->Data).Pad[0x7f] = '\0';
  (this->Data).Pad[0x80] = '\0';
  (this->Data).Pad[0x81] = '\0';
  (this->Data).Pad[0x82] = '\0';
  (this->Data).Pad[0x83] = '\0';
  (this->Data).Pad[0x84] = 0x80;
  (this->Data).Pad[0x85] = '\0';
  (this->Data).Pad[0x86] = '\0';
  (this->Data).Pad[0x87] = '\0';
  (this->Data).Pad[0x88] = 0xff;
  (this->Data).Pad[0x89] = 0xff;
  (this->Data).Pad[0x8a] = 0xff;
  (this->Data).Pad[0x8b] = 0xff;
  (this->Data).Pad[0x8c] = '\0';
  (this->Data).Pad[0x8d] = '\0';
  (this->Data).Pad[0x8e] = '\0';
  (this->Data).Pad[0x8f] = '\0';
  (this->Data).Pad[0x98] = '\0';
  (this->Data).Pad[0x99] = '\0';
  (this->Data).Pad[0x9a] = '\0';
  (this->Data).Pad[0x9b] = '\0';
  (this->Data).Pad[0x9c] = '\0';
  (this->Data).Pad[0x9d] = '\0';
  (this->Data).Pad[0x9e] = '\0';
  (this->Data).Pad[0x9f] = '\0';
  (this->Data).Pad[0xa0] = '\0';
  (this->Data).Pad[0xa1] = '\0';
  (this->Data).Pad[0xa2] = '\0';
  (this->Data).Pad[0xa3] = '\0';
  *(TComponentTypeID<TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_> *)
   ((this->Data).Pad + 0xaa) = TVar3;
  *(undefined ***)(this->Data).Pad =
       &
       ___7__TEntityGroupingHandler_UFMPCGroupingPolicy_MovieScene_UE__U__TWeakObjectPtr_VUMaterialParameterCollection__UFWeakObjectPtr_____MovieScene_UE__6B_
  ;
  if (!this->bIsValid) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar6 = this;
  if (!this->bInline) {
    pTVar6 = *(TInlineValue<UE::MovieScene::IEntityGroupingHandler,256,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<UE::MovieScene::IEntityGroupingHandler,256,8> **)(this->Data).Pad;
  }
  if (pTVar6 != this) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// Emplace<UE::MovieScene::TEntityGroupingHandler<UE::MovieScene::FPropertyInstantiatorGroupingPolicy,UObject_*,FMovieScenePropertyBinding>,UE::MovieScene::FPropertyInstantiatorGroupingPolicy,UE::MovieScene::TComponentTypeID<UObject_*>_&,UE::MovieScene::TComponentTypeID<FMovieScenePropertyBinding>_&> @ 1467df800

void __thiscall
TInlineValue<UE::MovieScene::IEntityGroupingHandler,256,8>::
Emplace<UE::MovieScene::TEntityGroupingHandler<UE::MovieScene::FPropertyInstantiatorGroupingPolicy,UObject_*,FMovieScenePropertyBinding>,UE::MovieScene::FPropertyInstantiatorGroupingPolicy,UE::MovieScene::TComponentTypeID<UObject_*>_&,UE::MovieScene::TComponentTypeID<FMovieScenePropertyBinding>_&>
          (TInlineValue<UE::MovieScene::IEntityGroupingHandler,256,8> *this,
          FPropertyInstantiatorGroupingPolicy *param_1,TComponentTypeID<UObject_*> *param_2,
          TComponentTypeID<FMovieScenePropertyBinding> *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  TComponentTypeID<UObject_*> TVar3;
  TComponentTypeID<FMovieScenePropertyBinding> TVar4;
  code *pcVar5;
  bool bVar6;
  TInlineValue<UE::MovieScene::IEntityGroupingHandler,256,8> *pTVar7;
  
  uVar2 = this->field_0x100;
  if (this->bIsValid) {
    pTVar7 = this;
    if (!this->bInline) {
      pTVar7 = *(TInlineValue<UE::MovieScene::IEntityGroupingHandler,256,8> **)(this->Data).Pad;
    }
    this->field_0x100 = uVar2 & 0xfe;
    (*(code *)**(undefined8 **)(pTVar7->Data).Pad)();
    if (!this->bInline) {
      FMemory::Free(*(void **)(this->Data).Pad);
    }
  }
  this->bIsValid = true;
  this->bInline = true;
  TVar3 = *param_2;
  TVar4 = *param_3;
  (this->Data).Pad[8] = '\0';
  (this->Data).Pad[9] = '\0';
  (this->Data).Pad[10] = '\0';
  (this->Data).Pad[0xb] = '\0';
  (this->Data).Pad[0xc] = '\0';
  (this->Data).Pad[0xd] = '\0';
  (this->Data).Pad[0xe] = '\0';
  (this->Data).Pad[0xf] = '\0';
  (this->Data).Pad[0x10] = '\0';
  (this->Data).Pad[0x11] = '\0';
  (this->Data).Pad[0x12] = '\0';
  (this->Data).Pad[0x13] = '\0';
  (this->Data).Pad[0x14] = '\0';
  (this->Data).Pad[0x15] = '\0';
  (this->Data).Pad[0x16] = '\0';
  (this->Data).Pad[0x17] = '\0';
  (this->Data).Pad[0x28] = '\0';
  (this->Data).Pad[0x29] = '\0';
  (this->Data).Pad[0x2a] = '\0';
  (this->Data).Pad[0x2b] = '\0';
  (this->Data).Pad[0x2c] = '\0';
  (this->Data).Pad[0x2d] = '\0';
  (this->Data).Pad[0x2e] = '\0';
  (this->Data).Pad[0x2f] = '\0';
  (this->Data).Pad[0x30] = '\0';
  (this->Data).Pad[0x31] = '\0';
  (this->Data).Pad[0x32] = '\0';
  (this->Data).Pad[0x33] = '\0';
  (this->Data).Pad[0x34] = 0x80;
  (this->Data).Pad[0x35] = '\0';
  (this->Data).Pad[0x36] = '\0';
  (this->Data).Pad[0x37] = '\0';
  (this->Data).Pad[0x38] = 0xff;
  (this->Data).Pad[0x39] = 0xff;
  (this->Data).Pad[0x3a] = 0xff;
  (this->Data).Pad[0x3b] = 0xff;
  (this->Data).Pad[0x3c] = '\0';
  (this->Data).Pad[0x3d] = '\0';
  (this->Data).Pad[0x3e] = '\0';
  (this->Data).Pad[0x3f] = '\0';
  (this->Data).Pad[0x48] = '\0';
  (this->Data).Pad[0x49] = '\0';
  (this->Data).Pad[0x4a] = '\0';
  (this->Data).Pad[0x4b] = '\0';
  (this->Data).Pad[0x4c] = '\0';
  (this->Data).Pad[0x4d] = '\0';
  (this->Data).Pad[0x4e] = '\0';
  (this->Data).Pad[0x4f] = '\0';
  (this->Data).Pad[0x50] = '\0';
  (this->Data).Pad[0x51] = '\0';
  (this->Data).Pad[0x52] = '\0';
  (this->Data).Pad[0x53] = '\0';
  (this->Data).Pad[0x58] = '\0';
  (this->Data).Pad[0x59] = '\0';
  (this->Data).Pad[0x5a] = '\0';
  (this->Data).Pad[0x5b] = '\0';
  (this->Data).Pad[0x5c] = '\0';
  (this->Data).Pad[0x5d] = '\0';
  (this->Data).Pad[0x5e] = '\0';
  (this->Data).Pad[0x5f] = '\0';
  (this->Data).Pad[0x60] = '\0';
  (this->Data).Pad[0x61] = '\0';
  (this->Data).Pad[0x62] = '\0';
  (this->Data).Pad[99] = '\0';
  (this->Data).Pad[100] = '\0';
  (this->Data).Pad[0x65] = '\0';
  (this->Data).Pad[0x66] = '\0';
  (this->Data).Pad[0x67] = '\0';
  (this->Data).Pad[0x78] = '\0';
  (this->Data).Pad[0x79] = '\0';
  (this->Data).Pad[0x7a] = '\0';
  (this->Data).Pad[0x7b] = '\0';
  (this->Data).Pad[0x7c] = '\0';
  (this->Data).Pad[0x7d] = '\0';
  (this->Data).Pad[0x7e] = '\0';
  (this->Data).Pad[0x7f] = '\0';
  (this->Data).Pad[0x80] = '\0';
  (this->Data).Pad[0x81] = '\0';
  (this->Data).Pad[0x82] = '\0';
  (this->Data).Pad[0x83] = '\0';
  (this->Data).Pad[0x84] = 0x80;
  (this->Data).Pad[0x85] = '\0';
  (this->Data).Pad[0x86] = '\0';
  (this->Data).Pad[0x87] = '\0';
  (this->Data).Pad[0x88] = 0xff;
  (this->Data).Pad[0x89] = 0xff;
  (this->Data).Pad[0x8a] = 0xff;
  (this->Data).Pad[0x8b] = 0xff;
  (this->Data).Pad[0x8c] = '\0';
  (this->Data).Pad[0x8d] = '\0';
  (this->Data).Pad[0x8e] = '\0';
  (this->Data).Pad[0x8f] = '\0';
  (this->Data).Pad[0x98] = '\0';
  (this->Data).Pad[0x99] = '\0';
  (this->Data).Pad[0x9a] = '\0';
  (this->Data).Pad[0x9b] = '\0';
  (this->Data).Pad[0x9c] = '\0';
  (this->Data).Pad[0x9d] = '\0';
  (this->Data).Pad[0x9e] = '\0';
  (this->Data).Pad[0x9f] = '\0';
  (this->Data).Pad[0xa0] = '\0';
  (this->Data).Pad[0xa1] = '\0';
  (this->Data).Pad[0xa2] = '\0';
  (this->Data).Pad[0xa3] = '\0';
  *(TComponentTypeID<UObject_*> *)((this->Data).Pad + 0xaa) = TVar3;
  *(TComponentTypeID<FMovieScenePropertyBinding> *)((this->Data).Pad + 0xac) = TVar4;
  *(undefined ***)(this->Data).Pad =
       &
       ___7__TEntityGroupingHandler_UFPropertyInstantiatorGroupingPolicy_MovieScene_UE__PEAVUObject__UFMovieScenePropertyBinding___MovieScene_UE__6B_
  ;
  if (!this->bIsValid) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar7 = this;
  if (!this->bInline) {
    pTVar7 = *(TInlineValue<UE::MovieScene::IEntityGroupingHandler,256,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<UE::MovieScene::IEntityGroupingHandler,256,8> **)(this->Data).Pad;
  }
  if (pTVar7 != this) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

// InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<bool>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAdd>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<bool>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAdd>_> @ 14688d580

void __thiscall
TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<bool>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAdd>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<bool>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAdd>_>
          (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *this,
          TEntityBuilder<UE::MovieScene::TAdd<bool>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAdd>
          *param_1)

{
  undefined1 uVar1;
  uchar uVar2;
  char cVar3;
  UObject *pUVar4;
  code *pcVar5;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar6;
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
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  bool bVar21;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar22;
  
  this->bInline = false;
  pTVar22 = FMemory::Malloc(0x68,8);
  this->bIsValid = true;
  *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad = pTVar22;
  if (this->bInline) {
    pTVar22 = this;
  }
  *(undefined ***)(pTVar22->Data).Pad =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03__U__TAdd__N_MovieScene_UE__U__TAdd_V__TSubclassOf_VUMovieSceneBlenderSystem_____34_U__TAdd_UFMovieScenePropertyBinding___34_U__TAddConditional_UFGuid___34_UFAdd_34__MovieScene_UE__6B_
  ;
  uVar1 = param_1->field_0x9;
  (pTVar22->Data).Pad[8] = param_1->field_0x8;
  (pTVar22->Data).Pad[9] = uVar1;
  (pTVar22->Data).Pad[0xb] = '\0';
  uVar2 = param_1->field_0xb;
  (pTVar22->Data).Pad[0xb] = uVar2;
  if (uVar2 != '\0') {
    (pTVar22->Data).Pad[10] = param_1->field_0xa;
  }
  uVar1 = param_1->field_0x11;
  (pTVar22->Data).Pad[0x10] = param_1->field_0x10;
  (pTVar22->Data).Pad[0x11] = uVar1;
  (pTVar22->Data).Pad[0x20] = '\0';
  uVar2 = param_1->field_0x20;
  (pTVar22->Data).Pad[0x20] = uVar2;
  if (uVar2 != '\0') {
    pUVar4 = *(UObject **)&param_1->field_0x18;
    *(UObject **)((pTVar22->Data).Pad + 0x18) = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
  }
  uVar1 = param_1->field_0x29;
  (pTVar22->Data).Pad[0x28] = param_1->field_0x28;
  (pTVar22->Data).Pad[0x29] = uVar1;
  pTVar22->field_0x40 = 0;
  cVar3 = param_1->field_0x40;
  pTVar22->field_0x40 = cVar3;
  if (cVar3 != '\0') {
    uVar1 = param_1->field_0x2d;
    uVar7 = param_1->field_0x2e;
    uVar8 = param_1->field_0x2f;
    uVar9 = param_1->field_0x30;
    uVar10 = param_1->field_0x31;
    uVar11 = param_1->field_0x32;
    uVar12 = param_1->field_0x33;
    uVar13 = param_1->field_0x34;
    uVar14 = param_1->field_0x35;
    uVar15 = param_1->field_0x36;
    uVar16 = param_1->field_0x37;
    uVar17 = param_1->field_0x38;
    uVar18 = param_1->field_0x39;
    uVar19 = param_1->field_0x3a;
    uVar20 = param_1->field_0x3b;
    (pTVar22->Data).Pad[0x2c] = param_1->field_0x2c;
    (pTVar22->Data).Pad[0x2d] = uVar1;
    (pTVar22->Data).Pad[0x2e] = uVar7;
    (pTVar22->Data).Pad[0x2f] = uVar8;
    (pTVar22->Data).Pad[0x30] = uVar9;
    (pTVar22->Data).Pad[0x31] = uVar10;
    (pTVar22->Data).Pad[0x32] = uVar11;
    (pTVar22->Data).Pad[0x33] = uVar12;
    (pTVar22->Data).Pad[0x34] = uVar13;
    (pTVar22->Data).Pad[0x35] = uVar14;
    (pTVar22->Data).Pad[0x36] = uVar15;
    (pTVar22->Data).Pad[0x37] = uVar16;
    (pTVar22->Data).Pad[0x38] = uVar17;
    (pTVar22->Data).Pad[0x39] = uVar18;
    (pTVar22->Data).Pad[0x3a] = uVar19;
    (pTVar22->Data).Pad[0x3b] = uVar20;
    uVar1 = param_1->field_0x3d;
    uVar7 = param_1->field_0x3e;
    uVar8 = param_1->field_0x3f;
    (pTVar22->Data).Pad[0x3c] = param_1->field_0x3c;
    (pTVar22->Data).Pad[0x3d] = uVar1;
    (pTVar22->Data).Pad[0x3e] = uVar7;
    (pTVar22->Data).Pad[0x3f] = uVar8;
  }
  *(undefined4 *)&pTVar22->field_0x44 = *(undefined4 *)&param_1->field_0x44;
  pTVar22[1].Data.Pad[0x10] = '\0';
  uVar2 = param_1->field_0x58;
  pTVar22[1].Data.Pad[0x10] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x49;
    uVar7 = param_1->field_0x4a;
    uVar8 = param_1->field_0x4b;
    uVar9 = param_1->field_0x4c;
    uVar10 = param_1->field_0x4d;
    uVar11 = param_1->field_0x4e;
    uVar12 = param_1->field_0x4f;
    uVar13 = param_1->field_0x50;
    uVar14 = param_1->field_0x51;
    uVar15 = param_1->field_0x52;
    uVar16 = param_1->field_0x53;
    uVar17 = param_1->field_0x54;
    uVar18 = param_1->field_0x55;
    uVar19 = param_1->field_0x56;
    uVar20 = param_1->field_0x57;
    pTVar22[1].Data.Pad[0] = param_1->field_0x48;
    pTVar22[1].Data.Pad[1] = uVar1;
    pTVar22[1].Data.Pad[2] = uVar7;
    pTVar22[1].Data.Pad[3] = uVar8;
    pTVar22[1].Data.Pad[4] = uVar9;
    pTVar22[1].Data.Pad[5] = uVar10;
    pTVar22[1].Data.Pad[6] = uVar11;
    pTVar22[1].Data.Pad[7] = uVar12;
    pTVar6 = pTVar22 + 1;
    (pTVar6->Data).Pad[8] = uVar13;
    (pTVar6->Data).Pad[9] = uVar14;
    (pTVar6->Data).Pad[10] = uVar15;
    (pTVar6->Data).Pad[0xb] = uVar16;
    (pTVar6->Data).Pad[0xc] = uVar17;
    (pTVar6->Data).Pad[0xd] = uVar18;
    (pTVar6->Data).Pad[0xe] = uVar19;
    (pTVar6->Data).Pad[0xf] = uVar20;
  }
  uVar1 = param_1->field_0x5d;
  pTVar22[1].Data.Pad[0x14] = param_1->field_0x5c;
  pTVar22[1].Data.Pad[0x15] = uVar1;
  pTVar22[1].Data.Pad[0x18] = param_1->field_0x60;
  *(undefined ***)(pTVar22->Data).Pad =
       &
       ___7__TEntityBuilder_U__TAdd__N_MovieScene_UE__U__TAdd_V__TSubclassOf_VUMovieSceneBlenderSystem_____23_U__TAdd_UFMovieScenePropertyBinding___23_U__TAddConditional_UFGuid___23_UFAdd_23__MovieScene_UE__6B_
  ;
  if (!this->bIsValid) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar21) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar22 = this;
  if (!this->bInline) {
    pTVar22 = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar21) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (pTVar22 != this) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar21) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

// InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_> @ 14688d720

void __thiscall
TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_>
          (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *this,
          TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
          *param_1)

{
  undefined1 uVar1;
  uchar uVar2;
  char cVar3;
  UObject *pUVar4;
  code *pcVar5;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar6;
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
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  bool bVar21;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar22;
  
  this->bInline = false;
  pTVar22 = FMemory::Malloc(0x98,8);
  this->bIsValid = true;
  *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad = pTVar22;
  if (this->bInline) {
    pTVar22 = this;
  }
  *(undefined ***)(pTVar22->Data).Pad =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04__UFAdd_MovieScene_UE__U__TAdd_UFSourceBoolChannel_MovieScene_UE___34_U__TAdd_V__TSubclassOf_VUMovieSceneBlenderSystem_____34_U__TAdd_UFMovieScenePropertyBinding___34_U__TAddConditional_UFGuid___34_U__TAddConditional_UFPropertyNotifyComponentData_MovieScene_UE___34__MovieScene_UE__6B_
  ;
  uVar1 = param_1->field_0x9;
  (pTVar22->Data).Pad[8] = param_1->field_0x8;
  (pTVar22->Data).Pad[9] = uVar1;
  uVar1 = param_1->field_0x11;
  (pTVar22->Data).Pad[0x10] = param_1->field_0x10;
  (pTVar22->Data).Pad[0x11] = uVar1;
  (pTVar22->Data).Pad[0x20] = '\0';
  uVar2 = param_1->field_0x20;
  (pTVar22->Data).Pad[0x20] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x19;
    uVar7 = param_1->field_0x1a;
    uVar8 = param_1->field_0x1b;
    uVar9 = param_1->field_0x1c;
    uVar10 = param_1->field_0x1d;
    uVar11 = param_1->field_0x1e;
    uVar12 = param_1->field_0x1f;
    (pTVar22->Data).Pad[0x18] = param_1->field_0x18;
    (pTVar22->Data).Pad[0x19] = uVar1;
    (pTVar22->Data).Pad[0x1a] = uVar7;
    (pTVar22->Data).Pad[0x1b] = uVar8;
    (pTVar22->Data).Pad[0x1c] = uVar9;
    (pTVar22->Data).Pad[0x1d] = uVar10;
    (pTVar22->Data).Pad[0x1e] = uVar11;
    (pTVar22->Data).Pad[0x1f] = uVar12;
  }
  uVar1 = param_1->field_0x29;
  (pTVar22->Data).Pad[0x28] = param_1->field_0x28;
  (pTVar22->Data).Pad[0x29] = uVar1;
  (pTVar22->Data).Pad[0x38] = '\0';
  uVar2 = param_1->field_0x38;
  (pTVar22->Data).Pad[0x38] = uVar2;
  if (uVar2 != '\0') {
    pUVar4 = *(UObject **)&param_1->field_0x30;
    *(UObject **)((pTVar22->Data).Pad + 0x30) = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
  }
  *(undefined2 *)&pTVar22->field_0x40 = *(undefined2 *)&param_1->field_0x40;
  pTVar22[1].Data.Pad[0x10] = '\0';
  uVar2 = param_1->field_0x58;
  pTVar22[1].Data.Pad[0x10] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x4c;
    uVar7 = param_1->field_0x4d;
    uVar8 = param_1->field_0x4e;
    uVar9 = param_1->field_0x4f;
    uVar10 = param_1->field_0x50;
    uVar11 = param_1->field_0x51;
    uVar12 = param_1->field_0x52;
    uVar13 = param_1->field_0x53;
    *(undefined8 *)&pTVar22->field_0x44 = *(undefined8 *)&param_1->field_0x44;
    pTVar6 = pTVar22 + 1;
    (pTVar6->Data).Pad[4] = uVar1;
    (pTVar6->Data).Pad[5] = uVar7;
    (pTVar6->Data).Pad[6] = uVar8;
    (pTVar6->Data).Pad[7] = uVar9;
    (pTVar6->Data).Pad[8] = uVar10;
    (pTVar6->Data).Pad[9] = uVar11;
    (pTVar6->Data).Pad[10] = uVar12;
    (pTVar6->Data).Pad[0xb] = uVar13;
    uVar1 = param_1->field_0x55;
    uVar7 = param_1->field_0x56;
    uVar8 = param_1->field_0x57;
    pTVar6 = pTVar22 + 1;
    (pTVar6->Data).Pad[0xc] = param_1->field_0x54;
    (pTVar6->Data).Pad[0xd] = uVar1;
    (pTVar6->Data).Pad[0xe] = uVar7;
    (pTVar6->Data).Pad[0xf] = uVar8;
  }
  uVar1 = param_1->field_0x5d;
  uVar7 = param_1->field_0x5e;
  uVar8 = param_1->field_0x5f;
  pTVar6 = pTVar22 + 1;
  (pTVar6->Data).Pad[0x14] = param_1->field_0x5c;
  (pTVar6->Data).Pad[0x15] = uVar1;
  (pTVar6->Data).Pad[0x16] = uVar7;
  (pTVar6->Data).Pad[0x17] = uVar8;
  pTVar22[1].Data.Pad[0x28] = '\0';
  uVar2 = param_1->field_0x70;
  pTVar22[1].Data.Pad[0x28] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x61;
    uVar7 = param_1->field_0x62;
    uVar8 = param_1->field_0x63;
    uVar9 = param_1->field_0x64;
    uVar10 = param_1->field_0x65;
    uVar11 = param_1->field_0x66;
    uVar12 = param_1->field_0x67;
    uVar13 = param_1->field_0x68;
    uVar14 = param_1->field_0x69;
    uVar15 = param_1->field_0x6a;
    uVar16 = param_1->field_0x6b;
    uVar17 = param_1->field_0x6c;
    uVar18 = param_1->field_0x6d;
    uVar19 = param_1->field_0x6e;
    uVar20 = param_1->field_0x6f;
    pTVar6 = pTVar22 + 1;
    (pTVar6->Data).Pad[0x18] = param_1->field_0x60;
    (pTVar6->Data).Pad[0x19] = uVar1;
    (pTVar6->Data).Pad[0x1a] = uVar7;
    (pTVar6->Data).Pad[0x1b] = uVar8;
    (pTVar6->Data).Pad[0x1c] = uVar9;
    (pTVar6->Data).Pad[0x1d] = uVar10;
    (pTVar6->Data).Pad[0x1e] = uVar11;
    (pTVar6->Data).Pad[0x1f] = uVar12;
    pTVar6 = pTVar22 + 1;
    (pTVar6->Data).Pad[0x20] = uVar13;
    (pTVar6->Data).Pad[0x21] = uVar14;
    (pTVar6->Data).Pad[0x22] = uVar15;
    (pTVar6->Data).Pad[0x23] = uVar16;
    (pTVar6->Data).Pad[0x24] = uVar17;
    (pTVar6->Data).Pad[0x25] = uVar18;
    (pTVar6->Data).Pad[0x26] = uVar19;
    (pTVar6->Data).Pad[0x27] = uVar20;
  }
  uVar1 = param_1->field_0x75;
  uVar7 = param_1->field_0x76;
  uVar8 = param_1->field_0x77;
  pTVar6 = pTVar22 + 1;
  (pTVar6->Data).Pad[0x2c] = param_1->field_0x74;
  (pTVar6->Data).Pad[0x2d] = uVar1;
  (pTVar6->Data).Pad[0x2e] = uVar7;
  (pTVar6->Data).Pad[0x2f] = uVar8;
  pTVar22[1].field_0x44 = 0;
  cVar3 = param_1->field_0x8c;
  pTVar22[1].field_0x44 = cVar3;
  if (cVar3 != '\0') {
    uVar1 = param_1->field_0x79;
    uVar7 = param_1->field_0x7a;
    uVar8 = param_1->field_0x7b;
    uVar9 = param_1->field_0x7c;
    uVar10 = param_1->field_0x7d;
    uVar11 = param_1->field_0x7e;
    uVar12 = param_1->field_0x7f;
    uVar13 = param_1->field_0x80;
    uVar14 = param_1->field_0x81;
    uVar15 = param_1->field_0x82;
    uVar16 = param_1->field_0x83;
    uVar17 = param_1->field_0x84;
    uVar18 = param_1->field_0x85;
    uVar19 = param_1->field_0x86;
    uVar20 = param_1->field_0x87;
    pTVar6 = pTVar22 + 1;
    (pTVar6->Data).Pad[0x30] = param_1->field_0x78;
    (pTVar6->Data).Pad[0x31] = uVar1;
    (pTVar6->Data).Pad[0x32] = uVar7;
    (pTVar6->Data).Pad[0x33] = uVar8;
    (pTVar6->Data).Pad[0x34] = uVar9;
    (pTVar6->Data).Pad[0x35] = uVar10;
    (pTVar6->Data).Pad[0x36] = uVar11;
    (pTVar6->Data).Pad[0x37] = uVar12;
    pTVar6 = pTVar22 + 1;
    (pTVar6->Data).Pad[0x38] = uVar13;
    (pTVar6->Data).Pad[0x39] = uVar14;
    (pTVar6->Data).Pad[0x3a] = uVar15;
    (pTVar6->Data).Pad[0x3b] = uVar16;
    (pTVar6->Data).Pad[0x3c] = uVar17;
    (pTVar6->Data).Pad[0x3d] = uVar18;
    (pTVar6->Data).Pad[0x3e] = uVar19;
    (pTVar6->Data).Pad[0x3f] = uVar20;
    *(undefined4 *)&pTVar22[1].field_0x40 = *(undefined4 *)&param_1->field_0x88;
  }
  pTVar22[2].Data.Pad[0] = param_1->field_0x90;
  *(undefined ***)(pTVar22->Data).Pad =
       &
       ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAdd_UFSourceBoolChannel_MovieScene_UE___23_U__TAdd_V__TSubclassOf_VUMovieSceneBlenderSystem_____23_U__TAdd_UFMovieScenePropertyBinding___23_U__TAddConditional_UFGuid___23_U__TAddConditional_UFPropertyNotifyComponentData_MovieScene_UE___23__MovieScene_UE__6B_
  ;
  if (!this->bIsValid) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar21) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar22 = this;
  if (!this->bInline) {
    pTVar22 = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar21) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (pTVar22 != this) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar21) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

// InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<FGuid>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<FGuid>_>_> @ 14688d900

void __thiscall
TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<FGuid>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<FGuid>_>_>
          (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *this,
          TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<FGuid>_>
          *param_1)

{
  undefined1 uVar1;
  uchar uVar2;
  UObject *pUVar3;
  code *pcVar4;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  bool bVar13;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar14;
  
  this->bInline = false;
  pTVar14 = FMemory::Malloc(0x60,8);
  this->bIsValid = true;
  *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad = pTVar14;
  if (this->bInline) {
    pTVar14 = this;
  }
  *(undefined ***)(pTVar14->Data).Pad =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02__UFAdd_MovieScene_UE__U__TAdd_UFSourceBoolChannel_MovieScene_UE___34_U__TAdd_V__TSubclassOf_VUMovieSceneBlenderSystem_____34_U__TAddConditional_UFGuid___34__MovieScene_UE__6B_
  ;
  uVar1 = param_1->field_0x9;
  (pTVar14->Data).Pad[8] = param_1->field_0x8;
  (pTVar14->Data).Pad[9] = uVar1;
  uVar1 = param_1->field_0x11;
  (pTVar14->Data).Pad[0x10] = param_1->field_0x10;
  (pTVar14->Data).Pad[0x11] = uVar1;
  (pTVar14->Data).Pad[0x20] = '\0';
  uVar2 = param_1->field_0x20;
  (pTVar14->Data).Pad[0x20] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x19;
    uVar6 = param_1->field_0x1a;
    uVar7 = param_1->field_0x1b;
    uVar8 = param_1->field_0x1c;
    uVar9 = param_1->field_0x1d;
    uVar10 = param_1->field_0x1e;
    uVar11 = param_1->field_0x1f;
    (pTVar14->Data).Pad[0x18] = param_1->field_0x18;
    (pTVar14->Data).Pad[0x19] = uVar1;
    (pTVar14->Data).Pad[0x1a] = uVar6;
    (pTVar14->Data).Pad[0x1b] = uVar7;
    (pTVar14->Data).Pad[0x1c] = uVar8;
    (pTVar14->Data).Pad[0x1d] = uVar9;
    (pTVar14->Data).Pad[0x1e] = uVar10;
    (pTVar14->Data).Pad[0x1f] = uVar11;
  }
  uVar1 = param_1->field_0x29;
  (pTVar14->Data).Pad[0x28] = param_1->field_0x28;
  (pTVar14->Data).Pad[0x29] = uVar1;
  (pTVar14->Data).Pad[0x38] = '\0';
  uVar2 = param_1->field_0x38;
  (pTVar14->Data).Pad[0x38] = uVar2;
  if (uVar2 != '\0') {
    pUVar3 = *(UObject **)&param_1->field_0x30;
    *(UObject **)((pTVar14->Data).Pad + 0x30) = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
  }
  *(undefined4 *)&pTVar14->field_0x40 = *(undefined4 *)&param_1->field_0x40;
  pTVar14[1].Data.Pad[0xc] = '\0';
  uVar2 = param_1->field_0x54;
  pTVar14[1].Data.Pad[0xc] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x4c;
    uVar6 = param_1->field_0x4d;
    uVar7 = param_1->field_0x4e;
    uVar8 = param_1->field_0x4f;
    uVar9 = param_1->field_0x50;
    uVar10 = param_1->field_0x51;
    uVar11 = param_1->field_0x52;
    uVar12 = param_1->field_0x53;
    *(undefined8 *)&pTVar14->field_0x44 = *(undefined8 *)&param_1->field_0x44;
    pTVar5 = pTVar14 + 1;
    (pTVar5->Data).Pad[4] = uVar1;
    (pTVar5->Data).Pad[5] = uVar6;
    (pTVar5->Data).Pad[6] = uVar7;
    (pTVar5->Data).Pad[7] = uVar8;
    (pTVar5->Data).Pad[8] = uVar9;
    (pTVar5->Data).Pad[9] = uVar10;
    (pTVar5->Data).Pad[10] = uVar11;
    (pTVar5->Data).Pad[0xb] = uVar12;
  }
  pTVar14[1].Data.Pad[0x10] = param_1->field_0x58;
  *(undefined ***)(pTVar14->Data).Pad =
       &
       ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAdd_UFSourceBoolChannel_MovieScene_UE___23_U__TAdd_V__TSubclassOf_VUMovieSceneBlenderSystem_____23_U__TAddConditional_UFGuid___23__MovieScene_UE__6B_
  ;
  if (!this->bIsValid) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar14 = this;
  if (!this->bInline) {
    pTVar14 = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (pTVar14 != this) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// InitializeFrom<FMovieSceneActorReferenceSectionTemplate,FMovieSceneActorReferenceSectionTemplate> @ 14688da80

void __thiscall
TInlineValue<FMovieSceneEvalTemplate,128,8>::
InitializeFrom<FMovieSceneActorReferenceSectionTemplate,FMovieSceneActorReferenceSectionTemplate>
          (TInlineValue<FMovieSceneEvalTemplate,128,8> *this,
          FMovieSceneActorReferenceSectionTemplate *param_1)

{
  FMovieSceneChannel *this_00;
  undefined1 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  FName FVar4;
  TInlineValue<FMovieSceneEvalTemplate,128,8> *pTVar5;
  longlong lVar6;
  bool bVar7;
  TInlineValue<FMovieSceneEvalTemplate,128,8> *pTVar8;
  
  this->bInline = false;
  pTVar8 = FMemory::Malloc(0x170,8);
  this->bIsValid = true;
  *(TInlineValue<FMovieSceneEvalTemplate,128,8> **)(this->Data).Pad = pTVar8;
  if (this->bInline) {
    pTVar8 = this;
  }
  *(undefined ***)(pTVar8->Data).Pad = &___7FMovieSceneEvalTemplateBase__6B_;
  this_00 = (FMovieSceneChannel *)((pTVar8->Data).Pad + 0x38);
  lVar6 = param_1->_padding_;
  *(undefined ***)(pTVar8->Data).Pad = &___7FMovieSceneEvalTemplate__6B_;
  (pTVar8->Data).Pad[8] = (uchar)lVar6;
  (pTVar8->Data).Pad[0x10] = (uchar)param_1->_padding_;
  *(undefined8 *)((pTVar8->Data).Pad + 0x14) = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  *(undefined ***)(pTVar8->Data).Pad = &___7FMovieSceneActorReferenceSectionTemplate__6B_;
  *(FName *)((pTVar8->Data).Pad + 0x20) = (param_1->PropertyData).PropertyName;
  (pTVar8->Data).Pad[0x28] = '\0';
  (pTVar8->Data).Pad[0x29] = '\0';
  (pTVar8->Data).Pad[0x2a] = '\0';
  (pTVar8->Data).Pad[0x2b] = '\0';
  (pTVar8->Data).Pad[0x2c] = '\0';
  (pTVar8->Data).Pad[0x2d] = '\0';
  (pTVar8->Data).Pad[0x2e] = '\0';
  (pTVar8->Data).Pad[0x2f] = '\0';
  *(FScriptContainerElement **)((pTVar8->Data).Pad + 0x28) =
       (param_1->PropertyData).PropertyPath.Data.AllocatorInstance.Data;
  (param_1->PropertyData).PropertyPath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)((pTVar8->Data).Pad + 0x30) = (param_1->PropertyData).PropertyPath.Data.ArrayNum;
  *(int *)((pTVar8->Data).Pad + 0x34) = (param_1->PropertyData).PropertyPath.Data.ArrayMax;
  (param_1->PropertyData).PropertyPath.Data.ArrayNum = 0;
  (param_1->PropertyData).PropertyPath.Data.ArrayMax = 0;
  FMovieSceneChannel::FMovieSceneChannel(this_00,(FMovieSceneChannel *)&param_1->ActorReferenceData)
  ;
  this_00->_padding_ = (longlong)&___7FMovieSceneActorReferenceData__6B_;
  pTVar5 = pTVar8 + 1;
  (pTVar5->Data).Pad[0x18] = '\0';
  (pTVar5->Data).Pad[0x19] = '\0';
  (pTVar5->Data).Pad[0x1a] = '\0';
  (pTVar5->Data).Pad[0x1b] = '\0';
  (pTVar5->Data).Pad[0x1c] = '\0';
  (pTVar5->Data).Pad[0x1d] = '\0';
  (pTVar5->Data).Pad[0x1e] = '\0';
  (pTVar5->Data).Pad[0x1f] = '\0';
  *(FScriptContainerElement **)(pTVar8[1].Data.Pad + 0x18) =
       (param_1->ActorReferenceData).KeyTimes.AllocatorInstance.Data;
  (param_1->ActorReferenceData).KeyTimes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pTVar8[1].Data.Pad + 0x20) = (param_1->ActorReferenceData).KeyTimes.ArrayNum;
  *(int *)(pTVar8[1].Data.Pad + 0x24) = (param_1->ActorReferenceData).KeyTimes.ArrayMax;
  (param_1->ActorReferenceData).KeyTimes.ArrayNum = 0;
  (param_1->ActorReferenceData).KeyTimes.ArrayMax = 0;
  uVar3 = *(undefined8 *)&(param_1->ActorReferenceData).DefaultValue.Object.Guid.C;
  *(undefined8 *)(pTVar8[1].Data.Pad + 0x28) =
       *(undefined8 *)&(param_1->ActorReferenceData).DefaultValue.Object.Guid;
  *(undefined8 *)(pTVar8[1].Data.Pad + 0x30) = uVar3;
  FVar4 = (param_1->ActorReferenceData).DefaultValue.ComponentName;
  *(undefined8 *)(pTVar8[1].Data.Pad + 0x38) =
       *(undefined8 *)&(param_1->ActorReferenceData).DefaultValue.Object.SequenceID;
  *(FName *)(pTVar8[1].Data.Pad + 0x40) = FVar4;
  *(FName *)(pTVar8[1].Data.Pad + 0x48) = (param_1->ActorReferenceData).DefaultValue.SocketName;
  pTVar5 = pTVar8 + 1;
  (pTVar5->Data).Pad[0x50] = '\0';
  (pTVar5->Data).Pad[0x51] = '\0';
  (pTVar5->Data).Pad[0x52] = '\0';
  (pTVar5->Data).Pad[0x53] = '\0';
  (pTVar5->Data).Pad[0x54] = '\0';
  (pTVar5->Data).Pad[0x55] = '\0';
  (pTVar5->Data).Pad[0x56] = '\0';
  (pTVar5->Data).Pad[0x57] = '\0';
  *(FScriptContainerElement **)(pTVar8[1].Data.Pad + 0x50) =
       (param_1->ActorReferenceData).KeyValues.AllocatorInstance.Data;
  (param_1->ActorReferenceData).KeyValues.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pTVar8[1].Data.Pad + 0x58) = (param_1->ActorReferenceData).KeyValues.ArrayNum;
  *(int *)(pTVar8[1].Data.Pad + 0x5c) = (param_1->ActorReferenceData).KeyValues.ArrayMax;
  (param_1->ActorReferenceData).KeyValues.ArrayNum = 0;
  (param_1->ActorReferenceData).KeyValues.ArrayMax = 0;
  pTVar5 = pTVar8 + 1;
  (pTVar5->Data).Pad[0x60] = '\0';
  (pTVar5->Data).Pad[0x61] = '\0';
  (pTVar5->Data).Pad[0x62] = '\0';
  (pTVar5->Data).Pad[99] = '\0';
  (pTVar5->Data).Pad[100] = '\0';
  (pTVar5->Data).Pad[0x65] = '\0';
  (pTVar5->Data).Pad[0x66] = '\0';
  (pTVar5->Data).Pad[0x67] = '\0';
  pTVar5 = pTVar8 + 1;
  (pTVar5->Data).Pad[0x68] = '\0';
  (pTVar5->Data).Pad[0x69] = '\0';
  (pTVar5->Data).Pad[0x6a] = '\0';
  (pTVar5->Data).Pad[0x6b] = '\0';
  (pTVar5->Data).Pad[0x6c] = '\0';
  (pTVar5->Data).Pad[0x6d] = '\0';
  (pTVar5->Data).Pad[0x6e] = '\0';
  (pTVar5->Data).Pad[0x6f] = '\0';
  *(undefined8 *)&pTVar8[1].field_0x80 = 0;
  pTVar8[2].Data.Pad[0] = '\0';
  pTVar8[2].Data.Pad[1] = '\0';
  pTVar8[2].Data.Pad[2] = '\0';
  pTVar8[2].Data.Pad[3] = '\0';
  pTVar5 = pTVar8 + 2;
  (pTVar5->Data).Pad[4] = 0x80;
  (pTVar5->Data).Pad[5] = '\0';
  (pTVar5->Data).Pad[6] = '\0';
  (pTVar5->Data).Pad[7] = '\0';
  pTVar5 = pTVar8 + 2;
  (pTVar5->Data).Pad[8] = 0xff;
  (pTVar5->Data).Pad[9] = 0xff;
  (pTVar5->Data).Pad[10] = 0xff;
  (pTVar5->Data).Pad[0xb] = 0xff;
  pTVar5 = pTVar8 + 2;
  (pTVar5->Data).Pad[0xc] = '\0';
  (pTVar5->Data).Pad[0xd] = '\0';
  (pTVar5->Data).Pad[0xe] = '\0';
  (pTVar5->Data).Pad[0xf] = '\0';
  pTVar5 = pTVar8 + 2;
  (pTVar5->Data).Pad[0x10] = '\0';
  (pTVar5->Data).Pad[0x11] = '\0';
  (pTVar5->Data).Pad[0x12] = '\0';
  (pTVar5->Data).Pad[0x13] = '\0';
  (pTVar5->Data).Pad[0x14] = '\0';
  (pTVar5->Data).Pad[0x15] = '\0';
  (pTVar5->Data).Pad[0x16] = '\0';
  (pTVar5->Data).Pad[0x17] = '\0';
  pTVar5 = pTVar8 + 2;
  (pTVar5->Data).Pad[0x18] = '\0';
  (pTVar5->Data).Pad[0x19] = '\0';
  (pTVar5->Data).Pad[0x1a] = '\0';
  (pTVar5->Data).Pad[0x1b] = '\0';
  (pTVar5->Data).Pad[0x1c] = '\0';
  (pTVar5->Data).Pad[0x1d] = '\0';
  (pTVar5->Data).Pad[0x1e] = '\0';
  (pTVar5->Data).Pad[0x1f] = '\0';
  pTVar5 = pTVar8 + 2;
  (pTVar5->Data).Pad[0x30] = '\0';
  (pTVar5->Data).Pad[0x31] = '\0';
  (pTVar5->Data).Pad[0x32] = '\0';
  (pTVar5->Data).Pad[0x33] = '\0';
  (pTVar5->Data).Pad[0x34] = '\0';
  (pTVar5->Data).Pad[0x35] = '\0';
  (pTVar5->Data).Pad[0x36] = '\0';
  (pTVar5->Data).Pad[0x37] = '\0';
  pTVar5 = pTVar8 + 2;
  (pTVar5->Data).Pad[0x38] = '\0';
  (pTVar5->Data).Pad[0x39] = '\0';
  (pTVar5->Data).Pad[0x3a] = '\0';
  (pTVar5->Data).Pad[0x3b] = '\0';
  pTVar5 = pTVar8 + 2;
  (pTVar5->Data).Pad[0x3c] = 0x80;
  (pTVar5->Data).Pad[0x3d] = '\0';
  (pTVar5->Data).Pad[0x3e] = '\0';
  (pTVar5->Data).Pad[0x3f] = '\0';
  pTVar5 = pTVar8 + 2;
  (pTVar5->Data).Pad[0x40] = 0xff;
  (pTVar5->Data).Pad[0x41] = 0xff;
  (pTVar5->Data).Pad[0x42] = 0xff;
  (pTVar5->Data).Pad[0x43] = 0xff;
  pTVar5 = pTVar8 + 2;
  (pTVar5->Data).Pad[0x44] = '\0';
  (pTVar5->Data).Pad[0x45] = '\0';
  (pTVar5->Data).Pad[0x46] = '\0';
  (pTVar5->Data).Pad[0x47] = '\0';
  pTVar5 = pTVar8 + 2;
  (pTVar5->Data).Pad[0x50] = '\0';
  (pTVar5->Data).Pad[0x51] = '\0';
  (pTVar5->Data).Pad[0x52] = '\0';
  (pTVar5->Data).Pad[0x53] = '\0';
  (pTVar5->Data).Pad[0x54] = '\0';
  (pTVar5->Data).Pad[0x55] = '\0';
  (pTVar5->Data).Pad[0x56] = '\0';
  (pTVar5->Data).Pad[0x57] = '\0';
  pTVar8 = pTVar8 + 2;
  (pTVar8->Data).Pad[0x58] = '\0';
  (pTVar8->Data).Pad[0x59] = '\0';
  (pTVar8->Data).Pad[0x5a] = '\0';
  (pTVar8->Data).Pad[0x5b] = '\0';
  if (!this->bIsValid) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar8 = this;
  if (!this->bInline) {
    pTVar8 = *(TInlineValue<FMovieSceneEvalTemplate,128,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<FMovieSceneEvalTemplate,128,8> **)(this->Data).Pad;
  }
  if (pTVar8 != this) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// InitializeFrom<FMovieSceneBoolPropertySectionTemplate,FMovieSceneBoolPropertySectionTemplate> @ 14688dd10

void __thiscall
TInlineValue<FMovieSceneEvalTemplate,128,8>::
InitializeFrom<FMovieSceneBoolPropertySectionTemplate,FMovieSceneBoolPropertySectionTemplate>
          (TInlineValue<FMovieSceneEvalTemplate,128,8> *this,
          FMovieSceneBoolPropertySectionTemplate *param_1)

{
  undefined1 uVar1;
  code *pcVar2;
  TInlineValue<FMovieSceneEvalTemplate,128,8> *pTVar3;
  bool bVar4;
  TInlineValue<FMovieSceneEvalTemplate,128,8> *pTVar5;
  
  this->bInline = false;
  pTVar5 = FMemory::Malloc(0x158,8);
  this->bIsValid = true;
  *(TInlineValue<FMovieSceneEvalTemplate,128,8> **)(this->Data).Pad = pTVar5;
  if (this->bInline) {
    pTVar5 = this;
  }
  FMovieScenePropertySectionTemplate::FMovieScenePropertySectionTemplate
            ((FMovieScenePropertySectionTemplate *)pTVar5,
             (FMovieScenePropertySectionTemplate *)param_1);
  *(undefined ***)(pTVar5->Data).Pad = &___7FMovieSceneBoolPropertySectionTemplate__6B_;
  FMovieSceneChannel::FMovieSceneChannel
            ((FMovieSceneChannel *)((pTVar5->Data).Pad + 0x38),
             (FMovieSceneChannel *)&param_1->BoolCurve);
  *(undefined ***)((pTVar5->Data).Pad + 0x38) = &___7FMovieSceneBoolChannel__6B_;
  pTVar5[1].Data.Pad[0x18] = (param_1->BoolCurve).PreInfinityExtrap.Value;
  pTVar5[1].Data.Pad[0x19] = (param_1->BoolCurve).PostInfinityExtrap.Value;
  pTVar3 = pTVar5 + 1;
  (pTVar3->Data).Pad[0x20] = '\0';
  (pTVar3->Data).Pad[0x21] = '\0';
  (pTVar3->Data).Pad[0x22] = '\0';
  (pTVar3->Data).Pad[0x23] = '\0';
  (pTVar3->Data).Pad[0x24] = '\0';
  (pTVar3->Data).Pad[0x25] = '\0';
  (pTVar3->Data).Pad[0x26] = '\0';
  (pTVar3->Data).Pad[0x27] = '\0';
  *(FScriptContainerElement **)(pTVar5[1].Data.Pad + 0x20) =
       (param_1->BoolCurve).Times.AllocatorInstance.Data;
  (param_1->BoolCurve).Times.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pTVar5[1].Data.Pad + 0x28) = (param_1->BoolCurve).Times.ArrayNum;
  *(int *)(pTVar5[1].Data.Pad + 0x2c) = (param_1->BoolCurve).Times.ArrayMax;
  (param_1->BoolCurve).Times.ArrayNum = 0;
  (param_1->BoolCurve).Times.ArrayMax = 0;
  pTVar5[1].Data.Pad[0x30] = (param_1->BoolCurve).DefaultValue;
  bVar4 = (param_1->BoolCurve).bHasDefaultValue;
  pTVar3 = pTVar5 + 1;
  (pTVar3->Data).Pad[0x38] = '\0';
  (pTVar3->Data).Pad[0x39] = '\0';
  (pTVar3->Data).Pad[0x3a] = '\0';
  (pTVar3->Data).Pad[0x3b] = '\0';
  (pTVar3->Data).Pad[0x3c] = '\0';
  (pTVar3->Data).Pad[0x3d] = '\0';
  (pTVar3->Data).Pad[0x3e] = '\0';
  (pTVar3->Data).Pad[0x3f] = '\0';
  pTVar5[1].Data.Pad[0x31] = bVar4;
  *(FScriptContainerElement **)(pTVar5[1].Data.Pad + 0x38) =
       (param_1->BoolCurve).Values.AllocatorInstance.Data;
  (param_1->BoolCurve).Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pTVar5[1].Data.Pad + 0x40) = (param_1->BoolCurve).Values.ArrayNum;
  *(int *)(pTVar5[1].Data.Pad + 0x44) = (param_1->BoolCurve).Values.ArrayMax;
  (param_1->BoolCurve).Values.ArrayNum = 0;
  (param_1->BoolCurve).Values.ArrayMax = 0;
  pTVar3 = pTVar5 + 1;
  (pTVar3->Data).Pad[0x48] = '\0';
  (pTVar3->Data).Pad[0x49] = '\0';
  (pTVar3->Data).Pad[0x4a] = '\0';
  (pTVar3->Data).Pad[0x4b] = '\0';
  (pTVar3->Data).Pad[0x4c] = '\0';
  (pTVar3->Data).Pad[0x4d] = '\0';
  (pTVar3->Data).Pad[0x4e] = '\0';
  (pTVar3->Data).Pad[0x4f] = '\0';
  pTVar3 = pTVar5 + 1;
  (pTVar3->Data).Pad[0x50] = '\0';
  (pTVar3->Data).Pad[0x51] = '\0';
  (pTVar3->Data).Pad[0x52] = '\0';
  (pTVar3->Data).Pad[0x53] = '\0';
  (pTVar3->Data).Pad[0x54] = '\0';
  (pTVar3->Data).Pad[0x55] = '\0';
  (pTVar3->Data).Pad[0x56] = '\0';
  (pTVar3->Data).Pad[0x57] = '\0';
  pTVar3 = pTVar5 + 1;
  (pTVar3->Data).Pad[0x68] = '\0';
  (pTVar3->Data).Pad[0x69] = '\0';
  (pTVar3->Data).Pad[0x6a] = '\0';
  (pTVar3->Data).Pad[0x6b] = '\0';
  (pTVar3->Data).Pad[0x6c] = '\0';
  (pTVar3->Data).Pad[0x6d] = '\0';
  (pTVar3->Data).Pad[0x6e] = '\0';
  (pTVar3->Data).Pad[0x6f] = '\0';
  pTVar3 = pTVar5 + 1;
  (pTVar3->Data).Pad[0x70] = '\0';
  (pTVar3->Data).Pad[0x71] = '\0';
  (pTVar3->Data).Pad[0x72] = '\0';
  (pTVar3->Data).Pad[0x73] = '\0';
  pTVar3 = pTVar5 + 1;
  (pTVar3->Data).Pad[0x74] = 0x80;
  (pTVar3->Data).Pad[0x75] = '\0';
  (pTVar3->Data).Pad[0x76] = '\0';
  (pTVar3->Data).Pad[0x77] = '\0';
  pTVar3 = pTVar5 + 1;
  (pTVar3->Data).Pad[0x78] = 0xff;
  (pTVar3->Data).Pad[0x79] = 0xff;
  (pTVar3->Data).Pad[0x7a] = 0xff;
  (pTVar3->Data).Pad[0x7b] = 0xff;
  pTVar3 = pTVar5 + 1;
  (pTVar3->Data).Pad[0x7c] = '\0';
  (pTVar3->Data).Pad[0x7d] = '\0';
  (pTVar3->Data).Pad[0x7e] = '\0';
  (pTVar3->Data).Pad[0x7f] = '\0';
  *(undefined8 *)&pTVar5[1].field_0x80 = 0;
  pTVar5[2].Data.Pad[0] = '\0';
  pTVar5[2].Data.Pad[1] = '\0';
  pTVar5[2].Data.Pad[2] = '\0';
  pTVar5[2].Data.Pad[3] = '\0';
  pTVar5[2].Data.Pad[4] = '\0';
  pTVar5[2].Data.Pad[5] = '\0';
  pTVar5[2].Data.Pad[6] = '\0';
  pTVar5[2].Data.Pad[7] = '\0';
  pTVar3 = pTVar5 + 2;
  (pTVar3->Data).Pad[0x18] = '\0';
  (pTVar3->Data).Pad[0x19] = '\0';
  (pTVar3->Data).Pad[0x1a] = '\0';
  (pTVar3->Data).Pad[0x1b] = '\0';
  (pTVar3->Data).Pad[0x1c] = '\0';
  (pTVar3->Data).Pad[0x1d] = '\0';
  (pTVar3->Data).Pad[0x1e] = '\0';
  (pTVar3->Data).Pad[0x1f] = '\0';
  pTVar3 = pTVar5 + 2;
  (pTVar3->Data).Pad[0x20] = '\0';
  (pTVar3->Data).Pad[0x21] = '\0';
  (pTVar3->Data).Pad[0x22] = '\0';
  (pTVar3->Data).Pad[0x23] = '\0';
  pTVar3 = pTVar5 + 2;
  (pTVar3->Data).Pad[0x24] = 0x80;
  (pTVar3->Data).Pad[0x25] = '\0';
  (pTVar3->Data).Pad[0x26] = '\0';
  (pTVar3->Data).Pad[0x27] = '\0';
  pTVar3 = pTVar5 + 2;
  (pTVar3->Data).Pad[0x28] = 0xff;
  (pTVar3->Data).Pad[0x29] = 0xff;
  (pTVar3->Data).Pad[0x2a] = 0xff;
  (pTVar3->Data).Pad[0x2b] = 0xff;
  pTVar3 = pTVar5 + 2;
  (pTVar3->Data).Pad[0x2c] = '\0';
  (pTVar3->Data).Pad[0x2d] = '\0';
  (pTVar3->Data).Pad[0x2e] = '\0';
  (pTVar3->Data).Pad[0x2f] = '\0';
  pTVar3 = pTVar5 + 2;
  (pTVar3->Data).Pad[0x38] = '\0';
  (pTVar3->Data).Pad[0x39] = '\0';
  (pTVar3->Data).Pad[0x3a] = '\0';
  (pTVar3->Data).Pad[0x3b] = '\0';
  (pTVar3->Data).Pad[0x3c] = '\0';
  (pTVar3->Data).Pad[0x3d] = '\0';
  (pTVar3->Data).Pad[0x3e] = '\0';
  (pTVar3->Data).Pad[0x3f] = '\0';
  pTVar5 = pTVar5 + 2;
  (pTVar5->Data).Pad[0x40] = '\0';
  (pTVar5->Data).Pad[0x41] = '\0';
  (pTVar5->Data).Pad[0x42] = '\0';
  (pTVar5->Data).Pad[0x43] = '\0';
  if (!this->bIsValid) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar5 = this;
  if (!this->bInline) {
    pTVar5 = *(TInlineValue<FMovieSceneEvalTemplate,128,8> **)(this->Data).Pad;
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
      (*pcVar2)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<FMovieSceneEvalTemplate,128,8> **)(this->Data).Pad;
  }
  if (pTVar5 != this) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// InitializeFrom<FMovieSceneEventSectionTemplate,FMovieSceneEventSectionTemplate> @ 14688df60

void __thiscall
TInlineValue<FMovieSceneEvalTemplate,128,8>::
InitializeFrom<FMovieSceneEventSectionTemplate,FMovieSceneEventSectionTemplate>
          (TInlineValue<FMovieSceneEvalTemplate,128,8> *this,
          FMovieSceneEventSectionTemplate *param_1)

{
  undefined1 uVar1;
  code *pcVar2;
  TInlineValue<FMovieSceneEvalTemplate,128,8> *pTVar3;
  longlong lVar4;
  bool bVar5;
  TInlineValue<FMovieSceneEvalTemplate,128,8> *pTVar6;
  uint uVar7;
  
  this->bInline = false;
  pTVar6 = FMemory::Malloc(0x138,8);
  this->bIsValid = true;
  *(TInlineValue<FMovieSceneEvalTemplate,128,8> **)(this->Data).Pad = pTVar6;
  if (this->bInline) {
    pTVar6 = this;
  }
  *(undefined ***)(pTVar6->Data).Pad = &___7FMovieSceneEvalTemplateBase__6B_;
  lVar4 = param_1->_padding_;
  *(undefined ***)(pTVar6->Data).Pad = &___7FMovieSceneEvalTemplate__6B_;
  (pTVar6->Data).Pad[8] = (uchar)lVar4;
  (pTVar6->Data).Pad[0x10] = (uchar)param_1->_padding_;
  *(undefined8 *)((pTVar6->Data).Pad + 0x14) = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  *(undefined ***)(pTVar6->Data).Pad = &___7FMovieSceneEventSectionTemplate__6B_;
  FMovieSceneChannel::FMovieSceneChannel
            ((FMovieSceneChannel *)((pTVar6->Data).Pad + 0x20),
             (FMovieSceneChannel *)&param_1->EventData);
  *(undefined ***)((pTVar6->Data).Pad + 0x20) = &___7FMovieSceneEventSectionData__6B_;
  pTVar6[1].Data.Pad[0] = '\0';
  pTVar6[1].Data.Pad[1] = '\0';
  pTVar6[1].Data.Pad[2] = '\0';
  pTVar6[1].Data.Pad[3] = '\0';
  pTVar6[1].Data.Pad[4] = '\0';
  pTVar6[1].Data.Pad[5] = '\0';
  pTVar6[1].Data.Pad[6] = '\0';
  pTVar6[1].Data.Pad[7] = '\0';
  *(FScriptContainerElement **)pTVar6[1].Data.Pad =
       (param_1->EventData).Times.AllocatorInstance.Data;
  (param_1->EventData).Times.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pTVar6[1].Data.Pad + 8) = (param_1->EventData).Times.ArrayNum;
  *(int *)(pTVar6[1].Data.Pad + 0xc) = (param_1->EventData).Times.ArrayMax;
  (param_1->EventData).Times.ArrayNum = 0;
  (param_1->EventData).Times.ArrayMax = 0;
  pTVar3 = pTVar6 + 1;
  (pTVar3->Data).Pad[0x10] = '\0';
  (pTVar3->Data).Pad[0x11] = '\0';
  (pTVar3->Data).Pad[0x12] = '\0';
  (pTVar3->Data).Pad[0x13] = '\0';
  (pTVar3->Data).Pad[0x14] = '\0';
  (pTVar3->Data).Pad[0x15] = '\0';
  (pTVar3->Data).Pad[0x16] = '\0';
  (pTVar3->Data).Pad[0x17] = '\0';
  *(FScriptContainerElement **)(pTVar6[1].Data.Pad + 0x10) =
       (param_1->EventData).KeyValues.AllocatorInstance.Data;
  (param_1->EventData).KeyValues.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pTVar6[1].Data.Pad + 0x18) = (param_1->EventData).KeyValues.ArrayNum;
  *(int *)(pTVar6[1].Data.Pad + 0x1c) = (param_1->EventData).KeyValues.ArrayMax;
  (param_1->EventData).KeyValues.ArrayNum = 0;
  (param_1->EventData).KeyValues.ArrayMax = 0;
  pTVar3 = pTVar6 + 1;
  (pTVar3->Data).Pad[0x20] = '\0';
  (pTVar3->Data).Pad[0x21] = '\0';
  (pTVar3->Data).Pad[0x22] = '\0';
  (pTVar3->Data).Pad[0x23] = '\0';
  (pTVar3->Data).Pad[0x24] = '\0';
  (pTVar3->Data).Pad[0x25] = '\0';
  (pTVar3->Data).Pad[0x26] = '\0';
  (pTVar3->Data).Pad[0x27] = '\0';
  pTVar3 = pTVar6 + 1;
  (pTVar3->Data).Pad[0x28] = '\0';
  (pTVar3->Data).Pad[0x29] = '\0';
  (pTVar3->Data).Pad[0x2a] = '\0';
  (pTVar3->Data).Pad[0x2b] = '\0';
  (pTVar3->Data).Pad[0x2c] = '\0';
  (pTVar3->Data).Pad[0x2d] = '\0';
  (pTVar3->Data).Pad[0x2e] = '\0';
  (pTVar3->Data).Pad[0x2f] = '\0';
  pTVar3 = pTVar6 + 1;
  (pTVar3->Data).Pad[0x40] = '\0';
  (pTVar3->Data).Pad[0x41] = '\0';
  (pTVar3->Data).Pad[0x42] = '\0';
  (pTVar3->Data).Pad[0x43] = '\0';
  (pTVar3->Data).Pad[0x44] = '\0';
  (pTVar3->Data).Pad[0x45] = '\0';
  (pTVar3->Data).Pad[0x46] = '\0';
  (pTVar3->Data).Pad[0x47] = '\0';
  pTVar3 = pTVar6 + 1;
  (pTVar3->Data).Pad[0x48] = '\0';
  (pTVar3->Data).Pad[0x49] = '\0';
  (pTVar3->Data).Pad[0x4a] = '\0';
  (pTVar3->Data).Pad[0x4b] = '\0';
  pTVar3 = pTVar6 + 1;
  (pTVar3->Data).Pad[0x4c] = 0x80;
  (pTVar3->Data).Pad[0x4d] = '\0';
  (pTVar3->Data).Pad[0x4e] = '\0';
  (pTVar3->Data).Pad[0x4f] = '\0';
  pTVar3 = pTVar6 + 1;
  (pTVar3->Data).Pad[0x54] = '\0';
  (pTVar3->Data).Pad[0x55] = '\0';
  (pTVar3->Data).Pad[0x56] = '\0';
  (pTVar3->Data).Pad[0x57] = '\0';
  pTVar3 = pTVar6 + 1;
  (pTVar3->Data).Pad[0x50] = 0xff;
  (pTVar3->Data).Pad[0x51] = 0xff;
  (pTVar3->Data).Pad[0x52] = 0xff;
  (pTVar3->Data).Pad[0x53] = 0xff;
  pTVar3 = pTVar6 + 1;
  (pTVar3->Data).Pad[0x58] = '\0';
  (pTVar3->Data).Pad[0x59] = '\0';
  (pTVar3->Data).Pad[0x5a] = '\0';
  (pTVar3->Data).Pad[0x5b] = '\0';
  (pTVar3->Data).Pad[0x5c] = '\0';
  (pTVar3->Data).Pad[0x5d] = '\0';
  (pTVar3->Data).Pad[0x5e] = '\0';
  (pTVar3->Data).Pad[0x5f] = '\0';
  pTVar3 = pTVar6 + 1;
  (pTVar3->Data).Pad[0x60] = '\0';
  (pTVar3->Data).Pad[0x61] = '\0';
  (pTVar3->Data).Pad[0x62] = '\0';
  (pTVar3->Data).Pad[99] = '\0';
  (pTVar3->Data).Pad[100] = '\0';
  (pTVar3->Data).Pad[0x65] = '\0';
  (pTVar3->Data).Pad[0x66] = '\0';
  (pTVar3->Data).Pad[0x67] = '\0';
  pTVar3 = pTVar6 + 1;
  (pTVar3->Data).Pad[0x78] = '\0';
  (pTVar3->Data).Pad[0x79] = '\0';
  (pTVar3->Data).Pad[0x7a] = '\0';
  (pTVar3->Data).Pad[0x7b] = '\0';
  (pTVar3->Data).Pad[0x7c] = '\0';
  (pTVar3->Data).Pad[0x7d] = '\0';
  (pTVar3->Data).Pad[0x7e] = '\0';
  (pTVar3->Data).Pad[0x7f] = '\0';
  *(undefined4 *)&pTVar6[1].field_0x80 = 0;
  *(undefined4 *)&pTVar6[1].field_0x84 = 0x80;
  pTVar3 = pTVar6 + 2;
  (pTVar3->Data).Pad[4] = '\0';
  (pTVar3->Data).Pad[5] = '\0';
  (pTVar3->Data).Pad[6] = '\0';
  (pTVar3->Data).Pad[7] = '\0';
  pTVar6[2].Data.Pad[0] = 0xff;
  pTVar6[2].Data.Pad[1] = 0xff;
  pTVar6[2].Data.Pad[2] = 0xff;
  pTVar6[2].Data.Pad[3] = 0xff;
  pTVar3 = pTVar6 + 2;
  (pTVar3->Data).Pad[0x10] = '\0';
  (pTVar3->Data).Pad[0x11] = '\0';
  (pTVar3->Data).Pad[0x12] = '\0';
  (pTVar3->Data).Pad[0x13] = '\0';
  (pTVar3->Data).Pad[0x14] = '\0';
  (pTVar3->Data).Pad[0x15] = '\0';
  (pTVar3->Data).Pad[0x16] = '\0';
  (pTVar3->Data).Pad[0x17] = '\0';
  pTVar3 = pTVar6 + 2;
  (pTVar3->Data).Pad[0x18] = '\0';
  (pTVar3->Data).Pad[0x19] = '\0';
  (pTVar3->Data).Pad[0x1a] = '\0';
  (pTVar3->Data).Pad[0x1b] = '\0';
  uVar7 = *(uint *)(pTVar6[2].Data.Pad + 0x20);
  uVar7 = (uVar7 ^ param_1->bFireEventsWhenForwards) & 1 ^ uVar7;
  *(uint *)(pTVar6[2].Data.Pad + 0x20) = uVar7;
  *(uint *)(pTVar6[2].Data.Pad + 0x20) = (uVar7 ^ *(uint *)&param_1->field_0x130) & 2 ^ uVar7;
  if (!this->bIsValid) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar6 = this;
  if (!this->bInline) {
    pTVar6 = *(TInlineValue<FMovieSceneEvalTemplate,128,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<FMovieSceneEvalTemplate,128,8> **)(this->Data).Pad;
  }
  if (pTVar6 != this) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// InitializeFrom<FMovieSceneParticleParameterSectionTemplate,FMovieSceneParticleParameterSectionTemplate> @ 14688e1e0

void __thiscall
TInlineValue<FMovieSceneEvalTemplate,128,8>::
InitializeFrom<FMovieSceneParticleParameterSectionTemplate,FMovieSceneParticleParameterSectionTemplate>
          (TInlineValue<FMovieSceneEvalTemplate,128,8> *this,
          FMovieSceneParticleParameterSectionTemplate *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  bool bVar10;
  TInlineValue<FMovieSceneEvalTemplate,128,8> *pTVar11;
  
  this->bIsValid = true;
  this->bInline = true;
  *(undefined ***)(this->Data).Pad = &___7FMovieSceneEvalTemplateBase__6B_;
  (this->Data).Pad[8] = param_1->field_0x8;
  *(undefined ***)(this->Data).Pad = &___7FMovieSceneEvalTemplate__6B_;
  (this->Data).Pad[0x10] = param_1->field_0x10;
  uVar3 = param_1->field_0x15;
  uVar4 = param_1->field_0x16;
  uVar5 = param_1->field_0x17;
  uVar6 = param_1->field_0x18;
  uVar7 = param_1->field_0x19;
  uVar8 = param_1->field_0x1a;
  uVar9 = param_1->field_0x1b;
  (this->Data).Pad[0x14] = param_1->field_0x14;
  (this->Data).Pad[0x15] = uVar3;
  (this->Data).Pad[0x16] = uVar4;
  (this->Data).Pad[0x17] = uVar5;
  (this->Data).Pad[0x18] = uVar6;
  (this->Data).Pad[0x19] = uVar7;
  (this->Data).Pad[0x1a] = uVar8;
  (this->Data).Pad[0x1b] = uVar9;
  *(undefined ***)(this->Data).Pad = &___7FMovieSceneParameterSectionTemplate__6B_;
  (this->Data).Pad[0x20] = '\0';
  (this->Data).Pad[0x21] = '\0';
  (this->Data).Pad[0x22] = '\0';
  (this->Data).Pad[0x23] = '\0';
  (this->Data).Pad[0x24] = '\0';
  (this->Data).Pad[0x25] = '\0';
  (this->Data).Pad[0x26] = '\0';
  (this->Data).Pad[0x27] = '\0';
  uVar3 = param_1->field_0x21;
  uVar4 = param_1->field_0x22;
  uVar5 = param_1->field_0x23;
  uVar6 = param_1->field_0x24;
  uVar7 = param_1->field_0x25;
  uVar8 = param_1->field_0x26;
  uVar9 = param_1->field_0x27;
  (this->Data).Pad[0x20] = param_1->field_0x20;
  (this->Data).Pad[0x21] = uVar3;
  (this->Data).Pad[0x22] = uVar4;
  (this->Data).Pad[0x23] = uVar5;
  (this->Data).Pad[0x24] = uVar6;
  (this->Data).Pad[0x25] = uVar7;
  (this->Data).Pad[0x26] = uVar8;
  (this->Data).Pad[0x27] = uVar9;
  *(undefined8 *)&param_1->field_0x20 = 0;
  uVar3 = param_1->field_0x29;
  uVar4 = param_1->field_0x2a;
  uVar5 = param_1->field_0x2b;
  (this->Data).Pad[0x28] = param_1->field_0x28;
  (this->Data).Pad[0x29] = uVar3;
  (this->Data).Pad[0x2a] = uVar4;
  (this->Data).Pad[0x2b] = uVar5;
  uVar3 = param_1->field_0x2d;
  uVar4 = param_1->field_0x2e;
  uVar5 = param_1->field_0x2f;
  (this->Data).Pad[0x2c] = param_1->field_0x2c;
  (this->Data).Pad[0x2d] = uVar3;
  (this->Data).Pad[0x2e] = uVar4;
  (this->Data).Pad[0x2f] = uVar5;
  *(undefined8 *)&param_1->field_0x28 = 0;
  (this->Data).Pad[0x30] = '\0';
  (this->Data).Pad[0x31] = '\0';
  (this->Data).Pad[0x32] = '\0';
  (this->Data).Pad[0x33] = '\0';
  (this->Data).Pad[0x34] = '\0';
  (this->Data).Pad[0x35] = '\0';
  (this->Data).Pad[0x36] = '\0';
  (this->Data).Pad[0x37] = '\0';
  uVar3 = param_1->field_0x31;
  uVar4 = param_1->field_0x32;
  uVar5 = param_1->field_0x33;
  uVar6 = param_1->field_0x34;
  uVar7 = param_1->field_0x35;
  uVar8 = param_1->field_0x36;
  uVar9 = param_1->field_0x37;
  (this->Data).Pad[0x30] = param_1->field_0x30;
  (this->Data).Pad[0x31] = uVar3;
  (this->Data).Pad[0x32] = uVar4;
  (this->Data).Pad[0x33] = uVar5;
  (this->Data).Pad[0x34] = uVar6;
  (this->Data).Pad[0x35] = uVar7;
  (this->Data).Pad[0x36] = uVar8;
  (this->Data).Pad[0x37] = uVar9;
  *(undefined8 *)&param_1->field_0x30 = 0;
  uVar3 = param_1->field_0x39;
  uVar4 = param_1->field_0x3a;
  uVar5 = param_1->field_0x3b;
  (this->Data).Pad[0x38] = param_1->field_0x38;
  (this->Data).Pad[0x39] = uVar3;
  (this->Data).Pad[0x3a] = uVar4;
  (this->Data).Pad[0x3b] = uVar5;
  uVar3 = param_1->field_0x3d;
  uVar4 = param_1->field_0x3e;
  uVar5 = param_1->field_0x3f;
  (this->Data).Pad[0x3c] = param_1->field_0x3c;
  (this->Data).Pad[0x3d] = uVar3;
  (this->Data).Pad[0x3e] = uVar4;
  (this->Data).Pad[0x3f] = uVar5;
  *(undefined8 *)&param_1->field_0x38 = 0;
  (this->Data).Pad[0x40] = '\0';
  (this->Data).Pad[0x41] = '\0';
  (this->Data).Pad[0x42] = '\0';
  (this->Data).Pad[0x43] = '\0';
  (this->Data).Pad[0x44] = '\0';
  (this->Data).Pad[0x45] = '\0';
  (this->Data).Pad[0x46] = '\0';
  (this->Data).Pad[0x47] = '\0';
  uVar3 = param_1->field_0x41;
  uVar4 = param_1->field_0x42;
  uVar5 = param_1->field_0x43;
  uVar6 = param_1->field_0x44;
  uVar7 = param_1->field_0x45;
  uVar8 = param_1->field_0x46;
  uVar9 = param_1->field_0x47;
  (this->Data).Pad[0x40] = param_1->field_0x40;
  (this->Data).Pad[0x41] = uVar3;
  (this->Data).Pad[0x42] = uVar4;
  (this->Data).Pad[0x43] = uVar5;
  (this->Data).Pad[0x44] = uVar6;
  (this->Data).Pad[0x45] = uVar7;
  (this->Data).Pad[0x46] = uVar8;
  (this->Data).Pad[0x47] = uVar9;
  *(undefined8 *)&param_1->field_0x40 = 0;
  uVar3 = param_1->field_0x49;
  uVar4 = param_1->field_0x4a;
  uVar5 = param_1->field_0x4b;
  (this->Data).Pad[0x48] = param_1->field_0x48;
  (this->Data).Pad[0x49] = uVar3;
  (this->Data).Pad[0x4a] = uVar4;
  (this->Data).Pad[0x4b] = uVar5;
  uVar3 = param_1->field_0x4d;
  uVar4 = param_1->field_0x4e;
  uVar5 = param_1->field_0x4f;
  (this->Data).Pad[0x4c] = param_1->field_0x4c;
  (this->Data).Pad[0x4d] = uVar3;
  (this->Data).Pad[0x4e] = uVar4;
  (this->Data).Pad[0x4f] = uVar5;
  *(undefined8 *)&param_1->field_0x48 = 0;
  (this->Data).Pad[0x50] = '\0';
  (this->Data).Pad[0x51] = '\0';
  (this->Data).Pad[0x52] = '\0';
  (this->Data).Pad[0x53] = '\0';
  (this->Data).Pad[0x54] = '\0';
  (this->Data).Pad[0x55] = '\0';
  (this->Data).Pad[0x56] = '\0';
  (this->Data).Pad[0x57] = '\0';
  uVar3 = param_1->field_0x51;
  uVar4 = param_1->field_0x52;
  uVar5 = param_1->field_0x53;
  uVar6 = param_1->field_0x54;
  uVar7 = param_1->field_0x55;
  uVar8 = param_1->field_0x56;
  uVar9 = param_1->field_0x57;
  (this->Data).Pad[0x50] = param_1->field_0x50;
  (this->Data).Pad[0x51] = uVar3;
  (this->Data).Pad[0x52] = uVar4;
  (this->Data).Pad[0x53] = uVar5;
  (this->Data).Pad[0x54] = uVar6;
  (this->Data).Pad[0x55] = uVar7;
  (this->Data).Pad[0x56] = uVar8;
  (this->Data).Pad[0x57] = uVar9;
  *(undefined8 *)&param_1->field_0x50 = 0;
  uVar3 = param_1->field_0x59;
  uVar4 = param_1->field_0x5a;
  uVar5 = param_1->field_0x5b;
  (this->Data).Pad[0x58] = param_1->field_0x58;
  (this->Data).Pad[0x59] = uVar3;
  (this->Data).Pad[0x5a] = uVar4;
  (this->Data).Pad[0x5b] = uVar5;
  uVar3 = param_1->field_0x5d;
  uVar4 = param_1->field_0x5e;
  uVar5 = param_1->field_0x5f;
  (this->Data).Pad[0x5c] = param_1->field_0x5c;
  (this->Data).Pad[0x5d] = uVar3;
  (this->Data).Pad[0x5e] = uVar4;
  (this->Data).Pad[0x5f] = uVar5;
  *(undefined8 *)&param_1->field_0x58 = 0;
  (this->Data).Pad[0x60] = '\0';
  (this->Data).Pad[0x61] = '\0';
  (this->Data).Pad[0x62] = '\0';
  (this->Data).Pad[99] = '\0';
  (this->Data).Pad[100] = '\0';
  (this->Data).Pad[0x65] = '\0';
  (this->Data).Pad[0x66] = '\0';
  (this->Data).Pad[0x67] = '\0';
  uVar3 = param_1->field_0x61;
  uVar4 = param_1->field_0x62;
  uVar5 = param_1->field_0x63;
  uVar6 = param_1->field_0x64;
  uVar7 = param_1->field_0x65;
  uVar8 = param_1->field_0x66;
  uVar9 = param_1->field_0x67;
  (this->Data).Pad[0x60] = param_1->field_0x60;
  (this->Data).Pad[0x61] = uVar3;
  (this->Data).Pad[0x62] = uVar4;
  (this->Data).Pad[99] = uVar5;
  (this->Data).Pad[100] = uVar6;
  (this->Data).Pad[0x65] = uVar7;
  (this->Data).Pad[0x66] = uVar8;
  (this->Data).Pad[0x67] = uVar9;
  *(undefined8 *)&param_1->field_0x60 = 0;
  uVar3 = param_1->field_0x69;
  uVar4 = param_1->field_0x6a;
  uVar5 = param_1->field_0x6b;
  (this->Data).Pad[0x68] = param_1->field_0x68;
  (this->Data).Pad[0x69] = uVar3;
  (this->Data).Pad[0x6a] = uVar4;
  (this->Data).Pad[0x6b] = uVar5;
  uVar3 = param_1->field_0x6d;
  uVar4 = param_1->field_0x6e;
  uVar5 = param_1->field_0x6f;
  (this->Data).Pad[0x6c] = param_1->field_0x6c;
  (this->Data).Pad[0x6d] = uVar3;
  (this->Data).Pad[0x6e] = uVar4;
  (this->Data).Pad[0x6f] = uVar5;
  *(undefined8 *)&param_1->field_0x68 = 0;
  (this->Data).Pad[0x70] = '\0';
  (this->Data).Pad[0x71] = '\0';
  (this->Data).Pad[0x72] = '\0';
  (this->Data).Pad[0x73] = '\0';
  (this->Data).Pad[0x74] = '\0';
  (this->Data).Pad[0x75] = '\0';
  (this->Data).Pad[0x76] = '\0';
  (this->Data).Pad[0x77] = '\0';
  uVar3 = param_1->field_0x71;
  uVar4 = param_1->field_0x72;
  uVar5 = param_1->field_0x73;
  uVar6 = param_1->field_0x74;
  uVar7 = param_1->field_0x75;
  uVar8 = param_1->field_0x76;
  uVar9 = param_1->field_0x77;
  (this->Data).Pad[0x70] = param_1->field_0x70;
  (this->Data).Pad[0x71] = uVar3;
  (this->Data).Pad[0x72] = uVar4;
  (this->Data).Pad[0x73] = uVar5;
  (this->Data).Pad[0x74] = uVar6;
  (this->Data).Pad[0x75] = uVar7;
  (this->Data).Pad[0x76] = uVar8;
  (this->Data).Pad[0x77] = uVar9;
  *(undefined8 *)&param_1->field_0x70 = 0;
  uVar3 = param_1->field_0x79;
  uVar4 = param_1->field_0x7a;
  uVar5 = param_1->field_0x7b;
  (this->Data).Pad[0x78] = param_1->field_0x78;
  (this->Data).Pad[0x79] = uVar3;
  (this->Data).Pad[0x7a] = uVar4;
  (this->Data).Pad[0x7b] = uVar5;
  uVar3 = param_1->field_0x7d;
  uVar4 = param_1->field_0x7e;
  uVar5 = param_1->field_0x7f;
  (this->Data).Pad[0x7c] = param_1->field_0x7c;
  (this->Data).Pad[0x7d] = uVar3;
  (this->Data).Pad[0x7e] = uVar4;
  (this->Data).Pad[0x7f] = uVar5;
  *(undefined8 *)&param_1->field_0x78 = 0;
  *(undefined ***)(this->Data).Pad = &___7FMovieSceneParticleParameterSectionTemplate__6B_;
  if (!this->bIsValid) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar10) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar11 = this;
  if (!this->bInline) {
    pTVar11 = *(TInlineValue<FMovieSceneEvalTemplate,128,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar10) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<FMovieSceneEvalTemplate,128,8> **)(this->Data).Pad;
  }
  if (pTVar11 != this) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar10) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// InitializeFrom<FMovieSceneParticleSectionTemplate,FMovieSceneParticleSectionTemplate> @ 14688e3b0

void __thiscall
TInlineValue<FMovieSceneEvalTemplate,128,8>::
InitializeFrom<FMovieSceneParticleSectionTemplate,FMovieSceneParticleSectionTemplate>
          (TInlineValue<FMovieSceneEvalTemplate,128,8> *this,
          FMovieSceneParticleSectionTemplate *param_1)

{
  FMovieSceneChannel *this_00;
  undefined1 uVar1;
  uchar uVar2;
  UObject *pUVar3;
  code *pcVar4;
  TInlineValue<FMovieSceneEvalTemplate,128,8> *pTVar5;
  longlong lVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  bool bVar13;
  TInlineValue<FMovieSceneEvalTemplate,128,8> *pTVar14;
  
  this->bInline = false;
  pTVar14 = FMemory::Malloc(0x148,8);
  this->bIsValid = true;
  *(TInlineValue<FMovieSceneEvalTemplate,128,8> **)(this->Data).Pad = pTVar14;
  if (this->bInline) {
    pTVar14 = this;
  }
  *(undefined ***)(pTVar14->Data).Pad = &___7FMovieSceneEvalTemplateBase__6B_;
  this_00 = (FMovieSceneChannel *)((pTVar14->Data).Pad + 0x20);
  lVar6 = param_1->_padding_;
  *(undefined ***)(pTVar14->Data).Pad = &___7FMovieSceneEvalTemplate__6B_;
  (pTVar14->Data).Pad[8] = (uchar)lVar6;
  (pTVar14->Data).Pad[0x10] = (uchar)param_1->_padding_;
  *(undefined8 *)((pTVar14->Data).Pad + 0x14) = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  *(undefined ***)(pTVar14->Data).Pad = &___7FMovieSceneParticleSectionTemplate__6B_;
  FMovieSceneChannel::FMovieSceneChannel(this_00,(FMovieSceneChannel *)&param_1->ParticleKeys);
  this_00->_padding_ = (longlong)&___7FMovieSceneByteChannel__6B_;
  pTVar14[1].Data.Pad[0] = (param_1->ParticleKeys).field_0x68;
  pTVar14[1].Data.Pad[1] = (param_1->ParticleKeys).field_0x69;
  pTVar5 = pTVar14 + 1;
  (pTVar5->Data).Pad[8] = '\0';
  (pTVar5->Data).Pad[9] = '\0';
  (pTVar5->Data).Pad[10] = '\0';
  (pTVar5->Data).Pad[0xb] = '\0';
  (pTVar5->Data).Pad[0xc] = '\0';
  (pTVar5->Data).Pad[0xd] = '\0';
  (pTVar5->Data).Pad[0xe] = '\0';
  (pTVar5->Data).Pad[0xf] = '\0';
  uVar1 = (param_1->ParticleKeys).field_0x71;
  uVar7 = (param_1->ParticleKeys).field_0x72;
  uVar8 = (param_1->ParticleKeys).field_0x73;
  uVar9 = (param_1->ParticleKeys).field_0x74;
  uVar10 = (param_1->ParticleKeys).field_0x75;
  uVar11 = (param_1->ParticleKeys).field_0x76;
  uVar12 = (param_1->ParticleKeys).field_0x77;
  pTVar5 = pTVar14 + 1;
  (pTVar5->Data).Pad[8] = (param_1->ParticleKeys).field_0x70;
  (pTVar5->Data).Pad[9] = uVar1;
  (pTVar5->Data).Pad[10] = uVar7;
  (pTVar5->Data).Pad[0xb] = uVar8;
  (pTVar5->Data).Pad[0xc] = uVar9;
  (pTVar5->Data).Pad[0xd] = uVar10;
  (pTVar5->Data).Pad[0xe] = uVar11;
  (pTVar5->Data).Pad[0xf] = uVar12;
  *(undefined8 *)&(param_1->ParticleKeys).field_0x70 = 0;
  uVar1 = (param_1->ParticleKeys).field_0x79;
  uVar7 = (param_1->ParticleKeys).field_0x7a;
  uVar8 = (param_1->ParticleKeys).field_0x7b;
  pTVar5 = pTVar14 + 1;
  (pTVar5->Data).Pad[0x10] = (param_1->ParticleKeys).field_0x78;
  (pTVar5->Data).Pad[0x11] = uVar1;
  (pTVar5->Data).Pad[0x12] = uVar7;
  (pTVar5->Data).Pad[0x13] = uVar8;
  uVar1 = (param_1->ParticleKeys).field_0x7d;
  uVar7 = (param_1->ParticleKeys).field_0x7e;
  uVar8 = (param_1->ParticleKeys).field_0x7f;
  pTVar5 = pTVar14 + 1;
  (pTVar5->Data).Pad[0x14] = (param_1->ParticleKeys).field_0x7c;
  (pTVar5->Data).Pad[0x15] = uVar1;
  (pTVar5->Data).Pad[0x16] = uVar7;
  (pTVar5->Data).Pad[0x17] = uVar8;
  *(undefined8 *)&(param_1->ParticleKeys).field_0x78 = 0;
  pTVar14[1].Data.Pad[0x18] = (param_1->ParticleKeys).field_0x80;
  uVar2 = (param_1->ParticleKeys).field_0x81;
  pTVar5 = pTVar14 + 1;
  (pTVar5->Data).Pad[0x20] = '\0';
  (pTVar5->Data).Pad[0x21] = '\0';
  (pTVar5->Data).Pad[0x22] = '\0';
  (pTVar5->Data).Pad[0x23] = '\0';
  (pTVar5->Data).Pad[0x24] = '\0';
  (pTVar5->Data).Pad[0x25] = '\0';
  (pTVar5->Data).Pad[0x26] = '\0';
  (pTVar5->Data).Pad[0x27] = '\0';
  pTVar14[1].Data.Pad[0x19] = uVar2;
  uVar1 = (param_1->ParticleKeys).field_0x89;
  uVar7 = (param_1->ParticleKeys).field_0x8a;
  uVar8 = (param_1->ParticleKeys).field_0x8b;
  uVar9 = (param_1->ParticleKeys).field_0x8c;
  uVar10 = (param_1->ParticleKeys).field_0x8d;
  uVar11 = (param_1->ParticleKeys).field_0x8e;
  uVar12 = (param_1->ParticleKeys).field_0x8f;
  pTVar5 = pTVar14 + 1;
  (pTVar5->Data).Pad[0x20] = (param_1->ParticleKeys).field_0x88;
  (pTVar5->Data).Pad[0x21] = uVar1;
  (pTVar5->Data).Pad[0x22] = uVar7;
  (pTVar5->Data).Pad[0x23] = uVar8;
  (pTVar5->Data).Pad[0x24] = uVar9;
  (pTVar5->Data).Pad[0x25] = uVar10;
  (pTVar5->Data).Pad[0x26] = uVar11;
  (pTVar5->Data).Pad[0x27] = uVar12;
  *(undefined8 *)&(param_1->ParticleKeys).field_0x88 = 0;
  uVar1 = (param_1->ParticleKeys).field_0x91;
  uVar7 = (param_1->ParticleKeys).field_0x92;
  uVar8 = (param_1->ParticleKeys).field_0x93;
  pTVar5 = pTVar14 + 1;
  (pTVar5->Data).Pad[0x28] = (param_1->ParticleKeys).field_0x90;
  (pTVar5->Data).Pad[0x29] = uVar1;
  (pTVar5->Data).Pad[0x2a] = uVar7;
  (pTVar5->Data).Pad[0x2b] = uVar8;
  uVar1 = (param_1->ParticleKeys).field_0x95;
  uVar7 = (param_1->ParticleKeys).field_0x96;
  uVar8 = (param_1->ParticleKeys).field_0x97;
  pTVar5 = pTVar14 + 1;
  (pTVar5->Data).Pad[0x2c] = (param_1->ParticleKeys).field_0x94;
  (pTVar5->Data).Pad[0x2d] = uVar1;
  (pTVar5->Data).Pad[0x2e] = uVar7;
  (pTVar5->Data).Pad[0x2f] = uVar8;
  *(undefined8 *)&(param_1->ParticleKeys).field_0x90 = 0;
  pUVar3 = *(UObject **)&(param_1->ParticleKeys).field_0x98;
  *(UObject **)(pTVar14[1].Data.Pad + 0x30) = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  pTVar5 = pTVar14 + 1;
  (pTVar5->Data).Pad[0x38] = '\0';
  (pTVar5->Data).Pad[0x39] = '\0';
  (pTVar5->Data).Pad[0x3a] = '\0';
  (pTVar5->Data).Pad[0x3b] = '\0';
  (pTVar5->Data).Pad[0x3c] = '\0';
  (pTVar5->Data).Pad[0x3d] = '\0';
  (pTVar5->Data).Pad[0x3e] = '\0';
  (pTVar5->Data).Pad[0x3f] = '\0';
  pTVar5 = pTVar14 + 1;
  (pTVar5->Data).Pad[0x40] = '\0';
  (pTVar5->Data).Pad[0x41] = '\0';
  (pTVar5->Data).Pad[0x42] = '\0';
  (pTVar5->Data).Pad[0x43] = '\0';
  (pTVar5->Data).Pad[0x44] = '\0';
  (pTVar5->Data).Pad[0x45] = '\0';
  (pTVar5->Data).Pad[0x46] = '\0';
  (pTVar5->Data).Pad[0x47] = '\0';
  pTVar5 = pTVar14 + 1;
  (pTVar5->Data).Pad[0x58] = '\0';
  (pTVar5->Data).Pad[0x59] = '\0';
  (pTVar5->Data).Pad[0x5a] = '\0';
  (pTVar5->Data).Pad[0x5b] = '\0';
  (pTVar5->Data).Pad[0x5c] = '\0';
  (pTVar5->Data).Pad[0x5d] = '\0';
  (pTVar5->Data).Pad[0x5e] = '\0';
  (pTVar5->Data).Pad[0x5f] = '\0';
  pTVar5 = pTVar14 + 1;
  (pTVar5->Data).Pad[0x60] = '\0';
  (pTVar5->Data).Pad[0x61] = '\0';
  (pTVar5->Data).Pad[0x62] = '\0';
  (pTVar5->Data).Pad[99] = '\0';
  pTVar5 = pTVar14 + 1;
  (pTVar5->Data).Pad[100] = 0x80;
  (pTVar5->Data).Pad[0x65] = '\0';
  (pTVar5->Data).Pad[0x66] = '\0';
  (pTVar5->Data).Pad[0x67] = '\0';
  pTVar5 = pTVar14 + 1;
  (pTVar5->Data).Pad[0x68] = 0xff;
  (pTVar5->Data).Pad[0x69] = 0xff;
  (pTVar5->Data).Pad[0x6a] = 0xff;
  (pTVar5->Data).Pad[0x6b] = 0xff;
  pTVar5 = pTVar14 + 1;
  (pTVar5->Data).Pad[0x6c] = '\0';
  (pTVar5->Data).Pad[0x6d] = '\0';
  (pTVar5->Data).Pad[0x6e] = '\0';
  (pTVar5->Data).Pad[0x6f] = '\0';
  pTVar5 = pTVar14 + 1;
  (pTVar5->Data).Pad[0x70] = '\0';
  (pTVar5->Data).Pad[0x71] = '\0';
  (pTVar5->Data).Pad[0x72] = '\0';
  (pTVar5->Data).Pad[0x73] = '\0';
  (pTVar5->Data).Pad[0x74] = '\0';
  (pTVar5->Data).Pad[0x75] = '\0';
  (pTVar5->Data).Pad[0x76] = '\0';
  (pTVar5->Data).Pad[0x77] = '\0';
  pTVar5 = pTVar14 + 1;
  (pTVar5->Data).Pad[0x78] = '\0';
  (pTVar5->Data).Pad[0x79] = '\0';
  (pTVar5->Data).Pad[0x7a] = '\0';
  (pTVar5->Data).Pad[0x7b] = '\0';
  (pTVar5->Data).Pad[0x7c] = '\0';
  (pTVar5->Data).Pad[0x7d] = '\0';
  (pTVar5->Data).Pad[0x7e] = '\0';
  (pTVar5->Data).Pad[0x7f] = '\0';
  pTVar5 = pTVar14 + 2;
  (pTVar5->Data).Pad[8] = '\0';
  (pTVar5->Data).Pad[9] = '\0';
  (pTVar5->Data).Pad[10] = '\0';
  (pTVar5->Data).Pad[0xb] = '\0';
  (pTVar5->Data).Pad[0xc] = '\0';
  (pTVar5->Data).Pad[0xd] = '\0';
  (pTVar5->Data).Pad[0xe] = '\0';
  (pTVar5->Data).Pad[0xf] = '\0';
  pTVar5 = pTVar14 + 2;
  (pTVar5->Data).Pad[0x10] = '\0';
  (pTVar5->Data).Pad[0x11] = '\0';
  (pTVar5->Data).Pad[0x12] = '\0';
  (pTVar5->Data).Pad[0x13] = '\0';
  pTVar5 = pTVar14 + 2;
  (pTVar5->Data).Pad[0x14] = 0x80;
  (pTVar5->Data).Pad[0x15] = '\0';
  (pTVar5->Data).Pad[0x16] = '\0';
  (pTVar5->Data).Pad[0x17] = '\0';
  pTVar5 = pTVar14 + 2;
  (pTVar5->Data).Pad[0x18] = 0xff;
  (pTVar5->Data).Pad[0x19] = 0xff;
  (pTVar5->Data).Pad[0x1a] = 0xff;
  (pTVar5->Data).Pad[0x1b] = 0xff;
  pTVar5 = pTVar14 + 2;
  (pTVar5->Data).Pad[0x1c] = '\0';
  (pTVar5->Data).Pad[0x1d] = '\0';
  (pTVar5->Data).Pad[0x1e] = '\0';
  (pTVar5->Data).Pad[0x1f] = '\0';
  pTVar5 = pTVar14 + 2;
  (pTVar5->Data).Pad[0x28] = '\0';
  (pTVar5->Data).Pad[0x29] = '\0';
  (pTVar5->Data).Pad[0x2a] = '\0';
  (pTVar5->Data).Pad[0x2b] = '\0';
  (pTVar5->Data).Pad[0x2c] = '\0';
  (pTVar5->Data).Pad[0x2d] = '\0';
  (pTVar5->Data).Pad[0x2e] = '\0';
  (pTVar5->Data).Pad[0x2f] = '\0';
  pTVar14 = pTVar14 + 2;
  (pTVar14->Data).Pad[0x30] = '\0';
  (pTVar14->Data).Pad[0x31] = '\0';
  (pTVar14->Data).Pad[0x32] = '\0';
  (pTVar14->Data).Pad[0x33] = '\0';
  this_00->_padding_ = (longlong)&___7FMovieSceneParticleChannel__6B_;
  if (!this->bIsValid) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar14 = this;
  if (!this->bInline) {
    pTVar14 = *(TInlineValue<FMovieSceneEvalTemplate,128,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<FMovieSceneEvalTemplate,128,8> **)(this->Data).Pad;
  }
  if (pTVar14 != this) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

