// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNERuntimeORT
// Functions: 18

// ~FModelInstanceORTBase<UE::NNE::IModelInstanceCPU> @ 14eb06330

void __thiscall
UE::NNERuntimeORT::Private::FModelInstanceORTBase<UE::NNE::IModelInstanceCPU>::
~FModelInstanceORTBase<UE::NNE::IModelInstanceCPU>
          (FModelInstanceORTBase<UE::NNE::IModelInstanceCPU> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<UE::NNE::FTensorDesc,int>
            ((FTensorDesc *)(this->OutputSymbolicTensors).AllocatorInstance.Data,
             (this->OutputSymbolicTensors).ArrayNum);
  pFVar1 = (this->OutputSymbolicTensors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::NNE::FTensorDesc,int>
            ((FTensorDesc *)(this->InputSymbolicTensors).AllocatorInstance.Data,
             (this->InputSymbolicTensors).ArrayNum);
  pFVar1 = (this->InputSymbolicTensors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::NNE::FTensorShape,int>
            ((FTensorShape *)(this->OutputTensorShapes).AllocatorInstance.Data,
             (this->OutputTensorShapes).ArrayNum);
  pFVar1 = (this->OutputTensorShapes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::NNE::FTensorShape,int>
            ((FTensorShape *)(this->InputTensorShapes).AllocatorInstance.Data,
             (this->InputTensorShapes).ArrayNum);
  pFVar1 = (this->InputTensorShapes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~FModelInstanceORTBase<UE::NNE::IModelInstanceGPU> @ 14eb063c0

void __thiscall
UE::NNERuntimeORT::Private::FModelInstanceORTBase<UE::NNE::IModelInstanceGPU>::
~FModelInstanceORTBase<UE::NNE::IModelInstanceGPU>
          (FModelInstanceORTBase<UE::NNE::IModelInstanceGPU> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<UE::NNE::FTensorDesc,int>
            ((FTensorDesc *)(this->OutputSymbolicTensors).AllocatorInstance.Data,
             (this->OutputSymbolicTensors).ArrayNum);
  pFVar1 = (this->OutputSymbolicTensors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::NNE::FTensorDesc,int>
            ((FTensorDesc *)(this->InputSymbolicTensors).AllocatorInstance.Data,
             (this->InputSymbolicTensors).ArrayNum);
  pFVar1 = (this->InputSymbolicTensors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::NNE::FTensorShape,int>
            ((FTensorShape *)(this->OutputTensorShapes).AllocatorInstance.Data,
             (this->OutputTensorShapes).ArrayNum);
  pFVar1 = (this->OutputTensorShapes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::NNE::FTensorShape,int>
            ((FTensorShape *)(this->InputTensorShapes).AllocatorInstance.Data,
             (this->InputTensorShapes).ArrayNum);
  pFVar1 = (this->InputTensorShapes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~FModelInstanceORTBase<UE::NNE::IModelInstanceNPU> @ 14eb06450

void __thiscall
UE::NNERuntimeORT::Private::FModelInstanceORTBase<UE::NNE::IModelInstanceNPU>::
~FModelInstanceORTBase<UE::NNE::IModelInstanceNPU>
          (FModelInstanceORTBase<UE::NNE::IModelInstanceNPU> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<UE::NNE::FTensorDesc,int>
            ((FTensorDesc *)(this->OutputSymbolicTensors).AllocatorInstance.Data,
             (this->OutputSymbolicTensors).ArrayNum);
  pFVar1 = (this->OutputSymbolicTensors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::NNE::FTensorDesc,int>
            ((FTensorDesc *)(this->InputSymbolicTensors).AllocatorInstance.Data,
             (this->InputSymbolicTensors).ArrayNum);
  pFVar1 = (this->InputSymbolicTensors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::NNE::FTensorShape,int>
            ((FTensorShape *)(this->OutputTensorShapes).AllocatorInstance.Data,
             (this->OutputTensorShapes).ArrayNum);
  pFVar1 = (this->OutputTensorShapes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::NNE::FTensorShape,int>
            ((FTensorShape *)(this->InputTensorShapes).AllocatorInstance.Data,
             (this->InputTensorShapes).ArrayNum);
  pFVar1 = (this->InputTensorShapes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// GetInputTensorDescs @ 14eb15370

TArrayView<UE::NNE::FTensorDesc_const_,int> * __thiscall
UE::NNERuntimeORT::Private::FModelInstanceORTBase<UE::NNE::IModelInstanceCPU>::GetInputTensorDescs
          (FModelInstanceORTBase<UE::NNE::IModelInstanceCPU> *this,
          TArrayView<UE::NNE::FTensorDesc_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::NNE::FTensorDesc_const_,int> *pTVar4;
  
  iVar1 = (this->InputSymbolicTensors).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FTensorDesc *)(this->InputSymbolicTensors).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<UE::NNE::FTensorDesc_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetInputTensorDescs @ 14eb153e0

TArrayView<UE::NNE::FTensorDesc_const_,int> * __thiscall
UE::NNERuntimeORT::Private::FModelInstanceORTBase<UE::NNE::IModelInstanceGPU>::GetInputTensorDescs
          (FModelInstanceORTBase<UE::NNE::IModelInstanceGPU> *this,
          TArrayView<UE::NNE::FTensorDesc_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::NNE::FTensorDesc_const_,int> *pTVar4;
  
  iVar1 = (this->InputSymbolicTensors).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FTensorDesc *)(this->InputSymbolicTensors).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<UE::NNE::FTensorDesc_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetInputTensorDescs @ 14eb15450

TArrayView<UE::NNE::FTensorDesc_const_,int> * __thiscall
UE::NNERuntimeORT::Private::FModelInstanceORTBase<UE::NNE::IModelInstanceNPU>::GetInputTensorDescs
          (FModelInstanceORTBase<UE::NNE::IModelInstanceNPU> *this,
          TArrayView<UE::NNE::FTensorDesc_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::NNE::FTensorDesc_const_,int> *pTVar4;
  
  iVar1 = (this->InputSymbolicTensors).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FTensorDesc *)(this->InputSymbolicTensors).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<UE::NNE::FTensorDesc_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetInputTensorShapes @ 14eb15530

TArrayView<UE::NNE::FTensorShape_const_,int> * __thiscall
UE::NNERuntimeORT::Private::FModelInstanceORTBase<UE::NNE::IModelInstanceCPU>::GetInputTensorShapes
          (FModelInstanceORTBase<UE::NNE::IModelInstanceCPU> *this,
          TArrayView<UE::NNE::FTensorShape_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::NNE::FTensorShape_const_,int> *pTVar4;
  
  iVar1 = (this->InputTensorShapes).ArrayNum;
  __return_storage_ptr__->DataPtr = (FTensorShape *)(this->InputTensorShapes).AllocatorInstance.Data
  ;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<UE::NNE::FTensorShape_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetInputTensorShapes @ 14eb155a0

TArrayView<UE::NNE::FTensorShape_const_,int> * __thiscall
UE::NNERuntimeORT::Private::FModelInstanceORTBase<UE::NNE::IModelInstanceGPU>::GetInputTensorShapes
          (FModelInstanceORTBase<UE::NNE::IModelInstanceGPU> *this,
          TArrayView<UE::NNE::FTensorShape_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::NNE::FTensorShape_const_,int> *pTVar4;
  
  iVar1 = (this->InputTensorShapes).ArrayNum;
  __return_storage_ptr__->DataPtr = (FTensorShape *)(this->InputTensorShapes).AllocatorInstance.Data
  ;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<UE::NNE::FTensorShape_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetInputTensorShapes @ 14eb15610

TArrayView<UE::NNE::FTensorShape_const_,int> * __thiscall
UE::NNERuntimeORT::Private::FModelInstanceORTBase<UE::NNE::IModelInstanceNPU>::GetInputTensorShapes
          (FModelInstanceORTBase<UE::NNE::IModelInstanceNPU> *this,
          TArrayView<UE::NNE::FTensorShape_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::NNE::FTensorShape_const_,int> *pTVar4;
  
  iVar1 = (this->InputTensorShapes).ArrayNum;
  __return_storage_ptr__->DataPtr = (FTensorShape *)(this->InputTensorShapes).AllocatorInstance.Data
  ;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<UE::NNE::FTensorShape_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetOutputTensorDescs @ 14eb15c60

TArrayView<UE::NNE::FTensorDesc_const_,int> * __thiscall
UE::NNERuntimeORT::Private::FModelInstanceORTBase<UE::NNE::IModelInstanceCPU>::GetOutputTensorDescs
          (FModelInstanceORTBase<UE::NNE::IModelInstanceCPU> *this,
          TArrayView<UE::NNE::FTensorDesc_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::NNE::FTensorDesc_const_,int> *pTVar4;
  
  iVar1 = (this->OutputSymbolicTensors).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FTensorDesc *)(this->OutputSymbolicTensors).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<UE::NNE::FTensorDesc_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetOutputTensorDescs @ 14eb15cd0

TArrayView<UE::NNE::FTensorDesc_const_,int> * __thiscall
UE::NNERuntimeORT::Private::FModelInstanceORTBase<UE::NNE::IModelInstanceGPU>::GetOutputTensorDescs
          (FModelInstanceORTBase<UE::NNE::IModelInstanceGPU> *this,
          TArrayView<UE::NNE::FTensorDesc_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::NNE::FTensorDesc_const_,int> *pTVar4;
  
  iVar1 = (this->OutputSymbolicTensors).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FTensorDesc *)(this->OutputSymbolicTensors).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<UE::NNE::FTensorDesc_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetOutputTensorDescs @ 14eb15d40

TArrayView<UE::NNE::FTensorDesc_const_,int> * __thiscall
UE::NNERuntimeORT::Private::FModelInstanceORTBase<UE::NNE::IModelInstanceNPU>::GetOutputTensorDescs
          (FModelInstanceORTBase<UE::NNE::IModelInstanceNPU> *this,
          TArrayView<UE::NNE::FTensorDesc_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::NNE::FTensorDesc_const_,int> *pTVar4;
  
  iVar1 = (this->OutputSymbolicTensors).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FTensorDesc *)(this->OutputSymbolicTensors).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<UE::NNE::FTensorDesc_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetOutputTensorShapes @ 14eb15e20

TArrayView<UE::NNE::FTensorShape_const_,int> * __thiscall
UE::NNERuntimeORT::Private::FModelInstanceORTBase<UE::NNE::IModelInstanceCPU>::GetOutputTensorShapes
          (FModelInstanceORTBase<UE::NNE::IModelInstanceCPU> *this,
          TArrayView<UE::NNE::FTensorShape_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::NNE::FTensorShape_const_,int> *pTVar4;
  
  iVar1 = (this->OutputTensorShapes).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FTensorShape *)(this->OutputTensorShapes).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<UE::NNE::FTensorShape_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetOutputTensorShapes @ 14eb15e90

TArrayView<UE::NNE::FTensorShape_const_,int> * __thiscall
UE::NNERuntimeORT::Private::FModelInstanceORTBase<UE::NNE::IModelInstanceGPU>::GetOutputTensorShapes
          (FModelInstanceORTBase<UE::NNE::IModelInstanceGPU> *this,
          TArrayView<UE::NNE::FTensorShape_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::NNE::FTensorShape_const_,int> *pTVar4;
  
  iVar1 = (this->OutputTensorShapes).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FTensorShape *)(this->OutputTensorShapes).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<UE::NNE::FTensorShape_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetOutputTensorShapes @ 14eb15f00

TArrayView<UE::NNE::FTensorShape_const_,int> * __thiscall
UE::NNERuntimeORT::Private::FModelInstanceORTBase<UE::NNE::IModelInstanceNPU>::GetOutputTensorShapes
          (FModelInstanceORTBase<UE::NNE::IModelInstanceNPU> *this,
          TArrayView<UE::NNE::FTensorShape_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::NNE::FTensorShape_const_,int> *pTVar4;
  
  iVar1 = (this->OutputTensorShapes).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FTensorShape *)(this->OutputTensorShapes).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<UE::NNE::FTensorShape_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// SetInputTensorShapes @ 14eb1bd90

EResultStatus __thiscall
UE::NNERuntimeORT::Private::FModelInstanceORTBase<UE::NNE::IModelInstanceCPU>::SetInputTensorShapes
          (FModelInstanceORTBase<UE::NNE::IModelInstanceCPU> *this,
          TArrayView<UE::NNE::FTensorShape_const_,int> *param_1)

{
  int iVar1;
  FTensorDesc *pFVar2;
  code *pcVar3;
  bool bVar4;
  EResultStatus EVar5;
  undefined4 uStack_2c;
  TArrayView<UE::NNE::FTensorDesc_const_,int> local_28;
  TArrayView<UE::NNE::FTensorShape_const_,int> local_18;
  
  pFVar2 = (FTensorDesc *)(this->InputSymbolicTensors).AllocatorInstance.Data;
  iVar1 = (this->InputSymbolicTensors).ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
  }
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_28._12_4_ = uStack_2c;
  local_28.ArrayNum = iVar1;
  local_28.DataPtr = pFVar2;
  bVar4 = Detail::SetInputTensorShapes(&local_18,&local_28,&this->InputTensorShapes);
  return !bVar4;
}

// SetInputTensorShapes @ 14eb1be20

EResultStatus __thiscall
UE::NNERuntimeORT::Private::FModelInstanceORTBase<UE::NNE::IModelInstanceGPU>::SetInputTensorShapes
          (FModelInstanceORTBase<UE::NNE::IModelInstanceGPU> *this,
          TArrayView<UE::NNE::FTensorShape_const_,int> *param_1)

{
  int iVar1;
  FTensorDesc *pFVar2;
  code *pcVar3;
  bool bVar4;
  EResultStatus EVar5;
  undefined4 uStack_2c;
  TArrayView<UE::NNE::FTensorDesc_const_,int> local_28;
  TArrayView<UE::NNE::FTensorShape_const_,int> local_18;
  
  pFVar2 = (FTensorDesc *)(this->InputSymbolicTensors).AllocatorInstance.Data;
  iVar1 = (this->InputSymbolicTensors).ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
  }
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_28._12_4_ = uStack_2c;
  local_28.ArrayNum = iVar1;
  local_28.DataPtr = pFVar2;
  bVar4 = Detail::SetInputTensorShapes(&local_18,&local_28,&this->InputTensorShapes);
  return !bVar4;
}

// SetInputTensorShapes @ 14eb1beb0

EResultStatus __thiscall
UE::NNERuntimeORT::Private::FModelInstanceORTBase<UE::NNE::IModelInstanceNPU>::SetInputTensorShapes
          (FModelInstanceORTBase<UE::NNE::IModelInstanceNPU> *this,
          TArrayView<UE::NNE::FTensorShape_const_,int> *param_1)

{
  int iVar1;
  FTensorDesc *pFVar2;
  code *pcVar3;
  bool bVar4;
  EResultStatus EVar5;
  undefined4 uStack_2c;
  TArrayView<UE::NNE::FTensorDesc_const_,int> local_28;
  TArrayView<UE::NNE::FTensorShape_const_,int> local_18;
  
  pFVar2 = (FTensorDesc *)(this->InputSymbolicTensors).AllocatorInstance.Data;
  iVar1 = (this->InputSymbolicTensors).ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
  }
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_28._12_4_ = uStack_2c;
  local_28.ArrayNum = iVar1;
  local_28.DataPtr = pFVar2;
  bVar4 = Detail::SetInputTensorShapes(&local_18,&local_28,&this->InputTensorShapes);
  return !bVar4;
}

