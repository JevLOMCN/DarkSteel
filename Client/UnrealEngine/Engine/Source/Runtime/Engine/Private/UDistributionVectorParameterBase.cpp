// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 147267fd0

UClass * __cdecl UDistributionVectorParameterBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDistributionVectorParameterBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DistributionVectorParameterBase",
               &Z_Registration_Info_UClass_UDistributionVectorParameterBase.InnerSingleton,
               StaticRegisterNativesUDistributionVectorParameterBase,200,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDistributionVectorParameterBase>,
               InternalVTableHelperCtorCaller<UDistributionVectorParameterBase>,local_res8,
               UDistributionVectorConstant::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDistributionVectorParameterBase.InnerSingleton;
}

// UDistributionVectorParameterBase @ 14726d0b0

UDistributionVectorParameterBase * __thiscall
UDistributionVectorParameterBase::UDistributionVectorParameterBase
          (UDistributionVectorParameterBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FCurveEdInterface__;
  (this->ParameterName).ComparisonIndex = 0;
  (this->ParameterName).Number = 0;
  return this;
}

// ~UDistributionVectorParameterBase @ 14726d770

void __thiscall
UDistributionVectorParameterBase::~UDistributionVectorParameterBase
          (UDistributionVectorParameterBase *this)

{
  this->_padding_ = (longlong)&UDistribution::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UDistribution::_vftable__for__FCurveEdInterface__;
  UObject::~UObject((UObject *)this);
  return;
}

// CanBeBaked @ 14726e940

bool __thiscall UDistributionVectorParameterBase::CanBeBaked(UDistributionVectorParameterBase *this)

{
  return false;
}

// GetParamValue @ 14726ed90

bool __thiscall
UDistributionVectorParameterBase::GetParamValue
          (UDistributionVectorParameterBase *this,UObject *param_1,FName param_2,
          TVector<double> *param_3)

{
  return false;
}

// GetPrivateStaticClass @ 147270020

UClass * __cdecl UDistributionVectorParameterBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDistributionVectorParameterBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DistributionVectorParameterBase",
               &Z_Registration_Info_UClass_UDistributionVectorParameterBase.InnerSingleton,
               StaticRegisterNativesUDistributionVectorParameterBase,200,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDistributionVectorParameterBase>,
               InternalVTableHelperCtorCaller<UDistributionVectorParameterBase>,local_res8,
               UDistributionVectorConstant::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDistributionVectorParameterBase.InnerSingleton;
}

// StaticRegisterNativesUDistributionVectorParameterBase @ 147270b00

void __cdecl
UDistributionVectorParameterBase::StaticRegisterNativesUDistributionVectorParameterBase(void)

{
  return;
}

// UDistributionVectorParameterBase @ 147b3ac80

UDistributionVectorParameterBase * __thiscall
UDistributionVectorParameterBase::UDistributionVectorParameterBase
          (UDistributionVectorParameterBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 3;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FCurveEdInterface__;
  (this->ParameterName).ComparisonIndex = 0;
  (this->ParameterName).Number = 0;
  (this->MaxInput).field0_0x0._s_0.X = 1.0;
  (this->MaxInput).field0_0x0._s_0.Y = 1.0;
  (this->MaxInput).field0_0x0._s_0.Z = 1.0;
  (this->MaxOutput).field0_0x0._s_0.X = 1.0;
  (this->MaxOutput).field0_0x0._s_0.Y = 1.0;
  (this->MaxOutput).field0_0x0._s_0.Z = 1.0;
  return this;
}

// GetValue @ 147b71f60

TVector<double> * __thiscall
UDistributionVectorParameterBase::GetValue
          (UDistributionVectorParameterBase *this,TVector<double> *__return_storage_ptr__,
          float param_1,UObject *param_2,int param_3,FRandomStream *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  double dVar10;
  char cVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  double local_98;
  double dStack_90;
  double local_88;
  
  dVar10 = 0.0;
  local_88 = 0.0;
  local_98 = 0.0;
  dStack_90 = 0.0;
  cVar11 = (**(code **)(this->_padding_ + 0x2e8))(this,param_2,this->ParameterName,&local_98);
  if (cVar11 == '\0') {
    local_98 = (double)this->_padding_;
    dStack_90 = (double)this->_padding_;
    local_88 = (double)this->_padding_;
  }
  uVar7 = this->ParamModes[0].Value;
  if (uVar7 == '\x01') {
    local_98 = (double)CONCAT44((uint)((ulonglong)local_98 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(local_98,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  }
  uVar8 = this->ParamModes[1].Value;
  if (uVar8 == '\x01') {
    dStack_90 = (double)CONCAT44((uint)((ulonglong)dStack_90 >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 SUB84(dStack_90,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  }
  uVar9 = this->ParamModes[2].Value;
  if (uVar9 == '\x01') {
    local_88 = (double)CONCAT44((uint)((ulonglong)local_88 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(local_88,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  }
  dVar1 = (this->MinInput).field0_0x0._s_0.X;
  dVar2 = (this->MaxInput).field0_0x0._s_0.X;
  uVar14 = SUB84(dVar2,0);
  uVar15 = (undefined4)((ulonglong)dVar2 >> 0x20);
  if (dVar1 < dVar2) {
    dVar12 = ((this->MaxOutput).field0_0x0._s_0.X - (this->MinOutput).field0_0x0._s_0.X) /
             (dVar2 - dVar1);
  }
  else {
    dVar12 = 0.0;
  }
  dVar3 = (this->MinInput).field0_0x0._s_0.Y;
  dVar4 = (this->MaxInput).field0_0x0._s_0.Y;
  uVar18 = SUB84(dVar4,0);
  uVar19 = (undefined4)((ulonglong)dVar4 >> 0x20);
  if (dVar3 < dVar4) {
    dVar13 = ((this->MaxOutput).field0_0x0._s_0.Y - (this->MinOutput).field0_0x0._s_0.Y) /
             (dVar4 - dVar3);
  }
  else {
    dVar13 = 0.0;
  }
  dVar5 = (this->MinInput).field0_0x0._s_0.Z;
  dVar6 = (this->MaxInput).field0_0x0._s_0.Z;
  uVar16 = SUB84(dVar6,0);
  uVar17 = (undefined4)((ulonglong)dVar6 >> 0x20);
  if (dVar5 < dVar6) {
    dVar10 = ((this->MaxOutput).field0_0x0._s_0.Z - (this->MinOutput).field0_0x0._s_0.Z) /
             (dVar6 - dVar5);
  }
  if (local_98 <= dVar2) {
    uVar14 = SUB84(local_98,0);
    uVar15 = (undefined4)((ulonglong)local_98 >> 0x20);
  }
  if (dStack_90 <= dVar4) {
    uVar18 = SUB84(dStack_90,0);
    uVar19 = (undefined4)((ulonglong)dStack_90 >> 0x20);
  }
  if (local_88 <= dVar6) {
    uVar16 = SUB84(local_88,0);
    uVar17 = (undefined4)((ulonglong)local_88 >> 0x20);
  }
  if ((double)CONCAT44(uVar15,uVar14) <= dVar1) {
    uVar14 = SUB84(dVar1,0);
    uVar15 = (int)((ulonglong)dVar1 >> 0x20);
  }
  if ((double)CONCAT44(uVar19,uVar18) <= dVar3) {
    uVar18 = SUB84(dVar3,0);
    uVar19 = (int)((ulonglong)dVar3 >> 0x20);
  }
  if ((double)CONCAT44(uVar17,uVar16) <= dVar5) {
    uVar16 = SUB84(dVar5,0);
    uVar17 = (int)((ulonglong)dVar5 >> 0x20);
  }
  dVar2 = (this->MinOutput).field0_0x0._s_0.Y;
  dVar4 = (this->MinOutput).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       ((double)CONCAT44(uVar15,uVar14) - dVar1) * dVar12 + (this->MinOutput).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       ((double)CONCAT44(uVar19,uVar18) - dVar3) * dVar13 + dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       ((double)CONCAT44(uVar17,uVar16) - dVar5) * dVar10 + dVar4;
  if (uVar7 == '\x02') {
    *(double *)&__return_storage_ptr__->field0_0x0 = local_98;
  }
  if (uVar8 == '\x02') {
    *(double *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = dStack_90;
  }
  if (uVar9 == '\x02') {
    *(double *)((longlong)&__return_storage_ptr__->field0_0x0 + 0x10) = local_88;
  }
  return __return_storage_ptr__;
}

