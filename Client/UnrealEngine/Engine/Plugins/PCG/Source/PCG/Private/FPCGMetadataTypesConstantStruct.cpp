// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// FPCGMetadataTypesConstantStruct @ 149acfad0

FPCGMetadataTypesConstantStruct * __thiscall
FPCGMetadataTypesConstantStruct::FPCGMetadataTypesConstantStruct
          (FPCGMetadataTypesConstantStruct *this)

{
  undefined8 uVar1;
  double dVar2;
  
  this->Type = Double;
  this->StringMode_DEPRECATED = String;
  this->FloatValue = 0.0;
  this->Int32Value = 0;
  this->DoubleValue = 0.0;
  this->IntValue = 0;
  (this->Vector2Value).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->VectorValue).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->VectorValue).field0_0x0._s_0.Y = (double)uVar1;
  (this->VectorValue).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Vector4Value).field0_0x0._s_0.X = 0.0;
  (this->Vector4Value).field0_0x0._s_0.Y = 0.0;
  (this->Vector4Value).field0_0x0._s_0.Z = 0.0;
  (this->Vector4Value).field0_0x0._s_0.W = 0.0;
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  (this->QuatValue).X = UE::Math::TQuat<double>::Identity.X;
  (this->QuatValue).Y = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  (this->QuatValue).Z = UE::Math::TQuat<double>::Identity.Z;
  (this->QuatValue).W = dVar2;
  *&(this->TransformValue).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->TransformValue).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->TransformValue).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->TransformValue).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->TransformValue).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->TransformValue).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  ::FString::FString(&this->StringValue,"");
  this->BoolValue = false;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->RotatorValue).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->RotatorValue).Yaw = dVar2;
  (this->RotatorValue).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  (this->NameValue).ComparisonIndex = 0;
  (this->NameValue).Number = 0;
  *(undefined8 *)&this->SoftClassPathValue = 0;
  *(undefined8 *)&(this->SoftClassPathValue).field_0x8 = 0;
  *(undefined8 *)&(this->SoftClassPathValue).field_0x10 = 0;
  *(undefined8 *)&(this->SoftClassPathValue).field_0x18 = 0;
  (this->SoftObjectPathValue).AssetPath.PackageName.ComparisonIndex = 0;
  (this->SoftObjectPathValue).AssetPath.PackageName.Number = 0;
  (this->SoftObjectPathValue).AssetPath.AssetName.ComparisonIndex = 0;
  (this->SoftObjectPathValue).AssetPath.AssetName.Number = 0;
  (this->SoftObjectPathValue).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SoftObjectPathValue).SubPathString.Data.ArrayNum = 0;
  (this->SoftObjectPathValue).SubPathString.Data.ArrayMax = 0;
  this->bAllowsTypeChange = true;
  return this;
}

// operator= @ 149ad3d30

FPCGMetadataTypesConstantStruct * __thiscall
FPCGMetadataTypesConstantStruct::operator=
          (FPCGMetadataTypesConstantStruct *this,FPCGMetadataTypesConstantStruct *param_1)

{
  double dVar1;
  
  this->Type = param_1->Type;
  this->StringMode_DEPRECATED = param_1->StringMode_DEPRECATED;
  this->FloatValue = param_1->FloatValue;
  this->Int32Value = param_1->Int32Value;
  this->DoubleValue = param_1->DoubleValue;
  this->IntValue = param_1->IntValue;
  dVar1 = (param_1->Vector2Value).field0_0x0._s_0.Y;
  (this->Vector2Value).field0_0x0._s_0.X = (param_1->Vector2Value).field0_0x0._s_0.X;
  (this->Vector2Value).field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->VectorValue).field0_0x0._s_0.Y;
  (this->VectorValue).field0_0x0._s_0.X = (param_1->VectorValue).field0_0x0._s_0.X;
  (this->VectorValue).field0_0x0._s_0.Y = dVar1;
  (this->VectorValue).field0_0x0._s_0.Z = (param_1->VectorValue).field0_0x0._s_0.Z;
  dVar1 = (param_1->Vector4Value).field0_0x0._s_0.Y;
  (this->Vector4Value).field0_0x0._s_0.X = (param_1->Vector4Value).field0_0x0._s_0.X;
  (this->Vector4Value).field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->Vector4Value).field0_0x0._s_0.W;
  (this->Vector4Value).field0_0x0._s_0.Z = (param_1->Vector4Value).field0_0x0._s_0.Z;
  (this->Vector4Value).field0_0x0._s_0.W = dVar1;
  dVar1 = (param_1->QuatValue).Y;
  (this->QuatValue).X = (param_1->QuatValue).X;
  (this->QuatValue).Y = dVar1;
  dVar1 = (param_1->QuatValue).W;
  (this->QuatValue).Z = (param_1->QuatValue).Z;
  (this->QuatValue).W = dVar1;
  dVar1 = (param_1->TransformValue).Rotation.XY.m128d_f64[1];
  (this->TransformValue).Rotation.XY.m128d_f64[0] =
       (param_1->TransformValue).Rotation.XY.m128d_f64[0];
  (this->TransformValue).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->TransformValue).Rotation.ZW.m128d_f64[1];
  (this->TransformValue).Rotation.ZW.m128d_f64[0] =
       (param_1->TransformValue).Rotation.ZW.m128d_f64[0];
  (this->TransformValue).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->TransformValue).Translation.XY.m128d_f64[1];
  (this->TransformValue).Translation.XY.m128d_f64[0] =
       (param_1->TransformValue).Translation.XY.m128d_f64[0];
  (this->TransformValue).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->TransformValue).Translation.ZW.m128d_f64[1];
  (this->TransformValue).Translation.ZW.m128d_f64[0] =
       (param_1->TransformValue).Translation.ZW.m128d_f64[0];
  (this->TransformValue).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->TransformValue).Scale3D.XY.m128d_f64[1];
  (this->TransformValue).Scale3D.XY.m128d_f64[0] = (param_1->TransformValue).Scale3D.XY.m128d_f64[0]
  ;
  (this->TransformValue).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->TransformValue).Scale3D.ZW.m128d_f64[1];
  (this->TransformValue).Scale3D.ZW.m128d_f64[0] = (param_1->TransformValue).Scale3D.ZW.m128d_f64[0]
  ;
  (this->TransformValue).Scale3D.ZW.m128d_f64[1] = dVar1;
  ::FString::operator=(&this->StringValue,&param_1->StringValue);
  this->BoolValue = param_1->BoolValue;
  dVar1 = (param_1->RotatorValue).Yaw;
  (this->RotatorValue).Pitch = (param_1->RotatorValue).Pitch;
  (this->RotatorValue).Yaw = dVar1;
  (this->RotatorValue).Roll = (param_1->RotatorValue).Roll;
  this->NameValue = param_1->NameValue;
  FSoftObjectPath::operator=
            ((FSoftObjectPath *)&this->SoftClassPathValue,
             (FSoftObjectPath *)&param_1->SoftClassPathValue);
  FSoftObjectPath::operator=(&this->SoftObjectPathValue,&param_1->SoftObjectPathValue);
  this->bAllowsTypeChange = param_1->bAllowsTypeChange;
  return this;
}

// StaticStruct @ 149d73770

UScriptStruct * __cdecl FPCGMetadataTypesConstantStruct::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGMetadataTypesConstantStruct.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGMetadataTypesConstantStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct,(UObject *)pUVar1
                         ,L"PCGMetadataTypesConstantStruct");
  }
  return Z_Registration_Info_UScriptStruct_FPCGMetadataTypesConstantStruct.OuterSingleton;
}

// ToString @ 149ec2230

FString * __thiscall
FPCGMetadataTypesConstantStruct::ToString
          (FPCGMetadataTypesConstantStruct *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  FSoftObjectPath *this_00;
  wchar_t *pwVar2;
  FString local_18;
  
  switch(this->Type) {
  case Float:
    ::FString::PrintfImpl(__return_storage_ptr__,L"%g");
    return __return_storage_ptr__;
  case Double:
    ::FString::PrintfImpl(__return_storage_ptr__,L"%g");
    return __return_storage_ptr__;
  case Integer32:
    ::FString::PrintfImpl(__return_storage_ptr__,L"%d");
    return __return_storage_ptr__;
  case Integer64:
    ::FString::PrintfImpl(__return_storage_ptr__,L"%lld");
    return __return_storage_ptr__;
  case Vector2:
    ::FString::PrintfImpl(__return_storage_ptr__,L"V(%g, %g)");
    return __return_storage_ptr__;
  case Vector:
    ::FString::PrintfImpl(__return_storage_ptr__,L"V(%g, %g, %g)");
    return __return_storage_ptr__;
  case Vector4:
    ::FString::PrintfImpl(__return_storage_ptr__,L"V(%g, %g, %g, %g)");
    return __return_storage_ptr__;
  case Quaternion:
    ::FString::PrintfImpl(__return_storage_ptr__,L"Q(%g, %g, %g, %g)");
    return __return_storage_ptr__;
  case Transform:
    ::FString::PrintfImpl(__return_storage_ptr__,L"Transform");
    return __return_storage_ptr__;
  case String:
    if ((this->StringValue).Data.ArrayNum == 0) {
      ::FString::PrintfImpl(__return_storage_ptr__,L"\"%s\"");
      return __return_storage_ptr__;
    }
    ::FString::PrintfImpl(__return_storage_ptr__,L"\"%s\"");
    return __return_storage_ptr__;
  case Boolean:
    ::FString::PrintfImpl(__return_storage_ptr__,L"%s");
    return __return_storage_ptr__;
  case Rotator:
    ::FString::PrintfImpl(__return_storage_ptr__,L"R(%g, %g, %g)");
    return __return_storage_ptr__;
  case Name:
    pFVar1 = ::FName::ToString(&this->NameValue,&local_18);
    if ((pFVar1->Data).ArrayNum == 0) {
      pwVar2 = L"N(\"%s\")";
    }
    else {
      pwVar2 = L"N(\"%s\")";
    }
    goto LAB_149ec24e5;
  case SoftObjectPath:
    this_00 = &this->SoftObjectPathValue;
    break;
  case SoftClassPath:
    this_00 = (FSoftObjectPath *)&this->SoftClassPathValue;
    break;
  default:
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  FSoftObjectPath::ToString(this_00,&local_18);
  pwVar2 = L"%s";
LAB_149ec24e5:
  ::FString::PrintfImpl(__return_storage_ptr__,pwVar2);
  if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return __return_storage_ptr__;
  }
  FMemory::Free(local_18.Data.AllocatorInstance.Data);
  return __return_storage_ptr__;
}

// TypeToString @ 149ec2fa0

FString * __thiscall
FPCGMetadataTypesConstantStruct::TypeToString
          (FPCGMetadataTypesConstantStruct *this,FString *__return_storage_ptr__)

{
  UEnum *this_00;
  FString *pFVar1;
  bool bVar2;
  FString local_28;
  FString local_18;
  
  this_00 = StaticEnum<enum_EPCGMetadataTypes>();
  bVar2 = this_00 == (UEnum *)0x0;
  if (bVar2) {
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar1 = &local_28;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
  }
  else {
    pFVar1 = UEnum::GetNameStringByValue(this_00,&local_18,(ulonglong)this->Type);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar1->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar1->Data).ArrayMax;
  (pFVar1->Data).ArrayNum = 0;
  (pFVar1->Data).ArrayMax = 0;
  if (bVar2) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

