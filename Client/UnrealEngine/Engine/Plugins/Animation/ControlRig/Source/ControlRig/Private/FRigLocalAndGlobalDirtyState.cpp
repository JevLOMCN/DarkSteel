// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 4

// StaticStruct @ 14a2c7890

UScriptStruct * __cdecl FRigLocalAndGlobalDirtyState::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigLocalAndGlobalDirtyState.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigLocalAndGlobalDirtyState.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigLocalAndGlobalDirtyState,(UObject *)pUVar1,
                         L"RigLocalAndGlobalDirtyState");
  }
  return Z_Registration_Info_UScriptStruct_FRigLocalAndGlobalDirtyState.OuterSingleton;
}

// operator= @ 14a2e06f0

FRigLocalAndGlobalDirtyState * __thiscall
FRigLocalAndGlobalDirtyState::operator=
          (FRigLocalAndGlobalDirtyState *this,FRigLocalAndGlobalDirtyState *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRigLocalAndGlobalDirtyState *pFVar3;
  bool *pbVar4;
  
  if ((this->Local).Storage != (bool *)0x0) {
    pbVar4 = (param_1->Local).Storage;
    if (pbVar4 == (bool *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4557919968548617693>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyElements.cpp"
                         ,0x223,"false");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FRigLocalAndGlobalDirtyState *)(*pcVar1)();
        return pFVar3;
      }
      pbVar4 = &bDefaultDirtyFlag;
    }
    *(this->Local).Storage = *pbVar4;
  }
  if ((this->Global).Storage != (bool *)0x0) {
    pbVar4 = (param_1->Global).Storage;
    if (pbVar4 == (bool *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4557919968548617693>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyElements.cpp"
                         ,0x223,"false");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FRigLocalAndGlobalDirtyState *)(*pcVar1)();
        return pFVar3;
      }
      pbVar4 = &bDefaultDirtyFlag;
    }
    *(this->Global).Storage = *pbVar4;
  }
  return this;
}

// LinkStorage @ 14a32a070

void __thiscall
FRigLocalAndGlobalDirtyState::LinkStorage
          (FRigLocalAndGlobalDirtyState *this,TArrayView<bool,int> *param_1)

{
  int iVar1;
  
  iVar1 = (this->Local).StorageIndex;
  if ((-1 < iVar1) && (iVar1 < param_1->ArrayNum)) {
    (this->Local).Storage = param_1->DataPtr + iVar1;
  }
  iVar1 = (this->Global).StorageIndex;
  if ((-1 < iVar1) && (iVar1 < param_1->ArrayNum)) {
    (this->Global).Storage = param_1->DataPtr + iVar1;
  }
  return;
}

// UnlinkStorage @ 14a35bf40

void __thiscall
FRigLocalAndGlobalDirtyState::UnlinkStorage
          (FRigLocalAndGlobalDirtyState *this,FRigReusableElementStorage<bool> *param_1)

{
  FRigReusableElementStorage<bool>::Deallocate
            (param_1,&(this->Local).StorageIndex,&(this->Local).Storage);
  FRigReusableElementStorage<bool>::Deallocate(param_1,(int *)this,&(this->Global).Storage);
  return;
}

