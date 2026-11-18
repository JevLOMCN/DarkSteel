// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 2

// Call<1> @ 142cd2a00

void __thiscall
UE::Editor::DataStorage::Queries::TQueryFunction<void>::Call<1>
          (TQueryFunction<void> *this,IContextContract *param_1,IQueryFunctionResponse *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  code *local_res20;
  
  local_res20 = `UE::Editor::DataStorage::Queries::TQueryFunctionBase<void>::CallInternal<1>'::__l2
                ::<lambda_1>::<lambda_invoker_cdecl>;
  Core::Private::Function::CheckCallable(*(void **)&this->field_0x30);
  pcVar1 = *(code **)&this->field_0x30;
  plVar3 = (longlong *)&this->field_0x40;
  if (*(longlong **)&this->field_0x58 != (longlong *)0x0) {
    plVar3 = *(longlong **)&this->field_0x58;
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,local_res8,param_1,param_2,&local_res20);
  return;
}

// ~TQueryFunction<void> @ 142ce5470

void __thiscall
UE::Editor::DataStorage::Queries::TQueryFunction<void>::~TQueryFunction<void>
          (TQueryFunction<void> *this)

{
  longlong *plVar1;
  
  if (*(longlong *)&this->field_0x30 != 0) {
    plVar1 = (longlong *)&this->field_0x40;
    if (*(longlong **)&this->field_0x58 != (longlong *)0x0) {
      plVar1 = *(longlong **)&this->field_0x58;
    }
                    /* WARNING: Could not recover jumptable at 0x000142ce5489. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

