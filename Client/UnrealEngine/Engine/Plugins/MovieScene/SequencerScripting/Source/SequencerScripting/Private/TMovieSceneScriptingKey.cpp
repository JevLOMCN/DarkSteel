// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SequencerScripting
// Functions: 7

// GetValueFromChannel @ 14c679ce0

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneDoubleValue * __thiscall
TMovieSceneScriptingKey<FMovieSceneDoubleChannel,FMovieSceneDoubleValue>::GetValueFromChannel
          (TMovieSceneScriptingKey<FMovieSceneDoubleChannel,FMovieSceneDoubleValue> *this,
          FMovieSceneDoubleValue *__return_storage_ptr__,FKeyHandle param_1)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  int iVar7;
  FMovieSceneChannel *pFVar8;
  FMovieSceneDoubleValue *pFVar9;
  wchar_t *pwVar10;
  TArrayView<FMovieSceneDoubleValue,int> local_48;
  FMovieSceneChannelData local_38;
  undefined8 *local_20;
  
  __return_storage_ptr__->Value = 0.0;
  (__return_storage_ptr__->Tangent).ArriveTangent = 0.0;
  (__return_storage_ptr__->Tangent).LeaveTangent = 0.0;
  (__return_storage_ptr__->Tangent).ArriveTangentWeight = 0.0;
  (__return_storage_ptr__->Tangent).LeaveTangentWeight = 0.0;
  (__return_storage_ptr__->Tangent).TangentWeightMode.Value = '\0';
  *(undefined4 *)(__return_storage_ptr__->Tangent).UnserializedPaddingBytes = 0x2000000;
  __return_storage_ptr__->TangentMode = '\0';
  __return_storage_ptr__->PaddingByte = '\0';
  __return_storage_ptr__->UnserializedPaddingBytes[0] = '\0';
  pFVar8 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)this);
  if (pFVar8 == (FMovieSceneChannel *)0x0) {
    pwVar10 = 
    L"Invalid ChannelHandle for MovieSceneScriptingKey, failed to get value. Did you forget to create the key through the channel?"
    ;
  }
  else {
    FMovieSceneChannelData::FMovieSceneChannelData
              (&local_38,pFVar8,
               (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)&pFVar8[1].KeyAddedEvent,
               (FKeyHandleLookupTable *)&pFVar8[1].KeyDeletedEvent.field_0x10);
    local_20 = (undefined8 *)&pFVar8[1].KeyAddedEvent.field_0x10;
    if (((local_38.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
        (local_20 == (undefined8 *)0x0)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Times && Values",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                           ,0x122,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FMovieSceneDoubleValue *)(*pcVar2)();
      return pFVar9;
    }
    iVar7 = FMovieSceneChannelData::GetIndex(&local_38,param_1);
    if (iVar7 != -1) {
      local_48.DataPtr = (FMovieSceneDoubleValue *)*local_20;
      iVar1 = *(int *)(local_20 + 1);
      if ((iVar1 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        pFVar9 = (FMovieSceneDoubleValue *)(*pcVar2)();
        return pFVar9;
      }
      local_48.ArrayNum = iVar1;
      pFVar9 = TArrayView<FMovieSceneDoubleValue,int>::operator[](&local_48,iVar7);
      fVar4 = (pFVar9->Tangent).ArriveTangent;
      fVar5 = (pFVar9->Tangent).LeaveTangent;
      __return_storage_ptr__->Value = pFVar9->Value;
      (__return_storage_ptr__->Tangent).ArriveTangent = fVar4;
      (__return_storage_ptr__->Tangent).LeaveTangent = fVar5;
      fVar4 = (pFVar9->Tangent).LeaveTangentWeight;
      uVar3 = *(undefined8 *)&(pFVar9->Tangent).TangentWeightMode;
      (__return_storage_ptr__->Tangent).ArriveTangentWeight = (pFVar9->Tangent).ArriveTangentWeight;
      (__return_storage_ptr__->Tangent).LeaveTangentWeight = fVar4;
      *(undefined8 *)&(__return_storage_ptr__->Tangent).TangentWeightMode = uVar3;
      return __return_storage_ptr__;
    }
    pwVar10 = 
    L"Invalid KeyIndex for MovieSceneScriptingKey, failed to get value. Did you forget to create the key through the channel?"
    ;
  }
  FFrame::KismetExecutionMessage(pwVar10,Error,(FName)0x0);
  return __return_storage_ptr__;
}

// SetValueInChannel @ 14c67a770

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TMovieSceneScriptingKey<FMovieSceneDoubleChannel,FMovieSceneDoubleValue>::SetValueInChannel
          (TMovieSceneScriptingKey<FMovieSceneDoubleChannel,FMovieSceneDoubleValue> *this,
          FKeyHandle param_1,TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_2,
          FMovieSceneDoubleValue *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FMovieSceneChannel *pFVar5;
  FMovieSceneDoubleValue *pFVar6;
  wchar_t *pwVar7;
  FWeakObjectPtr local_res18;
  TArrayView<FMovieSceneDoubleValue,int> local_60;
  double local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  FMovieSceneChannelData local_30;
  undefined8 *local_18;
  
  local_res18 = param_2.WeakPtr;
  pFVar5 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)this);
  if (pFVar5 == (FMovieSceneChannel *)0x0) {
    pwVar7 = 
    L"Invalid ChannelHandle for MovieSceneScriptingKey, failed to set value. Did you forget to create the key through the channel?"
    ;
  }
  else {
    bVar3 = FWeakObjectPtr::IsValid(&local_res18);
    if (bVar3) {
      FWeakObjectPtr::Get(&local_res18);
    }
    FMovieSceneChannelData::FMovieSceneChannelData
              (&local_30,pFVar5,
               (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)&pFVar5[1].KeyAddedEvent,
               (FKeyHandleLookupTable *)&pFVar5[1].KeyDeletedEvent.field_0x10);
    local_18 = (undefined8 *)&pFVar5[1].KeyAddedEvent.field_0x10;
    if (((local_30.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
        (local_18 == (undefined8 *)0x0)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Times && Values",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                           ,0x122,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = FMovieSceneChannelData::GetIndex(&local_30,param_1);
    if (iVar4 != -1) {
      local_50 = param_3->Value;
      uStack_48._0_4_ = (param_3->Tangent).ArriveTangent;
      uStack_48._4_4_ = (param_3->Tangent).LeaveTangent;
      local_40._0_4_ = (param_3->Tangent).ArriveTangentWeight;
      local_40._4_4_ = (param_3->Tangent).LeaveTangentWeight;
      uStack_38 = *(undefined8 *)&(param_3->Tangent).TangentWeightMode;
      local_60.DataPtr = (FMovieSceneDoubleValue *)*local_18;
      iVar1 = *(int *)(local_18 + 1);
      if ((iVar1 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_60.ArrayNum = iVar1;
      pFVar6 = TArrayView<FMovieSceneDoubleValue,int>::operator[](&local_60,iVar4);
      pFVar6->Value = local_50;
      (pFVar6->Tangent).ArriveTangent = (float)(undefined4)uStack_48;
      (pFVar6->Tangent).LeaveTangent = (float)uStack_48._4_4_;
      (pFVar6->Tangent).ArriveTangentWeight = (float)(undefined4)local_40;
      (pFVar6->Tangent).LeaveTangentWeight = (float)local_40._4_4_;
      *(undefined8 *)&(pFVar6->Tangent).TangentWeightMode = uStack_38;
      return;
    }
    pwVar7 = 
    L"Invalid KeyIndex for MovieSceneScriptingKey, failed to set value. Did you forget to create the key through the channel?"
    ;
  }
  FFrame::KismetExecutionMessage(pwVar7,Error,(FName)0x0);
  return;
}

// GetValueFromChannel @ 14c68a460

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneFloatValue * __thiscall
TMovieSceneScriptingKey<FMovieSceneFloatChannel,FMovieSceneFloatValue>::GetValueFromChannel
          (TMovieSceneScriptingKey<FMovieSceneFloatChannel,FMovieSceneFloatValue> *this,
          FMovieSceneFloatValue *__return_storage_ptr__,FKeyHandle param_1)

{
  int iVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  TEnumAsByte<ERichCurveTangentWeightMode> TVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  TEnumAsByte<ERichCurveTangentMode> TVar10;
  bool bVar11;
  int iVar12;
  FMovieSceneChannel *pFVar13;
  FMovieSceneFloatValue *pFVar14;
  wchar_t *pwVar15;
  TArrayView<FMovieSceneFloatValue,int> local_48;
  FMovieSceneChannelData local_38;
  undefined8 *local_20;
  
  __return_storage_ptr__->Value = 0.0;
  (__return_storage_ptr__->Tangent).ArriveTangent = 0.0;
  (__return_storage_ptr__->Tangent).LeaveTangent = 0.0;
  (__return_storage_ptr__->Tangent).ArriveTangentWeight = 0.0;
  (__return_storage_ptr__->Tangent).LeaveTangentWeight = 0.0;
  (__return_storage_ptr__->Tangent).TangentWeightMode.Value = '\0';
  *(undefined4 *)(__return_storage_ptr__->Tangent).UnserializedPaddingBytes = 0x2000000;
  __return_storage_ptr__->TangentMode = '\0';
  __return_storage_ptr__->PaddingByte = '\0';
  __return_storage_ptr__->UnserializedPaddingBytes[0] = '\0';
  pFVar13 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)this);
  if (pFVar13 == (FMovieSceneChannel *)0x0) {
    pwVar15 = 
    L"Invalid ChannelHandle for MovieSceneScriptingKey, failed to get value. Did you forget to create the key through the channel?"
    ;
  }
  else {
    FMovieSceneChannelData::FMovieSceneChannelData
              (&local_38,pFVar13,
               (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)&pFVar13[1].KeyAddedEvent,
               (FKeyHandleLookupTable *)&pFVar13[1].KeyDeletedEvent.field_0x8);
    local_20 = (undefined8 *)&pFVar13[1].KeyAddedEvent.field_0x10;
    if (((local_38.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
        (local_20 == (undefined8 *)0x0)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Times && Values",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                            ,0x122,L""), bVar11)) {
      pcVar2 = (code *)swi(3);
      pFVar14 = (FMovieSceneFloatValue *)(*pcVar2)();
      return pFVar14;
    }
    iVar12 = FMovieSceneChannelData::GetIndex(&local_38,param_1);
    if (iVar12 != -1) {
      local_48.DataPtr = (FMovieSceneFloatValue *)*local_20;
      iVar1 = *(int *)(local_20 + 1);
      if ((iVar1 < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar11)) {
        pcVar2 = (code *)swi(3);
        pFVar14 = (FMovieSceneFloatValue *)(*pcVar2)();
        return pFVar14;
      }
      local_48.ArrayNum = iVar1;
      pFVar14 = TArrayView<FMovieSceneFloatValue,int>::operator[](&local_48,iVar12);
      fVar3 = (pFVar14->Tangent).ArriveTangent;
      fVar4 = (pFVar14->Tangent).LeaveTangent;
      fVar5 = (pFVar14->Tangent).ArriveTangentWeight;
      __return_storage_ptr__->Value = pFVar14->Value;
      (__return_storage_ptr__->Tangent).ArriveTangent = fVar3;
      (__return_storage_ptr__->Tangent).LeaveTangent = fVar4;
      (__return_storage_ptr__->Tangent).ArriveTangentWeight = fVar5;
      TVar6.Value = (pFVar14->Tangent).TangentWeightMode.Value;
      uVar7 = (pFVar14->Tangent).UnserializedPaddingBytes[0];
      uVar8 = (pFVar14->Tangent).UnserializedPaddingBytes[1];
      uVar9 = (pFVar14->Tangent).UnserializedPaddingBytes[2];
      (__return_storage_ptr__->Tangent).LeaveTangentWeight = (pFVar14->Tangent).LeaveTangentWeight;
      (__return_storage_ptr__->Tangent).TangentWeightMode =
           (TEnumAsByte<ERichCurveTangentWeightMode>)TVar6.Value;
      (__return_storage_ptr__->Tangent).UnserializedPaddingBytes[0] = uVar7;
      (__return_storage_ptr__->Tangent).UnserializedPaddingBytes[1] = uVar8;
      (__return_storage_ptr__->Tangent).UnserializedPaddingBytes[2] = uVar9;
      TVar10.Value = (pFVar14->TangentMode).Value;
      uVar7 = pFVar14->PaddingByte;
      uVar8 = pFVar14->UnserializedPaddingBytes[0];
      __return_storage_ptr__->InterpMode =
           (TEnumAsByte<ERichCurveInterpMode>)(pFVar14->InterpMode).Value;
      __return_storage_ptr__->TangentMode = (TEnumAsByte<ERichCurveTangentMode>)TVar10.Value;
      __return_storage_ptr__->PaddingByte = uVar7;
      __return_storage_ptr__->UnserializedPaddingBytes[0] = uVar8;
      return __return_storage_ptr__;
    }
    pwVar15 = 
    L"Invalid KeyIndex for MovieSceneScriptingKey, failed to get value. Did you forget to create the key through the channel?"
    ;
  }
  FFrame::KismetExecutionMessage(pwVar15,Error,(FName)0x0);
  return __return_storage_ptr__;
}

// SetValueInChannel @ 14c68c300

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TMovieSceneScriptingKey<FMovieSceneFloatChannel,FMovieSceneFloatValue>::SetValueInChannel
          (TMovieSceneScriptingKey<FMovieSceneFloatChannel,FMovieSceneFloatValue> *this,
          FKeyHandle param_1,TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_2,
          FMovieSceneFloatValue *param_3)

{
  int iVar1;
  code *pcVar2;
  float fVar3;
  TEnumAsByte<ERichCurveTangentWeightMode> TVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  TEnumAsByte<ERichCurveInterpMode> TVar8;
  TEnumAsByte<ERichCurveTangentMode> TVar9;
  uchar uVar10;
  uchar uVar11;
  bool bVar12;
  int iVar13;
  FMovieSceneChannel *pFVar14;
  FMovieSceneFloatValue *pFVar15;
  wchar_t *pwVar16;
  FWeakObjectPtr local_res18;
  TArrayView<FMovieSceneFloatValue,int> local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  FMovieSceneChannelData local_28;
  undefined8 *local_10;
  
  local_res18 = param_2.WeakPtr;
  pFVar14 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)this);
  if (pFVar14 == (FMovieSceneChannel *)0x0) {
    pwVar16 = 
    L"Invalid ChannelHandle for MovieSceneScriptingKey, failed to set value. Did you forget to create the key through the channel?"
    ;
  }
  else {
    bVar12 = FWeakObjectPtr::IsValid(&local_res18);
    if (bVar12) {
      FWeakObjectPtr::Get(&local_res18);
    }
    FMovieSceneChannelData::FMovieSceneChannelData
              (&local_28,pFVar14,
               (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)&pFVar14[1].KeyAddedEvent,
               (FKeyHandleLookupTable *)&pFVar14[1].KeyDeletedEvent.field_0x8);
    local_10 = (undefined8 *)&pFVar14[1].KeyAddedEvent.field_0x10;
    if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
       (local_10 == (undefined8 *)0x0)) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Times && Values",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                          ,0x122,L"");
      if (bVar12) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar13 = FMovieSceneChannelData::GetIndex(&local_28,param_1);
    if (iVar13 != -1) {
      local_38._0_4_ = param_3->Value;
      local_38._4_4_ = (param_3->Tangent).ArriveTangent;
      uStack_30._0_4_ = (param_3->Tangent).LeaveTangent;
      uStack_30._4_4_ = (param_3->Tangent).ArriveTangentWeight;
      fVar3 = (param_3->Tangent).LeaveTangentWeight;
      TVar4.Value = (param_3->Tangent).TangentWeightMode.Value;
      uVar5 = (param_3->Tangent).UnserializedPaddingBytes[0];
      uVar6 = (param_3->Tangent).UnserializedPaddingBytes[1];
      uVar7 = (param_3->Tangent).UnserializedPaddingBytes[2];
      local_48.DataPtr = (FMovieSceneFloatValue *)*local_10;
      iVar1 = *(int *)(local_10 + 1);
      TVar8.Value = (param_3->InterpMode).Value;
      TVar9.Value = (param_3->TangentMode).Value;
      uVar10 = param_3->PaddingByte;
      uVar11 = param_3->UnserializedPaddingBytes[0];
      if (iVar1 < 0) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L"");
        if (bVar12) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_48.ArrayNum = iVar1;
      pFVar15 = TArrayView<FMovieSceneFloatValue,int>::operator[](&local_48,iVar13);
      pFVar15->Value = (float)(undefined4)local_38;
      (pFVar15->Tangent).ArriveTangent = (float)local_38._4_4_;
      (pFVar15->Tangent).LeaveTangent = (float)(undefined4)uStack_30;
      (pFVar15->Tangent).ArriveTangentWeight = (float)uStack_30._4_4_;
      (pFVar15->Tangent).LeaveTangentWeight = fVar3;
      (pFVar15->Tangent).TangentWeightMode = (TEnumAsByte<ERichCurveTangentWeightMode>)TVar4.Value;
      (pFVar15->Tangent).UnserializedPaddingBytes[0] = uVar5;
      (pFVar15->Tangent).UnserializedPaddingBytes[1] = uVar6;
      (pFVar15->Tangent).UnserializedPaddingBytes[2] = uVar7;
      pFVar15->InterpMode = (TEnumAsByte<ERichCurveInterpMode>)TVar8.Value;
      pFVar15->TangentMode = (TEnumAsByte<ERichCurveTangentMode>)TVar9.Value;
      pFVar15->PaddingByte = uVar10;
      pFVar15->UnserializedPaddingBytes[0] = uVar11;
      return;
    }
    pwVar16 = 
    L"Invalid KeyIndex for MovieSceneScriptingKey, failed to set value. Did you forget to create the key through the channel?"
    ;
  }
  FFrame::KismetExecutionMessage(pwVar16,Error,(FName)0x0);
  return;
}

// SetTimeInChannel @ 14c6a68f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TMovieSceneScriptingKey<FMovieSceneParticleChannel,unsigned_char>::SetTimeInChannel
          (TMovieSceneScriptingKey<FMovieSceneParticleChannel,unsigned_char> *this,
          FKeyHandle param_1,TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
          TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3,FFrameNumber param_4,
          EMovieSceneTimeUnit param_5,float param_6)

{
  bool bVar1;
  UObject *pUVar2;
  longlong lVar3;
  FMovieSceneChannel *this_00;
  FFrameRate FVar4;
  float fVar5;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FFrameRate local_58;
  
  local_res18 = param_2.WeakPtr;
  local_res20 = param_3.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar1) {
    fVar5 = ::FFrameTime::MaxSubframe;
    if (param_6 <= ::FFrameTime::MaxSubframe) {
      fVar5 = param_6;
    }
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    if ((param_5 != TickResolution) || (fVar5 <= 0.0)) {
      if (param_5 == DisplayRate) {
        pUVar2 = FWeakObjectPtr::Get(&local_res18);
        if (pUVar2 == (UObject *)0x0) {
          local_58.Numerator = 0;
          local_58.Denominator = 0;
          FFrame::KismetExecutionMessage
                    (L"Cannot call GetTickResolution on a null sequence",Error,(FName)0x0);
        }
        else {
          (**(code **)(*(longlong *)pUVar2 + 0x2f8))(pUVar2);
        }
        FVar4.Numerator = 60000;
        FVar4.Denominator = 1;
        pUVar2 = FWeakObjectPtr::Get(&local_res18);
        if (pUVar2 == (UObject *)0x0) {
          local_58.Numerator = 0;
          local_58.Denominator = 0;
          FFrame::KismetExecutionMessage
                    (L"Cannot call GetDisplayRate on a null sequence",Error,(FName)0x0);
        }
        else {
          lVar3 = (**(code **)(*(longlong *)pUVar2 + 0x2f8))(pUVar2);
          if (lVar3 != 0) {
            FVar4 = *(FFrameRate *)(lVar3 + 0x140);
          }
        }
        local_58.Denominator = (int)::FFrameTime::MaxSubframe;
        if (fVar5 <= ::FFrameTime::MaxSubframe) {
          local_58.Denominator = (int)fVar5;
        }
        if ((float)local_58.Denominator <= 0.0) {
          local_58.Denominator = 0;
        }
        local_58.Numerator = param_4.Value;
        ConvertFrameTime((FFrameTime)&local_58,local_58,FVar4);
        param_4.Value = local_58.Numerator;
        if (__real_3f000000 <= (float)local_58.Denominator) {
          param_4.Value = local_58.Numerator + 1;
        }
      }
    }
    else {
      local_58.Numerator = 0;
      local_58.Denominator = 0;
      FFrame::KismetExecutionMessage
                (L"SetTime called with a SubFrame specified for a Tick Resolution type time! SubFrames are only allowed for Display Rate types, ignoring..."
                 ,Error,(FName)0x0);
    }
    this_00 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)this);
    if (this_00 == (FMovieSceneChannel *)0x0) {
      local_58.Numerator = 0;
      local_58.Denominator = 0;
      FFrame::KismetExecutionMessage
                (L"Invalid ChannelHandle for MovieSceneScriptingKey, failed to set Time.",Error,
                 (FName)0x0);
    }
    else {
      bVar1 = FWeakObjectPtr::IsValid(&local_res20);
      if (bVar1) {
        FWeakObjectPtr::Get(&local_res20);
      }
      FMovieSceneChannel::SetKeyTime(this_00,param_1,param_4);
    }
    return;
  }
  local_58.Numerator = 0;
  local_58.Denominator = 0;
  FFrame::KismetExecutionMessage
            (L"SetTime called with an invalid owning sequence.",Error,(FName)0x0);
  return;
}

// SetTimeInChannel @ 14c6a6b00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TMovieSceneScriptingKey<FMovieSceneStringChannel,FString>::SetTimeInChannel
          (TMovieSceneScriptingKey<FMovieSceneStringChannel,FString> *this,FKeyHandle param_1,
          TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
          TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3,FFrameNumber param_4,
          EMovieSceneTimeUnit param_5,float param_6)

{
  bool bVar1;
  UObject *pUVar2;
  longlong lVar3;
  FMovieSceneChannel *this_00;
  FFrameRate FVar4;
  float fVar5;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FFrameRate local_58;
  
  local_res18 = param_2.WeakPtr;
  local_res20 = param_3.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar1) {
    fVar5 = ::FFrameTime::MaxSubframe;
    if (param_6 <= ::FFrameTime::MaxSubframe) {
      fVar5 = param_6;
    }
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    if ((param_5 != TickResolution) || (fVar5 <= 0.0)) {
      if (param_5 == DisplayRate) {
        pUVar2 = FWeakObjectPtr::Get(&local_res18);
        if (pUVar2 == (UObject *)0x0) {
          local_58.Numerator = 0;
          local_58.Denominator = 0;
          FFrame::KismetExecutionMessage
                    (L"Cannot call GetTickResolution on a null sequence",Error,(FName)0x0);
        }
        else {
          (**(code **)(*(longlong *)pUVar2 + 0x2f8))(pUVar2);
        }
        FVar4.Numerator = 60000;
        FVar4.Denominator = 1;
        pUVar2 = FWeakObjectPtr::Get(&local_res18);
        if (pUVar2 == (UObject *)0x0) {
          local_58.Numerator = 0;
          local_58.Denominator = 0;
          FFrame::KismetExecutionMessage
                    (L"Cannot call GetDisplayRate on a null sequence",Error,(FName)0x0);
        }
        else {
          lVar3 = (**(code **)(*(longlong *)pUVar2 + 0x2f8))(pUVar2);
          if (lVar3 != 0) {
            FVar4 = *(FFrameRate *)(lVar3 + 0x140);
          }
        }
        local_58.Denominator = (int)::FFrameTime::MaxSubframe;
        if (fVar5 <= ::FFrameTime::MaxSubframe) {
          local_58.Denominator = (int)fVar5;
        }
        if ((float)local_58.Denominator <= 0.0) {
          local_58.Denominator = 0;
        }
        local_58.Numerator = param_4.Value;
        ConvertFrameTime((FFrameTime)&local_58,local_58,FVar4);
        param_4.Value = local_58.Numerator;
        if (__real_3f000000 <= (float)local_58.Denominator) {
          param_4.Value = local_58.Numerator + 1;
        }
      }
    }
    else {
      local_58.Numerator = 0;
      local_58.Denominator = 0;
      FFrame::KismetExecutionMessage
                (L"SetTime called with a SubFrame specified for a Tick Resolution type time! SubFrames are only allowed for Display Rate types, ignoring..."
                 ,Error,(FName)0x0);
    }
    this_00 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)this);
    if (this_00 == (FMovieSceneChannel *)0x0) {
      local_58.Numerator = 0;
      local_58.Denominator = 0;
      FFrame::KismetExecutionMessage
                (L"Invalid ChannelHandle for MovieSceneScriptingKey, failed to set Time.",Error,
                 (FName)0x0);
    }
    else {
      bVar1 = FWeakObjectPtr::IsValid(&local_res20);
      if (bVar1) {
        FWeakObjectPtr::Get(&local_res20);
      }
      FMovieSceneChannel::SetKeyTime(this_00,param_1,param_4);
    }
    return;
  }
  local_58.Numerator = 0;
  local_58.Denominator = 0;
  FFrame::KismetExecutionMessage
            (L"SetTime called with an invalid owning sequence.",Error,(FName)0x0);
  return;
}

// SetTimeInChannel @ 14c6a6d10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TMovieSceneScriptingKey<FMovieSceneTextChannel,FText>::SetTimeInChannel
          (TMovieSceneScriptingKey<FMovieSceneTextChannel,FText> *this,FKeyHandle param_1,
          TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
          TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3,FFrameNumber param_4,
          EMovieSceneTimeUnit param_5,float param_6)

{
  bool bVar1;
  UObject *pUVar2;
  longlong lVar3;
  FMovieSceneChannel *this_00;
  FFrameRate FVar4;
  float fVar5;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FFrameRate local_58;
  
  local_res18 = param_2.WeakPtr;
  local_res20 = param_3.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar1) {
    fVar5 = ::FFrameTime::MaxSubframe;
    if (param_6 <= ::FFrameTime::MaxSubframe) {
      fVar5 = param_6;
    }
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    if ((param_5 != TickResolution) || (fVar5 <= 0.0)) {
      if (param_5 == DisplayRate) {
        pUVar2 = FWeakObjectPtr::Get(&local_res18);
        if (pUVar2 == (UObject *)0x0) {
          local_58.Numerator = 0;
          local_58.Denominator = 0;
          FFrame::KismetExecutionMessage
                    (L"Cannot call GetTickResolution on a null sequence",Error,(FName)0x0);
        }
        else {
          (**(code **)(*(longlong *)pUVar2 + 0x2f8))(pUVar2);
        }
        FVar4.Numerator = 60000;
        FVar4.Denominator = 1;
        pUVar2 = FWeakObjectPtr::Get(&local_res18);
        if (pUVar2 == (UObject *)0x0) {
          local_58.Numerator = 0;
          local_58.Denominator = 0;
          FFrame::KismetExecutionMessage
                    (L"Cannot call GetDisplayRate on a null sequence",Error,(FName)0x0);
        }
        else {
          lVar3 = (**(code **)(*(longlong *)pUVar2 + 0x2f8))(pUVar2);
          if (lVar3 != 0) {
            FVar4 = *(FFrameRate *)(lVar3 + 0x140);
          }
        }
        local_58.Denominator = (int)::FFrameTime::MaxSubframe;
        if (fVar5 <= ::FFrameTime::MaxSubframe) {
          local_58.Denominator = (int)fVar5;
        }
        if ((float)local_58.Denominator <= 0.0) {
          local_58.Denominator = 0;
        }
        local_58.Numerator = param_4.Value;
        ConvertFrameTime((FFrameTime)&local_58,local_58,FVar4);
        param_4.Value = local_58.Numerator;
        if (__real_3f000000 <= (float)local_58.Denominator) {
          param_4.Value = local_58.Numerator + 1;
        }
      }
    }
    else {
      local_58.Numerator = 0;
      local_58.Denominator = 0;
      FFrame::KismetExecutionMessage
                (L"SetTime called with a SubFrame specified for a Tick Resolution type time! SubFrames are only allowed for Display Rate types, ignoring..."
                 ,Error,(FName)0x0);
    }
    this_00 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)this);
    if (this_00 == (FMovieSceneChannel *)0x0) {
      local_58.Numerator = 0;
      local_58.Denominator = 0;
      FFrame::KismetExecutionMessage
                (L"Invalid ChannelHandle for MovieSceneScriptingKey, failed to set Time.",Error,
                 (FName)0x0);
    }
    else {
      bVar1 = FWeakObjectPtr::IsValid(&local_res20);
      if (bVar1) {
        FWeakObjectPtr::Get(&local_res20);
      }
      FMovieSceneChannel::SetKeyTime(this_00,param_1,param_4);
    }
    return;
  }
  local_58.Numerator = 0;
  local_58.Denominator = 0;
  FFrame::KismetExecutionMessage
            (L"SetTime called with an invalid owning sequence.",Error,(FName)0x0);
  return;
}

