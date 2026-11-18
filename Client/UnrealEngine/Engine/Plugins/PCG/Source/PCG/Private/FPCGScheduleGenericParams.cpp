// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// FPCGScheduleGenericParams @ 14988cdd0

FPCGScheduleGenericParams * __thiscall
FPCGScheduleGenericParams::FPCGScheduleGenericParams
          (FPCGScheduleGenericParams *this,TFunction<bool___cdecl(FPCGContext_*)> *param_1,
          IPCGGraphExecutionSource *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  *(undefined8 *)&this->Operation = *(undefined8 *)param_1;
  *(undefined8 *)&(this->Operation).field_0x28 = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&param_1->field_0x28 = 0;
  uVar1 = *(undefined4 *)&param_1->field_0x14;
  uVar2 = *(undefined4 *)&param_1->field_0x18;
  uVar3 = *(undefined4 *)&param_1->field_0x1c;
  *(undefined4 *)&(this->Operation).field_0x10 = *(undefined4 *)&param_1->field_0x10;
  *(undefined4 *)&(this->Operation).field_0x14 = uVar1;
  *(undefined4 *)&(this->Operation).field_0x18 = uVar2;
  *(undefined4 *)&(this->Operation).field_0x1c = uVar3;
  *(undefined8 *)&(this->Operation).field_0x20 = *(undefined8 *)&param_1->field_0x20;
  if (*(longlong *)&this->Operation != 0) {
    *(undefined8 *)param_1 = 0;
  }
  this->ExecutionSource = param_2;
  *(undefined8 *)&this->AbortOperation = 0;
  *(undefined8 *)&(this->AbortOperation).field_0x28 = 0;
  (this->ExecutionDependencies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExecutionDependencies).ArrayNum = 0;
  (this->ExecutionDependencies).ArrayMax = 0;
  (this->DataDependencies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataDependencies).ArrayNum = 0;
  (this->DataDependencies).ArrayMax = 0;
  this->bSupportBasePointDataInput = false;
  this->bCanExecuteOnlyOnMainThread = true;
  if (*(longlong *)param_1 != 0) {
    plVar4 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return this;
}

// ~FPCGScheduleGenericParams @ 149891230

void __thiscall
FPCGScheduleGenericParams::~FPCGScheduleGenericParams(FPCGScheduleGenericParams *this)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  pFVar1 = (this->DataDependencies).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ExecutionDependencies).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (*(longlong *)&this->AbortOperation != 0) {
    plVar2 = *(longlong **)&(this->AbortOperation).field_0x28;
    plVar3 = (longlong *)&(this->AbortOperation).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)&this->Operation != 0) {
    plVar2 = *(longlong **)&(this->Operation).field_0x28;
    plVar3 = (longlong *)&(this->Operation).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
                    /* WARNING: Could not recover jumptable at 0x000149891291. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// FPCGScheduleGenericParams @ 1499c2c40

FPCGScheduleGenericParams * __thiscall
FPCGScheduleGenericParams::FPCGScheduleGenericParams
          (FPCGScheduleGenericParams *this,TFunction<bool___cdecl(FPCGContext_*)> *param_1,
          TFunction<void___cdecl(FPCGContext_*)> *param_2,IPCGGraphExecutionSource *param_3,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_4,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_5,bool param_6)

{
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  *(undefined8 *)&this->Operation = *(undefined8 *)param_1;
  *(undefined8 *)&(this->Operation).field_0x28 = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&param_1->field_0x28 = 0;
  uVar5 = *(undefined8 *)&param_1->field_0x18;
  *(undefined8 *)&(this->Operation).field_0x10 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&(this->Operation).field_0x18 = uVar5;
  *(undefined8 *)&(this->Operation).field_0x20 = *(undefined8 *)&param_1->field_0x20;
  if (*(longlong *)&this->Operation != 0) {
    *(undefined8 *)param_1 = 0;
  }
  this->ExecutionSource = param_3;
  *(undefined8 *)&this->AbortOperation = *(undefined8 *)param_2;
  *(undefined8 *)&(this->AbortOperation).field_0x28 = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar5 = *(undefined8 *)&param_2->field_0x18;
  *(undefined8 *)&(this->AbortOperation).field_0x10 = *(undefined8 *)&param_2->field_0x10;
  *(undefined8 *)&(this->AbortOperation).field_0x18 = uVar5;
  *(undefined8 *)&(this->AbortOperation).field_0x20 = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)&this->AbortOperation != 0) {
    *(undefined8 *)param_2 = 0;
  }
  pTVar1 = &this->ExecutionDependencies;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ExecutionDependencies).ArrayMax;
  iVar3 = param_4->ArrayNum;
  pFVar4 = (param_4->AllocatorInstance).Data;
  (this->ExecutionDependencies).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 3);
  }
  pTVar1 = &this->DataDependencies;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->DataDependencies).ArrayMax;
  iVar3 = param_5->ArrayNum;
  pFVar4 = (param_5->AllocatorInstance).Data;
  (this->DataDependencies).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 3);
  }
  this->bSupportBasePointDataInput = param_6;
  this->bCanExecuteOnlyOnMainThread = true;
  if (*(longlong *)param_1 != 0) {
    plVar6 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar6 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (*(longlong *)param_2 != 0) {
    plVar6 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar6 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  return this;
}

