// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 8

// ~ITestTypedElementInterfaceA @ 142c9a880

void __thiscall
ITestTypedElementInterfaceA::~ITestTypedElementInterfaceA(ITestTypedElementInterfaceA *this)

{
  *this = (ITestTypedElementInterfaceA)&___7ITestTypedElementInterfaceA__6B_;
  return;
}

// GetDisplayName @ 142cad3e0

FText * __thiscall
ITestTypedElementInterfaceA::GetDisplayName
          (ITestTypedElementInterfaceA *this,FText *__return_storage_ptr__,
          FScriptTypedElementHandle *param_1)

{
  FText::FText(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetDisplayName @ 142cad400

FText * __thiscall
ITestTypedElementInterfaceA::GetDisplayName
          (ITestTypedElementInterfaceA *this,FText *__return_storage_ptr__,
          FTypedElementHandle *param_1)

{
  FText::FText(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// SetDisplayName @ 142cbb210

bool __thiscall
ITestTypedElementInterfaceA::SetDisplayName
          (ITestTypedElementInterfaceA *this,FScriptTypedElementHandle *param_1,FText *param_2,
          bool param_3)

{
  ITextData *pIVar1;
  
  pIVar1 = (param_2->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return false;
}

// SetDisplayName @ 142cbb230

bool __thiscall
ITestTypedElementInterfaceA::SetDisplayName
          (ITestTypedElementInterfaceA *this,FTypedElementHandle *param_1,FText *param_2,
          bool param_3)

{
  ITextData *pIVar1;
  
  pIVar1 = (param_2->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return false;
}

// _getUObject @ 142cc4390

UObject * __thiscall ITestTypedElementInterfaceA::_getUObject(ITestTypedElementInterfaceA *this)

{
  return (UObject *)0x0;
}

// execGetDisplayName @ 142cc4430

void __cdecl
ITestTypedElementInterfaceA::execGetDisplayName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FText *pFVar2;
  void **ppvVar3;
  void *local_res8;
  longlong *local_18 [2];
  
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
  pFVar2 = (FText *)(**(code **)(*(longlong *)param_1 + 0x10))(param_1,local_18,ppvVar3);
  FText::operator=(param_3,pFVar2);
  if (local_18[0] != (longlong *)0x0) {
    (**(code **)(*local_18[0] + 0x10))();
  }
  if (local_res8 != (void *)0x0) {
    *(int *)((longlong)local_res8 + 8) = *(int *)((longlong)local_res8 + 8) + -1;
    if (*(int *)((longlong)local_res8 + 8) == 0) {
      ::operator_delete(local_res8,0x10);
    }
  }
  return;
}

// execSetDisplayName @ 142cc4840

void __cdecl
ITestTypedElementInterfaceA::execSetDisplayName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined1 uVar3;
  void **ppvVar4;
  bool bVar5;
  int local_res8 [2];
  undefined1 local_res10 [8];
  void *local_res18;
  FText local_48;
  ITextData *local_38;
  uint local_30;
  
  local_res18 = (void *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  ppvVar4 = &local_res18;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar4 = (void **)param_2->MostRecentPropertyAddress;
  }
  FText::FText(&local_48);
  FTextProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar5 = local_res8[0] != 0;
  local_38 = local_48.TextData.Reference;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x20);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 8))
              (local_48.TextData.Reference,local_res10);
  }
  local_30 = local_48.Flags;
  uVar3 = (*pcVar2)(param_1,ppvVar4,&local_38,bVar5);
  *(undefined1 *)param_3 = uVar3;
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if (local_res18 != (void *)0x0) {
    *(int *)((longlong)local_res18 + 8) = *(int *)((longlong)local_res18 + 8) + -1;
    if (*(int *)((longlong)local_res18 + 8) == 0) {
      ::operator_delete(local_res18,0x10);
    }
  }
  return;
}

