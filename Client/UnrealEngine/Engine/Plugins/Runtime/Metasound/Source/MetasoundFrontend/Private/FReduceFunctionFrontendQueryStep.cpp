// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 2

// FReduceFunctionFrontendQueryStep @ 14ae5ac60

FReduceFunctionFrontendQueryStep * __thiscall
Metasound::FrontendQueryPrivate::FReduceFunctionFrontendQueryStep::FReduceFunctionFrontendQueryStep
          (FReduceFunctionFrontendQueryStep *this,
          TFunction<void___cdecl(Metasound::FFrontendQueryKey_const_&,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_&)>
          *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  this->_padding_ =
       (longlong)&___7FReduceFunctionFrontendQueryStep_FrontendQueryPrivate_Metasound__6B_;
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

// Reduce @ 14ae7ecf0

void __thiscall
Metasound::FrontendQueryPrivate::FReduceFunctionFrontendQueryStep::Reduce
          (FReduceFunctionFrontendQueryStep *this,FFrontendQueryKey *param_1,
          TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  longlong *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  longlong *plVar3;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Func);
  plVar1 = *(longlong **)&(this->Func).field_0x28;
  UNRECOVERED_JUMPTABLE = *(code **)&this->Func;
  plVar3 = (longlong *)&(this->Func).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar3 = plVar1;
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014ae7ed4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2,param_1,param_2);
  return;
}

