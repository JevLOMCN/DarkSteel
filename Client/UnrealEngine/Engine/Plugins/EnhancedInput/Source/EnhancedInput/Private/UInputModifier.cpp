// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 12

// StaticClass @ 14a6b5820

UClass * __cdecl UInputModifier::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputModifier.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"InputModifier",
               &Z_Registration_Info_UClass_UInputModifier.InnerSingleton,
               StaticRegisterNativesUInputModifier,0x28,8,
               CLASS_Intrinsic|CLASS_DefaultConfig|CLASS_Abstract,CASTCLASS_None,L"Input",
               InternalConstructor<UInputModifier>,InternalVTableHelperCtorCaller<UInputModifier>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputModifier.InnerSingleton;
}

// UInputModifier @ 14a6ccb10

UInputModifier * __thiscall
UInputModifier::UInputModifier(UInputModifier *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UInputModifier__6B_;
  return this;
}

// UInputModifier @ 14a6ccb40

UInputModifier * __thiscall
UInputModifier::UInputModifier(UInputModifier *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UInputModifier__6B_;
  return this;
}

// ~UInputModifier @ 14a6cf8e0

void __thiscall UInputModifier::~UInputModifier(UInputModifier *this)

{
  *(undefined ***)this = &___7UInputModifier__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14a6e1190

UClass * __cdecl UInputModifier::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputModifier.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"InputModifier",
               &Z_Registration_Info_UClass_UInputModifier.InnerSingleton,
               StaticRegisterNativesUInputModifier,0x28,8,
               CLASS_Intrinsic|CLASS_DefaultConfig|CLASS_Abstract,CASTCLASS_None,L"Input",
               InternalConstructor<UInputModifier>,InternalVTableHelperCtorCaller<UInputModifier>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputModifier.InnerSingleton;
}

// GetVisualizationColor @ 14a6e2d90

FLinearColor * __thiscall
UInputModifier::GetVisualizationColor
          (UInputModifier *this,FLinearColor *__return_storage_ptr__,FInputActionValue *param_1,
          FInputActionValue *param_2)

{
  UFunction *this_00;
  UClass *pUVar1;
  double local_98;
  double dStack_90;
  double local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  double local_58;
  double dStack_50;
  double local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UInputModifier_GetVisualizationColor);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_58 = (param_1->Value).field0_0x0._s_0.X;
    dStack_50 = (param_1->Value).field0_0x0._s_0.Y;
    local_18 = 0;
    uStack_10 = 0;
    local_48 = (param_1->Value).field0_0x0._s_0.Z;
    uStack_40 = *(undefined8 *)&param_1->ValueType;
    local_38 = *(undefined4 *)&(param_2->Value).field0_0x0;
    uStack_34 = *(undefined4 *)((longlong)&(param_2->Value).field0_0x0 + 4);
    uStack_30 = *(undefined4 *)((longlong)&(param_2->Value).field0_0x0 + 8);
    uStack_2c = *(undefined4 *)((longlong)&(param_2->Value).field0_0x0 + 0xc);
    local_28 = *(undefined4 *)((longlong)&(param_2->Value).field0_0x0 + 0x10);
    uStack_24 = *(undefined4 *)((longlong)&(param_2->Value).field0_0x0 + 0x14);
    uStack_20 = *(undefined4 *)&param_2->ValueType;
    uStack_1c = *(undefined4 *)&param_2->field_0x1c;
    (**(code **)(*(longlong *)this + 0x260))(this,this_00,&local_58);
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = local_18;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uStack_10;
  }
  else {
    local_98 = (param_2->Value).field0_0x0._s_0.X;
    dStack_90 = (param_2->Value).field0_0x0._s_0.Y;
    local_88 = (param_2->Value).field0_0x0._s_0.Z;
    uStack_80 = *(undefined8 *)&param_2->ValueType;
    local_78 = *(undefined4 *)&(param_1->Value).field0_0x0;
    uStack_74 = *(undefined4 *)((longlong)&(param_1->Value).field0_0x0 + 4);
    uStack_70 = *(undefined4 *)((longlong)&(param_1->Value).field0_0x0 + 8);
    uStack_6c = *(undefined4 *)((longlong)&(param_1->Value).field0_0x0 + 0xc);
    local_68 = *(undefined4 *)((longlong)&(param_1->Value).field0_0x0 + 0x10);
    uStack_64 = *(undefined4 *)((longlong)&(param_1->Value).field0_0x0 + 0x14);
    uStack_60 = *(undefined4 *)&param_1->ValueType;
    uStack_5c = *(undefined4 *)&param_1->field_0x1c;
    (**(code **)(*(longlong *)this + 0x2b8))(this,__return_storage_ptr__,&local_78,&local_98);
  }
  return __return_storage_ptr__;
}

// GetVisualizationColor_Implementation @ 14a6e2e90

FLinearColor * __thiscall
UInputModifier::GetVisualizationColor_Implementation
          (UInputModifier *this,FLinearColor *__return_storage_ptr__,FInputActionValue *param_1,
          FInputActionValue *param_2)

{
  double dVar1;
  double dVar2;
  EInputActionValueType EVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  FLinearColor *pFVar7;
  float fVar8;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar9;
  
  EVar3 = param_2->ValueType;
  if ((EVar3 == Boolean) || (EVar3 == Axis1D)) {
    dVar9 = (param_2->Value).field0_0x0._s_0.X;
  }
  else if (EVar3 == Axis2D) {
    dVar9 = (param_2->Value).field0_0x0._s_0.X;
    dVar1 = (param_2->Value).field0_0x0._s_0.Y;
    auVar12._0_8_ = dVar9 * dVar9;
    auVar12._8_8_ = 0;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = dVar1 * dVar1 + auVar12._0_8_;
    auVar11 = sqrtpd(auVar12,auVar11);
    dVar9 = auVar11._0_8_;
  }
  else {
    if (EVar3 != Axis3D) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\EnhancedInput\\Source\\EnhancedInput\\Public\\InputActionValue.h"
                         ,0xac,L"Unsupported value type for input action value!");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FLinearColor *)(*pcVar4)();
        return pFVar7;
      }
      fVar8 = 0.0;
      goto LAB_14a6e2f31;
    }
    dVar9 = (param_2->Value).field0_0x0._s_0.X;
    dVar1 = (param_2->Value).field0_0x0._s_0.Y;
    dVar2 = (param_2->Value).field0_0x0._s_0.Z;
    auVar10._0_8_ = dVar9 * dVar9;
    auVar10._8_8_ = 0;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = dVar1 * dVar1 + auVar10._0_8_ + dVar2 * dVar2;
    auVar11 = sqrtpd(auVar10,auVar5);
    dVar9 = auVar11._0_8_;
  }
  fVar8 = (float)dVar9;
LAB_14a6e2f31:
  if (__real_3f800000 <= fVar8) {
    fVar8 = __real_3f800000;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.A = 1.0;
  (__return_storage_ptr__->field0_0x0)._s_0.R = fVar8;
  (__return_storage_ptr__->field0_0x0)._s_0.G = fVar8;
  (__return_storage_ptr__->field0_0x0)._s_0.B = fVar8;
  return __return_storage_ptr__;
}

// ModifyRaw @ 14a6e6fb0

FInputActionValue * __thiscall
UInputModifier::ModifyRaw
          (UInputModifier *this,FInputActionValue *__return_storage_ptr__,
          UEnhancedPlayerInput *param_1,FInputActionValue *param_2,float param_3)

{
  UFunction *this_00;
  UClass *pUVar1;
  double local_78;
  double dStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  UEnhancedPlayerInput *local_58;
  double local_50;
  double dStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  float local_30;
  double local_28;
  double dStack_20;
  double local_18;
  undefined1 uStack_10;
  undefined7 uStack_f;
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UInputModifier_ModifyRaw);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  local_68 = *(undefined4 *)((longlong)&(param_2->Value).field0_0x0 + 0x10);
  uStack_64 = *(undefined4 *)((longlong)&(param_2->Value).field0_0x0 + 0x14);
  uStack_60 = *(undefined4 *)&param_2->ValueType;
  uStack_5c = *(undefined4 *)&param_2->field_0x1c;
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    uStack_10 = 0;
    local_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_50 = (param_2->Value).field0_0x0._s_0.X;
    dStack_48 = (param_2->Value).field0_0x0._s_0.Y;
    local_30 = param_3;
    local_58 = param_1;
    local_40 = local_68;
    uStack_3c = uStack_64;
    uStack_38 = uStack_60;
    uStack_34 = uStack_5c;
    (**(code **)(*(longlong *)this + 0x260))(this,this_00,&local_58);
    (__return_storage_ptr__->Value).field0_0x0._s_0.X = local_28;
    (__return_storage_ptr__->Value).field0_0x0._s_0.Y = dStack_20;
    (__return_storage_ptr__->Value).field0_0x0._s_0.Z = local_18;
    *(ulonglong *)&__return_storage_ptr__->ValueType = CONCAT71(uStack_f,uStack_10);
  }
  else {
    local_78 = (param_2->Value).field0_0x0._s_0.X;
    dStack_70 = (param_2->Value).field0_0x0._s_0.Y;
    (**(code **)(*(longlong *)this + 0x2b0))(this,__return_storage_ptr__,param_1,&local_78,param_3);
  }
  return __return_storage_ptr__;
}

// ModifyRaw_Implementation @ 14a6e70d0

FInputActionValue * __thiscall
UInputModifier::ModifyRaw_Implementation
          (UInputModifier *this,FInputActionValue *__return_storage_ptr__,
          UEnhancedPlayerInput *param_1,FInputActionValue *param_2,float param_3)

{
  double dVar1;
  double dVar2;
  EInputActionValueType EVar3;
  undefined7 uVar4;
  
  dVar1 = (param_2->Value).field0_0x0._s_0.Y;
  dVar2 = (param_2->Value).field0_0x0._s_0.Z;
  EVar3 = param_2->ValueType;
  uVar4 = *(undefined7 *)&param_2->field_0x19;
  (__return_storage_ptr__->Value).field0_0x0._s_0.X = (param_2->Value).field0_0x0._s_0.X;
  (__return_storage_ptr__->Value).field0_0x0._s_0.Y = dVar1;
  (__return_storage_ptr__->Value).field0_0x0._s_0.Z = dVar2;
  __return_storage_ptr__->ValueType = EVar3;
  *(undefined7 *)&__return_storage_ptr__->field_0x19 = uVar4;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUInputModifier @ 14a6fb5f0

void __cdecl UInputModifier::StaticRegisterNativesUInputModifier(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UInputModifier_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetVisualizationColor @ 14a705630

void __cdecl
UInputModifier::execGetVisualizationColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  double local_98;
  double dStack_90;
  double local_88;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  uint uStack_60;
  undefined4 uStack_5c;
  double local_58;
  double dStack_50;
  double local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18 [16];
  
  uStack_60 = uStack_60 & 0xffffff00;
  local_78 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uStack_70 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_68 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  uStack_80 = 0;
  local_98 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_90 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_88 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  uStack_40 = CONCAT71(uStack_7f,uStack_80);
  local_58 = local_98;
  dStack_50 = dStack_90;
  local_48 = local_88;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38 = (undefined4)local_78;
  uStack_34 = local_78._4_4_;
  uStack_30 = (undefined4)uStack_70;
  uStack_2c = uStack_70._4_4_;
  local_28 = (undefined4)local_68;
  uStack_24 = local_68._4_4_;
  uStack_20 = uStack_60;
  uStack_1c = uStack_5c;
  puVar3 = (undefined8 *)
           (**(code **)(*(longlong *)param_1 + 0x2b8))(param_1,local_18,&local_38,&local_58);
  uVar2 = puVar3[1];
  *(undefined8 *)param_3 = *puVar3;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  return;
}

// execModifyRaw @ 14a706920

void __cdecl UInputModifier::execModifyRaw(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  double local_78;
  double dStack_70;
  undefined8 local_68;
  uint uStack_60;
  undefined4 uStack_5c;
  double local_58;
  double dStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [32];
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  uStack_60 = uStack_60 & 0xffffff00;
  local_78 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_70 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_68 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_58 = local_78;
  dStack_50 = dStack_70;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_48 = (undefined4)local_68;
  uStack_44 = local_68._4_4_;
  uStack_40 = uStack_60;
  uStack_3c = uStack_5c;
  puVar3 = (undefined8 *)
           (**(code **)(*(longlong *)param_1 + 0x2b0))
                     (param_1,local_38,local_res10,&local_58,local_res8[0]);
  uVar2 = puVar3[1];
  *(undefined8 *)param_3 = *puVar3;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  uVar2 = puVar3[3];
  *(undefined8 *)((longlong)param_3 + 0x10) = puVar3[2];
  *(undefined8 *)((longlong)param_3 + 0x18) = uVar2;
  return;
}

