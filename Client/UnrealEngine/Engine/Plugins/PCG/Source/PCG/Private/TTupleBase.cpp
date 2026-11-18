// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,FPCGDataCollection,FPCGDataCollection> @ 14973d360

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1>,FPCGDataCollection,FPCGDataCollection>::
~TTupleBase<TIntegerSequence<unsigned_int,0,1>,FPCGDataCollection,FPCGDataCollection>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1>,FPCGDataCollection,FPCGDataCollection>
           *this)

{
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  DestructItems<FPCGTaggedData,int>(*(FPCGTaggedData **)&this->field_0x30,*(int *)&this->field_0x38)
  ;
  if (*(void **)&this->field_0x30 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x30);
  }
  if (*(void **)&this->field_0x18 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x18);
  }
  DestructItems<FPCGTaggedData,int>(*(FPCGTaggedData **)this,*(int *)&this->field_0x8);
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
    return;
  }
  return;
}

// ApplyAfter<<lambda_27>_&,IConsoleVariable_*> @ 149c98340

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int>_>::
ApplyAfter<<lambda_27>_&,IConsoleVariable_*>
          (TTupleBase<TIntegerSequence<unsigned_int>_> *this,<lambda_27> *param_1,
          IConsoleVariable **param_2)

{
  IConsoleVariable *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  pIVar1 = *param_2;
  if (2 < (byte)LogPCG._0_1_) {
    Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)&PTR_u_pcg_Cache_Memor_151fb77b0,(FLogCategoryBase *)&LogPCG
              );
  }
  if (pIVar1 == (IConsoleVariable *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InVariable",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphCache.cpp"
                       ,0x4b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (**(code **)(*(longlong *)pIVar1 + 200))(pIVar1);
  IConsoleVariable::Set<int>
            ((IConsoleVariable *)CVarCacheMemoryBudgetEditorMB._padding_,iVar4,ECVF_SetByCode,
             (FName)0x0);
  IConsoleVariable::Set<int>
            ((IConsoleVariable *)CVarCacheMemoryBudgetRuntimeMB._padding_,iVar4,ECVF_SetByCode,
             (FName)0x0);
  return;
}

