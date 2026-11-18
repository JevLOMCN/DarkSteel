// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 16

// StaticStruct @ 14a8758b0

UScriptStruct * __cdecl FChooserColumnBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChooserColumnBase.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FChooserColumnBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChooserColumnBase,(UObject *)pUVar1,
                         L"ChooserColumnBase");
  }
  return Z_Registration_Info_UScriptStruct_FChooserColumnBase.OuterSingleton;
}

// ~FChooserColumnBase @ 14a87e420

void __thiscall FChooserColumnBase::~FChooserColumnBase(FChooserColumnBase *this)

{
  *this = (FChooserColumnBase)&___7FChooserColumnBase__6B_;
  return;
}

// Compile @ 14a881db0

void __thiscall
FChooserColumnBase::Compile(FChooserColumnBase *this,IHasContextClass *param_1,bool param_2)

{
  longlong *plVar1;
  undefined7 in_register_00000081;
  
  plVar1 = (longlong *)
           (**(code **)((longlong)*this + 0x58))
                     (this,param_1,CONCAT71(in_register_00000081,param_2));
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,param_1,param_2);
  }
  return;
}

// DeinitializeScratchArea @ 14a885650

void __thiscall
FChooserColumnBase::DeinitializeScratchArea
          (FChooserColumnBase *this,TArrayView<unsigned_char,int> *param_1)

{
  return;
}

// Filter @ 14a887c20

void __thiscall
FChooserColumnBase::Filter
          (FChooserColumnBase *this,FChooserEvaluationContext *param_1,FChooserIndexArray *param_2,
          FChooserIndexArray *param_3)

{
  return;
}

// Filter @ 14a887c30

void __thiscall
FChooserColumnBase::Filter
          (FChooserColumnBase *this,FChooserEvaluationContext *param_1,FChooserIndexArray *param_2,
          FChooserIndexArray *param_3,TArrayView<unsigned_char,int> *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00014a887c33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this + 0x18))();
  return;
}

// GetInputValue @ 14a88a4d0

FChooserParameterBase * __thiscall FChooserColumnBase::GetInputValue(FChooserColumnBase *this)

{
  return (FChooserParameterBase *)0x0;
}

// GetScratchAreaSize @ 14a88b700

int __thiscall FChooserColumnBase::GetScratchAreaSize(FChooserColumnBase *this)

{
  return 0;
}

// HasCosts @ 14a88b8d0

bool __thiscall FChooserColumnBase::HasCosts(FChooserColumnBase *this)

{
  return false;
}

// HasFilters @ 14a88b8f0

bool __thiscall FChooserColumnBase::HasFilters(FChooserColumnBase *this)

{
  return true;
}

// HasOutputs @ 14a88b980

bool __thiscall FChooserColumnBase::HasOutputs(FChooserColumnBase *this)

{
  return false;
}

// InitializeScratchArea @ 14a88bf00

void __thiscall
FChooserColumnBase::InitializeScratchArea
          (FChooserColumnBase *this,TArrayView<unsigned_char,int> *param_1)

{
  return;
}

// PostLoad @ 14a88cb50

void __thiscall FChooserColumnBase::PostLoad(FChooserColumnBase *this)

{
  return;
}

// SetOutputs @ 14a88f2f0

void __thiscall
FChooserColumnBase::SetOutputs
          (FChooserColumnBase *this,FChooserEvaluationContext *param_1,int param_2)

{
  return;
}

// SetOutputs @ 14a88f300

void __thiscall
FChooserColumnBase::SetOutputs
          (FChooserColumnBase *this,FChooserEvaluationContext *param_1,int param_2,
          TArrayView<unsigned_char,int> *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014a88f303. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this + 0x40))();
  return;
}

// SetTestValue @ 14a88fcb0

void __thiscall
FChooserColumnBase::SetTestValue
          (FChooserColumnBase *this,TArrayView<unsigned_char_const_,int> *param_1)

{
  return;
}

