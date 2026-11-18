// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 7

// AddExternalVariable @ 14a0cac50

FName __thiscall
FRigVMUnitNodeCreatedContext::AddExternalVariable
          (FRigVMUnitNodeCreatedContext *this,FRigVMExternalVariable *param_1,FString *param_2)

{
  code *pcVar1;
  FScriptContainerElement *pFVar2;
  char cVar3;
  FString *pFVar4;
  longlong *plVar5;
  FString *in_R9;
  FScriptContainerElement *local_b8;
  int local_b0;
  int local_ac;
  FReadAccessScope local_a8;
  FScriptContainerElement *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  FReadAccessScope local_58;
  FScriptContainerElement *local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->CreateExternalVariableDelegate,&local_a8);
  if (((*(int *)&(this->CreateExternalVariableDelegate).field_0x10 == 0) ||
      (plVar5 = *(longlong **)&(this->CreateExternalVariableDelegate).field_0x8,
      plVar5 == (longlong *)0x0)) || (cVar3 = (**(code **)(*plVar5 + 0x38))(), cVar3 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_a8);
    param_1->_padding_ = 0;
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_a8);
    pFVar4 = ::FString::FString((FString *)&local_a8,in_R9);
    local_88 = (param_2->Data).AllocatorInstance.Data;
    uStack_80._0_4_ = (param_2->Data).ArrayNum;
    uStack_80._4_4_ = (param_2->Data).ArrayMax;
    local_78 = param_2[1].Data.AllocatorInstance.Data;
    uStack_70._0_4_ = param_2[1].Data.ArrayNum;
    uStack_70._4_4_ = param_2[1].Data.ArrayMax;
    local_68 = param_2[2].Data.AllocatorInstance.Data;
    uStack_60._0_4_ = param_2[2].Data.ArrayNum;
    uStack_60._4_4_ = param_2[2].Data.ArrayMax;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->CreateExternalVariableDelegate,&local_58);
    plVar5 = (longlong *)0x0;
    if (*(int *)&(this->CreateExternalVariableDelegate).field_0x10 != 0) {
      plVar5 = *(longlong **)&(this->CreateExternalVariableDelegate).field_0x8;
    }
    local_38 = local_88;
    uStack_30 = uStack_80;
    pcVar1 = *(code **)(*plVar5 + 0x60);
    local_b8 = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b0 = (pFVar4->Data).ArrayNum;
    local_ac = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
    local_28 = (undefined4)local_78;
    uStack_24 = local_78._4_4_;
    uStack_20 = (undefined4)uStack_70;
    uStack_1c = uStack_70._4_4_;
    local_18 = (undefined4)local_68;
    uStack_14 = local_68._4_4_;
    uStack_10 = (undefined4)uStack_60;
    uStack_c = uStack_60._4_4_;
    (*pcVar1)(plVar5,param_1,&local_38,&local_b8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
    pFVar2 = (pFVar4->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
  }
  pFVar2 = (in_R9->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return (FName)param_1;
}

// BindPinToExternalVariable @ 14a0ce770

bool __thiscall
FRigVMUnitNodeCreatedContext::BindPinToExternalVariable
          (FRigVMUnitNodeCreatedContext *this,FString *param_1,FString *param_2)

{
  code *pcVar1;
  FScriptContainerElement *pFVar2;
  ForAnyElementType _Src;
  char cVar3;
  undefined1 uVar4;
  FString *pFVar5;
  longlong *plVar6;
  int iVar7;
  ForAnyElementType local_98;
  undefined8 local_90;
  FScriptContainerElement *local_88;
  int local_80;
  int local_7c;
  FString local_78;
  FString local_68;
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->BindPinToExternalVariableDelegate,&local_58);
  if (((*(int *)&(this->BindPinToExternalVariableDelegate).field_0x10 != 0) &&
      (plVar6 = *(longlong **)&(this->BindPinToExternalVariableDelegate).field_0x8,
      plVar6 != (longlong *)0x0)) && (cVar3 = (**(code **)(*plVar6 + 0x38))(), cVar3 != '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
    ::FName::ToString(&this->NodeName,&local_78);
    ::FString::PrintfImpl(&local_68,L"%s.%s");
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    pFVar5 = ::FString::FString((FString *)&local_58,param_2);
    _Src.Data = local_68.Data.AllocatorInstance.Data;
    plVar6 = (longlong *)0x0;
    local_98.Data = (FScriptContainerElement *)0x0;
    iVar7 = local_68.Data.ArrayNum;
    local_90 = CONCAT44(local_90._4_4_,iVar7);
    if (iVar7 == 0) {
      local_90 = local_68.Data._8_8_ & 0xffffffff;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar7,0,&local_98,iVar7,(int *)((longlong)&local_90 + 4));
      memcpy(local_98.Data,_Src.Data,(longlong)iVar7 * 2);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->BindPinToExternalVariableDelegate,&local_40);
    if (*(int *)&(this->BindPinToExternalVariableDelegate).field_0x10 != 0) {
      plVar6 = *(longlong **)&(this->BindPinToExternalVariableDelegate).field_0x8;
    }
    pcVar1 = *(code **)(*plVar6 + 0x60);
    local_88 = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_80 = (pFVar5->Data).ArrayNum;
    local_7c = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
    local_78.Data.AllocatorInstance.Data = local_98.Data;
    local_78.Data.ArrayNum = (int)local_90;
    local_78.Data.ArrayMax = local_90._4_4_;
    local_90 = 0;
    local_98.Data = (FScriptContainerElement *)0x0;
    uVar4 = (*pcVar1)(plVar6,&local_78,&local_88);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_40);
    if (local_98.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data);
    }
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    pFVar2 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (param_2->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    return (bool)uVar4;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return false;
}

// FindFirstVariableOfType @ 14a0d8b40

FName __thiscall
FRigVMUnitNodeCreatedContext::FindFirstVariableOfType
          (FRigVMUnitNodeCreatedContext *this,UObject *param_1)

{
  ForAnyElementType FVar1;
  undefined8 uVar2;
  longlong in_R8;
  TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  
  GetExternalVariables(this,&local_48);
  for (FVar1.Data = local_48.AllocatorInstance.Data;
      FVar1.Data != local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 0x30;
      FVar1.Data = FVar1.Data + 0x30) {
    uVar2 = *(undefined8 *)FVar1.Data;
    uStack_30 = *(undefined8 *)(FVar1.Data + 8);
    local_38 = uVar2;
    if (*(longlong *)(FVar1.Data + 0x18) == in_R8) goto LAB_14a0d8b94;
  }
  uVar2 = 0;
LAB_14a0d8b94:
  *(undefined8 *)param_1 = uVar2;
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return (FName)param_1;
}

// FindFirstVariableOfType @ 14a0d8bc0

FName __thiscall
FRigVMUnitNodeCreatedContext::FindFirstVariableOfType
          (FRigVMUnitNodeCreatedContext *this,FName param_1)

{
  ForAnyElementType FVar1;
  undefined8 uVar2;
  longlong in_R8;
  TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  
  GetExternalVariables(this,&local_48);
  for (FVar1.Data = local_48.AllocatorInstance.Data;
      FVar1.Data != local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 0x30;
      FVar1.Data = FVar1.Data + 0x30) {
    uVar2 = *(undefined8 *)FVar1.Data;
    uStack_30 = *(undefined8 *)(FVar1.Data + 8);
    local_38 = uVar2;
    if (*(longlong *)(FVar1.Data + 0x10) == in_R8) goto LAB_14a0d8c14;
  }
  uVar2 = 0;
LAB_14a0d8c14:
  *(undefined8 *)param_1 = uVar2;
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return param_1;
}

// FindVariable @ 14a0de830

FRigVMExternalVariable * __thiscall
FRigVMUnitNodeCreatedContext::FindVariable
          (FRigVMUnitNodeCreatedContext *this,FRigVMExternalVariable *__return_storage_ptr__,
          FName param_1)

{
  FName FVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  FName FVar5;
  ForAnyElementType FVar6;
  TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> local_18;
  
  GetExternalVariables(this,&local_18);
  FVar6.Data = local_18.AllocatorInstance.Data;
  do {
    if ((FName *)FVar6.Data ==
        (FName *)(local_18.AllocatorInstance.Data + (longlong)local_18.ArrayNum * 0x30)) {
      __return_storage_ptr__->_padding_ = 0;
      __return_storage_ptr__->_padding_ = 0;
      __return_storage_ptr__->_padding_ = 0;
      __return_storage_ptr__->_padding_ = 0;
      __return_storage_ptr__->_padding_ = 0;
      __return_storage_ptr__->Memory = (uchar *)0x0;
LAB_14a0de8ac:
      if ((FName *)local_18.AllocatorInstance.Data != (FName *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    FVar1 = *(FName *)((longlong)FVar6.Data + 8);
    FVar2 = *(FName *)((longlong)FVar6.Data + 0x10);
    FVar3 = *(FName *)((longlong)FVar6.Data + 0x18);
    FVar4 = *(FName *)((longlong)FVar6.Data + 0x20);
    FVar5 = *(FName *)((longlong)FVar6.Data + 0x28);
    if (*(FName *)FVar6.Data == param_1) {
      __return_storage_ptr__->_padding_ = (longlong)*(FName *)FVar6.Data;
      __return_storage_ptr__->_padding_ = (longlong)FVar1;
      __return_storage_ptr__->_padding_ = (longlong)FVar2;
      __return_storage_ptr__->_padding_ = (longlong)FVar3;
      __return_storage_ptr__->_padding_ = (longlong)FVar4;
      __return_storage_ptr__->Memory = (uchar *)FVar5;
      goto LAB_14a0de8ac;
    }
    FVar6.Data = FVar6.Data + 0x30;
  } while( true );
}

// GetExternalVariables @ 14a0e4f30

TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMUnitNodeCreatedContext::GetExternalVariables
          (FRigVMUnitNodeCreatedContext *this,
          TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  char cVar3;
  longlong *plVar4;
  TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> local_38;
  FReadAccessScope local_28;
  
  plVar4 = (longlong *)0x0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->AllExternalVariablesDelegate,&local_28);
  if (((*(int *)&(this->AllExternalVariablesDelegate).field_0x10 == 0) ||
      (plVar1 = *(longlong **)&(this->AllExternalVariablesDelegate).field_0x8,
      plVar1 == (longlong *)0x0)) || (cVar3 = (**(code **)(*plVar1 + 0x38))(), cVar3 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->AllExternalVariablesDelegate,&local_28);
    if (*(int *)&(this->AllExternalVariablesDelegate).field_0x10 != 0) {
      plVar4 = *(longlong **)&(this->AllExternalVariablesDelegate).field_0x8;
    }
    (**(code **)(*plVar4 + 0x60))(plVar4,&local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    if (__return_storage_ptr__ != &local_38) {
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (__return_storage_ptr__->AllocatorInstance).Data = local_38.AllocatorInstance.Data;
      __return_storage_ptr__->ArrayNum = local_38.ArrayNum;
      __return_storage_ptr__->ArrayMax = local_38.ArrayMax;
      local_38.ArrayNum = 0;
      local_38.ArrayMax = 0;
      local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// IsValid @ 14a0fa010

bool __thiscall FRigVMUnitNodeCreatedContext::IsValid(FRigVMUnitNodeCreatedContext *this)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  if (this->Reason != Unknown) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->AllExternalVariablesDelegate,&local_28);
    if ((*(int *)&(this->AllExternalVariablesDelegate).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(this->AllExternalVariablesDelegate).field_0x8,
       plVar1 != (longlong *)0x0)) {
      cVar2 = (**(code **)(*plVar1 + 0x38))();
      if (cVar2 != '\0') {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_28);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this->CreateExternalVariableDelegate,&local_28);
        if ((*(int *)&(this->CreateExternalVariableDelegate).field_0x10 != 0) &&
           (plVar1 = *(longlong **)&(this->CreateExternalVariableDelegate).field_0x8,
           plVar1 != (longlong *)0x0)) {
          cVar2 = (**(code **)(*plVar1 + 0x38))();
          if (cVar2 != '\0') {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_28);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &this->BindPinToExternalVariableDelegate,&local_28);
            if ((*(int *)&(this->BindPinToExternalVariableDelegate).field_0x10 != 0) &&
               (plVar1 = *(longlong **)&(this->BindPinToExternalVariableDelegate).field_0x8,
               plVar1 != (longlong *)0x0)) {
              cVar2 = (**(code **)(*plVar1 + 0x38))();
              if (cVar2 != '\0') {
                TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
                ~FReadAccessScope(&local_28);
                return true;
              }
            }
          }
        }
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  return false;
}

