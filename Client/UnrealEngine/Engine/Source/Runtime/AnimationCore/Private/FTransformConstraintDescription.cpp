// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationCore
// Functions: 8

// StaticStruct @ 142379c00

UScriptStruct * __cdecl FTransformConstraintDescription::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTransformConstraintDescription.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimationCore();
    Z_Registration_Info_UScriptStruct_FTransformConstraintDescription.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTransformConstraintDescription,(UObject *)pUVar1
                         ,L"TransformConstraintDescription");
  }
  return Z_Registration_Info_UScriptStruct_FTransformConstraintDescription.OuterSingleton;
}

// AccumulateConstraintTransform @ 142379c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FTransformConstraintDescription::AccumulateConstraintTransform
          (FTransformConstraintDescription *this,TTransform<double> *param_1,
          TTransform<double> *param_2,TTransform<double> *param_3,float param_4,
          FMultiTransformBlendHelper *param_5)

{
  char cVar1;
  TRotator<double> *pTVar2;
  TQuat<double> *pTVar3;
  undefined1 auStack_108 [32];
  TVector<double>_u_0 local_e8;
  TQuat<double> local_c8;
  TQuat<double> local_a8;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  UE::Math::TTransform<double>::GetRelativeTransform(param_1,&local_88,param_3);
  cVar1 = (**(code **)(this->_padding_ + 0x28))(this);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(this->_padding_ + 0x18))(this);
    if (cVar1 != '\0') {
      local_e8._s_0.X = local_88.Translation.XY.m128d_f64[0];
      local_e8._s_0.Y = local_88.Translation.XY.m128d_f64[1];
      local_e8._s_0.Z = local_88.Translation.ZW.m128d_f64[0];
      if ((char)this->_padding_ == '\0') {
        local_e8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      }
      if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
        local_e8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      }
      if (*(char *)((longlong)&this->_padding_ + 2) == '\0') {
        local_e8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      }
      FMultiTransformBlendHelper::AddTranslation(param_5,(TVector<double> *)&local_e8._s_0,param_4);
    }
    cVar1 = (**(code **)(this->_padding_ + 0x10))(this);
    if (cVar1 != '\0') {
      local_c8.X = local_88.Rotation.XY.m128d_f64[0];
      local_c8.Y = local_88.Rotation.XY.m128d_f64[1];
      local_c8.Z = local_88.Rotation.ZW.m128d_f64[0];
      local_c8.W = local_88.Rotation.ZW.m128d_f64[1];
      UE::Math::TQuat<double>::Rotator(&local_c8,(TRotator<double> *)&local_e8._s_0);
      pTVar2 = UE::Math::TQuat<double>::Rotator
                         (&UE::Math::TQuat<double>::Identity,(TRotator<double> *)&local_a8);
      if ((char)this->_padding_ == '\0') {
        local_e8._s_0.Z = pTVar2->Roll;
      }
      if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
        local_e8._s_0.X = pTVar2->Pitch;
      }
      if (*(char *)((longlong)&this->_padding_ + 2) == '\0') {
        local_e8._s_0.Y = pTVar2->Yaw;
      }
      pTVar3 = UE::Math::TRotator<double>::Quaternion((TRotator<double> *)&local_e8._s_0,&local_a8);
      local_c8.X = pTVar3->X;
      local_c8.Y = pTVar3->Y;
      local_c8.Z = pTVar3->Z;
      local_c8.W = pTVar3->W;
      FMultiTransformBlendHelper::AddRotation(param_5,&local_c8,param_4);
    }
    cVar1 = (**(code **)(this->_padding_ + 0x20))(this);
    if (cVar1 != '\0') {
      local_e8._s_0.X = local_88.Scale3D.XY.m128d_f64[0];
      local_e8._s_0.Y = local_88.Scale3D.XY.m128d_f64[1];
      local_e8._s_0.Z = local_88.Scale3D.ZW.m128d_f64[0];
      if ((char)this->_padding_ == '\0') {
        local_e8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      }
      if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
        local_e8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      }
      if (*(char *)((longlong)&this->_padding_ + 2) == '\0') {
        local_e8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      }
      FMultiTransformBlendHelper::AddScale(param_5,(TVector<double> *)&local_e8._s_0,param_4);
    }
  }
  else {
    FMultiTransformBlendHelper::AddParent(param_5,&local_88,param_4);
  }
  return;
}

// DoesAffectRotation @ 142379e50

bool __thiscall
FTransformConstraintDescription::DoesAffectRotation(FTransformConstraintDescription *this)

{
  return this->TransformType == Rotation;
}

// DoesAffectTranslation @ 142379e60

bool __thiscall
FTransformConstraintDescription::DoesAffectTranslation(FTransformConstraintDescription *this)

{
  return this->TransformType == Translation;
}

// DoesAffectScale @ 142379e70

bool __thiscall
FTransformConstraintDescription::DoesAffectScale(FTransformConstraintDescription *this)

{
  return this->TransformType == Scale;
}

// DoesAffectTransform @ 142379e80

bool __thiscall
FTransformConstraintDescription::DoesAffectTransform(FTransformConstraintDescription *this)

{
  return this->TransformType == Parent;
}

// GetDisplayString @ 142379e90

FString * __thiscall
FTransformConstraintDescription::GetDisplayString
          (FTransformConstraintDescription *this,FString *__return_storage_ptr__)

{
  ETransformConstraintType EVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  
  EVar1 = this->TransformType;
  if (EVar1 == Translation) {
    ::FString::FString(__return_storage_ptr__,L"Translation");
    return __return_storage_ptr__;
  }
  if (EVar1 == Rotation) {
    ::FString::FString(__return_storage_ptr__,L"Rotation");
    return __return_storage_ptr__;
  }
  if (EVar1 == Scale) {
    ::FString::FString(__return_storage_ptr__,L"Scale");
    return __return_storage_ptr__;
  }
  if (EVar1 != Parent) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2918155107667280322>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimationCore\\Public\\Constraint.h"
                       ,0x1c2,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
    ::FString::FString(__return_storage_ptr__,L"None");
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,L"Parent");
  return __return_storage_ptr__;
}

// Serialize @ 142379f60

void __thiscall
FTransformConstraintDescription::Serialize(FTransformConstraintDescription *this,FArchive *param_1)

{
  ETransformConstraintType *pEVar1;
  
  ::operator<<(param_1,(bool *)&this->_padding_);
  ::operator<<(param_1,(bool *)((longlong)&this->_padding_ + 1));
  ::operator<<(param_1,(bool *)((longlong)&this->_padding_ + 2));
  pEVar1 = (ETransformConstraintType *)**(undefined8 **)&param_1->field_0x8;
  if (pEVar1 + 1 <= (ETransformConstraintType *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    this->TransformType = *pEVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000142379fe6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->TransformType,1);
  return;
}

