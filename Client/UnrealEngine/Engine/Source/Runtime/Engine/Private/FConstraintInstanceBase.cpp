// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// StaticStruct @ 14822cae0

UScriptStruct * __cdecl FConstraintInstanceBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FConstraintInstanceBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FConstraintInstanceBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConstraintInstanceBase,(UObject *)pUVar1,
                         L"ConstraintInstanceBase");
  }
  return Z_Registration_Info_UScriptStruct_FConstraintInstanceBase.OuterSingleton;
}

// FConstraintInstanceBase @ 14824e830

FConstraintInstanceBase * __thiscall
FConstraintInstanceBase::FConstraintInstanceBase(FConstraintInstanceBase *this)

{
  *(undefined8 *)&this->OnConstraintBrokenDelegate = 0;
  *(undefined8 *)&(this->OnConstraintBrokenDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnConstraintBrokenDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnConstraintViolatedDelegate = 0;
  *(undefined8 *)&(this->OnConstraintViolatedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnConstraintViolatedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnPlasticDeformationDelegate = 0;
  *(undefined8 *)&(this->OnPlasticDeformationDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnPlasticDeformationDelegate).field_0x10 = 0;
  this->ConstraintIndex = 0;
  (this->ConstraintHandle).Constraint = (FConstraintBase *)0x0;
  this->PhysScene = (FPhysScene_Chaos *)0x0;
  return this;
}

// Reset @ 1482a6c40

void __thiscall FConstraintInstanceBase::Reset(FConstraintInstanceBase *this)

{
  this->ConstraintIndex = 0;
  (this->ConstraintHandle).Constraint = (FConstraintBase *)0x0;
  this->PhysScene = (FPhysScene_Chaos *)0x0;
  return;
}

// SetConstraintBrokenDelegate @ 1482aa390

void __thiscall
FConstraintInstanceBase::SetConstraintBrokenDelegate
          (FConstraintInstanceBase *this,
          TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *param_1)

{
  TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnConstraintBrokenDelegate,param_1);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  return;
}

// SetConstraintViolatedDelegate @ 1482aa3c0

void __thiscall
FConstraintInstanceBase::SetConstraintViolatedDelegate
          (FConstraintInstanceBase *this,
          TDelegate<void___cdecl(int,float,float),FDefaultDelegateUserPolicy> *param_1)

{
  TDelegate<void___cdecl(int,float,float),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->OnConstraintViolatedDelegate,param_1);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  return;
}

