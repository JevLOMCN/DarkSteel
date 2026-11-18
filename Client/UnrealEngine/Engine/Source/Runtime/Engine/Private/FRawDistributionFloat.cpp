// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticStruct @ 147265300

UScriptStruct * __cdecl FRawDistributionFloat::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRawDistributionFloat.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FRawDistributionFloat.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRawDistributionFloat,(UObject *)pUVar1,
                         L"RawDistributionFloat");
  }
  return Z_Registration_Info_UScriptStruct_FRawDistributionFloat.OuterSingleton;
}

// GetFastRawDistribution @ 147b65860

FRawDistribution * __thiscall
FRawDistributionFloat::GetFastRawDistribution(FRawDistributionFloat *this)

{
  if (((((char)this->_padding_ == '\x01') && (GDistributionType != 0)) &&
      ((int)this->_padding_ != 0)) && (*(char *)((longlong)&this->_padding_ + 1) != '\0')) {
    return (FRawDistribution *)this;
  }
  return (FRawDistribution *)0x0;
}

// GetOutRange @ 147b69a50

void __thiscall
FRawDistributionFloat::GetOutRange(FRawDistributionFloat *this,float *param_1,float *param_2)

{
  UDistributionFloat *pUVar1;
  
  if ((((GDistributionType == 0) || ((int)this->_padding_ == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 1) == '\0')) &&
     (pUVar1 = (this->Distribution).field0_0x0.DebugPtr, pUVar1 != (UDistributionFloat *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000147b69a76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x50))(&pUVar1->_padding_);
    return;
  }
  *param_1 = this->MinValue;
  *param_2 = this->MaxValue;
  return;
}

// GetValue @ 147b717d0

float __thiscall
FRawDistributionFloat::GetValue
          (FRawDistributionFloat *this,float param_1,UObject *param_2,FRandomStream *param_3)

{
  char cVar1;
  UDistributionFloat *pUVar2;
  uint uVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float local_48 [2];
  float *local_40;
  float *local_38 [6];
  
  if (((GDistributionType == 0) || ((int)this->_padding_ == 0)) ||
     (*(char *)((longlong)&this->_padding_ + 1) == '\0')) {
    pUVar2 = (this->Distribution).field0_0x0.DebugPtr;
    if (pUVar2 == (UDistributionFloat *)0x0) {
      return 0.0;
    }
                    /* WARNING: Could not recover jumptable at 0x000147b719fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar5 = (float)(**(code **)(pUVar2->_padding_ + 0x2d0))();
    return fVar5;
  }
  cVar1 = (char)this->_padding_;
  if (cVar1 == '\x01') {
    local_48[0] = 0.0;
    FDistributionLookupTable::GetEntry
              ((FDistributionLookupTable *)this,param_1,local_38,&local_40,local_48);
    return (*local_40 - *local_38[0]) * local_48[0] + *local_38[0];
  }
  if (cVar1 != '\x02') {
    if (cVar1 != '\x03') {
      return 0.0;
    }
    local_48[0] = 0.0;
    if (param_3 == (FRandomStream *)0x0) {
      fVar5 = FGenericPlatformMath::SRand();
    }
    else {
      uVar3 = param_3->Seed * 0xbb38435 + 0x3619636b;
      param_3->Seed = uVar3;
      fVar5 = (float)(uVar3 >> 9 | 0x3f800000) - __real_3f800000;
    }
    FDistributionLookupTable::GetEntry
              ((FDistributionLookupTable *)this,param_1,&local_40,local_38,local_48);
    lVar4 = 0;
    if (__real_3f000000 < fVar5) {
      lVar4 = 4;
    }
    return (*(float *)(lVar4 + (longlong)local_38[0]) - *(float *)(lVar4 + (longlong)local_40)) *
           local_48[0] + *(float *)(lVar4 + (longlong)local_40);
  }
  local_48[0] = 0.0;
  if (param_3 == (FRandomStream *)0x0) {
    fVar5 = FGenericPlatformMath::SRand();
  }
  else {
    uVar3 = param_3->Seed * 0xbb38435 + 0x3619636b;
    param_3->Seed = uVar3;
    fVar5 = (float)(uVar3 >> 9 | 0x3f800000) - __real_3f800000;
  }
  FDistributionLookupTable::GetEntry
            ((FDistributionLookupTable *)this,param_1,local_38,&local_40,local_48);
  fVar6 = (*local_40 - *local_38[0]) * local_48[0] + *local_38[0];
  return (((local_40[1] - local_38[0][1]) * local_48[0] + local_38[0][1]) - fVar6) * fVar5 + fVar6;
}

// InitLookupTable @ 147b75f80

void __thiscall FRawDistributionFloat::InitLookupTable(FRawDistributionFloat *this)

{
  return;
}

// IsCreated @ 147b77ec0

bool __thiscall FRawDistributionFloat::IsCreated(FRawDistributionFloat *this)

{
  if ((((GDistributionType == 0) || ((int)this->_padding_ == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 1) == '\0')) &&
     ((this->Distribution).field0_0x0.DebugPtr == (UDistributionFloat *)0x0)) {
    return false;
  }
  return true;
}

