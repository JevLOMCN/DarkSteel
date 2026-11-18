// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a2c77e0

UScriptStruct * __cdecl FRigTransformDirtyState::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigTransformDirtyState.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigTransformDirtyState.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigTransformDirtyState,(UObject *)pUVar1,
                         L"RigTransformDirtyState");
  }
  return Z_Registration_Info_UScriptStruct_FRigTransformDirtyState.OuterSingleton;
}

// operator= @ 14a2e0a00

FRigTransformDirtyState * __thiscall
FRigTransformDirtyState::operator=(FRigTransformDirtyState *this,FRigTransformDirtyState *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRigTransformDirtyState *pFVar3;
  bool *pbVar4;
  
  if (this->Storage != (bool *)0x0) {
    pbVar4 = param_1->Storage;
    if (pbVar4 == (bool *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4557919968548617693>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyElements.cpp"
                         ,0x223,"false");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FRigTransformDirtyState *)(*pcVar1)();
        return pFVar3;
      }
      pbVar4 = &bDefaultDirtyFlag;
    }
    *this->Storage = *pbVar4;
  }
  return this;
}

// Get @ 14a307cd0

bool * __thiscall FRigTransformDirtyState::Get(FRigTransformDirtyState *this)

{
  code *pcVar1;
  bool bVar2;
  bool *pbVar3;
  
  pbVar3 = this->Storage;
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

// Get @ 14a307d20

bool * __thiscall FRigTransformDirtyState::Get(FRigTransformDirtyState *this)

{
  code *pcVar1;
  bool bVar2;
  bool *pbVar3;
  
  pbVar3 = this->Storage;
  if (pbVar3 == (bool *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4557919968548617693>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyElements.cpp"
                       ,0x223,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pbVar3 = (bool *)(*pcVar1)();
      return pbVar3;
    }
    pbVar3 = &bDefaultDirtyFlag;
  }
  return pbVar3;
}

// LinkStorage @ 14a32a0f0

void __thiscall
FRigTransformDirtyState::LinkStorage(FRigTransformDirtyState *this,TArrayView<bool,int> *param_1)

{
  int iVar1;
  
  iVar1 = this->StorageIndex;
  if ((-1 < iVar1) && (iVar1 < param_1->ArrayNum)) {
    this->Storage = param_1->DataPtr + iVar1;
  }
  return;
}

// Set @ 14a349c00

bool __thiscall FRigTransformDirtyState::Set(FRigTransformDirtyState *this,bool param_1)

{
  bool *pbVar1;
  
  pbVar1 = this->Storage;
  if ((pbVar1 != (bool *)0x0) && (*pbVar1 != param_1)) {
    *pbVar1 = param_1;
    return true;
  }
  return false;
}

// UnlinkStorage @ 14a35bfc0

void __thiscall
FRigTransformDirtyState::UnlinkStorage
          (FRigTransformDirtyState *this,FRigReusableElementStorage<bool> *param_1)

{
  FRigReusableElementStorage<bool>::Deallocate(param_1,&this->StorageIndex,&this->Storage);
  return;
}

