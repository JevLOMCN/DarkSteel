// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 75

// CoercePropertyValue @ 146650160

FIntermediatePropertyValue * __cdecl
UE::MovieScene::TPropertyTraits<signed_char,__int64,1>::CoercePropertyValue
          (FIntermediatePropertyValue *__return_storage_ptr__,FProperty *param_1,
          FSourcePropertyValue *param_2)

{
  schar *psVar1;
  longlong local_res8 [4];
  
  psVar1 = FSourcePropertyValue::Cast<signed_char>(param_2);
  local_res8[0] = (longlong)*psVar1;
  FIntermediatePropertyValue::FromValue<__int64_&>(__return_storage_ptr__,local_res8);
  return __return_storage_ptr__;
}

// CoercePropertyValue @ 1466501a0

FIntermediatePropertyValue * __cdecl
UE::MovieScene::TPropertyTraits<short,__int64,1>::CoercePropertyValue
          (FIntermediatePropertyValue *__return_storage_ptr__,FProperty *param_1,
          FSourcePropertyValue *param_2)

{
  short *psVar1;
  longlong local_res8 [4];
  
  psVar1 = FSourcePropertyValue::Cast<short>(param_2);
  local_res8[0] = (longlong)*psVar1;
  FIntermediatePropertyValue::FromValue<__int64_&>(__return_storage_ptr__,local_res8);
  return __return_storage_ptr__;
}

// CoercePropertyValue @ 1466501e0

FIntermediatePropertyValue * __cdecl
UE::MovieScene::TPropertyTraits<int,__int64,1>::CoercePropertyValue
          (FIntermediatePropertyValue *__return_storage_ptr__,FProperty *param_1,
          FSourcePropertyValue *param_2)

{
  int *piVar1;
  longlong local_res8 [4];
  
  piVar1 = FSourcePropertyValue::Cast<int>(param_2);
  local_res8[0] = (longlong)*piVar1;
  FIntermediatePropertyValue::FromValue<__int64_&>(__return_storage_ptr__,local_res8);
  return __return_storage_ptr__;
}

// CoercePropertyValue @ 146650220

FIntermediatePropertyValue * __cdecl
UE::MovieScene::TPropertyTraits<double,double,1>::CoercePropertyValue
          (FIntermediatePropertyValue *__return_storage_ptr__,FProperty *param_1,
          FSourcePropertyValue *param_2)

{
  double *pdVar1;
  double local_res8 [4];
  
  pdVar1 = FSourcePropertyValue::Cast<double>(param_2);
  local_res8[0] = *pdVar1;
  FIntermediatePropertyValue::FromValue<double_&>(__return_storage_ptr__,local_res8);
  return __return_storage_ptr__;
}

// CoercePropertyValue @ 146650260

FIntermediatePropertyValue * __cdecl
UE::MovieScene::
TPropertyTraits<UE::Math::TTransform<double>,UE::MovieScene::FIntermediate3DTransform,1>::
CoercePropertyValue(FIntermediatePropertyValue *__return_storage_ptr__,FProperty *param_1,
                   FSourcePropertyValue *param_2)

{
  TTransform<double> *pTVar1;
  FIntermediate3DTransform local_58;
  
  local_58.S_Z = 0.0;
  local_58.T_X = 0.0;
  local_58.T_Y = 0.0;
  local_58.T_Z = 0.0;
  local_58.R_X = 0.0;
  local_58.R_Y = 0.0;
  local_58.R_Z = 0.0;
  local_58.S_X = 0.0;
  local_58.S_Y = 0.0;
  pTVar1 = FSourcePropertyValue::Cast<UE::Math::TTransform<double>_>(param_2);
  MovieScene::ConvertOperationalProperty(pTVar1,&local_58);
  FIntermediatePropertyValue::FromValue<UE::MovieScene::FIntermediate3DTransform_&>
            (__return_storage_ptr__,&local_58);
  return __return_storage_ptr__;
}

// CoercePropertyValue @ 1466502c0

FIntermediatePropertyValue * __cdecl
UE::MovieScene::
TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>::
CoercePropertyValue(FIntermediatePropertyValue *__return_storage_ptr__,FProperty *param_1,
                   FSourcePropertyValue *param_2)

{
  TVector2<float> *pTVar1;
  FFloatIntermediateVector local_28;
  
  pTVar1 = FSourcePropertyValue::Cast<UE::Math::TVector2<float>_>(param_2);
  local_28.X = (double)(pTVar1->field0_0x0)._s_0.X;
  local_28.Y = (double)(pTVar1->field0_0x0)._s_0.Y;
  local_28.Z = 0.0;
  local_28.W = 0.0;
  FIntermediatePropertyValue::FromValue<UE::MovieScene::FFloatIntermediateVector_&>
            (__return_storage_ptr__,&local_28);
  return __return_storage_ptr__;
}

// CoercePropertyValue @ 146650310

FIntermediatePropertyValue * __cdecl
UE::MovieScene::
TPropertyTraits<UE::Math::TVector2<double>,UE::MovieScene::FDoubleIntermediateVector,1>::
CoercePropertyValue(FIntermediatePropertyValue *__return_storage_ptr__,FProperty *param_1,
                   FSourcePropertyValue *param_2)

{
  TVector2<double> *pTVar1;
  FDoubleIntermediateVector local_28;
  
  pTVar1 = FSourcePropertyValue::Cast<UE::Math::TVector2<double>_>(param_2);
  local_28.X = (pTVar1->field0_0x0)._s_0.X;
  local_28.Y = (pTVar1->field0_0x0)._s_0.Y;
  local_28.Z = 0.0;
  local_28.W = 0.0;
  FIntermediatePropertyValue::FromValue<UE::MovieScene::FDoubleIntermediateVector_&>
            (__return_storage_ptr__,&local_28);
  return __return_storage_ptr__;
}

// CoercePropertyValue @ 146650350

FIntermediatePropertyValue * __cdecl
UE::MovieScene::
TPropertyTraits<UE::Math::TVector4<float>,UE::MovieScene::FFloatIntermediateVector,1>::
CoercePropertyValue(FIntermediatePropertyValue *__return_storage_ptr__,FProperty *param_1,
                   FSourcePropertyValue *param_2)

{
  undefined8 uVar1;
  double dVar2;
  TVector4<float> *pTVar3;
  undefined1 local_28 [32];
  
  pTVar3 = FSourcePropertyValue::Cast<UE::Math::TVector4<float>_>(param_2);
  local_28._0_8_ = (undefined8)(pTVar3->field0_0x0)._s_0.X;
  local_28._8_8_ = (undefined8)(pTVar3->field0_0x0)._s_0.Y;
  uVar1 = *(undefined8 *)((longlong)&pTVar3->field0_0x0 + 8);
  dVar2 = (double)(float)((ulonglong)uVar1 >> 0x20);
  local_28._24_4_ = SUB84(dVar2,0);
  local_28._16_8_ = (double)(float)uVar1;
  local_28._28_4_ = (int)((ulonglong)dVar2 >> 0x20);
  FIntermediatePropertyValue::FromValue<UE::MovieScene::FFloatIntermediateVector_&>
            (__return_storage_ptr__,(FFloatIntermediateVector *)local_28);
  return __return_storage_ptr__;
}

// CoercePropertyValue @ 1466503b0

FIntermediatePropertyValue * __cdecl
UE::MovieScene::
TPropertyTraits<UE::Math::TVector4<double>,UE::MovieScene::FDoubleIntermediateVector,1>::
CoercePropertyValue(FIntermediatePropertyValue *__return_storage_ptr__,FProperty *param_1,
                   FSourcePropertyValue *param_2)

{
  TVector4<double> *pTVar1;
  FDoubleIntermediateVector local_28;
  
  pTVar1 = FSourcePropertyValue::Cast<UE::Math::TVector4<double>_>(param_2);
  local_28.X = (pTVar1->field0_0x0)._s_0.X;
  local_28.Y = (pTVar1->field0_0x0)._s_0.Y;
  local_28.Z = (pTVar1->field0_0x0)._s_0.Z;
  local_28.W = (pTVar1->field0_0x0)._s_0.W;
  FIntermediatePropertyValue::FromValue<UE::MovieScene::FDoubleIntermediateVector_&>
            (__return_storage_ptr__,&local_28);
  return __return_storage_ptr__;
}

// CoercePropertyValue @ 1466503f0

FIntermediatePropertyValue * __cdecl
UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>
::CoercePropertyValue
          (FIntermediatePropertyValue *__return_storage_ptr__,FProperty *param_1,
          FSourcePropertyValue *param_2)

{
  TVector<float> *pTVar1;
  FFloatIntermediateVector local_28;
  
  pTVar1 = FSourcePropertyValue::Cast<UE::Math::TVector<float>_>(param_2);
  local_28.X = (double)(pTVar1->field0_0x0)._s_0.X;
  local_28.Y = (double)(pTVar1->field0_0x0)._s_0.Y;
  local_28.Z = (double)(pTVar1->field0_0x0)._s_0.Z;
  local_28.W = 0.0;
  FIntermediatePropertyValue::FromValue<UE::MovieScene::FFloatIntermediateVector_&>
            (__return_storage_ptr__,&local_28);
  return __return_storage_ptr__;
}

// CoercePropertyValue @ 146650450

FIntermediatePropertyValue * __cdecl
UE::MovieScene::
TPropertyTraits<UE::Math::TVector<double>,UE::MovieScene::FDoubleIntermediateVector,1>::
CoercePropertyValue(FIntermediatePropertyValue *__return_storage_ptr__,FProperty *param_1,
                   FSourcePropertyValue *param_2)

{
  TVector<double> *pTVar1;
  FDoubleIntermediateVector local_28;
  
  pTVar1 = FSourcePropertyValue::Cast<UE::Math::TVector<double>_>(param_2);
  local_28.W = 0.0;
  local_28.X = (pTVar1->field0_0x0)._s_0.X;
  local_28.Y = (pTVar1->field0_0x0)._s_0.Y;
  local_28.Z = (pTVar1->field0_0x0)._s_0.Z;
  FIntermediatePropertyValue::FromValue<UE::MovieScene::FDoubleIntermediateVector_&>
            (__return_storage_ptr__,&local_28);
  return __return_storage_ptr__;
}

// CoercePropertyValue @ 1466504a0

FIntermediatePropertyValue * __cdecl
UE::MovieScene::TPropertyTraits<FColor,UE::MovieScene::FIntermediateColor,1>::CoercePropertyValue
          (FIntermediatePropertyValue *__return_storage_ptr__,FProperty *param_1,
          FSourcePropertyValue *param_2)

{
  FColor *pFVar1;
  FIntermediateColor local_28;
  
  pFVar1 = FSourcePropertyValue::Cast<FColor>(param_2);
  local_28.R = (double)FLinearColor::sRGBToLinearTable[(pFVar1->field0_0x0)._s_0.R];
  local_28.G = (double)FLinearColor::sRGBToLinearTable[(pFVar1->field0_0x0)._s_0.G];
  local_28.B = (double)FLinearColor::sRGBToLinearTable[(pFVar1->field0_0x0)._s_0.B];
  local_28.A = (double)((float)(pFVar1->field0_0x0)._s_0.A * __real_3b808081);
  FIntermediatePropertyValue::FromValue<UE::MovieScene::FIntermediateColor_&>
            (__return_storage_ptr__,&local_28);
  return __return_storage_ptr__;
}

// CoercePropertyValue @ 146650530

FIntermediatePropertyValue * __cdecl
UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>::
CoercePropertyValue(FIntermediatePropertyValue *__return_storage_ptr__,FProperty *param_1,
                   FSourcePropertyValue *param_2)

{
  undefined8 uVar1;
  double dVar2;
  FLinearColor *pFVar3;
  undefined1 local_28 [32];
  
  pFVar3 = FSourcePropertyValue::Cast<FLinearColor>(param_2);
  local_28._0_8_ = (undefined8)(pFVar3->field0_0x0)._s_0.R;
  local_28._8_8_ = (undefined8)(pFVar3->field0_0x0)._s_0.G;
  uVar1 = *(undefined8 *)((longlong)&pFVar3->field0_0x0 + 8);
  dVar2 = (double)(float)((ulonglong)uVar1 >> 0x20);
  local_28._24_4_ = SUB84(dVar2,0);
  local_28._16_8_ = (double)(float)uVar1;
  local_28._28_4_ = (int)((ulonglong)dVar2 >> 0x20);
  FIntermediatePropertyValue::FromValue<UE::MovieScene::FIntermediateColor_&>
            (__return_storage_ptr__,(FIntermediateColor *)local_28);
  return __return_storage_ptr__;
}

// CoercePropertyValue @ 146650590

FIntermediatePropertyValue * __cdecl
UE::MovieScene::TPropertyTraits<FSlateColor,UE::MovieScene::FIntermediateColor,1>::
CoercePropertyValue(FIntermediatePropertyValue *__return_storage_ptr__,FProperty *param_1,
                   FSourcePropertyValue *param_2)

{
  FSlateColor *this;
  FIntermediateColor local_28;
  
  this = FSourcePropertyValue::Cast<FSlateColor>(param_2);
  if (this->ColorUseRule == UseColor_ColorTable) {
    this = (FSlateColor *)FSlateColor::GetColorFromTable(this);
  }
  local_28.R = (double)(this->SpecifiedColor).field0_0x0._s_0.R;
  local_28.G = (double)(this->SpecifiedColor).field0_0x0._s_0.G;
  local_28.B = (double)(this->SpecifiedColor).field0_0x0._s_0.B;
  local_28.A = (double)(this->SpecifiedColor).field0_0x0._s_0.A;
  FIntermediatePropertyValue::FromValue<UE::MovieScene::FIntermediateColor_&>
            (__return_storage_ptr__,&local_28);
  return __return_storage_ptr__;
}

// CoercePropertyValue @ 146650620

FIntermediatePropertyValue * __cdecl
UE::MovieScene::TPropertyTraits<__int64,__int64,1>::CoercePropertyValue
          (FIntermediatePropertyValue *__return_storage_ptr__,FProperty *param_1,
          FSourcePropertyValue *param_2)

{
  long64 *plVar1;
  long64 local_res8 [4];
  
  plVar1 = FSourcePropertyValue::Cast<__int64>(param_2);
  local_res8[0] = *plVar1;
  FIntermediatePropertyValue::FromValue<__int64_&>(__return_storage_ptr__,local_res8);
  return __return_storage_ptr__;
}

// GetObjectPropertyValue @ 14668d720

void __cdecl
UE::MovieScene::TPropertyTraits<signed_char,__int64,1>::GetObjectPropertyValue
          (UObject *param_1,ushort param_2,long64 *param_3)

{
  *param_3 = (longlong)(char)(&param_1->field_0x0)[param_2];
  return;
}

// GetObjectPropertyValue @ 14668d740

void __cdecl
UE::MovieScene::TPropertyTraits<signed_char,__int64,1>::GetObjectPropertyValue
          (UObject *param_1,FTrackInstancePropertyBindings *param_2,long64 *param_3)

{
  uchar uVar1;
  FResolvedPropertyAndFunction *this;
  char *pcVar2;
  
  this = FTrackInstancePropertyBindings::FindOrAdd(param_2,param_1);
  uVar1 = (this->ResolvedProperty).TypeIndex;
  if (uVar1 == '\0') {
    pcVar2 = FCachedProperty::GetPropertyAddress<signed_char>((FCachedProperty *)this);
  }
  else {
    if (uVar1 != '\x01') goto LAB_14668d796;
    pcVar2 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)this,false);
  }
  if (pcVar2 != (char *)0x0) {
    *param_3 = (longlong)*pcVar2;
    return;
  }
LAB_14668d796:
  *param_3 = 0;
  return;
}

// GetObjectPropertyValue @ 14668d7b0

void __cdecl
UE::MovieScene::TPropertyTraits<short,__int64,1>::GetObjectPropertyValue
          (UObject *param_1,ushort param_2,long64 *param_3)

{
  *param_3 = (longlong)*(short *)(&param_1->field_0x0 + param_2);
  return;
}

// GetObjectPropertyValue @ 14668d7d0

void __cdecl
UE::MovieScene::TPropertyTraits<short,__int64,1>::GetObjectPropertyValue
          (UObject *param_1,FTrackInstancePropertyBindings *param_2,long64 *param_3)

{
  uchar uVar1;
  FResolvedPropertyAndFunction *this;
  short *psVar2;
  
  this = FTrackInstancePropertyBindings::FindOrAdd(param_2,param_1);
  uVar1 = (this->ResolvedProperty).TypeIndex;
  if (uVar1 == '\0') {
    psVar2 = FCachedProperty::GetPropertyAddress<short>((FCachedProperty *)this);
  }
  else {
    if (uVar1 != '\x01') goto LAB_14668d825;
    psVar2 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)this,false);
  }
  if (psVar2 != (short *)0x0) {
    *param_3 = (longlong)*psVar2;
    return;
  }
LAB_14668d825:
  *param_3 = 0;
  return;
}

// GetObjectPropertyValue @ 14668d840

void __cdecl
UE::MovieScene::TPropertyTraits<int,__int64,1>::GetObjectPropertyValue
          (UObject *param_1,ushort param_2,long64 *param_3)

{
  *param_3 = (longlong)*(int *)(&param_1->field_0x0 + param_2);
  return;
}

// GetObjectPropertyValue @ 14668d860

void __cdecl
UE::MovieScene::TPropertyTraits<int,__int64,1>::GetObjectPropertyValue
          (UObject *param_1,FTrackInstancePropertyBindings *param_2,long64 *param_3)

{
  uchar uVar1;
  FResolvedPropertyAndFunction *this;
  int *piVar2;
  
  this = FTrackInstancePropertyBindings::FindOrAdd(param_2,param_1);
  uVar1 = (this->ResolvedProperty).TypeIndex;
  if (uVar1 == '\0') {
    piVar2 = FCachedProperty::GetPropertyAddress<int>((FCachedProperty *)this);
  }
  else {
    if (uVar1 != '\x01') goto LAB_14668d8b4;
    piVar2 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)this,false);
  }
  if (piVar2 != (int *)0x0) {
    *param_3 = (longlong)*piVar2;
    return;
  }
LAB_14668d8b4:
  *param_3 = 0;
  return;
}

// GetObjectPropertyValue @ 14668d8d0

void __cdecl
UE::MovieScene::TPropertyTraits<double,double,1>::GetObjectPropertyValue
          (UObject *param_1,ushort param_2,double *param_3)

{
  *param_3 = *(double *)(&param_1->field_0x0 + param_2);
  return;
}

// GetObjectPropertyValue @ 14668d8f0

void __cdecl
UE::MovieScene::TPropertyTraits<double,double,1>::GetObjectPropertyValue
          (UObject *param_1,FTrackInstancePropertyBindings *param_2,double *param_3)

{
  uchar uVar1;
  FResolvedPropertyAndFunction *this;
  double *pdVar2;
  
  this = FTrackInstancePropertyBindings::FindOrAdd(param_2,param_1);
  uVar1 = (this->ResolvedProperty).TypeIndex;
  if (uVar1 == '\0') {
    pdVar2 = FCachedProperty::GetPropertyAddress<double>((FCachedProperty *)this);
  }
  else {
    if (uVar1 != '\x01') goto LAB_14668d948;
    pdVar2 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)this,false);
  }
  if (pdVar2 != (double *)0x0) {
    *param_3 = *pdVar2;
    return;
  }
LAB_14668d948:
  *param_3 = 0.0;
  return;
}

// GetObjectPropertyValue @ 14668d960

void __cdecl
UE::MovieScene::
TPropertyTraits<UE::Math::TTransform<double>,UE::MovieScene::FIntermediate3DTransform,1>::
GetObjectPropertyValue(UObject *param_1,ushort param_2,FIntermediate3DTransform *param_3)

{
  MovieScene::ConvertOperationalProperty
            ((TTransform<double> *)(&param_1->field_0x0 + param_2),param_3);
  return;
}

// GetObjectPropertyValue @ 14668d980

void __cdecl
UE::MovieScene::
TPropertyTraits<UE::Math::TTransform<double>,UE::MovieScene::FIntermediate3DTransform,1>::
GetObjectPropertyValue
          (UObject *param_1,FTrackInstancePropertyBindings *param_2,
          FIntermediate3DTransform *param_3)

{
  TTransform<double> local_68;
  
  FTrackInstancePropertyBindings::GetCurrentValue<UE::Math::TTransform<double>_>
            (param_2,&local_68,param_1);
  MovieScene::ConvertOperationalProperty(&local_68,param_3);
  return;
}

// GetObjectPropertyValue @ 14668d9c0

void __cdecl
UE::MovieScene::
TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>::
GetObjectPropertyValue(UObject *param_1,ushort param_2,FFloatIntermediateVector *param_3)

{
  float fVar1;
  
  fVar1 = *(float *)(&param_1->field_0x4 + param_2);
  param_3->X = (double)*(float *)(&param_1->field_0x0 + param_2);
  param_3->Y = (double)fVar1;
  param_3->Z = 0.0;
  param_3->W = 0.0;
  return;
}

// GetObjectPropertyValue @ 14668d9f0

void __cdecl
UE::MovieScene::
TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>::
GetObjectPropertyValue
          (UObject *param_1,FTrackInstancePropertyBindings *param_2,
          FFloatIntermediateVector *param_3)

{
  uchar uVar1;
  FResolvedPropertyAndFunction *this;
  TVector2<float>_u_0_s_0 *pTVar2;
  undefined8 local_res18;
  
  local_res18 = (TVector2<float>_u_0)0x0;
  this = FTrackInstancePropertyBindings::FindOrAdd(param_2,param_1);
  uVar1 = (this->ResolvedProperty).TypeIndex;
  if (uVar1 == '\0') {
    pTVar2 = (TVector2<float>_u_0_s_0 *)
             FCachedProperty::GetPropertyAddress<UE::Math::TVector2<float>_>
                       ((FCachedProperty *)this);
  }
  else {
    if (uVar1 != '\x01') goto LAB_14668da3e;
    pTVar2 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)this,false);
  }
  if (pTVar2 != (TVector2<float>_u_0_s_0 *)0x0) {
    local_res18 = *pTVar2;
  }
LAB_14668da3e:
  param_3->X = (double)(float)local_res18;
  param_3->Y = (double)local_res18._4_4_;
  param_3->Z = 0.0;
  param_3->W = 0.0;
  return;
}

// GetObjectPropertyValue @ 14668da80

void __cdecl
UE::MovieScene::
TPropertyTraits<UE::Math::TVector2<double>,UE::MovieScene::FDoubleIntermediateVector,1>::
GetObjectPropertyValue(UObject *param_1,ushort param_2,FDoubleIntermediateVector *param_3)

{
  double dVar1;
  
  dVar1 = *(double *)(&param_1->field_0x8 + param_2);
  param_3->X = *(double *)(&param_1->field_0x0 + param_2);
  param_3->Y = dVar1;
  param_3->Z = 0.0;
  param_3->W = 0.0;
  return;
}

// GetObjectPropertyValue @ 14668dab0

void __cdecl
UE::MovieScene::
TPropertyTraits<UE::Math::TVector2<double>,UE::MovieScene::FDoubleIntermediateVector,1>::
GetObjectPropertyValue
          (UObject *param_1,FTrackInstancePropertyBindings *param_2,
          FDoubleIntermediateVector *param_3)

{
  uchar uVar1;
  FResolvedPropertyAndFunction *this;
  TVector2<double> *pTVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  this = FTrackInstancePropertyBindings::FindOrAdd(param_2,param_1);
  uVar1 = (this->ResolvedProperty).TypeIndex;
  if (uVar1 == '\0') {
    pTVar2 = FCachedProperty::GetPropertyAddress<UE::Math::TVector2<double>_>
                       ((FCachedProperty *)this);
  }
  else {
    if (uVar1 != '\x01') goto LAB_14668daf8;
    pTVar2 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)this,false);
  }
  if (pTVar2 != (TVector2<double> *)0x0) {
    uVar3 = *(undefined4 *)&pTVar2->field0_0x0;
    uVar4 = *(undefined4 *)((longlong)&pTVar2->field0_0x0 + 4);
    uVar5 = *(undefined4 *)((longlong)&pTVar2->field0_0x0 + 8);
    uVar6 = *(undefined4 *)((longlong)&pTVar2->field0_0x0 + 0xc);
  }
LAB_14668daf8:
  param_3->X = (double)CONCAT44(uVar4,uVar3);
  param_3->Y = (double)CONCAT44(uVar6,uVar5);
  param_3->Z = 0.0;
  param_3->W = 0.0;
  return;
}

// GetObjectPropertyValue @ 14668db20

void __cdecl
UE::MovieScene::
TPropertyTraits<UE::Math::TVector4<float>,UE::MovieScene::FFloatIntermediateVector,1>::
GetObjectPropertyValue(UObject *param_1,ushort param_2,FFloatIntermediateVector *param_3)

{
  float fVar1;
  undefined8 uVar2;
  
  fVar1 = *(float *)(&param_1->field_0x4 + param_2);
  uVar2 = *(undefined8 *)(&param_1->field_0x8 + param_2);
  param_3->X = (double)*(float *)(&param_1->field_0x0 + param_2);
  param_3->Y = (double)fVar1;
  param_3->Z = (double)(float)uVar2;
  param_3->W = (double)(float)((ulonglong)uVar2 >> 0x20);
  return;
}

// GetObjectPropertyValue @ 14668db60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::MovieScene::
TPropertyTraits<UE::Math::TVector4<float>,UE::MovieScene::FFloatIntermediateVector,1>::
GetObjectPropertyValue
          (UObject *param_1,FTrackInstancePropertyBindings *param_2,
          FFloatIntermediateVector *param_3)

{
  uchar uVar1;
  FResolvedPropertyAndFunction *this;
  TVector4<float> *pTVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = _UNK_15068964c;
  fVar5 = _UNK_150689648;
  fVar4 = _UNK_150689644;
  fVar3 = ___xmm_3f800000000000000000000000000000;
  this = FTrackInstancePropertyBindings::FindOrAdd(param_2,param_1);
  uVar1 = (this->ResolvedProperty).TypeIndex;
  if (uVar1 == '\0') {
    pTVar2 = FCachedProperty::GetPropertyAddress<UE::Math::TVector4<float>_>
                       ((FCachedProperty *)this);
  }
  else {
    if (uVar1 != '\x01') goto LAB_14668dbad;
    pTVar2 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)this,false);
  }
  if (pTVar2 != (TVector4<float> *)0x0) {
    fVar3 = (pTVar2->field0_0x0)._s_0.X;
    fVar4 = (pTVar2->field0_0x0)._s_0.Y;
    fVar5 = (pTVar2->field0_0x0)._s_0.Z;
    fVar6 = (pTVar2->field0_0x0)._s_0.W;
  }
LAB_14668dbad:
  param_3->X = (double)fVar3;
  param_3->Y = (double)fVar4;
  param_3->Z = (double)fVar5;
  param_3->W = (double)fVar6;
  return;
}

// GetObjectPropertyValue @ 14668dc00

void __cdecl
UE::MovieScene::
TPropertyTraits<UE::Math::TVector4<double>,UE::MovieScene::FDoubleIntermediateVector,1>::
GetObjectPropertyValue(UObject *param_1,ushort param_2,FDoubleIntermediateVector *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = *(double *)(&param_1->field_0x8 + param_2);
  dVar3 = *(double *)((longlong)(&param_1->field_0x8 + param_2) + 8);
  dVar1 = *(double *)(&param_1->field_0x18 + param_2);
  param_3->X = *(double *)(&param_1->field_0x0 + param_2);
  param_3->Y = dVar2;
  param_3->Z = dVar3;
  param_3->W = dVar1;
  return;
}

// GetObjectPropertyValue @ 14668dc30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::MovieScene::
TPropertyTraits<UE::Math::TVector4<double>,UE::MovieScene::FDoubleIntermediateVector,1>::
GetObjectPropertyValue
          (UObject *param_1,FTrackInstancePropertyBindings *param_2,
          FDoubleIntermediateVector *param_3)

{
  uchar uVar1;
  FResolvedPropertyAndFunction *this;
  TVector4<double> *pTVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  
  dVar8 = _UNK_15061cbc8;
  dVar7 = ___xmm_3ff00000000000000000000000000000;
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  this = FTrackInstancePropertyBindings::FindOrAdd(param_2,param_1);
  uVar1 = (this->ResolvedProperty).TypeIndex;
  if (uVar1 == '\0') {
    pTVar2 = FCachedProperty::GetPropertyAddress<UE::Math::TVector4<double>_>
                       ((FCachedProperty *)this);
  }
  else {
    if (uVar1 != '\x01') goto LAB_14668dc89;
    pTVar2 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)this,false);
  }
  if (pTVar2 != (TVector4<double> *)0x0) {
    uVar3 = *(undefined4 *)&pTVar2->field0_0x0;
    uVar4 = *(undefined4 *)((longlong)&pTVar2->field0_0x0 + 4);
    uVar5 = *(undefined4 *)((longlong)&pTVar2->field0_0x0 + 8);
    uVar6 = *(undefined4 *)((longlong)&pTVar2->field0_0x0 + 0xc);
    dVar7 = (pTVar2->field0_0x0)._s_0.Z;
    dVar8 = (pTVar2->field0_0x0)._s_0.W;
  }
LAB_14668dc89:
  param_3->X = (double)CONCAT44(uVar4,uVar3);
  param_3->Y = (double)CONCAT44(uVar6,uVar5);
  param_3->Z = dVar7;
  param_3->W = dVar8;
  return;
}

// GetObjectPropertyValue @ 14668dcc0

void __cdecl
UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>
::GetObjectPropertyValue(UObject *param_1,ushort param_2,FFloatIntermediateVector *param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(&param_1->field_0x4 + param_2);
  fVar2 = *(float *)(&param_1->field_0x8 + param_2);
  param_3->X = (double)*(float *)(&param_1->field_0x0 + param_2);
  param_3->Y = (double)fVar1;
  param_3->Z = (double)fVar2;
  param_3->W = 0.0;
  return;
}

// GetObjectPropertyValue @ 14668dd00

void __cdecl
UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>
::GetObjectPropertyValue
          (UObject *param_1,FTrackInstancePropertyBindings *param_2,
          FFloatIntermediateVector *param_3)

{
  uchar uVar1;
  FResolvedPropertyAndFunction *this;
  TVector<float> *pTVar2;
  float fVar3;
  float fVar4;
  float local_48;
  
  fVar4 = 0.0;
  local_48 = 0.0;
  fVar3 = 0.0;
  this = FTrackInstancePropertyBindings::FindOrAdd(param_2,param_1);
  uVar1 = (this->ResolvedProperty).TypeIndex;
  if (uVar1 == '\0') {
    pTVar2 = FCachedProperty::GetPropertyAddress<UE::Math::TVector<float>_>((FCachedProperty *)this)
    ;
  }
  else {
    if (uVar1 != '\x01') goto LAB_14668dd77;
    pTVar2 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)this,false);
  }
  if (pTVar2 != (TVector<float> *)0x0) {
    fVar4 = (pTVar2->field0_0x0)._s_0.Z;
    fVar3 = (float)((ulonglong)*(undefined8 *)&pTVar2->field0_0x0 >> 0x20);
    local_48 = (float)*(undefined8 *)&pTVar2->field0_0x0;
  }
LAB_14668dd77:
  param_3->X = (double)local_48;
  param_3->Y = (double)fVar3;
  param_3->Z = (double)fVar4;
  param_3->W = 0.0;
  return;
}

// GetObjectPropertyValue @ 14668ddc0

void __cdecl
UE::MovieScene::
TPropertyTraits<UE::Math::TVector<double>,UE::MovieScene::FDoubleIntermediateVector,1>::
GetObjectPropertyValue(UObject *param_1,ushort param_2,FDoubleIntermediateVector *param_3)

{
  double dVar1;
  double dVar2;
  
  dVar1 = *(double *)(&param_1->field_0x8 + param_2);
  dVar2 = *(double *)((longlong)(&param_1->field_0x8 + param_2) + 8);
  param_3->X = *(double *)(&param_1->field_0x0 + param_2);
  param_3->Y = dVar1;
  param_3->Z = dVar2;
  param_3->W = 0.0;
  return;
}

// GetObjectPropertyValue @ 14668ddf0

void __cdecl
UE::MovieScene::
TPropertyTraits<UE::Math::TVector<double>,UE::MovieScene::FDoubleIntermediateVector,1>::
GetObjectPropertyValue
          (UObject *param_1,FTrackInstancePropertyBindings *param_2,
          FDoubleIntermediateVector *param_3)

{
  undefined8 uVar1;
  uchar uVar2;
  FResolvedPropertyAndFunction *this;
  TVector<double> *pTVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
  this = FTrackInstancePropertyBindings::FindOrAdd(param_2,param_1);
  uVar2 = (this->ResolvedProperty).TypeIndex;
  if (uVar2 == '\0') {
    pTVar3 = FCachedProperty::GetPropertyAddress<UE::Math::TVector<double>_>
                       ((FCachedProperty *)this);
  }
  else {
    if (uVar2 != '\x01') goto LAB_14668de45;
    pTVar3 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)this,false);
  }
  if (pTVar3 != (TVector<double> *)0x0) {
    uVar4 = *(undefined4 *)&pTVar3->field0_0x0;
    uVar5 = *(undefined4 *)((longlong)&pTVar3->field0_0x0 + 4);
    uVar6 = *(undefined4 *)((longlong)&pTVar3->field0_0x0 + 8);
    uVar7 = *(undefined4 *)((longlong)&pTVar3->field0_0x0 + 0xc);
    uVar1 = *(undefined8 *)((longlong)&pTVar3->field0_0x0 + 0x10);
    uVar8 = (undefined4)uVar1;
    uVar9 = (undefined4)((ulonglong)uVar1 >> 0x20);
  }
LAB_14668de45:
  param_3->X = (double)CONCAT44(uVar5,uVar4);
  param_3->Y = (double)CONCAT44(uVar7,uVar6);
  param_3->Z = (double)CONCAT44(uVar9,uVar8);
  param_3->W = 0.0;
  return;
}

// GetObjectPropertyValue @ 14668de80

void __cdecl
UE::MovieScene::TPropertyTraits<FColor,UE::MovieScene::FIntermediateColor,1>::GetObjectPropertyValue
          (UObject *param_1,ushort param_2,FIntermediateColor *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = FLinearColor::sRGBToLinearTable[(byte)(&param_1->field_0x1)[param_2]];
  fVar2 = FLinearColor::sRGBToLinearTable[(byte)(&param_1->field_0x0)[param_2]];
  fVar3 = (float)(byte)(&param_1->field_0x3)[param_2] * __real_3b808081;
  param_3->R = (double)FLinearColor::sRGBToLinearTable[(byte)(&param_1->field_0x2)[param_2]];
  param_3->G = (double)fVar1;
  param_3->B = (double)fVar2;
  param_3->A = (double)fVar3;
  return;
}

// GetObjectPropertyValue @ 14668def0

void __cdecl
UE::MovieScene::TPropertyTraits<FColor,UE::MovieScene::FIntermediateColor,1>::GetObjectPropertyValue
          (UObject *param_1,FTrackInstancePropertyBindings *param_2,FIntermediateColor *param_3)

{
  float fVar1;
  float fVar2;
  uchar uVar3;
  FResolvedPropertyAndFunction *this;
  FColor_u_0_s_0 *pFVar4;
  FColor_u_0 FVar5;
  
  FVar5.Bits = 0;
  this = FTrackInstancePropertyBindings::FindOrAdd(param_2,param_1);
  uVar3 = (this->ResolvedProperty).TypeIndex;
  if (uVar3 == '\0') {
    pFVar4 = (FColor_u_0_s_0 *)FCachedProperty::GetPropertyAddress<FColor>((FCachedProperty *)this);
  }
  else {
    if (uVar3 != '\x01') goto LAB_14668df35;
    pFVar4 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)this,false);
  }
  FVar5.Bits = 0;
  if (pFVar4 != (FColor_u_0_s_0 *)0x0) {
    FVar5._s_0 = *pFVar4;
  }
LAB_14668df35:
  fVar1 = FLinearColor::sRGBToLinearTable[FVar5.Bits >> 8 & 0xff];
  fVar2 = FLinearColor::sRGBToLinearTable[FVar5.Bits & 0xff];
  param_3->R = (double)FLinearColor::sRGBToLinearTable[FVar5.Bits >> 0x10 & 0xff];
  param_3->G = (double)fVar1;
  param_3->B = (double)fVar2;
  param_3->A = (double)((float)(FVar5.Bits >> 0x18) * __real_3b808081);
  return;
}

// GetObjectPropertyValue @ 14668dfa0

void __cdecl
UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>::
GetObjectPropertyValue(UObject *param_1,ushort param_2,FIntermediateColor *param_3)

{
  float fVar1;
  undefined8 uVar2;
  
  fVar1 = *(float *)(&param_1->field_0x4 + param_2);
  uVar2 = *(undefined8 *)(&param_1->field_0x8 + param_2);
  param_3->R = (double)*(float *)(&param_1->field_0x0 + param_2);
  param_3->G = (double)fVar1;
  param_3->B = (double)(float)uVar2;
  param_3->A = (double)(float)((ulonglong)uVar2 >> 0x20);
  return;
}

// GetObjectPropertyValue @ 14668dfe0

void __cdecl
UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>::
GetObjectPropertyValue
          (UObject *param_1,FTrackInstancePropertyBindings *param_2,FIntermediateColor *param_3)

{
  uchar uVar1;
  FResolvedPropertyAndFunction *this;
  FLinearColor *pFVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar3 = 0.0;
  fVar4 = 0.0;
  fVar5 = 0.0;
  fVar6 = 0.0;
  this = FTrackInstancePropertyBindings::FindOrAdd(param_2,param_1);
  uVar1 = (this->ResolvedProperty).TypeIndex;
  if (uVar1 == '\0') {
    pFVar2 = FCachedProperty::GetPropertyAddress<FLinearColor>((FCachedProperty *)this);
  }
  else {
    if (uVar1 != '\x01') goto LAB_14668e028;
    pFVar2 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)this,false);
  }
  if (pFVar2 != (FLinearColor *)0x0) {
    fVar3 = (pFVar2->field0_0x0)._s_0.R;
    fVar4 = (pFVar2->field0_0x0)._s_0.G;
    fVar5 = (pFVar2->field0_0x0)._s_0.B;
    fVar6 = (pFVar2->field0_0x0)._s_0.A;
  }
LAB_14668e028:
  param_3->R = (double)fVar3;
  param_3->G = (double)fVar4;
  param_3->B = (double)fVar5;
  param_3->A = (double)fVar6;
  return;
}

// GetObjectPropertyValue @ 14668e080

void __cdecl
UE::MovieScene::TPropertyTraits<FSlateColor,UE::MovieScene::FIntermediateColor,1>::
GetObjectPropertyValue(UObject *param_1,ushort param_2,FIntermediateColor *param_3)

{
  FLinearColor *pFVar1;
  FSlateColor *this;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  this = (FSlateColor *)(&param_1->field_0x0 + param_2);
  if (this->ColorUseRule == UseColor_ColorTable) {
    pFVar1 = FSlateColor::GetColorFromTable(this);
    fVar2 = (pFVar1->field0_0x0)._s_0.R;
    fVar3 = (pFVar1->field0_0x0)._s_0.G;
    fVar4 = (pFVar1->field0_0x0)._s_0.B;
    fVar5 = (pFVar1->field0_0x0)._s_0.A;
  }
  else {
    fVar2 = (this->SpecifiedColor).field0_0x0._s_0.R;
    fVar3 = (this->SpecifiedColor).field0_0x0._s_0.G;
    fVar4 = (this->SpecifiedColor).field0_0x0._s_0.B;
    fVar5 = (this->SpecifiedColor).field0_0x0._s_0.A;
  }
  param_3->R = (double)fVar2;
  param_3->G = (double)fVar3;
  param_3->B = (double)fVar4;
  param_3->A = (double)fVar5;
  return;
}

// GetObjectPropertyValue @ 14668e100

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::MovieScene::TPropertyTraits<FSlateColor,UE::MovieScene::FIntermediateColor,1>::
GetObjectPropertyValue
          (UObject *param_1,FTrackInstancePropertyBindings *param_2,FIntermediateColor *param_3)

{
  uchar uVar1;
  FResolvedPropertyAndFunction *this;
  FSlateColor *pFVar2;
  FLinearColor *pFVar3;
  FLinearColor_u_0 local_28;
  uint local_18;
  
  local_18 = local_18 & 0xffffff00;
  local_28._0_8_ = ___xmm_3f8000003f800000000000003f800000;
  local_28._8_8_ = _UNK_15090c6d8;
  this = FTrackInstancePropertyBindings::FindOrAdd(param_2,param_1);
  uVar1 = (this->ResolvedProperty).TypeIndex;
  if (uVar1 == '\0') {
    pFVar2 = FCachedProperty::GetPropertyAddress<FSlateColor>((FCachedProperty *)this);
  }
  else {
    if (uVar1 != '\x01') goto LAB_14668e15e;
    pFVar2 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)this,false);
  }
  if (pFVar2 != (FSlateColor *)0x0) {
    local_28._0_8_ = *(undefined8 *)&(pFVar2->SpecifiedColor).field0_0x0;
    local_28._8_8_ = *(undefined8 *)((longlong)&(pFVar2->SpecifiedColor).field0_0x0 + 8);
    local_18._0_1_ = pFVar2->ColorUseRule;
    local_18._1_1_ = pFVar2->ColorTableId;
    local_18._2_2_ = *(undefined2 *)&pFVar2->field_0x12;
  }
LAB_14668e15e:
  if ((char)local_18 == '\x01') {
    pFVar3 = FSlateColor::GetColorFromTable((FSlateColor *)&local_28._s_0);
    local_28._s_0.R = (pFVar3->field0_0x0)._s_0.R;
    local_28._s_0.G = (pFVar3->field0_0x0)._s_0.G;
    local_28._s_0.B = (pFVar3->field0_0x0)._s_0.B;
    local_28._s_0.A = (pFVar3->field0_0x0)._s_0.A;
  }
  else {
  }
  param_3->R = (double)local_28._s_0.R;
  param_3->G = (double)local_28._s_0.G;
  param_3->B = (double)local_28._s_0.B;
  param_3->A = (double)local_28._s_0.A;
  return;
}

// GetObjectPropertyValue @ 14668e1e0

void __cdecl
UE::MovieScene::TPropertyTraits<__int64,__int64,1>::GetObjectPropertyValue
          (UObject *param_1,ushort param_2,long64 *param_3)

{
  *param_3 = *(long64 *)(&param_1->field_0x0 + param_2);
  return;
}

// GetObjectPropertyValue @ 14668e200

void __cdecl
UE::MovieScene::TPropertyTraits<__int64,__int64,1>::GetObjectPropertyValue
          (UObject *param_1,FTrackInstancePropertyBindings *param_2,long64 *param_3)

{
  uchar uVar1;
  FResolvedPropertyAndFunction *this;
  long64 *plVar2;
  
  this = FTrackInstancePropertyBindings::FindOrAdd(param_2,param_1);
  uVar1 = (this->ResolvedProperty).TypeIndex;
  if (uVar1 == '\0') {
    plVar2 = FCachedProperty::GetPropertyAddress<__int64>((FCachedProperty *)this);
  }
  else {
    if (uVar1 != '\x01') goto LAB_14668e249;
    plVar2 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)this,false);
  }
  if (plVar2 != (long64 *)0x0) {
    *param_3 = *plVar2;
    return;
  }
LAB_14668e249:
  *param_3 = 0;
  return;
}

// SetObjectPropertyValue @ 1466fa280

void __cdecl
UE::MovieScene::TPropertyTraits<signed_char,__int64,1>::SetObjectPropertyValue
          (UObject *param_1,ushort param_2,long64 param_3)

{
  (&param_1->field_0x0)[param_2] = (char)param_3;
  return;
}

// SetObjectPropertyValue @ 1466fa290

void __cdecl
UE::MovieScene::TPropertyTraits<signed_char,__int64,1>::SetObjectPropertyValue
          (UObject *param_1,FTrackInstancePropertyBindings *param_2,long64 param_3)

{
  FTrackInstancePropertyBindings::CallFunction<signed_char>(param_2,param_1,(schar)param_3);
  return;
}

// SetObjectPropertyValue @ 1466fa2b0

void __cdecl
UE::MovieScene::TPropertyTraits<short,__int64,1>::SetObjectPropertyValue
          (UObject *param_1,ushort param_2,long64 param_3)

{
  *(short *)(&param_1->field_0x0 + param_2) = (short)param_3;
  return;
}

// SetObjectPropertyValue @ 1466fa2c0

void __cdecl
UE::MovieScene::TPropertyTraits<short,__int64,1>::SetObjectPropertyValue
          (UObject *param_1,FTrackInstancePropertyBindings *param_2,long64 param_3)

{
  FTrackInstancePropertyBindings::CallFunction<short>(param_2,param_1,(short)param_3);
  return;
}

// SetObjectPropertyValue @ 1466fa2e0

void __cdecl
UE::MovieScene::TPropertyTraits<int,__int64,1>::SetObjectPropertyValue
          (UObject *param_1,ushort param_2,long64 param_3)

{
  *(int *)(&param_1->field_0x0 + param_2) = (int)param_3;
  return;
}

// SetObjectPropertyValue @ 1466fa2f0

void __cdecl
UE::MovieScene::TPropertyTraits<int,__int64,1>::SetObjectPropertyValue
          (UObject *param_1,FTrackInstancePropertyBindings *param_2,long64 param_3)

{
  FTrackInstancePropertyBindings::CallFunction<int>(param_2,param_1,(int)param_3);
  return;
}

// SetObjectPropertyValue @ 1466fa310

void __cdecl
UE::MovieScene::TPropertyTraits<double,double,1>::SetObjectPropertyValue
          (UObject *param_1,ushort param_2,double param_3)

{
  *(double *)(&param_1->field_0x0 + param_2) = param_3;
  return;
}

// SetObjectPropertyValue @ 1466fa320

void __cdecl
UE::MovieScene::TPropertyTraits<double,double,1>::SetObjectPropertyValue
          (UObject *param_1,FTrackInstancePropertyBindings *param_2,double param_3)

{
  FTrackInstancePropertyBindings::CallFunction<double>(param_2,param_1,param_3);
  return;
}

// SetObjectPropertyValue @ 1466fa340

void __cdecl
UE::MovieScene::
TPropertyTraits<UE::Math::TTransform<double>,UE::MovieScene::FIntermediate3DTransform,1>::
SetObjectPropertyValue(UObject *param_1,ushort param_2,FIntermediate3DTransform *param_3)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  TQuat<double> *pTVar13;
  TRotator<double> local_a8;
  TQuat<double> local_88 [4];
  
  local_a8.Pitch = param_3->R_Y;
  local_a8.Yaw = param_3->R_Z;
  dVar2 = param_3->T_Y;
  uVar6 = *(undefined4 *)&param_3->T_X;
  uVar7 = *(undefined4 *)((longlong)&param_3->T_X + 4);
  dVar3 = param_3->T_Z;
  dVar4 = param_3->S_Y;
  uVar8 = *(undefined4 *)&param_3->S_X;
  uVar9 = *(undefined4 *)((longlong)&param_3->S_X + 4);
  local_a8.Roll = param_3->R_X;
  dVar5 = param_3->S_Z;
  pTVar13 = UE::Math::TRotator<double>::Quaternion(&local_a8,local_88);
  dVar10 = pTVar13->Y;
  dVar11 = pTVar13->Z;
  dVar12 = pTVar13->W;
  *(double *)(&param_1->field_0x0 + param_2) = pTVar13->X;
  *(double *)((longlong)(&param_1->field_0x0 + param_2) + 8) = dVar10;
  *(double *)(&param_1->field_0x10 + param_2) = dVar11;
  *(double *)((longlong)(&param_1->field_0x10 + param_2) + 8) = dVar12;
  puVar1 = (undefined4 *)(&param_1->field_0x20 + param_2);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  puVar1[2] = SUB84(dVar2,0);
  puVar1[3] = (int)((ulonglong)dVar2 >> 0x20);
  *(double *)(&param_1[1].field_0x8 + param_2) = dVar3;
  *(double *)((longlong)(&param_1[1].field_0x8 + param_2) + 8) = 0.0;
  puVar1 = (undefined4 *)(&param_1[1].field_0x18 + param_2);
  *puVar1 = uVar8;
  puVar1[1] = uVar9;
  puVar1[2] = SUB84(dVar4,0);
  puVar1[3] = (int)((ulonglong)dVar4 >> 0x20);
  *(double *)(&param_1[2].field_0x0 + param_2) = dVar5;
  *(double *)((longlong)(&param_1[2].field_0x0 + param_2) + 8) = 0.0;
  return;
}

// SetObjectPropertyValue @ 1466fa440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::MovieScene::
TPropertyTraits<UE::Math::TTransform<double>,UE::MovieScene::FIntermediate3DTransform,1>::
SetObjectPropertyValue
          (UObject *param_1,FTrackInstancePropertyBindings *param_2,
          FIntermediate3DTransform *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  TQuat<double> *pTVar11;
  undefined1 auStack_138 [32];
  TRotator<double> local_118;
  TQuat<double> local_f8;
  TTransform<double> local_d8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_118.Pitch = param_3->R_Y;
  local_118.Yaw = param_3->R_Z;
  dVar1 = param_3->S_Y;
  uVar8 = *(undefined4 *)&param_3->S_X;
  uVar9 = *(undefined4 *)((longlong)&param_3->S_X + 4);
  uVar10 = *(undefined4 *)&param_3->S_Y;
  dVar2 = param_3->S_Z;
  dVar3 = param_3->T_Y;
  uVar5 = *(undefined4 *)&param_3->T_X;
  uVar6 = *(undefined4 *)((longlong)&param_3->T_X + 4);
  uVar7 = *(undefined4 *)&param_3->T_Y;
  dVar4 = param_3->T_Z;
  local_118.Roll = param_3->R_X;
  pTVar11 = UE::Math::TRotator<double>::Quaternion(&local_118,&local_f8);
  local_d8.Rotation.XY.m128d_f64[0] = pTVar11->X;
  local_d8.Rotation.XY.m128d_f64[1] = pTVar11->Y;
  local_d8.Rotation.ZW.m128d_f64[0] = pTVar11->Z;
  local_d8.Rotation.ZW.m128d_f64[1] = pTVar11->W;
  local_d8.Translation.ZW.m128d_f64[1] = 0.0;
  local_d8.Scale3D.ZW.m128d_f64[1] = 0.0;
  local_d8.Translation.XY.m128d_f64[0]._0_4_ = uVar5;
  local_d8.Translation.XY.m128d_f64[0]._4_4_ = uVar6;
  local_d8.Translation.XY.m128d_f64[1]._0_4_ = uVar7;
  local_d8.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar3 >> 0x20);
  local_d8.Translation.ZW.m128d_f64[0] = dVar4;
  local_d8.Scale3D.XY.m128d_f64[0]._0_4_ = uVar8;
  local_d8.Scale3D.XY.m128d_f64[0]._4_4_ = uVar9;
  local_d8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar10;
  local_d8.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar1 >> 0x20);
  local_d8.Scale3D.ZW.m128d_f64[0] = dVar2;
  FTrackInstancePropertyBindings::CallFunction<UE::Math::TTransform<double>_>
            (param_2,param_1,&local_d8);
  return;
}

// SetObjectPropertyValue @ 1466fa580

void __cdecl
UE::MovieScene::
TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>::
SetObjectPropertyValue(UObject *param_1,ushort param_2,FFloatIntermediateVector *param_3)

{
  *(ulonglong *)(&param_1->field_0x0 + param_2) = CONCAT44((float)param_3->Y,(float)param_3->X);
  return;
}

// SetObjectPropertyValue @ 1466fa5c0

void __cdecl
UE::MovieScene::
TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>::
SetObjectPropertyValue
          (UObject *param_1,FTrackInstancePropertyBindings *param_2,
          FFloatIntermediateVector *param_3)

{
  TVector2<float> TVar1;
  
  TVar1.field0_0x0._s_0.Y = (float)param_3->Y;
  TVar1.field0_0x0._s_0.X = (float)param_3->X;
  FTrackInstancePropertyBindings::CallFunction<UE::Math::TVector2<float>_>(param_2,param_1,TVar1);
  return;
}

// SetObjectPropertyValue @ 1466fa600

void __cdecl
UE::MovieScene::
TPropertyTraits<UE::Math::TVector2<double>,UE::MovieScene::FDoubleIntermediateVector,1>::
SetObjectPropertyValue(UObject *param_1,ushort param_2,FDoubleIntermediateVector *param_3)

{
  double dVar1;
  
  dVar1 = param_3->Y;
  *(double *)(&param_1->field_0x0 + param_2) = param_3->X;
  *(double *)(&param_1->field_0x8 + param_2) = dVar1;
  return;
}

// SetObjectPropertyValue @ 1466fa620

void __cdecl
UE::MovieScene::
TPropertyTraits<UE::Math::TVector2<double>,UE::MovieScene::FDoubleIntermediateVector,1>::
SetObjectPropertyValue
          (UObject *param_1,FTrackInstancePropertyBindings *param_2,
          FDoubleIntermediateVector *param_3)

{
  TVector2<double>_u_0 local_18;
  
  local_18._s_0.X = param_3->X;
  local_18._s_0.Y = param_3->Y;
  FTrackInstancePropertyBindings::CallFunction<UE::Math::TVector2<double>_>
            (param_2,param_1,(TVector2<double> *)&local_18._s_0);
  return;
}

// SetObjectPropertyValue @ 1466fa650

void __cdecl
UE::MovieScene::
TPropertyTraits<UE::Math::TVector4<float>,UE::MovieScene::FFloatIntermediateVector,1>::
SetObjectPropertyValue(UObject *param_1,ushort param_2,FFloatIntermediateVector *param_3)

{
  float *pfVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar2 = param_3->Y;
  dVar3 = param_3->Z;
  dVar4 = param_3->W;
  pfVar1 = (float *)(&param_1->field_0x0 + param_2);
  *pfVar1 = (float)param_3->X;
  pfVar1[1] = (float)dVar2;
  pfVar1[2] = (float)dVar3;
  pfVar1[3] = (float)dVar4;
  return;
}

// SetObjectPropertyValue @ 1466fa6b0

void __cdecl
UE::MovieScene::
TPropertyTraits<UE::Math::TVector4<float>,UE::MovieScene::FFloatIntermediateVector,1>::
SetObjectPropertyValue
          (UObject *param_1,FTrackInstancePropertyBindings *param_2,
          FFloatIntermediateVector *param_3)

{
  TVector4<float>_u_0 local_18;
  
  local_18._s_0.X = (float)param_3->X;
  local_18._s_0.Y = (float)param_3->Y;
  local_18._s_0.Z = (float)param_3->Z;
  local_18._s_0.W = (float)param_3->W;
  FTrackInstancePropertyBindings::CallFunction<UE::Math::TVector4<float>_>
            (param_2,param_1,(TVector4<float> *)&local_18._s_0);
  return;
}

// SetObjectPropertyValue @ 1466fa720

void __cdecl
UE::MovieScene::
TPropertyTraits<UE::Math::TVector4<double>,UE::MovieScene::FDoubleIntermediateVector,1>::
SetObjectPropertyValue(UObject *param_1,ushort param_2,FDoubleIntermediateVector *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = param_3->Y;
  dVar3 = param_3->Z;
  dVar1 = param_3->W;
  *(double *)(&param_1->field_0x0 + param_2) = param_3->X;
  *(double *)(&param_1->field_0x8 + param_2) = dVar2;
  *(double *)((longlong)(&param_1->field_0x8 + param_2) + 8) = dVar3;
  *(double *)(&param_1->field_0x18 + param_2) = dVar1;
  return;
}

// SetObjectPropertyValue @ 1466fa750

void __cdecl
UE::MovieScene::
TPropertyTraits<UE::Math::TVector4<double>,UE::MovieScene::FDoubleIntermediateVector,1>::
SetObjectPropertyValue
          (UObject *param_1,FTrackInstancePropertyBindings *param_2,
          FDoubleIntermediateVector *param_3)

{
  TVector4<double>_u_0 local_28;
  
  local_28._s_0.X = param_3->X;
  local_28._s_0.Y = param_3->Y;
  local_28._s_0.Z = param_3->Z;
  local_28._s_0.W = param_3->W;
  FTrackInstancePropertyBindings::CallFunction<UE::Math::TVector4<double>_>
            (param_2,param_1,(TVector4<double> *)&local_28._s_0);
  return;
}

// SetObjectPropertyValue @ 1466fa790

void __cdecl
UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>
::SetObjectPropertyValue(UObject *param_1,ushort param_2,FFloatIntermediateVector *param_3)

{
  double dVar1;
  double dVar2;
  
  dVar1 = param_3->Y;
  dVar2 = param_3->Z;
  *(float *)(&param_1->field_0x0 + param_2) = (float)param_3->X;
  *(float *)(&param_1->field_0x4 + param_2) = (float)dVar1;
  *(float *)(&param_1->field_0x8 + param_2) = (float)dVar2;
  return;
}

// SetObjectPropertyValue @ 1466fa7d0

void __cdecl
UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>
::SetObjectPropertyValue
          (UObject *param_1,FTrackInstancePropertyBindings *param_2,
          FFloatIntermediateVector *param_3)

{
  TVector<float>_u_0 local_18 [2];
  
  local_18[0]._0_4_ = (undefined4)param_3->X;
  local_18[0]._4_4_ = (undefined4)param_3->Y;
  local_18[0]._8_4_ = (undefined4)param_3->Z;
  FTrackInstancePropertyBindings::CallFunction<UE::Math::TVector<float>_>
            (param_2,param_1,(TVector<float> *)&local_18[0]._s_0);
  return;
}

// SetObjectPropertyValue @ 1466fa830

void __cdecl
UE::MovieScene::
TPropertyTraits<UE::Math::TVector<double>,UE::MovieScene::FDoubleIntermediateVector,1>::
SetObjectPropertyValue(UObject *param_1,ushort param_2,FDoubleIntermediateVector *param_3)

{
  double dVar1;
  double dVar2;
  
  dVar1 = param_3->Y;
  dVar2 = param_3->Z;
  *(double *)(&param_1->field_0x0 + param_2) = param_3->X;
  *(double *)(&param_1->field_0x8 + param_2) = dVar1;
  *(double *)((longlong)(&param_1->field_0x8 + param_2) + 8) = dVar2;
  return;
}

// SetObjectPropertyValue @ 1466fa850

void __cdecl
UE::MovieScene::
TPropertyTraits<UE::Math::TVector<double>,UE::MovieScene::FDoubleIntermediateVector,1>::
SetObjectPropertyValue
          (UObject *param_1,FTrackInstancePropertyBindings *param_2,
          FDoubleIntermediateVector *param_3)

{
  TVector<double>_u_0 local_28;
  
  local_28._s_0.X = param_3->X;
  local_28._s_0.Y = param_3->Y;
  local_28._s_0.Z = param_3->Z;
  FTrackInstancePropertyBindings::CallFunction<UE::Math::TVector<double>_>
            (param_2,param_1,(TVector<double> *)&local_28._s_0);
  return;
}

// SetObjectPropertyValue @ 1466fa890

void __cdecl
UE::MovieScene::TPropertyTraits<FColor,UE::MovieScene::FIntermediateColor,1>::SetObjectPropertyValue
          (UObject *param_1,ushort param_2,FIntermediateColor *param_3)

{
  undefined4 local_res10;
  FLinearColor_u_0 local_18;
  
  local_18._s_0.R = (float)param_3->R;
  local_18._s_0.G = (float)param_3->G;
  local_18._s_0.B = (float)param_3->B;
  local_18._s_0.A = (float)param_3->A;
  FLinearColor::ToFColorSRGB((FLinearColor *)&local_18._s_0);
  *(undefined4 *)(&param_1->field_0x0 + param_2) = local_res10;
  return;
}

// SetObjectPropertyValue @ 1466fa910

void __cdecl
UE::MovieScene::TPropertyTraits<FColor,UE::MovieScene::FIntermediateColor,1>::SetObjectPropertyValue
          (UObject *param_1,FTrackInstancePropertyBindings *param_2,FIntermediateColor *param_3)

{
  FColor local_res18;
  FLinearColor_u_0 local_18;
  
  local_18._s_0.R = (float)param_3->R;
  local_18._s_0.G = (float)param_3->G;
  local_18._s_0.B = (float)param_3->B;
  local_18._s_0.A = (float)param_3->A;
  FLinearColor::ToFColorSRGB((FLinearColor *)&local_18._s_0);
  FTrackInstancePropertyBindings::CallFunction<FColor>(param_2,param_1,local_res18);
  return;
}

// SetObjectPropertyValue @ 1466fa990

void __cdecl
UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>::
SetObjectPropertyValue(UObject *param_1,ushort param_2,FIntermediateColor *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = param_3->G;
  dVar2 = param_3->B;
  dVar3 = param_3->A;
  *(float *)(&param_1->field_0x0 + param_2) = (float)param_3->R;
  *(float *)(&param_1->field_0x4 + param_2) = (float)dVar1;
  *(float *)(&param_1->field_0x8 + param_2) = (float)dVar2;
  *(float *)(&param_1->field_0xc + param_2) = (float)dVar3;
  return;
}

// SetObjectPropertyValue @ 1466fa9e0

void __cdecl
UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>::
SetObjectPropertyValue
          (UObject *param_1,FTrackInstancePropertyBindings *param_2,FIntermediateColor *param_3)

{
  FLinearColor_u_0 local_18;
  
  local_18._s_0.R = (float)param_3->R;
  local_18._s_0.G = (float)param_3->G;
  local_18._s_0.B = (float)param_3->B;
  local_18._s_0.A = (float)param_3->A;
  FTrackInstancePropertyBindings::CallFunction<FLinearColor>
            (param_2,param_1,(FLinearColor *)&local_18._s_0);
  return;
}

// SetObjectPropertyValue @ 1466faa50

void __cdecl
UE::MovieScene::TPropertyTraits<FSlateColor,UE::MovieScene::FIntermediateColor,1>::
SetObjectPropertyValue(UObject *param_1,ushort param_2,FIntermediateColor *param_3)

{
  float *pfVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint local_18;
  
  dVar2 = param_3->G;
  dVar3 = param_3->B;
  dVar4 = param_3->A;
  local_18 = local_18 & 0xffffff00;
  pfVar1 = (float *)(&param_1->field_0x0 + param_2);
  *pfVar1 = (float)param_3->R;
  pfVar1[1] = (float)dVar2;
  pfVar1[2] = (float)dVar3;
  pfVar1[3] = (float)dVar4;
  *(uint *)(&param_1->field_0x10 + param_2) = local_18;
  return;
}

// SetObjectPropertyValue @ 1466faac0

void __cdecl
UE::MovieScene::TPropertyTraits<FSlateColor,UE::MovieScene::FIntermediateColor,1>::
SetObjectPropertyValue
          (UObject *param_1,FTrackInstancePropertyBindings *param_2,FIntermediateColor *param_3)

{
  uint local_28;
  FLinearColor_u_0 local_20;
  uint local_10;
  
  local_20._s_0.R = (float)param_3->R;
  local_28 = local_28 & 0xffffff00;
  local_10 = local_28;
  local_20._s_0.G = (float)param_3->G;
  local_20._s_0.B = (float)param_3->B;
  local_20._s_0.A = (float)param_3->A;
  FTrackInstancePropertyBindings::CallFunction<FSlateColor>
            (param_2,param_1,(FSlateColor *)&local_20._s_0);
  return;
}

// SetObjectPropertyValue @ 1466fab40

void __cdecl
UE::MovieScene::TPropertyTraits<__int64,__int64,1>::SetObjectPropertyValue
          (UObject *param_1,ushort param_2,long64 param_3)

{
  *(long64 *)(&param_1->field_0x0 + param_2) = param_3;
  return;
}

// SetObjectPropertyValue @ 1466fab50

void __cdecl
UE::MovieScene::TPropertyTraits<__int64,__int64,1>::SetObjectPropertyValue
          (UObject *param_1,FTrackInstancePropertyBindings *param_2,long64 param_3)

{
  FTrackInstancePropertyBindings::CallFunction<__int64>(param_2,param_1,param_3);
  return;
}

