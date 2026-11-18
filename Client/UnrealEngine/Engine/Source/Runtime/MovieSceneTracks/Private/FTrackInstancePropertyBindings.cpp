// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 59

// CallFunction<signed_char> @ 1465a3bd0

void __thiscall
FTrackInstancePropertyBindings::CallFunction<signed_char>
          (FTrackInstancePropertyBindings *this,UObject *param_1,schar param_2)

{
  uchar uVar1;
  char cVar2;
  FResolvedPropertyAndFunction *this_00;
  FProperty *pFVar3;
  UFunction *pUVar4;
  schar *psVar5;
  schar local_res18 [16];
  
  local_res18[0] = param_2;
  this_00 = FindOrAdd(this,param_1);
  pFVar3 = FResolvedPropertyAndFunction::GetValidProperty(this_00);
  if ((pFVar3 != (FProperty *)0x0) &&
     (cVar2 = (**(code **)(pFVar3->_padding_ + 0x70))(pFVar3), cVar2 != '\0')) {
    (**(code **)(pFVar3->_padding_ + 0x88))(pFVar3,param_1,local_res18);
    return;
  }
  pUVar4 = (UFunction *)FWeakObjectPtr::Get(&(this_00->SetterFunction).WeakPtr);
  if (pUVar4 != (UFunction *)0x0) {
    InvokeSetterFunction<signed_char_const_&>(param_1,pUVar4,local_res18);
    return;
  }
  uVar1 = (this_00->ResolvedProperty).TypeIndex;
  if (uVar1 == '\0') {
    psVar5 = UE::MovieScene::FCachedProperty::GetPropertyAddress<signed_char>
                       ((FCachedProperty *)this_00);
  }
  else {
    if (uVar1 != '\x01') {
      return;
    }
    psVar5 = UE::MovieScene::FVolatileProperty::ResolvePropertySteps
                       ((FVolatileProperty *)this_00,false);
  }
  if (psVar5 != (schar *)0x0) {
    *psVar5 = local_res18[0];
  }
  return;
}

// CallFunction<unsigned_char> @ 1465a3cb0

void __thiscall
FTrackInstancePropertyBindings::CallFunction<unsigned_char>
          (FTrackInstancePropertyBindings *this,UObject *param_1,uchar param_2)

{
  uchar uVar1;
  char cVar2;
  FResolvedPropertyAndFunction *this_00;
  FProperty *pFVar3;
  UFunction *pUVar4;
  uchar *puVar5;
  uchar local_res18 [16];
  
  local_res18[0] = param_2;
  this_00 = FindOrAdd(this,param_1);
  pFVar3 = FResolvedPropertyAndFunction::GetValidProperty(this_00);
  if ((pFVar3 != (FProperty *)0x0) &&
     (cVar2 = (**(code **)(pFVar3->_padding_ + 0x70))(pFVar3), cVar2 != '\0')) {
    (**(code **)(pFVar3->_padding_ + 0x88))(pFVar3,param_1,local_res18);
    return;
  }
  pUVar4 = (UFunction *)FWeakObjectPtr::Get(&(this_00->SetterFunction).WeakPtr);
  if (pUVar4 != (UFunction *)0x0) {
    InvokeSetterFunction<unsigned_char_const_&>(param_1,pUVar4,local_res18);
    return;
  }
  uVar1 = (this_00->ResolvedProperty).TypeIndex;
  if (uVar1 == '\0') {
    puVar5 = UE::MovieScene::FCachedProperty::GetPropertyAddress<unsigned_char>
                       ((FCachedProperty *)this_00);
  }
  else {
    if (uVar1 != '\x01') {
      return;
    }
    puVar5 = UE::MovieScene::FVolatileProperty::ResolvePropertySteps
                       ((FVolatileProperty *)this_00,false);
  }
  if (puVar5 != (uchar *)0x0) {
    *puVar5 = local_res18[0];
  }
  return;
}

// CallFunction<short> @ 1465a3d90

void __thiscall
FTrackInstancePropertyBindings::CallFunction<short>
          (FTrackInstancePropertyBindings *this,UObject *param_1,short param_2)

{
  uchar uVar1;
  char cVar2;
  FResolvedPropertyAndFunction *this_00;
  FProperty *pFVar3;
  UFunction *pUVar4;
  short *psVar5;
  short local_res18 [8];
  
  local_res18[0] = param_2;
  this_00 = FindOrAdd(this,param_1);
  pFVar3 = FResolvedPropertyAndFunction::GetValidProperty(this_00);
  if ((pFVar3 != (FProperty *)0x0) &&
     (cVar2 = (**(code **)(pFVar3->_padding_ + 0x70))(pFVar3), cVar2 != '\0')) {
    (**(code **)(pFVar3->_padding_ + 0x88))(pFVar3,param_1,local_res18);
    return;
  }
  pUVar4 = (UFunction *)FWeakObjectPtr::Get(&(this_00->SetterFunction).WeakPtr);
  if (pUVar4 != (UFunction *)0x0) {
    InvokeSetterFunction<short_const_&>(param_1,pUVar4,local_res18);
    return;
  }
  uVar1 = (this_00->ResolvedProperty).TypeIndex;
  if (uVar1 == '\0') {
    psVar5 = UE::MovieScene::FCachedProperty::GetPropertyAddress<short>((FCachedProperty *)this_00);
  }
  else {
    if (uVar1 != '\x01') {
      return;
    }
    psVar5 = UE::MovieScene::FVolatileProperty::ResolvePropertySteps
                       ((FVolatileProperty *)this_00,false);
  }
  if (psVar5 != (short *)0x0) {
    *psVar5 = local_res18[0];
  }
  return;
}

// CallFunction<UE::Math::TRotator<double>_> @ 1465a3e70

void __thiscall
FTrackInstancePropertyBindings::CallFunction<UE::Math::TRotator<double>_>
          (FTrackInstancePropertyBindings *this,UObject *param_1,TRotator<double> *param_2)

{
  uchar uVar1;
  double dVar2;
  char cVar3;
  FResolvedPropertyAndFunction *this_00;
  FProperty *pFVar4;
  UFunction *pUVar5;
  TRotator<double> *pTVar6;
  
  this_00 = FindOrAdd(this,param_1);
  pFVar4 = FResolvedPropertyAndFunction::GetValidProperty(this_00);
  if ((pFVar4 != (FProperty *)0x0) &&
     (cVar3 = (**(code **)(pFVar4->_padding_ + 0x70))(pFVar4), cVar3 != '\0')) {
    (**(code **)(pFVar4->_padding_ + 0x88))(pFVar4,param_1,param_2);
    return;
  }
  pUVar5 = (UFunction *)FWeakObjectPtr::Get(&(this_00->SetterFunction).WeakPtr);
  if (pUVar5 == (UFunction *)0x0) {
    uVar1 = (this_00->ResolvedProperty).TypeIndex;
    if (uVar1 == '\0') {
      pTVar6 = UE::MovieScene::FCachedProperty::GetPropertyAddress<UE::Math::TRotator<double>_>
                         ((FCachedProperty *)this_00);
    }
    else {
      if (uVar1 != '\x01') {
        return;
      }
      pTVar6 = UE::MovieScene::FVolatileProperty::ResolvePropertySteps
                         ((FVolatileProperty *)this_00,false);
    }
    if (pTVar6 != (TRotator<double> *)0x0) {
      dVar2 = param_2->Yaw;
      pTVar6->Pitch = param_2->Pitch;
      pTVar6->Yaw = dVar2;
      pTVar6->Roll = param_2->Roll;
    }
  }
  else {
    InvokeSetterFunction<UE::Math::TRotator<double>_const_&>(param_1,pUVar5,param_2);
  }
  return;
}

// CallFunction<UE::Math::TTransform<double>_> @ 1465a3f40

void __thiscall
FTrackInstancePropertyBindings::CallFunction<UE::Math::TTransform<double>_>
          (FTrackInstancePropertyBindings *this,UObject *param_1,TTransform<double> *param_2)

{
  uchar uVar1;
  double dVar2;
  char cVar3;
  FResolvedPropertyAndFunction *this_00;
  FProperty *pFVar4;
  UFunction *pUVar5;
  TTransform<double> *pTVar6;
  
  this_00 = FindOrAdd(this,param_1);
  pFVar4 = FResolvedPropertyAndFunction::GetValidProperty(this_00);
  if ((pFVar4 != (FProperty *)0x0) &&
     (cVar3 = (**(code **)(pFVar4->_padding_ + 0x70))(pFVar4), cVar3 != '\0')) {
    (**(code **)(pFVar4->_padding_ + 0x88))(pFVar4,param_1,param_2);
    return;
  }
  pUVar5 = (UFunction *)FWeakObjectPtr::Get(&(this_00->SetterFunction).WeakPtr);
  if (pUVar5 == (UFunction *)0x0) {
    uVar1 = (this_00->ResolvedProperty).TypeIndex;
    if (uVar1 == '\0') {
      pTVar6 = UE::MovieScene::FCachedProperty::GetPropertyAddress<UE::Math::TTransform<double>_>
                         ((FCachedProperty *)this_00);
    }
    else {
      if (uVar1 != '\x01') {
        return;
      }
      pTVar6 = UE::MovieScene::FVolatileProperty::ResolvePropertySteps
                         ((FVolatileProperty *)this_00,false);
    }
    if (pTVar6 != (TTransform<double> *)0x0) {
      dVar2 = (param_2->Rotation).XY.m128d_f64[1];
      (pTVar6->Rotation).XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
      (pTVar6->Rotation).XY.m128d_f64[1] = dVar2;
      dVar2 = (param_2->Rotation).ZW.m128d_f64[1];
      (pTVar6->Rotation).ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
      (pTVar6->Rotation).ZW.m128d_f64[1] = dVar2;
      dVar2 = (param_2->Translation).XY.m128d_f64[1];
      (pTVar6->Translation).XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
      (pTVar6->Translation).XY.m128d_f64[1] = dVar2;
      dVar2 = (param_2->Translation).ZW.m128d_f64[1];
      (pTVar6->Translation).ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
      (pTVar6->Translation).ZW.m128d_f64[1] = dVar2;
      dVar2 = (param_2->Scale3D).XY.m128d_f64[1];
      (pTVar6->Scale3D).XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
      (pTVar6->Scale3D).XY.m128d_f64[1] = dVar2;
      dVar2 = (param_2->Scale3D).ZW.m128d_f64[1];
      (pTVar6->Scale3D).ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
      (pTVar6->Scale3D).ZW.m128d_f64[1] = dVar2;
    }
  }
  else {
    InvokeSetterFunction<UE::Math::TTransform<double>_const_&>(param_1,pUVar5,param_2);
  }
  return;
}

// CallFunction<UE::Math::TVector2<float>_> @ 1465a4030

void __thiscall
FTrackInstancePropertyBindings::CallFunction<UE::Math::TVector2<float>_>
          (FTrackInstancePropertyBindings *this,UObject *param_1,TVector2<float> param_2)

{
  uchar uVar1;
  char cVar2;
  FResolvedPropertyAndFunction *this_00;
  FProperty *pFVar3;
  UFunction *pUVar4;
  TVector2<float>_u_0 *pTVar5;
  TVector2<float>_u_0 local_res18 [2];
  
  local_res18[0] = param_2.field0_0x0;
  this_00 = FindOrAdd(this,param_1);
  pFVar3 = FResolvedPropertyAndFunction::GetValidProperty(this_00);
  if ((pFVar3 != (FProperty *)0x0) &&
     (cVar2 = (**(code **)(pFVar3->_padding_ + 0x70))(pFVar3), cVar2 != '\0')) {
    (**(code **)(pFVar3->_padding_ + 0x88))(pFVar3,param_1,local_res18);
    return;
  }
  pUVar4 = (UFunction *)FWeakObjectPtr::Get(&(this_00->SetterFunction).WeakPtr);
  if (pUVar4 != (UFunction *)0x0) {
    InvokeSetterFunction<UE::Math::TVector2<float>_const_&>
              (param_1,pUVar4,(TVector2<float> *)&local_res18[0]._s_0);
    return;
  }
  uVar1 = (this_00->ResolvedProperty).TypeIndex;
  if (uVar1 == '\0') {
    pTVar5 = &UE::MovieScene::FCachedProperty::GetPropertyAddress<UE::Math::TVector2<float>_>
                        ((FCachedProperty *)this_00)->field0_0x0;
  }
  else {
    if (uVar1 != '\x01') {
      return;
    }
    pTVar5 = UE::MovieScene::FVolatileProperty::ResolvePropertySteps
                       ((FVolatileProperty *)this_00,false);
  }
  if (pTVar5 != (TVector2<float>_u_0 *)0x0) {
    *pTVar5 = local_res18[0];
  }
  return;
}

// CallFunction<UE::Math::TVector2<double>_> @ 1465a4110

void __thiscall
FTrackInstancePropertyBindings::CallFunction<UE::Math::TVector2<double>_>
          (FTrackInstancePropertyBindings *this,UObject *param_1,TVector2<double> *param_2)

{
  uchar uVar1;
  double dVar2;
  char cVar3;
  FResolvedPropertyAndFunction *this_00;
  FProperty *pFVar4;
  UFunction *pUVar5;
  TVector2<double> *pTVar6;
  
  this_00 = FindOrAdd(this,param_1);
  pFVar4 = FResolvedPropertyAndFunction::GetValidProperty(this_00);
  if ((pFVar4 != (FProperty *)0x0) &&
     (cVar3 = (**(code **)(pFVar4->_padding_ + 0x70))(pFVar4), cVar3 != '\0')) {
    (**(code **)(pFVar4->_padding_ + 0x88))(pFVar4,param_1,param_2);
    return;
  }
  pUVar5 = (UFunction *)FWeakObjectPtr::Get(&(this_00->SetterFunction).WeakPtr);
  if (pUVar5 == (UFunction *)0x0) {
    uVar1 = (this_00->ResolvedProperty).TypeIndex;
    if (uVar1 == '\0') {
      pTVar6 = UE::MovieScene::FCachedProperty::GetPropertyAddress<UE::Math::TVector2<double>_>
                         ((FCachedProperty *)this_00);
    }
    else {
      if (uVar1 != '\x01') {
        return;
      }
      pTVar6 = UE::MovieScene::FVolatileProperty::ResolvePropertySteps
                         ((FVolatileProperty *)this_00,false);
    }
    if (pTVar6 != (TVector2<double> *)0x0) {
      dVar2 = (param_2->field0_0x0)._s_0.Y;
      (pTVar6->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
      (pTVar6->field0_0x0)._s_0.Y = dVar2;
    }
  }
  else {
    InvokeSetterFunction<UE::Math::TVector2<double>_const_&>(param_1,pUVar5,param_2);
  }
  return;
}

// CallFunction<UE::Math::TVector4<float>_> @ 1465a41d0

void __thiscall
FTrackInstancePropertyBindings::CallFunction<UE::Math::TVector4<float>_>
          (FTrackInstancePropertyBindings *this,UObject *param_1,TVector4<float> *param_2)

{
  uchar uVar1;
  undefined8 uVar2;
  char cVar3;
  FResolvedPropertyAndFunction *this_00;
  FProperty *pFVar4;
  UFunction *pUVar5;
  TVector4<float> *pTVar6;
  
  this_00 = FindOrAdd(this,param_1);
  pFVar4 = FResolvedPropertyAndFunction::GetValidProperty(this_00);
  if ((pFVar4 != (FProperty *)0x0) &&
     (cVar3 = (**(code **)(pFVar4->_padding_ + 0x70))(pFVar4), cVar3 != '\0')) {
    (**(code **)(pFVar4->_padding_ + 0x88))(pFVar4,param_1,param_2);
    return;
  }
  pUVar5 = (UFunction *)FWeakObjectPtr::Get(&(this_00->SetterFunction).WeakPtr);
  if (pUVar5 == (UFunction *)0x0) {
    uVar1 = (this_00->ResolvedProperty).TypeIndex;
    if (uVar1 == '\0') {
      pTVar6 = UE::MovieScene::FCachedProperty::GetPropertyAddress<UE::Math::TVector4<float>_>
                         ((FCachedProperty *)this_00);
    }
    else {
      if (uVar1 != '\x01') {
        return;
      }
      pTVar6 = UE::MovieScene::FVolatileProperty::ResolvePropertySteps
                         ((FVolatileProperty *)this_00,false);
    }
    if (pTVar6 != (TVector4<float> *)0x0) {
      uVar2 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
      *(undefined8 *)&pTVar6->field0_0x0 = *(undefined8 *)&param_2->field0_0x0;
      *(undefined8 *)((longlong)&pTVar6->field0_0x0 + 8) = uVar2;
    }
  }
  else {
    InvokeSetterFunction<UE::Math::TVector4<float>_const_&>(param_1,pUVar5,param_2);
  }
  return;
}

// CallFunction<UE::Math::TVector4<double>_> @ 1465a4290

void __thiscall
FTrackInstancePropertyBindings::CallFunction<UE::Math::TVector4<double>_>
          (FTrackInstancePropertyBindings *this,UObject *param_1,TVector4<double> *param_2)

{
  uchar uVar1;
  double dVar2;
  char cVar3;
  FResolvedPropertyAndFunction *this_00;
  FProperty *pFVar4;
  UFunction *pUVar5;
  TVector4<double> *pTVar6;
  
  this_00 = FindOrAdd(this,param_1);
  pFVar4 = FResolvedPropertyAndFunction::GetValidProperty(this_00);
  if ((pFVar4 != (FProperty *)0x0) &&
     (cVar3 = (**(code **)(pFVar4->_padding_ + 0x70))(pFVar4), cVar3 != '\0')) {
    (**(code **)(pFVar4->_padding_ + 0x88))(pFVar4,param_1,param_2);
    return;
  }
  pUVar5 = (UFunction *)FWeakObjectPtr::Get(&(this_00->SetterFunction).WeakPtr);
  if (pUVar5 == (UFunction *)0x0) {
    uVar1 = (this_00->ResolvedProperty).TypeIndex;
    if (uVar1 == '\0') {
      pTVar6 = UE::MovieScene::FCachedProperty::GetPropertyAddress<UE::Math::TVector4<double>_>
                         ((FCachedProperty *)this_00);
    }
    else {
      if (uVar1 != '\x01') {
        return;
      }
      pTVar6 = UE::MovieScene::FVolatileProperty::ResolvePropertySteps
                         ((FVolatileProperty *)this_00,false);
    }
    if (pTVar6 != (TVector4<double> *)0x0) {
      dVar2 = (param_2->field0_0x0)._s_0.Y;
      (pTVar6->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
      (pTVar6->field0_0x0)._s_0.Y = dVar2;
      dVar2 = (param_2->field0_0x0)._s_0.W;
      (pTVar6->field0_0x0)._s_0.Z = (param_2->field0_0x0)._s_0.Z;
      (pTVar6->field0_0x0)._s_0.W = dVar2;
    }
  }
  else {
    InvokeSetterFunction<UE::Math::TVector4<double>_const_&>(param_1,pUVar5,param_2);
  }
  return;
}

// CallFunction<UE::Math::TVector<float>_> @ 1465a4360

void __thiscall
FTrackInstancePropertyBindings::CallFunction<UE::Math::TVector<float>_>
          (FTrackInstancePropertyBindings *this,UObject *param_1,TVector<float> *param_2)

{
  uchar uVar1;
  char cVar2;
  FResolvedPropertyAndFunction *this_00;
  FProperty *pFVar3;
  UFunction *pUVar4;
  TVector<float> *pTVar5;
  
  this_00 = FindOrAdd(this,param_1);
  pFVar3 = FResolvedPropertyAndFunction::GetValidProperty(this_00);
  if ((pFVar3 != (FProperty *)0x0) &&
     (cVar2 = (**(code **)(pFVar3->_padding_ + 0x70))(pFVar3), cVar2 != '\0')) {
    (**(code **)(pFVar3->_padding_ + 0x88))(pFVar3,param_1,param_2);
    return;
  }
  pUVar4 = (UFunction *)FWeakObjectPtr::Get(&(this_00->SetterFunction).WeakPtr);
  if (pUVar4 == (UFunction *)0x0) {
    uVar1 = (this_00->ResolvedProperty).TypeIndex;
    if (uVar1 == '\0') {
      pTVar5 = UE::MovieScene::FCachedProperty::GetPropertyAddress<UE::Math::TVector<float>_>
                         ((FCachedProperty *)this_00);
    }
    else {
      if (uVar1 != '\x01') {
        return;
      }
      pTVar5 = UE::MovieScene::FVolatileProperty::ResolvePropertySteps
                         ((FVolatileProperty *)this_00,false);
    }
    if (pTVar5 != (TVector<float> *)0x0) {
      *(undefined8 *)&pTVar5->field0_0x0 = *(undefined8 *)&param_2->field0_0x0;
      (pTVar5->field0_0x0)._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    }
  }
  else {
    InvokeSetterFunction<UE::Math::TVector<float>_const_&>(param_1,pUVar4,param_2);
  }
  return;
}

// CallFunction<UE::Math::TVector<double>_> @ 1465a4430

void __thiscall
FTrackInstancePropertyBindings::CallFunction<UE::Math::TVector<double>_>
          (FTrackInstancePropertyBindings *this,UObject *param_1,TVector<double> *param_2)

{
  uchar uVar1;
  double dVar2;
  char cVar3;
  FResolvedPropertyAndFunction *this_00;
  FProperty *pFVar4;
  UFunction *pUVar5;
  TVector<double> *pTVar6;
  
  this_00 = FindOrAdd(this,param_1);
  pFVar4 = FResolvedPropertyAndFunction::GetValidProperty(this_00);
  if ((pFVar4 != (FProperty *)0x0) &&
     (cVar3 = (**(code **)(pFVar4->_padding_ + 0x70))(pFVar4), cVar3 != '\0')) {
    (**(code **)(pFVar4->_padding_ + 0x88))(pFVar4,param_1,param_2);
    return;
  }
  pUVar5 = (UFunction *)FWeakObjectPtr::Get(&(this_00->SetterFunction).WeakPtr);
  if (pUVar5 == (UFunction *)0x0) {
    uVar1 = (this_00->ResolvedProperty).TypeIndex;
    if (uVar1 == '\0') {
      pTVar6 = UE::MovieScene::FCachedProperty::GetPropertyAddress<UE::Math::TVector<double>_>
                         ((FCachedProperty *)this_00);
    }
    else {
      if (uVar1 != '\x01') {
        return;
      }
      pTVar6 = UE::MovieScene::FVolatileProperty::ResolvePropertySteps
                         ((FVolatileProperty *)this_00,false);
    }
    if (pTVar6 != (TVector<double> *)0x0) {
      dVar2 = (param_2->field0_0x0)._s_0.Y;
      (pTVar6->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
      (pTVar6->field0_0x0)._s_0.Y = dVar2;
      (pTVar6->field0_0x0)._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    }
  }
  else {
    InvokeSetterFunction<UE::Math::TVector<double>_const_&>(param_1,pUVar5,param_2);
  }
  return;
}

// CallFunction<FColor> @ 1465a4500

void __thiscall
FTrackInstancePropertyBindings::CallFunction<FColor>
          (FTrackInstancePropertyBindings *this,UObject *param_1,FColor param_2)

{
  uchar uVar1;
  char cVar2;
  FResolvedPropertyAndFunction *this_00;
  FProperty *pFVar3;
  UFunction *pUVar4;
  FColor_u_0 *pFVar5;
  FColor_u_0 local_res18 [4];
  
  local_res18[0] = param_2.field0_0x0;
  this_00 = FindOrAdd(this,param_1);
  pFVar3 = FResolvedPropertyAndFunction::GetValidProperty(this_00);
  if ((pFVar3 != (FProperty *)0x0) &&
     (cVar2 = (**(code **)(pFVar3->_padding_ + 0x70))(pFVar3), cVar2 != '\0')) {
    (**(code **)(pFVar3->_padding_ + 0x88))(pFVar3,param_1,local_res18);
    return;
  }
  pUVar4 = (UFunction *)FWeakObjectPtr::Get(&(this_00->SetterFunction).WeakPtr);
  if (pUVar4 != (UFunction *)0x0) {
    InvokeSetterFunction<FColor_const_&>(param_1,pUVar4,(FColor *)&local_res18[0]._s_0);
    return;
  }
  uVar1 = (this_00->ResolvedProperty).TypeIndex;
  if (uVar1 == '\0') {
    pFVar5 = &UE::MovieScene::FCachedProperty::GetPropertyAddress<FColor>
                        ((FCachedProperty *)this_00)->field0_0x0;
  }
  else {
    if (uVar1 != '\x01') {
      return;
    }
    pFVar5 = UE::MovieScene::FVolatileProperty::ResolvePropertySteps
                       ((FVolatileProperty *)this_00,false);
  }
  if (pFVar5 != (FColor_u_0 *)0x0) {
    *pFVar5 = local_res18[0];
  }
  return;
}

// CallFunction<FEulerTransform> @ 1465a45e0

void __thiscall
FTrackInstancePropertyBindings::CallFunction<FEulerTransform>
          (FTrackInstancePropertyBindings *this,UObject *param_1,FEulerTransform *param_2)

{
  uchar uVar1;
  double dVar2;
  char cVar3;
  FResolvedPropertyAndFunction *this_00;
  FProperty *pFVar4;
  UFunction *pUVar5;
  FEulerTransform *pFVar6;
  
  this_00 = FindOrAdd(this,param_1);
  pFVar4 = FResolvedPropertyAndFunction::GetValidProperty(this_00);
  if ((pFVar4 != (FProperty *)0x0) &&
     (cVar3 = (**(code **)(pFVar4->_padding_ + 0x70))(pFVar4), cVar3 != '\0')) {
    (**(code **)(pFVar4->_padding_ + 0x88))(pFVar4,param_1,param_2);
    return;
  }
  pUVar5 = (UFunction *)FWeakObjectPtr::Get(&(this_00->SetterFunction).WeakPtr);
  if (pUVar5 == (UFunction *)0x0) {
    uVar1 = (this_00->ResolvedProperty).TypeIndex;
    if (uVar1 == '\0') {
      pFVar6 = UE::MovieScene::FCachedProperty::GetPropertyAddress<FEulerTransform>
                         ((FCachedProperty *)this_00);
    }
    else {
      if (uVar1 != '\x01') {
        return;
      }
      pFVar6 = UE::MovieScene::FVolatileProperty::ResolvePropertySteps
                         ((FVolatileProperty *)this_00,false);
    }
    if (pFVar6 != (FEulerTransform *)0x0) {
      dVar2 = (param_2->Location).field0_0x0._s_0.Y;
      (pFVar6->Location).field0_0x0._s_0.X = (param_2->Location).field0_0x0._s_0.X;
      (pFVar6->Location).field0_0x0._s_0.Y = dVar2;
      dVar2 = (param_2->Rotation).Pitch;
      (pFVar6->Location).field0_0x0._s_0.Z = (param_2->Location).field0_0x0._s_0.Z;
      (pFVar6->Rotation).Pitch = dVar2;
      dVar2 = (param_2->Rotation).Roll;
      (pFVar6->Rotation).Yaw = (param_2->Rotation).Yaw;
      (pFVar6->Rotation).Roll = dVar2;
      dVar2 = (param_2->Scale).field0_0x0._s_0.Y;
      (pFVar6->Scale).field0_0x0._s_0.X = (param_2->Scale).field0_0x0._s_0.X;
      (pFVar6->Scale).field0_0x0._s_0.Y = dVar2;
      (pFVar6->Scale).field0_0x0._s_0.Z = (param_2->Scale).field0_0x0._s_0.Z;
    }
  }
  else {
    InvokeSetterFunction<FEulerTransform_const_&>(param_1,pUVar5,param_2);
  }
  return;
}

// CallFunction<UE::MovieScene::FIntermediate3DTransform> @ 1465a46d0

void __thiscall
FTrackInstancePropertyBindings::CallFunction<UE::MovieScene::FIntermediate3DTransform>
          (FTrackInstancePropertyBindings *this,UObject *param_1,FIntermediate3DTransform *param_2)

{
  uchar uVar1;
  double dVar2;
  char cVar3;
  FResolvedPropertyAndFunction *this_00;
  FProperty *pFVar4;
  UFunction *pUVar5;
  FIntermediate3DTransform *pFVar6;
  
  this_00 = FindOrAdd(this,param_1);
  pFVar4 = FResolvedPropertyAndFunction::GetValidProperty(this_00);
  if ((pFVar4 != (FProperty *)0x0) &&
     (cVar3 = (**(code **)(pFVar4->_padding_ + 0x70))(pFVar4), cVar3 != '\0')) {
    (**(code **)(pFVar4->_padding_ + 0x88))(pFVar4,param_1,param_2);
    return;
  }
  pUVar5 = (UFunction *)FWeakObjectPtr::Get(&(this_00->SetterFunction).WeakPtr);
  if (pUVar5 == (UFunction *)0x0) {
    uVar1 = (this_00->ResolvedProperty).TypeIndex;
    if (uVar1 == '\0') {
      pFVar6 = UE::MovieScene::FCachedProperty::
               GetPropertyAddress<UE::MovieScene::FIntermediate3DTransform>
                         ((FCachedProperty *)this_00);
    }
    else {
      if (uVar1 != '\x01') {
        return;
      }
      pFVar6 = UE::MovieScene::FVolatileProperty::ResolvePropertySteps
                         ((FVolatileProperty *)this_00,false);
    }
    if (pFVar6 != (FIntermediate3DTransform *)0x0) {
      dVar2 = param_2->T_Y;
      pFVar6->T_X = param_2->T_X;
      pFVar6->T_Y = dVar2;
      dVar2 = param_2->R_X;
      pFVar6->T_Z = param_2->T_Z;
      pFVar6->R_X = dVar2;
      dVar2 = param_2->R_Z;
      pFVar6->R_Y = param_2->R_Y;
      pFVar6->R_Z = dVar2;
      dVar2 = param_2->S_Y;
      pFVar6->S_X = param_2->S_X;
      pFVar6->S_Y = dVar2;
      pFVar6->S_Z = param_2->S_Z;
    }
  }
  else {
    InvokeSetterFunction<UE::MovieScene::FIntermediate3DTransform_const_&>(param_1,pUVar5,param_2);
  }
  return;
}

// CallFunction<FLinearColor> @ 1465a47c0

void __thiscall
FTrackInstancePropertyBindings::CallFunction<FLinearColor>
          (FTrackInstancePropertyBindings *this,UObject *param_1,FLinearColor *param_2)

{
  uchar uVar1;
  undefined8 uVar2;
  char cVar3;
  FResolvedPropertyAndFunction *this_00;
  FProperty *pFVar4;
  UFunction *pUVar5;
  FLinearColor *pFVar6;
  
  this_00 = FindOrAdd(this,param_1);
  pFVar4 = FResolvedPropertyAndFunction::GetValidProperty(this_00);
  if ((pFVar4 != (FProperty *)0x0) &&
     (cVar3 = (**(code **)(pFVar4->_padding_ + 0x70))(pFVar4), cVar3 != '\0')) {
    (**(code **)(pFVar4->_padding_ + 0x88))(pFVar4,param_1,param_2);
    return;
  }
  pUVar5 = (UFunction *)FWeakObjectPtr::Get(&(this_00->SetterFunction).WeakPtr);
  if (pUVar5 == (UFunction *)0x0) {
    uVar1 = (this_00->ResolvedProperty).TypeIndex;
    if (uVar1 == '\0') {
      pFVar6 = UE::MovieScene::FCachedProperty::GetPropertyAddress<FLinearColor>
                         ((FCachedProperty *)this_00);
    }
    else {
      if (uVar1 != '\x01') {
        return;
      }
      pFVar6 = UE::MovieScene::FVolatileProperty::ResolvePropertySteps
                         ((FVolatileProperty *)this_00,false);
    }
    if (pFVar6 != (FLinearColor *)0x0) {
      uVar2 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
      *(undefined8 *)&pFVar6->field0_0x0 = *(undefined8 *)&param_2->field0_0x0;
      *(undefined8 *)((longlong)&pFVar6->field0_0x0 + 8) = uVar2;
    }
  }
  else {
    InvokeSetterFunction<FLinearColor_const_&>(param_1,pUVar5,param_2);
  }
  return;
}

// CallFunction<FSlateColor> @ 1465a4880

void __thiscall
FTrackInstancePropertyBindings::CallFunction<FSlateColor>
          (FTrackInstancePropertyBindings *this,UObject *param_1,FSlateColor *param_2)

{
  uchar uVar1;
  undefined8 uVar2;
  EStyleColor EVar3;
  undefined2 uVar4;
  char cVar5;
  FResolvedPropertyAndFunction *this_00;
  FProperty *pFVar6;
  UFunction *pUVar7;
  FSlateColor *pFVar8;
  
  this_00 = FindOrAdd(this,param_1);
  pFVar6 = FResolvedPropertyAndFunction::GetValidProperty(this_00);
  if ((pFVar6 != (FProperty *)0x0) &&
     (cVar5 = (**(code **)(pFVar6->_padding_ + 0x70))(pFVar6), cVar5 != '\0')) {
    (**(code **)(pFVar6->_padding_ + 0x88))(pFVar6,param_1,param_2);
    return;
  }
  pUVar7 = (UFunction *)FWeakObjectPtr::Get(&(this_00->SetterFunction).WeakPtr);
  if (pUVar7 == (UFunction *)0x0) {
    uVar1 = (this_00->ResolvedProperty).TypeIndex;
    if (uVar1 == '\0') {
      pFVar8 = UE::MovieScene::FCachedProperty::GetPropertyAddress<FSlateColor>
                         ((FCachedProperty *)this_00);
    }
    else {
      if (uVar1 != '\x01') {
        return;
      }
      pFVar8 = UE::MovieScene::FVolatileProperty::ResolvePropertySteps
                         ((FVolatileProperty *)this_00,false);
    }
    if (pFVar8 != (FSlateColor *)0x0) {
      uVar2 = *(undefined8 *)((longlong)&(param_2->SpecifiedColor).field0_0x0 + 8);
      *(undefined8 *)&(pFVar8->SpecifiedColor).field0_0x0 =
           *(undefined8 *)&(param_2->SpecifiedColor).field0_0x0;
      *(undefined8 *)((longlong)&(pFVar8->SpecifiedColor).field0_0x0 + 8) = uVar2;
      EVar3 = param_2->ColorTableId;
      uVar4 = *(undefined2 *)&param_2->field_0x12;
      pFVar8->ColorUseRule = param_2->ColorUseRule;
      pFVar8->ColorTableId = EVar3;
      *(undefined2 *)&pFVar8->field_0x12 = uVar4;
    }
  }
  else {
    InvokeSetterFunction<FSlateColor_const_&>(param_1,pUVar7,param_2);
  }
  return;
}

// CallFunction<FString> @ 1465a4950

void __thiscall
FTrackInstancePropertyBindings::CallFunction<FString>
          (FTrackInstancePropertyBindings *this,UObject *param_1,FString *param_2)

{
  uchar uVar1;
  int iVar2;
  char cVar3;
  FResolvedPropertyAndFunction *this_00;
  FProperty *pFVar4;
  UFunction *pUVar5;
  FString *this_01;
  int iVar6;
  
  this_00 = FindOrAdd(this,param_1);
  pFVar4 = FResolvedPropertyAndFunction::GetValidProperty(this_00);
  if ((pFVar4 != (FProperty *)0x0) &&
     (cVar3 = (**(code **)(pFVar4->_padding_ + 0x70))(pFVar4), cVar3 != '\0')) {
    (**(code **)(pFVar4->_padding_ + 0x88))(pFVar4,param_1,param_2);
    return;
  }
  pUVar5 = (UFunction *)FWeakObjectPtr::Get(&(this_00->SetterFunction).WeakPtr);
  if (pUVar5 == (UFunction *)0x0) {
    uVar1 = (this_00->ResolvedProperty).TypeIndex;
    if (uVar1 == '\0') {
      this_01 = UE::MovieScene::FCachedProperty::GetPropertyAddress<FString>
                          ((FCachedProperty *)this_00);
    }
    else {
      if (uVar1 != '\x01') {
        return;
      }
      this_01 = UE::MovieScene::FVolatileProperty::ResolvePropertySteps
                          ((FVolatileProperty *)this_00,false);
    }
    if (this_01 != (FString *)0x0) {
      iVar2 = (param_2->Data).ArrayNum;
      iVar6 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar6 = 0;
      }
      ::FString::AssignRange(this_01,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar6);
    }
  }
  else {
    InvokeSetterFunction<FString_const_&>(param_1,pUVar5,param_2);
  }
  return;
}

// CallFunction<FText> @ 1465a4a30

void __thiscall
FTrackInstancePropertyBindings::CallFunction<FText>
          (FTrackInstancePropertyBindings *this,UObject *param_1,FText *param_2)

{
  uchar uVar1;
  char cVar2;
  FResolvedPropertyAndFunction *this_00;
  FProperty *pFVar3;
  UFunction *pUVar4;
  FText *this_01;
  
  this_00 = FindOrAdd(this,param_1);
  pFVar3 = FResolvedPropertyAndFunction::GetValidProperty(this_00);
  if ((pFVar3 != (FProperty *)0x0) &&
     (cVar2 = (**(code **)(pFVar3->_padding_ + 0x70))(pFVar3), cVar2 != '\0')) {
    (**(code **)(pFVar3->_padding_ + 0x88))(pFVar3,param_1,param_2);
    return;
  }
  pUVar4 = (UFunction *)FWeakObjectPtr::Get(&(this_00->SetterFunction).WeakPtr);
  if (pUVar4 == (UFunction *)0x0) {
    uVar1 = (this_00->ResolvedProperty).TypeIndex;
    if (uVar1 == '\0') {
      this_01 = UE::MovieScene::FCachedProperty::GetPropertyAddress<FText>
                          ((FCachedProperty *)this_00);
    }
    else {
      if (uVar1 != '\x01') {
        return;
      }
      this_01 = UE::MovieScene::FVolatileProperty::ResolvePropertySteps
                          ((FVolatileProperty *)this_00,false);
    }
    if (this_01 != (FText *)0x0) {
      FText::operator=(this_01,param_2);
    }
  }
  else {
    InvokeSetterFunction<FText_const_&>(param_1,pUVar4,param_2);
  }
  return;
}

// CallFunction<__int64> @ 1465a4b00

void __thiscall
FTrackInstancePropertyBindings::CallFunction<__int64>
          (FTrackInstancePropertyBindings *this,UObject *param_1,long64 param_2)

{
  uchar uVar1;
  char cVar2;
  FResolvedPropertyAndFunction *this_00;
  FProperty *pFVar3;
  UFunction *pUVar4;
  long64 *plVar5;
  long64 local_res18 [2];
  
  local_res18[0] = param_2;
  this_00 = FindOrAdd(this,param_1);
  pFVar3 = FResolvedPropertyAndFunction::GetValidProperty(this_00);
  if ((pFVar3 != (FProperty *)0x0) &&
     (cVar2 = (**(code **)(pFVar3->_padding_ + 0x70))(pFVar3), cVar2 != '\0')) {
    (**(code **)(pFVar3->_padding_ + 0x88))(pFVar3,param_1,local_res18);
    return;
  }
  pUVar4 = (UFunction *)FWeakObjectPtr::Get(&(this_00->SetterFunction).WeakPtr);
  if (pUVar4 != (UFunction *)0x0) {
    InvokeSetterFunction<__int64_const_&>(param_1,pUVar4,local_res18);
    return;
  }
  uVar1 = (this_00->ResolvedProperty).TypeIndex;
  if (uVar1 == '\0') {
    plVar5 = UE::MovieScene::FCachedProperty::GetPropertyAddress<__int64>
                       ((FCachedProperty *)this_00);
  }
  else {
    if (uVar1 != '\x01') {
      return;
    }
    plVar5 = UE::MovieScene::FVolatileProperty::ResolvePropertySteps
                       ((FVolatileProperty *)this_00,false);
  }
  if (plVar5 != (long64 *)0x0) {
    *plVar5 = local_res18[0];
  }
  return;
}

// GetCurrentValue<UE::Math::TTransform<double>_> @ 1465d3290

TTransform<double> * __thiscall
FTrackInstancePropertyBindings::GetCurrentValue<UE::Math::TTransform<double>_>
          (FTrackInstancePropertyBindings *this,TTransform<double> *__return_storage_ptr__,
          UObject *param_1)

{
  uchar uVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  FResolvedPropertyAndFunction *this_00;
  TTransform<double> *pTVar11;
  
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar4;
  auVar5._8_4_ = SUB84((double)fVar3,0);
  auVar5._0_8_ = (double)fVar2;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar5;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar3,0);
  auVar7._0_8_ = (double)fVar2;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar7;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar3,0);
  auVar9._0_8_ = (double)fVar2;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar9;
  this_00 = FindOrAdd(this,param_1);
  uVar1 = (this_00->ResolvedProperty).TypeIndex;
  if (uVar1 == '\0') {
    pTVar11 = UE::MovieScene::FCachedProperty::GetPropertyAddress<UE::Math::TTransform<double>_>
                        ((FCachedProperty *)this_00);
  }
  else {
    if (uVar1 != '\x01') {
      return __return_storage_ptr__;
    }
    pTVar11 = UE::MovieScene::FVolatileProperty::ResolvePropertySteps
                        ((FVolatileProperty *)this_00,false);
  }
  if (pTVar11 != (TTransform<double> *)0x0) {
    dVar10 = (pTVar11->Rotation).XY.m128d_f64[1];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (pTVar11->Rotation).XY.m128d_f64[0];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar10;
    dVar10 = (pTVar11->Rotation).ZW.m128d_f64[1];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (pTVar11->Rotation).ZW.m128d_f64[0];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar10;
    dVar10 = (pTVar11->Translation).XY.m128d_f64[1];
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (pTVar11->Translation).XY.m128d_f64[0];
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar10;
    dVar10 = (pTVar11->Translation).ZW.m128d_f64[1];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (pTVar11->Translation).ZW.m128d_f64[0];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar10;
    dVar10 = (pTVar11->Scale3D).XY.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (pTVar11->Scale3D).XY.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar10;
    dVar10 = (pTVar11->Scale3D).ZW.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (pTVar11->Scale3D).ZW.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar10;
  }
  return __return_storage_ptr__;
}

// InvokeSetterFunction<signed_char_const_&> @ 1465de7e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
FTrackInstancePropertyBindings::InvokeSetterFunction<signed_char_const_&>
          (UObject *param_1,UFunction *param_2,schar *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  bool bVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  schar *psVar13;
  schar *_Dst;
  UObject *local_res8;
  UFunction *local_res10;
  undefined1 auStack_98 [48];
  longlong *local_68;
  UObject **local_60;
  UFunction **local_58;
  longlong **local_50;
  ulonglong local_48;
  
  puVar12 = auStack_98;
  local_48 = __security_cookie.value ^ (ulonglong)&local_68;
  uVar1 = param_2->ParmsSize;
  local_res8 = param_1;
  local_res10 = param_2;
  if ((param_1 == (UObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InRuntimeObject && Setter",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\TrackInstancePropertyBindings.h"
                         ,0x1a9,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((local_res10->ReturnValueOffset != 0xffff) ||
     (psVar13 = param_3, local_res10->NumParms != '\0')) {
    psVar13 = (schar *)0x0;
    puVar12 = auStack_98;
    if (uVar1 != 0) {
      uVar10 = (ulonglong)(uVar1 + 0xf) + 0xf;
      if (uVar10 <= uVar1 + 0xf) {
        uVar10 = 0xffffffffffffff0;
      }
      psVar13 = (schar *)((longlong)&local_60 + -(uVar10 & 0xfffffffffffffff0));
      puVar12 = auStack_98 + -(uVar10 & 0xfffffffffffffff0);
    }
    plVar11 = (longlong *)local_res10->_padding_;
    bVar8 = true;
    local_68 = plVar11;
    if (plVar11 != (longlong *)0x0) {
      do {
        local_68 = plVar11;
        if (*(int *)((longlong)plVar11 + 0x34) * (int)plVar11[6] +
            *(int *)((longlong)plVar11 + 0x44) <= (int)(uint)uVar1) {
          if ((*(uint *)(plVar11 + 7) >> 9 & 1) == 0) {
            pcVar5 = *(code **)(*plVar11 + 0x150);
            if ((int)plVar11[6] < 1) {
              *(int *)(puVar12 + 0x28) = (int)plVar11[6];
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465de9a5;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (psVar13 == (schar *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465de9d0;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            iVar4 = *(int *)((longlong)plVar11 + 0x44);
            *(undefined8 *)(puVar12 + -8) = 0x1465de9e2;
            (*pcVar5)(plVar11,psVar13 + iVar4);
          }
          else {
            iVar4 = (int)plVar11[6];
            iVar2 = *(int *)((longlong)plVar11 + 0x34);
            if (iVar4 < 1) {
              *(int *)(puVar12 + 0x28) = iVar4;
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465de927;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (psVar13 == (schar *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465de952;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            iVar3 = *(int *)((longlong)plVar11 + 0x44);
            *(undefined8 *)(puVar12 + -8) = 0x1465de969;
            memset(psVar13 + iVar3,0,(longlong)iVar2 * (longlong)iVar4);
          }
          if ((((char)local_68[7] < '\0') && (((ulonglong)local_68[7] >> 10 & 1) == 0)) && (bVar8))
          {
            if (*(int *)((longlong)local_68 + 0x34) != 1) {
              local_60 = &local_res8;
              local_58 = &local_res10;
              local_50 = &local_68;
              *(undefined8 *)(puVar12 + -8) = 0x1465dea2d;
              bVar8 = `FTrackInstancePropertyBindings::InvokeSetterFunction<signed_char_const_&>'::
                      __l20::<lambda_1>::operator()(&local_60);
              if (!bVar8) goto LAB_1465deb1c;
            }
            plVar11 = local_68;
            if ((int)local_68[6] < 1) {
              *(int *)(puVar12 + 0x28) = (int)local_68[6];
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465dea6c;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (psVar13 == (schar *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465dea9b;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            plVar7 = local_68;
            _Dst = psVar13 + *(int *)((longlong)plVar11 + 0x44);
            if (_Dst != param_3) {
              if ((*(uint *)(local_68 + 7) >> 0x1e & 1) == 0) {
                lVar6 = local_68[6];
                pcVar5 = *(code **)(*local_68 + 0xf0);
                *(undefined8 *)(puVar12 + -8) = 0x1465deae7;
                (*pcVar5)(plVar7,_Dst,param_3,(int)lVar6);
              }
              else {
                iVar4 = *(int *)((longlong)local_68 + 0x34);
                lVar6 = local_68[6];
                *(undefined8 *)(puVar12 + -8) = 0x1465dead2;
                memcpy(_Dst,param_3,(longlong)iVar4 * (longlong)(int)lVar6);
              }
            }
          }
          bVar8 = false;
        }
        plVar11 = (longlong *)local_68[9];
      } while (plVar11 != (longlong *)0x0);
      local_68 = (longlong *)0x0;
    }
  }
  pcVar5 = *(code **)(*(longlong *)local_res8 + 0x260);
  *(undefined8 *)(puVar12 + -8) = 0x1465deb1c;
  (*pcVar5)(local_res8,local_res10,psVar13);
LAB_1465deb1c:
  *(undefined8 *)(puVar12 + -8) = 0x1465deb28;
  return;
}

// InvokeSetterFunction<unsigned_char_const_&> @ 1465deb50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
FTrackInstancePropertyBindings::InvokeSetterFunction<unsigned_char_const_&>
          (UObject *param_1,UFunction *param_2,uchar *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  bool bVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  uchar *puVar13;
  uchar *_Dst;
  UObject *local_res8;
  UFunction *local_res10;
  undefined1 auStack_98 [48];
  longlong *local_68;
  UObject **local_60;
  UFunction **local_58;
  longlong **local_50;
  ulonglong local_48;
  
  puVar12 = auStack_98;
  local_48 = __security_cookie.value ^ (ulonglong)&local_68;
  uVar1 = param_2->ParmsSize;
  local_res8 = param_1;
  local_res10 = param_2;
  if ((param_1 == (UObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InRuntimeObject && Setter",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\TrackInstancePropertyBindings.h"
                         ,0x1a9,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((local_res10->ReturnValueOffset != 0xffff) ||
     (puVar13 = param_3, local_res10->NumParms != '\0')) {
    puVar13 = (uchar *)0x0;
    puVar12 = auStack_98;
    if (uVar1 != 0) {
      uVar10 = (ulonglong)(uVar1 + 0xf) + 0xf;
      if (uVar10 <= uVar1 + 0xf) {
        uVar10 = 0xffffffffffffff0;
      }
      puVar13 = (uchar *)((longlong)&local_60 + -(uVar10 & 0xfffffffffffffff0));
      puVar12 = auStack_98 + -(uVar10 & 0xfffffffffffffff0);
    }
    plVar11 = (longlong *)local_res10->_padding_;
    bVar8 = true;
    local_68 = plVar11;
    if (plVar11 != (longlong *)0x0) {
      do {
        local_68 = plVar11;
        if (*(int *)((longlong)plVar11 + 0x34) * (int)plVar11[6] +
            *(int *)((longlong)plVar11 + 0x44) <= (int)(uint)uVar1) {
          if ((*(uint *)(plVar11 + 7) >> 9 & 1) == 0) {
            pcVar5 = *(code **)(*plVar11 + 0x150);
            if ((int)plVar11[6] < 1) {
              *(int *)(puVar12 + 0x28) = (int)plVar11[6];
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465ded15;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (puVar13 == (uchar *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465ded40;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            iVar4 = *(int *)((longlong)plVar11 + 0x44);
            *(undefined8 *)(puVar12 + -8) = 0x1465ded52;
            (*pcVar5)(plVar11,puVar13 + iVar4);
          }
          else {
            iVar4 = (int)plVar11[6];
            iVar2 = *(int *)((longlong)plVar11 + 0x34);
            if (iVar4 < 1) {
              *(int *)(puVar12 + 0x28) = iVar4;
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465dec97;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (puVar13 == (uchar *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465decc2;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            iVar3 = *(int *)((longlong)plVar11 + 0x44);
            *(undefined8 *)(puVar12 + -8) = 0x1465decd9;
            memset(puVar13 + iVar3,0,(longlong)iVar2 * (longlong)iVar4);
          }
          if ((((char)local_68[7] < '\0') && (((ulonglong)local_68[7] >> 10 & 1) == 0)) && (bVar8))
          {
            if (*(int *)((longlong)local_68 + 0x34) != 1) {
              local_60 = &local_res8;
              local_58 = &local_res10;
              local_50 = &local_68;
              *(undefined8 *)(puVar12 + -8) = 0x1465ded9d;
              bVar8 = `FTrackInstancePropertyBindings::InvokeSetterFunction<unsigned_char_const_&>'
                      ::__l20::<lambda_1>::operator()(&local_60);
              if (!bVar8) goto LAB_1465dee8c;
            }
            plVar11 = local_68;
            if ((int)local_68[6] < 1) {
              *(int *)(puVar12 + 0x28) = (int)local_68[6];
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465deddc;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (puVar13 == (uchar *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465dee0b;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            plVar7 = local_68;
            _Dst = puVar13 + *(int *)((longlong)plVar11 + 0x44);
            if (_Dst != param_3) {
              if ((*(uint *)(local_68 + 7) >> 0x1e & 1) == 0) {
                lVar6 = local_68[6];
                pcVar5 = *(code **)(*local_68 + 0xf0);
                *(undefined8 *)(puVar12 + -8) = 0x1465dee57;
                (*pcVar5)(plVar7,_Dst,param_3,(int)lVar6);
              }
              else {
                iVar4 = *(int *)((longlong)local_68 + 0x34);
                lVar6 = local_68[6];
                *(undefined8 *)(puVar12 + -8) = 0x1465dee42;
                memcpy(_Dst,param_3,(longlong)iVar4 * (longlong)(int)lVar6);
              }
            }
          }
          bVar8 = false;
        }
        plVar11 = (longlong *)local_68[9];
      } while (plVar11 != (longlong *)0x0);
      local_68 = (longlong *)0x0;
    }
  }
  pcVar5 = *(code **)(*(longlong *)local_res8 + 0x260);
  *(undefined8 *)(puVar12 + -8) = 0x1465dee8c;
  (*pcVar5)(local_res8,local_res10,puVar13);
LAB_1465dee8c:
  *(undefined8 *)(puVar12 + -8) = 0x1465dee98;
  return;
}

// InvokeSetterFunction<short_const_&> @ 1465deec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
FTrackInstancePropertyBindings::InvokeSetterFunction<short_const_&>
          (UObject *param_1,UFunction *param_2,short *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  bool bVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  short *psVar13;
  short *_Dst;
  UObject *local_res8;
  UFunction *local_res10;
  undefined1 auStack_98 [48];
  longlong *local_68;
  UObject **local_60;
  UFunction **local_58;
  longlong **local_50;
  ulonglong local_48;
  
  puVar12 = auStack_98;
  local_48 = __security_cookie.value ^ (ulonglong)&local_68;
  uVar1 = param_2->ParmsSize;
  local_res8 = param_1;
  local_res10 = param_2;
  if ((param_1 == (UObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InRuntimeObject && Setter",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\TrackInstancePropertyBindings.h"
                         ,0x1a9,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((local_res10->ReturnValueOffset != 0xffff) ||
     (psVar13 = param_3, local_res10->NumParms != '\0')) {
    psVar13 = (short *)0x0;
    puVar12 = auStack_98;
    if (uVar1 != 0) {
      uVar10 = (ulonglong)(uVar1 + 0xf) + 0xf;
      if (uVar10 <= uVar1 + 0xf) {
        uVar10 = 0xffffffffffffff0;
      }
      psVar13 = (short *)((longlong)&local_60 + -(uVar10 & 0xfffffffffffffff0));
      puVar12 = auStack_98 + -(uVar10 & 0xfffffffffffffff0);
    }
    plVar11 = (longlong *)local_res10->_padding_;
    bVar8 = true;
    local_68 = plVar11;
    if (plVar11 != (longlong *)0x0) {
      do {
        local_68 = plVar11;
        if (*(int *)((longlong)plVar11 + 0x34) * (int)plVar11[6] +
            *(int *)((longlong)plVar11 + 0x44) <= (int)(uint)uVar1) {
          if ((*(uint *)(plVar11 + 7) >> 9 & 1) == 0) {
            pcVar5 = *(code **)(*plVar11 + 0x150);
            if ((int)plVar11[6] < 1) {
              *(int *)(puVar12 + 0x28) = (int)plVar11[6];
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465df085;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (psVar13 == (short *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465df0b0;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            iVar4 = *(int *)((longlong)plVar11 + 0x44);
            *(undefined8 *)(puVar12 + -8) = 0x1465df0c2;
            (*pcVar5)(plVar11,(longlong)iVar4 + (longlong)psVar13);
          }
          else {
            iVar4 = (int)plVar11[6];
            iVar2 = *(int *)((longlong)plVar11 + 0x34);
            if (iVar4 < 1) {
              *(int *)(puVar12 + 0x28) = iVar4;
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465df007;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (psVar13 == (short *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465df032;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            iVar3 = *(int *)((longlong)plVar11 + 0x44);
            *(undefined8 *)(puVar12 + -8) = 0x1465df049;
            memset((void *)((longlong)iVar3 + (longlong)psVar13),0,(longlong)iVar2 * (longlong)iVar4
                  );
          }
          if ((((char)local_68[7] < '\0') && (((ulonglong)local_68[7] >> 10 & 1) == 0)) && (bVar8))
          {
            if (*(int *)((longlong)local_68 + 0x34) != 2) {
              local_60 = &local_res8;
              local_58 = &local_res10;
              local_50 = &local_68;
              *(undefined8 *)(puVar12 + -8) = 0x1465df10d;
              bVar8 = `FTrackInstancePropertyBindings::InvokeSetterFunction<short_const_&>'::__l20::
                      <lambda_1>::operator()(&local_60);
              if (!bVar8) goto LAB_1465df1fc;
            }
            plVar11 = local_68;
            if ((int)local_68[6] < 1) {
              *(int *)(puVar12 + 0x28) = (int)local_68[6];
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465df14c;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (psVar13 == (short *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465df17b;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            plVar7 = local_68;
            _Dst = (short *)((longlong)*(int *)((longlong)plVar11 + 0x44) + (longlong)psVar13);
            if (_Dst != param_3) {
              if ((*(uint *)(local_68 + 7) >> 0x1e & 1) == 0) {
                lVar6 = local_68[6];
                pcVar5 = *(code **)(*local_68 + 0xf0);
                *(undefined8 *)(puVar12 + -8) = 0x1465df1c7;
                (*pcVar5)(plVar7,_Dst,param_3,(int)lVar6);
              }
              else {
                iVar4 = *(int *)((longlong)local_68 + 0x34);
                lVar6 = local_68[6];
                *(undefined8 *)(puVar12 + -8) = 0x1465df1b2;
                memcpy(_Dst,param_3,(longlong)iVar4 * (longlong)(int)lVar6);
              }
            }
          }
          bVar8 = false;
        }
        plVar11 = (longlong *)local_68[9];
      } while (plVar11 != (longlong *)0x0);
      local_68 = (longlong *)0x0;
    }
  }
  pcVar5 = *(code **)(*(longlong *)local_res8 + 0x260);
  *(undefined8 *)(puVar12 + -8) = 0x1465df1fc;
  (*pcVar5)(local_res8,local_res10,psVar13);
LAB_1465df1fc:
  *(undefined8 *)(puVar12 + -8) = 0x1465df208;
  return;
}

// InvokeSetterFunction<UE::Math::TRotator<double>_const_&> @ 1465df230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
FTrackInstancePropertyBindings::InvokeSetterFunction<UE::Math::TRotator<double>_const_&>
          (UObject *param_1,UFunction *param_2,TRotator<double> *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  bool bVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  TRotator<double> *pTVar13;
  TRotator<double> *_Dst;
  UObject *local_res8;
  UFunction *local_res10;
  undefined1 auStack_98 [48];
  longlong *local_68;
  TRotator<double> local_60;
  ulonglong local_48;
  
  puVar12 = auStack_98;
  local_48 = __security_cookie.value ^ (ulonglong)&local_68;
  uVar1 = param_2->ParmsSize;
  local_res8 = param_1;
  local_res10 = param_2;
  if ((param_1 == (UObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InRuntimeObject && Setter",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\TrackInstancePropertyBindings.h"
                         ,0x1a9,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((local_res10->ReturnValueOffset != 0xffff) ||
     (pTVar13 = param_3, local_res10->NumParms != '\0')) {
    pTVar13 = (TRotator<double> *)0x0;
    puVar12 = auStack_98;
    if (uVar1 != 0) {
      uVar10 = (ulonglong)(uVar1 + 0xf) + 0xf;
      if (uVar10 <= uVar1 + 0xf) {
        uVar10 = 0xffffffffffffff0;
      }
      pTVar13 = (TRotator<double> *)((longlong)&local_60 + -(uVar10 & 0xfffffffffffffff0));
      puVar12 = auStack_98 + -(uVar10 & 0xfffffffffffffff0);
    }
    plVar11 = (longlong *)local_res10->_padding_;
    bVar8 = true;
    local_68 = plVar11;
    if (plVar11 != (longlong *)0x0) {
      do {
        local_68 = plVar11;
        if (*(int *)((longlong)plVar11 + 0x34) * (int)plVar11[6] +
            *(int *)((longlong)plVar11 + 0x44) <= (int)(uint)uVar1) {
          if ((*(uint *)(plVar11 + 7) >> 9 & 1) == 0) {
            pcVar5 = *(code **)(*plVar11 + 0x150);
            if ((int)plVar11[6] < 1) {
              *(int *)(puVar12 + 0x28) = (int)plVar11[6];
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465df3f5;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (pTVar13 == (TRotator<double> *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465df420;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            iVar4 = *(int *)((longlong)plVar11 + 0x44);
            *(undefined8 *)(puVar12 + -8) = 0x1465df432;
            (*pcVar5)(plVar11,(longlong)&pTVar13->Pitch + (longlong)iVar4);
          }
          else {
            iVar4 = (int)plVar11[6];
            iVar2 = *(int *)((longlong)plVar11 + 0x34);
            if (iVar4 < 1) {
              *(int *)(puVar12 + 0x28) = iVar4;
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465df377;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (pTVar13 == (TRotator<double> *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465df3a2;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            iVar3 = *(int *)((longlong)plVar11 + 0x44);
            *(undefined8 *)(puVar12 + -8) = 0x1465df3b9;
            memset((void *)((longlong)&pTVar13->Pitch + (longlong)iVar3),0,
                   (longlong)iVar2 * (longlong)iVar4);
          }
          if ((((char)local_68[7] < '\0') && (((ulonglong)local_68[7] >> 10 & 1) == 0)) && (bVar8))
          {
            if (*(int *)((longlong)local_68 + 0x34) != 0x18) {
              local_60.Pitch = (double)&local_res8;
              local_60.Yaw = (double)&local_res10;
              local_60.Roll = (double)&local_68;
              *(undefined8 *)(puVar12 + -8) = 0x1465df47d;
              bVar8 = `FTrackInstancePropertyBindings::
                      InvokeSetterFunction<UE::Math::TRotator<double>_const_&>'::__l20::<lambda_1>::
                      operator()(&local_60);
              if (!bVar8) goto LAB_1465df56c;
            }
            plVar11 = local_68;
            if ((int)local_68[6] < 1) {
              *(int *)(puVar12 + 0x28) = (int)local_68[6];
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465df4bc;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (pTVar13 == (TRotator<double> *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465df4eb;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            plVar7 = local_68;
            _Dst = (TRotator<double> *)
                   ((longlong)&pTVar13->Pitch + (longlong)*(int *)((longlong)plVar11 + 0x44));
            if (_Dst != param_3) {
              if ((*(uint *)(local_68 + 7) >> 0x1e & 1) == 0) {
                lVar6 = local_68[6];
                pcVar5 = *(code **)(*local_68 + 0xf0);
                *(undefined8 *)(puVar12 + -8) = 0x1465df537;
                (*pcVar5)(plVar7,_Dst,param_3,(int)lVar6);
              }
              else {
                iVar4 = *(int *)((longlong)local_68 + 0x34);
                lVar6 = local_68[6];
                *(undefined8 *)(puVar12 + -8) = 0x1465df522;
                memcpy(_Dst,param_3,(longlong)iVar4 * (longlong)(int)lVar6);
              }
            }
          }
          bVar8 = false;
        }
        plVar11 = (longlong *)local_68[9];
      } while (plVar11 != (longlong *)0x0);
      local_68 = (longlong *)0x0;
    }
  }
  pcVar5 = *(code **)(*(longlong *)local_res8 + 0x260);
  *(undefined8 *)(puVar12 + -8) = 0x1465df56c;
  (*pcVar5)(local_res8,local_res10,pTVar13);
LAB_1465df56c:
  *(undefined8 *)(puVar12 + -8) = 0x1465df578;
  return;
}

// InvokeSetterFunction<UE::Math::TTransform<double>_const_&> @ 1465df5a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
FTrackInstancePropertyBindings::InvokeSetterFunction<UE::Math::TTransform<double>_const_&>
          (UObject *param_1,UFunction *param_2,TTransform<double> *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  bool bVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  TTransform<double> *pTVar13;
  TTransform<double> *_Dst;
  UObject *local_res8;
  UFunction *local_res10;
  undefined1 auStack_98 [48];
  longlong *local_68;
  UObject **local_60;
  UFunction **local_58;
  longlong **local_50;
  ulonglong local_48;
  
  puVar12 = auStack_98;
  local_48 = __security_cookie.value ^ (ulonglong)&local_68;
  uVar1 = param_2->ParmsSize;
  local_res8 = param_1;
  local_res10 = param_2;
  if ((param_1 == (UObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InRuntimeObject && Setter",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\TrackInstancePropertyBindings.h"
                         ,0x1a9,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((local_res10->ReturnValueOffset != 0xffff) ||
     (pTVar13 = param_3, local_res10->NumParms != '\0')) {
    pTVar13 = (TTransform<double> *)0x0;
    puVar12 = auStack_98;
    if (uVar1 != 0) {
      uVar10 = (ulonglong)(uVar1 + 0xf) + 0xf;
      if (uVar10 <= uVar1 + 0xf) {
        uVar10 = 0xffffffffffffff0;
      }
      pTVar13 = (TTransform<double> *)((longlong)&local_60 + -(uVar10 & 0xfffffffffffffff0));
      puVar12 = auStack_98 + -(uVar10 & 0xfffffffffffffff0);
    }
    plVar11 = (longlong *)local_res10->_padding_;
    bVar8 = true;
    local_68 = plVar11;
    if (plVar11 != (longlong *)0x0) {
      do {
        local_68 = plVar11;
        if (*(int *)((longlong)plVar11 + 0x34) * (int)plVar11[6] +
            *(int *)((longlong)plVar11 + 0x44) <= (int)(uint)uVar1) {
          if ((*(uint *)(plVar11 + 7) >> 9 & 1) == 0) {
            pcVar5 = *(code **)(*plVar11 + 0x150);
            if ((int)plVar11[6] < 1) {
              *(int *)(puVar12 + 0x28) = (int)plVar11[6];
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465df765;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (pTVar13 == (TTransform<double> *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465df790;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            iVar4 = *(int *)((longlong)plVar11 + 0x44);
            *(undefined8 *)(puVar12 + -8) = 0x1465df7a2;
            (*pcVar5)(plVar11,(longlong)(pTVar13->Rotation).XY.m128d_f64 + (longlong)iVar4);
          }
          else {
            iVar4 = (int)plVar11[6];
            iVar2 = *(int *)((longlong)plVar11 + 0x34);
            if (iVar4 < 1) {
              *(int *)(puVar12 + 0x28) = iVar4;
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465df6e7;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (pTVar13 == (TTransform<double> *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465df712;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            iVar3 = *(int *)((longlong)plVar11 + 0x44);
            *(undefined8 *)(puVar12 + -8) = 0x1465df729;
            memset((void *)((longlong)(pTVar13->Rotation).XY.m128d_f64 + (longlong)iVar3),0,
                   (longlong)iVar2 * (longlong)iVar4);
          }
          if ((((char)local_68[7] < '\0') && (((ulonglong)local_68[7] >> 10 & 1) == 0)) && (bVar8))
          {
            if (*(int *)((longlong)local_68 + 0x34) != 0x60) {
              local_60 = &local_res8;
              local_58 = &local_res10;
              local_50 = &local_68;
              *(undefined8 *)(puVar12 + -8) = 0x1465df7ed;
              bVar8 = `FTrackInstancePropertyBindings::
                      InvokeSetterFunction<UE::Math::TTransform<double>_const_&>'::__l20::<lambda_1>
                      ::operator()(&local_60);
              if (!bVar8) goto LAB_1465df8dc;
            }
            plVar11 = local_68;
            if ((int)local_68[6] < 1) {
              *(int *)(puVar12 + 0x28) = (int)local_68[6];
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465df82c;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (pTVar13 == (TTransform<double> *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465df85b;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            plVar7 = local_68;
            _Dst = (TTransform<double> *)
                   ((longlong)(pTVar13->Rotation).XY.m128d_f64 +
                   (longlong)*(int *)((longlong)plVar11 + 0x44));
            if (_Dst != param_3) {
              if ((*(uint *)(local_68 + 7) >> 0x1e & 1) == 0) {
                lVar6 = local_68[6];
                pcVar5 = *(code **)(*local_68 + 0xf0);
                *(undefined8 *)(puVar12 + -8) = 0x1465df8a7;
                (*pcVar5)(plVar7,_Dst,param_3,(int)lVar6);
              }
              else {
                iVar4 = *(int *)((longlong)local_68 + 0x34);
                lVar6 = local_68[6];
                *(undefined8 *)(puVar12 + -8) = 0x1465df892;
                memcpy(_Dst,param_3,(longlong)iVar4 * (longlong)(int)lVar6);
              }
            }
          }
          bVar8 = false;
        }
        plVar11 = (longlong *)local_68[9];
      } while (plVar11 != (longlong *)0x0);
      local_68 = (longlong *)0x0;
    }
  }
  pcVar5 = *(code **)(*(longlong *)local_res8 + 0x260);
  *(undefined8 *)(puVar12 + -8) = 0x1465df8dc;
  (*pcVar5)(local_res8,local_res10,pTVar13);
LAB_1465df8dc:
  *(undefined8 *)(puVar12 + -8) = 0x1465df8e8;
  return;
}

// InvokeSetterFunction<UE::Math::TVector2<float>_const_&> @ 1465df910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
FTrackInstancePropertyBindings::InvokeSetterFunction<UE::Math::TVector2<float>_const_&>
          (UObject *param_1,UFunction *param_2,TVector2<float> *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  bool bVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  TVector2<float> *pTVar13;
  TVector2<float> *_Dst;
  UObject *local_res8;
  UFunction *local_res10;
  undefined1 auStack_98 [48];
  longlong *local_68;
  TVector2<float>_u_0 local_60;
  UFunction **local_58;
  longlong **local_50;
  ulonglong local_48;
  
  puVar12 = auStack_98;
  local_48 = __security_cookie.value ^ (ulonglong)&local_68;
  uVar1 = param_2->ParmsSize;
  local_res8 = param_1;
  local_res10 = param_2;
  if ((param_1 == (UObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InRuntimeObject && Setter",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\TrackInstancePropertyBindings.h"
                         ,0x1a9,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((local_res10->ReturnValueOffset != 0xffff) ||
     (pTVar13 = param_3, local_res10->NumParms != '\0')) {
    pTVar13 = (TVector2<float> *)0x0;
    puVar12 = auStack_98;
    if (uVar1 != 0) {
      uVar10 = (ulonglong)(uVar1 + 0xf) + 0xf;
      if (uVar10 <= uVar1 + 0xf) {
        uVar10 = 0xffffffffffffff0;
      }
      pTVar13 = (TVector2<float> *)((longlong)&local_60 + -(uVar10 & 0xfffffffffffffff0));
      puVar12 = auStack_98 + -(uVar10 & 0xfffffffffffffff0);
    }
    plVar11 = (longlong *)local_res10->_padding_;
    bVar8 = true;
    local_68 = plVar11;
    if (plVar11 != (longlong *)0x0) {
      do {
        local_68 = plVar11;
        if (*(int *)((longlong)plVar11 + 0x34) * (int)plVar11[6] +
            *(int *)((longlong)plVar11 + 0x44) <= (int)(uint)uVar1) {
          if ((*(uint *)(plVar11 + 7) >> 9 & 1) == 0) {
            pcVar5 = *(code **)(*plVar11 + 0x150);
            if ((int)plVar11[6] < 1) {
              *(int *)(puVar12 + 0x28) = (int)plVar11[6];
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465dfad5;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (pTVar13 == (TVector2<float> *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465dfb00;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            iVar4 = *(int *)((longlong)plVar11 + 0x44);
            *(undefined8 *)(puVar12 + -8) = 0x1465dfb12;
            (*pcVar5)(plVar11,(longlong)&pTVar13->field0_0x0 + (longlong)iVar4);
          }
          else {
            iVar4 = (int)plVar11[6];
            iVar2 = *(int *)((longlong)plVar11 + 0x34);
            if (iVar4 < 1) {
              *(int *)(puVar12 + 0x28) = iVar4;
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465dfa57;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (pTVar13 == (TVector2<float> *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465dfa82;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            iVar3 = *(int *)((longlong)plVar11 + 0x44);
            *(undefined8 *)(puVar12 + -8) = 0x1465dfa99;
            memset((void *)((longlong)&pTVar13->field0_0x0 + (longlong)iVar3),0,
                   (longlong)iVar2 * (longlong)iVar4);
          }
          if ((((char)local_68[7] < '\0') && (((ulonglong)local_68[7] >> 10 & 1) == 0)) && (bVar8))
          {
            if (*(int *)((longlong)local_68 + 0x34) != 8) {
              local_60 = (TVector2<float>_u_0)&local_res8;
              local_58 = &local_res10;
              local_50 = &local_68;
              *(undefined8 *)(puVar12 + -8) = 0x1465dfb5d;
              bVar8 = `FTrackInstancePropertyBindings::
                      InvokeSetterFunction<UE::Math::TVector2<float>_const_&>'::__l20::<lambda_1>::
                      operator()(&local_60);
              if (!bVar8) goto LAB_1465dfc4c;
            }
            plVar11 = local_68;
            if ((int)local_68[6] < 1) {
              *(int *)(puVar12 + 0x28) = (int)local_68[6];
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465dfb9c;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (pTVar13 == (TVector2<float> *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465dfbcb;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            plVar7 = local_68;
            _Dst = (TVector2<float> *)
                   ((longlong)&pTVar13->field0_0x0 + (longlong)*(int *)((longlong)plVar11 + 0x44));
            if (_Dst != param_3) {
              if ((*(uint *)(local_68 + 7) >> 0x1e & 1) == 0) {
                lVar6 = local_68[6];
                pcVar5 = *(code **)(*local_68 + 0xf0);
                *(undefined8 *)(puVar12 + -8) = 0x1465dfc17;
                (*pcVar5)(plVar7,_Dst,param_3,(int)lVar6);
              }
              else {
                iVar4 = *(int *)((longlong)local_68 + 0x34);
                lVar6 = local_68[6];
                *(undefined8 *)(puVar12 + -8) = 0x1465dfc02;
                memcpy(_Dst,param_3,(longlong)iVar4 * (longlong)(int)lVar6);
              }
            }
          }
          bVar8 = false;
        }
        plVar11 = (longlong *)local_68[9];
      } while (plVar11 != (longlong *)0x0);
      local_68 = (longlong *)0x0;
    }
  }
  pcVar5 = *(code **)(*(longlong *)local_res8 + 0x260);
  *(undefined8 *)(puVar12 + -8) = 0x1465dfc4c;
  (*pcVar5)(local_res8,local_res10,pTVar13);
LAB_1465dfc4c:
  *(undefined8 *)(puVar12 + -8) = 0x1465dfc58;
  return;
}

// InvokeSetterFunction<UE::Math::TVector2<double>_const_&> @ 1465dfc80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
FTrackInstancePropertyBindings::InvokeSetterFunction<UE::Math::TVector2<double>_const_&>
          (UObject *param_1,UFunction *param_2,TVector2<double> *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  bool bVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  TVector2<double> *pTVar13;
  TVector2<double> *_Dst;
  UObject *local_res8;
  UFunction *local_res10;
  undefined1 auStack_98 [48];
  longlong *local_68;
  undefined1 local_60 [16];
  longlong **local_50;
  ulonglong local_48;
  
  puVar12 = auStack_98;
  local_48 = __security_cookie.value ^ (ulonglong)&local_68;
  uVar1 = param_2->ParmsSize;
  local_res8 = param_1;
  local_res10 = param_2;
  if ((param_1 == (UObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InRuntimeObject && Setter",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\TrackInstancePropertyBindings.h"
                         ,0x1a9,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((local_res10->ReturnValueOffset != 0xffff) ||
     (pTVar13 = param_3, local_res10->NumParms != '\0')) {
    pTVar13 = (TVector2<double> *)0x0;
    puVar12 = auStack_98;
    if (uVar1 != 0) {
      uVar10 = (ulonglong)(uVar1 + 0xf) + 0xf;
      if (uVar10 <= uVar1 + 0xf) {
        uVar10 = 0xffffffffffffff0;
      }
      pTVar13 = (TVector2<double> *)(local_60 + -(uVar10 & 0xfffffffffffffff0));
      puVar12 = auStack_98 + -(uVar10 & 0xfffffffffffffff0);
    }
    plVar11 = (longlong *)local_res10->_padding_;
    bVar8 = true;
    local_68 = plVar11;
    if (plVar11 != (longlong *)0x0) {
      do {
        local_68 = plVar11;
        if (*(int *)((longlong)plVar11 + 0x34) * (int)plVar11[6] +
            *(int *)((longlong)plVar11 + 0x44) <= (int)(uint)uVar1) {
          if ((*(uint *)(plVar11 + 7) >> 9 & 1) == 0) {
            pcVar5 = *(code **)(*plVar11 + 0x150);
            if ((int)plVar11[6] < 1) {
              *(int *)(puVar12 + 0x28) = (int)plVar11[6];
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465dfe45;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (pTVar13 == (TVector2<double> *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465dfe70;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            iVar4 = *(int *)((longlong)plVar11 + 0x44);
            *(undefined8 *)(puVar12 + -8) = 0x1465dfe82;
            (*pcVar5)(plVar11,(undefined1 *)((longlong)&pTVar13->field0_0x0 + (longlong)iVar4));
          }
          else {
            iVar4 = (int)plVar11[6];
            iVar2 = *(int *)((longlong)plVar11 + 0x34);
            if (iVar4 < 1) {
              *(int *)(puVar12 + 0x28) = iVar4;
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465dfdc7;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (pTVar13 == (TVector2<double> *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465dfdf2;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            iVar3 = *(int *)((longlong)plVar11 + 0x44);
            *(undefined8 *)(puVar12 + -8) = 0x1465dfe09;
            memset((undefined1 *)((longlong)&pTVar13->field0_0x0 + (longlong)iVar3),0,
                   (longlong)iVar2 * (longlong)iVar4);
          }
          if ((((char)local_68[7] < '\0') && (((ulonglong)local_68[7] >> 10 & 1) == 0)) && (bVar8))
          {
            if (*(int *)((longlong)local_68 + 0x34) != 0x10) {
              local_60._0_8_ = &local_res8;
              local_60._8_8_ = &local_res10;
              local_50 = &local_68;
              *(undefined8 *)(puVar12 + -8) = 0x1465dfecd;
              bVar8 = `FTrackInstancePropertyBindings::
                      InvokeSetterFunction<UE::Math::TVector2<double>_const_&>'::__l20::<lambda_1>::
                      operator()(local_60);
              if (!bVar8) goto LAB_1465dffbc;
            }
            plVar11 = local_68;
            if ((int)local_68[6] < 1) {
              *(int *)(puVar12 + 0x28) = (int)local_68[6];
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465dff0c;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (pTVar13 == (TVector2<double> *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465dff3b;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            plVar7 = local_68;
            _Dst = (TVector2<double> *)
                   ((longlong)&pTVar13->field0_0x0 + (longlong)*(int *)((longlong)plVar11 + 0x44));
            if (_Dst != param_3) {
              if ((*(uint *)(local_68 + 7) >> 0x1e & 1) == 0) {
                lVar6 = local_68[6];
                pcVar5 = *(code **)(*local_68 + 0xf0);
                *(undefined8 *)(puVar12 + -8) = 0x1465dff87;
                (*pcVar5)(plVar7,_Dst,param_3,(int)lVar6);
              }
              else {
                iVar4 = *(int *)((longlong)local_68 + 0x34);
                lVar6 = local_68[6];
                *(undefined8 *)(puVar12 + -8) = 0x1465dff72;
                memcpy(_Dst,param_3,(longlong)iVar4 * (longlong)(int)lVar6);
              }
            }
          }
          bVar8 = false;
        }
        plVar11 = (longlong *)local_68[9];
      } while (plVar11 != (longlong *)0x0);
      local_68 = (longlong *)0x0;
    }
  }
  pcVar5 = *(code **)(*(longlong *)local_res8 + 0x260);
  *(undefined8 *)(puVar12 + -8) = 0x1465dffbc;
  (*pcVar5)(local_res8,local_res10,pTVar13);
LAB_1465dffbc:
  *(undefined8 *)(puVar12 + -8) = 0x1465dffc8;
  return;
}

// InvokeSetterFunction<UE::Math::TVector4<float>_const_&> @ 1465dfff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
FTrackInstancePropertyBindings::InvokeSetterFunction<UE::Math::TVector4<float>_const_&>
          (UObject *param_1,UFunction *param_2,TVector4<float> *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  bool bVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  TVector4<float> *pTVar13;
  TVector4<float> *_Dst;
  UObject *local_res8;
  UFunction *local_res10;
  undefined1 auStack_98 [48];
  longlong *local_68;
  undefined1 local_60 [16];
  longlong **local_50;
  ulonglong local_48;
  
  puVar12 = auStack_98;
  local_48 = __security_cookie.value ^ (ulonglong)&local_68;
  uVar1 = param_2->ParmsSize;
  local_res8 = param_1;
  local_res10 = param_2;
  if ((param_1 == (UObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InRuntimeObject && Setter",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\TrackInstancePropertyBindings.h"
                         ,0x1a9,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((local_res10->ReturnValueOffset != 0xffff) ||
     (pTVar13 = param_3, local_res10->NumParms != '\0')) {
    pTVar13 = (TVector4<float> *)0x0;
    puVar12 = auStack_98;
    if (uVar1 != 0) {
      uVar10 = (ulonglong)(uVar1 + 0xf) + 0xf;
      if (uVar10 <= uVar1 + 0xf) {
        uVar10 = 0xffffffffffffff0;
      }
      pTVar13 = (TVector4<float> *)(local_60 + -(uVar10 & 0xfffffffffffffff0));
      puVar12 = auStack_98 + -(uVar10 & 0xfffffffffffffff0);
    }
    plVar11 = (longlong *)local_res10->_padding_;
    bVar8 = true;
    local_68 = plVar11;
    if (plVar11 != (longlong *)0x0) {
      do {
        local_68 = plVar11;
        if (*(int *)((longlong)plVar11 + 0x34) * (int)plVar11[6] +
            *(int *)((longlong)plVar11 + 0x44) <= (int)(uint)uVar1) {
          if ((*(uint *)(plVar11 + 7) >> 9 & 1) == 0) {
            pcVar5 = *(code **)(*plVar11 + 0x150);
            if ((int)plVar11[6] < 1) {
              *(int *)(puVar12 + 0x28) = (int)plVar11[6];
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465e01b5;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (pTVar13 == (TVector4<float> *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465e01e0;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            iVar4 = *(int *)((longlong)plVar11 + 0x44);
            *(undefined8 *)(puVar12 + -8) = 0x1465e01f2;
            (*pcVar5)(plVar11,(undefined1 *)((longlong)&pTVar13->field0_0x0 + (longlong)iVar4));
          }
          else {
            iVar4 = (int)plVar11[6];
            iVar2 = *(int *)((longlong)plVar11 + 0x34);
            if (iVar4 < 1) {
              *(int *)(puVar12 + 0x28) = iVar4;
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465e0137;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (pTVar13 == (TVector4<float> *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465e0162;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            iVar3 = *(int *)((longlong)plVar11 + 0x44);
            *(undefined8 *)(puVar12 + -8) = 0x1465e0179;
            memset((undefined1 *)((longlong)&pTVar13->field0_0x0 + (longlong)iVar3),0,
                   (longlong)iVar2 * (longlong)iVar4);
          }
          if ((((char)local_68[7] < '\0') && (((ulonglong)local_68[7] >> 10 & 1) == 0)) && (bVar8))
          {
            if (*(int *)((longlong)local_68 + 0x34) != 0x10) {
              local_60._0_8_ = &local_res8;
              local_60._8_8_ = &local_res10;
              local_50 = &local_68;
              *(undefined8 *)(puVar12 + -8) = 0x1465e023d;
              bVar8 = `FTrackInstancePropertyBindings::
                      InvokeSetterFunction<UE::Math::TVector4<float>_const_&>'::__l20::<lambda_1>::
                      operator()(local_60);
              if (!bVar8) goto LAB_1465e032c;
            }
            plVar11 = local_68;
            if ((int)local_68[6] < 1) {
              *(int *)(puVar12 + 0x28) = (int)local_68[6];
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465e027c;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (pTVar13 == (TVector4<float> *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465e02ab;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            plVar7 = local_68;
            _Dst = (TVector4<float> *)
                   ((longlong)&pTVar13->field0_0x0 + (longlong)*(int *)((longlong)plVar11 + 0x44));
            if (_Dst != param_3) {
              if ((*(uint *)(local_68 + 7) >> 0x1e & 1) == 0) {
                lVar6 = local_68[6];
                pcVar5 = *(code **)(*local_68 + 0xf0);
                *(undefined8 *)(puVar12 + -8) = 0x1465e02f7;
                (*pcVar5)(plVar7,_Dst,param_3,(int)lVar6);
              }
              else {
                iVar4 = *(int *)((longlong)local_68 + 0x34);
                lVar6 = local_68[6];
                *(undefined8 *)(puVar12 + -8) = 0x1465e02e2;
                memcpy(_Dst,param_3,(longlong)iVar4 * (longlong)(int)lVar6);
              }
            }
          }
          bVar8 = false;
        }
        plVar11 = (longlong *)local_68[9];
      } while (plVar11 != (longlong *)0x0);
      local_68 = (longlong *)0x0;
    }
  }
  pcVar5 = *(code **)(*(longlong *)local_res8 + 0x260);
  *(undefined8 *)(puVar12 + -8) = 0x1465e032c;
  (*pcVar5)(local_res8,local_res10,pTVar13);
LAB_1465e032c:
  *(undefined8 *)(puVar12 + -8) = 0x1465e0338;
  return;
}

// InvokeSetterFunction<UE::Math::TVector4<double>_const_&> @ 1465e0360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
FTrackInstancePropertyBindings::InvokeSetterFunction<UE::Math::TVector4<double>_const_&>
          (UObject *param_1,UFunction *param_2,TVector4<double> *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  bool bVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  TVector4<double> *pTVar13;
  TVector4<double> *_Dst;
  UObject *local_res8;
  UFunction *local_res10;
  undefined1 auStack_98 [48];
  longlong *local_68;
  undefined1 local_60 [16];
  longlong **local_50;
  ulonglong local_48;
  
  puVar12 = auStack_98;
  local_48 = __security_cookie.value ^ (ulonglong)&local_68;
  uVar1 = param_2->ParmsSize;
  local_res8 = param_1;
  local_res10 = param_2;
  if ((param_1 == (UObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InRuntimeObject && Setter",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\TrackInstancePropertyBindings.h"
                         ,0x1a9,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((local_res10->ReturnValueOffset != 0xffff) ||
     (pTVar13 = param_3, local_res10->NumParms != '\0')) {
    pTVar13 = (TVector4<double> *)0x0;
    puVar12 = auStack_98;
    if (uVar1 != 0) {
      uVar10 = (ulonglong)(uVar1 + 0xf) + 0xf;
      if (uVar10 <= uVar1 + 0xf) {
        uVar10 = 0xffffffffffffff0;
      }
      pTVar13 = (TVector4<double> *)(local_60 + -(uVar10 & 0xfffffffffffffff0));
      puVar12 = auStack_98 + -(uVar10 & 0xfffffffffffffff0);
    }
    plVar11 = (longlong *)local_res10->_padding_;
    bVar8 = true;
    local_68 = plVar11;
    if (plVar11 != (longlong *)0x0) {
      do {
        local_68 = plVar11;
        if (*(int *)((longlong)plVar11 + 0x34) * (int)plVar11[6] +
            *(int *)((longlong)plVar11 + 0x44) <= (int)(uint)uVar1) {
          if ((*(uint *)(plVar11 + 7) >> 9 & 1) == 0) {
            pcVar5 = *(code **)(*plVar11 + 0x150);
            if ((int)plVar11[6] < 1) {
              *(int *)(puVar12 + 0x28) = (int)plVar11[6];
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465e0525;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (pTVar13 == (TVector4<double> *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465e0550;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            iVar4 = *(int *)((longlong)plVar11 + 0x44);
            *(undefined8 *)(puVar12 + -8) = 0x1465e0562;
            (*pcVar5)(plVar11,(undefined1 *)((longlong)&pTVar13->field0_0x0 + (longlong)iVar4));
          }
          else {
            iVar4 = (int)plVar11[6];
            iVar2 = *(int *)((longlong)plVar11 + 0x34);
            if (iVar4 < 1) {
              *(int *)(puVar12 + 0x28) = iVar4;
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465e04a7;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (pTVar13 == (TVector4<double> *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465e04d2;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            iVar3 = *(int *)((longlong)plVar11 + 0x44);
            *(undefined8 *)(puVar12 + -8) = 0x1465e04e9;
            memset((undefined1 *)((longlong)&pTVar13->field0_0x0 + (longlong)iVar3),0,
                   (longlong)iVar2 * (longlong)iVar4);
          }
          if ((((char)local_68[7] < '\0') && (((ulonglong)local_68[7] >> 10 & 1) == 0)) && (bVar8))
          {
            if (*(int *)((longlong)local_68 + 0x34) != 0x20) {
              local_60._0_8_ = &local_res8;
              local_60._8_8_ = &local_res10;
              local_50 = &local_68;
              *(undefined8 *)(puVar12 + -8) = 0x1465e05ad;
              bVar8 = `FTrackInstancePropertyBindings::
                      InvokeSetterFunction<UE::Math::TVector4<double>_const_&>'::__l20::<lambda_1>::
                      operator()(local_60);
              if (!bVar8) goto LAB_1465e069c;
            }
            plVar11 = local_68;
            if ((int)local_68[6] < 1) {
              *(int *)(puVar12 + 0x28) = (int)local_68[6];
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465e05ec;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (pTVar13 == (TVector4<double> *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465e061b;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            plVar7 = local_68;
            _Dst = (TVector4<double> *)
                   ((longlong)&pTVar13->field0_0x0 + (longlong)*(int *)((longlong)plVar11 + 0x44));
            if (_Dst != param_3) {
              if ((*(uint *)(local_68 + 7) >> 0x1e & 1) == 0) {
                lVar6 = local_68[6];
                pcVar5 = *(code **)(*local_68 + 0xf0);
                *(undefined8 *)(puVar12 + -8) = 0x1465e0667;
                (*pcVar5)(plVar7,_Dst,param_3,(int)lVar6);
              }
              else {
                iVar4 = *(int *)((longlong)local_68 + 0x34);
                lVar6 = local_68[6];
                *(undefined8 *)(puVar12 + -8) = 0x1465e0652;
                memcpy(_Dst,param_3,(longlong)iVar4 * (longlong)(int)lVar6);
              }
            }
          }
          bVar8 = false;
        }
        plVar11 = (longlong *)local_68[9];
      } while (plVar11 != (longlong *)0x0);
      local_68 = (longlong *)0x0;
    }
  }
  pcVar5 = *(code **)(*(longlong *)local_res8 + 0x260);
  *(undefined8 *)(puVar12 + -8) = 0x1465e069c;
  (*pcVar5)(local_res8,local_res10,pTVar13);
LAB_1465e069c:
  *(undefined8 *)(puVar12 + -8) = 0x1465e06a8;
  return;
}

// InvokeSetterFunction<UE::Math::TVector<float>_const_&> @ 1465e06d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
FTrackInstancePropertyBindings::InvokeSetterFunction<UE::Math::TVector<float>_const_&>
          (UObject *param_1,UFunction *param_2,TVector<float> *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  bool bVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  TVector<float> *pTVar13;
  TVector<float> *_Dst;
  UObject *local_res8;
  UFunction *local_res10;
  undefined1 auStack_98 [48];
  longlong *local_68;
  undefined1 local_60 [16];
  longlong **local_50;
  ulonglong local_48;
  
  puVar12 = auStack_98;
  local_48 = __security_cookie.value ^ (ulonglong)&local_68;
  uVar1 = param_2->ParmsSize;
  local_res8 = param_1;
  local_res10 = param_2;
  if ((param_1 == (UObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InRuntimeObject && Setter",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\TrackInstancePropertyBindings.h"
                         ,0x1a9,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((local_res10->ReturnValueOffset != 0xffff) ||
     (pTVar13 = param_3, local_res10->NumParms != '\0')) {
    pTVar13 = (TVector<float> *)0x0;
    puVar12 = auStack_98;
    if (uVar1 != 0) {
      uVar10 = (ulonglong)(uVar1 + 0xf) + 0xf;
      if (uVar10 <= uVar1 + 0xf) {
        uVar10 = 0xffffffffffffff0;
      }
      pTVar13 = (TVector<float> *)(local_60 + -(uVar10 & 0xfffffffffffffff0));
      puVar12 = auStack_98 + -(uVar10 & 0xfffffffffffffff0);
    }
    plVar11 = (longlong *)local_res10->_padding_;
    bVar8 = true;
    local_68 = plVar11;
    if (plVar11 != (longlong *)0x0) {
      do {
        local_68 = plVar11;
        if (*(int *)((longlong)plVar11 + 0x34) * (int)plVar11[6] +
            *(int *)((longlong)plVar11 + 0x44) <= (int)(uint)uVar1) {
          if ((*(uint *)(plVar11 + 7) >> 9 & 1) == 0) {
            pcVar5 = *(code **)(*plVar11 + 0x150);
            if ((int)plVar11[6] < 1) {
              *(int *)(puVar12 + 0x28) = (int)plVar11[6];
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465e0895;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (pTVar13 == (TVector<float> *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465e08c0;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            iVar4 = *(int *)((longlong)plVar11 + 0x44);
            *(undefined8 *)(puVar12 + -8) = 0x1465e08d2;
            (*pcVar5)(plVar11,(undefined1 *)((longlong)&pTVar13->field0_0x0 + (longlong)iVar4));
          }
          else {
            iVar4 = (int)plVar11[6];
            iVar2 = *(int *)((longlong)plVar11 + 0x34);
            if (iVar4 < 1) {
              *(int *)(puVar12 + 0x28) = iVar4;
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465e0817;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (pTVar13 == (TVector<float> *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465e0842;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            iVar3 = *(int *)((longlong)plVar11 + 0x44);
            *(undefined8 *)(puVar12 + -8) = 0x1465e0859;
            memset((undefined1 *)((longlong)&pTVar13->field0_0x0 + (longlong)iVar3),0,
                   (longlong)iVar2 * (longlong)iVar4);
          }
          if ((((char)local_68[7] < '\0') && (((ulonglong)local_68[7] >> 10 & 1) == 0)) && (bVar8))
          {
            if (*(int *)((longlong)local_68 + 0x34) != 0xc) {
              local_60._0_8_ = &local_res8;
              local_60._8_8_ = &local_res10;
              local_50 = &local_68;
              *(undefined8 *)(puVar12 + -8) = 0x1465e091d;
              bVar8 = `FTrackInstancePropertyBindings::
                      InvokeSetterFunction<UE::Math::TVector<float>_const_&>'::__l20::<lambda_1>::
                      operator()(local_60);
              if (!bVar8) goto LAB_1465e0a0c;
            }
            plVar11 = local_68;
            if ((int)local_68[6] < 1) {
              *(int *)(puVar12 + 0x28) = (int)local_68[6];
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465e095c;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (pTVar13 == (TVector<float> *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465e098b;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            plVar7 = local_68;
            _Dst = (TVector<float> *)
                   ((longlong)&pTVar13->field0_0x0 + (longlong)*(int *)((longlong)plVar11 + 0x44));
            if (_Dst != param_3) {
              if ((*(uint *)(local_68 + 7) >> 0x1e & 1) == 0) {
                lVar6 = local_68[6];
                pcVar5 = *(code **)(*local_68 + 0xf0);
                *(undefined8 *)(puVar12 + -8) = 0x1465e09d7;
                (*pcVar5)(plVar7,_Dst,param_3,(int)lVar6);
              }
              else {
                iVar4 = *(int *)((longlong)local_68 + 0x34);
                lVar6 = local_68[6];
                *(undefined8 *)(puVar12 + -8) = 0x1465e09c2;
                memcpy(_Dst,param_3,(longlong)iVar4 * (longlong)(int)lVar6);
              }
            }
          }
          bVar8 = false;
        }
        plVar11 = (longlong *)local_68[9];
      } while (plVar11 != (longlong *)0x0);
      local_68 = (longlong *)0x0;
    }
  }
  pcVar5 = *(code **)(*(longlong *)local_res8 + 0x260);
  *(undefined8 *)(puVar12 + -8) = 0x1465e0a0c;
  (*pcVar5)(local_res8,local_res10,pTVar13);
LAB_1465e0a0c:
  *(undefined8 *)(puVar12 + -8) = 0x1465e0a18;
  return;
}

// InvokeSetterFunction<UE::Math::TVector<double>_const_&> @ 1465e0a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
FTrackInstancePropertyBindings::InvokeSetterFunction<UE::Math::TVector<double>_const_&>
          (UObject *param_1,UFunction *param_2,TVector<double> *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  bool bVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  TVector<double> *pTVar13;
  TVector<double> *_Dst;
  UObject *local_res8;
  UFunction *local_res10;
  undefined1 auStack_98 [48];
  longlong *local_68;
  undefined1 local_60 [16];
  longlong **local_50;
  ulonglong local_48;
  
  puVar12 = auStack_98;
  local_48 = __security_cookie.value ^ (ulonglong)&local_68;
  uVar1 = param_2->ParmsSize;
  local_res8 = param_1;
  local_res10 = param_2;
  if ((param_1 == (UObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InRuntimeObject && Setter",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\TrackInstancePropertyBindings.h"
                         ,0x1a9,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((local_res10->ReturnValueOffset != 0xffff) ||
     (pTVar13 = param_3, local_res10->NumParms != '\0')) {
    pTVar13 = (TVector<double> *)0x0;
    puVar12 = auStack_98;
    if (uVar1 != 0) {
      uVar10 = (ulonglong)(uVar1 + 0xf) + 0xf;
      if (uVar10 <= uVar1 + 0xf) {
        uVar10 = 0xffffffffffffff0;
      }
      pTVar13 = (TVector<double> *)(local_60 + -(uVar10 & 0xfffffffffffffff0));
      puVar12 = auStack_98 + -(uVar10 & 0xfffffffffffffff0);
    }
    plVar11 = (longlong *)local_res10->_padding_;
    bVar8 = true;
    local_68 = plVar11;
    if (plVar11 != (longlong *)0x0) {
      do {
        local_68 = plVar11;
        if (*(int *)((longlong)plVar11 + 0x34) * (int)plVar11[6] +
            *(int *)((longlong)plVar11 + 0x44) <= (int)(uint)uVar1) {
          if ((*(uint *)(plVar11 + 7) >> 9 & 1) == 0) {
            pcVar5 = *(code **)(*plVar11 + 0x150);
            if ((int)plVar11[6] < 1) {
              *(int *)(puVar12 + 0x28) = (int)plVar11[6];
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465e0c05;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (pTVar13 == (TVector<double> *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465e0c30;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            iVar4 = *(int *)((longlong)plVar11 + 0x44);
            *(undefined8 *)(puVar12 + -8) = 0x1465e0c42;
            (*pcVar5)(plVar11,(undefined1 *)((longlong)&pTVar13->field0_0x0 + (longlong)iVar4));
          }
          else {
            iVar4 = (int)plVar11[6];
            iVar2 = *(int *)((longlong)plVar11 + 0x34);
            if (iVar4 < 1) {
              *(int *)(puVar12 + 0x28) = iVar4;
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465e0b87;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (pTVar13 == (TVector<double> *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465e0bb2;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            iVar3 = *(int *)((longlong)plVar11 + 0x44);
            *(undefined8 *)(puVar12 + -8) = 0x1465e0bc9;
            memset((undefined1 *)((longlong)&pTVar13->field0_0x0 + (longlong)iVar3),0,
                   (longlong)iVar2 * (longlong)iVar4);
          }
          if ((((char)local_68[7] < '\0') && (((ulonglong)local_68[7] >> 10 & 1) == 0)) && (bVar8))
          {
            if (*(int *)((longlong)local_68 + 0x34) != 0x18) {
              local_60._0_8_ = &local_res8;
              local_60._8_8_ = &local_res10;
              local_50 = &local_68;
              *(undefined8 *)(puVar12 + -8) = 0x1465e0c8d;
              bVar8 = `FTrackInstancePropertyBindings::
                      InvokeSetterFunction<UE::Math::TVector<double>_const_&>'::__l20::<lambda_1>::
                      operator()(local_60);
              if (!bVar8) goto LAB_1465e0d7c;
            }
            plVar11 = local_68;
            if ((int)local_68[6] < 1) {
              *(int *)(puVar12 + 0x28) = (int)local_68[6];
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465e0ccc;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (pTVar13 == (TVector<double> *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465e0cfb;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            plVar7 = local_68;
            _Dst = (TVector<double> *)
                   ((longlong)&pTVar13->field0_0x0 + (longlong)*(int *)((longlong)plVar11 + 0x44));
            if (_Dst != param_3) {
              if ((*(uint *)(local_68 + 7) >> 0x1e & 1) == 0) {
                lVar6 = local_68[6];
                pcVar5 = *(code **)(*local_68 + 0xf0);
                *(undefined8 *)(puVar12 + -8) = 0x1465e0d47;
                (*pcVar5)(plVar7,_Dst,param_3,(int)lVar6);
              }
              else {
                iVar4 = *(int *)((longlong)local_68 + 0x34);
                lVar6 = local_68[6];
                *(undefined8 *)(puVar12 + -8) = 0x1465e0d32;
                memcpy(_Dst,param_3,(longlong)iVar4 * (longlong)(int)lVar6);
              }
            }
          }
          bVar8 = false;
        }
        plVar11 = (longlong *)local_68[9];
      } while (plVar11 != (longlong *)0x0);
      local_68 = (longlong *)0x0;
    }
  }
  pcVar5 = *(code **)(*(longlong *)local_res8 + 0x260);
  *(undefined8 *)(puVar12 + -8) = 0x1465e0d7c;
  (*pcVar5)(local_res8,local_res10,pTVar13);
LAB_1465e0d7c:
  *(undefined8 *)(puVar12 + -8) = 0x1465e0d88;
  return;
}

// InvokeSetterFunction<FColor_const_&> @ 1465e0db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
FTrackInstancePropertyBindings::InvokeSetterFunction<FColor_const_&>
          (UObject *param_1,UFunction *param_2,FColor *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  bool bVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  FColor *pFVar13;
  FColor *_Dst;
  UObject *local_res8;
  UFunction *local_res10;
  undefined1 auStack_98 [48];
  longlong *local_68;
  UObject **local_60;
  UFunction **local_58;
  longlong **local_50;
  ulonglong local_48;
  
  puVar12 = auStack_98;
  local_48 = __security_cookie.value ^ (ulonglong)&local_68;
  uVar1 = param_2->ParmsSize;
  local_res8 = param_1;
  local_res10 = param_2;
  if ((param_1 == (UObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InRuntimeObject && Setter",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\TrackInstancePropertyBindings.h"
                         ,0x1a9,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((local_res10->ReturnValueOffset != 0xffff) ||
     (pFVar13 = param_3, local_res10->NumParms != '\0')) {
    pFVar13 = (FColor *)0x0;
    puVar12 = auStack_98;
    if (uVar1 != 0) {
      uVar10 = (ulonglong)(uVar1 + 0xf) + 0xf;
      if (uVar10 <= uVar1 + 0xf) {
        uVar10 = 0xffffffffffffff0;
      }
      pFVar13 = (FColor *)((longlong)&local_60 + -(uVar10 & 0xfffffffffffffff0));
      puVar12 = auStack_98 + -(uVar10 & 0xfffffffffffffff0);
    }
    plVar11 = (longlong *)local_res10->_padding_;
    bVar8 = true;
    local_68 = plVar11;
    if (plVar11 != (longlong *)0x0) {
      do {
        local_68 = plVar11;
        if (*(int *)((longlong)plVar11 + 0x34) * (int)plVar11[6] +
            *(int *)((longlong)plVar11 + 0x44) <= (int)(uint)uVar1) {
          if ((*(uint *)(plVar11 + 7) >> 9 & 1) == 0) {
            pcVar5 = *(code **)(*plVar11 + 0x150);
            if ((int)plVar11[6] < 1) {
              *(int *)(puVar12 + 0x28) = (int)plVar11[6];
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465e0f75;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (pFVar13 == (FColor *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465e0fa0;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            iVar4 = *(int *)((longlong)plVar11 + 0x44);
            *(undefined8 *)(puVar12 + -8) = 0x1465e0fb2;
            (*pcVar5)(plVar11,(longlong)&pFVar13->field0_0x0 + (longlong)iVar4);
          }
          else {
            iVar4 = (int)plVar11[6];
            iVar2 = *(int *)((longlong)plVar11 + 0x34);
            if (iVar4 < 1) {
              *(int *)(puVar12 + 0x28) = iVar4;
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465e0ef7;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (pFVar13 == (FColor *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465e0f22;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            iVar3 = *(int *)((longlong)plVar11 + 0x44);
            *(undefined8 *)(puVar12 + -8) = 0x1465e0f39;
            memset((void *)((longlong)&pFVar13->field0_0x0 + (longlong)iVar3),0,
                   (longlong)iVar2 * (longlong)iVar4);
          }
          if ((((char)local_68[7] < '\0') && (((ulonglong)local_68[7] >> 10 & 1) == 0)) && (bVar8))
          {
            if (*(int *)((longlong)local_68 + 0x34) != 4) {
              local_60 = &local_res8;
              local_58 = &local_res10;
              local_50 = &local_68;
              *(undefined8 *)(puVar12 + -8) = 0x1465e0ffd;
              bVar8 = `FTrackInstancePropertyBindings::InvokeSetterFunction<FColor_const_&>'::__l20
                      ::<lambda_1>::operator()(&local_60);
              if (!bVar8) goto LAB_1465e10ec;
            }
            plVar11 = local_68;
            if ((int)local_68[6] < 1) {
              *(int *)(puVar12 + 0x28) = (int)local_68[6];
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465e103c;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (pFVar13 == (FColor *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465e106b;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            plVar7 = local_68;
            _Dst = (FColor *)
                   ((longlong)&pFVar13->field0_0x0 + (longlong)*(int *)((longlong)plVar11 + 0x44));
            if (_Dst != param_3) {
              if ((*(uint *)(local_68 + 7) >> 0x1e & 1) == 0) {
                lVar6 = local_68[6];
                pcVar5 = *(code **)(*local_68 + 0xf0);
                *(undefined8 *)(puVar12 + -8) = 0x1465e10b7;
                (*pcVar5)(plVar7,_Dst,param_3,(int)lVar6);
              }
              else {
                iVar4 = *(int *)((longlong)local_68 + 0x34);
                lVar6 = local_68[6];
                *(undefined8 *)(puVar12 + -8) = 0x1465e10a2;
                memcpy(_Dst,param_3,(longlong)iVar4 * (longlong)(int)lVar6);
              }
            }
          }
          bVar8 = false;
        }
        plVar11 = (longlong *)local_68[9];
      } while (plVar11 != (longlong *)0x0);
      local_68 = (longlong *)0x0;
    }
  }
  pcVar5 = *(code **)(*(longlong *)local_res8 + 0x260);
  *(undefined8 *)(puVar12 + -8) = 0x1465e10ec;
  (*pcVar5)(local_res8,local_res10,pFVar13);
LAB_1465e10ec:
  *(undefined8 *)(puVar12 + -8) = 0x1465e10f8;
  return;
}

// InvokeSetterFunction<FEulerTransform_const_&> @ 1465e1120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
FTrackInstancePropertyBindings::InvokeSetterFunction<FEulerTransform_const_&>
          (UObject *param_1,UFunction *param_2,FEulerTransform *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  bool bVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  FEulerTransform *pFVar13;
  FEulerTransform *_Dst;
  UObject *local_res8;
  UFunction *local_res10;
  undefined1 auStack_98 [48];
  longlong *local_68;
  UObject **local_60;
  UFunction **local_58;
  longlong **local_50;
  ulonglong local_48;
  
  puVar12 = auStack_98;
  local_48 = __security_cookie.value ^ (ulonglong)&local_68;
  uVar1 = param_2->ParmsSize;
  local_res8 = param_1;
  local_res10 = param_2;
  if ((param_1 == (UObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InRuntimeObject && Setter",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\TrackInstancePropertyBindings.h"
                         ,0x1a9,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((local_res10->ReturnValueOffset != 0xffff) ||
     (pFVar13 = param_3, local_res10->NumParms != '\0')) {
    pFVar13 = (FEulerTransform *)0x0;
    puVar12 = auStack_98;
    if (uVar1 != 0) {
      uVar10 = (ulonglong)(uVar1 + 0xf) + 0xf;
      if (uVar10 <= uVar1 + 0xf) {
        uVar10 = 0xffffffffffffff0;
      }
      pFVar13 = (FEulerTransform *)((longlong)&local_60 + -(uVar10 & 0xfffffffffffffff0));
      puVar12 = auStack_98 + -(uVar10 & 0xfffffffffffffff0);
    }
    plVar11 = (longlong *)local_res10->_padding_;
    bVar8 = true;
    local_68 = plVar11;
    if (plVar11 != (longlong *)0x0) {
      do {
        local_68 = plVar11;
        if (*(int *)((longlong)plVar11 + 0x34) * (int)plVar11[6] +
            *(int *)((longlong)plVar11 + 0x44) <= (int)(uint)uVar1) {
          if ((*(uint *)(plVar11 + 7) >> 9 & 1) == 0) {
            pcVar5 = *(code **)(*plVar11 + 0x150);
            if ((int)plVar11[6] < 1) {
              *(int *)(puVar12 + 0x28) = (int)plVar11[6];
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465e12e5;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (pFVar13 == (FEulerTransform *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465e1310;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            iVar4 = *(int *)((longlong)plVar11 + 0x44);
            *(undefined8 *)(puVar12 + -8) = 0x1465e1322;
            (*pcVar5)(plVar11,(longlong)&(pFVar13->Location).field0_0x0 + (longlong)iVar4);
          }
          else {
            iVar4 = (int)plVar11[6];
            iVar2 = *(int *)((longlong)plVar11 + 0x34);
            if (iVar4 < 1) {
              *(int *)(puVar12 + 0x28) = iVar4;
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465e1267;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (pFVar13 == (FEulerTransform *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465e1292;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            iVar3 = *(int *)((longlong)plVar11 + 0x44);
            *(undefined8 *)(puVar12 + -8) = 0x1465e12a9;
            memset((void *)((longlong)&(pFVar13->Location).field0_0x0 + (longlong)iVar3),0,
                   (longlong)iVar2 * (longlong)iVar4);
          }
          if ((((char)local_68[7] < '\0') && (((ulonglong)local_68[7] >> 10 & 1) == 0)) && (bVar8))
          {
            if (*(int *)((longlong)local_68 + 0x34) != 0x48) {
              local_60 = &local_res8;
              local_58 = &local_res10;
              local_50 = &local_68;
              *(undefined8 *)(puVar12 + -8) = 0x1465e136d;
              bVar8 = `FTrackInstancePropertyBindings::
                      InvokeSetterFunction<FEulerTransform_const_&>'::__l20::<lambda_1>::operator()
                                (&local_60);
              if (!bVar8) goto LAB_1465e145c;
            }
            plVar11 = local_68;
            if ((int)local_68[6] < 1) {
              *(int *)(puVar12 + 0x28) = (int)local_68[6];
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465e13ac;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (pFVar13 == (FEulerTransform *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465e13db;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            plVar7 = local_68;
            _Dst = (FEulerTransform *)
                   ((longlong)&(pFVar13->Location).field0_0x0 +
                   (longlong)*(int *)((longlong)plVar11 + 0x44));
            if (_Dst != param_3) {
              if ((*(uint *)(local_68 + 7) >> 0x1e & 1) == 0) {
                lVar6 = local_68[6];
                pcVar5 = *(code **)(*local_68 + 0xf0);
                *(undefined8 *)(puVar12 + -8) = 0x1465e1427;
                (*pcVar5)(plVar7,_Dst,param_3,(int)lVar6);
              }
              else {
                iVar4 = *(int *)((longlong)local_68 + 0x34);
                lVar6 = local_68[6];
                *(undefined8 *)(puVar12 + -8) = 0x1465e1412;
                memcpy(_Dst,param_3,(longlong)iVar4 * (longlong)(int)lVar6);
              }
            }
          }
          bVar8 = false;
        }
        plVar11 = (longlong *)local_68[9];
      } while (plVar11 != (longlong *)0x0);
      local_68 = (longlong *)0x0;
    }
  }
  pcVar5 = *(code **)(*(longlong *)local_res8 + 0x260);
  *(undefined8 *)(puVar12 + -8) = 0x1465e145c;
  (*pcVar5)(local_res8,local_res10,pFVar13);
LAB_1465e145c:
  *(undefined8 *)(puVar12 + -8) = 0x1465e1468;
  return;
}

// InvokeSetterFunction<UE::MovieScene::FIntermediate3DTransform_const_&> @ 1465e1490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
FTrackInstancePropertyBindings::
InvokeSetterFunction<UE::MovieScene::FIntermediate3DTransform_const_&>
          (UObject *param_1,UFunction *param_2,FIntermediate3DTransform *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  bool bVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  FIntermediate3DTransform *pFVar13;
  FIntermediate3DTransform *_Dst;
  UObject *local_res8;
  UFunction *local_res10;
  undefined1 auStack_98 [48];
  longlong *local_68;
  UObject **local_60;
  UFunction **local_58;
  longlong **local_50;
  ulonglong local_48;
  
  puVar12 = auStack_98;
  local_48 = __security_cookie.value ^ (ulonglong)&local_68;
  uVar1 = param_2->ParmsSize;
  local_res8 = param_1;
  local_res10 = param_2;
  if ((param_1 == (UObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InRuntimeObject && Setter",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\TrackInstancePropertyBindings.h"
                         ,0x1a9,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((local_res10->ReturnValueOffset != 0xffff) ||
     (pFVar13 = param_3, local_res10->NumParms != '\0')) {
    pFVar13 = (FIntermediate3DTransform *)0x0;
    puVar12 = auStack_98;
    if (uVar1 != 0) {
      uVar10 = (ulonglong)(uVar1 + 0xf) + 0xf;
      if (uVar10 <= uVar1 + 0xf) {
        uVar10 = 0xffffffffffffff0;
      }
      pFVar13 = (FIntermediate3DTransform *)((longlong)&local_60 + -(uVar10 & 0xfffffffffffffff0));
      puVar12 = auStack_98 + -(uVar10 & 0xfffffffffffffff0);
    }
    plVar11 = (longlong *)local_res10->_padding_;
    bVar8 = true;
    local_68 = plVar11;
    if (plVar11 != (longlong *)0x0) {
      do {
        local_68 = plVar11;
        if (*(int *)((longlong)plVar11 + 0x34) * (int)plVar11[6] +
            *(int *)((longlong)plVar11 + 0x44) <= (int)(uint)uVar1) {
          if ((*(uint *)(plVar11 + 7) >> 9 & 1) == 0) {
            pcVar5 = *(code **)(*plVar11 + 0x150);
            if ((int)plVar11[6] < 1) {
              *(int *)(puVar12 + 0x28) = (int)plVar11[6];
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465e1655;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (pFVar13 == (FIntermediate3DTransform *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465e1680;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            iVar4 = *(int *)((longlong)plVar11 + 0x44);
            *(undefined8 *)(puVar12 + -8) = 0x1465e1692;
            (*pcVar5)(plVar11,(longlong)&pFVar13->T_X + (longlong)iVar4);
          }
          else {
            iVar4 = (int)plVar11[6];
            iVar2 = *(int *)((longlong)plVar11 + 0x34);
            if (iVar4 < 1) {
              *(int *)(puVar12 + 0x28) = iVar4;
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465e15d7;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (pFVar13 == (FIntermediate3DTransform *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465e1602;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            iVar3 = *(int *)((longlong)plVar11 + 0x44);
            *(undefined8 *)(puVar12 + -8) = 0x1465e1619;
            memset((void *)((longlong)&pFVar13->T_X + (longlong)iVar3),0,
                   (longlong)iVar2 * (longlong)iVar4);
          }
          if ((((char)local_68[7] < '\0') && (((ulonglong)local_68[7] >> 10 & 1) == 0)) && (bVar8))
          {
            if (*(int *)((longlong)local_68 + 0x34) != 0x48) {
              local_60 = &local_res8;
              local_58 = &local_res10;
              local_50 = &local_68;
              *(undefined8 *)(puVar12 + -8) = 0x1465e16dd;
              bVar8 = `FTrackInstancePropertyBindings::
                      InvokeSetterFunction<UE::MovieScene::FIntermediate3DTransform_const_&>'::__l20
                      ::<lambda_1>::operator()(&local_60);
              if (!bVar8) goto LAB_1465e17cc;
            }
            plVar11 = local_68;
            if ((int)local_68[6] < 1) {
              *(int *)(puVar12 + 0x28) = (int)local_68[6];
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465e171c;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (pFVar13 == (FIntermediate3DTransform *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465e174b;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            plVar7 = local_68;
            _Dst = (FIntermediate3DTransform *)
                   ((longlong)&pFVar13->T_X + (longlong)*(int *)((longlong)plVar11 + 0x44));
            if (_Dst != param_3) {
              if ((*(uint *)(local_68 + 7) >> 0x1e & 1) == 0) {
                lVar6 = local_68[6];
                pcVar5 = *(code **)(*local_68 + 0xf0);
                *(undefined8 *)(puVar12 + -8) = 0x1465e1797;
                (*pcVar5)(plVar7,_Dst,param_3,(int)lVar6);
              }
              else {
                iVar4 = *(int *)((longlong)local_68 + 0x34);
                lVar6 = local_68[6];
                *(undefined8 *)(puVar12 + -8) = 0x1465e1782;
                memcpy(_Dst,param_3,(longlong)iVar4 * (longlong)(int)lVar6);
              }
            }
          }
          bVar8 = false;
        }
        plVar11 = (longlong *)local_68[9];
      } while (plVar11 != (longlong *)0x0);
      local_68 = (longlong *)0x0;
    }
  }
  pcVar5 = *(code **)(*(longlong *)local_res8 + 0x260);
  *(undefined8 *)(puVar12 + -8) = 0x1465e17cc;
  (*pcVar5)(local_res8,local_res10,pFVar13);
LAB_1465e17cc:
  *(undefined8 *)(puVar12 + -8) = 0x1465e17d8;
  return;
}

// InvokeSetterFunction<FLinearColor_const_&> @ 1465e1800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
FTrackInstancePropertyBindings::InvokeSetterFunction<FLinearColor_const_&>
          (UObject *param_1,UFunction *param_2,FLinearColor *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  bool bVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  FLinearColor *pFVar13;
  FLinearColor *_Dst;
  UObject *local_res8;
  UFunction *local_res10;
  undefined1 auStack_98 [48];
  longlong *local_68;
  undefined1 local_60 [16];
  longlong **local_50;
  ulonglong local_48;
  
  puVar12 = auStack_98;
  local_48 = __security_cookie.value ^ (ulonglong)&local_68;
  uVar1 = param_2->ParmsSize;
  local_res8 = param_1;
  local_res10 = param_2;
  if ((param_1 == (UObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InRuntimeObject && Setter",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\TrackInstancePropertyBindings.h"
                         ,0x1a9,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((local_res10->ReturnValueOffset != 0xffff) ||
     (pFVar13 = param_3, local_res10->NumParms != '\0')) {
    pFVar13 = (FLinearColor *)0x0;
    puVar12 = auStack_98;
    if (uVar1 != 0) {
      uVar10 = (ulonglong)(uVar1 + 0xf) + 0xf;
      if (uVar10 <= uVar1 + 0xf) {
        uVar10 = 0xffffffffffffff0;
      }
      pFVar13 = (FLinearColor *)(local_60 + -(uVar10 & 0xfffffffffffffff0));
      puVar12 = auStack_98 + -(uVar10 & 0xfffffffffffffff0);
    }
    plVar11 = (longlong *)local_res10->_padding_;
    bVar8 = true;
    local_68 = plVar11;
    if (plVar11 != (longlong *)0x0) {
      do {
        local_68 = plVar11;
        if (*(int *)((longlong)plVar11 + 0x34) * (int)plVar11[6] +
            *(int *)((longlong)plVar11 + 0x44) <= (int)(uint)uVar1) {
          if ((*(uint *)(plVar11 + 7) >> 9 & 1) == 0) {
            pcVar5 = *(code **)(*plVar11 + 0x150);
            if ((int)plVar11[6] < 1) {
              *(int *)(puVar12 + 0x28) = (int)plVar11[6];
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465e19c5;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (pFVar13 == (FLinearColor *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465e19f0;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            iVar4 = *(int *)((longlong)plVar11 + 0x44);
            *(undefined8 *)(puVar12 + -8) = 0x1465e1a02;
            (*pcVar5)(plVar11,(undefined1 *)((longlong)&pFVar13->field0_0x0 + (longlong)iVar4));
          }
          else {
            iVar4 = (int)plVar11[6];
            iVar2 = *(int *)((longlong)plVar11 + 0x34);
            if (iVar4 < 1) {
              *(int *)(puVar12 + 0x28) = iVar4;
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465e1947;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (pFVar13 == (FLinearColor *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465e1972;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            iVar3 = *(int *)((longlong)plVar11 + 0x44);
            *(undefined8 *)(puVar12 + -8) = 0x1465e1989;
            memset((undefined1 *)((longlong)&pFVar13->field0_0x0 + (longlong)iVar3),0,
                   (longlong)iVar2 * (longlong)iVar4);
          }
          if ((((char)local_68[7] < '\0') && (((ulonglong)local_68[7] >> 10 & 1) == 0)) && (bVar8))
          {
            if (*(int *)((longlong)local_68 + 0x34) != 0x10) {
              local_60._0_8_ = &local_res8;
              local_60._8_8_ = &local_res10;
              local_50 = &local_68;
              *(undefined8 *)(puVar12 + -8) = 0x1465e1a4d;
              bVar8 = `FTrackInstancePropertyBindings::InvokeSetterFunction<FLinearColor_const_&>'::
                      __l20::<lambda_1>::operator()(local_60);
              if (!bVar8) goto LAB_1465e1b3c;
            }
            plVar11 = local_68;
            if ((int)local_68[6] < 1) {
              *(int *)(puVar12 + 0x28) = (int)local_68[6];
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465e1a8c;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (pFVar13 == (FLinearColor *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465e1abb;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            plVar7 = local_68;
            _Dst = (FLinearColor *)
                   ((longlong)&pFVar13->field0_0x0 + (longlong)*(int *)((longlong)plVar11 + 0x44));
            if (_Dst != param_3) {
              if ((*(uint *)(local_68 + 7) >> 0x1e & 1) == 0) {
                lVar6 = local_68[6];
                pcVar5 = *(code **)(*local_68 + 0xf0);
                *(undefined8 *)(puVar12 + -8) = 0x1465e1b07;
                (*pcVar5)(plVar7,_Dst,param_3,(int)lVar6);
              }
              else {
                iVar4 = *(int *)((longlong)local_68 + 0x34);
                lVar6 = local_68[6];
                *(undefined8 *)(puVar12 + -8) = 0x1465e1af2;
                memcpy(_Dst,param_3,(longlong)iVar4 * (longlong)(int)lVar6);
              }
            }
          }
          bVar8 = false;
        }
        plVar11 = (longlong *)local_68[9];
      } while (plVar11 != (longlong *)0x0);
      local_68 = (longlong *)0x0;
    }
  }
  pcVar5 = *(code **)(*(longlong *)local_res8 + 0x260);
  *(undefined8 *)(puVar12 + -8) = 0x1465e1b3c;
  (*pcVar5)(local_res8,local_res10,pFVar13);
LAB_1465e1b3c:
  *(undefined8 *)(puVar12 + -8) = 0x1465e1b48;
  return;
}

// InvokeSetterFunction<FSlateColor_const_&> @ 1465e1b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
FTrackInstancePropertyBindings::InvokeSetterFunction<FSlateColor_const_&>
          (UObject *param_1,UFunction *param_2,FSlateColor *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  bool bVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  FSlateColor *pFVar13;
  FSlateColor *_Dst;
  UObject *local_res8;
  UFunction *local_res10;
  undefined1 auStack_98 [48];
  longlong *local_68;
  undefined1 local_60 [16];
  longlong **local_50;
  ulonglong local_48;
  
  puVar12 = auStack_98;
  local_48 = __security_cookie.value ^ (ulonglong)&local_68;
  uVar1 = param_2->ParmsSize;
  local_res8 = param_1;
  local_res10 = param_2;
  if ((param_1 == (UObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InRuntimeObject && Setter",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\TrackInstancePropertyBindings.h"
                         ,0x1a9,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((local_res10->ReturnValueOffset != 0xffff) ||
     (pFVar13 = param_3, local_res10->NumParms != '\0')) {
    pFVar13 = (FSlateColor *)0x0;
    puVar12 = auStack_98;
    if (uVar1 != 0) {
      uVar10 = (ulonglong)(uVar1 + 0xf) + 0xf;
      if (uVar10 <= uVar1 + 0xf) {
        uVar10 = 0xffffffffffffff0;
      }
      pFVar13 = (FSlateColor *)(local_60 + -(uVar10 & 0xfffffffffffffff0));
      puVar12 = auStack_98 + -(uVar10 & 0xfffffffffffffff0);
    }
    plVar11 = (longlong *)local_res10->_padding_;
    bVar8 = true;
    local_68 = plVar11;
    if (plVar11 != (longlong *)0x0) {
      do {
        local_68 = plVar11;
        if (*(int *)((longlong)plVar11 + 0x34) * (int)plVar11[6] +
            *(int *)((longlong)plVar11 + 0x44) <= (int)(uint)uVar1) {
          if ((*(uint *)(plVar11 + 7) >> 9 & 1) == 0) {
            pcVar5 = *(code **)(*plVar11 + 0x150);
            if ((int)plVar11[6] < 1) {
              *(int *)(puVar12 + 0x28) = (int)plVar11[6];
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465e1d35;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (pFVar13 == (FSlateColor *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465e1d60;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            iVar4 = *(int *)((longlong)plVar11 + 0x44);
            *(undefined8 *)(puVar12 + -8) = 0x1465e1d72;
            (*pcVar5)(plVar11,(undefined1 *)
                              ((longlong)&(pFVar13->SpecifiedColor).field0_0x0 + (longlong)iVar4));
          }
          else {
            iVar4 = (int)plVar11[6];
            iVar2 = *(int *)((longlong)plVar11 + 0x34);
            if (iVar4 < 1) {
              *(int *)(puVar12 + 0x28) = iVar4;
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465e1cb7;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (pFVar13 == (FSlateColor *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465e1ce2;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            iVar3 = *(int *)((longlong)plVar11 + 0x44);
            *(undefined8 *)(puVar12 + -8) = 0x1465e1cf9;
            memset((undefined1 *)((longlong)&(pFVar13->SpecifiedColor).field0_0x0 + (longlong)iVar3)
                   ,0,(longlong)iVar2 * (longlong)iVar4);
          }
          if ((((char)local_68[7] < '\0') && (((ulonglong)local_68[7] >> 10 & 1) == 0)) && (bVar8))
          {
            if (*(int *)((longlong)local_68 + 0x34) != 0x14) {
              local_60._0_8_ = &local_res8;
              local_60._8_8_ = &local_res10;
              local_50 = &local_68;
              *(undefined8 *)(puVar12 + -8) = 0x1465e1dbd;
              bVar8 = `FTrackInstancePropertyBindings::InvokeSetterFunction<FSlateColor_const_&>'::
                      __l20::<lambda_1>::operator()(local_60);
              if (!bVar8) goto LAB_1465e1eac;
            }
            plVar11 = local_68;
            if ((int)local_68[6] < 1) {
              *(int *)(puVar12 + 0x28) = (int)local_68[6];
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465e1dfc;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (pFVar13 == (FSlateColor *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465e1e2b;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            plVar7 = local_68;
            _Dst = (FSlateColor *)
                   ((longlong)&(pFVar13->SpecifiedColor).field0_0x0 +
                   (longlong)*(int *)((longlong)plVar11 + 0x44));
            if (_Dst != param_3) {
              if ((*(uint *)(local_68 + 7) >> 0x1e & 1) == 0) {
                lVar6 = local_68[6];
                pcVar5 = *(code **)(*local_68 + 0xf0);
                *(undefined8 *)(puVar12 + -8) = 0x1465e1e77;
                (*pcVar5)(plVar7,_Dst,param_3,(int)lVar6);
              }
              else {
                iVar4 = *(int *)((longlong)local_68 + 0x34);
                lVar6 = local_68[6];
                *(undefined8 *)(puVar12 + -8) = 0x1465e1e62;
                memcpy(_Dst,param_3,(longlong)iVar4 * (longlong)(int)lVar6);
              }
            }
          }
          bVar8 = false;
        }
        plVar11 = (longlong *)local_68[9];
      } while (plVar11 != (longlong *)0x0);
      local_68 = (longlong *)0x0;
    }
  }
  pcVar5 = *(code **)(*(longlong *)local_res8 + 0x260);
  *(undefined8 *)(puVar12 + -8) = 0x1465e1eac;
  (*pcVar5)(local_res8,local_res10,pFVar13);
LAB_1465e1eac:
  *(undefined8 *)(puVar12 + -8) = 0x1465e1eb8;
  return;
}

// InvokeSetterFunction<FString_const_&> @ 1465e1ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
FTrackInstancePropertyBindings::InvokeSetterFunction<FString_const_&>
          (UObject *param_1,UFunction *param_2,FString *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  bool bVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  FString *pFVar13;
  FString *_Dst;
  UObject *local_res8;
  UFunction *local_res10;
  undefined1 auStack_98 [48];
  longlong *local_68;
  undefined1 local_60 [16];
  longlong **local_50;
  ulonglong local_48;
  
  puVar12 = auStack_98;
  local_48 = __security_cookie.value ^ (ulonglong)&local_68;
  uVar1 = param_2->ParmsSize;
  local_res8 = param_1;
  local_res10 = param_2;
  if ((param_1 == (UObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InRuntimeObject && Setter",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\TrackInstancePropertyBindings.h"
                         ,0x1a9,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((local_res10->ReturnValueOffset != 0xffff) ||
     (pFVar13 = param_3, local_res10->NumParms != '\0')) {
    pFVar13 = (FString *)0x0;
    puVar12 = auStack_98;
    if (uVar1 != 0) {
      uVar10 = (ulonglong)(uVar1 + 0xf) + 0xf;
      if (uVar10 <= uVar1 + 0xf) {
        uVar10 = 0xffffffffffffff0;
      }
      pFVar13 = (FString *)(local_60 + -(uVar10 & 0xfffffffffffffff0));
      puVar12 = auStack_98 + -(uVar10 & 0xfffffffffffffff0);
    }
    plVar11 = (longlong *)local_res10->_padding_;
    bVar8 = true;
    local_68 = plVar11;
    if (plVar11 != (longlong *)0x0) {
      do {
        local_68 = plVar11;
        if (*(int *)((longlong)plVar11 + 0x34) * (int)plVar11[6] +
            *(int *)((longlong)plVar11 + 0x44) <= (int)(uint)uVar1) {
          if ((*(uint *)(plVar11 + 7) >> 9 & 1) == 0) {
            pcVar5 = *(code **)(*plVar11 + 0x150);
            if ((int)plVar11[6] < 1) {
              *(int *)(puVar12 + 0x28) = (int)plVar11[6];
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465e20a5;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (pFVar13 == (FString *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465e20d0;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            iVar4 = *(int *)((longlong)plVar11 + 0x44);
            *(undefined8 *)(puVar12 + -8) = 0x1465e20e2;
            (*pcVar5)(plVar11,(undefined1 *)
                              ((longlong)&(pFVar13->Data).AllocatorInstance.Data + (longlong)iVar4))
            ;
          }
          else {
            iVar4 = (int)plVar11[6];
            iVar2 = *(int *)((longlong)plVar11 + 0x34);
            if (iVar4 < 1) {
              *(int *)(puVar12 + 0x28) = iVar4;
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465e2027;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (pFVar13 == (FString *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465e2052;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            iVar3 = *(int *)((longlong)plVar11 + 0x44);
            *(undefined8 *)(puVar12 + -8) = 0x1465e2069;
            memset((undefined1 *)
                   ((longlong)&(pFVar13->Data).AllocatorInstance.Data + (longlong)iVar3),0,
                   (longlong)iVar2 * (longlong)iVar4);
          }
          if ((((char)local_68[7] < '\0') && (((ulonglong)local_68[7] >> 10 & 1) == 0)) && (bVar8))
          {
            if (*(int *)((longlong)local_68 + 0x34) != 0x10) {
              local_60._0_8_ = &local_res8;
              local_60._8_8_ = &local_res10;
              local_50 = &local_68;
              *(undefined8 *)(puVar12 + -8) = 0x1465e212d;
              bVar8 = `FTrackInstancePropertyBindings::InvokeSetterFunction<FString_const_&>'::__l20
                      ::<lambda_1>::operator()(local_60);
              if (!bVar8) goto LAB_1465e221c;
            }
            plVar11 = local_68;
            if ((int)local_68[6] < 1) {
              *(int *)(puVar12 + 0x28) = (int)local_68[6];
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465e216c;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (pFVar13 == (FString *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465e219b;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            plVar7 = local_68;
            _Dst = (FString *)
                   ((longlong)&(pFVar13->Data).AllocatorInstance.Data +
                   (longlong)*(int *)((longlong)plVar11 + 0x44));
            if (_Dst != param_3) {
              if ((*(uint *)(local_68 + 7) >> 0x1e & 1) == 0) {
                lVar6 = local_68[6];
                pcVar5 = *(code **)(*local_68 + 0xf0);
                *(undefined8 *)(puVar12 + -8) = 0x1465e21e7;
                (*pcVar5)(plVar7,_Dst,param_3,(int)lVar6);
              }
              else {
                iVar4 = *(int *)((longlong)local_68 + 0x34);
                lVar6 = local_68[6];
                *(undefined8 *)(puVar12 + -8) = 0x1465e21d2;
                memcpy(_Dst,param_3,(longlong)iVar4 * (longlong)(int)lVar6);
              }
            }
          }
          bVar8 = false;
        }
        plVar11 = (longlong *)local_68[9];
      } while (plVar11 != (longlong *)0x0);
      local_68 = (longlong *)0x0;
    }
  }
  pcVar5 = *(code **)(*(longlong *)local_res8 + 0x260);
  *(undefined8 *)(puVar12 + -8) = 0x1465e221c;
  (*pcVar5)(local_res8,local_res10,pFVar13);
LAB_1465e221c:
  *(undefined8 *)(puVar12 + -8) = 0x1465e2228;
  return;
}

// InvokeSetterFunction<FText_const_&> @ 1465e2250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
FTrackInstancePropertyBindings::InvokeSetterFunction<FText_const_&>
          (UObject *param_1,UFunction *param_2,FText *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  bool bVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  FText *pFVar13;
  FText *_Dst;
  UObject *local_res8;
  UFunction *local_res10;
  undefined1 auStack_98 [48];
  longlong *local_68;
  undefined1 local_60 [16];
  longlong **local_50;
  ulonglong local_48;
  
  puVar12 = auStack_98;
  local_48 = __security_cookie.value ^ (ulonglong)&local_68;
  uVar1 = param_2->ParmsSize;
  local_res8 = param_1;
  local_res10 = param_2;
  if ((param_1 == (UObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InRuntimeObject && Setter",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\TrackInstancePropertyBindings.h"
                         ,0x1a9,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((local_res10->ReturnValueOffset != 0xffff) ||
     (pFVar13 = param_3, local_res10->NumParms != '\0')) {
    pFVar13 = (FText *)0x0;
    puVar12 = auStack_98;
    if (uVar1 != 0) {
      uVar10 = (ulonglong)(uVar1 + 0xf) + 0xf;
      if (uVar10 <= uVar1 + 0xf) {
        uVar10 = 0xffffffffffffff0;
      }
      pFVar13 = (FText *)(local_60 + -(uVar10 & 0xfffffffffffffff0));
      puVar12 = auStack_98 + -(uVar10 & 0xfffffffffffffff0);
    }
    plVar11 = (longlong *)local_res10->_padding_;
    bVar8 = true;
    local_68 = plVar11;
    if (plVar11 != (longlong *)0x0) {
      do {
        local_68 = plVar11;
        if (*(int *)((longlong)plVar11 + 0x34) * (int)plVar11[6] +
            *(int *)((longlong)plVar11 + 0x44) <= (int)(uint)uVar1) {
          if ((*(uint *)(plVar11 + 7) >> 9 & 1) == 0) {
            pcVar5 = *(code **)(*plVar11 + 0x150);
            if ((int)plVar11[6] < 1) {
              *(int *)(puVar12 + 0x28) = (int)plVar11[6];
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465e2415;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (pFVar13 == (FText *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465e2440;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            iVar4 = *(int *)((longlong)plVar11 + 0x44);
            *(undefined8 *)(puVar12 + -8) = 0x1465e2452;
            (*pcVar5)(plVar11,(undefined1 *)
                              ((longlong)&(pFVar13->TextData).Reference + (longlong)iVar4));
          }
          else {
            iVar4 = (int)plVar11[6];
            iVar2 = *(int *)((longlong)plVar11 + 0x34);
            if (iVar4 < 1) {
              *(int *)(puVar12 + 0x28) = iVar4;
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465e2397;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (pFVar13 == (FText *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465e23c2;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            iVar3 = *(int *)((longlong)plVar11 + 0x44);
            *(undefined8 *)(puVar12 + -8) = 0x1465e23d9;
            memset((undefined1 *)((longlong)&(pFVar13->TextData).Reference + (longlong)iVar3),0,
                   (longlong)iVar2 * (longlong)iVar4);
          }
          if ((((char)local_68[7] < '\0') && (((ulonglong)local_68[7] >> 10 & 1) == 0)) && (bVar8))
          {
            if (*(int *)((longlong)local_68 + 0x34) != 0x10) {
              local_60._0_8_ = &local_res8;
              local_60._8_8_ = &local_res10;
              local_50 = &local_68;
              *(undefined8 *)(puVar12 + -8) = 0x1465e249d;
              bVar8 = `FTrackInstancePropertyBindings::InvokeSetterFunction<FText_const_&>'::__l20::
                      <lambda_1>::operator()(local_60);
              if (!bVar8) goto LAB_1465e258c;
            }
            plVar11 = local_68;
            if ((int)local_68[6] < 1) {
              *(int *)(puVar12 + 0x28) = (int)local_68[6];
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465e24dc;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (pFVar13 == (FText *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465e250b;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            plVar7 = local_68;
            _Dst = (FText *)((longlong)&(pFVar13->TextData).Reference +
                            (longlong)*(int *)((longlong)plVar11 + 0x44));
            if (_Dst != param_3) {
              if ((*(uint *)(local_68 + 7) >> 0x1e & 1) == 0) {
                lVar6 = local_68[6];
                pcVar5 = *(code **)(*local_68 + 0xf0);
                *(undefined8 *)(puVar12 + -8) = 0x1465e2557;
                (*pcVar5)(plVar7,_Dst,param_3,(int)lVar6);
              }
              else {
                iVar4 = *(int *)((longlong)local_68 + 0x34);
                lVar6 = local_68[6];
                *(undefined8 *)(puVar12 + -8) = 0x1465e2542;
                memcpy(_Dst,param_3,(longlong)iVar4 * (longlong)(int)lVar6);
              }
            }
          }
          bVar8 = false;
        }
        plVar11 = (longlong *)local_68[9];
      } while (plVar11 != (longlong *)0x0);
      local_68 = (longlong *)0x0;
    }
  }
  pcVar5 = *(code **)(*(longlong *)local_res8 + 0x260);
  *(undefined8 *)(puVar12 + -8) = 0x1465e258c;
  (*pcVar5)(local_res8,local_res10,pFVar13);
LAB_1465e258c:
  *(undefined8 *)(puVar12 + -8) = 0x1465e2598;
  return;
}

// InvokeSetterFunction<__int64_const_&> @ 1465e25c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
FTrackInstancePropertyBindings::InvokeSetterFunction<__int64_const_&>
          (UObject *param_1,UFunction *param_2,long64 *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  bool bVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  long64 *plVar13;
  long64 *_Dst;
  UObject *local_res8;
  UFunction *local_res10;
  undefined1 auStack_98 [48];
  longlong *local_68;
  UObject **local_60;
  UFunction **local_58;
  longlong **local_50;
  ulonglong local_48;
  
  puVar12 = auStack_98;
  local_48 = __security_cookie.value ^ (ulonglong)&local_68;
  uVar1 = param_2->ParmsSize;
  local_res8 = param_1;
  local_res10 = param_2;
  if ((param_1 == (UObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InRuntimeObject && Setter",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\TrackInstancePropertyBindings.h"
                         ,0x1a9,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((local_res10->ReturnValueOffset != 0xffff) ||
     (plVar13 = param_3, local_res10->NumParms != '\0')) {
    plVar13 = (long64 *)0x0;
    puVar12 = auStack_98;
    if (uVar1 != 0) {
      uVar10 = (ulonglong)(uVar1 + 0xf) + 0xf;
      if (uVar10 <= uVar1 + 0xf) {
        uVar10 = 0xffffffffffffff0;
      }
      plVar13 = (long64 *)((longlong)&local_60 + -(uVar10 & 0xfffffffffffffff0));
      puVar12 = auStack_98 + -(uVar10 & 0xfffffffffffffff0);
    }
    plVar11 = (longlong *)local_res10->_padding_;
    bVar8 = true;
    local_68 = plVar11;
    if (plVar11 != (longlong *)0x0) {
      do {
        local_68 = plVar11;
        if (*(int *)((longlong)plVar11 + 0x34) * (int)plVar11[6] +
            *(int *)((longlong)plVar11 + 0x44) <= (int)(uint)uVar1) {
          if ((*(uint *)(plVar11 + 7) >> 9 & 1) == 0) {
            pcVar5 = *(code **)(*plVar11 + 0x150);
            if ((int)plVar11[6] < 1) {
              *(int *)(puVar12 + 0x28) = (int)plVar11[6];
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465e2785;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (plVar13 == (long64 *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465e27b0;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            iVar4 = *(int *)((longlong)plVar11 + 0x44);
            *(undefined8 *)(puVar12 + -8) = 0x1465e27c2;
            (*pcVar5)(plVar11,(longlong)iVar4 + (longlong)plVar13);
          }
          else {
            iVar4 = (int)plVar11[6];
            iVar2 = *(int *)((longlong)plVar11 + 0x34);
            if (iVar4 < 1) {
              *(int *)(puVar12 + 0x28) = iVar4;
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465e2707;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (plVar13 == (long64 *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465e2732;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            iVar3 = *(int *)((longlong)plVar11 + 0x44);
            *(undefined8 *)(puVar12 + -8) = 0x1465e2749;
            memset((void *)((longlong)iVar3 + (longlong)plVar13),0,(longlong)iVar2 * (longlong)iVar4
                  );
          }
          if ((((char)local_68[7] < '\0') && (((ulonglong)local_68[7] >> 10 & 1) == 0)) && (bVar8))
          {
            if (*(int *)((longlong)local_68 + 0x34) != 8) {
              local_60 = &local_res8;
              local_58 = &local_res10;
              local_50 = &local_68;
              *(undefined8 *)(puVar12 + -8) = 0x1465e280d;
              bVar8 = `FTrackInstancePropertyBindings::InvokeSetterFunction<__int64_const_&>'::__l20
                      ::<lambda_1>::operator()(&local_60);
              if (!bVar8) goto LAB_1465e28fc;
            }
            plVar11 = local_68;
            if ((int)local_68[6] < 1) {
              *(int *)(puVar12 + 0x28) = (int)local_68[6];
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1465e284c;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (plVar13 == (long64 *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1465e287b;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            plVar7 = local_68;
            _Dst = (long64 *)((longlong)*(int *)((longlong)plVar11 + 0x44) + (longlong)plVar13);
            if (_Dst != param_3) {
              if ((*(uint *)(local_68 + 7) >> 0x1e & 1) == 0) {
                lVar6 = local_68[6];
                pcVar5 = *(code **)(*local_68 + 0xf0);
                *(undefined8 *)(puVar12 + -8) = 0x1465e28c7;
                (*pcVar5)(plVar7,_Dst,param_3,(int)lVar6);
              }
              else {
                iVar4 = *(int *)((longlong)local_68 + 0x34);
                lVar6 = local_68[6];
                *(undefined8 *)(puVar12 + -8) = 0x1465e28b2;
                memcpy(_Dst,param_3,(longlong)iVar4 * (longlong)(int)lVar6);
              }
            }
          }
          bVar8 = false;
        }
        plVar11 = (longlong *)local_68[9];
      } while (plVar11 != (longlong *)0x0);
      local_68 = (longlong *)0x0;
    }
  }
  pcVar5 = *(code **)(*(longlong *)local_res8 + 0x260);
  *(undefined8 *)(puVar12 + -8) = 0x1465e28fc;
  (*pcVar5)(local_res8,local_res10,plVar13);
LAB_1465e28fc:
  *(undefined8 *)(puVar12 + -8) = 0x1465e2908;
  return;
}

// FTrackInstancePropertyBindings @ 146617080

FTrackInstancePropertyBindings * __thiscall
FTrackInstancePropertyBindings::FTrackInstancePropertyBindings
          (FTrackInstancePropertyBindings *this,FTrackInstancePropertyBindings *param_1)

{
  *(undefined8 *)&this->RuntimeObjectToFunctionMap = 0;
  *(undefined8 *)&(this->RuntimeObjectToFunctionMap).field_0x8 = 0;
  *(undefined8 *)&(this->RuntimeObjectToFunctionMap).field_0x20 = 0;
  *(undefined4 *)&(this->RuntimeObjectToFunctionMap).field_0x28 = 0;
  *(undefined4 *)&(this->RuntimeObjectToFunctionMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->RuntimeObjectToFunctionMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RuntimeObjectToFunctionMap).field_0x34 = 0;
  *(undefined8 *)&(this->RuntimeObjectToFunctionMap).field_0x40 = 0;
  *(undefined4 *)&(this->RuntimeObjectToFunctionMap).field_0x48 = 0;
  TSet<TTuple<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction>,TDefaultMapHashableKeyFuncs<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction>,TDefaultMapHashableKeyFuncs<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction,0>,FDefaultSetAllocator>
               *)this,(TSet<TTuple<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction>,TDefaultMapHashableKeyFuncs<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction,0>,FDefaultSetAllocator>
                       *)param_1);
  ::FString::FString(&this->PropertyPath,&param_1->PropertyPath);
  this->FunctionName = param_1->FunctionName;
  this->PropertyName = param_1->PropertyName;
  return this;
}

// operator() @ 1504f04f0

bool __thiscall
`FTrackInstancePropertyBindings::InvokeSetterFunction<signed_char_const_&>'::__l20::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FName local_res18;
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1354893239349412283>);
  if (bVar4) {
    local_res10 = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
    ::FName::ToString(&local_res10,&local_28);
    local_res18 = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(&local_res18,&local_38);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1354893239349412283>,
                       &`public:___cdecl_`private:_static_void___cdecl_FTrackInstancePropertyBindings::InvokeSetterFunction<signed_char_const&___ptr64>(UObject*___ptr64,UFunction*___ptr64,signed_char_const&___ptr64)'::`20'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504f05d9;
    }
  }
  bVar4 = false;
LAB_1504f05d9:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1504f0630

bool __thiscall
`FTrackInstancePropertyBindings::InvokeSetterFunction<unsigned_char_const_&>'::__l20::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FName local_res18;
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1354893239349412283>);
  if (bVar4) {
    local_res10 = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
    ::FName::ToString(&local_res10,&local_28);
    local_res18 = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(&local_res18,&local_38);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1354893239349412283>,
                       &`public:___cdecl_`private:_static_void___cdecl_FTrackInstancePropertyBindings::InvokeSetterFunction<unsigned_char_const&___ptr64>(UObject*___ptr64,UFunction*___ptr64,unsigned_char_const&___ptr64)'::`20'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504f0719;
    }
  }
  bVar4 = false;
LAB_1504f0719:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1504f0770

bool __thiscall
`FTrackInstancePropertyBindings::InvokeSetterFunction<short_const_&>'::__l20::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FName local_res18;
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1354893239349412283>);
  if (bVar4) {
    local_res10 = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
    ::FName::ToString(&local_res10,&local_28);
    local_res18 = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(&local_res18,&local_38);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1354893239349412283>,
                       &`public:___cdecl_`private:_static_void___cdecl_FTrackInstancePropertyBindings::InvokeSetterFunction<short_const&___ptr64>(UObject*___ptr64,UFunction*___ptr64,short_const&___ptr64)'::`20'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504f0859;
    }
  }
  bVar4 = false;
LAB_1504f0859:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1504f08b0

bool __thiscall
`FTrackInstancePropertyBindings::InvokeSetterFunction<UE::Math::TRotator<double>_const_&>'::__l20::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FName local_res18;
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1354893239349412283>);
  if (bVar4) {
    local_res10 = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
    ::FName::ToString(&local_res10,&local_28);
    local_res18 = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(&local_res18,&local_38);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1354893239349412283>,
                       &`public:___cdecl_`private:_static_void___cdecl_FTrackInstancePropertyBindings::InvokeSetterFunction<UE::Math::TRotator<double>_const&___ptr64>(UObject*___ptr64,UFunction*___ptr64,UE::Math::TRotator<double>_const&___ptr64)'::`20'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504f0999;
    }
  }
  bVar4 = false;
LAB_1504f0999:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1504f09f0

bool __thiscall
`FTrackInstancePropertyBindings::InvokeSetterFunction<UE::Math::TTransform<double>_const_&>'::__l20
::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FName local_res18;
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1354893239349412283>);
  if (bVar4) {
    local_res10 = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
    ::FName::ToString(&local_res10,&local_28);
    local_res18 = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(&local_res18,&local_38);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1354893239349412283>,
                       &`public:___cdecl_`private:_static_void___cdecl_FTrackInstancePropertyBindings::InvokeSetterFunction<UE::Math::TTransform<double>_const&___ptr64>(UObject*___ptr64,UFunction*___ptr64,UE::Math::TTransform<double>_const&___ptr64)'::`20'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504f0ad9;
    }
  }
  bVar4 = false;
LAB_1504f0ad9:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1504f0b30

bool __thiscall
`FTrackInstancePropertyBindings::InvokeSetterFunction<UE::Math::TVector2<float>_const_&>'::__l20::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FName local_res18;
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1354893239349412283>);
  if (bVar4) {
    local_res10 = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
    ::FName::ToString(&local_res10,&local_28);
    local_res18 = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(&local_res18,&local_38);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1354893239349412283>,
                       &`public:___cdecl_`private:_static_void___cdecl_FTrackInstancePropertyBindings::InvokeSetterFunction<UE::Math::TVector2<float>_const&___ptr64>(UObject*___ptr64,UFunction*___ptr64,UE::Math::TVector2<float>_const&___ptr64)'::`20'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504f0c19;
    }
  }
  bVar4 = false;
LAB_1504f0c19:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1504f0c70

bool __thiscall
`FTrackInstancePropertyBindings::InvokeSetterFunction<UE::Math::TVector2<double>_const_&>'::__l20::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FName local_res18;
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1354893239349412283>);
  if (bVar4) {
    local_res10 = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
    ::FName::ToString(&local_res10,&local_28);
    local_res18 = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(&local_res18,&local_38);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1354893239349412283>,
                       &`public:___cdecl_`private:_static_void___cdecl_FTrackInstancePropertyBindings::InvokeSetterFunction<UE::Math::TVector2<double>_const&___ptr64>(UObject*___ptr64,UFunction*___ptr64,UE::Math::TVector2<double>_const&___ptr64)'::`20'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504f0d59;
    }
  }
  bVar4 = false;
LAB_1504f0d59:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1504f0db0

bool __thiscall
`FTrackInstancePropertyBindings::InvokeSetterFunction<UE::Math::TVector4<float>_const_&>'::__l20::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FName local_res18;
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1354893239349412283>);
  if (bVar4) {
    local_res10 = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
    ::FName::ToString(&local_res10,&local_28);
    local_res18 = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(&local_res18,&local_38);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1354893239349412283>,
                       &`public:___cdecl_`private:_static_void___cdecl_FTrackInstancePropertyBindings::InvokeSetterFunction<UE::Math::TVector4<float>_const&___ptr64>(UObject*___ptr64,UFunction*___ptr64,UE::Math::TVector4<float>_const&___ptr64)'::`20'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504f0e99;
    }
  }
  bVar4 = false;
LAB_1504f0e99:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1504f0ef0

bool __thiscall
`FTrackInstancePropertyBindings::InvokeSetterFunction<UE::Math::TVector4<double>_const_&>'::__l20::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FName local_res18;
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1354893239349412283>);
  if (bVar4) {
    local_res10 = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
    ::FName::ToString(&local_res10,&local_28);
    local_res18 = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(&local_res18,&local_38);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1354893239349412283>,
                       &`public:___cdecl_`private:_static_void___cdecl_FTrackInstancePropertyBindings::InvokeSetterFunction<UE::Math::TVector4<double>_const&___ptr64>(UObject*___ptr64,UFunction*___ptr64,UE::Math::TVector4<double>_const&___ptr64)'::`20'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504f0fd9;
    }
  }
  bVar4 = false;
LAB_1504f0fd9:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1504f1030

bool __thiscall
`FTrackInstancePropertyBindings::InvokeSetterFunction<UE::Math::TVector<float>_const_&>'::__l20::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FName local_res18;
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1354893239349412283>);
  if (bVar4) {
    local_res10 = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
    ::FName::ToString(&local_res10,&local_28);
    local_res18 = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(&local_res18,&local_38);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1354893239349412283>,
                       &`public:___cdecl_`private:_static_void___cdecl_FTrackInstancePropertyBindings::InvokeSetterFunction<UE::Math::TVector<float>_const&___ptr64>(UObject*___ptr64,UFunction*___ptr64,UE::Math::TVector<float>_const&___ptr64)'::`20'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504f1119;
    }
  }
  bVar4 = false;
LAB_1504f1119:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1504f1170

bool __thiscall
`FTrackInstancePropertyBindings::InvokeSetterFunction<UE::Math::TVector<double>_const_&>'::__l20::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FName local_res18;
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1354893239349412283>);
  if (bVar4) {
    local_res10 = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
    ::FName::ToString(&local_res10,&local_28);
    local_res18 = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(&local_res18,&local_38);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1354893239349412283>,
                       &`public:___cdecl_`private:_static_void___cdecl_FTrackInstancePropertyBindings::InvokeSetterFunction<UE::Math::TVector<double>_const&___ptr64>(UObject*___ptr64,UFunction*___ptr64,UE::Math::TVector<double>_const&___ptr64)'::`20'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504f1259;
    }
  }
  bVar4 = false;
LAB_1504f1259:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1504f12b0

bool __thiscall
`FTrackInstancePropertyBindings::InvokeSetterFunction<FColor_const_&>'::__l20::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FName local_res18;
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1354893239349412283>);
  if (bVar4) {
    local_res10 = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
    ::FName::ToString(&local_res10,&local_28);
    local_res18 = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(&local_res18,&local_38);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1354893239349412283>,
                       &`public:___cdecl_`private:_static_void___cdecl_FTrackInstancePropertyBindings::InvokeSetterFunction<FColor_const&___ptr64>(UObject*___ptr64,UFunction*___ptr64,FColor_const&___ptr64)'::`20'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504f1399;
    }
  }
  bVar4 = false;
LAB_1504f1399:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1504f13f0

bool __thiscall
`FTrackInstancePropertyBindings::InvokeSetterFunction<FEulerTransform_const_&>'::__l20::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FName local_res18;
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1354893239349412283>);
  if (bVar4) {
    local_res10 = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
    ::FName::ToString(&local_res10,&local_28);
    local_res18 = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(&local_res18,&local_38);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1354893239349412283>,
                       &`public:___cdecl_`private:_static_void___cdecl_FTrackInstancePropertyBindings::InvokeSetterFunction<FEulerTransform_const&___ptr64>(UObject*___ptr64,UFunction*___ptr64,FEulerTransform_const&___ptr64)'::`20'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504f14d9;
    }
  }
  bVar4 = false;
LAB_1504f14d9:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1504f1530

bool __thiscall
`FTrackInstancePropertyBindings::
InvokeSetterFunction<UE::MovieScene::FIntermediate3DTransform_const_&>'::__l20::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FName local_res18;
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1354893239349412283>);
  if (bVar4) {
    local_res10 = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
    ::FName::ToString(&local_res10,&local_28);
    local_res18 = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(&local_res18,&local_38);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1354893239349412283>,
                       &`public:___cdecl_`private:_static_void___cdecl_FTrackInstancePropertyBindings::InvokeSetterFunction<UE::MovieScene::FIntermediate3DTransform_const&___ptr64>(UObject*___ptr64,UFunction*___ptr64,UE::MovieScene::FIntermediate3DTransform_const&___ptr64)'::`20'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504f1619;
    }
  }
  bVar4 = false;
LAB_1504f1619:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1504f1670

bool __thiscall
`FTrackInstancePropertyBindings::InvokeSetterFunction<FLinearColor_const_&>'::__l20::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FName local_res18;
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1354893239349412283>);
  if (bVar4) {
    local_res10 = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
    ::FName::ToString(&local_res10,&local_28);
    local_res18 = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(&local_res18,&local_38);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1354893239349412283>,
                       &`public:___cdecl_`private:_static_void___cdecl_FTrackInstancePropertyBindings::InvokeSetterFunction<FLinearColor_const&___ptr64>(UObject*___ptr64,UFunction*___ptr64,FLinearColor_const&___ptr64)'::`20'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504f1759;
    }
  }
  bVar4 = false;
LAB_1504f1759:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1504f17b0

bool __thiscall
`FTrackInstancePropertyBindings::InvokeSetterFunction<FSlateColor_const_&>'::__l20::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FName local_res18;
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1354893239349412283>);
  if (bVar4) {
    local_res10 = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
    ::FName::ToString(&local_res10,&local_28);
    local_res18 = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(&local_res18,&local_38);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1354893239349412283>,
                       &`public:___cdecl_`private:_static_void___cdecl_FTrackInstancePropertyBindings::InvokeSetterFunction<FSlateColor_const&___ptr64>(UObject*___ptr64,UFunction*___ptr64,FSlateColor_const&___ptr64)'::`20'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504f1899;
    }
  }
  bVar4 = false;
LAB_1504f1899:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1504f18f0

bool __thiscall
`FTrackInstancePropertyBindings::InvokeSetterFunction<FString_const_&>'::__l20::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FName local_res18;
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1354893239349412283>);
  if (bVar4) {
    local_res10 = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
    ::FName::ToString(&local_res10,&local_28);
    local_res18 = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(&local_res18,&local_38);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1354893239349412283>,
                       &`public:___cdecl_`private:_static_void___cdecl_FTrackInstancePropertyBindings::InvokeSetterFunction<FString_const&___ptr64>(UObject*___ptr64,UFunction*___ptr64,FString_const&___ptr64)'::`20'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504f19d9;
    }
  }
  bVar4 = false;
LAB_1504f19d9:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1504f1a30

bool __thiscall
`FTrackInstancePropertyBindings::InvokeSetterFunction<FText_const_&>'::__l20::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FName local_res18;
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1354893239349412283>);
  if (bVar4) {
    local_res10 = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
    ::FName::ToString(&local_res10,&local_28);
    local_res18 = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(&local_res18,&local_38);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1354893239349412283>,
                       &`public:___cdecl_`private:_static_void___cdecl_FTrackInstancePropertyBindings::InvokeSetterFunction<FText_const&___ptr64>(UObject*___ptr64,UFunction*___ptr64,FText_const&___ptr64)'::`20'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504f1b19;
    }
  }
  bVar4 = false;
LAB_1504f1b19:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1504f1b70

bool __thiscall
`FTrackInstancePropertyBindings::InvokeSetterFunction<__int64_const_&>'::__l20::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FName local_res18;
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1354893239349412283>);
  if (bVar4) {
    local_res10 = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
    ::FName::ToString(&local_res10,&local_28);
    local_res18 = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(&local_res18,&local_38);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1354893239349412283>,
                       &`public:___cdecl_`private:_static_void___cdecl_FTrackInstancePropertyBindings::InvokeSetterFunction<__int64_const&___ptr64>(UObject*___ptr64,UFunction*___ptr64,__int64_const&___ptr64)'::`20'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504f1c59;
    }
  }
  bVar4 = false;
LAB_1504f1c59:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

