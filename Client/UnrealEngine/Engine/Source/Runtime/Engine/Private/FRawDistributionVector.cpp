// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticStruct @ 147266a40

UScriptStruct * __cdecl FRawDistributionVector::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRawDistributionVector.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FRawDistributionVector.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRawDistributionVector,(UObject *)pUVar1,
                         L"RawDistributionVector");
  }
  return Z_Registration_Info_UScriptStruct_FRawDistributionVector.OuterSingleton;
}

// operator= @ 147319ef0

FRawDistributionVector * __thiscall
FRawDistributionVector::operator=(FRawDistributionVector *this,FRawDistributionVector *param_1)

{
  UDistributionVector *pUVar1;
  double dVar2;
  
  FDistributionLookupTable::operator=
            ((FDistributionLookupTable *)this,(FDistributionLookupTable *)param_1);
  this->MinValue = param_1->MinValue;
  this->MaxValue = param_1->MaxValue;
  dVar2 = (param_1->MinValueVec).field0_0x0._s_0.Y;
  (this->MinValueVec).field0_0x0._s_0.X = (param_1->MinValueVec).field0_0x0._s_0.X;
  (this->MinValueVec).field0_0x0._s_0.Y = dVar2;
  (this->MinValueVec).field0_0x0._s_0.Z = (param_1->MinValueVec).field0_0x0._s_0.Z;
  dVar2 = (param_1->MaxValueVec).field0_0x0._s_0.Y;
  (this->MaxValueVec).field0_0x0._s_0.X = (param_1->MaxValueVec).field0_0x0._s_0.X;
  (this->MaxValueVec).field0_0x0._s_0.Y = dVar2;
  (this->MaxValueVec).field0_0x0._s_0.Z = (param_1->MaxValueVec).field0_0x0._s_0.Z;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->Distribution).field0_0x0.DebugPtr, pUVar1 != (UDistributionVector *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->Distribution).field0_0x0 = (param_1->Distribution).field0_0x0;
  return this;
}

// GetFastRawDistribution @ 147b65890

FRawDistribution * __thiscall
FRawDistributionVector::GetFastRawDistribution(FRawDistributionVector *this)

{
  if (((((char)this->_padding_ == '\x01') && (GDistributionType != 0)) &&
      ((int)this->_padding_ != 0)) && (*(char *)((longlong)&this->_padding_ + 1) != '\0')) {
    return (FRawDistribution *)this;
  }
  return (FRawDistribution *)0x0;
}

// GetOutRange @ 147b69a90

void __thiscall
FRawDistributionVector::GetOutRange(FRawDistributionVector *this,float *param_1,float *param_2)

{
  UDistributionVector *pUVar1;
  
  if ((((GDistributionType == 0) || ((int)this->_padding_ == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 1) == '\0')) &&
     (pUVar1 = (this->Distribution).field0_0x0.DebugPtr, pUVar1 != (UDistributionVector *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000147b69ab6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x50))(&pUVar1->_padding_);
    return;
  }
  *param_1 = this->MinValue;
  *param_2 = this->MaxValue;
  return;
}

// GetRange @ 147b6ced0

void __thiscall
FRawDistributionVector::GetRange
          (FRawDistributionVector *this,TVector<double> *param_1,TVector<double> *param_2)

{
  UDistributionVector *pUVar1;
  double dVar2;
  
  pUVar1 = (this->Distribution).field0_0x0.DebugPtr;
  if (pUVar1 != (UDistributionVector *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147b6cedf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x2d8))(pUVar1);
    return;
  }
  dVar2 = (this->MinValueVec).field0_0x0._s_0.Y;
  (param_1->field0_0x0)._s_0.X = (this->MinValueVec).field0_0x0._s_0.X;
  (param_1->field0_0x0)._s_0.Y = dVar2;
  (param_1->field0_0x0)._s_0.Z = (this->MinValueVec).field0_0x0._s_0.Z;
  dVar2 = (this->MaxValueVec).field0_0x0._s_0.Y;
  (param_2->field0_0x0)._s_0.X = (this->MaxValueVec).field0_0x0._s_0.X;
  (param_2->field0_0x0)._s_0.Y = dVar2;
  (param_2->field0_0x0)._s_0.Z = (this->MaxValueVec).field0_0x0._s_0.Z;
  return;
}

// GetValue @ 147b71a10

TVector<double> * __thiscall
FRawDistributionVector::GetValue
          (FRawDistributionVector *this,TVector<double> *__return_storage_ptr__,float param_1,
          UObject *param_2,int param_3,FRandomStream *param_4)

{
  char cVar1;
  UDistributionVector *pUVar2;
  code *pcVar3;
  float *pfVar4;
  undefined8 uVar5;
  float local_28 [2];
  float *local_20;
  undefined8 local_18;
  float local_10;
  
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (((GDistributionType != 0) && ((int)this->_padding_ != 0)) &&
     (*(char *)((longlong)&this->_padding_ + 1) != '\0')) {
    cVar1 = (char)this->_padding_;
    if (cVar1 == '\x01') {
      local_28[0] = 0.0;
      FDistributionLookupTable::GetEntry
                ((FDistributionLookupTable *)this,param_1,&local_20,(float **)&local_18,local_28);
      pfVar4 = (float *)CONCAT44(local_18._4_4_,(float)local_18);
      local_18._0_4_ = (*pfVar4 - *local_20) * local_28[0] + *local_20;
      local_18._4_4_ = (pfVar4[1] - local_20[1]) * local_28[0] + local_20[1];
      local_10 = (pfVar4[2] - local_20[2]) * local_28[0] + local_20[2];
    }
    else if (cVar1 == '\x02') {
      FRawDistribution::GetValue3Random((FRawDistribution *)this,param_1,(float *)&local_18,param_4)
      ;
    }
    else if (cVar1 == '\x03') {
      FRawDistribution::GetValue3Extreme
                ((FRawDistribution *)this,param_1,(float *)&local_18,param_3,param_4);
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(float)local_18;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)local_18._4_4_;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)local_10;
    return __return_storage_ptr__;
  }
  pUVar2 = (this->Distribution).field0_0x0.DebugPtr;
  if (pUVar2 == (UDistributionVector *)0x0) {
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar5;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    return __return_storage_ptr__;
  }
  pcVar3 = *(code **)(pUVar2->_padding_ + 0x2d0);
  (*pcVar3)(pUVar2,__return_storage_ptr__,pcVar3,param_2,param_3,param_4);
  return __return_storage_ptr__;
}

// InitLookupTable @ 147b75f90

void __thiscall FRawDistributionVector::InitLookupTable(FRawDistributionVector *this)

{
  return;
}

// IsCreated @ 147b77ef0

bool __thiscall FRawDistributionVector::IsCreated(FRawDistributionVector *this)

{
  if ((((GDistributionType == 0) || ((int)this->_padding_ == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 1) == '\0')) &&
     ((this->Distribution).field0_0x0.DebugPtr == (UDistributionVector *)0x0)) {
    return false;
  }
  return true;
}

