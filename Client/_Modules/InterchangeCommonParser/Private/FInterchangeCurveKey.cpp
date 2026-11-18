// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCommonParser
// Functions: 3

// StaticStruct @ 14e66b4e0

UScriptStruct * __cdecl FInterchangeCurveKey::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInterchangeCurveKey.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_InterchangeCommonParser();
    Z_Registration_Info_UScriptStruct_FInterchangeCurveKey.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInterchangeCurveKey,(UObject *)pUVar1,
                         L"InterchangeCurveKey");
  }
  return Z_Registration_Info_UScriptStruct_FInterchangeCurveKey.OuterSingleton;
}

// Serialize @ 14e670600

void __thiscall FInterchangeCurveKey::Serialize(FInterchangeCurveKey *this,FArchive *param_1)

{
  float *pfVar1;
  undefined1 *puVar2;
  EInterchangeCurveInterpMode *pEVar3;
  EInterchangeCurveTangentMode *pEVar4;
  EInterchangeCurveTangentWeightMode *pEVar5;
  float *pfVar6;
  
  pEVar3 = (EInterchangeCurveInterpMode *)**(undefined8 **)&param_1->field_0x8;
  if ((EInterchangeCurveInterpMode *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar3 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,1);
  }
  else {
    this->InterpMode = *pEVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  pEVar4 = (EInterchangeCurveTangentMode *)**(undefined8 **)&param_1->field_0x8;
  if ((EInterchangeCurveTangentMode *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar4 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->TangentMode,1);
  }
  else {
    this->TangentMode = *pEVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  pEVar5 = (EInterchangeCurveTangentWeightMode *)**(undefined8 **)&param_1->field_0x8;
  if ((EInterchangeCurveTangentWeightMode *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar5 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->TangentWeightMode,1);
  }
  else {
    this->TangentWeightMode = *pEVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  pfVar1 = &this->Time;
  pfVar6 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar6 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &this->Value;
  puVar2 = &param_1->field_0x2a;
  pfVar6 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar6 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &this->ArriveTangent;
  pfVar6 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar6 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &this->ArriveTangentWeight;
  pfVar6 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar6 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &this->LeaveTangent;
  pfVar6 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar6 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &this->LeaveTangentWeight;
  pfVar6 = (float *)**(undefined8 **)&param_1->field_0x8;
  if (pfVar6 + 1 <= (float *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *pfVar1 = *pfVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return;
  }
  if ((*puVar2 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014e67085e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
  return;
}

// ToRichCurveKey @ 14e671530

void __thiscall
FInterchangeCurveKey::ToRichCurveKey(FInterchangeCurveKey *this,FRichCurveKey *param_1)

{
  EInterchangeCurveInterpMode EVar1;
  EInterchangeCurveTangentMode EVar2;
  EInterchangeCurveTangentWeightMode EVar3;
  
  param_1->Time = this->Time;
  param_1->Value = this->Value;
  EVar1 = this->InterpMode;
  if (EVar1 == Linear) {
    (param_1->InterpMode).Value = '\0';
  }
  else if (EVar1 == Constant) {
    (param_1->InterpMode).Value = '\x01';
  }
  else if (EVar1 == Cubic) {
    (param_1->InterpMode).Value = '\x02';
  }
  else {
    (param_1->InterpMode).Value = '\x03';
  }
  EVar2 = this->TangentMode;
  if (EVar2 == Auto) {
    (param_1->TangentMode).Value = '\0';
  }
  else if (EVar2 == User) {
    (param_1->TangentMode).Value = '\x01';
  }
  else if (EVar2 == Break) {
    (param_1->TangentMode).Value = '\x02';
  }
  else {
    (param_1->TangentMode).Value = '\x03';
  }
  EVar3 = this->TangentWeightMode;
  if (EVar3 == WeightedArrive) {
    (param_1->TangentWeightMode).Value = '\x01';
  }
  else if (EVar3 == WeightedLeave) {
    (param_1->TangentWeightMode).Value = '\x02';
  }
  else if (EVar3 == WeightedBoth) {
    (param_1->TangentWeightMode).Value = '\x03';
  }
  else {
    (param_1->TangentWeightMode).Value = '\0';
  }
  param_1->ArriveTangent = this->ArriveTangent;
  param_1->ArriveTangentWeight = this->ArriveTangentWeight;
  param_1->LeaveTangent = this->LeaveTangent;
  param_1->LeaveTangentWeight = this->LeaveTangentWeight;
  return;
}

