// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 18

// TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FControlRigSourceData>,void> @ 14a3848d0

TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> * __thiscall
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FControlRigSourceData>,void>
          (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *this,
          TDuplicateChildEntityInitializer<UE::MovieScene::FControlRigSourceData> *param_1)

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
       ___7__TDuplicateChildEntityInitializer_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__6B_
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

// TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8><FMovieSceneAccumulatedBlendState::TTokenEntry<FControlRigTrackTokenFloat>,void> @ 14a3849c0

TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8> * __thiscall
TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8>::
TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8><FMovieSceneAccumulatedBlendState::TTokenEntry<FControlRigTrackTokenFloat>,void>
          (TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8> *this,
          TTokenEntry<FControlRigTrackTokenFloat> *param_1)

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
  *(undefined ***)(this->Data).Pad =
       &___7__TTokenEntry_UFControlRigTrackTokenFloat___FMovieSceneAccumulatedBlendState__6B_;
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

// TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8><FMovieSceneAccumulatedBlendState::TTokenEntry<FControlRigTrackTokenTransform>,void> @ 14a384b00

TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8> * __thiscall
TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8>::
TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8><FMovieSceneAccumulatedBlendState::TTokenEntry<FControlRigTrackTokenTransform>,void>
          (TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8> *this,
          TTokenEntry<FControlRigTrackTokenTransform> *param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  code *pcVar3;
  bool bVar4;
  TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8> *pTVar5;
  TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8> *pTVar6;
  
  this->bIsValid = false;
  this->bInline = false;
  pTVar5 = FMemory::Malloc(0x88,8);
  this->bIsValid = true;
  *(TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8> **)(this->Data).Pad = pTVar5;
  if (this->bInline) {
    pTVar5 = this;
  }
  *(undefined ***)(pTVar5->Data).Pad = &___7FTokenEntry_FMovieSceneAccumulatedBlendState__6B_;
  *(longlong *)((pTVar5->Data).Pad + 8) = param_1->_padding_;
  *(longlong *)((pTVar5->Data).Pad + 0x10) = param_1->_padding_;
  *(undefined ***)(pTVar5->Data).Pad =
       &___7__TTokenEntry_UFControlRigTrackTokenTransform___FMovieSceneAccumulatedBlendState__6B_;
  TBlendableToken<FControlRigTrackTokenTransform>::TBlendableToken<FControlRigTrackTokenTransform>
            ((TBlendableToken<FControlRigTrackTokenTransform> *)((pTVar5->Data).Pad + 0x18),
             &param_1->Token);
  if (!this->bIsValid) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pTVar5 = this;
  if (!this->bInline) {
    pTVar5 = *(TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8> **)(this->Data).Pad
    ;
  }
  if (!this->bIsValid) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pTVar6 = this;
  if (!this->bInline) {
    pTVar6 = *(TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8> **)(this->Data).Pad
    ;
  }
  if (pTVar5 != pTVar6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8> *)(*pcVar3)();
      return pTVar5;
    }
  }
  return this;
}

// TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8><FMovieSceneAccumulatedBlendState::TTokenEntry<FControlRigTrackTokenVector2D>,void> @ 14a384c30

TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8> * __thiscall
TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8>::
TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8><FMovieSceneAccumulatedBlendState::TTokenEntry<FControlRigTrackTokenVector2D>,void>
          (TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8> *this,
          TTokenEntry<FControlRigTrackTokenVector2D> *param_1)

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
  *(undefined ***)(this->Data).Pad =
       &___7__TTokenEntry_UFControlRigTrackTokenVector2D___FMovieSceneAccumulatedBlendState__6B_;
  bVar5 = (this->Data).Pad[0x28] & 0xfe;
  (this->Data).Pad[0x28] = bVar5 | 2;
  if ((param_1->Token).Value.bIsValid) {
    (this->Data).Pad[0x28] = bVar5 | 3;
    (param_1->Token).Value.bIsValid = false;
    puVar1 = (this->Data).Pad + 0x28;
    *puVar1 = *puVar1 ^ ((param_1->Token).Value.field_0x10 ^ (this->Data).Pad[0x28]) & 2;
    uVar4 = *(undefined8 *)((param_1->Token).Value.Data.Pad + 8);
    *(undefined8 *)((this->Data).Pad + 0x18) = *(undefined8 *)(param_1->Token).Value.Data.Pad;
    *(undefined8 *)((this->Data).Pad + 0x20) = uVar4;
  }
  uVar4 = *(undefined8 *)&(param_1->Token).AnimatingScope.Key.SectionIndex;
  *(undefined8 *)((this->Data).Pad + 0x30) = *(undefined8 *)&(param_1->Token).AnimatingScope.Key;
  *(undefined8 *)((this->Data).Pad + 0x38) = uVar4;
  *(int *)((this->Data).Pad + 0x40) = (param_1->Token).HierarchicalBias;
  *(float *)((this->Data).Pad + 0x44) = (param_1->Token).Weight;
  (this->Data).Pad[0x48] = (param_1->Token).BlendType;
  *(int *)((this->Data).Pad + 0x4c) = (param_1->Token).BlendingOrder;
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

// TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8><FMovieSceneAccumulatedBlendState::TTokenEntry<FControlRigTrackTokenVector>,void> @ 14a384d70

TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8> * __thiscall
TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8>::
TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8><FMovieSceneAccumulatedBlendState::TTokenEntry<FControlRigTrackTokenVector>,void>
          (TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8> *this,
          TTokenEntry<FControlRigTrackTokenVector> *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8> *pTVar4;
  TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8> *pTVar5;
  
  this->bIsValid = true;
  this->bInline = true;
  *(undefined ***)(this->Data).Pad = &___7FTokenEntry_FMovieSceneAccumulatedBlendState__6B_;
  *(longlong *)((this->Data).Pad + 8) = param_1->_padding_;
  *(longlong *)((this->Data).Pad + 0x10) = param_1->_padding_;
  *(undefined ***)(this->Data).Pad =
       &___7__TTokenEntry_UFControlRigTrackTokenVector___FMovieSceneAccumulatedBlendState__6B_;
  TBlendableToken<FControlRigTrackTokenVector>::TBlendableToken<FControlRigTrackTokenVector>
            ((TBlendableToken<FControlRigTrackTokenVector> *)((this->Data).Pad + 0x18),
             &param_1->Token);
  if (!this->bIsValid) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pTVar4 = this;
  if (!this->bInline) {
    pTVar4 = *(TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8> **)(this->Data).Pad
    ;
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
      pTVar4 = (TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pTVar5 = this;
  if (!this->bInline) {
    pTVar5 = *(TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8> **)(this->Data).Pad
    ;
  }
  if (pTVar4 != pTVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return this;
}

// Emplace<UE::MovieScene::TEntityGroupingHandler<UE::MovieScene::FControlRigDataGroupingPolicy,UE::MovieScene::FControlRigSourceData,FName>,UE::MovieScene::FControlRigDataGroupingPolicy,UE::MovieScene::TComponentTypeID<UE::MovieScene::FControlRigSourceData>_&,UE::MovieScene::TComponentTypeID<FName>_&> @ 14a393f00

void __thiscall
TInlineValue<UE::MovieScene::IEntityGroupingHandler,256,8>::
Emplace<UE::MovieScene::TEntityGroupingHandler<UE::MovieScene::FControlRigDataGroupingPolicy,UE::MovieScene::FControlRigSourceData,FName>,UE::MovieScene::FControlRigDataGroupingPolicy,UE::MovieScene::TComponentTypeID<UE::MovieScene::FControlRigSourceData>_&,UE::MovieScene::TComponentTypeID<FName>_&>
          (TInlineValue<UE::MovieScene::IEntityGroupingHandler,256,8> *this,
          FControlRigDataGroupingPolicy *param_1,
          TComponentTypeID<UE::MovieScene::FControlRigSourceData> *param_2,
          TComponentTypeID<FName> *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  TComponentTypeID<UE::MovieScene::FControlRigSourceData> TVar3;
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
  *(TComponentTypeID<UE::MovieScene::FControlRigSourceData> *)((this->Data).Pad + 0xaa) = TVar3;
  *(TComponentTypeID<FName> *)((this->Data).Pad + 0xac) = TVar4;
  *(undefined ***)(this->Data).Pad =
       &
       ___7__TEntityGroupingHandler_UFControlRigDataGroupingPolicy_MovieScene_UE__UFControlRigSourceData_23_VFName___MovieScene_UE__6B_
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

// InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>_>_> @ 14a39eca0

void __thiscall
TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>_>_>
          (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *this,
          TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>_>
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
  bool bVar12;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar13;
  
  this->bInline = false;
  pTVar13 = FMemory::Malloc(0x70,8);
  this->bIsValid = true;
  *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad = pTVar13;
  if (this->bInline) {
    pTVar13 = this;
  }
  *(undefined ***)(pTVar13->Data).Pad =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04__U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___34_U234_UFAdd_34_U634_U__TAdd_UFSourceByteChannel_MovieScene_UE___34__MovieScene_UE__6B_
  ;
  uVar1 = param_1->field_0x9;
  (pTVar13->Data).Pad[8] = param_1->field_0x8;
  (pTVar13->Data).Pad[9] = uVar1;
  (pTVar13->Data).Pad[0x18] = '\0';
  uVar2 = param_1->field_0x18;
  (pTVar13->Data).Pad[0x18] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x11;
    uVar6 = param_1->field_0x12;
    uVar7 = param_1->field_0x13;
    uVar8 = param_1->field_0x14;
    uVar9 = param_1->field_0x15;
    uVar10 = param_1->field_0x16;
    uVar11 = param_1->field_0x17;
    (pTVar13->Data).Pad[0x10] = param_1->field_0x10;
    (pTVar13->Data).Pad[0x11] = uVar1;
    (pTVar13->Data).Pad[0x12] = uVar6;
    (pTVar13->Data).Pad[0x13] = uVar7;
    (pTVar13->Data).Pad[0x14] = uVar8;
    (pTVar13->Data).Pad[0x15] = uVar9;
    (pTVar13->Data).Pad[0x16] = uVar10;
    (pTVar13->Data).Pad[0x17] = uVar11;
  }
  uVar1 = param_1->field_0x21;
  (pTVar13->Data).Pad[0x20] = param_1->field_0x20;
  (pTVar13->Data).Pad[0x21] = uVar1;
  (pTVar13->Data).Pad[0x24] = 0xff;
  (pTVar13->Data).Pad[0x25] = 0xff;
  (pTVar13->Data).Pad[0x26] = 0xff;
  (pTVar13->Data).Pad[0x27] = 0xff;
  (pTVar13->Data).Pad[0x28] = '\0';
  (pTVar13->Data).Pad[0x29] = '\0';
  (pTVar13->Data).Pad[0x2a] = '\0';
  (pTVar13->Data).Pad[0x2b] = '\0';
  if (*(int *)&param_1->field_0x24 != -1) {
    uVar1 = param_1->field_0x25;
    uVar6 = param_1->field_0x26;
    uVar7 = param_1->field_0x27;
    uVar8 = param_1->field_0x28;
    uVar9 = param_1->field_0x29;
    uVar10 = param_1->field_0x2a;
    uVar11 = param_1->field_0x2b;
    (pTVar13->Data).Pad[0x24] = param_1->field_0x24;
    (pTVar13->Data).Pad[0x25] = uVar1;
    (pTVar13->Data).Pad[0x26] = uVar6;
    (pTVar13->Data).Pad[0x27] = uVar7;
    (pTVar13->Data).Pad[0x28] = uVar8;
    (pTVar13->Data).Pad[0x29] = uVar9;
    (pTVar13->Data).Pad[0x2a] = uVar10;
    (pTVar13->Data).Pad[0x2b] = uVar11;
  }
  uVar1 = param_1->field_0x31;
  (pTVar13->Data).Pad[0x30] = param_1->field_0x30;
  (pTVar13->Data).Pad[0x31] = uVar1;
  pTVar13->field_0x40 = 0;
  cVar3 = param_1->field_0x40;
  pTVar13->field_0x40 = cVar3;
  if (cVar3 != '\0') {
    uVar1 = param_1->field_0x39;
    uVar6 = param_1->field_0x3a;
    uVar7 = param_1->field_0x3b;
    uVar8 = param_1->field_0x3c;
    uVar9 = param_1->field_0x3d;
    uVar10 = param_1->field_0x3e;
    uVar11 = param_1->field_0x3f;
    (pTVar13->Data).Pad[0x38] = param_1->field_0x38;
    (pTVar13->Data).Pad[0x39] = uVar1;
    (pTVar13->Data).Pad[0x3a] = uVar6;
    (pTVar13->Data).Pad[0x3b] = uVar7;
    (pTVar13->Data).Pad[0x3c] = uVar8;
    (pTVar13->Data).Pad[0x3d] = uVar9;
    (pTVar13->Data).Pad[0x3e] = uVar10;
    (pTVar13->Data).Pad[0x3f] = uVar11;
  }
  uVar1 = param_1->field_0x49;
  pTVar13[1].Data.Pad[0] = param_1->field_0x48;
  pTVar13[1].Data.Pad[1] = uVar1;
  uVar1 = param_1->field_0x4b;
  pTVar13[1].Data.Pad[2] = param_1->field_0x4a;
  pTVar13[1].Data.Pad[3] = uVar1;
  uVar1 = param_1->field_0x51;
  pTVar13[1].Data.Pad[8] = param_1->field_0x50;
  pTVar13[1].Data.Pad[9] = uVar1;
  pTVar13[1].Data.Pad[0x18] = '\0';
  uVar2 = param_1->field_0x60;
  pTVar13[1].Data.Pad[0x18] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x59;
    uVar6 = param_1->field_0x5a;
    uVar7 = param_1->field_0x5b;
    uVar8 = param_1->field_0x5c;
    uVar9 = param_1->field_0x5d;
    uVar10 = param_1->field_0x5e;
    uVar11 = param_1->field_0x5f;
    pTVar5 = pTVar13 + 1;
    (pTVar5->Data).Pad[0x10] = param_1->field_0x58;
    (pTVar5->Data).Pad[0x11] = uVar1;
    (pTVar5->Data).Pad[0x12] = uVar6;
    (pTVar5->Data).Pad[0x13] = uVar7;
    (pTVar5->Data).Pad[0x14] = uVar8;
    (pTVar5->Data).Pad[0x15] = uVar9;
    (pTVar5->Data).Pad[0x16] = uVar10;
    (pTVar5->Data).Pad[0x17] = uVar11;
  }
  pTVar13[1].Data.Pad[0x20] = param_1->field_0x68;
  *(undefined ***)(pTVar13->Data).Pad =
       &
       ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___23_U123_UFAdd_23_U523_U__TAdd_UFSourceByteChannel_MovieScene_UE___23__MovieScene_UE__6B_
  ;
  if (!this->bIsValid) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar13 = this;
  if (!this->bInline) {
    pTVar13 = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (pTVar13 != this) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>_> @ 14a39ee40

void __thiscall
TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>_>
          (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *this,
          TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
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
  bool bVar11;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar12;
  
  this->bInline = false;
  pTVar12 = FMemory::Malloc(0x58,8);
  this->bIsValid = true;
  *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad = pTVar12;
  if (this->bInline) {
    pTVar12 = this;
  }
  *(undefined ***)(pTVar12->Data).Pad =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03__U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___34_U__TAdd_PEBUFMovieSceneControlRigSpaceChannel___34_UFAdd_34_U734__MovieScene_UE__6B_
  ;
  uVar1 = param_1->field_0x9;
  (pTVar12->Data).Pad[8] = param_1->field_0x8;
  (pTVar12->Data).Pad[9] = uVar1;
  (pTVar12->Data).Pad[0x18] = '\0';
  uVar2 = param_1->field_0x18;
  (pTVar12->Data).Pad[0x18] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x11;
    uVar5 = param_1->field_0x12;
    uVar6 = param_1->field_0x13;
    uVar7 = param_1->field_0x14;
    uVar8 = param_1->field_0x15;
    uVar9 = param_1->field_0x16;
    uVar10 = param_1->field_0x17;
    (pTVar12->Data).Pad[0x10] = param_1->field_0x10;
    (pTVar12->Data).Pad[0x11] = uVar1;
    (pTVar12->Data).Pad[0x12] = uVar5;
    (pTVar12->Data).Pad[0x13] = uVar6;
    (pTVar12->Data).Pad[0x14] = uVar7;
    (pTVar12->Data).Pad[0x15] = uVar8;
    (pTVar12->Data).Pad[0x16] = uVar9;
    (pTVar12->Data).Pad[0x17] = uVar10;
  }
  uVar1 = param_1->field_0x21;
  (pTVar12->Data).Pad[0x20] = param_1->field_0x20;
  (pTVar12->Data).Pad[0x21] = uVar1;
  (pTVar12->Data).Pad[0x24] = 0xff;
  (pTVar12->Data).Pad[0x25] = 0xff;
  (pTVar12->Data).Pad[0x26] = 0xff;
  (pTVar12->Data).Pad[0x27] = 0xff;
  (pTVar12->Data).Pad[0x28] = '\0';
  (pTVar12->Data).Pad[0x29] = '\0';
  (pTVar12->Data).Pad[0x2a] = '\0';
  (pTVar12->Data).Pad[0x2b] = '\0';
  if (*(int *)&param_1->field_0x24 != -1) {
    uVar1 = param_1->field_0x25;
    uVar5 = param_1->field_0x26;
    uVar6 = param_1->field_0x27;
    uVar7 = param_1->field_0x28;
    uVar8 = param_1->field_0x29;
    uVar9 = param_1->field_0x2a;
    uVar10 = param_1->field_0x2b;
    (pTVar12->Data).Pad[0x24] = param_1->field_0x24;
    (pTVar12->Data).Pad[0x25] = uVar1;
    (pTVar12->Data).Pad[0x26] = uVar5;
    (pTVar12->Data).Pad[0x27] = uVar6;
    (pTVar12->Data).Pad[0x28] = uVar7;
    (pTVar12->Data).Pad[0x29] = uVar8;
    (pTVar12->Data).Pad[0x2a] = uVar9;
    (pTVar12->Data).Pad[0x2b] = uVar10;
  }
  uVar1 = param_1->field_0x31;
  (pTVar12->Data).Pad[0x30] = param_1->field_0x30;
  (pTVar12->Data).Pad[0x31] = uVar1;
  pTVar12->field_0x40 = 0;
  cVar3 = param_1->field_0x40;
  pTVar12->field_0x40 = cVar3;
  if (cVar3 != '\0') {
    uVar1 = param_1->field_0x39;
    uVar5 = param_1->field_0x3a;
    uVar6 = param_1->field_0x3b;
    uVar7 = param_1->field_0x3c;
    uVar8 = param_1->field_0x3d;
    uVar9 = param_1->field_0x3e;
    uVar10 = param_1->field_0x3f;
    (pTVar12->Data).Pad[0x38] = param_1->field_0x38;
    (pTVar12->Data).Pad[0x39] = uVar1;
    (pTVar12->Data).Pad[0x3a] = uVar5;
    (pTVar12->Data).Pad[0x3b] = uVar6;
    (pTVar12->Data).Pad[0x3c] = uVar7;
    (pTVar12->Data).Pad[0x3d] = uVar8;
    (pTVar12->Data).Pad[0x3e] = uVar9;
    (pTVar12->Data).Pad[0x3f] = uVar10;
  }
  uVar1 = param_1->field_0x49;
  pTVar12[1].Data.Pad[0] = param_1->field_0x48;
  pTVar12[1].Data.Pad[1] = uVar1;
  uVar1 = param_1->field_0x4b;
  pTVar12[1].Data.Pad[2] = param_1->field_0x4a;
  pTVar12[1].Data.Pad[3] = uVar1;
  pTVar12[1].Data.Pad[8] = param_1->field_0x50;
  *(undefined ***)(pTVar12->Data).Pad =
       &
       ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___23_U__TAdd_PEBUFMovieSceneControlRigSpaceChannel___23_UFAdd_23_U623__MovieScene_UE__6B_
  ;
  if (!this->bIsValid) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar12 = this;
  if (!this->bInline) {
    pTVar12 = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (pTVar12 != this) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>_> @ 14a39efc0

void __thiscall
TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>_>
          (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *this,
          TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
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
  bool bVar11;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar12;
  
  this->bInline = false;
  pTVar12 = FMemory::Malloc(0x58,8);
  this->bIsValid = true;
  *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad = pTVar12;
  if (this->bInline) {
    pTVar12 = this;
  }
  *(undefined ***)(pTVar12->Data).Pad =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03__U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___34_U__TAdd_UFSourceBoolChannel_MovieScene_UE___34_UFAdd_34_U734__MovieScene_UE__6B_
  ;
  uVar1 = param_1->field_0x9;
  (pTVar12->Data).Pad[8] = param_1->field_0x8;
  (pTVar12->Data).Pad[9] = uVar1;
  (pTVar12->Data).Pad[0x18] = '\0';
  uVar2 = param_1->field_0x18;
  (pTVar12->Data).Pad[0x18] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x11;
    uVar5 = param_1->field_0x12;
    uVar6 = param_1->field_0x13;
    uVar7 = param_1->field_0x14;
    uVar8 = param_1->field_0x15;
    uVar9 = param_1->field_0x16;
    uVar10 = param_1->field_0x17;
    (pTVar12->Data).Pad[0x10] = param_1->field_0x10;
    (pTVar12->Data).Pad[0x11] = uVar1;
    (pTVar12->Data).Pad[0x12] = uVar5;
    (pTVar12->Data).Pad[0x13] = uVar6;
    (pTVar12->Data).Pad[0x14] = uVar7;
    (pTVar12->Data).Pad[0x15] = uVar8;
    (pTVar12->Data).Pad[0x16] = uVar9;
    (pTVar12->Data).Pad[0x17] = uVar10;
  }
  uVar1 = param_1->field_0x21;
  (pTVar12->Data).Pad[0x20] = param_1->field_0x20;
  (pTVar12->Data).Pad[0x21] = uVar1;
  (pTVar12->Data).Pad[0x24] = 0xff;
  (pTVar12->Data).Pad[0x25] = 0xff;
  (pTVar12->Data).Pad[0x26] = 0xff;
  (pTVar12->Data).Pad[0x27] = 0xff;
  (pTVar12->Data).Pad[0x28] = '\0';
  (pTVar12->Data).Pad[0x29] = '\0';
  (pTVar12->Data).Pad[0x2a] = '\0';
  (pTVar12->Data).Pad[0x2b] = '\0';
  if (*(int *)&param_1->field_0x24 != -1) {
    uVar1 = param_1->field_0x25;
    uVar5 = param_1->field_0x26;
    uVar6 = param_1->field_0x27;
    uVar7 = param_1->field_0x28;
    uVar8 = param_1->field_0x29;
    uVar9 = param_1->field_0x2a;
    uVar10 = param_1->field_0x2b;
    (pTVar12->Data).Pad[0x24] = param_1->field_0x24;
    (pTVar12->Data).Pad[0x25] = uVar1;
    (pTVar12->Data).Pad[0x26] = uVar5;
    (pTVar12->Data).Pad[0x27] = uVar6;
    (pTVar12->Data).Pad[0x28] = uVar7;
    (pTVar12->Data).Pad[0x29] = uVar8;
    (pTVar12->Data).Pad[0x2a] = uVar9;
    (pTVar12->Data).Pad[0x2b] = uVar10;
  }
  uVar1 = param_1->field_0x31;
  (pTVar12->Data).Pad[0x30] = param_1->field_0x30;
  (pTVar12->Data).Pad[0x31] = uVar1;
  pTVar12->field_0x40 = 0;
  cVar3 = param_1->field_0x40;
  pTVar12->field_0x40 = cVar3;
  if (cVar3 != '\0') {
    uVar1 = param_1->field_0x39;
    uVar5 = param_1->field_0x3a;
    uVar6 = param_1->field_0x3b;
    uVar7 = param_1->field_0x3c;
    uVar8 = param_1->field_0x3d;
    uVar9 = param_1->field_0x3e;
    uVar10 = param_1->field_0x3f;
    (pTVar12->Data).Pad[0x38] = param_1->field_0x38;
    (pTVar12->Data).Pad[0x39] = uVar1;
    (pTVar12->Data).Pad[0x3a] = uVar5;
    (pTVar12->Data).Pad[0x3b] = uVar6;
    (pTVar12->Data).Pad[0x3c] = uVar7;
    (pTVar12->Data).Pad[0x3d] = uVar8;
    (pTVar12->Data).Pad[0x3e] = uVar9;
    (pTVar12->Data).Pad[0x3f] = uVar10;
  }
  uVar1 = param_1->field_0x49;
  pTVar12[1].Data.Pad[0] = param_1->field_0x48;
  pTVar12[1].Data.Pad[1] = uVar1;
  uVar1 = param_1->field_0x4b;
  pTVar12[1].Data.Pad[2] = param_1->field_0x4a;
  pTVar12[1].Data.Pad[3] = uVar1;
  pTVar12[1].Data.Pad[8] = param_1->field_0x50;
  *(undefined ***)(pTVar12->Data).Pad =
       &
       ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___23_U__TAdd_UFSourceBoolChannel_MovieScene_UE___23_UFAdd_23_U623__MovieScene_UE__6B_
  ;
  if (!this->bIsValid) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar12 = this;
  if (!this->bInline) {
    pTVar12 = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (pTVar12 != this) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_> @ 14a39f140

void __thiscall
TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_>
          (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *this,
          TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
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
  bool bVar12;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar13;
  
  this->bInline = false;
  pTVar13 = FMemory::Malloc(0x70,8);
  this->bIsValid = true;
  *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad = pTVar13;
  if (this->bInline) {
    pTVar13 = this;
  }
  *(undefined ***)(pTVar13->Data).Pad =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05__U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___34_UFAdd_34_U634_U__TAdd_UFSourceFloatChannel_MovieScene_UE___34_UFAddConditional_34_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___34__MovieScene_UE__6B_
  ;
  uVar1 = param_1->field_0x9;
  (pTVar13->Data).Pad[8] = param_1->field_0x8;
  (pTVar13->Data).Pad[9] = uVar1;
  (pTVar13->Data).Pad[0x18] = '\0';
  uVar2 = param_1->field_0x18;
  (pTVar13->Data).Pad[0x18] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x11;
    uVar6 = param_1->field_0x12;
    uVar7 = param_1->field_0x13;
    uVar8 = param_1->field_0x14;
    uVar9 = param_1->field_0x15;
    uVar10 = param_1->field_0x16;
    uVar11 = param_1->field_0x17;
    (pTVar13->Data).Pad[0x10] = param_1->field_0x10;
    (pTVar13->Data).Pad[0x11] = uVar1;
    (pTVar13->Data).Pad[0x12] = uVar6;
    (pTVar13->Data).Pad[0x13] = uVar7;
    (pTVar13->Data).Pad[0x14] = uVar8;
    (pTVar13->Data).Pad[0x15] = uVar9;
    (pTVar13->Data).Pad[0x16] = uVar10;
    (pTVar13->Data).Pad[0x17] = uVar11;
  }
  uVar1 = param_1->field_0x21;
  (pTVar13->Data).Pad[0x20] = param_1->field_0x20;
  (pTVar13->Data).Pad[0x21] = uVar1;
  (pTVar13->Data).Pad[0x24] = 0xff;
  (pTVar13->Data).Pad[0x25] = 0xff;
  (pTVar13->Data).Pad[0x26] = 0xff;
  (pTVar13->Data).Pad[0x27] = 0xff;
  (pTVar13->Data).Pad[0x28] = '\0';
  (pTVar13->Data).Pad[0x29] = '\0';
  (pTVar13->Data).Pad[0x2a] = '\0';
  (pTVar13->Data).Pad[0x2b] = '\0';
  if (*(int *)&param_1->field_0x24 != -1) {
    uVar1 = param_1->field_0x25;
    uVar6 = param_1->field_0x26;
    uVar7 = param_1->field_0x27;
    uVar8 = param_1->field_0x28;
    uVar9 = param_1->field_0x29;
    uVar10 = param_1->field_0x2a;
    uVar11 = param_1->field_0x2b;
    (pTVar13->Data).Pad[0x24] = param_1->field_0x24;
    (pTVar13->Data).Pad[0x25] = uVar1;
    (pTVar13->Data).Pad[0x26] = uVar6;
    (pTVar13->Data).Pad[0x27] = uVar7;
    (pTVar13->Data).Pad[0x28] = uVar8;
    (pTVar13->Data).Pad[0x29] = uVar9;
    (pTVar13->Data).Pad[0x2a] = uVar10;
    (pTVar13->Data).Pad[0x2b] = uVar11;
  }
  uVar1 = param_1->field_0x2d;
  (pTVar13->Data).Pad[0x2c] = param_1->field_0x2c;
  (pTVar13->Data).Pad[0x2d] = uVar1;
  uVar1 = param_1->field_0x2f;
  (pTVar13->Data).Pad[0x2e] = param_1->field_0x2e;
  (pTVar13->Data).Pad[0x2f] = uVar1;
  uVar1 = param_1->field_0x31;
  (pTVar13->Data).Pad[0x30] = param_1->field_0x30;
  (pTVar13->Data).Pad[0x31] = uVar1;
  pTVar13->field_0x40 = 0;
  cVar3 = param_1->field_0x40;
  pTVar13->field_0x40 = cVar3;
  if (cVar3 != '\0') {
    uVar1 = param_1->field_0x39;
    uVar6 = param_1->field_0x3a;
    uVar7 = param_1->field_0x3b;
    uVar8 = param_1->field_0x3c;
    uVar9 = param_1->field_0x3d;
    uVar10 = param_1->field_0x3e;
    uVar11 = param_1->field_0x3f;
    (pTVar13->Data).Pad[0x38] = param_1->field_0x38;
    (pTVar13->Data).Pad[0x39] = uVar1;
    (pTVar13->Data).Pad[0x3a] = uVar6;
    (pTVar13->Data).Pad[0x3b] = uVar7;
    (pTVar13->Data).Pad[0x3c] = uVar8;
    (pTVar13->Data).Pad[0x3d] = uVar9;
    (pTVar13->Data).Pad[0x3e] = uVar10;
    (pTVar13->Data).Pad[0x3f] = uVar11;
  }
  uVar1 = param_1->field_0x49;
  uVar6 = param_1->field_0x4a;
  uVar7 = param_1->field_0x4b;
  pTVar13[1].Data.Pad[0] = param_1->field_0x48;
  pTVar13[1].Data.Pad[1] = uVar1;
  pTVar13[1].Data.Pad[2] = uVar6;
  pTVar13[1].Data.Pad[3] = uVar7;
  uVar1 = param_1->field_0x51;
  uVar6 = param_1->field_0x52;
  uVar7 = param_1->field_0x53;
  pTVar5 = pTVar13 + 1;
  (pTVar5->Data).Pad[8] = param_1->field_0x50;
  (pTVar5->Data).Pad[9] = uVar1;
  (pTVar5->Data).Pad[10] = uVar6;
  (pTVar5->Data).Pad[0xb] = uVar7;
  pTVar13[1].Data.Pad[0x18] = '\0';
  uVar2 = param_1->field_0x60;
  pTVar13[1].Data.Pad[0x18] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x59;
    uVar6 = param_1->field_0x5a;
    uVar7 = param_1->field_0x5b;
    uVar8 = param_1->field_0x5c;
    uVar9 = param_1->field_0x5d;
    uVar10 = param_1->field_0x5e;
    uVar11 = param_1->field_0x5f;
    pTVar5 = pTVar13 + 1;
    (pTVar5->Data).Pad[0x10] = param_1->field_0x58;
    (pTVar5->Data).Pad[0x11] = uVar1;
    (pTVar5->Data).Pad[0x12] = uVar6;
    (pTVar5->Data).Pad[0x13] = uVar7;
    (pTVar5->Data).Pad[0x14] = uVar8;
    (pTVar5->Data).Pad[0x15] = uVar9;
    (pTVar5->Data).Pad[0x16] = uVar10;
    (pTVar5->Data).Pad[0x17] = uVar11;
  }
  pTVar13[1].Data.Pad[0x20] = param_1->field_0x68;
  *(undefined ***)(pTVar13->Data).Pad =
       &
       ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___23_UFAdd_23_U523_U__TAdd_UFSourceFloatChannel_MovieScene_UE___23_UFAddConditional_23_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23__MovieScene_UE__6B_
  ;
  if (!this->bIsValid) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar13 = this;
  if (!this->bInline) {
    pTVar13 = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (pTVar13 != this) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>_>_> @ 14a39f2e0

void __thiscall
TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>_>_>
          (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *this,
          TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>_>
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
  bool bVar11;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar12;
  
  this->bInline = false;
  pTVar12 = FMemory::Malloc(0x50,8);
  this->bIsValid = true;
  *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad = pTVar12;
  if (this->bInline) {
    pTVar12 = this;
  }
  *(undefined ***)(pTVar12->Data).Pad =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03__U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___34_UFAdd_34_U634_U__TAdd_UFSourceIntegerChannel_MovieScene_UE___34__MovieScene_UE__6B_
  ;
  uVar1 = param_1->field_0x9;
  (pTVar12->Data).Pad[8] = param_1->field_0x8;
  (pTVar12->Data).Pad[9] = uVar1;
  (pTVar12->Data).Pad[0x18] = '\0';
  uVar2 = param_1->field_0x18;
  (pTVar12->Data).Pad[0x18] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x11;
    uVar5 = param_1->field_0x12;
    uVar6 = param_1->field_0x13;
    uVar7 = param_1->field_0x14;
    uVar8 = param_1->field_0x15;
    uVar9 = param_1->field_0x16;
    uVar10 = param_1->field_0x17;
    (pTVar12->Data).Pad[0x10] = param_1->field_0x10;
    (pTVar12->Data).Pad[0x11] = uVar1;
    (pTVar12->Data).Pad[0x12] = uVar5;
    (pTVar12->Data).Pad[0x13] = uVar6;
    (pTVar12->Data).Pad[0x14] = uVar7;
    (pTVar12->Data).Pad[0x15] = uVar8;
    (pTVar12->Data).Pad[0x16] = uVar9;
    (pTVar12->Data).Pad[0x17] = uVar10;
  }
  uVar1 = param_1->field_0x21;
  (pTVar12->Data).Pad[0x20] = param_1->field_0x20;
  (pTVar12->Data).Pad[0x21] = uVar1;
  (pTVar12->Data).Pad[0x24] = 0xff;
  (pTVar12->Data).Pad[0x25] = 0xff;
  (pTVar12->Data).Pad[0x26] = 0xff;
  (pTVar12->Data).Pad[0x27] = 0xff;
  (pTVar12->Data).Pad[0x28] = '\0';
  (pTVar12->Data).Pad[0x29] = '\0';
  (pTVar12->Data).Pad[0x2a] = '\0';
  (pTVar12->Data).Pad[0x2b] = '\0';
  if (*(int *)&param_1->field_0x24 != -1) {
    uVar1 = param_1->field_0x25;
    uVar5 = param_1->field_0x26;
    uVar6 = param_1->field_0x27;
    uVar7 = param_1->field_0x28;
    uVar8 = param_1->field_0x29;
    uVar9 = param_1->field_0x2a;
    uVar10 = param_1->field_0x2b;
    (pTVar12->Data).Pad[0x24] = param_1->field_0x24;
    (pTVar12->Data).Pad[0x25] = uVar1;
    (pTVar12->Data).Pad[0x26] = uVar5;
    (pTVar12->Data).Pad[0x27] = uVar6;
    (pTVar12->Data).Pad[0x28] = uVar7;
    (pTVar12->Data).Pad[0x29] = uVar8;
    (pTVar12->Data).Pad[0x2a] = uVar9;
    (pTVar12->Data).Pad[0x2b] = uVar10;
  }
  uVar1 = param_1->field_0x2d;
  (pTVar12->Data).Pad[0x2c] = param_1->field_0x2c;
  (pTVar12->Data).Pad[0x2d] = uVar1;
  uVar1 = param_1->field_0x2f;
  (pTVar12->Data).Pad[0x2e] = param_1->field_0x2e;
  (pTVar12->Data).Pad[0x2f] = uVar1;
  uVar1 = param_1->field_0x31;
  (pTVar12->Data).Pad[0x30] = param_1->field_0x30;
  (pTVar12->Data).Pad[0x31] = uVar1;
  pTVar12->field_0x40 = 0;
  cVar3 = param_1->field_0x40;
  pTVar12->field_0x40 = cVar3;
  if (cVar3 != '\0') {
    uVar1 = param_1->field_0x39;
    uVar5 = param_1->field_0x3a;
    uVar6 = param_1->field_0x3b;
    uVar7 = param_1->field_0x3c;
    uVar8 = param_1->field_0x3d;
    uVar9 = param_1->field_0x3e;
    uVar10 = param_1->field_0x3f;
    (pTVar12->Data).Pad[0x38] = param_1->field_0x38;
    (pTVar12->Data).Pad[0x39] = uVar1;
    (pTVar12->Data).Pad[0x3a] = uVar5;
    (pTVar12->Data).Pad[0x3b] = uVar6;
    (pTVar12->Data).Pad[0x3c] = uVar7;
    (pTVar12->Data).Pad[0x3d] = uVar8;
    (pTVar12->Data).Pad[0x3e] = uVar9;
    (pTVar12->Data).Pad[0x3f] = uVar10;
  }
  pTVar12[1].Data.Pad[0] = param_1->field_0x48;
  *(undefined ***)(pTVar12->Data).Pad =
       &
       ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___23_UFAdd_23_U523_U__TAdd_UFSourceIntegerChannel_MovieScene_UE___23__MovieScene_UE__6B_
  ;
  if (!this->bIsValid) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar12 = this;
  if (!this->bInline) {
    pTVar12 = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (pTVar12 != this) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>_> @ 14a39f460

void __thiscall
TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>_>
          (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *this,
          TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
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
  bool bVar12;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar13;
  
  this->bInline = false;
  pTVar13 = FMemory::Malloc(0xa0,8);
  this->bIsValid = true;
  *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad = pTVar13;
  if (this->bInline) {
    pTVar13 = this;
  }
  *(undefined ***)(pTVar13->Data).Pad =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06_07__U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___34_UFAdd_34_U634_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___34_U734_U734_U734_UFAddConditional_34__MovieScene_UE__6B_
  ;
  uVar1 = param_1->field_0x9;
  (pTVar13->Data).Pad[8] = param_1->field_0x8;
  (pTVar13->Data).Pad[9] = uVar1;
  (pTVar13->Data).Pad[0x18] = '\0';
  uVar2 = param_1->field_0x18;
  (pTVar13->Data).Pad[0x18] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x11;
    uVar6 = param_1->field_0x12;
    uVar7 = param_1->field_0x13;
    uVar8 = param_1->field_0x14;
    uVar9 = param_1->field_0x15;
    uVar10 = param_1->field_0x16;
    uVar11 = param_1->field_0x17;
    (pTVar13->Data).Pad[0x10] = param_1->field_0x10;
    (pTVar13->Data).Pad[0x11] = uVar1;
    (pTVar13->Data).Pad[0x12] = uVar6;
    (pTVar13->Data).Pad[0x13] = uVar7;
    (pTVar13->Data).Pad[0x14] = uVar8;
    (pTVar13->Data).Pad[0x15] = uVar9;
    (pTVar13->Data).Pad[0x16] = uVar10;
    (pTVar13->Data).Pad[0x17] = uVar11;
  }
  uVar1 = param_1->field_0x21;
  (pTVar13->Data).Pad[0x20] = param_1->field_0x20;
  (pTVar13->Data).Pad[0x21] = uVar1;
  (pTVar13->Data).Pad[0x24] = 0xff;
  (pTVar13->Data).Pad[0x25] = 0xff;
  (pTVar13->Data).Pad[0x26] = 0xff;
  (pTVar13->Data).Pad[0x27] = 0xff;
  (pTVar13->Data).Pad[0x28] = '\0';
  (pTVar13->Data).Pad[0x29] = '\0';
  (pTVar13->Data).Pad[0x2a] = '\0';
  (pTVar13->Data).Pad[0x2b] = '\0';
  if (*(int *)&param_1->field_0x24 != -1) {
    uVar1 = param_1->field_0x25;
    uVar6 = param_1->field_0x26;
    uVar7 = param_1->field_0x27;
    uVar8 = param_1->field_0x28;
    uVar9 = param_1->field_0x29;
    uVar10 = param_1->field_0x2a;
    uVar11 = param_1->field_0x2b;
    (pTVar13->Data).Pad[0x24] = param_1->field_0x24;
    (pTVar13->Data).Pad[0x25] = uVar1;
    (pTVar13->Data).Pad[0x26] = uVar6;
    (pTVar13->Data).Pad[0x27] = uVar7;
    (pTVar13->Data).Pad[0x28] = uVar8;
    (pTVar13->Data).Pad[0x29] = uVar9;
    (pTVar13->Data).Pad[0x2a] = uVar10;
    (pTVar13->Data).Pad[0x2b] = uVar11;
  }
  uVar1 = param_1->field_0x2d;
  (pTVar13->Data).Pad[0x2c] = param_1->field_0x2c;
  (pTVar13->Data).Pad[0x2d] = uVar1;
  uVar1 = param_1->field_0x2f;
  (pTVar13->Data).Pad[0x2e] = param_1->field_0x2e;
  (pTVar13->Data).Pad[0x2f] = uVar1;
  uVar1 = param_1->field_0x31;
  uVar6 = param_1->field_0x32;
  uVar7 = param_1->field_0x33;
  (pTVar13->Data).Pad[0x30] = param_1->field_0x30;
  (pTVar13->Data).Pad[0x31] = uVar1;
  (pTVar13->Data).Pad[0x32] = uVar6;
  (pTVar13->Data).Pad[0x33] = uVar7;
  pTVar13->field_0x40 = 0;
  cVar3 = param_1->field_0x40;
  pTVar13->field_0x40 = cVar3;
  if (cVar3 != '\0') {
    uVar1 = param_1->field_0x39;
    uVar6 = param_1->field_0x3a;
    uVar7 = param_1->field_0x3b;
    uVar8 = param_1->field_0x3c;
    uVar9 = param_1->field_0x3d;
    uVar10 = param_1->field_0x3e;
    uVar11 = param_1->field_0x3f;
    (pTVar13->Data).Pad[0x38] = param_1->field_0x38;
    (pTVar13->Data).Pad[0x39] = uVar1;
    (pTVar13->Data).Pad[0x3a] = uVar6;
    (pTVar13->Data).Pad[0x3b] = uVar7;
    (pTVar13->Data).Pad[0x3c] = uVar8;
    (pTVar13->Data).Pad[0x3d] = uVar9;
    (pTVar13->Data).Pad[0x3e] = uVar10;
    (pTVar13->Data).Pad[0x3f] = uVar11;
  }
  uVar1 = param_1->field_0x49;
  uVar6 = param_1->field_0x4a;
  uVar7 = param_1->field_0x4b;
  pTVar13[1].Data.Pad[0] = param_1->field_0x48;
  pTVar13[1].Data.Pad[1] = uVar1;
  pTVar13[1].Data.Pad[2] = uVar6;
  pTVar13[1].Data.Pad[3] = uVar7;
  pTVar13[1].Data.Pad[0x10] = '\0';
  uVar2 = param_1->field_0x58;
  pTVar13[1].Data.Pad[0x10] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x51;
    uVar6 = param_1->field_0x52;
    uVar7 = param_1->field_0x53;
    uVar8 = param_1->field_0x54;
    uVar9 = param_1->field_0x55;
    uVar10 = param_1->field_0x56;
    uVar11 = param_1->field_0x57;
    pTVar5 = pTVar13 + 1;
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
  pTVar5 = pTVar13 + 1;
  (pTVar5->Data).Pad[0x18] = param_1->field_0x60;
  (pTVar5->Data).Pad[0x19] = uVar1;
  (pTVar5->Data).Pad[0x1a] = uVar6;
  (pTVar5->Data).Pad[0x1b] = uVar7;
  pTVar13[1].Data.Pad[0x28] = '\0';
  uVar2 = param_1->field_0x70;
  pTVar13[1].Data.Pad[0x28] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x69;
    uVar6 = param_1->field_0x6a;
    uVar7 = param_1->field_0x6b;
    uVar8 = param_1->field_0x6c;
    uVar9 = param_1->field_0x6d;
    uVar10 = param_1->field_0x6e;
    uVar11 = param_1->field_0x6f;
    pTVar5 = pTVar13 + 1;
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
  pTVar5 = pTVar13 + 1;
  (pTVar5->Data).Pad[0x30] = param_1->field_0x78;
  (pTVar5->Data).Pad[0x31] = uVar1;
  (pTVar5->Data).Pad[0x32] = uVar6;
  (pTVar5->Data).Pad[0x33] = uVar7;
  pTVar13[1].field_0x40 = 0;
  cVar3 = param_1->field_0x88;
  pTVar13[1].field_0x40 = cVar3;
  if (cVar3 != '\0') {
    uVar1 = param_1->field_0x81;
    uVar6 = param_1->field_0x82;
    uVar7 = param_1->field_0x83;
    uVar8 = param_1->field_0x84;
    uVar9 = param_1->field_0x85;
    uVar10 = param_1->field_0x86;
    uVar11 = param_1->field_0x87;
    pTVar5 = pTVar13 + 1;
    (pTVar5->Data).Pad[0x38] = param_1->field_0x80;
    (pTVar5->Data).Pad[0x39] = uVar1;
    (pTVar5->Data).Pad[0x3a] = uVar6;
    (pTVar5->Data).Pad[0x3b] = uVar7;
    (pTVar5->Data).Pad[0x3c] = uVar8;
    (pTVar5->Data).Pad[0x3d] = uVar9;
    (pTVar5->Data).Pad[0x3e] = uVar10;
    (pTVar5->Data).Pad[0x3f] = uVar11;
  }
  uVar1 = param_1->field_0x91;
  uVar6 = param_1->field_0x92;
  uVar7 = param_1->field_0x93;
  pTVar13[2].Data.Pad[0] = param_1->field_0x90;
  pTVar13[2].Data.Pad[1] = uVar1;
  pTVar13[2].Data.Pad[2] = uVar6;
  pTVar13[2].Data.Pad[3] = uVar7;
  pTVar13[2].Data.Pad[8] = param_1->field_0x98;
  *(undefined ***)(pTVar13->Data).Pad =
       &
       ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___23_UFAdd_23_U523_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_U623_U623_U623_UFAddConditional_23__MovieScene_UE__6B_
  ;
  if (!this->bIsValid) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar13 = this;
  if (!this->bInline) {
    pTVar13 = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (pTVar13 != this) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>_> @ 14a39f660

void __thiscall
TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>_>
          (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *this,
          TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
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
  bool bVar12;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *pTVar13;
  
  this->bInline = false;
  pTVar13 = FMemory::Malloc(0x88,8);
  this->bIsValid = true;
  *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad = pTVar13;
  if (this->bInline) {
    pTVar13 = this;
  }
  *(undefined ***)(pTVar13->Data).Pad =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06__U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___34_UFAdd_34_U634_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___34_U734_U734_UFAddConditional_34__MovieScene_UE__6B_
  ;
  uVar1 = param_1->field_0x9;
  (pTVar13->Data).Pad[8] = param_1->field_0x8;
  (pTVar13->Data).Pad[9] = uVar1;
  (pTVar13->Data).Pad[0x18] = '\0';
  uVar2 = param_1->field_0x18;
  (pTVar13->Data).Pad[0x18] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x11;
    uVar6 = param_1->field_0x12;
    uVar7 = param_1->field_0x13;
    uVar8 = param_1->field_0x14;
    uVar9 = param_1->field_0x15;
    uVar10 = param_1->field_0x16;
    uVar11 = param_1->field_0x17;
    (pTVar13->Data).Pad[0x10] = param_1->field_0x10;
    (pTVar13->Data).Pad[0x11] = uVar1;
    (pTVar13->Data).Pad[0x12] = uVar6;
    (pTVar13->Data).Pad[0x13] = uVar7;
    (pTVar13->Data).Pad[0x14] = uVar8;
    (pTVar13->Data).Pad[0x15] = uVar9;
    (pTVar13->Data).Pad[0x16] = uVar10;
    (pTVar13->Data).Pad[0x17] = uVar11;
  }
  uVar1 = param_1->field_0x21;
  (pTVar13->Data).Pad[0x20] = param_1->field_0x20;
  (pTVar13->Data).Pad[0x21] = uVar1;
  (pTVar13->Data).Pad[0x24] = 0xff;
  (pTVar13->Data).Pad[0x25] = 0xff;
  (pTVar13->Data).Pad[0x26] = 0xff;
  (pTVar13->Data).Pad[0x27] = 0xff;
  (pTVar13->Data).Pad[0x28] = '\0';
  (pTVar13->Data).Pad[0x29] = '\0';
  (pTVar13->Data).Pad[0x2a] = '\0';
  (pTVar13->Data).Pad[0x2b] = '\0';
  if (*(int *)&param_1->field_0x24 != -1) {
    uVar1 = param_1->field_0x25;
    uVar6 = param_1->field_0x26;
    uVar7 = param_1->field_0x27;
    uVar8 = param_1->field_0x28;
    uVar9 = param_1->field_0x29;
    uVar10 = param_1->field_0x2a;
    uVar11 = param_1->field_0x2b;
    (pTVar13->Data).Pad[0x24] = param_1->field_0x24;
    (pTVar13->Data).Pad[0x25] = uVar1;
    (pTVar13->Data).Pad[0x26] = uVar6;
    (pTVar13->Data).Pad[0x27] = uVar7;
    (pTVar13->Data).Pad[0x28] = uVar8;
    (pTVar13->Data).Pad[0x29] = uVar9;
    (pTVar13->Data).Pad[0x2a] = uVar10;
    (pTVar13->Data).Pad[0x2b] = uVar11;
  }
  uVar1 = param_1->field_0x2d;
  (pTVar13->Data).Pad[0x2c] = param_1->field_0x2c;
  (pTVar13->Data).Pad[0x2d] = uVar1;
  uVar1 = param_1->field_0x2f;
  (pTVar13->Data).Pad[0x2e] = param_1->field_0x2e;
  (pTVar13->Data).Pad[0x2f] = uVar1;
  uVar1 = param_1->field_0x31;
  uVar6 = param_1->field_0x32;
  uVar7 = param_1->field_0x33;
  (pTVar13->Data).Pad[0x30] = param_1->field_0x30;
  (pTVar13->Data).Pad[0x31] = uVar1;
  (pTVar13->Data).Pad[0x32] = uVar6;
  (pTVar13->Data).Pad[0x33] = uVar7;
  pTVar13->field_0x40 = 0;
  cVar3 = param_1->field_0x40;
  pTVar13->field_0x40 = cVar3;
  if (cVar3 != '\0') {
    uVar1 = param_1->field_0x39;
    uVar6 = param_1->field_0x3a;
    uVar7 = param_1->field_0x3b;
    uVar8 = param_1->field_0x3c;
    uVar9 = param_1->field_0x3d;
    uVar10 = param_1->field_0x3e;
    uVar11 = param_1->field_0x3f;
    (pTVar13->Data).Pad[0x38] = param_1->field_0x38;
    (pTVar13->Data).Pad[0x39] = uVar1;
    (pTVar13->Data).Pad[0x3a] = uVar6;
    (pTVar13->Data).Pad[0x3b] = uVar7;
    (pTVar13->Data).Pad[0x3c] = uVar8;
    (pTVar13->Data).Pad[0x3d] = uVar9;
    (pTVar13->Data).Pad[0x3e] = uVar10;
    (pTVar13->Data).Pad[0x3f] = uVar11;
  }
  uVar1 = param_1->field_0x49;
  uVar6 = param_1->field_0x4a;
  uVar7 = param_1->field_0x4b;
  pTVar13[1].Data.Pad[0] = param_1->field_0x48;
  pTVar13[1].Data.Pad[1] = uVar1;
  pTVar13[1].Data.Pad[2] = uVar6;
  pTVar13[1].Data.Pad[3] = uVar7;
  pTVar13[1].Data.Pad[0x10] = '\0';
  uVar2 = param_1->field_0x58;
  pTVar13[1].Data.Pad[0x10] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x51;
    uVar6 = param_1->field_0x52;
    uVar7 = param_1->field_0x53;
    uVar8 = param_1->field_0x54;
    uVar9 = param_1->field_0x55;
    uVar10 = param_1->field_0x56;
    uVar11 = param_1->field_0x57;
    pTVar5 = pTVar13 + 1;
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
  pTVar5 = pTVar13 + 1;
  (pTVar5->Data).Pad[0x18] = param_1->field_0x60;
  (pTVar5->Data).Pad[0x19] = uVar1;
  (pTVar5->Data).Pad[0x1a] = uVar6;
  (pTVar5->Data).Pad[0x1b] = uVar7;
  pTVar13[1].Data.Pad[0x28] = '\0';
  uVar2 = param_1->field_0x70;
  pTVar13[1].Data.Pad[0x28] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x69;
    uVar6 = param_1->field_0x6a;
    uVar7 = param_1->field_0x6b;
    uVar8 = param_1->field_0x6c;
    uVar9 = param_1->field_0x6d;
    uVar10 = param_1->field_0x6e;
    uVar11 = param_1->field_0x6f;
    pTVar5 = pTVar13 + 1;
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
  pTVar5 = pTVar13 + 1;
  (pTVar5->Data).Pad[0x30] = param_1->field_0x78;
  (pTVar5->Data).Pad[0x31] = uVar1;
  (pTVar5->Data).Pad[0x32] = uVar6;
  (pTVar5->Data).Pad[0x33] = uVar7;
  pTVar13[1].Data.Pad[0x38] = param_1->field_0x80;
  *(undefined ***)(pTVar13->Data).Pad =
       &
       ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___23_UFAdd_23_U523_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_U623_U623_UFAddConditional_23__MovieScene_UE__6B_
  ;
  if (!this->bIsValid) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar13 = this;
  if (!this->bInline) {
    pTVar13 = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad;
  }
  if (pTVar13 != this) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>_> @ 14a39f830

void __thiscall
TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>_>
          (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *this,
          TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
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
  pTVar21 = FMemory::Malloc(0xa0,8);
  this->bIsValid = true;
  *(TInlineValue<UE::MovieScene::IEntityBuilder,64,8> **)(this->Data).Pad = pTVar21;
  if (this->bInline) {
    pTVar21 = this;
  }
  *(undefined ***)(pTVar21->Data).Pad =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06__U__TAdd_UFGuid___MovieScene_UE__U__TAdd_P6APEAVUObject__PEAV1__Z_34_U__TAdd_UFControlRigSourceData_MovieScene_UE___34_U__TAdd_UFBaseControlRigEvalData_MovieScene_UE___34_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___34_UFAdd_34_U934_U934__MovieScene_UE__6B_
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
  pTVar21[1].Data.Pad[0] = '\0';
  uVar2 = param_1->field_0x48;
  pTVar21[1].Data.Pad[0] = uVar2;
  if (uVar2 != '\0') {
    *(undefined8 *)&pTVar21->field_0x40 = *(undefined8 *)&param_1->field_0x40;
  }
  uVar1 = param_1->field_0x51;
  pTVar21[1].Data.Pad[8] = param_1->field_0x50;
  pTVar21[1].Data.Pad[9] = uVar1;
  pTVar21[1].Data.Pad[0x28] = '\0';
  uVar2 = param_1->field_0x70;
  pTVar21[1].Data.Pad[0x28] = uVar2;
  if (uVar2 != '\0') {
    uVar1 = param_1->field_0x59;
    uVar6 = param_1->field_0x5a;
    uVar7 = param_1->field_0x5b;
    uVar8 = param_1->field_0x5c;
    uVar9 = param_1->field_0x5d;
    uVar10 = param_1->field_0x5e;
    uVar11 = param_1->field_0x5f;
    uVar12 = param_1->field_0x60;
    uVar13 = param_1->field_0x61;
    uVar14 = param_1->field_0x62;
    uVar15 = param_1->field_0x63;
    uVar16 = param_1->field_0x64;
    uVar17 = param_1->field_0x65;
    uVar18 = param_1->field_0x66;
    uVar19 = param_1->field_0x67;
    pTVar5 = pTVar21 + 1;
    (pTVar5->Data).Pad[0x10] = param_1->field_0x58;
    (pTVar5->Data).Pad[0x11] = uVar1;
    (pTVar5->Data).Pad[0x12] = uVar6;
    (pTVar5->Data).Pad[0x13] = uVar7;
    (pTVar5->Data).Pad[0x14] = uVar8;
    (pTVar5->Data).Pad[0x15] = uVar9;
    (pTVar5->Data).Pad[0x16] = uVar10;
    (pTVar5->Data).Pad[0x17] = uVar11;
    pTVar5 = pTVar21 + 1;
    (pTVar5->Data).Pad[0x18] = uVar12;
    (pTVar5->Data).Pad[0x19] = uVar13;
    (pTVar5->Data).Pad[0x1a] = uVar14;
    (pTVar5->Data).Pad[0x1b] = uVar15;
    (pTVar5->Data).Pad[0x1c] = uVar16;
    (pTVar5->Data).Pad[0x1d] = uVar17;
    (pTVar5->Data).Pad[0x1e] = uVar18;
    (pTVar5->Data).Pad[0x1f] = uVar19;
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
  uVar1 = param_1->field_0x91;
  pTVar21[2].Data.Pad[0] = param_1->field_0x90;
  pTVar21[2].Data.Pad[1] = uVar1;
  uVar1 = param_1->field_0x93;
  pTVar21[2].Data.Pad[2] = param_1->field_0x92;
  pTVar21[2].Data.Pad[3] = uVar1;
  uVar1 = param_1->field_0x95;
  pTVar21[2].Data.Pad[4] = param_1->field_0x94;
  pTVar21[2].Data.Pad[5] = uVar1;
  pTVar21[2].Data.Pad[8] = param_1->field_0x98;
  *(undefined ***)(pTVar21->Data).Pad =
       &
       ___7__TEntityBuilder_U__TAdd_UFGuid___MovieScene_UE__U__TAdd_P6APEAVUObject__PEAV1__Z_23_U__TAdd_UFControlRigSourceData_MovieScene_UE___23_U__TAdd_UFBaseControlRigEvalData_MovieScene_UE___23_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_UFAdd_23_U823_U823__MovieScene_UE__6B_
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

// ~TInlineValue<TBlendableToken<FControlRigTrackTokenFloat>::IData,4,8> @ 14a3bb6f0

void __thiscall
TInlineValue<TBlendableToken<FControlRigTrackTokenFloat>::IData,4,8>::
~TInlineValue<TBlendableToken<FControlRigTrackTokenFloat>::IData,4,8>
          (TInlineValue<TBlendableToken<FControlRigTrackTokenFloat>::IData,4,8> *this)

{
  undefined1 uVar1;
  TInlineValue<TBlendableToken<FControlRigTrackTokenFloat>::IData,4,8> *pTVar2;
  
  uVar1 = this->field_0x8;
  if (this->bIsValid) {
    pTVar2 = this;
    if (!this->bInline) {
      pTVar2 = *(TInlineValue<TBlendableToken<FControlRigTrackTokenFloat>::IData,4,8> **)
                (this->Data).Pad;
    }
    this->field_0x8 = uVar1 & 0xfe;
    (*(code *)**(undefined8 **)(pTVar2->Data).Pad)(pTVar2,0);
    if (!this->bInline) {
      FMemory::Free(*(void **)(this->Data).Pad);
      return;
    }
  }
  return;
}

// ~TInlineValue<TBlendableToken<FControlRigTrackTokenVector2D>::IData,16,8> @ 14a3bb740

void __thiscall
TInlineValue<TBlendableToken<FControlRigTrackTokenVector2D>::IData,16,8>::
~TInlineValue<TBlendableToken<FControlRigTrackTokenVector2D>::IData,16,8>
          (TInlineValue<TBlendableToken<FControlRigTrackTokenVector2D>::IData,16,8> *this)

{
  undefined1 uVar1;
  TInlineValue<TBlendableToken<FControlRigTrackTokenVector2D>::IData,16,8> *pTVar2;
  
  uVar1 = this->field_0x10;
  if (this->bIsValid) {
    pTVar2 = this;
    if (!this->bInline) {
      pTVar2 = *(TInlineValue<TBlendableToken<FControlRigTrackTokenVector2D>::IData,16,8> **)
                (this->Data).Pad;
    }
    this->field_0x10 = uVar1 & 0xfe;
    (*(code *)**(undefined8 **)(pTVar2->Data).Pad)(pTVar2,0);
    if (!this->bInline) {
      FMemory::Free(*(void **)(this->Data).Pad);
      return;
    }
  }
  return;
}

// operator= @ 14a3bd490

TInlineValue<IBlendableTokenStack,64,8> * __thiscall
TInlineValue<IBlendableTokenStack,64,8>::operator=
          (TInlineValue<IBlendableTokenStack,64,8> *this,
          TInlineValue<IBlendableTokenStack,64,8> *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  TInlineValue<IBlendableTokenStack,64,8> *pTVar3;
  
  uVar1 = this->field_0x40;
  if (this->bIsValid) {
    pTVar3 = this;
    if (!this->bInline) {
      pTVar3 = *(TInlineValue<IBlendableTokenStack,64,8> **)(this->Data).Pad;
    }
    this->field_0x40 = uVar1 & 0xfe;
    (*(code *)**(undefined8 **)(pTVar3->Data).Pad)(pTVar3,0);
    if (!this->bInline) {
      FMemory::Free(*(void **)(this->Data).Pad);
    }
  }
  if (param_1->bIsValid) {
    this->bIsValid = true;
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

// GetValue @ 14a41a740

IData * __thiscall
TInlineValue<TBlendableToken<FControlRigTrackTokenVector>::IData,24,8>::GetValue
          (TInlineValue<TBlendableToken<FControlRigTrackTokenVector>::IData,24,8> *this)

{
  code *pcVar1;
  bool bVar2;
  IData *pIVar3;
  
  if (!this->bIsValid) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (IData *)(*pcVar1)();
      return pIVar3;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<TBlendableToken<FControlRigTrackTokenVector>::IData,24,8> **)
            (this->Data).Pad;
  }
  return (IData *)this;
}

