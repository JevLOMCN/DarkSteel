// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 5

// FStateTreeStrongTaskRef @ 14d52cb50

FStateTreeStrongTaskRef * __thiscall
FStateTreeStrongTaskRef::FStateTreeStrongTaskRef
          (FStateTreeStrongTaskRef *this,
          TStrongObjectPtr<UStateTree_const_,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
          param_1,FStateTreeTaskBase *param_2,FStateTreeIndex16 param_3,FGuid *param_4)

{
  UObjectBase *this_00;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  (this->StateTree).Object = (UObject *)0x0;
  this_00 = *(UObjectBase **)param_1.Object;
  if (this_00 != (UObjectBase *)0x0) {
    UObjectBase::AddRef(this_00);
    (this->StateTree).Object = (UObject *)this_00;
  }
  this->Task = param_2;
  (this->NodeIndex).Value = param_3.Value;
  uVar1 = param_4->B;
  uVar2 = param_4->C;
  uVar3 = param_4->D;
  (this->NodeId).A = param_4->A;
  (this->NodeId).B = uVar1;
  (this->NodeId).C = uVar2;
  (this->NodeId).D = uVar3;
                    /* WARNING: Load size is inaccurate */
  if (*param_1.Object != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(*param_1.Object);
    *(undefined8 *)param_1.Object = 0;
  }
  return this;
}

// GetStateTree @ 14d531120

UStateTree * __thiscall FStateTreeStrongTaskRef::GetStateTree(FStateTreeStrongTaskRef *this)

{
  bool bVar1;
  
  bVar1 = IsValid(this);
  if (bVar1) {
    return (UStateTree *)(this->StateTree).Object;
  }
  return (UStateTree *)0x0;
}

// GetTask @ 14d5312f0

FStateTreeTaskBase * __thiscall FStateTreeStrongTaskRef::GetTask(FStateTreeStrongTaskRef *this)

{
  bool bVar1;
  
  bVar1 = IsValid(this);
  if (bVar1) {
    return this->Task;
  }
  return (FStateTreeTaskBase *)0x0;
}

// IsValid @ 14d532120

bool __thiscall FStateTreeStrongTaskRef::IsValid(FStateTreeStrongTaskRef *this)

{
  uint uVar1;
  FGuid *pFVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 local_res8 [32];
  FGuid local_18;
  
  if ((this->Task != (FStateTreeTaskBase *)0x0) && ((this->StateTree).Object != (UObject *)0x0)) {
    pFVar2 = UStateTree::GetNodeIdFromIndex
                       ((UStateTree *)(this->StateTree).Object,&local_18,
                        (FStateTreeIndex16)(this->NodeIndex).Value);
    uVar3 = (this->NodeId).C ^ pFVar2->C;
    uVar5 = (this->NodeId).D ^ pFVar2->D;
    uVar4 = (this->NodeId).B ^ pFVar2->B;
    uVar1 = pFVar2->A ^ (this->NodeId).A;
    if (((uVar5 != 0 || uVar3 != 0) || uVar4 != 0) || uVar1 != 0) {
      `FStateTreeStrongTaskRef::IsValid'::__l5::<lambda_1>::operator()(local_res8);
    }
    return ((uVar5 == 0 && uVar3 == 0) && uVar4 == 0) && uVar1 == 0;
  }
  return false;
}

// operator() @ 1505801b0

bool __thiscall `FStateTreeStrongTaskRef::IsValid'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5986073470088249388>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5986073470088249388>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

