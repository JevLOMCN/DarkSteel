// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SequencerScripting
// Functions: 24

// StaticClass @ 14c680600

UClass * __cdecl UMovieSceneScriptingActualFloatKey::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScriptingActualFloatKey.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneScriptingActualFloatKey",
               &Z_Registration_Info_UClass_UMovieSceneScriptingActualFloatKey.InnerSingleton,
               StaticRegisterNativesUMovieSceneScriptingActualFloatKey,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneScriptingActualFloatKey>,
               InternalVTableHelperCtorCaller<UMovieSceneScriptingActualFloatKey>,local_res8,
               UMovieSceneScriptingFloatKey::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingActualFloatKey.InnerSingleton;
}

// UMovieSceneScriptingActualFloatKey @ 14c6840c0

UMovieSceneScriptingActualFloatKey * __thiscall
UMovieSceneScriptingActualFloatKey::UMovieSceneScriptingActualFloatKey
          (UMovieSceneScriptingActualFloatKey *this,FVTableHelper *param_1)

{
  UMovieSceneScriptingKey::UMovieSceneScriptingKey((UMovieSceneScriptingKey *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneScriptingFloatKey__6B_;
  FMovieSceneChannelHandle::FMovieSceneChannelHandle((FMovieSceneChannelHandle *)&this->field_0x40);
  *(undefined ***)this = &___7UMovieSceneScriptingActualFloatKey__6B_;
  return this;
}

// UMovieSceneScriptingActualFloatKey @ 14c684100

UMovieSceneScriptingActualFloatKey * __thiscall
UMovieSceneScriptingActualFloatKey::UMovieSceneScriptingActualFloatKey
          (UMovieSceneScriptingActualFloatKey *this,FObjectInitializer *param_1)

{
  UMovieSceneScriptingKey::UMovieSceneScriptingKey((UMovieSceneScriptingKey *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneScriptingFloatKey__6B_;
  FMovieSceneChannelHandle::FMovieSceneChannelHandle((FMovieSceneChannelHandle *)&this->field_0x40);
  *(undefined ***)this = &___7UMovieSceneScriptingActualFloatKey__6B_;
  return this;
}

// ~UMovieSceneScriptingActualFloatKey @ 14c6845a0

void __thiscall
UMovieSceneScriptingActualFloatKey::~UMovieSceneScriptingActualFloatKey
          (UMovieSceneScriptingActualFloatKey *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7UMovieSceneScriptingActualFloatKey__6B_;
  plVar3 = *(longlong **)&this->field_0x48;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  *(undefined ***)this = &___7UMovieSceneScriptingFloatKey__6B_;
  UMovieSceneScriptingKey::~UMovieSceneScriptingKey((UMovieSceneScriptingKey *)this);
  return;
}

// GetArriveTangent @ 14c686c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float __thiscall
UMovieSceneScriptingActualFloatKey::GetArriveTangent(UMovieSceneScriptingActualFloatKey *this)

{
  FMovieSceneFloatValue *pFVar1;
  undefined1 auStack_58 [32];
  FMovieSceneFloatValue local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  pFVar1 = TMovieSceneScriptingKey<FMovieSceneFloatChannel,FMovieSceneFloatValue>::
           GetValueFromChannel((TMovieSceneScriptingKey<FMovieSceneFloatChannel,FMovieSceneFloatValue>
                                *)&this->field_0x40,&local_38,(FKeyHandle)*(uint *)&this->field_0x28
                              );
  return (pFVar1->Tangent).ArriveTangent;
}

// GetArriveTangentWeight @ 14c686cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float __thiscall
UMovieSceneScriptingActualFloatKey::GetArriveTangentWeight(UMovieSceneScriptingActualFloatKey *this)

{
  FMovieSceneFloatValue *pFVar1;
  undefined1 auStack_58 [32];
  FMovieSceneFloatValue local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  pFVar1 = TMovieSceneScriptingKey<FMovieSceneFloatChannel,FMovieSceneFloatValue>::
           GetValueFromChannel((TMovieSceneScriptingKey<FMovieSceneFloatChannel,FMovieSceneFloatValue>
                                *)&this->field_0x40,&local_38,(FKeyHandle)*(uint *)&this->field_0x28
                              );
  return (pFVar1->Tangent).ArriveTangentWeight;
}

// GetInterpolationMode @ 14c687040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ERichCurveInterpMode __thiscall
UMovieSceneScriptingActualFloatKey::GetInterpolationMode(UMovieSceneScriptingActualFloatKey *this)

{
  FMovieSceneFloatValue *pFVar1;
  undefined1 auStack_58 [32];
  FMovieSceneFloatValue local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  pFVar1 = TMovieSceneScriptingKey<FMovieSceneFloatChannel,FMovieSceneFloatValue>::
           GetValueFromChannel((TMovieSceneScriptingKey<FMovieSceneFloatChannel,FMovieSceneFloatValue>
                                *)&this->field_0x40,&local_38,(FKeyHandle)*(uint *)&this->field_0x28
                              );
  return (ERichCurveInterpMode)(pFVar1->InterpMode).Value;
}

// GetLeaveTangent @ 14c688f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float __thiscall
UMovieSceneScriptingActualFloatKey::GetLeaveTangent(UMovieSceneScriptingActualFloatKey *this)

{
  FMovieSceneFloatValue *pFVar1;
  undefined1 auStack_58 [32];
  FMovieSceneFloatValue local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  pFVar1 = TMovieSceneScriptingKey<FMovieSceneFloatChannel,FMovieSceneFloatValue>::
           GetValueFromChannel((TMovieSceneScriptingKey<FMovieSceneFloatChannel,FMovieSceneFloatValue>
                                *)&this->field_0x40,&local_38,(FKeyHandle)*(uint *)&this->field_0x28
                              );
  return (pFVar1->Tangent).LeaveTangent;
}

// GetLeaveTangentWeight @ 14c689020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float __thiscall
UMovieSceneScriptingActualFloatKey::GetLeaveTangentWeight(UMovieSceneScriptingActualFloatKey *this)

{
  FMovieSceneFloatValue *pFVar1;
  undefined1 auStack_58 [32];
  FMovieSceneFloatValue local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  pFVar1 = TMovieSceneScriptingKey<FMovieSceneFloatChannel,FMovieSceneFloatValue>::
           GetValueFromChannel((TMovieSceneScriptingKey<FMovieSceneFloatChannel,FMovieSceneFloatValue>
                                *)&this->field_0x40,&local_38,(FKeyHandle)*(uint *)&this->field_0x28
                              );
  return (pFVar1->Tangent).LeaveTangentWeight;
}

// GetPrivateStaticClass @ 14c689100

UClass * __cdecl UMovieSceneScriptingActualFloatKey::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScriptingActualFloatKey.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneScriptingActualFloatKey",
               &Z_Registration_Info_UClass_UMovieSceneScriptingActualFloatKey.InnerSingleton,
               StaticRegisterNativesUMovieSceneScriptingActualFloatKey,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneScriptingActualFloatKey>,
               InternalVTableHelperCtorCaller<UMovieSceneScriptingActualFloatKey>,local_res8,
               UMovieSceneScriptingFloatKey::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingActualFloatKey.InnerSingleton;
}

// GetTangentMode @ 14c6898d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ERichCurveTangentMode __thiscall
UMovieSceneScriptingActualFloatKey::GetTangentMode(UMovieSceneScriptingActualFloatKey *this)

{
  FMovieSceneFloatValue *pFVar1;
  undefined1 auStack_58 [32];
  FMovieSceneFloatValue local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  pFVar1 = TMovieSceneScriptingKey<FMovieSceneFloatChannel,FMovieSceneFloatValue>::
           GetValueFromChannel((TMovieSceneScriptingKey<FMovieSceneFloatChannel,FMovieSceneFloatValue>
                                *)&this->field_0x40,&local_38,(FKeyHandle)*(uint *)&this->field_0x28
                              );
  return (ERichCurveTangentMode)(pFVar1->TangentMode).Value;
}

// GetTangentWeightMode @ 14c6899b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ERichCurveTangentWeightMode __thiscall
UMovieSceneScriptingActualFloatKey::GetTangentWeightMode(UMovieSceneScriptingActualFloatKey *this)

{
  FMovieSceneFloatValue *pFVar1;
  undefined1 auStack_58 [32];
  FMovieSceneFloatValue local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  pFVar1 = TMovieSceneScriptingKey<FMovieSceneFloatChannel,FMovieSceneFloatValue>::
           GetValueFromChannel((TMovieSceneScriptingKey<FMovieSceneFloatChannel,FMovieSceneFloatValue>
                                *)&this->field_0x40,&local_38,(FKeyHandle)*(uint *)&this->field_0x28
                              );
  return (ERichCurveTangentWeightMode)(pFVar1->Tangent).TangentWeightMode.Value;
}

// GetTime @ 14c689a80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FFrameTime __thiscall
UMovieSceneScriptingActualFloatKey::GetTime
          (UMovieSceneScriptingActualFloatKey *this,EMovieSceneTimeUnit param_1)

{
  FKeyHandle FVar1;
  bool bVar2;
  FMovieSceneChannel *this_00;
  FFrameRate FVar3;
  wchar_t *pwVar4;
  undefined7 in_register_00000011;
  FFrameTime FVar5;
  char in_R8B;
  undefined8 local_res8;
  FWeakObjectPtr local_res10;
  int local_res20;
  undefined4 uStackX_24;
  undefined1 local_28 [16];
  
  FVar5._1_7_ = in_register_00000011;
  FVar5.FrameNumber.Value._0_1_ = param_1;
  local_res10.ObjectIndex = *(int *)&this->field_0x2c;
  local_res10.ObjectSerialNumber = *(int *)&this->field_0x30;
  FVar1.Index = *(uint *)&this->field_0x28;
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar2) {
    this_00 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)&this->field_0x40);
    if (this_00 != (FMovieSceneChannel *)0x0) {
      local_res8 = (ulonglong)local_res8._4_4_ << 0x20;
      FMovieSceneChannel::GetKeyTime(this_00,FVar1,(FFrameNumber *)&local_res8);
      if (in_R8B == '\0') {
        FWeakObjectPtr::Get(&local_res10);
        UMovieSceneSequenceExtensions::GetDisplayRate((UMovieSceneSequence *)local_28);
        FWeakObjectPtr::Get(&local_res10);
        FVar3 = UMovieSceneSequenceExtensions::GetTickResolution
                          ((UMovieSceneSequence *)(local_28 + 8));
        local_res20 = local_res8._0_4_;
        uStackX_24 = 0;
        ConvertFrameTime((FFrameTime)&local_res20,(FFrameRate)(local_res8 & 0xffffffff),
                         *(FFrameRate *)FVar3);
        *(ulonglong *)FVar5 = CONCAT44(uStackX_24,local_res20);
        return FVar5;
      }
      *(int *)FVar5 = local_res8._0_4_;
      *(undefined4 *)((longlong)FVar5 + 4) = 0;
      return FVar5;
    }
    pwVar4 = L"Invalid ChannelHandle for MovieSceneScriptingKey, failed to retrieve Time.";
  }
  else {
    pwVar4 = L"GetTime called with an invalid owning sequence.";
  }
  local_res8 = 0;
  FFrame::KismetExecutionMessage(pwVar4,Error,(FName)0x0);
  *(undefined8 *)FVar5 = 0;
  return FVar5;
}

// GetValue @ 14c68a060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float __thiscall
UMovieSceneScriptingActualFloatKey::GetValue(UMovieSceneScriptingActualFloatKey *this)

{
  FMovieSceneFloatValue *pFVar1;
  undefined1 auStack_58 [32];
  FMovieSceneFloatValue local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  pFVar1 = TMovieSceneScriptingKey<FMovieSceneFloatChannel,FMovieSceneFloatValue>::
           GetValueFromChannel((TMovieSceneScriptingKey<FMovieSceneFloatChannel,FMovieSceneFloatValue>
                                *)&this->field_0x40,&local_38,(FKeyHandle)*(uint *)&this->field_0x28
                              );
  return pFVar1->Value;
}

// SetArriveTangent @ 14c68b2c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMovieSceneScriptingActualFloatKey::SetArriveTangent
          (UMovieSceneScriptingActualFloatKey *this,float param_1)

{
  TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> TVar1;
  undefined1 auStack_88 [32];
  FMovieSceneFloatValue local_68;
  FMovieSceneFloatValue local_48;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  TMovieSceneScriptingKey<FMovieSceneFloatChannel,FMovieSceneFloatValue>::GetValueFromChannel
            ((TMovieSceneScriptingKey<FMovieSceneFloatChannel,FMovieSceneFloatValue> *)
             &this->field_0x40,&local_48,(FKeyHandle)*(uint *)&this->field_0x28);
  TVar1.WeakPtr.ObjectIndex = *(int *)&this->field_0x34;
  TVar1.WeakPtr.ObjectSerialNumber = *(int *)&this->field_0x38;
  local_68.InterpMode.Value = local_48.InterpMode.Value;
  local_68.TangentMode.Value = local_48.TangentMode.Value;
  local_68.PaddingByte = local_48.PaddingByte;
  local_68.UnserializedPaddingBytes[0] = local_48.UnserializedPaddingBytes[0];
  local_68.Value = local_48.Value;
  local_68.Tangent.LeaveTangent = local_48.Tangent.LeaveTangent;
  local_68.Tangent.ArriveTangentWeight = local_48.Tangent.ArriveTangentWeight;
  local_68.Tangent.LeaveTangentWeight = local_48.Tangent.LeaveTangentWeight;
  local_68.Tangent.TangentWeightMode.Value = local_48.Tangent.TangentWeightMode.Value;
  local_68.Tangent.UnserializedPaddingBytes[0] = local_48.Tangent.UnserializedPaddingBytes[0];
  local_68.Tangent.UnserializedPaddingBytes[1] = local_48.Tangent.UnserializedPaddingBytes[1];
  local_68.Tangent.UnserializedPaddingBytes[2] = local_48.Tangent.UnserializedPaddingBytes[2];
  local_68.Tangent.ArriveTangent = param_1;
  TMovieSceneScriptingKey<FMovieSceneFloatChannel,FMovieSceneFloatValue>::SetValueInChannel
            ((TMovieSceneScriptingKey<FMovieSceneFloatChannel,FMovieSceneFloatValue> *)
             &this->field_0x40,(FKeyHandle)*(uint *)&this->field_0x28,TVar1,&local_68);
  return;
}

// SetArriveTangentWeight @ 14c68b440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMovieSceneScriptingActualFloatKey::SetArriveTangentWeight
          (UMovieSceneScriptingActualFloatKey *this,float param_1)

{
  TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> TVar1;
  undefined1 auStack_88 [32];
  FMovieSceneFloatValue local_68;
  FMovieSceneFloatValue local_48;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  TMovieSceneScriptingKey<FMovieSceneFloatChannel,FMovieSceneFloatValue>::GetValueFromChannel
            ((TMovieSceneScriptingKey<FMovieSceneFloatChannel,FMovieSceneFloatValue> *)
             &this->field_0x40,&local_48,(FKeyHandle)*(uint *)&this->field_0x28);
  TVar1.WeakPtr.ObjectIndex = *(int *)&this->field_0x34;
  TVar1.WeakPtr.ObjectSerialNumber = *(int *)&this->field_0x38;
  local_68.InterpMode.Value = local_48.InterpMode.Value;
  local_68.TangentMode.Value = local_48.TangentMode.Value;
  local_68.PaddingByte = local_48.PaddingByte;
  local_68.UnserializedPaddingBytes[0] = local_48.UnserializedPaddingBytes[0];
  local_68.Value = local_48.Value;
  local_68.Tangent.ArriveTangent = local_48.Tangent.ArriveTangent;
  local_68.Tangent.LeaveTangent = local_48.Tangent.LeaveTangent;
  local_68.Tangent.LeaveTangentWeight = local_48.Tangent.LeaveTangentWeight;
  local_68.Tangent.TangentWeightMode.Value = local_48.Tangent.TangentWeightMode.Value;
  local_68.Tangent.UnserializedPaddingBytes[0] = local_48.Tangent.UnserializedPaddingBytes[0];
  local_68.Tangent.UnserializedPaddingBytes[1] = local_48.Tangent.UnserializedPaddingBytes[1];
  local_68.Tangent.UnserializedPaddingBytes[2] = local_48.Tangent.UnserializedPaddingBytes[2];
  local_68.Tangent.ArriveTangentWeight = param_1;
  TMovieSceneScriptingKey<FMovieSceneFloatChannel,FMovieSceneFloatValue>::SetValueInChannel
            ((TMovieSceneScriptingKey<FMovieSceneFloatChannel,FMovieSceneFloatValue> *)
             &this->field_0x40,(FKeyHandle)*(uint *)&this->field_0x28,TVar1,&local_68);
  return;
}

// SetInterpolationMode @ 14c68b710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMovieSceneScriptingActualFloatKey::SetInterpolationMode
          (UMovieSceneScriptingActualFloatKey *this,ERichCurveInterpMode param_1)

{
  TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> TVar1;
  undefined4 uVar2;
  undefined1 auStack_78 [32];
  FMovieSceneFloatValue local_58;
  FMovieSceneFloatValue local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  TMovieSceneScriptingKey<FMovieSceneFloatChannel,FMovieSceneFloatValue>::GetValueFromChannel
            ((TMovieSceneScriptingKey<FMovieSceneFloatChannel,FMovieSceneFloatValue> *)
             &this->field_0x40,&local_38,(FKeyHandle)*(uint *)&this->field_0x28);
  TVar1.WeakPtr.ObjectIndex = *(int *)&this->field_0x34;
  TVar1.WeakPtr.ObjectSerialNumber = *(int *)&this->field_0x38;
  local_38.InterpMode.Value = (uchar)param_1;
  uVar2 = local_38._24_4_;
  local_58.Value = local_38.Value;
  local_58.Tangent.ArriveTangent = local_38.Tangent.ArriveTangent;
  local_58.Tangent.LeaveTangent = local_38.Tangent.LeaveTangent;
  local_58.Tangent.ArriveTangentWeight = local_38.Tangent.ArriveTangentWeight;
  local_58.Tangent.LeaveTangentWeight = local_38.Tangent.LeaveTangentWeight;
  local_58.Tangent.TangentWeightMode.Value = local_38.Tangent.TangentWeightMode.Value;
  local_58.Tangent.UnserializedPaddingBytes[0] = local_38.Tangent.UnserializedPaddingBytes[0];
  local_58.Tangent.UnserializedPaddingBytes[1] = local_38.Tangent.UnserializedPaddingBytes[1];
  local_58.Tangent.UnserializedPaddingBytes[2] = local_38.Tangent.UnserializedPaddingBytes[2];
  local_58.InterpMode.Value = (uchar)param_1;
  local_58.TangentMode.Value = local_38.TangentMode.Value;
  local_58.PaddingByte = local_38.PaddingByte;
  local_58.UnserializedPaddingBytes[0] = local_38.UnserializedPaddingBytes[0];
  local_38._24_4_ = uVar2;
  TMovieSceneScriptingKey<FMovieSceneFloatChannel,FMovieSceneFloatValue>::SetValueInChannel
            ((TMovieSceneScriptingKey<FMovieSceneFloatChannel,FMovieSceneFloatValue> *)
             &this->field_0x40,(FKeyHandle)*(uint *)&this->field_0x28,TVar1,&local_58);
  return;
}

// SetLeaveTangent @ 14c68b870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMovieSceneScriptingActualFloatKey::SetLeaveTangent
          (UMovieSceneScriptingActualFloatKey *this,float param_1)

{
  TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> TVar1;
  undefined1 auStack_88 [32];
  FMovieSceneFloatValue local_68;
  FMovieSceneFloatValue local_48;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  TMovieSceneScriptingKey<FMovieSceneFloatChannel,FMovieSceneFloatValue>::GetValueFromChannel
            ((TMovieSceneScriptingKey<FMovieSceneFloatChannel,FMovieSceneFloatValue> *)
             &this->field_0x40,&local_48,(FKeyHandle)*(uint *)&this->field_0x28);
  TVar1.WeakPtr.ObjectIndex = *(int *)&this->field_0x34;
  TVar1.WeakPtr.ObjectSerialNumber = *(int *)&this->field_0x38;
  local_68.InterpMode.Value = local_48.InterpMode.Value;
  local_68.TangentMode.Value = local_48.TangentMode.Value;
  local_68.PaddingByte = local_48.PaddingByte;
  local_68.UnserializedPaddingBytes[0] = local_48.UnserializedPaddingBytes[0];
  local_68.Value = local_48.Value;
  local_68.Tangent.ArriveTangent = local_48.Tangent.ArriveTangent;
  local_68.Tangent.ArriveTangentWeight = local_48.Tangent.ArriveTangentWeight;
  local_68.Tangent.LeaveTangentWeight = local_48.Tangent.LeaveTangentWeight;
  local_68.Tangent.TangentWeightMode.Value = local_48.Tangent.TangentWeightMode.Value;
  local_68.Tangent.UnserializedPaddingBytes[0] = local_48.Tangent.UnserializedPaddingBytes[0];
  local_68.Tangent.UnserializedPaddingBytes[1] = local_48.Tangent.UnserializedPaddingBytes[1];
  local_68.Tangent.UnserializedPaddingBytes[2] = local_48.Tangent.UnserializedPaddingBytes[2];
  local_68.Tangent.LeaveTangent = param_1;
  TMovieSceneScriptingKey<FMovieSceneFloatChannel,FMovieSceneFloatValue>::SetValueInChannel
            ((TMovieSceneScriptingKey<FMovieSceneFloatChannel,FMovieSceneFloatValue> *)
             &this->field_0x40,(FKeyHandle)*(uint *)&this->field_0x28,TVar1,&local_68);
  return;
}

// SetLeaveTangentWeight @ 14c68b9f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMovieSceneScriptingActualFloatKey::SetLeaveTangentWeight
          (UMovieSceneScriptingActualFloatKey *this,float param_1)

{
  TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> TVar1;
  undefined1 auStack_88 [32];
  FMovieSceneFloatValue local_68;
  FMovieSceneFloatValue local_48;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  TMovieSceneScriptingKey<FMovieSceneFloatChannel,FMovieSceneFloatValue>::GetValueFromChannel
            ((TMovieSceneScriptingKey<FMovieSceneFloatChannel,FMovieSceneFloatValue> *)
             &this->field_0x40,&local_48,(FKeyHandle)*(uint *)&this->field_0x28);
  TVar1.WeakPtr.ObjectIndex = *(int *)&this->field_0x34;
  TVar1.WeakPtr.ObjectSerialNumber = *(int *)&this->field_0x38;
  local_68.Tangent.TangentWeightMode.Value = local_48.Tangent.TangentWeightMode.Value;
  local_68.Tangent.UnserializedPaddingBytes[0] = local_48.Tangent.UnserializedPaddingBytes[0];
  local_68.Tangent.UnserializedPaddingBytes[1] = local_48.Tangent.UnserializedPaddingBytes[1];
  local_68.Tangent.UnserializedPaddingBytes[2] = local_48.Tangent.UnserializedPaddingBytes[2];
  local_68.Tangent.LeaveTangentWeight = param_1;
  local_68.Value = local_48.Value;
  local_68.Tangent.ArriveTangent = local_48.Tangent.ArriveTangent;
  local_68.Tangent.LeaveTangent = local_48.Tangent.LeaveTangent;
  local_68.Tangent.ArriveTangentWeight = local_48.Tangent.ArriveTangentWeight;
  local_68.InterpMode.Value = local_48.InterpMode.Value;
  local_68.TangentMode.Value = local_48.TangentMode.Value;
  local_68.PaddingByte = local_48.PaddingByte;
  local_68.UnserializedPaddingBytes[0] = local_48.UnserializedPaddingBytes[0];
  TMovieSceneScriptingKey<FMovieSceneFloatChannel,FMovieSceneFloatValue>::SetValueInChannel
            ((TMovieSceneScriptingKey<FMovieSceneFloatChannel,FMovieSceneFloatValue> *)
             &this->field_0x40,(FKeyHandle)*(uint *)&this->field_0x28,TVar1,&local_68);
  return;
}

// SetTangentMode @ 14c68bb60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMovieSceneScriptingActualFloatKey::SetTangentMode
          (UMovieSceneScriptingActualFloatKey *this,ERichCurveTangentMode param_1)

{
  TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> TVar1;
  undefined4 uVar2;
  undefined1 auStack_78 [32];
  FMovieSceneFloatValue local_58;
  FMovieSceneFloatValue local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  TMovieSceneScriptingKey<FMovieSceneFloatChannel,FMovieSceneFloatValue>::GetValueFromChannel
            ((TMovieSceneScriptingKey<FMovieSceneFloatChannel,FMovieSceneFloatValue> *)
             &this->field_0x40,&local_38,(FKeyHandle)*(uint *)&this->field_0x28);
  TVar1.WeakPtr.ObjectIndex = *(int *)&this->field_0x34;
  TVar1.WeakPtr.ObjectSerialNumber = *(int *)&this->field_0x38;
  local_38.TangentMode.Value = (uchar)param_1;
  uVar2 = local_38._24_4_;
  local_58.Value = local_38.Value;
  local_58.Tangent.ArriveTangent = local_38.Tangent.ArriveTangent;
  local_58.Tangent.LeaveTangent = local_38.Tangent.LeaveTangent;
  local_58.Tangent.ArriveTangentWeight = local_38.Tangent.ArriveTangentWeight;
  local_58.Tangent.LeaveTangentWeight = local_38.Tangent.LeaveTangentWeight;
  local_58.Tangent.TangentWeightMode.Value = local_38.Tangent.TangentWeightMode.Value;
  local_58.Tangent.UnserializedPaddingBytes[0] = local_38.Tangent.UnserializedPaddingBytes[0];
  local_58.Tangent.UnserializedPaddingBytes[1] = local_38.Tangent.UnserializedPaddingBytes[1];
  local_58.Tangent.UnserializedPaddingBytes[2] = local_38.Tangent.UnserializedPaddingBytes[2];
  local_58.InterpMode.Value = local_38.InterpMode.Value;
  local_58.TangentMode.Value = (uchar)param_1;
  local_58.PaddingByte = local_38.PaddingByte;
  local_58.UnserializedPaddingBytes[0] = local_38.UnserializedPaddingBytes[0];
  local_38._24_4_ = uVar2;
  TMovieSceneScriptingKey<FMovieSceneFloatChannel,FMovieSceneFloatValue>::SetValueInChannel
            ((TMovieSceneScriptingKey<FMovieSceneFloatChannel,FMovieSceneFloatValue> *)
             &this->field_0x40,(FKeyHandle)*(uint *)&this->field_0x28,TVar1,&local_58);
  return;
}

// SetTangentWeightMode @ 14c68bcc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMovieSceneScriptingActualFloatKey::SetTangentWeightMode
          (UMovieSceneScriptingActualFloatKey *this,ERichCurveTangentWeightMode param_1)

{
  TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> TVar1;
  undefined4 uVar2;
  undefined1 auStack_78 [32];
  FMovieSceneFloatValue local_58;
  FMovieSceneFloatValue local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  TMovieSceneScriptingKey<FMovieSceneFloatChannel,FMovieSceneFloatValue>::GetValueFromChannel
            ((TMovieSceneScriptingKey<FMovieSceneFloatChannel,FMovieSceneFloatValue> *)
             &this->field_0x40,&local_38,(FKeyHandle)*(uint *)&this->field_0x28);
  TVar1.WeakPtr.ObjectIndex = *(int *)&this->field_0x34;
  TVar1.WeakPtr.ObjectSerialNumber = *(int *)&this->field_0x38;
  local_38.Tangent.TangentWeightMode.Value = (uchar)param_1;
  uVar2 = local_38.Tangent._16_4_;
  local_58.Tangent.TangentWeightMode.Value = (uchar)param_1;
  local_58.Tangent.UnserializedPaddingBytes[0] = local_38.Tangent.UnserializedPaddingBytes[0];
  local_58.Tangent.UnserializedPaddingBytes[1] = local_38.Tangent.UnserializedPaddingBytes[1];
  local_58.Tangent.UnserializedPaddingBytes[2] = local_38.Tangent.UnserializedPaddingBytes[2];
  local_58.Tangent.LeaveTangentWeight = local_38.Tangent.LeaveTangentWeight;
  local_58.Value = local_38.Value;
  local_58.Tangent.ArriveTangent = local_38.Tangent.ArriveTangent;
  local_58.Tangent.LeaveTangent = local_38.Tangent.LeaveTangent;
  local_58.Tangent.ArriveTangentWeight = local_38.Tangent.ArriveTangentWeight;
  local_58.InterpMode.Value = local_38.InterpMode.Value;
  local_58.TangentMode.Value = local_38.TangentMode.Value;
  local_58.PaddingByte = local_38.PaddingByte;
  local_58.UnserializedPaddingBytes[0] = local_38.UnserializedPaddingBytes[0];
  local_38.Tangent._16_4_ = uVar2;
  TMovieSceneScriptingKey<FMovieSceneFloatChannel,FMovieSceneFloatValue>::SetValueInChannel
            ((TMovieSceneScriptingKey<FMovieSceneFloatChannel,FMovieSceneFloatValue> *)
             &this->field_0x40,(FKeyHandle)*(uint *)&this->field_0x28,TVar1,&local_58);
  return;
}

// SetTime @ 14c68be20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneScriptingActualFloatKey::SetTime
          (UMovieSceneScriptingActualFloatKey *this,FFrameNumber *param_1,float param_2,
          EMovieSceneTimeUnit param_3)

{
  FKeyHandle FVar1;
  bool bVar2;
  FFrameRate FVar3;
  FMovieSceneChannel *this_00;
  wchar_t *pwVar4;
  FFrameNumber FVar5;
  float fVar6;
  FWeakObjectPtr local_res8;
  FFrameRate local_res10;
  FWeakObjectPtr local_58;
  undefined1 local_50 [56];
  
  local_58.ObjectIndex = *(int *)&this->field_0x34;
  local_58.ObjectSerialNumber = *(int *)&this->field_0x38;
  FVar1.Index = *(uint *)&this->field_0x28;
  FVar5 = (FFrameNumber)param_1->Value;
  local_res8.ObjectIndex = *(int *)&this->field_0x2c;
  local_res8.ObjectSerialNumber = *(int *)&this->field_0x30;
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar2) {
    fVar6 = ::FFrameTime::MaxSubframe;
    if (param_2 <= ::FFrameTime::MaxSubframe) {
      fVar6 = param_2;
    }
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    if ((param_3 != TickResolution) || (fVar6 <= 0.0)) {
      if (param_3 == DisplayRate) {
        FWeakObjectPtr::Get(&local_res8);
        UMovieSceneSequenceExtensions::GetTickResolution((UMovieSceneSequence *)local_50);
        FWeakObjectPtr::Get(&local_res8);
        FVar3 = UMovieSceneSequenceExtensions::GetDisplayRate((UMovieSceneSequence *)(local_50 + 8))
        ;
        local_res10.Denominator = (int)::FFrameTime::MaxSubframe;
        if (fVar6 <= ::FFrameTime::MaxSubframe) {
          local_res10.Denominator = (int)fVar6;
        }
        if ((float)local_res10.Denominator <= 0.0) {
          local_res10.Denominator = 0;
        }
        local_res10.Numerator = FVar5.Value;
        ConvertFrameTime((FFrameTime)&local_res10,local_res10,*(FFrameRate *)FVar3);
        FVar5.Value = local_res10.Numerator;
        if (__real_3f000000 <= (float)local_res10.Denominator) {
          FVar5.Value = local_res10.Numerator + 1;
        }
      }
    }
    else {
      local_res10.Numerator = 0;
      local_res10.Denominator = 0;
      FFrame::KismetExecutionMessage
                (L"SetTime called with a SubFrame specified for a Tick Resolution type time! SubFrames are only allowed for Display Rate types, ignoring..."
                 ,Error,(FName)0x0);
    }
    this_00 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)&this->field_0x40);
    if (this_00 != (FMovieSceneChannel *)0x0) {
      bVar2 = FWeakObjectPtr::IsValid(&local_58);
      if (bVar2) {
        FWeakObjectPtr::Get(&local_58);
      }
      FMovieSceneChannel::SetKeyTime(this_00,FVar1,FVar5);
      return;
    }
    pwVar4 = L"Invalid ChannelHandle for MovieSceneScriptingKey, failed to set Time.";
  }
  else {
    pwVar4 = L"SetTime called with an invalid owning sequence.";
  }
  local_res10.Numerator = 0;
  local_res10.Denominator = 0;
  FFrame::KismetExecutionMessage(pwVar4,Error,(FName)0x0);
  return;
}

// SetValue @ 14c68c190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMovieSceneScriptingActualFloatKey::SetValue(UMovieSceneScriptingActualFloatKey *this,float param_1)

{
  TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> TVar1;
  undefined1 auStack_88 [32];
  FMovieSceneFloatValue local_68;
  FMovieSceneFloatValue local_48;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  TMovieSceneScriptingKey<FMovieSceneFloatChannel,FMovieSceneFloatValue>::GetValueFromChannel
            ((TMovieSceneScriptingKey<FMovieSceneFloatChannel,FMovieSceneFloatValue> *)
             &this->field_0x40,&local_48,(FKeyHandle)*(uint *)&this->field_0x28);
  TVar1.WeakPtr.ObjectIndex = *(int *)&this->field_0x34;
  TVar1.WeakPtr.ObjectSerialNumber = *(int *)&this->field_0x38;
  local_68.Tangent.ArriveTangent = local_48.Tangent.ArriveTangent;
  local_68.Tangent.LeaveTangent = local_48.Tangent.LeaveTangent;
  local_68.Tangent.ArriveTangentWeight = local_48.Tangent.ArriveTangentWeight;
  local_68.Tangent.LeaveTangentWeight = local_48.Tangent.LeaveTangentWeight;
  local_68.Tangent.TangentWeightMode.Value = local_48.Tangent.TangentWeightMode.Value;
  local_68.Tangent.UnserializedPaddingBytes[0] = local_48.Tangent.UnserializedPaddingBytes[0];
  local_68.Tangent.UnserializedPaddingBytes[1] = local_48.Tangent.UnserializedPaddingBytes[1];
  local_68.Tangent.UnserializedPaddingBytes[2] = local_48.Tangent.UnserializedPaddingBytes[2];
  local_68.InterpMode.Value = local_48.InterpMode.Value;
  local_68.TangentMode.Value = local_48.TangentMode.Value;
  local_68.PaddingByte = local_48.PaddingByte;
  local_68.UnserializedPaddingBytes[0] = local_48.UnserializedPaddingBytes[0];
  local_68.Value = param_1;
  TMovieSceneScriptingKey<FMovieSceneFloatChannel,FMovieSceneFloatValue>::SetValueInChannel
            ((TMovieSceneScriptingKey<FMovieSceneFloatChannel,FMovieSceneFloatValue> *)
             &this->field_0x40,(FKeyHandle)*(uint *)&this->field_0x28,TVar1,&local_68);
  return;
}

// StaticRegisterNativesUMovieSceneScriptingActualFloatKey @ 14c68c480

void __cdecl
UMovieSceneScriptingActualFloatKey::StaticRegisterNativesUMovieSceneScriptingActualFloatKey(void)

{
  return;
}

