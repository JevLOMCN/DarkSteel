// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NamingTokensUI
// Functions: 6

// CopyToEmpty<TSharedPtr<FNamingTokenDataTreeItem,1>,int> @ 14d0e9780

void __thiscall
TArray<TSharedPtr<FNamingTokenDataTreeItem,1>,TSizedDefaultAllocator<32>_>::
CopyToEmpty<TSharedPtr<FNamingTokenDataTreeItem,1>,int>
          (TArray<TSharedPtr<FNamingTokenDataTreeItem,1>,TSizedDefaultAllocator<32>_> *this,
          TSharedPtr<FNamingTokenDataTreeItem,1> *param_1,int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  ConstructItems<TSharedPtr<FNamingTokenDataTreeItem,1>,TSharedPtr<FNamingTokenDataTreeItem,1>,int>
            ((this->AllocatorInstance).Data,param_1,param_2);
  return;
}

// ~TArray<FNamingTokenValueData,TSizedDefaultAllocator<32>_> @ 14d0ef270

void __thiscall
TArray<FNamingTokenValueData,TSizedDefaultAllocator<32>_>::
~TArray<FNamingTokenValueData,TSizedDefaultAllocator<32>_>
          (TArray<FNamingTokenValueData,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FNamingTokenValueData,int>
            ((FNamingTokenValueData *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TArray<FText,TSizedDefaultAllocator<32>_> @ 14d0ef2b0

void __thiscall
TArray<FText,TSizedDefaultAllocator<32>_>::~TArray<FText,TSizedDefaultAllocator<32>_>
          (TArray<FText,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FText,int>((FText *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 14d0f07c0

TArray<TSharedPtr<FNamingTokenDataTreeItem,1>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TSharedPtr<FNamingTokenDataTreeItem,1>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<TSharedPtr<FNamingTokenDataTreeItem,1>,TSizedDefaultAllocator<32>_> *this,
          TArray<TSharedPtr<FNamingTokenDataTreeItem,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  TSharedPtr<FNamingTokenDataTreeItem,1> *pTVar3;
  
  if (this != param_1) {
    DestructItems<TSharedPtr<FNamingTokenDataTreeItem,1>,int>
              ((TSharedPtr<FNamingTokenDataTreeItem,1> *)(this->AllocatorInstance).Data,
               this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pTVar3 = (TSharedPtr<FNamingTokenDataTreeItem,1> *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<TSharedPtr<FNamingTokenDataTreeItem,1>,TSharedPtr<FNamingTokenDataTreeItem,1>,int>
              ((this->AllocatorInstance).Data,pTVar3,iVar2);
  }
  return this;
}

// FindLast @ 14d1030a0

int __thiscall
TArray<wchar_t,TSizedDefaultAllocator<32>_>::FindLast
          (TArray<wchar_t,TSizedDefaultAllocator<32>_> *this,wchar_t *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->AllocatorInstance).Data;
  pFVar2 = pFVar1 + (longlong)this->ArrayNum * 2;
  if (pFVar2 != pFVar1) {
    do {
      pFVar2 = pFVar2 + -2;
      if (*(wchar_t *)pFVar2 == *param_1) {
        return (int)((longlong)pFVar2 - (longlong)pFVar1 >> 1);
      }
    } while (pFVar2 != pFVar1);
  }
  return -1;
}

// Reset @ 14d118980

void __thiscall
TArray<TSharedPtr<FNamingTokenDataTreeItem,1>,TSizedDefaultAllocator<32>_>::Reset
          (TArray<TSharedPtr<FNamingTokenDataTreeItem,1>,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  int *piVar1;
  TSharedPtr<FNamingTokenDataTreeItem,1> *pTVar2;
  
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  piVar1 = &this->ArrayMax;
  pTVar2 = (TSharedPtr<FNamingTokenDataTreeItem,1> *)(this->AllocatorInstance).Data;
  if (param_1 <= *piVar1) {
    DestructItems<TSharedPtr<FNamingTokenDataTreeItem,1>,int>(pTVar2,this->ArrayNum);
    this->ArrayNum = 0;
    return;
  }
  DestructItems<TSharedPtr<FNamingTokenDataTreeItem,1>,int>(pTVar2,this->ArrayNum);
  this->ArrayNum = 0;
  if (*piVar1 != param_1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,param_1,&this->AllocatorInstance,0,piVar1);
  }
  return;
}

