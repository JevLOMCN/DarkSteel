// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationCore
// Functions: 9

// StaticStruct @ 142379a70

UScriptStruct * __cdecl FConstraintDescriptionEx::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FConstraintDescriptionEx.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimationCore();
    Z_Registration_Info_UScriptStruct_FConstraintDescriptionEx.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConstraintDescriptionEx,(UObject *)pUVar1,
                         L"ConstraintDescriptionEx");
  }
  return Z_Registration_Info_UScriptStruct_FConstraintDescriptionEx.OuterSingleton;
}

// AccumulateConstraintTransform @ 142379ab0

void __thiscall
FConstraintDescriptionEx::AccumulateConstraintTransform
          (FConstraintDescriptionEx *this,TTransform<double> *param_1,TTransform<double> *param_2,
          TTransform<double> *param_3,float param_4,FMultiTransformBlendHelper *param_5)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimationCore\\Public\\Constraint.h"
             ,0x16e,L"Pure virtual not implemented (%s)");
  return;
}

// DoesAffectRotation @ 142379ae0

bool __thiscall FConstraintDescriptionEx::DoesAffectRotation(FConstraintDescriptionEx *this)

{
  return false;
}

// DoesAffectTranslation @ 142379af0

bool __thiscall FConstraintDescriptionEx::DoesAffectTranslation(FConstraintDescriptionEx *this)

{
  return false;
}

// DoesAffectScale @ 142379b00

bool __thiscall FConstraintDescriptionEx::DoesAffectScale(FConstraintDescriptionEx *this)

{
  return false;
}

// DoesAffectTransform @ 142379b10

bool __thiscall FConstraintDescriptionEx::DoesAffectTransform(FConstraintDescriptionEx *this)

{
  return false;
}

// GetDisplayString @ 142379b20

FString * __thiscall
FConstraintDescriptionEx::GetDisplayString
          (FConstraintDescriptionEx *this,FString *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimationCore\\Public\\Constraint.h"
             ,0x17e,L"Pure virtual not implemented (%s)");
  ::FString::FString(__return_storage_ptr__,L"None");
  return __return_storage_ptr__;
}

// Serialize @ 142379b70

void __thiscall
FConstraintDescriptionEx::Serialize(FConstraintDescriptionEx *this,FArchive *param_1)

{
  ::operator<<(param_1,&(this->AxesFilterOption).bX);
  ::operator<<(param_1,&(this->AxesFilterOption).bY);
  ::operator<<(param_1,&(this->AxesFilterOption).bZ);
  return;
}

// ~FConstraintDescriptionEx @ 14237e990

void __thiscall FConstraintDescriptionEx::~FConstraintDescriptionEx(FConstraintDescriptionEx *this)

{
  this->_padding_ = (longlong)&___7FConstraintDescriptionEx__6B_;
  return;
}

