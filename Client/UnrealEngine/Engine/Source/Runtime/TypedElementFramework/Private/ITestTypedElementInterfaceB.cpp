// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 5

// ~ITestTypedElementInterfaceB @ 142c9a8a0

void __thiscall
ITestTypedElementInterfaceB::~ITestTypedElementInterfaceB(ITestTypedElementInterfaceB *this)

{
  *this = (ITestTypedElementInterfaceB)&___7ITestTypedElementInterfaceB__6B_;
  return;
}

// MarkAsTested @ 142cb0850

bool __thiscall
ITestTypedElementInterfaceB::MarkAsTested
          (ITestTypedElementInterfaceB *this,FScriptTypedElementHandle *param_1)

{
  return false;
}

// MarkAsTested @ 142cb0860

bool __thiscall
ITestTypedElementInterfaceB::MarkAsTested
          (ITestTypedElementInterfaceB *this,FTypedElementHandle *param_1)

{
  return false;
}

// _getUObject @ 142cc43a0

UObject * __thiscall ITestTypedElementInterfaceB::_getUObject(ITestTypedElementInterfaceB *this)

{
  return (UObject *)0x0;
}

// execMarkAsTested @ 142cc4770

void __cdecl
ITestTypedElementInterfaceB::execMarkAsTested(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  void **ppvVar3;
  void *local_res8;
  
  local_res8 = (void *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  ppvVar3 = &local_res8;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar3 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x10))(param_1,ppvVar3);
  *(undefined1 *)param_3 = uVar2;
  if (local_res8 != (void *)0x0) {
    *(int *)((longlong)local_res8 + 8) = *(int *)((longlong)local_res8 + 8) + -1;
    if (*(int *)((longlong)local_res8 + 8) == 0) {
      ::operator_delete(local_res8,0x10);
    }
  }
  return;
}

