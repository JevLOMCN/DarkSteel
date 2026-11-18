// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 7

// TNotNull<UMassProcessor_*><UMassTestProcessorBase_*_&> @ 1470cf320

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

TNotNull<UMassProcessor_*> * __thiscall
TNotNull<UMassProcessor_*>::TNotNull<UMassProcessor_*><UMassTestProcessorBase_*_&>
          (TNotNull<UMassProcessor_*> *this,UMassTestProcessorBase **param_1)

{
  UMassTestProcessorBase *pUVar1;
  
  pUVar1 = *param_1;
  this->Val = (UMassProcessor *)pUVar1;
  if (pUVar1 != (UMassTestProcessorBase *)0x0) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// TNotNull<UScriptStruct_*><UScriptStruct_*_&> @ 1470cf350

TNotNull<UScriptStruct_*> * __thiscall
TNotNull<UScriptStruct_*>::TNotNull<UScriptStruct_*><UScriptStruct_*_&>
          (TNotNull<UScriptStruct_*> *this,UScriptStruct **param_1)

{
  UScriptStruct *pUVar1;
  
  pUVar1 = *param_1;
  this->Val = pUVar1;
  if (pUVar1 != (UScriptStruct *)0x0) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// TNotNull<UMassProcessor_*><UMassTestProcessorBase_*> @ 1470cf860

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

TNotNull<UMassProcessor_*> * __thiscall
TNotNull<UMassProcessor_*>::TNotNull<UMassProcessor_*><UMassTestProcessorBase_*>
          (TNotNull<UMassProcessor_*> *this,UMassTestProcessorBase **param_1)

{
  UMassTestProcessorBase *pUVar1;
  
  pUVar1 = *param_1;
  this->Val = (UMassProcessor *)pUVar1;
  if (pUVar1 != (UMassTestProcessorBase *)0x0) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// TNotNull<UObject_*><UPackage_*> @ 1470cf890

TNotNull<UObject_*> * __thiscall
TNotNull<UObject_*>::TNotNull<UObject_*><UPackage_*>(TNotNull<UObject_*> *this,UPackage **param_1)

{
  UPackage *pUVar1;
  
  pUVar1 = *param_1;
  this->Val = (UObject *)pUVar1;
  if (pUVar1 != (UPackage *)0x0) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// TNotNull<UScriptStruct_*><UScriptStruct_*> @ 1470cf8c0

TNotNull<UScriptStruct_*> * __thiscall
TNotNull<UScriptStruct_*>::TNotNull<UScriptStruct_*><UScriptStruct_*>
          (TNotNull<UScriptStruct_*> *this,UScriptStruct **param_1)

{
  UScriptStruct *pUVar1;
  
  pUVar1 = *param_1;
  this->Val = pUVar1;
  if (pUVar1 != (UScriptStruct *)0x0) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// TNotNull<UScriptStruct_const_*><UScriptStruct_*> @ 1470cf8f0

TNotNull<UScriptStruct_const_*> * __thiscall
TNotNull<UScriptStruct_const_*>::TNotNull<UScriptStruct_const_*><UScriptStruct_*>
          (TNotNull<UScriptStruct_const_*> *this,UScriptStruct **param_1)

{
  UScriptStruct *pUVar1;
  
  pUVar1 = *param_1;
  this->Val = pUVar1;
  if (pUVar1 != (UScriptStruct *)0x0) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// TNotNull<UScriptStruct_const_*><UScriptStruct_*> @ 1470cf920

TNotNull<UScriptStruct_const_*> * __thiscall
TNotNull<UScriptStruct_const_*>::TNotNull<UScriptStruct_const_*><UScriptStruct_*>
          (TNotNull<UScriptStruct_const_*> *this,TNotNull<UScriptStruct_*> *param_1)

{
  this->Val = param_1->Val;
  return this;
}

