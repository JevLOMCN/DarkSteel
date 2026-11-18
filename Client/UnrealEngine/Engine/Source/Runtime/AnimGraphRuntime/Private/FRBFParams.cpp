// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 3

// StaticStruct @ 1463d5160

UScriptStruct * __cdecl FRBFParams::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRBFParams.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FRBFParams.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRBFParams,(UObject *)pUVar1,L"RBFParams");
  }
  return Z_Registration_Info_UScriptStruct_FRBFParams.OuterSingleton;
}

// FRBFParams @ 146407210

FRBFParams * __thiscall FRBFParams::FRBFParams(FRBFParams *this)

{
  this->TargetDimensions = 3;
  (this->MedianReference).field0_0x0._s_0.X = 0.0;
  (this->MedianReference).field0_0x0._s_0.Y = 0.0;
  (this->MedianReference).field0_0x0._s_0.Z = 0.0;
  this->SolverType = Additive;
  this->Radius = 1.0;
  this->bAutomaticRadius = false;
  this->Function = Gaussian;
  this->DistanceMethod = Euclidean;
  this->TwistAxis = '\0';
  this->WeightThreshold = 0.0001;
  this->NormalizeMethod = OnlyNormalizeAboveOne;
  this->MedianMin = 45.0;
  this->MedianMax = 60.0;
  return this;
}

// GetTwistAxisVector @ 1464503f0

TVector<double> * __thiscall
FRBFParams::GetTwistAxisVector(FRBFParams *this,TVector<double> *__return_storage_ptr__)

{
  uchar uVar1;
  
  uVar1 = (this->TwistAxis).Value;
  if (uVar1 != '\0') {
    if (uVar1 == '\x01') {
      (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = 1.0;
      return __return_storage_ptr__;
    }
    if (uVar1 == '\x02') {
      (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = 1.0;
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.X = 1.0;
  return __return_storage_ptr__;
}

