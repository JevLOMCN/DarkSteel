// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 4

// InitializeFrom<FMovieSceneNiagaraBoolParameterSectionTemplate,FMovieSceneNiagaraBoolParameterSectionTemplate> @ 148f3e1f0

void __thiscall
TInlineValue<FMovieSceneEvalTemplate,128,8>::
InitializeFrom<FMovieSceneNiagaraBoolParameterSectionTemplate,FMovieSceneNiagaraBoolParameterSectionTemplate>
          (TInlineValue<FMovieSceneEvalTemplate,128,8> *this,
          FMovieSceneNiagaraBoolParameterSectionTemplate *param_1)

{
  FMovieSceneChannel *this_00;
  undefined1 uVar1;
  code *pcVar2;
  TInlineValue<FMovieSceneEvalTemplate,128,8> *pTVar3;
  longlong lVar4;
  bool bVar5;
  TInlineValue<FMovieSceneEvalTemplate,128,8> *pTVar6;
  
  this->bInline = false;
  pTVar6 = FMemory::Malloc(0x160,8);
  this->bIsValid = true;
  *(TInlineValue<FMovieSceneEvalTemplate,128,8> **)(this->Data).Pad = pTVar6;
  if (this->bInline) {
    pTVar6 = this;
  }
  *(undefined ***)(pTVar6->Data).Pad = &___7FMovieSceneEvalTemplateBase__6B_;
  this_00 = (FMovieSceneChannel *)((pTVar6->Data).Pad + 0x40);
  lVar4 = param_1->_padding_;
  *(undefined ***)(pTVar6->Data).Pad = &___7FMovieSceneEvalTemplate__6B_;
  (pTVar6->Data).Pad[8] = (uchar)lVar4;
  (pTVar6->Data).Pad[0x10] = (uchar)param_1->_padding_;
  *(undefined8 *)((pTVar6->Data).Pad + 0x14) = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  *(undefined ***)(pTVar6->Data).Pad = &___7FMovieSceneNiagaraParameterSectionTemplate__6B_;
  *(longlong *)((pTVar6->Data).Pad + 0x20) = param_1->_padding_;
  *(int *)((pTVar6->Data).Pad + 0x28) = (int)param_1->_padding_;
  (pTVar6->Data).Pad[0x30] = '\0';
  (pTVar6->Data).Pad[0x31] = '\0';
  (pTVar6->Data).Pad[0x32] = '\0';
  (pTVar6->Data).Pad[0x33] = '\0';
  (pTVar6->Data).Pad[0x34] = '\0';
  (pTVar6->Data).Pad[0x35] = '\0';
  (pTVar6->Data).Pad[0x36] = '\0';
  (pTVar6->Data).Pad[0x37] = '\0';
  *(longlong *)((pTVar6->Data).Pad + 0x30) = param_1->_padding_;
  param_1->_padding_ = 0;
  *(int *)((pTVar6->Data).Pad + 0x38) = (int)param_1->_padding_;
  *(undefined4 *)((pTVar6->Data).Pad + 0x3c) = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  param_1->_padding_ = 0;
  *(undefined ***)(pTVar6->Data).Pad = &___7FMovieSceneNiagaraBoolParameterSectionTemplate__6B_;
  FMovieSceneChannel::FMovieSceneChannel(this_00,(FMovieSceneChannel *)&param_1->BoolChannel);
  this_00->_padding_ = (longlong)&___7FMovieSceneBoolChannel__6B_;
  pTVar6[1].Data.Pad[0x20] = (param_1->BoolChannel).PreInfinityExtrap.Value;
  pTVar6[1].Data.Pad[0x21] = (param_1->BoolChannel).PostInfinityExtrap.Value;
  pTVar3 = pTVar6 + 1;
  (pTVar3->Data).Pad[0x28] = '\0';
  (pTVar3->Data).Pad[0x29] = '\0';
  (pTVar3->Data).Pad[0x2a] = '\0';
  (pTVar3->Data).Pad[0x2b] = '\0';
  (pTVar3->Data).Pad[0x2c] = '\0';
  (pTVar3->Data).Pad[0x2d] = '\0';
  (pTVar3->Data).Pad[0x2e] = '\0';
  (pTVar3->Data).Pad[0x2f] = '\0';
  *(FScriptContainerElement **)(pTVar6[1].Data.Pad + 0x28) =
       (param_1->BoolChannel).Times.AllocatorInstance.Data;
  (param_1->BoolChannel).Times.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pTVar6[1].Data.Pad + 0x30) = (param_1->BoolChannel).Times.ArrayNum;
  *(int *)(pTVar6[1].Data.Pad + 0x34) = (param_1->BoolChannel).Times.ArrayMax;
  (param_1->BoolChannel).Times.ArrayNum = 0;
  (param_1->BoolChannel).Times.ArrayMax = 0;
  pTVar6[1].Data.Pad[0x38] = (param_1->BoolChannel).DefaultValue;
  bVar5 = (param_1->BoolChannel).bHasDefaultValue;
  pTVar3 = pTVar6 + 1;
  (pTVar3->Data).Pad[0x40] = '\0';
  (pTVar3->Data).Pad[0x41] = '\0';
  (pTVar3->Data).Pad[0x42] = '\0';
  (pTVar3->Data).Pad[0x43] = '\0';
  (pTVar3->Data).Pad[0x44] = '\0';
  (pTVar3->Data).Pad[0x45] = '\0';
  (pTVar3->Data).Pad[0x46] = '\0';
  (pTVar3->Data).Pad[0x47] = '\0';
  pTVar6[1].Data.Pad[0x39] = bVar5;
  *(FScriptContainerElement **)(pTVar6[1].Data.Pad + 0x40) =
       (param_1->BoolChannel).Values.AllocatorInstance.Data;
  (param_1->BoolChannel).Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pTVar6[1].Data.Pad + 0x48) = (param_1->BoolChannel).Values.ArrayNum;
  *(int *)(pTVar6[1].Data.Pad + 0x4c) = (param_1->BoolChannel).Values.ArrayMax;
  (param_1->BoolChannel).Values.ArrayNum = 0;
  (param_1->BoolChannel).Values.ArrayMax = 0;
  pTVar3 = pTVar6 + 1;
  (pTVar3->Data).Pad[0x50] = '\0';
  (pTVar3->Data).Pad[0x51] = '\0';
  (pTVar3->Data).Pad[0x52] = '\0';
  (pTVar3->Data).Pad[0x53] = '\0';
  (pTVar3->Data).Pad[0x54] = '\0';
  (pTVar3->Data).Pad[0x55] = '\0';
  (pTVar3->Data).Pad[0x56] = '\0';
  (pTVar3->Data).Pad[0x57] = '\0';
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
  (pTVar3->Data).Pad[0x70] = '\0';
  (pTVar3->Data).Pad[0x71] = '\0';
  (pTVar3->Data).Pad[0x72] = '\0';
  (pTVar3->Data).Pad[0x73] = '\0';
  (pTVar3->Data).Pad[0x74] = '\0';
  (pTVar3->Data).Pad[0x75] = '\0';
  (pTVar3->Data).Pad[0x76] = '\0';
  (pTVar3->Data).Pad[0x77] = '\0';
  pTVar3 = pTVar6 + 1;
  (pTVar3->Data).Pad[0x78] = '\0';
  (pTVar3->Data).Pad[0x79] = '\0';
  (pTVar3->Data).Pad[0x7a] = '\0';
  (pTVar3->Data).Pad[0x7b] = '\0';
  pTVar3 = pTVar6 + 1;
  (pTVar3->Data).Pad[0x7c] = 0x80;
  (pTVar3->Data).Pad[0x7d] = '\0';
  (pTVar3->Data).Pad[0x7e] = '\0';
  (pTVar3->Data).Pad[0x7f] = '\0';
  *(undefined4 *)&pTVar6[1].field_0x80 = 0xffffffff;
  *(undefined4 *)&pTVar6[1].field_0x84 = 0;
  pTVar6[2].Data.Pad[0] = '\0';
  pTVar6[2].Data.Pad[1] = '\0';
  pTVar6[2].Data.Pad[2] = '\0';
  pTVar6[2].Data.Pad[3] = '\0';
  pTVar6[2].Data.Pad[4] = '\0';
  pTVar6[2].Data.Pad[5] = '\0';
  pTVar6[2].Data.Pad[6] = '\0';
  pTVar6[2].Data.Pad[7] = '\0';
  pTVar3 = pTVar6 + 2;
  (pTVar3->Data).Pad[8] = '\0';
  (pTVar3->Data).Pad[9] = '\0';
  (pTVar3->Data).Pad[10] = '\0';
  (pTVar3->Data).Pad[0xb] = '\0';
  (pTVar3->Data).Pad[0xc] = '\0';
  (pTVar3->Data).Pad[0xd] = '\0';
  (pTVar3->Data).Pad[0xe] = '\0';
  (pTVar3->Data).Pad[0xf] = '\0';
  pTVar3 = pTVar6 + 2;
  (pTVar3->Data).Pad[0x20] = '\0';
  (pTVar3->Data).Pad[0x21] = '\0';
  (pTVar3->Data).Pad[0x22] = '\0';
  (pTVar3->Data).Pad[0x23] = '\0';
  (pTVar3->Data).Pad[0x24] = '\0';
  (pTVar3->Data).Pad[0x25] = '\0';
  (pTVar3->Data).Pad[0x26] = '\0';
  (pTVar3->Data).Pad[0x27] = '\0';
  pTVar3 = pTVar6 + 2;
  (pTVar3->Data).Pad[0x28] = '\0';
  (pTVar3->Data).Pad[0x29] = '\0';
  (pTVar3->Data).Pad[0x2a] = '\0';
  (pTVar3->Data).Pad[0x2b] = '\0';
  pTVar3 = pTVar6 + 2;
  (pTVar3->Data).Pad[0x2c] = 0x80;
  (pTVar3->Data).Pad[0x2d] = '\0';
  (pTVar3->Data).Pad[0x2e] = '\0';
  (pTVar3->Data).Pad[0x2f] = '\0';
  pTVar3 = pTVar6 + 2;
  (pTVar3->Data).Pad[0x30] = 0xff;
  (pTVar3->Data).Pad[0x31] = 0xff;
  (pTVar3->Data).Pad[0x32] = 0xff;
  (pTVar3->Data).Pad[0x33] = 0xff;
  pTVar3 = pTVar6 + 2;
  (pTVar3->Data).Pad[0x34] = '\0';
  (pTVar3->Data).Pad[0x35] = '\0';
  (pTVar3->Data).Pad[0x36] = '\0';
  (pTVar3->Data).Pad[0x37] = '\0';
  pTVar3 = pTVar6 + 2;
  (pTVar3->Data).Pad[0x40] = '\0';
  (pTVar3->Data).Pad[0x41] = '\0';
  (pTVar3->Data).Pad[0x42] = '\0';
  (pTVar3->Data).Pad[0x43] = '\0';
  (pTVar3->Data).Pad[0x44] = '\0';
  (pTVar3->Data).Pad[0x45] = '\0';
  (pTVar3->Data).Pad[0x46] = '\0';
  (pTVar3->Data).Pad[0x47] = '\0';
  pTVar6 = pTVar6 + 2;
  (pTVar6->Data).Pad[0x48] = '\0';
  (pTVar6->Data).Pad[0x49] = '\0';
  (pTVar6->Data).Pad[0x4a] = '\0';
  (pTVar6->Data).Pad[0x4b] = '\0';
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

// InitializeFrom<FMovieSceneNiagaraColorParameterSectionTemplate,FMovieSceneNiagaraColorParameterSectionTemplate> @ 148f3e4a0

void __thiscall
TInlineValue<FMovieSceneEvalTemplate,128,8>::
InitializeFrom<FMovieSceneNiagaraColorParameterSectionTemplate,FMovieSceneNiagaraColorParameterSectionTemplate>
          (TInlineValue<FMovieSceneEvalTemplate,128,8> *this,
          FMovieSceneNiagaraColorParameterSectionTemplate *param_1)

{
  undefined1 uVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  TInlineValue<FMovieSceneEvalTemplate,128,8> *pTVar5;
  
  this->bInline = false;
  pTVar5 = FMemory::Malloc(0x4e0,8);
  this->bIsValid = true;
  *(TInlineValue<FMovieSceneEvalTemplate,128,8> **)(this->Data).Pad = pTVar5;
  if (this->bInline) {
    pTVar5 = this;
  }
  *(undefined ***)(pTVar5->Data).Pad = &___7FMovieSceneEvalTemplateBase__6B_;
  lVar3 = param_1->_padding_;
  *(undefined ***)(pTVar5->Data).Pad = &___7FMovieSceneEvalTemplate__6B_;
  (pTVar5->Data).Pad[8] = (uchar)lVar3;
  (pTVar5->Data).Pad[0x10] = (uchar)param_1->_padding_;
  *(undefined8 *)((pTVar5->Data).Pad + 0x14) = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  *(undefined ***)(pTVar5->Data).Pad = &___7FMovieSceneNiagaraParameterSectionTemplate__6B_;
  *(longlong *)((pTVar5->Data).Pad + 0x20) = param_1->_padding_;
  *(int *)((pTVar5->Data).Pad + 0x28) = (int)param_1->_padding_;
  (pTVar5->Data).Pad[0x30] = '\0';
  (pTVar5->Data).Pad[0x31] = '\0';
  (pTVar5->Data).Pad[0x32] = '\0';
  (pTVar5->Data).Pad[0x33] = '\0';
  (pTVar5->Data).Pad[0x34] = '\0';
  (pTVar5->Data).Pad[0x35] = '\0';
  (pTVar5->Data).Pad[0x36] = '\0';
  (pTVar5->Data).Pad[0x37] = '\0';
  *(longlong *)((pTVar5->Data).Pad + 0x30) = param_1->_padding_;
  param_1->_padding_ = 0;
  *(int *)((pTVar5->Data).Pad + 0x38) = (int)param_1->_padding_;
  *(undefined4 *)((pTVar5->Data).Pad + 0x3c) = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  param_1->_padding_ = 0;
  *(undefined ***)(pTVar5->Data).Pad = &___7FMovieSceneNiagaraColorParameterSectionTemplate__6B_;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((pTVar5->Data).Pad + 0x40),&param_1->RedChannel);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)(pTVar5[2].Data.Pad + 0x58),&param_1->GreenChannel);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)(pTVar5[4].Data.Pad + 0x70),&param_1->BlueChannel);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)(pTVar5 + 7),&param_1->AlphaChannel);
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

// InitializeFrom<FMovieSceneNiagaraIntegerParameterSectionTemplate,FMovieSceneNiagaraIntegerParameterSectionTemplate> @ 148f3e650

void __thiscall
TInlineValue<FMovieSceneEvalTemplate,128,8>::
InitializeFrom<FMovieSceneNiagaraIntegerParameterSectionTemplate,FMovieSceneNiagaraIntegerParameterSectionTemplate>
          (TInlineValue<FMovieSceneEvalTemplate,128,8> *this,
          FMovieSceneNiagaraIntegerParameterSectionTemplate *param_1)

{
  FMovieSceneChannel *this_00;
  undefined1 uVar1;
  code *pcVar2;
  TInlineValue<FMovieSceneEvalTemplate,128,8> *pTVar3;
  longlong lVar4;
  bool bVar5;
  TInlineValue<FMovieSceneEvalTemplate,128,8> *pTVar6;
  
  this->bInline = false;
  pTVar6 = FMemory::Malloc(0x160,8);
  this->bIsValid = true;
  *(TInlineValue<FMovieSceneEvalTemplate,128,8> **)(this->Data).Pad = pTVar6;
  if (this->bInline) {
    pTVar6 = this;
  }
  *(undefined ***)(pTVar6->Data).Pad = &___7FMovieSceneEvalTemplateBase__6B_;
  this_00 = (FMovieSceneChannel *)((pTVar6->Data).Pad + 0x40);
  lVar4 = param_1->_padding_;
  *(undefined ***)(pTVar6->Data).Pad = &___7FMovieSceneEvalTemplate__6B_;
  (pTVar6->Data).Pad[8] = (uchar)lVar4;
  (pTVar6->Data).Pad[0x10] = (uchar)param_1->_padding_;
  *(undefined8 *)((pTVar6->Data).Pad + 0x14) = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  *(undefined ***)(pTVar6->Data).Pad = &___7FMovieSceneNiagaraParameterSectionTemplate__6B_;
  *(longlong *)((pTVar6->Data).Pad + 0x20) = param_1->_padding_;
  *(int *)((pTVar6->Data).Pad + 0x28) = (int)param_1->_padding_;
  (pTVar6->Data).Pad[0x30] = '\0';
  (pTVar6->Data).Pad[0x31] = '\0';
  (pTVar6->Data).Pad[0x32] = '\0';
  (pTVar6->Data).Pad[0x33] = '\0';
  (pTVar6->Data).Pad[0x34] = '\0';
  (pTVar6->Data).Pad[0x35] = '\0';
  (pTVar6->Data).Pad[0x36] = '\0';
  (pTVar6->Data).Pad[0x37] = '\0';
  *(longlong *)((pTVar6->Data).Pad + 0x30) = param_1->_padding_;
  param_1->_padding_ = 0;
  *(int *)((pTVar6->Data).Pad + 0x38) = (int)param_1->_padding_;
  *(undefined4 *)((pTVar6->Data).Pad + 0x3c) = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  param_1->_padding_ = 0;
  *(undefined ***)(pTVar6->Data).Pad = &___7FMovieSceneNiagaraIntegerParameterSectionTemplate__6B_;
  FMovieSceneChannel::FMovieSceneChannel(this_00,(FMovieSceneChannel *)&param_1->IntegerChannel);
  this_00->_padding_ = (longlong)&___7FMovieSceneIntegerChannel__6B_;
  pTVar6[1].Data.Pad[0x20] = (param_1->IntegerChannel).PreInfinityExtrap.Value;
  pTVar6[1].Data.Pad[0x21] = (param_1->IntegerChannel).PostInfinityExtrap.Value;
  bVar5 = (param_1->IntegerChannel).bInterpolateLinearKeys;
  pTVar3 = pTVar6 + 1;
  (pTVar3->Data).Pad[0x28] = '\0';
  (pTVar3->Data).Pad[0x29] = '\0';
  (pTVar3->Data).Pad[0x2a] = '\0';
  (pTVar3->Data).Pad[0x2b] = '\0';
  (pTVar3->Data).Pad[0x2c] = '\0';
  (pTVar3->Data).Pad[0x2d] = '\0';
  (pTVar3->Data).Pad[0x2e] = '\0';
  (pTVar3->Data).Pad[0x2f] = '\0';
  pTVar6[1].Data.Pad[0x22] = bVar5;
  *(FScriptContainerElement **)(pTVar6[1].Data.Pad + 0x28) =
       (param_1->IntegerChannel).Times.AllocatorInstance.Data;
  (param_1->IntegerChannel).Times.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pTVar6[1].Data.Pad + 0x30) = (param_1->IntegerChannel).Times.ArrayNum;
  *(int *)(pTVar6[1].Data.Pad + 0x34) = (param_1->IntegerChannel).Times.ArrayMax;
  (param_1->IntegerChannel).Times.ArrayNum = 0;
  (param_1->IntegerChannel).Times.ArrayMax = 0;
  *(int *)(pTVar6[1].Data.Pad + 0x38) = (param_1->IntegerChannel).DefaultValue;
  bVar5 = (param_1->IntegerChannel).bHasDefaultValue;
  pTVar3 = pTVar6 + 1;
  (pTVar3->Data).Pad[0x40] = '\0';
  (pTVar3->Data).Pad[0x41] = '\0';
  (pTVar3->Data).Pad[0x42] = '\0';
  (pTVar3->Data).Pad[0x43] = '\0';
  (pTVar3->Data).Pad[0x44] = '\0';
  (pTVar3->Data).Pad[0x45] = '\0';
  (pTVar3->Data).Pad[0x46] = '\0';
  (pTVar3->Data).Pad[0x47] = '\0';
  pTVar6[1].Data.Pad[0x3c] = bVar5;
  *(FScriptContainerElement **)(pTVar6[1].Data.Pad + 0x40) =
       (param_1->IntegerChannel).Values.AllocatorInstance.Data;
  (param_1->IntegerChannel).Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pTVar6[1].Data.Pad + 0x48) = (param_1->IntegerChannel).Values.ArrayNum;
  *(int *)(pTVar6[1].Data.Pad + 0x4c) = (param_1->IntegerChannel).Values.ArrayMax;
  (param_1->IntegerChannel).Values.ArrayNum = 0;
  (param_1->IntegerChannel).Values.ArrayMax = 0;
  pTVar3 = pTVar6 + 1;
  (pTVar3->Data).Pad[0x50] = '\0';
  (pTVar3->Data).Pad[0x51] = '\0';
  (pTVar3->Data).Pad[0x52] = '\0';
  (pTVar3->Data).Pad[0x53] = '\0';
  (pTVar3->Data).Pad[0x54] = '\0';
  (pTVar3->Data).Pad[0x55] = '\0';
  (pTVar3->Data).Pad[0x56] = '\0';
  (pTVar3->Data).Pad[0x57] = '\0';
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
  (pTVar3->Data).Pad[0x70] = '\0';
  (pTVar3->Data).Pad[0x71] = '\0';
  (pTVar3->Data).Pad[0x72] = '\0';
  (pTVar3->Data).Pad[0x73] = '\0';
  (pTVar3->Data).Pad[0x74] = '\0';
  (pTVar3->Data).Pad[0x75] = '\0';
  (pTVar3->Data).Pad[0x76] = '\0';
  (pTVar3->Data).Pad[0x77] = '\0';
  pTVar3 = pTVar6 + 1;
  (pTVar3->Data).Pad[0x78] = '\0';
  (pTVar3->Data).Pad[0x79] = '\0';
  (pTVar3->Data).Pad[0x7a] = '\0';
  (pTVar3->Data).Pad[0x7b] = '\0';
  pTVar3 = pTVar6 + 1;
  (pTVar3->Data).Pad[0x7c] = 0x80;
  (pTVar3->Data).Pad[0x7d] = '\0';
  (pTVar3->Data).Pad[0x7e] = '\0';
  (pTVar3->Data).Pad[0x7f] = '\0';
  *(undefined4 *)&pTVar6[1].field_0x80 = 0xffffffff;
  *(undefined4 *)&pTVar6[1].field_0x84 = 0;
  pTVar6[2].Data.Pad[0] = '\0';
  pTVar6[2].Data.Pad[1] = '\0';
  pTVar6[2].Data.Pad[2] = '\0';
  pTVar6[2].Data.Pad[3] = '\0';
  pTVar6[2].Data.Pad[4] = '\0';
  pTVar6[2].Data.Pad[5] = '\0';
  pTVar6[2].Data.Pad[6] = '\0';
  pTVar6[2].Data.Pad[7] = '\0';
  pTVar3 = pTVar6 + 2;
  (pTVar3->Data).Pad[8] = '\0';
  (pTVar3->Data).Pad[9] = '\0';
  (pTVar3->Data).Pad[10] = '\0';
  (pTVar3->Data).Pad[0xb] = '\0';
  (pTVar3->Data).Pad[0xc] = '\0';
  (pTVar3->Data).Pad[0xd] = '\0';
  (pTVar3->Data).Pad[0xe] = '\0';
  (pTVar3->Data).Pad[0xf] = '\0';
  pTVar3 = pTVar6 + 2;
  (pTVar3->Data).Pad[0x20] = '\0';
  (pTVar3->Data).Pad[0x21] = '\0';
  (pTVar3->Data).Pad[0x22] = '\0';
  (pTVar3->Data).Pad[0x23] = '\0';
  (pTVar3->Data).Pad[0x24] = '\0';
  (pTVar3->Data).Pad[0x25] = '\0';
  (pTVar3->Data).Pad[0x26] = '\0';
  (pTVar3->Data).Pad[0x27] = '\0';
  pTVar3 = pTVar6 + 2;
  (pTVar3->Data).Pad[0x28] = '\0';
  (pTVar3->Data).Pad[0x29] = '\0';
  (pTVar3->Data).Pad[0x2a] = '\0';
  (pTVar3->Data).Pad[0x2b] = '\0';
  pTVar3 = pTVar6 + 2;
  (pTVar3->Data).Pad[0x2c] = 0x80;
  (pTVar3->Data).Pad[0x2d] = '\0';
  (pTVar3->Data).Pad[0x2e] = '\0';
  (pTVar3->Data).Pad[0x2f] = '\0';
  pTVar3 = pTVar6 + 2;
  (pTVar3->Data).Pad[0x30] = 0xff;
  (pTVar3->Data).Pad[0x31] = 0xff;
  (pTVar3->Data).Pad[0x32] = 0xff;
  (pTVar3->Data).Pad[0x33] = 0xff;
  pTVar3 = pTVar6 + 2;
  (pTVar3->Data).Pad[0x34] = '\0';
  (pTVar3->Data).Pad[0x35] = '\0';
  (pTVar3->Data).Pad[0x36] = '\0';
  (pTVar3->Data).Pad[0x37] = '\0';
  pTVar3 = pTVar6 + 2;
  (pTVar3->Data).Pad[0x40] = '\0';
  (pTVar3->Data).Pad[0x41] = '\0';
  (pTVar3->Data).Pad[0x42] = '\0';
  (pTVar3->Data).Pad[0x43] = '\0';
  (pTVar3->Data).Pad[0x44] = '\0';
  (pTVar3->Data).Pad[0x45] = '\0';
  (pTVar3->Data).Pad[0x46] = '\0';
  (pTVar3->Data).Pad[0x47] = '\0';
  pTVar6 = pTVar6 + 2;
  (pTVar6->Data).Pad[0x48] = '\0';
  (pTVar6->Data).Pad[0x49] = '\0';
  (pTVar6->Data).Pad[0x4a] = '\0';
  (pTVar6->Data).Pad[0x4b] = '\0';
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

// InitializeFrom<FPreAnimatedParameterValueToken,FPreAnimatedParameterValueToken> @ 148f3e900

void __thiscall
TInlineValue<IMovieScenePreAnimatedToken,32,8>::
InitializeFrom<FPreAnimatedParameterValueToken,FPreAnimatedParameterValueToken>
          (TInlineValue<IMovieScenePreAnimatedToken,32,8> *this,
          FPreAnimatedParameterValueToken *param_1)

{
  undefined1 uVar1;
  code *pcVar2;
  TInlineValue<IMovieScenePreAnimatedToken,32,8> *pTVar3;
  bool bVar4;
  TInlineValue<IMovieScenePreAnimatedToken,32,8> *pTVar5;
  
  this->bInline = false;
  pTVar5 = FMemory::Malloc(0x38,8);
  this->bIsValid = true;
  *(TInlineValue<IMovieScenePreAnimatedToken,32,8> **)(this->Data).Pad = pTVar5;
  if (this->bInline) {
    pTVar5 = this;
  }
  *(undefined ***)(pTVar5->Data).Pad = &___7FPreAnimatedParameterValueToken__6B_;
  *(longlong *)((pTVar5->Data).Pad + 8) = (param_1->Parameter)._padding_;
  *(int *)((pTVar5->Data).Pad + 0x10) = (int)(param_1->Parameter)._padding_;
  (pTVar5->Data).Pad[0x18] = '\0';
  (pTVar5->Data).Pad[0x19] = '\0';
  (pTVar5->Data).Pad[0x1a] = '\0';
  (pTVar5->Data).Pad[0x1b] = '\0';
  (pTVar5->Data).Pad[0x1c] = '\0';
  (pTVar5->Data).Pad[0x1d] = '\0';
  (pTVar5->Data).Pad[0x1e] = '\0';
  (pTVar5->Data).Pad[0x1f] = '\0';
  *(FScriptContainerElement **)((pTVar5->Data).Pad + 0x18) =
       (param_1->Parameter).VarData.AllocatorInstance.Data;
  (param_1->Parameter).VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&pTVar5->field_0x20 = (param_1->Parameter).VarData.ArrayNum;
  *(int *)&pTVar5->field_0x24 = (param_1->Parameter).VarData.ArrayMax;
  (param_1->Parameter).VarData.ArrayNum = 0;
  (param_1->Parameter).VarData.ArrayMax = 0;
  pTVar5[1].Data.Pad[0] = '\0';
  pTVar5[1].Data.Pad[1] = '\0';
  pTVar5[1].Data.Pad[2] = '\0';
  pTVar5[1].Data.Pad[3] = '\0';
  pTVar5[1].Data.Pad[4] = '\0';
  pTVar5[1].Data.Pad[5] = '\0';
  pTVar5[1].Data.Pad[6] = '\0';
  pTVar5[1].Data.Pad[7] = '\0';
  pTVar3 = pTVar5 + 1;
  (pTVar3->Data).Pad[8] = '\0';
  (pTVar3->Data).Pad[9] = '\0';
  (pTVar3->Data).Pad[10] = '\0';
  (pTVar3->Data).Pad[0xb] = '\0';
  pTVar3 = pTVar5 + 1;
  (pTVar3->Data).Pad[0xc] = 0xff;
  (pTVar3->Data).Pad[0xd] = 0xff;
  (pTVar3->Data).Pad[0xe] = 0xff;
  (pTVar3->Data).Pad[0xf] = 0xff;
  if ((param_1->PreviousValueData).field0_0x0.TypedValue.ArrayMax != -1) {
    *(FScriptContainerElement **)pTVar5[1].Data.Pad =
         (param_1->PreviousValueData).field0_0x0.TypedValue.AllocatorInstance.Data;
    (param_1->PreviousValueData).field0_0x0.TypedValue.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(int *)(pTVar5[1].Data.Pad + 8) = (param_1->PreviousValueData).field0_0x0.TypedValue.ArrayNum;
    *(int *)(pTVar5[1].Data.Pad + 0xc) = (param_1->PreviousValueData).field0_0x0.TypedValue.ArrayMax
    ;
    *(undefined8 *)((longlong)&(param_1->PreviousValueData).field0_0x0 + 8) = 0;
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
  pTVar5 = this;
  if (!this->bInline) {
    pTVar5 = *(TInlineValue<IMovieScenePreAnimatedToken,32,8> **)(this->Data).Pad;
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
    this = *(TInlineValue<IMovieScenePreAnimatedToken,32,8> **)(this->Data).Pad;
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

