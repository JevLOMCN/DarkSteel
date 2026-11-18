// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 2

// FMapFunctionFrontendQueryStep @ 14ae59820

FMapFunctionFrontendQueryStep * __thiscall
Metasound::FrontendQueryPrivate::FMapFunctionFrontendQueryStep::FMapFunctionFrontendQueryStep
          (FMapFunctionFrontendQueryStep *this,
          TFunction<Metasound::FFrontendQueryKey___cdecl(Metasound::FFrontendQueryEntry_const_&)>
          *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7FMapFunctionFrontendQueryStep_FrontendQueryPrivate_Metasound__6B_
  ;
  lVar1 = *(longlong *)param_1;
  *(undefined8 *)&(this->Func).field_0x28 = 0;
  *(longlong *)&this->Func = lVar1;
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar2)();
  }
  if (*(longlong *)param_1 != 0) {
    plVar3 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar3 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  return this;
}

// Map @ 14ae7bda0

FFrontendQueryKey * __thiscall
Metasound::FrontendQueryPrivate::FMapFunctionFrontendQueryStep::Map
          (FMapFunctionFrontendQueryStep *this,FFrontendQueryKey *__return_storage_ptr__,
          FFrontendQueryEntry *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Func);
  plVar1 = *(longlong **)&(this->Func).field_0x28;
  pcVar2 = *(code **)&this->Func;
  plVar4 = (longlong *)&(this->Func).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(__return_storage_ptr__,uVar3,param_1);
  return __return_storage_ptr__;
}

