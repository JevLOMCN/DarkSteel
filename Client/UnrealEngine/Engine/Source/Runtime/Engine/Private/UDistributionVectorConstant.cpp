// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 27

// StaticClass @ 1472671c0

UClass * __cdecl UDistributionVectorConstant::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDistributionVectorConstant.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DistributionVectorConstant",
               &Z_Registration_Info_UClass_UDistributionVectorConstant.InnerSingleton,
               StaticRegisterNativesUDistributionVectorConstant,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDistributionVectorConstant>,
               InternalVTableHelperCtorCaller<UDistributionVectorConstant>,local_res8,
               UDistributionVector::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDistributionVectorConstant.InnerSingleton;
}

// UDistributionVectorConstant @ 14726d020

UDistributionVectorConstant * __thiscall
UDistributionVectorConstant::UDistributionVectorConstant
          (UDistributionVectorConstant *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FCurveEdInterface__;
  return this;
}

// ~UDistributionVectorConstant @ 14726d6f0

void __thiscall
UDistributionVectorConstant::~UDistributionVectorConstant(UDistributionVectorConstant *this)

{
  this->_padding_ = (longlong)&UDistribution::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UDistribution::_vftable__for__FCurveEdInterface__;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14726fea0

UClass * __cdecl UDistributionVectorConstant::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDistributionVectorConstant.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DistributionVectorConstant",
               &Z_Registration_Info_UClass_UDistributionVectorConstant.InnerSingleton,
               StaticRegisterNativesUDistributionVectorConstant,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDistributionVectorConstant>,
               InternalVTableHelperCtorCaller<UDistributionVectorConstant>,local_res8,
               UDistributionVector::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDistributionVectorConstant.InnerSingleton;
}

// StaticRegisterNativesUDistributionVectorConstant @ 147270ae0

void __cdecl UDistributionVectorConstant::StaticRegisterNativesUDistributionVectorConstant(void)

{
  return;
}

// UDistributionVectorConstant @ 147b3abf0

UDistributionVectorConstant * __thiscall
UDistributionVectorConstant::UDistributionVectorConstant
          (UDistributionVectorConstant *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 3;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FCurveEdInterface__;
  return this;
}

// CreateNewKey @ 147b4e100

int __thiscall
UDistributionVectorConstant::CreateNewKey(UDistributionVectorConstant *this,float param_1)

{
  return 0;
}

// DeleteKey @ 147b4ffc0

void __thiscall
UDistributionVectorConstant::DeleteKey(UDistributionVectorConstant *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0xa82,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// EvalSub @ 147b600e0

float __thiscall
UDistributionVectorConstant::EvalSub(UDistributionVectorConstant *this,int param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (2 < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SubIndex >= 0 && SubIndex < 3",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0xa77,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147b6012f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar3 = (float)(**(code **)(this->_padding_ + 0x20))(this,param_1,0);
  return fVar3;
}

// GetInRange @ 147b65dd0

void __thiscall
UDistributionVectorConstant::GetInRange
          (UDistributionVectorConstant *this,float *param_1,float *param_2)

{
  *param_1 = 0.0;
  *param_2 = 0.0;
  return;
}

// GetKeyColor @ 147b66ac0

FColor __thiscall
UDistributionVectorConstant::GetKeyColor
          (UDistributionVectorConstant *this,int param_1,int param_2,FColor *param_3)

{
  code *pcVar1;
  bool bVar2;
  FColor_u_0 FVar3;
  undefined4 in_register_00000014;
  
  if ((2 < (uint)param_2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SubIndex >= 0 && SubIndex < 3",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                         ,0xa34,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar3.Bits = (*pcVar1)();
    return (FColor_u_0)(FColor_u_0)FVar3._s_0;
  }
  if (((int)param_3 != 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("KeyIndex == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                         ,0xa35,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar3.Bits = (*pcVar1)();
    return (FColor_u_0)(FColor_u_0)FVar3._s_0;
  }
  FVar3 = FColor::Red.field0_0x0;
  if ((param_2 != 0) && (FVar3 = FColor::Green.field0_0x0, param_2 != 1)) {
    FVar3 = FColor::Blue.field0_0x0;
  }
  ((FColor_u_0 *)CONCAT44(in_register_00000014,param_1))->_s_0 = (FColor_u_0_s_0)FVar3;
  return (FColor)(FColor_u_0)param_1;
}

// GetKeyIn @ 147b67010

float __thiscall
UDistributionVectorConstant::GetKeyIn(UDistributionVectorConstant *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (param_1 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0xa07,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  return 0.0;
}

// GetKeyInterpMode @ 147b673d0

EInterpCurveMode __thiscall
UDistributionVectorConstant::GetKeyInterpMode(UDistributionVectorConstant *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  EInterpCurveMode EVar3;
  
  if (param_1 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0xa69,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  return CIM_Constant;
}

// GetKeyOut @ 147b678e0

float __thiscall
UDistributionVectorConstant::GetKeyOut(UDistributionVectorConstant *this,int param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  double dVar5;
  
  if (2 < (uint)param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SubIndex >= 0 && SubIndex < 3",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0xa0d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar4 = (float)(*pcVar2)();
      return fVar4;
    }
  }
  if (param_2 != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0xa0e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar4 = (float)(*pcVar2)();
      return fVar4;
    }
  }
  if (param_1 != 0) {
    cVar1 = *(char *)((longlong)&this->_padding_ + 4);
    if (param_1 == 1) {
      if ((cVar1 != '\x01') && (cVar1 != '\x04')) {
LAB_147b67987:
        dVar5 = (double)this->_padding_;
        goto LAB_147b67967;
      }
    }
    else if ((cVar1 != '\x02') && (cVar1 != '\x04')) {
      if (cVar1 != '\x03') {
        dVar5 = (double)this->_padding_;
        goto LAB_147b67967;
      }
      goto LAB_147b67987;
    }
  }
  dVar5 = (double)this->_padding_;
LAB_147b67967:
  return (float)dVar5;
}

// GetNumKeys @ 147b69520

int __thiscall UDistributionVectorConstant::GetNumKeys(UDistributionVectorConstant *this)

{
  return 1;
}

// GetNumSubCurves @ 147b695a0

int __thiscall UDistributionVectorConstant::GetNumSubCurves(UDistributionVectorConstant *this)

{
  char cVar1;
  
  cVar1 = *(char *)((longlong)&this->_padding_ + 4);
  if (((cVar1 != '\x01') && (cVar1 != '\x02')) && (cVar1 != '\x03')) {
    if (cVar1 != '\x04') {
      return 3;
    }
    return 1;
  }
  return 2;
}

// GetOutRange @ 147b69bd0

void __thiscall
UDistributionVectorConstant::GetOutRange
          (UDistributionVectorConstant *this,float *param_1,float *param_2)

{
  char cVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  cVar1 = *(char *)((longlong)&this->_padding_ + 4);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      dVar2 = (double)this->_padding_;
      dVar5 = (double)this->_padding_;
      dVar4 = dVar2;
      goto LAB_147b69c40;
    }
    if (cVar1 == '\x02') {
      dVar2 = (double)this->_padding_;
      dVar4 = (double)this->_padding_;
      dVar5 = dVar2;
      goto LAB_147b69c40;
    }
    if (cVar1 == '\x03') {
      dVar2 = (double)this->_padding_;
      dVar4 = (double)this->_padding_;
      dVar5 = (double)this->_padding_;
      goto LAB_147b69c40;
    }
    if (cVar1 == '\x04') {
      dVar2 = (double)this->_padding_;
      dVar4 = dVar2;
      dVar5 = dVar2;
      goto LAB_147b69c40;
    }
  }
  dVar2 = (double)this->_padding_;
  dVar4 = (double)this->_padding_;
  dVar5 = (double)this->_padding_;
LAB_147b69c40:
  dVar3 = dVar2;
  if (dVar2 <= dVar4) {
    dVar3 = dVar4;
  }
  if (dVar4 <= dVar2) {
    dVar2 = dVar4;
  }
  if (dVar3 <= dVar5) {
    dVar3 = dVar5;
  }
  if (dVar5 <= dVar2) {
    dVar2 = dVar5;
  }
  *param_1 = (float)dVar2;
  *param_2 = (float)dVar3;
  return;
}

// GetRange @ 147b6cf60

void __thiscall
UDistributionVectorConstant::GetRange
          (UDistributionVectorConstant *this,TVector<double> *param_1,TVector<double> *param_2)

{
  double dVar1;
  
  dVar1 = (this->Constant).field0_0x0._s_0.Y;
  (param_1->field0_0x0)._s_0.X = (this->Constant).field0_0x0._s_0.X;
  (param_1->field0_0x0)._s_0.Y = dVar1;
  (param_1->field0_0x0)._s_0.Z = (this->Constant).field0_0x0._s_0.Z;
  dVar1 = (this->Constant).field0_0x0._s_0.Y;
  (param_2->field0_0x0)._s_0.X = (this->Constant).field0_0x0._s_0.X;
  (param_2->field0_0x0)._s_0.Y = dVar1;
  (param_2->field0_0x0)._s_0.Z = (this->Constant).field0_0x0._s_0.Z;
  return;
}

// GetSubCurveButtonColor @ 147b6fbe0

FColor __thiscall
UDistributionVectorConstant::GetSubCurveButtonColor
          (UDistributionVectorConstant *this,int param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  FColor_u_0 FVar3;
  int iVar4;
  FColor_u_0 FVar5;
  undefined4 in_register_00000014;
  int iVar6;
  undefined7 in_register_00000081;
  char in_R9B;
  
  iVar6 = (int)CONCAT71(in_register_00000081,param_2);
  if ((iVar6 < 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SubCurveIndex >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                         ,0x9e9,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar3.Bits = (*pcVar1)();
    return (FColor_u_0)(FColor_u_0)FVar3._s_0;
  }
  iVar4 = (**(code **)(this->_padding_ + 8))(this);
  if ((iVar4 <= iVar6) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SubCurveIndex < GetNumSubCurves()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                         ,0x9ea,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar3.Bits = (*pcVar1)();
    return (FColor_u_0)(FColor_u_0)FVar3._s_0;
  }
  if (iVar6 == 0) {
    FVar5.Bits = 0xff200000;
    FVar3 = FColor::Red.field0_0x0;
  }
  else if (iVar6 == 1) {
    FVar5.Bits = 0xff002000;
    FVar3 = FColor::Green.field0_0x0;
  }
  else {
    if (iVar6 != 2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                         ,0x9fe,L"");
      if (!bVar2) {
        return (FColor)(FColor_u_0)param_1;
      }
      pcVar1 = (code *)swi(3);
      FVar3.Bits = (*pcVar1)();
      return (FColor_u_0)(FColor_u_0)FVar3._s_0;
    }
    FVar5.Bits = 0xff000020;
    FVar3 = FColor::Blue.field0_0x0;
  }
  if (in_R9B != '\0') {
    FVar3 = FVar5;
  }
  ((FColor_u_0 *)CONCAT44(in_register_00000014,param_1))->_s_0 = (FColor_u_0_s_0)FVar3;
  return (FColor)(FColor_u_0)param_1;
}

// GetTangents @ 147b70590

void __thiscall
UDistributionVectorConstant::GetTangents
          (UDistributionVectorConstant *this,int param_1,int param_2,float *param_3,float *param_4)

{
  code *pcVar1;
  bool bVar2;
  
  if (2 < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SubIndex >= 0 && SubIndex < 3",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0xa6f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0xa70,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *param_3 = 0.0;
  *param_4 = 0.0;
  return;
}

// GetValue @ 147b71db0

TVector<double> * __thiscall
UDistributionVectorConstant::GetValue
          (UDistributionVectorConstant *this,TVector<double> *__return_storage_ptr__,float param_1,
          UObject *param_2,int param_3,FRandomStream *param_4)

{
  double dVar1;
  uchar uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  
  uVar2 = (this->LockedAxes).Value;
  if (uVar2 != '\0') {
    if (uVar2 == '\x01') {
      uVar3 = *(undefined4 *)&(this->Constant).field0_0x0;
      uVar4 = *(undefined4 *)((longlong)&(this->Constant).field0_0x0 + 4);
      (__return_storage_ptr__->field0_0x0)._s_0.Z = (this->Constant).field0_0x0._s_0.Z;
      *(undefined4 *)&__return_storage_ptr__->field0_0x0 = uVar3;
      *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = uVar4;
      *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar3;
      *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = uVar4;
      return __return_storage_ptr__;
    }
    if (uVar2 == '\x02') {
      dVar1 = (this->Constant).field0_0x0._s_0.X;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = (this->Constant).field0_0x0._s_0.Y;
      (__return_storage_ptr__->field0_0x0)._s_0.X = dVar1;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
      return __return_storage_ptr__;
    }
    if (uVar2 == '\x03') {
      uVar3 = *(undefined4 *)((longlong)&(this->Constant).field0_0x0 + 8);
      uVar4 = *(undefined4 *)((longlong)&(this->Constant).field0_0x0 + 0xc);
      (__return_storage_ptr__->field0_0x0)._s_0.X = (this->Constant).field0_0x0._s_0.X;
      *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar3;
      *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = uVar4;
      *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0x10) = uVar3;
      *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0x14) = uVar4;
      return __return_storage_ptr__;
    }
    if (uVar2 == '\x04') {
      uVar3 = *(undefined4 *)&(this->Constant).field0_0x0;
      uVar4 = *(undefined4 *)((longlong)&(this->Constant).field0_0x0 + 4);
      *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0x10) = uVar3;
      *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0x14) = uVar4;
      *(undefined4 *)&__return_storage_ptr__->field0_0x0 = uVar3;
      *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = uVar4;
      *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar3;
      *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = uVar4;
      return __return_storage_ptr__;
    }
  }
  dVar5 = (this->Constant).field0_0x0._s_0.Y;
  dVar1 = (this->Constant).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->Constant).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// PostInitProperties @ 147b7d990

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UDistributionVectorConstant::PostInitProperties(UDistributionVectorConstant *this)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  UClass *pUVar5;
  
  UObject::PostInitProperties((UObject *)this);
  if (((uint)this->_padding_ >> 10 & 1) != 0) {
    lVar2 = this->_padding_;
    pUVar5 = Z_Construct_UClass_UParticleModule_NoRegister();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      lVar2 = this->_padding_;
      pUVar5 = Z_Construct_UClass_USoundNode_NoRegister();
      lVar2 = *(longlong *)(lVar2 + 0x10);
      iVar1 = (int)pUVar5->_padding_;
      if (*(int *)(lVar2 + 0x38) < iVar1) {
        return;
      }
      if ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_) {
        return;
      }
    }
    dVar4 = _UNK_151874048;
    dVar3 = __real_3bcd261840000000;
    (this->Constant).field0_0x0._s_0.X = ___xmm_3bcd2618400000003bcd261840000000;
    (this->Constant).field0_0x0._s_0.Y = dVar4;
    (this->Constant).field0_0x0._s_0.Z = dVar3;
  }
  return;
}

// PostLoad @ 147b7db40

void __thiscall UDistributionVectorConstant::PostLoad(UDistributionVectorConstant *this)

{
  undefined8 uVar1;
  
  UObject::PostLoad((UObject *)this);
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (((__real_3bcd261840000000 == (this->Constant).field0_0x0._s_0.X) &&
      (__real_3bcd261840000000 == (this->Constant).field0_0x0._s_0.Y)) &&
     (__real_3bcd261840000000 == (this->Constant).field0_0x0._s_0.Z)) {
    (this->Constant).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (this->Constant).field0_0x0._s_0.Y = (double)uVar1;
    (this->Constant).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  return;
}

// SetKeyIn @ 147b8b0f0

int __thiscall
UDistributionVectorConstant::SetKeyIn(UDistributionVectorConstant *this,int param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0xa87,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return 0;
}

// SetKeyInterpMode @ 147b8b4b0

void __thiscall
UDistributionVectorConstant::SetKeyInterpMode
          (UDistributionVectorConstant *this,int param_1,EInterpCurveMode param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0xa9c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// SetKeyOut @ 147b8baa0

void __thiscall
UDistributionVectorConstant::SetKeyOut
          (UDistributionVectorConstant *this,int param_1,int param_2,float param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if (2 < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SubIndex >= 0 && SubIndex < 3",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0xa8d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0xa8e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1 == 0) {
    this->_padding_ = (longlong)(double)param_3;
  }
  else if (param_1 == 1) {
    this->_padding_ = (longlong)(double)param_3;
  }
  else if (param_1 == 2) {
    this->_padding_ = (longlong)(double)param_3;
  }
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 2;
  return;
}

// SetTangents @ 147b8d3b0

void __thiscall
UDistributionVectorConstant::SetTangents
          (UDistributionVectorConstant *this,int param_1,int param_2,float param_3,float param_4)

{
  code *pcVar1;
  bool bVar2;
  
  if (2 < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SubIndex >= 0 && SubIndex < 3",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0xaa1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0xaa2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

