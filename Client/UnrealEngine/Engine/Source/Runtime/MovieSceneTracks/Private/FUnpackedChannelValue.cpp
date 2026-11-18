// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 4

// FUnpackedChannelValue<FMovieSceneBoolChannel> @ 146595ea0

FUnpackedChannelValue * __thiscall
UE::MovieScene::FUnpackedChannelValue::FUnpackedChannelValue<FMovieSceneBoolChannel>
          (FUnpackedChannelValue *this,TIndexedChannelValue<FMovieSceneBoolChannel> *param_1,
          FName param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  FUnpackedChannelValue *pFVar4;
  TInlineValue<UE::MovieScene::IChannelValue,24,8> *pTVar5;
  TInlineValue<UE::MovieScene::IChannelValue,24,8> *pTVar6;
  
  this->PropertyPath = param_2;
  pTVar5 = &this->ChannelValue;
  (this->ChannelValue).bIsValid = true;
  (this->ChannelValue).bInline = true;
  *(undefined ***)(pTVar5->Data).Pad =
       &___7__TChannelValue_UFMovieSceneBoolChannel___MovieScene_UE__6B_;
  (this->ChannelValue).Data.Pad[8] = (uchar)param_1->_padding_;
  *(undefined ***)(pTVar5->Data).Pad =
       &___7__TIndexedChannelValue_UFMovieSceneBoolChannel___MovieScene_UE__6B_;
  *(int *)((this->ChannelValue).Data.Pad + 0x10) = param_1->ChannelIndex;
  if (!(this->ChannelValue).bIsValid) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FUnpackedChannelValue *)(*pcVar2)();
      return pFVar4;
    }
  }
  pTVar6 = pTVar5;
  if (!(this->ChannelValue).bInline) {
    pTVar6 = *(TInlineValue<UE::MovieScene::IChannelValue,24,8> **)(pTVar5->Data).Pad;
  }
  if (!(this->ChannelValue).bIsValid) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FUnpackedChannelValue *)(*pcVar2)();
      return pFVar4;
    }
  }
  if (!(this->ChannelValue).bInline) {
    pTVar5 = *(TInlineValue<UE::MovieScene::IChannelValue,24,8> **)(pTVar5->Data).Pad;
  }
  if (pTVar6 != pTVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FUnpackedChannelValue *)(*pcVar2)();
      return pFVar4;
    }
  }
  return this;
}

// FUnpackedChannelValue<FMovieSceneDoubleChannel> @ 146595f90

FUnpackedChannelValue * __thiscall
UE::MovieScene::FUnpackedChannelValue::FUnpackedChannelValue<FMovieSceneDoubleChannel>
          (FUnpackedChannelValue *this,TIndexedChannelValue<FMovieSceneDoubleChannel> *param_1,
          FName param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  FUnpackedChannelValue *pFVar4;
  TInlineValue<UE::MovieScene::IChannelValue,24,8> *pTVar5;
  TInlineValue<UE::MovieScene::IChannelValue,24,8> *pTVar6;
  
  this->PropertyPath = param_2;
  pTVar5 = &this->ChannelValue;
  (this->ChannelValue).bIsValid = true;
  (this->ChannelValue).bInline = true;
  *(undefined ***)(pTVar5->Data).Pad =
       &___7__TChannelValue_UFMovieSceneDoubleChannel___MovieScene_UE__6B_;
  *(longlong *)((this->ChannelValue).Data.Pad + 8) = param_1->_padding_;
  *(undefined ***)(pTVar5->Data).Pad =
       &___7__TIndexedChannelValue_UFMovieSceneDoubleChannel___MovieScene_UE__6B_;
  *(int *)((this->ChannelValue).Data.Pad + 0x10) = param_1->ChannelIndex;
  if (!(this->ChannelValue).bIsValid) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FUnpackedChannelValue *)(*pcVar2)();
      return pFVar4;
    }
  }
  pTVar6 = pTVar5;
  if (!(this->ChannelValue).bInline) {
    pTVar6 = *(TInlineValue<UE::MovieScene::IChannelValue,24,8> **)(pTVar5->Data).Pad;
  }
  if (!(this->ChannelValue).bIsValid) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FUnpackedChannelValue *)(*pcVar2)();
      return pFVar4;
    }
  }
  if (!(this->ChannelValue).bInline) {
    pTVar5 = *(TInlineValue<UE::MovieScene::IChannelValue,24,8> **)(pTVar5->Data).Pad;
  }
  if (pTVar6 != pTVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FUnpackedChannelValue *)(*pcVar2)();
      return pFVar4;
    }
  }
  return this;
}

// FUnpackedChannelValue<FMovieSceneFloatChannel> @ 146596460

FUnpackedChannelValue * __thiscall
UE::MovieScene::FUnpackedChannelValue::FUnpackedChannelValue<FMovieSceneFloatChannel>
          (FUnpackedChannelValue *this,TIndexedChannelValue<FMovieSceneFloatChannel> *param_1,
          FName param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  FUnpackedChannelValue *pFVar4;
  TInlineValue<UE::MovieScene::IChannelValue,24,8> *pTVar5;
  TInlineValue<UE::MovieScene::IChannelValue,24,8> *pTVar6;
  
  this->PropertyPath = param_2;
  pTVar5 = &this->ChannelValue;
  (this->ChannelValue).bIsValid = true;
  (this->ChannelValue).bInline = true;
  *(undefined ***)(pTVar5->Data).Pad =
       &___7__TChannelValue_UFMovieSceneFloatChannel___MovieScene_UE__6B_;
  *(int *)((this->ChannelValue).Data.Pad + 8) = (int)param_1->_padding_;
  *(undefined ***)(pTVar5->Data).Pad =
       &___7__TIndexedChannelValue_UFMovieSceneFloatChannel___MovieScene_UE__6B_;
  *(int *)((this->ChannelValue).Data.Pad + 0x10) = param_1->ChannelIndex;
  if (!(this->ChannelValue).bIsValid) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FUnpackedChannelValue *)(*pcVar2)();
      return pFVar4;
    }
  }
  pTVar6 = pTVar5;
  if (!(this->ChannelValue).bInline) {
    pTVar6 = *(TInlineValue<UE::MovieScene::IChannelValue,24,8> **)(pTVar5->Data).Pad;
  }
  if (!(this->ChannelValue).bIsValid) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FUnpackedChannelValue *)(*pcVar2)();
      return pFVar4;
    }
  }
  if (!(this->ChannelValue).bInline) {
    pTVar5 = *(TInlineValue<UE::MovieScene::IChannelValue,24,8> **)(pTVar5->Data).Pad;
  }
  if (pTVar6 != pTVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FUnpackedChannelValue *)(*pcVar2)();
      return pFVar4;
    }
  }
  return this;
}

// FUnpackedChannelValue<FMovieSceneObjectPathChannel> @ 146596550

FUnpackedChannelValue * __thiscall
UE::MovieScene::FUnpackedChannelValue::FUnpackedChannelValue<FMovieSceneObjectPathChannel>
          (FUnpackedChannelValue *this,TIndexedChannelValue<FMovieSceneObjectPathChannel> *param_1,
          FName param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  UObject *pUVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  TInlineValue<UE::MovieScene::IChannelValue,24,8> *pTVar7;
  FUnpackedChannelValue *pFVar8;
  TInlineValue<UE::MovieScene::IChannelValue,24,8> *pTVar9;
  
  this->PropertyPath = param_2;
  pTVar9 = &this->ChannelValue;
  (this->ChannelValue).bIsValid = false;
  (this->ChannelValue).bInline = false;
  pTVar7 = FMemory::Malloc(0x40,8);
  (this->ChannelValue).bIsValid = true;
  *(TInlineValue<UE::MovieScene::IChannelValue,24,8> **)(pTVar9->Data).Pad = pTVar7;
  if ((this->ChannelValue).bInline) {
    pTVar7 = pTVar9;
  }
  *(undefined ***)(pTVar7->Data).Pad =
       &___7__TChannelValue_UFMovieSceneObjectPathChannel___MovieScene_UE__6B_;
  *(longlong *)((pTVar7->Data).Pad + 8) = param_1->_padding_;
  lVar5 = param_1->_padding_;
  *(longlong *)((pTVar7->Data).Pad + 0x10) = param_1->_padding_;
  *(longlong *)&pTVar7->field_0x18 = lVar5;
  *(undefined8 *)(pTVar7 + 1) = 0;
  *(longlong *)(pTVar7 + 1) = param_1->_padding_;
  param_1->_padding_ = 0;
  *(int *)((longlong)(pTVar7 + 1) + 8) = (int)param_1->_padding_;
  *(undefined4 *)((longlong)(pTVar7 + 1) + 0xc) = *(undefined4 *)((longlong)&param_1->_padding_ + 4)
  ;
  param_1->_padding_ = 0;
  pUVar3 = (UObject *)param_1->_padding_;
  *(UObject **)((longlong)(pTVar7 + 1) + 0x10) = pUVar3;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar3);
  }
  *(undefined ***)(pTVar7->Data).Pad =
       &___7__TIndexedChannelValue_UFMovieSceneObjectPathChannel___MovieScene_UE__6B_;
  *(int *)((longlong)(pTVar7 + 1) + 0x18) = param_1->ChannelIndex;
  if (!(this->ChannelValue).bIsValid) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FUnpackedChannelValue *)(*pcVar4)();
      return pFVar8;
    }
  }
  pTVar7 = pTVar9;
  if (!(this->ChannelValue).bInline) {
    pTVar7 = *(TInlineValue<UE::MovieScene::IChannelValue,24,8> **)(pTVar9->Data).Pad;
  }
  if (!(this->ChannelValue).bIsValid) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FUnpackedChannelValue *)(*pcVar4)();
      return pFVar8;
    }
  }
  if (!(this->ChannelValue).bInline) {
    pTVar9 = *(TInlineValue<UE::MovieScene::IChannelValue,24,8> **)(pTVar9->Data).Pad;
  }
  if (pTVar7 != pTVar9) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FUnpackedChannelValue *)(*pcVar4)();
      return pFVar8;
    }
  }
  return this;
}

