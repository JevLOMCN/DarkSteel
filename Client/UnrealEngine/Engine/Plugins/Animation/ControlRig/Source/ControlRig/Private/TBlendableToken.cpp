// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 5

// TBlendableToken<FControlRigTrackTokenVector2D><UE::MovieScene::TMultiChannelValue<float,2>_&> @ 14a3834d0

TBlendableToken<FControlRigTrackTokenVector2D> * __thiscall
TBlendableToken<FControlRigTrackTokenVector2D>::
TBlendableToken<FControlRigTrackTokenVector2D><UE::MovieScene::TMultiChannelValue<float,2>_&>
          (TBlendableToken<FControlRigTrackTokenVector2D> *this,TMultiChannelValue<float,2> *param_1
          ,EMovieSceneBlendType param_2,float param_3,int param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  TBlendableToken<FControlRigTrackTokenVector2D> *pTVar7;
  TBlendableToken<FControlRigTrackTokenVector2D> *pTVar8;
  
  uVar4 = param_1->Mask;
  uVar2 = *(undefined8 *)param_1->Channels;
  (this->Value).bIsValid = false;
  (this->Value).bInline = false;
  pTVar7 = FMemory::Malloc(0x18,8);
  (this->Value).bIsValid = true;
  *(TBlendableToken<FControlRigTrackTokenVector2D> **)(this->Value).Data.Pad = pTVar7;
  if ((this->Value).bInline) {
    pTVar7 = this;
  }
  *(undefined8 *)((pTVar7->Value).Data.Pad + 8) = uVar2;
  *(uint *)&(pTVar7->Value).field_0x10 = uVar4;
  *(undefined ***)(pTVar7->Value).Data.Pad =
       &
       ___7__TData_U__TMultiChannelValue_M_01_MovieScene_UE_____TBlendableToken_UFControlRigTrackTokenVector2D____6B_
  ;
  if (!(this->Value).bIsValid) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TBlendableToken<FControlRigTrackTokenVector2D> *)(*pcVar5)();
      return pTVar7;
    }
  }
  pTVar7 = this;
  if (!(this->Value).bInline) {
    pTVar7 = *(TBlendableToken<FControlRigTrackTokenVector2D> **)(this->Value).Data.Pad;
  }
  if (!(this->Value).bIsValid) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TBlendableToken<FControlRigTrackTokenVector2D> *)(*pcVar5)();
      return pTVar7;
    }
  }
  pTVar8 = this;
  if (!(this->Value).bInline) {
    pTVar8 = *(TBlendableToken<FControlRigTrackTokenVector2D> **)(this->Value).Data.Pad;
  }
  if (pTVar7 != pTVar8) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TBlendableToken<FControlRigTrackTokenVector2D> *)(*pcVar5)();
      return pTVar7;
    }
  }
  (this->AnimatingScope).Key.SequenceID = 0xffffffff;
  (this->AnimatingScope).Key.TrackIdentifier = 0xffffffff;
  (this->AnimatingScope).Key.SectionIndex = 0xffffffff;
  (this->AnimatingScope).CompletionMode = KeepState;
  this->Weight = param_3;
  this->BlendType = param_2;
  this->BlendingOrder = param_4;
  this->HierarchicalBias = 0;
  return this;
}

// TBlendableToken<FControlRigTrackTokenVector><UE::MovieScene::TMultiChannelValue<float,3>_&> @ 14a383630

TBlendableToken<FControlRigTrackTokenVector> * __thiscall
TBlendableToken<FControlRigTrackTokenVector>::
TBlendableToken<FControlRigTrackTokenVector><UE::MovieScene::TMultiChannelValue<float,3>_&>
          (TBlendableToken<FControlRigTrackTokenVector> *this,TMultiChannelValue<float,3> *param_1,
          EMovieSceneBlendType param_2,float param_3,int param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  TBlendableToken<FControlRigTrackTokenVector> *pTVar6;
  TBlendableToken<FControlRigTrackTokenVector> *pTVar7;
  
  uVar3 = *(undefined8 *)param_1->Channels;
  uVar4 = *(undefined8 *)(param_1->Channels + 2);
  (this->Value).bIsValid = true;
  (this->Value).bInline = true;
  *(undefined ***)(this->Value).Data.Pad =
       &
       ___7__TData_U__TMultiChannelValue_M_02_MovieScene_UE_____TBlendableToken_UFControlRigTrackTokenVector____6B_
  ;
  *(undefined8 *)((this->Value).Data.Pad + 8) = uVar3;
  *(undefined8 *)((this->Value).Data.Pad + 0x10) = uVar4;
  if (!(this->Value).bIsValid) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TBlendableToken<FControlRigTrackTokenVector> *)(*pcVar2)();
      return pTVar6;
    }
  }
  pTVar6 = this;
  if (!(this->Value).bInline) {
    pTVar6 = *(TBlendableToken<FControlRigTrackTokenVector> **)(this->Value).Data.Pad;
  }
  if (!(this->Value).bIsValid) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TBlendableToken<FControlRigTrackTokenVector> *)(*pcVar2)();
      return pTVar6;
    }
  }
  pTVar7 = this;
  if (!(this->Value).bInline) {
    pTVar7 = *(TBlendableToken<FControlRigTrackTokenVector> **)(this->Value).Data.Pad;
  }
  if (pTVar6 != pTVar7) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TBlendableToken<FControlRigTrackTokenVector> *)(*pcVar2)();
      return pTVar6;
    }
  }
  (this->AnimatingScope).Key.SequenceID = 0xffffffff;
  (this->AnimatingScope).Key.TrackIdentifier = 0xffffffff;
  (this->AnimatingScope).Key.SectionIndex = 0xffffffff;
  (this->AnimatingScope).CompletionMode = KeepState;
  this->BlendingOrder = param_4;
  this->Weight = param_3;
  this->BlendType = param_2;
  this->HierarchicalBias = 0;
  return this;
}

// TBlendableToken<FControlRigTrackTokenFloat><float_const_&> @ 14a383750

/* WARNING: Type propagation algorithm not settling */

TBlendableToken<FControlRigTrackTokenFloat> * __thiscall
TBlendableToken<FControlRigTrackTokenFloat>::
TBlendableToken<FControlRigTrackTokenFloat><float_const_&>
          (TBlendableToken<FControlRigTrackTokenFloat> *this,float *param_1,
          EMovieSceneBlendType param_2,float param_3,int param_4)

{
  undefined1 *puVar1;
  float fVar2;
  undefined1 uVar3;
  code *pcVar4;
  bool bVar5;
  TBlendableToken<FControlRigTrackTokenFloat> *pTVar6;
  TBlendableToken<FControlRigTrackTokenFloat> *pTVar7;
  
  fVar2 = *param_1;
  (this->Value).bIsValid = false;
  (this->Value).bInline = false;
  pTVar6 = FMemory::Malloc(0x10,8);
  (this->Value).bIsValid = true;
  *(TBlendableToken<FControlRigTrackTokenFloat> **)(this->Value).Data.Pad = pTVar6;
  if ((this->Value).bInline) {
    pTVar6 = this;
  }
  *(float *)&(pTVar6->Value).field_0x8 = fVar2;
  *(undefined ***)(pTVar6->Value).Data.Pad =
       &___7__TData_M___TBlendableToken_UFControlRigTrackTokenFloat____6B_;
  if (!(this->Value).bIsValid) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TBlendableToken<FControlRigTrackTokenFloat> *)(*pcVar4)();
      return pTVar6;
    }
  }
  pTVar6 = this;
  if (!(this->Value).bInline) {
    pTVar6 = *(TBlendableToken<FControlRigTrackTokenFloat> **)(this->Value).Data.Pad;
  }
  if (!(this->Value).bIsValid) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TBlendableToken<FControlRigTrackTokenFloat> *)(*pcVar4)();
      return pTVar6;
    }
  }
  pTVar7 = this;
  if (!(this->Value).bInline) {
    pTVar7 = *(TBlendableToken<FControlRigTrackTokenFloat> **)(this->Value).Data.Pad;
  }
  if (pTVar6 != pTVar7) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TBlendableToken<FControlRigTrackTokenFloat> *)(*pcVar4)();
      return pTVar6;
    }
  }
  (this->AnimatingScope).Key.SequenceID = 0xffffffff;
  (this->AnimatingScope).Key.TrackIdentifier = 0xffffffff;
  (this->AnimatingScope).Key.SectionIndex = 0xffffffff;
  (this->AnimatingScope).CompletionMode = KeepState;
  this->BlendingOrder = param_4;
  this->Weight = param_3;
  this->BlendType = param_2;
  this->HierarchicalBias = 0;
  return this;
}

// TBlendableToken<FControlRigTrackTokenTransform> @ 14a3b4900

TBlendableToken<FControlRigTrackTokenTransform> * __thiscall
TBlendableToken<FControlRigTrackTokenTransform>::TBlendableToken<FControlRigTrackTokenTransform>
          (TBlendableToken<FControlRigTrackTokenTransform> *this,
          TBlendableToken<FControlRigTrackTokenTransform> *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  undefined8 uVar4;
  FMovieSceneTrackIdentifier FVar5;
  
  puVar1 = &(this->Value).field_0x48;
  bVar3 = *puVar1;
  puVar2 = &(this->Value).field_0x48;
  (this->Value).bIsValid = false;
  (this->Value).bInline = true;
  if ((param_1->Value).bIsValid) {
    (this->Value).field_0x48 = bVar3 & 0xfe | 3;
    (param_1->Value).bIsValid = false;
    puVar1 = &(this->Value).field_0x48;
    *puVar1 = *puVar1 ^ ((param_1->Value).field_0x48 ^ (this->Value).field_0x48) & 2;
    uVar4 = *(undefined8 *)((param_1->Value).Data.Pad + 8);
    *(undefined8 *)(this->Value).Data.Pad = *(undefined8 *)(param_1->Value).Data.Pad;
    *(undefined8 *)((this->Value).Data.Pad + 8) = uVar4;
    uVar4 = *(undefined8 *)((param_1->Value).Data.Pad + 0x18);
    *(undefined8 *)((this->Value).Data.Pad + 0x10) =
         *(undefined8 *)((param_1->Value).Data.Pad + 0x10);
    *(undefined8 *)((this->Value).Data.Pad + 0x18) = uVar4;
    uVar4 = *(undefined8 *)((param_1->Value).Data.Pad + 0x28);
    *(undefined8 *)((this->Value).Data.Pad + 0x20) =
         *(undefined8 *)((param_1->Value).Data.Pad + 0x20);
    *(undefined8 *)((this->Value).Data.Pad + 0x28) = uVar4;
    uVar4 = *(undefined8 *)((param_1->Value).Data.Pad + 0x38);
    *(undefined8 *)((this->Value).Data.Pad + 0x30) =
         *(undefined8 *)((param_1->Value).Data.Pad + 0x30);
    *(undefined8 *)((this->Value).Data.Pad + 0x38) = uVar4;
    *(undefined8 *)((this->Value).Data.Pad + 0x40) =
         *(undefined8 *)((param_1->Value).Data.Pad + 0x40);
  }
  FVar5.Value = (param_1->AnimatingScope).Key.TrackIdentifier.Value;
  uVar4 = *(undefined8 *)&(param_1->AnimatingScope).Key.SectionIndex;
  (this->AnimatingScope).Key.SequenceID =
       (FMovieSceneSequenceID)(param_1->AnimatingScope).Key.SequenceID.Value;
  (this->AnimatingScope).Key.TrackIdentifier = (FMovieSceneTrackIdentifier)FVar5.Value;
  *(undefined8 *)&(this->AnimatingScope).Key.SectionIndex = uVar4;
  this->HierarchicalBias = param_1->HierarchicalBias;
  this->Weight = param_1->Weight;
  this->BlendType = param_1->BlendType;
  this->BlendingOrder = param_1->BlendingOrder;
  return this;
}

// TBlendableToken<FControlRigTrackTokenVector> @ 14a3b4990

TBlendableToken<FControlRigTrackTokenVector> * __thiscall
TBlendableToken<FControlRigTrackTokenVector>::TBlendableToken<FControlRigTrackTokenVector>
          (TBlendableToken<FControlRigTrackTokenVector> *this,
          TBlendableToken<FControlRigTrackTokenVector> *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  undefined8 uVar4;
  FMovieSceneTrackIdentifier FVar5;
  
  puVar1 = &(this->Value).field_0x18;
  bVar3 = *puVar1;
  puVar2 = &(this->Value).field_0x18;
  (this->Value).bIsValid = false;
  (this->Value).bInline = true;
  if ((param_1->Value).bIsValid) {
    (this->Value).field_0x18 = bVar3 & 0xfe | 3;
    (param_1->Value).bIsValid = false;
    puVar1 = &(this->Value).field_0x18;
    *puVar1 = *puVar1 ^ ((param_1->Value).field_0x18 ^ (this->Value).field_0x18) & 2;
    uVar4 = *(undefined8 *)((param_1->Value).Data.Pad + 8);
    *(undefined8 *)(this->Value).Data.Pad = *(undefined8 *)(param_1->Value).Data.Pad;
    *(undefined8 *)((this->Value).Data.Pad + 8) = uVar4;
    *(undefined8 *)((this->Value).Data.Pad + 0x10) =
         *(undefined8 *)((param_1->Value).Data.Pad + 0x10);
  }
  FVar5.Value = (param_1->AnimatingScope).Key.TrackIdentifier.Value;
  uVar4 = *(undefined8 *)&(param_1->AnimatingScope).Key.SectionIndex;
  (this->AnimatingScope).Key.SequenceID =
       (FMovieSceneSequenceID)(param_1->AnimatingScope).Key.SequenceID.Value;
  (this->AnimatingScope).Key.TrackIdentifier = (FMovieSceneTrackIdentifier)FVar5.Value;
  *(undefined8 *)&(this->AnimatingScope).Key.SectionIndex = uVar4;
  this->HierarchicalBias = param_1->HierarchicalBias;
  this->Weight = param_1->Weight;
  this->BlendType = param_1->BlendType;
  this->BlendingOrder = param_1->BlendingOrder;
  return this;
}

