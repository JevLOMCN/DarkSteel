// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 45

// AddUniqueImpl<UObject_const_*> @ 14a074920

int __thiscall
TArray<UObject_const_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UObject_const_*>
          (TArray<UObject_const_*,TSizedDefaultAllocator<32>_> *this,UObject **param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar5 = pFVar1;
    do {
      if (*(UObject **)pFVar5 == *param_1) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(UObject **)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// operator= @ 14a07c410

TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_>::operator=
          (TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_> *this,
          TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
    }
  }
  return this;
}

// operator= @ 14a07c4b0

TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> *this,
          TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x58);
    }
  }
  return this;
}

// operator= @ 14a07c550

TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_> *this,
          TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x28);
    }
  }
  return this;
}

// operator= @ 14a07c5f0

TArray<FRigVMMemoryHandle,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FRigVMMemoryHandle,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FRigVMMemoryHandle,TSizedDefaultAllocator<32>_> *this,
          TArray<FRigVMMemoryHandle,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 5);
    }
  }
  return this;
}

// operator= @ 14a07c690

TArray<FRigVMPropertyPathDescription,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FRigVMPropertyPathDescription,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FRigVMPropertyPathDescription,TSizedDefaultAllocator<32>_> *this,
          TArray<FRigVMPropertyPathDescription,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FRigVMPropertyPathDescription *pFVar3;
  
  if (this != param_1) {
    DestructItems<FRigVMPropertyPathDescription,int>
              ((FRigVMPropertyPathDescription *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FRigVMPropertyPathDescription *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FRigVMPropertyPathDescription,FRigVMPropertyPathDescription,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// operator= @ 14a07c730

TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *this,
          TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FRigVMTemplateArgumentInfo *pFVar3;
  
  if (this != param_1) {
    DestructItems<FRigVMTemplateArgumentInfo,int>
              ((FRigVMTemplateArgumentInfo *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FRigVMTemplateArgumentInfo *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,0x10,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FRigVMTemplateArgumentInfo,FRigVMTemplateArgumentInfo,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// AddZeroed @ 14a07ff30

int __thiscall
TArray<FRigVMDispatchFactory_const_*,TSizedDefaultAllocator<32>_>::AddZeroed
          (TArray<FRigVMDispatchFactory_const_*,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,param_1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  memset((this->AllocatorInstance).Data + (longlong)iVar1 * 8,0,(longlong)param_1 << 3);
  return iVar1;
}

// Empty @ 14a090330

void __thiscall
TArray<FRigVMBranchInfo,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FRigVMBranchInfo,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14a090380

void __thiscall
TArray<FRigVMGraphFunctionData,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FRigVMGraphFunctionData,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<FRigVMGraphFunctionData,int>
              ((FRigVMGraphFunctionData *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x460,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14a0903f0

void __thiscall
TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FRigVMOperand,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (6,2,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14a090440

void __thiscall
TArray<FRigVMParameter,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FRigVMParameter,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<FRigVMParameter,int>
              ((FRigVMParameter *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14a0904b0

void __thiscall
TArray<FRigVMPropertyPathDescription,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FRigVMPropertyPathDescription,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<FRigVMPropertyPathDescription,int>
              ((FRigVMPropertyPathDescription *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// RemoveAtImpl @ 14a0a2830

void __thiscall
TArray<FRigVMInstructionSetExecuteState,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FRigVMInstructionSetExecuteState,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FScriptContainerElement *_Dst;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x50;
  DestructItems<FRigVMInstructionSetExecuteState,int>
            ((FRigVMInstructionSetExecuteState *)_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + (longlong)param_2 * 0x50,(longlong)iVar1 * 0x50);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14a0a28b0

void __thiscall
TArray<FRigVMLazyBranch,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FRigVMLazyBranch,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  int iVar1;
  FRigVMLazyBranch *_Dst;
  
  _Dst = (FRigVMLazyBranch *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x60);
  DestructItems<FRigVMLazyBranch,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x60);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14a0a2930

void __thiscall
TArray<FRigVMPropertyPath,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FRigVMPropertyPath,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  int iVar1;
  FRigVMPropertyPath *_Dst;
  
  _Dst = (FRigVMPropertyPath *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x20);
  DestructItems<FRigVMPropertyPath,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 5);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// Reset @ 14a0a29b0

void __thiscall
TArray<FRigVMInstructionSetExecuteState,TSizedDefaultAllocator<32>_>::Reset
          (TArray<FRigVMInstructionSetExecuteState,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  piVar1 = &this->ArrayMax;
  pFVar2 = (this->AllocatorInstance).Data;
  if (param_1 <= *piVar1) {
    DestructItems<FRigVMInstructionSetExecuteState,int>
              ((FRigVMInstructionSetExecuteState *)pFVar2,this->ArrayNum);
    this->ArrayNum = 0;
    return;
  }
  DestructItems<FRigVMInstructionSetExecuteState,int>
            ((FRigVMInstructionSetExecuteState *)pFVar2,this->ArrayNum);
  this->ArrayNum = 0;
  if (*piVar1 != param_1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,param_1,&this->AllocatorInstance,0,piVar1);
  }
  return;
}

// Reset @ 14a0a2a40

void __thiscall
TArray<FRigVMLazyBranch,TSizedDefaultAllocator<32>_>::Reset
          (TArray<FRigVMLazyBranch,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int *piVar1;
  FRigVMLazyBranch *pFVar2;
  
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  piVar1 = &this->ArrayMax;
  pFVar2 = (FRigVMLazyBranch *)(this->AllocatorInstance).Data;
  if (param_1 <= *piVar1) {
    DestructItems<FRigVMLazyBranch,int>(pFVar2,this->ArrayNum);
    this->ArrayNum = 0;
    return;
  }
  DestructItems<FRigVMLazyBranch,int>(pFVar2,this->ArrayNum);
  this->ArrayNum = 0;
  if (*piVar1 != param_1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,param_1,&this->AllocatorInstance,0,piVar1);
  }
  return;
}

// TArray<FRigVMFunctionArgument,TSizedDefaultAllocator<32>_><FRigVMCompiledInFunctionArgument_const_,int> @ 14a0af6a0

TArray<FRigVMFunctionArgument,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FRigVMFunctionArgument,TSizedDefaultAllocator<32>_>::
TArray<FRigVMFunctionArgument,TSizedDefaultAllocator<32>_><FRigVMCompiledInFunctionArgument_const_,int>
          (TArray<FRigVMFunctionArgument,TSizedDefaultAllocator<32>_> *this,
          TArrayView<FRigVMCompiledInFunctionArgument_const_,int> *param_1)

{
  int iVar1;
  FRigVMCompiledInFunctionArgument *pFVar2;
  
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = param_1->ArrayNum;
  pFVar2 = param_1->DataPtr;
  this->ArrayNum = iVar1;
  if (iVar1 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x38,8,iVar1,0,&this->AllocatorInstance,iVar1,&this->ArrayMax);
  ConstructItems<FRigVMFunctionArgument,FRigVMCompiledInFunctionArgument,int>
            ((this->AllocatorInstance).Data,pFVar2,iVar1);
  return this;
}

// AddUniqueImpl<TRigVMTypeIndex_const_&> @ 14a0b2690

int __thiscall
TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>::AddUniqueImpl<TRigVMTypeIndex_const_&>
          (TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *this,TRigVMTypeIndex *param_1)

{
  TRigVMTypeIndex *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TRigVMTypeIndex *pTVar6;
  
  pTVar1 = (TRigVMTypeIndex *)(this->AllocatorInstance).Data;
  if (pTVar1 != pTVar1 + this->ArrayNum) {
    pTVar6 = pTVar1;
    do {
      if (pTVar6->Index == param_1->Index) {
        iVar5 = (int)(((longlong)pTVar6 - (longlong)pTVar1) / 0xc);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      pTVar6 = pTVar6 + 1;
    } while (pTVar6 != pTVar1 + this->ArrayNum);
  }
  if (((pTVar1 <= param_1) && (param_1 < pTVar1 + this->ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar5;
  }
  this->ArrayNum = iVar5 + 1;
  pFVar2 = (this->AllocatorInstance).Data;
  *(FName *)(pFVar2 + (longlong)iVar5 * 0xc) = param_1->Name;
  *(int *)(pFVar2 + (longlong)iVar5 * 0xc + 8) = param_1->Index;
  return iVar5;
}

// AddUniqueImpl<UScriptStruct_*> @ 14a0b27d0

int __thiscall
TArray<UScriptStruct_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UScriptStruct_*>
          (TArray<UScriptStruct_*,TSizedDefaultAllocator<32>_> *this,UScriptStruct **param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar5 = pFVar1;
    do {
      if (*(UScriptStruct **)pFVar5 == *param_1) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(UScriptStruct **)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// AddUniqueImpl<TRigVMTypeIndex> @ 14a0b28d0

int __thiscall
TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>::AddUniqueImpl<TRigVMTypeIndex>
          (TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *this,TRigVMTypeIndex *param_1)

{
  TRigVMTypeIndex *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TRigVMTypeIndex *pTVar6;
  
  pTVar1 = (TRigVMTypeIndex *)(this->AllocatorInstance).Data;
  if (pTVar1 != pTVar1 + this->ArrayNum) {
    pTVar6 = pTVar1;
    do {
      if (pTVar6->Index == param_1->Index) {
        iVar5 = (int)(((longlong)pTVar6 - (longlong)pTVar1) / 0xc);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      pTVar6 = pTVar6 + 1;
    } while (pTVar6 != pTVar1 + this->ArrayNum);
  }
  if (((pTVar1 <= param_1) && (param_1 < pTVar1 + this->ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar5;
  }
  this->ArrayNum = iVar5 + 1;
  pFVar2 = (this->AllocatorInstance).Data;
  *(FName *)(pFVar2 + (longlong)iVar5 * 0xc) = param_1->Name;
  *(int *)(pFVar2 + (longlong)iVar5 * 0xc + 8) = param_1->Index;
  return iVar5;
}

// TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> @ 14a0bc2c0

TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>::
TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>
          (TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *this,
          initializer_list<TRigVMTypeIndex> *param_1)

{
  TRigVMTypeIndex *_Src;
  longlong lVar1;
  int iVar2;
  
  _Src = param_1->_First;
  lVar1 = (longlong)param_1->_Last - (longlong)_Src;
  lVar1 = lVar1 / 6 + (lVar1 >> 0x3f);
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (int)(lVar1 >> 1) - (int)(lVar1 >> 0x3f);
  this->ArrayNum = iVar2;
  if (iVar2 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,iVar2,0,&this->AllocatorInstance,iVar2,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 * 0xc);
  return this;
}

// operator= @ 14a0c3510

TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> *this,
          TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x30);
    }
  }
  return this;
}

// operator= @ 14a0c35b0

TArray<FRigVMFunctionCompilationPropertyDescription,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FRigVMFunctionCompilationPropertyDescription,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FRigVMFunctionCompilationPropertyDescription,TSizedDefaultAllocator<32>_> *this,
          TArray<FRigVMFunctionCompilationPropertyDescription,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FRigVMFunctionCompilationPropertyDescription *pFVar3;
  
  if (this != param_1) {
    DestructItems<FRigVMFunctionCompilationPropertyDescription,int>
              ((FRigVMFunctionCompilationPropertyDescription *)(this->AllocatorInstance).Data,
               this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FRigVMFunctionCompilationPropertyDescription *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FRigVMFunctionCompilationPropertyDescription,FRigVMFunctionCompilationPropertyDescription,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// operator= @ 14a0c3650

TArray<FRigVMFunctionCompilationPropertyPath,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FRigVMFunctionCompilationPropertyPath,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FRigVMFunctionCompilationPropertyPath,TSizedDefaultAllocator<32>_> *this,
          TArray<FRigVMFunctionCompilationPropertyPath,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FRigVMFunctionCompilationPropertyPath *pFVar3;
  
  if (this != param_1) {
    DestructItems<FRigVMFunctionCompilationPropertyPath,int>
              ((FRigVMFunctionCompilationPropertyPath *)(this->AllocatorInstance).Data,
               this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FRigVMFunctionCompilationPropertyPath *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FRigVMFunctionCompilationPropertyPath,FRigVMFunctionCompilationPropertyPath,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// operator= @ 14a0c36f0

TArray<FRigVMGraphFunctionData,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FRigVMGraphFunctionData,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FRigVMGraphFunctionData,TSizedDefaultAllocator<32>_> *this,
          TArray<FRigVMGraphFunctionData,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FRigVMGraphFunctionData *pFVar3;
  
  if (this != param_1) {
    DestructItems<FRigVMGraphFunctionData,int>
              ((FRigVMGraphFunctionData *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FRigVMGraphFunctionData *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x460,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FRigVMGraphFunctionData,FRigVMGraphFunctionData,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// operator= @ 14a0c3790

TArray<FRigVMTag,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FRigVMTag,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FRigVMTag,TSizedDefaultAllocator<32>_> *this,
          TArray<FRigVMTag,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FRigVMTag *pFVar3;
  
  if (this != param_1) {
    DestructItems<FRigVMTag,int>((FRigVMTag *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FRigVMTag *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FRigVMTag,FRigVMTag,int>((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// operator= @ 14a0c3830

TArray<FRigVMTemplateArgument,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FRigVMTemplateArgument,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FRigVMTemplateArgument,TSizedDefaultAllocator<32>_> *this,
          TArray<FRigVMTemplateArgument,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FRigVMTemplateArgument *pFVar3;
  
  if (this != param_1) {
    DestructItems<FRigVMTemplateArgument,int>
              ((FRigVMTemplateArgument *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FRigVMTemplateArgument *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,0x10,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FRigVMTemplateArgument,FRigVMTemplateArgument,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// operator= @ 14a0c38d0

TArray<FRigVMRegistry_NoLock::FTypeInfo,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FRigVMRegistry_NoLock::FTypeInfo,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FRigVMRegistry_NoLock::FTypeInfo,TSizedDefaultAllocator<32>_> *this,
          TArray<FRigVMRegistry_NoLock::FTypeInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FTypeInfo *pFVar2;
  
  if (this != param_1) {
    pFVar2 = (FTypeInfo *)(param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    ConstructItems<FRigVMRegistry_NoLock::FTypeInfo,FRigVMRegistry_NoLock::FTypeInfo,int>
              ((this->AllocatorInstance).Data,pFVar2,iVar1);
  }
  return this;
}

// operator= @ 14a0c3960

TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>::operator=
          (TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *this,
          TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0xc);
    }
  }
  return this;
}

// Empty @ 14a0d5de0

void __thiscall
TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14a0d5e30

void __thiscall
TArray<FRigVMFunctionCompilationPropertyDescription,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FRigVMFunctionCompilationPropertyDescription,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  if (-1 < param_1) {
    DestructItems<FRigVMFunctionCompilationPropertyDescription,int>
              ((FRigVMFunctionCompilationPropertyDescription *)(this->AllocatorInstance).Data,
               this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14a0d5ea0

void __thiscall
TArray<FRigVMFunctionCompilationPropertyPath,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FRigVMFunctionCompilationPropertyPath,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  if (-1 < param_1) {
    DestructItems<FRigVMFunctionCompilationPropertyPath,int>
              ((FRigVMFunctionCompilationPropertyPath *)(this->AllocatorInstance).Data,
               this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14a0d5f10

void __thiscall
TArray<FRigVMGraphFunctionArgument,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FRigVMGraphFunctionArgument,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<FRigVMGraphFunctionArgument,int>
              ((FRigVMGraphFunctionArgument *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xb0,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14a0d5f80

void __thiscall
TArray<FRigVMPinCategory,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FRigVMPinCategory,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<FRigVMPinCategory,int>
              ((FRigVMPinCategory *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14a0d5ff0

void __thiscall
TArray<FRigVMRegister,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FRigVMRegister,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x24,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14a0d6040

void __thiscall
TArray<FRigVMRegisterOffset,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FRigVMRegisterOffset,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<FRigVMRegisterOffset,int>
              ((FRigVMRegisterOffset *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14a0d60b0

void __thiscall
TArray<FRigVMTag,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FRigVMTag,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<FRigVMTag,int>((FRigVMTag *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Find @ 14a0d8030

int __thiscall
TArray<FRigVMRegisterOffset,TSizedDefaultAllocator<32>_>::Find
          (TArray<FRigVMRegisterOffset,TSizedDefaultAllocator<32>_> *this,
          FRigVMRegisterOffset *param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  bool bVar12;
  
  iVar8 = this->ArrayNum;
  pFVar3 = (this->AllocatorInstance).Data;
  pFVar10 = pFVar3;
  do {
    if (pFVar10 == pFVar3 + (longlong)iVar8 * 0x48) {
      return -1;
    }
    iVar1 = *(int *)(pFVar10 + 8);
    if ((((iVar1 == (param_1->Segments).ArrayNum) &&
         (*(ushort *)(pFVar10 + 0x34) == param_1->ElementSize)) &&
        (*(UScriptStruct **)(pFVar10 + 0x20) == (param_1->ScriptStruct).field0_0x0.DebugPtr)) &&
       (*(UScriptStruct **)(pFVar10 + 0x28) == (param_1->ParentScriptStruct).field0_0x0.DebugPtr)) {
      iVar6 = *(int *)(pFVar10 + 0x40);
      iVar2 = (param_1->CachedSegmentPath).Data.ArrayNum;
      if (iVar6 == iVar2) {
        if (1 < iVar6) {
          iVar6 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(pFVar10 + 0x38),
                             (wchar_t *)(param_1->CachedSegmentPath).Data.AllocatorInstance.Data);
          bVar12 = iVar6 == 0;
          goto LAB_14a0d80ce;
        }
      }
      else {
        bVar12 = iVar6 + iVar2 == 1;
LAB_14a0d80ce:
        if (!bVar12) goto LAB_14a0d81c3;
      }
      uVar9 = 0;
      lVar11 = 0;
      if (iVar1 < 1) {
LAB_14a0d81a1:
        return (int)(((longlong)pFVar10 - (longlong)pFVar3) / 0x48);
      }
      while( true ) {
        uVar7 = 0;
        if ((int)uVar9 < (param_1->Segments).ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar5 = (code *)swi(3);
          iVar8 = (*pcVar5)();
          return iVar8;
        }
        pFVar4 = (param_1->Segments).AllocatorInstance.Data;
        iVar1 = *(int *)(pFVar10 + 8);
        uVar7 = 0;
        if ((int)uVar9 < iVar1) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar5 = (code *)swi(3);
          iVar8 = (*pcVar5)();
          return iVar8;
        }
        if (*(int *)(*(longlong *)pFVar10 + lVar11 * 4) != *(int *)(pFVar4 + lVar11 * 4)) break;
        uVar9 = uVar9 + 1;
        lVar11 = lVar11 + 1;
        if (iVar1 <= (int)uVar9) goto LAB_14a0d81a1;
      }
    }
LAB_14a0d81c3:
    pFVar10 = pFVar10 + 0x48;
  } while( true );
}

// RemoveAtImpl @ 14a107a70

void __thiscall
TArray<FRigVMTypeCacheScope_NoLock,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FRigVMTypeCacheScope_NoLock,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FRigVMTypeCacheScope_NoLock *_Dst;
  
  _Dst = (FRigVMTypeCacheScope_NoLock *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x30);
  DestructItems<FRigVMTypeCacheScope_NoLock,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x30);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNum @ 14a111300

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FRigVMTypeCacheScope_NoLock,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FRigVMTypeCacheScope_NoLock,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FRigVMTypeCacheScope_NoLock,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 0x30,param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNumZeroed @ 14a111430

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FRigVMPropertyPath,TSizedDefaultAllocator<32>_>::SetNumZeroed
          (TArray<FRigVMPropertyPath,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar5 * 0x20,0,
           (longlong)(param_1 - iVar2) << 5);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// CopyToEmpty<UE::Math::TTransform<double>,int> @ 14a1823c0

void __thiscall
TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::
CopyToEmpty<UE::Math::TTransform<double>,int>
          (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *this,
          TTransform<double> *param_1,int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x60,0x10,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  if (param_2 != 0) {
    memcpy((this->AllocatorInstance).Data,param_1,(longlong)param_2 * 0x60);
  }
  return;
}

// SetNum @ 14a1d8200

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<float,TMemStackAllocator<0>_>::SetNum
          (TArray<float,TMemStackAllocator<0>_> *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  float *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<0,TMemStackAllocator<0>::ForElementType<float>_>
                      (4,4,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + iVar4,0,(longlong)(param_1 - iVar5) << 2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + param_1;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (int)uVar6,(longlong)iVar5 << 2);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<0,TMemStackAllocator<0>::ForElementType<float>_>
                    (4,4,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

