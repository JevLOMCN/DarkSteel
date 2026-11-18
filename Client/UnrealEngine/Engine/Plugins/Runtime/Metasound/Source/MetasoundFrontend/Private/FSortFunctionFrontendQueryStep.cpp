// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 2

// FSortFunctionFrontendQueryStep @ 14ae5b0b0

FSortFunctionFrontendQueryStep * __thiscall
Metasound::FrontendQueryPrivate::FSortFunctionFrontendQueryStep::FSortFunctionFrontendQueryStep
          (FSortFunctionFrontendQueryStep *this,
          TFunction<bool___cdecl(Metasound::FFrontendQueryEntry_const_&,Metasound::FFrontendQueryEntry_const_&)>
          *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  this->_padding_ =
       (longlong)&___7FSortFunctionFrontendQueryStep_FrontendQueryPrivate_Metasound__6B_;
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

// Sort @ 14ae8aa40

bool __thiscall
Metasound::FrontendQueryPrivate::FSortFunctionFrontendQueryStep::Sort
          (FSortFunctionFrontendQueryStep *this,FFrontendQueryEntry *param_1,
          FFrontendQueryEntry *param_2)

{
  longlong *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Func);
  plVar1 = *(longlong **)&(this->Func).field_0x28;
  UNRECOVERED_JUMPTABLE = *(code **)&this->Func;
  plVar4 = (longlong *)&(this->Func).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014ae8aa9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar3,param_1,param_2);
  return (bool)uVar2;
}

