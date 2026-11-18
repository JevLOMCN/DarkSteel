// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SequencerScripting
// Functions: 25

// StaticClass @ 14c671d50

UClass * __cdecl UMovieSceneScriptingDoubleKey::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScriptingDoubleKey.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneScriptingDoubleKey",
               &Z_Registration_Info_UClass_UMovieSceneScriptingDoubleKey.InnerSingleton,
               StaticRegisterNativesUMovieSceneScriptingDoubleKey,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneScriptingDoubleKey>,
               InternalVTableHelperCtorCaller<UMovieSceneScriptingDoubleKey>,local_res8,
               UMovieSceneScriptingKey::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingDoubleKey.InnerSingleton;
}

// UMovieSceneScriptingDoubleKey @ 14c675b20

UMovieSceneScriptingDoubleKey * __thiscall
UMovieSceneScriptingDoubleKey::UMovieSceneScriptingDoubleKey
          (UMovieSceneScriptingDoubleKey *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneScriptingKey__6B_;
  FKeyHandle::FKeyHandle((FKeyHandle *)&this->field_0x28);
  *(undefined8 *)&this->field_0x2c = 0;
  *(undefined8 *)&this->field_0x34 = 0;
  FMovieSceneChannelHandle::FMovieSceneChannelHandle((FMovieSceneChannelHandle *)&this->field_0x40);
  *(undefined ***)this = &___7UMovieSceneScriptingDoubleKey__6B_;
  return this;
}

// UMovieSceneScriptingDoubleKey @ 14c675b70

UMovieSceneScriptingDoubleKey * __thiscall
UMovieSceneScriptingDoubleKey::UMovieSceneScriptingDoubleKey
          (UMovieSceneScriptingDoubleKey *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneScriptingKey__6B_;
  FKeyHandle::FKeyHandle((FKeyHandle *)&this->field_0x28);
  *(undefined8 *)&this->field_0x2c = 0;
  *(undefined8 *)&this->field_0x34 = 0;
  FMovieSceneChannelHandle::FMovieSceneChannelHandle((FMovieSceneChannelHandle *)&this->field_0x40);
  *(undefined ***)this = &___7UMovieSceneScriptingDoubleKey__6B_;
  return this;
}

// ~UMovieSceneScriptingDoubleKey @ 14c675f00

void __thiscall
UMovieSceneScriptingDoubleKey::~UMovieSceneScriptingDoubleKey(UMovieSceneScriptingDoubleKey *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7UMovieSceneScriptingDoubleKey__6B_;
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
  *(undefined ***)this = &___7UMovieSceneScriptingKey__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14c679670

UClass * __cdecl UMovieSceneScriptingDoubleKey::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScriptingDoubleKey.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneScriptingDoubleKey",
               &Z_Registration_Info_UClass_UMovieSceneScriptingDoubleKey.InnerSingleton,
               StaticRegisterNativesUMovieSceneScriptingDoubleKey,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneScriptingDoubleKey>,
               InternalVTableHelperCtorCaller<UMovieSceneScriptingDoubleKey>,local_res8,
               UMovieSceneScriptingKey::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingDoubleKey.InnerSingleton;
}

// GetTime @ 14c679b80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FFrameTime __thiscall
UMovieSceneScriptingDoubleKey::GetTime
          (UMovieSceneScriptingDoubleKey *this,EMovieSceneTimeUnit param_1)

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

// StaticRegisterNativesUMovieSceneScriptingDoubleKey @ 14c67aab0

void __cdecl UMovieSceneScriptingDoubleKey::StaticRegisterNativesUMovieSceneScriptingDoubleKey(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x12;
  local_18.DataPtr = Z_Construct_UClass_UMovieSceneScriptingDoubleKey_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetArriveTangent @ 14c67c600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UMovieSceneScriptingDoubleKey::execGetArriveTangent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FMovieSceneDoubleValue *pFVar1;
  undefined1 auStack_58 [32];
  FMovieSceneDoubleValue local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = TMovieSceneScriptingKey<FMovieSceneDoubleChannel,FMovieSceneDoubleValue>::
           GetValueFromChannel((TMovieSceneScriptingKey<FMovieSceneDoubleChannel,FMovieSceneDoubleValue>
                                *)&param_1[1].field_0x18,&local_38,
                               (FKeyHandle)*(uint *)(param_1 + 1));
  *(float *)param_3 = (pFVar1->Tangent).ArriveTangent;
  return;
}

// execGetArriveTangentWeight @ 14c67c660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UMovieSceneScriptingDoubleKey::execGetArriveTangentWeight
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FMovieSceneDoubleValue *pFVar1;
  undefined1 auStack_58 [32];
  FMovieSceneDoubleValue local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = TMovieSceneScriptingKey<FMovieSceneDoubleChannel,FMovieSceneDoubleValue>::
           GetValueFromChannel((TMovieSceneScriptingKey<FMovieSceneDoubleChannel,FMovieSceneDoubleValue>
                                *)&param_1[1].field_0x18,&local_38,
                               (FKeyHandle)*(uint *)(param_1 + 1));
  *(float *)param_3 = (pFVar1->Tangent).ArriveTangentWeight;
  return;
}

// execGetInterpolationMode @ 14c67c9e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UMovieSceneScriptingDoubleKey::execGetInterpolationMode
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FMovieSceneDoubleValue *pFVar1;
  undefined1 auStack_58 [32];
  FMovieSceneDoubleValue local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = TMovieSceneScriptingKey<FMovieSceneDoubleChannel,FMovieSceneDoubleValue>::
           GetValueFromChannel((TMovieSceneScriptingKey<FMovieSceneDoubleChannel,FMovieSceneDoubleValue>
                                *)&param_1[1].field_0x18,&local_38,
                               (FKeyHandle)*(uint *)(param_1 + 1));
  *(uchar *)param_3 = (pFVar1->InterpMode).Value;
  return;
}

// execGetLeaveTangent @ 14c67d0c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UMovieSceneScriptingDoubleKey::execGetLeaveTangent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FMovieSceneDoubleValue *pFVar1;
  undefined1 auStack_58 [32];
  FMovieSceneDoubleValue local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = TMovieSceneScriptingKey<FMovieSceneDoubleChannel,FMovieSceneDoubleValue>::
           GetValueFromChannel((TMovieSceneScriptingKey<FMovieSceneDoubleChannel,FMovieSceneDoubleValue>
                                *)&param_1[1].field_0x18,&local_38,
                               (FKeyHandle)*(uint *)(param_1 + 1));
  *(float *)param_3 = (pFVar1->Tangent).LeaveTangent;
  return;
}

// execGetLeaveTangentWeight @ 14c67d120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UMovieSceneScriptingDoubleKey::execGetLeaveTangentWeight
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FMovieSceneDoubleValue *pFVar1;
  undefined1 auStack_58 [32];
  FMovieSceneDoubleValue local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = TMovieSceneScriptingKey<FMovieSceneDoubleChannel,FMovieSceneDoubleValue>::
           GetValueFromChannel((TMovieSceneScriptingKey<FMovieSceneDoubleChannel,FMovieSceneDoubleValue>
                                *)&param_1[1].field_0x18,&local_38,
                               (FKeyHandle)*(uint *)(param_1 + 1));
  *(float *)param_3 = (pFVar1->Tangent).LeaveTangentWeight;
  return;
}

// execGetTangentMode @ 14c67d340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UMovieSceneScriptingDoubleKey::execGetTangentMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FMovieSceneDoubleValue *pFVar1;
  undefined1 auStack_58 [32];
  FMovieSceneDoubleValue local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = TMovieSceneScriptingKey<FMovieSceneDoubleChannel,FMovieSceneDoubleValue>::
           GetValueFromChannel((TMovieSceneScriptingKey<FMovieSceneDoubleChannel,FMovieSceneDoubleValue>
                                *)&param_1[1].field_0x18,&local_38,
                               (FKeyHandle)*(uint *)(param_1 + 1));
  *(uchar *)param_3 = (pFVar1->TangentMode).Value;
  return;
}

// execGetTangentWeightMode @ 14c67d3a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UMovieSceneScriptingDoubleKey::execGetTangentWeightMode
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FMovieSceneDoubleValue *pFVar1;
  undefined1 auStack_58 [32];
  FMovieSceneDoubleValue local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = TMovieSceneScriptingKey<FMovieSceneDoubleChannel,FMovieSceneDoubleValue>::
           GetValueFromChannel((TMovieSceneScriptingKey<FMovieSceneDoubleChannel,FMovieSceneDoubleValue>
                                *)&param_1[1].field_0x18,&local_38,
                               (FKeyHandle)*(uint *)(param_1 + 1));
  *(uchar *)param_3 = (pFVar1->Tangent).TangentWeightMode.Value;
  return;
}

// execGetTime @ 14c67d5e0

void __cdecl
UMovieSceneScriptingDoubleKey::execGetTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)
           (**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_res10,local_res8[0]);
  *(undefined8 *)param_3 = *puVar2;
  return;
}

// execGetValue @ 14c67da60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UMovieSceneScriptingDoubleKey::execGetValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FMovieSceneDoubleValue *pFVar1;
  undefined1 auStack_58 [32];
  FMovieSceneDoubleValue local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = TMovieSceneScriptingKey<FMovieSceneDoubleChannel,FMovieSceneDoubleValue>::
           GetValueFromChannel((TMovieSceneScriptingKey<FMovieSceneDoubleChannel,FMovieSceneDoubleValue>
                                *)&param_1[1].field_0x18,&local_38,
                               (FKeyHandle)*(uint *)(param_1 + 1));
  *(double *)param_3 = pFVar1->Value;
  return;
}

// execSetArriveTangent @ 14c67e310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UMovieSceneScriptingDoubleKey::execSetArriveTangent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> TVar2;
  float fVar3;
  undefined1 auStack_98 [32];
  float local_78 [4];
  FMovieSceneDoubleValue local_68;
  FMovieSceneDoubleValue local_48;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  fVar3 = local_78[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TMovieSceneScriptingKey<FMovieSceneDoubleChannel,FMovieSceneDoubleValue>::GetValueFromChannel
            ((TMovieSceneScriptingKey<FMovieSceneDoubleChannel,FMovieSceneDoubleValue> *)
             &param_1[1].field_0x18,&local_48,(FKeyHandle)*(uint *)(param_1 + 1));
  TVar2.WeakPtr.ObjectIndex = *(int *)&param_1[1].field_0xc;
  TVar2.WeakPtr.ObjectSerialNumber = *(int *)&param_1[1].field_0x10;
  local_68.Value._0_4_ = local_48.Value._0_4_;
  local_68.Value._4_4_ = local_48.Value._4_4_;
  local_68.Tangent.ArriveTangent = fVar3;
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
  TMovieSceneScriptingKey<FMovieSceneDoubleChannel,FMovieSceneDoubleValue>::SetValueInChannel
            ((TMovieSceneScriptingKey<FMovieSceneDoubleChannel,FMovieSceneDoubleValue> *)
             &param_1[1].field_0x18,(FKeyHandle)*(uint *)(param_1 + 1),TVar2,&local_68);
  return;
}

// execSetArriveTangentWeight @ 14c67e410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UMovieSceneScriptingDoubleKey::execSetArriveTangentWeight
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> TVar2;
  float fVar3;
  undefined1 auStack_98 [32];
  float local_78 [4];
  FMovieSceneDoubleValue local_68;
  FMovieSceneDoubleValue local_48;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  fVar3 = local_78[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TMovieSceneScriptingKey<FMovieSceneDoubleChannel,FMovieSceneDoubleValue>::GetValueFromChannel
            ((TMovieSceneScriptingKey<FMovieSceneDoubleChannel,FMovieSceneDoubleValue> *)
             &param_1[1].field_0x18,&local_48,(FKeyHandle)*(uint *)(param_1 + 1));
  TVar2.WeakPtr.ObjectIndex = *(int *)&param_1[1].field_0xc;
  TVar2.WeakPtr.ObjectSerialNumber = *(int *)&param_1[1].field_0x10;
  local_68.Tangent.ArriveTangentWeight = fVar3;
  local_68.Tangent.LeaveTangentWeight = local_48.Tangent.LeaveTangentWeight;
  local_68.Tangent.TangentWeightMode.Value = local_48.Tangent.TangentWeightMode.Value;
  local_68.Tangent.UnserializedPaddingBytes[0] = local_48.Tangent.UnserializedPaddingBytes[0];
  local_68.Tangent.UnserializedPaddingBytes[1] = local_48.Tangent.UnserializedPaddingBytes[1];
  local_68.Tangent.UnserializedPaddingBytes[2] = local_48.Tangent.UnserializedPaddingBytes[2];
  local_68.InterpMode.Value = local_48.InterpMode.Value;
  local_68.TangentMode.Value = local_48.TangentMode.Value;
  local_68.PaddingByte = local_48.PaddingByte;
  local_68.UnserializedPaddingBytes[0] = local_48.UnserializedPaddingBytes[0];
  local_68.Value = local_48.Value;
  local_68.Tangent.ArriveTangent = local_48.Tangent.ArriveTangent;
  local_68.Tangent.LeaveTangent = local_48.Tangent.LeaveTangent;
  TMovieSceneScriptingKey<FMovieSceneDoubleChannel,FMovieSceneDoubleValue>::SetValueInChannel
            ((TMovieSceneScriptingKey<FMovieSceneDoubleChannel,FMovieSceneDoubleValue> *)
             &param_1[1].field_0x18,(FKeyHandle)*(uint *)(param_1 + 1),TVar2,&local_68);
  return;
}

// execSetInterpolationMode @ 14c67ea20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UMovieSceneScriptingDoubleKey::execSetInterpolationMode
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> TVar2;
  TEnumAsByte<ERichCurveInterpMode> TVar3;
  undefined4 uVar4;
  undefined1 auStack_88 [32];
  TEnumAsByte<ERichCurveInterpMode> local_68 [16];
  FMovieSceneDoubleValue local_58;
  FMovieSceneDoubleValue local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68[0].Value = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_68);
  }
  TVar3.Value = local_68[0].Value;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TMovieSceneScriptingKey<FMovieSceneDoubleChannel,FMovieSceneDoubleValue>::GetValueFromChannel
            ((TMovieSceneScriptingKey<FMovieSceneDoubleChannel,FMovieSceneDoubleValue> *)
             &param_1[1].field_0x18,&local_38,(FKeyHandle)*(uint *)(param_1 + 1));
  TVar2.WeakPtr.ObjectIndex = *(int *)&param_1[1].field_0xc;
  TVar2.WeakPtr.ObjectSerialNumber = *(int *)&param_1[1].field_0x10;
  local_38.InterpMode.Value = TVar3.Value;
  uVar4 = local_38._28_4_;
  local_58.InterpMode.Value = TVar3.Value;
  local_58.TangentMode.Value = local_38.TangentMode.Value;
  local_58.PaddingByte = local_38.PaddingByte;
  local_58.UnserializedPaddingBytes[0] = local_38.UnserializedPaddingBytes[0];
  local_58.Tangent.TangentWeightMode.Value = local_38.Tangent.TangentWeightMode.Value;
  local_58.Tangent.UnserializedPaddingBytes[0] = local_38.Tangent.UnserializedPaddingBytes[0];
  local_58.Tangent.UnserializedPaddingBytes[1] = local_38.Tangent.UnserializedPaddingBytes[1];
  local_58.Tangent.UnserializedPaddingBytes[2] = local_38.Tangent.UnserializedPaddingBytes[2];
  local_58.Value = local_38.Value;
  local_58.Tangent.ArriveTangent = local_38.Tangent.ArriveTangent;
  local_58.Tangent.LeaveTangent = local_38.Tangent.LeaveTangent;
  local_58.Tangent.ArriveTangentWeight = local_38.Tangent.ArriveTangentWeight;
  local_58.Tangent.LeaveTangentWeight = local_38.Tangent.LeaveTangentWeight;
  local_38._28_4_ = uVar4;
  TMovieSceneScriptingKey<FMovieSceneDoubleChannel,FMovieSceneDoubleValue>::SetValueInChannel
            ((TMovieSceneScriptingKey<FMovieSceneDoubleChannel,FMovieSceneDoubleValue> *)
             &param_1[1].field_0x18,(FKeyHandle)*(uint *)(param_1 + 1),TVar2,&local_58);
  return;
}

// execSetLeaveTangent @ 14c67eb10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UMovieSceneScriptingDoubleKey::execSetLeaveTangent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> TVar2;
  float fVar3;
  undefined1 auStack_98 [32];
  float local_78 [4];
  FMovieSceneDoubleValue local_68;
  FMovieSceneDoubleValue local_48;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  fVar3 = local_78[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TMovieSceneScriptingKey<FMovieSceneDoubleChannel,FMovieSceneDoubleValue>::GetValueFromChannel
            ((TMovieSceneScriptingKey<FMovieSceneDoubleChannel,FMovieSceneDoubleValue> *)
             &param_1[1].field_0x18,&local_48,(FKeyHandle)*(uint *)(param_1 + 1));
  TVar2.WeakPtr.ObjectIndex = *(int *)&param_1[1].field_0xc;
  TVar2.WeakPtr.ObjectSerialNumber = *(int *)&param_1[1].field_0x10;
  local_68.Value._0_4_ = local_48.Value._0_4_;
  local_68.Value._4_4_ = local_48.Value._4_4_;
  local_68.Tangent.ArriveTangent = local_48.Tangent.ArriveTangent;
  local_68.Tangent.LeaveTangent = fVar3;
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
  TMovieSceneScriptingKey<FMovieSceneDoubleChannel,FMovieSceneDoubleValue>::SetValueInChannel
            ((TMovieSceneScriptingKey<FMovieSceneDoubleChannel,FMovieSceneDoubleValue> *)
             &param_1[1].field_0x18,(FKeyHandle)*(uint *)(param_1 + 1),TVar2,&local_68);
  return;
}

// execSetLeaveTangentWeight @ 14c67ec10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UMovieSceneScriptingDoubleKey::execSetLeaveTangentWeight
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> TVar2;
  float fVar3;
  undefined1 auStack_98 [32];
  float local_78 [4];
  FMovieSceneDoubleValue local_68;
  FMovieSceneDoubleValue local_48;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  fVar3 = local_78[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TMovieSceneScriptingKey<FMovieSceneDoubleChannel,FMovieSceneDoubleValue>::GetValueFromChannel
            ((TMovieSceneScriptingKey<FMovieSceneDoubleChannel,FMovieSceneDoubleValue> *)
             &param_1[1].field_0x18,&local_48,(FKeyHandle)*(uint *)(param_1 + 1));
  TVar2.WeakPtr.ObjectIndex = *(int *)&param_1[1].field_0xc;
  TVar2.WeakPtr.ObjectSerialNumber = *(int *)&param_1[1].field_0x10;
  local_68.Value = local_48.Value;
  local_68.Tangent.ArriveTangent = local_48.Tangent.ArriveTangent;
  local_68.Tangent.LeaveTangent = local_48.Tangent.LeaveTangent;
  local_68.Tangent.ArriveTangentWeight = local_48.Tangent.ArriveTangentWeight;
  local_68.Tangent.LeaveTangentWeight = fVar3;
  local_68.Tangent.TangentWeightMode.Value = local_48.Tangent.TangentWeightMode.Value;
  local_68.Tangent.UnserializedPaddingBytes[0] = local_48.Tangent.UnserializedPaddingBytes[0];
  local_68.Tangent.UnserializedPaddingBytes[1] = local_48.Tangent.UnserializedPaddingBytes[1];
  local_68.Tangent.UnserializedPaddingBytes[2] = local_48.Tangent.UnserializedPaddingBytes[2];
  local_68.InterpMode.Value = local_48.InterpMode.Value;
  local_68.TangentMode.Value = local_48.TangentMode.Value;
  local_68.PaddingByte = local_48.PaddingByte;
  local_68.UnserializedPaddingBytes[0] = local_48.UnserializedPaddingBytes[0];
  TMovieSceneScriptingKey<FMovieSceneDoubleChannel,FMovieSceneDoubleValue>::SetValueInChannel
            ((TMovieSceneScriptingKey<FMovieSceneDoubleChannel,FMovieSceneDoubleValue> *)
             &param_1[1].field_0x18,(FKeyHandle)*(uint *)(param_1 + 1),TVar2,&local_68);
  return;
}

// execSetTangentMode @ 14c67ee90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UMovieSceneScriptingDoubleKey::execSetTangentMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> TVar2;
  uchar uVar3;
  undefined1 auStack_88 [32];
  uchar local_68 [16];
  FMovieSceneDoubleValue local_58;
  FMovieSceneDoubleValue local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68[0] = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_68);
  }
  uVar3 = local_68[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TMovieSceneScriptingKey<FMovieSceneDoubleChannel,FMovieSceneDoubleValue>::GetValueFromChannel
            ((TMovieSceneScriptingKey<FMovieSceneDoubleChannel,FMovieSceneDoubleValue> *)
             &param_1[1].field_0x18,&local_38,(FKeyHandle)*(uint *)(param_1 + 1));
  TVar2.WeakPtr.ObjectIndex = *(int *)&param_1[1].field_0xc;
  TVar2.WeakPtr.ObjectSerialNumber = *(int *)&param_1[1].field_0x10;
  local_38.TangentMode.Value = uVar3;
  local_58.TangentMode.Value = uVar3;
  local_58.Tangent.TangentWeightMode.Value = local_38.Tangent.TangentWeightMode.Value;
  local_58.Tangent.UnserializedPaddingBytes[0] = local_38.Tangent.UnserializedPaddingBytes[0];
  local_58.Tangent.UnserializedPaddingBytes[1] = local_38.Tangent.UnserializedPaddingBytes[1];
  local_58.Tangent.UnserializedPaddingBytes[2] = local_38.Tangent.UnserializedPaddingBytes[2];
  local_58.InterpMode.Value = local_38.InterpMode.Value;
  local_58.PaddingByte = local_38.PaddingByte;
  local_58.UnserializedPaddingBytes[0] = local_38.UnserializedPaddingBytes[0];
  local_58.Value = local_38.Value;
  local_58.Tangent.ArriveTangent = local_38.Tangent.ArriveTangent;
  local_58.Tangent.LeaveTangent = local_38.Tangent.LeaveTangent;
  local_58.Tangent.ArriveTangentWeight = local_38.Tangent.ArriveTangentWeight;
  local_58.Tangent.LeaveTangentWeight = local_38.Tangent.LeaveTangentWeight;
  TMovieSceneScriptingKey<FMovieSceneDoubleChannel,FMovieSceneDoubleValue>::SetValueInChannel
            ((TMovieSceneScriptingKey<FMovieSceneDoubleChannel,FMovieSceneDoubleValue> *)
             &param_1[1].field_0x18,(FKeyHandle)*(uint *)(param_1 + 1),TVar2,&local_58);
  return;
}

// execSetTangentWeightMode @ 14c67ef80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UMovieSceneScriptingDoubleKey::execSetTangentWeightMode
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> TVar2;
  TEnumAsByte<ERichCurveTangentWeightMode> TVar3;
  undefined1 auStack_88 [32];
  TEnumAsByte<ERichCurveTangentWeightMode> local_68 [16];
  FMovieSceneDoubleValue local_58;
  FMovieSceneDoubleValue local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68[0].Value = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_68);
  }
  TVar3.Value = local_68[0].Value;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TMovieSceneScriptingKey<FMovieSceneDoubleChannel,FMovieSceneDoubleValue>::GetValueFromChannel
            ((TMovieSceneScriptingKey<FMovieSceneDoubleChannel,FMovieSceneDoubleValue> *)
             &param_1[1].field_0x18,&local_38,(FKeyHandle)*(uint *)(param_1 + 1));
  TVar2.WeakPtr.ObjectIndex = *(int *)&param_1[1].field_0xc;
  TVar2.WeakPtr.ObjectSerialNumber = *(int *)&param_1[1].field_0x10;
  local_38.Tangent.TangentWeightMode.Value = TVar3.Value;
  local_58.Tangent.UnserializedPaddingBytes[0] = local_38.Tangent.UnserializedPaddingBytes[0];
  local_58.Tangent.UnserializedPaddingBytes[1] = local_38.Tangent.UnserializedPaddingBytes[1];
  local_58.Tangent.UnserializedPaddingBytes[2] = local_38.Tangent.UnserializedPaddingBytes[2];
  local_58.InterpMode.Value = local_38.InterpMode.Value;
  local_58.TangentMode.Value = local_38.TangentMode.Value;
  local_58.PaddingByte = local_38.PaddingByte;
  local_58.UnserializedPaddingBytes[0] = local_38.UnserializedPaddingBytes[0];
  local_58.Tangent.TangentWeightMode.Value = TVar3.Value;
  local_58.Value = local_38.Value;
  local_58.Tangent.ArriveTangent = local_38.Tangent.ArriveTangent;
  local_58.Tangent.LeaveTangent = local_38.Tangent.LeaveTangent;
  local_58.Tangent.ArriveTangentWeight = local_38.Tangent.ArriveTangentWeight;
  local_58.Tangent.LeaveTangentWeight = local_38.Tangent.LeaveTangentWeight;
  TMovieSceneScriptingKey<FMovieSceneDoubleChannel,FMovieSceneDoubleValue>::SetValueInChannel
            ((TMovieSceneScriptingKey<FMovieSceneDoubleChannel,FMovieSceneDoubleValue> *)
             &param_1[1].field_0x18,(FKeyHandle)*(uint *)(param_1 + 1),TVar2,&local_58);
  return;
}

// execSetTime @ 14c67f790

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UMovieSceneScriptingDoubleKey::execSetTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FKeyHandle FVar2;
  FProperty *pFVar3;
  char cVar4;
  float fVar5;
  bool bVar6;
  FFrameRate FVar7;
  FMovieSceneChannel *this;
  wchar_t *pwVar8;
  FFrameNumber FVar9;
  int *piVar10;
  float fVar11;
  char local_res8 [8];
  int local_res10 [4];
  float local_res20 [2];
  FWeakObjectPtr local_98;
  FFrameRate local_90;
  FWeakObjectPtr local_88 [10];
  
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0.0;
  piVar10 = local_res10;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar10 = (int *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res8[0] = '\0';
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  fVar5 = local_res20[0];
  cVar4 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_88[0].ObjectIndex = *(int *)&param_1[1].field_0xc;
  local_88[0].ObjectSerialNumber = *(int *)&param_1[1].field_0x10;
  FVar9.Value = *piVar10;
  FVar2.Index = *(uint *)(param_1 + 1);
  local_98.ObjectIndex = *(int *)&param_1[1].field_0x4;
  local_98.ObjectSerialNumber = *(int *)&param_1[1].field_0x8;
  bVar6 = FWeakObjectPtr::IsValid(&local_98);
  if (bVar6) {
    fVar11 = ::FFrameTime::MaxSubframe;
    if (fVar5 <= ::FFrameTime::MaxSubframe) {
      fVar11 = fVar5;
    }
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    if ((cVar4 != '\x01') || (fVar11 <= 0.0)) {
      if (cVar4 == '\0') {
        FWeakObjectPtr::Get(&local_98);
        UMovieSceneSequenceExtensions::GetTickResolution((UMovieSceneSequence *)(local_88 + 1));
        FWeakObjectPtr::Get(&local_98);
        FVar7 = UMovieSceneSequenceExtensions::GetDisplayRate((UMovieSceneSequence *)(local_88 + 2))
        ;
        local_90.Denominator = (int)::FFrameTime::MaxSubframe;
        if (fVar11 <= ::FFrameTime::MaxSubframe) {
          local_90.Denominator = (int)fVar11;
        }
        if ((float)local_90.Denominator <= 0.0) {
          local_90.Denominator = 0;
        }
        local_90.Numerator = FVar9.Value;
        ConvertFrameTime((FFrameTime)&local_90,local_90,*(FFrameRate *)FVar7);
        FVar9.Value = local_90.Numerator;
        if (__real_3f000000 <= (float)local_90.Denominator) {
          FVar9.Value = local_90.Numerator + 1;
        }
      }
    }
    else {
      local_90.Numerator = 0;
      local_90.Denominator = 0;
      FFrame::KismetExecutionMessage
                (L"SetTime called with a SubFrame specified for a Tick Resolution type time! SubFrames are only allowed for Display Rate types, ignoring..."
                 ,Error,(FName)0x0);
    }
    this = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)&param_1[1].field_0x18);
    if (this != (FMovieSceneChannel *)0x0) {
      bVar6 = FWeakObjectPtr::IsValid(local_88);
      if (bVar6) {
        FWeakObjectPtr::Get(local_88);
      }
      FMovieSceneChannel::SetKeyTime(this,FVar2,FVar9);
      return;
    }
    pwVar8 = L"Invalid ChannelHandle for MovieSceneScriptingKey, failed to set Time.";
  }
  else {
    pwVar8 = L"SetTime called with an invalid owning sequence.";
  }
  local_90.Numerator = 0;
  local_90.Denominator = 0;
  FFrame::KismetExecutionMessage(pwVar8,Error,(FName)0x0);
  return;
}

// execSetValue @ 14c67fd00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UMovieSceneScriptingDoubleKey::execSetValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> TVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  FMovieSceneDoubleValue local_68;
  FMovieSceneDoubleValue local_48;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78 = 0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  uVar3 = (undefined4)local_78;
  uVar4 = local_78._4_4_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TMovieSceneScriptingKey<FMovieSceneDoubleChannel,FMovieSceneDoubleValue>::GetValueFromChannel
            ((TMovieSceneScriptingKey<FMovieSceneDoubleChannel,FMovieSceneDoubleValue> *)
             &param_1[1].field_0x18,&local_48,(FKeyHandle)*(uint *)(param_1 + 1));
  TVar2.WeakPtr.ObjectIndex = *(int *)&param_1[1].field_0xc;
  TVar2.WeakPtr.ObjectSerialNumber = *(int *)&param_1[1].field_0x10;
  local_68.Value._0_4_ = uVar3;
  local_68.Value._4_4_ = uVar4;
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
  TMovieSceneScriptingKey<FMovieSceneDoubleChannel,FMovieSceneDoubleValue>::SetValueInChannel
            ((TMovieSceneScriptingKey<FMovieSceneDoubleChannel,FMovieSceneDoubleValue> *)
             &param_1[1].field_0x18,(FKeyHandle)*(uint *)(param_1 + 1),TVar2,&local_68);
  return;
}

