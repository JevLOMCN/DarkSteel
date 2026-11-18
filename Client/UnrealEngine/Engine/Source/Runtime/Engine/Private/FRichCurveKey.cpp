// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticStruct @ 147a0e990

UScriptStruct * __cdecl FRichCurveKey::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRichCurveKey.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FRichCurveKey.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRichCurveKey,(UObject *)pUVar1,L"RichCurveKey");
  }
  return Z_Registration_Info_UScriptStruct_FRichCurveKey.OuterSingleton;
}

// FRichCurveKey @ 147a264e0

FRichCurveKey * __thiscall
FRichCurveKey::FRichCurveKey(FRichCurveKey *this,FInterpCurvePoint<float> *param_1)

{
  uchar uVar1;
  
  uVar1 = (param_1->InterpMode).Value;
  this->TangentMode = '\0';
  this->TangentWeightMode = '\0';
  if (uVar1 == '\x02') {
    (this->InterpMode).Value = '\x01';
  }
  else if (uVar1 == '\0') {
    (this->InterpMode).Value = '\0';
  }
  else {
    (this->InterpMode).Value = '\x02';
    if ((uVar1 - 1 & 0xfb) != 0) {
      if (uVar1 == '\x04') {
        (this->TangentMode).Value = '\x02';
      }
      else if (uVar1 == '\x03') {
        (this->TangentMode).Value = '\x01';
      }
    }
  }
  this->Time = param_1->InVal;
  this->Value = param_1->OutVal;
  this->ArriveTangent = param_1->ArriveTangent;
  this->ArriveTangentWeight = 0.0;
  this->LeaveTangent = param_1->LeaveTangent;
  this->LeaveTangentWeight = 0.0;
  return this;
}

// FRichCurveKey @ 147a26550

FRichCurveKey * __thiscall
FRichCurveKey::FRichCurveKey
          (FRichCurveKey *this,FInterpCurvePoint<UE::Math::TVector2<double>_> *param_1,int param_2)

{
  uchar uVar1;
  double dVar2;
  
  uVar1 = (param_1->InterpMode).Value;
  this->TangentMode = '\0';
  this->TangentWeightMode = '\0';
  if (uVar1 == '\x02') {
    (this->InterpMode).Value = '\x01';
  }
  else if (uVar1 == '\0') {
    (this->InterpMode).Value = '\0';
  }
  else {
    (this->InterpMode).Value = '\x02';
    if ((uVar1 - 1 & 0xfb) != 0) {
      if (uVar1 == '\x04') {
        (this->TangentMode).Value = '\x02';
      }
      else if (uVar1 == '\x03') {
        (this->TangentMode).Value = '\x01';
      }
    }
  }
  this->Time = param_1->InVal;
  if (param_2 == 0) {
    this->Value = (float)(param_1->OutVal).field0_0x0._s_0.X;
    this->ArriveTangent = (float)(param_1->ArriveTangent).field0_0x0._s_0.X;
    dVar2 = (param_1->LeaveTangent).field0_0x0._s_0.X;
  }
  else {
    this->Value = (float)(param_1->OutVal).field0_0x0._s_0.Y;
    this->ArriveTangent = (float)(param_1->ArriveTangent).field0_0x0._s_0.Y;
    dVar2 = (param_1->LeaveTangent).field0_0x0._s_0.Y;
  }
  this->LeaveTangent = (float)dVar2;
  this->ArriveTangentWeight = 0.0;
  this->LeaveTangentWeight = 0.0;
  return this;
}

// FRichCurveKey @ 147a26600

FRichCurveKey * __thiscall
FRichCurveKey::FRichCurveKey
          (FRichCurveKey *this,FInterpCurvePoint<UE::Math::TVector<double>_> *param_1,int param_2)

{
  uchar uVar1;
  double dVar2;
  
  uVar1 = (param_1->InterpMode).Value;
  this->TangentMode = '\0';
  this->TangentWeightMode = '\0';
  if (uVar1 == '\x02') {
    (this->InterpMode).Value = '\x01';
  }
  else if (uVar1 == '\0') {
    (this->InterpMode).Value = '\0';
  }
  else {
    (this->InterpMode).Value = '\x02';
    if ((uVar1 - 1 & 0xfb) != 0) {
      if (uVar1 == '\x04') {
        (this->TangentMode).Value = '\x02';
      }
      else if (uVar1 == '\x03') {
        (this->TangentMode).Value = '\x01';
      }
    }
  }
  this->Time = param_1->InVal;
  if (param_2 == 0) {
    this->Value = (float)(param_1->OutVal).field0_0x0._s_0.X;
    this->ArriveTangent = (float)(param_1->ArriveTangent).field0_0x0._s_0.X;
    dVar2 = (param_1->LeaveTangent).field0_0x0._s_0.X;
  }
  else if (param_2 == 1) {
    this->Value = (float)(param_1->OutVal).field0_0x0._s_0.Y;
    this->ArriveTangent = (float)(param_1->ArriveTangent).field0_0x0._s_0.Y;
    dVar2 = (param_1->LeaveTangent).field0_0x0._s_0.Y;
  }
  else {
    this->Value = (float)(param_1->OutVal).field0_0x0._s_0.Z;
    this->ArriveTangent = (float)(param_1->ArriveTangent).field0_0x0._s_0.Z;
    dVar2 = (param_1->LeaveTangent).field0_0x0._s_0.Z;
  }
  this->LeaveTangent = (float)dVar2;
  this->ArriveTangentWeight = 0.0;
  this->LeaveTangentWeight = 0.0;
  return this;
}

// FRichCurveKey @ 147a266e0

FRichCurveKey * __thiscall
FRichCurveKey::FRichCurveKey
          (FRichCurveKey *this,FInterpCurvePoint<FTwoVectors> *param_1,int param_2)

{
  uchar uVar1;
  double dVar2;
  
  uVar1 = (param_1->InterpMode).Value;
  this->TangentMode = '\0';
  this->TangentWeightMode = '\0';
  if (uVar1 == '\x02') {
    (this->InterpMode).Value = '\x01';
  }
  else if (uVar1 == '\0') {
    (this->InterpMode).Value = '\0';
  }
  else {
    (this->InterpMode).Value = '\x02';
    if ((uVar1 - 1 & 0xfb) != 0) {
      if (uVar1 == '\x04') {
        (this->TangentMode).Value = '\x02';
      }
      else if (uVar1 == '\x03') {
        (this->TangentMode).Value = '\x01';
      }
    }
  }
  this->Time = param_1->InVal;
  if (param_2 == 0) {
    this->Value = (float)(param_1->OutVal).v1.field0_0x0._s_0.X;
    this->ArriveTangent = (float)(param_1->ArriveTangent).v1.field0_0x0._s_0.X;
    dVar2 = (param_1->LeaveTangent).v1.field0_0x0._s_0.X;
  }
  else if (param_2 == 1) {
    this->Value = (float)(param_1->OutVal).v1.field0_0x0._s_0.Y;
    this->ArriveTangent = (float)(param_1->ArriveTangent).v1.field0_0x0._s_0.Y;
    dVar2 = (param_1->LeaveTangent).v1.field0_0x0._s_0.Y;
  }
  else if (param_2 == 2) {
    this->Value = (float)(param_1->OutVal).v1.field0_0x0._s_0.Z;
    this->ArriveTangent = (float)(param_1->ArriveTangent).v1.field0_0x0._s_0.Z;
    dVar2 = (param_1->LeaveTangent).v1.field0_0x0._s_0.Z;
  }
  else if (param_2 == 3) {
    this->Value = (float)(param_1->OutVal).v2.field0_0x0._s_0.X;
    this->ArriveTangent = (float)(param_1->ArriveTangent).v2.field0_0x0._s_0.X;
    dVar2 = (param_1->LeaveTangent).v2.field0_0x0._s_0.X;
  }
  else if (param_2 == 4) {
    this->Value = (float)(param_1->OutVal).v2.field0_0x0._s_0.Y;
    this->ArriveTangent = (float)(param_1->ArriveTangent).v2.field0_0x0._s_0.Y;
    dVar2 = (param_1->LeaveTangent).v2.field0_0x0._s_0.Y;
  }
  else {
    this->Value = (float)(param_1->OutVal).v2.field0_0x0._s_0.Z;
    this->ArriveTangent = (float)(param_1->ArriveTangent).v2.field0_0x0._s_0.Z;
    dVar2 = (param_1->LeaveTangent).v2.field0_0x0._s_0.Z;
  }
  this->LeaveTangent = (float)dVar2;
  this->ArriveTangentWeight = 0.0;
  this->LeaveTangentWeight = 0.0;
  return this;
}

// operator== @ 147a2c5a0

bool __thiscall FRichCurveKey::operator==(FRichCurveKey *this,FRichCurveKey *param_1)

{
  uchar uVar1;
  
  if (((((param_1->Time == this->Time) && (param_1->Value == this->Value)) &&
       (uVar1 = (this->InterpMode).Value, uVar1 == (param_1->InterpMode).Value)) &&
      (((this->TangentMode).Value == (param_1->TangentMode).Value &&
       ((this->TangentWeightMode).Value == (param_1->TangentWeightMode).Value)))) &&
     ((uVar1 != '\x02' ||
      ((param_1->ArriveTangent == this->ArriveTangent &&
       (param_1->LeaveTangent == this->LeaveTangent)))))) {
    return true;
  }
  return false;
}

// operator!= @ 147a2ca90

bool __thiscall FRichCurveKey::operator!=(FRichCurveKey *this,FRichCurveKey *param_1)

{
  uchar uVar1;
  
  if (((((param_1->Time == this->Time) && (param_1->Value == this->Value)) &&
       (uVar1 = (this->InterpMode).Value, uVar1 == (param_1->InterpMode).Value)) &&
      (((this->TangentMode).Value == (param_1->TangentMode).Value &&
       ((this->TangentWeightMode).Value == (param_1->TangentWeightMode).Value)))) &&
     ((uVar1 != '\x02' ||
      ((param_1->ArriveTangent == this->ArriveTangent &&
       (param_1->LeaveTangent == this->LeaveTangent)))))) {
    return false;
  }
  return true;
}

// Serialize @ 147a881d0

bool __thiscall FRichCurveKey::Serialize(FRichCurveKey *this,FArchive *param_1)

{
  uchar *puVar1;
  float *pfVar2;
  float *pfVar3;
  bool bVar4;
  float fVar5;
  int iVar6;
  uchar uVar7;
  float fVar8;
  FRichCurveKey *local_res10;
  
  if (*(int *)&param_1->field_0x40 < 0x16e) {
    return false;
  }
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  puVar1 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,1);
  }
  else {
    (this->InterpMode).Value = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar1 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->TangentMode,1);
  }
  else {
    (this->TangentMode).Value = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar1 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->TangentWeightMode,1);
  }
  else {
    (this->TangentWeightMode).Value = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  pfVar3 = &this->Time;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar3);
    }
  }
  else {
    *pfVar3 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar3 = &this->Value;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar3);
    }
  }
  else {
    *pfVar3 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar3 = &this->ArriveTangent;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar3);
    }
  }
  else {
    *pfVar3 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->ArriveTangentWeight,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)&this->ArriveTangentWeight);
    }
  }
  else {
    this->ArriveTangentWeight = *pfVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar3 = &this->LeaveTangent;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar3);
    }
  }
  else {
    *pfVar3 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->LeaveTangentWeight,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)&this->LeaveTangentWeight);
    }
  }
  else {
    this->LeaveTangentWeight = *pfVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  if ((((param_1->field_0x28 & 1) != 0) && (uVar7 = (this->TangentWeightMode).Value, uVar7 != '\0'))
     && (2 < (byte)(uVar7 - 1))) {
    iVar6 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID);
    fVar5 = __real_322bcc77;
    if (iVar6 < 0x40) {
      fVar8 = (float)((uint)this->LeaveTangentWeight & __xmm_7fffffff7fffffff7fffffff7fffffff);
      (this->TangentWeightMode).Value = '\0';
      bVar4 = fVar5 < fVar8;
      if ((float)((uint)this->ArriveTangentWeight & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
          __real_322bcc77) {
        if (bVar4) {
          (this->TangentWeightMode).Value = '\x02';
        }
      }
      else {
        uVar7 = '\x01';
        if (bVar4) {
          uVar7 = '\x03';
        }
        (this->TangentWeightMode).Value = uVar7;
      }
    }
    else {
      local_res10 = this;
      `FRichCurveKey::Serialize'::__l27::<lambda_1>::operator()(&local_res10);
    }
  }
  return true;
}

// operator() @ 150516e90

bool __thiscall `FRichCurveKey::Serialize'::__l27::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5161580207571730646>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5161580207571730646>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

