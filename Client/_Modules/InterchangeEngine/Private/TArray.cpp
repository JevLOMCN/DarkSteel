// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 6

// TArray<UInterchangeFactoryBaseNode_*,TSizedDefaultAllocator<32>_><UInterchangeFactoryBaseNode_*,int> @ 14e4ce8e0

TArray<UInterchangeFactoryBaseNode_*,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UInterchangeFactoryBaseNode_*,TSizedDefaultAllocator<32>_>::
TArray<UInterchangeFactoryBaseNode_*,TSizedDefaultAllocator<32>_><UInterchangeFactoryBaseNode_*,int>
          (TArray<UInterchangeFactoryBaseNode_*,TSizedDefaultAllocator<32>_> *this,
          TArrayView<UInterchangeFactoryBaseNode_*,int> *param_1)

{
  int iVar1;
  UInterchangeFactoryBaseNode **_Src;
  
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = param_1->ArrayNum;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar1;
  if (iVar1 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar1,0,&this->AllocatorInstance,iVar1,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
  return this;
}

// AddUniqueImpl<UClass_*_const_&> @ 14e4cf5d0

int __thiscall
TArray<UClass_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UClass_*_const_&>
          (TArray<UClass_*,TSizedDefaultAllocator<32>_> *this,UClass **param_1)

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
      if (*(UClass **)pFVar5 == *param_1) {
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
  *(UClass **)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// CopyToEmpty<UInterchangePipelineBase_*,int> @ 14e4d06c0

void __thiscall
TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_>::
CopyToEmpty<UInterchangePipelineBase_*,int>
          (TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_> *this,
          UInterchangePipelineBase **param_1,int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  if (param_2 != 0) {
    memcpy((this->AllocatorInstance).Data,param_1,(longlong)param_2 << 3);
  }
  return;
}

// CopyToEmpty<UInterchangePipelineBase_*,int> @ 14e4d0750

void __thiscall
TArray<TObjectPtr<UInterchangePipelineBase>,TSizedDefaultAllocator<32>_>::
CopyToEmpty<UInterchangePipelineBase_*,int>
          (TArray<TObjectPtr<UInterchangePipelineBase>,TSizedDefaultAllocator<32>_> *this,
          UInterchangePipelineBase **param_1,int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  ConstructItems<TObjectPtr<UInterchangePipelineBase>,UInterchangePipelineBase_*,int>
            ((this->AllocatorInstance).Data,param_1,param_2);
  return;
}

// operator= @ 14e4db2b0

TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_>::operator=
          (TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_> *this,
          TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_> *param_1)

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

// operator= @ 14e4db350

TArray<FInterchangePerTranslatorDialogOverride,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FInterchangePerTranslatorDialogOverride,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FInterchangePerTranslatorDialogOverride,TSizedDefaultAllocator<32>_> *this,
          TArray<FInterchangePerTranslatorDialogOverride,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FInterchangePerTranslatorDialogOverride *pFVar3;
  
  if (this != param_1) {
    DestructItems<FInterchangePerTranslatorDialogOverride,int>
              ((FInterchangePerTranslatorDialogOverride *)(this->AllocatorInstance).Data,
               this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FInterchangePerTranslatorDialogOverride *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FInterchangePerTranslatorDialogOverride,FInterchangePerTranslatorDialogOverride,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

