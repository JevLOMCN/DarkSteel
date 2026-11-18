// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Analytics
// Functions: 8

// CopyToEmpty<FAnalyticsEventAttribute,int> @ 1431322c0

void __thiscall
TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>::
CopyToEmpty<FAnalyticsEventAttribute,int>
          (TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *this,
          FAnalyticsEventAttribute *param_1,int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  ConstructItems<FAnalyticsEventAttribute,FAnalyticsEventAttribute,int>
            ((this->AllocatorInstance).Data,param_1,param_2);
  return;
}

// TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_> @ 143133090

TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>::
TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>
          (TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_> *this,
          initializer_list<TWeakPtr<IAnalyticsSpan,1>_> *param_1)

{
  TWeakPtr<IAnalyticsSpan,1> *pTVar1;
  TWeakPtr<IAnalyticsSpan,1> *pTVar2;
  int iVar3;
  
  pTVar1 = param_1->_First;
  pTVar2 = param_1->_Last;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (int)((longlong)pTVar2 - (longlong)pTVar1 >> 4);
  this->ArrayNum = iVar3;
  if (iVar3 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar3,0,&this->AllocatorInstance,iVar3,&this->ArrayMax);
  ConstructItems<TWeakPtr<IAnalyticsSpan,1>,TWeakPtr<IAnalyticsSpan,1>,int>
            ((this->AllocatorInstance).Data,pTVar1,iVar3);
  return this;
}

// ~TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> @ 143133610

void __thiscall
TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>::
~TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>
          (TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FAnalyticsEventAttribute,int>
            ((FAnalyticsEventAttribute *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_> @ 143133650

void __thiscall
TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>::
~TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>
          (TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TWeakPtr<IAnalyticsSpan,1>,int>
            ((TWeakPtr<IAnalyticsSpan,1> *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 143133c60

TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *this,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FAnalyticsEventAttribute *pFVar3;
  
  if (this != param_1) {
    DestructItems<FAnalyticsEventAttribute,int>
              ((FAnalyticsEventAttribute *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FAnalyticsEventAttribute *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FAnalyticsEventAttribute,FAnalyticsEventAttribute,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// Empty @ 1431368b0

void __thiscall
TArray<unsigned_char,TSizedDefaultAllocator<32>_>::Empty
          (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Remove @ 14313b4d0

int __thiscall
TArray<TSharedPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>::Remove
          (TArray<TSharedPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_> *this,
          TSharedPtr<IAnalyticsSpan,1> *param_1)

{
  TSharedPtr<IAnalyticsSpan,1> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  pTVar1 = (TSharedPtr<IAnalyticsSpan,1> *)(this->AllocatorInstance).Data;
  if ((pTVar1 <= param_1) && (param_1 < pTVar1 + this->ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  lVar6 = (longlong)iVar5;
  if (iVar5 == 0) {
    return 0;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  iVar12 = 0;
  bVar4 = *(IAnalyticsSpan **)pFVar2 != param_1->Object;
  lVar8 = 0;
  iVar10 = 0;
  do {
    lVar8 = lVar8 + 1;
    iVar11 = iVar10 + 1;
    if (lVar8 < lVar6) {
      pFVar7 = pFVar2 + lVar8 * 0x10;
      do {
        if (bVar4 != (*(IAnalyticsSpan **)pFVar7 != param_1->Object)) break;
        iVar11 = iVar11 + 1;
        lVar8 = lVar8 + 1;
        pFVar7 = pFVar7 + 0x10;
      } while (lVar8 < lVar6);
    }
    iVar9 = iVar11 - iVar10;
    if (bVar4 == false) {
      DestructItems<TSharedPtr<IAnalyticsSpan,1>,int>
                ((TSharedPtr<IAnalyticsSpan,1> *)(pFVar2 + (longlong)iVar10 * 0x10),iVar9);
    }
    else {
      if (iVar12 != iVar10) {
        memmove(pFVar2 + (longlong)iVar12 * 0x10,pFVar2 + (longlong)iVar10 * 0x10,
                (longlong)iVar9 << 4);
      }
      iVar12 = iVar12 + iVar9;
    }
    bVar4 = (bool)(bVar4 ^ 1);
    iVar10 = iVar11;
    if (lVar6 <= lVar8) {
      this->ArrayNum = iVar12;
      return iVar5 - iVar12;
    }
  } while( true );
}

// Reset @ 14313bb60

void __thiscall
TArray<TSharedPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>::Reset
          (TArray<TSharedPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int *piVar1;
  TSharedPtr<IAnalyticsSpan,1> *pTVar2;
  
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  piVar1 = &this->ArrayMax;
  pTVar2 = (TSharedPtr<IAnalyticsSpan,1> *)(this->AllocatorInstance).Data;
  if (param_1 <= *piVar1) {
    DestructItems<TSharedPtr<IAnalyticsSpan,1>,int>(pTVar2,this->ArrayNum);
    this->ArrayNum = 0;
    return;
  }
  DestructItems<TSharedPtr<IAnalyticsSpan,1>,int>(pTVar2,this->ArrayNum);
  this->ArrayNum = 0;
  if (*piVar1 != param_1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,param_1,&this->AllocatorInstance,0,piVar1);
  }
  return;
}

