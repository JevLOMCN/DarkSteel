// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 32

// AddKey @ 146639010

void __thiscall
UE::MovieScene::TChannelValue<FMovieSceneBoolChannel>::AddKey
          (TChannelValue<FMovieSceneBoolChannel> *this,FMovieSceneChannel *param_1,
          FFrameNumber param_2,EMovieSceneKeyInterpolation param_3)

{
  undefined4 in_register_00000084;
  
  AddKeyToChannel<FMovieSceneBoolChannel,bool_const_&>
            ((FMovieSceneBoolChannel *)&stack0x00000020,(FFrameNumber)(int)param_1,
             (bool *)CONCAT44(in_register_00000084,param_2.Value),(char)this + 8);
  return;
}

// AddKey @ 146639040

void __thiscall
UE::MovieScene::TChannelValue<FMovieSceneByteChannel>::AddKey
          (TChannelValue<FMovieSceneByteChannel> *this,FMovieSceneChannel *param_1,
          FFrameNumber param_2,EMovieSceneKeyInterpolation param_3)

{
  undefined4 in_register_00000084;
  
  AddKeyToChannel<FMovieSceneByteChannel,unsigned_char_const_&>
            ((FMovieSceneByteChannel *)&stack0x00000020,(FFrameNumber)(int)param_1,
             (uchar *)CONCAT44(in_register_00000084,param_2.Value),(char)this + 8);
  return;
}

// AddKey @ 146639070

void __thiscall
UE::MovieScene::TChannelValue<FMovieSceneDoubleChannel>::AddKey
          (TChannelValue<FMovieSceneDoubleChannel> *this,FMovieSceneChannel *param_1,
          FFrameNumber param_2,EMovieSceneKeyInterpolation param_3)

{
  double in_XMM2_Qa;
  FFrameNumber local_res18 [4];
  
  local_res18[0].Value = param_2.Value;
  GetInterpolationMode((FMovieSceneDoubleChannel *)param_1,local_res18,param_3);
  AddKeyToChannel((FMovieSceneDoubleChannel *)&stack0x00000008,(FFrameNumber)(int)param_1,in_XMM2_Qa
                  ,param_3);
  return;
}

// AddKey @ 1466390d0

void __thiscall
UE::MovieScene::TChannelValue<FMovieSceneFloatChannel>::AddKey
          (TChannelValue<FMovieSceneFloatChannel> *this,FMovieSceneChannel *param_1,
          FFrameNumber param_2,EMovieSceneKeyInterpolation param_3)

{
  float in_XMM2_Da;
  FFrameNumber local_res18 [4];
  
  local_res18[0].Value = param_2.Value;
  GetInterpolationMode((FMovieSceneFloatChannel *)param_1,local_res18,param_3);
  AddKeyToChannel((FMovieSceneFloatChannel *)&stack0x00000008,(FFrameNumber)(int)param_1,in_XMM2_Da,
                  param_3);
  return;
}

// AddKey @ 146639130

void __thiscall
UE::MovieScene::TChannelValue<FMovieSceneIntegerChannel>::AddKey
          (TChannelValue<FMovieSceneIntegerChannel> *this,FMovieSceneChannel *param_1,
          FFrameNumber param_2,EMovieSceneKeyInterpolation param_3)

{
  undefined4 in_register_00000084;
  
  AddKeyToChannel<FMovieSceneIntegerChannel,int_const_&>
            ((FMovieSceneIntegerChannel *)&stack0x00000020,(FFrameNumber)(int)param_1,
             (int *)CONCAT44(in_register_00000084,param_2.Value),(char)this + 8);
  return;
}

// AddKey @ 146639160

void __thiscall
UE::MovieScene::TChannelValue<FMovieSceneObjectPathChannel>::AddKey
          (TChannelValue<FMovieSceneObjectPathChannel> *this,FMovieSceneChannel *param_1,
          FFrameNumber param_2,EMovieSceneKeyInterpolation param_3)

{
  undefined4 in_register_00000084;
  
  AddKeyToChannel<FMovieSceneObjectPathChannel,FMovieSceneObjectPathChannelKeyValue_const_&>
            ((FMovieSceneObjectPathChannel *)&stack0x00000020,(FFrameNumber)(int)param_1,
             (FMovieSceneObjectPathChannelKeyValue *)CONCAT44(in_register_00000084,param_2.Value),
             (char)this + 8);
  return;
}

// AddKey @ 146639190

void __thiscall
UE::MovieScene::TChannelValue<FMovieSceneStringChannel>::AddKey
          (TChannelValue<FMovieSceneStringChannel> *this,FMovieSceneChannel *param_1,
          FFrameNumber param_2,EMovieSceneKeyInterpolation param_3)

{
  undefined4 in_register_00000084;
  
  AddKeyToChannel<FMovieSceneStringChannel,FString_const_&>
            ((FMovieSceneStringChannel *)&stack0x00000020,(FFrameNumber)(int)param_1,
             (FString *)CONCAT44(in_register_00000084,param_2.Value),(char)this + 8);
  return;
}

// AddKey @ 1466391c0

void __thiscall
UE::MovieScene::TChannelValue<FMovieSceneTextChannel>::AddKey
          (TChannelValue<FMovieSceneTextChannel> *this,FMovieSceneChannel *param_1,
          FFrameNumber param_2,EMovieSceneKeyInterpolation param_3)

{
  undefined4 in_register_00000084;
  
  AddKeyToChannel<FMovieSceneTextChannel,FText_const_&>
            ((FMovieSceneTextChannel *)&stack0x00000020,(FFrameNumber)(int)param_1,
             (FText *)CONCAT44(in_register_00000084,param_2.Value),(char)this + 8);
  return;
}

// AlreadyExistsAtTime @ 14663c9f0

bool __thiscall
UE::MovieScene::TChannelValue<FMovieSceneBoolChannel>::AlreadyExistsAtTime
          (TChannelValue<FMovieSceneBoolChannel> *this,FMovieSceneChannel *param_1,
          FFrameNumber param_2)

{
  char cVar1;
  char local_res18 [16];
  
  local_res18[0] = '\0';
  cVar1 = (**(code **)(param_1->_padding_ + 0xa0))(param_1,param_2.Value,local_res18);
  if ((cVar1 != '\0') && ((bool)local_res18[0] == this->Value)) {
    return true;
  }
  return false;
}

// AlreadyExistsAtTime @ 14663ca50

bool __thiscall
UE::MovieScene::TChannelValue<FMovieSceneByteChannel>::AlreadyExistsAtTime
          (TChannelValue<FMovieSceneByteChannel> *this,FMovieSceneChannel *param_1,
          FFrameNumber param_2)

{
  FFrameTime FVar1;
  bool bVar2;
  uchar local_res18 [16];
  
  FVar1.SubFrame = 0.0;
  FVar1.FrameNumber.Value = param_2.Value;
  local_res18[0] = '\0';
  bVar2 = FMovieSceneByteChannel::Evaluate((FMovieSceneByteChannel *)param_1,FVar1,local_res18);
  if ((bVar2) && (local_res18[0] == this->Value)) {
    return true;
  }
  return false;
}

// AlreadyExistsAtTime @ 14663cab0

bool __thiscall
UE::MovieScene::TChannelValue<FMovieSceneDoubleChannel>::AlreadyExistsAtTime
          (TChannelValue<FMovieSceneDoubleChannel> *this,FMovieSceneChannel *param_1,
          FFrameNumber param_2)

{
  bool bVar1;
  
  bVar1 = ValueExistsAtTime((FMovieSceneDoubleChannel *)param_1,param_2,this->Value);
  return bVar1;
}

// AlreadyExistsAtTime @ 14663cad0

bool __thiscall
UE::MovieScene::TChannelValue<FMovieSceneFloatChannel>::AlreadyExistsAtTime
          (TChannelValue<FMovieSceneFloatChannel> *this,FMovieSceneChannel *param_1,
          FFrameNumber param_2)

{
  bool bVar1;
  
  bVar1 = ValueExistsAtTime((FMovieSceneFloatChannel *)param_1,param_2,this->Value);
  return bVar1;
}

// AlreadyExistsAtTime @ 14663caf0

bool __thiscall
UE::MovieScene::TChannelValue<FMovieSceneIntegerChannel>::AlreadyExistsAtTime
          (TChannelValue<FMovieSceneIntegerChannel> *this,FMovieSceneChannel *param_1,
          FFrameNumber param_2)

{
  FFrameTime FVar1;
  bool bVar2;
  long64 local_res20;
  
  FVar1.SubFrame = 0.0;
  FVar1.FrameNumber.Value = param_2.Value;
  local_res20 = 0;
  bVar2 = FMovieSceneIntegerChannel::Evaluate
                    ((FMovieSceneIntegerChannel *)param_1,FVar1,&local_res20);
  if ((bVar2) && ((int)local_res20 == this->Value)) {
    return true;
  }
  return false;
}

// AlreadyExistsAtTime @ 14663cb50

bool __thiscall
UE::MovieScene::TChannelValue<FMovieSceneObjectPathChannel>::AlreadyExistsAtTime
          (TChannelValue<FMovieSceneObjectPathChannel> *this,FMovieSceneChannel *param_1,
          FFrameNumber param_2)

{
  FFrameTime FVar1;
  bool bVar2;
  UObject *local_res20;
  undefined1 local_48 [8];
  FSoftObjectPath local_40;
  TObjectPtr<UObject>_u_0 local_20;
  
  local_40.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.SubPathString.Data.ArrayNum = 0;
  local_40.SubPathString.Data.ArrayMax = 0;
  local_48 = (undefined1  [8])0x0;
  local_40.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_40.AssetPath.AssetName.Number = 0;
  local_40.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_40.AssetPath.PackageName.Number = 0;
  FUtf8String::Reset(&local_40.SubPathString,0);
  FVar1.SubFrame = 0.0;
  FVar1.FrameNumber.Value = param_2.Value;
  local_20.DebugPtr = (UObject *)0x0;
  local_res20 = (UObject *)0x0;
  bVar2 = FMovieSceneObjectPathChannel::Evaluate
                    ((FMovieSceneObjectPathChannel *)param_1,FVar1,&local_res20);
  if (bVar2) {
    FMovieSceneObjectPathChannelKeyValue::operator=
              ((FMovieSceneObjectPathChannelKeyValue *)local_48,local_res20);
    bVar2 = FSoftObjectPath::operator==
                      (&local_40,(FSoftObjectPath *)&(this->Value).SoftPtr.SoftObjectPtr.field_0x8);
    if (bVar2) {
      bVar2 = true;
      goto LAB_14663cbe0;
    }
  }
  bVar2 = false;
LAB_14663cbe0:
  if (local_40.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.SubPathString.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// AlreadyExistsAtTime @ 14663cc10

bool __thiscall
UE::MovieScene::TChannelValue<FMovieSceneStringChannel>::AlreadyExistsAtTime
          (TChannelValue<FMovieSceneStringChannel> *this,FMovieSceneChannel *param_1,
          FFrameNumber param_2)

{
  int iVar1;
  FFrameTime FVar2;
  int iVar3;
  FString *pFVar4;
  bool bVar5;
  
  FVar2.SubFrame = 0.0;
  FVar2.FrameNumber.Value = param_2.Value;
  pFVar4 = FMovieSceneStringChannel::Evaluate((FMovieSceneStringChannel *)param_1,FVar2);
  if (pFVar4 != (FString *)0x0) {
    iVar3 = (this->Value).Data.ArrayNum;
    iVar1 = (pFVar4->Data).ArrayNum;
    if (iVar3 == iVar1) {
      if (iVar3 < 2) {
        return true;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(this->Value).Data.AllocatorInstance.Data,
                         (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar3 == 0;
    }
    else {
      bVar5 = iVar1 + iVar3 == 1;
    }
    if (bVar5) {
      return true;
    }
  }
  return false;
}

// AlreadyExistsAtTime @ 14663cc80

bool __thiscall
UE::MovieScene::TChannelValue<FMovieSceneTextChannel>::AlreadyExistsAtTime
          (TChannelValue<FMovieSceneTextChannel> *this,FMovieSceneChannel *param_1,
          FFrameNumber param_2)

{
  FFrameTime FVar1;
  bool bVar2;
  FText *pFVar3;
  
  FVar1.SubFrame = 0.0;
  FVar1.FrameNumber.Value = param_2.Value;
  pFVar3 = FMovieSceneTextChannel::Evaluate((FMovieSceneTextChannel *)param_1,FVar1);
  if (pFVar3 != (FText *)0x0) {
    bVar2 = FText::EqualTo(&this->Value,pFVar3,Default);
    if (bVar2) {
      return true;
    }
  }
  return false;
}

// IsAlreadyDefault @ 1466a5940

bool __thiscall
UE::MovieScene::TChannelValue<FMovieSceneBoolChannel>::IsAlreadyDefault
          (TChannelValue<FMovieSceneBoolChannel> *this,FMovieSceneChannel *param_1)

{
  if ((param_1[1].KeyAddedEvent.field_0x11 != '\0') &&
     ((bool)param_1[1].KeyAddedEvent.field_0x10 == this->Value)) {
    return true;
  }
  return false;
}

// IsAlreadyDefault @ 1466a5970

bool __thiscall
UE::MovieScene::TChannelValue<FMovieSceneByteChannel>::IsAlreadyDefault
          (TChannelValue<FMovieSceneByteChannel> *this,FMovieSceneChannel *param_1)

{
  if ((param_1[1].KeyAddedEvent.field_0x11 != '\0') &&
     (param_1[1].KeyAddedEvent.field_0x10 == this->Value)) {
    return true;
  }
  return false;
}

// IsAlreadyDefault @ 1466a59a0

bool __thiscall
UE::MovieScene::TChannelValue<FMovieSceneDoubleChannel>::IsAlreadyDefault
          (TChannelValue<FMovieSceneDoubleChannel> *this,FMovieSceneChannel *param_1)

{
  if ((param_1[1].KeyDeletedEvent.field_0x8 != '\0') &&
     (*(double *)&param_1[1].KeyDeletedEvent == this->Value)) {
    return true;
  }
  return false;
}

// IsAlreadyDefault @ 1466a59d0

bool __thiscall
UE::MovieScene::TChannelValue<FMovieSceneFloatChannel>::IsAlreadyDefault
          (TChannelValue<FMovieSceneFloatChannel> *this,FMovieSceneChannel *param_1)

{
  if ((param_1[1].KeyDeletedEvent.field_0x4 != '\0') &&
     (*(float *)&param_1[1].KeyDeletedEvent == this->Value)) {
    return true;
  }
  return false;
}

// IsAlreadyDefault @ 1466a5a00

bool __thiscall
UE::MovieScene::TChannelValue<FMovieSceneIntegerChannel>::IsAlreadyDefault
          (TChannelValue<FMovieSceneIntegerChannel> *this,FMovieSceneChannel *param_1)

{
  if ((param_1[1].KeyAddedEvent.field_0x14 != '\0') &&
     (*(int *)&param_1[1].KeyAddedEvent.field_0x10 == this->Value)) {
    return true;
  }
  return false;
}

// IsAlreadyDefault @ 1466a5a20

bool __thiscall
UE::MovieScene::TChannelValue<FMovieSceneObjectPathChannel>::IsAlreadyDefault
          (TChannelValue<FMovieSceneObjectPathChannel> *this,FMovieSceneChannel *param_1)

{
  UObject *pUVar1;
  bool bVar2;
  FSoftObjectPath local_30;
  undefined8 local_10;
  
  local_30.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.SubPathString.Data.ArrayNum = 0;
  local_30.SubPathString.Data.ArrayMax = 0;
  local_30.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_30.AssetPath.AssetName.Number = 0;
  local_30.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_30.AssetPath.PackageName.Number = 0;
  FUtf8String::Reset(&local_30.SubPathString,0);
  local_10 = 0;
  FSoftObjectPath::operator=(&local_30,(FSoftObjectPath *)&param_1[1].KeyDeletedEvent.field_0x8);
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = *(UObject **)&param_1[1].KeyMovedEvent.field_0x8, pUVar1 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar1);
  }
  local_10 = *(undefined8 *)&param_1[1].KeyMovedEvent.field_0x8;
  bVar2 = FSoftObjectPath::operator==
                    (&local_30,(FSoftObjectPath *)&(this->Value).SoftPtr.SoftObjectPtr.field_0x8);
  if (local_30.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.SubPathString.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// IsAlreadyDefault @ 1466a5ae0

bool __thiscall
UE::MovieScene::TChannelValue<FMovieSceneStringChannel>::IsAlreadyDefault
          (TChannelValue<FMovieSceneStringChannel> *this,FMovieSceneChannel *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  TOptional<FString> *pTVar6;
  FString local_38;
  TOptional<FString>_u_0 local_28;
  TOptional<FString>_u_0 local_18;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  pTVar6 = FMovieSceneStringChannel::GetDefault
                     ((FMovieSceneStringChannel *)param_1,(TOptional<FString> *)&local_28.TypedValue
                     );
  iVar5 = *(int *)((longlong)&pTVar6->field0_0x0 + 0xc);
  if ((local_28.TypedValue.Data.ArrayMax != -1) &&
     (local_28.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_28.TypedValue.Data.AllocatorInstance.Data);
  }
  if (iVar5 == -1) {
LAB_1466a5bd3:
    bVar3 = false;
  }
  else {
    pTVar6 = FMovieSceneStringChannel::GetDefault
                       ((FMovieSceneStringChannel *)param_1,
                        (TOptional<FString> *)&local_18.TypedValue);
    if (*(int *)((longlong)&pTVar6->field0_0x0 + 0xc) == -1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    iVar1 = *(int *)((longlong)&pTVar6->field0_0x0 + 8);
    iVar5 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar5 = 0;
    }
    ::FString::AssignRange
              (&local_38,(wchar_t *)(pTVar6->field0_0x0).TypedValue.Data.AllocatorInstance.Data,
               iVar5);
    if ((local_18.TypedValue.Data.ArrayMax != -1) &&
       (local_18.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_18.TypedValue.Data.AllocatorInstance.Data);
    }
    iVar5 = (this->Value).Data.ArrayNum;
    if (local_38.Data.ArrayNum == iVar5) {
      if (1 < local_38.Data.ArrayNum) {
        iVar5 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)local_38.Data.AllocatorInstance.Data,
                           (wchar_t *)(this->Value).Data.AllocatorInstance.Data);
        bVar3 = iVar5 == 0;
        goto LAB_1466a5bc8;
      }
    }
    else {
      bVar3 = local_38.Data.ArrayNum + iVar5 == 1;
LAB_1466a5bc8:
      if (!bVar3) goto LAB_1466a5bd3;
    }
    bVar3 = true;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// IsAlreadyDefault @ 1466a5c10

bool __thiscall
UE::MovieScene::TChannelValue<FMovieSceneTextChannel>::IsAlreadyDefault
          (TChannelValue<FMovieSceneTextChannel> *this,FMovieSceneChannel *param_1)

{
  return false;
}

// SetDefault @ 1466f8860

void __thiscall
UE::MovieScene::TChannelValue<FMovieSceneBoolChannel>::SetDefault
          (TChannelValue<FMovieSceneBoolChannel> *this,FMovieSceneChannel *param_1)

{
  param_1[1].KeyAddedEvent.field_0x10 = this->Value;
  param_1[1].KeyAddedEvent.field_0x11 = 1;
  return;
}

// SetDefault @ 1466f8880

void __thiscall
UE::MovieScene::TChannelValue<FMovieSceneByteChannel>::SetDefault
          (TChannelValue<FMovieSceneByteChannel> *this,FMovieSceneChannel *param_1)

{
  param_1[1].KeyAddedEvent.field_0x10 = this->Value;
  param_1[1].KeyAddedEvent.field_0x11 = 1;
  return;
}

// SetDefault @ 1466f88a0

void __thiscall
UE::MovieScene::TChannelValue<FMovieSceneDoubleChannel>::SetDefault
          (TChannelValue<FMovieSceneDoubleChannel> *this,FMovieSceneChannel *param_1)

{
  *(double *)&param_1[1].KeyDeletedEvent = this->Value;
  param_1[1].KeyDeletedEvent.field_0x8 = 1;
  return;
}

// SetDefault @ 1466f88c0

void __thiscall
UE::MovieScene::TChannelValue<FMovieSceneFloatChannel>::SetDefault
          (TChannelValue<FMovieSceneFloatChannel> *this,FMovieSceneChannel *param_1)

{
  *(float *)&param_1[1].KeyDeletedEvent = this->Value;
  param_1[1].KeyDeletedEvent.field_0x4 = 1;
  return;
}

// SetDefault @ 1466f88e0

void __thiscall
UE::MovieScene::TChannelValue<FMovieSceneIntegerChannel>::SetDefault
          (TChannelValue<FMovieSceneIntegerChannel> *this,FMovieSceneChannel *param_1)

{
  int iVar1;
  
  iVar1 = this->Value;
  param_1[1].KeyAddedEvent.field_0x14 = 1;
  *(int *)&param_1[1].KeyAddedEvent.field_0x10 = iVar1;
  return;
}

// SetDefault @ 1466f8900

void __thiscall
UE::MovieScene::TChannelValue<FMovieSceneObjectPathChannel>::SetDefault
          (TChannelValue<FMovieSceneObjectPathChannel> *this,FMovieSceneChannel *param_1)

{
  FMovieSceneObjectPathChannel::SetDefault((FMovieSceneObjectPathChannel *)param_1,&this->Value);
  return;
}

// SetDefault @ 1466f8920

void __thiscall
UE::MovieScene::TChannelValue<FMovieSceneStringChannel>::SetDefault
          (TChannelValue<FMovieSceneStringChannel> *this,FMovieSceneChannel *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  int iVar4;
  FString local_18;
  
  pFVar3 = ::FString::FString(&local_18,&this->Value);
  param_1[1].KeyDeletedEvent.field_0x8 = 1;
  iVar1 = (pFVar3->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  ::FString::AssignRange
            ((FString *)&param_1[1].KeyAddedEvent.field_0x18,
             (wchar_t *)(pFVar3->Data).AllocatorInstance.Data,iVar4);
  pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// SetDefault @ 1466f8990

void __thiscall
UE::MovieScene::TChannelValue<FMovieSceneTextChannel>::SetDefault
          (TChannelValue<FMovieSceneTextChannel> *this,FMovieSceneChannel *param_1)

{
  uint uVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  undefined1 local_res8 [8];
  
  pIVar2 = (this->Value).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
  }
  uVar1 = (this->Value).Flags;
  param_1[1].KeyDeletedEvent.field_0x8 = 1;
  pIVar3 = *(ITextData **)&param_1[1].KeyAddedEvent.field_0x18;
  if (pIVar3 != pIVar2) {
    *(ITextData **)&param_1[1].KeyAddedEvent.field_0x18 = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  *(uint *)&param_1[1].KeyDeletedEvent = uVar1;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
  }
  return;
}

