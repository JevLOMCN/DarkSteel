// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 54

// AllocateMemoryForEmplace<int_&> @ 1414e7c20

TTuple<int,_anonymous_namespace_::FContainerTestValueType> * __thiscall
TSortedMap<int,`anonymous_namespace'::FContainerTestValueType,TFixedAllocator<64>,TLess<int_const_>_>
::AllocateMemoryForEmplace<int_&>
          (TSortedMap<int,_anonymous_namespace_::FContainerTestValueType,TFixedAllocator<64>,TLess<int_const_>_>
           *this,int *param_1)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  TTuple<int,_anonymous_namespace_::FContainerTestValueType> *pTVar7;
  int iVar8;
  uint uVar9;
  
  piVar1 = &(this->Pairs).ArrayNum;
  iVar8 = 0;
  uVar2 = *piVar1;
  if (0 < (int)uVar2) {
    uVar9 = uVar2;
    do {
      iVar6 = (uVar9 >> 1) + iVar8;
      if (*(int *)(this->Pairs).AllocatorInstance.InlineData[iVar6].Pad < *param_1) {
        iVar8 = iVar6 + (uVar9 & 1);
      }
      uVar4 = uVar9 >> 1;
      uVar9 = uVar9 >> 1;
    } while (uVar4 != 0);
  }
  if ((iVar8 < 0) || ((int)uVar2 < iVar8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TTuple<int,_anonymous_namespace_::FContainerTestValueType> *)(*pcVar3)();
      return pTVar7;
    }
    if (iVar8 < 0) goto LAB_1414e7d20;
  }
  if (iVar8 < *piVar1) {
    if ((iVar8 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TTuple<int,_anonymous_namespace_::FContainerTestValueType> *)(*pcVar3)();
      return pTVar7;
    }
    pTVar7 = (TTuple<int,_anonymous_namespace_::FContainerTestValueType> *)
             ((this->Pairs).AllocatorInstance.InlineData + iVar8);
    if (*(int *)(this->Pairs).AllocatorInstance.InlineData[iVar8].Pad <= *param_1) {
      DestructItems<TTuple<int,_anonymous_namespace_::FContainerTestValueType>,int>(pTVar7,1);
      return pTVar7;
    }
  }
LAB_1414e7d20:
  iVar6 = UE::Core::Private::
          ReallocGrow<0,TFixedAllocator<64>::ForElementType<TTuple<int,_anonymous_namespace_::FContainerTestValueType>_>_>
                    (0x18,8,1,(ForElementType<TTuple<int,_anonymous_namespace_::FContainerTestValueType>_>
                               *)this,piVar1,&(this->Pairs).ArrayMax);
  pTVar7 = (TTuple<int,_anonymous_namespace_::FContainerTestValueType> *)
           ((this->Pairs).AllocatorInstance.InlineData + iVar8);
  memmove(pTVar7 + 1,pTVar7,(longlong)(iVar6 - iVar8) * 0x18);
  return pTVar7;
}

// AllocateMemoryForEmplace<int_&> @ 1414e7d90

TTuple<int,_anonymous_namespace_::FContainerTestValueType> * __thiscall
TSortedMap<int,`anonymous_namespace'::FContainerTestValueType,TSizedDefaultAllocator<32>,TLess<int_const_>_>
::AllocateMemoryForEmplace<int_&>
          (TSortedMap<int,_anonymous_namespace_::FContainerTestValueType,TSizedDefaultAllocator<32>,TLess<int_const_>_>
           *this,int *param_1)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  TTuple<int,_anonymous_namespace_::FContainerTestValueType> *pTVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  uint uVar10;
  
  uVar2 = (this->Pairs).ArrayNum;
  piVar1 = &(this->Pairs).ArrayNum;
  iVar9 = 0;
  if (0 < (int)uVar2) {
    uVar10 = uVar2;
    do {
      iVar6 = (uVar10 >> 1) + iVar9;
      if (*(int *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar6 * 0x18) < *param_1) {
        iVar9 = iVar6 + (uVar10 & 1);
      }
      uVar4 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar4 != 0);
  }
  if ((iVar9 < 0) || ((int)uVar2 < iVar9)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TTuple<int,_anonymous_namespace_::FContainerTestValueType> *)(*pcVar3)();
      return pTVar7;
    }
    if (iVar9 < 0) goto LAB_1414e7e8c;
  }
  if (iVar9 < *piVar1) {
    if ((iVar9 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TTuple<int,_anonymous_namespace_::FContainerTestValueType> *)(*pcVar3)();
      return pTVar7;
    }
    pFVar8 = (this->Pairs).AllocatorInstance.Data;
    pTVar7 = (TTuple<int,_anonymous_namespace_::FContainerTestValueType> *)
             (pFVar8 + (longlong)iVar9 * 0x18);
    if (*(int *)(pFVar8 + (longlong)iVar9 * 0x18) <= *param_1) {
      DestructItems<TTuple<int,_anonymous_namespace_::FContainerTestValueType>,int>(pTVar7,1);
      return pTVar7;
    }
  }
LAB_1414e7e8c:
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,1,(ForAnyElementType *)this,piVar1,&(this->Pairs).ArrayMax);
  pFVar8 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar9 * 0x18;
  memmove(pFVar8 + 0x18,pFVar8,(longlong)(iVar6 - iVar9) * 0x18);
  return (TTuple<int,_anonymous_namespace_::FContainerTestValueType> *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)iVar9 * 0x18);
}

// AllocateMemoryForEmplace<int_&> @ 1414e7f00

TTuple<int,_anonymous_namespace_::FContainerTestValueType> * __thiscall
TSortedMap<int,`anonymous_namespace'::FContainerTestValueType,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>,TLess<int_const_>_>
::AllocateMemoryForEmplace<int_&>
          (TSortedMap<int,_anonymous_namespace_::FContainerTestValueType,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>,TLess<int_const_>_>
           *this,int *param_1)

{
  int iVar1;
  uint uVar2;
  ForElementType<TTuple<int,_anonymous_namespace_::FContainerTestValueType>_> FVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  TTuple<int,_anonymous_namespace_::FContainerTestValueType> *pTVar7;
  ForElementType<TTuple<int,_anonymous_namespace_::FContainerTestValueType>_> FVar8;
  int iVar9;
  uint uVar10;
  
  FVar3 = (this->Pairs).AllocatorInstance.SecondaryData;
  uVar2 = (this->Pairs).ArrayNum;
  FVar8 = (ForElementType<TTuple<int,_anonymous_namespace_::FContainerTestValueType>_>)this;
  if (FVar3 != (ForElementType<TTuple<int,_anonymous_namespace_::FContainerTestValueType>_>)0x0) {
    FVar8 = FVar3;
  }
  iVar9 = 0;
  if (0 < (int)uVar2) {
    uVar10 = uVar2;
    do {
      iVar1 = (uVar10 >> 1) + iVar9;
      if (*(int *)((longlong)FVar8 + (longlong)iVar1 * 0x18) < *param_1) {
        iVar9 = iVar1 + (uVar10 & 1);
      }
      uVar5 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar5 != 0);
  }
  if ((iVar9 < 0) || ((int)uVar2 < iVar9)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TTuple<int,_anonymous_namespace_::FContainerTestValueType> *)(*pcVar4)();
      return pTVar7;
    }
    if (iVar9 < 0) goto LAB_1414e8031;
  }
  if (iVar9 < (this->Pairs).ArrayNum) {
    if ((iVar9 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TTuple<int,_anonymous_namespace_::FContainerTestValueType> *)(*pcVar4)();
      return pTVar7;
    }
    FVar3 = (this->Pairs).AllocatorInstance.SecondaryData;
    FVar8 = (ForElementType<TTuple<int,_anonymous_namespace_::FContainerTestValueType>_>)this;
    if (FVar3 != (ForElementType<TTuple<int,_anonymous_namespace_::FContainerTestValueType>_>)0x0) {
      FVar8 = FVar3;
    }
    if (*(int *)((longlong)iVar9 * 0x18 + (longlong)FVar8) <= *param_1) {
      if (FVar3 != (ForElementType<TTuple<int,_anonymous_namespace_::FContainerTestValueType>_>)0x0)
      {
        this = (TSortedMap<int,_anonymous_namespace_::FContainerTestValueType,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>,TLess<int_const_>_>
                *)FVar3;
      }
      pTVar7 = (TTuple<int,_anonymous_namespace_::FContainerTestValueType> *)
               ((longlong)iVar9 * 0x18 + (longlong)this);
      DestructItems<TTuple<int,_anonymous_namespace_::FContainerTestValueType>,int>(pTVar7,1);
      return pTVar7;
    }
  }
LAB_1414e8031:
  TArray<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar9,1);
  FVar3 = (this->Pairs).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<TTuple<int,_anonymous_namespace_::FContainerTestValueType>_>)0x0) {
    this = (TSortedMap<int,_anonymous_namespace_::FContainerTestValueType,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>,TLess<int_const_>_>
            *)FVar3;
  }
  return (TTuple<int,_anonymous_namespace_::FContainerTestValueType> *)
         ((longlong)this + (longlong)iVar9 * 0x18);
}

// AllocateMemoryForEmplace<FName_&> @ 1414e8080

TTuple<FName,_anonymous_namespace_::FContainerTestValueType> * __thiscall
TSortedMap<FName,`anonymous_namespace'::FContainerTestValueType,TSizedDefaultAllocator<32>,FNameLexicalLess>
::AllocateMemoryForEmplace<FName_&>
          (TSortedMap<FName,_anonymous_namespace_::FContainerTestValueType,TSizedDefaultAllocator<32>,FNameLexicalLess>
           *this,FName *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TTuple<FName,_anonymous_namespace_::FContainerTestValueType> *pTVar5;
  FScriptContainerElement *pFVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  uVar9 = (this->Pairs).ArrayNum;
  uVar7 = 0;
  pFVar6 = (this->Pairs).AllocatorInstance.Data;
  if ((int)uVar9 < 1) {
LAB_1414e80f6:
    if ((this->Pairs).ArrayNum < (int)uVar7) goto LAB_1414e80fc;
  }
  else {
    do {
      uVar10 = uVar9 >> 1;
      iVar8 = uVar10 + (int)uVar7;
      iVar4 = ::FName::Compare((FName *)(pFVar6 + (longlong)iVar8 * 0x18),param_1);
      if (iVar4 < 0) {
        uVar7 = (ulonglong)(iVar8 + (uVar9 & 1));
      }
      uVar9 = uVar10;
    } while (uVar10 != 0);
    if (-1 < (int)uVar7) goto LAB_1414e80f6;
LAB_1414e80fc:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TTuple<FName,_anonymous_namespace_::FContainerTestValueType> *)(*pcVar2)();
      return pTVar5;
    }
    if ((int)uVar7 < 0) goto LAB_1414e81a4;
  }
  if ((int)uVar7 < (this->Pairs).ArrayNum) {
    if (((int)uVar7 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TTuple<FName,_anonymous_namespace_::FContainerTestValueType> *)(*pcVar2)();
      return pTVar5;
    }
    iVar4 = ::FName::Compare(param_1,(FName *)((this->Pairs).AllocatorInstance.Data + uVar7 * 0x18))
    ;
    if (-1 < iVar4) {
      pTVar5 = (TTuple<FName,_anonymous_namespace_::FContainerTestValueType> *)
               ((this->Pairs).AllocatorInstance.Data + uVar7 * 0x18);
      DestructItems<TTuple<FName,_anonymous_namespace_::FContainerTestValueType>,int>(pTVar5,1);
      return pTVar5;
    }
  }
LAB_1414e81a4:
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,1,(ForAnyElementType *)this,&(this->Pairs).ArrayNum,
                     &(this->Pairs).ArrayMax);
  lVar1 = (longlong)(int)uVar7 * 0x18;
  pFVar6 = (this->Pairs).AllocatorInstance.Data + lVar1;
  memmove(pFVar6 + 0x18,pFVar6,(longlong)(iVar4 - (int)uVar7) * 0x18);
  return (TTuple<FName,_anonymous_namespace_::FContainerTestValueType> *)
         ((this->Pairs).AllocatorInstance.Data + lVar1);
}

// AllocateMemoryForEmplace<FString_&> @ 1414e8220

TTuple<FString,_anonymous_namespace_::FContainerTestValueType> * __thiscall
TSortedMap<FString,`anonymous_namespace'::FContainerTestValueType,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>
::AllocateMemoryForEmplace<FString_&>
          (TSortedMap<FString,_anonymous_namespace_::FContainerTestValueType,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>
           *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  TTuple<FString,_anonymous_namespace_::FContainerTestValueType> *pTVar5;
  wchar_t *pwVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  FKeyForward local_res8;
  
  iVar3 = AlgoImpl::
          LowerBoundInternal<TTuple<FString,_anonymous_namespace_::FContainerTestValueType>_const_,int,FString,TSortedMap<FString,_anonymous_namespace_::FContainerTestValueType,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>::FKeyForward,TLess<FString_const_&>_>
                    ((TTuple<FString,_anonymous_namespace_::FContainerTestValueType> *)
                     (this->Pairs).AllocatorInstance.Data,(this->Pairs).ArrayNum,param_1,local_res8,
                     (TLess<FString_const_&>)local_res8);
  pwVar9 = L"";
  if (((iVar3 < 0) || ((this->Pairs).ArrayNum < iVar3)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                         ,0x249,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TTuple<FString,_anonymous_namespace_::FContainerTestValueType> *)(*pcVar1)();
    return pTVar5;
  }
  if ((-1 < iVar3) && (iVar3 < (this->Pairs).ArrayNum)) {
    if ((iVar3 < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TTuple<FString,_anonymous_namespace_::FContainerTestValueType> *)(*pcVar1)();
      return pTVar5;
    }
    pFVar7 = (this->Pairs).AllocatorInstance.Data;
    lVar8 = (longlong)iVar3 * 0x20;
    if (*(int *)(pFVar7 + lVar8 + 8) == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = *(wchar_t **)(pFVar7 + lVar8);
    }
    if ((param_1->Data).ArrayNum != 0) {
      pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp(pwVar9,pwVar6);
    if (-1 < iVar4) {
      pTVar5 = (TTuple<FString,_anonymous_namespace_::FContainerTestValueType> *)
               ((this->Pairs).AllocatorInstance.Data + lVar8);
      DestructItems<TTuple<FString,_anonymous_namespace_::FContainerTestValueType>,int>(pTVar5,1);
      return pTVar5;
    }
  }
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,1,(ForAnyElementType *)this,&(this->Pairs).ArrayNum,
                     &(this->Pairs).ArrayMax);
  lVar8 = (longlong)iVar3 * 0x20;
  pFVar7 = (this->Pairs).AllocatorInstance.Data + lVar8;
  memmove(pFVar7 + 0x20,pFVar7,(longlong)(iVar4 - iVar3) << 5);
  return (TTuple<FString,_anonymous_namespace_::FContainerTestValueType> *)
         ((this->Pairs).AllocatorInstance.Data + lVar8);
}

// AllocateMemoryForEmplace<FString_&> @ 1414e83a0

TTuple<FString,_anonymous_namespace_::FContainerTestValueType> * __thiscall
TSortedMap<FString,`anonymous_namespace'::FContainerTestValueType,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>,TLess<FString_const_&>_>
::AllocateMemoryForEmplace<FString_&>
          (TSortedMap<FString,_anonymous_namespace_::FContainerTestValueType,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>,TLess<FString_const_&>_>
           *this,FString *param_1)

{
  ForElementType<TTuple<FString,_anonymous_namespace_::FContainerTestValueType>_> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  TTuple<FString,_anonymous_namespace_::FContainerTestValueType> *pTVar6;
  ForElementType<TTuple<FString,_anonymous_namespace_::FContainerTestValueType>_> FVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  FKeyForward local_res8;
  
  FVar1 = (this->Pairs).AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<TTuple<FString,_anonymous_namespace_::FContainerTestValueType>_>)this;
  if (FVar1 != (ForElementType<TTuple<FString,_anonymous_namespace_::FContainerTestValueType>_>)0x0)
  {
    FVar7 = FVar1;
  }
  iVar4 = AlgoImpl::
          LowerBoundInternal<TTuple<FString,_anonymous_namespace_::FContainerTestValueType>_const_,int,FString,TSortedMap<FString,_anonymous_namespace_::FContainerTestValueType,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>,TLess<FString_const_&>_>::FKeyForward,TLess<FString_const_&>_>
                    ((TTuple<FString,_anonymous_namespace_::FContainerTestValueType> *)FVar7,
                     (this->Pairs).ArrayNum,param_1,local_res8,(TLess<FString_const_&>)local_res8);
  pwVar9 = L"";
  if ((iVar4 < 0) || ((this->Pairs).ArrayNum < iVar4)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TTuple<FString,_anonymous_namespace_::FContainerTestValueType> *)(*pcVar2)();
      return pTVar6;
    }
    if (iVar4 < 0) goto LAB_1414e84d0;
  }
  if (iVar4 < (this->Pairs).ArrayNum) {
    if ((iVar4 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TTuple<FString,_anonymous_namespace_::FContainerTestValueType> *)(*pcVar2)();
      return pTVar6;
    }
    FVar1 = (this->Pairs).AllocatorInstance.SecondaryData;
    FVar7 = (ForElementType<TTuple<FString,_anonymous_namespace_::FContainerTestValueType>_>)this;
    if (FVar1 != (ForElementType<TTuple<FString,_anonymous_namespace_::FContainerTestValueType>_>)
                 0x0) {
      FVar7 = FVar1;
    }
    lVar10 = (longlong)iVar4 * 0x20;
    if (*(int *)(lVar10 + 8 + (longlong)FVar7) == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = *(wchar_t **)(lVar10 + (longlong)FVar7);
    }
    if ((param_1->Data).ArrayNum != 0) {
      pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp(pwVar9,pwVar8);
    if (-1 < iVar5) {
      FVar1 = (this->Pairs).AllocatorInstance.SecondaryData;
      if (FVar1 != (ForElementType<TTuple<FString,_anonymous_namespace_::FContainerTestValueType>_>)
                   0x0) {
        this = (TSortedMap<FString,_anonymous_namespace_::FContainerTestValueType,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>,TLess<FString_const_&>_>
                *)FVar1;
      }
      DestructItems<TTuple<FString,_anonymous_namespace_::FContainerTestValueType>,int>
                ((TTuple<FString,_anonymous_namespace_::FContainerTestValueType> *)
                 ((longlong)this + lVar10),1);
      return (TTuple<FString,_anonymous_namespace_::FContainerTestValueType> *)
             ((longlong)this + lVar10);
    }
  }
LAB_1414e84d0:
  TArray<TTuple<FString,`anonymous_namespace'::FContainerTestValueType>,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar4,1);
  FVar1 = (this->Pairs).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<TTuple<FString,_anonymous_namespace_::FContainerTestValueType>_>)0x0)
  {
    this = (TSortedMap<FString,_anonymous_namespace_::FContainerTestValueType,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>,TLess<FString_const_&>_>
            *)FVar1;
  }
  return (TTuple<FString,_anonymous_namespace_::FContainerTestValueType> *)
         ((longlong)iVar4 * 0x20 + (longlong)this);
}

// Emplace<int_const_&,FString> @ 1415024e0

FString * __thiscall
TSortedMap<int,FString,TSizedDefaultAllocator<32>,TLess<int_const_>_>::Emplace<int_const_&,FString>
          (TSortedMap<int,FString,TSizedDefaultAllocator<32>,TLess<int_const_>_> *this,int *param_1,
          FString *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FString *pFVar6;
  int iVar7;
  TTuple<int,FString> *pTVar8;
  uint uVar9;
  uint uVar10;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar7 = 0;
  if (0 < (int)uVar2) {
    uVar9 = uVar2;
    iVar7 = 0;
    do {
      uVar10 = uVar9 >> 1;
      if (*(int *)((this->Pairs).AllocatorInstance.Data + (longlong)(int)(uVar10 + iVar7) * 0x18) <
          *param_1) {
        iVar7 = uVar10 + iVar7 + (uVar9 & 1);
      }
      uVar9 = uVar10;
    } while (uVar10 != 0);
  }
  if ((iVar7 < 0) || ((int)uVar2 < iVar7)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar4)();
      return pFVar6;
    }
    if (-1 < iVar7) goto LAB_14150257d;
  }
  else {
LAB_14150257d:
    if (iVar7 < (this->Pairs).ArrayNum) {
      if ((iVar7 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar4)();
        return pFVar6;
      }
      pFVar3 = (this->Pairs).AllocatorInstance.Data;
      pTVar8 = (TTuple<int,FString> *)(pFVar3 + (longlong)iVar7 * 0x18);
      if (*(int *)(pFVar3 + (longlong)iVar7 * 0x18) <= *param_1) {
        DestructItems<TTuple<int,FString>,int>(pTVar8,1);
        goto LAB_141502606;
      }
    }
  }
  TArray<TTuple<int,FString>,TSizedDefaultAllocator<32>_>::InsertUninitializedImpl
            (&this->Pairs,iVar7,1);
  pTVar8 = (TTuple<int,FString> *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar7 * 0x18);
LAB_141502606:
  *(int *)pTVar8 = *param_1;
  puVar1 = &pTVar8->field_0x8;
  *(undefined8 *)puVar1 = 0;
  *(FScriptContainerElement **)puVar1 = (param_2->Data).AllocatorInstance.Data;
  (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&pTVar8->field_0x10 = (param_2->Data).ArrayNum;
  *(int *)&pTVar8->field_0x14 = (param_2->Data).ArrayMax;
  (param_2->Data).ArrayNum = 0;
  (param_2->Data).ArrayMax = 0;
  return (FString *)puVar1;
}

// Emplace<FName_const_&,FString> @ 1415032e0

FString * __thiscall
TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameLexicalLess>::
Emplace<FName_const_&,FString>
          (TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameLexicalLess> *this,
          FName *param_1,FString *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FString *pFVar8;
  TTuple<FName,FString> *pTVar9;
  FKeyForward local_res8;
  
  iVar6 = AlgoImpl::
          LowerBoundInternal<TTuple<FName,FString>_const_,int,FName,TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameLexicalLess>::FKeyForward,FNameLexicalLess>
                    ((TTuple<FName,FString> *)(this->Pairs).AllocatorInstance.Data,
                     (this->Pairs).ArrayNum,param_1,local_res8,(FNameLexicalLess)local_res8);
  if ((iVar6 < 0) || ((this->Pairs).ArrayNum < iVar6)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FString *)(*pcVar3)();
      return pFVar8;
    }
    if (-1 < iVar6) goto LAB_14150334f;
  }
  else {
LAB_14150334f:
    if (iVar6 < (this->Pairs).ArrayNum) {
      if (iVar6 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pFVar8 = (FString *)(*pcVar3)();
          return pFVar8;
        }
      }
      lVar2 = (longlong)iVar6 * 0x18;
      iVar7 = ::FName::Compare(param_1,(FName *)((this->Pairs).AllocatorInstance.Data + lVar2));
      if (-1 < iVar7) {
        pTVar9 = (TTuple<FName,FString> *)((this->Pairs).AllocatorInstance.Data + lVar2);
        DestructItems<TTuple<FName,FString>,int>(pTVar9,1);
        goto LAB_1415033e0;
      }
    }
  }
  TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_>::InsertUninitializedImpl
            (&this->Pairs,iVar6,1);
  pTVar9 = (TTuple<FName,FString> *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar6 * 0x18);
LAB_1415033e0:
  uVar4 = param_1->Number;
  *(uint *)&pTVar9->field_0x0 = (param_1->ComparisonIndex).Value;
  *(uint *)&pTVar9->field_0x4 = uVar4;
  puVar1 = &pTVar9->field_0x8;
  *(undefined8 *)puVar1 = 0;
  *(FScriptContainerElement **)puVar1 = (param_2->Data).AllocatorInstance.Data;
  (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&pTVar9->field_0x10 = (param_2->Data).ArrayNum;
  *(int *)&pTVar9->field_0x14 = (param_2->Data).ArrayMax;
  (param_2->Data).ArrayNum = 0;
  (param_2->Data).ArrayMax = 0;
  return (FString *)puVar1;
}

// Emplace<FString_const_&,int_const_&> @ 141503b90

int * __thiscall
TSortedMap<FString,int,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>::
Emplace<FString_const_&,int_const_&>
          (TSortedMap<FString,int,TSizedDefaultAllocator<32>,TLess<FString_const_&>_> *this,
          FString *param_1,int *param_2)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  wchar_t *pwVar8;
  TTuple<FString,int> *this_00;
  wchar_t *pwVar9;
  FKeyForward local_res8;
  
  iVar5 = AlgoImpl::
          LowerBoundInternal<TTuple<FString,int>_const_,int,FString,TSortedMap<FString,int,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>::FKeyForward,TLess<FString_const_&>_>
                    ((TTuple<FString,int> *)(this->Pairs).AllocatorInstance.Data,
                     (this->Pairs).ArrayNum,param_1,local_res8,(TLess<FString_const_&>)local_res8);
  pwVar9 = L"";
  if ((iVar5 < 0) || ((this->Pairs).ArrayNum < iVar5)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      piVar7 = (int *)(*pcVar3)();
      return piVar7;
    }
    if (-1 < iVar5) goto LAB_141503c0b;
  }
  else {
LAB_141503c0b:
    if (iVar5 < (this->Pairs).ArrayNum) {
      if (iVar5 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          piVar7 = (int *)(*pcVar3)();
          return piVar7;
        }
      }
      pFVar2 = (this->Pairs).AllocatorInstance.Data;
      lVar1 = (longlong)iVar5 * 0x18;
      if (*(int *)(pFVar2 + lVar1 + 8) == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = *(wchar_t **)(pFVar2 + lVar1);
      }
      if ((param_1->Data).ArrayNum != 0) {
        pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      iVar6 = FGenericPlatformStricmp::Stricmp(pwVar9,pwVar8);
      if (-1 < iVar6) {
        this_00 = (TTuple<FString,int> *)((this->Pairs).AllocatorInstance.Data + lVar1);
        DestructItems<TTuple<FString,int>,int>(this_00,1);
        goto LAB_141503cb8;
      }
    }
  }
  TArray<TTuple<FString,int>,TSizedDefaultAllocator<32>_>::InsertUninitializedImpl
            (&this->Pairs,iVar5,1);
  this_00 = (TTuple<FString,int> *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar5 * 0x18);
LAB_141503cb8:
  ::FString::FString((FString *)this_00,param_1);
  *(int *)&this_00->field_0x10 = *param_2;
  return (int *)&this_00->field_0x10;
}

// Emplace<FString_const_&,FString> @ 141503cf0

FString * __thiscall
TSortedMap<FString,FString,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>::
Emplace<FString_const_&,FString>
          (TSortedMap<FString,FString,TSizedDefaultAllocator<32>,TLess<FString_const_&>_> *this,
          FString *param_1,FString *param_2)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  TTuple<FString,FString> *this_00;
  wchar_t *pwVar9;
  longlong lVar10;
  FKeyForward local_res8;
  
  iVar5 = AlgoImpl::
          LowerBoundInternal<TTuple<FString,FString>_const_,int,FString,TSortedMap<FString,FString,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>::FKeyForward,TLess<FString_const_&>_>
                    ((TTuple<FString,FString> *)(this->Pairs).AllocatorInstance.Data,
                     (this->Pairs).ArrayNum,param_1,local_res8,(TLess<FString_const_&>)local_res8);
  pwVar9 = L"";
  if ((iVar5 < 0) || ((this->Pairs).ArrayNum < iVar5)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FString *)(*pcVar3)();
      return pFVar7;
    }
    if (-1 < iVar5) goto LAB_141503d6b;
  }
  else {
LAB_141503d6b:
    if (iVar5 < (this->Pairs).ArrayNum) {
      if (iVar5 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FString *)(*pcVar3)();
          return pFVar7;
        }
      }
      pFVar2 = (this->Pairs).AllocatorInstance.Data;
      lVar10 = (longlong)iVar5 * 0x20;
      if (*(int *)(pFVar2 + lVar10 + 8) == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = *(wchar_t **)(pFVar2 + lVar10);
      }
      if ((param_1->Data).ArrayNum != 0) {
        pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      iVar6 = FGenericPlatformStricmp::Stricmp(pwVar9,pwVar8);
      if (-1 < iVar6) {
        this_00 = (TTuple<FString,FString> *)((this->Pairs).AllocatorInstance.Data + lVar10);
        DestructItems<TTuple<FString,FString>,int>(this_00,1);
        goto LAB_141503e0e;
      }
    }
  }
  TArray<TTuple<FString,FString>,TSizedDefaultAllocator<32>_>::InsertUninitializedImpl
            (&this->Pairs,iVar5,1);
  this_00 = (TTuple<FString,FString> *)
            ((this->Pairs).AllocatorInstance.Data + (longlong)iVar5 * 0x20);
LAB_141503e0e:
  ::FString::FString((FString *)this_00,param_1);
  puVar1 = &this_00->field_0x10;
  *(undefined8 *)puVar1 = 0;
  *(FScriptContainerElement **)puVar1 = (param_2->Data).AllocatorInstance.Data;
  (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&this_00->field_0x18 = (param_2->Data).ArrayNum;
  *(int *)&this_00->field_0x1c = (param_2->Data).ArrayMax;
  (param_2->Data).ArrayNum = 0;
  (param_2->Data).ArrayMax = 0;
  return (FString *)puVar1;
}

// Emplace<TUniquePtr<FString,TDefaultDelete<FString>_>,int> @ 141509820

int * __thiscall
TSortedMap<TUniquePtr<FString,TDefaultDelete<FString>_>,int,TSizedDefaultAllocator<32>,TLess<TUniquePtr<FString,TDefaultDelete<FString>_>_const_&>_>
::Emplace<TUniquePtr<FString,TDefaultDelete<FString>_>,int>
          (TSortedMap<TUniquePtr<FString,TDefaultDelete<FString>_>,int,TSizedDefaultAllocator<32>,TLess<TUniquePtr<FString,TDefaultDelete<FString>_>_const_&>_>
           *this,TUniquePtr<FString,TDefaultDelete<FString>_> *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int *piVar6;
  int iVar7;
  TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int> *pTVar8;
  uint uVar9;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar7 = 0;
  if (0 < (int)uVar2) {
    uVar9 = uVar2;
    do {
      iVar1 = (uVar9 >> 1) + iVar7;
      if (*(FString **)((this->Pairs).AllocatorInstance.Data + (longlong)iVar1 * 0x10) <
          param_1->Ptr) {
        iVar7 = iVar1 + (uVar9 & 1);
      }
      uVar4 = uVar9 >> 1;
      uVar9 = uVar9 >> 1;
    } while (uVar4 != 0);
  }
  if ((iVar7 < 0) || ((int)uVar2 < iVar7)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      piVar6 = (int *)(*pcVar3)();
      return piVar6;
    }
    if (-1 < iVar7) goto LAB_1415098af;
  }
  else {
LAB_1415098af:
    if (iVar7 < (this->Pairs).ArrayNum) {
      if ((iVar7 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        piVar6 = (int *)(*pcVar3)();
        return piVar6;
      }
      pTVar8 = (TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int> *)
               ((this->Pairs).AllocatorInstance.Data + (longlong)iVar7 * 0x10);
      if (*(FString **)pTVar8 <= param_1->Ptr) {
        DestructItems<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,int>(pTVar8,1);
        goto LAB_141509936;
      }
    }
  }
  TArray<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TSizedDefaultAllocator<32>_>::
  InsertUninitializedImpl(&this->Pairs,iVar7,1);
  pTVar8 = (TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int> *)
           ((this->Pairs).AllocatorInstance.Data + (longlong)iVar7 * 0x10);
LAB_141509936:
  *(FString **)pTVar8 = param_1->Ptr;
  param_1->Ptr = (FString *)0x0;
  *(int *)&pTVar8->field_0x8 = *param_2;
  return (int *)&pTVar8->field_0x8;
}

// TSortedMap<TUniquePtr<FString,TDefaultDelete<FString>_>,int,TSizedDefaultAllocator<32>,TLess<TUniquePtr<FString,TDefaultDelete<FString>_>_const_&>_> @ 1415822f0

TSortedMap<TUniquePtr<FString,TDefaultDelete<FString>_>,int,TSizedDefaultAllocator<32>,TLess<TUniquePtr<FString,TDefaultDelete<FString>_>_const_&>_>
* __thiscall
TSortedMap<TUniquePtr<FString,TDefaultDelete<FString>_>,int,TSizedDefaultAllocator<32>,TLess<TUniquePtr<FString,TDefaultDelete<FString>_>_const_&>_>
::
TSortedMap<TUniquePtr<FString,TDefaultDelete<FString>_>,int,TSizedDefaultAllocator<32>,TLess<TUniquePtr<FString,TDefaultDelete<FString>_>_const_&>_>
          (TSortedMap<TUniquePtr<FString,TDefaultDelete<FString>_>,int,TSizedDefaultAllocator<32>,TLess<TUniquePtr<FString,TDefaultDelete<FString>_>_const_&>_>
           *this)

{
  int iVar1;
  
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType((ForAnyElementType *)this);
  (this->Pairs).ArrayNum = 0;
  iVar1 = TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                    ((ForAnyElementType *)this);
  (this->Pairs).ArrayMax = iVar1;
  return this;
}

// TSortedMap<FString,int,TSizedDefaultAllocator<32>,TLess<FString_const_&>_> @ 141582350

TSortedMap<FString,int,TSizedDefaultAllocator<32>,TLess<FString_const_&>_> * __thiscall
TSortedMap<FString,int,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>::
TSortedMap<FString,int,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>
          (TSortedMap<FString,int,TSizedDefaultAllocator<32>,TLess<FString_const_&>_> *this,
          initializer_list<TPairInitializer<FString_const_&,int_const_&>_> *param_1)

{
  int *piVar1;
  TPairInitializer<FString_const_&,int_const_&> *pTVar2;
  TPairInitializer<FString_const_&,int_const_&> *pTVar3;
  int iVar4;
  ulonglong uVar5;
  
  pTVar2 = param_1->_Last;
  pTVar3 = param_1->_First;
  piVar1 = &(this->Pairs).ArrayMax;
  *piVar1 = 0;
  uVar5 = (longlong)pTVar2 - (longlong)pTVar3 >> 4;
  (this->Pairs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Pairs).ArrayNum = 0;
  iVar4 = (int)uVar5;
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar5 & 0xffffffff);
  }
  if (0 < iVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar4,(ForAnyElementType *)this,0,piVar1);
  }
  for (; pTVar3 != pTVar2; pTVar3 = pTVar3 + 1) {
    Emplace<FString_const_&,int_const_&>(this,pTVar3->Key,pTVar3->Value);
  }
  return this;
}

// TSortedMap<FString,int,TSizedDefaultAllocator<32>,TLess<FString_const_&>_> @ 1415823f0

TSortedMap<FString,int,TSizedDefaultAllocator<32>,TLess<FString_const_&>_> * __thiscall
TSortedMap<FString,int,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>::
TSortedMap<FString,int,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>
          (TSortedMap<FString,int,TSizedDefaultAllocator<32>,TLess<FString_const_&>_> *this)

{
  int iVar1;
  
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType((ForAnyElementType *)this);
  (this->Pairs).ArrayNum = 0;
  iVar1 = TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                    ((ForAnyElementType *)this);
  (this->Pairs).ArrayMax = iVar1;
  return this;
}

// FindChecked @ 1415c24d0

FContainerTestValueType * __thiscall
TSortedMap<int,`anonymous_namespace'::FContainerTestValueType,TFixedAllocator<64>,TLess<int_const_>_>
::FindChecked(TSortedMap<int,_anonymous_namespace_::FContainerTestValueType,TFixedAllocator<64>,TLess<int_const_>_>
              *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  FContainerTestValueType *pFVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = (this->Pairs).ArrayNum;
  iVar6 = 0;
  if (0 < (int)uVar7) {
    do {
      iVar1 = (uVar7 >> 1) + iVar6;
      if (*(int *)(this->Pairs).AllocatorInstance.InlineData[iVar1].Pad < param_1) {
        iVar6 = iVar1 + (uVar7 & 1);
      }
      uVar3 = uVar7 >> 1;
      uVar7 = uVar7 >> 1;
    } while (uVar3 != 0);
  }
  if (((iVar6 < (this->Pairs).ArrayNum) &&
      (*(int *)(this->Pairs).AllocatorInstance.InlineData[iVar6].Pad <= param_1)) && (iVar6 != -1))
  {
    if ((iVar6 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FContainerTestValueType *)(*pcVar2)();
      return pFVar5;
    }
    pFVar5 = (FContainerTestValueType *)((this->Pairs).AllocatorInstance.InlineData[iVar6].Pad + 8);
    if (pFVar5 != (FContainerTestValueType *)0x0) {
      return pFVar5;
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Value != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                     ,0x141,L"");
  if (!bVar4) {
    return (FContainerTestValueType *)0x0;
  }
  pcVar2 = (code *)swi(3);
  pFVar5 = (FContainerTestValueType *)(*pcVar2)();
  return pFVar5;
}

// FindChecked @ 1415c25d0

FContainerTestValueType * __thiscall
TSortedMap<int,`anonymous_namespace'::FContainerTestValueType,TSizedDefaultAllocator<32>,TLess<int_const_>_>
::FindChecked(TSortedMap<int,_anonymous_namespace_::FContainerTestValueType,TSizedDefaultAllocator<32>,TLess<int_const_>_>
              *this,int param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FContainerTestValueType *pFVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = (this->Pairs).ArrayNum;
  pFVar2 = (this->Pairs).AllocatorInstance.Data;
  iVar6 = 0;
  uVar8 = uVar1;
  iVar7 = 0;
  if (0 < (int)uVar1) {
    do {
      uVar9 = uVar8 >> 1;
      iVar6 = iVar7;
      if (*(int *)(pFVar2 + (longlong)(int)(uVar9 + iVar7) * 0x18) < param_1) {
        iVar6 = uVar9 + iVar7 + (uVar8 & 1);
      }
      uVar8 = uVar9;
      iVar7 = iVar6;
    } while (uVar9 != 0);
  }
  if (((iVar6 < (int)uVar1) && (*(int *)(pFVar2 + (longlong)iVar6 * 0x18) <= param_1)) &&
     (iVar6 != -1)) {
    if ((iVar6 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FContainerTestValueType *)(*pcVar3)();
      return pFVar5;
    }
    pFVar5 = (FContainerTestValueType *)
             ((this->Pairs).AllocatorInstance.Data + (longlong)iVar6 * 0x18 + 8);
    if (pFVar5 != (FContainerTestValueType *)0x0) {
      return pFVar5;
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Value != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                     ,0x141,L"");
  if (!bVar4) {
    return (FContainerTestValueType *)0x0;
  }
  pcVar3 = (code *)swi(3);
  pFVar5 = (FContainerTestValueType *)(*pcVar3)();
  return pFVar5;
}

// FindChecked @ 1415c26e0

FContainerTestValueType * __thiscall
TSortedMap<int,`anonymous_namespace'::FContainerTestValueType,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>,TLess<int_const_>_>
::FindChecked(TSortedMap<int,_anonymous_namespace_::FContainerTestValueType,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>,TLess<int_const_>_>
              *this,int param_1)

{
  ForElementType<TTuple<int,_anonymous_namespace_::FContainerTestValueType>_> FVar1;
  code *pcVar2;
  FKeyForward FVar3;
  bool bVar4;
  uint uVar5;
  FContainerTestValueType *pFVar6;
  uint uVar7;
  int local_res10 [2];
  
  local_res10[0]._0_1_ = SUB41(param_1,0);
  FVar3 = local_res10[0]._0_1_;
  local_res10[0] = param_1;
  uVar5 = Algo::
          BinarySearchBy<TArray<TTuple<int,_anonymous_namespace_::FContainerTestValueType>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>,int,TSortedMap<int,_anonymous_namespace_::FContainerTestValueType,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>,TLess<int_const_>_>::FKeyForward,TLess<int_const_>_>
                    (&this->Pairs,local_res10,FVar3,(TLess<int_const_>)FVar3);
  if (uVar5 != 0xffffffff) {
    uVar7 = 0;
    if ((int)uVar5 < (this->Pairs).ArrayNum) {
      uVar7 = ~uVar5 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FContainerTestValueType *)(*pcVar2)();
      return pFVar6;
    }
    FVar1 = (this->Pairs).AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<TTuple<int,_anonymous_namespace_::FContainerTestValueType>_>)0x0) {
      this = (TSortedMap<int,_anonymous_namespace_::FContainerTestValueType,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>,TLess<int_const_>_>
              *)FVar1;
    }
    pFVar6 = (FContainerTestValueType *)((longlong)this + ((longlong)(int)uVar5 * 3 + 1) * 8);
    if (pFVar6 != (FContainerTestValueType *)0x0) {
      return pFVar6;
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Value != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                     ,0x141,L"");
  if (!bVar4) {
    return (FContainerTestValueType *)0x0;
  }
  pcVar2 = (code *)swi(3);
  pFVar6 = (FContainerTestValueType *)(*pcVar2)();
  return pFVar6;
}

// FindChecked @ 1415c27c0

FContainerTestValueType * __thiscall
TSortedMap<FName,`anonymous_namespace'::FContainerTestValueType,TSizedDefaultAllocator<32>,FNameLexicalLess>
::FindChecked(TSortedMap<FName,_anonymous_namespace_::FContainerTestValueType,TSizedDefaultAllocator<32>,FNameLexicalLess>
              *this,FName param_1)

{
  code *pcVar1;
  FKeyForward FVar2;
  bool bVar3;
  uint uVar4;
  FContainerTestValueType *pFVar5;
  uint uVar6;
  FName local_res8;
  
  local_res8.ComparisonIndex.Value._0_1_ = param_1.ComparisonIndex.Value._0_1_;
  FVar2 = local_res8.ComparisonIndex.Value._0_1_;
  local_res8 = param_1;
  uVar4 = Algo::
          BinarySearchBy<TArray<TTuple<FName,_anonymous_namespace_::FContainerTestValueType>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,_anonymous_namespace_::FContainerTestValueType,TSizedDefaultAllocator<32>,FNameLexicalLess>::FKeyForward,FNameLexicalLess>
                    (&this->Pairs,&local_res8,FVar2,(FNameLexicalLess)FVar2);
  if (uVar4 != 0xffffffff) {
    uVar6 = 0;
    if ((int)uVar4 < (this->Pairs).ArrayNum) {
      uVar6 = ~uVar4 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FContainerTestValueType *)(*pcVar1)();
      return pFVar5;
    }
    pFVar5 = (FContainerTestValueType *)
             ((this->Pairs).AllocatorInstance.Data + ((longlong)(int)uVar4 * 3 + 1) * 8);
    if (pFVar5 != (FContainerTestValueType *)0x0) {
      return pFVar5;
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Value != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                     ,0x141,L"");
  if (!bVar3) {
    return (FContainerTestValueType *)0x0;
  }
  pcVar1 = (code *)swi(3);
  pFVar5 = (FContainerTestValueType *)(*pcVar1)();
  return pFVar5;
}

// Remove @ 1415e14b0

int __thiscall
TSortedMap<int,FString,TSizedDefaultAllocator<32>,TLess<int_const_>_>::Remove
          (TSortedMap<int,FString,TSizedDefaultAllocator<32>,TLess<int_const_>_> *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  
  uVar8 = (this->Pairs).ArrayNum;
  uVar6 = 0;
  pFVar7 = (this->Pairs).AllocatorInstance.Data;
  if (0 < (int)uVar8) {
    do {
      iVar5 = (uVar8 >> 1) + uVar6;
      if (*(int *)(pFVar7 + (longlong)iVar5 * 0x18) < param_1) {
        uVar6 = iVar5 + (uVar8 & 1);
      }
      uVar3 = uVar8 >> 1;
      uVar8 = uVar8 >> 1;
    } while (uVar3 != 0);
  }
  if ((int)uVar6 < (this->Pairs).ArrayNum) {
    if ((*(int *)(pFVar7 + (longlong)(int)uVar6 * 0x18) <= param_1) && (uVar6 != 0xffffffff)) {
      if ((int)uVar6 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
      }
      pFVar7 = (this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x18;
      if (*(void **)(pFVar7 + 8) != (void *)0x0) {
        FMemory::Free(*(void **)(pFVar7 + 8));
      }
      iVar5 = (this->Pairs).ArrayNum + ~uVar6;
      if (iVar5 != 0) {
        memmove(pFVar7,pFVar7 + 0x18,(longlong)iVar5 * 0x18);
      }
      piVar1 = &(this->Pairs).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,(ForAnyElementType *)this,(this->Pairs).ArrayNum,&(this->Pairs).ArrayMax);
      return 1;
    }
  }
  return 0;
}

// Remove @ 1415e15e0

int __thiscall
TSortedMap<FString,int,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>::Remove
          (TSortedMap<FString,int,TSizedDefaultAllocator<32>,TLess<FString_const_&>_> *this,
          FString *param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  FKeyForward local_res8;
  
  uVar6 = Algo::
          BinarySearchBy<TArray<TTuple<FString,int>,TSizedDefaultAllocator<32>_>,FString,TSortedMap<FString,int,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>::FKeyForward,TLess<FString_const_&>_>
                    (&this->Pairs,param_1,local_res8,(TLess<FString_const_&>)local_res8);
  uVar7 = 0;
  if (uVar6 != 0xffffffff) {
    if ((int)uVar6 < (this->Pairs).ArrayNum) {
      uVar7 = ~uVar6 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        iVar8 = (*pcVar4)();
        return iVar8;
      }
    }
    pFVar2 = (this->Pairs).AllocatorInstance.Data;
    _Dst = pFVar2 + (longlong)(int)uVar6 * 0x18;
    pvVar3 = *(void **)(pFVar2 + (longlong)(int)uVar6 * 0x18);
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    iVar8 = (this->Pairs).ArrayNum + ~uVar6;
    if (iVar8 != 0) {
      memmove(_Dst,_Dst + 0x18,(longlong)iVar8 * 0x18);
    }
    piVar1 = &(this->Pairs).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,(ForAnyElementType *)this,(this->Pairs).ArrayNum,&(this->Pairs).ArrayMax);
    uVar7 = 1;
  }
  return uVar7;
}

// Emplace<int> @ 14160f9e0

TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_> * __thiscall
TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
::Emplace<int>(TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
               *this,int *param_1)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  TTuple<int,TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_>_> *pTVar9;
  uint uVar10;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar8 = 0;
  if (0 < (int)uVar2) {
    uVar10 = uVar2;
    do {
      iVar1 = (uVar10 >> 1) + iVar8;
      if (*(int *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar1 * 0x18) < *param_1) {
        iVar8 = iVar1 + (uVar10 & 1);
      }
      uVar5 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar5 != 0);
  }
  if ((iVar8 < 0) || ((int)uVar2 < iVar8)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_> *)
               (*pcVar4)();
      return pTVar7;
    }
    if (-1 < iVar8) goto LAB_14160fa6d;
  }
  else {
LAB_14160fa6d:
    if (iVar8 < (this->Pairs).ArrayNum) {
      if ((iVar8 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar4)();
        return pTVar7;
      }
      pFVar3 = (this->Pairs).AllocatorInstance.Data;
      pTVar9 = (TTuple<int,TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_>_>
                *)(pFVar3 + (longlong)iVar8 * 0x18);
      if (*(int *)(pFVar3 + (longlong)iVar8 * 0x18) <= *param_1) {
        DestructItems<TTuple<int,TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_>_>,int>
                  (pTVar9,1);
        goto LAB_14160faf6;
      }
    }
  }
  TArray<TTuple<int,TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar8,1);
  pTVar9 = (TTuple<int,TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_>_>
            *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar8 * 0x18);
LAB_14160faf6:
  *(int *)pTVar9 = *param_1;
  *(undefined8 *)&pTVar9->field_0x8 = 0;
  *(undefined8 *)&pTVar9->field_0x10 = 0;
  return (TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_> *)
         &pTVar9->field_0x8;
}

// Emplace<int> @ 14160fb30

TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_> * __thiscall
TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
::Emplace<int>(TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
               *this,int *param_1)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  TTuple<int,TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_>_>
  *pTVar9;
  uint uVar10;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar8 = 0;
  if (0 < (int)uVar2) {
    uVar10 = uVar2;
    do {
      iVar1 = (uVar10 >> 1) + iVar8;
      if (*(int *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar1 * 0x18) < *param_1) {
        iVar8 = iVar1 + (uVar10 & 1);
      }
      uVar5 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar5 != 0);
  }
  if ((iVar8 < 0) || ((int)uVar2 < iVar8)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_> *)
               (*pcVar4)();
      return pTVar7;
    }
    if (-1 < iVar8) goto LAB_14160fbbd;
  }
  else {
LAB_14160fbbd:
    if (iVar8 < (this->Pairs).ArrayNum) {
      if ((iVar8 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar4)();
        return pTVar7;
      }
      pFVar3 = (this->Pairs).AllocatorInstance.Data;
      pTVar9 = (TTuple<int,TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_>_>
                *)(pFVar3 + (longlong)iVar8 * 0x18);
      if (*(int *)(pFVar3 + (longlong)iVar8 * 0x18) <= *param_1) {
        DestructItems<TTuple<int,TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_>_>,int>
                  (pTVar9,1);
        goto LAB_14160fc46;
      }
    }
  }
  TArray<TTuple<int,TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar8,1);
  pTVar9 = (TTuple<int,TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_>_>
            *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar8 * 0x18);
LAB_14160fc46:
  *(int *)pTVar9 = *param_1;
  *(undefined8 *)&pTVar9->field_0x8 = 0;
  *(undefined8 *)&pTVar9->field_0x10 = 0;
  return (TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_> *)
         &pTVar9->field_0x8;
}

// Emplace<int> @ 14160fc80

TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_> * __thiscall
TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
::Emplace<int>(TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
               *this,int *param_1)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  TTuple<int,TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_>_>
  *pTVar9;
  uint uVar10;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar8 = 0;
  if (0 < (int)uVar2) {
    uVar10 = uVar2;
    do {
      iVar1 = (uVar10 >> 1) + iVar8;
      if (*(int *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar1 * 0x18) < *param_1) {
        iVar8 = iVar1 + (uVar10 & 1);
      }
      uVar5 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar5 != 0);
  }
  if ((iVar8 < 0) || ((int)uVar2 < iVar8)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_> *)
               (*pcVar4)();
      return pTVar7;
    }
    if (-1 < iVar8) goto LAB_14160fd0d;
  }
  else {
LAB_14160fd0d:
    if (iVar8 < (this->Pairs).ArrayNum) {
      if ((iVar8 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_> *
                 )(*pcVar4)();
        return pTVar7;
      }
      pFVar3 = (this->Pairs).AllocatorInstance.Data;
      pTVar9 = (TTuple<int,TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_>_>
                *)(pFVar3 + (longlong)iVar8 * 0x18);
      if (*(int *)(pFVar3 + (longlong)iVar8 * 0x18) <= *param_1) {
        DestructItems<TTuple<int,TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_>_>,int>
                  (pTVar9,1);
        goto LAB_14160fd96;
      }
    }
  }
  TArray<TTuple<int,TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar8,1);
  pTVar9 = (TTuple<int,TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_>_>
            *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar8 * 0x18);
LAB_14160fd96:
  *(int *)pTVar9 = *param_1;
  *(undefined8 *)&pTVar9->field_0x8 = 0;
  *(undefined8 *)&pTVar9->field_0x10 = 0;
  DestructItems<TTuple<FName,TConsoleVariableData<FString>_>,int>
            ((TTuple<FName,TConsoleVariableData<FString>_> *)0x0,0);
  return (TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_> *)
         &pTVar9->field_0x8;
}

// Emplace<int> @ 14160fde0

TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_> * __thiscall
TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
::Emplace<int>(TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
               *this,int *param_1)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  TTuple<int,TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_>_> *pTVar9
  ;
  uint uVar10;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar8 = 0;
  if (0 < (int)uVar2) {
    uVar10 = uVar2;
    do {
      iVar1 = (uVar10 >> 1) + iVar8;
      if (*(int *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar1 * 0x18) < *param_1) {
        iVar8 = iVar1 + (uVar10 & 1);
      }
      uVar5 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar5 != 0);
  }
  if ((iVar8 < 0) || ((int)uVar2 < iVar8)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_> *)
               (*pcVar4)();
      return pTVar7;
    }
    if (-1 < iVar8) goto LAB_14160fe6d;
  }
  else {
LAB_14160fe6d:
    if (iVar8 < (this->Pairs).ArrayNum) {
      if ((iVar8 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar4)();
        return pTVar7;
      }
      pFVar3 = (this->Pairs).AllocatorInstance.Data;
      pTVar9 = (TTuple<int,TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_>_>
                *)(pFVar3 + (longlong)iVar8 * 0x18);
      if (*(int *)(pFVar3 + (longlong)iVar8 * 0x18) <= *param_1) {
        DestructItems<TTuple<int,TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_>_>,int>
                  (pTVar9,1);
        goto LAB_14160fef6;
      }
    }
  }
  TArray<TTuple<int,TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar8,1);
  pTVar9 = (TTuple<int,TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_>_>
            *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar8 * 0x18);
LAB_14160fef6:
  *(int *)pTVar9 = *param_1;
  *(undefined8 *)&pTVar9->field_0x8 = 0;
  *(undefined8 *)&pTVar9->field_0x10 = 0;
  return (TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_> *)
         &pTVar9->field_0x8;
}

// Emplace<FString,FFormatArgumentValue> @ 141611b60

FFormatArgumentValue * __thiscall
TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
Emplace<FString,FFormatArgumentValue>
          (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           *this,FString *param_1,FFormatArgumentValue *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  FFormatArgumentValue *pFVar5;
  wchar_t *_Str2;
  TTuple<FString,FFormatArgumentValue> *pTVar6;
  wchar_t *_Str1;
  int *piVar7;
  FKeyForward local_res8;
  
  iVar4 = (this->Pairs).ArrayNum;
  iVar3 = AlgoImpl::
          LowerBoundInternal<TTuple<FString,FFormatArgumentValue>_const_,int,FString,TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::FKeyForward,FLocKeySortedMapLess>
                    ((TTuple<FString,FFormatArgumentValue> *)(this->Pairs).AllocatorInstance.Data,
                     iVar4,param_1,local_res8,(FLocKeySortedMapLess)local_res8);
  _Str1 = L"";
  if ((iVar3 < 0) || (iVar4 < iVar3)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FFormatArgumentValue *)(*pcVar1)();
      return pFVar5;
    }
    if (-1 < iVar3) goto LAB_141611be8;
  }
  else {
LAB_141611be8:
    if (iVar3 < (this->Pairs).ArrayNum) {
      if ((iVar3 < 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FFormatArgumentValue *)(*pcVar1)();
        return pFVar5;
      }
      pTVar6 = (TTuple<FString,FFormatArgumentValue> *)
               ((this->Pairs).AllocatorInstance.Data + (longlong)iVar3 * 0x30);
      if (*(int *)&pTVar6->field_0x8 == 0) {
        _Str2 = L"";
      }
      else {
        _Str2 = *(wchar_t **)pTVar6;
      }
      if ((param_1->Data).ArrayNum != 0) {
        _Str1 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      iVar4 = wcscmp(_Str1,_Str2);
      if (-1 < iVar4) {
        DestructItems<TTuple<FString,FFormatArgumentValue>,int>(pTVar6,1);
        goto LAB_141611c99;
      }
    }
  }
  TArray<TTuple<FString,FFormatArgumentValue>,TSizedDefaultAllocator<32>_>::InsertUninitializedImpl
            (&this->Pairs,iVar3,1);
  pTVar6 = (TTuple<FString,FFormatArgumentValue> *)
           ((this->Pairs).AllocatorInstance.Data + (longlong)iVar3 * 0x30);
LAB_141611c99:
  piVar7 = &(param_1->Data).ArrayNum;
  *(undefined8 *)pTVar6 = 0;
  *(FScriptContainerElement **)pTVar6 = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&pTVar6->field_0x8 = *piVar7;
  *(int *)&pTVar6->field_0xc = (param_1->Data).ArrayMax;
  *piVar7 = 0;
  (param_1->Data).ArrayMax = 0;
  *(Type *)&pTVar6->field_0x10 = param_2->Type;
  *(FFormatArgumentValue_u_8 *)&pTVar6->field_0x18 = param_2->field1_0x8;
  *(FFormatArgumentValue_u_8 *)&pTVar6->field_0x18 = param_2->field1_0x8;
  *(float *)&pTVar6->field_0x18 = (param_2->field1_0x8).FloatValue;
  *(FFormatArgumentValue_u_8 *)&pTVar6->field_0x18 = param_2->field1_0x8;
  *(undefined8 *)&pTVar6->field_0x20 = 0;
  *(undefined4 *)&pTVar6->field_0x28 = 0;
  if ((param_2->TextValue).field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    FText::FText((FText *)&pTVar6->field_0x20,(FText *)&param_2->TextValue);
  }
  return (FFormatArgumentValue *)&pTVar6->field_0x10;
}

// Find @ 14163a850

TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_> * __thiscall
TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
::Find(TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
       *this,int param_1)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_> *pTVar8;
  uint uVar9;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar7 = 0;
  pFVar3 = (this->Pairs).AllocatorInstance.Data;
  uVar9 = uVar2;
  if (0 < (int)uVar2) {
    do {
      iVar1 = (uVar9 >> 1) + iVar7;
      if (*(int *)(pFVar3 + (longlong)iVar1 * 0x18) < param_1) {
        iVar7 = iVar1 + (uVar9 & 1);
      }
      uVar5 = uVar9 >> 1;
      uVar9 = uVar9 >> 1;
    } while (uVar5 != 0);
  }
  if (((iVar7 < (int)uVar2) && (*(int *)(pFVar3 + (longlong)iVar7 * 0x18) <= param_1)) &&
     (iVar7 != -1)) {
    if ((iVar7 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_> *)
               (*pcVar4)();
      return pTVar8;
    }
    pTVar8 = (TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_> *)
             ((this->Pairs).AllocatorInstance.Data + (longlong)iVar7 * 0x18 + 8);
  }
  else {
    pTVar8 = (TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_> *)0x0;
  }
  return pTVar8;
}

// Find @ 14163a930

TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_> * __thiscall
TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
::Find(TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
       *this,int param_1)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_> *pTVar8;
  uint uVar9;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar7 = 0;
  pFVar3 = (this->Pairs).AllocatorInstance.Data;
  uVar9 = uVar2;
  if (0 < (int)uVar2) {
    do {
      iVar1 = (uVar9 >> 1) + iVar7;
      if (*(int *)(pFVar3 + (longlong)iVar1 * 0x18) < param_1) {
        iVar7 = iVar1 + (uVar9 & 1);
      }
      uVar5 = uVar9 >> 1;
      uVar9 = uVar9 >> 1;
    } while (uVar5 != 0);
  }
  if (((iVar7 < (int)uVar2) && (*(int *)(pFVar3 + (longlong)iVar7 * 0x18) <= param_1)) &&
     (iVar7 != -1)) {
    if ((iVar7 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_> *)
               (*pcVar4)();
      return pTVar8;
    }
    pTVar8 = (TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_> *)
             ((this->Pairs).AllocatorInstance.Data + (longlong)iVar7 * 0x18 + 8);
  }
  else {
    pTVar8 = (TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_> *)0x0;
  }
  return pTVar8;
}

// Find @ 14163aa10

TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_> * __thiscall
TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
::Find(TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
       *this,int param_1)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_> *pTVar8;
  uint uVar9;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar7 = 0;
  pFVar3 = (this->Pairs).AllocatorInstance.Data;
  uVar9 = uVar2;
  if (0 < (int)uVar2) {
    do {
      iVar1 = (uVar9 >> 1) + iVar7;
      if (*(int *)(pFVar3 + (longlong)iVar1 * 0x18) < param_1) {
        iVar7 = iVar1 + (uVar9 & 1);
      }
      uVar5 = uVar9 >> 1;
      uVar9 = uVar9 >> 1;
    } while (uVar5 != 0);
  }
  if (((iVar7 < (int)uVar2) && (*(int *)(pFVar3 + (longlong)iVar7 * 0x18) <= param_1)) &&
     (iVar7 != -1)) {
    if ((iVar7 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_> *)
               (*pcVar4)();
      return pTVar8;
    }
    pTVar8 = (TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_> *)
             ((this->Pairs).AllocatorInstance.Data + (longlong)iVar7 * 0x18 + 8);
  }
  else {
    pTVar8 = (TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_> *)0x0
    ;
  }
  return pTVar8;
}

// Find @ 14163aaf0

TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_> * __thiscall
TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
::Find(TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
       *this,int param_1)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_> *pTVar8;
  uint uVar9;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar7 = 0;
  pFVar3 = (this->Pairs).AllocatorInstance.Data;
  uVar9 = uVar2;
  if (0 < (int)uVar2) {
    do {
      iVar1 = (uVar9 >> 1) + iVar7;
      if (*(int *)(pFVar3 + (longlong)iVar1 * 0x18) < param_1) {
        iVar7 = iVar1 + (uVar9 & 1);
      }
      uVar5 = uVar9 >> 1;
      uVar9 = uVar9 >> 1;
    } while (uVar5 != 0);
  }
  if (((iVar7 < (int)uVar2) && (*(int *)(pFVar3 + (longlong)iVar7 * 0x18) <= param_1)) &&
     (iVar7 != -1)) {
    if ((iVar7 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_> *)
               (*pcVar4)();
      return pTVar8;
    }
    pTVar8 = (TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_> *)
             ((this->Pairs).AllocatorInstance.Data + (longlong)iVar7 * 0x18 + 8);
  }
  else {
    pTVar8 = (TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_> *)0x0;
  }
  return pTVar8;
}

// Remove @ 141656bc0

int __thiscall
TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
::Remove(TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
         *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  
  uVar8 = (this->Pairs).ArrayNum;
  uVar6 = 0;
  pFVar7 = (this->Pairs).AllocatorInstance.Data;
  if (0 < (int)uVar8) {
    do {
      iVar5 = (uVar8 >> 1) + uVar6;
      if (*(int *)(pFVar7 + (longlong)iVar5 * 0x18) < param_1) {
        uVar6 = iVar5 + (uVar8 & 1);
      }
      uVar3 = uVar8 >> 1;
      uVar8 = uVar8 >> 1;
    } while (uVar3 != 0);
  }
  if ((int)uVar6 < (this->Pairs).ArrayNum) {
    if ((*(int *)(pFVar7 + (longlong)(int)uVar6 * 0x18) <= param_1) && (uVar6 != 0xffffffff)) {
      if ((int)uVar6 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
      }
      pFVar7 = (this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x18;
      if (*(void **)(pFVar7 + 8) != (void *)0x0) {
        FMemory::Free(*(void **)(pFVar7 + 8));
      }
      iVar5 = (this->Pairs).ArrayNum + ~uVar6;
      if (iVar5 != 0) {
        memmove(pFVar7,pFVar7 + 0x18,(longlong)iVar5 * 0x18);
      }
      piVar1 = &(this->Pairs).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,(ForAnyElementType *)this,(this->Pairs).ArrayNum,&(this->Pairs).ArrayMax);
      return 1;
    }
  }
  return 0;
}

// Remove @ 141656cf0

int __thiscall
TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
::Remove(TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
         *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  
  uVar8 = (this->Pairs).ArrayNum;
  uVar6 = 0;
  pFVar7 = (this->Pairs).AllocatorInstance.Data;
  if (0 < (int)uVar8) {
    do {
      iVar5 = (uVar8 >> 1) + uVar6;
      if (*(int *)(pFVar7 + (longlong)iVar5 * 0x18) < param_1) {
        uVar6 = iVar5 + (uVar8 & 1);
      }
      uVar3 = uVar8 >> 1;
      uVar8 = uVar8 >> 1;
    } while (uVar3 != 0);
  }
  if ((int)uVar6 < (this->Pairs).ArrayNum) {
    if ((*(int *)(pFVar7 + (longlong)(int)uVar6 * 0x18) <= param_1) && (uVar6 != 0xffffffff)) {
      if ((int)uVar6 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
      }
      pFVar7 = (this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x18;
      if (*(void **)(pFVar7 + 8) != (void *)0x0) {
        FMemory::Free(*(void **)(pFVar7 + 8));
      }
      iVar5 = (this->Pairs).ArrayNum + ~uVar6;
      if (iVar5 != 0) {
        memmove(pFVar7,pFVar7 + 0x18,(longlong)iVar5 * 0x18);
      }
      piVar1 = &(this->Pairs).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,(ForAnyElementType *)this,(this->Pairs).ArrayNum,&(this->Pairs).ArrayMax);
      return 1;
    }
  }
  return 0;
}

// Remove @ 141656e20

int __thiscall
TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
::Remove(TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
         *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  
  uVar2 = (this->Pairs).ArrayNum;
  uVar7 = 0;
  pFVar8 = (this->Pairs).AllocatorInstance.Data;
  uVar9 = uVar2;
  if (0 < (int)uVar2) {
    do {
      iVar6 = (uVar9 >> 1) + uVar7;
      if (*(int *)(pFVar8 + (longlong)iVar6 * 0x18) < param_1) {
        uVar7 = iVar6 + (uVar9 & 1);
      }
      uVar4 = uVar9 >> 1;
      uVar9 = uVar9 >> 1;
    } while (uVar4 != 0);
  }
  if ((((int)uVar7 < (int)uVar2) && (*(int *)(pFVar8 + (longlong)(int)uVar7 * 0x18) <= param_1)) &&
     (uVar7 != 0xffffffff)) {
    if (((int)uVar7 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
    pFVar8 = (this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x18;
    DestructItems<TTuple<FName,TConsoleVariableData<FString>_>,int>
              (*(TTuple<FName,TConsoleVariableData<FString>_> **)(pFVar8 + 8),
               *(int *)(pFVar8 + 0x10));
    if (*(void **)(pFVar8 + 8) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar8 + 8));
    }
    iVar6 = (this->Pairs).ArrayNum + ~uVar7;
    if (iVar6 != 0) {
      memmove(pFVar8,pFVar8 + 0x18,(longlong)iVar6 * 0x18);
    }
    piVar1 = &(this->Pairs).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,(ForAnyElementType *)this,(this->Pairs).ArrayNum,&(this->Pairs).ArrayMax);
    iVar6 = 1;
  }
  else {
    iVar6 = 0;
  }
  return iVar6;
}

// Remove @ 141656f60

int __thiscall
TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
::Remove(TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
         *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  
  uVar8 = (this->Pairs).ArrayNum;
  uVar6 = 0;
  pFVar7 = (this->Pairs).AllocatorInstance.Data;
  if (0 < (int)uVar8) {
    do {
      iVar5 = (uVar8 >> 1) + uVar6;
      if (*(int *)(pFVar7 + (longlong)iVar5 * 0x18) < param_1) {
        uVar6 = iVar5 + (uVar8 & 1);
      }
      uVar3 = uVar8 >> 1;
      uVar8 = uVar8 >> 1;
    } while (uVar3 != 0);
  }
  if ((int)uVar6 < (this->Pairs).ArrayNum) {
    if ((*(int *)(pFVar7 + (longlong)(int)uVar6 * 0x18) <= param_1) && (uVar6 != 0xffffffff)) {
      if ((int)uVar6 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
      }
      pFVar7 = (this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x18;
      if (*(void **)(pFVar7 + 8) != (void *)0x0) {
        FMemory::Free(*(void **)(pFVar7 + 8));
      }
      iVar5 = (this->Pairs).ArrayNum + ~uVar6;
      if (iVar5 != 0) {
        memmove(pFVar7,pFVar7 + 0x18,(longlong)iVar5 * 0x18);
      }
      piVar1 = &(this->Pairs).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,(ForAnyElementType *)this,(this->Pairs).ArrayNum,&(this->Pairs).ArrayMax);
      return 1;
    }
  }
  return 0;
}

// AllocateMemoryForEmplace<int_&> @ 14166f790

TTuple<int,UE::LLMPrivate::FThreadTagSizeData> * __thiscall
TSortedMap<int,UE::LLMPrivate::FThreadTagSizeData,TSizedLLMAllocator<32>,TLess<int_const_>_>::
AllocateMemoryForEmplace<int_&>
          (TSortedMap<int,UE::LLMPrivate::FThreadTagSizeData,TSizedLLMAllocator<32>,TLess<int_const_>_>
           *this,int *param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  TTuple<int,UE::LLMPrivate::FThreadTagSizeData> *pTVar6;
  int iVar7;
  uint uVar8;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar7 = 0;
  if (0 < (int)uVar2) {
    uVar8 = uVar2;
    do {
      iVar1 = (uVar8 >> 1) + iVar7;
      if (*(int *)((longlong)(this->Pairs).AllocatorInstance.Data + (longlong)iVar1 * 0x18) <
          *param_1) {
        iVar7 = iVar1 + (uVar8 & 1);
      }
      uVar4 = uVar8 >> 1;
      uVar8 = uVar8 >> 1;
    } while (uVar4 != 0);
  }
  if ((iVar7 < 0) || ((int)uVar2 < iVar7)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TTuple<int,UE::LLMPrivate::FThreadTagSizeData> *)(*pcVar3)();
      return pTVar6;
    }
    if (iVar7 < 0) goto LAB_14166f878;
  }
  if (iVar7 < (this->Pairs).ArrayNum) {
    if ((iVar7 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TTuple<int,UE::LLMPrivate::FThreadTagSizeData> *)(*pcVar3)();
      return pTVar6;
    }
    pTVar6 = (TTuple<int,UE::LLMPrivate::FThreadTagSizeData> *)
             ((longlong)(this->Pairs).AllocatorInstance.Data + (longlong)iVar7 * 0x18);
    if (*(int *)pTVar6 <= *param_1) {
      return pTVar6;
    }
  }
LAB_14166f878:
  TArray<TTuple<int,UE::LLMPrivate::FThreadTagSizeData>,TSizedLLMAllocator<32>_>::
  InsertUninitializedImpl(&this->Pairs,iVar7,1);
  return (TTuple<int,UE::LLMPrivate::FThreadTagSizeData> *)
         ((longlong)(this->Pairs).AllocatorInstance.Data + (longlong)iVar7 * 0x18);
}

// Find @ 141693260

FThreadTagSizeData * __thiscall
TSortedMap<int,UE::LLMPrivate::FThreadTagSizeData,TSizedLLMAllocator<32>,TLess<int_const_>_>::Find
          (TSortedMap<int,UE::LLMPrivate::FThreadTagSizeData,TSizedLLMAllocator<32>,TLess<int_const_>_>
           *this,int param_1)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  FThreadTagSizeData *pFVar8;
  uint uVar9;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar7 = 0;
  pvVar3 = (this->Pairs).AllocatorInstance.Data;
  uVar9 = uVar2;
  if (0 < (int)uVar2) {
    do {
      iVar1 = (uVar9 >> 1) + iVar7;
      if (*(int *)((longlong)pvVar3 + (longlong)iVar1 * 0x18) < param_1) {
        iVar7 = iVar1 + (uVar9 & 1);
      }
      uVar5 = uVar9 >> 1;
      uVar9 = uVar9 >> 1;
    } while (uVar5 != 0);
  }
  if (((iVar7 < (int)uVar2) && (*(int *)((longlong)iVar7 * 0x18 + (longlong)pvVar3) <= param_1)) &&
     (iVar7 != -1)) {
    if ((iVar7 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FThreadTagSizeData *)(*pcVar4)();
      return pFVar8;
    }
    pFVar8 = (FThreadTagSizeData *)
             ((longlong)(this->Pairs).AllocatorInstance.Data + (longlong)iVar7 * 0x18 + 8);
  }
  else {
    pFVar8 = (FThreadTagSizeData *)0x0;
  }
  return pFVar8;
}

// AllocateMemoryForEmplace<FString_&> @ 1416ca3e0

TTuple<FString,,FString___cdecl_InternationalizationUtilities::GetCanonicalCultureName(FString_const_&,FString_const_&,FInternationalization_&)_::_2_::FCanonizedTagData>
* __thiscall
TSortedMap<FString,`InternationalizationUtilities::GetCanonicalCultureName'::__l2::FCanonizedTagData,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>
::AllocateMemoryForEmplace<FString_&>(void *this,FString *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  TTuple<FString,,FString___cdecl_InternationalizationUtilities::GetCanonicalCultureName(FString_const_&,FString_const_&,FInternationalization_&)_::_2_::FCanonizedTagData>
  *pTVar7;
  wchar_t *pwVar8;
  void *_Src;
  wchar_t *pwVar9;
  FKeyForward local_res8;
  
  iVar5 = AlgoImpl::
          LowerBoundInternal<TTuple<FString,_InternationalizationUtilities::GetCanonicalCultureName_::__l2::FCanonizedTagData>_const_,int,FString,TSortedMap<FString,_InternationalizationUtilities::GetCanonicalCultureName_::__l2::FCanonizedTagData,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>::FKeyForward,TLess<FString_const_&>_>
                    (*(TTuple<FString,,FString___cdecl_InternationalizationUtilities::GetCanonicalCultureName(FString_const_&,FString_const_&,FInternationalization_&)_::_2_::FCanonizedTagData>
                       **)this,*(int *)((longlong)this + 8),param_1,local_res8,
                     (TLess<FString_const_&>)local_res8);
  pwVar9 = L"";
  if (((iVar5 < 0) || (*(int *)((longlong)this + 8) < iVar5)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                         ,0x249,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TTuple<FString,,FString___cdecl_InternationalizationUtilities::GetCanonicalCultureName(FString_const_&,FString_const_&,FInternationalization_&)_::_2_::FCanonizedTagData>
              *)(*pcVar3)();
    return pTVar7;
  }
  if ((-1 < iVar5) && (iVar5 < *(int *)((longlong)this + 8))) {
    if ((iVar5 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TTuple<FString,,FString___cdecl_InternationalizationUtilities::GetCanonicalCultureName(FString_const_&,FString_const_&,FInternationalization_&)_::_2_::FCanonizedTagData>
                *)(*pcVar3)();
      return pTVar7;
    }
    lVar1 = (longlong)iVar5 * 0x28;
    if (*(int *)(lVar1 + 8 + *(longlong *)this) == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = *(wchar_t **)(lVar1 + *(longlong *)this);
    }
    if ((param_1->Data).ArrayNum != 0) {
      pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    iVar6 = FGenericPlatformStricmp::Stricmp(pwVar9,pwVar8);
    if (-1 < iVar6) {
      lVar2 = *(longlong *)this;
      DestructItems<TTuple<FString,_InternationalizationUtilities::GetCanonicalCultureName_::__l2::FCanonizedTagData>,int>
                ((TTuple<FString,,FString___cdecl_InternationalizationUtilities::GetCanonicalCultureName(FString_const_&,FString_const_&,FInternationalization_&)_::_2_::FCanonizedTagData>
                  *)(lVar1 + lVar2),1);
      return (TTuple<FString,,FString___cdecl_InternationalizationUtilities::GetCanonicalCultureName(FString_const_&,FString_const_&,FInternationalization_&)_::_2_::FCanonizedTagData>
              *)(lVar1 + lVar2);
    }
  }
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
  lVar1 = (longlong)iVar5 * 0x28;
  _Src = (void *)(*(longlong *)this + lVar1);
  memmove((void *)((longlong)_Src + 0x28),_Src,(longlong)(iVar6 - iVar5) * 0x28);
  return (TTuple<FString,,FString___cdecl_InternationalizationUtilities::GetCanonicalCultureName(FString_const_&,FString_const_&,FInternationalization_&)_::_2_::FCanonizedTagData>
          *)(*(longlong *)this + lVar1);
}

// AllocateMemoryForEmplace<FString_&> @ 1416ca570

TTuple<FString,FString> * __thiscall
TSortedMap<FString,FString,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>,TLess<FString_const_&>_>
::AllocateMemoryForEmplace<FString_&>
          (TSortedMap<FString,FString,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>,TLess<FString_const_&>_>
           *this,FString *param_1)

{
  ForElementType<TTuple<FString,FString>_> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  TTuple<FString,FString> *pTVar6;
  ForElementType<TTuple<FString,FString>_> FVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  FKeyForward local_res8;
  
  FVar1 = (this->Pairs).AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<TTuple<FString,FString>_>)this;
  if (FVar1 != (ForElementType<TTuple<FString,FString>_>)0x0) {
    FVar7 = FVar1;
  }
  iVar4 = AlgoImpl::
          LowerBoundInternal<TTuple<FString,FString>_const_,int,FString,TSortedMap<FString,FString,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>,TLess<FString_const_&>_>::FKeyForward,TLess<FString_const_&>_>
                    ((TTuple<FString,FString> *)FVar7,(this->Pairs).ArrayNum,param_1,local_res8,
                     (TLess<FString_const_&>)local_res8);
  pwVar9 = L"";
  if ((iVar4 < 0) || ((this->Pairs).ArrayNum < iVar4)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TTuple<FString,FString> *)(*pcVar2)();
      return pTVar6;
    }
    if (iVar4 < 0) goto LAB_1416ca6a0;
  }
  if (iVar4 < (this->Pairs).ArrayNum) {
    if ((iVar4 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TTuple<FString,FString> *)(*pcVar2)();
      return pTVar6;
    }
    FVar1 = (this->Pairs).AllocatorInstance.SecondaryData;
    FVar7 = (ForElementType<TTuple<FString,FString>_>)this;
    if (FVar1 != (ForElementType<TTuple<FString,FString>_>)0x0) {
      FVar7 = FVar1;
    }
    lVar10 = (longlong)iVar4 * 0x20;
    if (*(int *)(lVar10 + 8 + (longlong)FVar7) == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = *(wchar_t **)(lVar10 + (longlong)FVar7);
    }
    if ((param_1->Data).ArrayNum != 0) {
      pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp(pwVar9,pwVar8);
    if (-1 < iVar5) {
      FVar1 = (this->Pairs).AllocatorInstance.SecondaryData;
      if (FVar1 != (ForElementType<TTuple<FString,FString>_>)0x0) {
        this = (TSortedMap<FString,FString,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>,TLess<FString_const_&>_>
                *)FVar1;
      }
      DestructItems<TTuple<FString,FString>,int>
                ((TTuple<FString,FString> *)((longlong)this + lVar10),1);
      return (TTuple<FString,FString> *)((longlong)this + lVar10);
    }
  }
LAB_1416ca6a0:
  TArray<TTuple<FString,FString>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
  InsertUninitializedImpl(&this->Pairs,iVar4,1);
  FVar1 = (this->Pairs).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<TTuple<FString,FString>_>)0x0) {
    this = (TSortedMap<FString,FString,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>,TLess<FString_const_&>_>
            *)FVar1;
  }
  return (TTuple<FString,FString> *)((longlong)iVar4 * 0x20 + (longlong)this);
}

// AllocateMemoryForEmplace<FString_&> @ 1417245e0

TTuple<FString,FFormatArgumentValue> * __thiscall
TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
AllocateMemoryForEmplace<FString_&>
          (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  TTuple<FString,FFormatArgumentValue> *pTVar5;
  wchar_t *_Str2;
  wchar_t *_Str1;
  FKeyForward local_res8;
  
  iVar3 = AlgoImpl::
          LowerBoundInternal<TTuple<FString,FFormatArgumentValue>_const_,int,FString,TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::FKeyForward,FLocKeySortedMapLess>
                    ((TTuple<FString,FFormatArgumentValue> *)(this->Pairs).AllocatorInstance.Data,
                     (this->Pairs).ArrayNum,param_1,local_res8,(FLocKeySortedMapLess)local_res8);
  _Str1 = L"";
  if ((iVar3 < 0) || ((this->Pairs).ArrayNum < iVar3)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TTuple<FString,FFormatArgumentValue> *)(*pcVar1)();
      return pTVar5;
    }
    if (iVar3 < 0) goto LAB_1417246d6;
  }
  if (iVar3 < (this->Pairs).ArrayNum) {
    if ((iVar3 < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TTuple<FString,FFormatArgumentValue> *)(*pcVar1)();
      return pTVar5;
    }
    pTVar5 = (TTuple<FString,FFormatArgumentValue> *)
             ((this->Pairs).AllocatorInstance.Data + (longlong)iVar3 * 0x30);
    if (*(int *)&pTVar5->field_0x8 == 0) {
      _Str2 = L"";
    }
    else {
      _Str2 = *(wchar_t **)pTVar5;
    }
    if ((param_1->Data).ArrayNum != 0) {
      _Str1 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    iVar4 = wcscmp(_Str1,_Str2);
    if (-1 < iVar4) {
      DestructItems<TTuple<FString,FFormatArgumentValue>,int>(pTVar5,1);
      return pTVar5;
    }
  }
LAB_1417246d6:
  TArray<TTuple<FString,FFormatArgumentValue>,TSizedDefaultAllocator<32>_>::InsertUninitializedImpl
            (&this->Pairs,iVar3,1);
  return (TTuple<FString,FFormatArgumentValue> *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)iVar3 * 0x30);
}

// Emplace<FTextFormatString_const_&,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>_> @ 141728970

TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>
* __thiscall
TSortedMap<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>,TSizedDefaultAllocator<32>,TLess<FTextFormatString_const_&>_>
::
Emplace<FTextFormatString_const_&,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>_>
          (TSortedMap<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>,TSizedDefaultAllocator<32>,TLess<FTextFormatString_const_&>_>
           *this,FTextFormatString *param_1,
          TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>
          *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>
  *pTVar8;
  TTuple<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>_>
  *this_00;
  longlong lVar9;
  FKeyForward local_res8;
  
  iVar6 = AlgoImpl::
          LowerBoundInternal<TTuple<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>_>_const_,int,FTextFormatString,TSortedMap<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>,TSizedDefaultAllocator<32>,TLess<FTextFormatString_const_&>_>::FKeyForward,TLess<FTextFormatString_const_&>_>
                    ((TTuple<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>_>
                      *)(this->Pairs).AllocatorInstance.Data,(this->Pairs).ArrayNum,param_1,
                     local_res8,(TLess<FTextFormatString_const_&>)local_res8);
  if ((iVar6 < 0) || ((this->Pairs).ArrayNum < iVar6)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>
                *)(*pcVar3)();
      return pTVar8;
    }
    if (-1 < iVar6) goto LAB_1417289e7;
  }
  else {
LAB_1417289e7:
    if (iVar6 < (this->Pairs).ArrayNum) {
      if (iVar6 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar8 = (TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>
                    *)(*pcVar3)();
          return pTVar8;
        }
      }
      pFVar2 = (this->Pairs).AllocatorInstance.Data;
      iVar1 = param_1->StringLen;
      lVar9 = (longlong)iVar6 * 0x50;
      iVar7 = *(int *)(pFVar2 + lVar9 + 8);
      if (iVar7 <= iVar1) {
        if (iVar1 <= iVar7) {
          iVar7 = wcsncmp(param_1->StringPtr,*(wchar_t **)(pFVar2 + lVar9),(longlong)iVar1);
          if (iVar7 < 0) goto LAB_141728a6a;
        }
        this_00 = (TTuple<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>_>
                   *)((this->Pairs).AllocatorInstance.Data + lVar9);
        DestructItems<TTuple<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>_>,int>
                  (this_00,1);
        goto LAB_141728a85;
      }
    }
  }
LAB_141728a6a:
  TArray<TTuple<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>_>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar6,1);
  this_00 = (TTuple<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>_>
             *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar6 * 0x50);
LAB_141728a85:
  UE::Core::Private::Tuple::TTupleBaseElement<FTextFormatString,0,2>::
  TTupleBaseElement<FTextFormatString,0,2><FTextFormatString_const_&>
            ((TTupleBaseElement<FTextFormatString,0,2> *)this_00,ForwardingConstructor,param_1);
  *(undefined8 *)&this_00->field_0x20 = *(undefined8 *)param_2;
  *(undefined8 *)&this_00->field_0x48 = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar4 = *(undefined8 *)&param_2->field_0x18;
  *(undefined8 *)&this_00->field_0x30 = *(undefined8 *)&param_2->field_0x10;
  *(undefined8 *)&this_00->field_0x38 = uVar4;
  *(undefined8 *)&this_00->field_0x40 = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)&this_00->field_0x20 != 0) {
    *(undefined8 *)param_2 = 0;
  }
  return (TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>
          *)&this_00->field_0x20;
}

// Emplace<FTextFormatString_const_&,FTextFormat> @ 141728af0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FTextFormat * __thiscall
TSortedMap<FTextFormatString,FTextFormat,TSizedDefaultAllocator<32>,TLess<FTextFormatString_const_&>_>
::Emplace<FTextFormatString_const_&,FTextFormat>
          (TSortedMap<FTextFormatString,FTextFormat,TSizedDefaultAllocator<32>,TLess<FTextFormatString_const_&>_>
           *this,FTextFormatString *param_1,FTextFormat *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FTextFormat *pFVar8;
  TTuple<FTextFormatString,FTextFormat> *this_00;
  longlong lVar9;
  FKeyForward local_res8;
  
  iVar6 = AlgoImpl::
          LowerBoundInternal<TTuple<FTextFormatString,FTextFormat>_const_,int,FTextFormatString,TSortedMap<FTextFormatString,FTextFormat,TSizedDefaultAllocator<32>,TLess<FTextFormatString_const_&>_>::FKeyForward,TLess<FTextFormatString_const_&>_>
                    ((TTuple<FTextFormatString,FTextFormat> *)(this->Pairs).AllocatorInstance.Data,
                     (this->Pairs).ArrayNum,param_1,local_res8,
                     (TLess<FTextFormatString_const_&>)local_res8);
  if ((iVar6 < 0) || ((this->Pairs).ArrayNum < iVar6)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FTextFormat *)(*pcVar4)();
      return pFVar8;
    }
    if (-1 < iVar6) goto LAB_141728b6d;
  }
  else {
LAB_141728b6d:
    if (iVar6 < (this->Pairs).ArrayNum) {
      if (iVar6 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FTextFormat *)(*pcVar4)();
          return pFVar8;
        }
      }
      pFVar2 = (this->Pairs).AllocatorInstance.Data;
      iVar1 = param_1->StringLen;
      lVar9 = (longlong)iVar6 * 0x30;
      iVar7 = *(int *)(pFVar2 + lVar9 + 8);
      if (iVar7 <= iVar1) {
        if (iVar1 <= iVar7) {
          iVar7 = wcsncmp(param_1->StringPtr,*(wchar_t **)(pFVar2 + lVar9),(longlong)iVar1);
          if (iVar7 < 0) goto LAB_141728bf0;
        }
        this_00 = (TTuple<FTextFormatString,FTextFormat> *)
                  ((this->Pairs).AllocatorInstance.Data + lVar9);
        DestructItems<TTuple<FTextFormatString,FTextFormat>,int>(this_00,1);
        goto LAB_141728c0b;
      }
    }
  }
LAB_141728bf0:
  TArray<TTuple<FTextFormatString,FTextFormat>,TSizedDefaultAllocator<32>_>::InsertUninitializedImpl
            (&this->Pairs,iVar6,1);
  this_00 = (TTuple<FTextFormatString,FTextFormat> *)
            ((this->Pairs).AllocatorInstance.Data + (longlong)iVar6 * 0x30);
LAB_141728c0b:
  UE::Core::Private::Tuple::TTupleBaseElement<FTextFormatString,0,2>::
  TTupleBaseElement<FTextFormatString,0,2><FTextFormatString_const_&>
            ((TTupleBaseElement<FTextFormatString,0,2> *)this_00,ForwardingConstructor,param_1);
  *(FTextFormatData **)&this_00->field_0x20 = (param_2->TextFormatData).Object;
  pTVar3 = (param_2->TextFormatData).SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)&this_00->field_0x28 = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  return (FTextFormat *)&this_00->field_0x20;
}

// Emplace<FTextFormatString,FTextFormatString> @ 14172b360

FTextFormatString * __thiscall
TSortedMap<FTextFormatString,FTextFormatString,TSizedDefaultAllocator<32>,TLess<FTextFormatString_const_&>_>
::Emplace<FTextFormatString,FTextFormatString>
          (TSortedMap<FTextFormatString,FTextFormatString,TSizedDefaultAllocator<32>,TLess<FTextFormatString_const_&>_>
           *this,FTextFormatString *param_1,FTextFormatString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FTextFormatString *pFVar7;
  TTuple<FTextFormatString,FTextFormatString> *pTVar8;
  longlong lVar9;
  FKeyForward local_res8;
  
  iVar5 = AlgoImpl::
          LowerBoundInternal<TTuple<FTextFormatString,FTextFormatString>_const_,int,FTextFormatString,TSortedMap<FTextFormatString,FTextFormatString,TSizedDefaultAllocator<32>,TLess<FTextFormatString_const_&>_>::FKeyForward,TLess<FTextFormatString_const_&>_>
                    ((TTuple<FTextFormatString,FTextFormatString> *)
                     (this->Pairs).AllocatorInstance.Data,(this->Pairs).ArrayNum,param_1,local_res8,
                     (TLess<FTextFormatString_const_&>)local_res8);
  if ((iVar5 < 0) || ((this->Pairs).ArrayNum < iVar5)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FTextFormatString *)(*pcVar3)();
      return pFVar7;
    }
    if (-1 < iVar5) goto LAB_14172b3d8;
  }
  else {
LAB_14172b3d8:
    if (iVar5 < (this->Pairs).ArrayNum) {
      if ((iVar5 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FTextFormatString *)(*pcVar3)();
        return pFVar7;
      }
      pFVar2 = (this->Pairs).AllocatorInstance.Data;
      iVar1 = param_1->StringLen;
      lVar9 = (longlong)iVar5 * 0x40;
      iVar6 = *(int *)(pFVar2 + lVar9 + 8);
      if ((iVar6 <= iVar1) &&
         ((iVar6 < iVar1 ||
          (iVar6 = wcsncmp(param_1->StringPtr,*(wchar_t **)(pFVar2 + lVar9),(longlong)iVar1),
          -1 < iVar6)))) {
        pTVar8 = (TTuple<FTextFormatString,FTextFormatString> *)
                 ((this->Pairs).AllocatorInstance.Data + lVar9);
        DestructItems<TTuple<FTextFormatString,FTextFormatString>,int>(pTVar8,1);
        goto LAB_14172b479;
      }
    }
  }
  TArray<TTuple<FTextFormatString,FTextFormatString>,TSizedDefaultAllocator<32>_>::
  InsertUninitializedImpl(&this->Pairs,iVar5,1);
  pTVar8 = (TTuple<FTextFormatString,FTextFormatString> *)
           ((this->Pairs).AllocatorInstance.Data + (longlong)iVar5 * 0x40);
LAB_14172b479:
  *(wchar_t **)pTVar8 = param_1->StringPtr;
  *(int *)&pTVar8->field_0x8 = param_1->StringLen;
  *(undefined8 *)&pTVar8->field_0x10 = 0;
  *(FScriptContainerElement **)&pTVar8->field_0x10 =
       (param_1->InternalString).Data.AllocatorInstance.Data;
  (param_1->InternalString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&pTVar8->field_0x18 = (param_1->InternalString).Data.ArrayNum;
  *(int *)&pTVar8->field_0x1c = (param_1->InternalString).Data.ArrayMax;
  (param_1->InternalString).Data.ArrayNum = 0;
  (param_1->InternalString).Data.ArrayMax = 0;
  *(wchar_t **)&pTVar8->field_0x20 = param_2->StringPtr;
  *(int *)&pTVar8->field_0x28 = param_2->StringLen;
  *(undefined8 *)&pTVar8->field_0x30 = 0;
  *(FScriptContainerElement **)&pTVar8->field_0x30 =
       (param_2->InternalString).Data.AllocatorInstance.Data;
  (param_2->InternalString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&pTVar8->field_0x38 = (param_2->InternalString).Data.ArrayNum;
  *(int *)&pTVar8->field_0x3c = (param_2->InternalString).Data.ArrayMax;
  (param_2->InternalString).Data.ArrayNum = 0;
  (param_2->InternalString).Data.ArrayMax = 0;
  return (FTextFormatString *)&pTVar8->field_0x20;
}

// Emplace<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>_> @ 14172b500

TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>
* __thiscall
TSortedMap<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>,TSizedDefaultAllocator<32>,TLess<FTextFormatString_const_&>_>
::
Emplace<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>_>
          (TSortedMap<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>,TSizedDefaultAllocator<32>,TLess<FTextFormatString_const_&>_>
           *this,FTextFormatString *param_1,
          TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>
          *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>
  *pTVar8;
  TTuple<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>_>
  *pTVar9;
  longlong lVar10;
  FKeyForward local_res8;
  
  iVar6 = AlgoImpl::
          LowerBoundInternal<TTuple<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>_>_const_,int,FTextFormatString,TSortedMap<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>,TSizedDefaultAllocator<32>,TLess<FTextFormatString_const_&>_>::FKeyForward,TLess<FTextFormatString_const_&>_>
                    ((TTuple<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>_>
                      *)(this->Pairs).AllocatorInstance.Data,(this->Pairs).ArrayNum,param_1,
                     local_res8,(TLess<FTextFormatString_const_&>)local_res8);
  if ((iVar6 < 0) || ((this->Pairs).ArrayNum < iVar6)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>
                *)(*pcVar3)();
      return pTVar8;
    }
    if (-1 < iVar6) goto LAB_14172b57b;
  }
  else {
LAB_14172b57b:
    if (iVar6 < (this->Pairs).ArrayNum) {
      if ((iVar6 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>
                  *)(*pcVar3)();
        return pTVar8;
      }
      pFVar2 = (this->Pairs).AllocatorInstance.Data;
      iVar1 = param_1->StringLen;
      lVar10 = (longlong)iVar6 * 0x50;
      iVar7 = *(int *)(pFVar2 + lVar10 + 8);
      if ((iVar7 <= iVar1) &&
         ((iVar7 < iVar1 ||
          (iVar7 = wcsncmp(param_1->StringPtr,*(wchar_t **)(pFVar2 + lVar10),(longlong)iVar1),
          -1 < iVar7)))) {
        pTVar9 = (TTuple<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>_>
                  *)((this->Pairs).AllocatorInstance.Data + lVar10);
        DestructItems<TTuple<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>_>,int>
                  (pTVar9,1);
        goto LAB_14172b626;
      }
    }
  }
  TArray<TTuple<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>_>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar6,1);
  pTVar9 = (TTuple<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>_>
            *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar6 * 0x50);
LAB_14172b626:
  *(wchar_t **)pTVar9 = param_1->StringPtr;
  *(int *)&pTVar9->field_0x8 = param_1->StringLen;
  *(undefined8 *)&pTVar9->field_0x10 = 0;
  *(FScriptContainerElement **)&pTVar9->field_0x10 =
       (param_1->InternalString).Data.AllocatorInstance.Data;
  (param_1->InternalString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&pTVar9->field_0x18 = (param_1->InternalString).Data.ArrayNum;
  *(int *)&pTVar9->field_0x1c = (param_1->InternalString).Data.ArrayMax;
  (param_1->InternalString).Data.ArrayNum = 0;
  (param_1->InternalString).Data.ArrayMax = 0;
  *(undefined8 *)&pTVar9->field_0x20 = *(undefined8 *)param_2;
  *(undefined8 *)&pTVar9->field_0x48 = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar4 = *(undefined8 *)&param_2->field_0x18;
  *(undefined8 *)&pTVar9->field_0x30 = *(undefined8 *)&param_2->field_0x10;
  *(undefined8 *)&pTVar9->field_0x38 = uVar4;
  *(undefined8 *)&pTVar9->field_0x40 = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)&pTVar9->field_0x20 != 0) {
    *(undefined8 *)param_2 = 0;
  }
  return (TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>
          *)&pTVar9->field_0x20;
}

// Find @ 1417564b0

FFormatArgumentValue * __thiscall
TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::Find
          (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FFormatArgumentValue *pFVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<FString,FFormatArgumentValue>,TSizedDefaultAllocator<32>_>,FString,TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::FKeyForward,FLocKeySortedMapLess>
                    (&this->Pairs,param_1,local_res8,(FLocKeySortedMapLess)local_res8);
  if (uVar3 == 0xffffffff) {
    return (FFormatArgumentValue *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->Pairs).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FFormatArgumentValue *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FFormatArgumentValue *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x30 + 0x10);
}

// Find @ 141756550

TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>
* __thiscall
TSortedMap<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>,TSizedDefaultAllocator<32>,TLess<FTextFormatString_const_&>_>
::Find(TSortedMap<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>,TSizedDefaultAllocator<32>,TLess<FTextFormatString_const_&>_>
       *this,FTextFormatString *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>
  *pTVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>_>,TSizedDefaultAllocator<32>_>,FTextFormatString,TSortedMap<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>,TSizedDefaultAllocator<32>,TLess<FTextFormatString_const_&>_>::FKeyForward,TLess<FTextFormatString_const_&>_>
                    (&this->Pairs,param_1,local_res8,(TLess<FTextFormatString_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>
            *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->Pairs).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>
          *)((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x50 + 0x20);
}

// AllocateMemoryForEmplace<FName_const_&> @ 141788320

TTuple<FName,TArray<FMessageLogScopedOverride_const_*,TSizedDefaultAllocator<32>_>_> * __thiscall
TSortedMap<FName,TArray<FMessageLogScopedOverride_const_*,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,FNameFastLess>
::AllocateMemoryForEmplace<FName_const_&>
          (TSortedMap<FName,TArray<FMessageLogScopedOverride_const_*,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           *this,FName *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  TTuple<FName,TArray<FMessageLogScopedOverride_const_*,TSizedDefaultAllocator<32>_>_> *pTVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  uVar1 = (this->Pairs).ArrayNum;
  iVar9 = 0;
  pFVar2 = (this->Pairs).AllocatorInstance.Data;
  if (0 < (int)uVar1) {
    uVar10 = uVar1;
    do {
      iVar6 = (uVar10 >> 1) + iVar9;
      iVar8 = *(int *)(pFVar2 + (longlong)iVar6 * 0x18) - (param_1->ComparisonIndex).Value;
      if (iVar8 == 0) {
        iVar8 = *(int *)(pFVar2 + (longlong)iVar6 * 0x18 + 4) - param_1->Number;
      }
      if (iVar8 < 0) {
        iVar9 = iVar6 + (uVar10 & 1);
      }
      uVar4 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar4 != 0);
  }
  if ((iVar9 < 0) || ((int)uVar1 < iVar9)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TTuple<FName,TArray<FMessageLogScopedOverride_const_*,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar3)();
      return pTVar7;
    }
    if (iVar9 < 0) goto LAB_14178843b;
  }
  if (iVar9 < (this->Pairs).ArrayNum) {
    if ((iVar9 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TTuple<FName,TArray<FMessageLogScopedOverride_const_*,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar3)();
      return pTVar7;
    }
    pTVar7 = (TTuple<FName,TArray<FMessageLogScopedOverride_const_*,TSizedDefaultAllocator<32>_>_> *
             )((this->Pairs).AllocatorInstance.Data + (longlong)iVar9 * 0x18);
    iVar6 = (param_1->ComparisonIndex).Value - *(int *)pTVar7;
    if (iVar6 == 0) {
      iVar6 = param_1->Number - *(int *)&pTVar7->field_0x4;
    }
    if (-1 < iVar6) {
      DestructItems<TTuple<FName,TArray<FMessageLogScopedOverride_const_*,TSizedDefaultAllocator<32>_>_>,int>
                (pTVar7,1);
      return pTVar7;
    }
  }
LAB_14178843b:
  TArray<TTuple<FName,TArray<FMessageLogScopedOverride_const_*,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar9,1);
  return (TTuple<FName,TArray<FMessageLogScopedOverride_const_*,TSizedDefaultAllocator<32>_>_> *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)iVar9 * 0x18);
}

// Emplace<enum_EMessageSeverity::Type_const_&,enum_EMessageSeverity::Type_const_&> @ 141790720

Type * __thiscall
TSortedMap<enum_EMessageSeverity::Type,enum_EMessageSeverity::Type,TSizedDefaultAllocator<32>,TLess<enum_EMessageSeverity::Type_const_>_>
::Emplace<enum_EMessageSeverity::Type_const_&,enum_EMessageSeverity::Type_const_&>
          (void *this,Type *param_1,Type *param_2)

{
  void *_Src;
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  Type *pTVar6;
  int iVar7;
  uint uVar8;
  
  uVar1 = *(uint *)((longlong)this + 8);
  iVar7 = 0;
  if (0 < (int)uVar1) {
    uVar8 = uVar1;
    do {
      iVar5 = (uVar8 >> 1) + iVar7;
      if (*(int *)(*(longlong *)this + (longlong)iVar5 * 8) < (int)*param_1) {
        iVar7 = iVar5 + (uVar8 & 1);
      }
      uVar3 = uVar8 >> 1;
      uVar8 = uVar8 >> 1;
    } while (uVar3 != 0);
  }
  if ((iVar7 < 0) || ((int)uVar1 < iVar7)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (Type *)(*pcVar2)();
      return pTVar6;
    }
    if (-1 < iVar7) goto LAB_1417907b6;
  }
  else {
LAB_1417907b6:
    if (iVar7 < *(int *)((longlong)this + 8)) {
      if ((iVar7 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (Type *)(*pcVar2)();
        return pTVar6;
      }
      pTVar6 = (Type *)(*(longlong *)this + (longlong)iVar7 * 8);
      if (*(int *)(*(longlong *)this + (longlong)iVar7 * 8) <= (int)*param_1) goto LAB_141790858;
    }
  }
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
  _Src = (void *)(*(longlong *)this + (longlong)iVar7 * 8);
  memmove((void *)((longlong)_Src + 8),_Src,(longlong)(iVar5 - iVar7) << 3);
  pTVar6 = (Type *)(*(longlong *)this + (longlong)iVar7 * 8);
LAB_141790858:
  *pTVar6 = *param_1;
  pTVar6[1] = *param_2;
  return pTVar6 + 1;
}

// Find @ 1417cd230

TArray<FMessageLogScopedOverride_const_*,TSizedDefaultAllocator<32>_> * __thiscall
TSortedMap<FName,TArray<FMessageLogScopedOverride_const_*,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,FNameFastLess>
::Find(TSortedMap<FName,TArray<FMessageLogScopedOverride_const_*,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,FNameFastLess>
       *this,FName param_1)

{
  code *pcVar1;
  FKeyForward FVar2;
  bool bVar3;
  uint uVar4;
  TArray<FMessageLogScopedOverride_const_*,TSizedDefaultAllocator<32>_> *pTVar5;
  uint uVar6;
  FName local_res8;
  
  local_res8.ComparisonIndex.Value._0_1_ = param_1.ComparisonIndex.Value._0_1_;
  FVar2 = local_res8.ComparisonIndex.Value._0_1_;
  local_res8 = param_1;
  uVar4 = Algo::
          BinarySearchBy<TArray<TTuple<FName,TArray<FMessageLogScopedOverride_const_*,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,TArray<FMessageLogScopedOverride_const_*,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
                    (&this->Pairs,&local_res8,FVar2,(FNameFastLess)FVar2);
  if (uVar4 == 0xffffffff) {
    return (TArray<FMessageLogScopedOverride_const_*,TSizedDefaultAllocator<32>_> *)0x0;
  }
  uVar6 = 0;
  if ((int)uVar4 < (this->Pairs).ArrayNum) {
    uVar6 = ~uVar4 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<FMessageLogScopedOverride_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  return (TArray<FMessageLogScopedOverride_const_*,TSizedDefaultAllocator<32>_> *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x18 + 8);
}

// Find @ 1417cd2e0

Type * __thiscall
TSortedMap<enum_EMessageSeverity::Type,enum_EMessageSeverity::Type,TSizedDefaultAllocator<32>,TLess<enum_EMessageSeverity::Type_const_>_>
::Find(void *this,Type param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  Type *pTVar7;
  uint uVar8;
  
  uVar2 = *(uint *)((longlong)this + 8);
  iVar6 = 0;
  uVar8 = uVar2;
  if (0 < (int)uVar2) {
    do {
      iVar1 = (uVar8 >> 1) + iVar6;
      if (*(int *)(*(longlong *)this + (longlong)iVar1 * 8) < (int)param_1) {
        iVar6 = iVar1 + (uVar8 & 1);
      }
      uVar4 = uVar8 >> 1;
      uVar8 = uVar8 >> 1;
    } while (uVar4 != 0);
  }
  if (((iVar6 < (int)uVar2) && (*(int *)(*(longlong *)this + (longlong)iVar6 * 8) <= (int)param_1))
     && (iVar6 != -1)) {
    if ((iVar6 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (Type *)(*pcVar3)();
      return pTVar7;
    }
    pTVar7 = (Type *)(*(longlong *)this + (longlong)iVar6 * 8 + 4);
  }
  else {
    pTVar7 = (Type *)0x0;
  }
  return pTVar7;
}

// AllocateMemoryForEmplace<wchar_t_const_(&)[4]> @ 141bd1ed0

TTuple<FString,FFormatArgumentValue> * __thiscall
TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
AllocateMemoryForEmplace<wchar_t_const_(&)[4]>
          (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           *this,wchar_t (*param_1) [4])

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  TTuple<FString,FFormatArgumentValue> *pTVar6;
  wchar_t *_Str2;
  ForAnyElementType _Str1;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  FString local_28;
  
  bVar3 = false;
  iVar4 = AlgoImpl::
          LowerBoundInternal<TTuple<FString,FFormatArgumentValue>_const_,int,wchar_t_[4],TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::FKeyForward,FLocKeySortedMapLess>
                    ((TTuple<FString,FFormatArgumentValue> *)(this->Pairs).AllocatorInstance.Data,
                     (this->Pairs).ArrayNum,param_1,(FKeyForward)0x0,(FLocKeySortedMapLess)0x0);
  if ((iVar4 < 0) || ((this->Pairs).ArrayNum < iVar4)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TTuple<FString,FFormatArgumentValue> *)(*pcVar1)();
      return pTVar6;
    }
    if (-1 < iVar4) goto LAB_141bd1f50;
  }
  else {
LAB_141bd1f50:
    if (iVar4 < (this->Pairs).ArrayNum) {
      if ((iVar4 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TTuple<FString,FFormatArgumentValue> *)(*pcVar1)();
        return pTVar6;
      }
      pFVar7 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar4 * 0x30;
      ::FString::FString(&local_28,*param_1);
      if (*(int *)(pFVar7 + 8) == 0) {
        _Str2 = L"";
      }
      else {
        _Str2 = *(wchar_t **)pFVar7;
      }
      _Str1.Data = (FScriptContainerElement *)L"";
      if (local_28.Data.ArrayNum != 0) {
        _Str1.Data = local_28.Data.AllocatorInstance.Data;
      }
      iVar5 = wcscmp((wchar_t *)_Str1.Data,_Str2);
      bVar3 = true;
      if (-1 < iVar5) {
        bVar2 = true;
        goto LAB_141bd1feb;
      }
    }
  }
  bVar2 = false;
LAB_141bd1feb:
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  lVar8 = (longlong)iVar4 * 0x30;
  if (bVar2) {
    pTVar6 = (TTuple<FString,FFormatArgumentValue> *)((this->Pairs).AllocatorInstance.Data + lVar8);
    DestructItems<TTuple<FString,FFormatArgumentValue>,int>(pTVar6,1);
  }
  else {
    TArray<TTuple<FString,FFormatArgumentValue>,TSizedDefaultAllocator<32>_>::
    InsertUninitializedImpl(&this->Pairs,iVar4,1);
    pTVar6 = (TTuple<FString,FFormatArgumentValue> *)((this->Pairs).AllocatorInstance.Data + lVar8);
  }
  return pTVar6;
}

// AllocateMemoryForEmplace<wchar_t_const_(&)[5]> @ 141bd2060

TTuple<FString,FFormatArgumentValue> * __thiscall
TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
AllocateMemoryForEmplace<wchar_t_const_(&)[5]>
          (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           *this,wchar_t (*param_1) [5])

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  TTuple<FString,FFormatArgumentValue> *pTVar6;
  wchar_t *_Str2;
  ForAnyElementType _Str1;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  FString local_28;
  
  bVar3 = false;
  iVar4 = AlgoImpl::
          LowerBoundInternal<TTuple<FString,FFormatArgumentValue>_const_,int,wchar_t_[5],TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::FKeyForward,FLocKeySortedMapLess>
                    ((TTuple<FString,FFormatArgumentValue> *)(this->Pairs).AllocatorInstance.Data,
                     (this->Pairs).ArrayNum,param_1,(FKeyForward)0x0,(FLocKeySortedMapLess)0x0);
  if ((iVar4 < 0) || ((this->Pairs).ArrayNum < iVar4)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TTuple<FString,FFormatArgumentValue> *)(*pcVar1)();
      return pTVar6;
    }
    if (-1 < iVar4) goto LAB_141bd20e0;
  }
  else {
LAB_141bd20e0:
    if (iVar4 < (this->Pairs).ArrayNum) {
      if ((iVar4 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TTuple<FString,FFormatArgumentValue> *)(*pcVar1)();
        return pTVar6;
      }
      pFVar7 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar4 * 0x30;
      ::FString::FString(&local_28,*param_1);
      if (*(int *)(pFVar7 + 8) == 0) {
        _Str2 = L"";
      }
      else {
        _Str2 = *(wchar_t **)pFVar7;
      }
      _Str1.Data = (FScriptContainerElement *)L"";
      if (local_28.Data.ArrayNum != 0) {
        _Str1.Data = local_28.Data.AllocatorInstance.Data;
      }
      iVar5 = wcscmp((wchar_t *)_Str1.Data,_Str2);
      bVar3 = true;
      if (-1 < iVar5) {
        bVar2 = true;
        goto LAB_141bd217b;
      }
    }
  }
  bVar2 = false;
LAB_141bd217b:
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  lVar8 = (longlong)iVar4 * 0x30;
  if (bVar2) {
    pTVar6 = (TTuple<FString,FFormatArgumentValue> *)((this->Pairs).AllocatorInstance.Data + lVar8);
    DestructItems<TTuple<FString,FFormatArgumentValue>,int>(pTVar6,1);
  }
  else {
    TArray<TTuple<FString,FFormatArgumentValue>,TSizedDefaultAllocator<32>_>::
    InsertUninitializedImpl(&this->Pairs,iVar4,1);
    pTVar6 = (TTuple<FString,FFormatArgumentValue> *)((this->Pairs).AllocatorInstance.Data + lVar8);
  }
  return pTVar6;
}

// AllocateMemoryForEmplace<wchar_t_const_(&)[6]> @ 141bd21f0

TTuple<FString,FFormatArgumentValue> * __thiscall
TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
AllocateMemoryForEmplace<wchar_t_const_(&)[6]>
          (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           *this,wchar_t (*param_1) [6])

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  TTuple<FString,FFormatArgumentValue> *pTVar6;
  wchar_t *_Str2;
  ForAnyElementType _Str1;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  FString local_28;
  
  bVar3 = false;
  iVar4 = AlgoImpl::
          LowerBoundInternal<TTuple<FString,FFormatArgumentValue>_const_,int,wchar_t_[6],TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::FKeyForward,FLocKeySortedMapLess>
                    ((TTuple<FString,FFormatArgumentValue> *)(this->Pairs).AllocatorInstance.Data,
                     (this->Pairs).ArrayNum,param_1,(FKeyForward)0x0,(FLocKeySortedMapLess)0x0);
  if ((iVar4 < 0) || ((this->Pairs).ArrayNum < iVar4)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TTuple<FString,FFormatArgumentValue> *)(*pcVar1)();
      return pTVar6;
    }
    if (-1 < iVar4) goto LAB_141bd2270;
  }
  else {
LAB_141bd2270:
    if (iVar4 < (this->Pairs).ArrayNum) {
      if ((iVar4 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TTuple<FString,FFormatArgumentValue> *)(*pcVar1)();
        return pTVar6;
      }
      pFVar7 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar4 * 0x30;
      ::FString::FString(&local_28,*param_1);
      if (*(int *)(pFVar7 + 8) == 0) {
        _Str2 = L"";
      }
      else {
        _Str2 = *(wchar_t **)pFVar7;
      }
      _Str1.Data = (FScriptContainerElement *)L"";
      if (local_28.Data.ArrayNum != 0) {
        _Str1.Data = local_28.Data.AllocatorInstance.Data;
      }
      iVar5 = wcscmp((wchar_t *)_Str1.Data,_Str2);
      bVar3 = true;
      if (-1 < iVar5) {
        bVar2 = true;
        goto LAB_141bd230b;
      }
    }
  }
  bVar2 = false;
LAB_141bd230b:
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  lVar8 = (longlong)iVar4 * 0x30;
  if (bVar2) {
    pTVar6 = (TTuple<FString,FFormatArgumentValue> *)((this->Pairs).AllocatorInstance.Data + lVar8);
    DestructItems<TTuple<FString,FFormatArgumentValue>,int>(pTVar6,1);
  }
  else {
    TArray<TTuple<FString,FFormatArgumentValue>,TSizedDefaultAllocator<32>_>::
    InsertUninitializedImpl(&this->Pairs,iVar4,1);
    pTVar6 = (TTuple<FString,FFormatArgumentValue> *)((this->Pairs).AllocatorInstance.Data + lVar8);
  }
  return pTVar6;
}

// AllocateMemoryForEmplace<wchar_t_const_(&)[7]> @ 141bd2380

TTuple<FString,FFormatArgumentValue> * __thiscall
TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
AllocateMemoryForEmplace<wchar_t_const_(&)[7]>
          (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           *this,wchar_t (*param_1) [7])

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  TTuple<FString,FFormatArgumentValue> *pTVar6;
  wchar_t *_Str2;
  ForAnyElementType _Str1;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  FString local_28;
  
  bVar3 = false;
  iVar4 = AlgoImpl::
          LowerBoundInternal<TTuple<FString,FFormatArgumentValue>_const_,int,wchar_t_[7],TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::FKeyForward,FLocKeySortedMapLess>
                    ((TTuple<FString,FFormatArgumentValue> *)(this->Pairs).AllocatorInstance.Data,
                     (this->Pairs).ArrayNum,param_1,(FKeyForward)0x0,(FLocKeySortedMapLess)0x0);
  if ((iVar4 < 0) || ((this->Pairs).ArrayNum < iVar4)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TTuple<FString,FFormatArgumentValue> *)(*pcVar1)();
      return pTVar6;
    }
    if (-1 < iVar4) goto LAB_141bd2400;
  }
  else {
LAB_141bd2400:
    if (iVar4 < (this->Pairs).ArrayNum) {
      if ((iVar4 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TTuple<FString,FFormatArgumentValue> *)(*pcVar1)();
        return pTVar6;
      }
      pFVar7 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar4 * 0x30;
      ::FString::FString(&local_28,*param_1);
      if (*(int *)(pFVar7 + 8) == 0) {
        _Str2 = L"";
      }
      else {
        _Str2 = *(wchar_t **)pFVar7;
      }
      _Str1.Data = (FScriptContainerElement *)L"";
      if (local_28.Data.ArrayNum != 0) {
        _Str1.Data = local_28.Data.AllocatorInstance.Data;
      }
      iVar5 = wcscmp((wchar_t *)_Str1.Data,_Str2);
      bVar3 = true;
      if (-1 < iVar5) {
        bVar2 = true;
        goto LAB_141bd249b;
      }
    }
  }
  bVar2 = false;
LAB_141bd249b:
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  lVar8 = (longlong)iVar4 * 0x30;
  if (bVar2) {
    pTVar6 = (TTuple<FString,FFormatArgumentValue> *)((this->Pairs).AllocatorInstance.Data + lVar8);
    DestructItems<TTuple<FString,FFormatArgumentValue>,int>(pTVar6,1);
  }
  else {
    TArray<TTuple<FString,FFormatArgumentValue>,TSizedDefaultAllocator<32>_>::
    InsertUninitializedImpl(&this->Pairs,iVar4,1);
    pTVar6 = (TTuple<FString,FFormatArgumentValue> *)((this->Pairs).AllocatorInstance.Data + lVar8);
  }
  return pTVar6;
}

// AllocateMemoryForEmplace<wchar_t_const_(&)[8]> @ 141bd2510

TTuple<FString,FFormatArgumentValue> * __thiscall
TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
AllocateMemoryForEmplace<wchar_t_const_(&)[8]>
          (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           *this,wchar_t (*param_1) [8])

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  TTuple<FString,FFormatArgumentValue> *pTVar6;
  wchar_t *_Str2;
  ForAnyElementType _Str1;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  FString local_28;
  
  bVar3 = false;
  iVar4 = AlgoImpl::
          LowerBoundInternal<TTuple<FString,FFormatArgumentValue>_const_,int,wchar_t_[8],TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::FKeyForward,FLocKeySortedMapLess>
                    ((TTuple<FString,FFormatArgumentValue> *)(this->Pairs).AllocatorInstance.Data,
                     (this->Pairs).ArrayNum,param_1,(FKeyForward)0x0,(FLocKeySortedMapLess)0x0);
  if ((iVar4 < 0) || ((this->Pairs).ArrayNum < iVar4)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TTuple<FString,FFormatArgumentValue> *)(*pcVar1)();
      return pTVar6;
    }
    if (-1 < iVar4) goto LAB_141bd2590;
  }
  else {
LAB_141bd2590:
    if (iVar4 < (this->Pairs).ArrayNum) {
      if ((iVar4 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TTuple<FString,FFormatArgumentValue> *)(*pcVar1)();
        return pTVar6;
      }
      pFVar7 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar4 * 0x30;
      ::FString::FString(&local_28,*param_1);
      if (*(int *)(pFVar7 + 8) == 0) {
        _Str2 = L"";
      }
      else {
        _Str2 = *(wchar_t **)pFVar7;
      }
      _Str1.Data = (FScriptContainerElement *)L"";
      if (local_28.Data.ArrayNum != 0) {
        _Str1.Data = local_28.Data.AllocatorInstance.Data;
      }
      iVar5 = wcscmp((wchar_t *)_Str1.Data,_Str2);
      bVar3 = true;
      if (-1 < iVar5) {
        bVar2 = true;
        goto LAB_141bd262b;
      }
    }
  }
  bVar2 = false;
LAB_141bd262b:
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  lVar8 = (longlong)iVar4 * 0x30;
  if (bVar2) {
    pTVar6 = (TTuple<FString,FFormatArgumentValue> *)((this->Pairs).AllocatorInstance.Data + lVar8);
    DestructItems<TTuple<FString,FFormatArgumentValue>,int>(pTVar6,1);
  }
  else {
    TArray<TTuple<FString,FFormatArgumentValue>,TSizedDefaultAllocator<32>_>::
    InsertUninitializedImpl(&this->Pairs,iVar4,1);
    pTVar6 = (TTuple<FString,FFormatArgumentValue> *)((this->Pairs).AllocatorInstance.Data + lVar8);
  }
  return pTVar6;
}

// Emplace<wchar_t_const_(&)[7],FText> @ 141bd9b80

FFormatArgumentValue * __thiscall
TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
Emplace<wchar_t_const_(&)[7],FText>
          (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           *this,wchar_t (*param_1) [7],FText *param_2)

{
  code *pcVar1;
  bool bVar2;
  TTuple<FString,FFormatArgumentValue> *this_00;
  FFormatArgumentValue *pFVar3;
  
  this_00 = AllocateMemoryForEmplace<wchar_t_const_(&)[7]>(this,param_1);
  ::FString::FString((FString *)this_00,*param_1);
  *(undefined4 *)&this_00->field_0x10 = 4;
  FText::FText((FText *)&this_00->field_0x20,param_2);
  if (*(longlong *)&this_00->field_0x20 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FFormatArgumentValue *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FFormatArgumentValue *)&this_00->field_0x10;
}

