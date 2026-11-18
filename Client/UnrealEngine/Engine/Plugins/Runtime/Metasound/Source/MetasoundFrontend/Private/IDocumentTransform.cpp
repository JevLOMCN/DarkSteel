// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 2

// ~IDocumentTransform @ 14ad9ec30

void __thiscall
Metasound::Frontend::IDocumentTransform::~IDocumentTransform(IDocumentTransform *this)

{
  return;
}

// Transform @ 14ae8cda0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Metasound::Frontend::IDocumentTransform::Transform
          (IDocumentTransform *this,FMetasoundFrontendDocument *param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  TSharedRef<Metasound::Frontend::IDocumentController,1> *pTVar3;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  FDocumentAccessPtr local_a8;
  TSharedRef<Metasound::Frontend::IDocumentController,1> local_68;
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  MakeAccessPtr<Metasound::Frontend::FDocumentAccessPtr,FMetasoundFrontendDocument>
            ((FDocumentAccessPtr *)local_58,&param_1->AccessPoint,param_1);
  local_a8._56_8_ = 0;
  pcVar1 = *(code **)((longlong)*this + 0x10);
  local_a8._0_8_ = local_58._0_8_;
  local_a8._16_8_ = local_58._16_8_;
  if (local_58._16_8_ != 0) {
    plVar4 = (longlong *)(local_58 + 0x20);
    if ((longlong *)local_58._56_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_58._56_8_;
    }
    (**(code **)*plVar4)(plVar4,&local_a8.field_0x20);
  }
  pTVar3 = FDocumentController::CreateDocumentHandle(&local_68,&local_a8);
  uVar2 = (*pcVar1)(this,pTVar3);
  if (local_58._16_8_ != 0) {
    plVar4 = (longlong *)(local_58 + 0x20);
    if ((longlong *)local_58._56_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_58._56_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return (bool)uVar2;
}

