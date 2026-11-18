// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// StaticStruct @ 14a2c7950

UScriptStruct * __cdecl FRigCurrentAndInitialDirtyState::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigCurrentAndInitialDirtyState.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigCurrentAndInitialDirtyState.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigCurrentAndInitialDirtyState,(UObject *)pUVar1
                         ,L"RigCurrentAndInitialDirtyState");
  }
  return Z_Registration_Info_UScriptStruct_FRigCurrentAndInitialDirtyState.OuterSingleton;
}

// operator= @ 14a2e0580

FRigCurrentAndInitialDirtyState * __thiscall
FRigCurrentAndInitialDirtyState::operator=
          (FRigCurrentAndInitialDirtyState *this,FRigCurrentAndInitialDirtyState *param_1)

{
  FRigLocalAndGlobalDirtyState::operator=(&this->Current,&param_1->Current);
  FRigLocalAndGlobalDirtyState::operator=(&this->Initial,&param_1->Initial);
  return this;
}

// GetDirtyFlag @ 14a30e1f0

bool * __thiscall
FRigCurrentAndInitialDirtyState::GetDirtyFlag(FRigCurrentAndInitialDirtyState *this,Type param_1)

{
  code *pcVar1;
  bool bVar2;
  bool *pbVar3;
  
  if (param_1 == InitialLocal) {
    pbVar3 = (this->Initial).Local.Storage;
  }
  else if (param_1 == CurrentLocal) {
    pbVar3 = (this->Current).Local.Storage;
  }
  else if (param_1 == CurrentGlobal) {
    pbVar3 = (this->Current).Global.Storage;
  }
  else {
    pbVar3 = (this->Initial).Global.Storage;
  }
  if (pbVar3 == (bool *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4557919968548617682>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyElements.cpp"
                       ,0x22e,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pbVar3 = (bool *)(*pcVar1)();
      return pbVar3;
    }
    pbVar3 = &bDefaultDirtyFlag;
  }
  return pbVar3;
}

// IsDirty @ 14a327b80

bool __thiscall
FRigCurrentAndInitialDirtyState::IsDirty(FRigCurrentAndInitialDirtyState *this,Type param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool *pbVar4;
  
  if (param_1 == InitialLocal) {
    pbVar4 = (this->Initial).Local.Storage;
  }
  else if (param_1 == CurrentLocal) {
    pbVar4 = (this->Current).Local.Storage;
  }
  else if (param_1 == CurrentGlobal) {
    pbVar4 = (this->Current).Global.Storage;
  }
  else {
    pbVar4 = (this->Initial).Global.Storage;
  }
  if (pbVar4 == (bool *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4557919968548617693>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyElements.cpp"
                       ,0x223,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    pbVar4 = &bDefaultDirtyFlag;
  }
  return *pbVar4;
}

// LinkStorage @ 14a329f60

void __thiscall
FRigCurrentAndInitialDirtyState::LinkStorage
          (FRigCurrentAndInitialDirtyState *this,TArrayView<bool,int> *param_1)

{
  int iVar1;
  
  iVar1 = (this->Current).Local.StorageIndex;
  if ((-1 < iVar1) && (iVar1 < param_1->ArrayNum)) {
    (this->Current).Local.Storage = param_1->DataPtr + iVar1;
  }
  iVar1 = (this->Current).Global.StorageIndex;
  if ((-1 < iVar1) && (iVar1 < param_1->ArrayNum)) {
    (this->Current).Global.Storage = param_1->DataPtr + iVar1;
  }
  iVar1 = (this->Initial).Local.StorageIndex;
  if ((-1 < iVar1) && (iVar1 < param_1->ArrayNum)) {
    (this->Initial).Local.Storage = param_1->DataPtr + iVar1;
  }
  iVar1 = (this->Initial).Global.StorageIndex;
  if ((-1 < iVar1) && (iVar1 < param_1->ArrayNum)) {
    (this->Initial).Global.Storage = param_1->DataPtr + iVar1;
  }
  return;
}

// MarkClean @ 14a3316d0

void __thiscall
FRigCurrentAndInitialDirtyState::MarkClean(FRigCurrentAndInitialDirtyState *this,Type param_1)

{
  code *pcVar1;
  bool bVar2;
  bool *pbVar3;
  
  if (param_1 == InitialLocal) {
    pbVar3 = (this->Initial).Local.Storage;
  }
  else if (param_1 == CurrentLocal) {
    pbVar3 = (this->Current).Local.Storage;
  }
  else if (param_1 == CurrentGlobal) {
    pbVar3 = (this->Current).Global.Storage;
  }
  else {
    pbVar3 = (this->Initial).Global.Storage;
  }
  if (pbVar3 == (bool *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4557919968548617682>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyElements.cpp"
                       ,0x22e,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pbVar3 = &bDefaultDirtyFlag;
  }
  *pbVar3 = false;
  return;
}

// MarkDirty @ 14a331740

void __thiscall
FRigCurrentAndInitialDirtyState::MarkDirty(FRigCurrentAndInitialDirtyState *this,Type param_1)

{
  code *pcVar1;
  bool bVar2;
  bool *pbVar3;
  
  if (param_1 == InitialLocal) {
    pbVar3 = (this->Initial).Global.Storage;
  }
  else if (param_1 == CurrentLocal) {
    pbVar3 = (this->Current).Global.Storage;
  }
  else if (param_1 == CurrentGlobal) {
    pbVar3 = (this->Current).Local.Storage;
  }
  else {
    pbVar3 = (this->Initial).Local.Storage;
  }
  if (pbVar3 == (bool *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4557919968548617682>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyElements.cpp"
                       ,0x22e,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pbVar3 = &bDefaultDirtyFlag;
  }
  if ((*pbVar3 != false) &&
     (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3065123850539761247>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Rigs\\RigHierarchyElements.h"
                         ,0x1a1,
                         "!(GetDirtyFlag(ERigTransformType::SwapLocalAndGlobal(InTransformType)))"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_1 == InitialLocal) {
    pbVar3 = (this->Initial).Local.Storage;
  }
  else if (param_1 == CurrentLocal) {
    pbVar3 = (this->Current).Local.Storage;
  }
  else if (param_1 == CurrentGlobal) {
    pbVar3 = (this->Current).Global.Storage;
  }
  else {
    pbVar3 = (this->Initial).Global.Storage;
  }
  if (pbVar3 == (bool *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4557919968548617682>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyElements.cpp"
                       ,0x22e,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pbVar3 = &bDefaultDirtyFlag;
  }
  *pbVar3 = true;
  return;
}

// UnlinkStorage @ 14a35be60

void __thiscall
FRigCurrentAndInitialDirtyState::UnlinkStorage
          (FRigCurrentAndInitialDirtyState *this,FRigReusableElementStorage<bool> *param_1)

{
  FRigReusableElementStorage<bool>::Deallocate
            (param_1,&(this->Current).Local.StorageIndex,&(this->Current).Local.Storage);
  FRigReusableElementStorage<bool>::Deallocate(param_1,(int *)this,&(this->Current).Global.Storage);
  FRigReusableElementStorage<bool>::Deallocate
            (param_1,&(this->Initial).Local.StorageIndex,&(this->Initial).Local.Storage);
  FRigReusableElementStorage<bool>::Deallocate
            (param_1,(int *)&this->Initial,&(this->Initial).Global.Storage);
  return;
}

