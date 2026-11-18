// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 2

// Execute @ 14a0d7170

ERigVMExecuteResult __thiscall
FRigVMLazyBranch::Execute(FRigVMLazyBranch *this,FRigVMExtendedExecuteContext *param_1)

{
  longlong *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar2;
  ERigVMExecuteResult EVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  if (this->VM == (URigVM *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("VM",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                       ,0x5c,L"");
    if (bVar2) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      EVar3 = (*UNRECOVERED_JUMPTABLE)();
      return EVar3;
    }
  }
  if ((this->BranchInfo).InstructionIndex != -1) {
    EVar3 = URigVM::ExecuteBranch(this->VM,param_1,&this->BranchInfo);
    return EVar3;
  }
  if (*(longlong *)&this->FunctionPtr == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FunctionPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                       ,0x62,L"");
    if (bVar2) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      EVar3 = (*UNRECOVERED_JUMPTABLE)();
      return EVar3;
    }
  }
  UE::Core::Private::Function::CheckCallable(*(void **)&this->FunctionPtr);
  plVar1 = *(longlong **)&(this->FunctionPtr).field_0x28;
  UNRECOVERED_JUMPTABLE = *(code **)&this->FunctionPtr;
  plVar5 = (longlong *)&(this->FunctionPtr).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar5 = plVar1;
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014a0d722a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar3 = (*UNRECOVERED_JUMPTABLE)(uVar4);
  return EVar3;
}

// ExecuteIfRequired @ 14a0d7260

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
FRigVMLazyBranch::ExecuteIfRequired
          (FRigVMLazyBranch *this,FRigVMExtendedExecuteContext *param_1,uint param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  ERigVMExecuteResult EVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  FRigVMExecuteContext *pFVar8;
  undefined8 uVar9;
  longlong *plVar10;
  ForElementType<FSetElementId> FVar11;
  TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
  *this_00;
  uint *puVar12;
  uint uVar13;
  undefined4 local_res8 [2];
  int local_res10 [2];
  uint local_res18 [2];
  uint *local_38;
  undefined4 *local_30;
  
  local_res18[0] = param_2;
  if ((this->VM == (URigVM *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("VM",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                         ,0x68,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    EVar4 = (*pcVar2)();
    return EVar4;
  }
  cVar5 = (**(code **)((param_1->PublicDataScope)._padding_ + 0x38))();
  if (cVar5 == '\0') {
    uVar13 = 0;
  }
  else {
    pFVar8 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
    uVar13 = pFVar8->NumExecutions;
  }
  uVar7 = (this->BranchInfo).Index;
  uVar6 = 0;
  if ((int)uVar7 < (param_1->LazyBranchExecuteState).ArrayNum) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    EVar4 = (*pcVar2)();
    return EVar4;
  }
  this_00 = (TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
             *)((param_1->LazyBranchExecuteState).AllocatorInstance.Data +
               (longlong)(int)uVar7 * 0x50);
  local_res8[0] = 0xffffffff;
  if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
    FVar11 = (this_00->Hash).SecondaryData;
    if (FVar11 == (ForElementType<FSetElementId>)0x0) {
      FVar11 = (ForElementType<FSetElementId>)&this_00->Hash;
    }
    uVar7 = *(uint *)((longlong)FVar11 + (ulonglong)(this_00->HashSize - 1U & local_res18[0]) * 4);
    if (uVar7 != 0xffffffff) {
      do {
        puVar12 = (uint *)((longlong)(int)uVar7 * 0x10 + *(longlong *)&this_00->Elements);
        if (*puVar12 == local_res18[0]) {
          if (puVar12 != (uint *)0x0) goto LAB_14a0d73bc;
          break;
        }
        uVar7 = puVar12[2];
      } while (uVar7 != 0xffffffff);
    }
  }
  local_38 = local_res18;
  local_30 = local_res8;
  TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TPairInitializer<unsigned_int_const_&,unsigned_int_&&>_>
            (this_00,(uint)local_res10,
             (TPairInitializer<unsigned_int_const_&,unsigned_int_&&> *)(ulonglong)local_res18[0],
             (bool *)&local_38);
  puVar12 = (uint *)((longlong)local_res10[0] * 0x10 + *(longlong *)&this_00->Elements);
LAB_14a0d73bc:
  if (uVar13 == puVar12[1]) {
    EVar4 = Succeeded;
  }
  else {
    if ((this->VM == (URigVM *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("VM",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                           ,0x5c,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
    if ((this->BranchInfo).InstructionIndex == -1) {
      if ((*(longlong *)&this->FunctionPtr == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("FunctionPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                             ,0x62,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar4 = (*pcVar2)();
        return EVar4;
      }
      UE::Core::Private::Function::CheckCallable(*(void **)&this->FunctionPtr);
      plVar1 = *(longlong **)&(this->FunctionPtr).field_0x28;
      pcVar2 = *(code **)&this->FunctionPtr;
      plVar10 = (longlong *)&(this->FunctionPtr).field_0x10;
      if (plVar1 != (longlong *)0x0) {
        plVar10 = plVar1;
      }
      uVar9 = (**(code **)(*plVar10 + 8))();
      EVar4 = (*pcVar2)(uVar9);
      puVar12[1] = uVar13;
    }
    else {
      EVar4 = URigVM::ExecuteBranch(this->VM,param_1,&this->BranchInfo);
      puVar12[1] = uVar13;
    }
  }
  return EVar4;
}

