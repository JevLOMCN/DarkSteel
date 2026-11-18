// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 2

// StaticStruct @ 14a06b090

UScriptStruct * __cdecl FRigVMPredicateBranch::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMPredicateBranch.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMPredicateBranch.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMPredicateBranch,(UObject *)pUVar1,
                         L"RigVMPredicateBranch");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMPredicateBranch.OuterSingleton;
}

// Execute @ 14a0911b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ERigVMExecuteResult __thiscall
FRigVMPredicateBranch::Execute(FRigVMPredicateBranch *this,FRigVMExtendedExecuteContext *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  int iVar5;
  URigVM *this_00;
  FName FVar6;
  FName FVar7;
  FName FVar8;
  code *pcVar9;
  bool bVar10;
  ERigVMExecuteResult EVar11;
  ERigVMExecuteResult EVar12;
  FRigVMExecuteContext *pFVar13;
  
  if (this->VM == (URigVM *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("VM",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMByteCode.cpp"
                        ,0x11,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      EVar11 = (*pcVar9)();
      return EVar11;
    }
  }
  if ((this->BranchInfo).InstructionIndex != -1) {
    this_00 = this->VM;
    pFVar13 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
    uVar4 = pFVar13->NumExecutions;
    pFVar13->NumExecutions = uVar4;
    EVar11 = param_1->CurrentExecuteResult;
    param_1->CurrentExecuteResult = EVar11;
    FVar6 = param_1->CurrentEntryName;
    param_1->CurrentEntryName = FVar6;
    bVar10 = param_1->bCurrentlyRunningRootEntry;
    param_1->bCurrentlyRunningRootEntry = bVar10;
    FVar7 = pFVar13->EventName;
    pFVar13->EventName = FVar7;
    FVar8 = pFVar13->FunctionName;
    pFVar13->FunctionName = FVar8;
    iVar5 = pFVar13->InstructionIndex;
    pFVar13->InstructionIndex = iVar5;
    dVar1 = pFVar13->DeltaTime;
    pFVar13->DeltaTime = dVar1;
    dVar2 = pFVar13->AbsoluteTime;
    pFVar13->AbsoluteTime = dVar2;
    dVar3 = pFVar13->FramesPerSecond;
    pFVar13->FramesPerSecond = dVar3;
    EVar12 = URigVM::ExecuteInstructions
                       (this_00,param_1,(this->BranchInfo).FirstInstruction,
                        (this->BranchInfo).LastInstruction);
    pFVar13->FramesPerSecond = dVar3;
    pFVar13->AbsoluteTime = dVar2;
    pFVar13->DeltaTime = dVar1;
    pFVar13->InstructionIndex = iVar5;
    pFVar13->FunctionName = FVar8;
    pFVar13->EventName = FVar7;
    param_1->bCurrentlyRunningRootEntry = bVar10;
    param_1->CurrentEntryName = FVar6;
    param_1->CurrentExecuteResult = EVar11;
    pFVar13->NumExecutions = uVar4;
    return EVar12;
  }
  return Failed;
}

