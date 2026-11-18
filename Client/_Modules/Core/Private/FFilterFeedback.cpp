// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// Serialize @ 141a917c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FFilterFeedback::Serialize(FFilterFeedback *this,wchar_t *param_1,Type param_2,FName *param_3)

{
  code *pcVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  wchar_t *local_res8;
  Type local_res18 [8];
  
  local_res8 = param_1;
  local_res18[0] = param_2;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Handler);
  pcVar1 = *(code **)&this->Handler;
  plVar2 = *(longlong **)&(this->Handler).field_0x28;
  plVar5 = (longlong *)&(this->Handler).field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar5 = plVar2;
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  cVar3 = (*pcVar1)(uVar4,&local_res8,local_res18,param_3);
  if (cVar3 == '\0') {
    (**(code **)(this->OldFeedback->_padding_ + 0x10))(this->OldFeedback,param_1,param_2,param_3);
  }
  return;
}

// Serialize @ 141a91860

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FFilterFeedback::Serialize
          (FFilterFeedback *this,wchar_t *param_1,Type param_2,FName *param_3,double param_4)

{
  code *pcVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  wchar_t *local_res8;
  Type local_res18 [8];
  
  local_res8 = param_1;
  local_res18[0] = param_2;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Handler);
  pcVar1 = *(code **)&this->Handler;
  plVar2 = *(longlong **)&(this->Handler).field_0x28;
  plVar5 = (longlong *)&(this->Handler).field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar5 = plVar2;
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  cVar3 = (*pcVar1)(uVar4,&local_res8,local_res18,param_3);
  if (cVar3 == '\0') {
    (**(code **)(this->OldFeedback->_padding_ + 8))
              (this->OldFeedback,param_1,param_2,param_3,param_4);
  }
  return;
}

